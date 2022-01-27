/*
** Automatically generated from `bit_buffer.read.m'
** by the Mercury compiler,
** version DEV
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


/* :- module bit_buffer.read. */
/* :- implementation. */

/*
INIT mercury__bit_buffer__read__init
ENDINIT
*/

#include "bit_buffer.read.mih"


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




#line 95 "bit_buffer.read.c"
static const MR_FA_TypeInfo_Struct3 mercury__bit_buffer__read__bit_buffer__read__ti_read_buffer_3io__type_ctor_info_binary_input_stream_0io__type_ctor_info_state_0io__type_ctor_info_error_0;

#line 98 "bit_buffer.read.c"
static const MR_Integer mercury__bit_buffer__read__bit_buffer__read__functor_number_map_read_buffer_3[1];

#line 101 "bit_buffer.read.c"
static const MR_FA_PseudoTypeInfo_Struct3 mercury__bit_buffer__read__bit_buffer__pti_bit_buffer_3__pseudo_1__pseudo_2__pseudo_3;

#line 104 "bit_buffer.read.c"
static const MR_NotagFunctorDesc mercury__bit_buffer__read__bit_buffer__read__notag_functor_desc_read_buffer_3;

#line 107 "bit_buffer.read.c"
static const MR_FA_TypeInfo_Struct3 mercury__bit_buffer__read__bit_buffer__read__ti_read_buffer_3bit_buffer__type_ctor_info_error_stream_0bit_buffer__type_ctor_info_error_state_0bit_buffer__type_ctor_info_error_stream_error_0;

#line 110 "bit_buffer.read.c"
static MR_bool MR_CALL 
mercury__bit_buffer__read____Unify____io_read_buffer_0_0_10001(
#line 113 "bit_buffer.read.c"
  MR_Box mercury__bit_buffer__read__wrapper_arg_1,
#line 115 "bit_buffer.read.c"
  MR_Box mercury__bit_buffer__read__wrapper_arg_2);

#line 118 "bit_buffer.read.c"
static void MR_CALL 
mercury__bit_buffer__read____Compare____io_read_buffer_0_0_10001(
#line 121 "bit_buffer.read.c"
  MR_Box * mercury__bit_buffer__read__wrapper_arg_1,
#line 123 "bit_buffer.read.c"
  MR_Box mercury__bit_buffer__read__wrapper_arg_2,
#line 125 "bit_buffer.read.c"
  MR_Box mercury__bit_buffer__read__wrapper_arg_3);

#line 128 "bit_buffer.read.c"
static MR_bool MR_CALL 
mercury__bit_buffer__read____Unify____read_buffer_3_0_10001(
#line 131 "bit_buffer.read.c"
  MR_Box mercury__bit_buffer__read__wrapper_arg_1,
#line 133 "bit_buffer.read.c"
  MR_Box mercury__bit_buffer__read__wrapper_arg_2,
#line 135 "bit_buffer.read.c"
  MR_Box mercury__bit_buffer__read__wrapper_arg_3,
#line 137 "bit_buffer.read.c"
  MR_Box mercury__bit_buffer__read__wrapper_arg_4,
#line 139 "bit_buffer.read.c"
  MR_Box mercury__bit_buffer__read__wrapper_arg_5);

#line 142 "bit_buffer.read.c"
static void MR_CALL 
mercury__bit_buffer__read____Compare____read_buffer_3_0_10001(
#line 145 "bit_buffer.read.c"
  MR_Box mercury__bit_buffer__read__wrapper_arg_1,
#line 147 "bit_buffer.read.c"
  MR_Box mercury__bit_buffer__read__wrapper_arg_2,
#line 149 "bit_buffer.read.c"
  MR_Box mercury__bit_buffer__read__wrapper_arg_3,
#line 151 "bit_buffer.read.c"
  MR_Box * mercury__bit_buffer__read__wrapper_arg_4,
#line 153 "bit_buffer.read.c"
  MR_Box mercury__bit_buffer__read__wrapper_arg_5,
#line 155 "bit_buffer.read.c"
  MR_Box mercury__bit_buffer__read__wrapper_arg_6);

#line 158 "bit_buffer.read.c"
static MR_bool MR_CALL 
mercury__bit_buffer__read____Unify____read_buffer_0_0_10001(
#line 161 "bit_buffer.read.c"
  MR_Box mercury__bit_buffer__read__wrapper_arg_1,
#line 163 "bit_buffer.read.c"
  MR_Box mercury__bit_buffer__read__wrapper_arg_2);

#line 166 "bit_buffer.read.c"
static void MR_CALL 
mercury__bit_buffer__read____Compare____read_buffer_0_0_10001(
#line 169 "bit_buffer.read.c"
  MR_Box * mercury__bit_buffer__read__wrapper_arg_1,
#line 171 "bit_buffer.read.c"
  MR_Box mercury__bit_buffer__read__wrapper_arg_2,
#line 173 "bit_buffer.read.c"
  MR_Box mercury__bit_buffer__read__wrapper_arg_3);

#line 16 "ops.opt"
static MR_Integer MR_CALL 
mercury__bit_buffer__read__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);

#line 529 "bit_buffer.read.m"
static void MR_CALL 
mercury__bit_buffer__read__do_refill_read_buffer_3_p_0(
#line 529 "bit_buffer.read.m"
  MR_Word mercury__bit_buffer__read__TypeClassInfo_for_bulk_reader_49,
#line 529 "bit_buffer.read.m"
  MR_Word * mercury__bit_buffer__read__Result_4,
#line 529 "bit_buffer.read.m"
  MR_Box mercury__bit_buffer__read__STATE_VARIABLE_Buffer_0_19,
#line 529 "bit_buffer.read.m"
  MR_Box * mercury__bit_buffer__read__STATE_VARIABLE_Buffer_20);

#line 491 "bit_buffer.read.m"
static void MR_CALL 
mercury__bit_buffer__read__bulk_get_into_result_bitmap_11_p_0(
#line 491 "bit_buffer.read.m"
  MR_Word mercury__bit_buffer__read__TypeClassInfo_for_bulk_reader_45,
#line 491 "bit_buffer.read.m"
  MR_Integer mercury__bit_buffer__read__STATE_VARIABLE_Index_0_26,
#line 491 "bit_buffer.read.m"
  MR_Integer * mercury__bit_buffer__read__STATE_VARIABLE_Index_27,
#line 491 "bit_buffer.read.m"
  MR_Integer mercury__bit_buffer__read__STATE_VARIABLE_NumBits_0_28,
#line 491 "bit_buffer.read.m"
  MR_Integer * mercury__bit_buffer__read__STATE_VARIABLE_NumBits_29,
#line 491 "bit_buffer.read.m"
  MR_Box mercury__bit_buffer__read__STATE_VARIABLE_BM_0_30,
#line 491 "bit_buffer.read.m"
  MR_Box * mercury__bit_buffer__read__STATE_VARIABLE_BM_31,
#line 491 "bit_buffer.read.m"
  MR_Integer mercury__bit_buffer__read__STATE_VARIABLE_NumBitsRead_0_32,
#line 491 "bit_buffer.read.m"
  MR_Integer * mercury__bit_buffer__read__STATE_VARIABLE_NumBitsRead_33,
#line 491 "bit_buffer.read.m"
  MR_Word * mercury__bit_buffer__read__Result_16,
#line 491 "bit_buffer.read.m"
  MR_Box mercury__bit_buffer__read__STATE_VARIABLE_Buffer_0_34,
#line 491 "bit_buffer.read.m"
  MR_Box * mercury__bit_buffer__read__STATE_VARIABLE_Buffer_35);

#line 475 "bit_buffer.read.m"
static void MR_CALL 
mercury__bit_buffer__read__copy_buffered_bits_to_bitmap_10_p_0(
#line 475 "bit_buffer.read.m"
  MR_Word mercury__bit_buffer__read__TypeInfo_for_S_38,
#line 475 "bit_buffer.read.m"
  MR_Word mercury__bit_buffer__read__TypeInfo_for_St_39,
#line 475 "bit_buffer.read.m"
  MR_Word mercury__bit_buffer__read__TypeInfo_for_E_40,
#line 475 "bit_buffer.read.m"
  MR_Integer mercury__bit_buffer__read__STATE_VARIABLE_Index_0_20,
#line 475 "bit_buffer.read.m"
  MR_Integer * mercury__bit_buffer__read__STATE_VARIABLE_Index_21,
#line 475 "bit_buffer.read.m"
  MR_Integer mercury__bit_buffer__read__STATE_VARIABLE_NumBits_0_22,
#line 475 "bit_buffer.read.m"
  MR_Integer * mercury__bit_buffer__read__STATE_VARIABLE_NumBits_23,
#line 475 "bit_buffer.read.m"
  MR_Box mercury__bit_buffer__read__STATE_VARIABLE_BM_0_24,
#line 475 "bit_buffer.read.m"
  MR_Box * mercury__bit_buffer__read__STATE_VARIABLE_BM_25,
#line 475 "bit_buffer.read.m"
  MR_Integer mercury__bit_buffer__read__STATE_VARIABLE_NumBitsRead_0_26,
#line 475 "bit_buffer.read.m"
  MR_Integer * mercury__bit_buffer__read__STATE_VARIABLE_NumBitsRead_27,
#line 475 "bit_buffer.read.m"
  MR_Box mercury__bit_buffer__read__STATE_VARIABLE_Buffer_0_28,
#line 475 "bit_buffer.read.m"
  MR_Box * mercury__bit_buffer__read__STATE_VARIABLE_Buffer_29);

#line 401 "bit_buffer.read.m"
static void MR_CALL 
mercury__bit_buffer__read__recursively_get_bitmap_9_p_0(
#line 401 "bit_buffer.read.m"
  MR_Word mercury__bit_buffer__read__TypeClassInfo_for_bulk_reader_78,
#line 401 "bit_buffer.read.m"
  MR_Integer mercury__bit_buffer__read__STATE_VARIABLE_Index_0_22,
#line 401 "bit_buffer.read.m"
  MR_Integer mercury__bit_buffer__read__STATE_VARIABLE_NumBits_0_23,
#line 401 "bit_buffer.read.m"
  MR_Box mercury__bit_buffer__read__STATE_VARIABLE_BM_0_24,
#line 401 "bit_buffer.read.m"
  MR_Box * mercury__bit_buffer__read__STATE_VARIABLE_BM_25,
#line 401 "bit_buffer.read.m"
  MR_Integer mercury__bit_buffer__read__STATE_VARIABLE_NumBitsRead_0_26,
#line 401 "bit_buffer.read.m"
  MR_Integer * mercury__bit_buffer__read__STATE_VARIABLE_NumBitsRead_27,
#line 401 "bit_buffer.read.m"
  MR_Word * mercury__bit_buffer__read__Result_14,
#line 401 "bit_buffer.read.m"
  MR_Box mercury__bit_buffer__read__STATE_VARIABLE_Buffer_0_28,
#line 401 "bit_buffer.read.m"
  MR_Box * mercury__bit_buffer__read__STATE_VARIABLE_Buffer_29);

#line 333 "bit_buffer.read.m"
static void MR_CALL 
mercury__bit_buffer__read__do_get_bits_7_p_0(
#line 333 "bit_buffer.read.m"
  MR_Word mercury__bit_buffer__read__TypeClassInfo_for_bulk_reader_46,
#line 333 "bit_buffer.read.m"
  MR_Integer mercury__bit_buffer__read__Index_8,
#line 333 "bit_buffer.read.m"
  MR_Integer mercury__bit_buffer__read__NumBits_9,
#line 333 "bit_buffer.read.m"
  MR_Integer mercury__bit_buffer__read__STATE_VARIABLE_Word_0_22,
#line 333 "bit_buffer.read.m"
  MR_Integer * mercury__bit_buffer__read__STATE_VARIABLE_Word_23,
#line 333 "bit_buffer.read.m"
  MR_Integer * mercury__bit_buffer__read__NumBitsRead_11,
#line 333 "bit_buffer.read.m"
  MR_Word mercury__bit_buffer__read__RB_6,
#line 333 "bit_buffer.read.m"
  MR_Word * mercury__bit_buffer__read__HeadVar__7_7);


static /* final */ const MR_Box mercury__bit_buffer__read_scalar_common_1[3][4];

static /* final */ const MR_Box mercury__bit_buffer__read_scalar_common_2[1][3];

static /* final */ const MR_Box mercury__bit_buffer__read_scalar_common_3[2][5];




static /* final */ const MR_Box mercury__bit_buffer__read_scalar_common_1[3][4] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__bit_buffer__read__bit_buffer__read__type_ctor_info_read_buffer_3)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_binary_input_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_error_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__bit_buffer__read__bit_buffer__read__type_ctor_info_read_buffer_3)),
    ((MR_Box) (&mercury__bit_buffer__bit_buffer__type_ctor_info_error_stream_0)),
    ((MR_Box) (&mercury__bit_buffer__bit_buffer__type_ctor_info_error_state_0)),
    ((MR_Box) (&mercury__bit_buffer__bit_buffer__type_ctor_info_error_stream_error_0))
  },
  /* row 2 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__bit_buffer__read_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__bit_buffer__read_scalar_common_2[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__bit_buffer__read_scalar_common_3[2][5] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__bit_buffer__read_scalar_common_1[2])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__character__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__bit_buffer__read_scalar_common_1[2])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};



#include "bit_buffer.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "array.mh"
#include "dir.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "table_builtin.mh"
#include "time.mh"
#include "version_array.mh"
#include "bit_buffer.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "char.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "pretty_printer.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "array.mh"
#include "version_array.mh"
#include "array.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "math.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "rtti_implementation.mh"
#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "construct.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "array.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "float.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "type_desc.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "version_array.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "time.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "string.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "builtin.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "exception.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "stm_builtin.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "store.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "int.mh"
#include "array.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "time.mh"
#include "array.mh"
#include "dir.mh"
#include "table_builtin.mh"
#include "benchmarking.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "dir.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "table_builtin.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "private_builtin.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



#line 481 "bit_buffer.read.c"
static const MR_FA_TypeInfo_Struct3 mercury__bit_buffer__read__bit_buffer__read__ti_read_buffer_3io__type_ctor_info_binary_input_stream_0io__type_ctor_info_state_0io__type_ctor_info_error_0 = {
  &mercury__bit_buffer__read__bit_buffer__read__type_ctor_info_read_buffer_3,
  {
    (MR_TypeInfo) &mercury__io__io__type_ctor_info_binary_input_stream_0,
    (MR_TypeInfo) &mercury__io__io__type_ctor_info_state_0,
    (MR_TypeInfo) &mercury__io__io__type_ctor_info_error_0
  }
};

#line 491 "bit_buffer.read.c"
const MR_TypeCtorInfo_Struct mercury__bit_buffer__read__bit_buffer__read__type_ctor_info_io_read_buffer_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mercury__bit_buffer__read____Unify____io_read_buffer_0_0_10001)),
  ((MR_Box) (mercury__bit_buffer__read____Compare____io_read_buffer_0_0_10001)),
  (MR_String) "bit_buffer.read",
  (MR_String) "io_read_buffer",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mercury__bit_buffer__read__bit_buffer__read__ti_read_buffer_3io__type_ctor_info_binary_input_stream_0io__type_ctor_info_state_0io__type_ctor_info_error_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 508 "bit_buffer.read.c"
static const MR_Integer mercury__bit_buffer__read__bit_buffer__read__functor_number_map_read_buffer_3[1] = {
  (MR_Integer) 0
};

#line 513 "bit_buffer.read.c"
static const MR_FA_PseudoTypeInfo_Struct3 mercury__bit_buffer__read__bit_buffer__pti_bit_buffer_3__pseudo_1__pseudo_2__pseudo_3 = {
  &mercury__bit_buffer__bit_buffer__type_ctor_info_bit_buffer_3,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) (MR_Integer) 2,
    (MR_PseudoTypeInfo) (MR_Integer) 3
  }
};

#line 523 "bit_buffer.read.c"
static const MR_NotagFunctorDesc mercury__bit_buffer__read__bit_buffer__read__notag_functor_desc_read_buffer_3 = {
  (MR_String) "read_buffer",
  (MR_PseudoTypeInfo) &mercury__bit_buffer__read__bit_buffer__pti_bit_buffer_3__pseudo_1__pseudo_2__pseudo_3,
  (MR_String) "bit_buffer"
};

#line 530 "bit_buffer.read.c"
const MR_TypeCtorInfo_Struct mercury__bit_buffer__read__bit_buffer__read__type_ctor_info_read_buffer_3 = {
  (MR_Integer) 3,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_NOTAG,
  ((MR_Box) (mercury__bit_buffer__read____Unify____read_buffer_3_0_10001)),
  ((MR_Box) (mercury__bit_buffer__read____Compare____read_buffer_3_0_10001)),
  (MR_String) "bit_buffer.read",
  (MR_String) "read_buffer",
  {     &mercury__bit_buffer__read__bit_buffer__read__notag_functor_desc_read_buffer_3 },
  {     &mercury__bit_buffer__read__bit_buffer__read__notag_functor_desc_read_buffer_3 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mercury__bit_buffer__read__bit_buffer__read__functor_number_map_read_buffer_3
};

#line 547 "bit_buffer.read.c"
static const MR_FA_TypeInfo_Struct3 mercury__bit_buffer__read__bit_buffer__read__ti_read_buffer_3bit_buffer__type_ctor_info_error_stream_0bit_buffer__type_ctor_info_error_state_0bit_buffer__type_ctor_info_error_stream_error_0 = {
  &mercury__bit_buffer__read__bit_buffer__read__type_ctor_info_read_buffer_3,
  {
    (MR_TypeInfo) &mercury__bit_buffer__bit_buffer__type_ctor_info_error_stream_0,
    (MR_TypeInfo) &mercury__bit_buffer__bit_buffer__type_ctor_info_error_state_0,
    (MR_TypeInfo) &mercury__bit_buffer__bit_buffer__type_ctor_info_error_stream_error_0
  }
};

#line 557 "bit_buffer.read.c"
const MR_TypeCtorInfo_Struct mercury__bit_buffer__read__bit_buffer__read__type_ctor_info_read_buffer_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mercury__bit_buffer__read____Unify____read_buffer_0_0_10001)),
  ((MR_Box) (mercury__bit_buffer__read____Compare____read_buffer_0_0_10001)),
  (MR_String) "bit_buffer.read",
  (MR_String) "read_buffer",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mercury__bit_buffer__read__bit_buffer__read__ti_read_buffer_3bit_buffer__type_ctor_info_error_stream_0bit_buffer__type_ctor_info_error_state_0bit_buffer__type_ctor_info_error_stream_error_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 574 "bit_buffer.read.c"
static MR_bool MR_CALL 
mercury__bit_buffer__read____Unify____io_read_buffer_0_0_10001(
#line 577 "bit_buffer.read.c"
  MR_Box mercury__bit_buffer__read__wrapper_arg_1,
#line 579 "bit_buffer.read.c"
  MR_Box mercury__bit_buffer__read__wrapper_arg_2)
#line 581 "bit_buffer.read.c"
{
#line 583 "bit_buffer.read.c"
  {
#line 585 "bit_buffer.read.c"
    MR_bool mercury__bit_buffer__read__succeeded;

#line 588 "bit_buffer.read.c"
    {
#line 590 "bit_buffer.read.c"
      mercury__bit_buffer__read__succeeded = mercury__bit_buffer__read____Unify____io_read_buffer_0_0(((MR_Word) mercury__bit_buffer__read__wrapper_arg_1), ((MR_Word) mercury__bit_buffer__read__wrapper_arg_2));
    }
#line 593 "bit_buffer.read.c"
    return mercury__bit_buffer__read__succeeded;
#line 595 "bit_buffer.read.c"
  }
#line 597 "bit_buffer.read.c"
}

#line 600 "bit_buffer.read.c"
static void MR_CALL 
mercury__bit_buffer__read____Compare____io_read_buffer_0_0_10001(
#line 603 "bit_buffer.read.c"
  MR_Box * mercury__bit_buffer__read__wrapper_arg_1,
#line 605 "bit_buffer.read.c"
  MR_Box mercury__bit_buffer__read__wrapper_arg_2,
#line 607 "bit_buffer.read.c"
  MR_Box mercury__bit_buffer__read__wrapper_arg_3)
#line 609 "bit_buffer.read.c"
{
#line 611 "bit_buffer.read.c"
  {
#line 613 "bit_buffer.read.c"
    MR_Word mercury__bit_buffer__read__conv0_HeadVar__1_1;

#line 616 "bit_buffer.read.c"
    {
#line 618 "bit_buffer.read.c"
      mercury__bit_buffer__read____Compare____io_read_buffer_0_0(&mercury__bit_buffer__read__conv0_HeadVar__1_1, ((MR_Word) mercury__bit_buffer__read__wrapper_arg_2), ((MR_Word) mercury__bit_buffer__read__wrapper_arg_3));
    }
#line 621 "bit_buffer.read.c"
    *mercury__bit_buffer__read__wrapper_arg_1 = ((MR_Box) (mercury__bit_buffer__read__conv0_HeadVar__1_1));
#line 623 "bit_buffer.read.c"
  }
#line 625 "bit_buffer.read.c"
}

#line 628 "bit_buffer.read.c"
static MR_bool MR_CALL 
mercury__bit_buffer__read____Unify____read_buffer_3_0_10001(
#line 631 "bit_buffer.read.c"
  MR_Box mercury__bit_buffer__read__wrapper_arg_1,
#line 633 "bit_buffer.read.c"
  MR_Box mercury__bit_buffer__read__wrapper_arg_2,
#line 635 "bit_buffer.read.c"
  MR_Box mercury__bit_buffer__read__wrapper_arg_3,
#line 637 "bit_buffer.read.c"
  MR_Box mercury__bit_buffer__read__wrapper_arg_4,
#line 639 "bit_buffer.read.c"
  MR_Box mercury__bit_buffer__read__wrapper_arg_5)
#line 641 "bit_buffer.read.c"
{
#line 643 "bit_buffer.read.c"
  {
#line 645 "bit_buffer.read.c"
    MR_bool mercury__bit_buffer__read__succeeded;

#line 648 "bit_buffer.read.c"
    {
#line 650 "bit_buffer.read.c"
      mercury__bit_buffer__read__succeeded = mercury__bit_buffer__read____Unify____read_buffer_3_0(((MR_Word) mercury__bit_buffer__read__wrapper_arg_1), ((MR_Word) mercury__bit_buffer__read__wrapper_arg_2), ((MR_Word) mercury__bit_buffer__read__wrapper_arg_3), ((MR_Word) mercury__bit_buffer__read__wrapper_arg_4), ((MR_Word) mercury__bit_buffer__read__wrapper_arg_5));
    }
#line 653 "bit_buffer.read.c"
    return mercury__bit_buffer__read__succeeded;
#line 655 "bit_buffer.read.c"
  }
#line 657 "bit_buffer.read.c"
}

#line 660 "bit_buffer.read.c"
static void MR_CALL 
mercury__bit_buffer__read____Compare____read_buffer_3_0_10001(
#line 663 "bit_buffer.read.c"
  MR_Box mercury__bit_buffer__read__wrapper_arg_1,
#line 665 "bit_buffer.read.c"
  MR_Box mercury__bit_buffer__read__wrapper_arg_2,
#line 667 "bit_buffer.read.c"
  MR_Box mercury__bit_buffer__read__wrapper_arg_3,
#line 669 "bit_buffer.read.c"
  MR_Box * mercury__bit_buffer__read__wrapper_arg_4,
#line 671 "bit_buffer.read.c"
  MR_Box mercury__bit_buffer__read__wrapper_arg_5,
#line 673 "bit_buffer.read.c"
  MR_Box mercury__bit_buffer__read__wrapper_arg_6)
#line 675 "bit_buffer.read.c"
{
#line 677 "bit_buffer.read.c"
  {
#line 679 "bit_buffer.read.c"
    MR_Word mercury__bit_buffer__read__conv0_HeadVar__1_1;

#line 682 "bit_buffer.read.c"
    {
#line 684 "bit_buffer.read.c"
      mercury__bit_buffer__read____Compare____read_buffer_3_0(((MR_Word) mercury__bit_buffer__read__wrapper_arg_1), ((MR_Word) mercury__bit_buffer__read__wrapper_arg_2), ((MR_Word) mercury__bit_buffer__read__wrapper_arg_3), &mercury__bit_buffer__read__conv0_HeadVar__1_1, ((MR_Word) mercury__bit_buffer__read__wrapper_arg_5), ((MR_Word) mercury__bit_buffer__read__wrapper_arg_6));
    }
#line 687 "bit_buffer.read.c"
    *mercury__bit_buffer__read__wrapper_arg_4 = ((MR_Box) (mercury__bit_buffer__read__conv0_HeadVar__1_1));
#line 689 "bit_buffer.read.c"
  }
#line 691 "bit_buffer.read.c"
}

#line 694 "bit_buffer.read.c"
static MR_bool MR_CALL 
mercury__bit_buffer__read____Unify____read_buffer_0_0_10001(
#line 697 "bit_buffer.read.c"
  MR_Box mercury__bit_buffer__read__wrapper_arg_1,
#line 699 "bit_buffer.read.c"
  MR_Box mercury__bit_buffer__read__wrapper_arg_2)
#line 701 "bit_buffer.read.c"
{
#line 703 "bit_buffer.read.c"
  {
#line 705 "bit_buffer.read.c"
    MR_bool mercury__bit_buffer__read__succeeded;

#line 708 "bit_buffer.read.c"
    {
#line 710 "bit_buffer.read.c"
      mercury__bit_buffer__read__succeeded = mercury__bit_buffer__read____Unify____read_buffer_0_0(((MR_Word) mercury__bit_buffer__read__wrapper_arg_1), ((MR_Word) mercury__bit_buffer__read__wrapper_arg_2));
    }
#line 713 "bit_buffer.read.c"
    return mercury__bit_buffer__read__succeeded;
#line 715 "bit_buffer.read.c"
  }
#line 717 "bit_buffer.read.c"
}

#line 720 "bit_buffer.read.c"
static void MR_CALL 
mercury__bit_buffer__read____Compare____read_buffer_0_0_10001(
#line 723 "bit_buffer.read.c"
  MR_Box * mercury__bit_buffer__read__wrapper_arg_1,
#line 725 "bit_buffer.read.c"
  MR_Box mercury__bit_buffer__read__wrapper_arg_2,
#line 727 "bit_buffer.read.c"
  MR_Box mercury__bit_buffer__read__wrapper_arg_3)
#line 729 "bit_buffer.read.c"
{
#line 731 "bit_buffer.read.c"
  {
#line 733 "bit_buffer.read.c"
    MR_Word mercury__bit_buffer__read__conv0_HeadVar__1_1;

#line 736 "bit_buffer.read.c"
    {
#line 738 "bit_buffer.read.c"
      mercury__bit_buffer__read____Compare____read_buffer_0_0(&mercury__bit_buffer__read__conv0_HeadVar__1_1, ((MR_Word) mercury__bit_buffer__read__wrapper_arg_2), ((MR_Word) mercury__bit_buffer__read__wrapper_arg_3));
    }
#line 741 "bit_buffer.read.c"
    *mercury__bit_buffer__read__wrapper_arg_1 = ((MR_Box) (mercury__bit_buffer__read__conv0_HeadVar__1_1));
#line 743 "bit_buffer.read.c"
  }
#line 745 "bit_buffer.read.c"
}

#line 16 "ops.opt"
static MR_Integer MR_CALL 
mercury__bit_buffer__read__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
#line 16 "ops.opt"
{
#line 41 "ops.opt"
  {
#line 41 "ops.opt"
    MR_bool mercury__bit_buffer__read__succeeded;

#line 41 "ops.opt"
    return (MR_Integer) 1200;
#line 41 "ops.opt"
  }
#line 16 "ops.opt"
}

#line 210 "bit_buffer.read.m"
void MR_CALL 
mercury__bit_buffer__read____Compare____read_buffer_3_0(
#line 210 "bit_buffer.read.m"
  MR_Word mercury__bit_buffer__read__TypeInfo_for_Stream_8,
#line 210 "bit_buffer.read.m"
  MR_Word mercury__bit_buffer__read__TypeInfo_for_State_9,
#line 210 "bit_buffer.read.m"
  MR_Word mercury__bit_buffer__read__TypeInfo_for_Error_10,
#line 210 "bit_buffer.read.m"
  MR_Word * mercury__bit_buffer__read__HeadVar__1_1,
#line 210 "bit_buffer.read.m"
  MR_Word mercury__bit_buffer__read__HeadVar__2_2,
#line 210 "bit_buffer.read.m"
  MR_Word mercury__bit_buffer__read__HeadVar__3_3)
#line 210 "bit_buffer.read.m"
{
#line 210 "bit_buffer.read.m"
  {
#line 210 "bit_buffer.read.m"
    MR_bool mercury__bit_buffer__read__succeeded;
#line 210 "bit_buffer.read.m"
    MR_Integer mercury__bit_buffer__read__CastX_6 = (MR_Integer) mercury__bit_buffer__read__HeadVar__2_2;
#line 210 "bit_buffer.read.m"
    MR_Integer mercury__bit_buffer__read__CastY_7 = (MR_Integer) mercury__bit_buffer__read__HeadVar__3_3;

#line 210 "bit_buffer.read.m"
    mercury__bit_buffer__read__succeeded = (mercury__bit_buffer__read__CastX_6 == mercury__bit_buffer__read__CastY_7);
#line 210 "bit_buffer.read.m"
    if (mercury__bit_buffer__read__succeeded)
#line 795 "bit_buffer.read.c"
      *mercury__bit_buffer__read__HeadVar__1_1 = (MR_Integer) 0;
#line 210 "bit_buffer.read.m"
    else
#line 210 "bit_buffer.read.m"
      {
#line 210 "bit_buffer.read.m"
        MR_Box mercury__bit_buffer__read__V_4_4 = (MR_Box) mercury__bit_buffer__read__HeadVar__2_2;
#line 210 "bit_buffer.read.m"
        MR_Box mercury__bit_buffer__read__V_5_5 = (MR_Box) mercury__bit_buffer__read__HeadVar__3_3;

#line 210 "bit_buffer.read.m"
        {
#line 210 "bit_buffer.read.m"
          mercury__bit_buffer____Compare____bit_buffer_3_0(mercury__bit_buffer__read__TypeInfo_for_Stream_8, mercury__bit_buffer__read__TypeInfo_for_State_9, mercury__bit_buffer__read__TypeInfo_for_Error_10, mercury__bit_buffer__read__HeadVar__1_1, mercury__bit_buffer__read__V_4_4, mercury__bit_buffer__read__V_5_5);
#line 210 "bit_buffer.read.m"
          return;
        }
#line 210 "bit_buffer.read.m"
      }
#line 210 "bit_buffer.read.m"
  }
#line 210 "bit_buffer.read.m"
}

#line 210 "bit_buffer.read.m"
MR_bool MR_CALL 
mercury__bit_buffer__read____Unify____read_buffer_3_0(
#line 210 "bit_buffer.read.m"
  MR_Word mercury__bit_buffer__read__TypeInfo_for_Stream_7,
#line 210 "bit_buffer.read.m"
  MR_Word mercury__bit_buffer__read__TypeInfo_for_State_8,
#line 210 "bit_buffer.read.m"
  MR_Word mercury__bit_buffer__read__TypeInfo_for_Error_9,
#line 210 "bit_buffer.read.m"
  MR_Word mercury__bit_buffer__read__HeadVar__1_1,
#line 210 "bit_buffer.read.m"
  MR_Word mercury__bit_buffer__read__HeadVar__2_2)
#line 210 "bit_buffer.read.m"
{
#line 210 "bit_buffer.read.m"
  {
#line 210 "bit_buffer.read.m"
    MR_bool mercury__bit_buffer__read__succeeded;
#line 210 "bit_buffer.read.m"
    MR_Integer mercury__bit_buffer__read__CastX_5 = (MR_Integer) mercury__bit_buffer__read__HeadVar__1_1;
#line 210 "bit_buffer.read.m"
    MR_Integer mercury__bit_buffer__read__CastY_6 = (MR_Integer) mercury__bit_buffer__read__HeadVar__2_2;

#line 210 "bit_buffer.read.m"
    mercury__bit_buffer__read__succeeded = (mercury__bit_buffer__read__CastX_5 == mercury__bit_buffer__read__CastY_6);
#line 210 "bit_buffer.read.m"
    if (mercury__bit_buffer__read__succeeded)
#line 210 "bit_buffer.read.m"
      mercury__bit_buffer__read__succeeded = MR_TRUE;
#line 210 "bit_buffer.read.m"
    else
#line 210 "bit_buffer.read.m"
      {
#line 210 "bit_buffer.read.m"
        MR_Box mercury__bit_buffer__read__V_3_3 = (MR_Box) mercury__bit_buffer__read__HeadVar__1_1;
#line 210 "bit_buffer.read.m"
        MR_Box mercury__bit_buffer__read__V_4_4 = (MR_Box) mercury__bit_buffer__read__HeadVar__2_2;

#line 859 "bit_buffer.read.c"
        {
#line 861 "bit_buffer.read.c"
          return mercury__bit_buffer__read__succeeded = mercury__bit_buffer____Unify____bit_buffer_3_0(mercury__bit_buffer__read__TypeInfo_for_Stream_7, mercury__bit_buffer__read__TypeInfo_for_State_8, mercury__bit_buffer__read__TypeInfo_for_Error_9, mercury__bit_buffer__read__V_3_3, mercury__bit_buffer__read__V_4_4);
        }
#line 210 "bit_buffer.read.m"
      }
#line 210 "bit_buffer.read.m"
    return mercury__bit_buffer__read__succeeded;
#line 210 "bit_buffer.read.m"
  }
#line 210 "bit_buffer.read.m"
}

#line 44 "bit_buffer.read.m"
void MR_CALL 
mercury__bit_buffer__read____Compare____read_buffer_0_0(
#line 44 "bit_buffer.read.m"
  MR_Word * mercury__bit_buffer__read__HeadVar__1_1,
#line 44 "bit_buffer.read.m"
  MR_Word mercury__bit_buffer__read__HeadVar__2_2,
#line 44 "bit_buffer.read.m"
  MR_Word mercury__bit_buffer__read__HeadVar__3_3)
#line 44 "bit_buffer.read.m"
{
#line 44 "bit_buffer.read.m"
  {
#line 44 "bit_buffer.read.m"
    MR_bool mercury__bit_buffer__read__succeeded;
#line 44 "bit_buffer.read.m"
    MR_Word mercury__bit_buffer__read__TypeInfo_6_6 = (MR_Word) &mercury__bit_buffer__read_scalar_common_1[1];
#line 44 "bit_buffer.read.m"
    MR_Word mercury__bit_buffer__read__Cast_HeadVar1_4 = mercury__bit_buffer__read__HeadVar__2_2;
#line 44 "bit_buffer.read.m"
    MR_Word mercury__bit_buffer__read__Cast_HeadVar2_5 = mercury__bit_buffer__read__HeadVar__3_3;

#line 44 "bit_buffer.read.m"
    {
#line 44 "bit_buffer.read.m"
      mercury__builtin__compare_3_p_0(mercury__bit_buffer__read__TypeInfo_6_6, mercury__bit_buffer__read__HeadVar__1_1, ((MR_Box) (mercury__bit_buffer__read__Cast_HeadVar1_4)), ((MR_Box) (mercury__bit_buffer__read__Cast_HeadVar2_5)));
#line 44 "bit_buffer.read.m"
      return;
    }
#line 44 "bit_buffer.read.m"
  }
#line 44 "bit_buffer.read.m"
}

#line 44 "bit_buffer.read.m"
MR_bool MR_CALL 
mercury__bit_buffer__read____Unify____read_buffer_0_0(
#line 44 "bit_buffer.read.m"
  MR_Word mercury__bit_buffer__read__HeadVar__1_1,
#line 44 "bit_buffer.read.m"
  MR_Word mercury__bit_buffer__read__HeadVar__2_2)
#line 44 "bit_buffer.read.m"
{
#line 44 "bit_buffer.read.m"
  {
#line 44 "bit_buffer.read.m"
    MR_bool mercury__bit_buffer__read__succeeded;
#line 44 "bit_buffer.read.m"
    MR_Word mercury__bit_buffer__read__TypeCtorInfo_5_5 = (MR_Word) &mercury__bit_buffer__bit_buffer__type_ctor_info_error_stream_0;
#line 44 "bit_buffer.read.m"
    MR_Word mercury__bit_buffer__read__TypeCtorInfo_6_6 = (MR_Word) &mercury__bit_buffer__bit_buffer__type_ctor_info_error_state_0;
#line 44 "bit_buffer.read.m"
    MR_Word mercury__bit_buffer__read__TypeCtorInfo_7_7 = (MR_Word) &mercury__bit_buffer__bit_buffer__type_ctor_info_error_stream_error_0;
#line 44 "bit_buffer.read.m"
    MR_Word mercury__bit_buffer__read__Cast_HeadVar1_3 = mercury__bit_buffer__read__HeadVar__1_1;
#line 44 "bit_buffer.read.m"
    MR_Word mercury__bit_buffer__read__Cast_HeadVar2_4 = mercury__bit_buffer__read__HeadVar__2_2;
#line 210 "bit_buffer.read.m"
    MR_Integer mercury__bit_buffer__read__CastX_10 = (MR_Integer) mercury__bit_buffer__read__Cast_HeadVar1_3;
#line 210 "bit_buffer.read.m"
    MR_Integer mercury__bit_buffer__read__CastY_11 = (MR_Integer) mercury__bit_buffer__read__Cast_HeadVar2_4;

#line 210 "bit_buffer.read.m"
    mercury__bit_buffer__read__succeeded = (mercury__bit_buffer__read__CastX_10 == mercury__bit_buffer__read__CastY_11);
#line 210 "bit_buffer.read.m"
    if (mercury__bit_buffer__read__succeeded)
#line 210 "bit_buffer.read.m"
      mercury__bit_buffer__read__succeeded = MR_TRUE;
#line 210 "bit_buffer.read.m"
    else
#line 210 "bit_buffer.read.m"
      {
#line 210 "bit_buffer.read.m"
        MR_Box mercury__bit_buffer__read__V_8_8 = (MR_Box) mercury__bit_buffer__read__Cast_HeadVar1_3;
#line 210 "bit_buffer.read.m"
        MR_Box mercury__bit_buffer__read__V_9_9 = (MR_Box) mercury__bit_buffer__read__Cast_HeadVar2_4;

#line 950 "bit_buffer.read.c"
        {
#line 952 "bit_buffer.read.c"
          return mercury__bit_buffer__read__succeeded = mercury__bit_buffer____Unify____bit_buffer_3_0(mercury__bit_buffer__read__TypeCtorInfo_5_5, mercury__bit_buffer__read__TypeCtorInfo_6_6, mercury__bit_buffer__read__TypeCtorInfo_7_7, mercury__bit_buffer__read__V_8_8, mercury__bit_buffer__read__V_9_9);
        }
#line 210 "bit_buffer.read.m"
      }
#line 44 "bit_buffer.read.m"
    return mercury__bit_buffer__read__succeeded;
#line 44 "bit_buffer.read.m"
  }
#line 44 "bit_buffer.read.m"
}

#line 47 "bit_buffer.read.m"
void MR_CALL 
mercury__bit_buffer__read____Compare____io_read_buffer_0_0(
#line 47 "bit_buffer.read.m"
  MR_Word * mercury__bit_buffer__read__HeadVar__1_1,
#line 47 "bit_buffer.read.m"
  MR_Word mercury__bit_buffer__read__HeadVar__2_2,
#line 47 "bit_buffer.read.m"
  MR_Word mercury__bit_buffer__read__HeadVar__3_3)
#line 47 "bit_buffer.read.m"
{
#line 47 "bit_buffer.read.m"
  {
#line 47 "bit_buffer.read.m"
    MR_bool mercury__bit_buffer__read__succeeded;
#line 47 "bit_buffer.read.m"
    MR_Word mercury__bit_buffer__read__TypeInfo_6_6 = (MR_Word) &mercury__bit_buffer__read_scalar_common_1[0];
#line 47 "bit_buffer.read.m"
    MR_Word mercury__bit_buffer__read__Cast_HeadVar1_4 = mercury__bit_buffer__read__HeadVar__2_2;
#line 47 "bit_buffer.read.m"
    MR_Word mercury__bit_buffer__read__Cast_HeadVar2_5 = mercury__bit_buffer__read__HeadVar__3_3;

#line 47 "bit_buffer.read.m"
    {
#line 47 "bit_buffer.read.m"
      mercury__builtin__compare_3_p_0(mercury__bit_buffer__read__TypeInfo_6_6, mercury__bit_buffer__read__HeadVar__1_1, ((MR_Box) (mercury__bit_buffer__read__Cast_HeadVar1_4)), ((MR_Box) (mercury__bit_buffer__read__Cast_HeadVar2_5)));
#line 47 "bit_buffer.read.m"
      return;
    }
#line 47 "bit_buffer.read.m"
  }
#line 47 "bit_buffer.read.m"
}

#line 47 "bit_buffer.read.m"
MR_bool MR_CALL 
mercury__bit_buffer__read____Unify____io_read_buffer_0_0(
#line 47 "bit_buffer.read.m"
  MR_Word mercury__bit_buffer__read__HeadVar__1_1,
#line 47 "bit_buffer.read.m"
  MR_Word mercury__bit_buffer__read__HeadVar__2_2)
#line 47 "bit_buffer.read.m"
{
#line 47 "bit_buffer.read.m"
  {
#line 47 "bit_buffer.read.m"
    MR_bool mercury__bit_buffer__read__succeeded;
#line 47 "bit_buffer.read.m"
    MR_Word mercury__bit_buffer__read__TypeCtorInfo_5_5 = (MR_Word) &mercury__io__io__type_ctor_info_binary_input_stream_0;
#line 47 "bit_buffer.read.m"
    MR_Word mercury__bit_buffer__read__TypeCtorInfo_6_6 = (MR_Word) &mercury__io__io__type_ctor_info_state_0;
#line 47 "bit_buffer.read.m"
    MR_Word mercury__bit_buffer__read__TypeCtorInfo_7_7 = (MR_Word) &mercury__io__io__type_ctor_info_error_0;
#line 47 "bit_buffer.read.m"
    MR_Word mercury__bit_buffer__read__Cast_HeadVar1_3 = mercury__bit_buffer__read__HeadVar__1_1;
#line 47 "bit_buffer.read.m"
    MR_Word mercury__bit_buffer__read__Cast_HeadVar2_4 = mercury__bit_buffer__read__HeadVar__2_2;
#line 210 "bit_buffer.read.m"
    MR_Integer mercury__bit_buffer__read__CastX_10 = (MR_Integer) mercury__bit_buffer__read__Cast_HeadVar1_3;
#line 210 "bit_buffer.read.m"
    MR_Integer mercury__bit_buffer__read__CastY_11 = (MR_Integer) mercury__bit_buffer__read__Cast_HeadVar2_4;

#line 210 "bit_buffer.read.m"
    mercury__bit_buffer__read__succeeded = (mercury__bit_buffer__read__CastX_10 == mercury__bit_buffer__read__CastY_11);
#line 210 "bit_buffer.read.m"
    if (mercury__bit_buffer__read__succeeded)
#line 210 "bit_buffer.read.m"
      mercury__bit_buffer__read__succeeded = MR_TRUE;
#line 210 "bit_buffer.read.m"
    else
#line 210 "bit_buffer.read.m"
      {
#line 210 "bit_buffer.read.m"
        MR_Box mercury__bit_buffer__read__V_8_8 = (MR_Box) mercury__bit_buffer__read__Cast_HeadVar1_3;
#line 210 "bit_buffer.read.m"
        MR_Box mercury__bit_buffer__read__V_9_9 = (MR_Box) mercury__bit_buffer__read__Cast_HeadVar2_4;

#line 1041 "bit_buffer.read.c"
        {
#line 1043 "bit_buffer.read.c"
          return mercury__bit_buffer__read__succeeded = mercury__bit_buffer____Unify____bit_buffer_3_0(mercury__bit_buffer__read__TypeCtorInfo_5_5, mercury__bit_buffer__read__TypeCtorInfo_6_6, mercury__bit_buffer__read__TypeCtorInfo_7_7, mercury__bit_buffer__read__V_8_8, mercury__bit_buffer__read__V_9_9);
        }
#line 210 "bit_buffer.read.m"
      }
#line 47 "bit_buffer.read.m"
    return mercury__bit_buffer__read__succeeded;
#line 47 "bit_buffer.read.m"
  }
#line 47 "bit_buffer.read.m"
}

#line 529 "bit_buffer.read.m"
static void MR_CALL 
mercury__bit_buffer__read__do_refill_read_buffer_3_p_0(
#line 529 "bit_buffer.read.m"
  MR_Word mercury__bit_buffer__read__TypeClassInfo_for_bulk_reader_49,
#line 529 "bit_buffer.read.m"
  MR_Word * mercury__bit_buffer__read__Result_4,
#line 529 "bit_buffer.read.m"
  MR_Box mercury__bit_buffer__read__STATE_VARIABLE_Buffer_0_19,
#line 529 "bit_buffer.read.m"
  MR_Box * mercury__bit_buffer__read__STATE_VARIABLE_Buffer_20)
#line 529 "bit_buffer.read.m"
{
#line 534 "bit_buffer.read.m"
  {
#line 534 "bit_buffer.read.m"
    MR_bool mercury__bit_buffer__read__succeeded;
#line 534 "bit_buffer.read.m"
    MR_Word mercury__bit_buffer__read__UseStream_6;
#line 82 "bit_buffer.opt"
    MR_Word mercury__bit_buffer__read__TypeInfo_51_93;
#line 82 "bit_buffer.opt"
    MR_Word mercury__bit_buffer__read__TypeInfo_53_94;
#line 82 "bit_buffer.opt"
    MR_Word mercury__bit_buffer__read__TypeInfo_55_95;

#line 82 "bit_buffer.opt"
{
#define MR_PROC_LABEL mercury__bit_buffer__read__do_refill_read_buffer_3_p_0

	ML_BitBufferPtr Buffer;
	MR_Word UseStream;

	Buffer = (ML_BitBufferPtr) mercury__bit_buffer__read__STATE_VARIABLE_Buffer_0_19 ;
		{
#line 82 "bit_buffer.opt"

    UseStream = Buffer->ML_bit_buffer_use_stream;

#line 1094 "bit_buffer.read.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bit_buffer__read__UseStream_6  = UseStream;
#line 82 "bit_buffer.opt"
}
#line 598 "bit_buffer.read.m"
#line 598 "bit_buffer.read.m"
    switch (mercury__bit_buffer__read__UseStream_6) {
#line 598 "bit_buffer.read.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 598 "bit_buffer.read.m"
      case (MR_Integer) 0:
#line 599 "bit_buffer.read.m"
        {
#line 600 "bit_buffer.read.m"
          *mercury__bit_buffer__read__Result_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 599 "bit_buffer.read.m"
          *mercury__bit_buffer__read__STATE_VARIABLE_Buffer_20 = mercury__bit_buffer__read__STATE_VARIABLE_Buffer_0_19;
#line 599 "bit_buffer.read.m"
        }
#line 598 "bit_buffer.read.m"
        break;
#line 598 "bit_buffer.read.m"
      case (MR_Integer) 1:
#line 537 "bit_buffer.read.m"
        {
#line 537 "bit_buffer.read.m"
          MR_Integer mercury__bit_buffer__read__Remain_11;
#line 537 "bit_buffer.read.m"
          MR_Integer mercury__bit_buffer__read__OldPos_12;
#line 537 "bit_buffer.read.m"
          MR_Integer mercury__bit_buffer__read__ChunkSize_13;
#line 537 "bit_buffer.read.m"
          MR_Integer mercury__bit_buffer__read__StartByteIndex_14;
#line 537 "bit_buffer.read.m"
          MR_Integer mercury__bit_buffer__read__NumBytesToRead_15;
#line 537 "bit_buffer.read.m"
          MR_Box mercury__bit_buffer__read__Stream_16;
#line 537 "bit_buffer.read.m"
          MR_Integer mercury__bit_buffer__read__NumBytesRead_17;
#line 537 "bit_buffer.read.m"
          MR_Box mercury__bit_buffer__read__STATE_VARIABLE_BM_25_25;
#line 537 "bit_buffer.read.m"
          MR_Integer mercury__bit_buffer__read__STATE_VARIABLE_Size_27_27;
#line 537 "bit_buffer.read.m"
          MR_Box mercury__bit_buffer__read__STATE_VARIABLE_State_28_28;
#line 537 "bit_buffer.read.m"
          MR_Integer mercury__bit_buffer__read__STATE_VARIABLE_Pos_29_29;
#line 537 "bit_buffer.read.m"
          MR_Integer mercury__bit_buffer__read__V_30_30;
#line 537 "bit_buffer.read.m"
          MR_Box mercury__bit_buffer__read__STATE_VARIABLE_BM_32_32;
#line 537 "bit_buffer.read.m"
          MR_Integer mercury__bit_buffer__read__V_34_34;
#line 537 "bit_buffer.read.m"
          MR_Integer mercury__bit_buffer__read__V_35_35;
#line 537 "bit_buffer.read.m"
          MR_Box mercury__bit_buffer__read__STATE_VARIABLE_BM_38_38;
#line 537 "bit_buffer.read.m"
          MR_Box mercury__bit_buffer__read__STATE_VARIABLE_State_39_39;
#line 537 "bit_buffer.read.m"
          MR_Integer mercury__bit_buffer__read__STATE_VARIABLE_Size_40_40;
#line 537 "bit_buffer.read.m"
          MR_Box mercury__bit_buffer__read__STATE_VARIABLE_Buffer_45_45;
#line 537 "bit_buffer.read.m"
          MR_Word mercury__bit_buffer__read__V_46_46;
#line 537 "bit_buffer.read.m"
          MR_Box mercury__bit_buffer__read__STATE_VARIABLE_Buffer_47_47;
#line 538 "bit_buffer.read.m"
          MR_Word mercury__bit_buffer__read__TypeInfo_56_56;
#line 538 "bit_buffer.read.m"
          MR_Word mercury__bit_buffer__read__TypeInfo_57_57;
#line 538 "bit_buffer.read.m"
          MR_Word mercury__bit_buffer__read__TypeInfo_58_58;
#line 538 "bit_buffer.read.m"
          MR_Integer mercury__bit_buffer__read__V_21_21;
#line 538 "bit_buffer.read.m"
          MR_Integer mercury__bit_buffer__read__V_22_22;
#line 538 "bit_buffer.read.m"
          MR_Word mercury__bit_buffer__read__V_23_23 = (MR_Word) mercury__bit_buffer__read__STATE_VARIABLE_Buffer_0_19;
#line 73 "bit_buffer.opt"
          MR_Word mercury__bit_buffer__read__TypeInfo_59_96;
#line 73 "bit_buffer.opt"
          MR_Word mercury__bit_buffer__read__TypeInfo_60_97;
#line 73 "bit_buffer.opt"
          MR_Word mercury__bit_buffer__read__TypeInfo_61_98;
#line 76 "bit_buffer.opt"
          MR_Word mercury__bit_buffer__read__TypeInfo_62_99;
#line 76 "bit_buffer.opt"
          MR_Word mercury__bit_buffer__read__TypeInfo_63_100;
#line 76 "bit_buffer.opt"
          MR_Word mercury__bit_buffer__read__TypeInfo_64_101;
#line 79 "bit_buffer.opt"
          MR_Word mercury__bit_buffer__read__TypeInfo_65_102;
#line 79 "bit_buffer.opt"
          MR_Word mercury__bit_buffer__read__TypeInfo_66_103;
#line 79 "bit_buffer.opt"
          MR_Word mercury__bit_buffer__read__TypeInfo_67_104;
#line 88 "bit_buffer.opt"
          MR_Word mercury__bit_buffer__read__TypeInfo_68_105;
#line 88 "bit_buffer.opt"
          MR_Word mercury__bit_buffer__read__TypeInfo_69_106;
#line 88 "bit_buffer.opt"
          MR_Word mercury__bit_buffer__read__TypeInfo_70_107;
#line 85 "bit_buffer.opt"
          MR_Word mercury__bit_buffer__read__TypeInfo_71_108;
#line 85 "bit_buffer.opt"
          MR_Word mercury__bit_buffer__read__TypeInfo_72_109;
#line 85 "bit_buffer.opt"
          MR_Word mercury__bit_buffer__read__TypeInfo_73_110;
#line 1206 "bit_buffer.read.c"
          void MR_CALL (* mercury__bit_buffer__read__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box *, MR_Box, MR_Box *);
#line 1208 "bit_buffer.read.c"
          MR_Box mercury__bit_buffer__read__conv3_STATE_VARIABLE_BM_38_38;
#line 1210 "bit_buffer.read.c"
          MR_Box mercury__bit_buffer__read__conv2_NumBytesRead_17;
#line 1212 "bit_buffer.read.c"
          MR_Box mercury__bit_buffer__read__conv1_Result_4;
#line 97 "bit_buffer.opt"
          MR_Word mercury__bit_buffer__read__TypeInfo_77_114;
#line 97 "bit_buffer.opt"
          MR_Word mercury__bit_buffer__read__TypeInfo_78_115;
#line 97 "bit_buffer.opt"
          MR_Word mercury__bit_buffer__read__TypeInfo_79_116;

#line 101 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__bit_buffer__read__do_refill_read_buffer_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__bit_buffer__read__TypeClassInfo_for_bulk_reader_49 ;
	Index =  (MR_Integer) 3 ;
		{
#line 101 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 1236 "bit_buffer.read.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bit_buffer__read__TypeInfo_56_56  = TypeInfo;
#line 101 "private_builtin.opt"
}
#line 101 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__bit_buffer__read__do_refill_read_buffer_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__bit_buffer__read__TypeClassInfo_for_bulk_reader_49 ;
	Index =  (MR_Integer) 6 ;
		{
#line 101 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 1258 "bit_buffer.read.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bit_buffer__read__TypeInfo_57_57  = TypeInfo;
#line 101 "private_builtin.opt"
}
#line 101 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__bit_buffer__read__do_refill_read_buffer_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__bit_buffer__read__TypeClassInfo_for_bulk_reader_49 ;
	Index =  (MR_Integer) 7 ;
		{
#line 101 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 1280 "bit_buffer.read.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bit_buffer__read__TypeInfo_58_58  = TypeInfo;
#line 101 "private_builtin.opt"
}
#line 538 "bit_buffer.read.m"
          {
#line 538 "bit_buffer.read.m"
            mercury__bit_buffer__read__V_21_21 = mercury__bit_buffer__read__num_buffered_bits_1_f_0(mercury__bit_buffer__read__TypeInfo_56_56, mercury__bit_buffer__read__TypeInfo_57_57, mercury__bit_buffer__read__TypeInfo_58_58, mercury__bit_buffer__read__V_23_23);
          }
#line 132 "int.opt"
{
#define MR_PROC_LABEL mercury__bit_buffer__read__do_refill_read_buffer_3_p_0

	MR_Integer Bits;

		{
#line 132 "int.opt"

    Bits = ML_BITS_PER_INT;

#line 1303 "bit_buffer.read.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bit_buffer__read__V_22_22  = Bits;
#line 132 "int.opt"
}
#line 538 "bit_buffer.read.m"
          mercury__bit_buffer__read__succeeded = (mercury__bit_buffer__read__V_21_21 <= mercury__bit_buffer__read__V_22_22);
#line 540 "bit_buffer.read.m"
          if (mercury__bit_buffer__read__succeeded)
#line 539 "bit_buffer.read.m"
            {
#line 539 "bit_buffer.read.m"
            }
#line 540 "bit_buffer.read.m"
          else
#line 541 "bit_buffer.read.m"
            {
#line 541 "bit_buffer.read.m"
              {
#line 541 "bit_buffer.read.m"
                mercury__require__error_1_p_0((MR_String) "bit_buffer.read.refill_read_buffer: too many bits in buffer");
#line 541 "bit_buffer.read.m"
                return;
              }
#line 541 "bit_buffer.read.m"
            }
#line 73 "bit_buffer.opt"
{
#define MR_PROC_LABEL mercury__bit_buffer__read__do_refill_read_buffer_3_p_0

	ML_BitBufferPtr Buffer;
	MR_BitmapPtr BM;

	Buffer = (ML_BitBufferPtr) mercury__bit_buffer__read__STATE_VARIABLE_Buffer_0_19 ;
		{
#line 73 "bit_buffer.opt"

    BM = Buffer->ML_bit_buffer_bitmap;

#line 1344 "bit_buffer.read.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bit_buffer__read__STATE_VARIABLE_BM_25_25  = (MR_Box) BM;
#line 73 "bit_buffer.opt"
}
#line 76 "bit_buffer.opt"
{
#define MR_PROC_LABEL mercury__bit_buffer__read__do_refill_read_buffer_3_p_0

	ML_BitBufferPtr Buffer;
	MR_Integer Pos;

	Buffer = (ML_BitBufferPtr) mercury__bit_buffer__read__STATE_VARIABLE_Buffer_0_19 ;
		{
#line 76 "bit_buffer.opt"

    Pos = Buffer->ML_bit_buffer_pos;

#line 1364 "bit_buffer.read.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bit_buffer__read__OldPos_12  = Pos;
#line 76 "bit_buffer.opt"
}
#line 79 "bit_buffer.opt"
{
#define MR_PROC_LABEL mercury__bit_buffer__read__do_refill_read_buffer_3_p_0

	ML_BitBufferPtr Buffer;
	MR_Integer Size;

	Buffer = (ML_BitBufferPtr) mercury__bit_buffer__read__STATE_VARIABLE_Buffer_0_19 ;
		{
#line 79 "bit_buffer.opt"

    Size = Buffer->ML_bit_buffer_size;

#line 1384 "bit_buffer.read.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bit_buffer__read__STATE_VARIABLE_Size_27_27  = Size;
#line 79 "bit_buffer.opt"
}
#line 88 "bit_buffer.opt"
{
#define MR_PROC_LABEL mercury__bit_buffer__read__do_refill_read_buffer_3_p_0

	ML_BitBufferPtr Buffer;
	MR_Word State;

	Buffer = (ML_BitBufferPtr) mercury__bit_buffer__read__STATE_VARIABLE_Buffer_0_19 ;
		{
#line 88 "bit_buffer.opt"

    State = Buffer->ML_bit_buffer_state;

#line 1404 "bit_buffer.read.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bit_buffer__read__STATE_VARIABLE_State_28_28  = (MR_Box) State;
#line 88 "bit_buffer.opt"
}
#line 553 "bit_buffer.read.m"
          mercury__bit_buffer__read__Remain_11 = (mercury__bit_buffer__read__STATE_VARIABLE_Size_27_27 - mercury__bit_buffer__read__OldPos_12);
#line 132 "int.opt"
{
#define MR_PROC_LABEL mercury__bit_buffer__read__do_refill_read_buffer_3_p_0

	MR_Integer Bits;

		{
#line 132 "int.opt"

    Bits = ML_BITS_PER_INT;

#line 1424 "bit_buffer.read.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bit_buffer__read__V_30_30  = Bits;
#line 132 "int.opt"
}
#line 555 "bit_buffer.read.m"
          mercury__bit_buffer__read__STATE_VARIABLE_Pos_29_29 = (mercury__bit_buffer__read__V_30_30 - mercury__bit_buffer__read__Remain_11);
#line 556 "bit_buffer.read.m"
          mercury__bit_buffer__read__succeeded = (mercury__bit_buffer__read__Remain_11 > (MR_Integer) 0);
#line 559 "bit_buffer.read.m"
          if (mercury__bit_buffer__read__succeeded)
#line 557 "bit_buffer.read.m"
            {
#line 557 "bit_buffer.read.m"
              MR_Integer mercury__bit_buffer__read__V_33_33;

#line 557 "bit_buffer.read.m"
              {
#line 557 "bit_buffer.read.m"
                mercury__bit_buffer__read__V_33_33 = mercury__bitmap__bits_3_f_0(mercury__bit_buffer__read__OldPos_12, mercury__bit_buffer__read__Remain_11, mercury__bit_buffer__read__STATE_VARIABLE_BM_25_25);
              }
#line 557 "bit_buffer.read.m"
              {
#line 557 "bit_buffer.read.m"
                mercury__bit_buffer__read__STATE_VARIABLE_BM_32_32 = mercury__bitmap__f_98_105_116_115_32_58_61_4_f_0(mercury__bit_buffer__read__STATE_VARIABLE_Pos_29_29, mercury__bit_buffer__read__Remain_11, mercury__bit_buffer__read__STATE_VARIABLE_BM_25_25, mercury__bit_buffer__read__V_33_33);
              }
#line 557 "bit_buffer.read.m"
            }
#line 559 "bit_buffer.read.m"
          else
#line 559 "bit_buffer.read.m"
            mercury__bit_buffer__read__STATE_VARIABLE_BM_32_32 = mercury__bit_buffer__read__STATE_VARIABLE_BM_25_25;
#line 132 "int.opt"
{
#define MR_PROC_LABEL mercury__bit_buffer__read__do_refill_read_buffer_3_p_0

	MR_Integer Bits;

		{
#line 132 "int.opt"

    Bits = ML_BITS_PER_INT;

#line 1469 "bit_buffer.read.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bit_buffer__read__V_34_34  = Bits;
#line 132 "int.opt"
}
#line 567 "bit_buffer.read.m"
          mercury__bit_buffer__read__ChunkSize_13 = (mercury__bit_buffer__read__STATE_VARIABLE_Size_27_27 - mercury__bit_buffer__read__V_34_34);
#line 132 "int.opt"
{
#define MR_PROC_LABEL mercury__bit_buffer__read__do_refill_read_buffer_3_p_0

	MR_Integer Bits;

		{
#line 132 "int.opt"

    Bits = ML_BITS_PER_INT;

#line 1489 "bit_buffer.read.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bit_buffer__read__V_35_35  = Bits;
#line 132 "int.opt"
}
#line 568 "bit_buffer.read.m"
          mercury__bit_buffer__read__StartByteIndex_14 = (mercury__bit_buffer__read__V_35_35 / (MR_Integer) 8);
#line 569 "bit_buffer.read.m"
          mercury__bit_buffer__read__NumBytesToRead_15 = (mercury__bit_buffer__read__ChunkSize_13 / (MR_Integer) 8);
#line 85 "bit_buffer.opt"
{
#define MR_PROC_LABEL mercury__bit_buffer__read__do_refill_read_buffer_3_p_0

	ML_BitBufferPtr Buffer;
	MR_Word Stream;

	Buffer = (ML_BitBufferPtr) mercury__bit_buffer__read__STATE_VARIABLE_Buffer_0_19 ;
		{
#line 85 "bit_buffer.opt"

    Stream = Buffer->ML_bit_buffer_stream;

#line 1513 "bit_buffer.read.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bit_buffer__read__Stream_16  = (MR_Box) Stream;
#line 85 "bit_buffer.opt"
}
#line 1520 "bit_buffer.read.c"
          mercury__bit_buffer__read__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__bit_buffer__read__TypeClassInfo_for_bulk_reader_49, (MR_Integer) 0)), (MR_Integer) 5)));
#line 1522 "bit_buffer.read.c"
          {
#line 1524 "bit_buffer.read.c"
            mercury__bit_buffer__read__func_0(((MR_Box) mercury__bit_buffer__read__TypeClassInfo_for_bulk_reader_49), mercury__bit_buffer__read__Stream_16, ((MR_Box) (mercury__bit_buffer__read__StartByteIndex_14)), ((MR_Box) (mercury__bit_buffer__read__NumBytesToRead_15)), ((MR_Box) (mercury__bit_buffer__read__STATE_VARIABLE_BM_32_32)), &mercury__bit_buffer__read__conv3_STATE_VARIABLE_BM_38_38, &mercury__bit_buffer__read__conv2_NumBytesRead_17, &mercury__bit_buffer__read__conv1_Result_4, mercury__bit_buffer__read__STATE_VARIABLE_State_28_28, &mercury__bit_buffer__read__STATE_VARIABLE_State_39_39);
          }
#line 1527 "bit_buffer.read.c"
          mercury__bit_buffer__read__STATE_VARIABLE_BM_38_38 = ((MR_Box) mercury__bit_buffer__read__conv3_STATE_VARIABLE_BM_38_38);
#line 1529 "bit_buffer.read.c"
          mercury__bit_buffer__read__NumBytesRead_17 = ((MR_Integer) mercury__bit_buffer__read__conv2_NumBytesRead_17);
#line 1531 "bit_buffer.read.c"
          *mercury__bit_buffer__read__Result_4 = ((MR_Word) mercury__bit_buffer__read__conv1_Result_4);
#line 578 "bit_buffer.read.m"
          mercury__bit_buffer__read__succeeded = (mercury__bit_buffer__read__NumBytesRead_17 == mercury__bit_buffer__read__NumBytesToRead_15);
#line 580 "bit_buffer.read.m"
          if (mercury__bit_buffer__read__succeeded)
#line 579 "bit_buffer.read.m"
            {
#line 579 "bit_buffer.read.m"
              mercury__bit_buffer__read__STATE_VARIABLE_Size_40_40 = mercury__bit_buffer__read__STATE_VARIABLE_Size_27_27;
#line 579 "bit_buffer.read.m"
              mercury__bit_buffer__read__STATE_VARIABLE_Buffer_45_45 = mercury__bit_buffer__read__STATE_VARIABLE_Buffer_0_19;
#line 579 "bit_buffer.read.m"
            }
#line 580 "bit_buffer.read.m"
          else
#line 587 "bit_buffer.read.m"
            {
#line 587 "bit_buffer.read.m"
              MR_Integer mercury__bit_buffer__read__V_41_41 = (mercury__bit_buffer__read__NumBytesRead_17 * (MR_Integer) 8);
#line 587 "bit_buffer.read.m"
              MR_Integer mercury__bit_buffer__read__V_43_43;
#line 114 "bit_buffer.opt"
              MR_Word mercury__bit_buffer__read__TypeInfo_74_111;
#line 114 "bit_buffer.opt"
              MR_Word mercury__bit_buffer__read__TypeInfo_75_112;
#line 114 "bit_buffer.opt"
              MR_Word mercury__bit_buffer__read__TypeInfo_76_113;

#line 132 "int.opt"
{
#define MR_PROC_LABEL mercury__bit_buffer__read__do_refill_read_buffer_3_p_0

	MR_Integer Bits;

		{
#line 132 "int.opt"

    Bits = ML_BITS_PER_INT;

#line 1571 "bit_buffer.read.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bit_buffer__read__V_43_43  = Bits;
#line 132 "int.opt"
}
#line 587 "bit_buffer.read.m"
              mercury__bit_buffer__read__STATE_VARIABLE_Size_40_40 = (mercury__bit_buffer__read__V_41_41 + mercury__bit_buffer__read__V_43_43);
#line 114 "bit_buffer.opt"
{
#define MR_PROC_LABEL mercury__bit_buffer__read__do_refill_read_buffer_3_p_0

	MR_Word UseStream;
	ML_BitBufferPtr Buffer0;
	ML_BitBufferPtr Buffer;

	UseStream =  (MR_Integer) 0 ;
	Buffer0 = (ML_BitBufferPtr) mercury__bit_buffer__read__STATE_VARIABLE_Buffer_0_19 ;
		{
#line 114 "bit_buffer.opt"

    Buffer = Buffer0;
    Buffer->ML_bit_buffer_use_stream = UseStream;

#line 1596 "bit_buffer.read.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bit_buffer__read__STATE_VARIABLE_Buffer_45_45  = (MR_Box) Buffer;
#line 114 "bit_buffer.opt"
}
#line 587 "bit_buffer.read.m"
            }
#line 590 "bit_buffer.read.m"
          mercury__bit_buffer__read__V_46_46 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 97 "bit_buffer.opt"
{
#define MR_PROC_LABEL mercury__bit_buffer__read__do_refill_read_buffer_3_p_0

	MR_BitmapPtr BM;
	MR_Integer Pos;
	MR_Integer Size;
	MR_Word State;
	MR_Word FilledBMs;
	ML_BitBufferPtr Buffer0;
	ML_BitBufferPtr Buffer;

	BM = (MR_BitmapPtr) mercury__bit_buffer__read__STATE_VARIABLE_BM_38_38 ;
	Pos =  mercury__bit_buffer__read__STATE_VARIABLE_Pos_29_29 ;
	Size =  mercury__bit_buffer__read__STATE_VARIABLE_Size_40_40 ;
	State = (MR_Word) mercury__bit_buffer__read__STATE_VARIABLE_State_39_39 ;
	FilledBMs =  mercury__bit_buffer__read__V_46_46 ;
	Buffer0 = (ML_BitBufferPtr) mercury__bit_buffer__read__STATE_VARIABLE_Buffer_45_45 ;
		{
#line 97 "bit_buffer.opt"

    Buffer = Buffer0;
    Buffer->ML_bit_buffer_bitmap = BM;
    Buffer->ML_bit_buffer_pos = Pos;
    Buffer->ML_bit_buffer_size = Size;
    Buffer->ML_bit_buffer_state = State;
    Buffer->ML_bit_buffer_filled_bitmaps = FilledBMs;

#line 1635 "bit_buffer.read.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bit_buffer__read__STATE_VARIABLE_Buffer_47_47  = (MR_Box) Buffer;
#line 97 "bit_buffer.opt"
}
#line 593 "bit_buffer.read.m"
          if ((*mercury__bit_buffer__read__Result_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 592 "bit_buffer.read.m"
            *mercury__bit_buffer__read__STATE_VARIABLE_Buffer_20 = mercury__bit_buffer__read__STATE_VARIABLE_Buffer_47_47;
#line 593 "bit_buffer.read.m"
          else
#line 118 "bit_buffer.opt"
            {
#line 118 "bit_buffer.opt"
              MR_Word mercury__bit_buffer__read__TypeInfo_80_117;
#line 118 "bit_buffer.opt"
              MR_Word mercury__bit_buffer__read__TypeInfo_81_118;
#line 118 "bit_buffer.opt"
              MR_Word mercury__bit_buffer__read__TypeInfo_82_119;

#line 118 "bit_buffer.opt"
{
#define MR_PROC_LABEL mercury__bit_buffer__read__do_refill_read_buffer_3_p_0

	MR_Word ReadStatus;
	ML_BitBufferPtr Buffer0;
	ML_BitBufferPtr Buffer;

	ReadStatus =  *mercury__bit_buffer__read__Result_4 ;
	Buffer0 = (ML_BitBufferPtr) mercury__bit_buffer__read__STATE_VARIABLE_Buffer_47_47 ;
		{
#line 118 "bit_buffer.opt"

    Buffer = Buffer0;
    Buffer->ML_bit_buffer_read_status = ReadStatus;

#line 1673 "bit_buffer.read.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__bit_buffer__read__STATE_VARIABLE_Buffer_20  = (MR_Box) Buffer;
#line 118 "bit_buffer.opt"
}
#line 118 "bit_buffer.opt"
            }
#line 537 "bit_buffer.read.m"
        }
#line 598 "bit_buffer.read.m"
        break;
#line 598 "bit_buffer.read.m"
    }
#line 534 "bit_buffer.read.m"
  }
#line 529 "bit_buffer.read.m"
}

#line 491 "bit_buffer.read.m"
static void MR_CALL 
mercury__bit_buffer__read__bulk_get_into_result_bitmap_11_p_0(
#line 491 "bit_buffer.read.m"
  MR_Word mercury__bit_buffer__read__TypeClassInfo_for_bulk_reader_45,
#line 491 "bit_buffer.read.m"
  MR_Integer mercury__bit_buffer__read__STATE_VARIABLE_Index_0_26,
#line 491 "bit_buffer.read.m"
  MR_Integer * mercury__bit_buffer__read__STATE_VARIABLE_Index_27,
#line 491 "bit_buffer.read.m"
  MR_Integer mercury__bit_buffer__read__STATE_VARIABLE_NumBits_0_28,
#line 491 "bit_buffer.read.m"
  MR_Integer * mercury__bit_buffer__read__STATE_VARIABLE_NumBits_29,
#line 491 "bit_buffer.read.m"
  MR_Box mercury__bit_buffer__read__STATE_VARIABLE_BM_0_30,
#line 491 "bit_buffer.read.m"
  MR_Box * mercury__bit_buffer__read__STATE_VARIABLE_BM_31,
#line 491 "bit_buffer.read.m"
  MR_Integer mercury__bit_buffer__read__STATE_VARIABLE_NumBitsRead_0_32,
#line 491 "bit_buffer.read.m"
  MR_Integer * mercury__bit_buffer__read__STATE_VARIABLE_NumBitsRead_33,
#line 491 "bit_buffer.read.m"
  MR_Word * mercury__bit_buffer__read__Result_16,
#line 491 "bit_buffer.read.m"
  MR_Box mercury__bit_buffer__read__STATE_VARIABLE_Buffer_0_34,
#line 491 "bit_buffer.read.m"
  MR_Box * mercury__bit_buffer__read__STATE_VARIABLE_Buffer_35)
#line 491 "bit_buffer.read.m"
{
#line 499 "bit_buffer.read.m"
  {
#line 499 "bit_buffer.read.m"
    MR_bool mercury__bit_buffer__read__succeeded;
#line 499 "bit_buffer.read.m"
    MR_Integer mercury__bit_buffer__read__StartByteIndex_18 = (mercury__bit_buffer__read__STATE_VARIABLE_Index_0_26 / (MR_Integer) 8);
#line 499 "bit_buffer.read.m"
    MR_Integer mercury__bit_buffer__read__NumBytesToBulkGet_19 = (mercury__bit_buffer__read__STATE_VARIABLE_NumBits_0_28 / (MR_Integer) 8);
#line 499 "bit_buffer.read.m"
    MR_Box mercury__bit_buffer__read__Stream_20;
#line 499 "bit_buffer.read.m"
    MR_Box mercury__bit_buffer__read__State0_21;
#line 499 "bit_buffer.read.m"
    MR_Integer mercury__bit_buffer__read__NumBytesRead_22;
#line 499 "bit_buffer.read.m"
    MR_Box mercury__bit_buffer__read__State_23;
#line 499 "bit_buffer.read.m"
    MR_Integer mercury__bit_buffer__read__NumBitsBulkRead_25;
#line 499 "bit_buffer.read.m"
    MR_Box mercury__bit_buffer__read__STATE_VARIABLE_Buffer_39_39;
#line 85 "bit_buffer.opt"
    MR_Word mercury__bit_buffer__read__TypeInfo_47_66;
#line 85 "bit_buffer.opt"
    MR_Word mercury__bit_buffer__read__TypeInfo_49_67;
#line 85 "bit_buffer.opt"
    MR_Word mercury__bit_buffer__read__TypeInfo_51_68;
#line 88 "bit_buffer.opt"
    MR_Word mercury__bit_buffer__read__TypeInfo_52_69;
#line 88 "bit_buffer.opt"
    MR_Word mercury__bit_buffer__read__TypeInfo_53_70;
#line 88 "bit_buffer.opt"
    MR_Word mercury__bit_buffer__read__TypeInfo_54_71;
#line 1754 "bit_buffer.read.c"
    void MR_CALL (* mercury__bit_buffer__read__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box *, MR_Box, MR_Box *);
#line 1756 "bit_buffer.read.c"
    MR_Box mercury__bit_buffer__read__conv3_STATE_VARIABLE_BM_31;
#line 1758 "bit_buffer.read.c"
    MR_Box mercury__bit_buffer__read__conv2_NumBytesRead_22;
#line 1760 "bit_buffer.read.c"
    MR_Box mercury__bit_buffer__read__conv1_Result_16;
#line 110 "bit_buffer.opt"
    MR_Word mercury__bit_buffer__read__TypeInfo_58_75;
#line 110 "bit_buffer.opt"
    MR_Word mercury__bit_buffer__read__TypeInfo_59_76;
#line 110 "bit_buffer.opt"
    MR_Word mercury__bit_buffer__read__TypeInfo_60_77;

#line 85 "bit_buffer.opt"
{
#define MR_PROC_LABEL mercury__bit_buffer__read__bulk_get_into_result_bitmap_11_p_0

	ML_BitBufferPtr Buffer;
	MR_Word Stream;

	Buffer = (ML_BitBufferPtr) mercury__bit_buffer__read__STATE_VARIABLE_Buffer_0_34 ;
		{
#line 85 "bit_buffer.opt"

    Stream = Buffer->ML_bit_buffer_stream;

#line 1782 "bit_buffer.read.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bit_buffer__read__Stream_20  = (MR_Box) Stream;
#line 85 "bit_buffer.opt"
}
#line 88 "bit_buffer.opt"
{
#define MR_PROC_LABEL mercury__bit_buffer__read__bulk_get_into_result_bitmap_11_p_0

	ML_BitBufferPtr Buffer;
	MR_Word State;

	Buffer = (ML_BitBufferPtr) mercury__bit_buffer__read__STATE_VARIABLE_Buffer_0_34 ;
		{
#line 88 "bit_buffer.opt"

    State = Buffer->ML_bit_buffer_state;

#line 1802 "bit_buffer.read.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bit_buffer__read__State0_21  = (MR_Box) State;
#line 88 "bit_buffer.opt"
}
#line 1809 "bit_buffer.read.c"
    mercury__bit_buffer__read__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__bit_buffer__read__TypeClassInfo_for_bulk_reader_45, (MR_Integer) 0)), (MR_Integer) 5)));
#line 1811 "bit_buffer.read.c"
    {
#line 1813 "bit_buffer.read.c"
      mercury__bit_buffer__read__func_0(((MR_Box) mercury__bit_buffer__read__TypeClassInfo_for_bulk_reader_45), mercury__bit_buffer__read__Stream_20, ((MR_Box) (mercury__bit_buffer__read__StartByteIndex_18)), ((MR_Box) (mercury__bit_buffer__read__NumBytesToBulkGet_19)), ((MR_Box) (mercury__bit_buffer__read__STATE_VARIABLE_BM_0_30)), &mercury__bit_buffer__read__conv3_STATE_VARIABLE_BM_31, &mercury__bit_buffer__read__conv2_NumBytesRead_22, &mercury__bit_buffer__read__conv1_Result_16, mercury__bit_buffer__read__State0_21, &mercury__bit_buffer__read__State_23);
    }
#line 1816 "bit_buffer.read.c"
    *mercury__bit_buffer__read__STATE_VARIABLE_BM_31 = ((MR_Box) mercury__bit_buffer__read__conv3_STATE_VARIABLE_BM_31);
#line 1818 "bit_buffer.read.c"
    mercury__bit_buffer__read__NumBytesRead_22 = ((MR_Integer) mercury__bit_buffer__read__conv2_NumBytesRead_22);
#line 1820 "bit_buffer.read.c"
    *mercury__bit_buffer__read__Result_16 = ((MR_Word) mercury__bit_buffer__read__conv1_Result_16);
#line 508 "bit_buffer.read.m"
    if ((*mercury__bit_buffer__read__Result_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 507 "bit_buffer.read.m"
      mercury__bit_buffer__read__STATE_VARIABLE_Buffer_39_39 = mercury__bit_buffer__read__STATE_VARIABLE_Buffer_0_34;
#line 508 "bit_buffer.read.m"
    else
#line 118 "bit_buffer.opt"
      {
#line 118 "bit_buffer.opt"
        MR_Word mercury__bit_buffer__read__TypeInfo_55_72;
#line 118 "bit_buffer.opt"
        MR_Word mercury__bit_buffer__read__TypeInfo_56_73;
#line 118 "bit_buffer.opt"
        MR_Word mercury__bit_buffer__read__TypeInfo_57_74;

#line 118 "bit_buffer.opt"
{
#define MR_PROC_LABEL mercury__bit_buffer__read__bulk_get_into_result_bitmap_11_p_0

	MR_Word ReadStatus;
	ML_BitBufferPtr Buffer0;
	ML_BitBufferPtr Buffer;

	ReadStatus =  *mercury__bit_buffer__read__Result_16 ;
	Buffer0 = (ML_BitBufferPtr) mercury__bit_buffer__read__STATE_VARIABLE_Buffer_0_34 ;
		{
#line 118 "bit_buffer.opt"

    Buffer = Buffer0;
    Buffer->ML_bit_buffer_read_status = ReadStatus;

#line 1853 "bit_buffer.read.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bit_buffer__read__STATE_VARIABLE_Buffer_39_39  = (MR_Box) Buffer;
#line 118 "bit_buffer.opt"
}
#line 118 "bit_buffer.opt"
      }
#line 512 "bit_buffer.read.m"
    mercury__bit_buffer__read__NumBitsBulkRead_25 = (mercury__bit_buffer__read__NumBytesRead_22 * (MR_Integer) 8);
#line 513 "bit_buffer.read.m"
    *mercury__bit_buffer__read__STATE_VARIABLE_Index_27 = (mercury__bit_buffer__read__STATE_VARIABLE_Index_0_26 + mercury__bit_buffer__read__NumBitsBulkRead_25);
#line 514 "bit_buffer.read.m"
    *mercury__bit_buffer__read__STATE_VARIABLE_NumBitsRead_33 = (mercury__bit_buffer__read__STATE_VARIABLE_NumBitsRead_0_32 + mercury__bit_buffer__read__NumBitsBulkRead_25);
#line 515 "bit_buffer.read.m"
    *mercury__bit_buffer__read__STATE_VARIABLE_NumBits_29 = (mercury__bit_buffer__read__STATE_VARIABLE_NumBits_0_28 - mercury__bit_buffer__read__NumBitsBulkRead_25);
#line 110 "bit_buffer.opt"
{
#define MR_PROC_LABEL mercury__bit_buffer__read__bulk_get_into_result_bitmap_11_p_0

	MR_Word State;
	ML_BitBufferPtr Buffer0;
	ML_BitBufferPtr Buffer;

	State = (MR_Word) mercury__bit_buffer__read__State_23 ;
	Buffer0 = (ML_BitBufferPtr) mercury__bit_buffer__read__STATE_VARIABLE_Buffer_39_39 ;
		{
#line 110 "bit_buffer.opt"

    Buffer = Buffer0;
    Buffer->ML_bit_buffer_state = State;

#line 1886 "bit_buffer.read.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__bit_buffer__read__STATE_VARIABLE_Buffer_35  = (MR_Box) Buffer;
#line 110 "bit_buffer.opt"
}
#line 499 "bit_buffer.read.m"
  }
#line 491 "bit_buffer.read.m"
}

#line 475 "bit_buffer.read.m"
static void MR_CALL 
mercury__bit_buffer__read__copy_buffered_bits_to_bitmap_10_p_0(
#line 475 "bit_buffer.read.m"
  MR_Word mercury__bit_buffer__read__TypeInfo_for_S_38,
#line 475 "bit_buffer.read.m"
  MR_Word mercury__bit_buffer__read__TypeInfo_for_St_39,
#line 475 "bit_buffer.read.m"
  MR_Word mercury__bit_buffer__read__TypeInfo_for_E_40,
#line 475 "bit_buffer.read.m"
  MR_Integer mercury__bit_buffer__read__STATE_VARIABLE_Index_0_20,
#line 475 "bit_buffer.read.m"
  MR_Integer * mercury__bit_buffer__read__STATE_VARIABLE_Index_21,
#line 475 "bit_buffer.read.m"
  MR_Integer mercury__bit_buffer__read__STATE_VARIABLE_NumBits_0_22,
#line 475 "bit_buffer.read.m"
  MR_Integer * mercury__bit_buffer__read__STATE_VARIABLE_NumBits_23,
#line 475 "bit_buffer.read.m"
  MR_Box mercury__bit_buffer__read__STATE_VARIABLE_BM_0_24,
#line 475 "bit_buffer.read.m"
  MR_Box * mercury__bit_buffer__read__STATE_VARIABLE_BM_25,
#line 475 "bit_buffer.read.m"
  MR_Integer mercury__bit_buffer__read__STATE_VARIABLE_NumBitsRead_0_26,
#line 475 "bit_buffer.read.m"
  MR_Integer * mercury__bit_buffer__read__STATE_VARIABLE_NumBitsRead_27,
#line 475 "bit_buffer.read.m"
  MR_Box mercury__bit_buffer__read__STATE_VARIABLE_Buffer_0_28,
#line 475 "bit_buffer.read.m"
  MR_Box * mercury__bit_buffer__read__STATE_VARIABLE_Buffer_29)
#line 475 "bit_buffer.read.m"
{
#line 480 "bit_buffer.read.m"
  {
#line 480 "bit_buffer.read.m"
    MR_bool mercury__bit_buffer__read__succeeded;
#line 480 "bit_buffer.read.m"
    MR_Integer mercury__bit_buffer__read__NumBufferedBits_16;
#line 480 "bit_buffer.read.m"
    MR_Integer mercury__bit_buffer__read__NumBitsToGet_17;
#line 480 "bit_buffer.read.m"
    MR_Integer mercury__bit_buffer__read__Pos0_18;
#line 480 "bit_buffer.read.m"
    MR_Integer mercury__bit_buffer__read__Pos_19;
#line 480 "bit_buffer.read.m"
    MR_Word mercury__bit_buffer__read__V_30_30 = (MR_Word) mercury__bit_buffer__read__STATE_VARIABLE_Buffer_0_28;
#line 480 "bit_buffer.read.m"
    MR_Box mercury__bit_buffer__read__V_32_32;
#line 480 "bit_buffer.read.m"
    MR_Box mercury__bit_buffer__read__V_33_33;
#line 76 "bit_buffer.opt"
    MR_Word mercury__bit_buffer__read__TypeInfo_for_S_54;
#line 76 "bit_buffer.opt"
    MR_Word mercury__bit_buffer__read__TypeInfo_for_St_55;
#line 76 "bit_buffer.opt"
    MR_Word mercury__bit_buffer__read__TypeInfo_for_E_56;
#line 73 "bit_buffer.opt"
    MR_Word mercury__bit_buffer__read__TypeInfo_for_S_57;
#line 73 "bit_buffer.opt"
    MR_Word mercury__bit_buffer__read__TypeInfo_for_St_58;
#line 73 "bit_buffer.opt"
    MR_Word mercury__bit_buffer__read__TypeInfo_for_E_59;
#line 73 "bit_buffer.opt"
    MR_Word mercury__bit_buffer__read__TypeInfo_for_S_60;
#line 73 "bit_buffer.opt"
    MR_Word mercury__bit_buffer__read__TypeInfo_for_St_61;
#line 73 "bit_buffer.opt"
    MR_Word mercury__bit_buffer__read__TypeInfo_for_E_62;
#line 105 "bit_buffer.opt"
    MR_Word mercury__bit_buffer__read__TypeInfo_for_S_63;
#line 105 "bit_buffer.opt"
    MR_Word mercury__bit_buffer__read__TypeInfo_for_St_64;
#line 105 "bit_buffer.opt"
    MR_Word mercury__bit_buffer__read__TypeInfo_for_E_65;

#line 481 "bit_buffer.read.m"
    {
#line 481 "bit_buffer.read.m"
      mercury__bit_buffer__read__NumBufferedBits_16 = mercury__bit_buffer__read__num_buffered_bits_1_f_0(mercury__bit_buffer__read__TypeInfo_for_S_38, mercury__bit_buffer__read__TypeInfo_for_St_39, mercury__bit_buffer__read__TypeInfo_for_E_40, mercury__bit_buffer__read__V_30_30);
    }
#line 46 "int.opt"
    mercury__bit_buffer__read__succeeded = (mercury__bit_buffer__read__STATE_VARIABLE_NumBits_0_22 < mercury__bit_buffer__read__NumBufferedBits_16);
#line 49 "int.opt"
    if (mercury__bit_buffer__read__succeeded)
#line 48 "int.opt"
      mercury__bit_buffer__read__NumBitsToGet_17 = mercury__bit_buffer__read__STATE_VARIABLE_NumBits_0_22;
#line 49 "int.opt"
    else
#line 50 "int.opt"
      mercury__bit_buffer__read__NumBitsToGet_17 = mercury__bit_buffer__read__NumBufferedBits_16;
#line 76 "bit_buffer.opt"
{
#define MR_PROC_LABEL mercury__bit_buffer__read__copy_buffered_bits_to_bitmap_10_p_0

	ML_BitBufferPtr Buffer;
	MR_Integer Pos;

	Buffer = (ML_BitBufferPtr) mercury__bit_buffer__read__STATE_VARIABLE_Buffer_0_28 ;
		{
#line 76 "bit_buffer.opt"

    Pos = Buffer->ML_bit_buffer_pos;

#line 2000 "bit_buffer.read.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bit_buffer__read__Pos0_18  = Pos;
#line 76 "bit_buffer.opt"
}
#line 73 "bit_buffer.opt"
{
#define MR_PROC_LABEL mercury__bit_buffer__read__copy_buffered_bits_to_bitmap_10_p_0

	ML_BitBufferPtr Buffer;
	MR_BitmapPtr BM;

	Buffer = (ML_BitBufferPtr) mercury__bit_buffer__read__STATE_VARIABLE_Buffer_0_28 ;
		{
#line 73 "bit_buffer.opt"

    BM = Buffer->ML_bit_buffer_bitmap;

#line 2020 "bit_buffer.read.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bit_buffer__read__V_32_32  = (MR_Box) BM;
#line 73 "bit_buffer.opt"
}
#line 152 "bitmap.opt"
    {
#line 152 "bitmap.opt"
      *mercury__bit_buffer__read__STATE_VARIABLE_BM_25 = mercury__bitmap__copy_bits_6_f_0((MR_Integer) 0, mercury__bit_buffer__read__V_32_32, mercury__bit_buffer__read__Pos0_18, mercury__bit_buffer__read__STATE_VARIABLE_BM_0_24, mercury__bit_buffer__read__STATE_VARIABLE_Index_0_20, mercury__bit_buffer__read__NumBitsToGet_17);
    }
#line 485 "bit_buffer.read.m"
    mercury__bit_buffer__read__Pos_19 = (mercury__bit_buffer__read__Pos0_18 + mercury__bit_buffer__read__NumBitsToGet_17);
#line 73 "bit_buffer.opt"
{
#define MR_PROC_LABEL mercury__bit_buffer__read__copy_buffered_bits_to_bitmap_10_p_0

	ML_BitBufferPtr Buffer;
	MR_BitmapPtr BM;

	Buffer = (ML_BitBufferPtr) mercury__bit_buffer__read__STATE_VARIABLE_Buffer_0_28 ;
		{
#line 73 "bit_buffer.opt"

    BM = Buffer->ML_bit_buffer_bitmap;

#line 2047 "bit_buffer.read.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bit_buffer__read__V_33_33  = (MR_Box) BM;
#line 73 "bit_buffer.opt"
}
#line 105 "bit_buffer.opt"
{
#define MR_PROC_LABEL mercury__bit_buffer__read__copy_buffered_bits_to_bitmap_10_p_0

	MR_BitmapPtr BM;
	MR_Integer Pos;
	ML_BitBufferPtr Buffer0;
	ML_BitBufferPtr Buffer;

	BM = (MR_BitmapPtr) mercury__bit_buffer__read__V_33_33 ;
	Pos =  mercury__bit_buffer__read__Pos_19 ;
	Buffer0 = (ML_BitBufferPtr) mercury__bit_buffer__read__STATE_VARIABLE_Buffer_0_28 ;
		{
#line 105 "bit_buffer.opt"

    Buffer = Buffer0;
    Buffer->ML_bit_buffer_bitmap = BM;
    Buffer->ML_bit_buffer_pos = Pos;

#line 2073 "bit_buffer.read.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__bit_buffer__read__STATE_VARIABLE_Buffer_29  = (MR_Box) Buffer;
#line 105 "bit_buffer.opt"
}
#line 487 "bit_buffer.read.m"
    *mercury__bit_buffer__read__STATE_VARIABLE_Index_21 = (mercury__bit_buffer__read__STATE_VARIABLE_Index_0_20 + mercury__bit_buffer__read__NumBitsToGet_17);
#line 488 "bit_buffer.read.m"
    *mercury__bit_buffer__read__STATE_VARIABLE_NumBits_23 = (mercury__bit_buffer__read__STATE_VARIABLE_NumBits_0_22 - mercury__bit_buffer__read__NumBitsToGet_17);
#line 489 "bit_buffer.read.m"
    *mercury__bit_buffer__read__STATE_VARIABLE_NumBitsRead_27 = (mercury__bit_buffer__read__STATE_VARIABLE_NumBitsRead_0_26 + mercury__bit_buffer__read__NumBitsToGet_17);
#line 480 "bit_buffer.read.m"
  }
#line 475 "bit_buffer.read.m"
}

#line 401 "bit_buffer.read.m"
static void MR_CALL 
mercury__bit_buffer__read__recursively_get_bitmap_9_p_0(
#line 401 "bit_buffer.read.m"
  MR_Word mercury__bit_buffer__read__TypeClassInfo_for_bulk_reader_78,
#line 401 "bit_buffer.read.m"
  MR_Integer mercury__bit_buffer__read__STATE_VARIABLE_Index_0_22,
#line 401 "bit_buffer.read.m"
  MR_Integer mercury__bit_buffer__read__STATE_VARIABLE_NumBits_0_23,
#line 401 "bit_buffer.read.m"
  MR_Box mercury__bit_buffer__read__STATE_VARIABLE_BM_0_24,
#line 401 "bit_buffer.read.m"
  MR_Box * mercury__bit_buffer__read__STATE_VARIABLE_BM_25,
#line 401 "bit_buffer.read.m"
  MR_Integer mercury__bit_buffer__read__STATE_VARIABLE_NumBitsRead_0_26,
#line 401 "bit_buffer.read.m"
  MR_Integer * mercury__bit_buffer__read__STATE_VARIABLE_NumBitsRead_27,
#line 401 "bit_buffer.read.m"
  MR_Word * mercury__bit_buffer__read__Result_14,
#line 401 "bit_buffer.read.m"
  MR_Box mercury__bit_buffer__read__STATE_VARIABLE_Buffer_0_28,
#line 401 "bit_buffer.read.m"
  MR_Box * mercury__bit_buffer__read__STATE_VARIABLE_Buffer_29)
#line 401 "bit_buffer.read.m"
{
#line 412 "bit_buffer.read.m"
  while (MR_TRUE)
#line 412 "bit_buffer.read.m"
    {
#line 412 "bit_buffer.read.m"
      /* tailcall optimized into a loop */
#line 412 "bit_buffer.read.m"
      {
#line 412 "bit_buffer.read.m"
        MR_bool mercury__bit_buffer__read__succeeded = (mercury__bit_buffer__read__STATE_VARIABLE_NumBits_0_23 == (MR_Integer) 0);

#line 412 "bit_buffer.read.m"
        if (mercury__bit_buffer__read__succeeded)
#line 411 "bit_buffer.read.m"
          {
#line 411 "bit_buffer.read.m"
            *mercury__bit_buffer__read__Result_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 411 "bit_buffer.read.m"
            *mercury__bit_buffer__read__STATE_VARIABLE_Buffer_29 = mercury__bit_buffer__read__STATE_VARIABLE_Buffer_0_28;
#line 411 "bit_buffer.read.m"
            *mercury__bit_buffer__read__STATE_VARIABLE_NumBitsRead_27 = mercury__bit_buffer__read__STATE_VARIABLE_NumBitsRead_0_26;
#line 411 "bit_buffer.read.m"
            *mercury__bit_buffer__read__STATE_VARIABLE_BM_25 = mercury__bit_buffer__read__STATE_VARIABLE_BM_0_24;
#line 411 "bit_buffer.read.m"
          }
#line 412 "bit_buffer.read.m"
        else
#line 417 "bit_buffer.read.m"
          {
#line 417 "bit_buffer.read.m"
            MR_Word mercury__bit_buffer__read__TypeInfo_80_80;
#line 417 "bit_buffer.read.m"
            MR_Word mercury__bit_buffer__read__TypeInfo_82_82;
#line 417 "bit_buffer.read.m"
            MR_Word mercury__bit_buffer__read__TypeInfo_84_84;
#line 417 "bit_buffer.read.m"
            MR_Integer mercury__bit_buffer__read__STATE_VARIABLE_Index_30_30;
#line 417 "bit_buffer.read.m"
            MR_Integer mercury__bit_buffer__read__STATE_VARIABLE_NumBits_31_31;
#line 417 "bit_buffer.read.m"
            MR_Box mercury__bit_buffer__read__STATE_VARIABLE_BM_32_32;
#line 417 "bit_buffer.read.m"
            MR_Integer mercury__bit_buffer__read__STATE_VARIABLE_NumBitsRead_33_33;
#line 417 "bit_buffer.read.m"
            MR_Box mercury__bit_buffer__read__STATE_VARIABLE_Buffer_34_34;

#line 101 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__bit_buffer__read__recursively_get_bitmap_9_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__bit_buffer__read__TypeClassInfo_for_bulk_reader_78 ;
	Index =  (MR_Integer) 3 ;
		{
#line 101 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 2177 "bit_buffer.read.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bit_buffer__read__TypeInfo_80_80  = TypeInfo;
#line 101 "private_builtin.opt"
}
#line 101 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__bit_buffer__read__recursively_get_bitmap_9_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__bit_buffer__read__TypeClassInfo_for_bulk_reader_78 ;
	Index =  (MR_Integer) 6 ;
		{
#line 101 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 2199 "bit_buffer.read.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bit_buffer__read__TypeInfo_82_82  = TypeInfo;
#line 101 "private_builtin.opt"
}
#line 101 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__bit_buffer__read__recursively_get_bitmap_9_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__bit_buffer__read__TypeClassInfo_for_bulk_reader_78 ;
	Index =  (MR_Integer) 7 ;
		{
#line 101 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 2221 "bit_buffer.read.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bit_buffer__read__TypeInfo_84_84  = TypeInfo;
#line 101 "private_builtin.opt"
}
#line 416 "bit_buffer.read.m"
            {
#line 416 "bit_buffer.read.m"
              mercury__bit_buffer__read__copy_buffered_bits_to_bitmap_10_p_0(mercury__bit_buffer__read__TypeInfo_80_80, mercury__bit_buffer__read__TypeInfo_82_82, mercury__bit_buffer__read__TypeInfo_84_84, mercury__bit_buffer__read__STATE_VARIABLE_Index_0_22, &mercury__bit_buffer__read__STATE_VARIABLE_Index_30_30, mercury__bit_buffer__read__STATE_VARIABLE_NumBits_0_23, &mercury__bit_buffer__read__STATE_VARIABLE_NumBits_31_31, mercury__bit_buffer__read__STATE_VARIABLE_BM_0_24, &mercury__bit_buffer__read__STATE_VARIABLE_BM_32_32, mercury__bit_buffer__read__STATE_VARIABLE_NumBitsRead_0_26, &mercury__bit_buffer__read__STATE_VARIABLE_NumBitsRead_33_33, mercury__bit_buffer__read__STATE_VARIABLE_Buffer_0_28, &mercury__bit_buffer__read__STATE_VARIABLE_Buffer_34_34);
            }
#line 419 "bit_buffer.read.m"
            mercury__bit_buffer__read__succeeded = (mercury__bit_buffer__read__STATE_VARIABLE_NumBits_31_31 == (MR_Integer) 0);
#line 422 "bit_buffer.read.m"
            if (mercury__bit_buffer__read__succeeded)
#line 421 "bit_buffer.read.m"
              {
#line 421 "bit_buffer.read.m"
                *mercury__bit_buffer__read__Result_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 421 "bit_buffer.read.m"
                *mercury__bit_buffer__read__STATE_VARIABLE_Buffer_29 = mercury__bit_buffer__read__STATE_VARIABLE_Buffer_34_34;
#line 421 "bit_buffer.read.m"
                *mercury__bit_buffer__read__STATE_VARIABLE_NumBitsRead_27 = mercury__bit_buffer__read__STATE_VARIABLE_NumBitsRead_33_33;
#line 421 "bit_buffer.read.m"
                *mercury__bit_buffer__read__STATE_VARIABLE_BM_25 = mercury__bit_buffer__read__STATE_VARIABLE_BM_32_32;
#line 421 "bit_buffer.read.m"
              }
#line 422 "bit_buffer.read.m"
            else
#line 458 "bit_buffer.read.m"
              {
#line 423 "bit_buffer.read.m"
                MR_Integer mercury__bit_buffer__read__V_35_35 = (mercury__bit_buffer__read__STATE_VARIABLE_Index_30_30 % (MR_Integer) 8);

#line 423 "bit_buffer.read.m"
                mercury__bit_buffer__read__succeeded = (mercury__bit_buffer__read__V_35_35 == (MR_Integer) 0);
#line 458 "bit_buffer.read.m"
                if (mercury__bit_buffer__read__succeeded)
#line 429 "bit_buffer.read.m"
                  {
#line 429 "bit_buffer.read.m"
                    MR_Word mercury__bit_buffer__read__BulkGetResult_16;
#line 429 "bit_buffer.read.m"
                    MR_Box mercury__bit_buffer__read__STATE_VARIABLE_BM_39_39;
#line 429 "bit_buffer.read.m"
                    MR_Integer mercury__bit_buffer__read__STATE_VARIABLE_NumBitsRead_40_40;
#line 429 "bit_buffer.read.m"
                    MR_Box mercury__bit_buffer__read__STATE_VARIABLE_Buffer_41_41;
#line 429 "bit_buffer.read.m"
                    MR_Integer mercury__bit_buffer__read__STATE_VARIABLE_Index_37_63;
#line 429 "bit_buffer.read.m"
                    MR_Integer mercury__bit_buffer__read__STATE_VARIABLE_NumBits_38_64;

#line 428 "bit_buffer.read.m"
                    {
#line 428 "bit_buffer.read.m"
                      mercury__bit_buffer__read__bulk_get_into_result_bitmap_11_p_0(mercury__bit_buffer__read__TypeClassInfo_for_bulk_reader_78, mercury__bit_buffer__read__STATE_VARIABLE_Index_30_30, &mercury__bit_buffer__read__STATE_VARIABLE_Index_37_63, mercury__bit_buffer__read__STATE_VARIABLE_NumBits_31_31, &mercury__bit_buffer__read__STATE_VARIABLE_NumBits_38_64, mercury__bit_buffer__read__STATE_VARIABLE_BM_32_32, &mercury__bit_buffer__read__STATE_VARIABLE_BM_39_39, mercury__bit_buffer__read__STATE_VARIABLE_NumBitsRead_33_33, &mercury__bit_buffer__read__STATE_VARIABLE_NumBitsRead_40_40, &mercury__bit_buffer__read__BulkGetResult_16, mercury__bit_buffer__read__STATE_VARIABLE_Buffer_34_34, &mercury__bit_buffer__read__STATE_VARIABLE_Buffer_41_41);
                    }
#line 454 "bit_buffer.read.m"
                    if ((mercury__bit_buffer__read__BulkGetResult_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 451 "bit_buffer.read.m"
                      {
#line 432 "bit_buffer.read.m"
                        mercury__bit_buffer__read__succeeded = (mercury__bit_buffer__read__STATE_VARIABLE_NumBits_38_64 > (MR_Integer) 0);
#line 451 "bit_buffer.read.m"
                        if (mercury__bit_buffer__read__succeeded)
#line 433 "bit_buffer.read.m"
                          {
#line 433 "bit_buffer.read.m"
                            MR_Integer mercury__bit_buffer__read__LastBits_17;
#line 433 "bit_buffer.read.m"
                            MR_Integer mercury__bit_buffer__read__NumLastBitsRead_18;
#line 433 "bit_buffer.read.m"
                            MR_Word mercury__bit_buffer__read__LastBitsResult_19;
#line 433 "bit_buffer.read.m"
                            MR_Word mercury__bit_buffer__read__STATE_VARIABLE_Buffer_43_43 = (MR_Word) mercury__bit_buffer__read__STATE_VARIABLE_Buffer_41_41;
#line 433 "bit_buffer.read.m"
                            MR_Integer mercury__bit_buffer__read__V_44_44;
#line 433 "bit_buffer.read.m"
                            MR_Word mercury__bit_buffer__read__STATE_VARIABLE_Buffer_46_46;
#line 433 "bit_buffer.read.m"
                            MR_Integer mercury__bit_buffer__read__V_47_47;

#line 132 "int.opt"
{
#define MR_PROC_LABEL mercury__bit_buffer__read__recursively_get_bitmap_9_p_0

	MR_Integer Bits;

		{
#line 132 "int.opt"

    Bits = ML_BITS_PER_INT;

#line 2316 "bit_buffer.read.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bit_buffer__read__V_47_47  = Bits;
#line 132 "int.opt"
}
#line 434 "bit_buffer.read.m"
                            mercury__bit_buffer__read__V_44_44 = (mercury__bit_buffer__read__V_47_47 - mercury__bit_buffer__read__STATE_VARIABLE_NumBits_38_64);
#line 434 "bit_buffer.read.m"
                            {
#line 434 "bit_buffer.read.m"
                              mercury__bit_buffer__read__get_bits_8_p_0(mercury__bit_buffer__read__TypeClassInfo_for_bulk_reader_78, mercury__bit_buffer__read__V_44_44, mercury__bit_buffer__read__STATE_VARIABLE_NumBits_38_64, (MR_Integer) 0, &mercury__bit_buffer__read__LastBits_17, &mercury__bit_buffer__read__NumLastBitsRead_18, &mercury__bit_buffer__read__LastBitsResult_19, mercury__bit_buffer__read__STATE_VARIABLE_Buffer_43_43, &mercury__bit_buffer__read__STATE_VARIABLE_Buffer_46_46);
                            }
#line 436 "bit_buffer.read.m"
                            *mercury__bit_buffer__read__STATE_VARIABLE_Buffer_29 = (MR_Box) mercury__bit_buffer__read__STATE_VARIABLE_Buffer_46_46;
#line 446 "bit_buffer.read.m"
                            if ((mercury__bit_buffer__read__LastBitsResult_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 438 "bit_buffer.read.m"
                              {
#line 444 "bit_buffer.read.m"
                                {
#line 444 "bit_buffer.read.m"
                                  *mercury__bit_buffer__read__STATE_VARIABLE_BM_25 = mercury__bitmap__f_98_105_116_115_32_58_61_4_f_0(mercury__bit_buffer__read__STATE_VARIABLE_Index_37_63, mercury__bit_buffer__read__STATE_VARIABLE_NumBits_38_64, mercury__bit_buffer__read__STATE_VARIABLE_BM_39_39, mercury__bit_buffer__read__LastBits_17);
                                }
#line 445 "bit_buffer.read.m"
                                *mercury__bit_buffer__read__Result_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 438 "bit_buffer.read.m"
                              }
#line 446 "bit_buffer.read.m"
                            else
#line 447 "bit_buffer.read.m"
                              {
#line 448 "bit_buffer.read.m"
                                *mercury__bit_buffer__read__Result_14 = mercury__bit_buffer__read__LastBitsResult_19;
#line 447 "bit_buffer.read.m"
                                *mercury__bit_buffer__read__STATE_VARIABLE_BM_25 = mercury__bit_buffer__read__STATE_VARIABLE_BM_39_39;
#line 447 "bit_buffer.read.m"
                              }
#line 450 "bit_buffer.read.m"
                            *mercury__bit_buffer__read__STATE_VARIABLE_NumBitsRead_27 = (mercury__bit_buffer__read__STATE_VARIABLE_NumBitsRead_40_40 + mercury__bit_buffer__read__NumLastBitsRead_18);
#line 433 "bit_buffer.read.m"
                          }
#line 451 "bit_buffer.read.m"
                        else
#line 452 "bit_buffer.read.m"
                          {
#line 452 "bit_buffer.read.m"
                            *mercury__bit_buffer__read__Result_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 452 "bit_buffer.read.m"
                            *mercury__bit_buffer__read__STATE_VARIABLE_Buffer_29 = mercury__bit_buffer__read__STATE_VARIABLE_Buffer_41_41;
#line 452 "bit_buffer.read.m"
                            *mercury__bit_buffer__read__STATE_VARIABLE_NumBitsRead_27 = mercury__bit_buffer__read__STATE_VARIABLE_NumBitsRead_40_40;
#line 452 "bit_buffer.read.m"
                            *mercury__bit_buffer__read__STATE_VARIABLE_BM_25 = mercury__bit_buffer__read__STATE_VARIABLE_BM_39_39;
#line 452 "bit_buffer.read.m"
                          }
#line 451 "bit_buffer.read.m"
                      }
#line 454 "bit_buffer.read.m"
                    else
#line 455 "bit_buffer.read.m"
                      {
#line 456 "bit_buffer.read.m"
                        *mercury__bit_buffer__read__Result_14 = mercury__bit_buffer__read__BulkGetResult_16;
#line 455 "bit_buffer.read.m"
                        *mercury__bit_buffer__read__STATE_VARIABLE_BM_25 = mercury__bit_buffer__read__STATE_VARIABLE_BM_39_39;
#line 455 "bit_buffer.read.m"
                        *mercury__bit_buffer__read__STATE_VARIABLE_NumBitsRead_27 = mercury__bit_buffer__read__STATE_VARIABLE_NumBitsRead_40_40;
#line 455 "bit_buffer.read.m"
                        *mercury__bit_buffer__read__STATE_VARIABLE_Buffer_29 = mercury__bit_buffer__read__STATE_VARIABLE_Buffer_41_41;
#line 455 "bit_buffer.read.m"
                      }
#line 429 "bit_buffer.read.m"
                  }
#line 458 "bit_buffer.read.m"
                else
#line 459 "bit_buffer.read.m"
                  {
#line 459 "bit_buffer.read.m"
                    MR_Word mercury__bit_buffer__read__RefillRes_21;
#line 459 "bit_buffer.read.m"
                    MR_Box mercury__bit_buffer__read__STATE_VARIABLE_Buffer_51_51;

#line 459 "bit_buffer.read.m"
                    {
#line 459 "bit_buffer.read.m"
                      mercury__bit_buffer__read__do_refill_read_buffer_3_p_0(mercury__bit_buffer__read__TypeClassInfo_for_bulk_reader_78, &mercury__bit_buffer__read__RefillRes_21, mercury__bit_buffer__read__STATE_VARIABLE_Buffer_34_34, &mercury__bit_buffer__read__STATE_VARIABLE_Buffer_51_51);
                    }
#line 468 "bit_buffer.read.m"
                    if ((mercury__bit_buffer__read__RefillRes_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 465 "bit_buffer.read.m"
                      {
#line 462 "bit_buffer.read.m"
                        MR_Word mercury__bit_buffer__read__TypeInfo_85_85;
#line 462 "bit_buffer.read.m"
                        MR_Word mercury__bit_buffer__read__TypeInfo_86_86;
#line 462 "bit_buffer.read.m"
                        MR_Word mercury__bit_buffer__read__TypeInfo_87_87;
#line 462 "bit_buffer.read.m"
                        MR_Integer mercury__bit_buffer__read__V_52_52;
#line 462 "bit_buffer.read.m"
                        MR_Word mercury__bit_buffer__read__V_54_54 = (MR_Word) mercury__bit_buffer__read__STATE_VARIABLE_Buffer_51_51;

#line 101 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__bit_buffer__read__recursively_get_bitmap_9_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__bit_buffer__read__TypeClassInfo_for_bulk_reader_78 ;
	Index =  (MR_Integer) 3 ;
		{
#line 101 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 2435 "bit_buffer.read.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bit_buffer__read__TypeInfo_85_85  = TypeInfo;
#line 101 "private_builtin.opt"
}
#line 101 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__bit_buffer__read__recursively_get_bitmap_9_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__bit_buffer__read__TypeClassInfo_for_bulk_reader_78 ;
	Index =  (MR_Integer) 6 ;
		{
#line 101 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 2457 "bit_buffer.read.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bit_buffer__read__TypeInfo_86_86  = TypeInfo;
#line 101 "private_builtin.opt"
}
#line 101 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__bit_buffer__read__recursively_get_bitmap_9_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__bit_buffer__read__TypeClassInfo_for_bulk_reader_78 ;
	Index =  (MR_Integer) 7 ;
		{
#line 101 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 2479 "bit_buffer.read.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bit_buffer__read__TypeInfo_87_87  = TypeInfo;
#line 101 "private_builtin.opt"
}
#line 462 "bit_buffer.read.m"
                        {
#line 462 "bit_buffer.read.m"
                          mercury__bit_buffer__read__V_52_52 = mercury__bit_buffer__read__num_buffered_bits_1_f_0(mercury__bit_buffer__read__TypeInfo_85_85, mercury__bit_buffer__read__TypeInfo_86_86, mercury__bit_buffer__read__TypeInfo_87_87, mercury__bit_buffer__read__V_54_54);
                        }
#line 462 "bit_buffer.read.m"
                        mercury__bit_buffer__read__succeeded = (mercury__bit_buffer__read__V_52_52 > (MR_Integer) 0);
#line 465 "bit_buffer.read.m"
                        if (mercury__bit_buffer__read__succeeded)
#line 463 "bit_buffer.read.m"
                          {
#line 463 "bit_buffer.read.m"
                            /* direct tailcall eliminated */
#line 463 "bit_buffer.read.m"
                            {
#line 463 "bit_buffer.read.m"
                              MR_Integer mercury__bit_buffer__read__STATE_VARIABLE_Index_0__tmp_copy_22 = mercury__bit_buffer__read__STATE_VARIABLE_Index_30_30;
#line 463 "bit_buffer.read.m"
                              MR_Integer mercury__bit_buffer__read__STATE_VARIABLE_NumBits_0__tmp_copy_23 = mercury__bit_buffer__read__STATE_VARIABLE_NumBits_31_31;
#line 463 "bit_buffer.read.m"
                              MR_Box mercury__bit_buffer__read__STATE_VARIABLE_BM_0__tmp_copy_24 = mercury__bit_buffer__read__STATE_VARIABLE_BM_32_32;
#line 463 "bit_buffer.read.m"
                              MR_Integer mercury__bit_buffer__read__STATE_VARIABLE_NumBitsRead_0__tmp_copy_26 = mercury__bit_buffer__read__STATE_VARIABLE_NumBitsRead_33_33;
#line 463 "bit_buffer.read.m"
                              MR_Box mercury__bit_buffer__read__STATE_VARIABLE_Buffer_0__tmp_copy_28 = mercury__bit_buffer__read__STATE_VARIABLE_Buffer_51_51;

#line 463 "bit_buffer.read.m"
                              mercury__bit_buffer__read__STATE_VARIABLE_Buffer_0_28 = mercury__bit_buffer__read__STATE_VARIABLE_Buffer_0__tmp_copy_28;
#line 463 "bit_buffer.read.m"
                              mercury__bit_buffer__read__STATE_VARIABLE_NumBitsRead_0_26 = mercury__bit_buffer__read__STATE_VARIABLE_NumBitsRead_0__tmp_copy_26;
#line 463 "bit_buffer.read.m"
                              mercury__bit_buffer__read__STATE_VARIABLE_BM_0_24 = mercury__bit_buffer__read__STATE_VARIABLE_BM_0__tmp_copy_24;
#line 463 "bit_buffer.read.m"
                              mercury__bit_buffer__read__STATE_VARIABLE_NumBits_0_23 = mercury__bit_buffer__read__STATE_VARIABLE_NumBits_0__tmp_copy_23;
#line 463 "bit_buffer.read.m"
                              mercury__bit_buffer__read__STATE_VARIABLE_Index_0_22 = mercury__bit_buffer__read__STATE_VARIABLE_Index_0__tmp_copy_22;
#line 463 "bit_buffer.read.m"
                            }
#line 463 "bit_buffer.read.m"
                            continue;
#line 463 "bit_buffer.read.m"
                          }
#line 465 "bit_buffer.read.m"
                        else
#line 466 "bit_buffer.read.m"
                          {
#line 466 "bit_buffer.read.m"
                            *mercury__bit_buffer__read__Result_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 466 "bit_buffer.read.m"
                            *mercury__bit_buffer__read__STATE_VARIABLE_Buffer_29 = mercury__bit_buffer__read__STATE_VARIABLE_Buffer_51_51;
#line 466 "bit_buffer.read.m"
                            *mercury__bit_buffer__read__STATE_VARIABLE_NumBitsRead_27 = mercury__bit_buffer__read__STATE_VARIABLE_NumBitsRead_33_33;
#line 466 "bit_buffer.read.m"
                            *mercury__bit_buffer__read__STATE_VARIABLE_BM_25 = mercury__bit_buffer__read__STATE_VARIABLE_BM_32_32;
#line 466 "bit_buffer.read.m"
                          }
#line 465 "bit_buffer.read.m"
                      }
#line 468 "bit_buffer.read.m"
                    else
#line 469 "bit_buffer.read.m"
                      {
#line 470 "bit_buffer.read.m"
                        *mercury__bit_buffer__read__Result_14 = mercury__bit_buffer__read__RefillRes_21;
#line 469 "bit_buffer.read.m"
                        *mercury__bit_buffer__read__STATE_VARIABLE_BM_25 = mercury__bit_buffer__read__STATE_VARIABLE_BM_32_32;
#line 469 "bit_buffer.read.m"
                        *mercury__bit_buffer__read__STATE_VARIABLE_NumBitsRead_27 = mercury__bit_buffer__read__STATE_VARIABLE_NumBitsRead_33_33;
#line 469 "bit_buffer.read.m"
                        *mercury__bit_buffer__read__STATE_VARIABLE_Buffer_29 = mercury__bit_buffer__read__STATE_VARIABLE_Buffer_51_51;
#line 469 "bit_buffer.read.m"
                      }
#line 459 "bit_buffer.read.m"
                  }
#line 458 "bit_buffer.read.m"
              }
#line 417 "bit_buffer.read.m"
          }
#line 412 "bit_buffer.read.m"
      }
#line 412 "bit_buffer.read.m"
      break;
#line 412 "bit_buffer.read.m"
    }
#line 401 "bit_buffer.read.m"
}

#line 333 "bit_buffer.read.m"
static void MR_CALL 
mercury__bit_buffer__read__do_get_bits_7_p_0(
#line 333 "bit_buffer.read.m"
  MR_Word mercury__bit_buffer__read__TypeClassInfo_for_bulk_reader_46,
#line 333 "bit_buffer.read.m"
  MR_Integer mercury__bit_buffer__read__Index_8,
#line 333 "bit_buffer.read.m"
  MR_Integer mercury__bit_buffer__read__NumBits_9,
#line 333 "bit_buffer.read.m"
  MR_Integer mercury__bit_buffer__read__STATE_VARIABLE_Word_0_22,
#line 333 "bit_buffer.read.m"
  MR_Integer * mercury__bit_buffer__read__STATE_VARIABLE_Word_23,
#line 333 "bit_buffer.read.m"
  MR_Integer * mercury__bit_buffer__read__NumBitsRead_11,
#line 333 "bit_buffer.read.m"
  MR_Word mercury__bit_buffer__read__RB_6,
#line 333 "bit_buffer.read.m"
  MR_Word * mercury__bit_buffer__read__HeadVar__7_7)
#line 333 "bit_buffer.read.m"
{
#line 339 "bit_buffer.read.m"
  {
#line 339 "bit_buffer.read.m"
    MR_bool mercury__bit_buffer__read__succeeded;
#line 339 "bit_buffer.read.m"
    MR_Word mercury__bit_buffer__read__TypeInfo_48_48;
#line 339 "bit_buffer.read.m"
    MR_Word mercury__bit_buffer__read__TypeInfo_50_50;
#line 339 "bit_buffer.read.m"
    MR_Word mercury__bit_buffer__read__TypeInfo_52_52;
#line 339 "bit_buffer.read.m"
    MR_Integer mercury__bit_buffer__read__NumBitsAvailable_14;
#line 339 "bit_buffer.read.m"
    MR_Integer mercury__bit_buffer__read__Pos_15;
#line 339 "bit_buffer.read.m"
    MR_Integer mercury__bit_buffer__read__Bits0_16;
#line 339 "bit_buffer.read.m"
    MR_Integer mercury__bit_buffer__read__Bits_17;
#line 339 "bit_buffer.read.m"
    MR_Integer mercury__bit_buffer__read__LastBit_18;
#line 339 "bit_buffer.read.m"
    MR_Integer mercury__bit_buffer__read__Shift_19;
#line 339 "bit_buffer.read.m"
    MR_Integer mercury__bit_buffer__read__BitMask_20;
#line 339 "bit_buffer.read.m"
    MR_Integer mercury__bit_buffer__read__BitsMask_21;
#line 339 "bit_buffer.read.m"
    MR_Box mercury__bit_buffer__read__STATE_VARIABLE_Buffer_0_24 = (MR_Box) mercury__bit_buffer__read__RB_6;
#line 339 "bit_buffer.read.m"
    MR_Box mercury__bit_buffer__read__STATE_VARIABLE_Buffer_25;
#line 339 "bit_buffer.read.m"
    MR_Box mercury__bit_buffer__read__V_26_26;
#line 339 "bit_buffer.read.m"
    MR_Integer mercury__bit_buffer__read__V_27_27;
#line 339 "bit_buffer.read.m"
    MR_Integer mercury__bit_buffer__read__V_28_28;
#line 339 "bit_buffer.read.m"
    MR_Integer mercury__bit_buffer__read__V_30_30;
#line 339 "bit_buffer.read.m"
    MR_Integer mercury__bit_buffer__read__V_31_31;
#line 339 "bit_buffer.read.m"
    MR_Integer mercury__bit_buffer__read__V_34_34;
#line 339 "bit_buffer.read.m"
    MR_Integer mercury__bit_buffer__read__V_36_36;
#line 339 "bit_buffer.read.m"
    MR_Integer mercury__bit_buffer__read__STATE_VARIABLE_Word_38_38;
#line 339 "bit_buffer.read.m"
    MR_Integer mercury__bit_buffer__read__V_39_39;
#line 339 "bit_buffer.read.m"
    MR_Integer mercury__bit_buffer__read__V_40_40;
#line 339 "bit_buffer.read.m"
    MR_Integer mercury__bit_buffer__read__V_42_42;
#line 339 "bit_buffer.read.m"
    MR_Box mercury__bit_buffer__read__V_43_43;
#line 339 "bit_buffer.read.m"
    MR_Integer mercury__bit_buffer__read__V_44_44;
#line 76 "bit_buffer.opt"
    MR_Word mercury__bit_buffer__read__TypeInfo_53_72;
#line 76 "bit_buffer.opt"
    MR_Word mercury__bit_buffer__read__TypeInfo_54_73;
#line 76 "bit_buffer.opt"
    MR_Word mercury__bit_buffer__read__TypeInfo_55_74;
#line 73 "bit_buffer.opt"
    MR_Word mercury__bit_buffer__read__TypeInfo_56_75;
#line 73 "bit_buffer.opt"
    MR_Word mercury__bit_buffer__read__TypeInfo_57_76;
#line 73 "bit_buffer.opt"
    MR_Word mercury__bit_buffer__read__TypeInfo_58_77;
#line 73 "bit_buffer.opt"
    MR_Word mercury__bit_buffer__read__TypeInfo_59_78;
#line 73 "bit_buffer.opt"
    MR_Word mercury__bit_buffer__read__TypeInfo_60_79;
#line 73 "bit_buffer.opt"
    MR_Word mercury__bit_buffer__read__TypeInfo_61_80;
#line 105 "bit_buffer.opt"
    MR_Word mercury__bit_buffer__read__TypeInfo_62_81;
#line 105 "bit_buffer.opt"
    MR_Word mercury__bit_buffer__read__TypeInfo_63_82;
#line 105 "bit_buffer.opt"
    MR_Word mercury__bit_buffer__read__TypeInfo_64_83;

#line 101 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__bit_buffer__read__do_get_bits_7_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__bit_buffer__read__TypeClassInfo_for_bulk_reader_46 ;
	Index =  (MR_Integer) 3 ;
		{
#line 101 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 2690 "bit_buffer.read.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bit_buffer__read__TypeInfo_48_48  = TypeInfo;
#line 101 "private_builtin.opt"
}
#line 101 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__bit_buffer__read__do_get_bits_7_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__bit_buffer__read__TypeClassInfo_for_bulk_reader_46 ;
	Index =  (MR_Integer) 6 ;
		{
#line 101 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 2712 "bit_buffer.read.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bit_buffer__read__TypeInfo_50_50  = TypeInfo;
#line 101 "private_builtin.opt"
}
#line 101 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__bit_buffer__read__do_get_bits_7_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__bit_buffer__read__TypeClassInfo_for_bulk_reader_46 ;
	Index =  (MR_Integer) 7 ;
		{
#line 101 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 2734 "bit_buffer.read.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bit_buffer__read__TypeInfo_52_52  = TypeInfo;
#line 101 "private_builtin.opt"
}
#line 340 "bit_buffer.read.m"
    {
#line 340 "bit_buffer.read.m"
      mercury__bit_buffer__read__NumBitsAvailable_14 = mercury__bit_buffer__read__num_buffered_bits_1_f_0(mercury__bit_buffer__read__TypeInfo_48_48, mercury__bit_buffer__read__TypeInfo_50_50, mercury__bit_buffer__read__TypeInfo_52_52, mercury__bit_buffer__read__RB_6);
    }
#line 76 "bit_buffer.opt"
{
#define MR_PROC_LABEL mercury__bit_buffer__read__do_get_bits_7_p_0

	ML_BitBufferPtr Buffer;
	MR_Integer Pos;

	Buffer = (ML_BitBufferPtr) mercury__bit_buffer__read__STATE_VARIABLE_Buffer_0_24 ;
		{
#line 76 "bit_buffer.opt"

    Pos = Buffer->ML_bit_buffer_pos;

#line 2759 "bit_buffer.read.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bit_buffer__read__Pos_15  = Pos;
#line 76 "bit_buffer.opt"
}
#line 46 "int.opt"
    mercury__bit_buffer__read__succeeded = (mercury__bit_buffer__read__NumBitsAvailable_14 < mercury__bit_buffer__read__NumBits_9);
#line 49 "int.opt"
    if (mercury__bit_buffer__read__succeeded)
#line 48 "int.opt"
      *mercury__bit_buffer__read__NumBitsRead_11 = mercury__bit_buffer__read__NumBitsAvailable_14;
#line 49 "int.opt"
    else
#line 50 "int.opt"
      *mercury__bit_buffer__read__NumBitsRead_11 = mercury__bit_buffer__read__NumBits_9;
#line 73 "bit_buffer.opt"
{
#define MR_PROC_LABEL mercury__bit_buffer__read__do_get_bits_7_p_0

	ML_BitBufferPtr Buffer;
	MR_BitmapPtr BM;

	Buffer = (ML_BitBufferPtr) mercury__bit_buffer__read__STATE_VARIABLE_Buffer_0_24 ;
		{
#line 73 "bit_buffer.opt"

    BM = Buffer->ML_bit_buffer_bitmap;

#line 2789 "bit_buffer.read.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bit_buffer__read__V_26_26  = (MR_Box) BM;
#line 73 "bit_buffer.opt"
}
#line 343 "bit_buffer.read.m"
    {
#line 343 "bit_buffer.read.m"
      mercury__bit_buffer__read__Bits0_16 = mercury__bitmap__bits_3_f_0(mercury__bit_buffer__read__Pos_15, *mercury__bit_buffer__read__NumBitsRead_11, mercury__bit_buffer__read__V_26_26);
    }
#line 344 "bit_buffer.read.m"
    mercury__bit_buffer__read__V_27_27 = (mercury__bit_buffer__read__NumBits_9 - *mercury__bit_buffer__read__NumBitsRead_11);
#line 344 "bit_buffer.read.m"
    mercury__bit_buffer__read__Bits_17 = (mercury__bit_buffer__read__Bits0_16 << mercury__bit_buffer__read__V_27_27);
#line 346 "bit_buffer.read.m"
    mercury__bit_buffer__read__V_28_28 = (mercury__bit_buffer__read__Index_8 + *mercury__bit_buffer__read__NumBitsRead_11);
#line 346 "bit_buffer.read.m"
    mercury__bit_buffer__read__LastBit_18 = (mercury__bit_buffer__read__V_28_28 - (MR_Integer) 1);
#line 132 "int.opt"
{
#define MR_PROC_LABEL mercury__bit_buffer__read__do_get_bits_7_p_0

	MR_Integer Bits;

		{
#line 132 "int.opt"

    Bits = ML_BITS_PER_INT;

#line 2820 "bit_buffer.read.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bit_buffer__read__V_31_31  = Bits;
#line 132 "int.opt"
}
#line 347 "bit_buffer.read.m"
    mercury__bit_buffer__read__V_30_30 = (mercury__bit_buffer__read__V_31_31 - (MR_Integer) 1);
#line 347 "bit_buffer.read.m"
    mercury__bit_buffer__read__Shift_19 = (mercury__bit_buffer__read__V_30_30 - mercury__bit_buffer__read__LastBit_18);
#line 348 "bit_buffer.read.m"
    mercury__bit_buffer__read__V_34_34 = (mercury__bit_buffer__read__NumBits_9 - (MR_Integer) 1);
#line 348 "bit_buffer.read.m"
    mercury__bit_buffer__read__BitMask_20 = ((MR_Integer) 1 << mercury__bit_buffer__read__V_34_34);
#line 349 "bit_buffer.read.m"
    mercury__bit_buffer__read__V_36_36 = (mercury__bit_buffer__read__BitMask_20 - (MR_Integer) 1);
#line 349 "bit_buffer.read.m"
    mercury__bit_buffer__read__BitsMask_21 = (mercury__bit_buffer__read__BitMask_20 | mercury__bit_buffer__read__V_36_36);
#line 350 "bit_buffer.read.m"
    mercury__bit_buffer__read__V_40_40 = (mercury__bit_buffer__read__BitsMask_21 << mercury__bit_buffer__read__Shift_19);
#line 350 "bit_buffer.read.m"
    mercury__bit_buffer__read__V_39_39 = ~(mercury__bit_buffer__read__V_40_40);
#line 350 "bit_buffer.read.m"
    mercury__bit_buffer__read__STATE_VARIABLE_Word_38_38 = (mercury__bit_buffer__read__STATE_VARIABLE_Word_0_22 & mercury__bit_buffer__read__V_39_39);
#line 351 "bit_buffer.read.m"
    mercury__bit_buffer__read__V_42_42 = (mercury__bit_buffer__read__Bits_17 << mercury__bit_buffer__read__Shift_19);
#line 351 "bit_buffer.read.m"
    *mercury__bit_buffer__read__STATE_VARIABLE_Word_23 = (mercury__bit_buffer__read__STATE_VARIABLE_Word_38_38 | mercury__bit_buffer__read__V_42_42);
#line 73 "bit_buffer.opt"
{
#define MR_PROC_LABEL mercury__bit_buffer__read__do_get_bits_7_p_0

	ML_BitBufferPtr Buffer;
	MR_BitmapPtr BM;

	Buffer = (ML_BitBufferPtr) mercury__bit_buffer__read__STATE_VARIABLE_Buffer_0_24 ;
		{
#line 73 "bit_buffer.opt"

    BM = Buffer->ML_bit_buffer_bitmap;

#line 2862 "bit_buffer.read.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bit_buffer__read__V_43_43  = (MR_Box) BM;
#line 73 "bit_buffer.opt"
}
#line 353 "bit_buffer.read.m"
    mercury__bit_buffer__read__V_44_44 = (mercury__bit_buffer__read__Pos_15 + mercury__bit_buffer__read__NumBits_9);
#line 105 "bit_buffer.opt"
{
#define MR_PROC_LABEL mercury__bit_buffer__read__do_get_bits_7_p_0

	MR_BitmapPtr BM;
	MR_Integer Pos;
	ML_BitBufferPtr Buffer0;
	ML_BitBufferPtr Buffer;

	BM = (MR_BitmapPtr) mercury__bit_buffer__read__V_43_43 ;
	Pos =  mercury__bit_buffer__read__V_44_44 ;
	Buffer0 = (ML_BitBufferPtr) mercury__bit_buffer__read__STATE_VARIABLE_Buffer_0_24 ;
		{
#line 105 "bit_buffer.opt"

    Buffer = Buffer0;
    Buffer->ML_bit_buffer_bitmap = BM;
    Buffer->ML_bit_buffer_pos = Pos;

#line 2890 "bit_buffer.read.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bit_buffer__read__STATE_VARIABLE_Buffer_25  = (MR_Box) Buffer;
#line 105 "bit_buffer.opt"
}
#line 339 "bit_buffer.read.m"
    *mercury__bit_buffer__read__HeadVar__7_7 = (MR_Word) mercury__bit_buffer__read__STATE_VARIABLE_Buffer_25;
#line 339 "bit_buffer.read.m"
  }
#line 333 "bit_buffer.read.m"
}

#line 159 "bit_buffer.read.m"
void MR_CALL 
mercury__bit_buffer__read__finalize_6_p_0(
#line 159 "bit_buffer.read.m"
  MR_Word mercury__bit_buffer__read__TypeClassInfo_for_bulk_reader_9,
#line 159 "bit_buffer.read.m"
  MR_Word mercury__bit_buffer__read__ReadBuffer_1,
#line 159 "bit_buffer.read.m"
  MR_Box * mercury__bit_buffer__read__HeadVar__2_2,
#line 159 "bit_buffer.read.m"
  MR_Box * mercury__bit_buffer__read__HeadVar__3_3,
#line 159 "bit_buffer.read.m"
  MR_Box * mercury__bit_buffer__read__HeadVar__4_4,
#line 159 "bit_buffer.read.m"
  MR_Integer * mercury__bit_buffer__read__HeadVar__5_5,
#line 159 "bit_buffer.read.m"
  MR_Integer * mercury__bit_buffer__read__HeadVar__6_6)
#line 159 "bit_buffer.read.m"
{
#line 603 "bit_buffer.read.m"
  {
#line 603 "bit_buffer.read.m"
    MR_bool mercury__bit_buffer__read__succeeded;
#line 603 "bit_buffer.read.m"
    MR_Word mercury__bit_buffer__read__TypeInfo_25_25;
#line 603 "bit_buffer.read.m"
    MR_Word mercury__bit_buffer__read__TypeInfo_26_26;
#line 603 "bit_buffer.read.m"
    MR_Word mercury__bit_buffer__read__TypeInfo_27_27;
#line 603 "bit_buffer.read.m"
    MR_Box mercury__bit_buffer__read__Buffer_8 = (MR_Box) mercury__bit_buffer__read__ReadBuffer_1;
#line 85 "bit_buffer.opt"
    MR_Word mercury__bit_buffer__read__TypeInfo_11_28;
#line 85 "bit_buffer.opt"
    MR_Word mercury__bit_buffer__read__TypeInfo_13_29;
#line 85 "bit_buffer.opt"
    MR_Word mercury__bit_buffer__read__TypeInfo_15_30;
#line 88 "bit_buffer.opt"
    MR_Word mercury__bit_buffer__read__TypeInfo_16_31;
#line 88 "bit_buffer.opt"
    MR_Word mercury__bit_buffer__read__TypeInfo_17_32;
#line 88 "bit_buffer.opt"
    MR_Word mercury__bit_buffer__read__TypeInfo_18_33;
#line 73 "bit_buffer.opt"
    MR_Word mercury__bit_buffer__read__TypeInfo_19_34;
#line 73 "bit_buffer.opt"
    MR_Word mercury__bit_buffer__read__TypeInfo_20_35;
#line 73 "bit_buffer.opt"
    MR_Word mercury__bit_buffer__read__TypeInfo_21_36;
#line 76 "bit_buffer.opt"
    MR_Word mercury__bit_buffer__read__TypeInfo_22_37;
#line 76 "bit_buffer.opt"
    MR_Word mercury__bit_buffer__read__TypeInfo_23_38;
#line 76 "bit_buffer.opt"
    MR_Word mercury__bit_buffer__read__TypeInfo_24_39;

#line 85 "bit_buffer.opt"
{
#define MR_PROC_LABEL mercury__bit_buffer__read__finalize_6_p_0

	ML_BitBufferPtr Buffer;
	MR_Word Stream;

	Buffer = (ML_BitBufferPtr) mercury__bit_buffer__read__Buffer_8 ;
		{
#line 85 "bit_buffer.opt"

    Stream = Buffer->ML_bit_buffer_stream;

#line 2973 "bit_buffer.read.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__bit_buffer__read__HeadVar__2_2  = (MR_Box) Stream;
#line 85 "bit_buffer.opt"
}
#line 88 "bit_buffer.opt"
{
#define MR_PROC_LABEL mercury__bit_buffer__read__finalize_6_p_0

	ML_BitBufferPtr Buffer;
	MR_Word State;

	Buffer = (ML_BitBufferPtr) mercury__bit_buffer__read__Buffer_8 ;
		{
#line 88 "bit_buffer.opt"

    State = Buffer->ML_bit_buffer_state;

#line 2993 "bit_buffer.read.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__bit_buffer__read__HeadVar__3_3  = (MR_Box) State;
#line 88 "bit_buffer.opt"
}
#line 73 "bit_buffer.opt"
{
#define MR_PROC_LABEL mercury__bit_buffer__read__finalize_6_p_0

	ML_BitBufferPtr Buffer;
	MR_BitmapPtr BM;

	Buffer = (ML_BitBufferPtr) mercury__bit_buffer__read__Buffer_8 ;
		{
#line 73 "bit_buffer.opt"

    BM = Buffer->ML_bit_buffer_bitmap;

#line 3013 "bit_buffer.read.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__bit_buffer__read__HeadVar__4_4  = (MR_Box) BM;
#line 73 "bit_buffer.opt"
}
#line 76 "bit_buffer.opt"
{
#define MR_PROC_LABEL mercury__bit_buffer__read__finalize_6_p_0

	ML_BitBufferPtr Buffer;
	MR_Integer Pos;

	Buffer = (ML_BitBufferPtr) mercury__bit_buffer__read__Buffer_8 ;
		{
#line 76 "bit_buffer.opt"

    Pos = Buffer->ML_bit_buffer_pos;

#line 3033 "bit_buffer.read.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__bit_buffer__read__HeadVar__5_5  = Pos;
#line 76 "bit_buffer.opt"
}
#line 101 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__bit_buffer__read__finalize_6_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__bit_buffer__read__TypeClassInfo_for_bulk_reader_9 ;
	Index =  (MR_Integer) 3 ;
		{
#line 101 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 3055 "bit_buffer.read.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bit_buffer__read__TypeInfo_25_25  = TypeInfo;
#line 101 "private_builtin.opt"
}
#line 101 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__bit_buffer__read__finalize_6_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__bit_buffer__read__TypeClassInfo_for_bulk_reader_9 ;
	Index =  (MR_Integer) 6 ;
		{
#line 101 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 3077 "bit_buffer.read.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bit_buffer__read__TypeInfo_26_26  = TypeInfo;
#line 101 "private_builtin.opt"
}
#line 101 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__bit_buffer__read__finalize_6_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__bit_buffer__read__TypeClassInfo_for_bulk_reader_9 ;
	Index =  (MR_Integer) 7 ;
		{
#line 101 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 3099 "bit_buffer.read.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bit_buffer__read__TypeInfo_27_27  = TypeInfo;
#line 101 "private_builtin.opt"
}
#line 603 "bit_buffer.read.m"
    {
#line 603 "bit_buffer.read.m"
      *mercury__bit_buffer__read__HeadVar__6_6 = mercury__bit_buffer__read__num_buffered_bits_1_f_0(mercury__bit_buffer__read__TypeInfo_25_25, mercury__bit_buffer__read__TypeInfo_26_26, mercury__bit_buffer__read__TypeInfo_27_27, mercury__bit_buffer__read__ReadBuffer_1);
    }
#line 603 "bit_buffer.read.m"
  }
#line 159 "bit_buffer.read.m"
}

#line 148 "bit_buffer.read.m"
void MR_CALL 
mercury__bit_buffer__read__get_bitmap_8_p_0(
#line 148 "bit_buffer.read.m"
  MR_Word mercury__bit_buffer__read__TypeClassInfo_for_bulk_reader_38,
#line 148 "bit_buffer.read.m"
  MR_Integer mercury__bit_buffer__read__Index_9,
#line 148 "bit_buffer.read.m"
  MR_Integer mercury__bit_buffer__read__NumBits_10,
#line 148 "bit_buffer.read.m"
  MR_Box mercury__bit_buffer__read__STATE_VARIABLE_BM_0_20,
#line 148 "bit_buffer.read.m"
  MR_Box * mercury__bit_buffer__read__STATE_VARIABLE_BM_21,
#line 148 "bit_buffer.read.m"
  MR_Integer * mercury__bit_buffer__read__NumBitsRead_12,
#line 148 "bit_buffer.read.m"
  MR_Word * mercury__bit_buffer__read__Result_13,
#line 148 "bit_buffer.read.m"
  MR_Word mercury__bit_buffer__read__HeadVar__7_7,
#line 148 "bit_buffer.read.m"
  MR_Word * mercury__bit_buffer__read__HeadVar__8_8)
#line 148 "bit_buffer.read.m"
{
#line 359 "bit_buffer.read.m"
  {
#line 359 "bit_buffer.read.m"
    MR_bool mercury__bit_buffer__read__succeeded;
#line 359 "bit_buffer.read.m"
    MR_Word mercury__bit_buffer__read__Status_15;
#line 359 "bit_buffer.read.m"
    MR_Box mercury__bit_buffer__read__STATE_VARIABLE_Buffer_0_22 = (MR_Box) mercury__bit_buffer__read__HeadVar__7_7;
#line 359 "bit_buffer.read.m"
    MR_Box mercury__bit_buffer__read__STATE_VARIABLE_Buffer_23;
#line 94 "bit_buffer.opt"
    MR_Word mercury__bit_buffer__read__TypeInfo_40_88;
#line 94 "bit_buffer.opt"
    MR_Word mercury__bit_buffer__read__TypeInfo_42_89;
#line 94 "bit_buffer.opt"
    MR_Word mercury__bit_buffer__read__TypeInfo_44_90;

#line 94 "bit_buffer.opt"
{
#define MR_PROC_LABEL mercury__bit_buffer__read__get_bitmap_8_p_0

	ML_BitBufferPtr Buffer;
	MR_Word ReadStatus;

	Buffer = (ML_BitBufferPtr) mercury__bit_buffer__read__STATE_VARIABLE_Buffer_0_22 ;
		{
#line 94 "bit_buffer.opt"

    ReadStatus = Buffer->ML_bit_buffer_read_status;

#line 3169 "bit_buffer.read.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bit_buffer__read__Status_15  = ReadStatus;
#line 94 "bit_buffer.opt"
}
#line 395 "bit_buffer.read.m"
    if ((mercury__bit_buffer__read__Status_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 383 "bit_buffer.read.m"
      {
#line 364 "bit_buffer.read.m"
        MR_Integer mercury__bit_buffer__read__V_25_25;
#line 364 "bit_buffer.read.m"
        MR_Integer mercury__bit_buffer__read__V_26_26;
#line 364 "bit_buffer.read.m"
        MR_Integer mercury__bit_buffer__read__V_27_27;
#line 364 "bit_buffer.read.m"
        MR_Integer mercury__bit_buffer__read__V_5_65;
#line 364 "bit_buffer.read.m"
        MR_Integer mercury__bit_buffer__read__V_6_66;
#line 364 "bit_buffer.read.m"
        MR_Integer mercury__bit_buffer__read__V_5_69;
#line 364 "bit_buffer.read.m"
        MR_Integer mercury__bit_buffer__read__V_6_70;

#line 364 "bit_buffer.read.m"
        mercury__bit_buffer__read__succeeded = (mercury__bit_buffer__read__NumBits_10 > (MR_Integer) 0);
#line 364 "bit_buffer.read.m"
        if (mercury__bit_buffer__read__succeeded)
#line 364 "bit_buffer.read.m"
          {
#line 76 "bitmap.opt"
            mercury__bit_buffer__read__V_5_65 = (MR_Integer) 0;
#line 77 "bitmap.opt"
            mercury__bit_buffer__read__succeeded = (mercury__bit_buffer__read__V_5_65 <= mercury__bit_buffer__read__Index_9);
#line 364 "bit_buffer.read.m"
            if (mercury__bit_buffer__read__succeeded)
#line 364 "bit_buffer.read.m"
              {
#line 80 "bitmap.opt"
{
#define MR_PROC_LABEL mercury__bit_buffer__read__get_bitmap_8_p_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr) mercury__bit_buffer__read__STATE_VARIABLE_BM_0_20 ;
		{
#line 80 "bitmap.opt"

    NumBits = BM->num_bits;

#line 3222 "bit_buffer.read.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bit_buffer__read__V_6_66  = NumBits;
#line 80 "bitmap.opt"
}
#line 79 "bitmap.opt"
                mercury__bit_buffer__read__succeeded = (mercury__bit_buffer__read__Index_9 < mercury__bit_buffer__read__V_6_66);
#line 364 "bit_buffer.read.m"
                if (mercury__bit_buffer__read__succeeded)
#line 364 "bit_buffer.read.m"
                  {
#line 366 "bit_buffer.read.m"
                    mercury__bit_buffer__read__V_26_26 = (mercury__bit_buffer__read__Index_9 + mercury__bit_buffer__read__NumBits_10);
#line 366 "bit_buffer.read.m"
                    mercury__bit_buffer__read__V_27_27 = (MR_Integer) 1;
#line 366 "bit_buffer.read.m"
                    mercury__bit_buffer__read__V_25_25 = (mercury__bit_buffer__read__V_26_26 - mercury__bit_buffer__read__V_27_27);
#line 76 "bitmap.opt"
                    mercury__bit_buffer__read__V_5_69 = (MR_Integer) 0;
#line 77 "bitmap.opt"
                    mercury__bit_buffer__read__succeeded = (mercury__bit_buffer__read__V_5_69 <= mercury__bit_buffer__read__V_25_25);
#line 364 "bit_buffer.read.m"
                    if (mercury__bit_buffer__read__succeeded)
#line 364 "bit_buffer.read.m"
                      {
#line 80 "bitmap.opt"
{
#define MR_PROC_LABEL mercury__bit_buffer__read__get_bitmap_8_p_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr) mercury__bit_buffer__read__STATE_VARIABLE_BM_0_20 ;
		{
#line 80 "bitmap.opt"

    NumBits = BM->num_bits;

#line 3262 "bit_buffer.read.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bit_buffer__read__V_6_70  = NumBits;
#line 80 "bitmap.opt"
}
#line 79 "bitmap.opt"
                        mercury__bit_buffer__read__succeeded = (mercury__bit_buffer__read__V_25_25 < mercury__bit_buffer__read__V_6_70);
#line 364 "bit_buffer.read.m"
                      }
#line 364 "bit_buffer.read.m"
                  }
#line 364 "bit_buffer.read.m"
              }
#line 364 "bit_buffer.read.m"
          }
#line 383 "bit_buffer.read.m"
        if (mercury__bit_buffer__read__succeeded)
#line 368 "bit_buffer.read.m"
          {
#line 368 "bit_buffer.read.m"
            MR_Word mercury__bit_buffer__read__UseStream_16;
#line 82 "bit_buffer.opt"
            MR_Word mercury__bit_buffer__read__TypeInfo_45_91;
#line 82 "bit_buffer.opt"
            MR_Word mercury__bit_buffer__read__TypeInfo_46_92;
#line 82 "bit_buffer.opt"
            MR_Word mercury__bit_buffer__read__TypeInfo_47_93;

#line 82 "bit_buffer.opt"
{
#define MR_PROC_LABEL mercury__bit_buffer__read__get_bitmap_8_p_0

	ML_BitBufferPtr Buffer;
	MR_Word UseStream;

	Buffer = (ML_BitBufferPtr) mercury__bit_buffer__read__STATE_VARIABLE_Buffer_0_22 ;
		{
#line 82 "bit_buffer.opt"

    UseStream = Buffer->ML_bit_buffer_use_stream;

#line 3305 "bit_buffer.read.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bit_buffer__read__UseStream_16  = UseStream;
#line 82 "bit_buffer.opt"
}
#line 373 "bit_buffer.read.m"
#line 373 "bit_buffer.read.m"
            switch (mercury__bit_buffer__read__UseStream_16) {
#line 373 "bit_buffer.read.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 373 "bit_buffer.read.m"
              case (MR_Integer) 0:
#line 374 "bit_buffer.read.m"
                {
#line 374 "bit_buffer.read.m"
                  MR_Integer mercury__bit_buffer__read__Pos_17;
#line 374 "bit_buffer.read.m"
                  MR_Integer mercury__bit_buffer__read__Size_18;
#line 374 "bit_buffer.read.m"
                  MR_Integer mercury__bit_buffer__read__V_28_28;
#line 374 "bit_buffer.read.m"
                  MR_Box mercury__bit_buffer__read__V_30_30;
#line 374 "bit_buffer.read.m"
                  MR_Box mercury__bit_buffer__read__V_31_31;
#line 374 "bit_buffer.read.m"
                  MR_Integer mercury__bit_buffer__read__V_32_32;
#line 76 "bit_buffer.opt"
                  MR_Word mercury__bit_buffer__read__TypeInfo_48_94;
#line 76 "bit_buffer.opt"
                  MR_Word mercury__bit_buffer__read__TypeInfo_49_95;
#line 76 "bit_buffer.opt"
                  MR_Word mercury__bit_buffer__read__TypeInfo_50_96;
#line 79 "bit_buffer.opt"
                  MR_Word mercury__bit_buffer__read__TypeInfo_51_97;
#line 79 "bit_buffer.opt"
                  MR_Word mercury__bit_buffer__read__TypeInfo_52_98;
#line 79 "bit_buffer.opt"
                  MR_Word mercury__bit_buffer__read__TypeInfo_53_99;
#line 73 "bit_buffer.opt"
                  MR_Word mercury__bit_buffer__read__TypeInfo_54_100;
#line 73 "bit_buffer.opt"
                  MR_Word mercury__bit_buffer__read__TypeInfo_55_101;
#line 73 "bit_buffer.opt"
                  MR_Word mercury__bit_buffer__read__TypeInfo_56_102;
#line 73 "bit_buffer.opt"
                  MR_Word mercury__bit_buffer__read__TypeInfo_57_103;
#line 73 "bit_buffer.opt"
                  MR_Word mercury__bit_buffer__read__TypeInfo_58_104;
#line 73 "bit_buffer.opt"
                  MR_Word mercury__bit_buffer__read__TypeInfo_59_105;
#line 105 "bit_buffer.opt"
                  MR_Word mercury__bit_buffer__read__TypeInfo_60_106;
#line 105 "bit_buffer.opt"
                  MR_Word mercury__bit_buffer__read__TypeInfo_61_107;
#line 105 "bit_buffer.opt"
                  MR_Word mercury__bit_buffer__read__TypeInfo_62_108;

#line 76 "bit_buffer.opt"
{
#define MR_PROC_LABEL mercury__bit_buffer__read__get_bitmap_8_p_0

	ML_BitBufferPtr Buffer;
	MR_Integer Pos;

	Buffer = (ML_BitBufferPtr) mercury__bit_buffer__read__STATE_VARIABLE_Buffer_0_22 ;
		{
#line 76 "bit_buffer.opt"

    Pos = Buffer->ML_bit_buffer_pos;

#line 3377 "bit_buffer.read.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bit_buffer__read__Pos_17  = Pos;
#line 76 "bit_buffer.opt"
}
#line 79 "bit_buffer.opt"
{
#define MR_PROC_LABEL mercury__bit_buffer__read__get_bitmap_8_p_0

	ML_BitBufferPtr Buffer;
	MR_Integer Size;

	Buffer = (ML_BitBufferPtr) mercury__bit_buffer__read__STATE_VARIABLE_Buffer_0_22 ;
		{
#line 79 "bit_buffer.opt"

    Size = Buffer->ML_bit_buffer_size;

#line 3397 "bit_buffer.read.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bit_buffer__read__Size_18  = Size;
#line 79 "bit_buffer.opt"
}
#line 377 "bit_buffer.read.m"
                  mercury__bit_buffer__read__V_28_28 = (mercury__bit_buffer__read__Size_18 - mercury__bit_buffer__read__Pos_17);
#line 46 "int.opt"
                  mercury__bit_buffer__read__succeeded = (mercury__bit_buffer__read__V_28_28 < mercury__bit_buffer__read__NumBits_10);
#line 49 "int.opt"
                  if (mercury__bit_buffer__read__succeeded)
#line 48 "int.opt"
                    *mercury__bit_buffer__read__NumBitsRead_12 = mercury__bit_buffer__read__V_28_28;
#line 49 "int.opt"
                  else
#line 50 "int.opt"
                    *mercury__bit_buffer__read__NumBitsRead_12 = mercury__bit_buffer__read__NumBits_10;
#line 73 "bit_buffer.opt"
{
#define MR_PROC_LABEL mercury__bit_buffer__read__get_bitmap_8_p_0

	ML_BitBufferPtr Buffer;
	MR_BitmapPtr BM;

	Buffer = (ML_BitBufferPtr) mercury__bit_buffer__read__STATE_VARIABLE_Buffer_0_22 ;
		{
#line 73 "bit_buffer.opt"

    BM = Buffer->ML_bit_buffer_bitmap;

#line 3429 "bit_buffer.read.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bit_buffer__read__V_30_30  = (MR_Box) BM;
#line 73 "bit_buffer.opt"
}
#line 152 "bitmap.opt"
                  {
#line 152 "bitmap.opt"
                    *mercury__bit_buffer__read__STATE_VARIABLE_BM_21 = mercury__bitmap__copy_bits_6_f_0((MR_Integer) 0, mercury__bit_buffer__read__V_30_30, mercury__bit_buffer__read__Pos_17, mercury__bit_buffer__read__STATE_VARIABLE_BM_0_20, mercury__bit_buffer__read__Index_9, *mercury__bit_buffer__read__NumBitsRead_12);
                  }
#line 73 "bit_buffer.opt"
{
#define MR_PROC_LABEL mercury__bit_buffer__read__get_bitmap_8_p_0

	ML_BitBufferPtr Buffer;
	MR_BitmapPtr BM;

	Buffer = (ML_BitBufferPtr) mercury__bit_buffer__read__STATE_VARIABLE_Buffer_0_22 ;
		{
#line 73 "bit_buffer.opt"

    BM = Buffer->ML_bit_buffer_bitmap;

#line 3454 "bit_buffer.read.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bit_buffer__read__V_31_31  = (MR_Box) BM;
#line 73 "bit_buffer.opt"
}
#line 380 "bit_buffer.read.m"
                  mercury__bit_buffer__read__V_32_32 = (mercury__bit_buffer__read__Pos_17 + mercury__bit_buffer__read__NumBits_10);
#line 105 "bit_buffer.opt"
{
#define MR_PROC_LABEL mercury__bit_buffer__read__get_bitmap_8_p_0

	MR_BitmapPtr BM;
	MR_Integer Pos;
	ML_BitBufferPtr Buffer0;
	ML_BitBufferPtr Buffer;

	BM = (MR_BitmapPtr) mercury__bit_buffer__read__V_31_31 ;
	Pos =  mercury__bit_buffer__read__V_32_32 ;
	Buffer0 = (ML_BitBufferPtr) mercury__bit_buffer__read__STATE_VARIABLE_Buffer_0_22 ;
		{
#line 105 "bit_buffer.opt"

    Buffer = Buffer0;
    Buffer->ML_bit_buffer_bitmap = BM;
    Buffer->ML_bit_buffer_pos = Pos;

#line 3482 "bit_buffer.read.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bit_buffer__read__STATE_VARIABLE_Buffer_23  = (MR_Box) Buffer;
#line 105 "bit_buffer.opt"
}
#line 381 "bit_buffer.read.m"
                  *mercury__bit_buffer__read__Result_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 374 "bit_buffer.read.m"
                }
#line 373 "bit_buffer.read.m"
                break;
#line 373 "bit_buffer.read.m"
              case (MR_Integer) 1:
#line 370 "bit_buffer.read.m"
                {
#line 371 "bit_buffer.read.m"
                  {
#line 371 "bit_buffer.read.m"
                    mercury__bit_buffer__read__recursively_get_bitmap_9_p_0(mercury__bit_buffer__read__TypeClassInfo_for_bulk_reader_38, mercury__bit_buffer__read__Index_9, mercury__bit_buffer__read__NumBits_10, mercury__bit_buffer__read__STATE_VARIABLE_BM_0_20, mercury__bit_buffer__read__STATE_VARIABLE_BM_21, (MR_Integer) 0, mercury__bit_buffer__read__NumBitsRead_12, mercury__bit_buffer__read__Result_13, mercury__bit_buffer__read__STATE_VARIABLE_Buffer_0_22, &mercury__bit_buffer__read__STATE_VARIABLE_Buffer_23);
                  }
#line 370 "bit_buffer.read.m"
                }
#line 373 "bit_buffer.read.m"
                break;
#line 373 "bit_buffer.read.m"
            }
#line 368 "bit_buffer.read.m"
          }
#line 383 "bit_buffer.read.m"
        else
#line 391 "bit_buffer.read.m"
          {
#line 384 "bit_buffer.read.m"
            mercury__bit_buffer__read__succeeded = (mercury__bit_buffer__read__NumBits_10 == (MR_Integer) 0);
#line 384 "bit_buffer.read.m"
            if (mercury__bit_buffer__read__succeeded)
#line 384 "bit_buffer.read.m"
              {
#line 75 "bitmap.opt"
                {
#line 75 "bitmap.opt"
                  MR_Integer mercury__bit_buffer__read__V_6_87;

#line 77 "bitmap.opt"
                  mercury__bit_buffer__read__succeeded = ((MR_Integer) 0 <= mercury__bit_buffer__read__Index_9);
#line 75 "bitmap.opt"
                  if (mercury__bit_buffer__read__succeeded)
#line 75 "bitmap.opt"
                    {
#line 80 "bitmap.opt"
{
#define MR_PROC_LABEL mercury__bit_buffer__read__get_bitmap_8_p_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr) mercury__bit_buffer__read__STATE_VARIABLE_BM_0_20 ;
		{
#line 80 "bitmap.opt"

    NumBits = BM->num_bits;

#line 3546 "bit_buffer.read.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bit_buffer__read__V_6_87  = NumBits;
#line 80 "bitmap.opt"
}
#line 79 "bitmap.opt"
                      mercury__bit_buffer__read__succeeded = (mercury__bit_buffer__read__Index_9 < mercury__bit_buffer__read__V_6_87);
#line 75 "bitmap.opt"
                    }
#line 75 "bitmap.opt"
                }
#line 386 "bit_buffer.read.m"
                if (!(mercury__bit_buffer__read__succeeded))
#line 386 "bit_buffer.read.m"
                  mercury__bit_buffer__read__succeeded = (mercury__bit_buffer__read__Index_9 == (MR_Integer) 0);
#line 384 "bit_buffer.read.m"
              }
#line 391 "bit_buffer.read.m"
            if (mercury__bit_buffer__read__succeeded)
#line 389 "bit_buffer.read.m"
              {
#line 389 "bit_buffer.read.m"
                *mercury__bit_buffer__read__NumBitsRead_12 = (MR_Integer) 0;
#line 390 "bit_buffer.read.m"
                *mercury__bit_buffer__read__Result_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 389 "bit_buffer.read.m"
              }
#line 391 "bit_buffer.read.m"
            else
#line 392 "bit_buffer.read.m"
              {
#line 392 "bit_buffer.read.m"
                {
#line 392 "bit_buffer.read.m"
                  mercury__bitmap__throw_bounds_error_4_p_0(mercury__bit_buffer__read__STATE_VARIABLE_BM_0_20, (MR_String) "bit_buffer.read.get_bitmap", mercury__bit_buffer__read__Index_9, mercury__bit_buffer__read__NumBits_10);
#line 392 "bit_buffer.read.m"
                  return;
                }
#line 392 "bit_buffer.read.m"
              }
#line 391 "bit_buffer.read.m"
            mercury__bit_buffer__read__STATE_VARIABLE_Buffer_23 = mercury__bit_buffer__read__STATE_VARIABLE_Buffer_0_22;
#line 391 "bit_buffer.read.m"
            *mercury__bit_buffer__read__STATE_VARIABLE_BM_21 = mercury__bit_buffer__read__STATE_VARIABLE_BM_0_20;
#line 391 "bit_buffer.read.m"
          }
#line 383 "bit_buffer.read.m"
      }
#line 395 "bit_buffer.read.m"
    else
#line 396 "bit_buffer.read.m"
      {
#line 397 "bit_buffer.read.m"
        *mercury__bit_buffer__read__NumBitsRead_12 = (MR_Integer) 0;
#line 398 "bit_buffer.read.m"
        *mercury__bit_buffer__read__Result_13 = mercury__bit_buffer__read__Status_15;
#line 396 "bit_buffer.read.m"
        *mercury__bit_buffer__read__STATE_VARIABLE_BM_21 = mercury__bit_buffer__read__STATE_VARIABLE_BM_0_20;
#line 396 "bit_buffer.read.m"
        mercury__bit_buffer__read__STATE_VARIABLE_Buffer_23 = mercury__bit_buffer__read__STATE_VARIABLE_Buffer_0_22;
#line 396 "bit_buffer.read.m"
      }
#line 359 "bit_buffer.read.m"
    *mercury__bit_buffer__read__HeadVar__8_8 = (MR_Word) mercury__bit_buffer__read__STATE_VARIABLE_Buffer_23;
#line 359 "bit_buffer.read.m"
  }
#line 148 "bit_buffer.read.m"
}

#line 133 "bit_buffer.read.m"
void MR_CALL 
mercury__bit_buffer__read__get_bitmap_6_p_0(
#line 133 "bit_buffer.read.m"
  MR_Word mercury__bit_buffer__read__TypeClassInfo_for_bulk_reader_19,
#line 133 "bit_buffer.read.m"
  MR_Box mercury__bit_buffer__read__STATE_VARIABLE_BM_0_11,
#line 133 "bit_buffer.read.m"
  MR_Box * mercury__bit_buffer__read__STATE_VARIABLE_BM_12,
#line 133 "bit_buffer.read.m"
  MR_Integer * mercury__bit_buffer__read__NumBitsRead_8,
#line 133 "bit_buffer.read.m"
  MR_Word * mercury__bit_buffer__read__Result_9,
#line 133 "bit_buffer.read.m"
  MR_Word mercury__bit_buffer__read__STATE_VARIABLE_Buffer_0_13,
#line 133 "bit_buffer.read.m"
  MR_Word * mercury__bit_buffer__read__STATE_VARIABLE_Buffer_14)
#line 133 "bit_buffer.read.m"
{
#line 355 "bit_buffer.read.m"
  {
#line 355 "bit_buffer.read.m"
    MR_bool mercury__bit_buffer__read__succeeded;
#line 355 "bit_buffer.read.m"
    MR_Integer mercury__bit_buffer__read__V_16_16;

#line 80 "bitmap.opt"
{
#define MR_PROC_LABEL mercury__bit_buffer__read__get_bitmap_6_p_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr) mercury__bit_buffer__read__STATE_VARIABLE_BM_0_11 ;
		{
#line 80 "bitmap.opt"

    NumBits = BM->num_bits;

#line 3656 "bit_buffer.read.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bit_buffer__read__V_16_16  = NumBits;
#line 80 "bitmap.opt"
}
#line 356 "bit_buffer.read.m"
    {
#line 356 "bit_buffer.read.m"
      mercury__bit_buffer__read__get_bitmap_8_p_0(mercury__bit_buffer__read__TypeClassInfo_for_bulk_reader_19, (MR_Integer) 0, mercury__bit_buffer__read__V_16_16, mercury__bit_buffer__read__STATE_VARIABLE_BM_0_11, mercury__bit_buffer__read__STATE_VARIABLE_BM_12, mercury__bit_buffer__read__NumBitsRead_8, mercury__bit_buffer__read__Result_9, mercury__bit_buffer__read__STATE_VARIABLE_Buffer_0_13, mercury__bit_buffer__read__STATE_VARIABLE_Buffer_14);
#line 356 "bit_buffer.read.m"
      return;
    }
#line 355 "bit_buffer.read.m"
  }
#line 133 "bit_buffer.read.m"
}

#line 117 "bit_buffer.read.m"
void MR_CALL 
mercury__bit_buffer__read__get_bits_8_p_0(
#line 117 "bit_buffer.read.m"
  MR_Word mercury__bit_buffer__read__TypeClassInfo_for_bulk_reader_34,
#line 117 "bit_buffer.read.m"
  MR_Integer mercury__bit_buffer__read__Index_9,
#line 117 "bit_buffer.read.m"
  MR_Integer mercury__bit_buffer__read__NumBits_10,
#line 117 "bit_buffer.read.m"
  MR_Integer mercury__bit_buffer__read__STATE_VARIABLE_Word_0_18,
#line 117 "bit_buffer.read.m"
  MR_Integer * mercury__bit_buffer__read__HeadVar__4_4,
#line 117 "bit_buffer.read.m"
  MR_Integer * mercury__bit_buffer__read__NumBitsRead_12,
#line 117 "bit_buffer.read.m"
  MR_Word * mercury__bit_buffer__read__BitsResult_13,
#line 117 "bit_buffer.read.m"
  MR_Word mercury__bit_buffer__read__STATE_VARIABLE_Buffer_0_20,
#line 117 "bit_buffer.read.m"
  MR_Word * mercury__bit_buffer__read__STATE_VARIABLE_Buffer_21)
#line 117 "bit_buffer.read.m"
{
#line 296 "bit_buffer.read.m"
  {
#line 296 "bit_buffer.read.m"
    MR_bool mercury__bit_buffer__read__succeeded;
#line 296 "bit_buffer.read.m"
    MR_Word mercury__bit_buffer__read__Status_15;
#line 296 "bit_buffer.read.m"
    MR_Integer mercury__bit_buffer__read__STATE_VARIABLE_Word_19;
#line 296 "bit_buffer.read.m"
    MR_Box mercury__bit_buffer__read__V_22_22 = (MR_Box) mercury__bit_buffer__read__STATE_VARIABLE_Buffer_0_20;
#line 94 "bit_buffer.opt"
    MR_Word mercury__bit_buffer__read__TypeInfo_36_50;
#line 94 "bit_buffer.opt"
    MR_Word mercury__bit_buffer__read__TypeInfo_38_51;
#line 94 "bit_buffer.opt"
    MR_Word mercury__bit_buffer__read__TypeInfo_40_52;

#line 94 "bit_buffer.opt"
{
#define MR_PROC_LABEL mercury__bit_buffer__read__get_bits_8_p_0

	ML_BitBufferPtr Buffer;
	MR_Word ReadStatus;

	Buffer = (ML_BitBufferPtr) mercury__bit_buffer__read__V_22_22 ;
		{
#line 94 "bit_buffer.opt"

    ReadStatus = Buffer->ML_bit_buffer_read_status;

#line 3728 "bit_buffer.read.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bit_buffer__read__Status_15  = ReadStatus;
#line 94 "bit_buffer.opt"
}
#line 327 "bit_buffer.read.m"
    if ((mercury__bit_buffer__read__Status_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 321 "bit_buffer.read.m"
      {
#line 300 "bit_buffer.read.m"
        mercury__bit_buffer__read__succeeded = (mercury__bit_buffer__read__NumBits_10 > (MR_Integer) 0);
#line 321 "bit_buffer.read.m"
        if (mercury__bit_buffer__read__succeeded)
#line 305 "bit_buffer.read.m"
          {
#line 301 "bit_buffer.read.m"
            MR_Integer mercury__bit_buffer__read__V_24_24;
#line 306 "bit_buffer.read.m"
            MR_Word mercury__bit_buffer__read__TypeInfo_41_41;
#line 306 "bit_buffer.read.m"
            MR_Word mercury__bit_buffer__read__TypeInfo_42_42;
#line 306 "bit_buffer.read.m"
            MR_Word mercury__bit_buffer__read__TypeInfo_43_43;
#line 306 "bit_buffer.read.m"
            MR_Integer mercury__bit_buffer__read__V_26_26;

#line 132 "int.opt"
{
#define MR_PROC_LABEL mercury__bit_buffer__read__get_bits_8_p_0

	MR_Integer Bits;

		{
#line 132 "int.opt"

    Bits = ML_BITS_PER_INT;

#line 3767 "bit_buffer.read.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bit_buffer__read__V_24_24  = Bits;
#line 132 "int.opt"
}
#line 301 "bit_buffer.read.m"
            mercury__bit_buffer__read__succeeded = (mercury__bit_buffer__read__NumBits_10 > mercury__bit_buffer__read__V_24_24);
#line 303 "bit_buffer.read.m"
            if (mercury__bit_buffer__read__succeeded)
#line 302 "bit_buffer.read.m"
              {
#line 302 "bit_buffer.read.m"
                {
#line 302 "bit_buffer.read.m"
                  mercury__require__error_1_p_0((MR_String) "bit_buffer.read.get_bits: invalid number of bits");
#line 302 "bit_buffer.read.m"
                  return;
                }
#line 302 "bit_buffer.read.m"
              }
#line 303 "bit_buffer.read.m"
            else
#line 304 "bit_buffer.read.m"
              {
#line 304 "bit_buffer.read.m"
              }
#line 101 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__bit_buffer__read__get_bits_8_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__bit_buffer__read__TypeClassInfo_for_bulk_reader_34 ;
	Index =  (MR_Integer) 3 ;
		{
#line 101 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 3810 "bit_buffer.read.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bit_buffer__read__TypeInfo_41_41  = TypeInfo;
#line 101 "private_builtin.opt"
}
#line 101 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__bit_buffer__read__get_bits_8_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__bit_buffer__read__TypeClassInfo_for_bulk_reader_34 ;
	Index =  (MR_Integer) 6 ;
		{
#line 101 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 3832 "bit_buffer.read.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bit_buffer__read__TypeInfo_42_42  = TypeInfo;
#line 101 "private_builtin.opt"
}
#line 101 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__bit_buffer__read__get_bits_8_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__bit_buffer__read__TypeClassInfo_for_bulk_reader_34 ;
	Index =  (MR_Integer) 7 ;
		{
#line 101 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 3854 "bit_buffer.read.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bit_buffer__read__TypeInfo_43_43  = TypeInfo;
#line 101 "private_builtin.opt"
}
#line 306 "bit_buffer.read.m"
            {
#line 306 "bit_buffer.read.m"
              mercury__bit_buffer__read__V_26_26 = mercury__bit_buffer__read__num_buffered_bits_1_f_0(mercury__bit_buffer__read__TypeInfo_41_41, mercury__bit_buffer__read__TypeInfo_42_42, mercury__bit_buffer__read__TypeInfo_43_43, mercury__bit_buffer__read__STATE_VARIABLE_Buffer_0_20);
            }
#line 306 "bit_buffer.read.m"
            mercury__bit_buffer__read__succeeded = (mercury__bit_buffer__read__V_26_26 >= mercury__bit_buffer__read__NumBits_10);
#line 309 "bit_buffer.read.m"
            if (mercury__bit_buffer__read__succeeded)
#line 307 "bit_buffer.read.m"
              {
#line 307 "bit_buffer.read.m"
                *mercury__bit_buffer__read__BitsResult_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 308 "bit_buffer.read.m"
                {
#line 308 "bit_buffer.read.m"
                  mercury__bit_buffer__read__do_get_bits_7_p_0(mercury__bit_buffer__read__TypeClassInfo_for_bulk_reader_34, mercury__bit_buffer__read__Index_9, mercury__bit_buffer__read__NumBits_10, mercury__bit_buffer__read__STATE_VARIABLE_Word_0_18, &mercury__bit_buffer__read__STATE_VARIABLE_Word_19, mercury__bit_buffer__read__NumBitsRead_12, mercury__bit_buffer__read__STATE_VARIABLE_Buffer_0_20, mercury__bit_buffer__read__STATE_VARIABLE_Buffer_21);
                }
#line 307 "bit_buffer.read.m"
              }
#line 309 "bit_buffer.read.m"
            else
#line 310 "bit_buffer.read.m"
              {
#line 310 "bit_buffer.read.m"
                MR_Word mercury__bit_buffer__read__RefillResult_16;
#line 310 "bit_buffer.read.m"
                MR_Word mercury__bit_buffer__read__STATE_VARIABLE_Buffer_29_29;
#line 310 "bit_buffer.read.m"
                MR_Box mercury__bit_buffer__read__STATE_VARIABLE_Buffer_0_47 = (MR_Box) mercury__bit_buffer__read__STATE_VARIABLE_Buffer_0_20;
#line 310 "bit_buffer.read.m"
                MR_Box mercury__bit_buffer__read__STATE_VARIABLE_Buffer_48;

#line 527 "bit_buffer.read.m"
                {
#line 527 "bit_buffer.read.m"
                  mercury__bit_buffer__read__do_refill_read_buffer_3_p_0(mercury__bit_buffer__read__TypeClassInfo_for_bulk_reader_34, &mercury__bit_buffer__read__RefillResult_16, mercury__bit_buffer__read__STATE_VARIABLE_Buffer_0_47, &mercury__bit_buffer__read__STATE_VARIABLE_Buffer_48);
                }
#line 526 "bit_buffer.read.m"
                mercury__bit_buffer__read__STATE_VARIABLE_Buffer_29_29 = (MR_Word) mercury__bit_buffer__read__STATE_VARIABLE_Buffer_48;
#line 315 "bit_buffer.read.m"
                if ((mercury__bit_buffer__read__RefillResult_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 312 "bit_buffer.read.m"
                  {
#line 313 "bit_buffer.read.m"
                    *mercury__bit_buffer__read__BitsResult_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 314 "bit_buffer.read.m"
                    {
#line 314 "bit_buffer.read.m"
                      mercury__bit_buffer__read__do_get_bits_7_p_0(mercury__bit_buffer__read__TypeClassInfo_for_bulk_reader_34, mercury__bit_buffer__read__Index_9, mercury__bit_buffer__read__NumBits_10, mercury__bit_buffer__read__STATE_VARIABLE_Word_0_18, &mercury__bit_buffer__read__STATE_VARIABLE_Word_19, mercury__bit_buffer__read__NumBitsRead_12, mercury__bit_buffer__read__STATE_VARIABLE_Buffer_29_29, mercury__bit_buffer__read__STATE_VARIABLE_Buffer_21);
                    }
#line 312 "bit_buffer.read.m"
                  }
#line 315 "bit_buffer.read.m"
                else
#line 316 "bit_buffer.read.m"
                  {
#line 317 "bit_buffer.read.m"
                    *mercury__bit_buffer__read__NumBitsRead_12 = (MR_Integer) 0;
#line 318 "bit_buffer.read.m"
                    *mercury__bit_buffer__read__BitsResult_13 = mercury__bit_buffer__read__RefillResult_16;
#line 316 "bit_buffer.read.m"
                    mercury__bit_buffer__read__STATE_VARIABLE_Word_19 = mercury__bit_buffer__read__STATE_VARIABLE_Word_0_18;
#line 316 "bit_buffer.read.m"
                    *mercury__bit_buffer__read__STATE_VARIABLE_Buffer_21 = mercury__bit_buffer__read__STATE_VARIABLE_Buffer_29_29;
#line 316 "bit_buffer.read.m"
                  }
#line 310 "bit_buffer.read.m"
              }
#line 305 "bit_buffer.read.m"
          }
#line 321 "bit_buffer.read.m"
        else
#line 324 "bit_buffer.read.m"
          {
#line 321 "bit_buffer.read.m"
            mercury__bit_buffer__read__succeeded = (mercury__bit_buffer__read__NumBits_10 == (MR_Integer) 0);
#line 324 "bit_buffer.read.m"
            if (mercury__bit_buffer__read__succeeded)
#line 322 "bit_buffer.read.m"
              {
#line 322 "bit_buffer.read.m"
                *mercury__bit_buffer__read__NumBitsRead_12 = (MR_Integer) 0;
#line 323 "bit_buffer.read.m"
                *mercury__bit_buffer__read__BitsResult_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 322 "bit_buffer.read.m"
              }
#line 324 "bit_buffer.read.m"
            else
#line 325 "bit_buffer.read.m"
              {
#line 325 "bit_buffer.read.m"
                {
#line 325 "bit_buffer.read.m"
                  mercury__require__error_1_p_0((MR_String) "bit_buffer.read.get_bits: negative number of bits");
#line 325 "bit_buffer.read.m"
                  return;
                }
#line 325 "bit_buffer.read.m"
              }
#line 324 "bit_buffer.read.m"
            *mercury__bit_buffer__read__STATE_VARIABLE_Buffer_21 = mercury__bit_buffer__read__STATE_VARIABLE_Buffer_0_20;
#line 324 "bit_buffer.read.m"
            mercury__bit_buffer__read__STATE_VARIABLE_Word_19 = mercury__bit_buffer__read__STATE_VARIABLE_Word_0_18;
#line 324 "bit_buffer.read.m"
          }
#line 321 "bit_buffer.read.m"
      }
#line 327 "bit_buffer.read.m"
    else
#line 328 "bit_buffer.read.m"
      {
#line 329 "bit_buffer.read.m"
        *mercury__bit_buffer__read__NumBitsRead_12 = (MR_Integer) 0;
#line 330 "bit_buffer.read.m"
        *mercury__bit_buffer__read__BitsResult_13 = mercury__bit_buffer__read__Status_15;
#line 328 "bit_buffer.read.m"
        mercury__bit_buffer__read__STATE_VARIABLE_Word_19 = mercury__bit_buffer__read__STATE_VARIABLE_Word_0_18;
#line 328 "bit_buffer.read.m"
        *mercury__bit_buffer__read__STATE_VARIABLE_Buffer_21 = mercury__bit_buffer__read__STATE_VARIABLE_Buffer_0_20;
#line 328 "bit_buffer.read.m"
      }
#line 295 "bit_buffer.read.m"
    *mercury__bit_buffer__read__HeadVar__4_4 = mercury__bit_buffer__read__STATE_VARIABLE_Word_19;
#line 296 "bit_buffer.read.m"
  }
#line 117 "bit_buffer.read.m"
}

#line 100 "bit_buffer.read.m"
void MR_CALL 
mercury__bit_buffer__read__get_bit_3_p_0(
#line 100 "bit_buffer.read.m"
  MR_Word mercury__bit_buffer__read__TypeClassInfo_for_bulk_reader_17,
#line 100 "bit_buffer.read.m"
  MR_Word * mercury__bit_buffer__read__BitResult_4,
#line 100 "bit_buffer.read.m"
  MR_Word mercury__bit_buffer__read__STATE_VARIABLE_Buffer_0_10,
#line 100 "bit_buffer.read.m"
  MR_Word * mercury__bit_buffer__read__STATE_VARIABLE_Buffer_11)
#line 100 "bit_buffer.read.m"
{
#line 281 "bit_buffer.read.m"
  {
#line 281 "bit_buffer.read.m"
    MR_bool mercury__bit_buffer__read__succeeded;
#line 281 "bit_buffer.read.m"
    MR_Integer mercury__bit_buffer__read__Word_6;
#line 281 "bit_buffer.read.m"
    MR_Integer mercury__bit_buffer__read__NumBitsRead_7;
#line 281 "bit_buffer.read.m"
    MR_Word mercury__bit_buffer__read__BitsResult_8;

#line 282 "bit_buffer.read.m"
    {
#line 282 "bit_buffer.read.m"
      mercury__bit_buffer__read__get_bits_8_p_0(mercury__bit_buffer__read__TypeClassInfo_for_bulk_reader_17, (MR_Integer) 0, (MR_Integer) 1, (MR_Integer) 0, &mercury__bit_buffer__read__Word_6, &mercury__bit_buffer__read__NumBitsRead_7, &mercury__bit_buffer__read__BitsResult_8, mercury__bit_buffer__read__STATE_VARIABLE_Buffer_0_10, mercury__bit_buffer__read__STATE_VARIABLE_Buffer_11);
    }
#line 290 "bit_buffer.read.m"
    if ((mercury__bit_buffer__read__BitsResult_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 287 "bit_buffer.read.m"
      {
#line 285 "bit_buffer.read.m"
        mercury__bit_buffer__read__succeeded = (mercury__bit_buffer__read__NumBitsRead_7 == (MR_Integer) 1);
#line 287 "bit_buffer.read.m"
        if (mercury__bit_buffer__read__succeeded)
#line 286 "bit_buffer.read.m"
          {
#line 286 "bit_buffer.read.m"
            MR_Word mercury__bit_buffer__read__V_16_16;

#line 286 "bit_buffer.read.m"
            mercury__bit_buffer__read__succeeded = (mercury__bit_buffer__read__Word_6 == (MR_Integer) 0);
#line 286 "bit_buffer.read.m"
            if (mercury__bit_buffer__read__succeeded)
#line 286 "bit_buffer.read.m"
              mercury__bit_buffer__read__V_16_16 = (MR_Integer) 0;
#line 286 "bit_buffer.read.m"
            else
#line 286 "bit_buffer.read.m"
              mercury__bit_buffer__read__V_16_16 = (MR_Integer) 1;
#line 286 "bit_buffer.read.m"
            {
#line 286 "bit_buffer.read.m"
              MR_Word base;
#line 286 "bit_buffer.read.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 286 "bit_buffer.read.m"
              *mercury__bit_buffer__read__BitResult_4 = base;
#line 286 "bit_buffer.read.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__bit_buffer__read__V_16_16));
#line 286 "bit_buffer.read.m"
            }
#line 286 "bit_buffer.read.m"
          }
#line 287 "bit_buffer.read.m"
        else
#line 288 "bit_buffer.read.m"
          *mercury__bit_buffer__read__BitResult_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 287 "bit_buffer.read.m"
      }
#line 290 "bit_buffer.read.m"
    else
#line 291 "bit_buffer.read.m"
      {
#line 291 "bit_buffer.read.m"
        MR_Box mercury__bit_buffer__read__Error_9 = (MR_hl_field(MR_mktag(1), mercury__bit_buffer__read__BitsResult_8, (MR_Integer) 0));

#line 292 "bit_buffer.read.m"
        {
#line 292 "bit_buffer.read.m"
          MR_Word base;
#line 292 "bit_buffer.read.m"
          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 292 "bit_buffer.read.m"
          *mercury__bit_buffer__read__BitResult_4 = base;
#line 292 "bit_buffer.read.m"
          MR_hl_field(MR_mktag(2), base, 0) = mercury__bit_buffer__read__Error_9;
#line 292 "bit_buffer.read.m"
        }
#line 291 "bit_buffer.read.m"
      }
#line 281 "bit_buffer.read.m"
  }
#line 100 "bit_buffer.read.m"
}

#line 91 "bit_buffer.read.m"
void MR_CALL 
mercury__bit_buffer__read__buffer_status_3_p_0(
#line 91 "bit_buffer.read.m"
  MR_Word mercury__bit_buffer__read__TypeClassInfo_for_bulk_reader_18,
#line 91 "bit_buffer.read.m"
  MR_Word * mercury__bit_buffer__read__Result_4,
#line 91 "bit_buffer.read.m"
  MR_Word mercury__bit_buffer__read__STATE_VARIABLE_Buffer_0_11,
#line 91 "bit_buffer.read.m"
  MR_Word * mercury__bit_buffer__read__STATE_VARIABLE_Buffer_12)
#line 91 "bit_buffer.read.m"
{
#line 254 "bit_buffer.read.m"
  {
#line 254 "bit_buffer.read.m"
    MR_bool mercury__bit_buffer__read__succeeded;
#line 254 "bit_buffer.read.m"
    MR_Word mercury__bit_buffer__read__Status_6;
#line 254 "bit_buffer.read.m"
    MR_Box mercury__bit_buffer__read__V_13_13 = (MR_Box) mercury__bit_buffer__read__STATE_VARIABLE_Buffer_0_11;
#line 94 "bit_buffer.opt"
    MR_Word mercury__bit_buffer__read__TypeInfo_20_36;
#line 94 "bit_buffer.opt"
    MR_Word mercury__bit_buffer__read__TypeInfo_22_37;
#line 94 "bit_buffer.opt"
    MR_Word mercury__bit_buffer__read__TypeInfo_24_38;

#line 94 "bit_buffer.opt"
{
#define MR_PROC_LABEL mercury__bit_buffer__read__buffer_status_3_p_0

	ML_BitBufferPtr Buffer;
	MR_Word ReadStatus;

	Buffer = (ML_BitBufferPtr) mercury__bit_buffer__read__V_13_13 ;
		{
#line 94 "bit_buffer.opt"

    ReadStatus = Buffer->ML_bit_buffer_read_status;

#line 4129 "bit_buffer.read.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bit_buffer__read__Status_6  = ReadStatus;
#line 94 "bit_buffer.opt"
}
#line 276 "bit_buffer.read.m"
    if ((mercury__bit_buffer__read__Status_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 257 "bit_buffer.read.m"
      {
#line 257 "bit_buffer.read.m"
        MR_Word mercury__bit_buffer__read__TypeInfo_25_25;
#line 257 "bit_buffer.read.m"
        MR_Word mercury__bit_buffer__read__TypeInfo_26_26;
#line 257 "bit_buffer.read.m"
        MR_Word mercury__bit_buffer__read__TypeInfo_27_27;
#line 257 "bit_buffer.read.m"
        MR_Integer mercury__bit_buffer__read__NumBufferedBits_7;

#line 101 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__bit_buffer__read__buffer_status_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__bit_buffer__read__TypeClassInfo_for_bulk_reader_18 ;
	Index =  (MR_Integer) 3 ;
		{
#line 101 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 4164 "bit_buffer.read.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bit_buffer__read__TypeInfo_25_25  = TypeInfo;
#line 101 "private_builtin.opt"
}
#line 101 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__bit_buffer__read__buffer_status_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__bit_buffer__read__TypeClassInfo_for_bulk_reader_18 ;
	Index =  (MR_Integer) 6 ;
		{
#line 101 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 4186 "bit_buffer.read.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bit_buffer__read__TypeInfo_26_26  = TypeInfo;
#line 101 "private_builtin.opt"
}
#line 101 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__bit_buffer__read__buffer_status_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__bit_buffer__read__TypeClassInfo_for_bulk_reader_18 ;
	Index =  (MR_Integer) 7 ;
		{
#line 101 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 4208 "bit_buffer.read.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bit_buffer__read__TypeInfo_27_27  = TypeInfo;
#line 101 "private_builtin.opt"
}
#line 258 "bit_buffer.read.m"
        {
#line 258 "bit_buffer.read.m"
          mercury__bit_buffer__read__NumBufferedBits_7 = mercury__bit_buffer__read__num_buffered_bits_1_f_0(mercury__bit_buffer__read__TypeInfo_25_25, mercury__bit_buffer__read__TypeInfo_26_26, mercury__bit_buffer__read__TypeInfo_27_27, mercury__bit_buffer__read__STATE_VARIABLE_Buffer_0_11);
        }
#line 259 "bit_buffer.read.m"
        mercury__bit_buffer__read__succeeded = (mercury__bit_buffer__read__NumBufferedBits_7 > (MR_Integer) 0);
#line 261 "bit_buffer.read.m"
        if (mercury__bit_buffer__read__succeeded)
#line 260 "bit_buffer.read.m"
          {
#line 260 "bit_buffer.read.m"
            *mercury__bit_buffer__read__Result_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 260 "bit_buffer.read.m"
            *mercury__bit_buffer__read__STATE_VARIABLE_Buffer_12 = mercury__bit_buffer__read__STATE_VARIABLE_Buffer_0_11;
#line 260 "bit_buffer.read.m"
          }
#line 261 "bit_buffer.read.m"
        else
#line 262 "bit_buffer.read.m"
          {
#line 262 "bit_buffer.read.m"
            MR_Word mercury__bit_buffer__read__RefillResult_8;
#line 262 "bit_buffer.read.m"
            MR_Box mercury__bit_buffer__read__STATE_VARIABLE_Buffer_0_33 = (MR_Box) mercury__bit_buffer__read__STATE_VARIABLE_Buffer_0_11;
#line 262 "bit_buffer.read.m"
            MR_Box mercury__bit_buffer__read__STATE_VARIABLE_Buffer_34;

#line 527 "bit_buffer.read.m"
            {
#line 527 "bit_buffer.read.m"
              mercury__bit_buffer__read__do_refill_read_buffer_3_p_0(mercury__bit_buffer__read__TypeClassInfo_for_bulk_reader_18, &mercury__bit_buffer__read__RefillResult_8, mercury__bit_buffer__read__STATE_VARIABLE_Buffer_0_33, &mercury__bit_buffer__read__STATE_VARIABLE_Buffer_34);
            }
#line 526 "bit_buffer.read.m"
            *mercury__bit_buffer__read__STATE_VARIABLE_Buffer_12 = (MR_Word) mercury__bit_buffer__read__STATE_VARIABLE_Buffer_34;
#line 271 "bit_buffer.read.m"
            if ((mercury__bit_buffer__read__RefillResult_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 264 "bit_buffer.read.m"
              {
#line 264 "bit_buffer.read.m"
                MR_Word mercury__bit_buffer__read__TypeInfo_28_28;
#line 264 "bit_buffer.read.m"
                MR_Word mercury__bit_buffer__read__TypeInfo_29_29;
#line 264 "bit_buffer.read.m"
                MR_Word mercury__bit_buffer__read__TypeInfo_30_30;
#line 264 "bit_buffer.read.m"
                MR_Integer mercury__bit_buffer__read__NewNumBufferedBits_9;

#line 101 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__bit_buffer__read__buffer_status_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__bit_buffer__read__TypeClassInfo_for_bulk_reader_18 ;
	Index =  (MR_Integer) 3 ;
		{
#line 101 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 4278 "bit_buffer.read.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bit_buffer__read__TypeInfo_28_28  = TypeInfo;
#line 101 "private_builtin.opt"
}
#line 101 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__bit_buffer__read__buffer_status_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__bit_buffer__read__TypeClassInfo_for_bulk_reader_18 ;
	Index =  (MR_Integer) 6 ;
		{
#line 101 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 4300 "bit_buffer.read.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bit_buffer__read__TypeInfo_29_29  = TypeInfo;
#line 101 "private_builtin.opt"
}
#line 101 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__bit_buffer__read__buffer_status_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__bit_buffer__read__TypeClassInfo_for_bulk_reader_18 ;
	Index =  (MR_Integer) 7 ;
		{
#line 101 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 4322 "bit_buffer.read.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bit_buffer__read__TypeInfo_30_30  = TypeInfo;
#line 101 "private_builtin.opt"
}
#line 265 "bit_buffer.read.m"
                {
#line 265 "bit_buffer.read.m"
                  mercury__bit_buffer__read__NewNumBufferedBits_9 = mercury__bit_buffer__read__num_buffered_bits_1_f_0(mercury__bit_buffer__read__TypeInfo_28_28, mercury__bit_buffer__read__TypeInfo_29_29, mercury__bit_buffer__read__TypeInfo_30_30, *mercury__bit_buffer__read__STATE_VARIABLE_Buffer_12);
                }
#line 266 "bit_buffer.read.m"
                mercury__bit_buffer__read__succeeded = (mercury__bit_buffer__read__NewNumBufferedBits_9 > (MR_Integer) 0);
#line 268 "bit_buffer.read.m"
                if (mercury__bit_buffer__read__succeeded)
#line 267 "bit_buffer.read.m"
                  *mercury__bit_buffer__read__Result_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 268 "bit_buffer.read.m"
                else
#line 269 "bit_buffer.read.m"
                  *mercury__bit_buffer__read__Result_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 264 "bit_buffer.read.m"
              }
#line 271 "bit_buffer.read.m"
            else
#line 272 "bit_buffer.read.m"
              {
#line 272 "bit_buffer.read.m"
                MR_Box mercury__bit_buffer__read__Err_10 = (MR_hl_field(MR_mktag(1), mercury__bit_buffer__read__RefillResult_8, (MR_Integer) 0));

#line 273 "bit_buffer.read.m"
                {
#line 273 "bit_buffer.read.m"
                  MR_Word base;
#line 273 "bit_buffer.read.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 273 "bit_buffer.read.m"
                  *mercury__bit_buffer__read__Result_4 = base;
#line 273 "bit_buffer.read.m"
                  MR_hl_field(MR_mktag(1), base, 0) = mercury__bit_buffer__read__Err_10;
#line 273 "bit_buffer.read.m"
                }
#line 272 "bit_buffer.read.m"
              }
#line 262 "bit_buffer.read.m"
          }
#line 257 "bit_buffer.read.m"
      }
#line 276 "bit_buffer.read.m"
    else
#line 277 "bit_buffer.read.m"
      {
#line 277 "bit_buffer.read.m"
        MR_Box mercury__bit_buffer__read__Err_17 = (MR_hl_field(MR_mktag(1), mercury__bit_buffer__read__Status_6, (MR_Integer) 0));

#line 278 "bit_buffer.read.m"
        {
#line 278 "bit_buffer.read.m"
          MR_Word base;
#line 278 "bit_buffer.read.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 278 "bit_buffer.read.m"
          *mercury__bit_buffer__read__Result_4 = base;
#line 278 "bit_buffer.read.m"
          MR_hl_field(MR_mktag(1), base, 0) = mercury__bit_buffer__read__Err_17;
#line 278 "bit_buffer.read.m"
        }
#line 277 "bit_buffer.read.m"
        *mercury__bit_buffer__read__STATE_VARIABLE_Buffer_12 = mercury__bit_buffer__read__STATE_VARIABLE_Buffer_0_11;
#line 277 "bit_buffer.read.m"
      }
#line 254 "bit_buffer.read.m"
  }
#line 91 "bit_buffer.read.m"
}

#line 82 "bit_buffer.read.m"
MR_Integer MR_CALL 
mercury__bit_buffer__read__num_bits_to_byte_boundary_1_f_0(
#line 82 "bit_buffer.read.m"
  MR_Word mercury__bit_buffer__read__TypeInfo_10_10,
#line 82 "bit_buffer.read.m"
  MR_Word mercury__bit_buffer__read__TypeInfo_11_11,
#line 82 "bit_buffer.read.m"
  MR_Word mercury__bit_buffer__read__TypeInfo_12_12,
#line 82 "bit_buffer.read.m"
  MR_Word mercury__bit_buffer__read__Buffer_3)
#line 82 "bit_buffer.read.m"
{
#line 245 "bit_buffer.read.m"
  {
#line 245 "bit_buffer.read.m"
    MR_bool mercury__bit_buffer__read__succeeded;
#line 245 "bit_buffer.read.m"
    MR_Integer mercury__bit_buffer__read__NumBits_4;
#line 245 "bit_buffer.read.m"
    MR_Integer mercury__bit_buffer__read__Pos_5;
#line 245 "bit_buffer.read.m"
    MR_Integer mercury__bit_buffer__read__PosInByte_6;
#line 245 "bit_buffer.read.m"
    MR_Box mercury__bit_buffer__read__V_7_7 = (MR_Box) mercury__bit_buffer__read__Buffer_3;
#line 76 "bit_buffer.opt"
    MR_Word mercury__bit_buffer__read__TypeInfo_10_13;
#line 76 "bit_buffer.opt"
    MR_Word mercury__bit_buffer__read__TypeInfo_11_14;
#line 76 "bit_buffer.opt"
    MR_Word mercury__bit_buffer__read__TypeInfo_12_15;

#line 76 "bit_buffer.opt"
{
#define MR_PROC_LABEL mercury__bit_buffer__read__num_bits_to_byte_boundary_1_f_0

	ML_BitBufferPtr Buffer;
	MR_Integer Pos;

	Buffer = (ML_BitBufferPtr) mercury__bit_buffer__read__V_7_7 ;
		{
#line 76 "bit_buffer.opt"

    Pos = Buffer->ML_bit_buffer_pos;

#line 4444 "bit_buffer.read.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bit_buffer__read__Pos_5  = Pos;
#line 76 "bit_buffer.opt"
}
#line 247 "bit_buffer.read.m"
    mercury__bit_buffer__read__PosInByte_6 = (mercury__bit_buffer__read__Pos_5 % (MR_Integer) 8);
#line 248 "bit_buffer.read.m"
    mercury__bit_buffer__read__succeeded = (mercury__bit_buffer__read__PosInByte_6 == (MR_Integer) 0);
#line 250 "bit_buffer.read.m"
    if (mercury__bit_buffer__read__succeeded)
#line 249 "bit_buffer.read.m"
      mercury__bit_buffer__read__NumBits_4 = (MR_Integer) 0;
#line 250 "bit_buffer.read.m"
    else
#line 251 "bit_buffer.read.m"
      {
#line 251 "bit_buffer.read.m"
        mercury__bit_buffer__read__NumBits_4 = ((MR_Integer) 8 - mercury__bit_buffer__read__PosInByte_6);
#line 251 "bit_buffer.read.m"
      }
#line 245 "bit_buffer.read.m"
    return mercury__bit_buffer__read__NumBits_4;
#line 245 "bit_buffer.read.m"
  }
#line 82 "bit_buffer.read.m"
}

#line 77 "bit_buffer.read.m"
MR_Integer MR_CALL 
mercury__bit_buffer__read__num_buffered_bits_1_f_0(
#line 77 "bit_buffer.read.m"
  MR_Word mercury__bit_buffer__read__TypeInfo_10_10,
#line 77 "bit_buffer.read.m"
  MR_Word mercury__bit_buffer__read__TypeInfo_11_11,
#line 77 "bit_buffer.read.m"
  MR_Word mercury__bit_buffer__read__TypeInfo_12_12,
#line 77 "bit_buffer.read.m"
  MR_Word mercury__bit_buffer__read__Buffer_3)
#line 77 "bit_buffer.read.m"
{
#line 242 "bit_buffer.read.m"
  {
#line 242 "bit_buffer.read.m"
    MR_bool mercury__bit_buffer__read__succeeded;
#line 242 "bit_buffer.read.m"
    MR_Integer mercury__bit_buffer__read__HeadVar__2_2;
#line 242 "bit_buffer.read.m"
    MR_Integer mercury__bit_buffer__read__V_4_4;
#line 242 "bit_buffer.read.m"
    MR_Integer mercury__bit_buffer__read__V_5_5;
#line 242 "bit_buffer.read.m"
    MR_Box mercury__bit_buffer__read__V_6_6 = (MR_Box) mercury__bit_buffer__read__Buffer_3;
#line 242 "bit_buffer.read.m"
    MR_Integer mercury__bit_buffer__read__V_7_7;
#line 242 "bit_buffer.read.m"
    MR_Box mercury__bit_buffer__read__V_8_8;
#line 79 "bit_buffer.opt"
    MR_Word mercury__bit_buffer__read__TypeInfo_10_19;
#line 79 "bit_buffer.opt"
    MR_Word mercury__bit_buffer__read__TypeInfo_11_20;
#line 79 "bit_buffer.opt"
    MR_Word mercury__bit_buffer__read__TypeInfo_12_21;
#line 76 "bit_buffer.opt"
    MR_Word mercury__bit_buffer__read__TypeInfo_10_22;
#line 76 "bit_buffer.opt"
    MR_Word mercury__bit_buffer__read__TypeInfo_11_23;
#line 76 "bit_buffer.opt"
    MR_Word mercury__bit_buffer__read__TypeInfo_12_24;

#line 79 "bit_buffer.opt"
{
#define MR_PROC_LABEL mercury__bit_buffer__read__num_buffered_bits_1_f_0

	ML_BitBufferPtr Buffer;
	MR_Integer Size;

	Buffer = (ML_BitBufferPtr) mercury__bit_buffer__read__V_6_6 ;
		{
#line 79 "bit_buffer.opt"

    Size = Buffer->ML_bit_buffer_size;

#line 4529 "bit_buffer.read.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bit_buffer__read__V_5_5  = Size;
#line 79 "bit_buffer.opt"
}
#line 243 "bit_buffer.read.m"
    mercury__bit_buffer__read__V_8_8 = (MR_Box) mercury__bit_buffer__read__Buffer_3;
#line 76 "bit_buffer.opt"
{
#define MR_PROC_LABEL mercury__bit_buffer__read__num_buffered_bits_1_f_0

	ML_BitBufferPtr Buffer;
	MR_Integer Pos;

	Buffer = (ML_BitBufferPtr) mercury__bit_buffer__read__V_8_8 ;
		{
#line 76 "bit_buffer.opt"

    Pos = Buffer->ML_bit_buffer_pos;

#line 4551 "bit_buffer.read.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bit_buffer__read__V_7_7  = Pos;
#line 76 "bit_buffer.opt"
}
#line 243 "bit_buffer.read.m"
    mercury__bit_buffer__read__V_4_4 = (mercury__bit_buffer__read__V_5_5 - mercury__bit_buffer__read__V_7_7);
#line 36 "int.opt"
    mercury__bit_buffer__read__succeeded = (mercury__bit_buffer__read__V_4_4 > (MR_Integer) 0);
#line 39 "int.opt"
    if (mercury__bit_buffer__read__succeeded)
#line 38 "int.opt"
      mercury__bit_buffer__read__HeadVar__2_2 = mercury__bit_buffer__read__V_4_4;
#line 39 "int.opt"
    else
#line 40 "int.opt"
      mercury__bit_buffer__read__HeadVar__2_2 = (MR_Integer) 0;
#line 242 "bit_buffer.read.m"
    return mercury__bit_buffer__read__HeadVar__2_2;
#line 242 "bit_buffer.read.m"
  }
#line 77 "bit_buffer.read.m"
}

#line 72 "bit_buffer.read.m"
MR_Word MR_CALL 
mercury__bit_buffer__read__new_bitmap_reader_1_f_0(
#line 72 "bit_buffer.read.m"
  MR_Box mercury__bit_buffer__read__BM_3)
#line 72 "bit_buffer.read.m"
{
#line 239 "bit_buffer.read.m"
  {
#line 239 "bit_buffer.read.m"
    MR_bool mercury__bit_buffer__read__succeeded;
#line 239 "bit_buffer.read.m"
    MR_Word mercury__bit_buffer__read__HeadVar__2_2;
#line 239 "bit_buffer.read.m"
    MR_Integer mercury__bit_buffer__read__V_5_5;

#line 80 "bitmap.opt"
{
#define MR_PROC_LABEL mercury__bit_buffer__read__new_bitmap_reader_1_f_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr) mercury__bit_buffer__read__BM_3 ;
		{
#line 80 "bitmap.opt"

    NumBits = BM->num_bits;

#line 4606 "bit_buffer.read.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bit_buffer__read__V_5_5  = NumBits;
#line 80 "bitmap.opt"
}
#line 239 "bit_buffer.read.m"
    {
#line 239 "bit_buffer.read.m"
      return mercury__bit_buffer__read__HeadVar__2_2 = mercury__bit_buffer__read__new_bitmap_reader_3_f_0(mercury__bit_buffer__read__BM_3, (MR_Integer) 0, mercury__bit_buffer__read__V_5_5);
    }
#line 239 "bit_buffer.read.m"
    return mercury__bit_buffer__read__HeadVar__2_2;
#line 239 "bit_buffer.read.m"
  }
#line 72 "bit_buffer.read.m"
}

#line 69 "bit_buffer.read.m"
MR_Word MR_CALL 
mercury__bit_buffer__read__new_bitmap_reader_3_f_0(
#line 69 "bit_buffer.read.m"
  MR_Box mercury__bit_buffer__read__BM_5,
#line 69 "bit_buffer.read.m"
  MR_Integer mercury__bit_buffer__read__StartIndex_6,
#line 69 "bit_buffer.read.m"
  MR_Integer mercury__bit_buffer__read__NumBits_7)
#line 69 "bit_buffer.read.m"
{
#line 235 "bit_buffer.read.m"
  {
#line 235 "bit_buffer.read.m"
    MR_bool mercury__bit_buffer__read__succeeded;
#line 235 "bit_buffer.read.m"
    MR_Word mercury__bit_buffer__read__Buffer_8;
#line 235 "bit_buffer.read.m"
    MR_Word mercury__bit_buffer__read__TypeCtorInfo_13_13 = (MR_Word) &mercury__bit_buffer__bit_buffer__type_ctor_info_error_stream_0;
#line 235 "bit_buffer.read.m"
    MR_Word mercury__bit_buffer__read__TypeCtorInfo_14_14 = (MR_Word) &mercury__bit_buffer__bit_buffer__type_ctor_info_error_state_0;
#line 235 "bit_buffer.read.m"
    MR_Word mercury__bit_buffer__read__TypeCtorInfo_15_15 = (MR_Word) &mercury__bit_buffer__bit_buffer__type_ctor_info_error_stream_error_0;
#line 235 "bit_buffer.read.m"
    MR_Box mercury__bit_buffer__read__V_9_9;

#line 237 "bit_buffer.read.m"
    mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 237 "bit_buffer.read.m"
    mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 236 "bit_buffer.read.m"
    {
#line 236 "bit_buffer.read.m"
      mercury__bit_buffer__read__V_9_9 = mercury__bit_buffer__new_buffer_6_f_0(mercury__bit_buffer__read__TypeCtorInfo_13_13, mercury__bit_buffer__read__TypeCtorInfo_14_14, mercury__bit_buffer__read__TypeCtorInfo_15_15, mercury__bit_buffer__read__BM_5, mercury__bit_buffer__read__StartIndex_6, mercury__bit_buffer__read__NumBits_7, (MR_Integer) 0, ((MR_Box) ((MR_Integer) 0)), ((MR_Box) ((MR_Integer) 0)));
    }
#line 236 "bit_buffer.read.m"
    mercury__bit_buffer__read__Buffer_8 = (MR_Word) mercury__bit_buffer__read__V_9_9;
#line 235 "bit_buffer.read.m"
    return mercury__bit_buffer__read__Buffer_8;
#line 235 "bit_buffer.read.m"
  }
#line 69 "bit_buffer.read.m"
}

#line 63 "bit_buffer.read.m"
MR_Word MR_CALL 
mercury__bit_buffer__read__new_3_f_0(
#line 63 "bit_buffer.read.m"
  MR_Word mercury__bit_buffer__read__TypeClassInfo_for_bulk_reader_20,
#line 63 "bit_buffer.read.m"
  MR_Integer mercury__bit_buffer__read__NumBytes_5,
#line 63 "bit_buffer.read.m"
  MR_Box mercury__bit_buffer__read__Stream_6,
#line 63 "bit_buffer.read.m"
  MR_Box mercury__bit_buffer__read__State_7)
#line 63 "bit_buffer.read.m"
{
#line 214 "bit_buffer.read.m"
  {
#line 214 "bit_buffer.read.m"
    MR_bool mercury__bit_buffer__read__succeeded;
#line 214 "bit_buffer.read.m"
    MR_Word mercury__bit_buffer__read__Buffer_8;
#line 214 "bit_buffer.read.m"
    MR_Word mercury__bit_buffer__read__TypeInfo_22_22;
#line 214 "bit_buffer.read.m"
    MR_Word mercury__bit_buffer__read__TypeInfo_24_24;
#line 214 "bit_buffer.read.m"
    MR_Word mercury__bit_buffer__read__TypeInfo_26_26;
#line 214 "bit_buffer.read.m"
    MR_Integer mercury__bit_buffer__read__SizeInBits_9 = (mercury__bit_buffer__read__NumBytes_5 * (MR_Integer) 8);
#line 214 "bit_buffer.read.m"
    MR_Integer mercury__bit_buffer__read__ChunkSize_10;
#line 214 "bit_buffer.read.m"
    MR_Box mercury__bit_buffer__read__BM_12;
#line 214 "bit_buffer.read.m"
    MR_Integer mercury__bit_buffer__read__Pos_13;
#line 214 "bit_buffer.read.m"
    MR_Integer mercury__bit_buffer__read__V_15_15;
#line 214 "bit_buffer.read.m"
    MR_Integer mercury__bit_buffer__read__V_16_16;
#line 214 "bit_buffer.read.m"
    MR_Box mercury__bit_buffer__read__V_18_18;

#line 132 "int.opt"
{
#define MR_PROC_LABEL mercury__bit_buffer__read__new_3_f_0

	MR_Integer Bits;

		{
#line 132 "int.opt"

    Bits = ML_BITS_PER_INT;

#line 4720 "bit_buffer.read.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bit_buffer__read__V_15_15  = Bits;
#line 132 "int.opt"
}
#line 36 "int.opt"
    mercury__bit_buffer__read__succeeded = (mercury__bit_buffer__read__SizeInBits_9 > mercury__bit_buffer__read__V_15_15);
#line 39 "int.opt"
    if (mercury__bit_buffer__read__succeeded)
#line 38 "int.opt"
      mercury__bit_buffer__read__ChunkSize_10 = mercury__bit_buffer__read__SizeInBits_9;
#line 39 "int.opt"
    else
#line 40 "int.opt"
      mercury__bit_buffer__read__ChunkSize_10 = mercury__bit_buffer__read__V_15_15;
#line 132 "int.opt"
{
#define MR_PROC_LABEL mercury__bit_buffer__read__new_3_f_0

	MR_Integer Bits;

		{
#line 132 "int.opt"

    Bits = ML_BITS_PER_INT;

#line 4748 "bit_buffer.read.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bit_buffer__read__V_16_16  = Bits;
#line 132 "int.opt"
}
#line 227 "bit_buffer.read.m"
    mercury__bit_buffer__read__Pos_13 = (mercury__bit_buffer__read__ChunkSize_10 + mercury__bit_buffer__read__V_16_16);
#line 228 "bit_buffer.read.m"
    {
#line 228 "bit_buffer.read.m"
      mercury__bit_buffer__read__BM_12 = mercury__bitmap__init_2_f_0(mercury__bit_buffer__read__Pos_13, (MR_Integer) 0);
    }
#line 101 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__bit_buffer__read__new_3_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__bit_buffer__read__TypeClassInfo_for_bulk_reader_20 ;
	Index =  (MR_Integer) 3 ;
		{
#line 101 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 4777 "bit_buffer.read.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bit_buffer__read__TypeInfo_22_22  = TypeInfo;
#line 101 "private_builtin.opt"
}
#line 101 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__bit_buffer__read__new_3_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__bit_buffer__read__TypeClassInfo_for_bulk_reader_20 ;
	Index =  (MR_Integer) 6 ;
		{
#line 101 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 4799 "bit_buffer.read.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bit_buffer__read__TypeInfo_24_24  = TypeInfo;
#line 101 "private_builtin.opt"
}
#line 101 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__bit_buffer__read__new_3_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__bit_buffer__read__TypeClassInfo_for_bulk_reader_20 ;
	Index =  (MR_Integer) 7 ;
		{
#line 101 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 4821 "bit_buffer.read.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bit_buffer__read__TypeInfo_26_26  = TypeInfo;
#line 101 "private_builtin.opt"
}
#line 233 "bit_buffer.read.m"
    {
#line 233 "bit_buffer.read.m"
      mercury__bit_buffer__read__V_18_18 = mercury__bit_buffer__new_buffer_6_f_0(mercury__bit_buffer__read__TypeInfo_22_22, mercury__bit_buffer__read__TypeInfo_24_24, mercury__bit_buffer__read__TypeInfo_26_26, mercury__bit_buffer__read__BM_12, mercury__bit_buffer__read__Pos_13, mercury__bit_buffer__read__Pos_13, (MR_Integer) 1, mercury__bit_buffer__read__Stream_6, mercury__bit_buffer__read__State_7);
    }
#line 233 "bit_buffer.read.m"
    mercury__bit_buffer__read__Buffer_8 = (MR_Word) mercury__bit_buffer__read__V_18_18;
#line 214 "bit_buffer.read.m"
    return mercury__bit_buffer__read__Buffer_8;
#line 214 "bit_buffer.read.m"
  }
#line 63 "bit_buffer.read.m"
}

void mercury__bit_buffer__read__init(void)
{
}

void mercury__bit_buffer__read__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mercury__bit_buffer__read__bit_buffer__read__type_ctor_info_io_read_buffer_0);
	MR_register_type_ctor_info(&mercury__bit_buffer__read__bit_buffer__read__type_ctor_info_read_buffer_3);
	MR_register_type_ctor_info(&mercury__bit_buffer__read__bit_buffer__read__type_ctor_info_read_buffer_0);
}

void mercury__bit_buffer__read__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module bit_buffer.read. */
