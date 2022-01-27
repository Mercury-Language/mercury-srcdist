/*
** Automatically generated from `cord.m'
** by the Mercury compiler,
** version rotd-2015-05-05
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
#include "calendar.mih"
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
#include "string.format.mih"
#include "string.parse_runtime.mih"
#include "string.parse_util.mih"
#include "string.to_string.mih"




#line 92 "cord.c"
static const MR_DuFunctorDesc mercury__cord__cord__du_functor_desc_cord_1_0;

#line 95 "cord.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__cord__cord__pti_cord_node_1__pseudo_1;

#line 98 "cord.c"
static const MR_PseudoTypeInfo mercury__cord__cord__field_types_cord_1_1[1];

#line 101 "cord.c"
static const MR_DuFunctorDesc mercury__cord__cord__du_functor_desc_cord_1_1;

#line 104 "cord.c"
static const MR_DuFunctorDescPtr mercury__cord__cord__du_stag_ordered_cord_1_0[1];

#line 107 "cord.c"
static const MR_DuFunctorDescPtr mercury__cord__cord__du_stag_ordered_cord_1_1[1];

#line 110 "cord.c"
static const MR_DuPtagLayout mercury__cord__cord__du_ptag_ordered_cord_1[2];

#line 113 "cord.c"
static const MR_DuFunctorDescPtr mercury__cord__cord__du_name_ordered_cord_1[2];

#line 116 "cord.c"
static const MR_Integer mercury__cord__cord__functor_number_map_cord_1[2];

#line 119 "cord.c"
static const MR_PseudoTypeInfo mercury__cord__cord__field_types_cord_node_1_0[1];

#line 122 "cord.c"
static const MR_DuFunctorDesc mercury__cord__cord__du_functor_desc_cord_node_1_0;

#line 125 "cord.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__cord__list__pti_list_1__pseudo_1;

#line 128 "cord.c"
static const MR_PseudoTypeInfo mercury__cord__cord__field_types_cord_node_1_1[2];

#line 131 "cord.c"
static const MR_DuFunctorDesc mercury__cord__cord__du_functor_desc_cord_node_1_1;

#line 134 "cord.c"
static const MR_PseudoTypeInfo mercury__cord__cord__field_types_cord_node_1_2[2];

#line 137 "cord.c"
static const MR_DuFunctorDesc mercury__cord__cord__du_functor_desc_cord_node_1_2;

#line 140 "cord.c"
static const MR_DuFunctorDescPtr mercury__cord__cord__du_stag_ordered_cord_node_1_0[1];

#line 143 "cord.c"
static const MR_DuFunctorDescPtr mercury__cord__cord__du_stag_ordered_cord_node_1_1[1];

#line 146 "cord.c"
static const MR_DuFunctorDescPtr mercury__cord__cord__du_stag_ordered_cord_node_1_2[1];

#line 149 "cord.c"
static const MR_DuPtagLayout mercury__cord__cord__du_ptag_ordered_cord_node_1[3];

#line 152 "cord.c"
static const MR_DuFunctorDescPtr mercury__cord__cord__du_name_ordered_cord_node_1[3];

#line 155 "cord.c"
static const MR_Integer mercury__cord__cord__functor_number_map_cord_node_1[3];

#line 158 "cord.c"
static MR_bool MR_CALL 
mercury__cord____Unify____cord_1_0_10001(
#line 161 "cord.c"
  MR_Box mercury__cord__wrapper_arg_1,
#line 163 "cord.c"
  MR_Box mercury__cord__wrapper_arg_2,
#line 165 "cord.c"
  MR_Box mercury__cord__wrapper_arg_3);

#line 168 "cord.c"
static void MR_CALL 
mercury__cord____Compare____cord_1_0_10001(
#line 171 "cord.c"
  MR_Box mercury__cord__wrapper_arg_1,
#line 173 "cord.c"
  MR_Box * mercury__cord__wrapper_arg_2,
#line 175 "cord.c"
  MR_Box mercury__cord__wrapper_arg_3,
#line 177 "cord.c"
  MR_Box mercury__cord__wrapper_arg_4);

#line 180 "cord.c"
static MR_bool MR_CALL 
mercury__cord____Unify____cord_node_1_0_10001(
#line 183 "cord.c"
  MR_Box mercury__cord__wrapper_arg_1,
#line 185 "cord.c"
  MR_Box mercury__cord__wrapper_arg_2,
#line 187 "cord.c"
  MR_Box mercury__cord__wrapper_arg_3);

#line 190 "cord.c"
static void MR_CALL 
mercury__cord____Compare____cord_node_1_0_10001(
#line 193 "cord.c"
  MR_Box mercury__cord__wrapper_arg_1,
#line 195 "cord.c"
  MR_Box * mercury__cord__wrapper_arg_2,
#line 197 "cord.c"
  MR_Box mercury__cord__wrapper_arg_3,
#line 199 "cord.c"
  MR_Box mercury__cord__wrapper_arg_4);

#line 133 "list.int"
static void MR_CALL 
mercury__cord__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_50_95_95_104_111_49_50_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_4_p_in__list_0(
#line 133 "list.int"
  MR_Word mercury__cord__HeadVar__2_2,
#line 133 "list.int"
  MR_Integer mercury__cord__HeadVar__3_3,
#line 133 "list.int"
  MR_Integer * mercury__cord__HeadVar__4_4);

#line 661 "cord.m"
static void MR_CALL 
mercury__cord__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_110_111_100_101_95_95_104_111_56_95_95_91_49_44_32_50_44_32_51_93_95_48_5_p_0(
#line 661 "cord.m"
  MR_Word mercury__cord__HeadVar__2_2,
#line 661 "cord.m"
  MR_Word mercury__cord__Cs_3,
#line 661 "cord.m"
  MR_Integer mercury__cord__STATE_VARIABLE_Acc_0_4,
#line 661 "cord.m"
  MR_Integer * mercury__cord__STATE_VARIABLE_Acc_5);

#line 133 "list.int"
static void MR_CALL 
mercury__cord__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_55_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_57_44_32_49_48_44_32_49_49_93_95_48_4_p_in__list_0(
#line 133 "list.int"
  MR_Word mercury__cord__V_27_27,
#line 133 "list.int"
  MR_Word mercury__cord__HeadVar__2_2,
#line 133 "list.int"
  MR_Word mercury__cord__HeadVar__3_3,
#line 133 "list.int"
  MR_Word * mercury__cord__HeadVar__4_4);

#line 133 "list.int"
static void MR_CALL 
mercury__cord__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_57_44_32_49_48_44_32_49_49_93_95_48_4_p_in__list_0(
#line 133 "list.int"
  MR_Word mercury__cord__V_27_27,
#line 133 "list.int"
  MR_Word mercury__cord__HeadVar__2_2,
#line 133 "list.int"
  MR_Word mercury__cord__HeadVar__3_3,
#line 133 "list.int"
  MR_Word * mercury__cord__HeadVar__4_4);

#line 133 "list.int"
static void MR_CALL 
mercury__cord__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_50_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_p_in__list_0(
#line 133 "list.int"
  MR_Word mercury__cord__V_18_18,
#line 133 "list.int"
  MR_Word mercury__cord__HeadVar__2_2,
#line 133 "list.int"
  MR_Box mercury__cord__HeadVar__3_3,
#line 133 "list.int"
  MR_Box * mercury__cord__HeadVar__4_4);

#line 261 "list.int"
static void MR_CALL 
mercury__cord__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_95_104_111_49_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_p_in__list_0(
#line 261 "list.int"
  MR_Word mercury__cord__V_18_18,
#line 261 "list.int"
  MR_Word mercury__cord__HeadVar__2_2,
#line 261 "list.int"
  MR_Box mercury__cord__HeadVar__3_3,
#line 261 "list.int"
  MR_Box * mercury__cord__HeadVar__4_4);

#line 13 "ops.opt"
static MR_Integer MR_CALL 
mercury__cord__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);

#line 455 "cord.m"
static void MR_CALL 
mercury__cord__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_108_105_115_116_95_108_97_115_116_95_95_91_49_93_95_48_4_p_0(
#line 455 "cord.m"
  MR_Box mercury__cord__Prev_1,
#line 455 "cord.m"
  MR_Word mercury__cord__HeadVar__2_2,
#line 455 "cord.m"
  MR_Word * mercury__cord__HeadVar__3_3,
#line 455 "cord.m"
  MR_Box * mercury__cord__HeadVar__4_4);

#line 333 "cord.m"
static MR_Word MR_CALL 
mercury__cord__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_108_105_115_116_95_114_101_118_101_114_115_101_95_50_95_95_91_49_93_95_48_2_f_0(
#line 333 "cord.m"
  MR_Word mercury__cord__HeadVar__1_1,
#line 333 "cord.m"
  MR_Word mercury__cord__HeadVar__2_2);

#line 314 "cord.m"
static MR_Word MR_CALL 
mercury__cord__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_114_101_118_95_108_105_115_116_95_50_95_95_91_49_93_95_48_2_f_0(
#line 314 "cord.m"
  MR_Word mercury__cord__HeadVar__1_1,
#line 314 "cord.m"
  MR_Word mercury__cord__HeadVar__2_2);

#line 292 "cord.m"
static MR_Word MR_CALL 
mercury__cord__list_2_2_f_0(
#line 292 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_T_19,
#line 292 "cord.m"
  MR_Word mercury__cord__HeadVar__1_1,
#line 292 "cord.m"
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



#line 678 "cord.c"
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

#line 693 "cord.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__cord__cord__pti_cord_node_1__pseudo_1 = {
  &mercury__cord__cord__type_ctor_info_cord_node_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 701 "cord.c"
static const MR_PseudoTypeInfo mercury__cord__cord__field_types_cord_1_1[1] = {
  (MR_PseudoTypeInfo) &mercury__cord__cord__pti_cord_node_1__pseudo_1
};

#line 706 "cord.c"
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

#line 721 "cord.c"
static const MR_DuFunctorDescPtr mercury__cord__cord__du_stag_ordered_cord_1_0[1] = {
  &mercury__cord__cord__du_functor_desc_cord_1_0
};

#line 726 "cord.c"
static const MR_DuFunctorDescPtr mercury__cord__cord__du_stag_ordered_cord_1_1[1] = {
  &mercury__cord__cord__du_functor_desc_cord_1_1
};

#line 731 "cord.c"
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

#line 745 "cord.c"
static const MR_DuFunctorDescPtr mercury__cord__cord__du_name_ordered_cord_1[2] = {
  &mercury__cord__cord__du_functor_desc_cord_1_0,
  &mercury__cord__cord__du_functor_desc_cord_1_1
};

#line 751 "cord.c"
static const MR_Integer mercury__cord__cord__functor_number_map_cord_1[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 757 "cord.c"
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

#line 778 "cord.c"
static const MR_PseudoTypeInfo mercury__cord__cord__field_types_cord_node_1_0[1] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1
};

#line 783 "cord.c"
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

#line 798 "cord.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__cord__list__pti_list_1__pseudo_1 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 806 "cord.c"
static const MR_PseudoTypeInfo mercury__cord__cord__field_types_cord_node_1_1[2] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) &mercury__cord__list__pti_list_1__pseudo_1
};

#line 812 "cord.c"
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

#line 827 "cord.c"
static const MR_PseudoTypeInfo mercury__cord__cord__field_types_cord_node_1_2[2] = {
  (MR_PseudoTypeInfo) &mercury__cord__cord__pti_cord_node_1__pseudo_1,
  (MR_PseudoTypeInfo) &mercury__cord__cord__pti_cord_node_1__pseudo_1
};

#line 833 "cord.c"
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

#line 848 "cord.c"
static const MR_DuFunctorDescPtr mercury__cord__cord__du_stag_ordered_cord_node_1_0[1] = {
  &mercury__cord__cord__du_functor_desc_cord_node_1_0
};

#line 853 "cord.c"
static const MR_DuFunctorDescPtr mercury__cord__cord__du_stag_ordered_cord_node_1_1[1] = {
  &mercury__cord__cord__du_functor_desc_cord_node_1_1
};

#line 858 "cord.c"
static const MR_DuFunctorDescPtr mercury__cord__cord__du_stag_ordered_cord_node_1_2[1] = {
  &mercury__cord__cord__du_functor_desc_cord_node_1_2
};

#line 863 "cord.c"
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

#line 882 "cord.c"
static const MR_DuFunctorDescPtr mercury__cord__cord__du_name_ordered_cord_node_1[3] = {
  &mercury__cord__cord__du_functor_desc_cord_node_1_2,
  &mercury__cord__cord__du_functor_desc_cord_node_1_1,
  &mercury__cord__cord__du_functor_desc_cord_node_1_0
};

#line 889 "cord.c"
static const MR_Integer mercury__cord__cord__functor_number_map_cord_node_1[3] = {
  (MR_Integer) 2,
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 896 "cord.c"
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

#line 917 "cord.c"
static MR_bool MR_CALL 
mercury__cord____Unify____cord_1_0_10001(
#line 920 "cord.c"
  MR_Box mercury__cord__wrapper_arg_1,
#line 922 "cord.c"
  MR_Box mercury__cord__wrapper_arg_2,
#line 924 "cord.c"
  MR_Box mercury__cord__wrapper_arg_3)
#line 926 "cord.c"
{
#line 928 "cord.c"
  {
#line 930 "cord.c"
    MR_bool mercury__cord__succeeded;

#line 933 "cord.c"
    {
#line 935 "cord.c"
      mercury__cord__succeeded = mercury__cord____Unify____cord_1_0(((MR_Word) mercury__cord__wrapper_arg_1), ((MR_Word) mercury__cord__wrapper_arg_2), ((MR_Word) mercury__cord__wrapper_arg_3));
    }
#line 938 "cord.c"
    return mercury__cord__succeeded;
#line 940 "cord.c"
  }
#line 942 "cord.c"
}

#line 945 "cord.c"
static void MR_CALL 
mercury__cord____Compare____cord_1_0_10001(
#line 948 "cord.c"
  MR_Box mercury__cord__wrapper_arg_1,
#line 950 "cord.c"
  MR_Box * mercury__cord__wrapper_arg_2,
#line 952 "cord.c"
  MR_Box mercury__cord__wrapper_arg_3,
#line 954 "cord.c"
  MR_Box mercury__cord__wrapper_arg_4)
#line 956 "cord.c"
{
#line 958 "cord.c"
  {
#line 960 "cord.c"
    MR_Word mercury__cord__conv0_HeadVar__1_1;

#line 963 "cord.c"
    {
#line 965 "cord.c"
      mercury__cord____Compare____cord_1_0(((MR_Word) mercury__cord__wrapper_arg_1), &mercury__cord__conv0_HeadVar__1_1, ((MR_Word) mercury__cord__wrapper_arg_3), ((MR_Word) mercury__cord__wrapper_arg_4));
    }
#line 968 "cord.c"
    *mercury__cord__wrapper_arg_2 = ((MR_Box) (mercury__cord__conv0_HeadVar__1_1));
#line 970 "cord.c"
  }
#line 972 "cord.c"
}

#line 975 "cord.c"
static MR_bool MR_CALL 
mercury__cord____Unify____cord_node_1_0_10001(
#line 978 "cord.c"
  MR_Box mercury__cord__wrapper_arg_1,
#line 980 "cord.c"
  MR_Box mercury__cord__wrapper_arg_2,
#line 982 "cord.c"
  MR_Box mercury__cord__wrapper_arg_3)
#line 984 "cord.c"
{
#line 986 "cord.c"
  {
#line 988 "cord.c"
    MR_bool mercury__cord__succeeded;

#line 991 "cord.c"
    {
#line 993 "cord.c"
      mercury__cord__succeeded = mercury__cord____Unify____cord_node_1_0(((MR_Word) mercury__cord__wrapper_arg_1), ((MR_Word) mercury__cord__wrapper_arg_2), ((MR_Word) mercury__cord__wrapper_arg_3));
    }
#line 996 "cord.c"
    return mercury__cord__succeeded;
#line 998 "cord.c"
  }
#line 1000 "cord.c"
}

#line 1003 "cord.c"
static void MR_CALL 
mercury__cord____Compare____cord_node_1_0_10001(
#line 1006 "cord.c"
  MR_Box mercury__cord__wrapper_arg_1,
#line 1008 "cord.c"
  MR_Box * mercury__cord__wrapper_arg_2,
#line 1010 "cord.c"
  MR_Box mercury__cord__wrapper_arg_3,
#line 1012 "cord.c"
  MR_Box mercury__cord__wrapper_arg_4)
#line 1014 "cord.c"
{
#line 1016 "cord.c"
  {
#line 1018 "cord.c"
    MR_Word mercury__cord__conv0_HeadVar__1_1;

#line 1021 "cord.c"
    {
#line 1023 "cord.c"
      mercury__cord____Compare____cord_node_1_0(((MR_Word) mercury__cord__wrapper_arg_1), &mercury__cord__conv0_HeadVar__1_1, ((MR_Word) mercury__cord__wrapper_arg_3), ((MR_Word) mercury__cord__wrapper_arg_4));
    }
#line 1026 "cord.c"
    *mercury__cord__wrapper_arg_2 = ((MR_Box) (mercury__cord__conv0_HeadVar__1_1));
#line 1028 "cord.c"
  }
#line 1030 "cord.c"
}

#line 133 "list.int"
static void MR_CALL 
mercury__cord__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_50_95_95_104_111_49_50_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_4_p_in__list_0(
#line 133 "list.int"
  MR_Word mercury__cord__HeadVar__2_2,
#line 133 "list.int"
  MR_Integer mercury__cord__HeadVar__3_3,
#line 133 "list.int"
  MR_Integer * mercury__cord__HeadVar__4_4)
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
        MR_bool mercury__cord__succeeded;

#line 380 "list.opt"
        if ((mercury__cord__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 380 "list.opt"
          *mercury__cord__HeadVar__4_4 = mercury__cord__HeadVar__3_3;
#line 380 "list.opt"
        else
#line 382 "list.opt"
          {
#line 382 "list.opt"
            MR_Word mercury__cord__T_11_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 1)));
#line 382 "list.opt"
            MR_Integer mercury__cord__STATE_VARIABLE_A_15_15_13 = (mercury__cord__HeadVar__3_3 + (MR_Integer) 1);
#line 382 "list.opt"
            MR_Box mercury__cord__H_10_9 = (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 0));

#line 384 "list.opt"
            /* direct tailcall eliminated */
#line 384 "list.opt"
            {
#line 384 "list.opt"
              MR_Word mercury__cord__HeadVar__2__tmp_copy_2 = mercury__cord__T_11_10;
#line 384 "list.opt"
              MR_Integer mercury__cord__HeadVar__3__tmp_copy_3 = mercury__cord__STATE_VARIABLE_A_15_15_13;

#line 384 "list.opt"
              mercury__cord__HeadVar__3_3 = mercury__cord__HeadVar__3__tmp_copy_3;
#line 384 "list.opt"
              mercury__cord__HeadVar__2_2 = mercury__cord__HeadVar__2__tmp_copy_2;
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

#line 661 "cord.m"
static void MR_CALL 
mercury__cord__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_110_111_100_101_95_95_104_111_56_95_95_91_49_44_32_50_44_32_51_93_95_48_5_p_0(
#line 661 "cord.m"
  MR_Word mercury__cord__HeadVar__2_2,
#line 661 "cord.m"
  MR_Word mercury__cord__Cs_3,
#line 661 "cord.m"
  MR_Integer mercury__cord__STATE_VARIABLE_Acc_0_4,
#line 661 "cord.m"
  MR_Integer * mercury__cord__STATE_VARIABLE_Acc_5)
#line 661 "cord.m"
{
#line 663 "cord.m"
  while (MR_TRUE)
#line 663 "cord.m"
    {
#line 663 "cord.m"
      /* tailcall optimized into a loop */
#line 663 "cord.m"
      {
#line 663 "cord.m"
        MR_bool mercury__cord__succeeded;

#line 663 "cord.m"
        if (((MR_tag((MR_Word) mercury__cord__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 677 "cord.m"
          {
#line 677 "cord.m"
            MR_Word mercury__cord__A_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__HeadVar__2_2, (MR_Integer) 0)));
#line 677 "cord.m"
            MR_Word mercury__cord__B_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__HeadVar__2_2, (MR_Integer) 1)));
#line 677 "cord.m"
            MR_Word mercury__cord__V_28_28;

#line 678 "cord.m"
            {
#line 678 "cord.m"
              mercury__cord__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 678 "cord.m"
              MR_hl_field(MR_mktag(1), mercury__cord__V_28_28, 0) = ((MR_Box) (mercury__cord__B_23));
#line 678 "cord.m"
              MR_hl_field(MR_mktag(1), mercury__cord__V_28_28, 1) = ((MR_Box) (mercury__cord__Cs_3));
#line 678 "cord.m"
            }
#line 678 "cord.m"
            /* direct tailcall eliminated */
#line 678 "cord.m"
            {
#line 678 "cord.m"
              MR_Word mercury__cord__HeadVar__2__tmp_copy_2 = mercury__cord__A_22;
#line 678 "cord.m"
              MR_Word mercury__cord__Cs__tmp_copy_3 = mercury__cord__V_28_28;

#line 678 "cord.m"
              mercury__cord__Cs_3 = mercury__cord__Cs__tmp_copy_3;
#line 678 "cord.m"
              mercury__cord__HeadVar__2_2 = mercury__cord__HeadVar__2__tmp_copy_2;
#line 678 "cord.m"
            }
#line 678 "cord.m"
            continue;
#line 677 "cord.m"
          }
#line 663 "cord.m"
        else
#line 663 "cord.m"
          if (((MR_tag((MR_Word) mercury__cord__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 663 "cord.m"
            {
#line 663 "cord.m"
              MR_Box mercury__cord__H_11 = (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 0));
#line 663 "cord.m"
              MR_Word mercury__cord__T_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 1)));
#line 663 "cord.m"
              MR_Word mercury__cord__V_18_18;
#line 663 "cord.m"
              MR_Integer mercury__cord__STATE_VARIABLE_Acc_19_19;

#line 669 "cord.m"
              {
#line 669 "cord.m"
                mercury__cord__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 669 "cord.m"
                MR_hl_field(MR_mktag(1), mercury__cord__V_18_18, 0) = mercury__cord__H_11;
#line 669 "cord.m"
                MR_hl_field(MR_mktag(1), mercury__cord__V_18_18, 1) = ((MR_Box) (mercury__cord__T_12));
#line 669 "cord.m"
              }
#line 395 "list.opt"
              {
#line 395 "list.opt"
                mercury__cord__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_50_95_95_104_111_49_50_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_4_p_in__list_0(mercury__cord__V_18_18, mercury__cord__STATE_VARIABLE_Acc_0_4, &mercury__cord__STATE_VARIABLE_Acc_19_19);
              }
#line 673 "cord.m"
              if ((mercury__cord__Cs_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 672 "cord.m"
                *mercury__cord__STATE_VARIABLE_Acc_5 = mercury__cord__STATE_VARIABLE_Acc_19_19;
#line 673 "cord.m"
              else
#line 674 "cord.m"
                {
#line 674 "cord.m"
                  MR_Word mercury__cord__Y_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__Cs_3, (MR_Integer) 0)));
#line 674 "cord.m"
                  MR_Word mercury__cord__Ys_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__Cs_3, (MR_Integer) 1)));

#line 675 "cord.m"
                  /* direct tailcall eliminated */
#line 675 "cord.m"
                  {
#line 675 "cord.m"
                    MR_Word mercury__cord__HeadVar__2__tmp_copy_2 = mercury__cord__Y_13;
#line 675 "cord.m"
                    MR_Word mercury__cord__Cs__tmp_copy_3 = mercury__cord__Ys_14;
#line 675 "cord.m"
                    MR_Integer mercury__cord__STATE_VARIABLE_Acc_0__tmp_copy_4 = mercury__cord__STATE_VARIABLE_Acc_19_19;

#line 675 "cord.m"
                    mercury__cord__STATE_VARIABLE_Acc_0_4 = mercury__cord__STATE_VARIABLE_Acc_0__tmp_copy_4;
#line 675 "cord.m"
                    mercury__cord__Cs_3 = mercury__cord__Cs__tmp_copy_3;
#line 675 "cord.m"
                    mercury__cord__HeadVar__2_2 = mercury__cord__HeadVar__2__tmp_copy_2;
#line 675 "cord.m"
                  }
#line 675 "cord.m"
                  continue;
#line 674 "cord.m"
                }
#line 663 "cord.m"
            }
#line 663 "cord.m"
          else
#line 663 "cord.m"
            {
#line 663 "cord.m"
              MR_Integer mercury__cord__STATE_VARIABLE_Acc_19_43 = (mercury__cord__STATE_VARIABLE_Acc_0_4 + (MR_Integer) 1);

#line 673 "cord.m"
              if ((mercury__cord__Cs_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 672 "cord.m"
                *mercury__cord__STATE_VARIABLE_Acc_5 = mercury__cord__STATE_VARIABLE_Acc_19_43;
#line 673 "cord.m"
              else
#line 674 "cord.m"
                {
#line 674 "cord.m"
                  MR_Word mercury__cord__Y_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__Cs_3, (MR_Integer) 0)));
#line 674 "cord.m"
                  MR_Word mercury__cord__Ys_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__Cs_3, (MR_Integer) 1)));

#line 675 "cord.m"
                  /* direct tailcall eliminated */
#line 675 "cord.m"
                  {
#line 675 "cord.m"
                    MR_Word mercury__cord__HeadVar__2__tmp_copy_2 = mercury__cord__Y_32;
#line 675 "cord.m"
                    MR_Word mercury__cord__Cs__tmp_copy_3 = mercury__cord__Ys_33;
#line 675 "cord.m"
                    MR_Integer mercury__cord__STATE_VARIABLE_Acc_0__tmp_copy_4 = mercury__cord__STATE_VARIABLE_Acc_19_43;

#line 675 "cord.m"
                    mercury__cord__STATE_VARIABLE_Acc_0_4 = mercury__cord__STATE_VARIABLE_Acc_0__tmp_copy_4;
#line 675 "cord.m"
                    mercury__cord__Cs_3 = mercury__cord__Cs__tmp_copy_3;
#line 675 "cord.m"
                    mercury__cord__HeadVar__2_2 = mercury__cord__HeadVar__2__tmp_copy_2;
#line 675 "cord.m"
                  }
#line 675 "cord.m"
                  continue;
#line 674 "cord.m"
                }
#line 663 "cord.m"
            }
#line 663 "cord.m"
      }
#line 663 "cord.m"
      break;
#line 663 "cord.m"
    }
#line 661 "cord.m"
}

#line 133 "list.int"
static void MR_CALL 
mercury__cord__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_55_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_57_44_32_49_48_44_32_49_49_93_95_48_4_p_in__list_0(
#line 133 "list.int"
  MR_Word mercury__cord__V_27_27,
#line 133 "list.int"
  MR_Word mercury__cord__HeadVar__2_2,
#line 133 "list.int"
  MR_Word mercury__cord__HeadVar__3_3,
#line 133 "list.int"
  MR_Word * mercury__cord__HeadVar__4_4)
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
        MR_bool mercury__cord__succeeded;

#line 380 "list.opt"
        if ((mercury__cord__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 380 "list.opt"
          *mercury__cord__HeadVar__4_4 = mercury__cord__HeadVar__3_3;
#line 380 "list.opt"
        else
#line 382 "list.opt"
          {
#line 382 "list.opt"
            MR_Word mercury__cord__H_10_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 0)));
#line 382 "list.opt"
            MR_Word mercury__cord__T_11_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 1)));
#line 382 "list.opt"
            MR_Word mercury__cord__STATE_VARIABLE_A_15_15_13;

#line 391 "cord.m"
            if ((mercury__cord__H_10_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 391 "cord.m"
              mercury__cord__STATE_VARIABLE_A_15_15_13 = mercury__cord__HeadVar__3_3;
#line 391 "cord.m"
            else
#line 392 "cord.m"
              {
#line 392 "cord.m"
                MR_Word mercury__cord__N_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__H_10_9, (MR_Integer) 0)));
#line 392 "cord.m"
                MR_Word mercury__cord__V_52_52;
#line 392 "cord.m"
                MR_Word mercury__cord__V_53_53 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 392 "cord.m"
                {
#line 392 "cord.m"
                  mercury__cord__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 392 "cord.m"
                  MR_hl_field(MR_mktag(1), mercury__cord__V_52_52, 0) = ((MR_Box) (mercury__cord__N_50));
#line 392 "cord.m"
                  MR_hl_field(MR_mktag(1), mercury__cord__V_52_52, 1) = ((MR_Box) (mercury__cord__V_53_53));
#line 392 "cord.m"
                }
#line 392 "cord.m"
                {
#line 392 "cord.m"
                  mercury__cord__STATE_VARIABLE_A_15_15_13 = mercury__cord__list_2_2_f_0(mercury__cord__V_27_27, mercury__cord__V_52_52, mercury__cord__HeadVar__3_3);
                }
#line 392 "cord.m"
              }
#line 384 "list.opt"
            /* direct tailcall eliminated */
#line 384 "list.opt"
            {
#line 384 "list.opt"
              MR_Word mercury__cord__HeadVar__2__tmp_copy_2 = mercury__cord__T_11_10;
#line 384 "list.opt"
              MR_Word mercury__cord__HeadVar__3__tmp_copy_3 = mercury__cord__STATE_VARIABLE_A_15_15_13;

#line 384 "list.opt"
              mercury__cord__HeadVar__3_3 = mercury__cord__HeadVar__3__tmp_copy_3;
#line 384 "list.opt"
              mercury__cord__HeadVar__2_2 = mercury__cord__HeadVar__2__tmp_copy_2;
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

#line 133 "list.int"
static void MR_CALL 
mercury__cord__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_57_44_32_49_48_44_32_49_49_93_95_48_4_p_in__list_0(
#line 133 "list.int"
  MR_Word mercury__cord__V_27_27,
#line 133 "list.int"
  MR_Word mercury__cord__HeadVar__2_2,
#line 133 "list.int"
  MR_Word mercury__cord__HeadVar__3_3,
#line 133 "list.int"
  MR_Word * mercury__cord__HeadVar__4_4)
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
        MR_bool mercury__cord__succeeded;

#line 380 "list.opt"
        if ((mercury__cord__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 380 "list.opt"
          *mercury__cord__HeadVar__4_4 = mercury__cord__HeadVar__3_3;
#line 380 "list.opt"
        else
#line 382 "list.opt"
          {
#line 382 "list.opt"
            MR_Word mercury__cord__H_10_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 0)));
#line 382 "list.opt"
            MR_Word mercury__cord__T_11_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 1)));
#line 382 "list.opt"
            MR_Word mercury__cord__STATE_VARIABLE_A_15_15_13;

#line 390 "list.opt"
            {
#line 390 "list.opt"
              mercury__cord__STATE_VARIABLE_A_15_15_13 = mercury__cord__f_43_43_2_f_0(mercury__cord__V_27_27, mercury__cord__H_10_9, mercury__cord__HeadVar__3_3);
            }
#line 384 "list.opt"
            /* direct tailcall eliminated */
#line 384 "list.opt"
            {
#line 384 "list.opt"
              MR_Word mercury__cord__HeadVar__2__tmp_copy_2 = mercury__cord__T_11_10;
#line 384 "list.opt"
              MR_Word mercury__cord__HeadVar__3__tmp_copy_3 = mercury__cord__STATE_VARIABLE_A_15_15_13;

#line 384 "list.opt"
              mercury__cord__HeadVar__3_3 = mercury__cord__HeadVar__3__tmp_copy_3;
#line 384 "list.opt"
              mercury__cord__HeadVar__2_2 = mercury__cord__HeadVar__2__tmp_copy_2;
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

#line 133 "list.int"
static void MR_CALL 
mercury__cord__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_50_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_p_in__list_0(
#line 133 "list.int"
  MR_Word mercury__cord__V_18_18,
#line 133 "list.int"
  MR_Word mercury__cord__HeadVar__2_2,
#line 133 "list.int"
  MR_Box mercury__cord__HeadVar__3_3,
#line 133 "list.int"
  MR_Box * mercury__cord__HeadVar__4_4)
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
        MR_bool mercury__cord__succeeded;

#line 380 "list.opt"
        if ((mercury__cord__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 380 "list.opt"
          *mercury__cord__HeadVar__4_4 = mercury__cord__HeadVar__3_3;
#line 380 "list.opt"
        else
#line 382 "list.opt"
          {
#line 382 "list.opt"
            MR_Box mercury__cord__H_10_9 = (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 0));
#line 382 "list.opt"
            MR_Word mercury__cord__T_11_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 1)));
#line 382 "list.opt"
            MR_Box mercury__cord__STATE_VARIABLE_A_15_15_13;
#line 390 "list.opt"
            MR_Box MR_CALL (* mercury__cord__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__cord__V_18_18, (MR_Integer) 1)));

#line 390 "list.opt"
            {
#line 390 "list.opt"
              mercury__cord__STATE_VARIABLE_A_15_15_13 = mercury__cord__func_0(((MR_Box) mercury__cord__V_18_18), mercury__cord__H_10_9, mercury__cord__HeadVar__3_3);
            }
#line 384 "list.opt"
            /* direct tailcall eliminated */
#line 384 "list.opt"
            {
#line 384 "list.opt"
              MR_Word mercury__cord__HeadVar__2__tmp_copy_2 = mercury__cord__T_11_10;
#line 384 "list.opt"
              MR_Box mercury__cord__HeadVar__3__tmp_copy_3 = mercury__cord__STATE_VARIABLE_A_15_15_13;

#line 384 "list.opt"
              mercury__cord__HeadVar__3_3 = mercury__cord__HeadVar__3__tmp_copy_3;
#line 384 "list.opt"
              mercury__cord__HeadVar__2_2 = mercury__cord__HeadVar__2__tmp_copy_2;
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

#line 261 "list.int"
static void MR_CALL 
mercury__cord__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_95_104_111_49_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_p_in__list_0(
#line 261 "list.int"
  MR_Word mercury__cord__V_18_18,
#line 261 "list.int"
  MR_Word mercury__cord__HeadVar__2_2,
#line 261 "list.int"
  MR_Box mercury__cord__HeadVar__3_3,
#line 261 "list.int"
  MR_Box * mercury__cord__HeadVar__4_4)
#line 261 "list.int"
{
#line 436 "list.opt"
  {
#line 436 "list.opt"
    MR_bool mercury__cord__succeeded;

#line 436 "list.opt"
    if ((mercury__cord__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 436 "list.opt"
      *mercury__cord__HeadVar__4_4 = mercury__cord__HeadVar__3_3;
#line 436 "list.opt"
    else
#line 438 "list.opt"
      {
#line 438 "list.opt"
        MR_Box mercury__cord__H_10_9 = (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 0));
#line 438 "list.opt"
        MR_Word mercury__cord__T_11_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 1)));
#line 438 "list.opt"
        MR_Box mercury__cord__STATE_VARIABLE_A_15_15_13;
#line 446 "list.opt"
        MR_Box MR_CALL (* mercury__cord__func_0)(MR_Box, MR_Box, MR_Box);

#line 439 "list.opt"
        {
#line 439 "list.opt"
          mercury__cord__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_95_104_111_49_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_p_in__list_0(mercury__cord__V_18_18, mercury__cord__T_11_10, mercury__cord__HeadVar__3_3, &mercury__cord__STATE_VARIABLE_A_15_15_13);
        }
#line 446 "list.opt"
        mercury__cord__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__cord__V_18_18, (MR_Integer) 1)));
#line 446 "list.opt"
        {
#line 446 "list.opt"
          *mercury__cord__HeadVar__4_4 = mercury__cord__func_0(((MR_Box) mercury__cord__V_18_18), mercury__cord__H_10_9, mercury__cord__STATE_VARIABLE_A_15_15_13);
        }
#line 438 "list.opt"
      }
#line 436 "list.opt"
  }
#line 261 "list.int"
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

#line 455 "cord.m"
static void MR_CALL 
mercury__cord__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_108_105_115_116_95_108_97_115_116_95_95_91_49_93_95_48_4_p_0(
#line 455 "cord.m"
  MR_Box mercury__cord__Prev_1,
#line 455 "cord.m"
  MR_Word mercury__cord__HeadVar__2_2,
#line 455 "cord.m"
  MR_Word * mercury__cord__HeadVar__3_3,
#line 455 "cord.m"
  MR_Box * mercury__cord__HeadVar__4_4)
#line 455 "cord.m"
{
#line 457 "cord.m"
  {
#line 457 "cord.m"
    MR_bool mercury__cord__succeeded;

#line 457 "cord.m"
    if ((mercury__cord__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 457 "cord.m"
      {
#line 457 "cord.m"
        *mercury__cord__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 457 "cord.m"
        *mercury__cord__HeadVar__4_4 = mercury__cord__Prev_1;
#line 457 "cord.m"
      }
#line 457 "cord.m"
    else
#line 458 "cord.m"
      {
#line 458 "cord.m"
        MR_Box mercury__cord__H_7 = (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 0));
#line 458 "cord.m"
        MR_Word mercury__cord__T_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 1)));
#line 458 "cord.m"
        MR_Word mercury__cord__AllButLast0_11;

#line 459 "cord.m"
        {
#line 459 "cord.m"
          mercury__cord__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_108_105_115_116_95_108_97_115_116_95_95_91_49_93_95_48_4_p_0(mercury__cord__H_7, mercury__cord__T_8, &mercury__cord__AllButLast0_11, mercury__cord__HeadVar__4_4);
        }
#line 460 "cord.m"
        {
#line 460 "cord.m"
          MR_Word base;
#line 460 "cord.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 460 "cord.m"
          *mercury__cord__HeadVar__3_3 = base;
#line 460 "cord.m"
          MR_hl_field(MR_mktag(1), base, 0) = mercury__cord__Prev_1;
#line 460 "cord.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__cord__AllButLast0_11));
#line 460 "cord.m"
        }
#line 458 "cord.m"
      }
#line 457 "cord.m"
  }
#line 455 "cord.m"
}

#line 333 "cord.m"
static MR_Word MR_CALL 
mercury__cord__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_108_105_115_116_95_114_101_118_101_114_115_101_95_50_95_95_91_49_93_95_48_2_f_0(
#line 333 "cord.m"
  MR_Word mercury__cord__HeadVar__1_1,
#line 333 "cord.m"
  MR_Word mercury__cord__HeadVar__2_2)
#line 333 "cord.m"
{
#line 335 "cord.m"
  while (MR_TRUE)
#line 335 "cord.m"
    {
#line 335 "cord.m"
      /* tailcall optimized into a loop */
#line 335 "cord.m"
      {
#line 335 "cord.m"
        MR_bool mercury__cord__succeeded;
#line 335 "cord.m"
        MR_Word mercury__cord__HeadVar__3_3;

#line 335 "cord.m"
        if ((mercury__cord__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 335 "cord.m"
          mercury__cord__HeadVar__3_3 = mercury__cord__HeadVar__2_2;
#line 335 "cord.m"
        else
#line 336 "cord.m"
          {
#line 336 "cord.m"
            MR_Box mercury__cord__X_5 = (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__1_1, (MR_Integer) 0));
#line 336 "cord.m"
            MR_Word mercury__cord__Xs_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__1_1, (MR_Integer) 1)));
#line 336 "cord.m"
            MR_Word mercury__cord__V_8_8;

#line 337 "cord.m"
            {
#line 337 "cord.m"
              mercury__cord__V_8_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 337 "cord.m"
              MR_hl_field(MR_mktag(1), mercury__cord__V_8_8, 0) = mercury__cord__X_5;
#line 337 "cord.m"
              MR_hl_field(MR_mktag(1), mercury__cord__V_8_8, 1) = ((MR_Box) (mercury__cord__HeadVar__2_2));
#line 337 "cord.m"
            }
#line 337 "cord.m"
            /* direct tailcall eliminated */
#line 337 "cord.m"
            {
#line 337 "cord.m"
              MR_Word mercury__cord__HeadVar__1__tmp_copy_1 = mercury__cord__Xs_6;
#line 337 "cord.m"
              MR_Word mercury__cord__HeadVar__2__tmp_copy_2 = mercury__cord__V_8_8;

#line 337 "cord.m"
              mercury__cord__HeadVar__2_2 = mercury__cord__HeadVar__2__tmp_copy_2;
#line 337 "cord.m"
              mercury__cord__HeadVar__1_1 = mercury__cord__HeadVar__1__tmp_copy_1;
#line 337 "cord.m"
            }
#line 337 "cord.m"
            continue;
#line 336 "cord.m"
          }
#line 335 "cord.m"
        return mercury__cord__HeadVar__3_3;
#line 335 "cord.m"
      }
#line 335 "cord.m"
      break;
#line 335 "cord.m"
    }
#line 333 "cord.m"
}

#line 314 "cord.m"
static MR_Word MR_CALL 
mercury__cord__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_114_101_118_95_108_105_115_116_95_50_95_95_91_49_93_95_48_2_f_0(
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
        MR_Word mercury__cord__L_3;

#line 316 "cord.m"
        if ((mercury__cord__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 316 "cord.m"
          mercury__cord__L_3 = mercury__cord__HeadVar__2_2;
#line 316 "cord.m"
        else
#line 317 "cord.m"
          {
#line 317 "cord.m"
            MR_Word mercury__cord__N_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__1_1, (MR_Integer) 0)));
#line 317 "cord.m"
            MR_Word mercury__cord__Ns_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__1_1, (MR_Integer) 1)));

#line 321 "cord.m"
            if (((MR_tag((MR_Word) mercury__cord__N_5)) == (MR_mktag((MR_Integer) 2))))
#line 325 "cord.m"
              {
#line 325 "cord.m"
                MR_Word mercury__cord__A_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__N_5, (MR_Integer) 0)));
#line 325 "cord.m"
                MR_Word mercury__cord__B_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__N_5, (MR_Integer) 1)));
#line 325 "cord.m"
                MR_Word mercury__cord__V_14_14;
#line 325 "cord.m"
                MR_Word mercury__cord__V_15_15;

#line 326 "cord.m"
                {
#line 326 "cord.m"
                  mercury__cord__V_15_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 326 "cord.m"
                  MR_hl_field(MR_mktag(1), mercury__cord__V_15_15, 0) = ((MR_Box) (mercury__cord__B_13));
#line 326 "cord.m"
                  MR_hl_field(MR_mktag(1), mercury__cord__V_15_15, 1) = ((MR_Box) (mercury__cord__Ns_6));
#line 326 "cord.m"
                }
#line 326 "cord.m"
                {
#line 326 "cord.m"
                  mercury__cord__V_14_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 326 "cord.m"
                  MR_hl_field(MR_mktag(1), mercury__cord__V_14_14, 0) = ((MR_Box) (mercury__cord__A_12));
#line 326 "cord.m"
                  MR_hl_field(MR_mktag(1), mercury__cord__V_14_14, 1) = ((MR_Box) (mercury__cord__V_15_15));
#line 326 "cord.m"
                }
#line 326 "cord.m"
                /* direct tailcall eliminated */
#line 326 "cord.m"
                {
#line 326 "cord.m"
                  MR_Word mercury__cord__HeadVar__1__tmp_copy_1 = mercury__cord__V_14_14;

#line 326 "cord.m"
                  mercury__cord__HeadVar__1_1 = mercury__cord__HeadVar__1__tmp_copy_1;
#line 326 "cord.m"
                }
#line 326 "cord.m"
                continue;
#line 325 "cord.m"
              }
#line 321 "cord.m"
            else
#line 321 "cord.m"
              if (((MR_tag((MR_Word) mercury__cord__N_5)) == (MR_mktag((MR_Integer) 1))))
#line 322 "cord.m"
                {
#line 322 "cord.m"
                  MR_Box mercury__cord__H_10 = (MR_hl_field(MR_mktag(1), mercury__cord__N_5, (MR_Integer) 0));
#line 322 "cord.m"
                  MR_Word mercury__cord__T_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__N_5, (MR_Integer) 1)));
#line 322 "cord.m"
                  MR_Word mercury__cord__V_16_16;
#line 322 "cord.m"
                  MR_Word mercury__cord__V_17_17;

#line 323 "cord.m"
                  {
#line 323 "cord.m"
                    mercury__cord__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 323 "cord.m"
                    MR_hl_field(MR_mktag(1), mercury__cord__V_17_17, 0) = mercury__cord__H_10;
#line 323 "cord.m"
                    MR_hl_field(MR_mktag(1), mercury__cord__V_17_17, 1) = ((MR_Box) (mercury__cord__HeadVar__2_2));
#line 323 "cord.m"
                  }
#line 323 "cord.m"
                  {
#line 323 "cord.m"
                    mercury__cord__V_16_16 = mercury__cord__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_108_105_115_116_95_114_101_118_101_114_115_101_95_50_95_95_91_49_93_95_48_2_f_0(mercury__cord__T_11, mercury__cord__V_17_17);
                  }
#line 323 "cord.m"
                  /* direct tailcall eliminated */
#line 323 "cord.m"
                  {
#line 323 "cord.m"
                    MR_Word mercury__cord__HeadVar__1__tmp_copy_1 = mercury__cord__Ns_6;
#line 323 "cord.m"
                    MR_Word mercury__cord__HeadVar__2__tmp_copy_2 = mercury__cord__V_16_16;

#line 323 "cord.m"
                    mercury__cord__HeadVar__2_2 = mercury__cord__HeadVar__2__tmp_copy_2;
#line 323 "cord.m"
                    mercury__cord__HeadVar__1_1 = mercury__cord__HeadVar__1__tmp_copy_1;
#line 323 "cord.m"
                  }
#line 323 "cord.m"
                  continue;
#line 322 "cord.m"
                }
#line 321 "cord.m"
              else
#line 319 "cord.m"
                {
#line 319 "cord.m"
                  MR_Box mercury__cord__X_9 = (MR_hl_field(MR_mktag(0), mercury__cord__N_5, (MR_Integer) 0));
#line 319 "cord.m"
                  MR_Word mercury__cord__V_18_18;

#line 320 "cord.m"
                  {
#line 320 "cord.m"
                    mercury__cord__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 320 "cord.m"
                    MR_hl_field(MR_mktag(1), mercury__cord__V_18_18, 0) = mercury__cord__X_9;
#line 320 "cord.m"
                    MR_hl_field(MR_mktag(1), mercury__cord__V_18_18, 1) = ((MR_Box) (mercury__cord__HeadVar__2_2));
#line 320 "cord.m"
                  }
#line 320 "cord.m"
                  /* direct tailcall eliminated */
#line 320 "cord.m"
                  {
#line 320 "cord.m"
                    MR_Word mercury__cord__HeadVar__1__tmp_copy_1 = mercury__cord__Ns_6;
#line 320 "cord.m"
                    MR_Word mercury__cord__HeadVar__2__tmp_copy_2 = mercury__cord__V_18_18;

#line 320 "cord.m"
                    mercury__cord__HeadVar__2_2 = mercury__cord__HeadVar__2__tmp_copy_2;
#line 320 "cord.m"
                    mercury__cord__HeadVar__1_1 = mercury__cord__HeadVar__1__tmp_copy_1;
#line 320 "cord.m"
                  }
#line 320 "cord.m"
                  continue;
#line 319 "cord.m"
                }
#line 317 "cord.m"
          }
#line 316 "cord.m"
        return mercury__cord__L_3;
#line 316 "cord.m"
      }
#line 316 "cord.m"
      break;
#line 316 "cord.m"
    }
#line 314 "cord.m"
}

#line 240 "cord.m"
void MR_CALL 
mercury__cord____Compare____cord_node_1_0(
#line 240 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_T_38,
#line 240 "cord.m"
  MR_Word * mercury__cord__HeadVar__1_1,
#line 240 "cord.m"
  MR_Word mercury__cord__HeadVar__2_2,
#line 240 "cord.m"
  MR_Word mercury__cord__HeadVar__3_3)
#line 240 "cord.m"
{
#line 240 "cord.m"
  while (MR_TRUE)
#line 240 "cord.m"
    {
#line 240 "cord.m"
      /* tailcall optimized into a loop */
#line 240 "cord.m"
      {
#line 240 "cord.m"
        MR_bool mercury__cord__succeeded;
#line 240 "cord.m"
        MR_Integer mercury__cord__CastX_36 = (MR_Integer) mercury__cord__HeadVar__2_2;
#line 240 "cord.m"
        MR_Integer mercury__cord__CastY_37 = (MR_Integer) mercury__cord__HeadVar__3_3;

#line 240 "cord.m"
        mercury__cord__succeeded = (mercury__cord__CastX_36 == mercury__cord__CastY_37);
#line 240 "cord.m"
        if (mercury__cord__succeeded)
#line 1957 "cord.c"
          *mercury__cord__HeadVar__1_1 = (MR_Integer) 0;
#line 240 "cord.m"
        else
#line 240 "cord.m"
          if (((MR_tag((MR_Word) mercury__cord__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 240 "cord.m"
            {
#line 240 "cord.m"
              MR_Word mercury__cord__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__HeadVar__2_2, (MR_Integer) 1)));
#line 240 "cord.m"
              MR_Word mercury__cord__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__HeadVar__2_2, (MR_Integer) 0)));

#line 240 "cord.m"
              if (((MR_tag((MR_Word) mercury__cord__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 240 "cord.m"
                {
#line 240 "cord.m"
                  MR_Word mercury__cord__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__HeadVar__3_3, (MR_Integer) 0)));
#line 240 "cord.m"
                  MR_Word mercury__cord__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__HeadVar__3_3, (MR_Integer) 1)));
#line 240 "cord.m"
                  MR_Word mercury__cord__V_35_35;

#line 240 "cord.m"
                  {
#line 240 "cord.m"
                    mercury__cord____Compare____cord_node_1_0(mercury__cord__TypeInfo_for_T_38, &mercury__cord__V_35_35, mercury__cord__V_46_46, mercury__cord__V_33_33);
                  }
#line 1986 "cord.c"
                  mercury__cord__succeeded = (mercury__cord__V_35_35 == (MR_Integer) 0);
#line 240 "cord.m"
                  mercury__cord__succeeded = !(mercury__cord__succeeded);
#line 240 "cord.m"
                  if (mercury__cord__succeeded)
#line 240 "cord.m"
                    *mercury__cord__HeadVar__1_1 = mercury__cord__V_35_35;
#line 240 "cord.m"
                  else
#line 240 "cord.m"
                    {
#line 240 "cord.m"
                      /* direct tailcall eliminated */
#line 240 "cord.m"
                      {
#line 240 "cord.m"
                        MR_Word mercury__cord__HeadVar__2__tmp_copy_2 = mercury__cord__V_45_45;
#line 240 "cord.m"
                        MR_Word mercury__cord__HeadVar__3__tmp_copy_3 = mercury__cord__V_34_34;

#line 240 "cord.m"
                        mercury__cord__HeadVar__3_3 = mercury__cord__HeadVar__3__tmp_copy_3;
#line 240 "cord.m"
                        mercury__cord__HeadVar__2_2 = mercury__cord__HeadVar__2__tmp_copy_2;
#line 240 "cord.m"
                      }
#line 240 "cord.m"
                      continue;
#line 240 "cord.m"
                    }
#line 240 "cord.m"
                }
#line 240 "cord.m"
              else
#line 240 "cord.m"
                if (((MR_tag((MR_Word) mercury__cord__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 2023 "cord.c"
                  *mercury__cord__HeadVar__1_1 = (MR_Integer) 2;
#line 240 "cord.m"
                else
#line 2027 "cord.c"
                  *mercury__cord__HeadVar__1_1 = (MR_Integer) 2;
#line 240 "cord.m"
            }
#line 240 "cord.m"
          else
#line 240 "cord.m"
            if (((MR_tag((MR_Word) mercury__cord__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 240 "cord.m"
              {
#line 240 "cord.m"
                MR_Word mercury__cord__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 1)));
#line 240 "cord.m"
                MR_Box mercury__cord__V_48_48 = (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 0));

#line 240 "cord.m"
                if (((MR_tag((MR_Word) mercury__cord__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 2044 "cord.c"
                  *mercury__cord__HeadVar__1_1 = (MR_Integer) 1;
#line 240 "cord.m"
                else
#line 240 "cord.m"
                  if (((MR_tag((MR_Word) mercury__cord__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 240 "cord.m"
                    {
#line 240 "cord.m"
                      MR_Box mercury__cord__V_17_17 = (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__3_3, (MR_Integer) 0));
#line 240 "cord.m"
                      MR_Word mercury__cord__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__3_3, (MR_Integer) 1)));
#line 240 "cord.m"
                      MR_Word mercury__cord__V_19_19;

#line 240 "cord.m"
                      {
#line 240 "cord.m"
                        mercury__builtin__compare_3_p_0(mercury__cord__TypeInfo_for_T_38, &mercury__cord__V_19_19, mercury__cord__V_48_48, mercury__cord__V_17_17);
                      }
#line 2064 "cord.c"
                      mercury__cord__succeeded = (mercury__cord__V_19_19 == (MR_Integer) 0);
#line 240 "cord.m"
                      mercury__cord__succeeded = !(mercury__cord__succeeded);
#line 240 "cord.m"
                      if (mercury__cord__succeeded)
#line 240 "cord.m"
                        *mercury__cord__HeadVar__1_1 = mercury__cord__V_19_19;
#line 240 "cord.m"
                      else
#line 240 "cord.m"
                        {
#line 240 "cord.m"
                          mercury__list____Compare____list_1_0(mercury__cord__TypeInfo_for_T_38, mercury__cord__HeadVar__1_1, mercury__cord__V_47_47, mercury__cord__V_18_18);
#line 240 "cord.m"
                          return;
                        }
#line 240 "cord.m"
                    }
#line 240 "cord.m"
                  else
#line 2085 "cord.c"
                    *mercury__cord__HeadVar__1_1 = (MR_Integer) 2;
#line 240 "cord.m"
              }
#line 240 "cord.m"
            else
#line 240 "cord.m"
              {
#line 240 "cord.m"
                MR_Box mercury__cord__V_49_49 = (MR_hl_field(MR_mktag(0), mercury__cord__HeadVar__2_2, (MR_Integer) 0));

#line 240 "cord.m"
                if (((MR_tag((MR_Word) mercury__cord__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 2098 "cord.c"
                  *mercury__cord__HeadVar__1_1 = (MR_Integer) 1;
#line 240 "cord.m"
                else
#line 240 "cord.m"
                  if (((MR_tag((MR_Word) mercury__cord__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 2104 "cord.c"
                    *mercury__cord__HeadVar__1_1 = (MR_Integer) 1;
#line 240 "cord.m"
                  else
#line 240 "cord.m"
                    {
#line 240 "cord.m"
                      MR_Box mercury__cord__V_5_5 = (MR_hl_field(MR_mktag(0), mercury__cord__HeadVar__3_3, (MR_Integer) 0));

#line 240 "cord.m"
                      {
#line 240 "cord.m"
                        mercury__builtin__compare_3_p_0(mercury__cord__TypeInfo_for_T_38, mercury__cord__HeadVar__1_1, mercury__cord__V_49_49, mercury__cord__V_5_5);
#line 240 "cord.m"
                        return;
                      }
#line 240 "cord.m"
                    }
#line 240 "cord.m"
              }
#line 240 "cord.m"
      }
#line 240 "cord.m"
      break;
#line 240 "cord.m"
    }
#line 240 "cord.m"
}

#line 240 "cord.m"
MR_bool MR_CALL 
mercury__cord____Unify____cord_node_1_0(
#line 240 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_T_15,
#line 240 "cord.m"
  MR_Word mercury__cord__HeadVar__1_1,
#line 240 "cord.m"
  MR_Word mercury__cord__HeadVar__2_2)
#line 240 "cord.m"
{
#line 240 "cord.m"
  while (MR_TRUE)
#line 240 "cord.m"
    {
#line 240 "cord.m"
      /* tailcall optimized into a loop */
#line 240 "cord.m"
      {
#line 240 "cord.m"
        MR_bool mercury__cord__succeeded;
#line 240 "cord.m"
        MR_Integer mercury__cord__CastX_13 = (MR_Integer) mercury__cord__HeadVar__1_1;
#line 240 "cord.m"
        MR_Integer mercury__cord__CastY_14 = (MR_Integer) mercury__cord__HeadVar__2_2;

#line 240 "cord.m"
        mercury__cord__succeeded = (mercury__cord__CastX_13 == mercury__cord__CastY_14);
#line 240 "cord.m"
        if (mercury__cord__succeeded)
#line 240 "cord.m"
          mercury__cord__succeeded = MR_TRUE;
#line 240 "cord.m"
        else
#line 240 "cord.m"
          if (((MR_tag((MR_Word) mercury__cord__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 240 "cord.m"
            {
#line 240 "cord.m"
              MR_Word mercury__cord__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__HeadVar__1_1, (MR_Integer) 0)));
#line 240 "cord.m"
              MR_Word mercury__cord__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__HeadVar__1_1, (MR_Integer) 1)));
#line 240 "cord.m"
              MR_Word mercury__cord__V_11_11;
#line 240 "cord.m"
              MR_Word mercury__cord__V_12_12;

#line 240 "cord.m"
              mercury__cord__succeeded = ((MR_tag((MR_Word) mercury__cord__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 240 "cord.m"
              if (mercury__cord__succeeded)
#line 240 "cord.m"
                {
#line 240 "cord.m"
                  mercury__cord__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__HeadVar__2_2, (MR_Integer) 0)));
#line 240 "cord.m"
                  mercury__cord__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__HeadVar__2_2, (MR_Integer) 1)));
#line 2190 "cord.c"
                  {
#line 2192 "cord.c"
                    mercury__cord__succeeded = mercury__cord____Unify____cord_node_1_0(mercury__cord__TypeInfo_for_T_15, mercury__cord__V_9_9, mercury__cord__V_11_11);
                  }
#line 240 "cord.m"
                  if (mercury__cord__succeeded)
#line 2197 "cord.c"
                    {
#line 2199 "cord.c"
                      /* direct tailcall eliminated */
#line 2201 "cord.c"
                      {
#line 2203 "cord.c"
                        MR_Word mercury__cord__HeadVar__1__tmp_copy_1 = mercury__cord__V_10_10;
#line 2205 "cord.c"
                        MR_Word mercury__cord__HeadVar__2__tmp_copy_2 = mercury__cord__V_12_12;

#line 2208 "cord.c"
                        mercury__cord__HeadVar__2_2 = mercury__cord__HeadVar__2__tmp_copy_2;
#line 2210 "cord.c"
                        mercury__cord__HeadVar__1_1 = mercury__cord__HeadVar__1__tmp_copy_1;
#line 2212 "cord.c"
                      }
#line 2214 "cord.c"
                      continue;
#line 2216 "cord.c"
                    }
#line 240 "cord.m"
                }
#line 240 "cord.m"
            }
#line 240 "cord.m"
          else
#line 240 "cord.m"
            if (((MR_tag((MR_Word) mercury__cord__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 240 "cord.m"
              {
#line 240 "cord.m"
                MR_Box mercury__cord__V_5_5 = (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__1_1, (MR_Integer) 0));
#line 240 "cord.m"
                MR_Word mercury__cord__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__1_1, (MR_Integer) 1)));
#line 240 "cord.m"
                MR_Box mercury__cord__V_7_7;
#line 240 "cord.m"
                MR_Word mercury__cord__V_8_8;

#line 240 "cord.m"
                mercury__cord__succeeded = ((MR_tag((MR_Word) mercury__cord__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 240 "cord.m"
                if (mercury__cord__succeeded)
#line 240 "cord.m"
                  {
#line 240 "cord.m"
                    mercury__cord__V_7_7 = (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 0));
#line 240 "cord.m"
                    mercury__cord__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 1)));
#line 2247 "cord.c"
                    {
#line 2249 "cord.c"
                      mercury__cord__succeeded = mercury__builtin__unify_2_p_0(mercury__cord__TypeInfo_for_T_15, mercury__cord__V_5_5, mercury__cord__V_7_7);
                    }
#line 240 "cord.m"
                    if (mercury__cord__succeeded)
#line 2254 "cord.c"
                      {
#line 2256 "cord.c"
                        return mercury__cord__succeeded = mercury__list____Unify____list_1_0(mercury__cord__TypeInfo_for_T_15, mercury__cord__V_6_6, mercury__cord__V_8_8);
                      }
#line 240 "cord.m"
                  }
#line 240 "cord.m"
              }
#line 240 "cord.m"
            else
#line 240 "cord.m"
              {
#line 240 "cord.m"
                MR_Box mercury__cord__V_3_3 = (MR_hl_field(MR_mktag(0), mercury__cord__HeadVar__1_1, (MR_Integer) 0));
#line 240 "cord.m"
                MR_Box mercury__cord__V_4_4;

#line 240 "cord.m"
                mercury__cord__succeeded = ((MR_tag((MR_Word) mercury__cord__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 240 "cord.m"
                if (mercury__cord__succeeded)
#line 240 "cord.m"
                  {
#line 240 "cord.m"
                    mercury__cord__V_4_4 = (MR_hl_field(MR_mktag(0), mercury__cord__HeadVar__2_2, (MR_Integer) 0));
#line 2280 "cord.c"
                    {
#line 2282 "cord.c"
                      return mercury__cord__succeeded = mercury__builtin__unify_2_p_0(mercury__cord__TypeInfo_for_T_15, mercury__cord__V_3_3, mercury__cord__V_4_4);
                    }
#line 240 "cord.m"
                  }
#line 240 "cord.m"
              }
#line 240 "cord.m"
        return mercury__cord__succeeded;
#line 240 "cord.m"
      }
#line 240 "cord.m"
      break;
#line 240 "cord.m"
    }
#line 240 "cord.m"
}

#line 236 "cord.m"
void MR_CALL 
mercury__cord____Compare____cord_1_0(
#line 236 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_T_10,
#line 236 "cord.m"
  MR_Word * mercury__cord__HeadVar__1_1,
#line 236 "cord.m"
  MR_Word mercury__cord__HeadVar__2_2,
#line 236 "cord.m"
  MR_Word mercury__cord__HeadVar__3_3)
#line 236 "cord.m"
{
#line 236 "cord.m"
  {
#line 236 "cord.m"
    MR_bool mercury__cord__succeeded;
#line 236 "cord.m"
    MR_Integer mercury__cord__CastX_8 = (MR_Integer) mercury__cord__HeadVar__2_2;
#line 236 "cord.m"
    MR_Integer mercury__cord__CastY_9 = (MR_Integer) mercury__cord__HeadVar__3_3;

#line 236 "cord.m"
    mercury__cord__succeeded = (mercury__cord__CastX_8 == mercury__cord__CastY_9);
#line 236 "cord.m"
    if (mercury__cord__succeeded)
#line 2326 "cord.c"
      *mercury__cord__HeadVar__1_1 = (MR_Integer) 0;
#line 236 "cord.m"
    else
#line 236 "cord.m"
      if ((mercury__cord__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 236 "cord.m"
        if ((mercury__cord__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 236 "cord.m"
          *mercury__cord__HeadVar__1_1 = (MR_Integer) 0;
#line 236 "cord.m"
        else
#line 2338 "cord.c"
          *mercury__cord__HeadVar__1_1 = (MR_Integer) 1;
#line 236 "cord.m"
      else
#line 236 "cord.m"
        {
#line 236 "cord.m"
          MR_Word mercury__cord__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 0)));

#line 236 "cord.m"
          if ((mercury__cord__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2349 "cord.c"
            *mercury__cord__HeadVar__1_1 = (MR_Integer) 2;
#line 236 "cord.m"
          else
#line 236 "cord.m"
            {
#line 236 "cord.m"
              MR_Word mercury__cord__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__3_3, (MR_Integer) 0)));

#line 236 "cord.m"
              {
#line 236 "cord.m"
                mercury__cord____Compare____cord_node_1_0(mercury__cord__TypeInfo_for_T_10, mercury__cord__HeadVar__1_1, mercury__cord__V_13_13, mercury__cord__V_7_7);
#line 236 "cord.m"
                return;
              }
#line 236 "cord.m"
            }
#line 236 "cord.m"
        }
#line 236 "cord.m"
  }
#line 236 "cord.m"
}

#line 236 "cord.m"
MR_bool MR_CALL 
mercury__cord____Unify____cord_1_0(
#line 236 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_T_9,
#line 236 "cord.m"
  MR_Word mercury__cord__HeadVar__1_1,
#line 236 "cord.m"
  MR_Word mercury__cord__HeadVar__2_2)
#line 236 "cord.m"
{
#line 236 "cord.m"
  {
#line 236 "cord.m"
    MR_bool mercury__cord__succeeded;
#line 236 "cord.m"
    MR_Integer mercury__cord__CastX_7 = (MR_Integer) mercury__cord__HeadVar__1_1;
#line 236 "cord.m"
    MR_Integer mercury__cord__CastY_8 = (MR_Integer) mercury__cord__HeadVar__2_2;

#line 236 "cord.m"
    mercury__cord__succeeded = (mercury__cord__CastX_7 == mercury__cord__CastY_8);
#line 236 "cord.m"
    if (mercury__cord__succeeded)
#line 236 "cord.m"
      mercury__cord__succeeded = MR_TRUE;
#line 236 "cord.m"
    else
#line 236 "cord.m"
      if ((mercury__cord__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 236 "cord.m"
        {
#line 236 "cord.m"
          MR_Integer mercury__cord__CastX_3 = (MR_Integer) mercury__cord__HeadVar__1_1;
#line 236 "cord.m"
          MR_Integer mercury__cord__CastY_4 = (MR_Integer) mercury__cord__HeadVar__2_2;

#line 236 "cord.m"
          mercury__cord__succeeded = (mercury__cord__CastY_4 == mercury__cord__CastX_3);
#line 236 "cord.m"
        }
#line 236 "cord.m"
      else
#line 236 "cord.m"
        {
#line 236 "cord.m"
          MR_Word mercury__cord__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__1_1, (MR_Integer) 0)));
#line 236 "cord.m"
          MR_Word mercury__cord__V_6_6;

#line 236 "cord.m"
          mercury__cord__succeeded = ((MR_tag((MR_Word) mercury__cord__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 236 "cord.m"
          if (mercury__cord__succeeded)
#line 236 "cord.m"
            {
#line 236 "cord.m"
              mercury__cord__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 0)));
#line 2432 "cord.c"
              {
#line 2434 "cord.c"
                return mercury__cord__succeeded = mercury__cord____Unify____cord_node_1_0(mercury__cord__TypeInfo_for_T_9, mercury__cord__V_5_5, mercury__cord__V_6_6);
              }
#line 236 "cord.m"
            }
#line 236 "cord.m"
        }
#line 236 "cord.m"
    return mercury__cord__succeeded;
#line 236 "cord.m"
  }
#line 236 "cord.m"
}

#line 826 "cord.m"
void MR_CALL 
mercury__cord__map_foldl3_node_9_p_0(
#line 826 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_A_65,
#line 826 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_B_66,
#line 826 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_C_67,
#line 826 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_D_68,
#line 826 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_E_69,
#line 826 "cord.m"
  MR_Word mercury__cord__P_1,
#line 826 "cord.m"
  MR_Word mercury__cord__HeadVar__2_2,
#line 826 "cord.m"
  MR_Word * mercury__cord__HeadVar__3_3,
#line 826 "cord.m"
  MR_Box mercury__cord__STATE_VARIABLE_A_0_4,
#line 826 "cord.m"
  MR_Box * mercury__cord__STATE_VARIABLE_A_5,
#line 826 "cord.m"
  MR_Box mercury__cord__STATE_VARIABLE_B_0_6,
#line 826 "cord.m"
  MR_Box * mercury__cord__STATE_VARIABLE_B_7,
#line 826 "cord.m"
  MR_Box mercury__cord__STATE_VARIABLE_C_0_8,
#line 826 "cord.m"
  MR_Box * mercury__cord__STATE_VARIABLE_C_9)
#line 826 "cord.m"
{
#line 831 "cord.m"
  {
#line 831 "cord.m"
    MR_bool mercury__cord__succeeded;

#line 831 "cord.m"
    if (((MR_tag((MR_Word) mercury__cord__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 836 "cord.m"
      {
#line 836 "cord.m"
        MR_Word mercury__cord__XA_46 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__HeadVar__2_2, (MR_Integer) 0)));
#line 836 "cord.m"
        MR_Word mercury__cord__XB_47 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__HeadVar__2_2, (MR_Integer) 1)));
#line 836 "cord.m"
        MR_Word mercury__cord__YA_48;
#line 836 "cord.m"
        MR_Word mercury__cord__YB_49;
#line 836 "cord.m"
        MR_Box mercury__cord__STATE_VARIABLE_A_59_59;
#line 836 "cord.m"
        MR_Box mercury__cord__STATE_VARIABLE_B_60_60;
#line 836 "cord.m"
        MR_Box mercury__cord__STATE_VARIABLE_C_61_61;

#line 837 "cord.m"
        {
#line 837 "cord.m"
          mercury__cord__map_foldl3_node_9_p_0(mercury__cord__TypeInfo_for_A_65, mercury__cord__TypeInfo_for_B_66, mercury__cord__TypeInfo_for_C_67, mercury__cord__TypeInfo_for_D_68, mercury__cord__TypeInfo_for_E_69, mercury__cord__P_1, mercury__cord__XA_46, &mercury__cord__YA_48, mercury__cord__STATE_VARIABLE_A_0_4, &mercury__cord__STATE_VARIABLE_A_59_59, mercury__cord__STATE_VARIABLE_B_0_6, &mercury__cord__STATE_VARIABLE_B_60_60, mercury__cord__STATE_VARIABLE_C_0_8, &mercury__cord__STATE_VARIABLE_C_61_61);
        }
#line 838 "cord.m"
        {
#line 838 "cord.m"
          mercury__cord__map_foldl3_node_9_p_0(mercury__cord__TypeInfo_for_A_65, mercury__cord__TypeInfo_for_B_66, mercury__cord__TypeInfo_for_C_67, mercury__cord__TypeInfo_for_D_68, mercury__cord__TypeInfo_for_E_69, mercury__cord__P_1, mercury__cord__XB_47, &mercury__cord__YB_49, mercury__cord__STATE_VARIABLE_A_59_59, mercury__cord__STATE_VARIABLE_A_5, mercury__cord__STATE_VARIABLE_B_60_60, mercury__cord__STATE_VARIABLE_B_7, mercury__cord__STATE_VARIABLE_C_61_61, mercury__cord__STATE_VARIABLE_C_9);
        }
#line 836 "cord.m"
        {
#line 836 "cord.m"
          MR_Word base;
#line 836 "cord.m"
          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 836 "cord.m"
          *mercury__cord__HeadVar__3_3 = base;
#line 836 "cord.m"
          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (mercury__cord__YA_48));
#line 836 "cord.m"
          MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (mercury__cord__YB_49));
#line 836 "cord.m"
        }
#line 836 "cord.m"
      }
#line 831 "cord.m"
    else
#line 831 "cord.m"
      if (((MR_tag((MR_Word) mercury__cord__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 833 "cord.m"
        {
#line 833 "cord.m"
          MR_Box mercury__cord__XH_26 = (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 0));
#line 833 "cord.m"
          MR_Word mercury__cord__XT_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 1)));
#line 833 "cord.m"
          MR_Box mercury__cord__YH_28;
#line 833 "cord.m"
          MR_Word mercury__cord__YT_29;
#line 833 "cord.m"
          MR_Box mercury__cord__STATE_VARIABLE_A_39_39;
#line 833 "cord.m"
          MR_Box mercury__cord__STATE_VARIABLE_B_40_40;
#line 833 "cord.m"
          MR_Box mercury__cord__STATE_VARIABLE_C_41_41;
#line 834 "cord.m"
          void MR_CALL (* mercury__cord__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__cord__P_1, (MR_Integer) 1)));

#line 834 "cord.m"
          {
#line 834 "cord.m"
            mercury__cord__func_0(((MR_Box) mercury__cord__P_1), mercury__cord__XH_26, &mercury__cord__YH_28, mercury__cord__STATE_VARIABLE_A_0_4, &mercury__cord__STATE_VARIABLE_A_39_39, mercury__cord__STATE_VARIABLE_B_0_6, &mercury__cord__STATE_VARIABLE_B_40_40, mercury__cord__STATE_VARIABLE_C_0_8, &mercury__cord__STATE_VARIABLE_C_41_41);
          }
#line 835 "cord.m"
          {
#line 835 "cord.m"
            mercury__list__map_foldl3_9_p_1(mercury__cord__TypeInfo_for_A_65, mercury__cord__TypeInfo_for_B_66, mercury__cord__TypeInfo_for_C_67, mercury__cord__TypeInfo_for_D_68, mercury__cord__TypeInfo_for_E_69, mercury__cord__P_1, mercury__cord__XT_27, &mercury__cord__YT_29, mercury__cord__STATE_VARIABLE_A_39_39, mercury__cord__STATE_VARIABLE_A_5, mercury__cord__STATE_VARIABLE_B_40_40, mercury__cord__STATE_VARIABLE_B_7, mercury__cord__STATE_VARIABLE_C_41_41, mercury__cord__STATE_VARIABLE_C_9);
          }
#line 833 "cord.m"
          {
#line 833 "cord.m"
            MR_Word base;
#line 833 "cord.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 833 "cord.m"
            *mercury__cord__HeadVar__3_3 = base;
#line 833 "cord.m"
            MR_hl_field(MR_mktag(1), base, 0) = mercury__cord__YH_28;
#line 833 "cord.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__cord__YT_29));
#line 833 "cord.m"
          }
#line 833 "cord.m"
        }
#line 831 "cord.m"
      else
#line 831 "cord.m"
        {
#line 831 "cord.m"
          MR_Box mercury__cord__X_11 = (MR_hl_field(MR_mktag(0), mercury__cord__HeadVar__2_2, (MR_Integer) 0));
#line 831 "cord.m"
          MR_Box mercury__cord__Y_12;
#line 832 "cord.m"
          void MR_CALL (* mercury__cord__func_1)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__cord__P_1, (MR_Integer) 1)));

#line 832 "cord.m"
          {
#line 832 "cord.m"
            mercury__cord__func_1(((MR_Box) mercury__cord__P_1), mercury__cord__X_11, &mercury__cord__Y_12, mercury__cord__STATE_VARIABLE_A_0_4, mercury__cord__STATE_VARIABLE_A_5, mercury__cord__STATE_VARIABLE_B_0_6, mercury__cord__STATE_VARIABLE_B_7, mercury__cord__STATE_VARIABLE_C_0_8, mercury__cord__STATE_VARIABLE_C_9);
          }
#line 831 "cord.m"
          {
#line 831 "cord.m"
            MR_Word base;
#line 831 "cord.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 831 "cord.m"
            *mercury__cord__HeadVar__3_3 = base;
#line 831 "cord.m"
            MR_hl_field(MR_mktag(0), base, 0) = mercury__cord__Y_12;
#line 831 "cord.m"
          }
#line 831 "cord.m"
        }
#line 831 "cord.m"
  }
#line 826 "cord.m"
}

#line 807 "cord.m"
void MR_CALL 
mercury__cord__map_foldl2_node_7_p_0(
#line 807 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_A_49,
#line 807 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_B_50,
#line 807 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_C_51,
#line 807 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_D_52,
#line 807 "cord.m"
  MR_Word mercury__cord__P_1,
#line 807 "cord.m"
  MR_Word mercury__cord__HeadVar__2_2,
#line 807 "cord.m"
  MR_Word * mercury__cord__HeadVar__3_3,
#line 807 "cord.m"
  MR_Box mercury__cord__STATE_VARIABLE_A_0_4,
#line 807 "cord.m"
  MR_Box * mercury__cord__STATE_VARIABLE_A_5,
#line 807 "cord.m"
  MR_Box mercury__cord__STATE_VARIABLE_B_0_6,
#line 807 "cord.m"
  MR_Box * mercury__cord__STATE_VARIABLE_B_7)
#line 807 "cord.m"
{
#line 811 "cord.m"
  {
#line 811 "cord.m"
    MR_bool mercury__cord__succeeded;

#line 811 "cord.m"
    if (((MR_tag((MR_Word) mercury__cord__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 816 "cord.m"
      {
#line 816 "cord.m"
        MR_Word mercury__cord__XA_35 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__HeadVar__2_2, (MR_Integer) 0)));
#line 816 "cord.m"
        MR_Word mercury__cord__XB_36 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__HeadVar__2_2, (MR_Integer) 1)));
#line 816 "cord.m"
        MR_Word mercury__cord__YA_37;
#line 816 "cord.m"
        MR_Word mercury__cord__YB_38;
#line 816 "cord.m"
        MR_Box mercury__cord__STATE_VARIABLE_A_45_45;
#line 816 "cord.m"
        MR_Box mercury__cord__STATE_VARIABLE_B_46_46;

#line 817 "cord.m"
        {
#line 817 "cord.m"
          mercury__cord__map_foldl2_node_7_p_0(mercury__cord__TypeInfo_for_A_49, mercury__cord__TypeInfo_for_B_50, mercury__cord__TypeInfo_for_C_51, mercury__cord__TypeInfo_for_D_52, mercury__cord__P_1, mercury__cord__XA_35, &mercury__cord__YA_37, mercury__cord__STATE_VARIABLE_A_0_4, &mercury__cord__STATE_VARIABLE_A_45_45, mercury__cord__STATE_VARIABLE_B_0_6, &mercury__cord__STATE_VARIABLE_B_46_46);
        }
#line 818 "cord.m"
        {
#line 818 "cord.m"
          mercury__cord__map_foldl2_node_7_p_0(mercury__cord__TypeInfo_for_A_49, mercury__cord__TypeInfo_for_B_50, mercury__cord__TypeInfo_for_C_51, mercury__cord__TypeInfo_for_D_52, mercury__cord__P_1, mercury__cord__XB_36, &mercury__cord__YB_38, mercury__cord__STATE_VARIABLE_A_45_45, mercury__cord__STATE_VARIABLE_A_5, mercury__cord__STATE_VARIABLE_B_46_46, mercury__cord__STATE_VARIABLE_B_7);
        }
#line 816 "cord.m"
        {
#line 816 "cord.m"
          MR_Word base;
#line 816 "cord.m"
          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 816 "cord.m"
          *mercury__cord__HeadVar__3_3 = base;
#line 816 "cord.m"
          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (mercury__cord__YA_37));
#line 816 "cord.m"
          MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (mercury__cord__YB_38));
#line 816 "cord.m"
        }
#line 816 "cord.m"
      }
#line 811 "cord.m"
    else
#line 811 "cord.m"
      if (((MR_tag((MR_Word) mercury__cord__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 813 "cord.m"
        {
#line 813 "cord.m"
          MR_Box mercury__cord__XH_20 = (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 0));
#line 813 "cord.m"
          MR_Word mercury__cord__XT_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 1)));
#line 813 "cord.m"
          MR_Box mercury__cord__YH_22;
#line 813 "cord.m"
          MR_Word mercury__cord__YT_23;
#line 813 "cord.m"
          MR_Box mercury__cord__STATE_VARIABLE_A_30_30;
#line 813 "cord.m"
          MR_Box mercury__cord__STATE_VARIABLE_B_31_31;
#line 814 "cord.m"
          void MR_CALL (* mercury__cord__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__cord__P_1, (MR_Integer) 1)));

#line 814 "cord.m"
          {
#line 814 "cord.m"
            mercury__cord__func_0(((MR_Box) mercury__cord__P_1), mercury__cord__XH_20, &mercury__cord__YH_22, mercury__cord__STATE_VARIABLE_A_0_4, &mercury__cord__STATE_VARIABLE_A_30_30, mercury__cord__STATE_VARIABLE_B_0_6, &mercury__cord__STATE_VARIABLE_B_31_31);
          }
#line 815 "cord.m"
          {
#line 815 "cord.m"
            mercury__list__map_foldl2_7_p_0(mercury__cord__TypeInfo_for_A_49, mercury__cord__TypeInfo_for_B_50, mercury__cord__TypeInfo_for_C_51, mercury__cord__TypeInfo_for_D_52, mercury__cord__P_1, mercury__cord__XT_21, &mercury__cord__YT_23, mercury__cord__STATE_VARIABLE_A_30_30, mercury__cord__STATE_VARIABLE_A_5, mercury__cord__STATE_VARIABLE_B_31_31, mercury__cord__STATE_VARIABLE_B_7);
          }
#line 813 "cord.m"
          {
#line 813 "cord.m"
            MR_Word base;
#line 813 "cord.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 813 "cord.m"
            *mercury__cord__HeadVar__3_3 = base;
#line 813 "cord.m"
            MR_hl_field(MR_mktag(1), base, 0) = mercury__cord__YH_22;
#line 813 "cord.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__cord__YT_23));
#line 813 "cord.m"
          }
#line 813 "cord.m"
        }
#line 811 "cord.m"
      else
#line 811 "cord.m"
        {
#line 811 "cord.m"
          MR_Box mercury__cord__X_9 = (MR_hl_field(MR_mktag(0), mercury__cord__HeadVar__2_2, (MR_Integer) 0));
#line 811 "cord.m"
          MR_Box mercury__cord__Y_10;
#line 812 "cord.m"
          void MR_CALL (* mercury__cord__func_1)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__cord__P_1, (MR_Integer) 1)));

#line 812 "cord.m"
          {
#line 812 "cord.m"
            mercury__cord__func_1(((MR_Box) mercury__cord__P_1), mercury__cord__X_9, &mercury__cord__Y_10, mercury__cord__STATE_VARIABLE_A_0_4, mercury__cord__STATE_VARIABLE_A_5, mercury__cord__STATE_VARIABLE_B_0_6, mercury__cord__STATE_VARIABLE_B_7);
          }
#line 811 "cord.m"
          {
#line 811 "cord.m"
            MR_Word base;
#line 811 "cord.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 811 "cord.m"
            *mercury__cord__HeadVar__3_3 = base;
#line 811 "cord.m"
            MR_hl_field(MR_mktag(0), base, 0) = mercury__cord__Y_10;
#line 811 "cord.m"
          }
#line 811 "cord.m"
        }
#line 811 "cord.m"
  }
#line 807 "cord.m"
}

#line 789 "cord.m"
MR_bool MR_CALL 
mercury__cord__map_foldl_node_5_p_5(
#line 789 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_A_33,
#line 789 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_B_34,
#line 789 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_C_35,
#line 789 "cord.m"
  MR_Word mercury__cord__P_1,
#line 789 "cord.m"
  MR_Word mercury__cord__HeadVar__2_2,
#line 789 "cord.m"
  MR_Word * mercury__cord__HeadVar__3_3,
#line 789 "cord.m"
  MR_Box mercury__cord__STATE_VARIABLE_A_0_4,
#line 789 "cord.m"
  MR_Box * mercury__cord__STATE_VARIABLE_A_5)
#line 789 "cord.m"
{
#line 792 "cord.m"
  {
#line 792 "cord.m"
    MR_bool mercury__cord__succeeded;

#line 792 "cord.m"
    if (((MR_tag((MR_Word) mercury__cord__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 797 "cord.m"
      {
#line 797 "cord.m"
        MR_Word mercury__cord__XA_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__HeadVar__2_2, (MR_Integer) 0)));
#line 797 "cord.m"
        MR_Word mercury__cord__XB_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__HeadVar__2_2, (MR_Integer) 1)));
#line 797 "cord.m"
        MR_Word mercury__cord__YA_26;
#line 797 "cord.m"
        MR_Word mercury__cord__YB_27;
#line 797 "cord.m"
        MR_Box mercury__cord__STATE_VARIABLE_A_31_31;

#line 798 "cord.m"
        {
#line 798 "cord.m"
          mercury__cord__succeeded = mercury__cord__map_foldl_node_5_p_5(mercury__cord__TypeInfo_for_A_33, mercury__cord__TypeInfo_for_B_34, mercury__cord__TypeInfo_for_C_35, mercury__cord__P_1, mercury__cord__XA_24, &mercury__cord__YA_26, mercury__cord__STATE_VARIABLE_A_0_4, &mercury__cord__STATE_VARIABLE_A_31_31);
        }
#line 797 "cord.m"
        if (mercury__cord__succeeded)
#line 797 "cord.m"
          {
#line 799 "cord.m"
            {
#line 799 "cord.m"
              mercury__cord__succeeded = mercury__cord__map_foldl_node_5_p_5(mercury__cord__TypeInfo_for_A_33, mercury__cord__TypeInfo_for_B_34, mercury__cord__TypeInfo_for_C_35, mercury__cord__P_1, mercury__cord__XB_25, &mercury__cord__YB_27, mercury__cord__STATE_VARIABLE_A_31_31, mercury__cord__STATE_VARIABLE_A_5);
            }
#line 797 "cord.m"
            if (mercury__cord__succeeded)
#line 797 "cord.m"
              {
#line 797 "cord.m"
                {
#line 797 "cord.m"
                  MR_Word base;
#line 797 "cord.m"
                  base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 797 "cord.m"
                  *mercury__cord__HeadVar__3_3 = base;
#line 797 "cord.m"
                  MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (mercury__cord__YA_26));
#line 797 "cord.m"
                  MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (mercury__cord__YB_27));
#line 797 "cord.m"
                }
#line 797 "cord.m"
                mercury__cord__succeeded = MR_TRUE;
#line 797 "cord.m"
              }
#line 797 "cord.m"
          }
#line 797 "cord.m"
      }
#line 792 "cord.m"
    else
#line 792 "cord.m"
      if (((MR_tag((MR_Word) mercury__cord__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 794 "cord.m"
        {
#line 794 "cord.m"
          MR_Box mercury__cord__XH_14 = (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 0));
#line 794 "cord.m"
          MR_Word mercury__cord__XT_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 1)));
#line 794 "cord.m"
          MR_Box mercury__cord__YH_16;
#line 794 "cord.m"
          MR_Word mercury__cord__YT_17;
#line 794 "cord.m"
          MR_Box mercury__cord__STATE_VARIABLE_A_21_21;
#line 795 "cord.m"
          MR_bool MR_CALL (* mercury__cord__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__cord__P_1, (MR_Integer) 1)));

#line 795 "cord.m"
          {
#line 795 "cord.m"
            mercury__cord__succeeded = mercury__cord__func_0(((MR_Box) mercury__cord__P_1), mercury__cord__XH_14, &mercury__cord__YH_16, mercury__cord__STATE_VARIABLE_A_0_4, &mercury__cord__STATE_VARIABLE_A_21_21);
          }
#line 794 "cord.m"
          if (mercury__cord__succeeded)
#line 794 "cord.m"
            {
#line 796 "cord.m"
              {
#line 796 "cord.m"
                mercury__cord__succeeded = mercury__list__map_foldl_5_p_5(mercury__cord__TypeInfo_for_A_33, mercury__cord__TypeInfo_for_B_34, mercury__cord__TypeInfo_for_C_35, mercury__cord__P_1, mercury__cord__XT_15, &mercury__cord__YT_17, mercury__cord__STATE_VARIABLE_A_21_21, mercury__cord__STATE_VARIABLE_A_5);
              }
#line 794 "cord.m"
              if (mercury__cord__succeeded)
#line 794 "cord.m"
                {
#line 794 "cord.m"
                  {
#line 794 "cord.m"
                    MR_Word base;
#line 794 "cord.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 794 "cord.m"
                    *mercury__cord__HeadVar__3_3 = base;
#line 794 "cord.m"
                    MR_hl_field(MR_mktag(1), base, 0) = mercury__cord__YH_16;
#line 794 "cord.m"
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__cord__YT_17));
#line 794 "cord.m"
                  }
#line 794 "cord.m"
                  mercury__cord__succeeded = MR_TRUE;
#line 794 "cord.m"
                }
#line 794 "cord.m"
            }
#line 794 "cord.m"
        }
#line 792 "cord.m"
      else
#line 792 "cord.m"
        {
#line 792 "cord.m"
          MR_Box mercury__cord__X_7 = (MR_hl_field(MR_mktag(0), mercury__cord__HeadVar__2_2, (MR_Integer) 0));
#line 792 "cord.m"
          MR_Box mercury__cord__Y_8;
#line 793 "cord.m"
          MR_bool MR_CALL (* mercury__cord__func_1)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__cord__P_1, (MR_Integer) 1)));

#line 793 "cord.m"
          {
#line 793 "cord.m"
            mercury__cord__succeeded = mercury__cord__func_1(((MR_Box) mercury__cord__P_1), mercury__cord__X_7, &mercury__cord__Y_8, mercury__cord__STATE_VARIABLE_A_0_4, mercury__cord__STATE_VARIABLE_A_5);
          }
#line 792 "cord.m"
          if (mercury__cord__succeeded)
#line 792 "cord.m"
            {
#line 792 "cord.m"
              {
#line 792 "cord.m"
                MR_Word base;
#line 792 "cord.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 792 "cord.m"
                *mercury__cord__HeadVar__3_3 = base;
#line 792 "cord.m"
                MR_hl_field(MR_mktag(0), base, 0) = mercury__cord__Y_8;
#line 792 "cord.m"
              }
#line 792 "cord.m"
              mercury__cord__succeeded = MR_TRUE;
#line 792 "cord.m"
            }
#line 792 "cord.m"
        }
#line 792 "cord.m"
    return mercury__cord__succeeded;
#line 792 "cord.m"
  }
#line 789 "cord.m"
}

#line 787 "cord.m"
MR_bool MR_CALL 
mercury__cord__map_foldl_node_5_p_4(
#line 787 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_A_33,
#line 787 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_B_34,
#line 787 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_C_35,
#line 787 "cord.m"
  MR_Word mercury__cord__P_1,
#line 787 "cord.m"
  MR_Word mercury__cord__HeadVar__2_2,
#line 787 "cord.m"
  MR_Word * mercury__cord__HeadVar__3_3,
#line 787 "cord.m"
  MR_Box mercury__cord__STATE_VARIABLE_A_0_4,
#line 787 "cord.m"
  MR_Box * mercury__cord__STATE_VARIABLE_A_5)
#line 787 "cord.m"
{
#line 792 "cord.m"
  {
#line 792 "cord.m"
    MR_bool mercury__cord__succeeded;

#line 792 "cord.m"
    if (((MR_tag((MR_Word) mercury__cord__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 797 "cord.m"
      {
#line 797 "cord.m"
        MR_Word mercury__cord__XA_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__HeadVar__2_2, (MR_Integer) 0)));
#line 797 "cord.m"
        MR_Word mercury__cord__XB_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__HeadVar__2_2, (MR_Integer) 1)));
#line 797 "cord.m"
        MR_Word mercury__cord__YA_26;
#line 797 "cord.m"
        MR_Word mercury__cord__YB_27;
#line 797 "cord.m"
        MR_Box mercury__cord__STATE_VARIABLE_A_31_31;

#line 798 "cord.m"
        {
#line 798 "cord.m"
          mercury__cord__succeeded = mercury__cord__map_foldl_node_5_p_4(mercury__cord__TypeInfo_for_A_33, mercury__cord__TypeInfo_for_B_34, mercury__cord__TypeInfo_for_C_35, mercury__cord__P_1, mercury__cord__XA_24, &mercury__cord__YA_26, mercury__cord__STATE_VARIABLE_A_0_4, &mercury__cord__STATE_VARIABLE_A_31_31);
        }
#line 797 "cord.m"
        if (mercury__cord__succeeded)
#line 797 "cord.m"
          {
#line 799 "cord.m"
            {
#line 799 "cord.m"
              mercury__cord__succeeded = mercury__cord__map_foldl_node_5_p_4(mercury__cord__TypeInfo_for_A_33, mercury__cord__TypeInfo_for_B_34, mercury__cord__TypeInfo_for_C_35, mercury__cord__P_1, mercury__cord__XB_25, &mercury__cord__YB_27, mercury__cord__STATE_VARIABLE_A_31_31, mercury__cord__STATE_VARIABLE_A_5);
            }
#line 797 "cord.m"
            if (mercury__cord__succeeded)
#line 797 "cord.m"
              {
#line 797 "cord.m"
                {
#line 797 "cord.m"
                  MR_Word base;
#line 797 "cord.m"
                  base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 797 "cord.m"
                  *mercury__cord__HeadVar__3_3 = base;
#line 797 "cord.m"
                  MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (mercury__cord__YA_26));
#line 797 "cord.m"
                  MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (mercury__cord__YB_27));
#line 797 "cord.m"
                }
#line 797 "cord.m"
                mercury__cord__succeeded = MR_TRUE;
#line 797 "cord.m"
              }
#line 797 "cord.m"
          }
#line 797 "cord.m"
      }
#line 792 "cord.m"
    else
#line 792 "cord.m"
      if (((MR_tag((MR_Word) mercury__cord__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 794 "cord.m"
        {
#line 794 "cord.m"
          MR_Box mercury__cord__XH_14 = (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 0));
#line 794 "cord.m"
          MR_Word mercury__cord__XT_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 1)));
#line 794 "cord.m"
          MR_Box mercury__cord__YH_16;
#line 794 "cord.m"
          MR_Word mercury__cord__YT_17;
#line 794 "cord.m"
          MR_Box mercury__cord__STATE_VARIABLE_A_21_21;
#line 795 "cord.m"
          MR_bool MR_CALL (* mercury__cord__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__cord__P_1, (MR_Integer) 1)));

#line 795 "cord.m"
          {
#line 795 "cord.m"
            mercury__cord__succeeded = mercury__cord__func_0(((MR_Box) mercury__cord__P_1), mercury__cord__XH_14, &mercury__cord__YH_16, mercury__cord__STATE_VARIABLE_A_0_4, &mercury__cord__STATE_VARIABLE_A_21_21);
          }
#line 794 "cord.m"
          if (mercury__cord__succeeded)
#line 794 "cord.m"
            {
#line 796 "cord.m"
              {
#line 796 "cord.m"
                mercury__cord__succeeded = mercury__list__map_foldl_5_p_4(mercury__cord__TypeInfo_for_A_33, mercury__cord__TypeInfo_for_B_34, mercury__cord__TypeInfo_for_C_35, mercury__cord__P_1, mercury__cord__XT_15, &mercury__cord__YT_17, mercury__cord__STATE_VARIABLE_A_21_21, mercury__cord__STATE_VARIABLE_A_5);
              }
#line 794 "cord.m"
              if (mercury__cord__succeeded)
#line 794 "cord.m"
                {
#line 794 "cord.m"
                  {
#line 794 "cord.m"
                    MR_Word base;
#line 794 "cord.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 794 "cord.m"
                    *mercury__cord__HeadVar__3_3 = base;
#line 794 "cord.m"
                    MR_hl_field(MR_mktag(1), base, 0) = mercury__cord__YH_16;
#line 794 "cord.m"
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__cord__YT_17));
#line 794 "cord.m"
                  }
#line 794 "cord.m"
                  mercury__cord__succeeded = MR_TRUE;
#line 794 "cord.m"
                }
#line 794 "cord.m"
            }
#line 794 "cord.m"
        }
#line 792 "cord.m"
      else
#line 792 "cord.m"
        {
#line 792 "cord.m"
          MR_Box mercury__cord__X_7 = (MR_hl_field(MR_mktag(0), mercury__cord__HeadVar__2_2, (MR_Integer) 0));
#line 792 "cord.m"
          MR_Box mercury__cord__Y_8;
#line 793 "cord.m"
          MR_bool MR_CALL (* mercury__cord__func_1)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__cord__P_1, (MR_Integer) 1)));

#line 793 "cord.m"
          {
#line 793 "cord.m"
            mercury__cord__succeeded = mercury__cord__func_1(((MR_Box) mercury__cord__P_1), mercury__cord__X_7, &mercury__cord__Y_8, mercury__cord__STATE_VARIABLE_A_0_4, mercury__cord__STATE_VARIABLE_A_5);
          }
#line 792 "cord.m"
          if (mercury__cord__succeeded)
#line 792 "cord.m"
            {
#line 792 "cord.m"
              {
#line 792 "cord.m"
                MR_Word base;
#line 792 "cord.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 792 "cord.m"
                *mercury__cord__HeadVar__3_3 = base;
#line 792 "cord.m"
                MR_hl_field(MR_mktag(0), base, 0) = mercury__cord__Y_8;
#line 792 "cord.m"
              }
#line 792 "cord.m"
              mercury__cord__succeeded = MR_TRUE;
#line 792 "cord.m"
            }
#line 792 "cord.m"
        }
#line 792 "cord.m"
    return mercury__cord__succeeded;
#line 792 "cord.m"
  }
#line 787 "cord.m"
}

#line 785 "cord.m"
MR_bool MR_CALL 
mercury__cord__map_foldl_node_5_p_3(
#line 785 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_A_33,
#line 785 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_B_34,
#line 785 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_C_35,
#line 785 "cord.m"
  MR_Word mercury__cord__P_1,
#line 785 "cord.m"
  MR_Word mercury__cord__HeadVar__2_2,
#line 785 "cord.m"
  MR_Word * mercury__cord__HeadVar__3_3,
#line 785 "cord.m"
  MR_Box mercury__cord__STATE_VARIABLE_A_0_4,
#line 785 "cord.m"
  MR_Box * mercury__cord__STATE_VARIABLE_A_5)
#line 785 "cord.m"
{
#line 792 "cord.m"
  {
#line 792 "cord.m"
    MR_bool mercury__cord__succeeded;

#line 792 "cord.m"
    if (((MR_tag((MR_Word) mercury__cord__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 797 "cord.m"
      {
#line 797 "cord.m"
        MR_Word mercury__cord__XA_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__HeadVar__2_2, (MR_Integer) 0)));
#line 797 "cord.m"
        MR_Word mercury__cord__XB_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__HeadVar__2_2, (MR_Integer) 1)));
#line 797 "cord.m"
        MR_Word mercury__cord__YA_26;
#line 797 "cord.m"
        MR_Word mercury__cord__YB_27;
#line 797 "cord.m"
        MR_Box mercury__cord__STATE_VARIABLE_A_31_31;

#line 798 "cord.m"
        {
#line 798 "cord.m"
          mercury__cord__succeeded = mercury__cord__map_foldl_node_5_p_3(mercury__cord__TypeInfo_for_A_33, mercury__cord__TypeInfo_for_B_34, mercury__cord__TypeInfo_for_C_35, mercury__cord__P_1, mercury__cord__XA_24, &mercury__cord__YA_26, mercury__cord__STATE_VARIABLE_A_0_4, &mercury__cord__STATE_VARIABLE_A_31_31);
        }
#line 797 "cord.m"
        if (mercury__cord__succeeded)
#line 797 "cord.m"
          {
#line 799 "cord.m"
            {
#line 799 "cord.m"
              mercury__cord__succeeded = mercury__cord__map_foldl_node_5_p_3(mercury__cord__TypeInfo_for_A_33, mercury__cord__TypeInfo_for_B_34, mercury__cord__TypeInfo_for_C_35, mercury__cord__P_1, mercury__cord__XB_25, &mercury__cord__YB_27, mercury__cord__STATE_VARIABLE_A_31_31, mercury__cord__STATE_VARIABLE_A_5);
            }
#line 797 "cord.m"
            if (mercury__cord__succeeded)
#line 797 "cord.m"
              {
#line 797 "cord.m"
                {
#line 797 "cord.m"
                  MR_Word base;
#line 797 "cord.m"
                  base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 797 "cord.m"
                  *mercury__cord__HeadVar__3_3 = base;
#line 797 "cord.m"
                  MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (mercury__cord__YA_26));
#line 797 "cord.m"
                  MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (mercury__cord__YB_27));
#line 797 "cord.m"
                }
#line 797 "cord.m"
                mercury__cord__succeeded = MR_TRUE;
#line 797 "cord.m"
              }
#line 797 "cord.m"
          }
#line 797 "cord.m"
      }
#line 792 "cord.m"
    else
#line 792 "cord.m"
      if (((MR_tag((MR_Word) mercury__cord__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 794 "cord.m"
        {
#line 794 "cord.m"
          MR_Box mercury__cord__XH_14 = (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 0));
#line 794 "cord.m"
          MR_Word mercury__cord__XT_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 1)));
#line 794 "cord.m"
          MR_Box mercury__cord__YH_16;
#line 794 "cord.m"
          MR_Word mercury__cord__YT_17;
#line 794 "cord.m"
          MR_Box mercury__cord__STATE_VARIABLE_A_21_21;
#line 795 "cord.m"
          MR_bool MR_CALL (* mercury__cord__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__cord__P_1, (MR_Integer) 1)));

#line 795 "cord.m"
          {
#line 795 "cord.m"
            mercury__cord__succeeded = mercury__cord__func_0(((MR_Box) mercury__cord__P_1), mercury__cord__XH_14, &mercury__cord__YH_16, mercury__cord__STATE_VARIABLE_A_0_4, &mercury__cord__STATE_VARIABLE_A_21_21);
          }
#line 794 "cord.m"
          if (mercury__cord__succeeded)
#line 794 "cord.m"
            {
#line 796 "cord.m"
              {
#line 796 "cord.m"
                mercury__cord__succeeded = mercury__list__map_foldl_5_p_3(mercury__cord__TypeInfo_for_A_33, mercury__cord__TypeInfo_for_B_34, mercury__cord__TypeInfo_for_C_35, mercury__cord__P_1, mercury__cord__XT_15, &mercury__cord__YT_17, mercury__cord__STATE_VARIABLE_A_21_21, mercury__cord__STATE_VARIABLE_A_5);
              }
#line 794 "cord.m"
              if (mercury__cord__succeeded)
#line 794 "cord.m"
                {
#line 794 "cord.m"
                  {
#line 794 "cord.m"
                    MR_Word base;
#line 794 "cord.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 794 "cord.m"
                    *mercury__cord__HeadVar__3_3 = base;
#line 794 "cord.m"
                    MR_hl_field(MR_mktag(1), base, 0) = mercury__cord__YH_16;
#line 794 "cord.m"
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__cord__YT_17));
#line 794 "cord.m"
                  }
#line 794 "cord.m"
                  mercury__cord__succeeded = MR_TRUE;
#line 794 "cord.m"
                }
#line 794 "cord.m"
            }
#line 794 "cord.m"
        }
#line 792 "cord.m"
      else
#line 792 "cord.m"
        {
#line 792 "cord.m"
          MR_Box mercury__cord__X_7 = (MR_hl_field(MR_mktag(0), mercury__cord__HeadVar__2_2, (MR_Integer) 0));
#line 792 "cord.m"
          MR_Box mercury__cord__Y_8;
#line 793 "cord.m"
          MR_bool MR_CALL (* mercury__cord__func_1)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__cord__P_1, (MR_Integer) 1)));

#line 793 "cord.m"
          {
#line 793 "cord.m"
            mercury__cord__succeeded = mercury__cord__func_1(((MR_Box) mercury__cord__P_1), mercury__cord__X_7, &mercury__cord__Y_8, mercury__cord__STATE_VARIABLE_A_0_4, mercury__cord__STATE_VARIABLE_A_5);
          }
#line 792 "cord.m"
          if (mercury__cord__succeeded)
#line 792 "cord.m"
            {
#line 792 "cord.m"
              {
#line 792 "cord.m"
                MR_Word base;
#line 792 "cord.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 792 "cord.m"
                *mercury__cord__HeadVar__3_3 = base;
#line 792 "cord.m"
                MR_hl_field(MR_mktag(0), base, 0) = mercury__cord__Y_8;
#line 792 "cord.m"
              }
#line 792 "cord.m"
              mercury__cord__succeeded = MR_TRUE;
#line 792 "cord.m"
            }
#line 792 "cord.m"
        }
#line 792 "cord.m"
    return mercury__cord__succeeded;
#line 792 "cord.m"
  }
#line 785 "cord.m"
}

#line 783 "cord.m"
void MR_CALL 
mercury__cord__map_foldl_node_5_p_2(
#line 783 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_A_33,
#line 783 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_B_34,
#line 783 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_C_35,
#line 783 "cord.m"
  MR_Word mercury__cord__P_1,
#line 783 "cord.m"
  MR_Word mercury__cord__HeadVar__2_2,
#line 783 "cord.m"
  MR_Word * mercury__cord__HeadVar__3_3,
#line 783 "cord.m"
  MR_Box mercury__cord__STATE_VARIABLE_A_0_4,
#line 783 "cord.m"
  MR_Box * mercury__cord__STATE_VARIABLE_A_5)
#line 783 "cord.m"
{
#line 792 "cord.m"
  {
#line 792 "cord.m"
    MR_bool mercury__cord__succeeded;

#line 792 "cord.m"
    if (((MR_tag((MR_Word) mercury__cord__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 797 "cord.m"
      {
#line 797 "cord.m"
        MR_Word mercury__cord__XA_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__HeadVar__2_2, (MR_Integer) 0)));
#line 797 "cord.m"
        MR_Word mercury__cord__XB_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__HeadVar__2_2, (MR_Integer) 1)));
#line 797 "cord.m"
        MR_Word mercury__cord__YA_26;
#line 797 "cord.m"
        MR_Word mercury__cord__YB_27;
#line 797 "cord.m"
        MR_Box mercury__cord__STATE_VARIABLE_A_31_31;

#line 798 "cord.m"
        {
#line 798 "cord.m"
          mercury__cord__map_foldl_node_5_p_2(mercury__cord__TypeInfo_for_A_33, mercury__cord__TypeInfo_for_B_34, mercury__cord__TypeInfo_for_C_35, mercury__cord__P_1, mercury__cord__XA_24, &mercury__cord__YA_26, mercury__cord__STATE_VARIABLE_A_0_4, &mercury__cord__STATE_VARIABLE_A_31_31);
        }
#line 799 "cord.m"
        {
#line 799 "cord.m"
          mercury__cord__map_foldl_node_5_p_2(mercury__cord__TypeInfo_for_A_33, mercury__cord__TypeInfo_for_B_34, mercury__cord__TypeInfo_for_C_35, mercury__cord__P_1, mercury__cord__XB_25, &mercury__cord__YB_27, mercury__cord__STATE_VARIABLE_A_31_31, mercury__cord__STATE_VARIABLE_A_5);
        }
#line 797 "cord.m"
        {
#line 797 "cord.m"
          MR_Word base;
#line 797 "cord.m"
          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 797 "cord.m"
          *mercury__cord__HeadVar__3_3 = base;
#line 797 "cord.m"
          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (mercury__cord__YA_26));
#line 797 "cord.m"
          MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (mercury__cord__YB_27));
#line 797 "cord.m"
        }
#line 797 "cord.m"
      }
#line 792 "cord.m"
    else
#line 792 "cord.m"
      if (((MR_tag((MR_Word) mercury__cord__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 794 "cord.m"
        {
#line 794 "cord.m"
          MR_Box mercury__cord__XH_14 = (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 0));
#line 794 "cord.m"
          MR_Word mercury__cord__XT_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 1)));
#line 794 "cord.m"
          MR_Box mercury__cord__YH_16;
#line 794 "cord.m"
          MR_Word mercury__cord__YT_17;
#line 794 "cord.m"
          MR_Box mercury__cord__STATE_VARIABLE_A_21_21;
#line 795 "cord.m"
          void MR_CALL (* mercury__cord__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__cord__P_1, (MR_Integer) 1)));

#line 795 "cord.m"
          {
#line 795 "cord.m"
            mercury__cord__func_0(((MR_Box) mercury__cord__P_1), mercury__cord__XH_14, &mercury__cord__YH_16, mercury__cord__STATE_VARIABLE_A_0_4, &mercury__cord__STATE_VARIABLE_A_21_21);
          }
#line 796 "cord.m"
          {
#line 796 "cord.m"
            mercury__list__map_foldl_5_p_2(mercury__cord__TypeInfo_for_A_33, mercury__cord__TypeInfo_for_B_34, mercury__cord__TypeInfo_for_C_35, mercury__cord__P_1, mercury__cord__XT_15, &mercury__cord__YT_17, mercury__cord__STATE_VARIABLE_A_21_21, mercury__cord__STATE_VARIABLE_A_5);
          }
#line 794 "cord.m"
          {
#line 794 "cord.m"
            MR_Word base;
#line 794 "cord.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 794 "cord.m"
            *mercury__cord__HeadVar__3_3 = base;
#line 794 "cord.m"
            MR_hl_field(MR_mktag(1), base, 0) = mercury__cord__YH_16;
#line 794 "cord.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__cord__YT_17));
#line 794 "cord.m"
          }
#line 794 "cord.m"
        }
#line 792 "cord.m"
      else
#line 792 "cord.m"
        {
#line 792 "cord.m"
          MR_Box mercury__cord__X_7 = (MR_hl_field(MR_mktag(0), mercury__cord__HeadVar__2_2, (MR_Integer) 0));
#line 792 "cord.m"
          MR_Box mercury__cord__Y_8;
#line 793 "cord.m"
          void MR_CALL (* mercury__cord__func_1)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__cord__P_1, (MR_Integer) 1)));

#line 793 "cord.m"
          {
#line 793 "cord.m"
            mercury__cord__func_1(((MR_Box) mercury__cord__P_1), mercury__cord__X_7, &mercury__cord__Y_8, mercury__cord__STATE_VARIABLE_A_0_4, mercury__cord__STATE_VARIABLE_A_5);
          }
#line 792 "cord.m"
          {
#line 792 "cord.m"
            MR_Word base;
#line 792 "cord.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 792 "cord.m"
            *mercury__cord__HeadVar__3_3 = base;
#line 792 "cord.m"
            MR_hl_field(MR_mktag(0), base, 0) = mercury__cord__Y_8;
#line 792 "cord.m"
          }
#line 792 "cord.m"
        }
#line 792 "cord.m"
  }
#line 783 "cord.m"
}

#line 781 "cord.m"
void MR_CALL 
mercury__cord__map_foldl_node_5_p_1(
#line 781 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_A_33,
#line 781 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_B_34,
#line 781 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_C_35,
#line 781 "cord.m"
  MR_Word mercury__cord__P_1,
#line 781 "cord.m"
  MR_Word mercury__cord__HeadVar__2_2,
#line 781 "cord.m"
  MR_Word * mercury__cord__HeadVar__3_3,
#line 781 "cord.m"
  MR_Box mercury__cord__STATE_VARIABLE_A_0_4,
#line 781 "cord.m"
  MR_Box * mercury__cord__STATE_VARIABLE_A_5)
#line 781 "cord.m"
{
#line 792 "cord.m"
  {
#line 792 "cord.m"
    MR_bool mercury__cord__succeeded;

#line 792 "cord.m"
    if (((MR_tag((MR_Word) mercury__cord__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 797 "cord.m"
      {
#line 797 "cord.m"
        MR_Word mercury__cord__XA_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__HeadVar__2_2, (MR_Integer) 0)));
#line 797 "cord.m"
        MR_Word mercury__cord__XB_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__HeadVar__2_2, (MR_Integer) 1)));
#line 797 "cord.m"
        MR_Word mercury__cord__YA_26;
#line 797 "cord.m"
        MR_Word mercury__cord__YB_27;
#line 797 "cord.m"
        MR_Box mercury__cord__STATE_VARIABLE_A_31_31;

#line 798 "cord.m"
        {
#line 798 "cord.m"
          mercury__cord__map_foldl_node_5_p_1(mercury__cord__TypeInfo_for_A_33, mercury__cord__TypeInfo_for_B_34, mercury__cord__TypeInfo_for_C_35, mercury__cord__P_1, mercury__cord__XA_24, &mercury__cord__YA_26, mercury__cord__STATE_VARIABLE_A_0_4, &mercury__cord__STATE_VARIABLE_A_31_31);
        }
#line 799 "cord.m"
        {
#line 799 "cord.m"
          mercury__cord__map_foldl_node_5_p_1(mercury__cord__TypeInfo_for_A_33, mercury__cord__TypeInfo_for_B_34, mercury__cord__TypeInfo_for_C_35, mercury__cord__P_1, mercury__cord__XB_25, &mercury__cord__YB_27, mercury__cord__STATE_VARIABLE_A_31_31, mercury__cord__STATE_VARIABLE_A_5);
        }
#line 797 "cord.m"
        {
#line 797 "cord.m"
          MR_Word base;
#line 797 "cord.m"
          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 797 "cord.m"
          *mercury__cord__HeadVar__3_3 = base;
#line 797 "cord.m"
          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (mercury__cord__YA_26));
#line 797 "cord.m"
          MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (mercury__cord__YB_27));
#line 797 "cord.m"
        }
#line 797 "cord.m"
      }
#line 792 "cord.m"
    else
#line 792 "cord.m"
      if (((MR_tag((MR_Word) mercury__cord__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 794 "cord.m"
        {
#line 794 "cord.m"
          MR_Box mercury__cord__XH_14 = (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 0));
#line 794 "cord.m"
          MR_Word mercury__cord__XT_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 1)));
#line 794 "cord.m"
          MR_Box mercury__cord__YH_16;
#line 794 "cord.m"
          MR_Word mercury__cord__YT_17;
#line 794 "cord.m"
          MR_Box mercury__cord__STATE_VARIABLE_A_21_21;
#line 795 "cord.m"
          void MR_CALL (* mercury__cord__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__cord__P_1, (MR_Integer) 1)));

#line 795 "cord.m"
          {
#line 795 "cord.m"
            mercury__cord__func_0(((MR_Box) mercury__cord__P_1), mercury__cord__XH_14, &mercury__cord__YH_16, mercury__cord__STATE_VARIABLE_A_0_4, &mercury__cord__STATE_VARIABLE_A_21_21);
          }
#line 796 "cord.m"
          {
#line 796 "cord.m"
            mercury__list__map_foldl_5_p_1(mercury__cord__TypeInfo_for_A_33, mercury__cord__TypeInfo_for_B_34, mercury__cord__TypeInfo_for_C_35, mercury__cord__P_1, mercury__cord__XT_15, &mercury__cord__YT_17, mercury__cord__STATE_VARIABLE_A_21_21, mercury__cord__STATE_VARIABLE_A_5);
          }
#line 794 "cord.m"
          {
#line 794 "cord.m"
            MR_Word base;
#line 794 "cord.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 794 "cord.m"
            *mercury__cord__HeadVar__3_3 = base;
#line 794 "cord.m"
            MR_hl_field(MR_mktag(1), base, 0) = mercury__cord__YH_16;
#line 794 "cord.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__cord__YT_17));
#line 794 "cord.m"
          }
#line 794 "cord.m"
        }
#line 792 "cord.m"
      else
#line 792 "cord.m"
        {
#line 792 "cord.m"
          MR_Box mercury__cord__X_7 = (MR_hl_field(MR_mktag(0), mercury__cord__HeadVar__2_2, (MR_Integer) 0));
#line 792 "cord.m"
          MR_Box mercury__cord__Y_8;
#line 793 "cord.m"
          void MR_CALL (* mercury__cord__func_1)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__cord__P_1, (MR_Integer) 1)));

#line 793 "cord.m"
          {
#line 793 "cord.m"
            mercury__cord__func_1(((MR_Box) mercury__cord__P_1), mercury__cord__X_7, &mercury__cord__Y_8, mercury__cord__STATE_VARIABLE_A_0_4, mercury__cord__STATE_VARIABLE_A_5);
          }
#line 792 "cord.m"
          {
#line 792 "cord.m"
            MR_Word base;
#line 792 "cord.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 792 "cord.m"
            *mercury__cord__HeadVar__3_3 = base;
#line 792 "cord.m"
            MR_hl_field(MR_mktag(0), base, 0) = mercury__cord__Y_8;
#line 792 "cord.m"
          }
#line 792 "cord.m"
        }
#line 792 "cord.m"
  }
#line 781 "cord.m"
}

#line 779 "cord.m"
void MR_CALL 
mercury__cord__map_foldl_node_5_p_0(
#line 779 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_A_33,
#line 779 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_B_34,
#line 779 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_C_35,
#line 779 "cord.m"
  MR_Word mercury__cord__P_1,
#line 779 "cord.m"
  MR_Word mercury__cord__HeadVar__2_2,
#line 779 "cord.m"
  MR_Word * mercury__cord__HeadVar__3_3,
#line 779 "cord.m"
  MR_Box mercury__cord__STATE_VARIABLE_A_0_4,
#line 779 "cord.m"
  MR_Box * mercury__cord__STATE_VARIABLE_A_5)
#line 779 "cord.m"
{
#line 792 "cord.m"
  {
#line 792 "cord.m"
    MR_bool mercury__cord__succeeded;

#line 792 "cord.m"
    if (((MR_tag((MR_Word) mercury__cord__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 797 "cord.m"
      {
#line 797 "cord.m"
        MR_Word mercury__cord__XA_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__HeadVar__2_2, (MR_Integer) 0)));
#line 797 "cord.m"
        MR_Word mercury__cord__XB_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__HeadVar__2_2, (MR_Integer) 1)));
#line 797 "cord.m"
        MR_Word mercury__cord__YA_26;
#line 797 "cord.m"
        MR_Word mercury__cord__YB_27;
#line 797 "cord.m"
        MR_Box mercury__cord__STATE_VARIABLE_A_31_31;

#line 798 "cord.m"
        {
#line 798 "cord.m"
          mercury__cord__map_foldl_node_5_p_0(mercury__cord__TypeInfo_for_A_33, mercury__cord__TypeInfo_for_B_34, mercury__cord__TypeInfo_for_C_35, mercury__cord__P_1, mercury__cord__XA_24, &mercury__cord__YA_26, mercury__cord__STATE_VARIABLE_A_0_4, &mercury__cord__STATE_VARIABLE_A_31_31);
        }
#line 799 "cord.m"
        {
#line 799 "cord.m"
          mercury__cord__map_foldl_node_5_p_0(mercury__cord__TypeInfo_for_A_33, mercury__cord__TypeInfo_for_B_34, mercury__cord__TypeInfo_for_C_35, mercury__cord__P_1, mercury__cord__XB_25, &mercury__cord__YB_27, mercury__cord__STATE_VARIABLE_A_31_31, mercury__cord__STATE_VARIABLE_A_5);
        }
#line 797 "cord.m"
        {
#line 797 "cord.m"
          MR_Word base;
#line 797 "cord.m"
          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 797 "cord.m"
          *mercury__cord__HeadVar__3_3 = base;
#line 797 "cord.m"
          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (mercury__cord__YA_26));
#line 797 "cord.m"
          MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (mercury__cord__YB_27));
#line 797 "cord.m"
        }
#line 797 "cord.m"
      }
#line 792 "cord.m"
    else
#line 792 "cord.m"
      if (((MR_tag((MR_Word) mercury__cord__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 794 "cord.m"
        {
#line 794 "cord.m"
          MR_Box mercury__cord__XH_14 = (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 0));
#line 794 "cord.m"
          MR_Word mercury__cord__XT_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 1)));
#line 794 "cord.m"
          MR_Box mercury__cord__YH_16;
#line 794 "cord.m"
          MR_Word mercury__cord__YT_17;
#line 794 "cord.m"
          MR_Box mercury__cord__STATE_VARIABLE_A_21_21;
#line 795 "cord.m"
          void MR_CALL (* mercury__cord__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__cord__P_1, (MR_Integer) 1)));

#line 795 "cord.m"
          {
#line 795 "cord.m"
            mercury__cord__func_0(((MR_Box) mercury__cord__P_1), mercury__cord__XH_14, &mercury__cord__YH_16, mercury__cord__STATE_VARIABLE_A_0_4, &mercury__cord__STATE_VARIABLE_A_21_21);
          }
#line 796 "cord.m"
          {
#line 796 "cord.m"
            mercury__list__map_foldl_5_p_0(mercury__cord__TypeInfo_for_A_33, mercury__cord__TypeInfo_for_B_34, mercury__cord__TypeInfo_for_C_35, mercury__cord__P_1, mercury__cord__XT_15, &mercury__cord__YT_17, mercury__cord__STATE_VARIABLE_A_21_21, mercury__cord__STATE_VARIABLE_A_5);
          }
#line 794 "cord.m"
          {
#line 794 "cord.m"
            MR_Word base;
#line 794 "cord.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 794 "cord.m"
            *mercury__cord__HeadVar__3_3 = base;
#line 794 "cord.m"
            MR_hl_field(MR_mktag(1), base, 0) = mercury__cord__YH_16;
#line 794 "cord.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__cord__YT_17));
#line 794 "cord.m"
          }
#line 794 "cord.m"
        }
#line 792 "cord.m"
      else
#line 792 "cord.m"
        {
#line 792 "cord.m"
          MR_Box mercury__cord__X_7 = (MR_hl_field(MR_mktag(0), mercury__cord__HeadVar__2_2, (MR_Integer) 0));
#line 792 "cord.m"
          MR_Box mercury__cord__Y_8;
#line 793 "cord.m"
          void MR_CALL (* mercury__cord__func_1)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__cord__P_1, (MR_Integer) 1)));

#line 793 "cord.m"
          {
#line 793 "cord.m"
            mercury__cord__func_1(((MR_Box) mercury__cord__P_1), mercury__cord__X_7, &mercury__cord__Y_8, mercury__cord__STATE_VARIABLE_A_0_4, mercury__cord__STATE_VARIABLE_A_5);
          }
#line 792 "cord.m"
          {
#line 792 "cord.m"
            MR_Word base;
#line 792 "cord.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 792 "cord.m"
            *mercury__cord__HeadVar__3_3 = base;
#line 792 "cord.m"
            MR_hl_field(MR_mktag(0), base, 0) = mercury__cord__Y_8;
#line 792 "cord.m"
          }
#line 792 "cord.m"
        }
#line 792 "cord.m"
  }
#line 779 "cord.m"
}

#line 752 "cord.m"
MR_bool MR_CALL 
mercury__cord__foldr_node_pred_5_p_5(
#line 752 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_T_30,
#line 752 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_U_31,
#line 752 "cord.m"
  MR_Word mercury__cord__P_1,
#line 752 "cord.m"
  MR_Word mercury__cord__HeadVar__2_2,
#line 752 "cord.m"
  MR_Word mercury__cord__Cs_3,
#line 752 "cord.m"
  MR_Box mercury__cord__STATE_VARIABLE_Acc_0_4,
#line 752 "cord.m"
  MR_Box * mercury__cord__STATE_VARIABLE_Acc_5)
#line 752 "cord.m"
{
#line 755 "cord.m"
  while (MR_TRUE)
#line 755 "cord.m"
    {
#line 755 "cord.m"
      /* tailcall optimized into a loop */
#line 755 "cord.m"
      {
#line 755 "cord.m"
        MR_bool mercury__cord__succeeded;

#line 755 "cord.m"
        if (((MR_tag((MR_Word) mercury__cord__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 769 "cord.m"
          {
#line 769 "cord.m"
            MR_Word mercury__cord__A_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__HeadVar__2_2, (MR_Integer) 0)));
#line 769 "cord.m"
            MR_Word mercury__cord__B_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__HeadVar__2_2, (MR_Integer) 1)));
#line 769 "cord.m"
            MR_Word mercury__cord__V_28_28;

#line 770 "cord.m"
            {
#line 770 "cord.m"
              mercury__cord__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 770 "cord.m"
              MR_hl_field(MR_mktag(1), mercury__cord__V_28_28, 0) = ((MR_Box) (mercury__cord__A_22));
#line 770 "cord.m"
              MR_hl_field(MR_mktag(1), mercury__cord__V_28_28, 1) = ((MR_Box) (mercury__cord__Cs_3));
#line 770 "cord.m"
            }
#line 770 "cord.m"
            /* direct tailcall eliminated */
#line 770 "cord.m"
            {
#line 770 "cord.m"
              MR_Word mercury__cord__HeadVar__2__tmp_copy_2 = mercury__cord__B_23;
#line 770 "cord.m"
              MR_Word mercury__cord__Cs__tmp_copy_3 = mercury__cord__V_28_28;

#line 770 "cord.m"
              mercury__cord__Cs_3 = mercury__cord__Cs__tmp_copy_3;
#line 770 "cord.m"
              mercury__cord__HeadVar__2_2 = mercury__cord__HeadVar__2__tmp_copy_2;
#line 770 "cord.m"
            }
#line 770 "cord.m"
            continue;
#line 769 "cord.m"
          }
#line 755 "cord.m"
        else
#line 755 "cord.m"
          if (((MR_tag((MR_Word) mercury__cord__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 755 "cord.m"
            {
#line 755 "cord.m"
              MR_Box mercury__cord__H_11 = (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 0));
#line 755 "cord.m"
              MR_Word mercury__cord__T_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 1)));
#line 755 "cord.m"
              MR_Word mercury__cord__V_17_17;
#line 755 "cord.m"
              MR_Box mercury__cord__STATE_VARIABLE_Acc_19_19;

#line 761 "cord.m"
              {
#line 761 "cord.m"
                mercury__cord__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 761 "cord.m"
                MR_hl_field(MR_mktag(1), mercury__cord__V_17_17, 0) = mercury__cord__H_11;
#line 761 "cord.m"
                MR_hl_field(MR_mktag(1), mercury__cord__V_17_17, 1) = ((MR_Box) (mercury__cord__T_12));
#line 761 "cord.m"
              }
#line 761 "cord.m"
              {
#line 761 "cord.m"
                mercury__cord__succeeded = mercury__list__foldr_4_p_5(mercury__cord__TypeInfo_for_T_30, mercury__cord__TypeInfo_for_U_31, mercury__cord__P_1, mercury__cord__V_17_17, mercury__cord__STATE_VARIABLE_Acc_0_4, &mercury__cord__STATE_VARIABLE_Acc_19_19);
              }
#line 755 "cord.m"
              if (mercury__cord__succeeded)
#line 765 "cord.m"
                {
#line 765 "cord.m"
                  if ((mercury__cord__Cs_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 764 "cord.m"
                    {
#line 764 "cord.m"
                      *mercury__cord__STATE_VARIABLE_Acc_5 = mercury__cord__STATE_VARIABLE_Acc_19_19;
#line 764 "cord.m"
                      mercury__cord__succeeded = MR_TRUE;
#line 764 "cord.m"
                    }
#line 765 "cord.m"
                  else
#line 766 "cord.m"
                    {
#line 766 "cord.m"
                      MR_Word mercury__cord__Y_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__Cs_3, (MR_Integer) 0)));
#line 766 "cord.m"
                      MR_Word mercury__cord__Ys_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__Cs_3, (MR_Integer) 1)));

#line 767 "cord.m"
                      /* direct tailcall eliminated */
#line 767 "cord.m"
                      {
#line 767 "cord.m"
                        MR_Word mercury__cord__HeadVar__2__tmp_copy_2 = mercury__cord__Y_13;
#line 767 "cord.m"
                        MR_Word mercury__cord__Cs__tmp_copy_3 = mercury__cord__Ys_14;
#line 767 "cord.m"
                        MR_Box mercury__cord__STATE_VARIABLE_Acc_0__tmp_copy_4 = mercury__cord__STATE_VARIABLE_Acc_19_19;

#line 767 "cord.m"
                        mercury__cord__STATE_VARIABLE_Acc_0_4 = mercury__cord__STATE_VARIABLE_Acc_0__tmp_copy_4;
#line 767 "cord.m"
                        mercury__cord__Cs_3 = mercury__cord__Cs__tmp_copy_3;
#line 767 "cord.m"
                        mercury__cord__HeadVar__2_2 = mercury__cord__HeadVar__2__tmp_copy_2;
#line 767 "cord.m"
                      }
#line 767 "cord.m"
                      continue;
#line 766 "cord.m"
                    }
#line 765 "cord.m"
                }
#line 755 "cord.m"
            }
#line 755 "cord.m"
          else
#line 755 "cord.m"
            {
#line 755 "cord.m"
              MR_Box mercury__cord__X_10 = (MR_hl_field(MR_mktag(0), mercury__cord__HeadVar__2_2, (MR_Integer) 0));
#line 755 "cord.m"
              MR_Box mercury__cord__STATE_VARIABLE_Acc_19_43;
#line 758 "cord.m"
              MR_bool MR_CALL (* mercury__cord__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__cord__P_1, (MR_Integer) 1)));

#line 758 "cord.m"
              {
#line 758 "cord.m"
                mercury__cord__succeeded = mercury__cord__func_0(((MR_Box) mercury__cord__P_1), mercury__cord__X_10, mercury__cord__STATE_VARIABLE_Acc_0_4, &mercury__cord__STATE_VARIABLE_Acc_19_43);
              }
#line 755 "cord.m"
              if (mercury__cord__succeeded)
#line 765 "cord.m"
                {
#line 765 "cord.m"
                  if ((mercury__cord__Cs_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 764 "cord.m"
                    {
#line 764 "cord.m"
                      *mercury__cord__STATE_VARIABLE_Acc_5 = mercury__cord__STATE_VARIABLE_Acc_19_43;
#line 764 "cord.m"
                      mercury__cord__succeeded = MR_TRUE;
#line 764 "cord.m"
                    }
#line 765 "cord.m"
                  else
#line 766 "cord.m"
                    {
#line 766 "cord.m"
                      MR_Word mercury__cord__Y_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__Cs_3, (MR_Integer) 0)));
#line 766 "cord.m"
                      MR_Word mercury__cord__Ys_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__Cs_3, (MR_Integer) 1)));

#line 767 "cord.m"
                      /* direct tailcall eliminated */
#line 767 "cord.m"
                      {
#line 767 "cord.m"
                        MR_Word mercury__cord__HeadVar__2__tmp_copy_2 = mercury__cord__Y_32;
#line 767 "cord.m"
                        MR_Word mercury__cord__Cs__tmp_copy_3 = mercury__cord__Ys_33;
#line 767 "cord.m"
                        MR_Box mercury__cord__STATE_VARIABLE_Acc_0__tmp_copy_4 = mercury__cord__STATE_VARIABLE_Acc_19_43;

#line 767 "cord.m"
                        mercury__cord__STATE_VARIABLE_Acc_0_4 = mercury__cord__STATE_VARIABLE_Acc_0__tmp_copy_4;
#line 767 "cord.m"
                        mercury__cord__Cs_3 = mercury__cord__Cs__tmp_copy_3;
#line 767 "cord.m"
                        mercury__cord__HeadVar__2_2 = mercury__cord__HeadVar__2__tmp_copy_2;
#line 767 "cord.m"
                      }
#line 767 "cord.m"
                      continue;
#line 766 "cord.m"
                    }
#line 765 "cord.m"
                }
#line 755 "cord.m"
            }
#line 755 "cord.m"
        return mercury__cord__succeeded;
#line 755 "cord.m"
      }
#line 755 "cord.m"
      break;
#line 755 "cord.m"
    }
#line 752 "cord.m"
}

#line 750 "cord.m"
MR_bool MR_CALL 
mercury__cord__foldr_node_pred_5_p_4(
#line 750 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_T_30,
#line 750 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_U_31,
#line 750 "cord.m"
  MR_Word mercury__cord__P_1,
#line 750 "cord.m"
  MR_Word mercury__cord__HeadVar__2_2,
#line 750 "cord.m"
  MR_Word mercury__cord__Cs_3,
#line 750 "cord.m"
  MR_Box mercury__cord__STATE_VARIABLE_Acc_0_4,
#line 750 "cord.m"
  MR_Box * mercury__cord__STATE_VARIABLE_Acc_5)
#line 750 "cord.m"
{
#line 755 "cord.m"
  while (MR_TRUE)
#line 755 "cord.m"
    {
#line 755 "cord.m"
      /* tailcall optimized into a loop */
#line 755 "cord.m"
      {
#line 755 "cord.m"
        MR_bool mercury__cord__succeeded;

#line 755 "cord.m"
        if (((MR_tag((MR_Word) mercury__cord__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 769 "cord.m"
          {
#line 769 "cord.m"
            MR_Word mercury__cord__A_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__HeadVar__2_2, (MR_Integer) 0)));
#line 769 "cord.m"
            MR_Word mercury__cord__B_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__HeadVar__2_2, (MR_Integer) 1)));
#line 769 "cord.m"
            MR_Word mercury__cord__V_28_28;

#line 770 "cord.m"
            {
#line 770 "cord.m"
              mercury__cord__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 770 "cord.m"
              MR_hl_field(MR_mktag(1), mercury__cord__V_28_28, 0) = ((MR_Box) (mercury__cord__A_22));
#line 770 "cord.m"
              MR_hl_field(MR_mktag(1), mercury__cord__V_28_28, 1) = ((MR_Box) (mercury__cord__Cs_3));
#line 770 "cord.m"
            }
#line 770 "cord.m"
            /* direct tailcall eliminated */
#line 770 "cord.m"
            {
#line 770 "cord.m"
              MR_Word mercury__cord__HeadVar__2__tmp_copy_2 = mercury__cord__B_23;
#line 770 "cord.m"
              MR_Word mercury__cord__Cs__tmp_copy_3 = mercury__cord__V_28_28;

#line 770 "cord.m"
              mercury__cord__Cs_3 = mercury__cord__Cs__tmp_copy_3;
#line 770 "cord.m"
              mercury__cord__HeadVar__2_2 = mercury__cord__HeadVar__2__tmp_copy_2;
#line 770 "cord.m"
            }
#line 770 "cord.m"
            continue;
#line 769 "cord.m"
          }
#line 755 "cord.m"
        else
#line 755 "cord.m"
          if (((MR_tag((MR_Word) mercury__cord__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 755 "cord.m"
            {
#line 755 "cord.m"
              MR_Box mercury__cord__H_11 = (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 0));
#line 755 "cord.m"
              MR_Word mercury__cord__T_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 1)));
#line 755 "cord.m"
              MR_Word mercury__cord__V_17_17;
#line 755 "cord.m"
              MR_Box mercury__cord__STATE_VARIABLE_Acc_19_19;

#line 761 "cord.m"
              {
#line 761 "cord.m"
                mercury__cord__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 761 "cord.m"
                MR_hl_field(MR_mktag(1), mercury__cord__V_17_17, 0) = mercury__cord__H_11;
#line 761 "cord.m"
                MR_hl_field(MR_mktag(1), mercury__cord__V_17_17, 1) = ((MR_Box) (mercury__cord__T_12));
#line 761 "cord.m"
              }
#line 761 "cord.m"
              {
#line 761 "cord.m"
                mercury__cord__succeeded = mercury__list__foldr_4_p_4(mercury__cord__TypeInfo_for_T_30, mercury__cord__TypeInfo_for_U_31, mercury__cord__P_1, mercury__cord__V_17_17, mercury__cord__STATE_VARIABLE_Acc_0_4, &mercury__cord__STATE_VARIABLE_Acc_19_19);
              }
#line 755 "cord.m"
              if (mercury__cord__succeeded)
#line 765 "cord.m"
                {
#line 765 "cord.m"
                  if ((mercury__cord__Cs_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 764 "cord.m"
                    {
#line 764 "cord.m"
                      *mercury__cord__STATE_VARIABLE_Acc_5 = mercury__cord__STATE_VARIABLE_Acc_19_19;
#line 764 "cord.m"
                      mercury__cord__succeeded = MR_TRUE;
#line 764 "cord.m"
                    }
#line 765 "cord.m"
                  else
#line 766 "cord.m"
                    {
#line 766 "cord.m"
                      MR_Word mercury__cord__Y_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__Cs_3, (MR_Integer) 0)));
#line 766 "cord.m"
                      MR_Word mercury__cord__Ys_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__Cs_3, (MR_Integer) 1)));

#line 767 "cord.m"
                      /* direct tailcall eliminated */
#line 767 "cord.m"
                      {
#line 767 "cord.m"
                        MR_Word mercury__cord__HeadVar__2__tmp_copy_2 = mercury__cord__Y_13;
#line 767 "cord.m"
                        MR_Word mercury__cord__Cs__tmp_copy_3 = mercury__cord__Ys_14;
#line 767 "cord.m"
                        MR_Box mercury__cord__STATE_VARIABLE_Acc_0__tmp_copy_4 = mercury__cord__STATE_VARIABLE_Acc_19_19;

#line 767 "cord.m"
                        mercury__cord__STATE_VARIABLE_Acc_0_4 = mercury__cord__STATE_VARIABLE_Acc_0__tmp_copy_4;
#line 767 "cord.m"
                        mercury__cord__Cs_3 = mercury__cord__Cs__tmp_copy_3;
#line 767 "cord.m"
                        mercury__cord__HeadVar__2_2 = mercury__cord__HeadVar__2__tmp_copy_2;
#line 767 "cord.m"
                      }
#line 767 "cord.m"
                      continue;
#line 766 "cord.m"
                    }
#line 765 "cord.m"
                }
#line 755 "cord.m"
            }
#line 755 "cord.m"
          else
#line 755 "cord.m"
            {
#line 755 "cord.m"
              MR_Box mercury__cord__X_10 = (MR_hl_field(MR_mktag(0), mercury__cord__HeadVar__2_2, (MR_Integer) 0));
#line 755 "cord.m"
              MR_Box mercury__cord__STATE_VARIABLE_Acc_19_43;
#line 758 "cord.m"
              MR_bool MR_CALL (* mercury__cord__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__cord__P_1, (MR_Integer) 1)));

#line 758 "cord.m"
              {
#line 758 "cord.m"
                mercury__cord__succeeded = mercury__cord__func_0(((MR_Box) mercury__cord__P_1), mercury__cord__X_10, mercury__cord__STATE_VARIABLE_Acc_0_4, &mercury__cord__STATE_VARIABLE_Acc_19_43);
              }
#line 755 "cord.m"
              if (mercury__cord__succeeded)
#line 765 "cord.m"
                {
#line 765 "cord.m"
                  if ((mercury__cord__Cs_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 764 "cord.m"
                    {
#line 764 "cord.m"
                      *mercury__cord__STATE_VARIABLE_Acc_5 = mercury__cord__STATE_VARIABLE_Acc_19_43;
#line 764 "cord.m"
                      mercury__cord__succeeded = MR_TRUE;
#line 764 "cord.m"
                    }
#line 765 "cord.m"
                  else
#line 766 "cord.m"
                    {
#line 766 "cord.m"
                      MR_Word mercury__cord__Y_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__Cs_3, (MR_Integer) 0)));
#line 766 "cord.m"
                      MR_Word mercury__cord__Ys_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__Cs_3, (MR_Integer) 1)));

#line 767 "cord.m"
                      /* direct tailcall eliminated */
#line 767 "cord.m"
                      {
#line 767 "cord.m"
                        MR_Word mercury__cord__HeadVar__2__tmp_copy_2 = mercury__cord__Y_32;
#line 767 "cord.m"
                        MR_Word mercury__cord__Cs__tmp_copy_3 = mercury__cord__Ys_33;
#line 767 "cord.m"
                        MR_Box mercury__cord__STATE_VARIABLE_Acc_0__tmp_copy_4 = mercury__cord__STATE_VARIABLE_Acc_19_43;

#line 767 "cord.m"
                        mercury__cord__STATE_VARIABLE_Acc_0_4 = mercury__cord__STATE_VARIABLE_Acc_0__tmp_copy_4;
#line 767 "cord.m"
                        mercury__cord__Cs_3 = mercury__cord__Cs__tmp_copy_3;
#line 767 "cord.m"
                        mercury__cord__HeadVar__2_2 = mercury__cord__HeadVar__2__tmp_copy_2;
#line 767 "cord.m"
                      }
#line 767 "cord.m"
                      continue;
#line 766 "cord.m"
                    }
#line 765 "cord.m"
                }
#line 755 "cord.m"
            }
#line 755 "cord.m"
        return mercury__cord__succeeded;
#line 755 "cord.m"
      }
#line 755 "cord.m"
      break;
#line 755 "cord.m"
    }
#line 750 "cord.m"
}

#line 748 "cord.m"
MR_bool MR_CALL 
mercury__cord__foldr_node_pred_5_p_3(
#line 748 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_T_30,
#line 748 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_U_31,
#line 748 "cord.m"
  MR_Word mercury__cord__P_1,
#line 748 "cord.m"
  MR_Word mercury__cord__HeadVar__2_2,
#line 748 "cord.m"
  MR_Word mercury__cord__Cs_3,
#line 748 "cord.m"
  MR_Box mercury__cord__STATE_VARIABLE_Acc_0_4,
#line 748 "cord.m"
  MR_Box * mercury__cord__STATE_VARIABLE_Acc_5)
#line 748 "cord.m"
{
#line 755 "cord.m"
  while (MR_TRUE)
#line 755 "cord.m"
    {
#line 755 "cord.m"
      /* tailcall optimized into a loop */
#line 755 "cord.m"
      {
#line 755 "cord.m"
        MR_bool mercury__cord__succeeded;

#line 755 "cord.m"
        if (((MR_tag((MR_Word) mercury__cord__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 769 "cord.m"
          {
#line 769 "cord.m"
            MR_Word mercury__cord__A_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__HeadVar__2_2, (MR_Integer) 0)));
#line 769 "cord.m"
            MR_Word mercury__cord__B_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__HeadVar__2_2, (MR_Integer) 1)));
#line 769 "cord.m"
            MR_Word mercury__cord__V_28_28;

#line 770 "cord.m"
            {
#line 770 "cord.m"
              mercury__cord__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 770 "cord.m"
              MR_hl_field(MR_mktag(1), mercury__cord__V_28_28, 0) = ((MR_Box) (mercury__cord__A_22));
#line 770 "cord.m"
              MR_hl_field(MR_mktag(1), mercury__cord__V_28_28, 1) = ((MR_Box) (mercury__cord__Cs_3));
#line 770 "cord.m"
            }
#line 770 "cord.m"
            /* direct tailcall eliminated */
#line 770 "cord.m"
            {
#line 770 "cord.m"
              MR_Word mercury__cord__HeadVar__2__tmp_copy_2 = mercury__cord__B_23;
#line 770 "cord.m"
              MR_Word mercury__cord__Cs__tmp_copy_3 = mercury__cord__V_28_28;

#line 770 "cord.m"
              mercury__cord__Cs_3 = mercury__cord__Cs__tmp_copy_3;
#line 770 "cord.m"
              mercury__cord__HeadVar__2_2 = mercury__cord__HeadVar__2__tmp_copy_2;
#line 770 "cord.m"
            }
#line 770 "cord.m"
            continue;
#line 769 "cord.m"
          }
#line 755 "cord.m"
        else
#line 755 "cord.m"
          if (((MR_tag((MR_Word) mercury__cord__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 755 "cord.m"
            {
#line 755 "cord.m"
              MR_Box mercury__cord__H_11 = (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 0));
#line 755 "cord.m"
              MR_Word mercury__cord__T_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 1)));
#line 755 "cord.m"
              MR_Word mercury__cord__V_17_17;
#line 755 "cord.m"
              MR_Box mercury__cord__STATE_VARIABLE_Acc_19_19;

#line 761 "cord.m"
              {
#line 761 "cord.m"
                mercury__cord__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 761 "cord.m"
                MR_hl_field(MR_mktag(1), mercury__cord__V_17_17, 0) = mercury__cord__H_11;
#line 761 "cord.m"
                MR_hl_field(MR_mktag(1), mercury__cord__V_17_17, 1) = ((MR_Box) (mercury__cord__T_12));
#line 761 "cord.m"
              }
#line 761 "cord.m"
              {
#line 761 "cord.m"
                mercury__cord__succeeded = mercury__list__foldr_4_p_3(mercury__cord__TypeInfo_for_T_30, mercury__cord__TypeInfo_for_U_31, mercury__cord__P_1, mercury__cord__V_17_17, mercury__cord__STATE_VARIABLE_Acc_0_4, &mercury__cord__STATE_VARIABLE_Acc_19_19);
              }
#line 755 "cord.m"
              if (mercury__cord__succeeded)
#line 765 "cord.m"
                {
#line 765 "cord.m"
                  if ((mercury__cord__Cs_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 764 "cord.m"
                    {
#line 764 "cord.m"
                      *mercury__cord__STATE_VARIABLE_Acc_5 = mercury__cord__STATE_VARIABLE_Acc_19_19;
#line 764 "cord.m"
                      mercury__cord__succeeded = MR_TRUE;
#line 764 "cord.m"
                    }
#line 765 "cord.m"
                  else
#line 766 "cord.m"
                    {
#line 766 "cord.m"
                      MR_Word mercury__cord__Y_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__Cs_3, (MR_Integer) 0)));
#line 766 "cord.m"
                      MR_Word mercury__cord__Ys_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__Cs_3, (MR_Integer) 1)));

#line 767 "cord.m"
                      /* direct tailcall eliminated */
#line 767 "cord.m"
                      {
#line 767 "cord.m"
                        MR_Word mercury__cord__HeadVar__2__tmp_copy_2 = mercury__cord__Y_13;
#line 767 "cord.m"
                        MR_Word mercury__cord__Cs__tmp_copy_3 = mercury__cord__Ys_14;
#line 767 "cord.m"
                        MR_Box mercury__cord__STATE_VARIABLE_Acc_0__tmp_copy_4 = mercury__cord__STATE_VARIABLE_Acc_19_19;

#line 767 "cord.m"
                        mercury__cord__STATE_VARIABLE_Acc_0_4 = mercury__cord__STATE_VARIABLE_Acc_0__tmp_copy_4;
#line 767 "cord.m"
                        mercury__cord__Cs_3 = mercury__cord__Cs__tmp_copy_3;
#line 767 "cord.m"
                        mercury__cord__HeadVar__2_2 = mercury__cord__HeadVar__2__tmp_copy_2;
#line 767 "cord.m"
                      }
#line 767 "cord.m"
                      continue;
#line 766 "cord.m"
                    }
#line 765 "cord.m"
                }
#line 755 "cord.m"
            }
#line 755 "cord.m"
          else
#line 755 "cord.m"
            {
#line 755 "cord.m"
              MR_Box mercury__cord__X_10 = (MR_hl_field(MR_mktag(0), mercury__cord__HeadVar__2_2, (MR_Integer) 0));
#line 755 "cord.m"
              MR_Box mercury__cord__STATE_VARIABLE_Acc_19_43;
#line 758 "cord.m"
              MR_bool MR_CALL (* mercury__cord__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__cord__P_1, (MR_Integer) 1)));

#line 758 "cord.m"
              {
#line 758 "cord.m"
                mercury__cord__succeeded = mercury__cord__func_0(((MR_Box) mercury__cord__P_1), mercury__cord__X_10, mercury__cord__STATE_VARIABLE_Acc_0_4, &mercury__cord__STATE_VARIABLE_Acc_19_43);
              }
#line 755 "cord.m"
              if (mercury__cord__succeeded)
#line 765 "cord.m"
                {
#line 765 "cord.m"
                  if ((mercury__cord__Cs_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 764 "cord.m"
                    {
#line 764 "cord.m"
                      *mercury__cord__STATE_VARIABLE_Acc_5 = mercury__cord__STATE_VARIABLE_Acc_19_43;
#line 764 "cord.m"
                      mercury__cord__succeeded = MR_TRUE;
#line 764 "cord.m"
                    }
#line 765 "cord.m"
                  else
#line 766 "cord.m"
                    {
#line 766 "cord.m"
                      MR_Word mercury__cord__Y_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__Cs_3, (MR_Integer) 0)));
#line 766 "cord.m"
                      MR_Word mercury__cord__Ys_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__Cs_3, (MR_Integer) 1)));

#line 767 "cord.m"
                      /* direct tailcall eliminated */
#line 767 "cord.m"
                      {
#line 767 "cord.m"
                        MR_Word mercury__cord__HeadVar__2__tmp_copy_2 = mercury__cord__Y_32;
#line 767 "cord.m"
                        MR_Word mercury__cord__Cs__tmp_copy_3 = mercury__cord__Ys_33;
#line 767 "cord.m"
                        MR_Box mercury__cord__STATE_VARIABLE_Acc_0__tmp_copy_4 = mercury__cord__STATE_VARIABLE_Acc_19_43;

#line 767 "cord.m"
                        mercury__cord__STATE_VARIABLE_Acc_0_4 = mercury__cord__STATE_VARIABLE_Acc_0__tmp_copy_4;
#line 767 "cord.m"
                        mercury__cord__Cs_3 = mercury__cord__Cs__tmp_copy_3;
#line 767 "cord.m"
                        mercury__cord__HeadVar__2_2 = mercury__cord__HeadVar__2__tmp_copy_2;
#line 767 "cord.m"
                      }
#line 767 "cord.m"
                      continue;
#line 766 "cord.m"
                    }
#line 765 "cord.m"
                }
#line 755 "cord.m"
            }
#line 755 "cord.m"
        return mercury__cord__succeeded;
#line 755 "cord.m"
      }
#line 755 "cord.m"
      break;
#line 755 "cord.m"
    }
#line 748 "cord.m"
}

#line 747 "cord.m"
void MR_CALL 
mercury__cord__foldr_node_pred_5_p_2(
#line 747 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_T_30,
#line 747 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_U_31,
#line 747 "cord.m"
  MR_Word mercury__cord__P_1,
#line 747 "cord.m"
  MR_Word mercury__cord__HeadVar__2_2,
#line 747 "cord.m"
  MR_Word mercury__cord__Cs_3,
#line 747 "cord.m"
  MR_Box mercury__cord__STATE_VARIABLE_Acc_0_4,
#line 747 "cord.m"
  MR_Box * mercury__cord__STATE_VARIABLE_Acc_5)
#line 747 "cord.m"
{
#line 755 "cord.m"
  while (MR_TRUE)
#line 755 "cord.m"
    {
#line 755 "cord.m"
      /* tailcall optimized into a loop */
#line 755 "cord.m"
      {
#line 755 "cord.m"
        MR_bool mercury__cord__succeeded;

#line 755 "cord.m"
        if (((MR_tag((MR_Word) mercury__cord__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 769 "cord.m"
          {
#line 769 "cord.m"
            MR_Word mercury__cord__A_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__HeadVar__2_2, (MR_Integer) 0)));
#line 769 "cord.m"
            MR_Word mercury__cord__B_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__HeadVar__2_2, (MR_Integer) 1)));
#line 769 "cord.m"
            MR_Word mercury__cord__V_28_28;

#line 770 "cord.m"
            {
#line 770 "cord.m"
              mercury__cord__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 770 "cord.m"
              MR_hl_field(MR_mktag(1), mercury__cord__V_28_28, 0) = ((MR_Box) (mercury__cord__A_22));
#line 770 "cord.m"
              MR_hl_field(MR_mktag(1), mercury__cord__V_28_28, 1) = ((MR_Box) (mercury__cord__Cs_3));
#line 770 "cord.m"
            }
#line 770 "cord.m"
            /* direct tailcall eliminated */
#line 770 "cord.m"
            {
#line 770 "cord.m"
              MR_Word mercury__cord__HeadVar__2__tmp_copy_2 = mercury__cord__B_23;
#line 770 "cord.m"
              MR_Word mercury__cord__Cs__tmp_copy_3 = mercury__cord__V_28_28;

#line 770 "cord.m"
              mercury__cord__Cs_3 = mercury__cord__Cs__tmp_copy_3;
#line 770 "cord.m"
              mercury__cord__HeadVar__2_2 = mercury__cord__HeadVar__2__tmp_copy_2;
#line 770 "cord.m"
            }
#line 770 "cord.m"
            continue;
#line 769 "cord.m"
          }
#line 755 "cord.m"
        else
#line 755 "cord.m"
          if (((MR_tag((MR_Word) mercury__cord__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 755 "cord.m"
            {
#line 755 "cord.m"
              MR_Box mercury__cord__H_11 = (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 0));
#line 755 "cord.m"
              MR_Word mercury__cord__T_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 1)));
#line 755 "cord.m"
              MR_Word mercury__cord__V_17_17;
#line 755 "cord.m"
              MR_Box mercury__cord__STATE_VARIABLE_Acc_19_19;

#line 761 "cord.m"
              {
#line 761 "cord.m"
                mercury__cord__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 761 "cord.m"
                MR_hl_field(MR_mktag(1), mercury__cord__V_17_17, 0) = mercury__cord__H_11;
#line 761 "cord.m"
                MR_hl_field(MR_mktag(1), mercury__cord__V_17_17, 1) = ((MR_Box) (mercury__cord__T_12));
#line 761 "cord.m"
              }
#line 761 "cord.m"
              {
#line 761 "cord.m"
                mercury__list__foldr_4_p_2(mercury__cord__TypeInfo_for_T_30, mercury__cord__TypeInfo_for_U_31, mercury__cord__P_1, mercury__cord__V_17_17, mercury__cord__STATE_VARIABLE_Acc_0_4, &mercury__cord__STATE_VARIABLE_Acc_19_19);
              }
#line 765 "cord.m"
              if ((mercury__cord__Cs_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 764 "cord.m"
                *mercury__cord__STATE_VARIABLE_Acc_5 = mercury__cord__STATE_VARIABLE_Acc_19_19;
#line 765 "cord.m"
              else
#line 766 "cord.m"
                {
#line 766 "cord.m"
                  MR_Word mercury__cord__Y_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__Cs_3, (MR_Integer) 0)));
#line 766 "cord.m"
                  MR_Word mercury__cord__Ys_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__Cs_3, (MR_Integer) 1)));

#line 767 "cord.m"
                  /* direct tailcall eliminated */
#line 767 "cord.m"
                  {
#line 767 "cord.m"
                    MR_Word mercury__cord__HeadVar__2__tmp_copy_2 = mercury__cord__Y_13;
#line 767 "cord.m"
                    MR_Word mercury__cord__Cs__tmp_copy_3 = mercury__cord__Ys_14;
#line 767 "cord.m"
                    MR_Box mercury__cord__STATE_VARIABLE_Acc_0__tmp_copy_4 = mercury__cord__STATE_VARIABLE_Acc_19_19;

#line 767 "cord.m"
                    mercury__cord__STATE_VARIABLE_Acc_0_4 = mercury__cord__STATE_VARIABLE_Acc_0__tmp_copy_4;
#line 767 "cord.m"
                    mercury__cord__Cs_3 = mercury__cord__Cs__tmp_copy_3;
#line 767 "cord.m"
                    mercury__cord__HeadVar__2_2 = mercury__cord__HeadVar__2__tmp_copy_2;
#line 767 "cord.m"
                  }
#line 767 "cord.m"
                  continue;
#line 766 "cord.m"
                }
#line 755 "cord.m"
            }
#line 755 "cord.m"
          else
#line 755 "cord.m"
            {
#line 755 "cord.m"
              MR_Box mercury__cord__X_10 = (MR_hl_field(MR_mktag(0), mercury__cord__HeadVar__2_2, (MR_Integer) 0));
#line 755 "cord.m"
              MR_Box mercury__cord__STATE_VARIABLE_Acc_19_43;
#line 758 "cord.m"
              void MR_CALL (* mercury__cord__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__cord__P_1, (MR_Integer) 1)));

#line 758 "cord.m"
              {
#line 758 "cord.m"
                mercury__cord__func_0(((MR_Box) mercury__cord__P_1), mercury__cord__X_10, mercury__cord__STATE_VARIABLE_Acc_0_4, &mercury__cord__STATE_VARIABLE_Acc_19_43);
              }
#line 765 "cord.m"
              if ((mercury__cord__Cs_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 764 "cord.m"
                *mercury__cord__STATE_VARIABLE_Acc_5 = mercury__cord__STATE_VARIABLE_Acc_19_43;
#line 765 "cord.m"
              else
#line 766 "cord.m"
                {
#line 766 "cord.m"
                  MR_Word mercury__cord__Y_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__Cs_3, (MR_Integer) 0)));
#line 766 "cord.m"
                  MR_Word mercury__cord__Ys_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__Cs_3, (MR_Integer) 1)));

#line 767 "cord.m"
                  /* direct tailcall eliminated */
#line 767 "cord.m"
                  {
#line 767 "cord.m"
                    MR_Word mercury__cord__HeadVar__2__tmp_copy_2 = mercury__cord__Y_32;
#line 767 "cord.m"
                    MR_Word mercury__cord__Cs__tmp_copy_3 = mercury__cord__Ys_33;
#line 767 "cord.m"
                    MR_Box mercury__cord__STATE_VARIABLE_Acc_0__tmp_copy_4 = mercury__cord__STATE_VARIABLE_Acc_19_43;

#line 767 "cord.m"
                    mercury__cord__STATE_VARIABLE_Acc_0_4 = mercury__cord__STATE_VARIABLE_Acc_0__tmp_copy_4;
#line 767 "cord.m"
                    mercury__cord__Cs_3 = mercury__cord__Cs__tmp_copy_3;
#line 767 "cord.m"
                    mercury__cord__HeadVar__2_2 = mercury__cord__HeadVar__2__tmp_copy_2;
#line 767 "cord.m"
                  }
#line 767 "cord.m"
                  continue;
#line 766 "cord.m"
                }
#line 755 "cord.m"
            }
#line 755 "cord.m"
      }
#line 755 "cord.m"
      break;
#line 755 "cord.m"
    }
#line 747 "cord.m"
}

#line 745 "cord.m"
void MR_CALL 
mercury__cord__foldr_node_pred_5_p_1(
#line 745 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_T_30,
#line 745 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_U_31,
#line 745 "cord.m"
  MR_Word mercury__cord__P_1,
#line 745 "cord.m"
  MR_Word mercury__cord__HeadVar__2_2,
#line 745 "cord.m"
  MR_Word mercury__cord__Cs_3,
#line 745 "cord.m"
  MR_Box mercury__cord__STATE_VARIABLE_Acc_0_4,
#line 745 "cord.m"
  MR_Box * mercury__cord__STATE_VARIABLE_Acc_5)
#line 745 "cord.m"
{
#line 755 "cord.m"
  while (MR_TRUE)
#line 755 "cord.m"
    {
#line 755 "cord.m"
      /* tailcall optimized into a loop */
#line 755 "cord.m"
      {
#line 755 "cord.m"
        MR_bool mercury__cord__succeeded;

#line 755 "cord.m"
        if (((MR_tag((MR_Word) mercury__cord__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 769 "cord.m"
          {
#line 769 "cord.m"
            MR_Word mercury__cord__A_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__HeadVar__2_2, (MR_Integer) 0)));
#line 769 "cord.m"
            MR_Word mercury__cord__B_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__HeadVar__2_2, (MR_Integer) 1)));
#line 769 "cord.m"
            MR_Word mercury__cord__V_28_28;

#line 770 "cord.m"
            {
#line 770 "cord.m"
              mercury__cord__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 770 "cord.m"
              MR_hl_field(MR_mktag(1), mercury__cord__V_28_28, 0) = ((MR_Box) (mercury__cord__A_22));
#line 770 "cord.m"
              MR_hl_field(MR_mktag(1), mercury__cord__V_28_28, 1) = ((MR_Box) (mercury__cord__Cs_3));
#line 770 "cord.m"
            }
#line 770 "cord.m"
            /* direct tailcall eliminated */
#line 770 "cord.m"
            {
#line 770 "cord.m"
              MR_Word mercury__cord__HeadVar__2__tmp_copy_2 = mercury__cord__B_23;
#line 770 "cord.m"
              MR_Word mercury__cord__Cs__tmp_copy_3 = mercury__cord__V_28_28;

#line 770 "cord.m"
              mercury__cord__Cs_3 = mercury__cord__Cs__tmp_copy_3;
#line 770 "cord.m"
              mercury__cord__HeadVar__2_2 = mercury__cord__HeadVar__2__tmp_copy_2;
#line 770 "cord.m"
            }
#line 770 "cord.m"
            continue;
#line 769 "cord.m"
          }
#line 755 "cord.m"
        else
#line 755 "cord.m"
          if (((MR_tag((MR_Word) mercury__cord__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 755 "cord.m"
            {
#line 755 "cord.m"
              MR_Box mercury__cord__H_11 = (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 0));
#line 755 "cord.m"
              MR_Word mercury__cord__T_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 1)));
#line 755 "cord.m"
              MR_Word mercury__cord__V_17_17;
#line 755 "cord.m"
              MR_Box mercury__cord__STATE_VARIABLE_Acc_19_19;

#line 761 "cord.m"
              {
#line 761 "cord.m"
                mercury__cord__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 761 "cord.m"
                MR_hl_field(MR_mktag(1), mercury__cord__V_17_17, 0) = mercury__cord__H_11;
#line 761 "cord.m"
                MR_hl_field(MR_mktag(1), mercury__cord__V_17_17, 1) = ((MR_Box) (mercury__cord__T_12));
#line 761 "cord.m"
              }
#line 761 "cord.m"
              {
#line 761 "cord.m"
                mercury__list__foldr_4_p_1(mercury__cord__TypeInfo_for_T_30, mercury__cord__TypeInfo_for_U_31, mercury__cord__P_1, mercury__cord__V_17_17, mercury__cord__STATE_VARIABLE_Acc_0_4, &mercury__cord__STATE_VARIABLE_Acc_19_19);
              }
#line 765 "cord.m"
              if ((mercury__cord__Cs_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 764 "cord.m"
                *mercury__cord__STATE_VARIABLE_Acc_5 = mercury__cord__STATE_VARIABLE_Acc_19_19;
#line 765 "cord.m"
              else
#line 766 "cord.m"
                {
#line 766 "cord.m"
                  MR_Word mercury__cord__Y_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__Cs_3, (MR_Integer) 0)));
#line 766 "cord.m"
                  MR_Word mercury__cord__Ys_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__Cs_3, (MR_Integer) 1)));

#line 767 "cord.m"
                  /* direct tailcall eliminated */
#line 767 "cord.m"
                  {
#line 767 "cord.m"
                    MR_Word mercury__cord__HeadVar__2__tmp_copy_2 = mercury__cord__Y_13;
#line 767 "cord.m"
                    MR_Word mercury__cord__Cs__tmp_copy_3 = mercury__cord__Ys_14;
#line 767 "cord.m"
                    MR_Box mercury__cord__STATE_VARIABLE_Acc_0__tmp_copy_4 = mercury__cord__STATE_VARIABLE_Acc_19_19;

#line 767 "cord.m"
                    mercury__cord__STATE_VARIABLE_Acc_0_4 = mercury__cord__STATE_VARIABLE_Acc_0__tmp_copy_4;
#line 767 "cord.m"
                    mercury__cord__Cs_3 = mercury__cord__Cs__tmp_copy_3;
#line 767 "cord.m"
                    mercury__cord__HeadVar__2_2 = mercury__cord__HeadVar__2__tmp_copy_2;
#line 767 "cord.m"
                  }
#line 767 "cord.m"
                  continue;
#line 766 "cord.m"
                }
#line 755 "cord.m"
            }
#line 755 "cord.m"
          else
#line 755 "cord.m"
            {
#line 755 "cord.m"
              MR_Box mercury__cord__X_10 = (MR_hl_field(MR_mktag(0), mercury__cord__HeadVar__2_2, (MR_Integer) 0));
#line 755 "cord.m"
              MR_Box mercury__cord__STATE_VARIABLE_Acc_19_43;
#line 758 "cord.m"
              void MR_CALL (* mercury__cord__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__cord__P_1, (MR_Integer) 1)));

#line 758 "cord.m"
              {
#line 758 "cord.m"
                mercury__cord__func_0(((MR_Box) mercury__cord__P_1), mercury__cord__X_10, mercury__cord__STATE_VARIABLE_Acc_0_4, &mercury__cord__STATE_VARIABLE_Acc_19_43);
              }
#line 765 "cord.m"
              if ((mercury__cord__Cs_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 764 "cord.m"
                *mercury__cord__STATE_VARIABLE_Acc_5 = mercury__cord__STATE_VARIABLE_Acc_19_43;
#line 765 "cord.m"
              else
#line 766 "cord.m"
                {
#line 766 "cord.m"
                  MR_Word mercury__cord__Y_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__Cs_3, (MR_Integer) 0)));
#line 766 "cord.m"
                  MR_Word mercury__cord__Ys_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__Cs_3, (MR_Integer) 1)));

#line 767 "cord.m"
                  /* direct tailcall eliminated */
#line 767 "cord.m"
                  {
#line 767 "cord.m"
                    MR_Word mercury__cord__HeadVar__2__tmp_copy_2 = mercury__cord__Y_32;
#line 767 "cord.m"
                    MR_Word mercury__cord__Cs__tmp_copy_3 = mercury__cord__Ys_33;
#line 767 "cord.m"
                    MR_Box mercury__cord__STATE_VARIABLE_Acc_0__tmp_copy_4 = mercury__cord__STATE_VARIABLE_Acc_19_43;

#line 767 "cord.m"
                    mercury__cord__STATE_VARIABLE_Acc_0_4 = mercury__cord__STATE_VARIABLE_Acc_0__tmp_copy_4;
#line 767 "cord.m"
                    mercury__cord__Cs_3 = mercury__cord__Cs__tmp_copy_3;
#line 767 "cord.m"
                    mercury__cord__HeadVar__2_2 = mercury__cord__HeadVar__2__tmp_copy_2;
#line 767 "cord.m"
                  }
#line 767 "cord.m"
                  continue;
#line 766 "cord.m"
                }
#line 755 "cord.m"
            }
#line 755 "cord.m"
      }
#line 755 "cord.m"
      break;
#line 755 "cord.m"
    }
#line 745 "cord.m"
}

#line 744 "cord.m"
void MR_CALL 
mercury__cord__foldr_node_pred_5_p_0(
#line 744 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_T_30,
#line 744 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_U_31,
#line 744 "cord.m"
  MR_Word mercury__cord__P_1,
#line 744 "cord.m"
  MR_Word mercury__cord__HeadVar__2_2,
#line 744 "cord.m"
  MR_Word mercury__cord__Cs_3,
#line 744 "cord.m"
  MR_Box mercury__cord__STATE_VARIABLE_Acc_0_4,
#line 744 "cord.m"
  MR_Box * mercury__cord__STATE_VARIABLE_Acc_5)
#line 744 "cord.m"
{
#line 755 "cord.m"
  while (MR_TRUE)
#line 755 "cord.m"
    {
#line 755 "cord.m"
      /* tailcall optimized into a loop */
#line 755 "cord.m"
      {
#line 755 "cord.m"
        MR_bool mercury__cord__succeeded;

#line 755 "cord.m"
        if (((MR_tag((MR_Word) mercury__cord__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 769 "cord.m"
          {
#line 769 "cord.m"
            MR_Word mercury__cord__A_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__HeadVar__2_2, (MR_Integer) 0)));
#line 769 "cord.m"
            MR_Word mercury__cord__B_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__HeadVar__2_2, (MR_Integer) 1)));
#line 769 "cord.m"
            MR_Word mercury__cord__V_28_28;

#line 770 "cord.m"
            {
#line 770 "cord.m"
              mercury__cord__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 770 "cord.m"
              MR_hl_field(MR_mktag(1), mercury__cord__V_28_28, 0) = ((MR_Box) (mercury__cord__A_22));
#line 770 "cord.m"
              MR_hl_field(MR_mktag(1), mercury__cord__V_28_28, 1) = ((MR_Box) (mercury__cord__Cs_3));
#line 770 "cord.m"
            }
#line 770 "cord.m"
            /* direct tailcall eliminated */
#line 770 "cord.m"
            {
#line 770 "cord.m"
              MR_Word mercury__cord__HeadVar__2__tmp_copy_2 = mercury__cord__B_23;
#line 770 "cord.m"
              MR_Word mercury__cord__Cs__tmp_copy_3 = mercury__cord__V_28_28;

#line 770 "cord.m"
              mercury__cord__Cs_3 = mercury__cord__Cs__tmp_copy_3;
#line 770 "cord.m"
              mercury__cord__HeadVar__2_2 = mercury__cord__HeadVar__2__tmp_copy_2;
#line 770 "cord.m"
            }
#line 770 "cord.m"
            continue;
#line 769 "cord.m"
          }
#line 755 "cord.m"
        else
#line 755 "cord.m"
          if (((MR_tag((MR_Word) mercury__cord__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 755 "cord.m"
            {
#line 755 "cord.m"
              MR_Box mercury__cord__H_11 = (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 0));
#line 755 "cord.m"
              MR_Word mercury__cord__T_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 1)));
#line 755 "cord.m"
              MR_Word mercury__cord__V_17_17;
#line 755 "cord.m"
              MR_Box mercury__cord__STATE_VARIABLE_Acc_19_19;

#line 761 "cord.m"
              {
#line 761 "cord.m"
                mercury__cord__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 761 "cord.m"
                MR_hl_field(MR_mktag(1), mercury__cord__V_17_17, 0) = mercury__cord__H_11;
#line 761 "cord.m"
                MR_hl_field(MR_mktag(1), mercury__cord__V_17_17, 1) = ((MR_Box) (mercury__cord__T_12));
#line 761 "cord.m"
              }
#line 761 "cord.m"
              {
#line 761 "cord.m"
                mercury__list__foldr_4_p_0(mercury__cord__TypeInfo_for_T_30, mercury__cord__TypeInfo_for_U_31, mercury__cord__P_1, mercury__cord__V_17_17, mercury__cord__STATE_VARIABLE_Acc_0_4, &mercury__cord__STATE_VARIABLE_Acc_19_19);
              }
#line 765 "cord.m"
              if ((mercury__cord__Cs_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 764 "cord.m"
                *mercury__cord__STATE_VARIABLE_Acc_5 = mercury__cord__STATE_VARIABLE_Acc_19_19;
#line 765 "cord.m"
              else
#line 766 "cord.m"
                {
#line 766 "cord.m"
                  MR_Word mercury__cord__Y_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__Cs_3, (MR_Integer) 0)));
#line 766 "cord.m"
                  MR_Word mercury__cord__Ys_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__Cs_3, (MR_Integer) 1)));

#line 767 "cord.m"
                  /* direct tailcall eliminated */
#line 767 "cord.m"
                  {
#line 767 "cord.m"
                    MR_Word mercury__cord__HeadVar__2__tmp_copy_2 = mercury__cord__Y_13;
#line 767 "cord.m"
                    MR_Word mercury__cord__Cs__tmp_copy_3 = mercury__cord__Ys_14;
#line 767 "cord.m"
                    MR_Box mercury__cord__STATE_VARIABLE_Acc_0__tmp_copy_4 = mercury__cord__STATE_VARIABLE_Acc_19_19;

#line 767 "cord.m"
                    mercury__cord__STATE_VARIABLE_Acc_0_4 = mercury__cord__STATE_VARIABLE_Acc_0__tmp_copy_4;
#line 767 "cord.m"
                    mercury__cord__Cs_3 = mercury__cord__Cs__tmp_copy_3;
#line 767 "cord.m"
                    mercury__cord__HeadVar__2_2 = mercury__cord__HeadVar__2__tmp_copy_2;
#line 767 "cord.m"
                  }
#line 767 "cord.m"
                  continue;
#line 766 "cord.m"
                }
#line 755 "cord.m"
            }
#line 755 "cord.m"
          else
#line 755 "cord.m"
            {
#line 755 "cord.m"
              MR_Box mercury__cord__X_10 = (MR_hl_field(MR_mktag(0), mercury__cord__HeadVar__2_2, (MR_Integer) 0));
#line 755 "cord.m"
              MR_Box mercury__cord__STATE_VARIABLE_Acc_19_43;
#line 758 "cord.m"
              void MR_CALL (* mercury__cord__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__cord__P_1, (MR_Integer) 1)));

#line 758 "cord.m"
              {
#line 758 "cord.m"
                mercury__cord__func_0(((MR_Box) mercury__cord__P_1), mercury__cord__X_10, mercury__cord__STATE_VARIABLE_Acc_0_4, &mercury__cord__STATE_VARIABLE_Acc_19_43);
              }
#line 765 "cord.m"
              if ((mercury__cord__Cs_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 764 "cord.m"
                *mercury__cord__STATE_VARIABLE_Acc_5 = mercury__cord__STATE_VARIABLE_Acc_19_43;
#line 765 "cord.m"
              else
#line 766 "cord.m"
                {
#line 766 "cord.m"
                  MR_Word mercury__cord__Y_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__Cs_3, (MR_Integer) 0)));
#line 766 "cord.m"
                  MR_Word mercury__cord__Ys_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__Cs_3, (MR_Integer) 1)));

#line 767 "cord.m"
                  /* direct tailcall eliminated */
#line 767 "cord.m"
                  {
#line 767 "cord.m"
                    MR_Word mercury__cord__HeadVar__2__tmp_copy_2 = mercury__cord__Y_32;
#line 767 "cord.m"
                    MR_Word mercury__cord__Cs__tmp_copy_3 = mercury__cord__Ys_33;
#line 767 "cord.m"
                    MR_Box mercury__cord__STATE_VARIABLE_Acc_0__tmp_copy_4 = mercury__cord__STATE_VARIABLE_Acc_19_43;

#line 767 "cord.m"
                    mercury__cord__STATE_VARIABLE_Acc_0_4 = mercury__cord__STATE_VARIABLE_Acc_0__tmp_copy_4;
#line 767 "cord.m"
                    mercury__cord__Cs_3 = mercury__cord__Cs__tmp_copy_3;
#line 767 "cord.m"
                    mercury__cord__HeadVar__2_2 = mercury__cord__HeadVar__2__tmp_copy_2;
#line 767 "cord.m"
                  }
#line 767 "cord.m"
                  continue;
#line 766 "cord.m"
                }
#line 755 "cord.m"
            }
#line 755 "cord.m"
      }
#line 755 "cord.m"
      break;
#line 755 "cord.m"
    }
#line 744 "cord.m"
}

#line 720 "cord.m"
void MR_CALL 
mercury__cord__foldr_node_5_p_0(
#line 720 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_T_30,
#line 720 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_U_31,
#line 720 "cord.m"
  MR_Word mercury__cord__F_1,
#line 720 "cord.m"
  MR_Word mercury__cord__HeadVar__2_2,
#line 720 "cord.m"
  MR_Word mercury__cord__Cs_3,
#line 720 "cord.m"
  MR_Box mercury__cord__STATE_VARIABLE_Acc_0_4,
#line 720 "cord.m"
  MR_Box * mercury__cord__STATE_VARIABLE_Acc_5)
#line 720 "cord.m"
{
#line 722 "cord.m"
  while (MR_TRUE)
#line 722 "cord.m"
    {
#line 722 "cord.m"
      /* tailcall optimized into a loop */
#line 722 "cord.m"
      {
#line 722 "cord.m"
        MR_bool mercury__cord__succeeded;

#line 722 "cord.m"
        if (((MR_tag((MR_Word) mercury__cord__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 736 "cord.m"
          {
#line 736 "cord.m"
            MR_Word mercury__cord__A_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__HeadVar__2_2, (MR_Integer) 0)));
#line 736 "cord.m"
            MR_Word mercury__cord__B_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__HeadVar__2_2, (MR_Integer) 1)));
#line 736 "cord.m"
            MR_Word mercury__cord__V_28_28;

#line 737 "cord.m"
            {
#line 737 "cord.m"
              mercury__cord__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 737 "cord.m"
              MR_hl_field(MR_mktag(1), mercury__cord__V_28_28, 0) = ((MR_Box) (mercury__cord__A_22));
#line 737 "cord.m"
              MR_hl_field(MR_mktag(1), mercury__cord__V_28_28, 1) = ((MR_Box) (mercury__cord__Cs_3));
#line 737 "cord.m"
            }
#line 737 "cord.m"
            /* direct tailcall eliminated */
#line 737 "cord.m"
            {
#line 737 "cord.m"
              MR_Word mercury__cord__HeadVar__2__tmp_copy_2 = mercury__cord__B_23;
#line 737 "cord.m"
              MR_Word mercury__cord__Cs__tmp_copy_3 = mercury__cord__V_28_28;

#line 737 "cord.m"
              mercury__cord__Cs_3 = mercury__cord__Cs__tmp_copy_3;
#line 737 "cord.m"
              mercury__cord__HeadVar__2_2 = mercury__cord__HeadVar__2__tmp_copy_2;
#line 737 "cord.m"
            }
#line 737 "cord.m"
            continue;
#line 736 "cord.m"
          }
#line 722 "cord.m"
        else
#line 722 "cord.m"
          if (((MR_tag((MR_Word) mercury__cord__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 722 "cord.m"
            {
#line 722 "cord.m"
              MR_Box mercury__cord__H_11 = (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 0));
#line 722 "cord.m"
              MR_Word mercury__cord__T_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 1)));
#line 722 "cord.m"
              MR_Word mercury__cord__V_18_18;
#line 722 "cord.m"
              MR_Box mercury__cord__STATE_VARIABLE_Acc_19_19;

#line 728 "cord.m"
              {
#line 728 "cord.m"
                mercury__cord__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 728 "cord.m"
                MR_hl_field(MR_mktag(1), mercury__cord__V_18_18, 0) = mercury__cord__H_11;
#line 728 "cord.m"
                MR_hl_field(MR_mktag(1), mercury__cord__V_18_18, 1) = ((MR_Box) (mercury__cord__T_12));
#line 728 "cord.m"
              }
#line 451 "list.opt"
              {
#line 451 "list.opt"
                mercury__cord__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_95_104_111_49_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_p_in__list_0(mercury__cord__F_1, mercury__cord__V_18_18, mercury__cord__STATE_VARIABLE_Acc_0_4, &mercury__cord__STATE_VARIABLE_Acc_19_19);
              }
#line 732 "cord.m"
              if ((mercury__cord__Cs_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 731 "cord.m"
                *mercury__cord__STATE_VARIABLE_Acc_5 = mercury__cord__STATE_VARIABLE_Acc_19_19;
#line 732 "cord.m"
              else
#line 733 "cord.m"
                {
#line 733 "cord.m"
                  MR_Word mercury__cord__Y_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__Cs_3, (MR_Integer) 0)));
#line 733 "cord.m"
                  MR_Word mercury__cord__Ys_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__Cs_3, (MR_Integer) 1)));

#line 734 "cord.m"
                  /* direct tailcall eliminated */
#line 734 "cord.m"
                  {
#line 734 "cord.m"
                    MR_Word mercury__cord__HeadVar__2__tmp_copy_2 = mercury__cord__Y_13;
#line 734 "cord.m"
                    MR_Word mercury__cord__Cs__tmp_copy_3 = mercury__cord__Ys_14;
#line 734 "cord.m"
                    MR_Box mercury__cord__STATE_VARIABLE_Acc_0__tmp_copy_4 = mercury__cord__STATE_VARIABLE_Acc_19_19;

#line 734 "cord.m"
                    mercury__cord__STATE_VARIABLE_Acc_0_4 = mercury__cord__STATE_VARIABLE_Acc_0__tmp_copy_4;
#line 734 "cord.m"
                    mercury__cord__Cs_3 = mercury__cord__Cs__tmp_copy_3;
#line 734 "cord.m"
                    mercury__cord__HeadVar__2_2 = mercury__cord__HeadVar__2__tmp_copy_2;
#line 734 "cord.m"
                  }
#line 734 "cord.m"
                  continue;
#line 733 "cord.m"
                }
#line 722 "cord.m"
            }
#line 722 "cord.m"
          else
#line 722 "cord.m"
            {
#line 722 "cord.m"
              MR_Box mercury__cord__X_10 = (MR_hl_field(MR_mktag(0), mercury__cord__HeadVar__2_2, (MR_Integer) 0));
#line 722 "cord.m"
              MR_Box mercury__cord__STATE_VARIABLE_Acc_19_43;
#line 725 "cord.m"
              MR_Box MR_CALL (* mercury__cord__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__cord__F_1, (MR_Integer) 1)));

#line 725 "cord.m"
              {
#line 725 "cord.m"
                mercury__cord__STATE_VARIABLE_Acc_19_43 = mercury__cord__func_0(((MR_Box) mercury__cord__F_1), mercury__cord__X_10, mercury__cord__STATE_VARIABLE_Acc_0_4);
              }
#line 732 "cord.m"
              if ((mercury__cord__Cs_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 731 "cord.m"
                *mercury__cord__STATE_VARIABLE_Acc_5 = mercury__cord__STATE_VARIABLE_Acc_19_43;
#line 732 "cord.m"
              else
#line 733 "cord.m"
                {
#line 733 "cord.m"
                  MR_Word mercury__cord__Y_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__Cs_3, (MR_Integer) 0)));
#line 733 "cord.m"
                  MR_Word mercury__cord__Ys_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__Cs_3, (MR_Integer) 1)));

#line 734 "cord.m"
                  /* direct tailcall eliminated */
#line 734 "cord.m"
                  {
#line 734 "cord.m"
                    MR_Word mercury__cord__HeadVar__2__tmp_copy_2 = mercury__cord__Y_32;
#line 734 "cord.m"
                    MR_Word mercury__cord__Cs__tmp_copy_3 = mercury__cord__Ys_33;
#line 734 "cord.m"
                    MR_Box mercury__cord__STATE_VARIABLE_Acc_0__tmp_copy_4 = mercury__cord__STATE_VARIABLE_Acc_19_43;

#line 734 "cord.m"
                    mercury__cord__STATE_VARIABLE_Acc_0_4 = mercury__cord__STATE_VARIABLE_Acc_0__tmp_copy_4;
#line 734 "cord.m"
                    mercury__cord__Cs_3 = mercury__cord__Cs__tmp_copy_3;
#line 734 "cord.m"
                    mercury__cord__HeadVar__2_2 = mercury__cord__HeadVar__2__tmp_copy_2;
#line 734 "cord.m"
                  }
#line 734 "cord.m"
                  continue;
#line 733 "cord.m"
                }
#line 722 "cord.m"
            }
#line 722 "cord.m"
      }
#line 722 "cord.m"
      break;
#line 722 "cord.m"
    }
#line 720 "cord.m"
}

#line 693 "cord.m"
MR_bool MR_CALL 
mercury__cord__foldl_node_pred_5_p_5(
#line 693 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_T_30,
#line 693 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_U_31,
#line 693 "cord.m"
  MR_Word mercury__cord__P_1,
#line 693 "cord.m"
  MR_Word mercury__cord__HeadVar__2_2,
#line 693 "cord.m"
  MR_Word mercury__cord__Cs_3,
#line 693 "cord.m"
  MR_Box mercury__cord__STATE_VARIABLE_Acc_0_4,
#line 693 "cord.m"
  MR_Box * mercury__cord__STATE_VARIABLE_Acc_5)
#line 693 "cord.m"
{
#line 696 "cord.m"
  while (MR_TRUE)
#line 696 "cord.m"
    {
#line 696 "cord.m"
      /* tailcall optimized into a loop */
#line 696 "cord.m"
      {
#line 696 "cord.m"
        MR_bool mercury__cord__succeeded;

#line 696 "cord.m"
        if (((MR_tag((MR_Word) mercury__cord__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 710 "cord.m"
          {
#line 710 "cord.m"
            MR_Word mercury__cord__A_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__HeadVar__2_2, (MR_Integer) 0)));
#line 710 "cord.m"
            MR_Word mercury__cord__B_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__HeadVar__2_2, (MR_Integer) 1)));
#line 710 "cord.m"
            MR_Word mercury__cord__V_28_28;

#line 711 "cord.m"
            {
#line 711 "cord.m"
              mercury__cord__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 711 "cord.m"
              MR_hl_field(MR_mktag(1), mercury__cord__V_28_28, 0) = ((MR_Box) (mercury__cord__B_23));
#line 711 "cord.m"
              MR_hl_field(MR_mktag(1), mercury__cord__V_28_28, 1) = ((MR_Box) (mercury__cord__Cs_3));
#line 711 "cord.m"
            }
#line 711 "cord.m"
            /* direct tailcall eliminated */
#line 711 "cord.m"
            {
#line 711 "cord.m"
              MR_Word mercury__cord__HeadVar__2__tmp_copy_2 = mercury__cord__A_22;
#line 711 "cord.m"
              MR_Word mercury__cord__Cs__tmp_copy_3 = mercury__cord__V_28_28;

#line 711 "cord.m"
              mercury__cord__Cs_3 = mercury__cord__Cs__tmp_copy_3;
#line 711 "cord.m"
              mercury__cord__HeadVar__2_2 = mercury__cord__HeadVar__2__tmp_copy_2;
#line 711 "cord.m"
            }
#line 711 "cord.m"
            continue;
#line 710 "cord.m"
          }
#line 696 "cord.m"
        else
#line 696 "cord.m"
          if (((MR_tag((MR_Word) mercury__cord__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 696 "cord.m"
            {
#line 696 "cord.m"
              MR_Box mercury__cord__H_11 = (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 0));
#line 696 "cord.m"
              MR_Word mercury__cord__T_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 1)));
#line 696 "cord.m"
              MR_Word mercury__cord__V_17_17;
#line 696 "cord.m"
              MR_Box mercury__cord__STATE_VARIABLE_Acc_19_19;

#line 702 "cord.m"
              {
#line 702 "cord.m"
                mercury__cord__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 702 "cord.m"
                MR_hl_field(MR_mktag(1), mercury__cord__V_17_17, 0) = mercury__cord__H_11;
#line 702 "cord.m"
                MR_hl_field(MR_mktag(1), mercury__cord__V_17_17, 1) = ((MR_Box) (mercury__cord__T_12));
#line 702 "cord.m"
              }
#line 702 "cord.m"
              {
#line 702 "cord.m"
                mercury__cord__succeeded = mercury__list__foldl_4_p_5(mercury__cord__TypeInfo_for_T_30, mercury__cord__TypeInfo_for_U_31, mercury__cord__P_1, mercury__cord__V_17_17, mercury__cord__STATE_VARIABLE_Acc_0_4, &mercury__cord__STATE_VARIABLE_Acc_19_19);
              }
#line 696 "cord.m"
              if (mercury__cord__succeeded)
#line 706 "cord.m"
                {
#line 706 "cord.m"
                  if ((mercury__cord__Cs_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 705 "cord.m"
                    {
#line 705 "cord.m"
                      *mercury__cord__STATE_VARIABLE_Acc_5 = mercury__cord__STATE_VARIABLE_Acc_19_19;
#line 705 "cord.m"
                      mercury__cord__succeeded = MR_TRUE;
#line 705 "cord.m"
                    }
#line 706 "cord.m"
                  else
#line 707 "cord.m"
                    {
#line 707 "cord.m"
                      MR_Word mercury__cord__Y_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__Cs_3, (MR_Integer) 0)));
#line 707 "cord.m"
                      MR_Word mercury__cord__Ys_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__Cs_3, (MR_Integer) 1)));

#line 708 "cord.m"
                      /* direct tailcall eliminated */
#line 708 "cord.m"
                      {
#line 708 "cord.m"
                        MR_Word mercury__cord__HeadVar__2__tmp_copy_2 = mercury__cord__Y_13;
#line 708 "cord.m"
                        MR_Word mercury__cord__Cs__tmp_copy_3 = mercury__cord__Ys_14;
#line 708 "cord.m"
                        MR_Box mercury__cord__STATE_VARIABLE_Acc_0__tmp_copy_4 = mercury__cord__STATE_VARIABLE_Acc_19_19;

#line 708 "cord.m"
                        mercury__cord__STATE_VARIABLE_Acc_0_4 = mercury__cord__STATE_VARIABLE_Acc_0__tmp_copy_4;
#line 708 "cord.m"
                        mercury__cord__Cs_3 = mercury__cord__Cs__tmp_copy_3;
#line 708 "cord.m"
                        mercury__cord__HeadVar__2_2 = mercury__cord__HeadVar__2__tmp_copy_2;
#line 708 "cord.m"
                      }
#line 708 "cord.m"
                      continue;
#line 707 "cord.m"
                    }
#line 706 "cord.m"
                }
#line 696 "cord.m"
            }
#line 696 "cord.m"
          else
#line 696 "cord.m"
            {
#line 696 "cord.m"
              MR_Box mercury__cord__X_10 = (MR_hl_field(MR_mktag(0), mercury__cord__HeadVar__2_2, (MR_Integer) 0));
#line 696 "cord.m"
              MR_Box mercury__cord__STATE_VARIABLE_Acc_19_43;
#line 699 "cord.m"
              MR_bool MR_CALL (* mercury__cord__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__cord__P_1, (MR_Integer) 1)));

#line 699 "cord.m"
              {
#line 699 "cord.m"
                mercury__cord__succeeded = mercury__cord__func_0(((MR_Box) mercury__cord__P_1), mercury__cord__X_10, mercury__cord__STATE_VARIABLE_Acc_0_4, &mercury__cord__STATE_VARIABLE_Acc_19_43);
              }
#line 696 "cord.m"
              if (mercury__cord__succeeded)
#line 706 "cord.m"
                {
#line 706 "cord.m"
                  if ((mercury__cord__Cs_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 705 "cord.m"
                    {
#line 705 "cord.m"
                      *mercury__cord__STATE_VARIABLE_Acc_5 = mercury__cord__STATE_VARIABLE_Acc_19_43;
#line 705 "cord.m"
                      mercury__cord__succeeded = MR_TRUE;
#line 705 "cord.m"
                    }
#line 706 "cord.m"
                  else
#line 707 "cord.m"
                    {
#line 707 "cord.m"
                      MR_Word mercury__cord__Y_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__Cs_3, (MR_Integer) 0)));
#line 707 "cord.m"
                      MR_Word mercury__cord__Ys_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__Cs_3, (MR_Integer) 1)));

#line 708 "cord.m"
                      /* direct tailcall eliminated */
#line 708 "cord.m"
                      {
#line 708 "cord.m"
                        MR_Word mercury__cord__HeadVar__2__tmp_copy_2 = mercury__cord__Y_32;
#line 708 "cord.m"
                        MR_Word mercury__cord__Cs__tmp_copy_3 = mercury__cord__Ys_33;
#line 708 "cord.m"
                        MR_Box mercury__cord__STATE_VARIABLE_Acc_0__tmp_copy_4 = mercury__cord__STATE_VARIABLE_Acc_19_43;

#line 708 "cord.m"
                        mercury__cord__STATE_VARIABLE_Acc_0_4 = mercury__cord__STATE_VARIABLE_Acc_0__tmp_copy_4;
#line 708 "cord.m"
                        mercury__cord__Cs_3 = mercury__cord__Cs__tmp_copy_3;
#line 708 "cord.m"
                        mercury__cord__HeadVar__2_2 = mercury__cord__HeadVar__2__tmp_copy_2;
#line 708 "cord.m"
                      }
#line 708 "cord.m"
                      continue;
#line 707 "cord.m"
                    }
#line 706 "cord.m"
                }
#line 696 "cord.m"
            }
#line 696 "cord.m"
        return mercury__cord__succeeded;
#line 696 "cord.m"
      }
#line 696 "cord.m"
      break;
#line 696 "cord.m"
    }
#line 693 "cord.m"
}

#line 691 "cord.m"
MR_bool MR_CALL 
mercury__cord__foldl_node_pred_5_p_4(
#line 691 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_T_30,
#line 691 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_U_31,
#line 691 "cord.m"
  MR_Word mercury__cord__P_1,
#line 691 "cord.m"
  MR_Word mercury__cord__HeadVar__2_2,
#line 691 "cord.m"
  MR_Word mercury__cord__Cs_3,
#line 691 "cord.m"
  MR_Box mercury__cord__STATE_VARIABLE_Acc_0_4,
#line 691 "cord.m"
  MR_Box * mercury__cord__STATE_VARIABLE_Acc_5)
#line 691 "cord.m"
{
#line 696 "cord.m"
  while (MR_TRUE)
#line 696 "cord.m"
    {
#line 696 "cord.m"
      /* tailcall optimized into a loop */
#line 696 "cord.m"
      {
#line 696 "cord.m"
        MR_bool mercury__cord__succeeded;

#line 696 "cord.m"
        if (((MR_tag((MR_Word) mercury__cord__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 710 "cord.m"
          {
#line 710 "cord.m"
            MR_Word mercury__cord__A_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__HeadVar__2_2, (MR_Integer) 0)));
#line 710 "cord.m"
            MR_Word mercury__cord__B_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__HeadVar__2_2, (MR_Integer) 1)));
#line 710 "cord.m"
            MR_Word mercury__cord__V_28_28;

#line 711 "cord.m"
            {
#line 711 "cord.m"
              mercury__cord__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 711 "cord.m"
              MR_hl_field(MR_mktag(1), mercury__cord__V_28_28, 0) = ((MR_Box) (mercury__cord__B_23));
#line 711 "cord.m"
              MR_hl_field(MR_mktag(1), mercury__cord__V_28_28, 1) = ((MR_Box) (mercury__cord__Cs_3));
#line 711 "cord.m"
            }
#line 711 "cord.m"
            /* direct tailcall eliminated */
#line 711 "cord.m"
            {
#line 711 "cord.m"
              MR_Word mercury__cord__HeadVar__2__tmp_copy_2 = mercury__cord__A_22;
#line 711 "cord.m"
              MR_Word mercury__cord__Cs__tmp_copy_3 = mercury__cord__V_28_28;

#line 711 "cord.m"
              mercury__cord__Cs_3 = mercury__cord__Cs__tmp_copy_3;
#line 711 "cord.m"
              mercury__cord__HeadVar__2_2 = mercury__cord__HeadVar__2__tmp_copy_2;
#line 711 "cord.m"
            }
#line 711 "cord.m"
            continue;
#line 710 "cord.m"
          }
#line 696 "cord.m"
        else
#line 696 "cord.m"
          if (((MR_tag((MR_Word) mercury__cord__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 696 "cord.m"
            {
#line 696 "cord.m"
              MR_Box mercury__cord__H_11 = (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 0));
#line 696 "cord.m"
              MR_Word mercury__cord__T_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 1)));
#line 696 "cord.m"
              MR_Word mercury__cord__V_17_17;
#line 696 "cord.m"
              MR_Box mercury__cord__STATE_VARIABLE_Acc_19_19;

#line 702 "cord.m"
              {
#line 702 "cord.m"
                mercury__cord__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 702 "cord.m"
                MR_hl_field(MR_mktag(1), mercury__cord__V_17_17, 0) = mercury__cord__H_11;
#line 702 "cord.m"
                MR_hl_field(MR_mktag(1), mercury__cord__V_17_17, 1) = ((MR_Box) (mercury__cord__T_12));
#line 702 "cord.m"
              }
#line 702 "cord.m"
              {
#line 702 "cord.m"
                mercury__cord__succeeded = mercury__list__foldl_4_p_4(mercury__cord__TypeInfo_for_T_30, mercury__cord__TypeInfo_for_U_31, mercury__cord__P_1, mercury__cord__V_17_17, mercury__cord__STATE_VARIABLE_Acc_0_4, &mercury__cord__STATE_VARIABLE_Acc_19_19);
              }
#line 696 "cord.m"
              if (mercury__cord__succeeded)
#line 706 "cord.m"
                {
#line 706 "cord.m"
                  if ((mercury__cord__Cs_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 705 "cord.m"
                    {
#line 705 "cord.m"
                      *mercury__cord__STATE_VARIABLE_Acc_5 = mercury__cord__STATE_VARIABLE_Acc_19_19;
#line 705 "cord.m"
                      mercury__cord__succeeded = MR_TRUE;
#line 705 "cord.m"
                    }
#line 706 "cord.m"
                  else
#line 707 "cord.m"
                    {
#line 707 "cord.m"
                      MR_Word mercury__cord__Y_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__Cs_3, (MR_Integer) 0)));
#line 707 "cord.m"
                      MR_Word mercury__cord__Ys_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__Cs_3, (MR_Integer) 1)));

#line 708 "cord.m"
                      /* direct tailcall eliminated */
#line 708 "cord.m"
                      {
#line 708 "cord.m"
                        MR_Word mercury__cord__HeadVar__2__tmp_copy_2 = mercury__cord__Y_13;
#line 708 "cord.m"
                        MR_Word mercury__cord__Cs__tmp_copy_3 = mercury__cord__Ys_14;
#line 708 "cord.m"
                        MR_Box mercury__cord__STATE_VARIABLE_Acc_0__tmp_copy_4 = mercury__cord__STATE_VARIABLE_Acc_19_19;

#line 708 "cord.m"
                        mercury__cord__STATE_VARIABLE_Acc_0_4 = mercury__cord__STATE_VARIABLE_Acc_0__tmp_copy_4;
#line 708 "cord.m"
                        mercury__cord__Cs_3 = mercury__cord__Cs__tmp_copy_3;
#line 708 "cord.m"
                        mercury__cord__HeadVar__2_2 = mercury__cord__HeadVar__2__tmp_copy_2;
#line 708 "cord.m"
                      }
#line 708 "cord.m"
                      continue;
#line 707 "cord.m"
                    }
#line 706 "cord.m"
                }
#line 696 "cord.m"
            }
#line 696 "cord.m"
          else
#line 696 "cord.m"
            {
#line 696 "cord.m"
              MR_Box mercury__cord__X_10 = (MR_hl_field(MR_mktag(0), mercury__cord__HeadVar__2_2, (MR_Integer) 0));
#line 696 "cord.m"
              MR_Box mercury__cord__STATE_VARIABLE_Acc_19_43;
#line 699 "cord.m"
              MR_bool MR_CALL (* mercury__cord__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__cord__P_1, (MR_Integer) 1)));

#line 699 "cord.m"
              {
#line 699 "cord.m"
                mercury__cord__succeeded = mercury__cord__func_0(((MR_Box) mercury__cord__P_1), mercury__cord__X_10, mercury__cord__STATE_VARIABLE_Acc_0_4, &mercury__cord__STATE_VARIABLE_Acc_19_43);
              }
#line 696 "cord.m"
              if (mercury__cord__succeeded)
#line 706 "cord.m"
                {
#line 706 "cord.m"
                  if ((mercury__cord__Cs_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 705 "cord.m"
                    {
#line 705 "cord.m"
                      *mercury__cord__STATE_VARIABLE_Acc_5 = mercury__cord__STATE_VARIABLE_Acc_19_43;
#line 705 "cord.m"
                      mercury__cord__succeeded = MR_TRUE;
#line 705 "cord.m"
                    }
#line 706 "cord.m"
                  else
#line 707 "cord.m"
                    {
#line 707 "cord.m"
                      MR_Word mercury__cord__Y_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__Cs_3, (MR_Integer) 0)));
#line 707 "cord.m"
                      MR_Word mercury__cord__Ys_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__Cs_3, (MR_Integer) 1)));

#line 708 "cord.m"
                      /* direct tailcall eliminated */
#line 708 "cord.m"
                      {
#line 708 "cord.m"
                        MR_Word mercury__cord__HeadVar__2__tmp_copy_2 = mercury__cord__Y_32;
#line 708 "cord.m"
                        MR_Word mercury__cord__Cs__tmp_copy_3 = mercury__cord__Ys_33;
#line 708 "cord.m"
                        MR_Box mercury__cord__STATE_VARIABLE_Acc_0__tmp_copy_4 = mercury__cord__STATE_VARIABLE_Acc_19_43;

#line 708 "cord.m"
                        mercury__cord__STATE_VARIABLE_Acc_0_4 = mercury__cord__STATE_VARIABLE_Acc_0__tmp_copy_4;
#line 708 "cord.m"
                        mercury__cord__Cs_3 = mercury__cord__Cs__tmp_copy_3;
#line 708 "cord.m"
                        mercury__cord__HeadVar__2_2 = mercury__cord__HeadVar__2__tmp_copy_2;
#line 708 "cord.m"
                      }
#line 708 "cord.m"
                      continue;
#line 707 "cord.m"
                    }
#line 706 "cord.m"
                }
#line 696 "cord.m"
            }
#line 696 "cord.m"
        return mercury__cord__succeeded;
#line 696 "cord.m"
      }
#line 696 "cord.m"
      break;
#line 696 "cord.m"
    }
#line 691 "cord.m"
}

#line 689 "cord.m"
MR_bool MR_CALL 
mercury__cord__foldl_node_pred_5_p_3(
#line 689 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_T_30,
#line 689 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_U_31,
#line 689 "cord.m"
  MR_Word mercury__cord__P_1,
#line 689 "cord.m"
  MR_Word mercury__cord__HeadVar__2_2,
#line 689 "cord.m"
  MR_Word mercury__cord__Cs_3,
#line 689 "cord.m"
  MR_Box mercury__cord__STATE_VARIABLE_Acc_0_4,
#line 689 "cord.m"
  MR_Box * mercury__cord__STATE_VARIABLE_Acc_5)
#line 689 "cord.m"
{
#line 696 "cord.m"
  while (MR_TRUE)
#line 696 "cord.m"
    {
#line 696 "cord.m"
      /* tailcall optimized into a loop */
#line 696 "cord.m"
      {
#line 696 "cord.m"
        MR_bool mercury__cord__succeeded;

#line 696 "cord.m"
        if (((MR_tag((MR_Word) mercury__cord__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 710 "cord.m"
          {
#line 710 "cord.m"
            MR_Word mercury__cord__A_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__HeadVar__2_2, (MR_Integer) 0)));
#line 710 "cord.m"
            MR_Word mercury__cord__B_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__HeadVar__2_2, (MR_Integer) 1)));
#line 710 "cord.m"
            MR_Word mercury__cord__V_28_28;

#line 711 "cord.m"
            {
#line 711 "cord.m"
              mercury__cord__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 711 "cord.m"
              MR_hl_field(MR_mktag(1), mercury__cord__V_28_28, 0) = ((MR_Box) (mercury__cord__B_23));
#line 711 "cord.m"
              MR_hl_field(MR_mktag(1), mercury__cord__V_28_28, 1) = ((MR_Box) (mercury__cord__Cs_3));
#line 711 "cord.m"
            }
#line 711 "cord.m"
            /* direct tailcall eliminated */
#line 711 "cord.m"
            {
#line 711 "cord.m"
              MR_Word mercury__cord__HeadVar__2__tmp_copy_2 = mercury__cord__A_22;
#line 711 "cord.m"
              MR_Word mercury__cord__Cs__tmp_copy_3 = mercury__cord__V_28_28;

#line 711 "cord.m"
              mercury__cord__Cs_3 = mercury__cord__Cs__tmp_copy_3;
#line 711 "cord.m"
              mercury__cord__HeadVar__2_2 = mercury__cord__HeadVar__2__tmp_copy_2;
#line 711 "cord.m"
            }
#line 711 "cord.m"
            continue;
#line 710 "cord.m"
          }
#line 696 "cord.m"
        else
#line 696 "cord.m"
          if (((MR_tag((MR_Word) mercury__cord__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 696 "cord.m"
            {
#line 696 "cord.m"
              MR_Box mercury__cord__H_11 = (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 0));
#line 696 "cord.m"
              MR_Word mercury__cord__T_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 1)));
#line 696 "cord.m"
              MR_Word mercury__cord__V_17_17;
#line 696 "cord.m"
              MR_Box mercury__cord__STATE_VARIABLE_Acc_19_19;

#line 702 "cord.m"
              {
#line 702 "cord.m"
                mercury__cord__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 702 "cord.m"
                MR_hl_field(MR_mktag(1), mercury__cord__V_17_17, 0) = mercury__cord__H_11;
#line 702 "cord.m"
                MR_hl_field(MR_mktag(1), mercury__cord__V_17_17, 1) = ((MR_Box) (mercury__cord__T_12));
#line 702 "cord.m"
              }
#line 702 "cord.m"
              {
#line 702 "cord.m"
                mercury__cord__succeeded = mercury__list__foldl_4_p_3(mercury__cord__TypeInfo_for_T_30, mercury__cord__TypeInfo_for_U_31, mercury__cord__P_1, mercury__cord__V_17_17, mercury__cord__STATE_VARIABLE_Acc_0_4, &mercury__cord__STATE_VARIABLE_Acc_19_19);
              }
#line 696 "cord.m"
              if (mercury__cord__succeeded)
#line 706 "cord.m"
                {
#line 706 "cord.m"
                  if ((mercury__cord__Cs_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 705 "cord.m"
                    {
#line 705 "cord.m"
                      *mercury__cord__STATE_VARIABLE_Acc_5 = mercury__cord__STATE_VARIABLE_Acc_19_19;
#line 705 "cord.m"
                      mercury__cord__succeeded = MR_TRUE;
#line 705 "cord.m"
                    }
#line 706 "cord.m"
                  else
#line 707 "cord.m"
                    {
#line 707 "cord.m"
                      MR_Word mercury__cord__Y_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__Cs_3, (MR_Integer) 0)));
#line 707 "cord.m"
                      MR_Word mercury__cord__Ys_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__Cs_3, (MR_Integer) 1)));

#line 708 "cord.m"
                      /* direct tailcall eliminated */
#line 708 "cord.m"
                      {
#line 708 "cord.m"
                        MR_Word mercury__cord__HeadVar__2__tmp_copy_2 = mercury__cord__Y_13;
#line 708 "cord.m"
                        MR_Word mercury__cord__Cs__tmp_copy_3 = mercury__cord__Ys_14;
#line 708 "cord.m"
                        MR_Box mercury__cord__STATE_VARIABLE_Acc_0__tmp_copy_4 = mercury__cord__STATE_VARIABLE_Acc_19_19;

#line 708 "cord.m"
                        mercury__cord__STATE_VARIABLE_Acc_0_4 = mercury__cord__STATE_VARIABLE_Acc_0__tmp_copy_4;
#line 708 "cord.m"
                        mercury__cord__Cs_3 = mercury__cord__Cs__tmp_copy_3;
#line 708 "cord.m"
                        mercury__cord__HeadVar__2_2 = mercury__cord__HeadVar__2__tmp_copy_2;
#line 708 "cord.m"
                      }
#line 708 "cord.m"
                      continue;
#line 707 "cord.m"
                    }
#line 706 "cord.m"
                }
#line 696 "cord.m"
            }
#line 696 "cord.m"
          else
#line 696 "cord.m"
            {
#line 696 "cord.m"
              MR_Box mercury__cord__X_10 = (MR_hl_field(MR_mktag(0), mercury__cord__HeadVar__2_2, (MR_Integer) 0));
#line 696 "cord.m"
              MR_Box mercury__cord__STATE_VARIABLE_Acc_19_43;
#line 699 "cord.m"
              MR_bool MR_CALL (* mercury__cord__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__cord__P_1, (MR_Integer) 1)));

#line 699 "cord.m"
              {
#line 699 "cord.m"
                mercury__cord__succeeded = mercury__cord__func_0(((MR_Box) mercury__cord__P_1), mercury__cord__X_10, mercury__cord__STATE_VARIABLE_Acc_0_4, &mercury__cord__STATE_VARIABLE_Acc_19_43);
              }
#line 696 "cord.m"
              if (mercury__cord__succeeded)
#line 706 "cord.m"
                {
#line 706 "cord.m"
                  if ((mercury__cord__Cs_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 705 "cord.m"
                    {
#line 705 "cord.m"
                      *mercury__cord__STATE_VARIABLE_Acc_5 = mercury__cord__STATE_VARIABLE_Acc_19_43;
#line 705 "cord.m"
                      mercury__cord__succeeded = MR_TRUE;
#line 705 "cord.m"
                    }
#line 706 "cord.m"
                  else
#line 707 "cord.m"
                    {
#line 707 "cord.m"
                      MR_Word mercury__cord__Y_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__Cs_3, (MR_Integer) 0)));
#line 707 "cord.m"
                      MR_Word mercury__cord__Ys_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__Cs_3, (MR_Integer) 1)));

#line 708 "cord.m"
                      /* direct tailcall eliminated */
#line 708 "cord.m"
                      {
#line 708 "cord.m"
                        MR_Word mercury__cord__HeadVar__2__tmp_copy_2 = mercury__cord__Y_32;
#line 708 "cord.m"
                        MR_Word mercury__cord__Cs__tmp_copy_3 = mercury__cord__Ys_33;
#line 708 "cord.m"
                        MR_Box mercury__cord__STATE_VARIABLE_Acc_0__tmp_copy_4 = mercury__cord__STATE_VARIABLE_Acc_19_43;

#line 708 "cord.m"
                        mercury__cord__STATE_VARIABLE_Acc_0_4 = mercury__cord__STATE_VARIABLE_Acc_0__tmp_copy_4;
#line 708 "cord.m"
                        mercury__cord__Cs_3 = mercury__cord__Cs__tmp_copy_3;
#line 708 "cord.m"
                        mercury__cord__HeadVar__2_2 = mercury__cord__HeadVar__2__tmp_copy_2;
#line 708 "cord.m"
                      }
#line 708 "cord.m"
                      continue;
#line 707 "cord.m"
                    }
#line 706 "cord.m"
                }
#line 696 "cord.m"
            }
#line 696 "cord.m"
        return mercury__cord__succeeded;
#line 696 "cord.m"
      }
#line 696 "cord.m"
      break;
#line 696 "cord.m"
    }
#line 689 "cord.m"
}

#line 688 "cord.m"
void MR_CALL 
mercury__cord__foldl_node_pred_5_p_2(
#line 688 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_T_30,
#line 688 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_U_31,
#line 688 "cord.m"
  MR_Word mercury__cord__P_1,
#line 688 "cord.m"
  MR_Word mercury__cord__HeadVar__2_2,
#line 688 "cord.m"
  MR_Word mercury__cord__Cs_3,
#line 688 "cord.m"
  MR_Box mercury__cord__STATE_VARIABLE_Acc_0_4,
#line 688 "cord.m"
  MR_Box * mercury__cord__STATE_VARIABLE_Acc_5)
#line 688 "cord.m"
{
#line 696 "cord.m"
  while (MR_TRUE)
#line 696 "cord.m"
    {
#line 696 "cord.m"
      /* tailcall optimized into a loop */
#line 696 "cord.m"
      {
#line 696 "cord.m"
        MR_bool mercury__cord__succeeded;

#line 696 "cord.m"
        if (((MR_tag((MR_Word) mercury__cord__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 710 "cord.m"
          {
#line 710 "cord.m"
            MR_Word mercury__cord__A_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__HeadVar__2_2, (MR_Integer) 0)));
#line 710 "cord.m"
            MR_Word mercury__cord__B_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__HeadVar__2_2, (MR_Integer) 1)));
#line 710 "cord.m"
            MR_Word mercury__cord__V_28_28;

#line 711 "cord.m"
            {
#line 711 "cord.m"
              mercury__cord__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 711 "cord.m"
              MR_hl_field(MR_mktag(1), mercury__cord__V_28_28, 0) = ((MR_Box) (mercury__cord__B_23));
#line 711 "cord.m"
              MR_hl_field(MR_mktag(1), mercury__cord__V_28_28, 1) = ((MR_Box) (mercury__cord__Cs_3));
#line 711 "cord.m"
            }
#line 711 "cord.m"
            /* direct tailcall eliminated */
#line 711 "cord.m"
            {
#line 711 "cord.m"
              MR_Word mercury__cord__HeadVar__2__tmp_copy_2 = mercury__cord__A_22;
#line 711 "cord.m"
              MR_Word mercury__cord__Cs__tmp_copy_3 = mercury__cord__V_28_28;

#line 711 "cord.m"
              mercury__cord__Cs_3 = mercury__cord__Cs__tmp_copy_3;
#line 711 "cord.m"
              mercury__cord__HeadVar__2_2 = mercury__cord__HeadVar__2__tmp_copy_2;
#line 711 "cord.m"
            }
#line 711 "cord.m"
            continue;
#line 710 "cord.m"
          }
#line 696 "cord.m"
        else
#line 696 "cord.m"
          if (((MR_tag((MR_Word) mercury__cord__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 696 "cord.m"
            {
#line 696 "cord.m"
              MR_Box mercury__cord__H_11 = (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 0));
#line 696 "cord.m"
              MR_Word mercury__cord__T_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 1)));
#line 696 "cord.m"
              MR_Word mercury__cord__V_17_17;
#line 696 "cord.m"
              MR_Box mercury__cord__STATE_VARIABLE_Acc_19_19;

#line 702 "cord.m"
              {
#line 702 "cord.m"
                mercury__cord__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 702 "cord.m"
                MR_hl_field(MR_mktag(1), mercury__cord__V_17_17, 0) = mercury__cord__H_11;
#line 702 "cord.m"
                MR_hl_field(MR_mktag(1), mercury__cord__V_17_17, 1) = ((MR_Box) (mercury__cord__T_12));
#line 702 "cord.m"
              }
#line 702 "cord.m"
              {
#line 702 "cord.m"
                mercury__list__foldl_4_p_2(mercury__cord__TypeInfo_for_T_30, mercury__cord__TypeInfo_for_U_31, mercury__cord__P_1, mercury__cord__V_17_17, mercury__cord__STATE_VARIABLE_Acc_0_4, &mercury__cord__STATE_VARIABLE_Acc_19_19);
              }
#line 706 "cord.m"
              if ((mercury__cord__Cs_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 705 "cord.m"
                *mercury__cord__STATE_VARIABLE_Acc_5 = mercury__cord__STATE_VARIABLE_Acc_19_19;
#line 706 "cord.m"
              else
#line 707 "cord.m"
                {
#line 707 "cord.m"
                  MR_Word mercury__cord__Y_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__Cs_3, (MR_Integer) 0)));
#line 707 "cord.m"
                  MR_Word mercury__cord__Ys_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__Cs_3, (MR_Integer) 1)));

#line 708 "cord.m"
                  /* direct tailcall eliminated */
#line 708 "cord.m"
                  {
#line 708 "cord.m"
                    MR_Word mercury__cord__HeadVar__2__tmp_copy_2 = mercury__cord__Y_13;
#line 708 "cord.m"
                    MR_Word mercury__cord__Cs__tmp_copy_3 = mercury__cord__Ys_14;
#line 708 "cord.m"
                    MR_Box mercury__cord__STATE_VARIABLE_Acc_0__tmp_copy_4 = mercury__cord__STATE_VARIABLE_Acc_19_19;

#line 708 "cord.m"
                    mercury__cord__STATE_VARIABLE_Acc_0_4 = mercury__cord__STATE_VARIABLE_Acc_0__tmp_copy_4;
#line 708 "cord.m"
                    mercury__cord__Cs_3 = mercury__cord__Cs__tmp_copy_3;
#line 708 "cord.m"
                    mercury__cord__HeadVar__2_2 = mercury__cord__HeadVar__2__tmp_copy_2;
#line 708 "cord.m"
                  }
#line 708 "cord.m"
                  continue;
#line 707 "cord.m"
                }
#line 696 "cord.m"
            }
#line 696 "cord.m"
          else
#line 696 "cord.m"
            {
#line 696 "cord.m"
              MR_Box mercury__cord__X_10 = (MR_hl_field(MR_mktag(0), mercury__cord__HeadVar__2_2, (MR_Integer) 0));
#line 696 "cord.m"
              MR_Box mercury__cord__STATE_VARIABLE_Acc_19_43;
#line 699 "cord.m"
              void MR_CALL (* mercury__cord__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__cord__P_1, (MR_Integer) 1)));

#line 699 "cord.m"
              {
#line 699 "cord.m"
                mercury__cord__func_0(((MR_Box) mercury__cord__P_1), mercury__cord__X_10, mercury__cord__STATE_VARIABLE_Acc_0_4, &mercury__cord__STATE_VARIABLE_Acc_19_43);
              }
#line 706 "cord.m"
              if ((mercury__cord__Cs_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 705 "cord.m"
                *mercury__cord__STATE_VARIABLE_Acc_5 = mercury__cord__STATE_VARIABLE_Acc_19_43;
#line 706 "cord.m"
              else
#line 707 "cord.m"
                {
#line 707 "cord.m"
                  MR_Word mercury__cord__Y_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__Cs_3, (MR_Integer) 0)));
#line 707 "cord.m"
                  MR_Word mercury__cord__Ys_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__Cs_3, (MR_Integer) 1)));

#line 708 "cord.m"
                  /* direct tailcall eliminated */
#line 708 "cord.m"
                  {
#line 708 "cord.m"
                    MR_Word mercury__cord__HeadVar__2__tmp_copy_2 = mercury__cord__Y_32;
#line 708 "cord.m"
                    MR_Word mercury__cord__Cs__tmp_copy_3 = mercury__cord__Ys_33;
#line 708 "cord.m"
                    MR_Box mercury__cord__STATE_VARIABLE_Acc_0__tmp_copy_4 = mercury__cord__STATE_VARIABLE_Acc_19_43;

#line 708 "cord.m"
                    mercury__cord__STATE_VARIABLE_Acc_0_4 = mercury__cord__STATE_VARIABLE_Acc_0__tmp_copy_4;
#line 708 "cord.m"
                    mercury__cord__Cs_3 = mercury__cord__Cs__tmp_copy_3;
#line 708 "cord.m"
                    mercury__cord__HeadVar__2_2 = mercury__cord__HeadVar__2__tmp_copy_2;
#line 708 "cord.m"
                  }
#line 708 "cord.m"
                  continue;
#line 707 "cord.m"
                }
#line 696 "cord.m"
            }
#line 696 "cord.m"
      }
#line 696 "cord.m"
      break;
#line 696 "cord.m"
    }
#line 688 "cord.m"
}

#line 686 "cord.m"
void MR_CALL 
mercury__cord__foldl_node_pred_5_p_1(
#line 686 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_T_30,
#line 686 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_U_31,
#line 686 "cord.m"
  MR_Word mercury__cord__P_1,
#line 686 "cord.m"
  MR_Word mercury__cord__HeadVar__2_2,
#line 686 "cord.m"
  MR_Word mercury__cord__Cs_3,
#line 686 "cord.m"
  MR_Box mercury__cord__STATE_VARIABLE_Acc_0_4,
#line 686 "cord.m"
  MR_Box * mercury__cord__STATE_VARIABLE_Acc_5)
#line 686 "cord.m"
{
#line 696 "cord.m"
  while (MR_TRUE)
#line 696 "cord.m"
    {
#line 696 "cord.m"
      /* tailcall optimized into a loop */
#line 696 "cord.m"
      {
#line 696 "cord.m"
        MR_bool mercury__cord__succeeded;

#line 696 "cord.m"
        if (((MR_tag((MR_Word) mercury__cord__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 710 "cord.m"
          {
#line 710 "cord.m"
            MR_Word mercury__cord__A_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__HeadVar__2_2, (MR_Integer) 0)));
#line 710 "cord.m"
            MR_Word mercury__cord__B_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__HeadVar__2_2, (MR_Integer) 1)));
#line 710 "cord.m"
            MR_Word mercury__cord__V_28_28;

#line 711 "cord.m"
            {
#line 711 "cord.m"
              mercury__cord__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 711 "cord.m"
              MR_hl_field(MR_mktag(1), mercury__cord__V_28_28, 0) = ((MR_Box) (mercury__cord__B_23));
#line 711 "cord.m"
              MR_hl_field(MR_mktag(1), mercury__cord__V_28_28, 1) = ((MR_Box) (mercury__cord__Cs_3));
#line 711 "cord.m"
            }
#line 711 "cord.m"
            /* direct tailcall eliminated */
#line 711 "cord.m"
            {
#line 711 "cord.m"
              MR_Word mercury__cord__HeadVar__2__tmp_copy_2 = mercury__cord__A_22;
#line 711 "cord.m"
              MR_Word mercury__cord__Cs__tmp_copy_3 = mercury__cord__V_28_28;

#line 711 "cord.m"
              mercury__cord__Cs_3 = mercury__cord__Cs__tmp_copy_3;
#line 711 "cord.m"
              mercury__cord__HeadVar__2_2 = mercury__cord__HeadVar__2__tmp_copy_2;
#line 711 "cord.m"
            }
#line 711 "cord.m"
            continue;
#line 710 "cord.m"
          }
#line 696 "cord.m"
        else
#line 696 "cord.m"
          if (((MR_tag((MR_Word) mercury__cord__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 696 "cord.m"
            {
#line 696 "cord.m"
              MR_Box mercury__cord__H_11 = (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 0));
#line 696 "cord.m"
              MR_Word mercury__cord__T_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 1)));
#line 696 "cord.m"
              MR_Word mercury__cord__V_17_17;
#line 696 "cord.m"
              MR_Box mercury__cord__STATE_VARIABLE_Acc_19_19;

#line 702 "cord.m"
              {
#line 702 "cord.m"
                mercury__cord__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 702 "cord.m"
                MR_hl_field(MR_mktag(1), mercury__cord__V_17_17, 0) = mercury__cord__H_11;
#line 702 "cord.m"
                MR_hl_field(MR_mktag(1), mercury__cord__V_17_17, 1) = ((MR_Box) (mercury__cord__T_12));
#line 702 "cord.m"
              }
#line 702 "cord.m"
              {
#line 702 "cord.m"
                mercury__list__foldl_4_p_1(mercury__cord__TypeInfo_for_T_30, mercury__cord__TypeInfo_for_U_31, mercury__cord__P_1, mercury__cord__V_17_17, mercury__cord__STATE_VARIABLE_Acc_0_4, &mercury__cord__STATE_VARIABLE_Acc_19_19);
              }
#line 706 "cord.m"
              if ((mercury__cord__Cs_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 705 "cord.m"
                *mercury__cord__STATE_VARIABLE_Acc_5 = mercury__cord__STATE_VARIABLE_Acc_19_19;
#line 706 "cord.m"
              else
#line 707 "cord.m"
                {
#line 707 "cord.m"
                  MR_Word mercury__cord__Y_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__Cs_3, (MR_Integer) 0)));
#line 707 "cord.m"
                  MR_Word mercury__cord__Ys_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__Cs_3, (MR_Integer) 1)));

#line 708 "cord.m"
                  /* direct tailcall eliminated */
#line 708 "cord.m"
                  {
#line 708 "cord.m"
                    MR_Word mercury__cord__HeadVar__2__tmp_copy_2 = mercury__cord__Y_13;
#line 708 "cord.m"
                    MR_Word mercury__cord__Cs__tmp_copy_3 = mercury__cord__Ys_14;
#line 708 "cord.m"
                    MR_Box mercury__cord__STATE_VARIABLE_Acc_0__tmp_copy_4 = mercury__cord__STATE_VARIABLE_Acc_19_19;

#line 708 "cord.m"
                    mercury__cord__STATE_VARIABLE_Acc_0_4 = mercury__cord__STATE_VARIABLE_Acc_0__tmp_copy_4;
#line 708 "cord.m"
                    mercury__cord__Cs_3 = mercury__cord__Cs__tmp_copy_3;
#line 708 "cord.m"
                    mercury__cord__HeadVar__2_2 = mercury__cord__HeadVar__2__tmp_copy_2;
#line 708 "cord.m"
                  }
#line 708 "cord.m"
                  continue;
#line 707 "cord.m"
                }
#line 696 "cord.m"
            }
#line 696 "cord.m"
          else
#line 696 "cord.m"
            {
#line 696 "cord.m"
              MR_Box mercury__cord__X_10 = (MR_hl_field(MR_mktag(0), mercury__cord__HeadVar__2_2, (MR_Integer) 0));
#line 696 "cord.m"
              MR_Box mercury__cord__STATE_VARIABLE_Acc_19_43;
#line 699 "cord.m"
              void MR_CALL (* mercury__cord__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__cord__P_1, (MR_Integer) 1)));

#line 699 "cord.m"
              {
#line 699 "cord.m"
                mercury__cord__func_0(((MR_Box) mercury__cord__P_1), mercury__cord__X_10, mercury__cord__STATE_VARIABLE_Acc_0_4, &mercury__cord__STATE_VARIABLE_Acc_19_43);
              }
#line 706 "cord.m"
              if ((mercury__cord__Cs_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 705 "cord.m"
                *mercury__cord__STATE_VARIABLE_Acc_5 = mercury__cord__STATE_VARIABLE_Acc_19_43;
#line 706 "cord.m"
              else
#line 707 "cord.m"
                {
#line 707 "cord.m"
                  MR_Word mercury__cord__Y_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__Cs_3, (MR_Integer) 0)));
#line 707 "cord.m"
                  MR_Word mercury__cord__Ys_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__Cs_3, (MR_Integer) 1)));

#line 708 "cord.m"
                  /* direct tailcall eliminated */
#line 708 "cord.m"
                  {
#line 708 "cord.m"
                    MR_Word mercury__cord__HeadVar__2__tmp_copy_2 = mercury__cord__Y_32;
#line 708 "cord.m"
                    MR_Word mercury__cord__Cs__tmp_copy_3 = mercury__cord__Ys_33;
#line 708 "cord.m"
                    MR_Box mercury__cord__STATE_VARIABLE_Acc_0__tmp_copy_4 = mercury__cord__STATE_VARIABLE_Acc_19_43;

#line 708 "cord.m"
                    mercury__cord__STATE_VARIABLE_Acc_0_4 = mercury__cord__STATE_VARIABLE_Acc_0__tmp_copy_4;
#line 708 "cord.m"
                    mercury__cord__Cs_3 = mercury__cord__Cs__tmp_copy_3;
#line 708 "cord.m"
                    mercury__cord__HeadVar__2_2 = mercury__cord__HeadVar__2__tmp_copy_2;
#line 708 "cord.m"
                  }
#line 708 "cord.m"
                  continue;
#line 707 "cord.m"
                }
#line 696 "cord.m"
            }
#line 696 "cord.m"
      }
#line 696 "cord.m"
      break;
#line 696 "cord.m"
    }
#line 686 "cord.m"
}

#line 685 "cord.m"
void MR_CALL 
mercury__cord__foldl_node_pred_5_p_0(
#line 685 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_T_30,
#line 685 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_U_31,
#line 685 "cord.m"
  MR_Word mercury__cord__P_1,
#line 685 "cord.m"
  MR_Word mercury__cord__HeadVar__2_2,
#line 685 "cord.m"
  MR_Word mercury__cord__Cs_3,
#line 685 "cord.m"
  MR_Box mercury__cord__STATE_VARIABLE_Acc_0_4,
#line 685 "cord.m"
  MR_Box * mercury__cord__STATE_VARIABLE_Acc_5)
#line 685 "cord.m"
{
#line 696 "cord.m"
  while (MR_TRUE)
#line 696 "cord.m"
    {
#line 696 "cord.m"
      /* tailcall optimized into a loop */
#line 696 "cord.m"
      {
#line 696 "cord.m"
        MR_bool mercury__cord__succeeded;

#line 696 "cord.m"
        if (((MR_tag((MR_Word) mercury__cord__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 710 "cord.m"
          {
#line 710 "cord.m"
            MR_Word mercury__cord__A_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__HeadVar__2_2, (MR_Integer) 0)));
#line 710 "cord.m"
            MR_Word mercury__cord__B_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__HeadVar__2_2, (MR_Integer) 1)));
#line 710 "cord.m"
            MR_Word mercury__cord__V_28_28;

#line 711 "cord.m"
            {
#line 711 "cord.m"
              mercury__cord__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 711 "cord.m"
              MR_hl_field(MR_mktag(1), mercury__cord__V_28_28, 0) = ((MR_Box) (mercury__cord__B_23));
#line 711 "cord.m"
              MR_hl_field(MR_mktag(1), mercury__cord__V_28_28, 1) = ((MR_Box) (mercury__cord__Cs_3));
#line 711 "cord.m"
            }
#line 711 "cord.m"
            /* direct tailcall eliminated */
#line 711 "cord.m"
            {
#line 711 "cord.m"
              MR_Word mercury__cord__HeadVar__2__tmp_copy_2 = mercury__cord__A_22;
#line 711 "cord.m"
              MR_Word mercury__cord__Cs__tmp_copy_3 = mercury__cord__V_28_28;

#line 711 "cord.m"
              mercury__cord__Cs_3 = mercury__cord__Cs__tmp_copy_3;
#line 711 "cord.m"
              mercury__cord__HeadVar__2_2 = mercury__cord__HeadVar__2__tmp_copy_2;
#line 711 "cord.m"
            }
#line 711 "cord.m"
            continue;
#line 710 "cord.m"
          }
#line 696 "cord.m"
        else
#line 696 "cord.m"
          if (((MR_tag((MR_Word) mercury__cord__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 696 "cord.m"
            {
#line 696 "cord.m"
              MR_Box mercury__cord__H_11 = (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 0));
#line 696 "cord.m"
              MR_Word mercury__cord__T_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 1)));
#line 696 "cord.m"
              MR_Word mercury__cord__V_17_17;
#line 696 "cord.m"
              MR_Box mercury__cord__STATE_VARIABLE_Acc_19_19;

#line 702 "cord.m"
              {
#line 702 "cord.m"
                mercury__cord__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 702 "cord.m"
                MR_hl_field(MR_mktag(1), mercury__cord__V_17_17, 0) = mercury__cord__H_11;
#line 702 "cord.m"
                MR_hl_field(MR_mktag(1), mercury__cord__V_17_17, 1) = ((MR_Box) (mercury__cord__T_12));
#line 702 "cord.m"
              }
#line 702 "cord.m"
              {
#line 702 "cord.m"
                mercury__list__foldl_4_p_0(mercury__cord__TypeInfo_for_T_30, mercury__cord__TypeInfo_for_U_31, mercury__cord__P_1, mercury__cord__V_17_17, mercury__cord__STATE_VARIABLE_Acc_0_4, &mercury__cord__STATE_VARIABLE_Acc_19_19);
              }
#line 706 "cord.m"
              if ((mercury__cord__Cs_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 705 "cord.m"
                *mercury__cord__STATE_VARIABLE_Acc_5 = mercury__cord__STATE_VARIABLE_Acc_19_19;
#line 706 "cord.m"
              else
#line 707 "cord.m"
                {
#line 707 "cord.m"
                  MR_Word mercury__cord__Y_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__Cs_3, (MR_Integer) 0)));
#line 707 "cord.m"
                  MR_Word mercury__cord__Ys_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__Cs_3, (MR_Integer) 1)));

#line 708 "cord.m"
                  /* direct tailcall eliminated */
#line 708 "cord.m"
                  {
#line 708 "cord.m"
                    MR_Word mercury__cord__HeadVar__2__tmp_copy_2 = mercury__cord__Y_13;
#line 708 "cord.m"
                    MR_Word mercury__cord__Cs__tmp_copy_3 = mercury__cord__Ys_14;
#line 708 "cord.m"
                    MR_Box mercury__cord__STATE_VARIABLE_Acc_0__tmp_copy_4 = mercury__cord__STATE_VARIABLE_Acc_19_19;

#line 708 "cord.m"
                    mercury__cord__STATE_VARIABLE_Acc_0_4 = mercury__cord__STATE_VARIABLE_Acc_0__tmp_copy_4;
#line 708 "cord.m"
                    mercury__cord__Cs_3 = mercury__cord__Cs__tmp_copy_3;
#line 708 "cord.m"
                    mercury__cord__HeadVar__2_2 = mercury__cord__HeadVar__2__tmp_copy_2;
#line 708 "cord.m"
                  }
#line 708 "cord.m"
                  continue;
#line 707 "cord.m"
                }
#line 696 "cord.m"
            }
#line 696 "cord.m"
          else
#line 696 "cord.m"
            {
#line 696 "cord.m"
              MR_Box mercury__cord__X_10 = (MR_hl_field(MR_mktag(0), mercury__cord__HeadVar__2_2, (MR_Integer) 0));
#line 696 "cord.m"
              MR_Box mercury__cord__STATE_VARIABLE_Acc_19_43;
#line 699 "cord.m"
              void MR_CALL (* mercury__cord__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__cord__P_1, (MR_Integer) 1)));

#line 699 "cord.m"
              {
#line 699 "cord.m"
                mercury__cord__func_0(((MR_Box) mercury__cord__P_1), mercury__cord__X_10, mercury__cord__STATE_VARIABLE_Acc_0_4, &mercury__cord__STATE_VARIABLE_Acc_19_43);
              }
#line 706 "cord.m"
              if ((mercury__cord__Cs_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 705 "cord.m"
                *mercury__cord__STATE_VARIABLE_Acc_5 = mercury__cord__STATE_VARIABLE_Acc_19_43;
#line 706 "cord.m"
              else
#line 707 "cord.m"
                {
#line 707 "cord.m"
                  MR_Word mercury__cord__Y_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__Cs_3, (MR_Integer) 0)));
#line 707 "cord.m"
                  MR_Word mercury__cord__Ys_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__Cs_3, (MR_Integer) 1)));

#line 708 "cord.m"
                  /* direct tailcall eliminated */
#line 708 "cord.m"
                  {
#line 708 "cord.m"
                    MR_Word mercury__cord__HeadVar__2__tmp_copy_2 = mercury__cord__Y_32;
#line 708 "cord.m"
                    MR_Word mercury__cord__Cs__tmp_copy_3 = mercury__cord__Ys_33;
#line 708 "cord.m"
                    MR_Box mercury__cord__STATE_VARIABLE_Acc_0__tmp_copy_4 = mercury__cord__STATE_VARIABLE_Acc_19_43;

#line 708 "cord.m"
                    mercury__cord__STATE_VARIABLE_Acc_0_4 = mercury__cord__STATE_VARIABLE_Acc_0__tmp_copy_4;
#line 708 "cord.m"
                    mercury__cord__Cs_3 = mercury__cord__Cs__tmp_copy_3;
#line 708 "cord.m"
                    mercury__cord__HeadVar__2_2 = mercury__cord__HeadVar__2__tmp_copy_2;
#line 708 "cord.m"
                  }
#line 708 "cord.m"
                  continue;
#line 707 "cord.m"
                }
#line 696 "cord.m"
            }
#line 696 "cord.m"
      }
#line 696 "cord.m"
      break;
#line 696 "cord.m"
    }
#line 685 "cord.m"
}

#line 661 "cord.m"
void MR_CALL 
mercury__cord__foldl_node_5_p_0(
#line 661 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_T_30,
#line 661 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_U_31,
#line 661 "cord.m"
  MR_Word mercury__cord__F_1,
#line 661 "cord.m"
  MR_Word mercury__cord__HeadVar__2_2,
#line 661 "cord.m"
  MR_Word mercury__cord__Cs_3,
#line 661 "cord.m"
  MR_Box mercury__cord__STATE_VARIABLE_Acc_0_4,
#line 661 "cord.m"
  MR_Box * mercury__cord__STATE_VARIABLE_Acc_5)
#line 661 "cord.m"
{
#line 663 "cord.m"
  while (MR_TRUE)
#line 663 "cord.m"
    {
#line 663 "cord.m"
      /* tailcall optimized into a loop */
#line 663 "cord.m"
      {
#line 663 "cord.m"
        MR_bool mercury__cord__succeeded;

#line 663 "cord.m"
        if (((MR_tag((MR_Word) mercury__cord__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 677 "cord.m"
          {
#line 677 "cord.m"
            MR_Word mercury__cord__A_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__HeadVar__2_2, (MR_Integer) 0)));
#line 677 "cord.m"
            MR_Word mercury__cord__B_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__HeadVar__2_2, (MR_Integer) 1)));
#line 677 "cord.m"
            MR_Word mercury__cord__V_28_28;

#line 678 "cord.m"
            {
#line 678 "cord.m"
              mercury__cord__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 678 "cord.m"
              MR_hl_field(MR_mktag(1), mercury__cord__V_28_28, 0) = ((MR_Box) (mercury__cord__B_23));
#line 678 "cord.m"
              MR_hl_field(MR_mktag(1), mercury__cord__V_28_28, 1) = ((MR_Box) (mercury__cord__Cs_3));
#line 678 "cord.m"
            }
#line 678 "cord.m"
            /* direct tailcall eliminated */
#line 678 "cord.m"
            {
#line 678 "cord.m"
              MR_Word mercury__cord__HeadVar__2__tmp_copy_2 = mercury__cord__A_22;
#line 678 "cord.m"
              MR_Word mercury__cord__Cs__tmp_copy_3 = mercury__cord__V_28_28;

#line 678 "cord.m"
              mercury__cord__Cs_3 = mercury__cord__Cs__tmp_copy_3;
#line 678 "cord.m"
              mercury__cord__HeadVar__2_2 = mercury__cord__HeadVar__2__tmp_copy_2;
#line 678 "cord.m"
            }
#line 678 "cord.m"
            continue;
#line 677 "cord.m"
          }
#line 663 "cord.m"
        else
#line 663 "cord.m"
          if (((MR_tag((MR_Word) mercury__cord__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 663 "cord.m"
            {
#line 663 "cord.m"
              MR_Box mercury__cord__H_11 = (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 0));
#line 663 "cord.m"
              MR_Word mercury__cord__T_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 1)));
#line 663 "cord.m"
              MR_Word mercury__cord__V_18_18;
#line 663 "cord.m"
              MR_Box mercury__cord__STATE_VARIABLE_Acc_19_19;

#line 669 "cord.m"
              {
#line 669 "cord.m"
                mercury__cord__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 669 "cord.m"
                MR_hl_field(MR_mktag(1), mercury__cord__V_18_18, 0) = mercury__cord__H_11;
#line 669 "cord.m"
                MR_hl_field(MR_mktag(1), mercury__cord__V_18_18, 1) = ((MR_Box) (mercury__cord__T_12));
#line 669 "cord.m"
              }
#line 395 "list.opt"
              {
#line 395 "list.opt"
                mercury__cord__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_50_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_p_in__list_0(mercury__cord__F_1, mercury__cord__V_18_18, mercury__cord__STATE_VARIABLE_Acc_0_4, &mercury__cord__STATE_VARIABLE_Acc_19_19);
              }
#line 673 "cord.m"
              if ((mercury__cord__Cs_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 672 "cord.m"
                *mercury__cord__STATE_VARIABLE_Acc_5 = mercury__cord__STATE_VARIABLE_Acc_19_19;
#line 673 "cord.m"
              else
#line 674 "cord.m"
                {
#line 674 "cord.m"
                  MR_Word mercury__cord__Y_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__Cs_3, (MR_Integer) 0)));
#line 674 "cord.m"
                  MR_Word mercury__cord__Ys_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__Cs_3, (MR_Integer) 1)));

#line 675 "cord.m"
                  /* direct tailcall eliminated */
#line 675 "cord.m"
                  {
#line 675 "cord.m"
                    MR_Word mercury__cord__HeadVar__2__tmp_copy_2 = mercury__cord__Y_13;
#line 675 "cord.m"
                    MR_Word mercury__cord__Cs__tmp_copy_3 = mercury__cord__Ys_14;
#line 675 "cord.m"
                    MR_Box mercury__cord__STATE_VARIABLE_Acc_0__tmp_copy_4 = mercury__cord__STATE_VARIABLE_Acc_19_19;

#line 675 "cord.m"
                    mercury__cord__STATE_VARIABLE_Acc_0_4 = mercury__cord__STATE_VARIABLE_Acc_0__tmp_copy_4;
#line 675 "cord.m"
                    mercury__cord__Cs_3 = mercury__cord__Cs__tmp_copy_3;
#line 675 "cord.m"
                    mercury__cord__HeadVar__2_2 = mercury__cord__HeadVar__2__tmp_copy_2;
#line 675 "cord.m"
                  }
#line 675 "cord.m"
                  continue;
#line 674 "cord.m"
                }
#line 663 "cord.m"
            }
#line 663 "cord.m"
          else
#line 663 "cord.m"
            {
#line 663 "cord.m"
              MR_Box mercury__cord__X_10 = (MR_hl_field(MR_mktag(0), mercury__cord__HeadVar__2_2, (MR_Integer) 0));
#line 663 "cord.m"
              MR_Box mercury__cord__STATE_VARIABLE_Acc_19_43;
#line 666 "cord.m"
              MR_Box MR_CALL (* mercury__cord__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__cord__F_1, (MR_Integer) 1)));

#line 666 "cord.m"
              {
#line 666 "cord.m"
                mercury__cord__STATE_VARIABLE_Acc_19_43 = mercury__cord__func_0(((MR_Box) mercury__cord__F_1), mercury__cord__X_10, mercury__cord__STATE_VARIABLE_Acc_0_4);
              }
#line 673 "cord.m"
              if ((mercury__cord__Cs_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 672 "cord.m"
                *mercury__cord__STATE_VARIABLE_Acc_5 = mercury__cord__STATE_VARIABLE_Acc_19_43;
#line 673 "cord.m"
              else
#line 674 "cord.m"
                {
#line 674 "cord.m"
                  MR_Word mercury__cord__Y_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__Cs_3, (MR_Integer) 0)));
#line 674 "cord.m"
                  MR_Word mercury__cord__Ys_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__Cs_3, (MR_Integer) 1)));

#line 675 "cord.m"
                  /* direct tailcall eliminated */
#line 675 "cord.m"
                  {
#line 675 "cord.m"
                    MR_Word mercury__cord__HeadVar__2__tmp_copy_2 = mercury__cord__Y_32;
#line 675 "cord.m"
                    MR_Word mercury__cord__Cs__tmp_copy_3 = mercury__cord__Ys_33;
#line 675 "cord.m"
                    MR_Box mercury__cord__STATE_VARIABLE_Acc_0__tmp_copy_4 = mercury__cord__STATE_VARIABLE_Acc_19_43;

#line 675 "cord.m"
                    mercury__cord__STATE_VARIABLE_Acc_0_4 = mercury__cord__STATE_VARIABLE_Acc_0__tmp_copy_4;
#line 675 "cord.m"
                    mercury__cord__Cs_3 = mercury__cord__Cs__tmp_copy_3;
#line 675 "cord.m"
                    mercury__cord__HeadVar__2_2 = mercury__cord__HeadVar__2__tmp_copy_2;
#line 675 "cord.m"
                  }
#line 675 "cord.m"
                  continue;
#line 674 "cord.m"
                }
#line 663 "cord.m"
            }
#line 663 "cord.m"
      }
#line 663 "cord.m"
      break;
#line 663 "cord.m"
    }
#line 661 "cord.m"
}

#line 616 "cord.m"
void MR_CALL 
mercury__cord__filter_node_4_p_0(
#line 616 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_T_29,
#line 616 "cord.m"
  MR_Word mercury__cord__P_5,
#line 616 "cord.m"
  MR_Word mercury__cord__Node_6,
#line 616 "cord.m"
  MR_Word * mercury__cord__Trues_7,
#line 616 "cord.m"
  MR_Word * mercury__cord__Falses_8)
#line 616 "cord.m"
{
#line 629 "cord.m"
  {
#line 629 "cord.m"
    MR_bool mercury__cord__succeeded;

#line 629 "cord.m"
    if (((MR_tag((MR_Word) mercury__cord__Node_6)) == (MR_mktag((MR_Integer) 2))))
#line 647 "cord.m"
      {
#line 647 "cord.m"
        MR_Word mercury__cord__A_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__Node_6, (MR_Integer) 0)));
#line 647 "cord.m"
        MR_Word mercury__cord__B_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__Node_6, (MR_Integer) 1)));
#line 647 "cord.m"
        MR_Word mercury__cord__CATrues_20;
#line 647 "cord.m"
        MR_Word mercury__cord__CAFalses_21;
#line 647 "cord.m"
        MR_Word mercury__cord__CBTrues_22;
#line 647 "cord.m"
        MR_Word mercury__cord__CBFalses_23;

#line 648 "cord.m"
        {
#line 648 "cord.m"
          mercury__cord__filter_node_4_p_0(mercury__cord__TypeInfo_for_T_29, mercury__cord__P_5, mercury__cord__A_18, &mercury__cord__CATrues_20, &mercury__cord__CAFalses_21);
        }
#line 649 "cord.m"
        {
#line 649 "cord.m"
          mercury__cord__filter_node_4_p_0(mercury__cord__TypeInfo_for_T_29, mercury__cord__P_5, mercury__cord__B_19, &mercury__cord__CBTrues_22, &mercury__cord__CBFalses_23);
        }
#line 650 "cord.m"
        {
#line 650 "cord.m"
          *mercury__cord__Trues_7 = mercury__cord__f_43_43_2_f_0(mercury__cord__TypeInfo_for_T_29, mercury__cord__CATrues_20, mercury__cord__CBTrues_22);
        }
#line 651 "cord.m"
        {
#line 651 "cord.m"
          *mercury__cord__Falses_8 = mercury__cord__f_43_43_2_f_0(mercury__cord__TypeInfo_for_T_29, mercury__cord__CAFalses_21, mercury__cord__CBFalses_23);
        }
#line 647 "cord.m"
      }
#line 629 "cord.m"
    else
#line 629 "cord.m"
      if (((MR_tag((MR_Word) mercury__cord__Node_6)) == (MR_mktag((MR_Integer) 1))))
#line 630 "cord.m"
        {
#line 630 "cord.m"
          MR_Box mercury__cord__H_10 = (MR_hl_field(MR_mktag(1), mercury__cord__Node_6, (MR_Integer) 0));
#line 630 "cord.m"
          MR_Word mercury__cord__T_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__Node_6, (MR_Integer) 1)));
#line 630 "cord.m"
          MR_Word mercury__cord__TrueList_12;
#line 630 "cord.m"
          MR_Word mercury__cord__FalseList_13;
#line 630 "cord.m"
          MR_Word mercury__cord__V_24_24;

#line 631 "cord.m"
          {
#line 631 "cord.m"
            mercury__cord__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 631 "cord.m"
            MR_hl_field(MR_mktag(1), mercury__cord__V_24_24, 0) = mercury__cord__H_10;
#line 631 "cord.m"
            MR_hl_field(MR_mktag(1), mercury__cord__V_24_24, 1) = ((MR_Box) (mercury__cord__T_11));
#line 631 "cord.m"
          }
#line 631 "cord.m"
          {
#line 631 "cord.m"
            mercury__list__filter_4_p_0(mercury__cord__TypeInfo_for_T_29, mercury__cord__P_5, mercury__cord__V_24_24, &mercury__cord__TrueList_12, &mercury__cord__FalseList_13);
          }
#line 635 "cord.m"
          if ((mercury__cord__TrueList_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 634 "cord.m"
            *mercury__cord__Trues_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 635 "cord.m"
          else
#line 636 "cord.m"
            {
#line 636 "cord.m"
              MR_Box mercury__cord__TH_14 = (MR_hl_field(MR_mktag(1), mercury__cord__TrueList_12, (MR_Integer) 0));
#line 636 "cord.m"
              MR_Word mercury__cord__TT_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__TrueList_12, (MR_Integer) 1)));
#line 636 "cord.m"
              MR_Word mercury__cord__V_25_25;

#line 637 "cord.m"
              {
#line 637 "cord.m"
                mercury__cord__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 637 "cord.m"
                MR_hl_field(MR_mktag(1), mercury__cord__V_25_25, 0) = mercury__cord__TH_14;
#line 637 "cord.m"
                MR_hl_field(MR_mktag(1), mercury__cord__V_25_25, 1) = ((MR_Box) (mercury__cord__TT_15));
#line 637 "cord.m"
              }
#line 637 "cord.m"
              {
#line 637 "cord.m"
                MR_Word base;
#line 637 "cord.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 637 "cord.m"
                *mercury__cord__Trues_7 = base;
#line 637 "cord.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__cord__V_25_25));
#line 637 "cord.m"
              }
#line 636 "cord.m"
            }
#line 642 "cord.m"
          if ((mercury__cord__FalseList_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 641 "cord.m"
            *mercury__cord__Falses_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 642 "cord.m"
          else
#line 643 "cord.m"
            {
#line 643 "cord.m"
              MR_Box mercury__cord__FH_16 = (MR_hl_field(MR_mktag(1), mercury__cord__FalseList_13, (MR_Integer) 0));
#line 643 "cord.m"
              MR_Word mercury__cord__FT_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__FalseList_13, (MR_Integer) 1)));
#line 643 "cord.m"
              MR_Word mercury__cord__V_26_26;

#line 644 "cord.m"
              {
#line 644 "cord.m"
                mercury__cord__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 644 "cord.m"
                MR_hl_field(MR_mktag(1), mercury__cord__V_26_26, 0) = mercury__cord__FH_16;
#line 644 "cord.m"
                MR_hl_field(MR_mktag(1), mercury__cord__V_26_26, 1) = ((MR_Box) (mercury__cord__FT_17));
#line 644 "cord.m"
              }
#line 644 "cord.m"
              {
#line 644 "cord.m"
                MR_Word base;
#line 644 "cord.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 644 "cord.m"
                *mercury__cord__Falses_8 = base;
#line 644 "cord.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__cord__V_26_26));
#line 644 "cord.m"
              }
#line 643 "cord.m"
            }
#line 630 "cord.m"
        }
#line 629 "cord.m"
      else
#line 621 "cord.m"
        {
#line 621 "cord.m"
          MR_Box mercury__cord__X_9 = (MR_hl_field(MR_mktag(0), mercury__cord__Node_6, (MR_Integer) 0));
#line 622 "cord.m"
          MR_bool MR_CALL (* mercury__cord__func_0)(MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__cord__P_5, (MR_Integer) 1)));

#line 622 "cord.m"
          {
#line 622 "cord.m"
            mercury__cord__succeeded = mercury__cord__func_0(((MR_Box) mercury__cord__P_5), mercury__cord__X_9);
          }
#line 625 "cord.m"
          if (mercury__cord__succeeded)
#line 623 "cord.m"
            {
#line 623 "cord.m"
              {
#line 623 "cord.m"
                MR_Word base;
#line 623 "cord.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 623 "cord.m"
                *mercury__cord__Trues_7 = base;
#line 623 "cord.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__cord__Node_6));
#line 623 "cord.m"
              }
#line 624 "cord.m"
              *mercury__cord__Falses_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 623 "cord.m"
            }
#line 625 "cord.m"
          else
#line 626 "cord.m"
            {
#line 626 "cord.m"
              *mercury__cord__Trues_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 627 "cord.m"
              {
#line 627 "cord.m"
                MR_Word base;
#line 627 "cord.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 627 "cord.m"
                *mercury__cord__Falses_8 = base;
#line 627 "cord.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__cord__Node_6));
#line 627 "cord.m"
              }
#line 626 "cord.m"
            }
#line 621 "cord.m"
        }
#line 629 "cord.m"
  }
#line 616 "cord.m"
}

#line 582 "cord.m"
void MR_CALL 
mercury__cord__filter_node_3_p_0(
#line 582 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_T_20,
#line 582 "cord.m"
  MR_Word mercury__cord__P_4,
#line 582 "cord.m"
  MR_Word mercury__cord__Node_5,
#line 582 "cord.m"
  MR_Word * mercury__cord__Trues_6)
#line 582 "cord.m"
{
#line 593 "cord.m"
  {
#line 593 "cord.m"
    MR_bool mercury__cord__succeeded;

#line 593 "cord.m"
    if (((MR_tag((MR_Word) mercury__cord__Node_5)) == (MR_mktag((MR_Integer) 2))))
#line 604 "cord.m"
      {
#line 604 "cord.m"
        MR_Word mercury__cord__A_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__Node_5, (MR_Integer) 0)));
#line 604 "cord.m"
        MR_Word mercury__cord__B_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__Node_5, (MR_Integer) 1)));
#line 604 "cord.m"
        MR_Word mercury__cord__CATrues_15;
#line 604 "cord.m"
        MR_Word mercury__cord__CBTrues_16;

#line 605 "cord.m"
        {
#line 605 "cord.m"
          mercury__cord__filter_node_3_p_0(mercury__cord__TypeInfo_for_T_20, mercury__cord__P_4, mercury__cord__A_13, &mercury__cord__CATrues_15);
        }
#line 606 "cord.m"
        {
#line 606 "cord.m"
          mercury__cord__filter_node_3_p_0(mercury__cord__TypeInfo_for_T_20, mercury__cord__P_4, mercury__cord__B_14, &mercury__cord__CBTrues_16);
        }
#line 607 "cord.m"
        {
#line 607 "cord.m"
          *mercury__cord__Trues_6 = mercury__cord__f_43_43_2_f_0(mercury__cord__TypeInfo_for_T_20, mercury__cord__CATrues_15, mercury__cord__CBTrues_16);
        }
#line 604 "cord.m"
      }
#line 593 "cord.m"
    else
#line 593 "cord.m"
      if (((MR_tag((MR_Word) mercury__cord__Node_5)) == (MR_mktag((MR_Integer) 1))))
#line 594 "cord.m"
        {
#line 594 "cord.m"
          MR_Box mercury__cord__H_8 = (MR_hl_field(MR_mktag(1), mercury__cord__Node_5, (MR_Integer) 0));
#line 594 "cord.m"
          MR_Word mercury__cord__T_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__Node_5, (MR_Integer) 1)));
#line 594 "cord.m"
          MR_Word mercury__cord__TrueList_10;
#line 594 "cord.m"
          MR_Word mercury__cord__V_17_17;

#line 595 "cord.m"
          {
#line 595 "cord.m"
            mercury__cord__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 595 "cord.m"
            MR_hl_field(MR_mktag(1), mercury__cord__V_17_17, 0) = mercury__cord__H_8;
#line 595 "cord.m"
            MR_hl_field(MR_mktag(1), mercury__cord__V_17_17, 1) = ((MR_Box) (mercury__cord__T_9));
#line 595 "cord.m"
          }
#line 595 "cord.m"
          {
#line 595 "cord.m"
            mercury__list__filter_3_p_0(mercury__cord__TypeInfo_for_T_20, mercury__cord__P_4, mercury__cord__V_17_17, &mercury__cord__TrueList_10);
          }
#line 599 "cord.m"
          if ((mercury__cord__TrueList_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 598 "cord.m"
            *mercury__cord__Trues_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 599 "cord.m"
          else
#line 600 "cord.m"
            {
#line 600 "cord.m"
              MR_Box mercury__cord__TH_11 = (MR_hl_field(MR_mktag(1), mercury__cord__TrueList_10, (MR_Integer) 0));
#line 600 "cord.m"
              MR_Word mercury__cord__TT_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__TrueList_10, (MR_Integer) 1)));
#line 600 "cord.m"
              MR_Word mercury__cord__V_18_18;

#line 601 "cord.m"
              {
#line 601 "cord.m"
                mercury__cord__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 601 "cord.m"
                MR_hl_field(MR_mktag(1), mercury__cord__V_18_18, 0) = mercury__cord__TH_11;
#line 601 "cord.m"
                MR_hl_field(MR_mktag(1), mercury__cord__V_18_18, 1) = ((MR_Box) (mercury__cord__TT_12));
#line 601 "cord.m"
              }
#line 601 "cord.m"
              {
#line 601 "cord.m"
                MR_Word base;
#line 601 "cord.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 601 "cord.m"
                *mercury__cord__Trues_6 = base;
#line 601 "cord.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__cord__V_18_18));
#line 601 "cord.m"
              }
#line 600 "cord.m"
            }
#line 594 "cord.m"
        }
#line 593 "cord.m"
      else
#line 587 "cord.m"
        {
#line 587 "cord.m"
          MR_Box mercury__cord__X_7 = (MR_hl_field(MR_mktag(0), mercury__cord__Node_5, (MR_Integer) 0));
#line 588 "cord.m"
          MR_bool MR_CALL (* mercury__cord__func_0)(MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__cord__P_4, (MR_Integer) 1)));

#line 588 "cord.m"
          {
#line 588 "cord.m"
            mercury__cord__succeeded = mercury__cord__func_0(((MR_Box) mercury__cord__P_4), mercury__cord__X_7);
          }
#line 590 "cord.m"
          if (mercury__cord__succeeded)
#line 589 "cord.m"
            {
#line 589 "cord.m"
              MR_Word base;
#line 589 "cord.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 589 "cord.m"
              *mercury__cord__Trues_6 = base;
#line 589 "cord.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__cord__Node_5));
#line 589 "cord.m"
            }
#line 590 "cord.m"
          else
#line 591 "cord.m"
            *mercury__cord__Trues_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 587 "cord.m"
        }
#line 593 "cord.m"
  }
#line 582 "cord.m"
}

#line 556 "cord.m"
void MR_CALL 
mercury__cord__map_pred_node_3_p_0(
#line 556 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_T_17,
#line 556 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_U_18,
#line 556 "cord.m"
  MR_Word mercury__cord__P_4,
#line 556 "cord.m"
  MR_Word mercury__cord__Node_5,
#line 556 "cord.m"
  MR_Word * mercury__cord__PNode_6)
#line 556 "cord.m"
{
#line 564 "cord.m"
  {
#line 564 "cord.m"
    MR_bool mercury__cord__succeeded;

#line 564 "cord.m"
    if (((MR_tag((MR_Word) mercury__cord__Node_5)) == (MR_mktag((MR_Integer) 2))))
#line 570 "cord.m"
      {
#line 570 "cord.m"
        MR_Word mercury__cord__A_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__Node_5, (MR_Integer) 0)));
#line 570 "cord.m"
        MR_Word mercury__cord__B_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__Node_5, (MR_Integer) 1)));
#line 570 "cord.m"
        MR_Word mercury__cord__PA_15;
#line 570 "cord.m"
        MR_Word mercury__cord__PB_16;

#line 571 "cord.m"
        {
#line 571 "cord.m"
          mercury__cord__map_pred_node_3_p_0(mercury__cord__TypeInfo_for_T_17, mercury__cord__TypeInfo_for_U_18, mercury__cord__P_4, mercury__cord__A_13, &mercury__cord__PA_15);
        }
#line 572 "cord.m"
        {
#line 572 "cord.m"
          mercury__cord__map_pred_node_3_p_0(mercury__cord__TypeInfo_for_T_17, mercury__cord__TypeInfo_for_U_18, mercury__cord__P_4, mercury__cord__B_14, &mercury__cord__PB_16);
        }
#line 573 "cord.m"
        {
#line 573 "cord.m"
          MR_Word base;
#line 573 "cord.m"
          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 573 "cord.m"
          *mercury__cord__PNode_6 = base;
#line 573 "cord.m"
          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (mercury__cord__PA_15));
#line 573 "cord.m"
          MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (mercury__cord__PB_16));
#line 573 "cord.m"
        }
#line 570 "cord.m"
      }
#line 564 "cord.m"
    else
#line 564 "cord.m"
      if (((MR_tag((MR_Word) mercury__cord__Node_5)) == (MR_mktag((MR_Integer) 1))))
#line 565 "cord.m"
        {
#line 565 "cord.m"
          MR_Box mercury__cord__H_9 = (MR_hl_field(MR_mktag(1), mercury__cord__Node_5, (MR_Integer) 0));
#line 565 "cord.m"
          MR_Word mercury__cord__T_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__Node_5, (MR_Integer) 1)));
#line 565 "cord.m"
          MR_Box mercury__cord__PH_11;
#line 565 "cord.m"
          MR_Word mercury__cord__PT_12;
#line 566 "cord.m"
          void MR_CALL (* mercury__cord__func_0)(MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__cord__P_4, (MR_Integer) 1)));

#line 566 "cord.m"
          {
#line 566 "cord.m"
            mercury__cord__func_0(((MR_Box) mercury__cord__P_4), mercury__cord__H_9, &mercury__cord__PH_11);
          }
#line 567 "cord.m"
          {
#line 567 "cord.m"
            mercury__list__map_3_p_0(mercury__cord__TypeInfo_for_T_17, mercury__cord__TypeInfo_for_U_18, mercury__cord__P_4, mercury__cord__T_10, &mercury__cord__PT_12);
          }
#line 568 "cord.m"
          {
#line 568 "cord.m"
            MR_Word base;
#line 568 "cord.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 568 "cord.m"
            *mercury__cord__PNode_6 = base;
#line 568 "cord.m"
            MR_hl_field(MR_mktag(1), base, 0) = mercury__cord__PH_11;
#line 568 "cord.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__cord__PT_12));
#line 568 "cord.m"
          }
#line 565 "cord.m"
        }
#line 564 "cord.m"
      else
#line 561 "cord.m"
        {
#line 561 "cord.m"
          MR_Box mercury__cord__X_7 = (MR_hl_field(MR_mktag(0), mercury__cord__Node_5, (MR_Integer) 0));
#line 561 "cord.m"
          MR_Box mercury__cord__PX_8;
#line 562 "cord.m"
          void MR_CALL (* mercury__cord__func_1)(MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__cord__P_4, (MR_Integer) 1)));

#line 562 "cord.m"
          {
#line 562 "cord.m"
            mercury__cord__func_1(((MR_Box) mercury__cord__P_4), mercury__cord__X_7, &mercury__cord__PX_8);
          }
#line 563 "cord.m"
          {
#line 563 "cord.m"
            MR_Word base;
#line 563 "cord.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 563 "cord.m"
            *mercury__cord__PNode_6 = base;
#line 563 "cord.m"
            MR_hl_field(MR_mktag(0), base, 0) = mercury__cord__PX_8;
#line 563 "cord.m"
          }
#line 561 "cord.m"
        }
#line 564 "cord.m"
  }
#line 556 "cord.m"
}

#line 538 "cord.m"
MR_Word MR_CALL 
mercury__cord__map_node_2_f_0(
#line 538 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_T_17,
#line 538 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_U_18,
#line 538 "cord.m"
  MR_Word mercury__cord__F_4,
#line 538 "cord.m"
  MR_Word mercury__cord__Node_5)
#line 538 "cord.m"
{
#line 544 "cord.m"
  {
#line 544 "cord.m"
    MR_bool mercury__cord__succeeded;
#line 544 "cord.m"
    MR_Word mercury__cord__PNode_6;

#line 544 "cord.m"
    if (((MR_tag((MR_Word) mercury__cord__Node_5)) == (MR_mktag((MR_Integer) 2))))
#line 548 "cord.m"
      {
#line 548 "cord.m"
        MR_Word mercury__cord__A_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__Node_5, (MR_Integer) 0)));
#line 548 "cord.m"
        MR_Word mercury__cord__B_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__Node_5, (MR_Integer) 1)));
#line 548 "cord.m"
        MR_Word mercury__cord__V_12_12;
#line 548 "cord.m"
        MR_Word mercury__cord__V_13_13;

#line 549 "cord.m"
        {
#line 549 "cord.m"
          mercury__cord__V_12_12 = mercury__cord__map_node_2_f_0(mercury__cord__TypeInfo_for_T_17, mercury__cord__TypeInfo_for_U_18, mercury__cord__F_4, mercury__cord__A_10);
        }
#line 549 "cord.m"
        {
#line 549 "cord.m"
          mercury__cord__V_13_13 = mercury__cord__map_node_2_f_0(mercury__cord__TypeInfo_for_T_17, mercury__cord__TypeInfo_for_U_18, mercury__cord__F_4, mercury__cord__B_11);
        }
#line 549 "cord.m"
        {
#line 549 "cord.m"
          mercury__cord__PNode_6 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 549 "cord.m"
          MR_hl_field(MR_mktag(2), mercury__cord__PNode_6, 0) = ((MR_Box) (mercury__cord__V_12_12));
#line 549 "cord.m"
          MR_hl_field(MR_mktag(2), mercury__cord__PNode_6, 1) = ((MR_Box) (mercury__cord__V_13_13));
#line 549 "cord.m"
        }
#line 548 "cord.m"
      }
#line 544 "cord.m"
    else
#line 544 "cord.m"
      if (((MR_tag((MR_Word) mercury__cord__Node_5)) == (MR_mktag((MR_Integer) 1))))
#line 545 "cord.m"
        {
#line 545 "cord.m"
          MR_Box mercury__cord__H_8 = (MR_hl_field(MR_mktag(1), mercury__cord__Node_5, (MR_Integer) 0));
#line 545 "cord.m"
          MR_Word mercury__cord__T_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__Node_5, (MR_Integer) 1)));
#line 545 "cord.m"
          MR_Box mercury__cord__V_14_14;
#line 545 "cord.m"
          MR_Word mercury__cord__V_15_15;
#line 546 "cord.m"
          MR_Box MR_CALL (* mercury__cord__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__cord__F_4, (MR_Integer) 1)));

#line 546 "cord.m"
          {
#line 546 "cord.m"
            mercury__cord__V_14_14 = mercury__cord__func_0(((MR_Box) mercury__cord__F_4), mercury__cord__H_8);
          }
#line 546 "cord.m"
          {
#line 546 "cord.m"
            mercury__cord__V_15_15 = mercury__list__map_2_f_0(mercury__cord__TypeInfo_for_T_17, mercury__cord__TypeInfo_for_U_18, mercury__cord__F_4, mercury__cord__T_9);
          }
#line 546 "cord.m"
          {
#line 546 "cord.m"
            mercury__cord__PNode_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 546 "cord.m"
            MR_hl_field(MR_mktag(1), mercury__cord__PNode_6, 0) = mercury__cord__V_14_14;
#line 546 "cord.m"
            MR_hl_field(MR_mktag(1), mercury__cord__PNode_6, 1) = ((MR_Box) (mercury__cord__V_15_15));
#line 546 "cord.m"
          }
#line 545 "cord.m"
        }
#line 544 "cord.m"
      else
#line 542 "cord.m"
        {
#line 542 "cord.m"
          MR_Box mercury__cord__X_7 = (MR_hl_field(MR_mktag(0), mercury__cord__Node_5, (MR_Integer) 0));
#line 542 "cord.m"
          MR_Box mercury__cord__V_16_16;
#line 543 "cord.m"
          MR_Box MR_CALL (* mercury__cord__func_1)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__cord__F_4, (MR_Integer) 1)));

#line 543 "cord.m"
          {
#line 543 "cord.m"
            mercury__cord__V_16_16 = mercury__cord__func_1(((MR_Box) mercury__cord__F_4), mercury__cord__X_7);
          }
#line 543 "cord.m"
          {
#line 543 "cord.m"
            mercury__cord__PNode_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 543 "cord.m"
            MR_hl_field(MR_mktag(0), mercury__cord__PNode_6, 0) = mercury__cord__V_16_16;
#line 543 "cord.m"
          }
#line 542 "cord.m"
        }
#line 544 "cord.m"
    return mercury__cord__PNode_6;
#line 544 "cord.m"
  }
#line 538 "cord.m"
}

#line 512 "cord.m"
void MR_CALL 
mercury__cord__member_node_2_p_0(
#line 512 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_T_9,
#line 512 "cord.m"
  MR_Box * mercury__cord__X_3,
#line 512 "cord.m"
  MR_Word mercury__cord__Node_4,
#line 512 "cord.m"
  MR_Cont mercury__cord__cont,
#line 512 "cord.m"
  void * mercury__cord__cont_env_ptr)
#line 512 "cord.m"
{
#line 517 "cord.m"
  while (MR_TRUE)
#line 517 "cord.m"
    {
#line 517 "cord.m"
      /* tailcall optimized into a loop */
#line 517 "cord.m"
      {
#line 517 "cord.m"
        MR_bool mercury__cord__succeeded;

#line 517 "cord.m"
        if (((MR_tag((MR_Word) mercury__cord__Node_4)) == (MR_mktag((MR_Integer) 2))))
#line 525 "cord.m"
          {
#line 525 "cord.m"
            MR_Word mercury__cord__A_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__Node_4, (MR_Integer) 0)));
#line 525 "cord.m"
            MR_Word mercury__cord__B_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__Node_4, (MR_Integer) 1)));

#line 527 "cord.m"
            {
#line 527 "cord.m"
              mercury__cord__member_node_2_p_0(mercury__cord__TypeInfo_for_T_9, mercury__cord__X_3, mercury__cord__A_7, mercury__cord__cont, mercury__cord__cont_env_ptr);
            }
#line 529 "cord.m"
            /* direct tailcall eliminated */
#line 529 "cord.m"
            {
#line 529 "cord.m"
              MR_Word mercury__cord__Node__tmp_copy_4 = mercury__cord__B_8;

#line 529 "cord.m"
              mercury__cord__Node_4 = mercury__cord__Node__tmp_copy_4;
#line 529 "cord.m"
            }
#line 529 "cord.m"
            continue;
#line 525 "cord.m"
          }
#line 517 "cord.m"
        else
#line 517 "cord.m"
          if (((MR_tag((MR_Word) mercury__cord__Node_4)) == (MR_mktag((MR_Integer) 1))))
#line 518 "cord.m"
            {
#line 518 "cord.m"
              MR_Box mercury__cord__H_5 = (MR_hl_field(MR_mktag(1), mercury__cord__Node_4, (MR_Integer) 0));
#line 518 "cord.m"
              MR_Word mercury__cord__T_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__Node_4, (MR_Integer) 1)));

#line 520 "cord.m"
              *mercury__cord__X_3 = mercury__cord__H_5;
#line 520 "cord.m"
              {
#line 520 "cord.m"
                mercury__cord__cont(mercury__cord__cont_env_ptr);
              }
#line 522 "cord.m"
              {
#line 522 "cord.m"
                mercury__list__member_2_p_1(mercury__cord__TypeInfo_for_T_9, mercury__cord__X_3, mercury__cord__T_6, mercury__cord__cont, mercury__cord__cont_env_ptr);
#line 522 "cord.m"
                return;
              }
#line 518 "cord.m"
            }
#line 517 "cord.m"
          else
#line 516 "cord.m"
            {
#line 516 "cord.m"
              *mercury__cord__X_3 = (MR_hl_field(MR_mktag(0), mercury__cord__Node_4, (MR_Integer) 0));
#line 516 "cord.m"
              {
#line 516 "cord.m"
                mercury__cord__cont(mercury__cord__cont_env_ptr);
#line 516 "cord.m"
                return;
              }
#line 516 "cord.m"
            }
#line 517 "cord.m"
      }
#line 517 "cord.m"
      break;
#line 517 "cord.m"
    }
#line 512 "cord.m"
}

#line 484 "cord.m"
void MR_CALL 
mercury__cord__get_last_node_2_p_0(
#line 484 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_T_11,
#line 484 "cord.m"
  MR_Word mercury__cord__Node_3,
#line 484 "cord.m"
  MR_Box * mercury__cord__Last_4)
#line 484 "cord.m"
{
#line 489 "cord.m"
  while (MR_TRUE)
#line 489 "cord.m"
    {
#line 489 "cord.m"
      /* tailcall optimized into a loop */
#line 489 "cord.m"
      {
#line 489 "cord.m"
        MR_bool mercury__cord__succeeded;

#line 489 "cord.m"
        if (((MR_tag((MR_Word) mercury__cord__Node_3)) == (MR_mktag((MR_Integer) 2))))
#line 499 "cord.m"
          {
#line 499 "cord.m"
            MR_Word mercury__cord__B_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__Node_3, (MR_Integer) 1)));
#line 499 "cord.m"
            MR_Word mercury__cord__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__Node_3, (MR_Integer) 0)));

#line 500 "cord.m"
            /* direct tailcall eliminated */
#line 500 "cord.m"
            {
#line 500 "cord.m"
              MR_Word mercury__cord__Node__tmp_copy_3 = mercury__cord__B_10;

#line 500 "cord.m"
              mercury__cord__Node_3 = mercury__cord__Node__tmp_copy_3;
#line 500 "cord.m"
            }
#line 500 "cord.m"
            continue;
#line 499 "cord.m"
          }
#line 489 "cord.m"
        else
#line 489 "cord.m"
          if (((MR_tag((MR_Word) mercury__cord__Node_3)) == (MR_mktag((MR_Integer) 1))))
#line 490 "cord.m"
            {
#line 490 "cord.m"
              MR_Box mercury__cord__Head_5 = (MR_hl_field(MR_mktag(1), mercury__cord__Node_3, (MR_Integer) 0));
#line 490 "cord.m"
              MR_Word mercury__cord__Tail_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__Node_3, (MR_Integer) 1)));

#line 494 "cord.m"
              if ((mercury__cord__Tail_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 493 "cord.m"
                *mercury__cord__Last_4 = mercury__cord__Head_5;
#line 494 "cord.m"
              else
#line 496 "cord.m"
                {
#line 496 "cord.m"
                  mercury__list__det_last_2_p_0(mercury__cord__TypeInfo_for_T_11, mercury__cord__Tail_6, mercury__cord__Last_4);
#line 496 "cord.m"
                  return;
                }
#line 490 "cord.m"
            }
#line 489 "cord.m"
          else
#line 488 "cord.m"
            *mercury__cord__Last_4 = (MR_hl_field(MR_mktag(0), mercury__cord__Node_3, (MR_Integer) 0));
#line 489 "cord.m"
      }
#line 489 "cord.m"
      break;
#line 489 "cord.m"
    }
#line 484 "cord.m"
}

#line 467 "cord.m"
void MR_CALL 
mercury__cord__get_first_node_2_p_0(
#line 467 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_T_8,
#line 467 "cord.m"
  MR_Word mercury__cord__Node_3,
#line 467 "cord.m"
  MR_Box * mercury__cord__Head_4)
#line 467 "cord.m"
{
#line 472 "cord.m"
  while (MR_TRUE)
#line 472 "cord.m"
    {
#line 472 "cord.m"
      /* tailcall optimized into a loop */
#line 472 "cord.m"
      {
#line 472 "cord.m"
        MR_bool mercury__cord__succeeded;

#line 472 "cord.m"
        if (((MR_tag((MR_Word) mercury__cord__Node_3)) == (MR_mktag((MR_Integer) 2))))
#line 475 "cord.m"
          {
#line 475 "cord.m"
            MR_Word mercury__cord__A_6 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__Node_3, (MR_Integer) 0)));
#line 475 "cord.m"
            MR_Word mercury__cord__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__Node_3, (MR_Integer) 1)));

#line 476 "cord.m"
            /* direct tailcall eliminated */
#line 476 "cord.m"
            {
#line 476 "cord.m"
              MR_Word mercury__cord__Node__tmp_copy_3 = mercury__cord__A_6;

#line 476 "cord.m"
              mercury__cord__Node_3 = mercury__cord__Node__tmp_copy_3;
#line 476 "cord.m"
            }
#line 476 "cord.m"
            continue;
#line 475 "cord.m"
          }
#line 472 "cord.m"
        else
#line 472 "cord.m"
          if (((MR_tag((MR_Word) mercury__cord__Node_3)) == (MR_mktag((MR_Integer) 1))))
#line 473 "cord.m"
            {
#line 473 "cord.m"
              MR_Word mercury__cord__V_5_5;

#line 473 "cord.m"
              *mercury__cord__Head_4 = (MR_hl_field(MR_mktag(1), mercury__cord__Node_3, (MR_Integer) 0));
#line 473 "cord.m"
              mercury__cord__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__Node_3, (MR_Integer) 1)));
#line 473 "cord.m"
            }
#line 472 "cord.m"
          else
#line 471 "cord.m"
            *mercury__cord__Head_4 = (MR_hl_field(MR_mktag(0), mercury__cord__Node_3, (MR_Integer) 0));
#line 472 "cord.m"
      }
#line 472 "cord.m"
      break;
#line 472 "cord.m"
    }
#line 467 "cord.m"
}

#line 432 "cord.m"
void MR_CALL 
mercury__cord__split_last_node_3_p_0(
#line 432 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_T_17,
#line 432 "cord.m"
  MR_Word mercury__cord__Node_4,
#line 432 "cord.m"
  MR_Word * mercury__cord__AllButLast_5,
#line 432 "cord.m"
  MR_Box * mercury__cord__Last_6)
#line 432 "cord.m"
{
#line 438 "cord.m"
  {
#line 438 "cord.m"
    MR_bool mercury__cord__succeeded;

#line 438 "cord.m"
    if (((MR_tag((MR_Word) mercury__cord__Node_4)) == (MR_mktag((MR_Integer) 2))))
#line 450 "cord.m"
      {
#line 450 "cord.m"
        MR_Word mercury__cord__A_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__Node_4, (MR_Integer) 0)));
#line 450 "cord.m"
        MR_Word mercury__cord__B0_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__Node_4, (MR_Integer) 1)));
#line 450 "cord.m"
        MR_Word mercury__cord__B_14;
#line 450 "cord.m"
        MR_Word mercury__cord__V_15_15;

#line 451 "cord.m"
        {
#line 451 "cord.m"
          mercury__cord__split_last_node_3_p_0(mercury__cord__TypeInfo_for_T_17, mercury__cord__B0_13, &mercury__cord__B_14, mercury__cord__Last_6);
        }
#line 452 "cord.m"
        {
#line 452 "cord.m"
          mercury__cord__V_15_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 452 "cord.m"
          MR_hl_field(MR_mktag(1), mercury__cord__V_15_15, 0) = ((MR_Box) (mercury__cord__A_12));
#line 452 "cord.m"
        }
#line 452 "cord.m"
        {
#line 452 "cord.m"
          *mercury__cord__AllButLast_5 = mercury__cord__f_43_43_2_f_0(mercury__cord__TypeInfo_for_T_17, mercury__cord__V_15_15, mercury__cord__B_14);
        }
#line 450 "cord.m"
      }
#line 438 "cord.m"
    else
#line 438 "cord.m"
      if (((MR_tag((MR_Word) mercury__cord__Node_4)) == (MR_mktag((MR_Integer) 1))))
#line 439 "cord.m"
        {
#line 439 "cord.m"
          MR_Box mercury__cord__H_7 = (MR_hl_field(MR_mktag(1), mercury__cord__Node_4, (MR_Integer) 0));
#line 439 "cord.m"
          MR_Word mercury__cord__T_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__Node_4, (MR_Integer) 1)));
#line 439 "cord.m"
          MR_Word mercury__cord__AllButLastList_9;

#line 440 "cord.m"
          {
#line 440 "cord.m"
            mercury__cord__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_108_105_115_116_95_108_97_115_116_95_95_91_49_93_95_48_4_p_0(mercury__cord__H_7, mercury__cord__T_8, &mercury__cord__AllButLastList_9, mercury__cord__Last_6);
          }
#line 444 "cord.m"
          if ((mercury__cord__AllButLastList_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 443 "cord.m"
            *mercury__cord__AllButLast_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 444 "cord.m"
          else
#line 445 "cord.m"
            {
#line 445 "cord.m"
              MR_Box mercury__cord__AllButLastHead_10 = (MR_hl_field(MR_mktag(1), mercury__cord__AllButLastList_9, (MR_Integer) 0));
#line 445 "cord.m"
              MR_Word mercury__cord__AllButLastTail_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__AllButLastList_9, (MR_Integer) 1)));
#line 445 "cord.m"
              MR_Word mercury__cord__V_16_16;

#line 447 "cord.m"
              {
#line 447 "cord.m"
                mercury__cord__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 447 "cord.m"
                MR_hl_field(MR_mktag(1), mercury__cord__V_16_16, 0) = mercury__cord__AllButLastHead_10;
#line 447 "cord.m"
                MR_hl_field(MR_mktag(1), mercury__cord__V_16_16, 1) = ((MR_Box) (mercury__cord__AllButLastTail_11));
#line 447 "cord.m"
              }
#line 446 "cord.m"
              {
#line 446 "cord.m"
                MR_Word base;
#line 446 "cord.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 446 "cord.m"
                *mercury__cord__AllButLast_5 = base;
#line 446 "cord.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__cord__V_16_16));
#line 446 "cord.m"
              }
#line 445 "cord.m"
            }
#line 439 "cord.m"
        }
#line 438 "cord.m"
      else
#line 436 "cord.m"
        {
#line 436 "cord.m"
          *mercury__cord__Last_6 = (MR_hl_field(MR_mktag(0), mercury__cord__Node_4, (MR_Integer) 0));
#line 437 "cord.m"
          *mercury__cord__AllButLast_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 436 "cord.m"
        }
#line 438 "cord.m"
  }
#line 432 "cord.m"
}

#line 399 "cord.m"
void MR_CALL 
mercury__cord__head_tail_node_3_p_0(
#line 399 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_T_17,
#line 399 "cord.m"
  MR_Word mercury__cord__Node_4,
#line 399 "cord.m"
  MR_Box * mercury__cord__Head_5,
#line 399 "cord.m"
  MR_Word * mercury__cord__Tail_6)
#line 399 "cord.m"
{
#line 405 "cord.m"
  {
#line 405 "cord.m"
    MR_bool mercury__cord__succeeded;

#line 405 "cord.m"
    if (((MR_tag((MR_Word) mercury__cord__Node_4)) == (MR_mktag((MR_Integer) 2))))
#line 416 "cord.m"
      {
#line 416 "cord.m"
        MR_Word mercury__cord__A0_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__Node_4, (MR_Integer) 0)));
#line 416 "cord.m"
        MR_Word mercury__cord__B_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__Node_4, (MR_Integer) 1)));
#line 416 "cord.m"
        MR_Word mercury__cord__AC_13;

#line 417 "cord.m"
        {
#line 417 "cord.m"
          mercury__cord__head_tail_node_3_p_0(mercury__cord__TypeInfo_for_T_17, mercury__cord__A0_11, mercury__cord__Head_5, &mercury__cord__AC_13);
        }
#line 421 "cord.m"
        if ((mercury__cord__AC_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 420 "cord.m"
          {
#line 420 "cord.m"
            MR_Word base;
#line 420 "cord.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 420 "cord.m"
            *mercury__cord__Tail_6 = base;
#line 420 "cord.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__cord__B_12));
#line 420 "cord.m"
          }
#line 421 "cord.m"
        else
#line 422 "cord.m"
          {
#line 422 "cord.m"
            MR_Word mercury__cord__A_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__AC_13, (MR_Integer) 0)));
#line 422 "cord.m"
            MR_Word mercury__cord__V_15_15;

#line 423 "cord.m"
            {
#line 423 "cord.m"
              mercury__cord__V_15_15 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 423 "cord.m"
              MR_hl_field(MR_mktag(2), mercury__cord__V_15_15, 0) = ((MR_Box) (mercury__cord__A_14));
#line 423 "cord.m"
              MR_hl_field(MR_mktag(2), mercury__cord__V_15_15, 1) = ((MR_Box) (mercury__cord__B_12));
#line 423 "cord.m"
            }
#line 423 "cord.m"
            {
#line 423 "cord.m"
              MR_Word base;
#line 423 "cord.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 423 "cord.m"
              *mercury__cord__Tail_6 = base;
#line 423 "cord.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__cord__V_15_15));
#line 423 "cord.m"
            }
#line 422 "cord.m"
          }
#line 416 "cord.m"
      }
#line 405 "cord.m"
    else
#line 405 "cord.m"
      if (((MR_tag((MR_Word) mercury__cord__Node_4)) == (MR_mktag((MR_Integer) 1))))
#line 406 "cord.m"
        {
#line 406 "cord.m"
          MR_Word mercury__cord__T_8;

#line 406 "cord.m"
          *mercury__cord__Head_5 = (MR_hl_field(MR_mktag(1), mercury__cord__Node_4, (MR_Integer) 0));
#line 406 "cord.m"
          mercury__cord__T_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__Node_4, (MR_Integer) 1)));
#line 411 "cord.m"
          if ((mercury__cord__T_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 410 "cord.m"
            *mercury__cord__Tail_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 411 "cord.m"
          else
#line 412 "cord.m"
            {
#line 412 "cord.m"
              MR_Box mercury__cord__TH_9 = (MR_hl_field(MR_mktag(1), mercury__cord__T_8, (MR_Integer) 0));
#line 412 "cord.m"
              MR_Word mercury__cord__TT_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__T_8, (MR_Integer) 1)));
#line 412 "cord.m"
              MR_Word mercury__cord__V_16_16;

#line 413 "cord.m"
              {
#line 413 "cord.m"
                mercury__cord__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 413 "cord.m"
                MR_hl_field(MR_mktag(1), mercury__cord__V_16_16, 0) = mercury__cord__TH_9;
#line 413 "cord.m"
                MR_hl_field(MR_mktag(1), mercury__cord__V_16_16, 1) = ((MR_Box) (mercury__cord__TT_10));
#line 413 "cord.m"
              }
#line 413 "cord.m"
              {
#line 413 "cord.m"
                MR_Word base;
#line 413 "cord.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 413 "cord.m"
                *mercury__cord__Tail_6 = base;
#line 413 "cord.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__cord__V_16_16));
#line 413 "cord.m"
              }
#line 412 "cord.m"
            }
#line 406 "cord.m"
        }
#line 405 "cord.m"
      else
#line 403 "cord.m"
        {
#line 403 "cord.m"
          *mercury__cord__Head_5 = (MR_hl_field(MR_mktag(0), mercury__cord__Node_4, (MR_Integer) 0));
#line 404 "cord.m"
          *mercury__cord__Tail_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 403 "cord.m"
        }
#line 405 "cord.m"
  }
#line 399 "cord.m"
}

#line 389 "cord.m"
MR_Word MR_CALL 
mercury__cord__cord_list_to_list_2_2_f_0(
#line 389 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_T_9,
#line 389 "cord.m"
  MR_Word mercury__cord__HeadVar__1_1,
#line 389 "cord.m"
  MR_Word mercury__cord__L_2)
#line 389 "cord.m"
{
#line 391 "cord.m"
  {
#line 391 "cord.m"
    MR_bool mercury__cord__succeeded;
#line 391 "cord.m"
    MR_Word mercury__cord__HeadVar__3_3;

#line 391 "cord.m"
    if ((mercury__cord__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 391 "cord.m"
      mercury__cord__HeadVar__3_3 = mercury__cord__L_2;
#line 391 "cord.m"
    else
#line 392 "cord.m"
      {
#line 392 "cord.m"
        MR_Word mercury__cord__N_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__1_1, (MR_Integer) 0)));
#line 392 "cord.m"
        MR_Word mercury__cord__V_7_7;
#line 392 "cord.m"
        MR_Word mercury__cord__V_8_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 392 "cord.m"
        {
#line 392 "cord.m"
          mercury__cord__V_7_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 392 "cord.m"
          MR_hl_field(MR_mktag(1), mercury__cord__V_7_7, 0) = ((MR_Box) (mercury__cord__N_5));
#line 392 "cord.m"
          MR_hl_field(MR_mktag(1), mercury__cord__V_7_7, 1) = ((MR_Box) (mercury__cord__V_8_8));
#line 392 "cord.m"
        }
#line 392 "cord.m"
        {
#line 392 "cord.m"
          return mercury__cord__HeadVar__3_3 = mercury__cord__list_2_2_f_0(mercury__cord__TypeInfo_for_T_9, mercury__cord__V_7_7, mercury__cord__L_2);
        }
#line 392 "cord.m"
      }
#line 391 "cord.m"
    return mercury__cord__HeadVar__3_3;
#line 391 "cord.m"
  }
#line 389 "cord.m"
}

#line 292 "cord.m"
static MR_Word MR_CALL 
mercury__cord__list_2_2_f_0(
#line 292 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_T_19,
#line 292 "cord.m"
  MR_Word mercury__cord__HeadVar__1_1,
#line 292 "cord.m"
  MR_Word mercury__cord__HeadVar__2_2)
#line 292 "cord.m"
{
#line 294 "cord.m"
  while (MR_TRUE)
#line 294 "cord.m"
    {
#line 294 "cord.m"
      /* tailcall optimized into a loop */
#line 294 "cord.m"
      {
#line 294 "cord.m"
        MR_bool mercury__cord__succeeded;
#line 294 "cord.m"
        MR_Word mercury__cord__L_3;

#line 294 "cord.m"
        if ((mercury__cord__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 294 "cord.m"
          mercury__cord__L_3 = mercury__cord__HeadVar__2_2;
#line 294 "cord.m"
        else
#line 295 "cord.m"
          {
#line 295 "cord.m"
            MR_Word mercury__cord__N_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__1_1, (MR_Integer) 0)));
#line 295 "cord.m"
            MR_Word mercury__cord__Ns_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__1_1, (MR_Integer) 1)));

#line 299 "cord.m"
            if (((MR_tag((MR_Word) mercury__cord__N_5)) == (MR_mktag((MR_Integer) 2))))
#line 303 "cord.m"
              {
#line 303 "cord.m"
                MR_Word mercury__cord__A_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__N_5, (MR_Integer) 0)));
#line 303 "cord.m"
                MR_Word mercury__cord__B_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__N_5, (MR_Integer) 1)));
#line 303 "cord.m"
                MR_Word mercury__cord__V_14_14;
#line 303 "cord.m"
                MR_Word mercury__cord__V_15_15;

#line 304 "cord.m"
                {
#line 304 "cord.m"
                  mercury__cord__V_15_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 304 "cord.m"
                  MR_hl_field(MR_mktag(1), mercury__cord__V_15_15, 0) = ((MR_Box) (mercury__cord__A_12));
#line 304 "cord.m"
                  MR_hl_field(MR_mktag(1), mercury__cord__V_15_15, 1) = ((MR_Box) (mercury__cord__Ns_6));
#line 304 "cord.m"
                }
#line 304 "cord.m"
                {
#line 304 "cord.m"
                  mercury__cord__V_14_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 304 "cord.m"
                  MR_hl_field(MR_mktag(1), mercury__cord__V_14_14, 0) = ((MR_Box) (mercury__cord__B_13));
#line 304 "cord.m"
                  MR_hl_field(MR_mktag(1), mercury__cord__V_14_14, 1) = ((MR_Box) (mercury__cord__V_15_15));
#line 304 "cord.m"
                }
#line 304 "cord.m"
                /* direct tailcall eliminated */
#line 304 "cord.m"
                {
#line 304 "cord.m"
                  MR_Word mercury__cord__HeadVar__1__tmp_copy_1 = mercury__cord__V_14_14;

#line 304 "cord.m"
                  mercury__cord__HeadVar__1_1 = mercury__cord__HeadVar__1__tmp_copy_1;
#line 304 "cord.m"
                }
#line 304 "cord.m"
                continue;
#line 303 "cord.m"
              }
#line 299 "cord.m"
            else
#line 299 "cord.m"
              if (((MR_tag((MR_Word) mercury__cord__N_5)) == (MR_mktag((MR_Integer) 1))))
#line 300 "cord.m"
                {
#line 300 "cord.m"
                  MR_Box mercury__cord__H_10 = (MR_hl_field(MR_mktag(1), mercury__cord__N_5, (MR_Integer) 0));
#line 300 "cord.m"
                  MR_Word mercury__cord__T_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__N_5, (MR_Integer) 1)));
#line 300 "cord.m"
                  MR_Word mercury__cord__V_16_16;
#line 300 "cord.m"
                  MR_Word mercury__cord__V_17_17;

#line 46 "list.opt"
                  {
#line 46 "list.opt"
                    mercury__list__append_3_p_1(mercury__cord__TypeInfo_for_T_19, mercury__cord__T_11, mercury__cord__HeadVar__2_2, &mercury__cord__V_17_17);
                  }
#line 301 "cord.m"
                  {
#line 301 "cord.m"
                    mercury__cord__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 301 "cord.m"
                    MR_hl_field(MR_mktag(1), mercury__cord__V_16_16, 0) = mercury__cord__H_10;
#line 301 "cord.m"
                    MR_hl_field(MR_mktag(1), mercury__cord__V_16_16, 1) = ((MR_Box) (mercury__cord__V_17_17));
#line 301 "cord.m"
                  }
#line 301 "cord.m"
                  /* direct tailcall eliminated */
#line 301 "cord.m"
                  {
#line 301 "cord.m"
                    MR_Word mercury__cord__HeadVar__1__tmp_copy_1 = mercury__cord__Ns_6;
#line 301 "cord.m"
                    MR_Word mercury__cord__HeadVar__2__tmp_copy_2 = mercury__cord__V_16_16;

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
#line 299 "cord.m"
              else
#line 297 "cord.m"
                {
#line 297 "cord.m"
                  MR_Box mercury__cord__X_9 = (MR_hl_field(MR_mktag(0), mercury__cord__N_5, (MR_Integer) 0));
#line 297 "cord.m"
                  MR_Word mercury__cord__V_18_18;

#line 298 "cord.m"
                  {
#line 298 "cord.m"
                    mercury__cord__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 298 "cord.m"
                    MR_hl_field(MR_mktag(1), mercury__cord__V_18_18, 0) = mercury__cord__X_9;
#line 298 "cord.m"
                    MR_hl_field(MR_mktag(1), mercury__cord__V_18_18, 1) = ((MR_Box) (mercury__cord__HeadVar__2_2));
#line 298 "cord.m"
                  }
#line 298 "cord.m"
                  /* direct tailcall eliminated */
#line 298 "cord.m"
                  {
#line 298 "cord.m"
                    MR_Word mercury__cord__HeadVar__1__tmp_copy_1 = mercury__cord__Ns_6;
#line 298 "cord.m"
                    MR_Word mercury__cord__HeadVar__2__tmp_copy_2 = mercury__cord__V_18_18;

#line 298 "cord.m"
                    mercury__cord__HeadVar__2_2 = mercury__cord__HeadVar__2__tmp_copy_2;
#line 298 "cord.m"
                    mercury__cord__HeadVar__1_1 = mercury__cord__HeadVar__1__tmp_copy_1;
#line 298 "cord.m"
                  }
#line 298 "cord.m"
                  continue;
#line 297 "cord.m"
                }
#line 295 "cord.m"
          }
#line 294 "cord.m"
        return mercury__cord__L_3;
#line 294 "cord.m"
      }
#line 294 "cord.m"
      break;
#line 294 "cord.m"
    }
#line 292 "cord.m"
}

#line 275 "cord.m"
MR_Word MR_CALL 
mercury__cord__condense_2_1_f_0(
#line 275 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_T_11,
#line 275 "cord.m"
  MR_Word mercury__cord__HeadVar__1_1)
#line 275 "cord.m"
{
#line 277 "cord.m"
  {
#line 277 "cord.m"
    MR_bool mercury__cord__succeeded;
#line 277 "cord.m"
    MR_Word mercury__cord__HeadVar__2_2;

#line 277 "cord.m"
    if (((MR_tag((MR_Word) mercury__cord__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 279 "cord.m"
      {
#line 279 "cord.m"
        MR_Word mercury__cord__Left0_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__HeadVar__1_1, (MR_Integer) 0)));
#line 279 "cord.m"
        MR_Word mercury__cord__Right0_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__HeadVar__1_1, (MR_Integer) 1)));
#line 279 "cord.m"
        MR_Word mercury__cord__Left_9;
#line 279 "cord.m"
        MR_Word mercury__cord__Right_10;

#line 280 "cord.m"
        {
#line 280 "cord.m"
          mercury__cord__Left_9 = mercury__cord__condense_2_1_f_0(mercury__cord__TypeInfo_for_T_11, mercury__cord__Left0_7);
        }
#line 281 "cord.m"
        {
#line 281 "cord.m"
          mercury__cord__Right_10 = mercury__cord__condense_2_1_f_0(mercury__cord__TypeInfo_for_T_11, mercury__cord__Right0_8);
        }
#line 279 "cord.m"
        {
#line 279 "cord.m"
          return mercury__cord__HeadVar__2_2 = mercury__cord__f_43_43_2_f_0(mercury__cord__TypeInfo_for_T_11, mercury__cord__Left_9, mercury__cord__Right_10);
        }
#line 279 "cord.m"
      }
#line 277 "cord.m"
    else
#line 277 "cord.m"
      if (((MR_tag((MR_Word) mercury__cord__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 278 "cord.m"
        {
#line 278 "cord.m"
          MR_Word mercury__cord__C_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__1_1, (MR_Integer) 0)));
#line 278 "cord.m"
          MR_Word mercury__cord__L_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__1_1, (MR_Integer) 1)));
#line 278 "cord.m"
          MR_Word mercury__cord__V_6_6;

#line 278 "cord.m"
          {
#line 278 "cord.m"
            mercury__cord__V_6_6 = mercury__cord__cord_list_to_cord_1_f_0(mercury__cord__TypeInfo_for_T_11, mercury__cord__L_5);
          }
#line 278 "cord.m"
          {
#line 278 "cord.m"
            return mercury__cord__HeadVar__2_2 = mercury__cord__f_43_43_2_f_0(mercury__cord__TypeInfo_for_T_11, mercury__cord__C_4, mercury__cord__V_6_6);
          }
#line 278 "cord.m"
        }
#line 277 "cord.m"
      else
#line 277 "cord.m"
        mercury__cord__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__cord__HeadVar__1_1, (MR_Integer) 0)));
#line 277 "cord.m"
    return mercury__cord__HeadVar__2_2;
#line 277 "cord.m"
  }
#line 275 "cord.m"
}

#line 227 "cord.m"
MR_bool MR_CALL 
mercury__cord__equal_2_p_0(
#line 227 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_T_6,
#line 227 "cord.m"
  MR_Word mercury__cord__CA_3,
#line 227 "cord.m"
  MR_Word mercury__cord__CB_4)
#line 227 "cord.m"
{
#line 842 "cord.m"
  {
#line 842 "cord.m"
    MR_bool mercury__cord__succeeded;
#line 842 "cord.m"
    MR_Word mercury__cord__V_5_5;
#line 842 "cord.m"
    MR_Word mercury__cord__V_7_7;

#line 285 "cord.m"
    if ((mercury__cord__CA_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 285 "cord.m"
      mercury__cord__V_5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 285 "cord.m"
    else
#line 286 "cord.m"
      {
#line 286 "cord.m"
        MR_Word mercury__cord__N_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__CA_3, (MR_Integer) 0)));
#line 286 "cord.m"
        MR_Word mercury__cord__V_11_11;
#line 286 "cord.m"
        MR_Word mercury__cord__V_12_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 286 "cord.m"
        MR_Word mercury__cord__V_13_13;

#line 286 "cord.m"
        {
#line 286 "cord.m"
          mercury__cord__V_11_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 286 "cord.m"
          MR_hl_field(MR_mktag(1), mercury__cord__V_11_11, 0) = ((MR_Box) (mercury__cord__N_10));
#line 286 "cord.m"
          MR_hl_field(MR_mktag(1), mercury__cord__V_11_11, 1) = ((MR_Box) (mercury__cord__V_12_12));
#line 286 "cord.m"
        }
#line 286 "cord.m"
        mercury__cord__V_13_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 286 "cord.m"
        {
#line 286 "cord.m"
          mercury__cord__V_5_5 = mercury__cord__list_2_2_f_0(mercury__cord__TypeInfo_for_T_6, mercury__cord__V_11_11, mercury__cord__V_13_13);
        }
#line 286 "cord.m"
      }
#line 285 "cord.m"
    if ((mercury__cord__CB_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 285 "cord.m"
      mercury__cord__V_7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 285 "cord.m"
    else
#line 286 "cord.m"
      {
#line 286 "cord.m"
        MR_Word mercury__cord__N_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__CB_4, (MR_Integer) 0)));
#line 286 "cord.m"
        MR_Word mercury__cord__V_15_15;
#line 286 "cord.m"
        MR_Word mercury__cord__V_16_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 286 "cord.m"
        MR_Word mercury__cord__V_17_17;

#line 286 "cord.m"
        {
#line 286 "cord.m"
          mercury__cord__V_15_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 286 "cord.m"
          MR_hl_field(MR_mktag(1), mercury__cord__V_15_15, 0) = ((MR_Box) (mercury__cord__N_14));
#line 286 "cord.m"
          MR_hl_field(MR_mktag(1), mercury__cord__V_15_15, 1) = ((MR_Box) (mercury__cord__V_16_16));
#line 286 "cord.m"
        }
#line 286 "cord.m"
        mercury__cord__V_17_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 286 "cord.m"
        {
#line 286 "cord.m"
          mercury__cord__V_7_7 = mercury__cord__list_2_2_f_0(mercury__cord__TypeInfo_for_T_6, mercury__cord__V_15_15, mercury__cord__V_17_17);
        }
#line 286 "cord.m"
      }
#line 844 "cord.m"
    {
#line 844 "cord.m"
      return mercury__cord__succeeded = mercury__list____Unify____list_1_0(mercury__cord__TypeInfo_for_T_6, mercury__cord__V_5_5, mercury__cord__V_7_7);
    }
#line 842 "cord.m"
    return mercury__cord__succeeded;
#line 842 "cord.m"
  }
#line 227 "cord.m"
}

#line 217 "cord.m"
void MR_CALL 
mercury__cord__map_foldl3_9_p_0(
#line 217 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_A_35,
#line 217 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_B_36,
#line 217 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_C_37,
#line 217 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_D_38,
#line 217 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_E_39,
#line 217 "cord.m"
  MR_Word mercury__cord__HeadVar__1_1,
#line 217 "cord.m"
  MR_Word mercury__cord__HeadVar__2_2,
#line 217 "cord.m"
  MR_Word * mercury__cord__HeadVar__3_3,
#line 217 "cord.m"
  MR_Box mercury__cord__STATE_VARIABLE_A_0_4,
#line 217 "cord.m"
  MR_Box * mercury__cord__STATE_VARIABLE_A_5,
#line 217 "cord.m"
  MR_Box mercury__cord__STATE_VARIABLE_B_0_6,
#line 217 "cord.m"
  MR_Box * mercury__cord__STATE_VARIABLE_B_7,
#line 217 "cord.m"
  MR_Box mercury__cord__STATE_VARIABLE_C_0_8,
#line 217 "cord.m"
  MR_Box * mercury__cord__STATE_VARIABLE_C_9)
#line 217 "cord.m"
{
#line 822 "cord.m"
  {
#line 822 "cord.m"
    MR_bool mercury__cord__succeeded;

#line 822 "cord.m"
    if ((mercury__cord__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 822 "cord.m"
      {
#line 822 "cord.m"
        *mercury__cord__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 822 "cord.m"
        *mercury__cord__STATE_VARIABLE_C_9 = mercury__cord__STATE_VARIABLE_C_0_8;
#line 822 "cord.m"
        *mercury__cord__STATE_VARIABLE_B_7 = mercury__cord__STATE_VARIABLE_B_0_6;
#line 822 "cord.m"
        *mercury__cord__STATE_VARIABLE_A_5 = mercury__cord__STATE_VARIABLE_A_0_4;
#line 822 "cord.m"
      }
#line 822 "cord.m"
    else
#line 823 "cord.m"
      {
#line 823 "cord.m"
        MR_Word mercury__cord__NX_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 0)));
#line 823 "cord.m"
        MR_Word mercury__cord__NY_22;

#line 824 "cord.m"
        {
#line 824 "cord.m"
          mercury__cord__map_foldl3_node_9_p_0(mercury__cord__TypeInfo_for_A_35, mercury__cord__TypeInfo_for_B_36, mercury__cord__TypeInfo_for_C_37, mercury__cord__TypeInfo_for_D_38, mercury__cord__TypeInfo_for_E_39, mercury__cord__HeadVar__1_1, mercury__cord__NX_21, &mercury__cord__NY_22, mercury__cord__STATE_VARIABLE_A_0_4, mercury__cord__STATE_VARIABLE_A_5, mercury__cord__STATE_VARIABLE_B_0_6, mercury__cord__STATE_VARIABLE_B_7, mercury__cord__STATE_VARIABLE_C_0_8, mercury__cord__STATE_VARIABLE_C_9);
        }
#line 823 "cord.m"
        {
#line 823 "cord.m"
          MR_Word base;
#line 823 "cord.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 823 "cord.m"
          *mercury__cord__HeadVar__3_3 = base;
#line 823 "cord.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__cord__NY_22));
#line 823 "cord.m"
        }
#line 823 "cord.m"
      }
#line 822 "cord.m"
  }
#line 217 "cord.m"
}

#line 211 "cord.m"
void MR_CALL 
mercury__cord__map_foldl2_7_p_0(
#line 211 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_A_26,
#line 211 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_B_27,
#line 211 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_C_28,
#line 211 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_D_29,
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
  MR_Box * mercury__cord__STATE_VARIABLE_B_7)
#line 211 "cord.m"
{
#line 803 "cord.m"
  {
#line 803 "cord.m"
    MR_bool mercury__cord__succeeded;

#line 803 "cord.m"
    if ((mercury__cord__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 803 "cord.m"
      {
#line 803 "cord.m"
        *mercury__cord__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 803 "cord.m"
        *mercury__cord__STATE_VARIABLE_B_7 = mercury__cord__STATE_VARIABLE_B_0_6;
#line 803 "cord.m"
        *mercury__cord__STATE_VARIABLE_A_5 = mercury__cord__STATE_VARIABLE_A_0_4;
#line 803 "cord.m"
      }
#line 803 "cord.m"
    else
#line 804 "cord.m"
      {
#line 804 "cord.m"
        MR_Word mercury__cord__NX_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 0)));
#line 804 "cord.m"
        MR_Word mercury__cord__NY_17;

#line 805 "cord.m"
        {
#line 805 "cord.m"
          mercury__cord__map_foldl2_node_7_p_0(mercury__cord__TypeInfo_for_A_26, mercury__cord__TypeInfo_for_B_27, mercury__cord__TypeInfo_for_C_28, mercury__cord__TypeInfo_for_D_29, mercury__cord__HeadVar__1_1, mercury__cord__NX_16, &mercury__cord__NY_17, mercury__cord__STATE_VARIABLE_A_0_4, mercury__cord__STATE_VARIABLE_A_5, mercury__cord__STATE_VARIABLE_B_0_6, mercury__cord__STATE_VARIABLE_B_7);
        }
#line 804 "cord.m"
        {
#line 804 "cord.m"
          MR_Word base;
#line 804 "cord.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 804 "cord.m"
          *mercury__cord__HeadVar__3_3 = base;
#line 804 "cord.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__cord__NY_17));
#line 804 "cord.m"
        }
#line 804 "cord.m"
      }
#line 803 "cord.m"
  }
#line 211 "cord.m"
}

#line 206 "cord.m"
MR_bool MR_CALL 
mercury__cord__map_foldl_5_p_5(
#line 206 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_A_17,
#line 206 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_B_18,
#line 206 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_C_19,
#line 206 "cord.m"
  MR_Word mercury__cord__HeadVar__1_1,
#line 206 "cord.m"
  MR_Word mercury__cord__HeadVar__2_2,
#line 206 "cord.m"
  MR_Word * mercury__cord__HeadVar__3_3,
#line 206 "cord.m"
  MR_Box mercury__cord__STATE_VARIABLE_A_0_4,
#line 206 "cord.m"
  MR_Box * mercury__cord__STATE_VARIABLE_A_5)
#line 206 "cord.m"
{
#line 774 "cord.m"
  {
#line 774 "cord.m"
    MR_bool mercury__cord__succeeded;

#line 774 "cord.m"
    if ((mercury__cord__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 774 "cord.m"
      {
#line 774 "cord.m"
        *mercury__cord__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 774 "cord.m"
        *mercury__cord__STATE_VARIABLE_A_5 = mercury__cord__STATE_VARIABLE_A_0_4;
#line 774 "cord.m"
        mercury__cord__succeeded = MR_TRUE;
#line 774 "cord.m"
      }
#line 774 "cord.m"
    else
#line 775 "cord.m"
      {
#line 775 "cord.m"
        MR_Word mercury__cord__NX_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 0)));
#line 775 "cord.m"
        MR_Word mercury__cord__NY_12;

#line 776 "cord.m"
        {
#line 776 "cord.m"
          mercury__cord__succeeded = mercury__cord__map_foldl_node_5_p_5(mercury__cord__TypeInfo_for_A_17, mercury__cord__TypeInfo_for_B_18, mercury__cord__TypeInfo_for_C_19, mercury__cord__HeadVar__1_1, mercury__cord__NX_11, &mercury__cord__NY_12, mercury__cord__STATE_VARIABLE_A_0_4, mercury__cord__STATE_VARIABLE_A_5);
        }
#line 775 "cord.m"
        if (mercury__cord__succeeded)
#line 775 "cord.m"
          {
#line 775 "cord.m"
            {
#line 775 "cord.m"
              MR_Word base;
#line 775 "cord.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 775 "cord.m"
              *mercury__cord__HeadVar__3_3 = base;
#line 775 "cord.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__cord__NY_12));
#line 775 "cord.m"
            }
#line 775 "cord.m"
            mercury__cord__succeeded = MR_TRUE;
#line 775 "cord.m"
          }
#line 775 "cord.m"
      }
#line 774 "cord.m"
    return mercury__cord__succeeded;
#line 774 "cord.m"
  }
#line 206 "cord.m"
}

#line 204 "cord.m"
MR_bool MR_CALL 
mercury__cord__map_foldl_5_p_4(
#line 204 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_A_17,
#line 204 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_B_18,
#line 204 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_C_19,
#line 204 "cord.m"
  MR_Word mercury__cord__HeadVar__1_1,
#line 204 "cord.m"
  MR_Word mercury__cord__HeadVar__2_2,
#line 204 "cord.m"
  MR_Word * mercury__cord__HeadVar__3_3,
#line 204 "cord.m"
  MR_Box mercury__cord__STATE_VARIABLE_A_0_4,
#line 204 "cord.m"
  MR_Box * mercury__cord__STATE_VARIABLE_A_5)
#line 204 "cord.m"
{
#line 774 "cord.m"
  {
#line 774 "cord.m"
    MR_bool mercury__cord__succeeded;

#line 774 "cord.m"
    if ((mercury__cord__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 774 "cord.m"
      {
#line 774 "cord.m"
        *mercury__cord__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 774 "cord.m"
        *mercury__cord__STATE_VARIABLE_A_5 = mercury__cord__STATE_VARIABLE_A_0_4;
#line 774 "cord.m"
        mercury__cord__succeeded = MR_TRUE;
#line 774 "cord.m"
      }
#line 774 "cord.m"
    else
#line 775 "cord.m"
      {
#line 775 "cord.m"
        MR_Word mercury__cord__NX_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 0)));
#line 775 "cord.m"
        MR_Word mercury__cord__NY_12;

#line 776 "cord.m"
        {
#line 776 "cord.m"
          mercury__cord__succeeded = mercury__cord__map_foldl_node_5_p_4(mercury__cord__TypeInfo_for_A_17, mercury__cord__TypeInfo_for_B_18, mercury__cord__TypeInfo_for_C_19, mercury__cord__HeadVar__1_1, mercury__cord__NX_11, &mercury__cord__NY_12, mercury__cord__STATE_VARIABLE_A_0_4, mercury__cord__STATE_VARIABLE_A_5);
        }
#line 775 "cord.m"
        if (mercury__cord__succeeded)
#line 775 "cord.m"
          {
#line 775 "cord.m"
            {
#line 775 "cord.m"
              MR_Word base;
#line 775 "cord.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 775 "cord.m"
              *mercury__cord__HeadVar__3_3 = base;
#line 775 "cord.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__cord__NY_12));
#line 775 "cord.m"
            }
#line 775 "cord.m"
            mercury__cord__succeeded = MR_TRUE;
#line 775 "cord.m"
          }
#line 775 "cord.m"
      }
#line 774 "cord.m"
    return mercury__cord__succeeded;
#line 774 "cord.m"
  }
#line 204 "cord.m"
}

#line 202 "cord.m"
MR_bool MR_CALL 
mercury__cord__map_foldl_5_p_3(
#line 202 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_A_17,
#line 202 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_B_18,
#line 202 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_C_19,
#line 202 "cord.m"
  MR_Word mercury__cord__HeadVar__1_1,
#line 202 "cord.m"
  MR_Word mercury__cord__HeadVar__2_2,
#line 202 "cord.m"
  MR_Word * mercury__cord__HeadVar__3_3,
#line 202 "cord.m"
  MR_Box mercury__cord__STATE_VARIABLE_A_0_4,
#line 202 "cord.m"
  MR_Box * mercury__cord__STATE_VARIABLE_A_5)
#line 202 "cord.m"
{
#line 774 "cord.m"
  {
#line 774 "cord.m"
    MR_bool mercury__cord__succeeded;

#line 774 "cord.m"
    if ((mercury__cord__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 774 "cord.m"
      {
#line 774 "cord.m"
        *mercury__cord__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 774 "cord.m"
        *mercury__cord__STATE_VARIABLE_A_5 = mercury__cord__STATE_VARIABLE_A_0_4;
#line 774 "cord.m"
        mercury__cord__succeeded = MR_TRUE;
#line 774 "cord.m"
      }
#line 774 "cord.m"
    else
#line 775 "cord.m"
      {
#line 775 "cord.m"
        MR_Word mercury__cord__NX_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 0)));
#line 775 "cord.m"
        MR_Word mercury__cord__NY_12;

#line 776 "cord.m"
        {
#line 776 "cord.m"
          mercury__cord__succeeded = mercury__cord__map_foldl_node_5_p_3(mercury__cord__TypeInfo_for_A_17, mercury__cord__TypeInfo_for_B_18, mercury__cord__TypeInfo_for_C_19, mercury__cord__HeadVar__1_1, mercury__cord__NX_11, &mercury__cord__NY_12, mercury__cord__STATE_VARIABLE_A_0_4, mercury__cord__STATE_VARIABLE_A_5);
        }
#line 775 "cord.m"
        if (mercury__cord__succeeded)
#line 775 "cord.m"
          {
#line 775 "cord.m"
            {
#line 775 "cord.m"
              MR_Word base;
#line 775 "cord.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 775 "cord.m"
              *mercury__cord__HeadVar__3_3 = base;
#line 775 "cord.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__cord__NY_12));
#line 775 "cord.m"
            }
#line 775 "cord.m"
            mercury__cord__succeeded = MR_TRUE;
#line 775 "cord.m"
          }
#line 775 "cord.m"
      }
#line 774 "cord.m"
    return mercury__cord__succeeded;
#line 774 "cord.m"
  }
#line 202 "cord.m"
}

#line 200 "cord.m"
void MR_CALL 
mercury__cord__map_foldl_5_p_2(
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
#line 774 "cord.m"
  {
#line 774 "cord.m"
    MR_bool mercury__cord__succeeded;

#line 774 "cord.m"
    if ((mercury__cord__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 774 "cord.m"
      {
#line 774 "cord.m"
        *mercury__cord__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 774 "cord.m"
        *mercury__cord__STATE_VARIABLE_A_5 = mercury__cord__STATE_VARIABLE_A_0_4;
#line 774 "cord.m"
      }
#line 774 "cord.m"
    else
#line 775 "cord.m"
      {
#line 775 "cord.m"
        MR_Word mercury__cord__NX_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 0)));
#line 775 "cord.m"
        MR_Word mercury__cord__NY_12;

#line 776 "cord.m"
        {
#line 776 "cord.m"
          mercury__cord__map_foldl_node_5_p_2(mercury__cord__TypeInfo_for_A_17, mercury__cord__TypeInfo_for_B_18, mercury__cord__TypeInfo_for_C_19, mercury__cord__HeadVar__1_1, mercury__cord__NX_11, &mercury__cord__NY_12, mercury__cord__STATE_VARIABLE_A_0_4, mercury__cord__STATE_VARIABLE_A_5);
        }
#line 775 "cord.m"
        {
#line 775 "cord.m"
          MR_Word base;
#line 775 "cord.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 775 "cord.m"
          *mercury__cord__HeadVar__3_3 = base;
#line 775 "cord.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__cord__NY_12));
#line 775 "cord.m"
        }
#line 775 "cord.m"
      }
#line 774 "cord.m"
  }
#line 200 "cord.m"
}

#line 198 "cord.m"
void MR_CALL 
mercury__cord__map_foldl_5_p_1(
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
#line 774 "cord.m"
  {
#line 774 "cord.m"
    MR_bool mercury__cord__succeeded;

#line 774 "cord.m"
    if ((mercury__cord__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 774 "cord.m"
      {
#line 774 "cord.m"
        *mercury__cord__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 774 "cord.m"
        *mercury__cord__STATE_VARIABLE_A_5 = mercury__cord__STATE_VARIABLE_A_0_4;
#line 774 "cord.m"
      }
#line 774 "cord.m"
    else
#line 775 "cord.m"
      {
#line 775 "cord.m"
        MR_Word mercury__cord__NX_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 0)));
#line 775 "cord.m"
        MR_Word mercury__cord__NY_12;

#line 776 "cord.m"
        {
#line 776 "cord.m"
          mercury__cord__map_foldl_node_5_p_1(mercury__cord__TypeInfo_for_A_17, mercury__cord__TypeInfo_for_B_18, mercury__cord__TypeInfo_for_C_19, mercury__cord__HeadVar__1_1, mercury__cord__NX_11, &mercury__cord__NY_12, mercury__cord__STATE_VARIABLE_A_0_4, mercury__cord__STATE_VARIABLE_A_5);
        }
#line 775 "cord.m"
        {
#line 775 "cord.m"
          MR_Word base;
#line 775 "cord.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 775 "cord.m"
          *mercury__cord__HeadVar__3_3 = base;
#line 775 "cord.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__cord__NY_12));
#line 775 "cord.m"
        }
#line 775 "cord.m"
      }
#line 774 "cord.m"
  }
#line 198 "cord.m"
}

#line 196 "cord.m"
void MR_CALL 
mercury__cord__map_foldl_5_p_0(
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
#line 774 "cord.m"
  {
#line 774 "cord.m"
    MR_bool mercury__cord__succeeded;

#line 774 "cord.m"
    if ((mercury__cord__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 774 "cord.m"
      {
#line 774 "cord.m"
        *mercury__cord__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 774 "cord.m"
        *mercury__cord__STATE_VARIABLE_A_5 = mercury__cord__STATE_VARIABLE_A_0_4;
#line 774 "cord.m"
      }
#line 774 "cord.m"
    else
#line 775 "cord.m"
      {
#line 775 "cord.m"
        MR_Word mercury__cord__NX_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 0)));
#line 775 "cord.m"
        MR_Word mercury__cord__NY_12;

#line 776 "cord.m"
        {
#line 776 "cord.m"
          mercury__cord__map_foldl_node_5_p_0(mercury__cord__TypeInfo_for_A_17, mercury__cord__TypeInfo_for_B_18, mercury__cord__TypeInfo_for_C_19, mercury__cord__HeadVar__1_1, mercury__cord__NX_11, &mercury__cord__NY_12, mercury__cord__STATE_VARIABLE_A_0_4, mercury__cord__STATE_VARIABLE_A_5);
        }
#line 775 "cord.m"
        {
#line 775 "cord.m"
          MR_Word base;
#line 775 "cord.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 775 "cord.m"
          *mercury__cord__HeadVar__3_3 = base;
#line 775 "cord.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__cord__NY_12));
#line 775 "cord.m"
        }
#line 775 "cord.m"
      }
#line 774 "cord.m"
  }
#line 196 "cord.m"
}

#line 186 "cord.m"
MR_bool MR_CALL 
mercury__cord__foldr_pred_4_p_5(
#line 186 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_T_16,
#line 186 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_U_17,
#line 186 "cord.m"
  MR_Word mercury__cord__HeadVar__1_1,
#line 186 "cord.m"
  MR_Word mercury__cord__HeadVar__2_2,
#line 186 "cord.m"
  MR_Box mercury__cord__STATE_VARIABLE_Acc_0_3,
#line 186 "cord.m"
  MR_Box * mercury__cord__STATE_VARIABLE_Acc_4)
#line 186 "cord.m"
{
#line 739 "cord.m"
  {
#line 739 "cord.m"
    MR_bool mercury__cord__succeeded;

#line 739 "cord.m"
    if ((mercury__cord__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 739 "cord.m"
      {
#line 739 "cord.m"
        *mercury__cord__STATE_VARIABLE_Acc_4 = mercury__cord__STATE_VARIABLE_Acc_0_3;
#line 739 "cord.m"
        mercury__cord__succeeded = MR_TRUE;
#line 739 "cord.m"
      }
#line 739 "cord.m"
    else
#line 740 "cord.m"
      {
#line 740 "cord.m"
        MR_Word mercury__cord__N_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 0)));
#line 740 "cord.m"
        MR_Word mercury__cord__V_14_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 741 "cord.m"
        {
#line 741 "cord.m"
          return mercury__cord__succeeded = mercury__cord__foldr_node_pred_5_p_5(mercury__cord__TypeInfo_for_T_16, mercury__cord__TypeInfo_for_U_17, mercury__cord__HeadVar__1_1, mercury__cord__N_10, mercury__cord__V_14_14, mercury__cord__STATE_VARIABLE_Acc_0_3, mercury__cord__STATE_VARIABLE_Acc_4);
        }
#line 740 "cord.m"
      }
#line 739 "cord.m"
    return mercury__cord__succeeded;
#line 739 "cord.m"
  }
#line 186 "cord.m"
}

#line 185 "cord.m"
MR_bool MR_CALL 
mercury__cord__foldr_pred_4_p_4(
#line 185 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_T_16,
#line 185 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_U_17,
#line 185 "cord.m"
  MR_Word mercury__cord__HeadVar__1_1,
#line 185 "cord.m"
  MR_Word mercury__cord__HeadVar__2_2,
#line 185 "cord.m"
  MR_Box mercury__cord__STATE_VARIABLE_Acc_0_3,
#line 185 "cord.m"
  MR_Box * mercury__cord__STATE_VARIABLE_Acc_4)
#line 185 "cord.m"
{
#line 739 "cord.m"
  {
#line 739 "cord.m"
    MR_bool mercury__cord__succeeded;

#line 739 "cord.m"
    if ((mercury__cord__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 739 "cord.m"
      {
#line 739 "cord.m"
        *mercury__cord__STATE_VARIABLE_Acc_4 = mercury__cord__STATE_VARIABLE_Acc_0_3;
#line 739 "cord.m"
        mercury__cord__succeeded = MR_TRUE;
#line 739 "cord.m"
      }
#line 739 "cord.m"
    else
#line 740 "cord.m"
      {
#line 740 "cord.m"
        MR_Word mercury__cord__N_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 0)));
#line 740 "cord.m"
        MR_Word mercury__cord__V_14_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 741 "cord.m"
        {
#line 741 "cord.m"
          return mercury__cord__succeeded = mercury__cord__foldr_node_pred_5_p_4(mercury__cord__TypeInfo_for_T_16, mercury__cord__TypeInfo_for_U_17, mercury__cord__HeadVar__1_1, mercury__cord__N_10, mercury__cord__V_14_14, mercury__cord__STATE_VARIABLE_Acc_0_3, mercury__cord__STATE_VARIABLE_Acc_4);
        }
#line 740 "cord.m"
      }
#line 739 "cord.m"
    return mercury__cord__succeeded;
#line 739 "cord.m"
  }
#line 185 "cord.m"
}

#line 184 "cord.m"
MR_bool MR_CALL 
mercury__cord__foldr_pred_4_p_3(
#line 184 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_T_16,
#line 184 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_U_17,
#line 184 "cord.m"
  MR_Word mercury__cord__HeadVar__1_1,
#line 184 "cord.m"
  MR_Word mercury__cord__HeadVar__2_2,
#line 184 "cord.m"
  MR_Box mercury__cord__STATE_VARIABLE_Acc_0_3,
#line 184 "cord.m"
  MR_Box * mercury__cord__STATE_VARIABLE_Acc_4)
#line 184 "cord.m"
{
#line 739 "cord.m"
  {
#line 739 "cord.m"
    MR_bool mercury__cord__succeeded;

#line 739 "cord.m"
    if ((mercury__cord__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 739 "cord.m"
      {
#line 739 "cord.m"
        *mercury__cord__STATE_VARIABLE_Acc_4 = mercury__cord__STATE_VARIABLE_Acc_0_3;
#line 739 "cord.m"
        mercury__cord__succeeded = MR_TRUE;
#line 739 "cord.m"
      }
#line 739 "cord.m"
    else
#line 740 "cord.m"
      {
#line 740 "cord.m"
        MR_Word mercury__cord__N_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 0)));
#line 740 "cord.m"
        MR_Word mercury__cord__V_14_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 741 "cord.m"
        {
#line 741 "cord.m"
          return mercury__cord__succeeded = mercury__cord__foldr_node_pred_5_p_3(mercury__cord__TypeInfo_for_T_16, mercury__cord__TypeInfo_for_U_17, mercury__cord__HeadVar__1_1, mercury__cord__N_10, mercury__cord__V_14_14, mercury__cord__STATE_VARIABLE_Acc_0_3, mercury__cord__STATE_VARIABLE_Acc_4);
        }
#line 740 "cord.m"
      }
#line 739 "cord.m"
    return mercury__cord__succeeded;
#line 739 "cord.m"
  }
#line 184 "cord.m"
}

#line 183 "cord.m"
void MR_CALL 
mercury__cord__foldr_pred_4_p_2(
#line 183 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_T_16,
#line 183 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_U_17,
#line 183 "cord.m"
  MR_Word mercury__cord__HeadVar__1_1,
#line 183 "cord.m"
  MR_Word mercury__cord__HeadVar__2_2,
#line 183 "cord.m"
  MR_Box mercury__cord__STATE_VARIABLE_Acc_0_3,
#line 183 "cord.m"
  MR_Box * mercury__cord__STATE_VARIABLE_Acc_4)
#line 183 "cord.m"
{
#line 739 "cord.m"
  {
#line 739 "cord.m"
    MR_bool mercury__cord__succeeded;

#line 739 "cord.m"
    if ((mercury__cord__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 739 "cord.m"
      *mercury__cord__STATE_VARIABLE_Acc_4 = mercury__cord__STATE_VARIABLE_Acc_0_3;
#line 739 "cord.m"
    else
#line 740 "cord.m"
      {
#line 740 "cord.m"
        MR_Word mercury__cord__N_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 0)));
#line 740 "cord.m"
        MR_Word mercury__cord__V_14_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 741 "cord.m"
        {
#line 741 "cord.m"
          mercury__cord__foldr_node_pred_5_p_2(mercury__cord__TypeInfo_for_T_16, mercury__cord__TypeInfo_for_U_17, mercury__cord__HeadVar__1_1, mercury__cord__N_10, mercury__cord__V_14_14, mercury__cord__STATE_VARIABLE_Acc_0_3, mercury__cord__STATE_VARIABLE_Acc_4);
#line 741 "cord.m"
          return;
        }
#line 740 "cord.m"
      }
#line 739 "cord.m"
  }
#line 183 "cord.m"
}

#line 182 "cord.m"
void MR_CALL 
mercury__cord__foldr_pred_4_p_1(
#line 182 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_T_16,
#line 182 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_U_17,
#line 182 "cord.m"
  MR_Word mercury__cord__HeadVar__1_1,
#line 182 "cord.m"
  MR_Word mercury__cord__HeadVar__2_2,
#line 182 "cord.m"
  MR_Box mercury__cord__STATE_VARIABLE_Acc_0_3,
#line 182 "cord.m"
  MR_Box * mercury__cord__STATE_VARIABLE_Acc_4)
#line 182 "cord.m"
{
#line 739 "cord.m"
  {
#line 739 "cord.m"
    MR_bool mercury__cord__succeeded;

#line 739 "cord.m"
    if ((mercury__cord__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 739 "cord.m"
      *mercury__cord__STATE_VARIABLE_Acc_4 = mercury__cord__STATE_VARIABLE_Acc_0_3;
#line 739 "cord.m"
    else
#line 740 "cord.m"
      {
#line 740 "cord.m"
        MR_Word mercury__cord__N_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 0)));
#line 740 "cord.m"
        MR_Word mercury__cord__V_14_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 741 "cord.m"
        {
#line 741 "cord.m"
          mercury__cord__foldr_node_pred_5_p_1(mercury__cord__TypeInfo_for_T_16, mercury__cord__TypeInfo_for_U_17, mercury__cord__HeadVar__1_1, mercury__cord__N_10, mercury__cord__V_14_14, mercury__cord__STATE_VARIABLE_Acc_0_3, mercury__cord__STATE_VARIABLE_Acc_4);
#line 741 "cord.m"
          return;
        }
#line 740 "cord.m"
      }
#line 739 "cord.m"
  }
#line 182 "cord.m"
}

#line 181 "cord.m"
void MR_CALL 
mercury__cord__foldr_pred_4_p_0(
#line 181 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_T_16,
#line 181 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_U_17,
#line 181 "cord.m"
  MR_Word mercury__cord__HeadVar__1_1,
#line 181 "cord.m"
  MR_Word mercury__cord__HeadVar__2_2,
#line 181 "cord.m"
  MR_Box mercury__cord__STATE_VARIABLE_Acc_0_3,
#line 181 "cord.m"
  MR_Box * mercury__cord__STATE_VARIABLE_Acc_4)
#line 181 "cord.m"
{
#line 739 "cord.m"
  {
#line 739 "cord.m"
    MR_bool mercury__cord__succeeded;

#line 739 "cord.m"
    if ((mercury__cord__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 739 "cord.m"
      *mercury__cord__STATE_VARIABLE_Acc_4 = mercury__cord__STATE_VARIABLE_Acc_0_3;
#line 739 "cord.m"
    else
#line 740 "cord.m"
      {
#line 740 "cord.m"
        MR_Word mercury__cord__N_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 0)));
#line 740 "cord.m"
        MR_Word mercury__cord__V_14_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 741 "cord.m"
        {
#line 741 "cord.m"
          mercury__cord__foldr_node_pred_5_p_0(mercury__cord__TypeInfo_for_T_16, mercury__cord__TypeInfo_for_U_17, mercury__cord__HeadVar__1_1, mercury__cord__N_10, mercury__cord__V_14_14, mercury__cord__STATE_VARIABLE_Acc_0_3, mercury__cord__STATE_VARIABLE_Acc_4);
#line 741 "cord.m"
          return;
        }
#line 740 "cord.m"
      }
#line 739 "cord.m"
  }
#line 181 "cord.m"
}

#line 179 "cord.m"
MR_Box MR_CALL 
mercury__cord__foldr_3_f_0(
#line 179 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_T_12,
#line 179 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_U_13,
#line 179 "cord.m"
  MR_Word mercury__cord__F_1,
#line 179 "cord.m"
  MR_Word mercury__cord__HeadVar__2_2,
#line 179 "cord.m"
  MR_Box mercury__cord__HeadVar__3_3)
#line 179 "cord.m"
{
#line 715 "cord.m"
  {
#line 715 "cord.m"
    MR_bool mercury__cord__succeeded;
#line 715 "cord.m"
    MR_Box mercury__cord__Acc_4;

#line 715 "cord.m"
    if ((mercury__cord__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 715 "cord.m"
      mercury__cord__Acc_4 = mercury__cord__HeadVar__3_3;
#line 715 "cord.m"
    else
#line 716 "cord.m"
      {
#line 716 "cord.m"
        MR_Word mercury__cord__N_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 0)));
#line 716 "cord.m"
        MR_Word mercury__cord__V_11_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 717 "cord.m"
        {
#line 717 "cord.m"
          mercury__cord__foldr_node_5_p_0(mercury__cord__TypeInfo_for_T_12, mercury__cord__TypeInfo_for_U_13, mercury__cord__F_1, mercury__cord__N_8, mercury__cord__V_11_11, mercury__cord__HeadVar__3_3, &mercury__cord__Acc_4);
        }
#line 716 "cord.m"
      }
#line 715 "cord.m"
    return mercury__cord__Acc_4;
#line 715 "cord.m"
  }
#line 179 "cord.m"
}

#line 175 "cord.m"
MR_bool MR_CALL 
mercury__cord__foldl_pred_4_p_5(
#line 175 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_T_16,
#line 175 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_U_17,
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
#line 680 "cord.m"
  {
#line 680 "cord.m"
    MR_bool mercury__cord__succeeded;

#line 680 "cord.m"
    if ((mercury__cord__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 680 "cord.m"
      {
#line 680 "cord.m"
        *mercury__cord__STATE_VARIABLE_Acc_4 = mercury__cord__STATE_VARIABLE_Acc_0_3;
#line 680 "cord.m"
        mercury__cord__succeeded = MR_TRUE;
#line 680 "cord.m"
      }
#line 680 "cord.m"
    else
#line 681 "cord.m"
      {
#line 681 "cord.m"
        MR_Word mercury__cord__N_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 0)));
#line 681 "cord.m"
        MR_Word mercury__cord__V_14_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 682 "cord.m"
        {
#line 682 "cord.m"
          return mercury__cord__succeeded = mercury__cord__foldl_node_pred_5_p_5(mercury__cord__TypeInfo_for_T_16, mercury__cord__TypeInfo_for_U_17, mercury__cord__HeadVar__1_1, mercury__cord__N_10, mercury__cord__V_14_14, mercury__cord__STATE_VARIABLE_Acc_0_3, mercury__cord__STATE_VARIABLE_Acc_4);
        }
#line 681 "cord.m"
      }
#line 680 "cord.m"
    return mercury__cord__succeeded;
#line 680 "cord.m"
  }
#line 175 "cord.m"
}

#line 174 "cord.m"
MR_bool MR_CALL 
mercury__cord__foldl_pred_4_p_4(
#line 174 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_T_16,
#line 174 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_U_17,
#line 174 "cord.m"
  MR_Word mercury__cord__HeadVar__1_1,
#line 174 "cord.m"
  MR_Word mercury__cord__HeadVar__2_2,
#line 174 "cord.m"
  MR_Box mercury__cord__STATE_VARIABLE_Acc_0_3,
#line 174 "cord.m"
  MR_Box * mercury__cord__STATE_VARIABLE_Acc_4)
#line 174 "cord.m"
{
#line 680 "cord.m"
  {
#line 680 "cord.m"
    MR_bool mercury__cord__succeeded;

#line 680 "cord.m"
    if ((mercury__cord__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 680 "cord.m"
      {
#line 680 "cord.m"
        *mercury__cord__STATE_VARIABLE_Acc_4 = mercury__cord__STATE_VARIABLE_Acc_0_3;
#line 680 "cord.m"
        mercury__cord__succeeded = MR_TRUE;
#line 680 "cord.m"
      }
#line 680 "cord.m"
    else
#line 681 "cord.m"
      {
#line 681 "cord.m"
        MR_Word mercury__cord__N_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 0)));
#line 681 "cord.m"
        MR_Word mercury__cord__V_14_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 682 "cord.m"
        {
#line 682 "cord.m"
          return mercury__cord__succeeded = mercury__cord__foldl_node_pred_5_p_4(mercury__cord__TypeInfo_for_T_16, mercury__cord__TypeInfo_for_U_17, mercury__cord__HeadVar__1_1, mercury__cord__N_10, mercury__cord__V_14_14, mercury__cord__STATE_VARIABLE_Acc_0_3, mercury__cord__STATE_VARIABLE_Acc_4);
        }
#line 681 "cord.m"
      }
#line 680 "cord.m"
    return mercury__cord__succeeded;
#line 680 "cord.m"
  }
#line 174 "cord.m"
}

#line 173 "cord.m"
MR_bool MR_CALL 
mercury__cord__foldl_pred_4_p_3(
#line 173 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_T_16,
#line 173 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_U_17,
#line 173 "cord.m"
  MR_Word mercury__cord__HeadVar__1_1,
#line 173 "cord.m"
  MR_Word mercury__cord__HeadVar__2_2,
#line 173 "cord.m"
  MR_Box mercury__cord__STATE_VARIABLE_Acc_0_3,
#line 173 "cord.m"
  MR_Box * mercury__cord__STATE_VARIABLE_Acc_4)
#line 173 "cord.m"
{
#line 680 "cord.m"
  {
#line 680 "cord.m"
    MR_bool mercury__cord__succeeded;

#line 680 "cord.m"
    if ((mercury__cord__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 680 "cord.m"
      {
#line 680 "cord.m"
        *mercury__cord__STATE_VARIABLE_Acc_4 = mercury__cord__STATE_VARIABLE_Acc_0_3;
#line 680 "cord.m"
        mercury__cord__succeeded = MR_TRUE;
#line 680 "cord.m"
      }
#line 680 "cord.m"
    else
#line 681 "cord.m"
      {
#line 681 "cord.m"
        MR_Word mercury__cord__N_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 0)));
#line 681 "cord.m"
        MR_Word mercury__cord__V_14_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 682 "cord.m"
        {
#line 682 "cord.m"
          return mercury__cord__succeeded = mercury__cord__foldl_node_pred_5_p_3(mercury__cord__TypeInfo_for_T_16, mercury__cord__TypeInfo_for_U_17, mercury__cord__HeadVar__1_1, mercury__cord__N_10, mercury__cord__V_14_14, mercury__cord__STATE_VARIABLE_Acc_0_3, mercury__cord__STATE_VARIABLE_Acc_4);
        }
#line 681 "cord.m"
      }
#line 680 "cord.m"
    return mercury__cord__succeeded;
#line 680 "cord.m"
  }
#line 173 "cord.m"
}

#line 172 "cord.m"
void MR_CALL 
mercury__cord__foldl_pred_4_p_2(
#line 172 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_T_16,
#line 172 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_U_17,
#line 172 "cord.m"
  MR_Word mercury__cord__HeadVar__1_1,
#line 172 "cord.m"
  MR_Word mercury__cord__HeadVar__2_2,
#line 172 "cord.m"
  MR_Box mercury__cord__STATE_VARIABLE_Acc_0_3,
#line 172 "cord.m"
  MR_Box * mercury__cord__STATE_VARIABLE_Acc_4)
#line 172 "cord.m"
{
#line 680 "cord.m"
  {
#line 680 "cord.m"
    MR_bool mercury__cord__succeeded;

#line 680 "cord.m"
    if ((mercury__cord__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 680 "cord.m"
      *mercury__cord__STATE_VARIABLE_Acc_4 = mercury__cord__STATE_VARIABLE_Acc_0_3;
#line 680 "cord.m"
    else
#line 681 "cord.m"
      {
#line 681 "cord.m"
        MR_Word mercury__cord__N_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 0)));
#line 681 "cord.m"
        MR_Word mercury__cord__V_14_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 682 "cord.m"
        {
#line 682 "cord.m"
          mercury__cord__foldl_node_pred_5_p_2(mercury__cord__TypeInfo_for_T_16, mercury__cord__TypeInfo_for_U_17, mercury__cord__HeadVar__1_1, mercury__cord__N_10, mercury__cord__V_14_14, mercury__cord__STATE_VARIABLE_Acc_0_3, mercury__cord__STATE_VARIABLE_Acc_4);
#line 682 "cord.m"
          return;
        }
#line 681 "cord.m"
      }
#line 680 "cord.m"
  }
#line 172 "cord.m"
}

#line 171 "cord.m"
void MR_CALL 
mercury__cord__foldl_pred_4_p_1(
#line 171 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_T_16,
#line 171 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_U_17,
#line 171 "cord.m"
  MR_Word mercury__cord__HeadVar__1_1,
#line 171 "cord.m"
  MR_Word mercury__cord__HeadVar__2_2,
#line 171 "cord.m"
  MR_Box mercury__cord__STATE_VARIABLE_Acc_0_3,
#line 171 "cord.m"
  MR_Box * mercury__cord__STATE_VARIABLE_Acc_4)
#line 171 "cord.m"
{
#line 680 "cord.m"
  {
#line 680 "cord.m"
    MR_bool mercury__cord__succeeded;

#line 680 "cord.m"
    if ((mercury__cord__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 680 "cord.m"
      *mercury__cord__STATE_VARIABLE_Acc_4 = mercury__cord__STATE_VARIABLE_Acc_0_3;
#line 680 "cord.m"
    else
#line 681 "cord.m"
      {
#line 681 "cord.m"
        MR_Word mercury__cord__N_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 0)));
#line 681 "cord.m"
        MR_Word mercury__cord__V_14_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 682 "cord.m"
        {
#line 682 "cord.m"
          mercury__cord__foldl_node_pred_5_p_1(mercury__cord__TypeInfo_for_T_16, mercury__cord__TypeInfo_for_U_17, mercury__cord__HeadVar__1_1, mercury__cord__N_10, mercury__cord__V_14_14, mercury__cord__STATE_VARIABLE_Acc_0_3, mercury__cord__STATE_VARIABLE_Acc_4);
#line 682 "cord.m"
          return;
        }
#line 681 "cord.m"
      }
#line 680 "cord.m"
  }
#line 171 "cord.m"
}

#line 170 "cord.m"
void MR_CALL 
mercury__cord__foldl_pred_4_p_0(
#line 170 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_T_16,
#line 170 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_U_17,
#line 170 "cord.m"
  MR_Word mercury__cord__HeadVar__1_1,
#line 170 "cord.m"
  MR_Word mercury__cord__HeadVar__2_2,
#line 170 "cord.m"
  MR_Box mercury__cord__STATE_VARIABLE_Acc_0_3,
#line 170 "cord.m"
  MR_Box * mercury__cord__STATE_VARIABLE_Acc_4)
#line 170 "cord.m"
{
#line 680 "cord.m"
  {
#line 680 "cord.m"
    MR_bool mercury__cord__succeeded;

#line 680 "cord.m"
    if ((mercury__cord__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 680 "cord.m"
      *mercury__cord__STATE_VARIABLE_Acc_4 = mercury__cord__STATE_VARIABLE_Acc_0_3;
#line 680 "cord.m"
    else
#line 681 "cord.m"
      {
#line 681 "cord.m"
        MR_Word mercury__cord__N_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 0)));
#line 681 "cord.m"
        MR_Word mercury__cord__V_14_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 682 "cord.m"
        {
#line 682 "cord.m"
          mercury__cord__foldl_node_pred_5_p_0(mercury__cord__TypeInfo_for_T_16, mercury__cord__TypeInfo_for_U_17, mercury__cord__HeadVar__1_1, mercury__cord__N_10, mercury__cord__V_14_14, mercury__cord__STATE_VARIABLE_Acc_0_3, mercury__cord__STATE_VARIABLE_Acc_4);
#line 682 "cord.m"
          return;
        }
#line 681 "cord.m"
      }
#line 680 "cord.m"
  }
#line 170 "cord.m"
}

#line 168 "cord.m"
MR_Box MR_CALL 
mercury__cord__foldl_3_f_0(
#line 168 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_T_12,
#line 168 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_U_13,
#line 168 "cord.m"
  MR_Word mercury__cord__F_1,
#line 168 "cord.m"
  MR_Word mercury__cord__HeadVar__2_2,
#line 168 "cord.m"
  MR_Box mercury__cord__HeadVar__3_3)
#line 168 "cord.m"
{
#line 656 "cord.m"
  {
#line 656 "cord.m"
    MR_bool mercury__cord__succeeded;
#line 656 "cord.m"
    MR_Box mercury__cord__Acc_4;

#line 656 "cord.m"
    if ((mercury__cord__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 656 "cord.m"
      mercury__cord__Acc_4 = mercury__cord__HeadVar__3_3;
#line 656 "cord.m"
    else
#line 657 "cord.m"
      {
#line 657 "cord.m"
        MR_Word mercury__cord__N_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 0)));
#line 657 "cord.m"
        MR_Word mercury__cord__V_11_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 658 "cord.m"
        {
#line 658 "cord.m"
          mercury__cord__foldl_node_5_p_0(mercury__cord__TypeInfo_for_T_12, mercury__cord__TypeInfo_for_U_13, mercury__cord__F_1, mercury__cord__N_8, mercury__cord__V_11_11, mercury__cord__HeadVar__3_3, &mercury__cord__Acc_4);
        }
#line 657 "cord.m"
      }
#line 656 "cord.m"
    return mercury__cord__Acc_4;
#line 656 "cord.m"
  }
#line 168 "cord.m"
}

#line 163 "cord.m"
void MR_CALL 
mercury__cord__filter_4_p_0(
#line 163 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_T_10,
#line 163 "cord.m"
  MR_Word mercury__cord__P_1,
#line 163 "cord.m"
  MR_Word mercury__cord__HeadVar__2_2,
#line 163 "cord.m"
  MR_Word * mercury__cord__HeadVar__3_3,
#line 163 "cord.m"
  MR_Word * mercury__cord__HeadVar__4_4)
#line 163 "cord.m"
{
#line 612 "cord.m"
  {
#line 612 "cord.m"
    MR_bool mercury__cord__succeeded;

#line 612 "cord.m"
    if ((mercury__cord__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 612 "cord.m"
      {
#line 612 "cord.m"
        *mercury__cord__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 612 "cord.m"
        *mercury__cord__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 612 "cord.m"
      }
#line 612 "cord.m"
    else
#line 613 "cord.m"
      {
#line 613 "cord.m"
        MR_Word mercury__cord__N_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 0)));

#line 614 "cord.m"
        {
#line 614 "cord.m"
          mercury__cord__filter_node_4_p_0(mercury__cord__TypeInfo_for_T_10, mercury__cord__P_1, mercury__cord__N_7, mercury__cord__HeadVar__3_3, mercury__cord__HeadVar__4_4);
#line 614 "cord.m"
          return;
        }
#line 613 "cord.m"
      }
#line 612 "cord.m"
  }
#line 163 "cord.m"
}

#line 153 "cord.m"
void MR_CALL 
mercury__cord__filter_3_p_0(
#line 153 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_T_8,
#line 153 "cord.m"
  MR_Word mercury__cord__P_1,
#line 153 "cord.m"
  MR_Word mercury__cord__HeadVar__2_2,
#line 153 "cord.m"
  MR_Word * mercury__cord__HeadVar__3_3)
#line 153 "cord.m"
{
#line 578 "cord.m"
  {
#line 578 "cord.m"
    MR_bool mercury__cord__succeeded;

#line 578 "cord.m"
    if ((mercury__cord__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 578 "cord.m"
      *mercury__cord__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 578 "cord.m"
    else
#line 579 "cord.m"
      {
#line 579 "cord.m"
        MR_Word mercury__cord__N_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 0)));

#line 580 "cord.m"
        {
#line 580 "cord.m"
          mercury__cord__filter_node_3_p_0(mercury__cord__TypeInfo_for_T_8, mercury__cord__P_1, mercury__cord__N_6, mercury__cord__HeadVar__3_3);
#line 580 "cord.m"
          return;
        }
#line 579 "cord.m"
      }
#line 578 "cord.m"
  }
#line 153 "cord.m"
}

#line 144 "cord.m"
void MR_CALL 
mercury__cord__map_pred_3_p_0(
#line 144 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_T_8,
#line 144 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_U_9,
#line 144 "cord.m"
  MR_Word mercury__cord__P_1,
#line 144 "cord.m"
  MR_Word mercury__cord__HeadVar__2_2,
#line 144 "cord.m"
  MR_Word * mercury__cord__HeadVar__3_3)
#line 144 "cord.m"
{
#line 552 "cord.m"
  {
#line 552 "cord.m"
    MR_bool mercury__cord__succeeded;

#line 552 "cord.m"
    if ((mercury__cord__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 552 "cord.m"
      *mercury__cord__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 552 "cord.m"
    else
#line 553 "cord.m"
      {
#line 553 "cord.m"
        MR_Word mercury__cord__N_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 0)));
#line 553 "cord.m"
        MR_Word mercury__cord__PN_7;

#line 554 "cord.m"
        {
#line 554 "cord.m"
          mercury__cord__map_pred_node_3_p_0(mercury__cord__TypeInfo_for_T_8, mercury__cord__TypeInfo_for_U_9, mercury__cord__P_1, mercury__cord__N_6, &mercury__cord__PN_7);
        }
#line 553 "cord.m"
        {
#line 553 "cord.m"
          MR_Word base;
#line 553 "cord.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 553 "cord.m"
          *mercury__cord__HeadVar__3_3 = base;
#line 553 "cord.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__cord__PN_7));
#line 553 "cord.m"
        }
#line 553 "cord.m"
      }
#line 552 "cord.m"
  }
#line 144 "cord.m"
}

#line 143 "cord.m"
MR_Word MR_CALL 
mercury__cord__map_2_f_0(
#line 143 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_T_8,
#line 143 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_U_9,
#line 143 "cord.m"
  MR_Word mercury__cord__F_1,
#line 143 "cord.m"
  MR_Word mercury__cord__HeadVar__2_2)
#line 143 "cord.m"
{
#line 535 "cord.m"
  {
#line 535 "cord.m"
    MR_bool mercury__cord__succeeded;
#line 535 "cord.m"
    MR_Word mercury__cord__HeadVar__3_3;

#line 535 "cord.m"
    if ((mercury__cord__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 535 "cord.m"
      mercury__cord__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 535 "cord.m"
    else
#line 536 "cord.m"
      {
#line 536 "cord.m"
        MR_Word mercury__cord__N_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 0)));
#line 536 "cord.m"
        MR_Word mercury__cord__V_7_7;

#line 536 "cord.m"
        {
#line 536 "cord.m"
          mercury__cord__V_7_7 = mercury__cord__map_node_2_f_0(mercury__cord__TypeInfo_for_T_8, mercury__cord__TypeInfo_for_U_9, mercury__cord__F_1, mercury__cord__N_6);
        }
#line 536 "cord.m"
        {
#line 536 "cord.m"
          mercury__cord__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 536 "cord.m"
          MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__3_3, 0) = ((MR_Box) (mercury__cord__V_7_7));
#line 536 "cord.m"
        }
#line 536 "cord.m"
      }
#line 535 "cord.m"
    return mercury__cord__HeadVar__3_3;
#line 535 "cord.m"
  }
#line 143 "cord.m"
}

#line 139 "cord.m"
void MR_CALL 
mercury__cord__member_2_p_0(
#line 139 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_T_5,
#line 139 "cord.m"
  MR_Box * mercury__cord__X_3,
#line 139 "cord.m"
  MR_Word mercury__cord__HeadVar__2_2,
#line 139 "cord.m"
  MR_Cont mercury__cord__cont,
#line 139 "cord.m"
  void * mercury__cord__cont_env_ptr)
#line 139 "cord.m"
{
#line 509 "cord.m"
  {
#line 509 "cord.m"
    MR_bool mercury__cord__succeeded = ((MR_tag((MR_Word) mercury__cord__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 509 "cord.m"
    MR_Word mercury__cord__N_4;

#line 509 "cord.m"
    if (mercury__cord__succeeded)
#line 509 "cord.m"
      {
#line 509 "cord.m"
        mercury__cord__N_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 0)));
#line 510 "cord.m"
        {
#line 510 "cord.m"
          mercury__cord__member_node_2_p_0(mercury__cord__TypeInfo_for_T_5, mercury__cord__X_3, mercury__cord__N_4, mercury__cord__cont, mercury__cord__cont_env_ptr);
#line 510 "cord.m"
          return;
        }
#line 509 "cord.m"
      }
#line 509 "cord.m"
  }
#line 139 "cord.m"
}

#line 135 "cord.m"
MR_Integer MR_CALL 
mercury__cord__length_1_f_0(
#line 135 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_T_15,
#line 135 "cord.m"
  MR_Word mercury__cord__C_3)
#line 135 "cord.m"
{
#line 505 "cord.m"
  {
#line 505 "cord.m"
    MR_bool mercury__cord__succeeded;
#line 505 "cord.m"
    MR_Integer mercury__cord__HeadVar__2_2;

#line 656 "cord.m"
    if ((mercury__cord__C_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 656 "cord.m"
      mercury__cord__HeadVar__2_2 = (MR_Integer) 0;
#line 656 "cord.m"
    else
#line 657 "cord.m"
      {
#line 657 "cord.m"
        MR_Word mercury__cord__N_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__C_3, (MR_Integer) 0)));
#line 657 "cord.m"
        MR_Word mercury__cord__V_23_23 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 658 "cord.m"
        {
#line 658 "cord.m"
          mercury__cord__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_110_111_100_101_95_95_104_111_56_95_95_91_49_44_32_50_44_32_51_93_95_48_5_p_0(mercury__cord__N_20, mercury__cord__V_23_23, (MR_Integer) 0, &mercury__cord__HeadVar__2_2);
        }
#line 657 "cord.m"
      }
#line 505 "cord.m"
    return mercury__cord__HeadVar__2_2;
#line 505 "cord.m"
  }
#line 135 "cord.m"
}

#line 130 "cord.m"
MR_bool MR_CALL 
mercury__cord__get_last_2_p_0(
#line 130 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_T_5,
#line 130 "cord.m"
  MR_Word mercury__cord__HeadVar__1_1,
#line 130 "cord.m"
  MR_Box * mercury__cord__Last_4)
#line 130 "cord.m"
{
#line 481 "cord.m"
  {
#line 481 "cord.m"
    MR_bool mercury__cord__succeeded = ((MR_tag((MR_Word) mercury__cord__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 481 "cord.m"
    MR_Word mercury__cord__N_3;

#line 481 "cord.m"
    if (mercury__cord__succeeded)
#line 481 "cord.m"
      {
#line 481 "cord.m"
        mercury__cord__N_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__1_1, (MR_Integer) 0)));
#line 482 "cord.m"
        {
#line 482 "cord.m"
          mercury__cord__get_last_node_2_p_0(mercury__cord__TypeInfo_for_T_5, mercury__cord__N_3, mercury__cord__Last_4);
        }
#line 482 "cord.m"
        mercury__cord__succeeded = MR_TRUE;
#line 481 "cord.m"
      }
#line 481 "cord.m"
    return mercury__cord__succeeded;
#line 481 "cord.m"
  }
#line 130 "cord.m"
}

#line 125 "cord.m"
MR_bool MR_CALL 
mercury__cord__get_first_2_p_0(
#line 125 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_T_5,
#line 125 "cord.m"
  MR_Word mercury__cord__HeadVar__1_1,
#line 125 "cord.m"
  MR_Box * mercury__cord__Head_4)
#line 125 "cord.m"
{
#line 464 "cord.m"
  {
#line 464 "cord.m"
    MR_bool mercury__cord__succeeded = ((MR_tag((MR_Word) mercury__cord__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 464 "cord.m"
    MR_Word mercury__cord__N_3;

#line 464 "cord.m"
    if (mercury__cord__succeeded)
#line 464 "cord.m"
      {
#line 464 "cord.m"
        mercury__cord__N_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__1_1, (MR_Integer) 0)));
#line 465 "cord.m"
        {
#line 465 "cord.m"
          mercury__cord__get_first_node_2_p_0(mercury__cord__TypeInfo_for_T_5, mercury__cord__N_3, mercury__cord__Head_4);
        }
#line 465 "cord.m"
        mercury__cord__succeeded = MR_TRUE;
#line 464 "cord.m"
      }
#line 464 "cord.m"
    return mercury__cord__succeeded;
#line 464 "cord.m"
  }
#line 125 "cord.m"
}

#line 120 "cord.m"
MR_bool MR_CALL 
mercury__cord__split_last_3_p_0(
#line 120 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_T_7,
#line 120 "cord.m"
  MR_Word mercury__cord__HeadVar__1_1,
#line 120 "cord.m"
  MR_Word * mercury__cord__AllButLast_5,
#line 120 "cord.m"
  MR_Box * mercury__cord__Last_6)
#line 120 "cord.m"
{
#line 429 "cord.m"
  {
#line 429 "cord.m"
    MR_bool mercury__cord__succeeded = ((MR_tag((MR_Word) mercury__cord__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 429 "cord.m"
    MR_Word mercury__cord__N_4;

#line 429 "cord.m"
    if (mercury__cord__succeeded)
#line 429 "cord.m"
      {
#line 429 "cord.m"
        mercury__cord__N_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__1_1, (MR_Integer) 0)));
#line 430 "cord.m"
        {
#line 430 "cord.m"
          mercury__cord__split_last_node_3_p_0(mercury__cord__TypeInfo_for_T_7, mercury__cord__N_4, mercury__cord__AllButLast_5, mercury__cord__Last_6);
        }
#line 430 "cord.m"
        mercury__cord__succeeded = MR_TRUE;
#line 429 "cord.m"
      }
#line 429 "cord.m"
    return mercury__cord__succeeded;
#line 429 "cord.m"
  }
#line 120 "cord.m"
}

#line 113 "cord.m"
MR_bool MR_CALL 
mercury__cord__head_tail_3_p_0(
#line 113 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_T_7,
#line 113 "cord.m"
  MR_Word mercury__cord__HeadVar__1_1,
#line 113 "cord.m"
  MR_Box * mercury__cord__H_5,
#line 113 "cord.m"
  MR_Word * mercury__cord__T_6)
#line 113 "cord.m"
{
#line 396 "cord.m"
  {
#line 396 "cord.m"
    MR_bool mercury__cord__succeeded = ((MR_tag((MR_Word) mercury__cord__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 396 "cord.m"
    MR_Word mercury__cord__N_4;

#line 396 "cord.m"
    if (mercury__cord__succeeded)
#line 396 "cord.m"
      {
#line 396 "cord.m"
        mercury__cord__N_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__1_1, (MR_Integer) 0)));
#line 397 "cord.m"
        {
#line 397 "cord.m"
          mercury__cord__head_tail_node_3_p_0(mercury__cord__TypeInfo_for_T_7, mercury__cord__N_4, mercury__cord__H_5, mercury__cord__T_6);
        }
#line 397 "cord.m"
        mercury__cord__succeeded = MR_TRUE;
#line 396 "cord.m"
      }
#line 396 "cord.m"
    return mercury__cord__succeeded;
#line 396 "cord.m"
  }
#line 113 "cord.m"
}

#line 106 "cord.m"
MR_Word MR_CALL 
mercury__cord__cord_list_to_list_1_f_0(
#line 106 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_T_8,
#line 106 "cord.m"
  MR_Word mercury__cord__Cords_3)
#line 106 "cord.m"
{
#line 384 "cord.m"
  {
#line 384 "cord.m"
    MR_bool mercury__cord__succeeded;
#line 384 "cord.m"
    MR_Word mercury__cord__List_4;
#line 384 "cord.m"
    MR_Word mercury__cord__TypeCtorInfo_9_9 = (MR_Word) &mercury__cord__cord__type_ctor_info_cord_1;
#line 384 "cord.m"
    MR_Word mercury__cord__TypeInfo_10_10;
#line 384 "cord.m"
    MR_Word mercury__cord__RevCords_5;
#line 384 "cord.m"
    MR_Word mercury__cord__V_7_7;
#line 386 "cord.m"
    MR_Word mercury__cord__conv0_RevCords_5;

#line 10177 "cord.c"
    {
#line 10179 "cord.c"
      mercury__cord__TypeInfo_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 10181 "cord.c"
      MR_hl_field(MR_mktag(0), mercury__cord__TypeInfo_10_10, 0) = ((MR_Box) (mercury__cord__TypeCtorInfo_9_9));
#line 10183 "cord.c"
      MR_hl_field(MR_mktag(0), mercury__cord__TypeInfo_10_10, 1) = ((MR_Box) (mercury__cord__TypeInfo_for_T_8));
#line 10185 "cord.c"
    }
#line 386 "cord.m"
    {
#line 386 "cord.m"
      mercury__list__reverse_2_p_0(mercury__cord__TypeInfo_10_10, (MR_Word) mercury__cord__Cords_3, &mercury__cord__conv0_RevCords_5);
    }
#line 386 "cord.m"
    mercury__cord__RevCords_5 = (MR_Word) mercury__cord__conv0_RevCords_5;
#line 387 "cord.m"
    mercury__cord__V_7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 395 "list.opt"
    {
#line 395 "list.opt"
      mercury__cord__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_55_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_57_44_32_49_48_44_32_49_49_93_95_48_4_p_in__list_0(mercury__cord__TypeInfo_for_T_8, mercury__cord__RevCords_5, mercury__cord__V_7_7, &mercury__cord__List_4);
    }
#line 384 "cord.m"
    return mercury__cord__List_4;
#line 384 "cord.m"
  }
#line 106 "cord.m"
}

#line 102 "cord.m"
MR_Word MR_CALL 
mercury__cord__cord_list_to_cord_1_f_0(
#line 102 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_T_8,
#line 102 "cord.m"
  MR_Word mercury__cord__Cords_3)
#line 102 "cord.m"
{
#line 379 "cord.m"
  {
#line 379 "cord.m"
    MR_bool mercury__cord__succeeded;
#line 379 "cord.m"
    MR_Word mercury__cord__Cord_4;
#line 379 "cord.m"
    MR_Word mercury__cord__TypeCtorInfo_9_9 = (MR_Word) &mercury__cord__cord__type_ctor_info_cord_1;
#line 379 "cord.m"
    MR_Word mercury__cord__TypeInfo_10_10;
#line 379 "cord.m"
    MR_Word mercury__cord__RevCords_5;
#line 379 "cord.m"
    MR_Word mercury__cord__V_7_7;
#line 381 "cord.m"
    MR_Word mercury__cord__conv0_RevCords_5;

#line 10234 "cord.c"
    {
#line 10236 "cord.c"
      mercury__cord__TypeInfo_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 10238 "cord.c"
      MR_hl_field(MR_mktag(0), mercury__cord__TypeInfo_10_10, 0) = ((MR_Box) (mercury__cord__TypeCtorInfo_9_9));
#line 10240 "cord.c"
      MR_hl_field(MR_mktag(0), mercury__cord__TypeInfo_10_10, 1) = ((MR_Box) (mercury__cord__TypeInfo_for_T_8));
#line 10242 "cord.c"
    }
#line 381 "cord.m"
    {
#line 381 "cord.m"
      mercury__list__reverse_2_p_0(mercury__cord__TypeInfo_10_10, (MR_Word) mercury__cord__Cords_3, &mercury__cord__conv0_RevCords_5);
    }
#line 381 "cord.m"
    mercury__cord__RevCords_5 = (MR_Word) mercury__cord__conv0_RevCords_5;
#line 382 "cord.m"
    mercury__cord__V_7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 395 "list.opt"
    {
#line 395 "list.opt"
      mercury__cord__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_57_44_32_49_48_44_32_49_49_93_95_48_4_p_in__list_0(mercury__cord__TypeInfo_for_T_8, mercury__cord__RevCords_5, mercury__cord__V_7_7, &mercury__cord__Cord_4);
    }
#line 379 "cord.m"
    return mercury__cord__Cord_4;
#line 379 "cord.m"
  }
#line 102 "cord.m"
}

#line 98 "cord.m"
MR_Word MR_CALL 
mercury__cord__f_43_43_2_f_0(
#line 98 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_T_11,
#line 98 "cord.m"
  MR_Word mercury__cord__A_4,
#line 98 "cord.m"
  MR_Word mercury__cord__B_5)
#line 98 "cord.m"
{
#line 367 "cord.m"
  {
#line 367 "cord.m"
    MR_bool mercury__cord__succeeded;
#line 367 "cord.m"
    MR_Word mercury__cord__C_6;

#line 367 "cord.m"
    if ((mercury__cord__A_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 365 "cord.m"
      mercury__cord__C_6 = mercury__cord__B_5;
#line 367 "cord.m"
    else
#line 367 "cord.m"
      {
#line 367 "cord.m"
        MR_Word mercury__cord__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__A_4, (MR_Integer) 0)));

#line 367 "cord.m"
        if ((mercury__cord__B_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 370 "cord.m"
          mercury__cord__C_6 = mercury__cord__A_4;
#line 367 "cord.m"
        else
#line 372 "cord.m"
          {
#line 372 "cord.m"
            MR_Word mercury__cord__BN_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__B_5, (MR_Integer) 0)));
#line 372 "cord.m"
            MR_Word mercury__cord__V_10_10;

#line 374 "cord.m"
            {
#line 374 "cord.m"
              mercury__cord__V_10_10 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 374 "cord.m"
              MR_hl_field(MR_mktag(2), mercury__cord__V_10_10, 0) = ((MR_Box) (mercury__cord__V_12_12));
#line 374 "cord.m"
              MR_hl_field(MR_mktag(2), mercury__cord__V_10_10, 1) = ((MR_Box) (mercury__cord__BN_9));
#line 374 "cord.m"
            }
#line 374 "cord.m"
            {
#line 374 "cord.m"
              mercury__cord__C_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 374 "cord.m"
              MR_hl_field(MR_mktag(1), mercury__cord__C_6, 0) = ((MR_Box) (mercury__cord__V_10_10));
#line 374 "cord.m"
            }
#line 372 "cord.m"
          }
#line 367 "cord.m"
      }
#line 367 "cord.m"
    return mercury__cord__C_6;
#line 367 "cord.m"
  }
#line 98 "cord.m"
}

#line 93 "cord.m"
MR_Word MR_CALL 
mercury__cord__snoc_2_f_0(
#line 93 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_T_11,
#line 93 "cord.m"
  MR_Word mercury__cord__C_4,
#line 93 "cord.m"
  MR_Box mercury__cord__X_5)
#line 93 "cord.m"
{
#line 356 "cord.m"
  {
#line 356 "cord.m"
    MR_bool mercury__cord__succeeded;
#line 356 "cord.m"
    MR_Word mercury__cord__CX_6;

#line 356 "cord.m"
    if ((mercury__cord__C_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 354 "cord.m"
      {
#line 354 "cord.m"
        MR_Word mercury__cord__V_10_10;

#line 355 "cord.m"
        {
#line 355 "cord.m"
          mercury__cord__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 355 "cord.m"
          MR_hl_field(MR_mktag(0), mercury__cord__V_10_10, 0) = mercury__cord__X_5;
#line 355 "cord.m"
        }
#line 355 "cord.m"
        {
#line 355 "cord.m"
          mercury__cord__CX_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 355 "cord.m"
          MR_hl_field(MR_mktag(1), mercury__cord__CX_6, 0) = ((MR_Box) (mercury__cord__V_10_10));
#line 355 "cord.m"
        }
#line 354 "cord.m"
      }
#line 356 "cord.m"
    else
#line 357 "cord.m"
      {
#line 357 "cord.m"
        MR_Word mercury__cord__N_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__C_4, (MR_Integer) 0)));
#line 357 "cord.m"
        MR_Word mercury__cord__V_8_8;
#line 357 "cord.m"
        MR_Word mercury__cord__V_9_9;

#line 358 "cord.m"
        {
#line 358 "cord.m"
          mercury__cord__V_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 358 "cord.m"
          MR_hl_field(MR_mktag(0), mercury__cord__V_9_9, 0) = mercury__cord__X_5;
#line 358 "cord.m"
        }
#line 358 "cord.m"
        {
#line 358 "cord.m"
          mercury__cord__V_8_8 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 358 "cord.m"
          MR_hl_field(MR_mktag(2), mercury__cord__V_8_8, 0) = ((MR_Box) (mercury__cord__N_7));
#line 358 "cord.m"
          MR_hl_field(MR_mktag(2), mercury__cord__V_8_8, 1) = ((MR_Box) (mercury__cord__V_9_9));
#line 358 "cord.m"
        }
#line 358 "cord.m"
        {
#line 358 "cord.m"
          mercury__cord__CX_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 358 "cord.m"
          MR_hl_field(MR_mktag(1), mercury__cord__CX_6, 0) = ((MR_Box) (mercury__cord__V_8_8));
#line 358 "cord.m"
        }
#line 357 "cord.m"
      }
#line 356 "cord.m"
    return mercury__cord__CX_6;
#line 356 "cord.m"
  }
#line 93 "cord.m"
}

#line 88 "cord.m"
MR_Word MR_CALL 
mercury__cord__cons_2_f_0(
#line 88 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_T_11,
#line 88 "cord.m"
  MR_Box mercury__cord__X_4,
#line 88 "cord.m"
  MR_Word mercury__cord__C_5)
#line 88 "cord.m"
{
#line 345 "cord.m"
  {
#line 345 "cord.m"
    MR_bool mercury__cord__succeeded;
#line 345 "cord.m"
    MR_Word mercury__cord__XC_6;

#line 345 "cord.m"
    if ((mercury__cord__C_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 343 "cord.m"
      {
#line 343 "cord.m"
        MR_Word mercury__cord__V_10_10;

#line 344 "cord.m"
        {
#line 344 "cord.m"
          mercury__cord__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 344 "cord.m"
          MR_hl_field(MR_mktag(0), mercury__cord__V_10_10, 0) = mercury__cord__X_4;
#line 344 "cord.m"
        }
#line 344 "cord.m"
        {
#line 344 "cord.m"
          mercury__cord__XC_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 344 "cord.m"
          MR_hl_field(MR_mktag(1), mercury__cord__XC_6, 0) = ((MR_Box) (mercury__cord__V_10_10));
#line 344 "cord.m"
        }
#line 343 "cord.m"
      }
#line 345 "cord.m"
    else
#line 346 "cord.m"
      {
#line 346 "cord.m"
        MR_Word mercury__cord__N_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__C_5, (MR_Integer) 0)));
#line 346 "cord.m"
        MR_Word mercury__cord__V_8_8;
#line 346 "cord.m"
        MR_Word mercury__cord__V_9_9;

#line 347 "cord.m"
        {
#line 347 "cord.m"
          mercury__cord__V_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 347 "cord.m"
          MR_hl_field(MR_mktag(0), mercury__cord__V_9_9, 0) = mercury__cord__X_4;
#line 347 "cord.m"
        }
#line 347 "cord.m"
        {
#line 347 "cord.m"
          mercury__cord__V_8_8 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 347 "cord.m"
          MR_hl_field(MR_mktag(2), mercury__cord__V_8_8, 0) = ((MR_Box) (mercury__cord__V_9_9));
#line 347 "cord.m"
          MR_hl_field(MR_mktag(2), mercury__cord__V_8_8, 1) = ((MR_Box) (mercury__cord__N_7));
#line 347 "cord.m"
        }
#line 347 "cord.m"
        {
#line 347 "cord.m"
          mercury__cord__XC_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 347 "cord.m"
          MR_hl_field(MR_mktag(1), mercury__cord__XC_6, 0) = ((MR_Box) (mercury__cord__V_8_8));
#line 347 "cord.m"
        }
#line 346 "cord.m"
      }
#line 345 "cord.m"
    return mercury__cord__XC_6;
#line 345 "cord.m"
  }
#line 88 "cord.m"
}

#line 83 "cord.m"
MR_Word MR_CALL 
mercury__cord__condense_1_f_0(
#line 83 "cord.m"
  MR_Word mercury__cord__TypeInfo_for_T_4,
#line 83 "cord.m"
  MR_Word mercury__cord__HeadVar__1_1)
#line 83 "cord.m"
{
#line 272 "cord.m"
  {
#line 272 "cord.m"
    MR_bool mercury__cord__succeeded;
#line 272 "cord.m"
    MR_Word mercury__cord__HeadVar__2_2;

#line 272 "cord.m"
    if ((mercury__cord__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 272 "cord.m"
      mercury__cord__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 272 "cord.m"
    else
#line 273 "cord.m"
      {
#line 273 "cord.m"
        MR_Word mercury__cord__C0_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__1_1, (MR_Integer) 0)));

#line 273 "cord.m"
        {
#line 273 "cord.m"
          return mercury__cord__HeadVar__2_2 = mercury__cord__condense_2_1_f_0(mercury__cord__TypeInfo_for_T_4, mercury__cord__C0_3);
        }
#line 273 "cord.m"
      }
#line 272 "cord.m"
    return mercury__cord__HeadVar__2_2;
#line 272 "cord.m"
  }
#line 83 "cord.m"
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
#line 265 "cord.m"
  {
#line 265 "cord.m"
    MR_bool mercury__cord__succeeded;
#line 265 "cord.m"
    MR_Word mercury__cord__C_4;

#line 265 "cord.m"
    if ((mercury__cord__Xs_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 264 "cord.m"
      mercury__cord__C_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 265 "cord.m"
    else
#line 266 "cord.m"
      {
#line 266 "cord.m"
        MR_Box mercury__cord__H_5 = (MR_hl_field(MR_mktag(1), mercury__cord__Xs_3, (MR_Integer) 0));
#line 266 "cord.m"
        MR_Word mercury__cord__T_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__Xs_3, (MR_Integer) 1)));
#line 266 "cord.m"
        MR_Word mercury__cord__V_7_7;

#line 267 "cord.m"
        {
#line 267 "cord.m"
          mercury__cord__V_7_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 267 "cord.m"
          MR_hl_field(MR_mktag(1), mercury__cord__V_7_7, 0) = mercury__cord__H_5;
#line 267 "cord.m"
          MR_hl_field(MR_mktag(1), mercury__cord__V_7_7, 1) = ((MR_Box) (mercury__cord__T_6));
#line 267 "cord.m"
        }
#line 267 "cord.m"
        {
#line 267 "cord.m"
          mercury__cord__C_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 267 "cord.m"
          MR_hl_field(MR_mktag(1), mercury__cord__C_4, 0) = ((MR_Box) (mercury__cord__V_7_7));
#line 267 "cord.m"
        }
#line 266 "cord.m"
      }
#line 265 "cord.m"
    return mercury__cord__C_4;
#line 265 "cord.m"
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
#line 257 "cord.m"
  {
#line 257 "cord.m"
    MR_bool mercury__cord__succeeded;
#line 257 "cord.m"
    MR_Word mercury__cord__HeadVar__2_2;
#line 257 "cord.m"
    MR_Word mercury__cord__V_4_4;

#line 257 "cord.m"
    {
#line 257 "cord.m"
      mercury__cord__V_4_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 257 "cord.m"
      MR_hl_field(MR_mktag(0), mercury__cord__V_4_4, 0) = mercury__cord__X_3;
#line 257 "cord.m"
    }
#line 257 "cord.m"
    {
#line 257 "cord.m"
      mercury__cord__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 257 "cord.m"
      MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, 0) = ((MR_Box) (mercury__cord__V_4_4));
#line 257 "cord.m"
    }
#line 257 "cord.m"
    return mercury__cord__HeadVar__2_2;
#line 257 "cord.m"
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
#line 253 "cord.m"
  {
#line 253 "cord.m"
    MR_bool mercury__cord__succeeded = (mercury__cord__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));

#line 253 "cord.m"
    return mercury__cord__succeeded;
#line 253 "cord.m"
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
#line 307 "cord.m"
  {
#line 307 "cord.m"
    MR_bool mercury__cord__succeeded;
#line 307 "cord.m"
    MR_Word mercury__cord__HeadVar__2_2;

#line 307 "cord.m"
    if ((mercury__cord__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 307 "cord.m"
      mercury__cord__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 307 "cord.m"
    else
#line 308 "cord.m"
      {
#line 308 "cord.m"
        MR_Word mercury__cord__N_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__1_1, (MR_Integer) 0)));
#line 308 "cord.m"
        MR_Word mercury__cord__V_4_4;
#line 308 "cord.m"
        MR_Word mercury__cord__V_5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 308 "cord.m"
        MR_Word mercury__cord__V_6_6;

#line 308 "cord.m"
        {
#line 308 "cord.m"
          mercury__cord__V_4_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 308 "cord.m"
          MR_hl_field(MR_mktag(1), mercury__cord__V_4_4, 0) = ((MR_Box) (mercury__cord__N_3));
#line 308 "cord.m"
          MR_hl_field(MR_mktag(1), mercury__cord__V_4_4, 1) = ((MR_Box) (mercury__cord__V_5_5));
#line 308 "cord.m"
        }
#line 308 "cord.m"
        mercury__cord__V_6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 308 "cord.m"
        {
#line 308 "cord.m"
          return mercury__cord__HeadVar__2_2 = mercury__cord__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_114_101_118_95_108_105_115_116_95_50_95_95_91_49_93_95_48_2_f_0(mercury__cord__V_4_4, mercury__cord__V_6_6);
        }
#line 308 "cord.m"
      }
#line 307 "cord.m"
    return mercury__cord__HeadVar__2_2;
#line 307 "cord.m"
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
#line 285 "cord.m"
  {
#line 285 "cord.m"
    MR_bool mercury__cord__succeeded;
#line 285 "cord.m"
    MR_Word mercury__cord__HeadVar__2_2;

#line 285 "cord.m"
    if ((mercury__cord__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 285 "cord.m"
      mercury__cord__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 285 "cord.m"
    else
#line 286 "cord.m"
      {
#line 286 "cord.m"
        MR_Word mercury__cord__N_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__1_1, (MR_Integer) 0)));
#line 286 "cord.m"
        MR_Word mercury__cord__V_4_4;
#line 286 "cord.m"
        MR_Word mercury__cord__V_5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 286 "cord.m"
        MR_Word mercury__cord__V_6_6;

#line 286 "cord.m"
        {
#line 286 "cord.m"
          mercury__cord__V_4_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 286 "cord.m"
          MR_hl_field(MR_mktag(1), mercury__cord__V_4_4, 0) = ((MR_Box) (mercury__cord__N_3));
#line 286 "cord.m"
          MR_hl_field(MR_mktag(1), mercury__cord__V_4_4, 1) = ((MR_Box) (mercury__cord__V_5_5));
#line 286 "cord.m"
        }
#line 286 "cord.m"
        mercury__cord__V_6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 286 "cord.m"
        {
#line 286 "cord.m"
          return mercury__cord__HeadVar__2_2 = mercury__cord__list_2_2_f_0(mercury__cord__TypeInfo_for_T_7, mercury__cord__V_4_4, mercury__cord__V_6_6);
        }
#line 286 "cord.m"
      }
#line 285 "cord.m"
    return mercury__cord__HeadVar__2_2;
#line 285 "cord.m"
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
#line 249 "cord.m"
  {
#line 249 "cord.m"
    MR_bool mercury__cord__succeeded;
#line 249 "cord.m"
    MR_Word mercury__cord__HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 249 "cord.m"
    return mercury__cord__HeadVar__1_1;
#line 249 "cord.m"
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
#line 247 "cord.m"
  {
#line 247 "cord.m"
    MR_bool mercury__cord__succeeded;
#line 247 "cord.m"
    MR_Word mercury__cord__HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 247 "cord.m"
    return mercury__cord__HeadVar__1_1;
#line 247 "cord.m"
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
