/*
** Automatically generated from `bit_buffer.write.m'
** by the Mercury compiler,
** version rotd-2015-06-22
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


/* :- module bit_buffer.write. */
/* :- implementation. */

/*
INIT mercury__bit_buffer__write__init
ENDINIT
*/

#include "bit_buffer.write.mih"


#include "array.mih"
#include "assoc_list.mih"
#include "benchmarking.mih"
#include "bit_buffer.mih"
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




#line 95 "bit_buffer.write.c"
static const MR_FA_TypeInfo_Struct2 mercury__bit_buffer__write__bit_buffer__write__ti_write_buffer_2io__type_ctor_info_binary_output_stream_0io__type_ctor_info_state_0;

#line 98 "bit_buffer.write.c"
static const MR_Integer mercury__bit_buffer__write__bit_buffer__write__functor_number_map_write_buffer_2[1];

#line 101 "bit_buffer.write.c"
static const MR_VA_TypeInfo_Struct0 mercury__bit_buffer__write____vti_tuple_0;

#line 104 "bit_buffer.write.c"
static const MR_FA_PseudoTypeInfo_Struct3 mercury__bit_buffer__write__bit_buffer__pti_bit_buffer_3__pseudo_1__pseudo_2__plain___vti_tuple_0;

#line 107 "bit_buffer.write.c"
static const MR_NotagFunctorDesc mercury__bit_buffer__write__bit_buffer__write__notag_functor_desc_write_buffer_2;

#line 110 "bit_buffer.write.c"
static const MR_FA_TypeInfo_Struct2 mercury__bit_buffer__write__bit_buffer__write__ti_write_buffer_2bit_buffer__type_ctor_info_error_stream_0bit_buffer__type_ctor_info_error_state_0;

#line 113 "bit_buffer.write.c"
static MR_bool MR_CALL 
mercury__bit_buffer__write____Unify____io_write_buffer_0_0_10001(
#line 116 "bit_buffer.write.c"
  MR_Box mercury__bit_buffer__write__wrapper_arg_1,
#line 118 "bit_buffer.write.c"
  MR_Box mercury__bit_buffer__write__wrapper_arg_2);

#line 121 "bit_buffer.write.c"
static void MR_CALL 
mercury__bit_buffer__write____Compare____io_write_buffer_0_0_10001(
#line 124 "bit_buffer.write.c"
  MR_Box * mercury__bit_buffer__write__wrapper_arg_1,
#line 126 "bit_buffer.write.c"
  MR_Box mercury__bit_buffer__write__wrapper_arg_2,
#line 128 "bit_buffer.write.c"
  MR_Box mercury__bit_buffer__write__wrapper_arg_3);

#line 131 "bit_buffer.write.c"
static MR_bool MR_CALL 
mercury__bit_buffer__write____Unify____write_buffer_2_0_10001(
#line 134 "bit_buffer.write.c"
  MR_Box mercury__bit_buffer__write__wrapper_arg_1,
#line 136 "bit_buffer.write.c"
  MR_Box mercury__bit_buffer__write__wrapper_arg_2,
#line 138 "bit_buffer.write.c"
  MR_Box mercury__bit_buffer__write__wrapper_arg_3,
#line 140 "bit_buffer.write.c"
  MR_Box mercury__bit_buffer__write__wrapper_arg_4);

#line 143 "bit_buffer.write.c"
static void MR_CALL 
mercury__bit_buffer__write____Compare____write_buffer_2_0_10001(
#line 146 "bit_buffer.write.c"
  MR_Box mercury__bit_buffer__write__wrapper_arg_1,
#line 148 "bit_buffer.write.c"
  MR_Box mercury__bit_buffer__write__wrapper_arg_2,
#line 150 "bit_buffer.write.c"
  MR_Box * mercury__bit_buffer__write__wrapper_arg_3,
#line 152 "bit_buffer.write.c"
  MR_Box mercury__bit_buffer__write__wrapper_arg_4,
#line 154 "bit_buffer.write.c"
  MR_Box mercury__bit_buffer__write__wrapper_arg_5);

#line 157 "bit_buffer.write.c"
static MR_bool MR_CALL 
mercury__bit_buffer__write____Unify____write_buffer_0_0_10001(
#line 160 "bit_buffer.write.c"
  MR_Box mercury__bit_buffer__write__wrapper_arg_1,
#line 162 "bit_buffer.write.c"
  MR_Box mercury__bit_buffer__write__wrapper_arg_2);

#line 165 "bit_buffer.write.c"
static void MR_CALL 
mercury__bit_buffer__write____Compare____write_buffer_0_0_10001(
#line 168 "bit_buffer.write.c"
  MR_Box * mercury__bit_buffer__write__wrapper_arg_1,
#line 170 "bit_buffer.write.c"
  MR_Box mercury__bit_buffer__write__wrapper_arg_2,
#line 172 "bit_buffer.write.c"
  MR_Box mercury__bit_buffer__write__wrapper_arg_3);

#line 13 "ops.opt"
static MR_Integer MR_CALL 
mercury__bit_buffer__write__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);

#line 133 "list.int"
static void MR_CALL 
mercury__bit_buffer__write__foldl__ho4_4_p_in__list_0(
#line 133 "list.int"
  MR_Word mercury__bit_buffer__write__HeadVar__2_2,
#line 133 "list.int"
  MR_Integer mercury__bit_buffer__write__HeadVar__3_3,
#line 133 "list.int"
  MR_Integer * mercury__bit_buffer__write__HeadVar__4_4);

#line 146 "list.int"
static void MR_CALL 
mercury__bit_buffer__write__foldl2__ho2_6_p_in__list_0(
#line 146 "list.int"
  MR_Word mercury__bit_buffer__write__HeadVar__2_2,
#line 146 "list.int"
  MR_Integer mercury__bit_buffer__write__HeadVar__3_3,
#line 146 "list.int"
  MR_Integer * mercury__bit_buffer__write__HeadVar__4_4,
#line 146 "list.int"
  MR_Box mercury__bit_buffer__write__HeadVar__5_5,
#line 146 "list.int"
  MR_Box * mercury__bit_buffer__write__HeadVar__6_6);

#line 310 "bit_buffer.write.m"
static void MR_CALL 
mercury__bit_buffer__write__flush_all_to_stream_2_p_0(
#line 310 "bit_buffer.write.m"
  MR_Word mercury__bit_buffer__write__TypeClassInfo_for_writer_11,
#line 310 "bit_buffer.write.m"
  MR_Box mercury__bit_buffer__write__STATE_VARIABLE_Buffer_0_4,
#line 310 "bit_buffer.write.m"
  MR_Box * mercury__bit_buffer__write__STATE_VARIABLE_Buffer_5);

#line 264 "bit_buffer.write.m"
static void MR_CALL 
mercury__bit_buffer__write__copy_out_bitmap_5_p_0(
#line 264 "bit_buffer.write.m"
  MR_Box mercury__bit_buffer__write__FilledBM_6,
#line 264 "bit_buffer.write.m"
  MR_Integer mercury__bit_buffer__write__STATE_VARIABLE_Index_0_10,
#line 264 "bit_buffer.write.m"
  MR_Integer * mercury__bit_buffer__write__STATE_VARIABLE_Index_11,
#line 264 "bit_buffer.write.m"
  MR_Box mercury__bit_buffer__write__STATE_VARIABLE_BM_0_12,
#line 264 "bit_buffer.write.m"
  MR_Box * mercury__bit_buffer__write__STATE_VARIABLE_BM_13);


static /* final */ const MR_Box mercury__bit_buffer__write_scalar_common_1[1][2];

static /* final */ const MR_Box mercury__bit_buffer__write_scalar_common_2[3][3];

static /* final */ const MR_Box mercury__bit_buffer__write_scalar_common_3[1][4];

static /* final */ const MR_Box mercury__bit_buffer__write_scalar_common_4[2][5];




static /* final */ const MR_Box mercury__bit_buffer__write_scalar_common_1[1][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_tuple_0)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box mercury__bit_buffer__write_scalar_common_2[3][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__bit_buffer__write__bit_buffer__write__type_ctor_info_write_buffer_2)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_binary_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__bit_buffer__write__bit_buffer__write__type_ctor_info_write_buffer_2)),
    ((MR_Box) (&mercury__bit_buffer__bit_buffer__type_ctor_info_error_stream_0)),
    ((MR_Box) (&mercury__bit_buffer__bit_buffer__type_ctor_info_error_state_0))
  },
  /* row 2 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__bit_buffer__write_scalar_common_3[1][4] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__bit_buffer__write_scalar_common_2[2])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__bit_buffer__write_scalar_common_4[2][5] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__bit_buffer__write_scalar_common_3[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__character__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__bit_buffer__write_scalar_common_3[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};



#include "bit_buffer.mh"
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
#include "bitmap.mh"
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
#include "type_desc.mh"
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
#include "dir.mh"
#include "dir.mh"
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



#line 626 "bit_buffer.write.c"
static const MR_FA_TypeInfo_Struct2 mercury__bit_buffer__write__bit_buffer__write__ti_write_buffer_2io__type_ctor_info_binary_output_stream_0io__type_ctor_info_state_0 = {
  &mercury__bit_buffer__write__bit_buffer__write__type_ctor_info_write_buffer_2,
  {
    (MR_TypeInfo) &mercury__io__io__type_ctor_info_binary_output_stream_0,
    (MR_TypeInfo) &mercury__io__io__type_ctor_info_state_0
  }
};

#line 635 "bit_buffer.write.c"
const MR_TypeCtorInfo_Struct mercury__bit_buffer__write__bit_buffer__write__type_ctor_info_io_write_buffer_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mercury__bit_buffer__write____Unify____io_write_buffer_0_0_10001)),
  ((MR_Box) (mercury__bit_buffer__write____Compare____io_write_buffer_0_0_10001)),
  (MR_String) "bit_buffer.write",
  (MR_String) "io_write_buffer",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mercury__bit_buffer__write__bit_buffer__write__ti_write_buffer_2io__type_ctor_info_binary_output_stream_0io__type_ctor_info_state_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 652 "bit_buffer.write.c"
static const MR_Integer mercury__bit_buffer__write__bit_buffer__write__functor_number_map_write_buffer_2[1] = {
  (MR_Integer) 0
};

#line 657 "bit_buffer.write.c"
static const MR_VA_TypeInfo_Struct0 mercury__bit_buffer__write____vti_tuple_0 = {
  &mercury__builtin__builtin__type_ctor_info_tuple_0,
  (MR_Integer) 0,
  { 0 }

};

#line 665 "bit_buffer.write.c"
static const MR_FA_PseudoTypeInfo_Struct3 mercury__bit_buffer__write__bit_buffer__pti_bit_buffer_3__pseudo_1__pseudo_2__plain___vti_tuple_0 = {
  &mercury__bit_buffer__bit_buffer__type_ctor_info_bit_buffer_3,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) (MR_Integer) 2,
    (MR_PseudoTypeInfo) &mercury__bit_buffer__write____vti_tuple_0
  }
};

#line 675 "bit_buffer.write.c"
static const MR_NotagFunctorDesc mercury__bit_buffer__write__bit_buffer__write__notag_functor_desc_write_buffer_2 = {
  (MR_String) "write_buffer",
  (MR_PseudoTypeInfo) &mercury__bit_buffer__write__bit_buffer__pti_bit_buffer_3__pseudo_1__pseudo_2__plain___vti_tuple_0,
  (MR_String) "bit_buffer"
};

#line 682 "bit_buffer.write.c"
const MR_TypeCtorInfo_Struct mercury__bit_buffer__write__bit_buffer__write__type_ctor_info_write_buffer_2 = {
  (MR_Integer) 2,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_NOTAG,
  ((MR_Box) (mercury__bit_buffer__write____Unify____write_buffer_2_0_10001)),
  ((MR_Box) (mercury__bit_buffer__write____Compare____write_buffer_2_0_10001)),
  (MR_String) "bit_buffer.write",
  (MR_String) "write_buffer",
  {     &mercury__bit_buffer__write__bit_buffer__write__notag_functor_desc_write_buffer_2 },
  {     &mercury__bit_buffer__write__bit_buffer__write__notag_functor_desc_write_buffer_2 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mercury__bit_buffer__write__bit_buffer__write__functor_number_map_write_buffer_2
};

#line 699 "bit_buffer.write.c"
static const MR_FA_TypeInfo_Struct2 mercury__bit_buffer__write__bit_buffer__write__ti_write_buffer_2bit_buffer__type_ctor_info_error_stream_0bit_buffer__type_ctor_info_error_state_0 = {
  &mercury__bit_buffer__write__bit_buffer__write__type_ctor_info_write_buffer_2,
  {
    (MR_TypeInfo) &mercury__bit_buffer__bit_buffer__type_ctor_info_error_stream_0,
    (MR_TypeInfo) &mercury__bit_buffer__bit_buffer__type_ctor_info_error_state_0
  }
};

#line 708 "bit_buffer.write.c"
const MR_TypeCtorInfo_Struct mercury__bit_buffer__write__bit_buffer__write__type_ctor_info_write_buffer_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mercury__bit_buffer__write____Unify____write_buffer_0_0_10001)),
  ((MR_Box) (mercury__bit_buffer__write____Compare____write_buffer_0_0_10001)),
  (MR_String) "bit_buffer.write",
  (MR_String) "write_buffer",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mercury__bit_buffer__write__bit_buffer__write__ti_write_buffer_2bit_buffer__type_ctor_info_error_stream_0bit_buffer__type_ctor_info_error_state_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 725 "bit_buffer.write.c"
static MR_bool MR_CALL 
mercury__bit_buffer__write____Unify____io_write_buffer_0_0_10001(
#line 728 "bit_buffer.write.c"
  MR_Box mercury__bit_buffer__write__wrapper_arg_1,
#line 730 "bit_buffer.write.c"
  MR_Box mercury__bit_buffer__write__wrapper_arg_2)
#line 732 "bit_buffer.write.c"
{
#line 734 "bit_buffer.write.c"
  {
#line 736 "bit_buffer.write.c"
    MR_bool mercury__bit_buffer__write__succeeded;

#line 739 "bit_buffer.write.c"
    {
#line 741 "bit_buffer.write.c"
      mercury__bit_buffer__write__succeeded = mercury__bit_buffer__write____Unify____io_write_buffer_0_0(((MR_Word) mercury__bit_buffer__write__wrapper_arg_1), ((MR_Word) mercury__bit_buffer__write__wrapper_arg_2));
    }
#line 744 "bit_buffer.write.c"
    return mercury__bit_buffer__write__succeeded;
#line 746 "bit_buffer.write.c"
  }
#line 748 "bit_buffer.write.c"
}

#line 751 "bit_buffer.write.c"
static void MR_CALL 
mercury__bit_buffer__write____Compare____io_write_buffer_0_0_10001(
#line 754 "bit_buffer.write.c"
  MR_Box * mercury__bit_buffer__write__wrapper_arg_1,
#line 756 "bit_buffer.write.c"
  MR_Box mercury__bit_buffer__write__wrapper_arg_2,
#line 758 "bit_buffer.write.c"
  MR_Box mercury__bit_buffer__write__wrapper_arg_3)
#line 760 "bit_buffer.write.c"
{
#line 762 "bit_buffer.write.c"
  {
#line 764 "bit_buffer.write.c"
    MR_Word mercury__bit_buffer__write__conv0_HeadVar__1_1;

#line 767 "bit_buffer.write.c"
    {
#line 769 "bit_buffer.write.c"
      mercury__bit_buffer__write____Compare____io_write_buffer_0_0(&mercury__bit_buffer__write__conv0_HeadVar__1_1, ((MR_Word) mercury__bit_buffer__write__wrapper_arg_2), ((MR_Word) mercury__bit_buffer__write__wrapper_arg_3));
    }
#line 772 "bit_buffer.write.c"
    *mercury__bit_buffer__write__wrapper_arg_1 = ((MR_Box) (mercury__bit_buffer__write__conv0_HeadVar__1_1));
#line 774 "bit_buffer.write.c"
  }
#line 776 "bit_buffer.write.c"
}

#line 779 "bit_buffer.write.c"
static MR_bool MR_CALL 
mercury__bit_buffer__write____Unify____write_buffer_2_0_10001(
#line 782 "bit_buffer.write.c"
  MR_Box mercury__bit_buffer__write__wrapper_arg_1,
#line 784 "bit_buffer.write.c"
  MR_Box mercury__bit_buffer__write__wrapper_arg_2,
#line 786 "bit_buffer.write.c"
  MR_Box mercury__bit_buffer__write__wrapper_arg_3,
#line 788 "bit_buffer.write.c"
  MR_Box mercury__bit_buffer__write__wrapper_arg_4)
#line 790 "bit_buffer.write.c"
{
#line 792 "bit_buffer.write.c"
  {
#line 794 "bit_buffer.write.c"
    MR_bool mercury__bit_buffer__write__succeeded;

#line 797 "bit_buffer.write.c"
    {
#line 799 "bit_buffer.write.c"
      mercury__bit_buffer__write__succeeded = mercury__bit_buffer__write____Unify____write_buffer_2_0(((MR_Word) mercury__bit_buffer__write__wrapper_arg_1), ((MR_Word) mercury__bit_buffer__write__wrapper_arg_2), ((MR_Word) mercury__bit_buffer__write__wrapper_arg_3), ((MR_Word) mercury__bit_buffer__write__wrapper_arg_4));
    }
#line 802 "bit_buffer.write.c"
    return mercury__bit_buffer__write__succeeded;
#line 804 "bit_buffer.write.c"
  }
#line 806 "bit_buffer.write.c"
}

#line 809 "bit_buffer.write.c"
static void MR_CALL 
mercury__bit_buffer__write____Compare____write_buffer_2_0_10001(
#line 812 "bit_buffer.write.c"
  MR_Box mercury__bit_buffer__write__wrapper_arg_1,
#line 814 "bit_buffer.write.c"
  MR_Box mercury__bit_buffer__write__wrapper_arg_2,
#line 816 "bit_buffer.write.c"
  MR_Box * mercury__bit_buffer__write__wrapper_arg_3,
#line 818 "bit_buffer.write.c"
  MR_Box mercury__bit_buffer__write__wrapper_arg_4,
#line 820 "bit_buffer.write.c"
  MR_Box mercury__bit_buffer__write__wrapper_arg_5)
#line 822 "bit_buffer.write.c"
{
#line 824 "bit_buffer.write.c"
  {
#line 826 "bit_buffer.write.c"
    MR_Word mercury__bit_buffer__write__conv0_HeadVar__1_1;

#line 829 "bit_buffer.write.c"
    {
#line 831 "bit_buffer.write.c"
      mercury__bit_buffer__write____Compare____write_buffer_2_0(((MR_Word) mercury__bit_buffer__write__wrapper_arg_1), ((MR_Word) mercury__bit_buffer__write__wrapper_arg_2), &mercury__bit_buffer__write__conv0_HeadVar__1_1, ((MR_Word) mercury__bit_buffer__write__wrapper_arg_4), ((MR_Word) mercury__bit_buffer__write__wrapper_arg_5));
    }
#line 834 "bit_buffer.write.c"
    *mercury__bit_buffer__write__wrapper_arg_3 = ((MR_Box) (mercury__bit_buffer__write__conv0_HeadVar__1_1));
#line 836 "bit_buffer.write.c"
  }
#line 838 "bit_buffer.write.c"
}

#line 841 "bit_buffer.write.c"
static MR_bool MR_CALL 
mercury__bit_buffer__write____Unify____write_buffer_0_0_10001(
#line 844 "bit_buffer.write.c"
  MR_Box mercury__bit_buffer__write__wrapper_arg_1,
#line 846 "bit_buffer.write.c"
  MR_Box mercury__bit_buffer__write__wrapper_arg_2)
#line 848 "bit_buffer.write.c"
{
#line 850 "bit_buffer.write.c"
  {
#line 852 "bit_buffer.write.c"
    MR_bool mercury__bit_buffer__write__succeeded;

#line 855 "bit_buffer.write.c"
    {
#line 857 "bit_buffer.write.c"
      mercury__bit_buffer__write__succeeded = mercury__bit_buffer__write____Unify____write_buffer_0_0(((MR_Word) mercury__bit_buffer__write__wrapper_arg_1), ((MR_Word) mercury__bit_buffer__write__wrapper_arg_2));
    }
#line 860 "bit_buffer.write.c"
    return mercury__bit_buffer__write__succeeded;
#line 862 "bit_buffer.write.c"
  }
#line 864 "bit_buffer.write.c"
}

#line 867 "bit_buffer.write.c"
static void MR_CALL 
mercury__bit_buffer__write____Compare____write_buffer_0_0_10001(
#line 870 "bit_buffer.write.c"
  MR_Box * mercury__bit_buffer__write__wrapper_arg_1,
#line 872 "bit_buffer.write.c"
  MR_Box mercury__bit_buffer__write__wrapper_arg_2,
#line 874 "bit_buffer.write.c"
  MR_Box mercury__bit_buffer__write__wrapper_arg_3)
#line 876 "bit_buffer.write.c"
{
#line 878 "bit_buffer.write.c"
  {
#line 880 "bit_buffer.write.c"
    MR_Word mercury__bit_buffer__write__conv0_HeadVar__1_1;

#line 883 "bit_buffer.write.c"
    {
#line 885 "bit_buffer.write.c"
      mercury__bit_buffer__write____Compare____write_buffer_0_0(&mercury__bit_buffer__write__conv0_HeadVar__1_1, ((MR_Word) mercury__bit_buffer__write__wrapper_arg_2), ((MR_Word) mercury__bit_buffer__write__wrapper_arg_3));
    }
#line 888 "bit_buffer.write.c"
    *mercury__bit_buffer__write__wrapper_arg_1 = ((MR_Box) (mercury__bit_buffer__write__conv0_HeadVar__1_1));
#line 890 "bit_buffer.write.c"
  }
#line 892 "bit_buffer.write.c"
}

#line 13 "ops.opt"
static MR_Integer MR_CALL 
mercury__bit_buffer__write__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
#line 13 "ops.opt"
{
#line 38 "ops.opt"
  {
#line 38 "ops.opt"
    MR_bool mercury__bit_buffer__write__succeeded;

#line 38 "ops.opt"
    return (MR_Integer) 1200;
#line 38 "ops.opt"
  }
#line 13 "ops.opt"
}

#line 133 "list.int"
static void MR_CALL 
mercury__bit_buffer__write__foldl__ho4_4_p_in__list_0(
#line 133 "list.int"
  MR_Word mercury__bit_buffer__write__HeadVar__2_2,
#line 133 "list.int"
  MR_Integer mercury__bit_buffer__write__HeadVar__3_3,
#line 133 "list.int"
  MR_Integer * mercury__bit_buffer__write__HeadVar__4_4)
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
        MR_bool mercury__bit_buffer__write__succeeded;

#line 380 "list.opt"
        if ((mercury__bit_buffer__write__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 380 "list.opt"
          *mercury__bit_buffer__write__HeadVar__4_4 = mercury__bit_buffer__write__HeadVar__3_3;
#line 380 "list.opt"
        else
#line 382 "list.opt"
          {
#line 382 "list.opt"
            MR_Box mercury__bit_buffer__write__H_10_9 = ((MR_Box) (MR_hl_field(MR_mktag(1), mercury__bit_buffer__write__HeadVar__2_2, (MR_Integer) 0)));
#line 382 "list.opt"
            MR_Word mercury__bit_buffer__write__T_11_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bit_buffer__write__HeadVar__2_2, (MR_Integer) 1)));
#line 382 "list.opt"
            MR_Integer mercury__bit_buffer__write__STATE_VARIABLE_A_15_15_13;
#line 382 "list.opt"
            MR_Integer mercury__bit_buffer__write__V_52_52;

#line 114 "bitmap.opt"
{
#define MR_PROC_LABEL mercury__bit_buffer__write__foldl__ho4_4_p_in__list_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr) mercury__bit_buffer__write__H_10_9 ;
		{
#line 114 "bitmap.opt"

    NumBits = BM->num_bits;

#line 964 "bit_buffer.write.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bit_buffer__write__V_52_52  = NumBits;
#line 114 "bitmap.opt"
}
#line 180 "bit_buffer.write.m"
            mercury__bit_buffer__write__STATE_VARIABLE_A_15_15_13 = (mercury__bit_buffer__write__HeadVar__3_3 + mercury__bit_buffer__write__V_52_52);
#line 384 "list.opt"
            /* direct tailcall eliminated */
#line 384 "list.opt"
            {
#line 384 "list.opt"
              MR_Word mercury__bit_buffer__write__HeadVar__2__tmp_copy_2 = mercury__bit_buffer__write__T_11_10;
#line 384 "list.opt"
              MR_Integer mercury__bit_buffer__write__HeadVar__3__tmp_copy_3 = mercury__bit_buffer__write__STATE_VARIABLE_A_15_15_13;

#line 384 "list.opt"
              mercury__bit_buffer__write__HeadVar__3_3 = mercury__bit_buffer__write__HeadVar__3__tmp_copy_3;
#line 384 "list.opt"
              mercury__bit_buffer__write__HeadVar__2_2 = mercury__bit_buffer__write__HeadVar__2__tmp_copy_2;
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

#line 146 "list.int"
static void MR_CALL 
mercury__bit_buffer__write__foldl2__ho2_6_p_in__list_0(
#line 146 "list.int"
  MR_Word mercury__bit_buffer__write__HeadVar__2_2,
#line 146 "list.int"
  MR_Integer mercury__bit_buffer__write__HeadVar__3_3,
#line 146 "list.int"
  MR_Integer * mercury__bit_buffer__write__HeadVar__4_4,
#line 146 "list.int"
  MR_Box mercury__bit_buffer__write__HeadVar__5_5,
#line 146 "list.int"
  MR_Box * mercury__bit_buffer__write__HeadVar__6_6)
#line 146 "list.int"
{
#line 396 "list.opt"
  while (MR_TRUE)
#line 396 "list.opt"
    {
#line 396 "list.opt"
      /* tailcall optimized into a loop */
#line 396 "list.opt"
      {
#line 396 "list.opt"
        MR_bool mercury__bit_buffer__write__succeeded;

#line 396 "list.opt"
        if ((mercury__bit_buffer__write__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 396 "list.opt"
          {
#line 396 "list.opt"
            *mercury__bit_buffer__write__HeadVar__6_6 = mercury__bit_buffer__write__HeadVar__5_5;
#line 396 "list.opt"
            *mercury__bit_buffer__write__HeadVar__4_4 = mercury__bit_buffer__write__HeadVar__3_3;
#line 396 "list.opt"
          }
#line 396 "list.opt"
        else
#line 399 "list.opt"
          {
#line 399 "list.opt"
            MR_Box mercury__bit_buffer__write__H_15_13 = ((MR_Box) (MR_hl_field(MR_mktag(1), mercury__bit_buffer__write__HeadVar__2_2, (MR_Integer) 0)));
#line 399 "list.opt"
            MR_Word mercury__bit_buffer__write__T_16_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bit_buffer__write__HeadVar__2_2, (MR_Integer) 1)));
#line 399 "list.opt"
            MR_Integer mercury__bit_buffer__write__STATE_VARIABLE_A_23_23_19;
#line 399 "list.opt"
            MR_Box mercury__bit_buffer__write__STATE_VARIABLE_B_24_24_20;

#line 400 "list.opt"
            {
#line 400 "list.opt"
              mercury__bit_buffer__write__copy_out_bitmap_5_p_0(mercury__bit_buffer__write__H_15_13, mercury__bit_buffer__write__HeadVar__3_3, &mercury__bit_buffer__write__STATE_VARIABLE_A_23_23_19, mercury__bit_buffer__write__HeadVar__5_5, &mercury__bit_buffer__write__STATE_VARIABLE_B_24_24_20);
            }
#line 401 "list.opt"
            /* direct tailcall eliminated */
#line 401 "list.opt"
            {
#line 401 "list.opt"
              MR_Word mercury__bit_buffer__write__HeadVar__2__tmp_copy_2 = mercury__bit_buffer__write__T_16_14;
#line 401 "list.opt"
              MR_Integer mercury__bit_buffer__write__HeadVar__3__tmp_copy_3 = mercury__bit_buffer__write__STATE_VARIABLE_A_23_23_19;
#line 401 "list.opt"
              MR_Box mercury__bit_buffer__write__HeadVar__5__tmp_copy_5 = mercury__bit_buffer__write__STATE_VARIABLE_B_24_24_20;

#line 401 "list.opt"
              mercury__bit_buffer__write__HeadVar__5_5 = mercury__bit_buffer__write__HeadVar__5__tmp_copy_5;
#line 401 "list.opt"
              mercury__bit_buffer__write__HeadVar__3_3 = mercury__bit_buffer__write__HeadVar__3__tmp_copy_3;
#line 401 "list.opt"
              mercury__bit_buffer__write__HeadVar__2_2 = mercury__bit_buffer__write__HeadVar__2__tmp_copy_2;
#line 401 "list.opt"
            }
#line 401 "list.opt"
            continue;
#line 399 "list.opt"
          }
#line 396 "list.opt"
      }
#line 396 "list.opt"
      break;
#line 396 "list.opt"
    }
#line 146 "list.int"
}

#line 163 "bit_buffer.write.m"
void MR_CALL 
mercury__bit_buffer__write____Compare____write_buffer_2_0(
#line 163 "bit_buffer.write.m"
  MR_Word mercury__bit_buffer__write__TypeInfo_for_Stream_8,
#line 163 "bit_buffer.write.m"
  MR_Word mercury__bit_buffer__write__TypeInfo_for_State_9,
#line 163 "bit_buffer.write.m"
  MR_Word * mercury__bit_buffer__write__HeadVar__1_1,
#line 163 "bit_buffer.write.m"
  MR_Word mercury__bit_buffer__write__HeadVar__2_2,
#line 163 "bit_buffer.write.m"
  MR_Word mercury__bit_buffer__write__HeadVar__3_3)
#line 163 "bit_buffer.write.m"
{
#line 163 "bit_buffer.write.m"
  {
#line 163 "bit_buffer.write.m"
    MR_bool mercury__bit_buffer__write__succeeded;
#line 163 "bit_buffer.write.m"
    MR_Integer mercury__bit_buffer__write__CastX_6 = (MR_Integer) mercury__bit_buffer__write__HeadVar__2_2;
#line 163 "bit_buffer.write.m"
    MR_Integer mercury__bit_buffer__write__CastY_7 = (MR_Integer) mercury__bit_buffer__write__HeadVar__3_3;

#line 163 "bit_buffer.write.m"
    mercury__bit_buffer__write__succeeded = (mercury__bit_buffer__write__CastX_6 == mercury__bit_buffer__write__CastY_7);
#line 163 "bit_buffer.write.m"
    if (mercury__bit_buffer__write__succeeded)
#line 1115 "bit_buffer.write.c"
      *mercury__bit_buffer__write__HeadVar__1_1 = (MR_Integer) 0;
#line 163 "bit_buffer.write.m"
    else
#line 163 "bit_buffer.write.m"
      {
#line 163 "bit_buffer.write.m"
        MR_Word mercury__bit_buffer__write__TypeInfo_10_10 = (MR_Word) &mercury__bit_buffer__write_scalar_common_1[0];
#line 163 "bit_buffer.write.m"
        MR_Box mercury__bit_buffer__write__V_4_4 = (MR_Box) mercury__bit_buffer__write__HeadVar__2_2;
#line 163 "bit_buffer.write.m"
        MR_Box mercury__bit_buffer__write__V_5_5 = (MR_Box) mercury__bit_buffer__write__HeadVar__3_3;

#line 163 "bit_buffer.write.m"
        {
#line 163 "bit_buffer.write.m"
          mercury__bit_buffer____Compare____bit_buffer_3_0(mercury__bit_buffer__write__TypeInfo_for_Stream_8, mercury__bit_buffer__write__TypeInfo_for_State_9, mercury__bit_buffer__write__TypeInfo_10_10, mercury__bit_buffer__write__HeadVar__1_1, mercury__bit_buffer__write__V_4_4, mercury__bit_buffer__write__V_5_5);
#line 163 "bit_buffer.write.m"
          return;
        }
#line 163 "bit_buffer.write.m"
      }
#line 163 "bit_buffer.write.m"
  }
#line 163 "bit_buffer.write.m"
}

#line 163 "bit_buffer.write.m"
MR_bool MR_CALL 
mercury__bit_buffer__write____Unify____write_buffer_2_0(
#line 163 "bit_buffer.write.m"
  MR_Word mercury__bit_buffer__write__TypeInfo_for_Stream_7,
#line 163 "bit_buffer.write.m"
  MR_Word mercury__bit_buffer__write__TypeInfo_for_State_8,
#line 163 "bit_buffer.write.m"
  MR_Word mercury__bit_buffer__write__HeadVar__1_1,
#line 163 "bit_buffer.write.m"
  MR_Word mercury__bit_buffer__write__HeadVar__2_2)
#line 163 "bit_buffer.write.m"
{
#line 163 "bit_buffer.write.m"
  {
#line 163 "bit_buffer.write.m"
    MR_bool mercury__bit_buffer__write__succeeded;
#line 163 "bit_buffer.write.m"
    MR_Integer mercury__bit_buffer__write__CastX_5 = (MR_Integer) mercury__bit_buffer__write__HeadVar__1_1;
#line 163 "bit_buffer.write.m"
    MR_Integer mercury__bit_buffer__write__CastY_6 = (MR_Integer) mercury__bit_buffer__write__HeadVar__2_2;

#line 163 "bit_buffer.write.m"
    mercury__bit_buffer__write__succeeded = (mercury__bit_buffer__write__CastX_5 == mercury__bit_buffer__write__CastY_6);
#line 163 "bit_buffer.write.m"
    if (mercury__bit_buffer__write__succeeded)
#line 163 "bit_buffer.write.m"
      mercury__bit_buffer__write__succeeded = MR_TRUE;
#line 163 "bit_buffer.write.m"
    else
#line 163 "bit_buffer.write.m"
      {
#line 163 "bit_buffer.write.m"
        MR_Word mercury__bit_buffer__write__TypeInfo_9_9 = (MR_Word) &mercury__bit_buffer__write_scalar_common_1[0];
#line 163 "bit_buffer.write.m"
        MR_Box mercury__bit_buffer__write__V_3_3 = (MR_Box) mercury__bit_buffer__write__HeadVar__1_1;
#line 163 "bit_buffer.write.m"
        MR_Box mercury__bit_buffer__write__V_4_4 = (MR_Box) mercury__bit_buffer__write__HeadVar__2_2;

#line 1181 "bit_buffer.write.c"
        {
#line 1183 "bit_buffer.write.c"
          return mercury__bit_buffer__write__succeeded = mercury__bit_buffer____Unify____bit_buffer_3_0(mercury__bit_buffer__write__TypeInfo_for_Stream_7, mercury__bit_buffer__write__TypeInfo_for_State_8, mercury__bit_buffer__write__TypeInfo_9_9, mercury__bit_buffer__write__V_3_3, mercury__bit_buffer__write__V_4_4);
        }
#line 163 "bit_buffer.write.m"
      }
#line 163 "bit_buffer.write.m"
    return mercury__bit_buffer__write__succeeded;
#line 163 "bit_buffer.write.m"
  }
#line 163 "bit_buffer.write.m"
}

#line 34 "bit_buffer.write.m"
void MR_CALL 
mercury__bit_buffer__write____Compare____write_buffer_0_0(
#line 34 "bit_buffer.write.m"
  MR_Word * mercury__bit_buffer__write__HeadVar__1_1,
#line 34 "bit_buffer.write.m"
  MR_Word mercury__bit_buffer__write__HeadVar__2_2,
#line 34 "bit_buffer.write.m"
  MR_Word mercury__bit_buffer__write__HeadVar__3_3)
#line 34 "bit_buffer.write.m"
{
#line 34 "bit_buffer.write.m"
  {
#line 34 "bit_buffer.write.m"
    MR_bool mercury__bit_buffer__write__succeeded;
#line 34 "bit_buffer.write.m"
    MR_Word mercury__bit_buffer__write__TypeInfo_6_6 = (MR_Word) &mercury__bit_buffer__write_scalar_common_2[1];
#line 34 "bit_buffer.write.m"
    MR_Word mercury__bit_buffer__write__Cast_HeadVar1_4 = mercury__bit_buffer__write__HeadVar__2_2;
#line 34 "bit_buffer.write.m"
    MR_Word mercury__bit_buffer__write__Cast_HeadVar2_5 = mercury__bit_buffer__write__HeadVar__3_3;

#line 34 "bit_buffer.write.m"
    {
#line 34 "bit_buffer.write.m"
      mercury__builtin__compare_3_p_0(mercury__bit_buffer__write__TypeInfo_6_6, mercury__bit_buffer__write__HeadVar__1_1, ((MR_Box) (mercury__bit_buffer__write__Cast_HeadVar1_4)), ((MR_Box) (mercury__bit_buffer__write__Cast_HeadVar2_5)));
#line 34 "bit_buffer.write.m"
      return;
    }
#line 34 "bit_buffer.write.m"
  }
#line 34 "bit_buffer.write.m"
}

#line 34 "bit_buffer.write.m"
MR_bool MR_CALL 
mercury__bit_buffer__write____Unify____write_buffer_0_0(
#line 34 "bit_buffer.write.m"
  MR_Word mercury__bit_buffer__write__HeadVar__1_1,
#line 34 "bit_buffer.write.m"
  MR_Word mercury__bit_buffer__write__HeadVar__2_2)
#line 34 "bit_buffer.write.m"
{
#line 34 "bit_buffer.write.m"
  {
#line 34 "bit_buffer.write.m"
    MR_bool mercury__bit_buffer__write__succeeded;
#line 34 "bit_buffer.write.m"
    MR_Word mercury__bit_buffer__write__TypeCtorInfo_5_5 = (MR_Word) &mercury__bit_buffer__bit_buffer__type_ctor_info_error_stream_0;
#line 34 "bit_buffer.write.m"
    MR_Word mercury__bit_buffer__write__TypeCtorInfo_6_6 = (MR_Word) &mercury__bit_buffer__bit_buffer__type_ctor_info_error_state_0;
#line 34 "bit_buffer.write.m"
    MR_Word mercury__bit_buffer__write__Cast_HeadVar1_3 = mercury__bit_buffer__write__HeadVar__1_1;
#line 34 "bit_buffer.write.m"
    MR_Word mercury__bit_buffer__write__Cast_HeadVar2_4 = mercury__bit_buffer__write__HeadVar__2_2;

#line 34 "bit_buffer.write.m"
    {
#line 34 "bit_buffer.write.m"
      return mercury__bit_buffer__write__succeeded = mercury__bit_buffer__write____Unify____write_buffer_2_0(mercury__bit_buffer__write__TypeCtorInfo_5_5, mercury__bit_buffer__write__TypeCtorInfo_6_6, mercury__bit_buffer__write__Cast_HeadVar1_3, mercury__bit_buffer__write__Cast_HeadVar2_4);
    }
#line 34 "bit_buffer.write.m"
    return mercury__bit_buffer__write__succeeded;
#line 34 "bit_buffer.write.m"
  }
#line 34 "bit_buffer.write.m"
}

#line 35 "bit_buffer.write.m"
void MR_CALL 
mercury__bit_buffer__write____Compare____io_write_buffer_0_0(
#line 35 "bit_buffer.write.m"
  MR_Word * mercury__bit_buffer__write__HeadVar__1_1,
#line 35 "bit_buffer.write.m"
  MR_Word mercury__bit_buffer__write__HeadVar__2_2,
#line 35 "bit_buffer.write.m"
  MR_Word mercury__bit_buffer__write__HeadVar__3_3)
#line 35 "bit_buffer.write.m"
{
#line 35 "bit_buffer.write.m"
  {
#line 35 "bit_buffer.write.m"
    MR_bool mercury__bit_buffer__write__succeeded;
#line 35 "bit_buffer.write.m"
    MR_Word mercury__bit_buffer__write__TypeInfo_6_6 = (MR_Word) &mercury__bit_buffer__write_scalar_common_2[0];
#line 35 "bit_buffer.write.m"
    MR_Word mercury__bit_buffer__write__Cast_HeadVar1_4 = mercury__bit_buffer__write__HeadVar__2_2;
#line 35 "bit_buffer.write.m"
    MR_Word mercury__bit_buffer__write__Cast_HeadVar2_5 = mercury__bit_buffer__write__HeadVar__3_3;

#line 35 "bit_buffer.write.m"
    {
#line 35 "bit_buffer.write.m"
      mercury__builtin__compare_3_p_0(mercury__bit_buffer__write__TypeInfo_6_6, mercury__bit_buffer__write__HeadVar__1_1, ((MR_Box) (mercury__bit_buffer__write__Cast_HeadVar1_4)), ((MR_Box) (mercury__bit_buffer__write__Cast_HeadVar2_5)));
#line 35 "bit_buffer.write.m"
      return;
    }
#line 35 "bit_buffer.write.m"
  }
#line 35 "bit_buffer.write.m"
}

#line 35 "bit_buffer.write.m"
MR_bool MR_CALL 
mercury__bit_buffer__write____Unify____io_write_buffer_0_0(
#line 35 "bit_buffer.write.m"
  MR_Word mercury__bit_buffer__write__HeadVar__1_1,
#line 35 "bit_buffer.write.m"
  MR_Word mercury__bit_buffer__write__HeadVar__2_2)
#line 35 "bit_buffer.write.m"
{
#line 35 "bit_buffer.write.m"
  {
#line 35 "bit_buffer.write.m"
    MR_bool mercury__bit_buffer__write__succeeded;
#line 35 "bit_buffer.write.m"
    MR_Word mercury__bit_buffer__write__TypeCtorInfo_5_5 = (MR_Word) &mercury__io__io__type_ctor_info_binary_output_stream_0;
#line 35 "bit_buffer.write.m"
    MR_Word mercury__bit_buffer__write__TypeCtorInfo_6_6 = (MR_Word) &mercury__io__io__type_ctor_info_state_0;
#line 35 "bit_buffer.write.m"
    MR_Word mercury__bit_buffer__write__Cast_HeadVar1_3 = mercury__bit_buffer__write__HeadVar__1_1;
#line 35 "bit_buffer.write.m"
    MR_Word mercury__bit_buffer__write__Cast_HeadVar2_4 = mercury__bit_buffer__write__HeadVar__2_2;

#line 35 "bit_buffer.write.m"
    {
#line 35 "bit_buffer.write.m"
      return mercury__bit_buffer__write__succeeded = mercury__bit_buffer__write____Unify____write_buffer_2_0(mercury__bit_buffer__write__TypeCtorInfo_5_5, mercury__bit_buffer__write__TypeCtorInfo_6_6, mercury__bit_buffer__write__Cast_HeadVar1_3, mercury__bit_buffer__write__Cast_HeadVar2_4);
    }
#line 35 "bit_buffer.write.m"
    return mercury__bit_buffer__write__succeeded;
#line 35 "bit_buffer.write.m"
  }
#line 35 "bit_buffer.write.m"
}

#line 362 "bit_buffer.write.m"
void MR_CALL 
mercury__bit_buffer__write__store_full_buffer_2_p_0(
#line 362 "bit_buffer.write.m"
  MR_Word mercury__bit_buffer__write__TypeClassInfo_for_writer_26,
#line 362 "bit_buffer.write.m"
  MR_Box mercury__bit_buffer__write__STATE_VARIABLE_Buffer_0_15,
#line 362 "bit_buffer.write.m"
  MR_Box * mercury__bit_buffer__write__STATE_VARIABLE_Buffer_16)
#line 362 "bit_buffer.write.m"
{
#line 366 "bit_buffer.write.m"
  {
#line 366 "bit_buffer.write.m"
    MR_bool mercury__bit_buffer__write__succeeded;
#line 366 "bit_buffer.write.m"
    MR_Integer mercury__bit_buffer__write__Pos_4;
#line 366 "bit_buffer.write.m"
    MR_Integer mercury__bit_buffer__write__Size_5;
#line 366 "bit_buffer.write.m"
    MR_Box mercury__bit_buffer__write__OldBM_6;
#line 366 "bit_buffer.write.m"
    MR_Box mercury__bit_buffer__write__State_7;
#line 366 "bit_buffer.write.m"
    MR_Integer mercury__bit_buffer__write__NewSize_8;
#line 366 "bit_buffer.write.m"
    MR_Box mercury__bit_buffer__write__NewBM0_9;
#line 366 "bit_buffer.write.m"
    MR_Integer mercury__bit_buffer__write__NewPos_11;
#line 366 "bit_buffer.write.m"
    MR_Box mercury__bit_buffer__write__NewBM_12;
#line 366 "bit_buffer.write.m"
    MR_Box mercury__bit_buffer__write__FilledBM_13;
#line 366 "bit_buffer.write.m"
    MR_Word mercury__bit_buffer__write__FilledBMs_14;
#line 366 "bit_buffer.write.m"
    MR_Integer mercury__bit_buffer__write__V_17_17;
#line 366 "bit_buffer.write.m"
    MR_Integer mercury__bit_buffer__write__V_19_19;
#line 366 "bit_buffer.write.m"
    MR_Integer mercury__bit_buffer__write__V_21_21;
#line 366 "bit_buffer.write.m"
    MR_Word mercury__bit_buffer__write__V_23_23;
#line 366 "bit_buffer.write.m"
    MR_Box mercury__bit_buffer__write__V_24_24;
#line 114 "bit_buffer.opt"
    MR_Word mercury__bit_buffer__write__TypeInfo_28_47;
#line 114 "bit_buffer.opt"
    MR_Word mercury__bit_buffer__write__TypeInfo_30_48;
#line 114 "bit_buffer.opt"
    MR_Word mercury__bit_buffer__write__TypeInfo_31_49;
#line 117 "bit_buffer.opt"
    MR_Word mercury__bit_buffer__write__TypeInfo_32_50;
#line 117 "bit_buffer.opt"
    MR_Word mercury__bit_buffer__write__TypeInfo_33_51;
#line 117 "bit_buffer.opt"
    MR_Word mercury__bit_buffer__write__TypeInfo_31_52;
#line 111 "bit_buffer.opt"
    MR_Word mercury__bit_buffer__write__TypeInfo_34_53;
#line 111 "bit_buffer.opt"
    MR_Word mercury__bit_buffer__write__TypeInfo_35_54;
#line 111 "bit_buffer.opt"
    MR_Word mercury__bit_buffer__write__TypeInfo_31_55;
#line 126 "bit_buffer.opt"
    MR_Word mercury__bit_buffer__write__TypeInfo_36_56;
#line 126 "bit_buffer.opt"
    MR_Word mercury__bit_buffer__write__TypeInfo_37_57;
#line 126 "bit_buffer.opt"
    MR_Word mercury__bit_buffer__write__TypeInfo_31_58;
#line 117 "bit_buffer.opt"
    MR_Word mercury__bit_buffer__write__TypeInfo_38_59;
#line 117 "bit_buffer.opt"
    MR_Word mercury__bit_buffer__write__TypeInfo_39_60;
#line 117 "bit_buffer.opt"
    MR_Word mercury__bit_buffer__write__TypeInfo_31_61;
#line 129 "bit_buffer.opt"
    MR_Word mercury__bit_buffer__write__TypeInfo_40_62;
#line 129 "bit_buffer.opt"
    MR_Word mercury__bit_buffer__write__TypeInfo_41_63;
#line 129 "bit_buffer.opt"
    MR_Word mercury__bit_buffer__write__TypeInfo_31_64;
#line 135 "bit_buffer.opt"
    MR_Word mercury__bit_buffer__write__TypeInfo_42_65;
#line 135 "bit_buffer.opt"
    MR_Word mercury__bit_buffer__write__TypeInfo_43_66;
#line 135 "bit_buffer.opt"
    MR_Word mercury__bit_buffer__write__TypeInfo_31_67;

#line 114 "bit_buffer.opt"
{
#define MR_PROC_LABEL mercury__bit_buffer__write__store_full_buffer_2_p_0

	ML_BitBufferPtr Buffer;
	MR_Integer Pos;

	Buffer = (ML_BitBufferPtr) mercury__bit_buffer__write__STATE_VARIABLE_Buffer_0_15 ;
		{
#line 114 "bit_buffer.opt"

    Pos = Buffer->ML_bit_buffer_pos;

#line 1432 "bit_buffer.write.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bit_buffer__write__Pos_4  = Pos;
#line 114 "bit_buffer.opt"
}
#line 117 "bit_buffer.opt"
{
#define MR_PROC_LABEL mercury__bit_buffer__write__store_full_buffer_2_p_0

	ML_BitBufferPtr Buffer;
	MR_Integer Size;

	Buffer = (ML_BitBufferPtr) mercury__bit_buffer__write__STATE_VARIABLE_Buffer_0_15 ;
		{
#line 117 "bit_buffer.opt"

    Size = Buffer->ML_bit_buffer_size;

#line 1452 "bit_buffer.write.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bit_buffer__write__Size_5  = Size;
#line 117 "bit_buffer.opt"
}
#line 111 "bit_buffer.opt"
{
#define MR_PROC_LABEL mercury__bit_buffer__write__store_full_buffer_2_p_0

	ML_BitBufferPtr Buffer;
	MR_BitmapPtr BM;

	Buffer = (ML_BitBufferPtr) mercury__bit_buffer__write__STATE_VARIABLE_Buffer_0_15 ;
		{
#line 111 "bit_buffer.opt"

    BM = Buffer->ML_bit_buffer_bitmap;

#line 1472 "bit_buffer.write.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bit_buffer__write__OldBM_6  = (MR_Box) BM;
#line 111 "bit_buffer.opt"
}
#line 126 "bit_buffer.opt"
{
#define MR_PROC_LABEL mercury__bit_buffer__write__store_full_buffer_2_p_0

	ML_BitBufferPtr Buffer;
	MR_Word State;

	Buffer = (ML_BitBufferPtr) mercury__bit_buffer__write__STATE_VARIABLE_Buffer_0_15 ;
		{
#line 126 "bit_buffer.opt"

    State = Buffer->ML_bit_buffer_state;

#line 1492 "bit_buffer.write.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bit_buffer__write__State_7  = (MR_Box) State;
#line 126 "bit_buffer.opt"
}
#line 117 "bit_buffer.opt"
{
#define MR_PROC_LABEL mercury__bit_buffer__write__store_full_buffer_2_p_0

	ML_BitBufferPtr Buffer;
	MR_Integer Size;

	Buffer = (ML_BitBufferPtr) mercury__bit_buffer__write__STATE_VARIABLE_Buffer_0_15 ;
		{
#line 117 "bit_buffer.opt"

    Size = Buffer->ML_bit_buffer_size;

#line 1512 "bit_buffer.write.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bit_buffer__write__V_17_17  = Size;
#line 117 "bit_buffer.opt"
}
#line 373 "bit_buffer.write.m"
    mercury__bit_buffer__write__NewSize_8 = (mercury__bit_buffer__write__V_17_17 * (MR_Integer) 2);
#line 382 "bit_buffer.write.m"
    mercury__bit_buffer__write__V_19_19 = (mercury__bit_buffer__write__NewSize_8 + (MR_Integer) 32);
#line 103 "bitmap.opt"
    {
#line 103 "bitmap.opt"
      mercury__bit_buffer__write__NewBM0_9 = mercury__bitmap__init_2_f_0(mercury__bit_buffer__write__V_19_19, (MR_Integer) 0);
    }
#line 383 "bit_buffer.write.m"
    mercury__bit_buffer__write__NewPos_11 = (mercury__bit_buffer__write__Pos_4 - mercury__bit_buffer__write__Size_5);
#line 385 "bit_buffer.write.m"
    {
#line 385 "bit_buffer.write.m"
      mercury__bit_buffer__write__V_21_21 = mercury__bitmap__bits_3_f_0(mercury__bit_buffer__write__Size_5, mercury__bit_buffer__write__NewPos_11, mercury__bit_buffer__write__OldBM_6);
    }
#line 385 "bit_buffer.write.m"
    {
#line 385 "bit_buffer.write.m"
      mercury__bit_buffer__write__NewBM_12 = mercury__bitmap__f_98_105_116_115_32_58_61_4_f_0((MR_Integer) 0, mercury__bit_buffer__write__NewPos_11, mercury__bit_buffer__write__NewBM0_9, mercury__bit_buffer__write__V_21_21);
    }
#line 386 "bit_buffer.write.m"
    {
#line 386 "bit_buffer.write.m"
      mercury__bit_buffer__write__FilledBM_13 = mercury__bitmap__shrink_without_copying_2_f_0(mercury__bit_buffer__write__OldBM_6, mercury__bit_buffer__write__Size_5);
    }
#line 129 "bit_buffer.opt"
{
#define MR_PROC_LABEL mercury__bit_buffer__write__store_full_buffer_2_p_0

	ML_BitBufferPtr Buffer;
	MR_Word FilledBMs;

	Buffer = (ML_BitBufferPtr) mercury__bit_buffer__write__STATE_VARIABLE_Buffer_0_15 ;
		{
#line 129 "bit_buffer.opt"

    FilledBMs = Buffer->ML_bit_buffer_filled_bitmaps;

#line 1558 "bit_buffer.write.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bit_buffer__write__V_23_23  = FilledBMs;
#line 129 "bit_buffer.opt"
}
#line 388 "bit_buffer.write.m"
    {
#line 388 "bit_buffer.write.m"
      mercury__bit_buffer__write__FilledBMs_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 388 "bit_buffer.write.m"
      MR_hl_field(MR_mktag(1), mercury__bit_buffer__write__FilledBMs_14, 0) = ((MR_Box) (mercury__bit_buffer__write__FilledBM_13));
#line 388 "bit_buffer.write.m"
      MR_hl_field(MR_mktag(1), mercury__bit_buffer__write__FilledBMs_14, 1) = ((MR_Box) (mercury__bit_buffer__write__V_23_23));
#line 388 "bit_buffer.write.m"
    }
#line 391 "bit_buffer.write.m"
    mercury__bit_buffer__write__V_24_24 = mercury__bit_buffer__write__State_7;
#line 135 "bit_buffer.opt"
{
#define MR_PROC_LABEL mercury__bit_buffer__write__store_full_buffer_2_p_0

	MR_BitmapPtr BM;
	MR_Integer Pos;
	MR_Integer Size;
	MR_Word State;
	MR_Word FilledBMs;
	ML_BitBufferPtr Buffer0;
	ML_BitBufferPtr Buffer;

	BM = (MR_BitmapPtr) mercury__bit_buffer__write__NewBM_12 ;
	Pos =  mercury__bit_buffer__write__NewPos_11 ;
	Size =  mercury__bit_buffer__write__NewSize_8 ;
	State = (MR_Word) mercury__bit_buffer__write__V_24_24 ;
	FilledBMs =  mercury__bit_buffer__write__FilledBMs_14 ;
	Buffer0 = (ML_BitBufferPtr) mercury__bit_buffer__write__STATE_VARIABLE_Buffer_0_15 ;
		{
#line 135 "bit_buffer.opt"

    Buffer = Buffer0;
    Buffer->ML_bit_buffer_bitmap = BM;
    Buffer->ML_bit_buffer_pos = Pos;
    Buffer->ML_bit_buffer_size = Size;
    Buffer->ML_bit_buffer_state = State;
    Buffer->ML_bit_buffer_filled_bitmaps = FilledBMs;

#line 1605 "bit_buffer.write.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__bit_buffer__write__STATE_VARIABLE_Buffer_16  = (MR_Box) Buffer;
#line 135 "bit_buffer.opt"
}
#line 366 "bit_buffer.write.m"
  }
#line 362 "bit_buffer.write.m"
}

#line 322 "bit_buffer.write.m"
void MR_CALL 
mercury__bit_buffer__write__flush_chunk_to_stream_2_p_0(
#line 322 "bit_buffer.write.m"
  MR_Word mercury__bit_buffer__write__TypeClassInfo_for_writer_28,
#line 322 "bit_buffer.write.m"
  MR_Box mercury__bit_buffer__write__STATE_VARIABLE_Buffer_0_13,
#line 322 "bit_buffer.write.m"
  MR_Box * mercury__bit_buffer__write__STATE_VARIABLE_Buffer_14)
#line 322 "bit_buffer.write.m"
{
#line 326 "bit_buffer.write.m"
  {
#line 326 "bit_buffer.write.m"
    MR_bool mercury__bit_buffer__write__succeeded;
#line 326 "bit_buffer.write.m"
    MR_Integer mercury__bit_buffer__write__Pos_4;
#line 326 "bit_buffer.write.m"
    MR_Integer mercury__bit_buffer__write__Size_5;
#line 326 "bit_buffer.write.m"
    MR_Integer mercury__bit_buffer__write__NumBitsToWrite0_6;
#line 326 "bit_buffer.write.m"
    MR_Integer mercury__bit_buffer__write__NumBytes_7;
#line 114 "bit_buffer.opt"
    MR_Word mercury__bit_buffer__write__TypeInfo_30_66;
#line 114 "bit_buffer.opt"
    MR_Word mercury__bit_buffer__write__TypeInfo_32_67;
#line 114 "bit_buffer.opt"
    MR_Word mercury__bit_buffer__write__TypeInfo_33_68;
#line 117 "bit_buffer.opt"
    MR_Word mercury__bit_buffer__write__TypeInfo_34_69;
#line 117 "bit_buffer.opt"
    MR_Word mercury__bit_buffer__write__TypeInfo_35_70;
#line 117 "bit_buffer.opt"
    MR_Word mercury__bit_buffer__write__TypeInfo_33_71;

#line 114 "bit_buffer.opt"
{
#define MR_PROC_LABEL mercury__bit_buffer__write__flush_chunk_to_stream_2_p_0

	ML_BitBufferPtr Buffer;
	MR_Integer Pos;

	Buffer = (ML_BitBufferPtr) mercury__bit_buffer__write__STATE_VARIABLE_Buffer_0_13 ;
		{
#line 114 "bit_buffer.opt"

    Pos = Buffer->ML_bit_buffer_pos;

#line 1666 "bit_buffer.write.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bit_buffer__write__Pos_4  = Pos;
#line 114 "bit_buffer.opt"
}
#line 117 "bit_buffer.opt"
{
#define MR_PROC_LABEL mercury__bit_buffer__write__flush_chunk_to_stream_2_p_0

	ML_BitBufferPtr Buffer;
	MR_Integer Size;

	Buffer = (ML_BitBufferPtr) mercury__bit_buffer__write__STATE_VARIABLE_Buffer_0_13 ;
		{
#line 117 "bit_buffer.opt"

    Size = Buffer->ML_bit_buffer_size;

#line 1686 "bit_buffer.write.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bit_buffer__write__Size_5  = Size;
#line 117 "bit_buffer.opt"
}
#line 85 "int.opt"
    mercury__bit_buffer__write__succeeded = (mercury__bit_buffer__write__Size_5 < mercury__bit_buffer__write__Pos_4);
#line 88 "int.opt"
    if (mercury__bit_buffer__write__succeeded)
#line 87 "int.opt"
      mercury__bit_buffer__write__NumBitsToWrite0_6 = mercury__bit_buffer__write__Size_5;
#line 88 "int.opt"
    else
#line 89 "int.opt"
      mercury__bit_buffer__write__NumBitsToWrite0_6 = mercury__bit_buffer__write__Pos_4;
#line 333 "bit_buffer.write.m"
    mercury__bit_buffer__write__NumBytes_7 = (mercury__bit_buffer__write__NumBitsToWrite0_6 / (MR_Integer) 8);
#line 334 "bit_buffer.write.m"
    mercury__bit_buffer__write__succeeded = (mercury__bit_buffer__write__NumBytes_7 == (MR_Integer) 0);
#line 334 "bit_buffer.write.m"
    mercury__bit_buffer__write__succeeded = !(mercury__bit_buffer__write__succeeded);
#line 355 "bit_buffer.write.m"
    if (mercury__bit_buffer__write__succeeded)
#line 335 "bit_buffer.write.m"
      {
#line 335 "bit_buffer.write.m"
        MR_Integer mercury__bit_buffer__write__NumBitsToWrite_8 = (mercury__bit_buffer__write__NumBytes_7 * (MR_Integer) 8);
#line 335 "bit_buffer.write.m"
        MR_Box mercury__bit_buffer__write__NewState_9;
#line 335 "bit_buffer.write.m"
        MR_Integer mercury__bit_buffer__write__Remain_10;
#line 335 "bit_buffer.write.m"
        MR_Box mercury__bit_buffer__write__NewBM_12;
#line 335 "bit_buffer.write.m"
        MR_Box mercury__bit_buffer__write__V_17_17;
#line 335 "bit_buffer.write.m"
        MR_Word mercury__bit_buffer__write__V_18_18;
#line 335 "bit_buffer.write.m"
        MR_Box mercury__bit_buffer__write__V_19_19;
#line 335 "bit_buffer.write.m"
        MR_Box mercury__bit_buffer__write__V_20_20;
#line 335 "bit_buffer.write.m"
        MR_Box mercury__bit_buffer__write__V_22_22;
#line 335 "bit_buffer.write.m"
        MR_Integer mercury__bit_buffer__write__V_25_25;
#line 335 "bit_buffer.write.m"
        MR_Word mercury__bit_buffer__write__V_26_26;
#line 335 "bit_buffer.write.m"
        MR_Integer mercury__bit_buffer__write__V_10_63;
#line 123 "bit_buffer.opt"
        MR_Word mercury__bit_buffer__write__TypeInfo_36_72;
#line 123 "bit_buffer.opt"
        MR_Word mercury__bit_buffer__write__TypeInfo_37_73;
#line 123 "bit_buffer.opt"
        MR_Word mercury__bit_buffer__write__TypeInfo_33_74;
#line 111 "bit_buffer.opt"
        MR_Word mercury__bit_buffer__write__TypeInfo_38_75;
#line 111 "bit_buffer.opt"
        MR_Word mercury__bit_buffer__write__TypeInfo_39_76;
#line 111 "bit_buffer.opt"
        MR_Word mercury__bit_buffer__write__TypeInfo_33_77;
#line 126 "bit_buffer.opt"
        MR_Word mercury__bit_buffer__write__TypeInfo_40_78;
#line 126 "bit_buffer.opt"
        MR_Word mercury__bit_buffer__write__TypeInfo_41_79;
#line 126 "bit_buffer.opt"
        MR_Word mercury__bit_buffer__write__TypeInfo_33_80;
#line 1755 "bit_buffer.write.c"
        void MR_CALL (* mercury__bit_buffer__write__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 117 "bit_buffer.opt"
        MR_Word mercury__bit_buffer__write__TypeInfo_46_87;
#line 117 "bit_buffer.opt"
        MR_Word mercury__bit_buffer__write__TypeInfo_47_88;
#line 117 "bit_buffer.opt"
        MR_Word mercury__bit_buffer__write__TypeInfo_33_89;
#line 129 "bit_buffer.opt"
        MR_Word mercury__bit_buffer__write__TypeInfo_48_90;
#line 129 "bit_buffer.opt"
        MR_Word mercury__bit_buffer__write__TypeInfo_49_91;
#line 129 "bit_buffer.opt"
        MR_Word mercury__bit_buffer__write__TypeInfo_33_92;
#line 135 "bit_buffer.opt"
        MR_Word mercury__bit_buffer__write__TypeInfo_50_93;
#line 135 "bit_buffer.opt"
        MR_Word mercury__bit_buffer__write__TypeInfo_51_94;
#line 135 "bit_buffer.opt"
        MR_Word mercury__bit_buffer__write__TypeInfo_33_95;

#line 123 "bit_buffer.opt"
{
#define MR_PROC_LABEL mercury__bit_buffer__write__flush_chunk_to_stream_2_p_0

	ML_BitBufferPtr Buffer;
	MR_Word Stream;

	Buffer = (ML_BitBufferPtr) mercury__bit_buffer__write__STATE_VARIABLE_Buffer_0_13 ;
		{
#line 123 "bit_buffer.opt"

    Stream = Buffer->ML_bit_buffer_stream;

#line 1789 "bit_buffer.write.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bit_buffer__write__V_17_17  = (MR_Box) Stream;
#line 123 "bit_buffer.opt"
}
#line 111 "bit_buffer.opt"
{
#define MR_PROC_LABEL mercury__bit_buffer__write__flush_chunk_to_stream_2_p_0

	ML_BitBufferPtr Buffer;
	MR_BitmapPtr BM;

	Buffer = (ML_BitBufferPtr) mercury__bit_buffer__write__STATE_VARIABLE_Buffer_0_13 ;
		{
#line 111 "bit_buffer.opt"

    BM = Buffer->ML_bit_buffer_bitmap;

#line 1809 "bit_buffer.write.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bit_buffer__write__V_20_20  = (MR_Box) BM;
#line 111 "bit_buffer.opt"
}
#line 160 "bitmap.opt"
        mercury__bit_buffer__write__V_10_63 = (mercury__bit_buffer__write__NumBytes_7 * (MR_Integer) 8);
#line 157 "bitmap.opt"
        {
#line 157 "bitmap.opt"
          mercury__bit_buffer__write__V_18_18 = mercury__bitmap__slice_3_f_0(mercury__bit_buffer__write__V_20_20, (MR_Integer) 0, mercury__bit_buffer__write__V_10_63);
        }
#line 126 "bit_buffer.opt"
{
#define MR_PROC_LABEL mercury__bit_buffer__write__flush_chunk_to_stream_2_p_0

	ML_BitBufferPtr Buffer;
	MR_Word State;

	Buffer = (ML_BitBufferPtr) mercury__bit_buffer__write__STATE_VARIABLE_Buffer_0_13 ;
		{
#line 126 "bit_buffer.opt"

    State = Buffer->ML_bit_buffer_state;

#line 1836 "bit_buffer.write.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bit_buffer__write__V_22_22  = (MR_Box) State;
#line 126 "bit_buffer.opt"
}
#line 338 "bit_buffer.write.m"
        mercury__bit_buffer__write__V_19_19 = mercury__bit_buffer__write__V_22_22;
#line 1845 "bit_buffer.write.c"
        mercury__bit_buffer__write__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__bit_buffer__write__TypeClassInfo_for_writer_28, (MR_Integer) 0)), (MR_Integer) 5)));
#line 1847 "bit_buffer.write.c"
        {
#line 1849 "bit_buffer.write.c"
          mercury__bit_buffer__write__func_0(((MR_Box) mercury__bit_buffer__write__TypeClassInfo_for_writer_28), mercury__bit_buffer__write__V_17_17, ((MR_Box) (mercury__bit_buffer__write__V_18_18)), mercury__bit_buffer__write__V_19_19, &mercury__bit_buffer__write__NewState_9);
        }
#line 339 "bit_buffer.write.m"
        mercury__bit_buffer__write__Remain_10 = (mercury__bit_buffer__write__Pos_4 - mercury__bit_buffer__write__NumBitsToWrite_8);
#line 340 "bit_buffer.write.m"
        mercury__bit_buffer__write__succeeded = (mercury__bit_buffer__write__Remain_10 == (MR_Integer) 0);
#line 340 "bit_buffer.write.m"
        mercury__bit_buffer__write__succeeded = !(mercury__bit_buffer__write__succeeded);
#line 350 "bit_buffer.write.m"
        if (mercury__bit_buffer__write__succeeded)
#line 347 "bit_buffer.write.m"
          {
#line 347 "bit_buffer.write.m"
            MR_Box mercury__bit_buffer__write__NewBM0_11;
#line 347 "bit_buffer.write.m"
            MR_Integer mercury__bit_buffer__write__V_23_23;
#line 111 "bit_buffer.opt"
            MR_Word mercury__bit_buffer__write__TypeInfo_42_81;
#line 111 "bit_buffer.opt"
            MR_Word mercury__bit_buffer__write__TypeInfo_43_82;
#line 111 "bit_buffer.opt"
            MR_Word mercury__bit_buffer__write__TypeInfo_33_83;

#line 111 "bit_buffer.opt"
{
#define MR_PROC_LABEL mercury__bit_buffer__write__flush_chunk_to_stream_2_p_0

	ML_BitBufferPtr Buffer;
	MR_BitmapPtr BM;

	Buffer = (ML_BitBufferPtr) mercury__bit_buffer__write__STATE_VARIABLE_Buffer_0_13 ;
		{
#line 111 "bit_buffer.opt"

    BM = Buffer->ML_bit_buffer_bitmap;

#line 1886 "bit_buffer.write.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bit_buffer__write__NewBM0_11  = (MR_Box) BM;
#line 111 "bit_buffer.opt"
}
#line 348 "bit_buffer.write.m"
            {
#line 348 "bit_buffer.write.m"
              mercury__bit_buffer__write__V_23_23 = mercury__bitmap__bits_3_f_0(mercury__bit_buffer__write__NumBitsToWrite_8, mercury__bit_buffer__write__Remain_10, mercury__bit_buffer__write__NewBM0_11);
            }
#line 348 "bit_buffer.write.m"
            {
#line 348 "bit_buffer.write.m"
              mercury__bit_buffer__write__NewBM_12 = mercury__bitmap__f_98_105_116_115_32_58_61_4_f_0((MR_Integer) 0, mercury__bit_buffer__write__Remain_10, mercury__bit_buffer__write__NewBM0_11, mercury__bit_buffer__write__V_23_23);
            }
#line 347 "bit_buffer.write.m"
          }
#line 350 "bit_buffer.write.m"
        else
#line 111 "bit_buffer.opt"
          {
#line 111 "bit_buffer.opt"
            MR_Word mercury__bit_buffer__write__TypeInfo_44_84;
#line 111 "bit_buffer.opt"
            MR_Word mercury__bit_buffer__write__TypeInfo_45_85;
#line 111 "bit_buffer.opt"
            MR_Word mercury__bit_buffer__write__TypeInfo_33_86;

#line 111 "bit_buffer.opt"
{
#define MR_PROC_LABEL mercury__bit_buffer__write__flush_chunk_to_stream_2_p_0

	ML_BitBufferPtr Buffer;
	MR_BitmapPtr BM;

	Buffer = (ML_BitBufferPtr) mercury__bit_buffer__write__STATE_VARIABLE_Buffer_0_13 ;
		{
#line 111 "bit_buffer.opt"

    BM = Buffer->ML_bit_buffer_bitmap;

#line 1929 "bit_buffer.write.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bit_buffer__write__NewBM_12  = (MR_Box) BM;
#line 111 "bit_buffer.opt"
}
#line 111 "bit_buffer.opt"
          }
#line 117 "bit_buffer.opt"
{
#define MR_PROC_LABEL mercury__bit_buffer__write__flush_chunk_to_stream_2_p_0

	ML_BitBufferPtr Buffer;
	MR_Integer Size;

	Buffer = (ML_BitBufferPtr) mercury__bit_buffer__write__STATE_VARIABLE_Buffer_0_13 ;
		{
#line 117 "bit_buffer.opt"

    Size = Buffer->ML_bit_buffer_size;

#line 1951 "bit_buffer.write.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bit_buffer__write__V_25_25  = Size;
#line 117 "bit_buffer.opt"
}
#line 129 "bit_buffer.opt"
{
#define MR_PROC_LABEL mercury__bit_buffer__write__flush_chunk_to_stream_2_p_0

	ML_BitBufferPtr Buffer;
	MR_Word FilledBMs;

	Buffer = (ML_BitBufferPtr) mercury__bit_buffer__write__STATE_VARIABLE_Buffer_0_13 ;
		{
#line 129 "bit_buffer.opt"

    FilledBMs = Buffer->ML_bit_buffer_filled_bitmaps;

#line 1971 "bit_buffer.write.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bit_buffer__write__V_26_26  = FilledBMs;
#line 129 "bit_buffer.opt"
}
#line 135 "bit_buffer.opt"
{
#define MR_PROC_LABEL mercury__bit_buffer__write__flush_chunk_to_stream_2_p_0

	MR_BitmapPtr BM;
	MR_Integer Pos;
	MR_Integer Size;
	MR_Word State;
	MR_Word FilledBMs;
	ML_BitBufferPtr Buffer0;
	ML_BitBufferPtr Buffer;

	BM = (MR_BitmapPtr) mercury__bit_buffer__write__NewBM_12 ;
	Pos =  mercury__bit_buffer__write__Remain_10 ;
	Size =  mercury__bit_buffer__write__V_25_25 ;
	State = (MR_Word) mercury__bit_buffer__write__NewState_9 ;
	FilledBMs =  mercury__bit_buffer__write__V_26_26 ;
	Buffer0 = (ML_BitBufferPtr) mercury__bit_buffer__write__STATE_VARIABLE_Buffer_0_13 ;
		{
#line 135 "bit_buffer.opt"

    Buffer = Buffer0;
    Buffer->ML_bit_buffer_bitmap = BM;
    Buffer->ML_bit_buffer_pos = Pos;
    Buffer->ML_bit_buffer_size = Size;
    Buffer->ML_bit_buffer_state = State;
    Buffer->ML_bit_buffer_filled_bitmaps = FilledBMs;

#line 2006 "bit_buffer.write.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__bit_buffer__write__STATE_VARIABLE_Buffer_14  = (MR_Box) Buffer;
#line 135 "bit_buffer.opt"
}
#line 335 "bit_buffer.write.m"
      }
#line 355 "bit_buffer.write.m"
    else
#line 355 "bit_buffer.write.m"
      *mercury__bit_buffer__write__STATE_VARIABLE_Buffer_14 = mercury__bit_buffer__write__STATE_VARIABLE_Buffer_0_13;
#line 326 "bit_buffer.write.m"
  }
#line 322 "bit_buffer.write.m"
}

#line 310 "bit_buffer.write.m"
static void MR_CALL 
mercury__bit_buffer__write__flush_all_to_stream_2_p_0(
#line 310 "bit_buffer.write.m"
  MR_Word mercury__bit_buffer__write__TypeClassInfo_for_writer_11,
#line 310 "bit_buffer.write.m"
  MR_Box mercury__bit_buffer__write__STATE_VARIABLE_Buffer_0_4,
#line 310 "bit_buffer.write.m"
  MR_Box * mercury__bit_buffer__write__STATE_VARIABLE_Buffer_5)
#line 310 "bit_buffer.write.m"
{
#line 318 "bit_buffer.write.m"
  while (MR_TRUE)
#line 318 "bit_buffer.write.m"
    {
#line 318 "bit_buffer.write.m"
      /* tailcall optimized into a loop */
#line 318 "bit_buffer.write.m"
      {
#line 318 "bit_buffer.write.m"
        MR_bool mercury__bit_buffer__write__succeeded;
#line 315 "bit_buffer.write.m"
        MR_Word mercury__bit_buffer__write__TypeInfo_13_13;
#line 315 "bit_buffer.write.m"
        MR_Word mercury__bit_buffer__write__TypeInfo_15_15;
#line 315 "bit_buffer.write.m"
        MR_Integer mercury__bit_buffer__write__V_6_6;
#line 315 "bit_buffer.write.m"
        MR_Word mercury__bit_buffer__write__V_8_8;

#line 133 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__bit_buffer__write__flush_all_to_stream_2_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__bit_buffer__write__TypeClassInfo_for_writer_11 ;
	Index =  (MR_Integer) 2 ;
		{
#line 133 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 2069 "bit_buffer.write.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bit_buffer__write__TypeInfo_13_13  = TypeInfo;
#line 133 "private_builtin.opt"
}
#line 133 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__bit_buffer__write__flush_all_to_stream_2_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__bit_buffer__write__TypeClassInfo_for_writer_11 ;
	Index =  (MR_Integer) 4 ;
		{
#line 133 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 2091 "bit_buffer.write.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bit_buffer__write__TypeInfo_15_15  = TypeInfo;
#line 133 "private_builtin.opt"
}
#line 315 "bit_buffer.write.m"
        mercury__bit_buffer__write__V_8_8 = (MR_Word) mercury__bit_buffer__write__STATE_VARIABLE_Buffer_0_4;
#line 315 "bit_buffer.write.m"
        {
#line 315 "bit_buffer.write.m"
          mercury__bit_buffer__write__V_6_6 = mercury__bit_buffer__write__num_buffered_bits_1_f_0(mercury__bit_buffer__write__TypeInfo_13_13, mercury__bit_buffer__write__TypeInfo_15_15, mercury__bit_buffer__write__V_8_8);
        }
#line 315 "bit_buffer.write.m"
        mercury__bit_buffer__write__succeeded = (mercury__bit_buffer__write__V_6_6 >= (MR_Integer) 8);
#line 318 "bit_buffer.write.m"
        if (mercury__bit_buffer__write__succeeded)
#line 316 "bit_buffer.write.m"
          {
#line 316 "bit_buffer.write.m"
            MR_Box mercury__bit_buffer__write__STATE_VARIABLE_Buffer_9_9;

#line 316 "bit_buffer.write.m"
            {
#line 316 "bit_buffer.write.m"
              mercury__bit_buffer__write__flush_chunk_to_stream_2_p_0(mercury__bit_buffer__write__TypeClassInfo_for_writer_11, mercury__bit_buffer__write__STATE_VARIABLE_Buffer_0_4, &mercury__bit_buffer__write__STATE_VARIABLE_Buffer_9_9);
            }
#line 317 "bit_buffer.write.m"
            /* direct tailcall eliminated */
#line 317 "bit_buffer.write.m"
            {
#line 317 "bit_buffer.write.m"
              MR_Box mercury__bit_buffer__write__STATE_VARIABLE_Buffer_0__tmp_copy_4 = mercury__bit_buffer__write__STATE_VARIABLE_Buffer_9_9;

#line 317 "bit_buffer.write.m"
              mercury__bit_buffer__write__STATE_VARIABLE_Buffer_0_4 = mercury__bit_buffer__write__STATE_VARIABLE_Buffer_0__tmp_copy_4;
#line 317 "bit_buffer.write.m"
            }
#line 317 "bit_buffer.write.m"
            continue;
#line 316 "bit_buffer.write.m"
          }
#line 318 "bit_buffer.write.m"
        else
#line 318 "bit_buffer.write.m"
          *mercury__bit_buffer__write__STATE_VARIABLE_Buffer_5 = mercury__bit_buffer__write__STATE_VARIABLE_Buffer_0_4;
#line 318 "bit_buffer.write.m"
      }
#line 318 "bit_buffer.write.m"
      break;
#line 318 "bit_buffer.write.m"
    }
#line 310 "bit_buffer.write.m"
}

#line 287 "bit_buffer.write.m"
void MR_CALL 
mercury__bit_buffer__write__make_room_2_p_0(
#line 287 "bit_buffer.write.m"
  MR_Word mercury__bit_buffer__write__TypeClassInfo_for_writer_9,
#line 287 "bit_buffer.write.m"
  MR_Box mercury__bit_buffer__write__STATE_VARIABLE_Buffer_0_5,
#line 287 "bit_buffer.write.m"
  MR_Box * mercury__bit_buffer__write__STATE_VARIABLE_Buffer_6)
#line 287 "bit_buffer.write.m"
{
#line 291 "bit_buffer.write.m"
  {
#line 291 "bit_buffer.write.m"
    MR_bool mercury__bit_buffer__write__succeeded;
#line 291 "bit_buffer.write.m"
    MR_Word mercury__bit_buffer__write__UseStream_4;
#line 120 "bit_buffer.opt"
    MR_Word mercury__bit_buffer__write__TypeInfo_11_15;
#line 120 "bit_buffer.opt"
    MR_Word mercury__bit_buffer__write__TypeInfo_13_16;
#line 120 "bit_buffer.opt"
    MR_Word mercury__bit_buffer__write__TypeInfo_14_17;

#line 120 "bit_buffer.opt"
{
#define MR_PROC_LABEL mercury__bit_buffer__write__make_room_2_p_0

	ML_BitBufferPtr Buffer;
	MR_Word UseStream;

	Buffer = (ML_BitBufferPtr) mercury__bit_buffer__write__STATE_VARIABLE_Buffer_0_5 ;
		{
#line 120 "bit_buffer.opt"

    UseStream = Buffer->ML_bit_buffer_use_stream;

#line 2184 "bit_buffer.write.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bit_buffer__write__UseStream_4  = UseStream;
#line 120 "bit_buffer.opt"
}
#line 296 "bit_buffer.write.m"
#line 296 "bit_buffer.write.m"
    switch (mercury__bit_buffer__write__UseStream_4) {
#line 296 "bit_buffer.write.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 296 "bit_buffer.write.m"
      case (MR_Integer) 0:
#line 298 "bit_buffer.write.m"
        {
#line 298 "bit_buffer.write.m"
          mercury__bit_buffer__write__store_full_buffer_2_p_0(mercury__bit_buffer__write__TypeClassInfo_for_writer_9, mercury__bit_buffer__write__STATE_VARIABLE_Buffer_0_5, mercury__bit_buffer__write__STATE_VARIABLE_Buffer_6);
#line 298 "bit_buffer.write.m"
          return;
        }
#line 296 "bit_buffer.write.m"
        break;
#line 296 "bit_buffer.write.m"
      case (MR_Integer) 1:
#line 295 "bit_buffer.write.m"
        {
#line 295 "bit_buffer.write.m"
          mercury__bit_buffer__write__flush_chunk_to_stream_2_p_0(mercury__bit_buffer__write__TypeClassInfo_for_writer_9, mercury__bit_buffer__write__STATE_VARIABLE_Buffer_0_5, mercury__bit_buffer__write__STATE_VARIABLE_Buffer_6);
#line 295 "bit_buffer.write.m"
          return;
        }
#line 296 "bit_buffer.write.m"
        break;
#line 296 "bit_buffer.write.m"
    }
#line 291 "bit_buffer.write.m"
  }
#line 287 "bit_buffer.write.m"
}

#line 276 "bit_buffer.write.m"
void MR_CALL 
mercury__bit_buffer__write__maybe_make_room_2_p_0(
#line 276 "bit_buffer.write.m"
  MR_Word mercury__bit_buffer__write__TypeClassInfo_for_writer_9,
#line 276 "bit_buffer.write.m"
  MR_Box mercury__bit_buffer__write__STATE_VARIABLE_Buffer_0_4,
#line 276 "bit_buffer.write.m"
  MR_Box * mercury__bit_buffer__write__STATE_VARIABLE_Buffer_5)
#line 276 "bit_buffer.write.m"
{
#line 283 "bit_buffer.write.m"
  {
#line 283 "bit_buffer.write.m"
    MR_bool mercury__bit_buffer__write__succeeded;
#line 281 "bit_buffer.write.m"
    MR_Integer mercury__bit_buffer__write__V_6_6;
#line 281 "bit_buffer.write.m"
    MR_Integer mercury__bit_buffer__write__V_7_7;
#line 114 "bit_buffer.opt"
    MR_Word mercury__bit_buffer__write__TypeInfo_11_17;
#line 114 "bit_buffer.opt"
    MR_Word mercury__bit_buffer__write__TypeInfo_13_18;
#line 114 "bit_buffer.opt"
    MR_Word mercury__bit_buffer__write__TypeInfo_14_19;
#line 117 "bit_buffer.opt"
    MR_Word mercury__bit_buffer__write__TypeInfo_15_20;
#line 117 "bit_buffer.opt"
    MR_Word mercury__bit_buffer__write__TypeInfo_16_21;
#line 117 "bit_buffer.opt"
    MR_Word mercury__bit_buffer__write__TypeInfo_14_22;

#line 114 "bit_buffer.opt"
{
#define MR_PROC_LABEL mercury__bit_buffer__write__maybe_make_room_2_p_0

	ML_BitBufferPtr Buffer;
	MR_Integer Pos;

	Buffer = (ML_BitBufferPtr) mercury__bit_buffer__write__STATE_VARIABLE_Buffer_0_4 ;
		{
#line 114 "bit_buffer.opt"

    Pos = Buffer->ML_bit_buffer_pos;

#line 2270 "bit_buffer.write.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bit_buffer__write__V_6_6  = Pos;
#line 114 "bit_buffer.opt"
}
#line 117 "bit_buffer.opt"
{
#define MR_PROC_LABEL mercury__bit_buffer__write__maybe_make_room_2_p_0

	ML_BitBufferPtr Buffer;
	MR_Integer Size;

	Buffer = (ML_BitBufferPtr) mercury__bit_buffer__write__STATE_VARIABLE_Buffer_0_4 ;
		{
#line 117 "bit_buffer.opt"

    Size = Buffer->ML_bit_buffer_size;

#line 2290 "bit_buffer.write.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bit_buffer__write__V_7_7  = Size;
#line 117 "bit_buffer.opt"
}
#line 281 "bit_buffer.write.m"
    mercury__bit_buffer__write__succeeded = (mercury__bit_buffer__write__V_6_6 >= mercury__bit_buffer__write__V_7_7);
#line 283 "bit_buffer.write.m"
    if (mercury__bit_buffer__write__succeeded)
#line 282 "bit_buffer.write.m"
      {
#line 282 "bit_buffer.write.m"
        mercury__bit_buffer__write__make_room_2_p_0(mercury__bit_buffer__write__TypeClassInfo_for_writer_9, mercury__bit_buffer__write__STATE_VARIABLE_Buffer_0_4, mercury__bit_buffer__write__STATE_VARIABLE_Buffer_5);
#line 282 "bit_buffer.write.m"
        return;
      }
#line 283 "bit_buffer.write.m"
    else
#line 283 "bit_buffer.write.m"
      *mercury__bit_buffer__write__STATE_VARIABLE_Buffer_5 = mercury__bit_buffer__write__STATE_VARIABLE_Buffer_0_4;
#line 283 "bit_buffer.write.m"
  }
#line 276 "bit_buffer.write.m"
}

#line 264 "bit_buffer.write.m"
static void MR_CALL 
mercury__bit_buffer__write__copy_out_bitmap_5_p_0(
#line 264 "bit_buffer.write.m"
  MR_Box mercury__bit_buffer__write__FilledBM_6,
#line 264 "bit_buffer.write.m"
  MR_Integer mercury__bit_buffer__write__STATE_VARIABLE_Index_0_10,
#line 264 "bit_buffer.write.m"
  MR_Integer * mercury__bit_buffer__write__STATE_VARIABLE_Index_11,
#line 264 "bit_buffer.write.m"
  MR_Box mercury__bit_buffer__write__STATE_VARIABLE_BM_0_12,
#line 264 "bit_buffer.write.m"
  MR_Box * mercury__bit_buffer__write__STATE_VARIABLE_BM_13)
#line 264 "bit_buffer.write.m"
{
#line 267 "bit_buffer.write.m"
  {
#line 267 "bit_buffer.write.m"
    MR_bool mercury__bit_buffer__write__succeeded;
#line 267 "bit_buffer.write.m"
    MR_Integer mercury__bit_buffer__write__Size_9;

#line 114 "bitmap.opt"
{
#define MR_PROC_LABEL mercury__bit_buffer__write__copy_out_bitmap_5_p_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr) mercury__bit_buffer__write__FilledBM_6 ;
		{
#line 114 "bitmap.opt"

    NumBits = BM->num_bits;

#line 2352 "bit_buffer.write.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bit_buffer__write__Size_9  = NumBits;
#line 114 "bitmap.opt"
}
#line 269 "bit_buffer.write.m"
    mercury__bit_buffer__write__succeeded = (mercury__bit_buffer__write__Size_9 > (MR_Integer) 0);
#line 272 "bit_buffer.write.m"
    if (mercury__bit_buffer__write__succeeded)
#line 270 "bit_buffer.write.m"
      {
#line 270 "bit_buffer.write.m"
        *mercury__bit_buffer__write__STATE_VARIABLE_Index_11 = (mercury__bit_buffer__write__STATE_VARIABLE_Index_0_10 - mercury__bit_buffer__write__Size_9);
#line 186 "bitmap.opt"
        {
#line 186 "bitmap.opt"
          *mercury__bit_buffer__write__STATE_VARIABLE_BM_13 = mercury__bitmap__copy_bits_6_f_0((MR_Integer) 0, mercury__bit_buffer__write__FilledBM_6, (MR_Integer) 0, mercury__bit_buffer__write__STATE_VARIABLE_BM_0_12, *mercury__bit_buffer__write__STATE_VARIABLE_Index_11, mercury__bit_buffer__write__Size_9);
        }
#line 270 "bit_buffer.write.m"
      }
#line 272 "bit_buffer.write.m"
    else
#line 273 "bit_buffer.write.m"
      {
#line 273 "bit_buffer.write.m"
        *mercury__bit_buffer__write__STATE_VARIABLE_BM_13 = mercury__bit_buffer__write__STATE_VARIABLE_BM_0_12;
#line 273 "bit_buffer.write.m"
        *mercury__bit_buffer__write__STATE_VARIABLE_Index_11 = mercury__bit_buffer__write__STATE_VARIABLE_Index_0_10;
#line 273 "bit_buffer.write.m"
      }
#line 267 "bit_buffer.write.m"
  }
#line 264 "bit_buffer.write.m"
}

#line 227 "bit_buffer.write.m"
void MR_CALL 
mercury__bit_buffer__write__put_bitmap_2_5_p_0(
#line 227 "bit_buffer.write.m"
  MR_Word mercury__bit_buffer__write__TypeClassInfo_for_writer_24,
#line 227 "bit_buffer.write.m"
  MR_Box mercury__bit_buffer__write__BM_6,
#line 227 "bit_buffer.write.m"
  MR_Integer mercury__bit_buffer__write__Index_7,
#line 227 "bit_buffer.write.m"
  MR_Integer mercury__bit_buffer__write__NumBits_8,
#line 227 "bit_buffer.write.m"
  MR_Box mercury__bit_buffer__write__STATE_VARIABLE_Buffer_0_16,
#line 227 "bit_buffer.write.m"
  MR_Box * mercury__bit_buffer__write__STATE_VARIABLE_Buffer_17)
#line 227 "bit_buffer.write.m"
{
#line 233 "bit_buffer.write.m"
  while (MR_TRUE)
#line 233 "bit_buffer.write.m"
    {
#line 233 "bit_buffer.write.m"
      /* tailcall optimized into a loop */
#line 233 "bit_buffer.write.m"
      {
#line 233 "bit_buffer.write.m"
        MR_bool mercury__bit_buffer__write__succeeded = (mercury__bit_buffer__write__NumBits_8 == (MR_Integer) 0);

#line 233 "bit_buffer.write.m"
        if (mercury__bit_buffer__write__succeeded)
#line 233 "bit_buffer.write.m"
          *mercury__bit_buffer__write__STATE_VARIABLE_Buffer_17 = mercury__bit_buffer__write__STATE_VARIABLE_Buffer_0_16;
#line 233 "bit_buffer.write.m"
        else
#line 234 "bit_buffer.write.m"
          {
#line 234 "bit_buffer.write.m"
            MR_Box mercury__bit_buffer__write__BufferBM0_10;
#line 234 "bit_buffer.write.m"
            MR_Integer mercury__bit_buffer__write__Pos_11;
#line 234 "bit_buffer.write.m"
            MR_Integer mercury__bit_buffer__write__Size_12;
#line 234 "bit_buffer.write.m"
            MR_Integer mercury__bit_buffer__write__Remain_13;
#line 234 "bit_buffer.write.m"
            MR_Integer mercury__bit_buffer__write__NumBitsToWrite_14;
#line 234 "bit_buffer.write.m"
            MR_Box mercury__bit_buffer__write__BufferBM_15;
#line 234 "bit_buffer.write.m"
            MR_Integer mercury__bit_buffer__write__V_18_18;
#line 234 "bit_buffer.write.m"
            MR_Box mercury__bit_buffer__write__STATE_VARIABLE_Buffer_19_19;
#line 234 "bit_buffer.write.m"
            MR_Box mercury__bit_buffer__write__STATE_VARIABLE_Buffer_20_20;
#line 234 "bit_buffer.write.m"
            MR_Integer mercury__bit_buffer__write__V_21_21;
#line 234 "bit_buffer.write.m"
            MR_Integer mercury__bit_buffer__write__V_22_22;
#line 111 "bit_buffer.opt"
            MR_Word mercury__bit_buffer__write__TypeInfo_26_49;
#line 111 "bit_buffer.opt"
            MR_Word mercury__bit_buffer__write__TypeInfo_28_50;
#line 111 "bit_buffer.opt"
            MR_Word mercury__bit_buffer__write__TypeInfo_29_51;
#line 114 "bit_buffer.opt"
            MR_Word mercury__bit_buffer__write__TypeInfo_30_52;
#line 114 "bit_buffer.opt"
            MR_Word mercury__bit_buffer__write__TypeInfo_31_53;
#line 114 "bit_buffer.opt"
            MR_Word mercury__bit_buffer__write__TypeInfo_29_54;
#line 117 "bit_buffer.opt"
            MR_Word mercury__bit_buffer__write__TypeInfo_32_55;
#line 117 "bit_buffer.opt"
            MR_Word mercury__bit_buffer__write__TypeInfo_33_56;
#line 117 "bit_buffer.opt"
            MR_Word mercury__bit_buffer__write__TypeInfo_29_57;
#line 143 "bit_buffer.opt"
            MR_Word mercury__bit_buffer__write__TypeInfo_34_58;
#line 143 "bit_buffer.opt"
            MR_Word mercury__bit_buffer__write__TypeInfo_35_59;
#line 143 "bit_buffer.opt"
            MR_Word mercury__bit_buffer__write__TypeInfo_29_60;

#line 111 "bit_buffer.opt"
{
#define MR_PROC_LABEL mercury__bit_buffer__write__put_bitmap_2_5_p_0

	ML_BitBufferPtr Buffer;
	MR_BitmapPtr BM;

	Buffer = (ML_BitBufferPtr) mercury__bit_buffer__write__STATE_VARIABLE_Buffer_0_16 ;
		{
#line 111 "bit_buffer.opt"

    BM = Buffer->ML_bit_buffer_bitmap;

#line 2485 "bit_buffer.write.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bit_buffer__write__BufferBM0_10  = (MR_Box) BM;
#line 111 "bit_buffer.opt"
}
#line 114 "bit_buffer.opt"
{
#define MR_PROC_LABEL mercury__bit_buffer__write__put_bitmap_2_5_p_0

	ML_BitBufferPtr Buffer;
	MR_Integer Pos;

	Buffer = (ML_BitBufferPtr) mercury__bit_buffer__write__STATE_VARIABLE_Buffer_0_16 ;
		{
#line 114 "bit_buffer.opt"

    Pos = Buffer->ML_bit_buffer_pos;

#line 2505 "bit_buffer.write.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bit_buffer__write__Pos_11  = Pos;
#line 114 "bit_buffer.opt"
}
#line 117 "bit_buffer.opt"
{
#define MR_PROC_LABEL mercury__bit_buffer__write__put_bitmap_2_5_p_0

	ML_BitBufferPtr Buffer;
	MR_Integer Size;

	Buffer = (ML_BitBufferPtr) mercury__bit_buffer__write__STATE_VARIABLE_Buffer_0_16 ;
		{
#line 117 "bit_buffer.opt"

    Size = Buffer->ML_bit_buffer_size;

#line 2525 "bit_buffer.write.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bit_buffer__write__Size_12  = Size;
#line 117 "bit_buffer.opt"
}
#line 237 "bit_buffer.write.m"
            mercury__bit_buffer__write__Remain_13 = (mercury__bit_buffer__write__Size_12 - mercury__bit_buffer__write__Pos_11);
#line 85 "int.opt"
            mercury__bit_buffer__write__succeeded = (mercury__bit_buffer__write__Remain_13 < mercury__bit_buffer__write__NumBits_8);
#line 88 "int.opt"
            if (mercury__bit_buffer__write__succeeded)
#line 87 "int.opt"
              mercury__bit_buffer__write__NumBitsToWrite_14 = mercury__bit_buffer__write__Remain_13;
#line 88 "int.opt"
            else
#line 89 "int.opt"
              mercury__bit_buffer__write__NumBitsToWrite_14 = mercury__bit_buffer__write__NumBits_8;
#line 186 "bitmap.opt"
            {
#line 186 "bitmap.opt"
              mercury__bit_buffer__write__BufferBM_15 = mercury__bitmap__copy_bits_6_f_0((MR_Integer) 0, mercury__bit_buffer__write__BM_6, mercury__bit_buffer__write__Index_7, mercury__bit_buffer__write__BufferBM0_10, mercury__bit_buffer__write__Pos_11, mercury__bit_buffer__write__NumBitsToWrite_14);
            }
#line 240 "bit_buffer.write.m"
            mercury__bit_buffer__write__V_18_18 = (mercury__bit_buffer__write__Pos_11 + mercury__bit_buffer__write__NumBitsToWrite_14);
#line 143 "bit_buffer.opt"
{
#define MR_PROC_LABEL mercury__bit_buffer__write__put_bitmap_2_5_p_0

	MR_BitmapPtr BM;
	MR_Integer Pos;
	ML_BitBufferPtr Buffer0;
	ML_BitBufferPtr Buffer;

	BM = (MR_BitmapPtr) mercury__bit_buffer__write__BufferBM_15 ;
	Pos =  mercury__bit_buffer__write__V_18_18 ;
	Buffer0 = (ML_BitBufferPtr) mercury__bit_buffer__write__STATE_VARIABLE_Buffer_0_16 ;
		{
#line 143 "bit_buffer.opt"

    Buffer = Buffer0;
    Buffer->ML_bit_buffer_bitmap = BM;
    Buffer->ML_bit_buffer_pos = Pos;

#line 2570 "bit_buffer.write.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bit_buffer__write__STATE_VARIABLE_Buffer_19_19  = (MR_Box) Buffer;
#line 143 "bit_buffer.opt"
}
#line 241 "bit_buffer.write.m"
            {
#line 241 "bit_buffer.write.m"
              mercury__bit_buffer__write__maybe_make_room_2_p_0(mercury__bit_buffer__write__TypeClassInfo_for_writer_24, mercury__bit_buffer__write__STATE_VARIABLE_Buffer_19_19, &mercury__bit_buffer__write__STATE_VARIABLE_Buffer_20_20);
            }
#line 242 "bit_buffer.write.m"
            mercury__bit_buffer__write__V_21_21 = (mercury__bit_buffer__write__Index_7 + mercury__bit_buffer__write__NumBitsToWrite_14);
#line 243 "bit_buffer.write.m"
            mercury__bit_buffer__write__V_22_22 = (mercury__bit_buffer__write__NumBits_8 - mercury__bit_buffer__write__NumBitsToWrite_14);
#line 242 "bit_buffer.write.m"
            /* direct tailcall eliminated */
#line 242 "bit_buffer.write.m"
            {
#line 242 "bit_buffer.write.m"
              MR_Integer mercury__bit_buffer__write__Index__tmp_copy_7 = mercury__bit_buffer__write__V_21_21;
#line 242 "bit_buffer.write.m"
              MR_Integer mercury__bit_buffer__write__NumBits__tmp_copy_8 = mercury__bit_buffer__write__V_22_22;
#line 242 "bit_buffer.write.m"
              MR_Box mercury__bit_buffer__write__STATE_VARIABLE_Buffer_0__tmp_copy_16 = mercury__bit_buffer__write__STATE_VARIABLE_Buffer_20_20;

#line 242 "bit_buffer.write.m"
              mercury__bit_buffer__write__STATE_VARIABLE_Buffer_0_16 = mercury__bit_buffer__write__STATE_VARIABLE_Buffer_0__tmp_copy_16;
#line 242 "bit_buffer.write.m"
              mercury__bit_buffer__write__NumBits_8 = mercury__bit_buffer__write__NumBits__tmp_copy_8;
#line 242 "bit_buffer.write.m"
              mercury__bit_buffer__write__Index_7 = mercury__bit_buffer__write__Index__tmp_copy_7;
#line 242 "bit_buffer.write.m"
            }
#line 242 "bit_buffer.write.m"
            continue;
#line 234 "bit_buffer.write.m"
          }
#line 233 "bit_buffer.write.m"
      }
#line 233 "bit_buffer.write.m"
      break;
#line 233 "bit_buffer.write.m"
    }
#line 227 "bit_buffer.write.m"
}

#line 124 "bit_buffer.write.m"
MR_Box MR_CALL 
mercury__bit_buffer__write__finalize_to_bitmap_1_f_0(
#line 124 "bit_buffer.write.m"
  MR_Word mercury__bit_buffer__write__HeadVar__1_1)
#line 124 "bit_buffer.write.m"
{
#line 253 "bit_buffer.write.m"
  {
#line 253 "bit_buffer.write.m"
    MR_bool mercury__bit_buffer__write__succeeded;
#line 253 "bit_buffer.write.m"
    MR_Box mercury__bit_buffer__write__STATE_VARIABLE_BM_9;
#line 253 "bit_buffer.write.m"
    MR_Word mercury__bit_buffer__write__TypeCtorInfo_18_18 = (MR_Word) &mercury__bit_buffer__bit_buffer__type_ctor_info_error_stream_0;
#line 253 "bit_buffer.write.m"
    MR_Word mercury__bit_buffer__write__TypeCtorInfo_19_19 = (MR_Word) &mercury__bit_buffer__bit_buffer__type_ctor_info_error_state_0;
#line 253 "bit_buffer.write.m"
    MR_Box mercury__bit_buffer__write__Buffer_3 = (MR_Box) mercury__bit_buffer__write__HeadVar__1_1;
#line 253 "bit_buffer.write.m"
    MR_Integer mercury__bit_buffer__write__NumBits_5;
#line 253 "bit_buffer.write.m"
    MR_Box mercury__bit_buffer__write__LastBM_6;
#line 253 "bit_buffer.write.m"
    MR_Integer mercury__bit_buffer__write__Index_7;
#line 253 "bit_buffer.write.m"
    MR_Box mercury__bit_buffer__write__STATE_VARIABLE_BM_11_11;
#line 253 "bit_buffer.write.m"
    MR_Box mercury__bit_buffer__write__V_12_12;
#line 253 "bit_buffer.write.m"
    MR_Integer mercury__bit_buffer__write__V_13_13;
#line 253 "bit_buffer.write.m"
    MR_Box mercury__bit_buffer__write__STATE_VARIABLE_BM_14_14;
#line 253 "bit_buffer.write.m"
    MR_Word mercury__bit_buffer__write__V_16_16;
#line 111 "bit_buffer.opt"
    MR_Word mercury__bit_buffer__write__TypeCtorInfo_18_31;
#line 111 "bit_buffer.opt"
    MR_Word mercury__bit_buffer__write__TypeCtorInfo_19_32;
#line 111 "bit_buffer.opt"
    MR_Word mercury__bit_buffer__write__TypeInfo_20_33;
#line 114 "bit_buffer.opt"
    MR_Word mercury__bit_buffer__write__TypeCtorInfo_18_34;
#line 114 "bit_buffer.opt"
    MR_Word mercury__bit_buffer__write__TypeCtorInfo_19_35;
#line 114 "bit_buffer.opt"
    MR_Word mercury__bit_buffer__write__TypeInfo_20_36;
#line 129 "bit_buffer.opt"
    MR_Word mercury__bit_buffer__write__TypeCtorInfo_18_37;
#line 129 "bit_buffer.opt"
    MR_Word mercury__bit_buffer__write__TypeCtorInfo_19_38;
#line 129 "bit_buffer.opt"
    MR_Word mercury__bit_buffer__write__TypeInfo_20_39;
#line 261 "bit_buffer.write.m"
    MR_Integer mercury__bit_buffer__write__V_8_8;

#line 254 "bit_buffer.write.m"
    {
#line 254 "bit_buffer.write.m"
      mercury__bit_buffer__write__NumBits_5 = mercury__bit_buffer__write__num_buffered_bits_1_f_0(mercury__bit_buffer__write__TypeCtorInfo_18_18, mercury__bit_buffer__write__TypeCtorInfo_19_19, mercury__bit_buffer__write__HeadVar__1_1);
    }
#line 103 "bitmap.opt"
    {
#line 103 "bitmap.opt"
      mercury__bit_buffer__write__STATE_VARIABLE_BM_11_11 = mercury__bitmap__init_2_f_0(mercury__bit_buffer__write__NumBits_5, (MR_Integer) 0);
    }
#line 111 "bit_buffer.opt"
{
#define MR_PROC_LABEL mercury__bit_buffer__write__finalize_to_bitmap_1_f_0

	ML_BitBufferPtr Buffer;
	MR_BitmapPtr BM;

	Buffer = (ML_BitBufferPtr) mercury__bit_buffer__write__Buffer_3 ;
		{
#line 111 "bit_buffer.opt"

    BM = Buffer->ML_bit_buffer_bitmap;

#line 2697 "bit_buffer.write.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bit_buffer__write__V_12_12  = (MR_Box) BM;
#line 111 "bit_buffer.opt"
}
#line 114 "bit_buffer.opt"
{
#define MR_PROC_LABEL mercury__bit_buffer__write__finalize_to_bitmap_1_f_0

	ML_BitBufferPtr Buffer;
	MR_Integer Pos;

	Buffer = (ML_BitBufferPtr) mercury__bit_buffer__write__Buffer_3 ;
		{
#line 114 "bit_buffer.opt"

    Pos = Buffer->ML_bit_buffer_pos;

#line 2717 "bit_buffer.write.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bit_buffer__write__V_13_13  = Pos;
#line 114 "bit_buffer.opt"
}
#line 259 "bit_buffer.write.m"
    {
#line 259 "bit_buffer.write.m"
      mercury__bit_buffer__write__LastBM_6 = mercury__bitmap__shrink_without_copying_2_f_0(mercury__bit_buffer__write__V_12_12, mercury__bit_buffer__write__V_13_13);
    }
#line 260 "bit_buffer.write.m"
    {
#line 260 "bit_buffer.write.m"
      mercury__bit_buffer__write__copy_out_bitmap_5_p_0(mercury__bit_buffer__write__LastBM_6, mercury__bit_buffer__write__NumBits_5, &mercury__bit_buffer__write__Index_7, mercury__bit_buffer__write__STATE_VARIABLE_BM_11_11, &mercury__bit_buffer__write__STATE_VARIABLE_BM_14_14);
    }
#line 129 "bit_buffer.opt"
{
#define MR_PROC_LABEL mercury__bit_buffer__write__finalize_to_bitmap_1_f_0

	ML_BitBufferPtr Buffer;
	MR_Word FilledBMs;

	Buffer = (ML_BitBufferPtr) mercury__bit_buffer__write__Buffer_3 ;
		{
#line 129 "bit_buffer.opt"

    FilledBMs = Buffer->ML_bit_buffer_filled_bitmaps;

#line 2747 "bit_buffer.write.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bit_buffer__write__V_16_16  = FilledBMs;
#line 129 "bit_buffer.opt"
}
#line 261 "bit_buffer.write.m"
    {
#line 261 "bit_buffer.write.m"
      mercury__bit_buffer__write__foldl2__ho2_6_p_in__list_0(mercury__bit_buffer__write__V_16_16, mercury__bit_buffer__write__Index_7, &mercury__bit_buffer__write__V_8_8, mercury__bit_buffer__write__STATE_VARIABLE_BM_14_14, &mercury__bit_buffer__write__STATE_VARIABLE_BM_9);
    }
#line 253 "bit_buffer.write.m"
    return mercury__bit_buffer__write__STATE_VARIABLE_BM_9;
#line 253 "bit_buffer.write.m"
  }
#line 124 "bit_buffer.write.m"
}

#line 118 "bit_buffer.write.m"
void MR_CALL 
mercury__bit_buffer__write__finalize_3_p_0(
#line 118 "bit_buffer.write.m"
  MR_Word mercury__bit_buffer__write__TypeClassInfo_for_writer_15,
#line 118 "bit_buffer.write.m"
  MR_Word mercury__bit_buffer__write__STATE_VARIABLE_Buffer_0_8,
#line 118 "bit_buffer.write.m"
  MR_Box * mercury__bit_buffer__write__Stream_5,
#line 118 "bit_buffer.write.m"
  MR_Box * mercury__bit_buffer__write__State_6)
#line 118 "bit_buffer.write.m"
{
#line 246 "bit_buffer.write.m"
  {
#line 246 "bit_buffer.write.m"
    MR_bool mercury__bit_buffer__write__succeeded;
#line 246 "bit_buffer.write.m"
    MR_Word mercury__bit_buffer__write__TypeInfo_17_17;
#line 246 "bit_buffer.write.m"
    MR_Word mercury__bit_buffer__write__TypeInfo_19_19;
#line 246 "bit_buffer.write.m"
    MR_Integer mercury__bit_buffer__write__BitsToByte_7;
#line 246 "bit_buffer.write.m"
    MR_Word mercury__bit_buffer__write__STATE_VARIABLE_Buffer_10_10;
#line 246 "bit_buffer.write.m"
    MR_Word mercury__bit_buffer__write__STATE_VARIABLE_Buffer_11_11;
#line 246 "bit_buffer.write.m"
    MR_Box mercury__bit_buffer__write__V_12_12;
#line 246 "bit_buffer.write.m"
    MR_Box mercury__bit_buffer__write__V_13_13;
#line 246 "bit_buffer.write.m"
    MR_Box mercury__bit_buffer__write__V_14_14;
#line 123 "bit_buffer.opt"
    MR_Word mercury__bit_buffer__write__TypeInfo_20_25;
#line 123 "bit_buffer.opt"
    MR_Word mercury__bit_buffer__write__TypeInfo_21_26;
#line 123 "bit_buffer.opt"
    MR_Word mercury__bit_buffer__write__TypeInfo_22_27;
#line 126 "bit_buffer.opt"
    MR_Word mercury__bit_buffer__write__TypeInfo_23_28;
#line 126 "bit_buffer.opt"
    MR_Word mercury__bit_buffer__write__TypeInfo_24_29;
#line 126 "bit_buffer.opt"
    MR_Word mercury__bit_buffer__write__TypeInfo_22_30;

#line 133 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__bit_buffer__write__finalize_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__bit_buffer__write__TypeClassInfo_for_writer_15 ;
	Index =  (MR_Integer) 2 ;
		{
#line 133 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 2827 "bit_buffer.write.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bit_buffer__write__TypeInfo_17_17  = TypeInfo;
#line 133 "private_builtin.opt"
}
#line 133 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__bit_buffer__write__finalize_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__bit_buffer__write__TypeClassInfo_for_writer_15 ;
	Index =  (MR_Integer) 4 ;
		{
#line 133 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 2849 "bit_buffer.write.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bit_buffer__write__TypeInfo_19_19  = TypeInfo;
#line 133 "private_builtin.opt"
}
#line 247 "bit_buffer.write.m"
    {
#line 247 "bit_buffer.write.m"
      mercury__bit_buffer__write__BitsToByte_7 = mercury__bit_buffer__write__num_bits_to_byte_boundary_1_f_0(mercury__bit_buffer__write__TypeInfo_17_17, mercury__bit_buffer__write__TypeInfo_19_19, mercury__bit_buffer__write__STATE_VARIABLE_Buffer_0_8);
    }
#line 248 "bit_buffer.write.m"
    {
#line 248 "bit_buffer.write.m"
      mercury__bit_buffer__write__put_bits_4_p_0(mercury__bit_buffer__write__TypeClassInfo_for_writer_15, (MR_Integer) 0, mercury__bit_buffer__write__BitsToByte_7, mercury__bit_buffer__write__STATE_VARIABLE_Buffer_0_8, &mercury__bit_buffer__write__STATE_VARIABLE_Buffer_10_10);
    }
#line 249 "bit_buffer.write.m"
    {
#line 249 "bit_buffer.write.m"
      mercury__bit_buffer__write__flush_2_p_0(mercury__bit_buffer__write__TypeClassInfo_for_writer_15, mercury__bit_buffer__write__STATE_VARIABLE_Buffer_10_10, &mercury__bit_buffer__write__STATE_VARIABLE_Buffer_11_11);
    }
#line 250 "bit_buffer.write.m"
    mercury__bit_buffer__write__V_12_12 = (MR_Box) mercury__bit_buffer__write__STATE_VARIABLE_Buffer_11_11;
#line 123 "bit_buffer.opt"
{
#define MR_PROC_LABEL mercury__bit_buffer__write__finalize_3_p_0

	ML_BitBufferPtr Buffer;
	MR_Word Stream;

	Buffer = (ML_BitBufferPtr) mercury__bit_buffer__write__V_12_12 ;
		{
#line 123 "bit_buffer.opt"

    Stream = Buffer->ML_bit_buffer_stream;

#line 2886 "bit_buffer.write.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__bit_buffer__write__Stream_5  = (MR_Box) Stream;
#line 123 "bit_buffer.opt"
}
#line 251 "bit_buffer.write.m"
    mercury__bit_buffer__write__V_14_14 = (MR_Box) mercury__bit_buffer__write__STATE_VARIABLE_Buffer_11_11;
#line 126 "bit_buffer.opt"
{
#define MR_PROC_LABEL mercury__bit_buffer__write__finalize_3_p_0

	ML_BitBufferPtr Buffer;
	MR_Word State;

	Buffer = (ML_BitBufferPtr) mercury__bit_buffer__write__V_14_14 ;
		{
#line 126 "bit_buffer.opt"

    State = Buffer->ML_bit_buffer_state;

#line 2908 "bit_buffer.write.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bit_buffer__write__V_13_13  = (MR_Box) State;
#line 126 "bit_buffer.opt"
}
#line 251 "bit_buffer.write.m"
    *mercury__bit_buffer__write__State_6 = mercury__bit_buffer__write__V_13_13;
#line 246 "bit_buffer.write.m"
  }
#line 118 "bit_buffer.write.m"
}

#line 111 "bit_buffer.write.m"
void MR_CALL 
mercury__bit_buffer__write__flush_2_p_0(
#line 111 "bit_buffer.write.m"
  MR_Word mercury__bit_buffer__write__TypeClassInfo_for_writer_8,
#line 111 "bit_buffer.write.m"
  MR_Word mercury__bit_buffer__write__HeadVar__1_1,
#line 111 "bit_buffer.write.m"
  MR_Word * mercury__bit_buffer__write__HeadVar__2_2)
#line 111 "bit_buffer.write.m"
{
#line 301 "bit_buffer.write.m"
  {
#line 301 "bit_buffer.write.m"
    MR_bool mercury__bit_buffer__write__succeeded;
#line 301 "bit_buffer.write.m"
    MR_Word mercury__bit_buffer__write__UseStream_4;
#line 301 "bit_buffer.write.m"
    MR_Box mercury__bit_buffer__write__STATE_VARIABLE_Buffer_0_5 = (MR_Box) mercury__bit_buffer__write__HeadVar__1_1;
#line 301 "bit_buffer.write.m"
    MR_Box mercury__bit_buffer__write__STATE_VARIABLE_Buffer_6;
#line 120 "bit_buffer.opt"
    MR_Word mercury__bit_buffer__write__TypeInfo_10_14;
#line 120 "bit_buffer.opt"
    MR_Word mercury__bit_buffer__write__TypeInfo_12_15;
#line 120 "bit_buffer.opt"
    MR_Word mercury__bit_buffer__write__TypeInfo_13_16;

#line 120 "bit_buffer.opt"
{
#define MR_PROC_LABEL mercury__bit_buffer__write__flush_2_p_0

	ML_BitBufferPtr Buffer;
	MR_Word UseStream;

	Buffer = (ML_BitBufferPtr) mercury__bit_buffer__write__STATE_VARIABLE_Buffer_0_5 ;
		{
#line 120 "bit_buffer.opt"

    UseStream = Buffer->ML_bit_buffer_use_stream;

#line 2963 "bit_buffer.write.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bit_buffer__write__UseStream_4  = UseStream;
#line 120 "bit_buffer.opt"
}
#line 306 "bit_buffer.write.m"
#line 306 "bit_buffer.write.m"
    switch (mercury__bit_buffer__write__UseStream_4) {
#line 306 "bit_buffer.write.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 306 "bit_buffer.write.m"
      case (MR_Integer) 0:
#line 307 "bit_buffer.write.m"
        mercury__bit_buffer__write__STATE_VARIABLE_Buffer_6 = mercury__bit_buffer__write__STATE_VARIABLE_Buffer_0_5;
#line 306 "bit_buffer.write.m"
        break;
#line 306 "bit_buffer.write.m"
      case (MR_Integer) 1:
#line 305 "bit_buffer.write.m"
        {
#line 305 "bit_buffer.write.m"
          mercury__bit_buffer__write__flush_all_to_stream_2_p_0(mercury__bit_buffer__write__TypeClassInfo_for_writer_8, mercury__bit_buffer__write__STATE_VARIABLE_Buffer_0_5, &mercury__bit_buffer__write__STATE_VARIABLE_Buffer_6);
        }
#line 306 "bit_buffer.write.m"
        break;
#line 306 "bit_buffer.write.m"
    }
#line 301 "bit_buffer.write.m"
    *mercury__bit_buffer__write__HeadVar__2_2 = (MR_Word) mercury__bit_buffer__write__STATE_VARIABLE_Buffer_6;
#line 301 "bit_buffer.write.m"
  }
#line 111 "bit_buffer.write.m"
}

#line 103 "bit_buffer.write.m"
void MR_CALL 
mercury__bit_buffer__write__put_bitmap_5_p_0(
#line 103 "bit_buffer.write.m"
  MR_Word mercury__bit_buffer__write__TypeClassInfo_for_writer_13,
#line 103 "bit_buffer.write.m"
  MR_Box mercury__bit_buffer__write__BM_6,
#line 103 "bit_buffer.write.m"
  MR_Integer mercury__bit_buffer__write__Index_7,
#line 103 "bit_buffer.write.m"
  MR_Integer mercury__bit_buffer__write__NumBits_8,
#line 103 "bit_buffer.write.m"
  MR_Word mercury__bit_buffer__write__HeadVar__4_4,
#line 103 "bit_buffer.write.m"
  MR_Word * mercury__bit_buffer__write__HeadVar__5_5)
#line 103 "bit_buffer.write.m"
{
#line 216 "bit_buffer.write.m"
  {
#line 216 "bit_buffer.write.m"
    MR_bool mercury__bit_buffer__write__succeeded;
#line 216 "bit_buffer.write.m"
    MR_Box mercury__bit_buffer__write__STATE_VARIABLE_Buffer_0_10 = (MR_Box) mercury__bit_buffer__write__HeadVar__4_4;
#line 216 "bit_buffer.write.m"
    MR_Box mercury__bit_buffer__write__STATE_VARIABLE_Buffer_11;

#line 217 "bit_buffer.write.m"
    {
#line 217 "bit_buffer.write.m"
      mercury__bit_buffer__write__put_bitmap_2_5_p_0(mercury__bit_buffer__write__TypeClassInfo_for_writer_13, mercury__bit_buffer__write__BM_6, mercury__bit_buffer__write__Index_7, mercury__bit_buffer__write__NumBits_8, mercury__bit_buffer__write__STATE_VARIABLE_Buffer_0_10, &mercury__bit_buffer__write__STATE_VARIABLE_Buffer_11);
    }
#line 216 "bit_buffer.write.m"
    *mercury__bit_buffer__write__HeadVar__5_5 = (MR_Word) mercury__bit_buffer__write__STATE_VARIABLE_Buffer_11;
#line 216 "bit_buffer.write.m"
  }
#line 103 "bit_buffer.write.m"
}

#line 98 "bit_buffer.write.m"
void MR_CALL 
mercury__bit_buffer__write__put_bitmap_3_p_0(
#line 98 "bit_buffer.write.m"
  MR_Word mercury__bit_buffer__write__TypeClassInfo_for_writer_11,
#line 98 "bit_buffer.write.m"
  MR_Box mercury__bit_buffer__write__BM_4,
#line 98 "bit_buffer.write.m"
  MR_Word mercury__bit_buffer__write__STATE_VARIABLE_Buffer_0_6,
#line 98 "bit_buffer.write.m"
  MR_Word * mercury__bit_buffer__write__STATE_VARIABLE_Buffer_7)
#line 98 "bit_buffer.write.m"
{
#line 212 "bit_buffer.write.m"
  {
#line 212 "bit_buffer.write.m"
    MR_bool mercury__bit_buffer__write__succeeded;
#line 212 "bit_buffer.write.m"
    MR_Integer mercury__bit_buffer__write__V_9_9;
#line 212 "bit_buffer.write.m"
    MR_Box mercury__bit_buffer__write__STATE_VARIABLE_Buffer_0_16;
#line 212 "bit_buffer.write.m"
    MR_Box mercury__bit_buffer__write__STATE_VARIABLE_Buffer_17;

#line 114 "bitmap.opt"
{
#define MR_PROC_LABEL mercury__bit_buffer__write__put_bitmap_3_p_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr) mercury__bit_buffer__write__BM_4 ;
		{
#line 114 "bitmap.opt"

    NumBits = BM->num_bits;

#line 3074 "bit_buffer.write.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bit_buffer__write__V_9_9  = NumBits;
#line 114 "bitmap.opt"
}
#line 216 "bit_buffer.write.m"
    mercury__bit_buffer__write__STATE_VARIABLE_Buffer_0_16 = (MR_Box) mercury__bit_buffer__write__STATE_VARIABLE_Buffer_0_6;
#line 217 "bit_buffer.write.m"
    {
#line 217 "bit_buffer.write.m"
      mercury__bit_buffer__write__put_bitmap_2_5_p_0(mercury__bit_buffer__write__TypeClassInfo_for_writer_11, mercury__bit_buffer__write__BM_4, (MR_Integer) 0, mercury__bit_buffer__write__V_9_9, mercury__bit_buffer__write__STATE_VARIABLE_Buffer_0_16, &mercury__bit_buffer__write__STATE_VARIABLE_Buffer_17);
    }
#line 216 "bit_buffer.write.m"
    *mercury__bit_buffer__write__STATE_VARIABLE_Buffer_7 = (MR_Word) mercury__bit_buffer__write__STATE_VARIABLE_Buffer_17;
#line 212 "bit_buffer.write.m"
  }
#line 98 "bit_buffer.write.m"
}

#line 90 "bit_buffer.write.m"
void MR_CALL 
mercury__bit_buffer__write__put_byte_3_p_0(
#line 90 "bit_buffer.write.m"
  MR_Word mercury__bit_buffer__write__TypeClassInfo_for_writer_10,
#line 90 "bit_buffer.write.m"
  MR_Integer mercury__bit_buffer__write__Byte_4,
#line 90 "bit_buffer.write.m"
  MR_Word mercury__bit_buffer__write__STATE_VARIABLE_Buffer_0_6,
#line 90 "bit_buffer.write.m"
  MR_Word * mercury__bit_buffer__write__STATE_VARIABLE_Buffer_7)
#line 90 "bit_buffer.write.m"
{
#line 209 "bit_buffer.write.m"
  {
#line 209 "bit_buffer.write.m"
    MR_bool mercury__bit_buffer__write__succeeded;

#line 210 "bit_buffer.write.m"
    {
#line 210 "bit_buffer.write.m"
      mercury__bit_buffer__write__put_bits_4_p_0(mercury__bit_buffer__write__TypeClassInfo_for_writer_10, mercury__bit_buffer__write__Byte_4, (MR_Integer) 8, mercury__bit_buffer__write__STATE_VARIABLE_Buffer_0_6, mercury__bit_buffer__write__STATE_VARIABLE_Buffer_7);
#line 210 "bit_buffer.write.m"
      return;
    }
#line 209 "bit_buffer.write.m"
  }
#line 90 "bit_buffer.write.m"
}

#line 82 "bit_buffer.write.m"
void MR_CALL 
mercury__bit_buffer__write__put_bits_4_p_0(
#line 82 "bit_buffer.write.m"
  MR_Word mercury__bit_buffer__write__TypeClassInfo_for_writer_16,
#line 82 "bit_buffer.write.m"
  MR_Integer mercury__bit_buffer__write__Bits_5,
#line 82 "bit_buffer.write.m"
  MR_Integer mercury__bit_buffer__write__NumBits_6,
#line 82 "bit_buffer.write.m"
  MR_Word mercury__bit_buffer__write__HeadVar__3_3,
#line 82 "bit_buffer.write.m"
  MR_Word * mercury__bit_buffer__write__HeadVar__4_4)
#line 82 "bit_buffer.write.m"
{
#line 197 "bit_buffer.write.m"
  {
#line 197 "bit_buffer.write.m"
    MR_bool mercury__bit_buffer__write__succeeded;
#line 197 "bit_buffer.write.m"
    MR_Box mercury__bit_buffer__write__BM0_8;
#line 197 "bit_buffer.write.m"
    MR_Integer mercury__bit_buffer__write__Pos0_9;
#line 197 "bit_buffer.write.m"
    MR_Box mercury__bit_buffer__write__BM_10;
#line 197 "bit_buffer.write.m"
    MR_Integer mercury__bit_buffer__write__Pos_11;
#line 197 "bit_buffer.write.m"
    MR_Box mercury__bit_buffer__write__STATE_VARIABLE_Buffer_0_12 = (MR_Box) mercury__bit_buffer__write__HeadVar__3_3;
#line 197 "bit_buffer.write.m"
    MR_Box mercury__bit_buffer__write__STATE_VARIABLE_Buffer_13;
#line 197 "bit_buffer.write.m"
    MR_Box mercury__bit_buffer__write__STATE_VARIABLE_Buffer_14_14;
#line 111 "bit_buffer.opt"
    MR_Word mercury__bit_buffer__write__TypeInfo_18_26;
#line 111 "bit_buffer.opt"
    MR_Word mercury__bit_buffer__write__TypeInfo_20_27;
#line 111 "bit_buffer.opt"
    MR_Word mercury__bit_buffer__write__TypeInfo_21_28;
#line 114 "bit_buffer.opt"
    MR_Word mercury__bit_buffer__write__TypeInfo_22_29;
#line 114 "bit_buffer.opt"
    MR_Word mercury__bit_buffer__write__TypeInfo_23_30;
#line 114 "bit_buffer.opt"
    MR_Word mercury__bit_buffer__write__TypeInfo_21_31;
#line 143 "bit_buffer.opt"
    MR_Word mercury__bit_buffer__write__TypeInfo_24_32;
#line 143 "bit_buffer.opt"
    MR_Word mercury__bit_buffer__write__TypeInfo_25_33;
#line 143 "bit_buffer.opt"
    MR_Word mercury__bit_buffer__write__TypeInfo_21_34;

#line 111 "bit_buffer.opt"
{
#define MR_PROC_LABEL mercury__bit_buffer__write__put_bits_4_p_0

	ML_BitBufferPtr Buffer;
	MR_BitmapPtr BM;

	Buffer = (ML_BitBufferPtr) mercury__bit_buffer__write__STATE_VARIABLE_Buffer_0_12 ;
		{
#line 111 "bit_buffer.opt"

    BM = Buffer->ML_bit_buffer_bitmap;

#line 3190 "bit_buffer.write.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bit_buffer__write__BM0_8  = (MR_Box) BM;
#line 111 "bit_buffer.opt"
}
#line 114 "bit_buffer.opt"
{
#define MR_PROC_LABEL mercury__bit_buffer__write__put_bits_4_p_0

	ML_BitBufferPtr Buffer;
	MR_Integer Pos;

	Buffer = (ML_BitBufferPtr) mercury__bit_buffer__write__STATE_VARIABLE_Buffer_0_12 ;
		{
#line 114 "bit_buffer.opt"

    Pos = Buffer->ML_bit_buffer_pos;

#line 3210 "bit_buffer.write.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bit_buffer__write__Pos0_9  = Pos;
#line 114 "bit_buffer.opt"
}
#line 204 "bit_buffer.write.m"
    {
#line 204 "bit_buffer.write.m"
      mercury__bit_buffer__write__BM_10 = mercury__bitmap__f_98_105_116_115_32_58_61_4_f_0(mercury__bit_buffer__write__Pos0_9, mercury__bit_buffer__write__NumBits_6, mercury__bit_buffer__write__BM0_8, mercury__bit_buffer__write__Bits_5);
    }
#line 205 "bit_buffer.write.m"
    mercury__bit_buffer__write__Pos_11 = (mercury__bit_buffer__write__Pos0_9 + mercury__bit_buffer__write__NumBits_6);
#line 143 "bit_buffer.opt"
{
#define MR_PROC_LABEL mercury__bit_buffer__write__put_bits_4_p_0

	MR_BitmapPtr BM;
	MR_Integer Pos;
	ML_BitBufferPtr Buffer0;
	ML_BitBufferPtr Buffer;

	BM = (MR_BitmapPtr) mercury__bit_buffer__write__BM_10 ;
	Pos =  mercury__bit_buffer__write__Pos_11 ;
	Buffer0 = (ML_BitBufferPtr) mercury__bit_buffer__write__STATE_VARIABLE_Buffer_0_12 ;
		{
#line 143 "bit_buffer.opt"

    Buffer = Buffer0;
    Buffer->ML_bit_buffer_bitmap = BM;
    Buffer->ML_bit_buffer_pos = Pos;

#line 3243 "bit_buffer.write.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bit_buffer__write__STATE_VARIABLE_Buffer_14_14  = (MR_Box) Buffer;
#line 143 "bit_buffer.opt"
}
#line 207 "bit_buffer.write.m"
    {
#line 207 "bit_buffer.write.m"
      mercury__bit_buffer__write__maybe_make_room_2_p_0(mercury__bit_buffer__write__TypeClassInfo_for_writer_16, mercury__bit_buffer__write__STATE_VARIABLE_Buffer_14_14, &mercury__bit_buffer__write__STATE_VARIABLE_Buffer_13);
    }
#line 197 "bit_buffer.write.m"
    *mercury__bit_buffer__write__HeadVar__4_4 = (MR_Word) mercury__bit_buffer__write__STATE_VARIABLE_Buffer_13;
#line 197 "bit_buffer.write.m"
  }
#line 82 "bit_buffer.write.m"
}

#line 74 "bit_buffer.write.m"
void MR_CALL 
mercury__bit_buffer__write__put_bit_3_p_0(
#line 74 "bit_buffer.write.m"
  MR_Word mercury__bit_buffer__write__TypeClassInfo_for_writer_16,
#line 74 "bit_buffer.write.m"
  MR_Word mercury__bit_buffer__write__HeadVar__1_1,
#line 74 "bit_buffer.write.m"
  MR_Word mercury__bit_buffer__write__STATE_VARIABLE_Buffer_0_2,
#line 74 "bit_buffer.write.m"
  MR_Word * mercury__bit_buffer__write__STATE_VARIABLE_Buffer_3)
#line 74 "bit_buffer.write.m"
{
#line 192 "bit_buffer.write.m"
  {
#line 192 "bit_buffer.write.m"
    MR_bool mercury__bit_buffer__write__succeeded;

#line 192 "bit_buffer.write.m"
#line 192 "bit_buffer.write.m"
    switch (mercury__bit_buffer__write__HeadVar__1_1) {
#line 192 "bit_buffer.write.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 192 "bit_buffer.write.m"
      case (MR_Integer) 0:
#line 194 "bit_buffer.write.m"
        {
#line 195 "bit_buffer.write.m"
          {
#line 195 "bit_buffer.write.m"
            mercury__bit_buffer__write__put_bits_4_p_0(mercury__bit_buffer__write__TypeClassInfo_for_writer_16, (MR_Integer) 0, (MR_Integer) 1, mercury__bit_buffer__write__STATE_VARIABLE_Buffer_0_2, mercury__bit_buffer__write__STATE_VARIABLE_Buffer_3);
#line 195 "bit_buffer.write.m"
            return;
          }
#line 194 "bit_buffer.write.m"
        }
#line 192 "bit_buffer.write.m"
        break;
#line 192 "bit_buffer.write.m"
      case (MR_Integer) 1:
#line 192 "bit_buffer.write.m"
        {
#line 193 "bit_buffer.write.m"
          {
#line 193 "bit_buffer.write.m"
            mercury__bit_buffer__write__put_bits_4_p_0(mercury__bit_buffer__write__TypeClassInfo_for_writer_16, (MR_Integer) 1, (MR_Integer) 1, mercury__bit_buffer__write__STATE_VARIABLE_Buffer_0_2, mercury__bit_buffer__write__STATE_VARIABLE_Buffer_3);
#line 193 "bit_buffer.write.m"
            return;
          }
#line 192 "bit_buffer.write.m"
        }
#line 192 "bit_buffer.write.m"
        break;
#line 192 "bit_buffer.write.m"
    }
#line 192 "bit_buffer.write.m"
  }
#line 74 "bit_buffer.write.m"
}

#line 68 "bit_buffer.write.m"
MR_Integer MR_CALL 
mercury__bit_buffer__write__num_bits_to_byte_boundary_1_f_0(
#line 68 "bit_buffer.write.m"
  MR_Word mercury__bit_buffer__write__TypeInfo_10_10,
#line 68 "bit_buffer.write.m"
  MR_Word mercury__bit_buffer__write__TypeInfo_11_11,
#line 68 "bit_buffer.write.m"
  MR_Word mercury__bit_buffer__write__Buffer_3)
#line 68 "bit_buffer.write.m"
{
#line 183 "bit_buffer.write.m"
  {
#line 183 "bit_buffer.write.m"
    MR_bool mercury__bit_buffer__write__succeeded;
#line 183 "bit_buffer.write.m"
    MR_Integer mercury__bit_buffer__write__NumBits_4;
#line 183 "bit_buffer.write.m"
    MR_Integer mercury__bit_buffer__write__Pos_5;
#line 183 "bit_buffer.write.m"
    MR_Integer mercury__bit_buffer__write__Rem_6;
#line 183 "bit_buffer.write.m"
    MR_Box mercury__bit_buffer__write__V_7_7 = (MR_Box) mercury__bit_buffer__write__Buffer_3;
#line 114 "bit_buffer.opt"
    MR_Word mercury__bit_buffer__write__TypeInfo_10_13;
#line 114 "bit_buffer.opt"
    MR_Word mercury__bit_buffer__write__TypeInfo_11_14;
#line 114 "bit_buffer.opt"
    MR_Word mercury__bit_buffer__write__TypeInfo_12_15;

#line 114 "bit_buffer.opt"
{
#define MR_PROC_LABEL mercury__bit_buffer__write__num_bits_to_byte_boundary_1_f_0

	ML_BitBufferPtr Buffer;
	MR_Integer Pos;

	Buffer = (ML_BitBufferPtr) mercury__bit_buffer__write__V_7_7 ;
		{
#line 114 "bit_buffer.opt"

    Pos = Buffer->ML_bit_buffer_pos;

#line 3365 "bit_buffer.write.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bit_buffer__write__Pos_5  = Pos;
#line 114 "bit_buffer.opt"
}
#line 185 "bit_buffer.write.m"
    mercury__bit_buffer__write__Rem_6 = (mercury__bit_buffer__write__Pos_5 % (MR_Integer) 8);
#line 186 "bit_buffer.write.m"
    mercury__bit_buffer__write__succeeded = (mercury__bit_buffer__write__Rem_6 == (MR_Integer) 0);
#line 188 "bit_buffer.write.m"
    if (mercury__bit_buffer__write__succeeded)
#line 187 "bit_buffer.write.m"
      mercury__bit_buffer__write__NumBits_4 = (MR_Integer) 0;
#line 188 "bit_buffer.write.m"
    else
#line 189 "bit_buffer.write.m"
      {
#line 189 "bit_buffer.write.m"
        mercury__bit_buffer__write__NumBits_4 = ((MR_Integer) 8 - mercury__bit_buffer__write__Rem_6);
#line 189 "bit_buffer.write.m"
      }
#line 183 "bit_buffer.write.m"
    return mercury__bit_buffer__write__NumBits_4;
#line 183 "bit_buffer.write.m"
  }
#line 68 "bit_buffer.write.m"
}

#line 62 "bit_buffer.write.m"
MR_Integer MR_CALL 
mercury__bit_buffer__write__num_buffered_bits_1_f_0(
#line 62 "bit_buffer.write.m"
  MR_Word mercury__bit_buffer__write__TypeInfo_17_17,
#line 62 "bit_buffer.write.m"
  MR_Word mercury__bit_buffer__write__TypeInfo_18_18,
#line 62 "bit_buffer.write.m"
  MR_Word mercury__bit_buffer__write__HeadVar__1_1)
#line 62 "bit_buffer.write.m"
{
#line 178 "bit_buffer.write.m"
  {
#line 178 "bit_buffer.write.m"
    MR_bool mercury__bit_buffer__write__succeeded;
#line 178 "bit_buffer.write.m"
    MR_Integer mercury__bit_buffer__write__HeadVar__2_2;
#line 178 "bit_buffer.write.m"
    MR_Box mercury__bit_buffer__write__Buffer_3 = (MR_Box) mercury__bit_buffer__write__HeadVar__1_1;
#line 178 "bit_buffer.write.m"
    MR_Integer mercury__bit_buffer__write__V_6_6;
#line 178 "bit_buffer.write.m"
    MR_Integer mercury__bit_buffer__write__V_7_7;
#line 178 "bit_buffer.write.m"
    MR_Word mercury__bit_buffer__write__V_13_13;
#line 114 "bit_buffer.opt"
    MR_Word mercury__bit_buffer__write__TypeInfo_17_44;
#line 114 "bit_buffer.opt"
    MR_Word mercury__bit_buffer__write__TypeInfo_18_45;
#line 114 "bit_buffer.opt"
    MR_Word mercury__bit_buffer__write__TypeInfo_19_46;
#line 129 "bit_buffer.opt"
    MR_Word mercury__bit_buffer__write__TypeInfo_17_47;
#line 129 "bit_buffer.opt"
    MR_Word mercury__bit_buffer__write__TypeInfo_18_48;
#line 129 "bit_buffer.opt"
    MR_Word mercury__bit_buffer__write__TypeInfo_19_49;

#line 114 "bit_buffer.opt"
{
#define MR_PROC_LABEL mercury__bit_buffer__write__num_buffered_bits_1_f_0

	ML_BitBufferPtr Buffer;
	MR_Integer Pos;

	Buffer = (ML_BitBufferPtr) mercury__bit_buffer__write__Buffer_3 ;
		{
#line 114 "bit_buffer.opt"

    Pos = Buffer->ML_bit_buffer_pos;

#line 3446 "bit_buffer.write.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bit_buffer__write__V_6_6  = Pos;
#line 114 "bit_buffer.opt"
}
#line 129 "bit_buffer.opt"
{
#define MR_PROC_LABEL mercury__bit_buffer__write__num_buffered_bits_1_f_0

	ML_BitBufferPtr Buffer;
	MR_Word FilledBMs;

	Buffer = (ML_BitBufferPtr) mercury__bit_buffer__write__Buffer_3 ;
		{
#line 129 "bit_buffer.opt"

    FilledBMs = Buffer->ML_bit_buffer_filled_bitmaps;

#line 3466 "bit_buffer.write.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bit_buffer__write__V_13_13  = FilledBMs;
#line 129 "bit_buffer.opt"
}
#line 395 "list.opt"
    {
#line 395 "list.opt"
      mercury__bit_buffer__write__foldl__ho4_4_p_in__list_0(mercury__bit_buffer__write__V_13_13, (MR_Integer) 0, &mercury__bit_buffer__write__V_7_7);
    }
#line 179 "bit_buffer.write.m"
    mercury__bit_buffer__write__HeadVar__2_2 = (mercury__bit_buffer__write__V_6_6 + mercury__bit_buffer__write__V_7_7);
#line 178 "bit_buffer.write.m"
    return mercury__bit_buffer__write__HeadVar__2_2;
#line 178 "bit_buffer.write.m"
  }
#line 62 "bit_buffer.write.m"
}

#line 57 "bit_buffer.write.m"
MR_Word MR_CALL 
mercury__bit_buffer__write__new_bitmap_builder_1_f_0(
#line 57 "bit_buffer.write.m"
  MR_Integer mercury__bit_buffer__write__NumBytes_3)
#line 57 "bit_buffer.write.m"
{
#line 172 "bit_buffer.write.m"
  {
#line 172 "bit_buffer.write.m"
    MR_bool mercury__bit_buffer__write__succeeded;
#line 172 "bit_buffer.write.m"
    MR_Word mercury__bit_buffer__write__Buffer_4;
#line 172 "bit_buffer.write.m"
    MR_Word mercury__bit_buffer__write__TypeCtorInfo_16_16;
#line 172 "bit_buffer.write.m"
    MR_Word mercury__bit_buffer__write__TypeCtorInfo_17_17;
#line 172 "bit_buffer.write.m"
    MR_Word mercury__bit_buffer__write__TypeInfo_18_18;
#line 172 "bit_buffer.write.m"
    MR_Integer mercury__bit_buffer__write__Size_5 = (mercury__bit_buffer__write__NumBytes_3 * (MR_Integer) 8);
#line 172 "bit_buffer.write.m"
    MR_Box mercury__bit_buffer__write__BM_6;
#line 172 "bit_buffer.write.m"
    MR_Integer mercury__bit_buffer__write__V_8_8 = (mercury__bit_buffer__write__Size_5 + (MR_Integer) 32);
#line 172 "bit_buffer.write.m"
    MR_Box mercury__bit_buffer__write__V_11_11;

#line 174 "bit_buffer.write.m"
    {
#line 174 "bit_buffer.write.m"
      mercury__bit_buffer__write__BM_6 = mercury__bitmap__init_2_f_0(mercury__bit_buffer__write__V_8_8, (MR_Integer) 0);
    }
#line 3520 "bit_buffer.write.c"
    mercury__bit_buffer__write__TypeCtorInfo_16_16 = (MR_Word) &mercury__bit_buffer__bit_buffer__type_ctor_info_error_stream_0;
#line 3522 "bit_buffer.write.c"
    mercury__bit_buffer__write__TypeCtorInfo_17_17 = (MR_Word) &mercury__bit_buffer__bit_buffer__type_ctor_info_error_state_0;
#line 3524 "bit_buffer.write.c"
    mercury__bit_buffer__write__TypeInfo_18_18 = (MR_Word) &mercury__bit_buffer__write_scalar_common_1[0];
#line 176 "bit_buffer.write.m"
    mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 176 "bit_buffer.write.m"
    mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 175 "bit_buffer.write.m"
    {
#line 175 "bit_buffer.write.m"
      mercury__bit_buffer__write__V_11_11 = mercury__bit_buffer__new_buffer_6_f_0(mercury__bit_buffer__write__TypeCtorInfo_16_16, mercury__bit_buffer__write__TypeCtorInfo_17_17, mercury__bit_buffer__write__TypeInfo_18_18, mercury__bit_buffer__write__BM_6, (MR_Integer) 0, mercury__bit_buffer__write__Size_5, (MR_Integer) 0, ((MR_Box) ((MR_Integer) 0)), ((MR_Box) ((MR_Integer) 0)));
    }
#line 175 "bit_buffer.write.m"
    mercury__bit_buffer__write__Buffer_4 = (MR_Word) mercury__bit_buffer__write__V_11_11;
#line 172 "bit_buffer.write.m"
    return mercury__bit_buffer__write__Buffer_4;
#line 172 "bit_buffer.write.m"
  }
#line 57 "bit_buffer.write.m"
}

#line 49 "bit_buffer.write.m"
MR_Word MR_CALL 
mercury__bit_buffer__write__new_3_f_0(
#line 49 "bit_buffer.write.m"
  MR_Word mercury__bit_buffer__write__TypeClassInfo_for_writer_20,
#line 49 "bit_buffer.write.m"
  MR_Integer mercury__bit_buffer__write__NumBytes_5,
#line 49 "bit_buffer.write.m"
  MR_Box mercury__bit_buffer__write__Stream_6,
#line 49 "bit_buffer.write.m"
  MR_Box mercury__bit_buffer__write__State_7)
#line 49 "bit_buffer.write.m"
{
#line 166 "bit_buffer.write.m"
  {
#line 166 "bit_buffer.write.m"
    MR_bool mercury__bit_buffer__write__succeeded;
#line 166 "bit_buffer.write.m"
    MR_Word mercury__bit_buffer__write__Buffer_8;
#line 166 "bit_buffer.write.m"
    MR_Word mercury__bit_buffer__write__TypeInfo_22_22;
#line 166 "bit_buffer.write.m"
    MR_Word mercury__bit_buffer__write__TypeInfo_24_24;
#line 166 "bit_buffer.write.m"
    MR_Word mercury__bit_buffer__write__TypeInfo_25_25;
#line 166 "bit_buffer.write.m"
    MR_Integer mercury__bit_buffer__write__SizeInBits_9 = (mercury__bit_buffer__write__NumBytes_5 * (MR_Integer) 8);
#line 166 "bit_buffer.write.m"
    MR_Integer mercury__bit_buffer__write__Size_10;
#line 166 "bit_buffer.write.m"
    MR_Box mercury__bit_buffer__write__BM_11;
#line 166 "bit_buffer.write.m"
    MR_Integer mercury__bit_buffer__write__V_14_14;
#line 166 "bit_buffer.write.m"
    MR_Box mercury__bit_buffer__write__V_17_17;

#line 75 "int.opt"
    mercury__bit_buffer__write__succeeded = (mercury__bit_buffer__write__SizeInBits_9 > (MR_Integer) 32);
#line 78 "int.opt"
    if (mercury__bit_buffer__write__succeeded)
#line 77 "int.opt"
      mercury__bit_buffer__write__Size_10 = mercury__bit_buffer__write__SizeInBits_9;
#line 78 "int.opt"
    else
#line 79 "int.opt"
      mercury__bit_buffer__write__Size_10 = (MR_Integer) 32;
#line 169 "bit_buffer.write.m"
    mercury__bit_buffer__write__V_14_14 = (mercury__bit_buffer__write__Size_10 + (MR_Integer) 32);
#line 169 "bit_buffer.write.m"
    {
#line 169 "bit_buffer.write.m"
      mercury__bit_buffer__write__BM_11 = mercury__bitmap__init_2_f_0(mercury__bit_buffer__write__V_14_14, (MR_Integer) 0);
    }
#line 133 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__bit_buffer__write__new_3_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__bit_buffer__write__TypeClassInfo_for_writer_20 ;
	Index =  (MR_Integer) 2 ;
		{
#line 133 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 3612 "bit_buffer.write.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bit_buffer__write__TypeInfo_22_22  = TypeInfo;
#line 133 "private_builtin.opt"
}
#line 133 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__bit_buffer__write__new_3_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__bit_buffer__write__TypeClassInfo_for_writer_20 ;
	Index =  (MR_Integer) 4 ;
		{
#line 133 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 3634 "bit_buffer.write.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bit_buffer__write__TypeInfo_24_24  = TypeInfo;
#line 133 "private_builtin.opt"
}
#line 3641 "bit_buffer.write.c"
    mercury__bit_buffer__write__TypeInfo_25_25 = (MR_Word) &mercury__bit_buffer__write_scalar_common_1[0];
#line 170 "bit_buffer.write.m"
    {
#line 170 "bit_buffer.write.m"
      mercury__bit_buffer__write__V_17_17 = mercury__bit_buffer__new_buffer_6_f_0(mercury__bit_buffer__write__TypeInfo_22_22, mercury__bit_buffer__write__TypeInfo_24_24, mercury__bit_buffer__write__TypeInfo_25_25, mercury__bit_buffer__write__BM_11, (MR_Integer) 0, mercury__bit_buffer__write__Size_10, (MR_Integer) 1, mercury__bit_buffer__write__Stream_6, mercury__bit_buffer__write__State_7);
    }
#line 170 "bit_buffer.write.m"
    mercury__bit_buffer__write__Buffer_8 = (MR_Word) mercury__bit_buffer__write__V_17_17;
#line 166 "bit_buffer.write.m"
    return mercury__bit_buffer__write__Buffer_8;
#line 166 "bit_buffer.write.m"
  }
#line 49 "bit_buffer.write.m"
}

void mercury__bit_buffer__write__init(void)
{
}

void mercury__bit_buffer__write__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mercury__bit_buffer__write__bit_buffer__write__type_ctor_info_io_write_buffer_0);
	MR_register_type_ctor_info(&mercury__bit_buffer__write__bit_buffer__write__type_ctor_info_write_buffer_2);
	MR_register_type_ctor_info(&mercury__bit_buffer__write__bit_buffer__write__type_ctor_info_write_buffer_0);
}

void mercury__bit_buffer__write__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module bit_buffer.write. */
