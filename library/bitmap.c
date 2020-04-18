/*
** Automatically generated from `bitmap.m'
** by the Mercury compiler,
** version rotd-2020-04-18
** configured for x86_64-pc-linux-gnu.
** Do not edit.
**
** The autoconfigured grade settings governing
** the generation of this C file were
**
** TAG_BITS=2
** UNBOXED_FLOAT=no
** UNBOXED_INT64S=no
** PREGENERATED_DIST=yes
** HIGHLEVEL_CODE=yes
**
** END_OF_C_GRADE_INFO
*/


// :- module bitmap.
// :- implementation.

/*
INIT mercury__bitmap__init
ENDINIT
*/

#include "bitmap.mih"


#include "array.mih"
#include "assoc_list.mih"
#include "benchmarking.mih"
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
#include "int16.mih"
#include "int32.mih"
#include "int64.mih"
#include "int8.mih"
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
#include "uint.mih"
#include "uint16.mih"
#include "uint32.mih"
#include "uint64.mih"
#include "uint8.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "version_array.mih"
#include "stream.string_writer.mih"
#include "string.format.mih"
#include "string.parse_runtime.mih"
#include "string.parse_util.mih"
#include "string.to_string.mih"




static const MR_Integer mercury__bitmap__bitmap__functor_number_map_bitmap_error_0[1];

static const MR_NotagFunctorDesc mercury__bitmap__bitmap__notag_functor_desc_bitmap_error_0;

static const MR_EnumFunctorDesc mercury__bitmap__bitmap__enum_functor_desc_copy_direction_0_0;

static const MR_EnumFunctorDesc mercury__bitmap__bitmap__enum_functor_desc_copy_direction_0_1;

static const MR_EnumFunctorDescPtr mercury__bitmap__bitmap__enum_value_ordered_copy_direction_0[2];

static const MR_EnumFunctorDescPtr mercury__bitmap__bitmap__enum_name_ordered_copy_direction_0[2];

static const MR_Integer mercury__bitmap__bitmap__functor_number_map_copy_direction_0[2];

static const MR_PseudoTypeInfo mercury__bitmap__bitmap__field_types_slice_0_0[3];

static const MR_ConstString mercury__bitmap__bitmap__field_names_slice_0_0[3];

static const MR_DuFunctorDesc mercury__bitmap__bitmap__du_functor_desc_slice_0_0;

static const MR_DuFunctorDescPtr mercury__bitmap__bitmap__du_stag_ordered_slice_0_0[1];

static const MR_DuPtagLayout mercury__bitmap__bitmap__du_ptag_ordered_slice_0[1];

static const MR_DuFunctorDescPtr mercury__bitmap__bitmap__du_name_ordered_slice_0[1];

static const MR_Integer mercury__bitmap__bitmap__functor_number_map_slice_0[1];

static MR_Integer MR_CALL 
mercury__bitmap__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);

static MR_Box MR_CALL 
mercury__bitmap__allocate_bitmap_1_f_0(
  MR_Integer N_1);

static MR_Box MR_CALL 
mercury__bitmap__f_110_117_109_95_98_105_116_115_32_58_61_2_f_0(
  MR_Box BM0_1,
  MR_Integer NumBits_2);

static void MR_CALL 
mercury__bitmap__hash_2_5_p_0(
  MR_Box BM_6,
  MR_Integer Index_7,
  MR_Integer Length_8,
  MR_Integer STATE_VARIABLE_HashVal_0_10,
  MR_Integer * STATE_VARIABLE_HashVal_11);

static MR_bool MR_CALL 
mercury__bitmap__hex_chars_to_bitmap_6_p_0(
  MR_String Str_7,
  MR_Integer Index_8,
  MR_Integer End_9,
  MR_Integer ByteIndex_10,
  MR_Box STATE_VARIABLE_BM_0_15,
  MR_Box * STATE_VARIABLE_BM_16);

static void MR_CALL 
mercury__bitmap__to_string_chars_4_p_0(
  MR_Integer Index_5,
  MR_Box BM_6,
  MR_Word STATE_VARIABLE_Chars_0_12,
  MR_Word * STATE_VARIABLE_Chars_13);

static void MR_CALL 
mercury__bitmap__foldl__ho12_4_p_in__list_0(
  MR_Word HeadVar__2_2,
  MR_Integer HeadVar__3_3,
  MR_Integer * HeadVar__4_4);

static void MR_CALL 
mercury__bitmap__foldl2__ho2_6_p_in__list_0(
  MR_Word HeadVar__2_2,
  MR_Integer HeadVar__3_3,
  MR_Integer * HeadVar__4_4,
  MR_Box HeadVar__5_5,
  MR_Box * HeadVar__6_6);

static MR_Box MR_CALL 
mercury__bitmap__zip2__ho11_4_f_0(
  MR_Integer I_6,
  MR_Box BMa_8,
  MR_Box BMb_9);

static MR_Box MR_CALL 
mercury__bitmap__zip2__ho10_4_f_0(
  MR_Integer I_6,
  MR_Box BMa_8,
  MR_Box BMb_9);

static MR_Box MR_CALL 
mercury__bitmap__zip2__ho9_4_f_0(
  MR_Integer I_6,
  MR_Box BMa_8,
  MR_Box BMb_9);

static MR_Box MR_CALL 
mercury__bitmap__zip2__ho8_4_f_0(
  MR_Integer I_6,
  MR_Box BMa_8,
  MR_Box BMb_9);

static MR_Box MR_CALL 
mercury__bitmap__unsafe_copy_bits_6_f_0(
  MR_Integer SameBM_8,
  MR_Box SrcBM_9,
  MR_Integer SrcStartBit_10,
  MR_Box STATE_VARIABLE_DestBM_0_30,
  MR_Integer DestStartBit_12,
  MR_Integer STATE_VARIABLE_NumBits_0_31);

static MR_Integer MR_CALL 
mercury__bitmap__extract_bits_from_byte_3_f_0(
  MR_Integer Byte_5,
  MR_Integer FirstBit_6,
  MR_Integer NumBits_7);

static MR_Box MR_CALL 
mercury__bitmap__unsafe_copy_unaligned_bits_6_f_0(
  MR_Integer SameBM_8,
  MR_Box SrcBM_9,
  MR_Integer SrcStartBit_10,
  MR_Box STATE_VARIABLE_DestBM_0_31,
  MR_Integer DestStartBit_12,
  MR_Integer STATE_VARIABLE_NumBits_0_32);

static MR_Integer MR_CALL 
mercury__bitmap__set_bits_in_byte_4_f_0(
  MR_Integer Byte0_6,
  MR_Integer FirstBit_7,
  MR_Integer NumBits_8,
  MR_Integer Bits_9);

static MR_Box MR_CALL 
mercury__bitmap__unsafe_copy_unaligned_bytes_rtol_7_f_0(
  MR_Box SrcBM_9,
  MR_Integer SrcByteIndex_10,
  MR_Integer SrcBitIndex_11,
  MR_Integer PrevSrcByteBits_12,
  MR_Box STATE_VARIABLE_DestBM_0_18,
  MR_Integer DestByteIndex_14,
  MR_Integer NumBytes_15);

static MR_Box MR_CALL 
mercury__bitmap__unsafe_copy_unaligned_bytes_ltor_7_f_0(
  MR_Box SrcBM_9,
  MR_Integer SrcByteIndex_10,
  MR_Integer SrcBitIndex_11,
  MR_Integer PrevSrcByteBits_12,
  MR_Box STATE_VARIABLE_DestBM_0_18,
  MR_Integer DestByteIndex_14,
  MR_Integer NumBytes_15);

static MR_Box MR_CALL 
mercury__bitmap__unsafe_copy_bytes_6_f_0(
  MR_Integer SameBM_1,
  MR_Box SrcBM_2,
  MR_Integer SrcFirstByteIndex_3,
  MR_Box DestBM0_4,
  MR_Integer DestFirstByteIndex_5,
  MR_Integer NumBytes_6);

static void MR_CALL 
mercury__bitmap__set_bits_in_byte_index_6_p_0(
  MR_Integer ByteIndex_7,
  MR_Integer LastBitIndex_8,
  MR_Integer NumBitsThisByte_9,
  MR_Integer Bits_10,
  MR_Box STATE_VARIABLE_BM_0_13,
  MR_Box * STATE_VARIABLE_BM_14);

static void MR_CALL 
mercury__bitmap__extract_bits_from_byte_index_6_p_0(
  MR_Integer ByteIndex_7,
  MR_Integer FirstBitIndex_8,
  MR_Integer NumBitsThisByte_9,
  MR_Box BM_10,
  MR_Integer STATE_VARIABLE_Bits_0_13,
  MR_Integer * STATE_VARIABLE_Bits_14);

static MR_Box MR_CALL 
mercury__bitmap__initialize_bitmap_bytes_4_f_0(
  MR_Box BM_6,
  MR_Integer ByteIndex_7,
  MR_Integer LastByteIndex_8,
  MR_Integer Init_9);

static MR_bool MR_CALL 
mercury__bitmap____Unify____bit_index_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__bitmap____Compare____bit_index_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mercury__bitmap____Unify____bit_index_in_byte_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__bitmap____Compare____bit_index_in_byte_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mercury__bitmap____Unify____bitmap_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__bitmap____Compare____bitmap_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mercury__bitmap____Unify____bitmap_error_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__bitmap____Compare____bitmap_error_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mercury__bitmap____Unify____byte_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__bitmap____Compare____byte_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mercury__bitmap____Unify____byte_index_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__bitmap____Compare____byte_index_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mercury__bitmap____Unify____copy_direction_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__bitmap____Compare____copy_direction_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mercury__bitmap____Unify____num_bits_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__bitmap____Compare____num_bits_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mercury__bitmap____Unify____num_bytes_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__bitmap____Compare____num_bytes_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mercury__bitmap____Unify____slice_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__bitmap____Compare____slice_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mercury__bitmap____Unify____word_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__bitmap____Compare____word_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box mercury__bitmap_scalar_common_1[1][3];

static /* final */ const MR_Box mercury__bitmap_scalar_common_2[1][4];

static /* final */ const MR_Box mercury__bitmap_scalar_common_3[2][5];

static /* final */ const MR_Box mercury__bitmap_scalar_common_4[1][1];

static /* final */ const MR_Box mercury__bitmap_scalar_common_5[1][2];




static /* final */ const MR_Box mercury__bitmap_scalar_common_1[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__bitmap_scalar_common_2[1][4] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__bitmap_scalar_common_1[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__bitmap_scalar_common_3[2][5] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__bitmap_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__character__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__bitmap_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__bitmap_scalar_common_4[1][1] = {
  /* row 0 */
  {
    (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1))))))))
  },
};

static /* final */ const MR_Box mercury__bitmap_scalar_common_5[1][2] = {
  /* row 0 */
  {
    ((MR_Box) (MR_Word) ((MR_Char) 62)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};



#include "array.mh"
#include "benchmarking.mh"
#include "bitmap.mh"
#include "builtin.mh"
#include "char.mh"
#include "construct.mh"
#include "dir.mh"
#include "exception.mh"
#include "float.mh"
#include "int.mh"
#include "int16.mh"
#include "int32.mh"
#include "int64.mh"
#include "int8.mh"
#include "io.mh"
#include "math.mh"
#include "pretty_printer.mh"
#include "private_builtin.mh"
#include "rtti_implementation.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "string.mh"
#include "table_builtin.mh"
#include "time.mh"
#include "type_desc.mh"
#include "uint.mh"
#include "uint16.mh"
#include "uint32.mh"
#include "uint64.mh"
#include "uint8.mh"
#include "version_array.mh"



const MR_TypeCtorInfo_Struct mercury__bitmap__bitmap__type_ctor_info_bit_index_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mercury__bitmap____Unify____bit_index_0_0_10001)),
  ((MR_Box) (mercury__bitmap____Compare____bit_index_0_0_10001)),
  (MR_String) "bitmap",
  (MR_String) "bit_index",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
};

const MR_TypeCtorInfo_Struct mercury__bitmap__bitmap__type_ctor_info_bit_index_in_byte_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mercury__bitmap____Unify____bit_index_in_byte_0_0_10001)),
  ((MR_Box) (mercury__bitmap____Compare____bit_index_in_byte_0_0_10001)),
  (MR_String) "bitmap",
  (MR_String) "bit_index_in_byte",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
};

const MR_TypeCtorInfo_Struct mercury__bitmap__bitmap__type_ctor_info_bitmap_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_BITMAP,
  ((MR_Box) (mercury__bitmap____Unify____bitmap_0_0_10001)),
  ((MR_Box) (mercury__bitmap____Compare____bitmap_0_0_10001)),
  (MR_String) "bitmap",
  (MR_String) "bitmap",
  {     NULL },
  {     NULL },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
};

static const MR_Integer mercury__bitmap__bitmap__functor_number_map_bitmap_error_0[1] = {
  (MR_Integer) 0
};

static const MR_NotagFunctorDesc mercury__bitmap__bitmap__notag_functor_desc_bitmap_error_0 = {
  (MR_String) "bitmap_error",
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct mercury__bitmap__bitmap__type_ctor_info_bitmap_error_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (mercury__bitmap____Unify____bitmap_error_0_0_10001)),
  ((MR_Box) (mercury__bitmap____Compare____bitmap_error_0_0_10001)),
  (MR_String) "bitmap",
  (MR_String) "bitmap_error",
  {     &mercury__bitmap__bitmap__notag_functor_desc_bitmap_error_0 },
  {     &mercury__bitmap__bitmap__notag_functor_desc_bitmap_error_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  mercury__bitmap__bitmap__functor_number_map_bitmap_error_0
};

const MR_TypeCtorInfo_Struct mercury__bitmap__bitmap__type_ctor_info_byte_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mercury__bitmap____Unify____byte_0_0_10001)),
  ((MR_Box) (mercury__bitmap____Compare____byte_0_0_10001)),
  (MR_String) "bitmap",
  (MR_String) "byte",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
};

const MR_TypeCtorInfo_Struct mercury__bitmap__bitmap__type_ctor_info_byte_index_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mercury__bitmap____Unify____byte_index_0_0_10001)),
  ((MR_Box) (mercury__bitmap____Compare____byte_index_0_0_10001)),
  (MR_String) "bitmap",
  (MR_String) "byte_index",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
};

static const MR_EnumFunctorDesc mercury__bitmap__bitmap__enum_functor_desc_copy_direction_0_0 = {
  (MR_String) "left_to_right",
  INT32_C(0)
};

static const MR_EnumFunctorDesc mercury__bitmap__bitmap__enum_functor_desc_copy_direction_0_1 = {
  (MR_String) "right_to_left",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr mercury__bitmap__bitmap__enum_value_ordered_copy_direction_0[2] = {
  &mercury__bitmap__bitmap__enum_functor_desc_copy_direction_0_0,
  &mercury__bitmap__bitmap__enum_functor_desc_copy_direction_0_1
};

static const MR_EnumFunctorDescPtr mercury__bitmap__bitmap__enum_name_ordered_copy_direction_0[2] = {
  &mercury__bitmap__bitmap__enum_functor_desc_copy_direction_0_0,
  &mercury__bitmap__bitmap__enum_functor_desc_copy_direction_0_1
};

static const MR_Integer mercury__bitmap__bitmap__functor_number_map_copy_direction_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct mercury__bitmap__bitmap__type_ctor_info_copy_direction_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mercury__bitmap____Unify____copy_direction_0_0_10001)),
  ((MR_Box) (mercury__bitmap____Compare____copy_direction_0_0_10001)),
  (MR_String) "bitmap",
  (MR_String) "copy_direction",
  {     mercury__bitmap__bitmap__enum_name_ordered_copy_direction_0 },
  {     mercury__bitmap__bitmap__enum_value_ordered_copy_direction_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  mercury__bitmap__bitmap__functor_number_map_copy_direction_0
};

const MR_TypeCtorInfo_Struct mercury__bitmap__bitmap__type_ctor_info_num_bits_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mercury__bitmap____Unify____num_bits_0_0_10001)),
  ((MR_Box) (mercury__bitmap____Compare____num_bits_0_0_10001)),
  (MR_String) "bitmap",
  (MR_String) "num_bits",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
};

const MR_TypeCtorInfo_Struct mercury__bitmap__bitmap__type_ctor_info_num_bytes_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mercury__bitmap____Unify____num_bytes_0_0_10001)),
  ((MR_Box) (mercury__bitmap____Compare____num_bytes_0_0_10001)),
  (MR_String) "bitmap",
  (MR_String) "num_bytes",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
};

static const MR_PseudoTypeInfo mercury__bitmap__bitmap__field_types_slice_0_0[3] = {
  (MR_PseudoTypeInfo) (&mercury__bitmap__bitmap__type_ctor_info_bitmap_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_ConstString mercury__bitmap__bitmap__field_names_slice_0_0[3] = {
  (MR_String) "slice_bitmap_field",
  (MR_String) "slice_start_bit_index_field",
  (MR_String) "slice_num_bits_field"
};

static const MR_DuFunctorDesc mercury__bitmap__bitmap__du_functor_desc_slice_0_0 = {
  (MR_String) "slice_ctor",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  mercury__bitmap__bitmap__field_types_slice_0_0,
  mercury__bitmap__bitmap__field_names_slice_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mercury__bitmap__bitmap__du_stag_ordered_slice_0_0[1] = {
  &mercury__bitmap__bitmap__du_functor_desc_slice_0_0
};

static const MR_DuPtagLayout mercury__bitmap__bitmap__du_ptag_ordered_slice_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__bitmap__bitmap__du_stag_ordered_slice_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr mercury__bitmap__bitmap__du_name_ordered_slice_0[1] = {
  &mercury__bitmap__bitmap__du_functor_desc_slice_0_0
};

static const MR_Integer mercury__bitmap__bitmap__functor_number_map_slice_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mercury__bitmap__bitmap__type_ctor_info_slice_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__bitmap____Unify____slice_0_0_10001)),
  ((MR_Box) (mercury__bitmap____Compare____slice_0_0_10001)),
  (MR_String) "bitmap",
  (MR_String) "slice",
  {     mercury__bitmap__bitmap__du_name_ordered_slice_0 },
  {     mercury__bitmap__bitmap__du_ptag_ordered_slice_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  mercury__bitmap__bitmap__functor_number_map_slice_0
};

const MR_TypeCtorInfo_Struct mercury__bitmap__bitmap__type_ctor_info_word_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mercury__bitmap____Unify____word_0_0_10001)),
  ((MR_Box) (mercury__bitmap____Compare____word_0_0_10001)),
  (MR_String) "bitmap",
  (MR_String) "word",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
};

static MR_Integer MR_CALL 
mercury__bitmap__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
{
  return (MR_Integer) 1200;
}

void MR_CALL 
mercury__bitmap____Compare____word_0_0(
  MR_Word * HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Integer HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Integer Cast_HeadVar2_5 = HeadVar__3_3;

    succeeded = (Cast_HeadVar1_4 < Cast_HeadVar2_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      succeeded = (Cast_HeadVar1_4 == Cast_HeadVar2_5);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 0;
      else
        *HeadVar__1_1 = (MR_Integer) 2;
    }
  }
}

MR_bool MR_CALL 
mercury__bitmap____Unify____word_0_0(
  MR_Integer HeadVar__1_1,
  MR_Integer HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Integer Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = (Cast_HeadVar1_3 == Cast_HeadVar2_4);
    return succeeded;
  }
}

void MR_CALL 
mercury__bitmap____Compare____slice_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_12 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_13 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_12 == CastY_13);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Box ArgX1_4 = ((MR_Box) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Box ArgY1_5 = ((MR_Box) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_Integer ArgX2_7 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Integer ArgY2_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Integer ArgX3_10 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Integer ArgY3_11 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
      MR_Word SubResult1_6;
      MR_Integer CastX_17 = (MR_Integer) (ArgX1_4);
      MR_Integer CastY_18 = (MR_Integer) (ArgY1_5);

      succeeded = (CastX_17 == CastY_18);
      if (succeeded)
        SubResult1_6 = (MR_Integer) 0;
      else
      {
{
#define MR_PROC_LABEL mercury__bitmap____Compare____slice_0_0

	MR_Word Result;
	MR_BitmapPtr BM1;
	MR_BitmapPtr BM2;

	BM1 = (MR_BitmapPtr)ArgX1_4 ;
	BM2 = (MR_BitmapPtr)ArgY1_5 ;
		{

    MR_Integer  res;
    res = MR_bitmap_cmp(BM1, BM2);
    Result = ((res < 0) ? MR_COMPARE_LESS
        : (res == 0) ? MR_COMPARE_EQUAL
        : MR_COMPARE_GREATER);


		;}
#undef MR_PROC_LABEL
	 SubResult1_6  = Result;
}
      }
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
      {
        MR_Word SubResult2_9;

        succeeded = (ArgX2_7 < ArgY2_8);
        if (succeeded)
          SubResult2_9 = (MR_Integer) 1;
        else
        {
          succeeded = (ArgX2_7 == ArgY2_8);
          if (succeeded)
            SubResult2_9 = (MR_Integer) 0;
          else
            SubResult2_9 = (MR_Integer) 2;
        }
        succeeded = (SubResult2_9 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult2_9;
        else
        {
          succeeded = (ArgX3_10 < ArgY3_11);
          if (succeeded)
            *HeadVar__1_1 = (MR_Integer) 1;
          else
          {
            succeeded = (ArgX3_10 == ArgY3_11);
            if (succeeded)
              *HeadVar__1_1 = (MR_Integer) 0;
            else
              *HeadVar__1_1 = (MR_Integer) 2;
          }
        }
      }
    }
  }
}

MR_bool MR_CALL 
mercury__bitmap____Unify____slice_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_9 == CastY_10);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Box ArgX1_3 = ((MR_Box) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Box ArgY1_4 = ((MR_Box) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Integer ArgX2_5 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Integer ArgY2_6 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Integer ArgX3_7 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
      MR_Integer ArgY3_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Integer CastX_11 = (MR_Integer) (ArgX1_3);
      MR_Integer CastY_12 = (MR_Integer) (ArgY1_4);

      succeeded = (CastX_11 == CastY_12);
      if (succeeded)
        succeeded = MR_TRUE;
      else
      {
{
#define MR_PROC_LABEL mercury__bitmap____Unify____slice_0_0

	MR_BitmapPtr BM1;
	MR_BitmapPtr BM2;
	MR_bool SUCCESS_INDICATOR;

	BM1 = (MR_BitmapPtr)ArgX1_3 ;
	BM2 = (MR_BitmapPtr)ArgY1_4 ;
		{

    SUCCESS_INDICATOR = MR_bitmap_eq(BM1, BM2);


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
      }
      if (succeeded)
      {
        succeeded = (ArgX2_5 == ArgY2_6);
        if (succeeded)
          succeeded = (ArgX3_7 == ArgY3_8);
      }
    }
    return succeeded;
  }
}

void MR_CALL 
mercury__bitmap____Compare____num_bytes_0_0(
  MR_Word * HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Integer HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Integer Cast_HeadVar2_5 = HeadVar__3_3;

    succeeded = (Cast_HeadVar1_4 < Cast_HeadVar2_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      succeeded = (Cast_HeadVar1_4 == Cast_HeadVar2_5);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 0;
      else
        *HeadVar__1_1 = (MR_Integer) 2;
    }
  }
}

MR_bool MR_CALL 
mercury__bitmap____Unify____num_bytes_0_0(
  MR_Integer HeadVar__1_1,
  MR_Integer HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Integer Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = (Cast_HeadVar1_3 == Cast_HeadVar2_4);
    return succeeded;
  }
}

void MR_CALL 
mercury__bitmap____Compare____num_bits_0_0(
  MR_Word * HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Integer HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Integer Cast_HeadVar2_5 = HeadVar__3_3;

    succeeded = (Cast_HeadVar1_4 < Cast_HeadVar2_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      succeeded = (Cast_HeadVar1_4 == Cast_HeadVar2_5);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 0;
      else
        *HeadVar__1_1 = (MR_Integer) 2;
    }
  }
}

MR_bool MR_CALL 
mercury__bitmap____Unify____num_bits_0_0(
  MR_Integer HeadVar__1_1,
  MR_Integer HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Integer Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = (Cast_HeadVar1_3 == Cast_HeadVar2_4);
    return succeeded;
  }
}

void MR_CALL 
mercury__bitmap____Compare____copy_direction_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer Cast_HeadVar1_4 = (MR_Integer) (HeadVar__2_2);
    MR_Integer Cast_HeadVar2_5 = (MR_Integer) (HeadVar__3_3);

    succeeded = (Cast_HeadVar1_4 < Cast_HeadVar2_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      succeeded = (Cast_HeadVar1_4 > Cast_HeadVar2_5);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 2;
      else
        *HeadVar__1_1 = (MR_Integer) 0;
    }
  }
}

MR_bool MR_CALL 
mercury__bitmap____Unify____copy_direction_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
mercury__bitmap____Compare____byte_index_0_0(
  MR_Word * HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Integer HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Integer Cast_HeadVar2_5 = HeadVar__3_3;

    succeeded = (Cast_HeadVar1_4 < Cast_HeadVar2_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      succeeded = (Cast_HeadVar1_4 == Cast_HeadVar2_5);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 0;
      else
        *HeadVar__1_1 = (MR_Integer) 2;
    }
  }
}

MR_bool MR_CALL 
mercury__bitmap____Unify____byte_index_0_0(
  MR_Integer HeadVar__1_1,
  MR_Integer HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Integer Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = (Cast_HeadVar1_3 == Cast_HeadVar2_4);
    return succeeded;
  }
}

void MR_CALL 
mercury__bitmap____Compare____byte_0_0(
  MR_Word * HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Integer HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Integer Cast_HeadVar2_5 = HeadVar__3_3;

    succeeded = (Cast_HeadVar1_4 < Cast_HeadVar2_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      succeeded = (Cast_HeadVar1_4 == Cast_HeadVar2_5);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 0;
      else
        *HeadVar__1_1 = (MR_Integer) 2;
    }
  }
}

MR_bool MR_CALL 
mercury__bitmap____Unify____byte_0_0(
  MR_Integer HeadVar__1_1,
  MR_Integer HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Integer Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = (Cast_HeadVar1_3 == Cast_HeadVar2_4);
    return succeeded;
  }
}

void MR_CALL 
mercury__bitmap____Compare____bitmap_error_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_6 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_7 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_6 == CastY_7);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_String ArgX1_4 = (MR_String) (HeadVar__2_2);
      MR_String ArgY1_5 = (MR_String) (HeadVar__3_3);
      MR_Integer V_7_12;

{
#define MR_PROC_LABEL mercury__bitmap____Compare____bitmap_error_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 = ArgX1_4 ;
	S2 = ArgY1_5 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	 V_7_12  = Res;
}
      succeeded = (V_7_12 < (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 1;
      else
      {
        succeeded = (V_7_12 == (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = (MR_Integer) 0;
        else
          *HeadVar__1_1 = (MR_Integer) 2;
      }
    }
  }
}

MR_bool MR_CALL 
mercury__bitmap____Unify____bitmap_error_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_5 == CastY_6);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_String ArgX1_3 = (MR_String) (HeadVar__1_1);
      MR_String ArgY1_4 = (MR_String) (HeadVar__2_2);

      succeeded = (strcmp(ArgX1_3, ArgY1_4) == 0);
    }
    return succeeded;
  }
}

void MR_CALL 
mercury__bitmap____Compare____bitmap_0_0(
  MR_Word * HeadVar__1_1,
  MR_Box HeadVar__2_2,
  MR_Box HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_4 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_5 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_4 == CastY_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
{
#define MR_PROC_LABEL mercury__bitmap____Compare____bitmap_0_0

	MR_Word Result;
	MR_BitmapPtr BM1;
	MR_BitmapPtr BM2;

	BM1 = (MR_BitmapPtr)HeadVar__2_2 ;
	BM2 = (MR_BitmapPtr)HeadVar__3_3 ;
		{

    MR_Integer  res;
    res = MR_bitmap_cmp(BM1, BM2);
    Result = ((res < 0) ? MR_COMPARE_LESS
        : (res == 0) ? MR_COMPARE_EQUAL
        : MR_COMPARE_GREATER);


		;}
#undef MR_PROC_LABEL
	 *HeadVar__1_1  = Result;
}
    }
  }
}

MR_bool MR_CALL 
mercury__bitmap____Unify____bitmap_0_0(
  MR_Box HeadVar__1_1,
  MR_Box HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_3 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_4 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_3 == CastY_4);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
{
#define MR_PROC_LABEL mercury__bitmap____Unify____bitmap_0_0

	MR_BitmapPtr BM1;
	MR_BitmapPtr BM2;
	MR_bool SUCCESS_INDICATOR;

	BM1 = (MR_BitmapPtr)HeadVar__1_1 ;
	BM2 = (MR_BitmapPtr)HeadVar__2_2 ;
		{

    SUCCESS_INDICATOR = MR_bitmap_eq(BM1, BM2);


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
    }
    return succeeded;
  }
}

void MR_CALL 
mercury__bitmap____Compare____bit_index_in_byte_0_0(
  MR_Word * HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Integer HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Integer Cast_HeadVar2_5 = HeadVar__3_3;

    succeeded = (Cast_HeadVar1_4 < Cast_HeadVar2_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      succeeded = (Cast_HeadVar1_4 == Cast_HeadVar2_5);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 0;
      else
        *HeadVar__1_1 = (MR_Integer) 2;
    }
  }
}

MR_bool MR_CALL 
mercury__bitmap____Unify____bit_index_in_byte_0_0(
  MR_Integer HeadVar__1_1,
  MR_Integer HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Integer Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = (Cast_HeadVar1_3 == Cast_HeadVar2_4);
    return succeeded;
  }
}

void MR_CALL 
mercury__bitmap____Compare____bit_index_0_0(
  MR_Word * HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Integer HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Integer Cast_HeadVar2_5 = HeadVar__3_3;

    succeeded = (Cast_HeadVar1_4 < Cast_HeadVar2_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      succeeded = (Cast_HeadVar1_4 == Cast_HeadVar2_5);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 0;
      else
        *HeadVar__1_1 = (MR_Integer) 2;
    }
  }
}

MR_bool MR_CALL 
mercury__bitmap____Unify____bit_index_0_0(
  MR_Integer HeadVar__1_1,
  MR_Integer HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Integer Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = (Cast_HeadVar1_3 == Cast_HeadVar2_4);
    return succeeded;
  }
}

void MR_CALL 
mercury__bitmap__throw_bitmap_error_1_p_0(
  MR_String Msg_2)
{
  {
    MR_Word Var_3 = (MR_Word) (Msg_2);

    {
      mercury__exception__throw_1_p_0((MR_Word) (&mercury__bitmap__bitmap__type_ctor_info_bitmap_error_0), ((MR_Box) (Var_3)));
      return;
    }
  }
}

MR_Integer MR_CALL 
mercury__bitmap__bitmask_1_f_0(
  MR_Integer I_3)
{
  {
    MR_Integer HeadVar__2_2;
    MR_Integer Var_5;
    MR_Integer Var_6 = (MR_Integer) ((MR_Unsigned) 8 - (MR_Unsigned) 1);
    MR_Integer Var_9 = (I_3 % (MR_Integer) 8);

    Var_5 = (MR_Integer) ((MR_Unsigned) Var_6 - (MR_Unsigned) Var_9);
    HeadVar__2_2 = ((MR_Integer) 1 << Var_5);
    return HeadVar__2_2;
  }
}

MR_Integer MR_CALL 
mercury__bitmap__bit_index_in_byte_1_f_0(
  MR_Integer I_3)
{
  {
    MR_Integer HeadVar__2_2 = (I_3 % (MR_Integer) 8);

    return HeadVar__2_2;
  }
}

static MR_Box MR_CALL 
mercury__bitmap__allocate_bitmap_1_f_0(
  MR_Integer N_1)
{
  {
    MR_Box BM_2;

{
#define MR_PROC_LABEL mercury__bitmap__allocate_bitmap_1_f_0

	MR_Integer N;
	MR_BitmapPtr BM;

	N = N_1 ;
		{

    MR_allocate_bitmap_msg(BM, N, MR_ALLOC_ID);


		;}
#undef MR_PROC_LABEL
	 BM_2  = (MR_Box) BM;
}
    return BM_2;
  }
}

void MR_CALL 
mercury__bitmap__bitmap_compare_3_p_0(
  MR_Word * Result_1,
  MR_Box BM1_2,
  MR_Box BM2_3)
{
  {
{
#define MR_PROC_LABEL mercury__bitmap__bitmap_compare_3_p_0

	MR_Word Result;
	MR_BitmapPtr BM1;
	MR_BitmapPtr BM2;

	BM1 = (MR_BitmapPtr)BM1_2 ;
	BM2 = (MR_BitmapPtr)BM2_3 ;
		{

    MR_Integer  res;
    res = MR_bitmap_cmp(BM1, BM2);
    Result = ((res < 0) ? MR_COMPARE_LESS
        : (res == 0) ? MR_COMPARE_EQUAL
        : MR_COMPARE_GREATER);


		;}
#undef MR_PROC_LABEL
	 *Result_1  = Result;
}
  }
}

MR_bool MR_CALL 
mercury__bitmap__bitmap_equal_2_p_0(
  MR_Box BM1_1,
  MR_Box BM2_2)
{
  {
    MR_bool succeeded;

{
#define MR_PROC_LABEL mercury__bitmap__bitmap_equal_2_p_0

	MR_BitmapPtr BM1;
	MR_BitmapPtr BM2;
	MR_bool SUCCESS_INDICATOR;

	BM1 = (MR_BitmapPtr)BM1_1 ;
	BM2 = (MR_BitmapPtr)BM2_2 ;
		{

    SUCCESS_INDICATOR = MR_bitmap_eq(BM1, BM2);


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
    return succeeded;
  }
}

MR_Word MR_CALL 
mercury__bitmap__bitmap_to_byte_strings_1_f_0(
  MR_Box BM_3)
{
  {
    MR_Word Strs_4;
    MR_Integer NumBits_5;

{
#define MR_PROC_LABEL mercury__bitmap__bitmap_to_byte_strings_1_f_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr)BM_3 ;
		{

    NumBits = BM->num_bits;


		;}
#undef MR_PROC_LABEL
	 NumBits_5  = NumBits;
}
    Strs_4 = mercury__bitmap__bitmap_to_byte_strings_3_f_0(BM_3, NumBits_5, (MR_Word) ((MR_Unsigned) 0U));
    return Strs_4;
  }
}

MR_Box MR_CALL 
mercury__bitmap__zip_3_f_0(
  MR_Word Fn_5,
  MR_Box BMa_6,
  MR_Box BMb_7)
{
  {
    MR_bool succeeded;
    MR_Box HeadVar__4_4;
    MR_Integer Var_8;

{
#define MR_PROC_LABEL mercury__bitmap__zip_3_f_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr)BMb_7 ;
		{

    NumBits = BM->num_bits;


		;}
#undef MR_PROC_LABEL
	 Var_8  = NumBits;
}
    succeeded = (Var_8 == (MR_Integer) 0);
    if (succeeded)
      HeadVar__4_4 = BMb_7;
    else
    {
      MR_Integer Var_9;
      MR_Integer Var_10;
      MR_Integer Var_11;

{
#define MR_PROC_LABEL mercury__bitmap__zip_3_f_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr)BMb_7 ;
		{

    NumBits = BM->num_bits;


		;}
#undef MR_PROC_LABEL
	 Var_11  = NumBits;
}
      Var_10 = (MR_Integer) ((MR_Unsigned) Var_11 - (MR_Unsigned) 1);
      succeeded = (Var_10 < (MR_Integer) 0);
      if (succeeded)
        Var_9 = (MR_Integer) -1;
      else
        Var_9 = (Var_10 / (MR_Integer) 8);
      HeadVar__4_4 = mercury__bitmap__zip2_4_f_0(Var_9, Fn_5, BMa_6, BMb_7);
    }
    return HeadVar__4_4;
  }
}

MR_Box MR_CALL 
mercury__bitmap__zip2_4_f_0(
  MR_Integer I_6,
  MR_Word Fn_7,
  MR_Box BMa_8,
  MR_Box BMb_9)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (I_6 >= (MR_Integer) 0);
    MR_Box BM_10;

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      MR_Integer Xa_11;
      MR_Integer Xb_12;
      MR_Box BMc_13;
      MR_Integer Var_15;
      MR_Integer Var_16;
      MR_Box MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box);
      MR_Box conv1_Var_15;
      MR_Integer next_value_of_I_6;
      MR_Box next_value_of_BMb_9;

{
#define MR_PROC_LABEL mercury__bitmap__zip2_4_f_0

	MR_Integer N;
	MR_BitmapPtr BM;
	MR_Integer Byte;

	N = I_6 ;
	BM = (MR_BitmapPtr)BMa_8 ;
		{

    Byte = (MR_Integer) BM->elements[N];


		;}
#undef MR_PROC_LABEL
	 Xa_11  = Byte;
}
{
#define MR_PROC_LABEL mercury__bitmap__zip2_4_f_0

	MR_Integer N;
	MR_BitmapPtr BM;
	MR_Integer Byte;

	N = I_6 ;
	BM = (MR_BitmapPtr)BMb_9 ;
		{

    Byte = (MR_Integer) BM->elements[N];


		;}
#undef MR_PROC_LABEL
	 Xb_12  = Byte;
}
      func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), Fn_7, (MR_Integer) 1))));
      conv1_Var_15 = func_0(((MR_Box) (Fn_7)), ((MR_Box) (Xa_11)), ((MR_Box) (Xb_12)));
      Var_15 = ((MR_Integer) (conv1_Var_15));
{
#define MR_PROC_LABEL mercury__bitmap__zip2_4_f_0

	MR_Integer N;
	MR_BitmapPtr BM0;
	MR_Integer Byte;
	MR_BitmapPtr BM;

	N = I_6 ;
	BM0 = (MR_BitmapPtr)BMb_9 ;
	Byte = Var_15 ;
		{

    BM = BM0;
    BM->elements[N] = (MR_uint_least8_t) Byte;


		;}
#undef MR_PROC_LABEL
	 BMc_13  = (MR_Box) BM;
}
      Var_16 = (MR_Integer) ((MR_Unsigned) I_6 - (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_I_6 = Var_16;
      next_value_of_BMb_9 = BMc_13;
      I_6 = next_value_of_I_6;
      BMb_9 = next_value_of_BMb_9;
      continue;
    }
    else
      BM_10 = BMb_9;
    return BM_10;
    break;
  }
}

static MR_Box MR_CALL 
mercury__bitmap__f_110_117_109_95_98_105_116_115_32_58_61_2_f_0(
  MR_Box BM0_1,
  MR_Integer NumBits_2)
{
  {
    MR_Box BM_3;

{
#define MR_PROC_LABEL mercury__bitmap__f_110_117_109_95_98_105_116_115_32_58_61_2_f_0

	MR_BitmapPtr BM0;
	MR_Integer NumBits;
	MR_BitmapPtr BM;

	BM0 = (MR_BitmapPtr)BM0_1 ;
	NumBits = NumBits_2 ;
		{

    BM = BM0;
    BM->num_bits = NumBits;


		;}
#undef MR_PROC_LABEL
	 BM_3  = (MR_Box) BM;
}
    return BM_3;
  }
}

MR_Box MR_CALL 
mercury__bitmap__clear_filler_bits_1_f_0(
  MR_Box BM_3)
{
  {
    MR_Box HeadVar__2_2;
    MR_Integer Var_4;
    MR_Integer Var_5;

{
#define MR_PROC_LABEL mercury__bitmap__clear_filler_bits_1_f_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr)BM_3 ;
		{

    NumBits = BM->num_bits;


		;}
#undef MR_PROC_LABEL
	 Var_5  = NumBits;
}
    Var_4 = (MR_Integer) ((MR_Unsigned) Var_5 - (MR_Unsigned) 1);
    HeadVar__2_2 = mercury__bitmap__set_trailing_bits_in_byte_3_f_0(BM_3, Var_4, (MR_Integer) 0);
    return HeadVar__2_2;
  }
}

MR_Integer MR_CALL 
mercury__bitmap__hash_1_f_0(
  MR_Box BM_3)
{
  {
    MR_bool succeeded;
    MR_Integer HashVal_4;
    MR_Integer NumBits_5;
    MR_Integer NumBytes0_6;
    MR_Integer NumBytes_7;
    MR_Integer HashVal0_8;
    MR_Integer Var_10;

{
#define MR_PROC_LABEL mercury__bitmap__hash_1_f_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr)BM_3 ;
		{

    NumBits = BM->num_bits;


		;}
#undef MR_PROC_LABEL
	 NumBits_5  = NumBits;
}
    NumBytes0_6 = (NumBits_5 / (MR_Integer) 8);
    Var_10 = (NumBits_5 % (MR_Integer) 8);
    succeeded = (Var_10 == (MR_Integer) 0);
    if (succeeded)
      NumBytes_7 = NumBytes0_6;
    else
      NumBytes_7 = (MR_Integer) ((MR_Unsigned) NumBytes0_6 + (MR_Unsigned) 1);
    mercury__bitmap__hash_2_5_p_0(BM_3, (MR_Integer) 0, NumBytes_7, (MR_Integer) 0, &HashVal0_8);
    HashVal_4 = (HashVal0_8 ^ NumBits_5);
    return HashVal_4;
  }
}

static void MR_CALL 
mercury__bitmap__hash_2_5_p_0(
  MR_Box BM_6,
  MR_Integer Index_7,
  MR_Integer Length_8,
  MR_Integer STATE_VARIABLE_HashVal_0_10,
  MR_Integer * STATE_VARIABLE_HashVal_11)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (Index_7 < Length_8);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      MR_Integer Var_12;
      MR_Integer STATE_VARIABLE_HashVal_13_13;
      MR_Integer Var_14;
      MR_Integer H1_24;
      MR_Integer Var_25;
      MR_Integer next_value_of_Index_7;
      MR_Integer next_value_of_STATE_VARIABLE_HashVal_0_10;

{
#define MR_PROC_LABEL mercury__bitmap__hash_2_5_p_0

	MR_Integer N;
	MR_BitmapPtr BM;
	MR_Integer Byte;

	N = Index_7 ;
	BM = (MR_BitmapPtr)BM_6 ;
		{

    Byte = (MR_Integer) BM->elements[N];


		;}
#undef MR_PROC_LABEL
	 Var_12  = Byte;
}
      Var_25 = mercury__int__f_60_60_2_f_0(STATE_VARIABLE_HashVal_0_10, (MR_Integer) 5);
      H1_24 = (STATE_VARIABLE_HashVal_0_10 ^ Var_25);
      STATE_VARIABLE_HashVal_13_13 = (H1_24 ^ Var_12);
      Var_14 = (MR_Integer) ((MR_Unsigned) Index_7 + (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_Index_7 = Var_14;
      next_value_of_STATE_VARIABLE_HashVal_0_10 = STATE_VARIABLE_HashVal_13_13;
      Index_7 = next_value_of_Index_7;
      STATE_VARIABLE_HashVal_0_10 = next_value_of_STATE_VARIABLE_HashVal_0_10;
      continue;
    }
    else
      *STATE_VARIABLE_HashVal_11 = STATE_VARIABLE_HashVal_0_10;
    break;
  }
}

MR_String MR_CALL 
mercury__bitmap__to_byte_string_1_f_0(
  MR_Box BM_3)
{
  {
    MR_String HeadVar__2_2;
    MR_Word Var_5;
    MR_Integer NumBits_8;

{
#define MR_PROC_LABEL mercury__bitmap__to_byte_string_1_f_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr)BM_3 ;
		{

    NumBits = BM->num_bits;


		;}
#undef MR_PROC_LABEL
	 NumBits_8  = NumBits;
}
    Var_5 = mercury__bitmap__bitmap_to_byte_strings_3_f_0(BM_3, NumBits_8, (MR_Word) ((MR_Unsigned) 0U));
    HeadVar__2_2 = mercury__string__join_list_2_f_0((MR_String) ".", Var_5);
    return HeadVar__2_2;
  }
}

MR_Word MR_CALL 
mercury__bitmap__bitmap_to_byte_strings_3_f_0(
  MR_Box BM_5,
  MR_Integer NumBits_6,
  MR_Word STATE_VARIABLE_Strs_0_13)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (NumBits_6 <= (MR_Integer) 0);
    MR_Word STATE_VARIABLE_Strs_14;

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
      STATE_VARIABLE_Strs_14 = STATE_VARIABLE_Strs_0_13;
    else
    {
      MR_Integer ThisByte0_8;
      MR_Integer LastBitIndex_9;
      MR_Integer BitsThisByte_10;
      MR_Integer ThisByte_11;
      MR_String ThisByteStr_12;
      MR_Integer Var_16;
      MR_Integer Var_17 = (MR_Integer) ((MR_Unsigned) NumBits_6 - (MR_Unsigned) 1);
      MR_Integer Var_19;
      MR_String Var_26;
      MR_Word STATE_VARIABLE_Strs_29_29;
      MR_Integer Var_31;
      MR_Integer Var_22;
      MR_Integer next_value_of_NumBits_6;
      MR_Word next_value_of_STATE_VARIABLE_Strs_0_13;

      succeeded = (Var_17 < (MR_Integer) 0);
      if (succeeded)
        Var_16 = (MR_Integer) -1;
      else
        Var_16 = (Var_17 / (MR_Integer) 8);
{
#define MR_PROC_LABEL mercury__bitmap__bitmap_to_byte_strings_3_f_0

	MR_Integer N;
	MR_BitmapPtr BM;
	MR_Integer Byte;

	N = Var_16 ;
	BM = (MR_BitmapPtr)BM_5 ;
		{

    Byte = (MR_Integer) BM->elements[N];


		;}
#undef MR_PROC_LABEL
	 ThisByte0_8  = Byte;
}
      Var_19 = (MR_Integer) ((MR_Unsigned) NumBits_6 - (MR_Unsigned) 1);
      LastBitIndex_9 = (Var_19 % (MR_Integer) 8);
      Var_22 = (MR_Integer) ((MR_Unsigned) 8 - (MR_Unsigned) LastBitIndex_9);
      succeeded = (Var_22 == (MR_Integer) 1);
      if (succeeded)
      {
        BitsThisByte_10 = (MR_Integer) 8;
        ThisByte_11 = ThisByte0_8;
      }
      else
      {
        MR_Integer Var_24;

        BitsThisByte_10 = (MR_Integer) ((MR_Unsigned) LastBitIndex_9 + (MR_Unsigned) 1);
        Var_24 = (MR_Integer) ((MR_Unsigned) 8 - (MR_Unsigned) BitsThisByte_10);
        ThisByte_11 = (ThisByte0_8 >> Var_24);
      }
      mercury__string__int_to_base_string_3_p_0(ThisByte_11, (MR_Integer) 2, &Var_26);
      mercury__string__pad_left_4_p_0(Var_26, (MR_Char) 48, BitsThisByte_10, &ThisByteStr_12);
      {
        STATE_VARIABLE_Strs_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Strs_29_29, 0) = ((MR_Box) (ThisByteStr_12));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Strs_29_29, 1) = ((MR_Box) (STATE_VARIABLE_Strs_0_13));
      }
      Var_31 = (MR_Integer) ((MR_Unsigned) NumBits_6 - (MR_Unsigned) BitsThisByte_10);
      // direct tailcall eliminated
      ;
      next_value_of_NumBits_6 = Var_31;
      next_value_of_STATE_VARIABLE_Strs_0_13 = STATE_VARIABLE_Strs_29_29;
      NumBits_6 = next_value_of_NumBits_6;
      STATE_VARIABLE_Strs_0_13 = next_value_of_STATE_VARIABLE_Strs_0_13;
      continue;
    }
    return STATE_VARIABLE_Strs_14;
    break;
  }
}

MR_Box MR_CALL 
mercury__bitmap__det_from_string_1_f_0(
  MR_String Str_3)
{
  {
    MR_bool succeeded;
    MR_Box HeadVar__2_2;
    MR_Box BM_4;

    succeeded = mercury__bitmap__from_string_1_f_0(Str_3, &BM_4);
    if (succeeded)
      HeadVar__2_2 = BM_4;
    else
      mercury__require__unexpected_2_p_0((MR_String) "function \140bitmap.det_from_string\'/1", (MR_String) "bitmap.from_string failed");
    return HeadVar__2_2;
  }
}

MR_bool MR_CALL 
mercury__bitmap__from_string_1_f_0(
  MR_String Str_3,
  MR_Box * BM_4)
{
  {
    MR_bool succeeded;
    MR_Integer Start_5;
    MR_Char Char_6;
    MR_Integer End_7;
    MR_Integer Colon_8;
    MR_String SizeStr_9;
    MR_Integer Size_10;
    MR_Box BM0_11;
    MR_Integer AfterColon_12;
    MR_Integer Var_16;
    MR_Char Var_17;
    MR_String Var_18;
    MR_Integer Var_19;
    MR_Integer Var_20;
    MR_Char Var_21;
    MR_Char Var_22;
    MR_Integer V_5_42;
    MR_Integer V_9_27;
    MR_Integer V_9_35;
    MR_Char Var_13;
    MR_Integer V_9_47;

{
#define MR_PROC_LABEL mercury__bitmap__from_string_1_f_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_Integer ReplacedCodeUnit;
	MR_bool SUCCESS_INDICATOR;

	Str = Str_3 ;
	Index = (MR_Integer) 0 ;
		{

    Ch = Str[Index];
    ReplacedCodeUnit = -1;
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        if (Ch < 0) {
            Ch = 0xfffd;
            ReplacedCodeUnit = Str[Index];
            NextIndex = Index + 1;
        }
        SUCCESS_INDICATOR = MR_TRUE;
    }


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 Start_5  = NextIndex;
	 Var_21  = Ch;
	 V_9_27  = ReplacedCodeUnit;
	}
succeeded  = SUCCESS_INDICATOR;
}
    if (succeeded)
    {
      succeeded = ((MR_Char) 60 == Var_21);
      if (succeeded)
      {
{
#define MR_PROC_LABEL mercury__bitmap__from_string_1_f_0

	MR_String Str;
	MR_Integer Index;
	MR_Char Ch;

	Str = Str_3 ;
	Index = Start_5 ;
		{

    Ch = Str[Index];
    if (!MR_is_ascii(Ch)) {
        int width;
        Ch = MR_utf8_get_mb(Str, Index, &width);
        if (Ch < 0) {
            Ch = 0xFFFD;
        }
    }


		;}
#undef MR_PROC_LABEL
	 Char_6  = Ch;
}
        succeeded = mercury__char__is_decimal_digit_1_p_0(Char_6);
        if (succeeded)
        {
{
#define MR_PROC_LABEL mercury__bitmap__from_string_1_f_0

	MR_String Str;
	MR_Integer Length;

	Str = Str_3 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 Var_16  = Length;
}
          Var_17 = (MR_Char) 62;
{
#define MR_PROC_LABEL mercury__bitmap__from_string_1_f_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer PrevIndex;
	MR_Char Ch;
	MR_Integer ReplacedCodeUnit;
	MR_bool SUCCESS_INDICATOR;

	Str = Str_3 ;
	Index = Var_16 ;
		{

    ReplacedCodeUnit = -1;
    if (Index <= 0) {
        PrevIndex = Index;
        Ch = 0;
        SUCCESS_INDICATOR = MR_FALSE;
    } else {
        PrevIndex = Index - 1;
        Ch = Str[PrevIndex];
        if (! MR_is_ascii(Ch)) {
            Ch = MR_utf8_prev_get(Str, &PrevIndex);
            // XXX MR_utf8_prev_get currently just scans backwards to find a
            // lead byte, so we need a separate check to ensure no bytes are
            // unaccounted for.
            if (Ch < 0 || PrevIndex + MR_utf8_width(Ch) != Index) {
                Ch = 0xfffd;
                ReplacedCodeUnit = Str[Index - 1];
                PrevIndex = Index - 1;
            }
        }
        SUCCESS_INDICATOR = MR_TRUE;
    }


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 End_7  = PrevIndex;
	 Var_22  = Ch;
	 V_9_35  = ReplacedCodeUnit;
	}
succeeded  = SUCCESS_INDICATOR;
}
          if (succeeded)
          {
            succeeded = (Var_17 == Var_22);
            if (succeeded)
            {
              Var_18 = (MR_String) ":";
              succeeded = mercury__string__sub_string_search_start_4_p_0(Str_3, Var_18, Start_5, &Colon_8);
              if (succeeded)
              {
{
#define MR_PROC_LABEL mercury__bitmap__from_string_1_f_0

	MR_String Str;
	MR_Integer Start;
	MR_Integer End;
	MR_String SubString;

	Str = Str_3 ;
	Start = Start_5 ;
	End = Colon_8 ;
		{
{
    MR_Integer Count;

    Count = End - Start;
    MR_allocate_aligned_string_msg(SubString, Count, MR_ALLOC_ID);
    MR_memcpy(SubString, Str + Start, Count);
    SubString[Count] = '\0';
}

		;}
#undef MR_PROC_LABEL
	 SizeStr_9  = SubString;
}
                V_5_42 = (MR_Integer) 10;
                succeeded = mercury__string__base_string_to_int_3_p_0(V_5_42, SizeStr_9, &Size_10);
                if (succeeded)
                {
                  Var_19 = (MR_Integer) 0;
                  succeeded = (Size_10 >= Var_19);
                  if (succeeded)
                  {
{
#define MR_PROC_LABEL mercury__bitmap__from_string_1_f_0

	MR_Integer N;
	MR_BitmapPtr BM;

	N = Size_10 ;
		{

    MR_allocate_bitmap_msg(BM, N, MR_ALLOC_ID);


		;}
#undef MR_PROC_LABEL
	 BM0_11  = (MR_Box) BM;
}
{
#define MR_PROC_LABEL mercury__bitmap__from_string_1_f_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_Integer ReplacedCodeUnit;
	MR_bool SUCCESS_INDICATOR;

	Str = Str_3 ;
	Index = Colon_8 ;
		{

    Ch = Str[Index];
    ReplacedCodeUnit = -1;
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        if (Ch < 0) {
            Ch = 0xfffd;
            ReplacedCodeUnit = Str[Index];
            NextIndex = Index + 1;
        }
        SUCCESS_INDICATOR = MR_TRUE;
    }


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 AfterColon_12  = NextIndex;
	 Var_13  = Ch;
	 V_9_47  = ReplacedCodeUnit;
	}
succeeded  = SUCCESS_INDICATOR;
}
                    if (succeeded)
                    {
                      Var_20 = (MR_Integer) 0;
                      succeeded = mercury__bitmap__hex_chars_to_bitmap_6_p_0(Str_3, AfterColon_12, End_7, Var_20, BM0_11, BM_4);
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
mercury__bitmap__hex_chars_to_bitmap_6_p_0(
  MR_String Str_7,
  MR_Integer Index_8,
  MR_Integer End_9,
  MR_Integer ByteIndex_10,
  MR_Box STATE_VARIABLE_BM_0_15,
  MR_Box * STATE_VARIABLE_BM_16)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (Index_8 == End_9);

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      *STATE_VARIABLE_BM_16 = STATE_VARIABLE_BM_0_15;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Integer Var_17 = (MR_Integer) ((MR_Unsigned) End_9 - (MR_Unsigned) Index_8);

      succeeded = (Var_17 == (MR_Integer) 1);
      if (succeeded)
        succeeded = MR_FALSE;
      else
      {
        MR_Integer HighNibble_12;
        MR_Integer LowNibble_13;
        MR_Integer Byte_14;
        MR_Char Var_18;
        MR_Char Var_19;
        MR_Integer Var_20;
        MR_Integer Var_21;
        MR_Integer Var_22;
        MR_Integer Var_23;
        MR_Box STATE_VARIABLE_BM_24_24;
        MR_Integer Var_25;
        MR_Integer Var_26;
        MR_Integer Var_28;
        MR_Integer Var_29;
        MR_Integer next_value_of_Index_8;
        MR_Integer next_value_of_ByteIndex_10;
        MR_Box next_value_of_STATE_VARIABLE_BM_0_15;

{
#define MR_PROC_LABEL mercury__bitmap__hex_chars_to_bitmap_6_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Char Ch;

	Str = Str_7 ;
	Index = Index_8 ;
		{

    Ch = Str[Index];
    if (!MR_is_ascii(Ch)) {
        int width;
        Ch = MR_utf8_get_mb(Str, Index, &width);
        if (Ch < 0) {
            Ch = 0xFFFD;
        }
    }


		;}
#undef MR_PROC_LABEL
	 Var_18  = Ch;
}
        succeeded = mercury__char__hex_digit_to_int_2_p_0(Var_18, &HighNibble_12);
        if (succeeded)
        {
          Var_21 = (MR_Integer) 1;
          Var_20 = (MR_Integer) ((MR_Unsigned) Index_8 + (MR_Unsigned) Var_21);
{
#define MR_PROC_LABEL mercury__bitmap__hex_chars_to_bitmap_6_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Char Ch;

	Str = Str_7 ;
	Index = Var_20 ;
		{

    Ch = Str[Index];
    if (!MR_is_ascii(Ch)) {
        int width;
        Ch = MR_utf8_get_mb(Str, Index, &width);
        if (Ch < 0) {
            Ch = 0xFFFD;
        }
    }


		;}
#undef MR_PROC_LABEL
	 Var_19  = Ch;
}
          succeeded = mercury__char__hex_digit_to_int_2_p_0(Var_19, &LowNibble_13);
          if (succeeded)
          {
            Var_23 = (MR_Integer) 4;
            Var_22 = (HighNibble_12 << Var_23);
            Byte_14 = (Var_22 | LowNibble_13);
{
#define MR_PROC_LABEL mercury__bitmap__hex_chars_to_bitmap_6_p_0

	MR_Integer N;
	MR_BitmapPtr BM0;
	MR_Integer Byte;
	MR_BitmapPtr BM;

	N = ByteIndex_10 ;
	BM0 = (MR_BitmapPtr)STATE_VARIABLE_BM_0_15 ;
	Byte = Byte_14 ;
		{

    BM = BM0;
    BM->elements[N] = (MR_uint_least8_t) Byte;


		;}
#undef MR_PROC_LABEL
	 STATE_VARIABLE_BM_24_24  = (MR_Box) BM;
}
            Var_28 = (MR_Integer) 2;
            Var_25 = (MR_Integer) ((MR_Unsigned) Index_8 + (MR_Unsigned) Var_28);
            Var_29 = (MR_Integer) 1;
            Var_26 = (MR_Integer) ((MR_Unsigned) ByteIndex_10 + (MR_Unsigned) Var_29);
            // direct tailcall eliminated
            ;
            next_value_of_Index_8 = Var_25;
            next_value_of_ByteIndex_10 = Var_26;
            next_value_of_STATE_VARIABLE_BM_0_15 = STATE_VARIABLE_BM_24_24;
            Index_8 = next_value_of_Index_8;
            ByteIndex_10 = next_value_of_ByteIndex_10;
            STATE_VARIABLE_BM_0_15 = next_value_of_STATE_VARIABLE_BM_0_15;
            continue;
          }
        }
      }
    }
    return succeeded;
    break;
  }
}

MR_String MR_CALL 
mercury__bitmap__to_string_1_f_0(
  MR_Box BM_3)
{
  {
    MR_bool succeeded;
    MR_String Str_4;
    MR_Integer NumBits_5;
    MR_Word BitChars_6;
    MR_Word LenChars_7;
    MR_Word Chars_8;
    MR_Integer Var_9;
    MR_Integer Var_11;
    MR_String Var_15;
    MR_Word Var_16;
    MR_Word Var_18;

{
#define MR_PROC_LABEL mercury__bitmap__to_string_1_f_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr)BM_3 ;
		{

    NumBits = BM->num_bits;


		;}
#undef MR_PROC_LABEL
	 NumBits_5  = NumBits;
}
    Var_11 = (MR_Integer) ((MR_Unsigned) NumBits_5 - (MR_Unsigned) 1);
    succeeded = (Var_11 < (MR_Integer) 0);
    if (succeeded)
      Var_9 = (MR_Integer) -1;
    else
      Var_9 = (Var_11 / (MR_Integer) 8);
    mercury__bitmap__to_string_chars_4_p_0(Var_9, BM_3, (MR_Word) (MR_mkword(MR_mktag(1), &mercury__bitmap_scalar_common_5[0])), &BitChars_6);
    mercury__string__int_to_base_string_3_p_0(NumBits_5, (MR_Integer) 10, &Var_15);
    mercury__string__to_char_list_2_p_0(Var_15, &LenChars_7);
    {
      Var_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_16, 0) = ((MR_Box) (MR_Word) ((MR_Char) 60));
      MR_hl_field(MR_mktag(1), Var_16, 1) = ((MR_Box) (LenChars_7));
    }
    {
      Var_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_18, 0) = ((MR_Box) (MR_Word) ((MR_Char) 58));
      MR_hl_field(MR_mktag(1), Var_18, 1) = ((MR_Box) (BitChars_6));
    }
    mercury__list__append_3_p_1((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), Var_16, Var_18, &Chars_8);
    mercury__string__from_char_list_2_p_0(Chars_8, &Str_4);
    return Str_4;
  }
}

static void MR_CALL 
mercury__bitmap__to_string_chars_4_p_0(
  MR_Integer Index_5,
  MR_Box BM_6,
  MR_Word STATE_VARIABLE_Chars_0_12,
  MR_Word * STATE_VARIABLE_Chars_13)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (Index_5 < (MR_Integer) 0);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
      *STATE_VARIABLE_Chars_13 = STATE_VARIABLE_Chars_0_12;
    else
    {
      MR_Integer Byte_8;
      MR_Integer Mask_9;
      MR_Integer BitMask_34;
      MR_Integer Var_36;
      MR_Integer Var_38;
      MR_Char HighChar_10;
      MR_Char LowChar_11;
      MR_Integer Var_16;
      MR_Integer Var_17;
      MR_Integer Var_19;

{
#define MR_PROC_LABEL mercury__bitmap__to_string_chars_4_p_0

	MR_Integer N;
	MR_BitmapPtr BM;
	MR_Integer Byte;

	N = Index_5 ;
	BM = (MR_BitmapPtr)BM_6 ;
		{

    Byte = (MR_Integer) BM->elements[N];


		;}
#undef MR_PROC_LABEL
	 Byte_8  = Byte;
}
      Var_36 = (MR_Integer) ((MR_Unsigned) 4 - (MR_Unsigned) 1);
      BitMask_34 = ((MR_Integer) 1 << Var_36);
      Var_38 = (MR_Integer) ((MR_Unsigned) BitMask_34 - (MR_Unsigned) 1);
      Mask_9 = (BitMask_34 | Var_38);
      Var_17 = (Byte_8 >> 4);
      Var_16 = (Var_17 & Mask_9);
      succeeded = mercury__char__int_to_hex_digit_2_p_0(Var_16, &HighChar_10);
      if (succeeded)
      {
        Var_19 = (Byte_8 & Mask_9);
        succeeded = mercury__char__int_to_hex_digit_2_p_0(Var_19, &LowChar_11);
      }
      if (succeeded)
      {
        MR_Word STATE_VARIABLE_Chars_20_20;
        MR_Word Var_21;
        MR_Integer Var_22;
        MR_Integer next_value_of_Index_5;
        MR_Word next_value_of_STATE_VARIABLE_Chars_0_12;

        {
          Var_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_21, 0) = ((MR_Box) (MR_Word) (LowChar_11));
          MR_hl_field(MR_mktag(1), Var_21, 1) = ((MR_Box) (STATE_VARIABLE_Chars_0_12));
        }
        {
          STATE_VARIABLE_Chars_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_Chars_20_20, 0) = ((MR_Box) (MR_Word) (HighChar_10));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_Chars_20_20, 1) = ((MR_Box) (Var_21));
        }
        Var_22 = (MR_Integer) ((MR_Unsigned) Index_5 - (MR_Unsigned) 1);
        // direct tailcall eliminated
        ;
        next_value_of_Index_5 = Var_22;
        next_value_of_STATE_VARIABLE_Chars_0_12 = STATE_VARIABLE_Chars_20_20;
        Index_5 = next_value_of_Index_5;
        STATE_VARIABLE_Chars_0_12 = next_value_of_STATE_VARIABLE_Chars_0_12;
        continue;
      }
      else
        {
          mercury__exception__throw_1_p_0((MR_Word) (&mercury__exception__exception__type_ctor_info_software_error_0), ((MR_Box) (((MR_Box) ((MR_String) "bitmap.to_string: internal error")))));
          return;
        }
    }
    break;
  }
}

MR_Box MR_CALL 
mercury__bitmap__copy_bytes_in_bitmap_4_f_0(
  MR_Box SrcBM_6,
  MR_Integer SrcStartByteIndex_7,
  MR_Integer DestStartByteIndex_8,
  MR_Integer NumBytes_9)
{
  {
    MR_Box HeadVar__5_5;

    HeadVar__5_5 = mercury__bitmap__copy_bytes_6_f_0((MR_Integer) 1, SrcBM_6, SrcStartByteIndex_7, SrcBM_6, DestStartByteIndex_8, NumBytes_9);
    return HeadVar__5_5;
  }
}

MR_Box MR_CALL 
mercury__bitmap__copy_bytes_5_f_0(
  MR_Box SrcBM_7,
  MR_Integer SrcStartByteIndex_8,
  MR_Box DestBM_9,
  MR_Integer DestStartByteIndex_10,
  MR_Integer NumBytes_11)
{
  {
    MR_Box HeadVar__6_6;

    HeadVar__6_6 = mercury__bitmap__copy_bytes_6_f_0((MR_Integer) 0, SrcBM_7, SrcStartByteIndex_8, DestBM_9, DestStartByteIndex_10, NumBytes_11);
    return HeadVar__6_6;
  }
}

MR_Box MR_CALL 
mercury__bitmap__copy_bytes_6_f_0(
  MR_Integer SameBM_8,
  MR_Box SrcBM_9,
  MR_Integer SrcStartByte_10,
  MR_Box STATE_VARIABLE_DestBM_0_14,
  MR_Integer DestStartByte_12,
  MR_Integer NumBytes_13)
{
  {
    MR_bool succeeded = (NumBytes_13 == (MR_Integer) 0);
    MR_Box STATE_VARIABLE_DestBM_15;

    if (succeeded)
      STATE_VARIABLE_DestBM_15 = STATE_VARIABLE_DestBM_0_14;
    else
    {
      MR_Integer Var_17;
      MR_Integer Var_18;
      MR_Integer Var_19;
      MR_Integer Var_20;
      MR_Integer Var_21;
      MR_Integer Var_22;
      MR_Integer Var_23;
      MR_Integer Var_24;

      succeeded = (NumBytes_13 > (MR_Integer) 0);
      if (succeeded)
      {
        Var_17 = (MR_Integer) 0;
        succeeded = (SrcStartByte_10 >= Var_17);
        if (succeeded)
        {
          Var_19 = (MR_Integer) ((MR_Unsigned) SrcStartByte_10 + (MR_Unsigned) NumBytes_13);
          Var_20 = (MR_Integer) 1;
          Var_18 = (MR_Integer) ((MR_Unsigned) Var_19 - (MR_Unsigned) Var_20);
          succeeded = mercury__bitmap__byte_in_range_2_p_0(SrcBM_9, Var_18);
          if (succeeded)
          {
            Var_21 = (MR_Integer) 0;
            succeeded = (DestStartByte_12 >= Var_21);
            if (succeeded)
            {
              Var_23 = (MR_Integer) ((MR_Unsigned) DestStartByte_12 + (MR_Unsigned) NumBytes_13);
              Var_24 = (MR_Integer) 1;
              Var_22 = (MR_Integer) ((MR_Unsigned) Var_23 - (MR_Unsigned) Var_24);
              succeeded = mercury__bitmap__byte_in_range_2_p_0(STATE_VARIABLE_DestBM_0_14, Var_22);
            }
          }
        }
      }
      if (succeeded)
      {
{
#define MR_PROC_LABEL mercury__bitmap__copy_bytes_6_f_0

	MR_Integer SameBM;
	MR_BitmapPtr SrcBM;
	MR_Integer SrcFirstByteIndex;
	MR_BitmapPtr DestBM0;
	MR_Integer DestFirstByteIndex;
	MR_Integer NumBytes;
	MR_BitmapPtr DestBM;

	SameBM = SameBM_8 ;
	SrcBM = (MR_BitmapPtr)SrcBM_9 ;
	SrcFirstByteIndex = SrcStartByte_10 ;
	DestBM0 = (MR_BitmapPtr)STATE_VARIABLE_DestBM_0_14 ;
	DestFirstByteIndex = DestStartByte_12 ;
	NumBytes = NumBytes_13 ;
		{

    DestBM = DestBM0;
    if (SameBM) {
        memmove(DestBM->elements + DestFirstByteIndex,
            SrcBM->elements + SrcFirstByteIndex, NumBytes);
    } else {
        MR_memcpy(DestBM->elements + DestFirstByteIndex,
            SrcBM->elements + SrcFirstByteIndex, NumBytes);
    }


		;}
#undef MR_PROC_LABEL
	 STATE_VARIABLE_DestBM_15  = (MR_Box) DestBM;
}
      }
      else
        mercury__exception__throw_1_p_0((MR_Word) (&mercury__bitmap__bitmap__type_ctor_info_bitmap_error_0), ((MR_Box) (((MR_Box) ((MR_String) "bitmap.copy_bytes: out of range")))));
    }
    return STATE_VARIABLE_DestBM_15;
  }
}

MR_Box MR_CALL 
mercury__bitmap__copy_bits_in_bitmap_4_f_0(
  MR_Box SrcBM_6,
  MR_Integer SrcStartBit_7,
  MR_Integer DestStartBit_8,
  MR_Integer NumBits_9)
{
  {
    MR_Box HeadVar__5_5;

    HeadVar__5_5 = mercury__bitmap__copy_bits_6_f_0((MR_Integer) 1, SrcBM_6, SrcStartBit_7, SrcBM_6, DestStartBit_8, NumBits_9);
    return HeadVar__5_5;
  }
}

MR_Box MR_CALL 
mercury__bitmap__copy_bits_5_f_0(
  MR_Box SrcBM_7,
  MR_Integer SrcStartBit_8,
  MR_Box DestBM_9,
  MR_Integer DestStartBit_10,
  MR_Integer NumBits_11)
{
  {
    MR_Box HeadVar__6_6;

    HeadVar__6_6 = mercury__bitmap__copy_bits_6_f_0((MR_Integer) 0, SrcBM_7, SrcStartBit_8, DestBM_9, DestStartBit_10, NumBits_11);
    return HeadVar__6_6;
  }
}

MR_Box MR_CALL 
mercury__bitmap__append_list_1_f_0(
  MR_Word BMs_3)
{
  {
    MR_Box STATE_VARIABLE_BM_8;
    MR_Integer BMSize_5;
    MR_Box STATE_VARIABLE_BM_15_15;
    MR_Integer Var_7;

    mercury__bitmap__foldl__ho12_4_p_in__list_0(BMs_3, (MR_Integer) 0, &BMSize_5);
    STATE_VARIABLE_BM_15_15 = mercury__bitmap__init_2_f_0(BMSize_5, (MR_Integer) 0);
    mercury__bitmap__foldl2__ho2_6_p_in__list_0(BMs_3, (MR_Integer) 0, &Var_7, STATE_VARIABLE_BM_15_15, &STATE_VARIABLE_BM_8);
    return STATE_VARIABLE_BM_8;
  }
}

static void MR_CALL 
mercury__bitmap__foldl__ho12_4_p_in__list_0(
  MR_Word HeadVar__2_2,
  MR_Integer HeadVar__3_3,
  MR_Integer * HeadVar__4_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__4_4 = HeadVar__3_3;
    else
    {
      MR_Box V_10_9 = ((MR_Box) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word V_11_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Integer V_15_13;
      MR_Integer Var_53;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Integer next_value_of_HeadVar__3_3;

{
#define MR_PROC_LABEL mercury__bitmap__foldl__ho12_4_p_in__list_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr)V_10_9 ;
		{

    NumBits = BM->num_bits;


		;}
#undef MR_PROC_LABEL
	 Var_53  = NumBits;
}
      V_15_13 = (MR_Integer) ((MR_Unsigned) HeadVar__3_3 + (MR_Unsigned) Var_53);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = V_11_10;
      next_value_of_HeadVar__3_3 = V_15_13;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      continue;
    }
    break;
  }
}

static void MR_CALL 
mercury__bitmap__foldl2__ho2_6_p_in__list_0(
  MR_Word HeadVar__2_2,
  MR_Integer HeadVar__3_3,
  MR_Integer * HeadVar__4_4,
  MR_Box HeadVar__5_5,
  MR_Box * HeadVar__6_6)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__6_6 = HeadVar__5_5;
      *HeadVar__4_4 = HeadVar__3_3;
    }
    else
    {
      MR_Box V_15_13 = ((MR_Box) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word V_16_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Integer V_23_19;
      MR_Box V_24_20;
      MR_Integer Var_34;
      MR_Integer Var_36;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Integer next_value_of_HeadVar__3_3;
      MR_Box next_value_of_HeadVar__5_5;

{
#define MR_PROC_LABEL mercury__bitmap__foldl2__ho2_6_p_in__list_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr)V_15_13 ;
		{

    NumBits = BM->num_bits;


		;}
#undef MR_PROC_LABEL
	 Var_34  = NumBits;
}
      V_24_20 = mercury__bitmap__unsafe_copy_bits_6_f_0((MR_Integer) 0, V_15_13, (MR_Integer) 0, HeadVar__5_5, HeadVar__3_3, Var_34);
{
#define MR_PROC_LABEL mercury__bitmap__foldl2__ho2_6_p_in__list_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr)V_15_13 ;
		{

    NumBits = BM->num_bits;


		;}
#undef MR_PROC_LABEL
	 Var_36  = NumBits;
}
      V_23_19 = (MR_Integer) ((MR_Unsigned) HeadVar__3_3 + (MR_Unsigned) Var_36);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = V_16_14;
      next_value_of_HeadVar__3_3 = V_23_19;
      next_value_of_HeadVar__5_5 = V_24_20;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      HeadVar__5_5 = next_value_of_HeadVar__5_5;
      continue;
    }
    break;
  }
}

MR_Box MR_CALL 
mercury__bitmap__xor_2_f_0(
  MR_Box BMa_4,
  MR_Box BMb_5)
{
  {
    MR_bool succeeded;
    MR_Box BMc_6;
    MR_Integer Var_9;
    MR_Integer Var_17;

{
#define MR_PROC_LABEL mercury__bitmap__xor_2_f_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr)BMa_4 ;
		{

    NumBits = BM->num_bits;


		;}
#undef MR_PROC_LABEL
	 Var_9  = NumBits;
}
{
#define MR_PROC_LABEL mercury__bitmap__xor_2_f_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr)BMb_5 ;
		{

    NumBits = BM->num_bits;


		;}
#undef MR_PROC_LABEL
	 Var_17  = NumBits;
}
    succeeded = (Var_9 == Var_17);
    if (succeeded)
    {
      MR_Integer Var_28;

{
#define MR_PROC_LABEL mercury__bitmap__xor_2_f_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr)BMb_5 ;
		{

    NumBits = BM->num_bits;


		;}
#undef MR_PROC_LABEL
	 Var_28  = NumBits;
}
      succeeded = (Var_28 == (MR_Integer) 0);
      if (succeeded)
        BMc_6 = BMb_5;
      else
      {
        MR_Integer Var_29;
        MR_Integer Var_30;
        MR_Integer Var_31;

{
#define MR_PROC_LABEL mercury__bitmap__xor_2_f_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr)BMb_5 ;
		{

    NumBits = BM->num_bits;


		;}
#undef MR_PROC_LABEL
	 Var_31  = NumBits;
}
        Var_30 = (MR_Integer) ((MR_Unsigned) Var_31 - (MR_Unsigned) 1);
        succeeded = (Var_30 < (MR_Integer) 0);
        if (succeeded)
          Var_29 = (MR_Integer) -1;
        else
          Var_29 = (Var_30 / (MR_Integer) 8);
        BMc_6 = mercury__bitmap__zip2__ho11_4_f_0(Var_29, BMa_4, BMb_5);
      }
    }
    else
      mercury__exception__throw_1_p_0((MR_Word) (&mercury__bitmap__bitmap__type_ctor_info_bitmap_error_0), ((MR_Box) (((MR_Box) ((MR_String) "bitmap.xor: bitmaps not the same size")))));
    return BMc_6;
  }
}

static MR_Box MR_CALL 
mercury__bitmap__zip2__ho11_4_f_0(
  MR_Integer I_6,
  MR_Box BMa_8,
  MR_Box BMb_9)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (I_6 >= (MR_Integer) 0);
    MR_Box BM_10;

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      MR_Integer Xa_11;
      MR_Integer Xb_12;
      MR_Box BMc_13;
      MR_Integer Var_15;
      MR_Integer Var_16;
      MR_Integer next_value_of_I_6;
      MR_Box next_value_of_BMb_9;

{
#define MR_PROC_LABEL mercury__bitmap__zip2__ho11_4_f_0

	MR_Integer N;
	MR_BitmapPtr BM;
	MR_Integer Byte;

	N = I_6 ;
	BM = (MR_BitmapPtr)BMa_8 ;
		{

    Byte = (MR_Integer) BM->elements[N];


		;}
#undef MR_PROC_LABEL
	 Xa_11  = Byte;
}
{
#define MR_PROC_LABEL mercury__bitmap__zip2__ho11_4_f_0

	MR_Integer N;
	MR_BitmapPtr BM;
	MR_Integer Byte;

	N = I_6 ;
	BM = (MR_BitmapPtr)BMb_9 ;
		{

    Byte = (MR_Integer) BM->elements[N];


		;}
#undef MR_PROC_LABEL
	 Xb_12  = Byte;
}
      Var_15 = (Xa_11 ^ Xb_12);
{
#define MR_PROC_LABEL mercury__bitmap__zip2__ho11_4_f_0

	MR_Integer N;
	MR_BitmapPtr BM0;
	MR_Integer Byte;
	MR_BitmapPtr BM;

	N = I_6 ;
	BM0 = (MR_BitmapPtr)BMb_9 ;
	Byte = Var_15 ;
		{

    BM = BM0;
    BM->elements[N] = (MR_uint_least8_t) Byte;


		;}
#undef MR_PROC_LABEL
	 BMc_13  = (MR_Box) BM;
}
      Var_16 = (MR_Integer) ((MR_Unsigned) I_6 - (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_I_6 = Var_16;
      next_value_of_BMb_9 = BMc_13;
      I_6 = next_value_of_I_6;
      BMb_9 = next_value_of_BMb_9;
      continue;
    }
    else
      BM_10 = BMb_9;
    return BM_10;
    break;
  }
}

MR_Box MR_CALL 
mercury__bitmap__difference_2_f_0(
  MR_Box BMa_4,
  MR_Box BMb_5)
{
  {
    MR_bool succeeded;
    MR_Box BMc_6;
    MR_Integer Var_9;
    MR_Integer Var_18;

{
#define MR_PROC_LABEL mercury__bitmap__difference_2_f_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr)BMa_4 ;
		{

    NumBits = BM->num_bits;


		;}
#undef MR_PROC_LABEL
	 Var_9  = NumBits;
}
{
#define MR_PROC_LABEL mercury__bitmap__difference_2_f_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr)BMb_5 ;
		{

    NumBits = BM->num_bits;


		;}
#undef MR_PROC_LABEL
	 Var_18  = NumBits;
}
    succeeded = (Var_9 == Var_18);
    if (succeeded)
    {
      MR_Integer Var_29;

{
#define MR_PROC_LABEL mercury__bitmap__difference_2_f_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr)BMb_5 ;
		{

    NumBits = BM->num_bits;


		;}
#undef MR_PROC_LABEL
	 Var_29  = NumBits;
}
      succeeded = (Var_29 == (MR_Integer) 0);
      if (succeeded)
        BMc_6 = BMb_5;
      else
      {
        MR_Integer Var_30;
        MR_Integer Var_31;
        MR_Integer Var_32;

{
#define MR_PROC_LABEL mercury__bitmap__difference_2_f_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr)BMb_5 ;
		{

    NumBits = BM->num_bits;


		;}
#undef MR_PROC_LABEL
	 Var_32  = NumBits;
}
        Var_31 = (MR_Integer) ((MR_Unsigned) Var_32 - (MR_Unsigned) 1);
        succeeded = (Var_31 < (MR_Integer) 0);
        if (succeeded)
          Var_30 = (MR_Integer) -1;
        else
          Var_30 = (Var_31 / (MR_Integer) 8);
        BMc_6 = mercury__bitmap__zip2__ho10_4_f_0(Var_30, BMa_4, BMb_5);
      }
    }
    else
      mercury__exception__throw_1_p_0((MR_Word) (&mercury__bitmap__bitmap__type_ctor_info_bitmap_error_0), ((MR_Box) (((MR_Box) ((MR_String) "bitmap.difference: bitmaps not the same size")))));
    return BMc_6;
  }
}

static MR_Box MR_CALL 
mercury__bitmap__zip2__ho10_4_f_0(
  MR_Integer I_6,
  MR_Box BMa_8,
  MR_Box BMb_9)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (I_6 >= (MR_Integer) 0);
    MR_Box BM_10;

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      MR_Integer Xa_11;
      MR_Integer Xb_12;
      MR_Box BMc_13;
      MR_Integer Var_15;
      MR_Integer Var_16;
      MR_Integer Var_36;
      MR_Integer next_value_of_I_6;
      MR_Box next_value_of_BMb_9;

{
#define MR_PROC_LABEL mercury__bitmap__zip2__ho10_4_f_0

	MR_Integer N;
	MR_BitmapPtr BM;
	MR_Integer Byte;

	N = I_6 ;
	BM = (MR_BitmapPtr)BMa_8 ;
		{

    Byte = (MR_Integer) BM->elements[N];


		;}
#undef MR_PROC_LABEL
	 Xa_11  = Byte;
}
{
#define MR_PROC_LABEL mercury__bitmap__zip2__ho10_4_f_0

	MR_Integer N;
	MR_BitmapPtr BM;
	MR_Integer Byte;

	N = I_6 ;
	BM = (MR_BitmapPtr)BMb_9 ;
		{

    Byte = (MR_Integer) BM->elements[N];


		;}
#undef MR_PROC_LABEL
	 Xb_12  = Byte;
}
      Var_36 = ~(Xb_12);
      Var_15 = (Xa_11 & Var_36);
{
#define MR_PROC_LABEL mercury__bitmap__zip2__ho10_4_f_0

	MR_Integer N;
	MR_BitmapPtr BM0;
	MR_Integer Byte;
	MR_BitmapPtr BM;

	N = I_6 ;
	BM0 = (MR_BitmapPtr)BMb_9 ;
	Byte = Var_15 ;
		{

    BM = BM0;
    BM->elements[N] = (MR_uint_least8_t) Byte;


		;}
#undef MR_PROC_LABEL
	 BMc_13  = (MR_Box) BM;
}
      Var_16 = (MR_Integer) ((MR_Unsigned) I_6 - (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_I_6 = Var_16;
      next_value_of_BMb_9 = BMc_13;
      I_6 = next_value_of_I_6;
      BMb_9 = next_value_of_BMb_9;
      continue;
    }
    else
      BM_10 = BMb_9;
    return BM_10;
    break;
  }
}

MR_Box MR_CALL 
mercury__bitmap__intersect_2_f_0(
  MR_Box BMa_4,
  MR_Box BMb_5)
{
  {
    MR_bool succeeded;
    MR_Box BMc_6;
    MR_Integer Var_7;
    MR_Integer Var_13;

{
#define MR_PROC_LABEL mercury__bitmap__intersect_2_f_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr)BMa_4 ;
		{

    NumBits = BM->num_bits;


		;}
#undef MR_PROC_LABEL
	 Var_7  = NumBits;
}
{
#define MR_PROC_LABEL mercury__bitmap__intersect_2_f_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr)BMb_5 ;
		{

    NumBits = BM->num_bits;


		;}
#undef MR_PROC_LABEL
	 Var_13  = NumBits;
}
    succeeded = (Var_7 == Var_13);
    if (succeeded)
    {
      MR_Integer Var_24;

{
#define MR_PROC_LABEL mercury__bitmap__intersect_2_f_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr)BMb_5 ;
		{

    NumBits = BM->num_bits;


		;}
#undef MR_PROC_LABEL
	 Var_24  = NumBits;
}
      succeeded = (Var_24 == (MR_Integer) 0);
      if (succeeded)
        BMc_6 = BMb_5;
      else
      {
        MR_Integer Var_25;
        MR_Integer Var_26;
        MR_Integer Var_27;

{
#define MR_PROC_LABEL mercury__bitmap__intersect_2_f_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr)BMb_5 ;
		{

    NumBits = BM->num_bits;


		;}
#undef MR_PROC_LABEL
	 Var_27  = NumBits;
}
        Var_26 = (MR_Integer) ((MR_Unsigned) Var_27 - (MR_Unsigned) 1);
        succeeded = (Var_26 < (MR_Integer) 0);
        if (succeeded)
          Var_25 = (MR_Integer) -1;
        else
          Var_25 = (Var_26 / (MR_Integer) 8);
        BMc_6 = mercury__bitmap__zip2__ho9_4_f_0(Var_25, BMa_4, BMb_5);
      }
    }
    else
      mercury__exception__throw_1_p_0((MR_Word) (&mercury__bitmap__bitmap__type_ctor_info_bitmap_error_0), ((MR_Box) (((MR_Box) ((MR_String) "bitmap.intersect: bitmaps not the same size")))));
    return BMc_6;
  }
}

static MR_Box MR_CALL 
mercury__bitmap__zip2__ho9_4_f_0(
  MR_Integer I_6,
  MR_Box BMa_8,
  MR_Box BMb_9)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (I_6 >= (MR_Integer) 0);
    MR_Box BM_10;

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      MR_Integer Xa_11;
      MR_Integer Xb_12;
      MR_Box BMc_13;
      MR_Integer Var_15;
      MR_Integer Var_16;
      MR_Integer next_value_of_I_6;
      MR_Box next_value_of_BMb_9;

{
#define MR_PROC_LABEL mercury__bitmap__zip2__ho9_4_f_0

	MR_Integer N;
	MR_BitmapPtr BM;
	MR_Integer Byte;

	N = I_6 ;
	BM = (MR_BitmapPtr)BMa_8 ;
		{

    Byte = (MR_Integer) BM->elements[N];


		;}
#undef MR_PROC_LABEL
	 Xa_11  = Byte;
}
{
#define MR_PROC_LABEL mercury__bitmap__zip2__ho9_4_f_0

	MR_Integer N;
	MR_BitmapPtr BM;
	MR_Integer Byte;

	N = I_6 ;
	BM = (MR_BitmapPtr)BMb_9 ;
		{

    Byte = (MR_Integer) BM->elements[N];


		;}
#undef MR_PROC_LABEL
	 Xb_12  = Byte;
}
      Var_15 = (Xa_11 & Xb_12);
{
#define MR_PROC_LABEL mercury__bitmap__zip2__ho9_4_f_0

	MR_Integer N;
	MR_BitmapPtr BM0;
	MR_Integer Byte;
	MR_BitmapPtr BM;

	N = I_6 ;
	BM0 = (MR_BitmapPtr)BMb_9 ;
	Byte = Var_15 ;
		{

    BM = BM0;
    BM->elements[N] = (MR_uint_least8_t) Byte;


		;}
#undef MR_PROC_LABEL
	 BMc_13  = (MR_Box) BM;
}
      Var_16 = (MR_Integer) ((MR_Unsigned) I_6 - (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_I_6 = Var_16;
      next_value_of_BMb_9 = BMc_13;
      I_6 = next_value_of_I_6;
      BMb_9 = next_value_of_BMb_9;
      continue;
    }
    else
      BM_10 = BMb_9;
    return BM_10;
    break;
  }
}

MR_Box MR_CALL 
mercury__bitmap__union_2_f_0(
  MR_Box BMa_4,
  MR_Box BMb_5)
{
  {
    MR_bool succeeded;
    MR_Box BMc_6;
    MR_Integer Var_7;
    MR_Integer Var_13;

{
#define MR_PROC_LABEL mercury__bitmap__union_2_f_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr)BMa_4 ;
		{

    NumBits = BM->num_bits;


		;}
#undef MR_PROC_LABEL
	 Var_7  = NumBits;
}
{
#define MR_PROC_LABEL mercury__bitmap__union_2_f_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr)BMb_5 ;
		{

    NumBits = BM->num_bits;


		;}
#undef MR_PROC_LABEL
	 Var_13  = NumBits;
}
    succeeded = (Var_7 == Var_13);
    if (succeeded)
    {
      MR_Integer Var_24;

{
#define MR_PROC_LABEL mercury__bitmap__union_2_f_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr)BMb_5 ;
		{

    NumBits = BM->num_bits;


		;}
#undef MR_PROC_LABEL
	 Var_24  = NumBits;
}
      succeeded = (Var_24 == (MR_Integer) 0);
      if (succeeded)
        BMc_6 = BMb_5;
      else
      {
        MR_Integer Var_25;
        MR_Integer Var_26;
        MR_Integer Var_27;

{
#define MR_PROC_LABEL mercury__bitmap__union_2_f_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr)BMb_5 ;
		{

    NumBits = BM->num_bits;


		;}
#undef MR_PROC_LABEL
	 Var_27  = NumBits;
}
        Var_26 = (MR_Integer) ((MR_Unsigned) Var_27 - (MR_Unsigned) 1);
        succeeded = (Var_26 < (MR_Integer) 0);
        if (succeeded)
          Var_25 = (MR_Integer) -1;
        else
          Var_25 = (Var_26 / (MR_Integer) 8);
        BMc_6 = mercury__bitmap__zip2__ho8_4_f_0(Var_25, BMa_4, BMb_5);
      }
    }
    else
      mercury__exception__throw_1_p_0((MR_Word) (&mercury__bitmap__bitmap__type_ctor_info_bitmap_error_0), ((MR_Box) (((MR_Box) ((MR_String) "bitmap.union: bitmaps not the same size")))));
    return BMc_6;
  }
}

static MR_Box MR_CALL 
mercury__bitmap__zip2__ho8_4_f_0(
  MR_Integer I_6,
  MR_Box BMa_8,
  MR_Box BMb_9)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (I_6 >= (MR_Integer) 0);
    MR_Box BM_10;

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      MR_Integer Xa_11;
      MR_Integer Xb_12;
      MR_Box BMc_13;
      MR_Integer Var_15;
      MR_Integer Var_16;
      MR_Integer next_value_of_I_6;
      MR_Box next_value_of_BMb_9;

{
#define MR_PROC_LABEL mercury__bitmap__zip2__ho8_4_f_0

	MR_Integer N;
	MR_BitmapPtr BM;
	MR_Integer Byte;

	N = I_6 ;
	BM = (MR_BitmapPtr)BMa_8 ;
		{

    Byte = (MR_Integer) BM->elements[N];


		;}
#undef MR_PROC_LABEL
	 Xa_11  = Byte;
}
{
#define MR_PROC_LABEL mercury__bitmap__zip2__ho8_4_f_0

	MR_Integer N;
	MR_BitmapPtr BM;
	MR_Integer Byte;

	N = I_6 ;
	BM = (MR_BitmapPtr)BMb_9 ;
		{

    Byte = (MR_Integer) BM->elements[N];


		;}
#undef MR_PROC_LABEL
	 Xb_12  = Byte;
}
      Var_15 = (Xa_11 | Xb_12);
{
#define MR_PROC_LABEL mercury__bitmap__zip2__ho8_4_f_0

	MR_Integer N;
	MR_BitmapPtr BM0;
	MR_Integer Byte;
	MR_BitmapPtr BM;

	N = I_6 ;
	BM0 = (MR_BitmapPtr)BMb_9 ;
	Byte = Var_15 ;
		{

    BM = BM0;
    BM->elements[N] = (MR_uint_least8_t) Byte;


		;}
#undef MR_PROC_LABEL
	 BMc_13  = (MR_Box) BM;
}
      Var_16 = (MR_Integer) ((MR_Unsigned) I_6 - (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_I_6 = Var_16;
      next_value_of_BMb_9 = BMc_13;
      I_6 = next_value_of_I_6;
      BMb_9 = next_value_of_BMb_9;
      continue;
    }
    else
      BM_10 = BMb_9;
    return BM_10;
    break;
  }
}

MR_Box MR_CALL 
mercury__bitmap__complement_1_f_0(
  MR_Box BM_3)
{
  {
    MR_bool succeeded;
    MR_Box HeadVar__2_2;
    MR_Box Var_4;
    MR_Integer Var_5;
    MR_Integer Var_6;
    MR_Integer Var_7;
    MR_Integer Var_16;
    MR_Integer Var_17;

{
#define MR_PROC_LABEL mercury__bitmap__complement_1_f_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr)BM_3 ;
		{

    NumBits = BM->num_bits;


		;}
#undef MR_PROC_LABEL
	 Var_7  = NumBits;
}
    Var_6 = (MR_Integer) ((MR_Unsigned) Var_7 - (MR_Unsigned) 1);
    succeeded = (Var_6 < (MR_Integer) 0);
    if (succeeded)
      Var_5 = (MR_Integer) -1;
    else
      Var_5 = (Var_6 / (MR_Integer) 8);
    Var_4 = mercury__bitmap__complement_2_2_f_0(Var_5, BM_3);
{
#define MR_PROC_LABEL mercury__bitmap__complement_1_f_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr)Var_4 ;
		{

    NumBits = BM->num_bits;


		;}
#undef MR_PROC_LABEL
	 Var_17  = NumBits;
}
    Var_16 = (MR_Integer) ((MR_Unsigned) Var_17 - (MR_Unsigned) 1);
    HeadVar__2_2 = mercury__bitmap__set_trailing_bits_in_byte_3_f_0(Var_4, Var_16, (MR_Integer) 0);
    return HeadVar__2_2;
  }
}

MR_Box MR_CALL 
mercury__bitmap__complement_2_2_f_0(
  MR_Integer ByteI_4,
  MR_Box BM0_5)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (ByteI_4 < (MR_Integer) 0);
    MR_Box BM_6;

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
      BM_6 = BM0_5;
    else
    {
      MR_Integer X_7;
      MR_Box BM1_8;
      MR_Integer Var_10;
      MR_Integer Var_11;
      MR_Integer next_value_of_ByteI_4;
      MR_Box next_value_of_BM0_5;

{
#define MR_PROC_LABEL mercury__bitmap__complement_2_2_f_0

	MR_Integer N;
	MR_BitmapPtr BM;
	MR_Integer Byte;

	N = ByteI_4 ;
	BM = (MR_BitmapPtr)BM0_5 ;
		{

    Byte = (MR_Integer) BM->elements[N];


		;}
#undef MR_PROC_LABEL
	 X_7  = Byte;
}
      Var_10 = ~(X_7);
{
#define MR_PROC_LABEL mercury__bitmap__complement_2_2_f_0

	MR_Integer N;
	MR_BitmapPtr BM0;
	MR_Integer Byte;
	MR_BitmapPtr BM;

	N = ByteI_4 ;
	BM0 = (MR_BitmapPtr)BM0_5 ;
	Byte = Var_10 ;
		{

    BM = BM0;
    BM->elements[N] = (MR_uint_least8_t) Byte;


		;}
#undef MR_PROC_LABEL
	 BM1_8  = (MR_Box) BM;
}
      Var_11 = (MR_Integer) ((MR_Unsigned) ByteI_4 - (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_ByteI_4 = Var_11;
      next_value_of_BM0_5 = BM1_8;
      ByteI_4 = next_value_of_ByteI_4;
      BM0_5 = next_value_of_BM0_5;
      continue;
    }
    return BM_6;
    break;
  }
}

MR_Integer MR_CALL 
mercury__bitmap__slice_num_bytes_1_f_0(
  MR_Word Slice_3)
{
  {
    MR_Integer HeadVar__2_2;
    MR_Integer Var_5 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Slice_3, (MR_Integer) 2))));

    HeadVar__2_2 = mercury__bitmap__quotient_bits_per_byte_with_rem_zero_2_f_0((MR_String) "bitmap.slice_num_bytes", Var_5);
    return HeadVar__2_2;
  }
}

MR_Integer MR_CALL 
mercury__bitmap__slice_start_byte_index_1_f_0(
  MR_Word Slice_3)
{
  {
    MR_Integer HeadVar__2_2;
    MR_Integer Var_5 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Slice_3, (MR_Integer) 1))));

    HeadVar__2_2 = mercury__bitmap__quotient_bits_per_byte_with_rem_zero_2_f_0((MR_String) "bitmap.slice_start_byte_index", Var_5);
    return HeadVar__2_2;
  }
}

MR_Integer MR_CALL 
mercury__bitmap__quotient_bits_per_byte_with_rem_zero_2_f_0(
  MR_String Pred_4,
  MR_Integer Int_5)
{
  {
    MR_bool succeeded;
    MR_Integer Quotient_6;
    MR_Integer Var_7 = (Int_5 % (MR_Integer) 8);

    succeeded = (Var_7 == (MR_Integer) 0);
    if (succeeded)
      Quotient_6 = (Int_5 / (MR_Integer) 8);
    else
    {
      MR_String Var_10;
      MR_Word Var_19;

      mercury__string__append_3_p_2(Pred_4, (MR_String) ": not a byte slice.", &Var_10);
      Var_19 = (MR_Word) (Var_10);
      mercury__exception__throw_1_p_0((MR_Word) (&mercury__bitmap__bitmap__type_ctor_info_bitmap_error_0), ((MR_Box) (Var_19)));
    }
    return Quotient_6;
  }
}

MR_Integer MR_CALL 
mercury__bitmap__slice_num_bits_1_f_0(
  MR_Word Slice_3)
{
  {
    MR_Integer HeadVar__2_2 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Slice_3, (MR_Integer) 2))));

    return HeadVar__2_2;
  }
}

MR_Integer MR_CALL 
mercury__bitmap__slice_start_bit_index_1_f_0(
  MR_Word Slice_3)
{
  {
    MR_Integer HeadVar__2_2 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Slice_3, (MR_Integer) 1))));

    return HeadVar__2_2;
  }
}

MR_Box MR_CALL 
mercury__bitmap__slice_bitmap_1_f_0(
  MR_Word Slice_3)
{
  {
    MR_Box HeadVar__2_2 = ((MR_Box) ((MR_hl_field(MR_mktag(0), Slice_3, (MR_Integer) 0))));

    return HeadVar__2_2;
  }
}

MR_Word MR_CALL 
mercury__bitmap__byte_slice_3_f_0(
  MR_Box BM_5,
  MR_Integer StartByte_6,
  MR_Integer NumBytes_7)
{
  {
    MR_Word HeadVar__4_4;
    MR_Integer Var_8 = (MR_Integer) ((MR_Unsigned) StartByte_6 * (MR_Unsigned) 8);
    MR_Integer Var_10 = (MR_Integer) ((MR_Unsigned) NumBytes_7 * (MR_Unsigned) 8);

    HeadVar__4_4 = mercury__bitmap__slice_3_f_0(BM_5, Var_8, Var_10);
    return HeadVar__4_4;
  }
}

MR_Word MR_CALL 
mercury__bitmap__slice_3_f_0(
  MR_Box BM_5,
  MR_Integer StartBit_6,
  MR_Integer NumBits_7)
{
  {
    MR_bool succeeded = (NumBits_7 >= (MR_Integer) 0);
    MR_Word Slice_8;
    MR_Integer Var_10;
    MR_Integer Var_11;
    MR_Integer Var_15;
    MR_Integer Var_16;

    if (succeeded)
    {
      Var_10 = (MR_Integer) 0;
      succeeded = (StartBit_6 >= Var_10);
      if (succeeded)
      {
        Var_11 = (MR_Integer) ((MR_Unsigned) StartBit_6 + (MR_Unsigned) NumBits_7);
        Var_15 = (MR_Integer) 0;
        succeeded = (Var_15 <= Var_11);
        if (succeeded)
        {
{
#define MR_PROC_LABEL mercury__bitmap__slice_3_f_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr)BM_5 ;
		{

    NumBits = BM->num_bits;


		;}
#undef MR_PROC_LABEL
	 Var_16  = NumBits;
}
          succeeded = (Var_11 <= Var_16);
        }
      }
    }
    if (succeeded)
      {
        Slice_8 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Slice_8, 0) = ((MR_Box) (BM_5));
        MR_hl_field(MR_mktag(0), Slice_8, 1) = ((MR_Box) (StartBit_6));
        MR_hl_field(MR_mktag(0), Slice_8, 2) = ((MR_Box) (NumBits_7));
      }
    else
      mercury__bitmap__throw_bounds_error_4_p_0(BM_5, (MR_String) "bitmap.slice", StartBit_6, NumBits_7);
    return Slice_8;
  }
}

MR_Box MR_CALL 
mercury__bitmap__shrink_without_copying_2_f_0(
  MR_Box STATE_VARIABLE_BM_0_6,
  MR_Integer NewSize_5)
{
  {
    MR_bool succeeded = ((MR_Integer) 0 <= NewSize_5);
    MR_Box STATE_VARIABLE_BM_7;
    MR_Integer Var_9;

    if (succeeded)
    {
{
#define MR_PROC_LABEL mercury__bitmap__shrink_without_copying_2_f_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr)STATE_VARIABLE_BM_0_6 ;
		{

    NumBits = BM->num_bits;


		;}
#undef MR_PROC_LABEL
	 Var_9  = NumBits;
}
      succeeded = (NewSize_5 <= Var_9);
    }
    if (succeeded)
    {
{
#define MR_PROC_LABEL mercury__bitmap__shrink_without_copying_2_f_0

	MR_BitmapPtr BM0;
	MR_Integer NumBits;
	MR_BitmapPtr BM;

	BM0 = (MR_BitmapPtr)STATE_VARIABLE_BM_0_6 ;
	NumBits = NewSize_5 ;
		{

    BM = BM0;
    BM->num_bits = NumBits;


		;}
#undef MR_PROC_LABEL
	 STATE_VARIABLE_BM_7  = (MR_Box) BM;
}
    }
    else
      mercury__bitmap__throw_bit_bounds_error_3_p_0(STATE_VARIABLE_BM_0_6, (MR_String) "bitmap.shrink_without_copying", NewSize_5);
    return STATE_VARIABLE_BM_7;
  }
}

MR_Box MR_CALL 
mercury__bitmap__resize_3_f_0(
  MR_Box STATE_VARIABLE_BM_0_12,
  MR_Integer NewSize_6,
  MR_Word InitializerBit_7)
{
  {
    MR_bool succeeded = (NewSize_6 <= (MR_Integer) 0);
    MR_Box STATE_VARIABLE_BM_13;

    if (succeeded)
      STATE_VARIABLE_BM_13 = mercury__bitmap__init_2_f_0(NewSize_6, InitializerBit_7);
    else
    {
      MR_Integer OldSize_8;
      MR_Integer InitializerByte_9;
      MR_Box STATE_VARIABLE_BM_16_16;
      MR_Box STATE_VARIABLE_BM_24_24;
      MR_Box Var_35;
      MR_Integer Var_37;
      MR_Integer Var_38;
      MR_Integer Var_61;
      MR_Integer Var_62;

{
#define MR_PROC_LABEL mercury__bitmap__resize_3_f_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr)STATE_VARIABLE_BM_0_12 ;
		{

    NumBits = BM->num_bits;


		;}
#undef MR_PROC_LABEL
	 OldSize_8  = NumBits;
}
      switch (InitializerBit_7) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          InitializerByte_9 = (MR_Integer) 0;
          break;
        case (MR_Integer) 1:
          InitializerByte_9 = ~((MR_Integer) 0);
          break;
      }
{
#define MR_PROC_LABEL mercury__bitmap__resize_3_f_0

	MR_Integer N;
	MR_BitmapPtr BM;

	N = NewSize_6 ;
		{

    MR_allocate_bitmap_msg(BM, N, MR_ALLOC_ID);


		;}
#undef MR_PROC_LABEL
	 Var_35  = (MR_Box) BM;
}
{
#define MR_PROC_LABEL mercury__bitmap__resize_3_f_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr)STATE_VARIABLE_BM_0_12 ;
		{

    NumBits = BM->num_bits;


		;}
#undef MR_PROC_LABEL
	 Var_38  = NumBits;
}
      succeeded = (Var_38 < NewSize_6);
      if (succeeded)
        Var_37 = Var_38;
      else
        Var_37 = NewSize_6;
      STATE_VARIABLE_BM_16_16 = mercury__bitmap__copy_bits_6_f_0((MR_Integer) 0, STATE_VARIABLE_BM_0_12, (MR_Integer) 0, Var_35, (MR_Integer) 0, Var_37);
      succeeded = (NewSize_6 > OldSize_8);
      if (succeeded)
      {
        MR_Integer OldLastByteIndex_10;
        MR_Integer NewLastByteIndex_11;
        MR_Box STATE_VARIABLE_BM_17_17;
        MR_Integer Var_18 = (MR_Integer) ((MR_Unsigned) OldSize_8 - (MR_Unsigned) 1);
        MR_Integer Var_20;
        MR_Integer Var_22;

        STATE_VARIABLE_BM_17_17 = mercury__bitmap__set_trailing_bits_in_byte_3_f_0(STATE_VARIABLE_BM_16_16, Var_18, InitializerByte_9);
        Var_20 = (MR_Integer) ((MR_Unsigned) OldSize_8 - (MR_Unsigned) 1);
        succeeded = (Var_20 < (MR_Integer) 0);
        if (succeeded)
          OldLastByteIndex_10 = (MR_Integer) -1;
        else
          OldLastByteIndex_10 = (Var_20 / (MR_Integer) 8);
        Var_22 = (MR_Integer) ((MR_Unsigned) NewSize_6 - (MR_Unsigned) 1);
        succeeded = (Var_22 < (MR_Integer) 0);
        if (succeeded)
          NewLastByteIndex_11 = (MR_Integer) -1;
        else
          NewLastByteIndex_11 = (Var_22 / (MR_Integer) 8);
        succeeded = (NewLastByteIndex_11 > OldLastByteIndex_10);
        if (succeeded)
        {
          MR_Integer Var_25 = (MR_Integer) ((MR_Unsigned) OldLastByteIndex_10 + (MR_Unsigned) 1);

          STATE_VARIABLE_BM_24_24 = mercury__bitmap__initialize_bitmap_bytes_4_f_0(STATE_VARIABLE_BM_17_17, Var_25, NewLastByteIndex_11, InitializerByte_9);
        }
        else
          STATE_VARIABLE_BM_24_24 = STATE_VARIABLE_BM_17_17;
      }
      else
        STATE_VARIABLE_BM_24_24 = STATE_VARIABLE_BM_16_16;
{
#define MR_PROC_LABEL mercury__bitmap__resize_3_f_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr)STATE_VARIABLE_BM_24_24 ;
		{

    NumBits = BM->num_bits;


		;}
#undef MR_PROC_LABEL
	 Var_62  = NumBits;
}
      Var_61 = (MR_Integer) ((MR_Unsigned) Var_62 - (MR_Unsigned) 1);
      STATE_VARIABLE_BM_13 = mercury__bitmap__set_trailing_bits_in_byte_3_f_0(STATE_VARIABLE_BM_24_24, Var_61, (MR_Integer) 0);
    }
    return STATE_VARIABLE_BM_13;
  }
}

MR_Box MR_CALL 
mercury__bitmap__copy_bits_6_f_0(
  MR_Integer SameBM_8,
  MR_Box SrcBM_9,
  MR_Integer SrcStartBit_10,
  MR_Box STATE_VARIABLE_DestBM_0_14,
  MR_Integer DestStartBit_12,
  MR_Integer NumBits_13)
{
  {
    MR_bool succeeded = (NumBits_13 >= (MR_Integer) 0);
    MR_Box STATE_VARIABLE_DestBM_15;
    MR_Integer Var_17;
    MR_Integer Var_18;
    MR_Integer Var_19;
    MR_Integer Var_20;
    MR_Integer Var_36;
    MR_Integer Var_37;
    MR_Integer Var_43;
    MR_Integer Var_44;

    if (succeeded)
    {
      Var_17 = (MR_Integer) 0;
      succeeded = (SrcStartBit_10 >= Var_17);
      if (succeeded)
      {
        Var_18 = (MR_Integer) 0;
        succeeded = (DestStartBit_12 >= Var_18);
        if (succeeded)
        {
          Var_19 = (MR_Integer) ((MR_Unsigned) SrcStartBit_10 + (MR_Unsigned) NumBits_13);
          Var_36 = (MR_Integer) 0;
          succeeded = (Var_36 <= Var_19);
          if (succeeded)
          {
{
#define MR_PROC_LABEL mercury__bitmap__copy_bits_6_f_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr)SrcBM_9 ;
		{

    NumBits = BM->num_bits;


		;}
#undef MR_PROC_LABEL
	 Var_37  = NumBits;
}
            succeeded = (Var_19 <= Var_37);
            if (succeeded)
            {
              Var_20 = (MR_Integer) ((MR_Unsigned) DestStartBit_12 + (MR_Unsigned) NumBits_13);
              Var_43 = (MR_Integer) 0;
              succeeded = (Var_43 <= Var_20);
              if (succeeded)
              {
{
#define MR_PROC_LABEL mercury__bitmap__copy_bits_6_f_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr)STATE_VARIABLE_DestBM_0_14 ;
		{

    NumBits = BM->num_bits;


		;}
#undef MR_PROC_LABEL
	 Var_44  = NumBits;
}
                succeeded = (Var_20 <= Var_44);
              }
            }
          }
        }
      }
    }
    if (succeeded)
      STATE_VARIABLE_DestBM_15 = mercury__bitmap__unsafe_copy_bits_6_f_0(SameBM_8, SrcBM_9, SrcStartBit_10, STATE_VARIABLE_DestBM_0_14, DestStartBit_12, NumBits_13);
    else
    {
      succeeded = (NumBits_13 < (MR_Integer) 0);
      if (!(succeeded))
      {
        succeeded = (SrcStartBit_10 < (MR_Integer) 0);
        if (!(succeeded))
        {
          MR_Integer Var_22;
          MR_Integer Var_23 = (MR_Integer) ((MR_Unsigned) SrcStartBit_10 + (MR_Unsigned) NumBits_13);
          MR_Integer Var_51;

          Var_22 = (MR_Integer) ((MR_Unsigned) Var_23 - (MR_Unsigned) 1);
          succeeded = ((MR_Integer) 0 <= Var_22);
          if (succeeded)
          {
{
#define MR_PROC_LABEL mercury__bitmap__copy_bits_6_f_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr)SrcBM_9 ;
		{

    NumBits = BM->num_bits;


		;}
#undef MR_PROC_LABEL
	 Var_51  = NumBits;
}
            succeeded = (Var_22 < Var_51);
          }
          succeeded = !(succeeded);
        }
      }
      if (succeeded)
        mercury__bitmap__throw_bounds_error_4_p_0(SrcBM_9, (MR_String) "copy_bits (source)", SrcStartBit_10, NumBits_13);
      else
      {
        succeeded = (DestStartBit_12 < (MR_Integer) 0);
        if (!(succeeded))
        {
          MR_Integer Var_28;
          MR_Integer Var_29 = (MR_Integer) ((MR_Unsigned) DestStartBit_12 + (MR_Unsigned) NumBits_13);
          MR_Integer Var_58;

          Var_28 = (MR_Integer) ((MR_Unsigned) Var_29 - (MR_Unsigned) 1);
          succeeded = ((MR_Integer) 0 <= Var_28);
          if (succeeded)
          {
{
#define MR_PROC_LABEL mercury__bitmap__copy_bits_6_f_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr)STATE_VARIABLE_DestBM_0_14 ;
		{

    NumBits = BM->num_bits;


		;}
#undef MR_PROC_LABEL
	 Var_58  = NumBits;
}
            succeeded = (Var_28 < Var_58);
          }
          succeeded = !(succeeded);
        }
        if (succeeded)
          mercury__bitmap__throw_bounds_error_4_p_0(STATE_VARIABLE_DestBM_0_14, (MR_String) "copy_bits (destination)", DestStartBit_12, NumBits_13);
        else
          mercury__exception__throw_1_p_0((MR_Word) (&mercury__bitmap__bitmap__type_ctor_info_bitmap_error_0), ((MR_Box) (((MR_Box) ((MR_String) "bitmap.copy_bits: failed to diagnose error")))));
      }
    }
    return STATE_VARIABLE_DestBM_15;
  }
}

static MR_Box MR_CALL 
mercury__bitmap__unsafe_copy_bits_6_f_0(
  MR_Integer SameBM_8,
  MR_Box SrcBM_9,
  MR_Integer SrcStartBit_10,
  MR_Box STATE_VARIABLE_DestBM_0_30,
  MR_Integer DestStartBit_12,
  MR_Integer STATE_VARIABLE_NumBits_0_31)
{
  {
    MR_bool succeeded;
    MR_Box STATE_VARIABLE_DestBM_32;
    MR_Integer SrcStartIndex_14 = (SrcStartBit_10 % (MR_Integer) 8);
    MR_Integer DestStartIndex_15 = (DestStartBit_12 % (MR_Integer) 8);
    MR_Integer Var_33 = (MR_Integer) ((MR_Unsigned) 2 * (MR_Unsigned) 8);

    succeeded = (STATE_VARIABLE_NumBits_0_31 < Var_33);
    if (succeeded)
    {
      MR_Integer Var_37;

      Var_37 = mercury__bitmap__unsafe_bits_3_f_0(SrcStartBit_10, STATE_VARIABLE_NumBits_0_31, SrcBM_9);
      STATE_VARIABLE_DestBM_32 = mercury__bitmap__f_117_110_115_97_102_101_95_98_105_116_115_32_58_61_4_f_0(DestStartBit_12, STATE_VARIABLE_NumBits_0_31, STATE_VARIABLE_DestBM_0_30, Var_37);
    }
    else
    {
      succeeded = (SrcStartIndex_14 == DestStartIndex_15);
      if (succeeded)
      {
        MR_Integer SrcEndBit_17;
        MR_Integer EndIndex_18;
        MR_Integer Var_38 = (MR_Integer) ((MR_Unsigned) SrcStartBit_10 + (MR_Unsigned) STATE_VARIABLE_NumBits_0_31);
        MR_Integer Var_40;
        MR_Integer Var_41;

        SrcEndBit_17 = (MR_Integer) ((MR_Unsigned) Var_38 - (MR_Unsigned) 1);
        EndIndex_18 = (SrcEndBit_17 % (MR_Integer) 8);
        succeeded = (SrcStartIndex_14 == (MR_Integer) 0);
        if (succeeded)
        {
          Var_40 = (MR_Integer) 8;
          Var_41 = (MR_Integer) ((MR_Unsigned) Var_40 - (MR_Unsigned) EndIndex_18);
          succeeded = (Var_41 == (MR_Integer) 1);
        }
        if (succeeded)
        {
          MR_Integer NumBytes_19 = (STATE_VARIABLE_NumBits_0_31 / (MR_Integer) 8);
          MR_Integer SrcStartByteIndex_20 = (SrcStartBit_10 / (MR_Integer) 8);
          MR_Integer DestStartByteIndex_21 = (DestStartBit_12 / (MR_Integer) 8);

          STATE_VARIABLE_DestBM_32 = mercury__bitmap__unsafe_copy_bytes_6_f_0(SameBM_8, SrcBM_9, SrcStartByteIndex_20, STATE_VARIABLE_DestBM_0_30, DestStartByteIndex_21, NumBytes_19);
        }
        else
        {
          MR_Integer NumBitsAtStart_22;
          MR_Integer StartBitsToSet_23;
          MR_Integer NumBitsAtEnd_25;
          MR_Integer EndBitsToSet_26;
          MR_Integer STATE_VARIABLE_NumBits_48_48;
          MR_Integer STATE_VARIABLE_NumBits_54_54;
          MR_Integer Var_56;
          MR_Integer Var_58;
          MR_Box STATE_VARIABLE_DestBM_60_60;
          MR_Box STATE_VARIABLE_DestBM_62_62;
          MR_Integer NumBytes_70;
          MR_Integer SrcStartByteIndex_71;
          MR_Integer DestStartByteIndex_72;
          MR_Integer Var_50;

          succeeded = (SrcStartIndex_14 == (MR_Integer) 0);
          if (succeeded)
          {
            NumBitsAtStart_22 = (MR_Integer) 0;
            StartBitsToSet_23 = (MR_Integer) 0;
            STATE_VARIABLE_NumBits_48_48 = STATE_VARIABLE_NumBits_0_31;
          }
          else
          {
            MR_Integer SrcPartialStartByteIndex_24;
            MR_Integer Var_47;

            NumBitsAtStart_22 = (MR_Integer) ((MR_Unsigned) 8 - (MR_Unsigned) SrcStartIndex_14);
            succeeded = (SrcStartBit_10 < (MR_Integer) 0);
            if (succeeded)
              SrcPartialStartByteIndex_24 = (MR_Integer) -1;
            else
              SrcPartialStartByteIndex_24 = (SrcStartBit_10 / (MR_Integer) 8);
{
#define MR_PROC_LABEL mercury__bitmap__unsafe_copy_bits_6_f_0

	MR_Integer N;
	MR_BitmapPtr BM;
	MR_Integer Byte;

	N = SrcPartialStartByteIndex_24 ;
	BM = (MR_BitmapPtr)SrcBM_9 ;
		{

    Byte = (MR_Integer) BM->elements[N];


		;}
#undef MR_PROC_LABEL
	 Var_47  = Byte;
}
            StartBitsToSet_23 = mercury__bitmap__extract_bits_from_byte_3_f_0(Var_47, SrcStartIndex_14, NumBitsAtStart_22);
            STATE_VARIABLE_NumBits_48_48 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_NumBits_0_31 - (MR_Unsigned) NumBitsAtStart_22);
          }
          Var_50 = (MR_Integer) ((MR_Unsigned) 8 - (MR_Unsigned) EndIndex_18);
          succeeded = (Var_50 == (MR_Integer) 1);
          if (succeeded)
          {
            NumBitsAtEnd_25 = (MR_Integer) 0;
            EndBitsToSet_26 = (MR_Integer) 0;
            STATE_VARIABLE_NumBits_54_54 = STATE_VARIABLE_NumBits_48_48;
          }
          else
          {
            MR_Integer SrcPartialEndByteIndex_27;
            MR_Integer Var_52;

            NumBitsAtEnd_25 = (MR_Integer) ((MR_Unsigned) EndIndex_18 + (MR_Unsigned) 1);
            succeeded = (SrcEndBit_17 < (MR_Integer) 0);
            if (succeeded)
              SrcPartialEndByteIndex_27 = (MR_Integer) -1;
            else
              SrcPartialEndByteIndex_27 = (SrcEndBit_17 / (MR_Integer) 8);
{
#define MR_PROC_LABEL mercury__bitmap__unsafe_copy_bits_6_f_0

	MR_Integer N;
	MR_BitmapPtr BM;
	MR_Integer Byte;

	N = SrcPartialEndByteIndex_27 ;
	BM = (MR_BitmapPtr)SrcBM_9 ;
		{

    Byte = (MR_Integer) BM->elements[N];


		;}
#undef MR_PROC_LABEL
	 Var_52  = Byte;
}
            EndBitsToSet_26 = mercury__bitmap__extract_bits_from_byte_3_f_0(Var_52, (MR_Integer) 0, NumBitsAtEnd_25);
            STATE_VARIABLE_NumBits_54_54 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_NumBits_48_48 - (MR_Unsigned) NumBitsAtEnd_25);
          }
          NumBytes_70 = (STATE_VARIABLE_NumBits_54_54 / (MR_Integer) 8);
          Var_56 = (MR_Integer) ((MR_Unsigned) SrcStartBit_10 + (MR_Unsigned) NumBitsAtStart_22);
          SrcStartByteIndex_71 = (Var_56 / (MR_Integer) 8);
          Var_58 = (MR_Integer) ((MR_Unsigned) DestStartBit_12 + (MR_Unsigned) NumBitsAtStart_22);
          DestStartByteIndex_72 = (Var_58 / (MR_Integer) 8);
          STATE_VARIABLE_DestBM_60_60 = mercury__bitmap__unsafe_copy_bytes_6_f_0(SameBM_8, SrcBM_9, SrcStartByteIndex_71, STATE_VARIABLE_DestBM_0_30, DestStartByteIndex_72, NumBytes_70);
          succeeded = (NumBitsAtStart_22 == (MR_Integer) 0);
          if (succeeded)
            STATE_VARIABLE_DestBM_62_62 = STATE_VARIABLE_DestBM_60_60;
          else
          {
            MR_Integer DestPartialStartByteIndex_28 = (MR_Integer) ((MR_Unsigned) DestStartByteIndex_72 - (MR_Unsigned) 1);
            MR_Integer Var_63;
            MR_Integer Var_64;

{
#define MR_PROC_LABEL mercury__bitmap__unsafe_copy_bits_6_f_0

	MR_Integer N;
	MR_BitmapPtr BM;
	MR_Integer Byte;

	N = DestPartialStartByteIndex_28 ;
	BM = (MR_BitmapPtr)STATE_VARIABLE_DestBM_60_60 ;
		{

    Byte = (MR_Integer) BM->elements[N];


		;}
#undef MR_PROC_LABEL
	 Var_64  = Byte;
}
            Var_63 = mercury__bitmap__set_bits_in_byte_4_f_0(Var_64, SrcStartIndex_14, NumBitsAtStart_22, StartBitsToSet_23);
            STATE_VARIABLE_DestBM_62_62 = mercury__bitmap__f_117_110_115_97_102_101_95_98_121_116_101_32_58_61_3_f_0(DestPartialStartByteIndex_28, STATE_VARIABLE_DestBM_60_60, Var_63);
          }
          succeeded = (NumBitsAtEnd_25 == (MR_Integer) 0);
          if (succeeded)
            STATE_VARIABLE_DestBM_32 = STATE_VARIABLE_DestBM_62_62;
          else
          {
            MR_Integer DestPartialEndByteIndex_29 = (MR_Integer) ((MR_Unsigned) DestStartByteIndex_72 + (MR_Unsigned) NumBytes_70);
            MR_Integer Var_66;
            MR_Integer Var_67;

            Var_67 = mercury__bitmap__unsafe_byte_2_f_0(DestPartialEndByteIndex_29, STATE_VARIABLE_DestBM_62_62);
            Var_66 = mercury__bitmap__set_bits_in_byte_4_f_0(Var_67, (MR_Integer) 0, NumBitsAtEnd_25, EndBitsToSet_26);
            STATE_VARIABLE_DestBM_32 = mercury__bitmap__f_117_110_115_97_102_101_95_98_121_116_101_32_58_61_3_f_0(DestPartialEndByteIndex_29, STATE_VARIABLE_DestBM_62_62, Var_66);
          }
        }
      }
      else
        STATE_VARIABLE_DestBM_32 = mercury__bitmap__unsafe_copy_unaligned_bits_6_f_0(SameBM_8, SrcBM_9, SrcStartBit_10, STATE_VARIABLE_DestBM_0_30, DestStartBit_12, STATE_VARIABLE_NumBits_0_31);
    }
    return STATE_VARIABLE_DestBM_32;
  }
}

static MR_Integer MR_CALL 
mercury__bitmap__extract_bits_from_byte_3_f_0(
  MR_Integer Byte_5,
  MR_Integer FirstBit_6,
  MR_Integer NumBits_7)
{
  {
    MR_Integer Bits_8;
    MR_Integer LastBit_9;
    MR_Integer Shift_10;
    MR_Integer Var_11 = (MR_Integer) ((MR_Unsigned) FirstBit_6 + (MR_Unsigned) NumBits_7);
    MR_Integer Var_13;
    MR_Integer Var_16;
    MR_Integer Var_17;
    MR_Integer BitMask_20;
    MR_Integer Var_22;
    MR_Integer Var_24;

    LastBit_9 = (MR_Integer) ((MR_Unsigned) Var_11 - (MR_Unsigned) 1);
    Var_13 = (MR_Integer) ((MR_Unsigned) 8 - (MR_Unsigned) 1);
    Shift_10 = (MR_Integer) ((MR_Unsigned) Var_13 - (MR_Unsigned) LastBit_9);
    Var_16 = (Byte_5 >> Shift_10);
    Var_22 = (MR_Integer) ((MR_Unsigned) NumBits_7 - (MR_Unsigned) 1);
    BitMask_20 = ((MR_Integer) 1 << Var_22);
    Var_24 = (MR_Integer) ((MR_Unsigned) BitMask_20 - (MR_Unsigned) 1);
    Var_17 = (BitMask_20 | Var_24);
    Bits_8 = (Var_16 & Var_17);
    return Bits_8;
  }
}

static MR_Box MR_CALL 
mercury__bitmap__unsafe_copy_unaligned_bits_6_f_0(
  MR_Integer SameBM_8,
  MR_Box SrcBM_9,
  MR_Integer SrcStartBit_10,
  MR_Box STATE_VARIABLE_DestBM_0_31,
  MR_Integer DestStartBit_12,
  MR_Integer STATE_VARIABLE_NumBits_0_32)
{
  {
    MR_bool succeeded;
    MR_Box STATE_VARIABLE_DestBM_33;
    MR_Integer DestStartIndex_14 = (DestStartBit_12 % (MR_Integer) 8);
    MR_Integer DestEndBit_15;
    MR_Integer NumBitsAtStart_16;
    MR_Integer StartBits_17;
    MR_Integer NewSrcStartBit_18;
    MR_Integer NewDestStartBit_19;
    MR_Integer DestEndIndex_20;
    MR_Integer NumBitsAtEnd_21;
    MR_Integer EndBits_22;
    MR_Integer NumBytes_24;
    MR_Word Direction_25;
    MR_Integer SrcBitIndex_26;
    MR_Integer Var_34 = (MR_Integer) ((MR_Unsigned) DestStartBit_12 + (MR_Unsigned) STATE_VARIABLE_NumBits_0_32);
    MR_Integer STATE_VARIABLE_NumBits_37_37;
    MR_Integer STATE_VARIABLE_NumBits_46_46;
    MR_Box STATE_VARIABLE_DestBM_58_58;
    MR_Box STATE_VARIABLE_DestBM_62_62;
    MR_Integer Var_39;

    DestEndBit_15 = (MR_Integer) ((MR_Unsigned) Var_34 - (MR_Unsigned) 1);
    succeeded = (DestStartIndex_14 == (MR_Integer) 0);
    if (succeeded)
    {
      NumBitsAtStart_16 = (MR_Integer) 0;
      StartBits_17 = (MR_Integer) 0;
      STATE_VARIABLE_NumBits_37_37 = STATE_VARIABLE_NumBits_0_32;
    }
    else
    {
      NumBitsAtStart_16 = (MR_Integer) ((MR_Unsigned) 8 - (MR_Unsigned) DestStartIndex_14);
      StartBits_17 = mercury__bitmap__unsafe_bits_3_f_0(SrcStartBit_10, NumBitsAtStart_16, SrcBM_9);
      STATE_VARIABLE_NumBits_37_37 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_NumBits_0_32 - (MR_Unsigned) NumBitsAtStart_16);
    }
    NewSrcStartBit_18 = (MR_Integer) ((MR_Unsigned) SrcStartBit_10 + (MR_Unsigned) NumBitsAtStart_16);
    NewDestStartBit_19 = (MR_Integer) ((MR_Unsigned) DestStartBit_12 + (MR_Unsigned) NumBitsAtStart_16);
    DestEndIndex_20 = (DestEndBit_15 % (MR_Integer) 8);
    Var_39 = (MR_Integer) ((MR_Unsigned) 8 - (MR_Unsigned) DestEndIndex_20);
    succeeded = (Var_39 == (MR_Integer) 1);
    if (succeeded)
    {
      NumBitsAtEnd_21 = (MR_Integer) 0;
      EndBits_22 = (MR_Integer) 0;
      STATE_VARIABLE_NumBits_46_46 = STATE_VARIABLE_NumBits_37_37;
    }
    else
    {
      MR_Integer SrcEndBit_23;
      MR_Integer Var_41;
      MR_Integer Var_43;
      MR_Integer Var_44;

      NumBitsAtEnd_21 = (MR_Integer) ((MR_Unsigned) DestEndIndex_20 + (MR_Unsigned) 1);
      Var_41 = (MR_Integer) ((MR_Unsigned) NewSrcStartBit_18 + (MR_Unsigned) STATE_VARIABLE_NumBits_37_37);
      SrcEndBit_23 = (MR_Integer) ((MR_Unsigned) Var_41 - (MR_Unsigned) 1);
      Var_44 = (MR_Integer) ((MR_Unsigned) SrcEndBit_23 - (MR_Unsigned) NumBitsAtEnd_21);
      Var_43 = (MR_Integer) ((MR_Unsigned) Var_44 + (MR_Unsigned) 1);
      EndBits_22 = mercury__bitmap__unsafe_bits_3_f_0(Var_43, NumBitsAtEnd_21, SrcBM_9);
      STATE_VARIABLE_NumBits_46_46 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_NumBits_37_37 - (MR_Unsigned) NumBitsAtEnd_21);
    }
    NumBytes_24 = (STATE_VARIABLE_NumBits_46_46 / (MR_Integer) 8);
    succeeded = (SameBM_8 == (MR_Integer) 1);
    if (succeeded)
      succeeded = (NewSrcStartBit_18 < NewDestStartBit_19);
    if (succeeded)
      Direction_25 = (MR_Integer) 1;
    else
      Direction_25 = (MR_Integer) 0;
    SrcBitIndex_26 = (NewSrcStartBit_18 % (MR_Integer) 8);
    switch (Direction_25) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Integer SrcStartByteIndex_27;
          MR_Integer DestStartByteIndex_28;
          MR_Integer Var_59;
          MR_Integer Var_61;

          succeeded = (NewSrcStartBit_18 < (MR_Integer) 0);
          if (succeeded)
            SrcStartByteIndex_27 = (MR_Integer) -1;
          else
            SrcStartByteIndex_27 = (NewSrcStartBit_18 / (MR_Integer) 8);
          succeeded = (NewDestStartBit_19 < (MR_Integer) 0);
          if (succeeded)
            DestStartByteIndex_28 = (MR_Integer) -1;
          else
            DestStartByteIndex_28 = (NewDestStartBit_19 / (MR_Integer) 8);
          Var_59 = (MR_Integer) ((MR_Unsigned) SrcStartByteIndex_27 + (MR_Unsigned) 1);
{
#define MR_PROC_LABEL mercury__bitmap__unsafe_copy_unaligned_bits_6_f_0

	MR_Integer N;
	MR_BitmapPtr BM;
	MR_Integer Byte;

	N = SrcStartByteIndex_27 ;
	BM = (MR_BitmapPtr)SrcBM_9 ;
		{

    Byte = (MR_Integer) BM->elements[N];


		;}
#undef MR_PROC_LABEL
	 Var_61  = Byte;
}
          STATE_VARIABLE_DestBM_58_58 = mercury__bitmap__unsafe_copy_unaligned_bytes_ltor_7_f_0(SrcBM_9, Var_59, SrcBitIndex_26, Var_61, STATE_VARIABLE_DestBM_0_31, DestStartByteIndex_28, NumBytes_24);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Integer Var_48;
          MR_Integer Var_49 = (MR_Integer) ((MR_Unsigned) NewSrcStartBit_18 + (MR_Unsigned) STATE_VARIABLE_NumBits_46_46);
          MR_Integer Var_51;
          MR_Integer Var_52;
          MR_Integer Var_55;
          MR_Integer Var_57;
          MR_Integer SrcStartByteIndex_69;
          MR_Integer DestStartByteIndex_70;

          Var_48 = (MR_Integer) ((MR_Unsigned) Var_49 - (MR_Unsigned) 1);
          succeeded = (Var_48 < (MR_Integer) 0);
          if (succeeded)
            SrcStartByteIndex_69 = (MR_Integer) -1;
          else
            SrcStartByteIndex_69 = (Var_48 / (MR_Integer) 8);
          Var_52 = (MR_Integer) ((MR_Unsigned) NewDestStartBit_19 + (MR_Unsigned) STATE_VARIABLE_NumBits_46_46);
          Var_51 = (MR_Integer) ((MR_Unsigned) Var_52 - (MR_Unsigned) 1);
          succeeded = (Var_51 < (MR_Integer) 0);
          if (succeeded)
            DestStartByteIndex_70 = (MR_Integer) -1;
          else
            DestStartByteIndex_70 = (Var_51 / (MR_Integer) 8);
          Var_55 = (MR_Integer) ((MR_Unsigned) SrcStartByteIndex_69 - (MR_Unsigned) 1);
          Var_57 = mercury__bitmap__unsafe_byte_2_f_0(SrcStartByteIndex_69, SrcBM_9);
          STATE_VARIABLE_DestBM_58_58 = mercury__bitmap__unsafe_copy_unaligned_bytes_rtol_7_f_0(SrcBM_9, Var_55, SrcBitIndex_26, Var_57, STATE_VARIABLE_DestBM_0_31, DestStartByteIndex_70, NumBytes_24);
        }
        break;
    }
    succeeded = (NumBitsAtStart_16 == (MR_Integer) 0);
    if (succeeded)
      STATE_VARIABLE_DestBM_62_62 = STATE_VARIABLE_DestBM_58_58;
    else
    {
      MR_Integer PartialDestStartByteIndex_29;
      MR_Integer Var_63;
      MR_Integer Var_64;

      succeeded = (DestStartBit_12 < (MR_Integer) 0);
      if (succeeded)
        PartialDestStartByteIndex_29 = (MR_Integer) -1;
      else
        PartialDestStartByteIndex_29 = (DestStartBit_12 / (MR_Integer) 8);
      Var_64 = mercury__bitmap__unsafe_byte_2_f_0(PartialDestStartByteIndex_29, STATE_VARIABLE_DestBM_58_58);
      Var_63 = mercury__bitmap__set_bits_in_byte_4_f_0(Var_64, DestStartIndex_14, NumBitsAtStart_16, StartBits_17);
      STATE_VARIABLE_DestBM_62_62 = mercury__bitmap__f_117_110_115_97_102_101_95_98_121_116_101_32_58_61_3_f_0(PartialDestStartByteIndex_29, STATE_VARIABLE_DestBM_58_58, Var_63);
    }
    succeeded = (NumBitsAtEnd_21 == (MR_Integer) 0);
    if (succeeded)
      STATE_VARIABLE_DestBM_33 = STATE_VARIABLE_DestBM_62_62;
    else
    {
      MR_Integer PartialDestEndByteIndex_30;
      MR_Integer Var_66;
      MR_Integer Var_67;

      PartialDestEndByteIndex_30 = mercury__bitmap__byte_index_for_bit_1_f_0(DestEndBit_15);
      Var_67 = mercury__bitmap__unsafe_byte_2_f_0(PartialDestEndByteIndex_30, STATE_VARIABLE_DestBM_62_62);
      Var_66 = mercury__bitmap__set_bits_in_byte_4_f_0(Var_67, (MR_Integer) 0, NumBitsAtEnd_21, EndBits_22);
      STATE_VARIABLE_DestBM_33 = mercury__bitmap__f_117_110_115_97_102_101_95_98_121_116_101_32_58_61_3_f_0(PartialDestEndByteIndex_30, STATE_VARIABLE_DestBM_62_62, Var_66);
    }
    return STATE_VARIABLE_DestBM_33;
  }
}

static MR_Integer MR_CALL 
mercury__bitmap__set_bits_in_byte_4_f_0(
  MR_Integer Byte0_6,
  MR_Integer FirstBit_7,
  MR_Integer NumBits_8,
  MR_Integer Bits_9)
{
  {
    MR_Integer Byte_10;
    MR_Integer LastBit_11;
    MR_Integer Shift_12;
    MR_Integer Mask_13;
    MR_Integer BitsToSet_14;
    MR_Integer Var_15 = (MR_Integer) ((MR_Unsigned) FirstBit_7 + (MR_Unsigned) NumBits_8);
    MR_Integer Var_17;
    MR_Integer Var_20;
    MR_Integer Var_21;
    MR_Integer Var_22;
    MR_Integer Var_23;
    MR_Integer BitMask_26;
    MR_Integer Var_28;
    MR_Integer Var_30;

    LastBit_11 = (MR_Integer) ((MR_Unsigned) Var_15 - (MR_Unsigned) 1);
    Var_17 = (MR_Integer) ((MR_Unsigned) 8 - (MR_Unsigned) 1);
    Shift_12 = (MR_Integer) ((MR_Unsigned) Var_17 - (MR_Unsigned) LastBit_11);
    Var_28 = (MR_Integer) ((MR_Unsigned) NumBits_8 - (MR_Unsigned) 1);
    BitMask_26 = ((MR_Integer) 1 << Var_28);
    Var_30 = (MR_Integer) ((MR_Unsigned) BitMask_26 - (MR_Unsigned) 1);
    Mask_13 = (BitMask_26 | Var_30);
    BitsToSet_14 = (Mask_13 & Bits_9);
    Var_22 = (Mask_13 << Shift_12);
    Var_21 = ~(Var_22);
    Var_20 = (Byte0_6 & Var_21);
    Var_23 = (BitsToSet_14 << Shift_12);
    Byte_10 = (Var_20 | Var_23);
    return Byte_10;
  }
}

MR_Integer MR_CALL 
mercury__bitmap__byte_index_for_bit_1_f_0(
  MR_Integer I_3)
{
  {
    MR_bool succeeded = (I_3 < (MR_Integer) 0);
    MR_Integer HeadVar__2_2;

    if (succeeded)
      HeadVar__2_2 = (MR_Integer) -1;
    else
      HeadVar__2_2 = (I_3 / (MR_Integer) 8);
    return HeadVar__2_2;
  }
}

static MR_Box MR_CALL 
mercury__bitmap__unsafe_copy_unaligned_bytes_rtol_7_f_0(
  MR_Box SrcBM_9,
  MR_Integer SrcByteIndex_10,
  MR_Integer SrcBitIndex_11,
  MR_Integer PrevSrcByteBits_12,
  MR_Box STATE_VARIABLE_DestBM_0_18,
  MR_Integer DestByteIndex_14,
  MR_Integer NumBytes_15)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (NumBytes_15 <= (MR_Integer) 0);
    MR_Box STATE_VARIABLE_DestBM_19;

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
      STATE_VARIABLE_DestBM_19 = STATE_VARIABLE_DestBM_0_18;
    else
    {
      MR_Integer SrcByteBits_16;
      MR_Integer DestByteBits_17;
      MR_Integer Var_21;
      MR_Integer Var_22;
      MR_Integer Var_23;
      MR_Box STATE_VARIABLE_DestBM_25_25;
      MR_Integer Var_27;
      MR_Integer Var_29;
      MR_Integer Var_31;
      MR_Integer next_value_of_SrcByteIndex_10;
      MR_Integer next_value_of_PrevSrcByteBits_12;
      MR_Box next_value_of_STATE_VARIABLE_DestBM_0_18;
      MR_Integer next_value_of_DestByteIndex_14;
      MR_Integer next_value_of_NumBytes_15;

{
#define MR_PROC_LABEL mercury__bitmap__unsafe_copy_unaligned_bytes_rtol_7_f_0

	MR_Integer N;
	MR_BitmapPtr BM;
	MR_Integer Byte;

	N = SrcByteIndex_10 ;
	BM = (MR_BitmapPtr)SrcBM_9 ;
		{

    Byte = (MR_Integer) BM->elements[N];


		;}
#undef MR_PROC_LABEL
	 SrcByteBits_16  = Byte;
}
      Var_21 = (SrcByteBits_16 << SrcBitIndex_11);
      Var_23 = (MR_Integer) ((MR_Unsigned) 8 - (MR_Unsigned) SrcBitIndex_11);
      Var_22 = (PrevSrcByteBits_12 >> Var_23);
      DestByteBits_17 = (Var_21 | Var_22);
{
#define MR_PROC_LABEL mercury__bitmap__unsafe_copy_unaligned_bytes_rtol_7_f_0

	MR_Integer N;
	MR_BitmapPtr BM0;
	MR_Integer Byte;
	MR_BitmapPtr BM;

	N = DestByteIndex_14 ;
	BM0 = (MR_BitmapPtr)STATE_VARIABLE_DestBM_0_18 ;
	Byte = DestByteBits_17 ;
		{

    BM = BM0;
    BM->elements[N] = (MR_uint_least8_t) Byte;


		;}
#undef MR_PROC_LABEL
	 STATE_VARIABLE_DestBM_25_25  = (MR_Box) BM;
}
      Var_27 = (MR_Integer) ((MR_Unsigned) SrcByteIndex_10 - (MR_Unsigned) 1);
      Var_29 = (MR_Integer) ((MR_Unsigned) DestByteIndex_14 - (MR_Unsigned) 1);
      Var_31 = (MR_Integer) ((MR_Unsigned) NumBytes_15 - (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_SrcByteIndex_10 = Var_27;
      next_value_of_PrevSrcByteBits_12 = SrcByteBits_16;
      next_value_of_STATE_VARIABLE_DestBM_0_18 = STATE_VARIABLE_DestBM_25_25;
      next_value_of_DestByteIndex_14 = Var_29;
      next_value_of_NumBytes_15 = Var_31;
      SrcByteIndex_10 = next_value_of_SrcByteIndex_10;
      PrevSrcByteBits_12 = next_value_of_PrevSrcByteBits_12;
      STATE_VARIABLE_DestBM_0_18 = next_value_of_STATE_VARIABLE_DestBM_0_18;
      DestByteIndex_14 = next_value_of_DestByteIndex_14;
      NumBytes_15 = next_value_of_NumBytes_15;
      continue;
    }
    return STATE_VARIABLE_DestBM_19;
    break;
  }
}

static MR_Box MR_CALL 
mercury__bitmap__unsafe_copy_unaligned_bytes_ltor_7_f_0(
  MR_Box SrcBM_9,
  MR_Integer SrcByteIndex_10,
  MR_Integer SrcBitIndex_11,
  MR_Integer PrevSrcByteBits_12,
  MR_Box STATE_VARIABLE_DestBM_0_18,
  MR_Integer DestByteIndex_14,
  MR_Integer NumBytes_15)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (NumBytes_15 <= (MR_Integer) 0);
    MR_Box STATE_VARIABLE_DestBM_19;

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
      STATE_VARIABLE_DestBM_19 = STATE_VARIABLE_DestBM_0_18;
    else
    {
      MR_Integer SrcByteBits_16;
      MR_Integer DestByteBits_17;
      MR_Integer Var_21;
      MR_Integer Var_22;
      MR_Integer Var_23;
      MR_Box STATE_VARIABLE_DestBM_25_25;
      MR_Integer Var_27;
      MR_Integer Var_29;
      MR_Integer Var_31;
      MR_Integer next_value_of_SrcByteIndex_10;
      MR_Integer next_value_of_PrevSrcByteBits_12;
      MR_Box next_value_of_STATE_VARIABLE_DestBM_0_18;
      MR_Integer next_value_of_DestByteIndex_14;
      MR_Integer next_value_of_NumBytes_15;

{
#define MR_PROC_LABEL mercury__bitmap__unsafe_copy_unaligned_bytes_ltor_7_f_0

	MR_Integer N;
	MR_BitmapPtr BM;
	MR_Integer Byte;

	N = SrcByteIndex_10 ;
	BM = (MR_BitmapPtr)SrcBM_9 ;
		{

    Byte = (MR_Integer) BM->elements[N];


		;}
#undef MR_PROC_LABEL
	 SrcByteBits_16  = Byte;
}
      Var_21 = (PrevSrcByteBits_12 << SrcBitIndex_11);
      Var_23 = (MR_Integer) ((MR_Unsigned) 8 - (MR_Unsigned) SrcBitIndex_11);
      Var_22 = (SrcByteBits_16 >> Var_23);
      DestByteBits_17 = (Var_21 | Var_22);
{
#define MR_PROC_LABEL mercury__bitmap__unsafe_copy_unaligned_bytes_ltor_7_f_0

	MR_Integer N;
	MR_BitmapPtr BM0;
	MR_Integer Byte;
	MR_BitmapPtr BM;

	N = DestByteIndex_14 ;
	BM0 = (MR_BitmapPtr)STATE_VARIABLE_DestBM_0_18 ;
	Byte = DestByteBits_17 ;
		{

    BM = BM0;
    BM->elements[N] = (MR_uint_least8_t) Byte;


		;}
#undef MR_PROC_LABEL
	 STATE_VARIABLE_DestBM_25_25  = (MR_Box) BM;
}
      Var_27 = (MR_Integer) ((MR_Unsigned) SrcByteIndex_10 + (MR_Unsigned) 1);
      Var_29 = (MR_Integer) ((MR_Unsigned) DestByteIndex_14 + (MR_Unsigned) 1);
      Var_31 = (MR_Integer) ((MR_Unsigned) NumBytes_15 - (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_SrcByteIndex_10 = Var_27;
      next_value_of_PrevSrcByteBits_12 = SrcByteBits_16;
      next_value_of_STATE_VARIABLE_DestBM_0_18 = STATE_VARIABLE_DestBM_25_25;
      next_value_of_DestByteIndex_14 = Var_29;
      next_value_of_NumBytes_15 = Var_31;
      SrcByteIndex_10 = next_value_of_SrcByteIndex_10;
      PrevSrcByteBits_12 = next_value_of_PrevSrcByteBits_12;
      STATE_VARIABLE_DestBM_0_18 = next_value_of_STATE_VARIABLE_DestBM_0_18;
      DestByteIndex_14 = next_value_of_DestByteIndex_14;
      NumBytes_15 = next_value_of_NumBytes_15;
      continue;
    }
    return STATE_VARIABLE_DestBM_19;
    break;
  }
}

static MR_Box MR_CALL 
mercury__bitmap__unsafe_copy_bytes_6_f_0(
  MR_Integer SameBM_1,
  MR_Box SrcBM_2,
  MR_Integer SrcFirstByteIndex_3,
  MR_Box DestBM0_4,
  MR_Integer DestFirstByteIndex_5,
  MR_Integer NumBytes_6)
{
  {
    MR_Box DestBM_7;

{
#define MR_PROC_LABEL mercury__bitmap__unsafe_copy_bytes_6_f_0

	MR_Integer SameBM;
	MR_BitmapPtr SrcBM;
	MR_Integer SrcFirstByteIndex;
	MR_BitmapPtr DestBM0;
	MR_Integer DestFirstByteIndex;
	MR_Integer NumBytes;
	MR_BitmapPtr DestBM;

	SameBM = SameBM_1 ;
	SrcBM = (MR_BitmapPtr)SrcBM_2 ;
	SrcFirstByteIndex = SrcFirstByteIndex_3 ;
	DestBM0 = (MR_BitmapPtr)DestBM0_4 ;
	DestFirstByteIndex = DestFirstByteIndex_5 ;
	NumBytes = NumBytes_6 ;
		{

    DestBM = DestBM0;
    if (SameBM) {
        memmove(DestBM->elements + DestFirstByteIndex,
            SrcBM->elements + SrcFirstByteIndex, NumBytes);
    } else {
        MR_memcpy(DestBM->elements + DestFirstByteIndex,
            SrcBM->elements + SrcFirstByteIndex, NumBytes);
    }


		;}
#undef MR_PROC_LABEL
	 DestBM_7  = (MR_Box) DestBM;
}
    return DestBM_7;
  }
}

void MR_CALL 
mercury__bitmap__throw_bounds_error_4_p_0(
  MR_Box BM_5,
  MR_String Pred_6,
  MR_Integer Index_7,
  MR_Integer NumBits_8)
{
  {
    MR_bool succeeded = (NumBits_8 < (MR_Integer) 0);
    MR_String Msg_9;
    MR_Word Var_97;

    if (succeeded)
    {
      MR_String Var_29;
      MR_String Var_36;
      MR_String Var_38;

      mercury__string__format__format_signed_int_component_5_p_0((MR_Word) (&mercury__bitmap_scalar_common_4[0]), (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), NumBits_8, &Var_29);
      mercury__string__append_3_p_2(Var_29, (MR_String) ".", &Var_36);
      mercury__string__append_3_p_2((MR_String) ": negative number of bits: ", Var_36, &Var_38);
      mercury__string__append_3_p_2(Pred_6, Var_38, &Msg_9);
    }
    else
    {
      MR_Integer Var_26;
      MR_String Var_40;
      MR_String Var_47;
      MR_String Var_49;
      MR_String Var_50;
      MR_String Var_57;
      MR_String Var_59;
      MR_String Var_60;
      MR_String Var_67;
      MR_String Var_69;

{
#define MR_PROC_LABEL mercury__bitmap__throw_bounds_error_4_p_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr)BM_5 ;
		{

    NumBits = BM->num_bits;


		;}
#undef MR_PROC_LABEL
	 Var_26  = NumBits;
}
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&mercury__bitmap_scalar_common_4[0]), Var_26, &Var_40);
      Var_47 = mercury__string__f_43_43_2_f_0(Var_40, (MR_String) ").");
      Var_49 = mercury__string__f_43_43_2_f_0((MR_String) " is out of bounds [0, ", Var_47);
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&mercury__bitmap_scalar_common_4[0]), Index_7, &Var_50);
      Var_57 = mercury__string__f_43_43_2_f_0(Var_50, Var_49);
      Var_59 = mercury__string__f_43_43_2_f_0((MR_String) " bits starting at bit ", Var_57);
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&mercury__bitmap_scalar_common_4[0]), NumBits_8, &Var_60);
      Var_67 = mercury__string__f_43_43_2_f_0(Var_60, Var_59);
      Var_69 = mercury__string__f_43_43_2_f_0((MR_String) ": ", Var_67);
      Msg_9 = mercury__string__f_43_43_2_f_0(Pred_6, Var_69);
    }
    Var_97 = (MR_Word) (Msg_9);
    {
      mercury__exception__throw_1_p_0((MR_Word) (&mercury__bitmap__bitmap__type_ctor_info_bitmap_error_0), ((MR_Box) (Var_97)));
      return;
    }
  }
}

MR_Box MR_CALL 
mercury__bitmap__copy_1_f_0(
  MR_Box BM0_1)
{
  {
    MR_Box BM_2;

{
#define MR_PROC_LABEL mercury__bitmap__copy_1_f_0

	MR_BitmapPtr BM0;
	MR_BitmapPtr BM;

	BM0 = (MR_BitmapPtr)BM0_1 ;
		{

    MR_allocate_bitmap_msg(BM, BM0->num_bits, MR_ALLOC_ID);
    MR_copy_bitmap(BM, BM0);


		;}
#undef MR_PROC_LABEL
	 BM_2  = (MR_Box) BM;
}
    return BM_2;
  }
}

MR_bool MR_CALL 
mercury__bitmap__unsafe_is_set_2_p_0(
  MR_Box BM_3,
  MR_Integer I_4)
{
  {
    MR_bool succeeded;

    succeeded = mercury__bitmap__unsafe_is_clear_2_p_0(BM_3, I_4);
    succeeded = !(succeeded);
    return succeeded;
  }
}

void MR_CALL 
mercury__bitmap__unsafe_clear_3_p_0(
  MR_Integer I_4,
  MR_Box BM_5,
  MR_Box * HeadVar__3_3)
{
  *HeadVar__3_3 = mercury__bitmap__unsafe_clear_2_f_0(BM_5, I_4);
}

void MR_CALL 
mercury__bitmap__unsafe_set_3_p_0(
  MR_Integer I_4,
  MR_Box BM_5,
  MR_Box * HeadVar__3_3)
{
  *HeadVar__3_3 = mercury__bitmap__unsafe_set_2_f_0(BM_5, I_4);
}

void MR_CALL 
mercury__bitmap__unsafe_flip_3_p_0(
  MR_Integer I_4,
  MR_Box BM_5,
  MR_Box * HeadVar__3_3)
{
  *HeadVar__3_3 = mercury__bitmap__unsafe_flip_2_f_0(BM_5, I_4);
}

MR_bool MR_CALL 
mercury__bitmap__is_clear_2_p_0(
  MR_Box BM_3,
  MR_Integer I_4)
{
  {
    MR_bool succeeded = ((MR_Integer) 0 <= I_4);
    MR_Integer Var_9;

    if (succeeded)
    {
{
#define MR_PROC_LABEL mercury__bitmap__is_clear_2_p_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr)BM_3 ;
		{

    NumBits = BM->num_bits;


		;}
#undef MR_PROC_LABEL
	 Var_9  = NumBits;
}
      succeeded = (I_4 < Var_9);
    }
    if (succeeded)
      succeeded = mercury__bitmap__unsafe_is_clear_2_p_0(BM_3, I_4);
    else
    {
      mercury__bitmap__throw_bit_bounds_error_3_p_0(BM_3, (MR_String) "bitmap.is_clear", I_4);
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__bitmap__is_set_2_p_0(
  MR_Box BM_3,
  MR_Integer I_4)
{
  {
    MR_bool succeeded = ((MR_Integer) 0 <= I_4);
    MR_Integer Var_9;

    if (succeeded)
    {
{
#define MR_PROC_LABEL mercury__bitmap__is_set_2_p_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr)BM_3 ;
		{

    NumBits = BM->num_bits;


		;}
#undef MR_PROC_LABEL
	 Var_9  = NumBits;
}
      succeeded = (I_4 < Var_9);
    }
    if (succeeded)
    {
      succeeded = mercury__bitmap__unsafe_is_clear_2_p_0(BM_3, I_4);
      succeeded = !(succeeded);
    }
    else
    {
      mercury__bitmap__throw_bit_bounds_error_3_p_0(BM_3, (MR_String) "bitmap.is_set", I_4);
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

MR_Box MR_CALL 
mercury__bitmap__clear_2_f_0(
  MR_Box STATE_VARIABLE_BM_0_6,
  MR_Integer I_5)
{
  {
    MR_Box STATE_VARIABLE_BM_7;

    mercury__bitmap__clear_3_p_0(I_5, STATE_VARIABLE_BM_0_6, &STATE_VARIABLE_BM_7);
    return STATE_VARIABLE_BM_7;
  }
}

void MR_CALL 
mercury__bitmap__clear_3_p_0(
  MR_Integer I_4,
  MR_Box STATE_VARIABLE_BM_0_6,
  MR_Box * STATE_VARIABLE_BM_7)
{
  {
    MR_bool succeeded = ((MR_Integer) 0 <= I_4);
    MR_Integer Var_13;

    if (succeeded)
    {
{
#define MR_PROC_LABEL mercury__bitmap__clear_3_p_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr)STATE_VARIABLE_BM_0_6 ;
		{

    NumBits = BM->num_bits;


		;}
#undef MR_PROC_LABEL
	 Var_13  = NumBits;
}
      succeeded = (I_4 < Var_13);
    }
    if (succeeded)
      *STATE_VARIABLE_BM_7 = mercury__bitmap__unsafe_clear_2_f_0(STATE_VARIABLE_BM_0_6, I_4);
    else
      {
        mercury__bitmap__throw_bit_bounds_error_3_p_0(STATE_VARIABLE_BM_0_6, (MR_String) "bitmap.clear", I_4);
        return;
      }
  }
}

MR_Box MR_CALL 
mercury__bitmap__set_2_f_0(
  MR_Box STATE_VARIABLE_BM_0_6,
  MR_Integer I_5)
{
  {
    MR_Box STATE_VARIABLE_BM_7;

    mercury__bitmap__set_3_p_0(I_5, STATE_VARIABLE_BM_0_6, &STATE_VARIABLE_BM_7);
    return STATE_VARIABLE_BM_7;
  }
}

void MR_CALL 
mercury__bitmap__set_3_p_0(
  MR_Integer I_4,
  MR_Box STATE_VARIABLE_BM_0_6,
  MR_Box * STATE_VARIABLE_BM_7)
{
  {
    MR_bool succeeded = ((MR_Integer) 0 <= I_4);
    MR_Integer Var_13;

    if (succeeded)
    {
{
#define MR_PROC_LABEL mercury__bitmap__set_3_p_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr)STATE_VARIABLE_BM_0_6 ;
		{

    NumBits = BM->num_bits;


		;}
#undef MR_PROC_LABEL
	 Var_13  = NumBits;
}
      succeeded = (I_4 < Var_13);
    }
    if (succeeded)
      *STATE_VARIABLE_BM_7 = mercury__bitmap__unsafe_set_2_f_0(STATE_VARIABLE_BM_0_6, I_4);
    else
      {
        mercury__bitmap__throw_bit_bounds_error_3_p_0(STATE_VARIABLE_BM_0_6, (MR_String) "bitmap.set", I_4);
        return;
      }
  }
}

MR_Box MR_CALL 
mercury__bitmap__flip_2_f_0(
  MR_Box STATE_VARIABLE_BM_0_6,
  MR_Integer I_5)
{
  {
    MR_Box STATE_VARIABLE_BM_7;

    mercury__bitmap__flip_3_p_0(I_5, STATE_VARIABLE_BM_0_6, &STATE_VARIABLE_BM_7);
    return STATE_VARIABLE_BM_7;
  }
}

void MR_CALL 
mercury__bitmap__flip_3_p_0(
  MR_Integer I_4,
  MR_Box STATE_VARIABLE_BM_0_6,
  MR_Box * STATE_VARIABLE_BM_7)
{
  {
    MR_bool succeeded = ((MR_Integer) 0 <= I_4);
    MR_Integer Var_13;

    if (succeeded)
    {
{
#define MR_PROC_LABEL mercury__bitmap__flip_3_p_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr)STATE_VARIABLE_BM_0_6 ;
		{

    NumBits = BM->num_bits;


		;}
#undef MR_PROC_LABEL
	 Var_13  = NumBits;
}
      succeeded = (I_4 < Var_13);
    }
    if (succeeded)
      *STATE_VARIABLE_BM_7 = mercury__bitmap__unsafe_flip_2_f_0(STATE_VARIABLE_BM_0_6, I_4);
    else
      {
        mercury__bitmap__throw_bit_bounds_error_3_p_0(STATE_VARIABLE_BM_0_6, (MR_String) "bitmap.flip", I_4);
        return;
      }
  }
}

MR_Box MR_CALL 
mercury__bitmap__unsafe_flip_2_f_0(
  MR_Box BM0_4,
  MR_Integer I_5)
{
  {
    MR_bool succeeded = (I_5 < (MR_Integer) 0);
    MR_Box BM_6;
    MR_Integer ByteIndex_7;
    MR_Integer Byte0_8;
    MR_Integer Byte_9;
    MR_Integer Var_10;
    MR_Integer Var_20;
    MR_Integer Var_21;
    MR_Integer Var_24;

    if (succeeded)
      ByteIndex_7 = (MR_Integer) -1;
    else
      ByteIndex_7 = (I_5 / (MR_Integer) 8);
{
#define MR_PROC_LABEL mercury__bitmap__unsafe_flip_2_f_0

	MR_Integer N;
	MR_BitmapPtr BM;
	MR_Integer Byte;

	N = ByteIndex_7 ;
	BM = (MR_BitmapPtr)BM0_4 ;
		{

    Byte = (MR_Integer) BM->elements[N];


		;}
#undef MR_PROC_LABEL
	 Byte0_8  = Byte;
}
    Var_21 = (MR_Integer) ((MR_Unsigned) 8 - (MR_Unsigned) 1);
    Var_24 = (I_5 % (MR_Integer) 8);
    Var_20 = (MR_Integer) ((MR_Unsigned) Var_21 - (MR_Unsigned) Var_24);
    Var_10 = ((MR_Integer) 1 << Var_20);
    Byte_9 = (Byte0_8 ^ Var_10);
{
#define MR_PROC_LABEL mercury__bitmap__unsafe_flip_2_f_0

	MR_Integer N;
	MR_BitmapPtr BM0;
	MR_Integer Byte;
	MR_BitmapPtr BM;

	N = ByteIndex_7 ;
	BM0 = (MR_BitmapPtr)BM0_4 ;
	Byte = Byte_9 ;
		{

    BM = BM0;
    BM->elements[N] = (MR_uint_least8_t) Byte;


		;}
#undef MR_PROC_LABEL
	 BM_6  = (MR_Box) BM;
}
    return BM_6;
  }
}

void MR_CALL 
mercury__bitmap__unsafe_set_uint8_4_p_0(
  MR_Integer N_1,
  uint8_t U8_2,
  MR_Box BM0_3,
  MR_Box * BM_4)
{
  {
{
#define MR_PROC_LABEL mercury__bitmap__unsafe_set_uint8_4_p_0

	MR_Integer N;
	uint8_t U8;
	MR_BitmapPtr BM0;
	MR_BitmapPtr BM;

	N = N_1 ;
	U8 = U8_2 ;
	BM0 = (MR_BitmapPtr)BM0_3 ;
		{

    BM = BM0;
    BM->elements[N] = (MR_uint_least8_t) U8;


		;}
#undef MR_PROC_LABEL
	 *BM_4  = (MR_Box) BM;
}
  }
}

void MR_CALL 
mercury__bitmap__set_uint8_4_p_0(
  MR_Integer N_5,
  uint8_t U8_6,
  MR_Box STATE_VARIABLE_BM_0_8,
  MR_Box * STATE_VARIABLE_BM_9)
{
  {
    MR_bool succeeded;

    succeeded = mercury__bitmap__byte_in_range_2_p_0(STATE_VARIABLE_BM_0_8, N_5);
    if (succeeded)
    {
{
#define MR_PROC_LABEL mercury__bitmap__set_uint8_4_p_0

	MR_Integer N;
	uint8_t U8;
	MR_BitmapPtr BM0;
	MR_BitmapPtr BM;

	N = N_5 ;
	U8 = U8_6 ;
	BM0 = (MR_BitmapPtr)STATE_VARIABLE_BM_0_8 ;
		{

    BM = BM0;
    BM->elements[N] = (MR_uint_least8_t) U8;


		;}
#undef MR_PROC_LABEL
	 *STATE_VARIABLE_BM_9  = (MR_Box) BM;
}
    }
    else
      {
        mercury__bitmap__throw_byte_bounds_error_3_p_0(STATE_VARIABLE_BM_0_8, (MR_String) "bitmap.set_uint", N_5);
        return;
      }
  }
}

uint8_t MR_CALL 
mercury__bitmap__unsafe_get_uint8_2_f_0(
  MR_Box BM_1,
  MR_Integer N_2)
{
  {
    uint8_t U8_3;

{
#define MR_PROC_LABEL mercury__bitmap__unsafe_get_uint8_2_f_0

	MR_BitmapPtr BM;
	MR_Integer N;
	uint8_t U8;

	BM = (MR_BitmapPtr)BM_1 ;
	N = N_2 ;
		{

    U8 = (uint8_t) BM->elements[N];


		;}
#undef MR_PROC_LABEL
	 U8_3  = U8;
}
    return U8_3;
  }
}

uint8_t MR_CALL 
mercury__bitmap__get_uint8_2_f_0(
  MR_Box BM_4,
  MR_Integer N_5)
{
  {
    MR_bool succeeded;
    uint8_t U8_6;

    succeeded = mercury__bitmap__byte_in_range_2_p_0(BM_4, N_5);
    if (succeeded)
    {
{
#define MR_PROC_LABEL mercury__bitmap__get_uint8_2_f_0

	MR_BitmapPtr BM;
	MR_Integer N;
	uint8_t U8;

	BM = (MR_BitmapPtr)BM_4 ;
	N = N_5 ;
		{

    U8 = (uint8_t) BM->elements[N];


		;}
#undef MR_PROC_LABEL
	 U8_6  = U8;
}
    }
    else
      mercury__bitmap__throw_byte_bounds_error_3_p_0(BM_4, (MR_String) "bitmap.get_uint8", N_5);
    return U8_6;
  }
}

MR_Box MR_CALL 
mercury__bitmap__f_117_110_115_97_102_101_95_98_121_116_101_32_58_61_3_f_0(
  MR_Integer N_1,
  MR_Box BM0_2,
  MR_Integer Byte_3)
{
  {
    MR_Box BM_4;

{
#define MR_PROC_LABEL mercury__bitmap__f_117_110_115_97_102_101_95_98_121_116_101_32_58_61_3_f_0

	MR_Integer N;
	MR_BitmapPtr BM0;
	MR_Integer Byte;
	MR_BitmapPtr BM;

	N = N_1 ;
	BM0 = (MR_BitmapPtr)BM0_2 ;
	Byte = Byte_3 ;
		{

    BM = BM0;
    BM->elements[N] = (MR_uint_least8_t) Byte;


		;}
#undef MR_PROC_LABEL
	 BM_4  = (MR_Box) BM;
}
    return BM_4;
  }
}

MR_Box MR_CALL 
mercury__bitmap__f_98_121_116_101_32_58_61_3_f_0(
  MR_Integer N_6,
  MR_Box STATE_VARIABLE_BM_0_8,
  MR_Integer Byte_7)
{
  {
    MR_bool succeeded;
    MR_Box STATE_VARIABLE_BM_9;

    succeeded = mercury__bitmap__byte_in_range_2_p_0(STATE_VARIABLE_BM_0_8, N_6);
    if (succeeded)
    {
{
#define MR_PROC_LABEL mercury__bitmap__f_98_121_116_101_32_58_61_3_f_0

	MR_Integer N;
	MR_BitmapPtr BM0;
	MR_Integer Byte;
	MR_BitmapPtr BM;

	N = N_6 ;
	BM0 = (MR_BitmapPtr)STATE_VARIABLE_BM_0_8 ;
	Byte = Byte_7 ;
		{

    BM = BM0;
    BM->elements[N] = (MR_uint_least8_t) Byte;


		;}
#undef MR_PROC_LABEL
	 STATE_VARIABLE_BM_9  = (MR_Box) BM;
}
    }
    else
      mercury__bitmap__throw_byte_bounds_error_3_p_0(STATE_VARIABLE_BM_0_8, (MR_String) "bitmap.\'byte :=\'", N_6);
    return STATE_VARIABLE_BM_9;
  }
}

MR_Integer MR_CALL 
mercury__bitmap__unsafe_byte_2_f_0(
  MR_Integer N_1,
  MR_Box BM_2)
{
  {
    MR_Integer Byte_3;

{
#define MR_PROC_LABEL mercury__bitmap__unsafe_byte_2_f_0

	MR_Integer N;
	MR_BitmapPtr BM;
	MR_Integer Byte;

	N = N_1 ;
	BM = (MR_BitmapPtr)BM_2 ;
		{

    Byte = (MR_Integer) BM->elements[N];


		;}
#undef MR_PROC_LABEL
	 Byte_3  = Byte;
}
    return Byte_3;
  }
}

MR_Integer MR_CALL 
mercury__bitmap__byte_2_f_0(
  MR_Integer N_5,
  MR_Box BM_4)
{
  {
    MR_bool succeeded;
    MR_Integer Byte_6;

    succeeded = mercury__bitmap__byte_in_range_2_p_0(BM_4, N_5);
    if (succeeded)
    {
{
#define MR_PROC_LABEL mercury__bitmap__byte_2_f_0

	MR_Integer N;
	MR_BitmapPtr BM;
	MR_Integer Byte;

	N = N_5 ;
	BM = (MR_BitmapPtr)BM_4 ;
		{

    Byte = (MR_Integer) BM->elements[N];


		;}
#undef MR_PROC_LABEL
	 Byte_6  = Byte;
}
    }
    else
      mercury__bitmap__throw_byte_bounds_error_3_p_0(BM_4, (MR_String) "bitmap.byte", N_5);
    return Byte_6;
  }
}

void MR_CALL 
mercury__bitmap__throw_byte_bounds_error_3_p_0(
  MR_Box BM_4,
  MR_String Pred_5,
  MR_Integer ByteIndex_6)
{
  {
    MR_String Msg_7;
    MR_Integer Var_15;
    MR_Integer Var_16;
    MR_String Var_20;
    MR_String Var_27;
    MR_String Var_29;
    MR_String Var_30;
    MR_String Var_37;
    MR_String Var_39;
    MR_Word Var_93;

{
#define MR_PROC_LABEL mercury__bitmap__throw_byte_bounds_error_3_p_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr)BM_4 ;
		{

    NumBits = BM->num_bits;


		;}
#undef MR_PROC_LABEL
	 Var_16  = NumBits;
}
    Var_15 = (Var_16 / (MR_Integer) 8);
    mercury__string__format__format_signed_int_component_5_p_0((MR_Word) (&mercury__bitmap_scalar_common_4[0]), (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), Var_15, &Var_20);
    mercury__string__append_3_p_2(Var_20, (MR_String) ").", &Var_27);
    mercury__string__append_3_p_2((MR_String) " is out of bounds [0, ", Var_27, &Var_29);
    mercury__string__format__format_signed_int_component_5_p_0((MR_Word) (&mercury__bitmap_scalar_common_4[0]), (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), ByteIndex_6, &Var_30);
    mercury__string__append_3_p_2(Var_30, Var_29, &Var_37);
    mercury__string__append_3_p_2((MR_String) ": byte index ", Var_37, &Var_39);
    mercury__string__append_3_p_2(Pred_5, Var_39, &Msg_7);
    Var_93 = (MR_Word) (Msg_7);
    {
      mercury__exception__throw_1_p_0((MR_Word) (&mercury__bitmap__bitmap__type_ctor_info_bitmap_error_0), ((MR_Box) (Var_93)));
      return;
    }
  }
}

MR_Box MR_CALL 
mercury__bitmap__f_98_105_116_115_32_58_61_4_f_0(
  MR_Integer FirstBit_7,
  MR_Integer NumBits_8,
  MR_Box STATE_VARIABLE_BM_0_10,
  MR_Integer Bits_9)
{
  {
    MR_bool succeeded = (FirstBit_7 >= (MR_Integer) 0);
    MR_Box STATE_VARIABLE_BM_11;
    MR_Integer Var_13;
    MR_Integer Var_14;
    MR_Integer Var_15;
    MR_Integer Var_26;
    MR_Integer Var_27;

    if (succeeded)
    {
      Var_13 = (MR_Integer) 0;
      succeeded = (NumBits_8 >= Var_13);
      if (succeeded)
      {
{
#define MR_PROC_LABEL mercury__bitmap__f_98_105_116_115_32_58_61_4_f_0

	MR_Integer Bits;

		{

    Bits = ML_BITS_PER_INT;


		;}
#undef MR_PROC_LABEL
	 Var_14  = Bits;
}
        succeeded = (NumBits_8 <= Var_14);
        if (succeeded)
        {
          Var_15 = (MR_Integer) ((MR_Unsigned) FirstBit_7 + (MR_Unsigned) NumBits_8);
          Var_26 = (MR_Integer) 0;
          succeeded = (Var_26 <= Var_15);
          if (succeeded)
          {
{
#define MR_PROC_LABEL mercury__bitmap__f_98_105_116_115_32_58_61_4_f_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr)STATE_VARIABLE_BM_0_10 ;
		{

    NumBits = BM->num_bits;


		;}
#undef MR_PROC_LABEL
	 Var_27  = NumBits;
}
            succeeded = (Var_15 <= Var_27);
          }
        }
      }
    }
    if (succeeded)
      STATE_VARIABLE_BM_11 = mercury__bitmap__f_117_110_115_97_102_101_95_98_105_116_115_32_58_61_4_f_0(FirstBit_7, NumBits_8, STATE_VARIABLE_BM_0_10, Bits_9);
    else
    {
      succeeded = (NumBits_8 < (MR_Integer) 0);
      if (!(succeeded))
      {
        MR_Integer Var_17;

{
#define MR_PROC_LABEL mercury__bitmap__f_98_105_116_115_32_58_61_4_f_0

	MR_Integer Bits;

		{

    Bits = ML_BITS_PER_INT;


		;}
#undef MR_PROC_LABEL
	 Var_17  = Bits;
}
        succeeded = (NumBits_8 > Var_17);
      }
      if (succeeded)
        mercury__exception__throw_1_p_0((MR_Word) (&mercury__bitmap__bitmap__type_ctor_info_bitmap_error_0), ((MR_Box) (((MR_Box) ((MR_String) "bitmap.\'bits :=\': number of bits must be between 0 and \140int.bits_per_int\'.")))));
      else
        mercury__bitmap__throw_bit_bounds_error_3_p_0(STATE_VARIABLE_BM_0_10, (MR_String) "bitmap.\'bits :=\'", FirstBit_7);
    }
    return STATE_VARIABLE_BM_11;
  }
}

MR_Box MR_CALL 
mercury__bitmap__f_117_110_115_97_102_101_95_98_105_116_115_32_58_61_4_f_0(
  MR_Integer FirstBit_7,
  MR_Integer NumBits_8,
  MR_Box BM0_6,
  MR_Integer Bits_9)
{
  {
    MR_bool succeeded;
    MR_Box BM_10;
    MR_Integer LastBit_11;
    MR_Integer LastByteIndex_12;
    MR_Integer LastBitIndex_13;
    MR_Integer Var_14 = (MR_Integer) ((MR_Unsigned) FirstBit_7 + (MR_Unsigned) NumBits_8);

    LastBit_11 = (MR_Integer) ((MR_Unsigned) Var_14 - (MR_Unsigned) 1);
    succeeded = (LastBit_11 < (MR_Integer) 0);
    if (succeeded)
      LastByteIndex_12 = (MR_Integer) -1;
    else
      LastByteIndex_12 = (LastBit_11 / (MR_Integer) 8);
    LastBitIndex_13 = (LastBit_11 % (MR_Integer) 8);
    mercury__bitmap__set_bits_in_bytes_6_p_0(LastByteIndex_12, LastBitIndex_13, NumBits_8, Bits_9, BM0_6, &BM_10);
    return BM_10;
  }
}

void MR_CALL 
mercury__bitmap__set_bits_in_bytes_6_p_0(
  MR_Integer LastByteIndex_7,
  MR_Integer LastBitIndex_8,
  MR_Integer NumBits_9,
  MR_Integer Bits_10,
  MR_Box STATE_VARIABLE_BM_0_14,
  MR_Box * STATE_VARIABLE_BM_15)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Integer RemainingBitsInByte_12 = (MR_Integer) ((MR_Unsigned) LastBitIndex_8 + (MR_Unsigned) 1);

    // setup for model_det tailcalls optimized into a loop
    ;
    succeeded = (NumBits_9 > RemainingBitsInByte_12);
    if (succeeded)
    {
      MR_Box STATE_VARIABLE_BM_17_17;
      MR_Integer Var_18;
      MR_Integer Var_19;
      MR_Integer Var_20;
      MR_Integer Var_21;
      MR_Integer FirstBitInByte_35;
      MR_Integer Var_36 = (MR_Integer) ((MR_Unsigned) LastBitIndex_8 - (MR_Unsigned) RemainingBitsInByte_12);
      MR_Integer Var_39;
      MR_Integer Var_40;
      MR_Integer LastBit_50;
      MR_Integer Shift_51;
      MR_Integer Mask_52;
      MR_Integer BitsToSet_53;
      MR_Integer Var_54;
      MR_Integer Var_56;
      MR_Integer Var_59;
      MR_Integer Var_60;
      MR_Integer Var_61;
      MR_Integer Var_62;
      MR_Integer BitMask_65;
      MR_Integer Var_67;
      MR_Integer Var_69;
      MR_Integer next_value_of_LastByteIndex_7;
      MR_Integer next_value_of_LastBitIndex_8;
      MR_Integer next_value_of_NumBits_9;
      MR_Integer next_value_of_Bits_10;
      MR_Box next_value_of_STATE_VARIABLE_BM_0_14;

      FirstBitInByte_35 = (MR_Integer) ((MR_Unsigned) Var_36 + (MR_Unsigned) 1);
{
#define MR_PROC_LABEL mercury__bitmap__set_bits_in_bytes_6_p_0

	MR_Integer N;
	MR_BitmapPtr BM;
	MR_Integer Byte;

	N = LastByteIndex_7 ;
	BM = (MR_BitmapPtr)STATE_VARIABLE_BM_0_14 ;
		{

    Byte = (MR_Integer) BM->elements[N];


		;}
#undef MR_PROC_LABEL
	 Var_40  = Byte;
}
      Var_54 = (MR_Integer) ((MR_Unsigned) FirstBitInByte_35 + (MR_Unsigned) RemainingBitsInByte_12);
      LastBit_50 = (MR_Integer) ((MR_Unsigned) Var_54 - (MR_Unsigned) 1);
      Var_56 = (MR_Integer) ((MR_Unsigned) 8 - (MR_Unsigned) 1);
      Shift_51 = (MR_Integer) ((MR_Unsigned) Var_56 - (MR_Unsigned) LastBit_50);
      Var_67 = (MR_Integer) ((MR_Unsigned) RemainingBitsInByte_12 - (MR_Unsigned) 1);
      BitMask_65 = ((MR_Integer) 1 << Var_67);
      Var_69 = (MR_Integer) ((MR_Unsigned) BitMask_65 - (MR_Unsigned) 1);
      Mask_52 = (BitMask_65 | Var_69);
      BitsToSet_53 = (Mask_52 & Bits_10);
      Var_61 = (Mask_52 << Shift_51);
      Var_60 = ~(Var_61);
      Var_59 = (Var_40 & Var_60);
      Var_62 = (BitsToSet_53 << Shift_51);
      Var_39 = (Var_59 | Var_62);
{
#define MR_PROC_LABEL mercury__bitmap__set_bits_in_bytes_6_p_0

	MR_Integer N;
	MR_BitmapPtr BM0;
	MR_Integer Byte;
	MR_BitmapPtr BM;

	N = LastByteIndex_7 ;
	BM0 = (MR_BitmapPtr)STATE_VARIABLE_BM_0_14 ;
	Byte = Var_39 ;
		{

    BM = BM0;
    BM->elements[N] = (MR_uint_least8_t) Byte;


		;}
#undef MR_PROC_LABEL
	 STATE_VARIABLE_BM_17_17  = (MR_Box) BM;
}
      Var_18 = (MR_Integer) ((MR_Unsigned) LastByteIndex_7 - (MR_Unsigned) 1);
      Var_19 = (MR_Integer) ((MR_Unsigned) 8 - (MR_Unsigned) 1);
      Var_20 = (MR_Integer) ((MR_Unsigned) NumBits_9 - (MR_Unsigned) RemainingBitsInByte_12);
      Var_21 = (Bits_10 >> RemainingBitsInByte_12);
      // direct tailcall eliminated
      ;
      next_value_of_LastByteIndex_7 = Var_18;
      next_value_of_LastBitIndex_8 = Var_19;
      next_value_of_NumBits_9 = Var_20;
      next_value_of_Bits_10 = Var_21;
      next_value_of_STATE_VARIABLE_BM_0_14 = STATE_VARIABLE_BM_17_17;
      LastByteIndex_7 = next_value_of_LastByteIndex_7;
      LastBitIndex_8 = next_value_of_LastBitIndex_8;
      NumBits_9 = next_value_of_NumBits_9;
      Bits_10 = next_value_of_Bits_10;
      STATE_VARIABLE_BM_0_14 = next_value_of_STATE_VARIABLE_BM_0_14;
      continue;
    }
    else
    {
      succeeded = (NumBits_9 > (MR_Integer) 0);
      if (succeeded)
        mercury__bitmap__set_bits_in_byte_index_6_p_0(LastByteIndex_7, LastBitIndex_8, NumBits_9, Bits_10, STATE_VARIABLE_BM_0_14, STATE_VARIABLE_BM_15);
      else
        *STATE_VARIABLE_BM_15 = STATE_VARIABLE_BM_0_14;
    }
    break;
  }
}

static void MR_CALL 
mercury__bitmap__set_bits_in_byte_index_6_p_0(
  MR_Integer ByteIndex_7,
  MR_Integer LastBitIndex_8,
  MR_Integer NumBitsThisByte_9,
  MR_Integer Bits_10,
  MR_Box STATE_VARIABLE_BM_0_13,
  MR_Box * STATE_VARIABLE_BM_14)
{
  {
    MR_Integer FirstBitInByte_12;
    MR_Integer Var_15 = (MR_Integer) ((MR_Unsigned) LastBitIndex_8 - (MR_Unsigned) NumBitsThisByte_9);
    MR_Integer Var_18;
    MR_Integer Var_19;
    MR_Integer LastBit_29;
    MR_Integer Shift_30;
    MR_Integer Mask_31;
    MR_Integer BitsToSet_32;
    MR_Integer Var_33;
    MR_Integer Var_35;
    MR_Integer Var_38;
    MR_Integer Var_39;
    MR_Integer Var_40;
    MR_Integer Var_41;
    MR_Integer BitMask_44;
    MR_Integer Var_46;
    MR_Integer Var_48;

    FirstBitInByte_12 = (MR_Integer) ((MR_Unsigned) Var_15 + (MR_Unsigned) 1);
{
#define MR_PROC_LABEL mercury__bitmap__set_bits_in_byte_index_6_p_0

	MR_Integer N;
	MR_BitmapPtr BM;
	MR_Integer Byte;

	N = ByteIndex_7 ;
	BM = (MR_BitmapPtr)STATE_VARIABLE_BM_0_13 ;
		{

    Byte = (MR_Integer) BM->elements[N];


		;}
#undef MR_PROC_LABEL
	 Var_19  = Byte;
}
    Var_33 = (MR_Integer) ((MR_Unsigned) FirstBitInByte_12 + (MR_Unsigned) NumBitsThisByte_9);
    LastBit_29 = (MR_Integer) ((MR_Unsigned) Var_33 - (MR_Unsigned) 1);
    Var_35 = (MR_Integer) ((MR_Unsigned) 8 - (MR_Unsigned) 1);
    Shift_30 = (MR_Integer) ((MR_Unsigned) Var_35 - (MR_Unsigned) LastBit_29);
    Var_46 = (MR_Integer) ((MR_Unsigned) NumBitsThisByte_9 - (MR_Unsigned) 1);
    BitMask_44 = ((MR_Integer) 1 << Var_46);
    Var_48 = (MR_Integer) ((MR_Unsigned) BitMask_44 - (MR_Unsigned) 1);
    Mask_31 = (BitMask_44 | Var_48);
    BitsToSet_32 = (Mask_31 & Bits_10);
    Var_40 = (Mask_31 << Shift_30);
    Var_39 = ~(Var_40);
    Var_38 = (Var_19 & Var_39);
    Var_41 = (BitsToSet_32 << Shift_30);
    Var_18 = (Var_38 | Var_41);
{
#define MR_PROC_LABEL mercury__bitmap__set_bits_in_byte_index_6_p_0

	MR_Integer N;
	MR_BitmapPtr BM0;
	MR_Integer Byte;
	MR_BitmapPtr BM;

	N = ByteIndex_7 ;
	BM0 = (MR_BitmapPtr)STATE_VARIABLE_BM_0_13 ;
	Byte = Var_18 ;
		{

    BM = BM0;
    BM->elements[N] = (MR_uint_least8_t) Byte;


		;}
#undef MR_PROC_LABEL
	 *STATE_VARIABLE_BM_14  = (MR_Box) BM;
}
  }
}

MR_Integer MR_CALL 
mercury__bitmap__bits_3_f_0(
  MR_Integer FirstBit_6,
  MR_Integer NumBits_7,
  MR_Box BM_5)
{
  {
    MR_bool succeeded = (FirstBit_6 >= (MR_Integer) 0);
    MR_Integer Word_8;
    MR_Integer Var_10;
    MR_Integer Var_11;
    MR_Integer Var_12;
    MR_Integer Var_22;
    MR_Integer Var_23;

    if (succeeded)
    {
      Var_10 = (MR_Integer) 0;
      succeeded = (NumBits_7 >= Var_10);
      if (succeeded)
      {
{
#define MR_PROC_LABEL mercury__bitmap__bits_3_f_0

	MR_Integer Bits;

		{

    Bits = ML_BITS_PER_INT;


		;}
#undef MR_PROC_LABEL
	 Var_11  = Bits;
}
        succeeded = (NumBits_7 <= Var_11);
        if (succeeded)
        {
          Var_12 = (MR_Integer) ((MR_Unsigned) FirstBit_6 + (MR_Unsigned) NumBits_7);
          Var_22 = (MR_Integer) 0;
          succeeded = (Var_22 <= Var_12);
          if (succeeded)
          {
{
#define MR_PROC_LABEL mercury__bitmap__bits_3_f_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr)BM_5 ;
		{

    NumBits = BM->num_bits;


		;}
#undef MR_PROC_LABEL
	 Var_23  = NumBits;
}
            succeeded = (Var_12 <= Var_23);
          }
        }
      }
    }
    if (succeeded)
      Word_8 = mercury__bitmap__unsafe_bits_3_f_0(FirstBit_6, NumBits_7, BM_5);
    else
    {
      succeeded = (NumBits_7 < (MR_Integer) 0);
      if (!(succeeded))
      {
        MR_Integer Var_13;

{
#define MR_PROC_LABEL mercury__bitmap__bits_3_f_0

	MR_Integer Bits;

		{

    Bits = ML_BITS_PER_INT;


		;}
#undef MR_PROC_LABEL
	 Var_13  = Bits;
}
        succeeded = (NumBits_7 > Var_13);
      }
      if (succeeded)
        mercury__exception__throw_1_p_0((MR_Word) (&mercury__bitmap__bitmap__type_ctor_info_bitmap_error_0), ((MR_Box) (((MR_Box) ((MR_String) "bitmap.bits: number of bits must be between 0 and \140int.bits_per_int\'.")))));
      else
        mercury__bitmap__throw_bit_bounds_error_3_p_0(BM_5, (MR_String) "bitmap.bits", FirstBit_6);
    }
    return Word_8;
  }
}

MR_Integer MR_CALL 
mercury__bitmap__unsafe_bits_3_f_0(
  MR_Integer FirstBit_6,
  MR_Integer NumBits_7,
  MR_Box BM_5)
{
  {
    MR_bool succeeded = (FirstBit_6 < (MR_Integer) 0);
    MR_Integer Bits_8;
    MR_Integer FirstByteIndex_9;
    MR_Integer FirstBitIndex_10;

    if (succeeded)
      FirstByteIndex_9 = (MR_Integer) -1;
    else
      FirstByteIndex_9 = (FirstBit_6 / (MR_Integer) 8);
    FirstBitIndex_10 = (FirstBit_6 % (MR_Integer) 8);
    mercury__bitmap__extract_bits_from_bytes_6_p_0(FirstByteIndex_9, FirstBitIndex_10, NumBits_7, BM_5, (MR_Integer) 0, &Bits_8);
    return Bits_8;
  }
}

void MR_CALL 
mercury__bitmap__extract_bits_from_bytes_6_p_0(
  MR_Integer FirstByteIndex_7,
  MR_Integer FirstBitIndex_8,
  MR_Integer NumBits_9,
  MR_Box BM_10,
  MR_Integer STATE_VARIABLE_Bits_0_14,
  MR_Integer * STATE_VARIABLE_Bits_15)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Integer RemainingBitsInByte_12 = (MR_Integer) ((MR_Unsigned) 8 - (MR_Unsigned) FirstBitIndex_8);

    // setup for model_det tailcalls optimized into a loop
    ;
    succeeded = (NumBits_9 > RemainingBitsInByte_12);
    if (succeeded)
    {
      MR_Integer STATE_VARIABLE_Bits_17_17;
      MR_Integer Var_18;
      MR_Integer Var_20;
      MR_Integer BitsThisByte_32;
      MR_Integer Var_33;
      MR_Integer Var_35;
      MR_Integer LastBit_44;
      MR_Integer Shift_45;
      MR_Integer Var_46;
      MR_Integer Var_48;
      MR_Integer Var_51;
      MR_Integer Var_52;
      MR_Integer BitMask_55;
      MR_Integer Var_57;
      MR_Integer Var_59;
      MR_Integer next_value_of_FirstByteIndex_7;
      MR_Integer next_value_of_NumBits_9;
      MR_Integer next_value_of_STATE_VARIABLE_Bits_0_14;

{
#define MR_PROC_LABEL mercury__bitmap__extract_bits_from_bytes_6_p_0

	MR_Integer N;
	MR_BitmapPtr BM;
	MR_Integer Byte;

	N = FirstByteIndex_7 ;
	BM = (MR_BitmapPtr)BM_10 ;
		{

    Byte = (MR_Integer) BM->elements[N];


		;}
#undef MR_PROC_LABEL
	 Var_33  = Byte;
}
      Var_46 = (MR_Integer) ((MR_Unsigned) FirstBitIndex_8 + (MR_Unsigned) RemainingBitsInByte_12);
      LastBit_44 = (MR_Integer) ((MR_Unsigned) Var_46 - (MR_Unsigned) 1);
      Var_48 = (MR_Integer) ((MR_Unsigned) 8 - (MR_Unsigned) 1);
      Shift_45 = (MR_Integer) ((MR_Unsigned) Var_48 - (MR_Unsigned) LastBit_44);
      Var_51 = (Var_33 >> Shift_45);
      Var_57 = (MR_Integer) ((MR_Unsigned) RemainingBitsInByte_12 - (MR_Unsigned) 1);
      BitMask_55 = ((MR_Integer) 1 << Var_57);
      Var_59 = (MR_Integer) ((MR_Unsigned) BitMask_55 - (MR_Unsigned) 1);
      Var_52 = (BitMask_55 | Var_59);
      BitsThisByte_32 = (Var_51 & Var_52);
      Var_35 = (STATE_VARIABLE_Bits_0_14 << RemainingBitsInByte_12);
      STATE_VARIABLE_Bits_17_17 = (Var_35 | BitsThisByte_32);
      Var_18 = (MR_Integer) ((MR_Unsigned) FirstByteIndex_7 + (MR_Unsigned) 1);
      Var_20 = (MR_Integer) ((MR_Unsigned) NumBits_9 - (MR_Unsigned) RemainingBitsInByte_12);
      // direct tailcall eliminated
      ;
      next_value_of_FirstByteIndex_7 = Var_18;
      next_value_of_NumBits_9 = Var_20;
      next_value_of_STATE_VARIABLE_Bits_0_14 = STATE_VARIABLE_Bits_17_17;
      FirstByteIndex_7 = next_value_of_FirstByteIndex_7;
      FirstBitIndex_8 = (MR_Integer) 0;
      NumBits_9 = next_value_of_NumBits_9;
      STATE_VARIABLE_Bits_0_14 = next_value_of_STATE_VARIABLE_Bits_0_14;
      continue;
    }
    else
    {
      succeeded = (NumBits_9 > (MR_Integer) 0);
      if (succeeded)
        mercury__bitmap__extract_bits_from_byte_index_6_p_0(FirstByteIndex_7, FirstBitIndex_8, NumBits_9, BM_10, STATE_VARIABLE_Bits_0_14, STATE_VARIABLE_Bits_15);
      else
        *STATE_VARIABLE_Bits_15 = STATE_VARIABLE_Bits_0_14;
    }
    break;
  }
}

static void MR_CALL 
mercury__bitmap__extract_bits_from_byte_index_6_p_0(
  MR_Integer ByteIndex_7,
  MR_Integer FirstBitIndex_8,
  MR_Integer NumBitsThisByte_9,
  MR_Box BM_10,
  MR_Integer STATE_VARIABLE_Bits_0_13,
  MR_Integer * STATE_VARIABLE_Bits_14)
{
  {
    MR_Integer BitsThisByte_12;
    MR_Integer Var_15;
    MR_Integer Var_17;
    MR_Integer LastBit_26;
    MR_Integer Shift_27;
    MR_Integer Var_28;
    MR_Integer Var_30;
    MR_Integer Var_33;
    MR_Integer Var_34;
    MR_Integer BitMask_37;
    MR_Integer Var_39;
    MR_Integer Var_41;

{
#define MR_PROC_LABEL mercury__bitmap__extract_bits_from_byte_index_6_p_0

	MR_Integer N;
	MR_BitmapPtr BM;
	MR_Integer Byte;

	N = ByteIndex_7 ;
	BM = (MR_BitmapPtr)BM_10 ;
		{

    Byte = (MR_Integer) BM->elements[N];


		;}
#undef MR_PROC_LABEL
	 Var_15  = Byte;
}
    Var_28 = (MR_Integer) ((MR_Unsigned) FirstBitIndex_8 + (MR_Unsigned) NumBitsThisByte_9);
    LastBit_26 = (MR_Integer) ((MR_Unsigned) Var_28 - (MR_Unsigned) 1);
    Var_30 = (MR_Integer) ((MR_Unsigned) 8 - (MR_Unsigned) 1);
    Shift_27 = (MR_Integer) ((MR_Unsigned) Var_30 - (MR_Unsigned) LastBit_26);
    Var_33 = (Var_15 >> Shift_27);
    Var_39 = (MR_Integer) ((MR_Unsigned) NumBitsThisByte_9 - (MR_Unsigned) 1);
    BitMask_37 = ((MR_Integer) 1 << Var_39);
    Var_41 = (MR_Integer) ((MR_Unsigned) BitMask_37 - (MR_Unsigned) 1);
    Var_34 = (BitMask_37 | Var_41);
    BitsThisByte_12 = (Var_33 & Var_34);
    Var_17 = (STATE_VARIABLE_Bits_0_13 << NumBitsThisByte_9);
    *STATE_VARIABLE_Bits_14 = (Var_17 | BitsThisByte_12);
  }
}

MR_Box MR_CALL 
mercury__bitmap__f_117_110_115_97_102_101_95_98_105_116_32_58_61_3_f_0(
  MR_Integer I_1,
  MR_Box BM_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Box HeadVar__4_4;

    switch (HeadVar__3_3) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        HeadVar__4_4 = mercury__bitmap__unsafe_clear_2_f_0(BM_2, I_1);
        break;
      case (MR_Integer) 1:
        HeadVar__4_4 = mercury__bitmap__unsafe_set_2_f_0(BM_2, I_1);
        break;
    }
    return HeadVar__4_4;
  }
}

MR_Box MR_CALL 
mercury__bitmap__f_98_105_116_32_58_61_3_f_0(
  MR_Integer I_6,
  MR_Box STATE_VARIABLE_BM_0_8,
  MR_Word B_7)
{
  {
    MR_bool succeeded = ((MR_Integer) 0 <= I_6);
    MR_Box STATE_VARIABLE_BM_9;
    MR_Integer Var_15;

    if (succeeded)
    {
{
#define MR_PROC_LABEL mercury__bitmap__f_98_105_116_32_58_61_3_f_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr)STATE_VARIABLE_BM_0_8 ;
		{

    NumBits = BM->num_bits;


		;}
#undef MR_PROC_LABEL
	 Var_15  = NumBits;
}
      succeeded = (I_6 < Var_15);
    }
    if (succeeded)
      switch (B_7) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          STATE_VARIABLE_BM_9 = mercury__bitmap__unsafe_clear_2_f_0(STATE_VARIABLE_BM_0_8, I_6);
          break;
        case (MR_Integer) 1:
          STATE_VARIABLE_BM_9 = mercury__bitmap__unsafe_set_2_f_0(STATE_VARIABLE_BM_0_8, I_6);
          break;
      }
    else
      mercury__bitmap__throw_bit_bounds_error_3_p_0(STATE_VARIABLE_BM_0_8, (MR_String) "bitmap.\'bit :=\'", I_6);
    return STATE_VARIABLE_BM_9;
  }
}

MR_Box MR_CALL 
mercury__bitmap__unsafe_clear_2_f_0(
  MR_Box BM0_4,
  MR_Integer I_5)
{
  {
    MR_bool succeeded = (I_5 < (MR_Integer) 0);
    MR_Box BM_6;
    MR_Integer ByteIndex_7;
    MR_Integer Byte0_8;
    MR_Integer Byte_9;
    MR_Integer Var_10;
    MR_Integer Var_11;
    MR_Integer Var_21;
    MR_Integer Var_22;
    MR_Integer Var_25;

    if (succeeded)
      ByteIndex_7 = (MR_Integer) -1;
    else
      ByteIndex_7 = (I_5 / (MR_Integer) 8);
{
#define MR_PROC_LABEL mercury__bitmap__unsafe_clear_2_f_0

	MR_Integer N;
	MR_BitmapPtr BM;
	MR_Integer Byte;

	N = ByteIndex_7 ;
	BM = (MR_BitmapPtr)BM0_4 ;
		{

    Byte = (MR_Integer) BM->elements[N];


		;}
#undef MR_PROC_LABEL
	 Byte0_8  = Byte;
}
    Var_22 = (MR_Integer) ((MR_Unsigned) 8 - (MR_Unsigned) 1);
    Var_25 = (I_5 % (MR_Integer) 8);
    Var_21 = (MR_Integer) ((MR_Unsigned) Var_22 - (MR_Unsigned) Var_25);
    Var_11 = ((MR_Integer) 1 << Var_21);
    Var_10 = ~(Var_11);
    Byte_9 = (Byte0_8 & Var_10);
{
#define MR_PROC_LABEL mercury__bitmap__unsafe_clear_2_f_0

	MR_Integer N;
	MR_BitmapPtr BM0;
	MR_Integer Byte;
	MR_BitmapPtr BM;

	N = ByteIndex_7 ;
	BM0 = (MR_BitmapPtr)BM0_4 ;
	Byte = Byte_9 ;
		{

    BM = BM0;
    BM->elements[N] = (MR_uint_least8_t) Byte;


		;}
#undef MR_PROC_LABEL
	 BM_6  = (MR_Box) BM;
}
    return BM_6;
  }
}

MR_Box MR_CALL 
mercury__bitmap__unsafe_set_2_f_0(
  MR_Box BM0_4,
  MR_Integer I_5)
{
  {
    MR_bool succeeded = (I_5 < (MR_Integer) 0);
    MR_Box BM_6;
    MR_Integer ByteIndex_7;
    MR_Integer Byte0_8;
    MR_Integer Byte_9;
    MR_Integer Var_10;
    MR_Integer Var_20;
    MR_Integer Var_21;
    MR_Integer Var_24;

    if (succeeded)
      ByteIndex_7 = (MR_Integer) -1;
    else
      ByteIndex_7 = (I_5 / (MR_Integer) 8);
{
#define MR_PROC_LABEL mercury__bitmap__unsafe_set_2_f_0

	MR_Integer N;
	MR_BitmapPtr BM;
	MR_Integer Byte;

	N = ByteIndex_7 ;
	BM = (MR_BitmapPtr)BM0_4 ;
		{

    Byte = (MR_Integer) BM->elements[N];


		;}
#undef MR_PROC_LABEL
	 Byte0_8  = Byte;
}
    Var_21 = (MR_Integer) ((MR_Unsigned) 8 - (MR_Unsigned) 1);
    Var_24 = (I_5 % (MR_Integer) 8);
    Var_20 = (MR_Integer) ((MR_Unsigned) Var_21 - (MR_Unsigned) Var_24);
    Var_10 = ((MR_Integer) 1 << Var_20);
    Byte_9 = (Byte0_8 | Var_10);
{
#define MR_PROC_LABEL mercury__bitmap__unsafe_set_2_f_0

	MR_Integer N;
	MR_BitmapPtr BM0;
	MR_Integer Byte;
	MR_BitmapPtr BM;

	N = ByteIndex_7 ;
	BM0 = (MR_BitmapPtr)BM0_4 ;
	Byte = Byte_9 ;
		{

    BM = BM0;
    BM->elements[N] = (MR_uint_least8_t) Byte;


		;}
#undef MR_PROC_LABEL
	 BM_6  = (MR_Box) BM;
}
    return BM_6;
  }
}

MR_Word MR_CALL 
mercury__bitmap__unsafe_bit_2_f_0(
  MR_Integer I_5,
  MR_Box BM_4)
{
  {
    MR_bool succeeded;
    MR_Word HeadVar__3_3;

    succeeded = mercury__bitmap__unsafe_is_clear_2_p_0(BM_4, I_5);
    succeeded = !(succeeded);
    if (succeeded)
      HeadVar__3_3 = (MR_Integer) 1;
    else
      HeadVar__3_3 = (MR_Integer) 0;
    return HeadVar__3_3;
  }
}

MR_Word MR_CALL 
mercury__bitmap__bit_2_f_0(
  MR_Integer I_5,
  MR_Box BM_4)
{
  {
    MR_bool succeeded = ((MR_Integer) 0 <= I_5);
    MR_Word B_6;
    MR_Integer Var_11;

    if (succeeded)
    {
{
#define MR_PROC_LABEL mercury__bitmap__bit_2_f_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr)BM_4 ;
		{

    NumBits = BM->num_bits;


		;}
#undef MR_PROC_LABEL
	 Var_11  = NumBits;
}
      succeeded = (I_5 < Var_11);
    }
    if (succeeded)
    {
      succeeded = mercury__bitmap__unsafe_is_clear_2_p_0(BM_4, I_5);
      succeeded = !(succeeded);
      if (succeeded)
        B_6 = (MR_Integer) 1;
      else
        B_6 = (MR_Integer) 0;
    }
    else
      mercury__bitmap__throw_bit_bounds_error_3_p_0(BM_4, (MR_String) "bitmap.bit", I_5);
    return B_6;
  }
}

void MR_CALL 
mercury__bitmap__throw_bit_bounds_error_3_p_0(
  MR_Box BM_4,
  MR_String Pred_5,
  MR_Integer BitIndex_6)
{
  {
    MR_String Msg_7;
    MR_Integer Var_15;
    MR_String Var_18;
    MR_String Var_25;
    MR_String Var_27;
    MR_String Var_28;
    MR_String Var_35;
    MR_String Var_37;
    MR_Word Var_82;

{
#define MR_PROC_LABEL mercury__bitmap__throw_bit_bounds_error_3_p_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr)BM_4 ;
		{

    NumBits = BM->num_bits;


		;}
#undef MR_PROC_LABEL
	 Var_15  = NumBits;
}
    mercury__string__format__format_signed_int_component_5_p_0((MR_Word) (&mercury__bitmap_scalar_common_4[0]), (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), Var_15, &Var_18);
    mercury__string__append_3_p_2(Var_18, (MR_String) ").", &Var_25);
    mercury__string__append_3_p_2((MR_String) " is out of bounds [0, ", Var_25, &Var_27);
    mercury__string__format__format_signed_int_component_5_p_0((MR_Word) (&mercury__bitmap_scalar_common_4[0]), (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), BitIndex_6, &Var_28);
    mercury__string__append_3_p_2(Var_28, Var_27, &Var_35);
    mercury__string__append_3_p_2((MR_String) ": bit index ", Var_35, &Var_37);
    mercury__string__append_3_p_2(Pred_5, Var_37, &Msg_7);
    Var_82 = (MR_Word) (Msg_7);
    {
      mercury__exception__throw_1_p_0((MR_Word) (&mercury__bitmap__bitmap__type_ctor_info_bitmap_error_0), ((MR_Box) (Var_82)));
      return;
    }
  }
}

MR_bool MR_CALL 
mercury__bitmap__unsafe_is_clear_2_p_0(
  MR_Box BM_3,
  MR_Integer I_4)
{
  {
    MR_bool succeeded = (I_4 < (MR_Integer) 0);
    MR_Integer Var_5;
    MR_Integer Var_6;
    MR_Integer Var_7;
    MR_Integer Var_8;
    MR_Integer Var_18;
    MR_Integer Var_19;
    MR_Integer Var_22;

    if (succeeded)
      Var_7 = (MR_Integer) -1;
    else
      Var_7 = (I_4 / (MR_Integer) 8);
{
#define MR_PROC_LABEL mercury__bitmap__unsafe_is_clear_2_p_0

	MR_Integer N;
	MR_BitmapPtr BM;
	MR_Integer Byte;

	N = Var_7 ;
	BM = (MR_BitmapPtr)BM_3 ;
		{

    Byte = (MR_Integer) BM->elements[N];


		;}
#undef MR_PROC_LABEL
	 Var_6  = Byte;
}
    Var_19 = (MR_Integer) ((MR_Unsigned) 8 - (MR_Unsigned) 1);
    Var_22 = (I_4 % (MR_Integer) 8);
    Var_18 = (MR_Integer) ((MR_Unsigned) Var_19 - (MR_Unsigned) Var_22);
    Var_8 = ((MR_Integer) 1 << Var_18);
    Var_5 = (Var_6 & Var_8);
    succeeded = (Var_5 == (MR_Integer) 0);
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__bitmap__is_empty_1_p_0(
  MR_Box BM_2)
{
  {
    MR_bool succeeded;
    MR_Integer Var_3;

{
#define MR_PROC_LABEL mercury__bitmap__is_empty_1_p_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr)BM_2 ;
		{

    NumBits = BM->num_bits;


		;}
#undef MR_PROC_LABEL
	 Var_3  = NumBits;
}
    succeeded = (Var_3 == (MR_Integer) 0);
    return succeeded;
  }
}

MR_Integer MR_CALL 
mercury__bitmap__bits_per_byte_0_f_0(void)
{
  return (MR_Integer) 8;
}

MR_Integer MR_CALL 
mercury__bitmap__det_num_bytes_1_f_0(
  MR_Box BM_3)
{
  {
    MR_bool succeeded;
    MR_Integer Bytes_4;
    MR_Integer Bytes0_5;
    MR_Integer NumBits_9;
    MR_Integer Var_10;
    MR_Integer Var_12;

{
#define MR_PROC_LABEL mercury__bitmap__det_num_bytes_1_f_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr)BM_3 ;
		{

    NumBits = BM->num_bits;


		;}
#undef MR_PROC_LABEL
	 NumBits_9  = NumBits;
}
    Var_10 = (NumBits_9 % (MR_Integer) 8);
    succeeded = (Var_10 == (MR_Integer) 0);
    if (succeeded)
    {
      Var_12 = (MR_Integer) 8;
      Bytes0_5 = (NumBits_9 / Var_12);
      succeeded = MR_TRUE;
    }
    if (succeeded)
      Bytes_4 = Bytes0_5;
    else
      mercury__exception__throw_1_p_0((MR_Word) (&mercury__bitmap__bitmap__type_ctor_info_bitmap_error_0), ((MR_Box) (((MR_Box) ((MR_String) "bitmap.det_num_bytes: bitmap has a partial final byte")))));
    return Bytes_4;
  }
}

MR_bool MR_CALL 
mercury__bitmap__num_bytes_1_f_0(
  MR_Box BM_3,
  MR_Integer * Bytes_4)
{
  {
    MR_bool succeeded;
    MR_Integer NumBits_5;
    MR_Integer Var_6;
    MR_Integer Var_8;

{
#define MR_PROC_LABEL mercury__bitmap__num_bytes_1_f_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr)BM_3 ;
		{

    NumBits = BM->num_bits;


		;}
#undef MR_PROC_LABEL
	 NumBits_5  = NumBits;
}
    Var_6 = (NumBits_5 % (MR_Integer) 8);
    succeeded = (Var_6 == (MR_Integer) 0);
    if (succeeded)
    {
      Var_8 = (MR_Integer) 8;
      *Bytes_4 = (NumBits_5 / Var_8);
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

MR_Integer MR_CALL 
mercury__bitmap__num_bits_1_f_0(
  MR_Box BM_1)
{
  {
    MR_Integer NumBits_2;

{
#define MR_PROC_LABEL mercury__bitmap__num_bits_1_f_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr)BM_1 ;
		{

    NumBits = BM->num_bits;


		;}
#undef MR_PROC_LABEL
	 NumBits_2  = NumBits;
}
    return NumBits_2;
  }
}

MR_bool MR_CALL 
mercury__bitmap__byte_in_range_2_p_0(
  MR_Box BM_3,
  MR_Integer I_4)
{
  {
    MR_bool succeeded;
    MR_Integer Var_5;
    MR_Integer Var_6;
    MR_Integer Var_7 = (MR_Integer) ((MR_Unsigned) I_4 * (MR_Unsigned) 8);
    MR_Integer Var_14;

    Var_6 = (MR_Integer) ((MR_Unsigned) Var_7 + (MR_Unsigned) 8);
    Var_5 = (MR_Integer) ((MR_Unsigned) Var_6 - (MR_Unsigned) 1);
    succeeded = ((MR_Integer) 0 <= Var_5);
    if (succeeded)
    {
{
#define MR_PROC_LABEL mercury__bitmap__byte_in_range_2_p_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr)BM_3 ;
		{

    NumBits = BM->num_bits;


		;}
#undef MR_PROC_LABEL
	 Var_14  = NumBits;
}
      succeeded = (Var_5 < Var_14);
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__bitmap__in_range_2_p_0(
  MR_Box BM_3,
  MR_Integer I_4)
{
  {
    MR_bool succeeded = ((MR_Integer) 0 <= I_4);
    MR_Integer Var_6;

    if (succeeded)
    {
{
#define MR_PROC_LABEL mercury__bitmap__in_range_2_p_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr)BM_3 ;
		{

    NumBits = BM->num_bits;


		;}
#undef MR_PROC_LABEL
	 Var_6  = NumBits;
}
      succeeded = (I_4 < Var_6);
    }
    return succeeded;
  }
}

MR_Box MR_CALL 
mercury__bitmap__init_1_f_0(
  MR_Integer N_3)
{
  {
    MR_Box HeadVar__2_2;

    HeadVar__2_2 = mercury__bitmap__init_2_f_0(N_3, (MR_Integer) 0);
    return HeadVar__2_2;
  }
}

MR_Box MR_CALL 
mercury__bitmap__init_2_f_0(
  MR_Integer N_4,
  MR_Word B_5)
{
  {
    MR_bool succeeded = (N_4 < (MR_Integer) 0);
    MR_Box BM_6;

    if (succeeded)
      mercury__exception__throw_1_p_0((MR_Word) (&mercury__bitmap__bitmap__type_ctor_info_bitmap_error_0), ((MR_Box) (((MR_Box) ((MR_String) "bitmap.init: negative size")))));
    else
    {
      MR_Integer X_7;
      MR_Box BM0_8;
      MR_Box Var_11;
      MR_Integer Var_20;
      MR_Integer Var_21;
      MR_Integer Var_27;
      MR_Integer Var_28;

      switch (B_5) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          X_7 = (MR_Integer) 0;
          break;
        case (MR_Integer) 1:
          X_7 = ~((MR_Integer) 0);
          break;
      }
{
#define MR_PROC_LABEL mercury__bitmap__init_2_f_0

	MR_Integer N;
	MR_BitmapPtr BM;

	N = N_4 ;
		{

    MR_allocate_bitmap_msg(BM, N, MR_ALLOC_ID);


		;}
#undef MR_PROC_LABEL
	 Var_11  = (MR_Box) BM;
}
      Var_21 = (MR_Integer) ((MR_Unsigned) N_4 - (MR_Unsigned) 1);
      succeeded = (Var_21 < (MR_Integer) 0);
      if (succeeded)
        Var_20 = (MR_Integer) -1;
      else
        Var_20 = (Var_21 / (MR_Integer) 8);
      BM0_8 = mercury__bitmap__initialize_bitmap_bytes_4_f_0(Var_11, (MR_Integer) 0, Var_20, X_7);
{
#define MR_PROC_LABEL mercury__bitmap__init_2_f_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr)BM0_8 ;
		{

    NumBits = BM->num_bits;


		;}
#undef MR_PROC_LABEL
	 Var_28  = NumBits;
}
      Var_27 = (MR_Integer) ((MR_Unsigned) Var_28 - (MR_Unsigned) 1);
      BM_6 = mercury__bitmap__set_trailing_bits_in_byte_3_f_0(BM0_8, Var_27, (MR_Integer) 0);
    }
    return BM_6;
  }
}

static MR_Box MR_CALL 
mercury__bitmap__initialize_bitmap_bytes_4_f_0(
  MR_Box BM_6,
  MR_Integer ByteIndex_7,
  MR_Integer LastByteIndex_8,
  MR_Integer Init_9)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (ByteIndex_7 > LastByteIndex_8);
    MR_Box HeadVar__5_5;

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
      HeadVar__5_5 = BM_6;
    else
    {
      MR_Box Var_10;
      MR_Integer Var_11;
      MR_Box next_value_of_BM_6;
      MR_Integer next_value_of_ByteIndex_7;

{
#define MR_PROC_LABEL mercury__bitmap__initialize_bitmap_bytes_4_f_0

	MR_Integer N;
	MR_BitmapPtr BM0;
	MR_Integer Byte;
	MR_BitmapPtr BM;

	N = ByteIndex_7 ;
	BM0 = (MR_BitmapPtr)BM_6 ;
	Byte = Init_9 ;
		{

    BM = BM0;
    BM->elements[N] = (MR_uint_least8_t) Byte;


		;}
#undef MR_PROC_LABEL
	 Var_10  = (MR_Box) BM;
}
      Var_11 = (MR_Integer) ((MR_Unsigned) ByteIndex_7 + (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_BM_6 = Var_10;
      next_value_of_ByteIndex_7 = Var_11;
      BM_6 = next_value_of_BM_6;
      ByteIndex_7 = next_value_of_ByteIndex_7;
      continue;
    }
    return HeadVar__5_5;
    break;
  }
}

MR_Box MR_CALL 
mercury__bitmap__set_trailing_bits_in_byte_3_f_0(
  MR_Box STATE_VARIABLE_BM_0_12,
  MR_Integer Bit_6,
  MR_Integer Initializer_7)
{
  {
    MR_bool succeeded;
    MR_Box STATE_VARIABLE_BM_13;
    MR_Integer FirstTrailingBit_8 = (MR_Integer) ((MR_Unsigned) Bit_6 + (MR_Unsigned) 1);
    MR_Integer FirstTrailingBitIndex_9 = (FirstTrailingBit_8 % (MR_Integer) 8);

    succeeded = (FirstTrailingBitIndex_9 != (MR_Integer) 0);
    if (succeeded)
    {
      MR_Integer ByteIndex_10;
      MR_Integer NumBitsToSet_11;
      MR_Integer Var_17;
      MR_Integer Var_18;
      MR_Integer LastBit_33;
      MR_Integer Shift_34;
      MR_Integer Mask_35;
      MR_Integer BitsToSet_36;
      MR_Integer Var_37;
      MR_Integer Var_39;
      MR_Integer Var_42;
      MR_Integer Var_43;
      MR_Integer Var_44;
      MR_Integer Var_45;
      MR_Integer BitMask_48;
      MR_Integer Var_50;
      MR_Integer Var_52;

      succeeded = (FirstTrailingBit_8 < (MR_Integer) 0);
      if (succeeded)
        ByteIndex_10 = (MR_Integer) -1;
      else
        ByteIndex_10 = (FirstTrailingBit_8 / (MR_Integer) 8);
      NumBitsToSet_11 = (MR_Integer) ((MR_Unsigned) 8 - (MR_Unsigned) FirstTrailingBitIndex_9);
{
#define MR_PROC_LABEL mercury__bitmap__set_trailing_bits_in_byte_3_f_0

	MR_Integer N;
	MR_BitmapPtr BM;
	MR_Integer Byte;

	N = ByteIndex_10 ;
	BM = (MR_BitmapPtr)STATE_VARIABLE_BM_0_12 ;
		{

    Byte = (MR_Integer) BM->elements[N];


		;}
#undef MR_PROC_LABEL
	 Var_18  = Byte;
}
      Var_37 = (MR_Integer) ((MR_Unsigned) FirstTrailingBitIndex_9 + (MR_Unsigned) NumBitsToSet_11);
      LastBit_33 = (MR_Integer) ((MR_Unsigned) Var_37 - (MR_Unsigned) 1);
      Var_39 = (MR_Integer) ((MR_Unsigned) 8 - (MR_Unsigned) 1);
      Shift_34 = (MR_Integer) ((MR_Unsigned) Var_39 - (MR_Unsigned) LastBit_33);
      Var_50 = (MR_Integer) ((MR_Unsigned) NumBitsToSet_11 - (MR_Unsigned) 1);
      BitMask_48 = ((MR_Integer) 1 << Var_50);
      Var_52 = (MR_Integer) ((MR_Unsigned) BitMask_48 - (MR_Unsigned) 1);
      Mask_35 = (BitMask_48 | Var_52);
      BitsToSet_36 = (Mask_35 & Initializer_7);
      Var_44 = (Mask_35 << Shift_34);
      Var_43 = ~(Var_44);
      Var_42 = (Var_18 & Var_43);
      Var_45 = (BitsToSet_36 << Shift_34);
      Var_17 = (Var_42 | Var_45);
{
#define MR_PROC_LABEL mercury__bitmap__set_trailing_bits_in_byte_3_f_0

	MR_Integer N;
	MR_BitmapPtr BM0;
	MR_Integer Byte;
	MR_BitmapPtr BM;

	N = ByteIndex_10 ;
	BM0 = (MR_BitmapPtr)STATE_VARIABLE_BM_0_12 ;
	Byte = Var_17 ;
		{

    BM = BM0;
    BM->elements[N] = (MR_uint_least8_t) Byte;


		;}
#undef MR_PROC_LABEL
	 STATE_VARIABLE_BM_13  = (MR_Box) BM;
}
    }
    else
      STATE_VARIABLE_BM_13 = STATE_VARIABLE_BM_0_12;
    return STATE_VARIABLE_BM_13;
  }
}

static MR_bool MR_CALL 
mercury__bitmap____Unify____bit_index_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mercury__bitmap____Unify____bit_index_0_0(((MR_Integer) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
mercury__bitmap____Compare____bit_index_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__bitmap____Compare____bit_index_0_0(&conv0_HeadVar__1_1, ((MR_Integer) (wrapper_arg_2)), ((MR_Integer) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__bitmap____Unify____bit_index_in_byte_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mercury__bitmap____Unify____bit_index_in_byte_0_0(((MR_Integer) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
mercury__bitmap____Compare____bit_index_in_byte_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__bitmap____Compare____bit_index_in_byte_0_0(&conv0_HeadVar__1_1, ((MR_Integer) (wrapper_arg_2)), ((MR_Integer) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__bitmap____Unify____bitmap_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mercury__bitmap____Unify____bitmap_0_0(((MR_Box) (wrapper_arg_1)), ((MR_Box) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
mercury__bitmap____Compare____bitmap_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__bitmap____Compare____bitmap_0_0(&conv0_HeadVar__1_1, ((MR_Box) (wrapper_arg_2)), ((MR_Box) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__bitmap____Unify____bitmap_error_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mercury__bitmap____Unify____bitmap_error_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
mercury__bitmap____Compare____bitmap_error_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__bitmap____Compare____bitmap_error_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__bitmap____Unify____byte_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mercury__bitmap____Unify____byte_0_0(((MR_Integer) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
mercury__bitmap____Compare____byte_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__bitmap____Compare____byte_0_0(&conv0_HeadVar__1_1, ((MR_Integer) (wrapper_arg_2)), ((MR_Integer) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__bitmap____Unify____byte_index_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mercury__bitmap____Unify____byte_index_0_0(((MR_Integer) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
mercury__bitmap____Compare____byte_index_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__bitmap____Compare____byte_index_0_0(&conv0_HeadVar__1_1, ((MR_Integer) (wrapper_arg_2)), ((MR_Integer) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__bitmap____Unify____copy_direction_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mercury__bitmap____Unify____copy_direction_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
mercury__bitmap____Compare____copy_direction_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__bitmap____Compare____copy_direction_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__bitmap____Unify____num_bits_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mercury__bitmap____Unify____num_bits_0_0(((MR_Integer) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
mercury__bitmap____Compare____num_bits_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__bitmap____Compare____num_bits_0_0(&conv0_HeadVar__1_1, ((MR_Integer) (wrapper_arg_2)), ((MR_Integer) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__bitmap____Unify____num_bytes_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mercury__bitmap____Unify____num_bytes_0_0(((MR_Integer) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
mercury__bitmap____Compare____num_bytes_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__bitmap____Compare____num_bytes_0_0(&conv0_HeadVar__1_1, ((MR_Integer) (wrapper_arg_2)), ((MR_Integer) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__bitmap____Unify____slice_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mercury__bitmap____Unify____slice_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
mercury__bitmap____Compare____slice_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__bitmap____Compare____slice_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__bitmap____Unify____word_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mercury__bitmap____Unify____word_0_0(((MR_Integer) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
mercury__bitmap____Compare____word_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__bitmap____Compare____word_0_0(&conv0_HeadVar__1_1, ((MR_Integer) (wrapper_arg_2)), ((MR_Integer) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

void mercury__bitmap__init(void)
{
}

void mercury__bitmap__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mercury__bitmap__bitmap__type_ctor_info_bit_index_0);
	MR_register_type_ctor_info(&mercury__bitmap__bitmap__type_ctor_info_bit_index_in_byte_0);
	MR_register_type_ctor_info(&mercury__bitmap__bitmap__type_ctor_info_bitmap_0);
	MR_register_type_ctor_info(&mercury__bitmap__bitmap__type_ctor_info_bitmap_error_0);
	MR_register_type_ctor_info(&mercury__bitmap__bitmap__type_ctor_info_byte_0);
	MR_register_type_ctor_info(&mercury__bitmap__bitmap__type_ctor_info_byte_index_0);
	MR_register_type_ctor_info(&mercury__bitmap__bitmap__type_ctor_info_copy_direction_0);
	MR_register_type_ctor_info(&mercury__bitmap__bitmap__type_ctor_info_num_bits_0);
	MR_register_type_ctor_info(&mercury__bitmap__bitmap__type_ctor_info_num_bytes_0);
	MR_register_type_ctor_info(&mercury__bitmap__bitmap__type_ctor_info_slice_0);
	MR_register_type_ctor_info(&mercury__bitmap__bitmap__type_ctor_info_word_0);
}

void mercury__bitmap__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__bitmap__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module bitmap.
