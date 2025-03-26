/*
** Automatically generated from `bitmap.m'
** by the Mercury compiler,
** version rotd-2025-03-26
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
#include "counter.mih"
#include "deconstruct.mih"
#include "dir.mih"
#include "enum.mih"
#include "exception.mih"
#include "float.mih"
#include "int.mih"
#include "int16.mih"
#include "int32.mih"
#include "int64.mih"
#include "int8.mih"
#include "integer.mih"
#include "io.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mercury_term_lexer.mih"
#include "mercury_term_parser.mih"
#include "mutvar.mih"
#include "one_or_more.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "require.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
#include "solutions.mih"
#include "stm_builtin.mih"
#include "store.mih"
#include "stream.mih"
#include "string.mih"
#include "table_builtin.mih"
#include "term.mih"
#include "term_context.mih"
#include "term_conversion.mih"
#include "term_int.mih"
#include "term_io.mih"
#include "term_subst.mih"
#include "term_unify.mih"
#include "term_vars.mih"
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
#include "io.call_system.mih"
#include "io.environment.mih"
#include "io.error_util.mih"
#include "io.file.mih"
#include "io.primitives_read.mih"
#include "io.primitives_write.mih"
#include "io.stream_db.mih"
#include "io.stream_ops.mih"
#include "io.text_read.mih"
#include "stream.string_writer.mih"
#include "string.builder.mih"
#include "string.format.mih"
#include "string.parse_runtime.mih"
#include "string.parse_util.mih"
#include "string.to_string.mih"




static const MR_Integer mercury__bitmap__bitmap__functor_number_map_bitmap_error_0[1];

static const MR_NotagFunctorDesc mercury__bitmap__bitmap__notag_functor_desc_bitmap_error_0;

static const MR_EnumFunctorDesc mercury__bitmap__bitmap__enum_functor_desc_copy_direction_0_0;

static const MR_EnumFunctorDesc mercury__bitmap__bitmap__enum_functor_desc_copy_direction_0_1;

static const MR_EnumFunctorDescPtr mercury__bitmap__bitmap__enum_ordinal_ordered_copy_direction_0[2];

static const MR_EnumFunctorDescPtr mercury__bitmap__bitmap__enum_name_ordered_copy_direction_0[2];

static const MR_Integer mercury__bitmap__bitmap__functor_number_map_copy_direction_0[2];

static const MR_PseudoTypeInfo mercury__bitmap__bitmap__field_types_slice_0_0[3];

static const MR_ConstString mercury__bitmap__bitmap__field_names_slice_0_0[3];

static const MR_DuFunctorDesc mercury__bitmap__bitmap__du_functor_desc_slice_0_0;

static const MR_DuFunctorDescPtr mercury__bitmap__bitmap__du_stag_ordered_slice_0_0[1];

static const MR_DuPtagLayout mercury__bitmap__bitmap__du_ptag_ordered_slice_0[1];

static const MR_DuFunctorDescPtr mercury__bitmap__bitmap__du_name_ordered_slice_0[1];

static const MR_Integer mercury__bitmap__bitmap__functor_number_map_slice_0[1];

static MR_Box MR_CALL 
mercury__bitmap__allocate_bitmap_1_f_0(
  MR_Integer N_1);

static void MR_CALL 
mercury__bitmap__bytes_compare_5_p_0(
  MR_Word * Result_6,
  MR_Integer Index_7,
  MR_Integer MaxIndex_8,
  MR_Box BM1_9,
  MR_Box BM2_10);

static MR_bool MR_CALL 
mercury__bitmap__bytes_equal_4_p_0(
  MR_Integer Index_5,
  MR_Integer MaxIndex_6,
  MR_Box BM_A_7,
  MR_Box BM_B_8);

static void MR_CALL 
mercury__bitmap__do_read_bitmap_range_10_p_0(
  MR_Box Stream_1,
  MR_Integer StartByte_2,
  MR_Integer NumBytes_3,
  MR_Box Bitmap0_4,
  MR_Box * Bitmap_5,
  MR_Integer BytesRead0_6,
  MR_Integer * BytesRead_7,
  MR_Box * Error_8);

static void MR_CALL 
mercury__bitmap__unsafe_do_copy_bytes_7_p_0(
  MR_Box SrcBM_8,
  MR_Integer SrcByteIndex_9,
  MR_Integer DestByteIndex_10,
  MR_Integer NumBytes_11,
  MR_Integer AddForNext_12,
  MR_Box STATE_VARIABLE_DestBM_0_15,
  MR_Box * STATE_VARIABLE_DestBM_16);

static void MR_CALL 
mercury__bitmap__set_num_bits_3_p_0(
  MR_Integer NumBits_1,
  MR_Box BM0_2,
  MR_Box * BM_3);

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
mercury__bitmap__hash_loop_5_p_0(
  MR_Box BM_6,
  MR_Integer Index_7,
  MR_Integer Length_8,
  MR_Integer STATE_VARIABLE_HashVal_0_10,
  MR_Integer * STATE_VARIABLE_HashVal_11);

static MR_Integer MR_CALL 
mercury__bitmap__foldl__ho2_3_f_in__list_0(
  MR_Word HeadVar__2_2,
  MR_Integer HeadVar__3_3);

static void MR_CALL 
mercury__bitmap__foldl2__ho1_6_p_in__list_0(
  MR_Word HeadVar__2_2,
  MR_Integer HeadVar__3_3,
  MR_Integer * HeadVar__4_4,
  MR_Box HeadVar__5_5,
  MR_Box * HeadVar__6_6);

static void MR_CALL 
mercury__bitmap__zip_loop__ho10_5_p_0(
  MR_Integer I_6,
  MR_Box BM_A_8,
  MR_Box BM_B_9,
  MR_Box * BM_10);

static void MR_CALL 
mercury__bitmap__zip_loop__ho9_5_p_0(
  MR_Integer I_6,
  MR_Box BM_A_8,
  MR_Box BM_B_9,
  MR_Box * BM_10);

static void MR_CALL 
mercury__bitmap__zip_loop__ho8_5_p_0(
  MR_Integer I_6,
  MR_Box BM_A_8,
  MR_Box BM_B_9,
  MR_Box * BM_10);

static void MR_CALL 
mercury__bitmap__zip_loop__ho7_5_p_0(
  MR_Integer I_6,
  MR_Box BM_A_8,
  MR_Box BM_B_9,
  MR_Box * BM_10);

static void MR_CALL 
mercury__bitmap__unsafe_copy_bits_7_p_0(
  MR_Integer SameBM_8,
  MR_Box SrcBM_9,
  MR_Integer SrcStartBit_10,
  MR_Integer DestStartBit_11,
  MR_Integer STATE_VARIABLE_NumBits_0_37,
  MR_Box STATE_VARIABLE_DestBM_0_38,
  MR_Box * STATE_VARIABLE_DestBM_39);

static void MR_CALL 
mercury__bitmap__unsafe_copy_unaligned_bits_7_p_0(
  MR_Integer SameBM_8,
  MR_Box SrcBM_9,
  MR_Integer SrcStartBit_10,
  MR_Integer DestStartBit_11,
  MR_Integer STATE_VARIABLE_NumBits_0_36,
  MR_Box STATE_VARIABLE_DestBM_0_37,
  MR_Box * STATE_VARIABLE_DestBM_38);

static void MR_CALL 
mercury__bitmap__set_bits_in_byte_5_p_0(
  MR_Integer FirstBit_6,
  MR_Integer NumBits_7,
  MR_Integer Bits_8,
  MR_Integer Byte0_9,
  MR_Integer * Byte_10);

static void MR_CALL 
mercury__bitmap__unsafe_copy_unaligned_bytes_rtol_8_p_0(
  MR_Box SrcBM_9,
  MR_Integer SrcByteIndex_10,
  MR_Integer SrcBitIndex_11,
  MR_Integer PrevSrcByteBits_12,
  MR_Integer DestByteIndex_13,
  MR_Integer NumBytes_14,
  MR_Box STATE_VARIABLE_DestBM_0_18,
  MR_Box * STATE_VARIABLE_DestBM_19);

static void MR_CALL 
mercury__bitmap__unsafe_copy_unaligned_bytes_ltor_8_p_0(
  MR_Box SrcBM_9,
  MR_Integer SrcByteIndex_10,
  MR_Integer SrcBitIndex_11,
  MR_Integer PrevSrcByteBits_12,
  MR_Integer DestByteIndex_13,
  MR_Integer NumBytes_14,
  MR_Box STATE_VARIABLE_DestBM_0_18,
  MR_Box * STATE_VARIABLE_DestBM_19);

static void MR_CALL 
mercury__bitmap__unsafe_copy_bytes_7_p_0(
  MR_Integer SameBM_1,
  MR_Box SrcBM_2,
  MR_Integer SrcFirstByteIndex_3,
  MR_Integer DestFirstByteIndex_4,
  MR_Integer NumBytes_5,
  MR_Box DestBM0_6,
  MR_Box * DestBM_7);

static void MR_CALL 
mercury__bitmap__initialize_bitmap_bytes_5_p_0(
  MR_Integer ByteIndex_6,
  MR_Integer LastByteIndex_7,
  MR_Integer Init_8,
  MR_Box STATE_VARIABLE_BM_0_10,
  MR_Box * STATE_VARIABLE_BM_11);

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

static void MR_CALL 
mercury__bitmap__ClassMethod_for_stream__writer____io__binary_output_stream__arity0__bitmap__slice__arity0__io__state__arity0______stream__put_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
mercury__bitmap__ClassMethod_for_stream__writer____io__binary_output_stream__arity0__bitmap__bitmap__arity0__io__state__arity0______stream__put_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
mercury__bitmap__ClassMethod_for_stream__bulk_reader____io__binary_input_stream__arity0__int__arity0__bitmap__bitmap__arity0__io__state__arity0__io__error__arity0______stream__bulk_get_9_9_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box * wrapper_arg_7,
  MR_Box wrapper_arg_8,
  MR_Box * wrapper_arg_9);


static /* final */ const MR_Box mercury__bitmap_scalar_common_1[1][3];

static /* final */ const MR_Box mercury__bitmap_scalar_common_2[1][4];

static /* final */ const MR_Box mercury__bitmap_scalar_common_3[1][5];

static /* final */ const MR_Box mercury__bitmap_scalar_common_4[1][2];

static /* final */ const MR_Box mercury__bitmap_scalar_common_5[1][1];




static /* final */ const MR_Box mercury__bitmap_scalar_common_1[1][3] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__text_output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__bitmap_scalar_common_2[1][4] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__text_output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__bitmap_scalar_common_1[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__bitmap_scalar_common_3[1][5] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__text_output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__bitmap_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__bitmap_scalar_common_4[1][2] = {
  /* row   0 */
  {
    ((MR_Box) (MR_Word) ((MR_Char) 62)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box mercury__bitmap_scalar_common_5[1][1] = {
  /* row   0 */
  { (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1)))))))) },
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
#include "io.environment.mh"
#include "io.error_util.mh"
#include "io.file.mh"
#include "io.primitives_read.mh"
#include "io.primitives_write.mh"
#include "io.stream_db.mh"
#include "io.stream_ops.mh"
#include "io.text_read.mh"


const MR_TypeCtorInfo_Struct mercury__bitmap__bitmap__type_ctor_info_bit_index_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mercury__bitmap____Unify____bit_index_0_0_10001)),
  ((MR_Box) (mercury__bitmap____Compare____bit_index_0_0_10001)),
  (MR_String) "bitmap",
  (MR_String) "bit_index",
  { NULL },
  { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

const MR_TypeCtorInfo_Struct mercury__bitmap__bitmap__type_ctor_info_bit_index_in_byte_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mercury__bitmap____Unify____bit_index_in_byte_0_0_10001)),
  ((MR_Box) (mercury__bitmap____Compare____bit_index_in_byte_0_0_10001)),
  (MR_String) "bitmap",
  (MR_String) "bit_index_in_byte",
  { NULL },
  { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

const MR_TypeCtorInfo_Struct mercury__bitmap__bitmap__type_ctor_info_bitmap_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_BITMAP,
  ((MR_Box) (mercury__bitmap____Unify____bitmap_0_0_10001)),
  ((MR_Box) (mercury__bitmap____Compare____bitmap_0_0_10001)),
  (MR_String) "bitmap",
  (MR_String) "bitmap",
  { NULL },
  { NULL },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_Integer mercury__bitmap__bitmap__functor_number_map_bitmap_error_0[1] = { (MR_Integer) 0 };

static const MR_NotagFunctorDesc mercury__bitmap__bitmap__notag_functor_desc_bitmap_error_0 = {
  (MR_String) "bitmap_error",
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct mercury__bitmap__bitmap__type_ctor_info_bitmap_error_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (mercury__bitmap____Unify____bitmap_error_0_0_10001)),
  ((MR_Box) (mercury__bitmap____Compare____bitmap_error_0_0_10001)),
  (MR_String) "bitmap",
  (MR_String) "bitmap_error",
  { &mercury__bitmap__bitmap__notag_functor_desc_bitmap_error_0 },
  { &mercury__bitmap__bitmap__notag_functor_desc_bitmap_error_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  mercury__bitmap__bitmap__functor_number_map_bitmap_error_0,

};

const MR_TypeCtorInfo_Struct mercury__bitmap__bitmap__type_ctor_info_byte_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mercury__bitmap____Unify____byte_0_0_10001)),
  ((MR_Box) (mercury__bitmap____Compare____byte_0_0_10001)),
  (MR_String) "bitmap",
  (MR_String) "byte",
  { NULL },
  { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

const MR_TypeCtorInfo_Struct mercury__bitmap__bitmap__type_ctor_info_byte_index_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mercury__bitmap____Unify____byte_index_0_0_10001)),
  ((MR_Box) (mercury__bitmap____Compare____byte_index_0_0_10001)),
  (MR_String) "bitmap",
  (MR_String) "byte_index",
  { NULL },
  { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_EnumFunctorDesc mercury__bitmap__bitmap__enum_functor_desc_copy_direction_0_0 = {
  (MR_String) "left_to_right",
  INT32_C(0)
};

static const MR_EnumFunctorDesc mercury__bitmap__bitmap__enum_functor_desc_copy_direction_0_1 = {
  (MR_String) "right_to_left",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr mercury__bitmap__bitmap__enum_ordinal_ordered_copy_direction_0[2] = {
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
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mercury__bitmap____Unify____copy_direction_0_0_10001)),
  ((MR_Box) (mercury__bitmap____Compare____copy_direction_0_0_10001)),
  (MR_String) "bitmap",
  (MR_String) "copy_direction",
  { mercury__bitmap__bitmap__enum_name_ordered_copy_direction_0 },
  { mercury__bitmap__bitmap__enum_ordinal_ordered_copy_direction_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  mercury__bitmap__bitmap__functor_number_map_copy_direction_0,

};

const MR_TypeCtorInfo_Struct mercury__bitmap__bitmap__type_ctor_info_num_bits_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mercury__bitmap____Unify____num_bits_0_0_10001)),
  ((MR_Box) (mercury__bitmap____Compare____num_bits_0_0_10001)),
  (MR_String) "bitmap",
  (MR_String) "num_bits",
  { NULL },
  { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

const MR_TypeCtorInfo_Struct mercury__bitmap__bitmap__type_ctor_info_num_bytes_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mercury__bitmap____Unify____num_bytes_0_0_10001)),
  ((MR_Box) (mercury__bitmap____Compare____num_bytes_0_0_10001)),
  (MR_String) "bitmap",
  (MR_String) "num_bytes",
  { NULL },
  { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

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

static const MR_DuFunctorDescPtr mercury__bitmap__bitmap__du_stag_ordered_slice_0_0[1] = { &mercury__bitmap__bitmap__du_functor_desc_slice_0_0 };

static const MR_DuPtagLayout mercury__bitmap__bitmap__du_ptag_ordered_slice_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__bitmap__bitmap__du_stag_ordered_slice_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr mercury__bitmap__bitmap__du_name_ordered_slice_0[1] = { &mercury__bitmap__bitmap__du_functor_desc_slice_0_0 };

static const MR_Integer mercury__bitmap__bitmap__functor_number_map_slice_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct mercury__bitmap__bitmap__type_ctor_info_slice_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__bitmap____Unify____slice_0_0_10001)),
  ((MR_Box) (mercury__bitmap____Compare____slice_0_0_10001)),
  (MR_String) "bitmap",
  (MR_String) "slice",
  { mercury__bitmap__bitmap__du_name_ordered_slice_0 },
  { mercury__bitmap__bitmap__du_ptag_ordered_slice_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  mercury__bitmap__bitmap__functor_number_map_slice_0,

};

const MR_TypeCtorInfo_Struct mercury__bitmap__bitmap__type_ctor_info_word_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mercury__bitmap____Unify____word_0_0_10001)),
  ((MR_Box) (mercury__bitmap____Compare____word_0_0_10001)),
  (MR_String) "bitmap",
  (MR_String) "word",
  { NULL },
  { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

const MR_BaseTypeclassInfo base_typeclass_info_stream__writer__arity3__io__binary_output_stream__arity0__bitmap__slice__arity0__io__state__arity0__[6] = {
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) ((MR_Integer) 3)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) (mercury__bitmap__ClassMethod_for_stream__writer____io__binary_output_stream__arity0__bitmap__slice__arity0__io__state__arity0______stream__put_4_4_p_0_10001))
};

const MR_BaseTypeclassInfo base_typeclass_info_stream__writer__arity3__io__binary_output_stream__arity0__bitmap__bitmap__arity0__io__state__arity0__[6] = {
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) ((MR_Integer) 3)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) (mercury__bitmap__ClassMethod_for_stream__writer____io__binary_output_stream__arity0__bitmap__bitmap__arity0__io__state__arity0______stream__put_4_4_p_0_10001))
};

const MR_BaseTypeclassInfo base_typeclass_info_stream__bulk_reader__arity5__io__binary_input_stream__arity0__int__arity0__bitmap__bitmap__arity0__io__state__arity0__io__error__arity0__[6] = {
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 2)),
  ((MR_Box) ((MR_Integer) 5)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) (mercury__bitmap__ClassMethod_for_stream__bulk_reader____io__binary_input_stream__arity0__int__arity0__bitmap__bitmap__arity0__io__state__arity0__io__error__arity0______stream__bulk_get_9_9_p_0_10001))
};

void MR_CALL 
mercury__bitmap__ClassMethod_for_stream__writer____io__binary_output_stream__arity0__bitmap__bitmap__arity0__io__state__arity0______stream__put_4_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Box HeadVar__2_2)
{
  mercury__bitmap__write_bitmap_4_p_0(HeadVar__1_1, HeadVar__2_2);
}

void MR_CALL 
mercury__bitmap__ClassMethod_for_stream__writer____io__binary_output_stream__arity0__bitmap__slice__arity0__io__state__arity0______stream__put_4_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  mercury__bitmap__stream_put_4_p_0(HeadVar__1_1, HeadVar__2_2);
}

void MR_CALL 
mercury__bitmap__ClassMethod_for_stream__bulk_reader____io__binary_input_stream__arity0__int__arity0__bitmap__bitmap__arity0__io__state__arity0__io__error__arity0______stream__bulk_get_9_9_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Integer HeadVar__3_3,
  MR_Box HeadVar__4_4,
  MR_Box * HeadVar__5_5,
  MR_Integer * HeadVar__6_6,
  MR_Word * HeadVar__7_7)
{
  MR_Word Result0_10;

  mercury__bitmap__read_bitmap_range_9_p_0(HeadVar__1_1, HeadVar__2_2, HeadVar__3_3, HeadVar__4_4, HeadVar__5_5, HeadVar__6_6, &Result0_10);
  if ((Result0_10 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__7_7 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word E_11 = ((MR_Word) ((MR_hl_field(1, Result0_10, (MR_Integer) 0))));

    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__7_7 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (E_11));
    }
  }
}

void MR_CALL 
mercury__bitmap____Compare____word_0_0(
  MR_Word * HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Integer HeadVar__3_3)
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

MR_bool MR_CALL 
mercury__bitmap____Unify____word_0_0(
  MR_Integer HeadVar__1_1,
  MR_Integer HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Integer Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = (Cast_HeadVar1_3 == Cast_HeadVar2_4);
  return succeeded;
}

void MR_CALL 
mercury__bitmap____Compare____slice_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_12 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_13 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_12 == CastY_13);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Box ArgX1_4 = ((MR_Box) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Box ArgY1_5 = ((MR_Box) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Integer ArgX2_7 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Integer ArgY2_8 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Integer ArgX3_10 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Integer ArgY3_11 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 2))));
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

MR_bool MR_CALL 
mercury__bitmap____Unify____slice_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_9 == CastY_10);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Box ArgX1_3 = ((MR_Box) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Box ArgY1_4 = ((MR_Box) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Integer ArgX2_5 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Integer ArgY2_6 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Integer ArgX3_7 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));
    MR_Integer ArgY3_8 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
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

void MR_CALL 
mercury__bitmap____Compare____num_bytes_0_0(
  MR_Word * HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Integer HeadVar__3_3)
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

MR_bool MR_CALL 
mercury__bitmap____Unify____num_bytes_0_0(
  MR_Integer HeadVar__1_1,
  MR_Integer HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Integer Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = (Cast_HeadVar1_3 == Cast_HeadVar2_4);
  return succeeded;
}

void MR_CALL 
mercury__bitmap____Compare____num_bits_0_0(
  MR_Word * HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Integer HeadVar__3_3)
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

MR_bool MR_CALL 
mercury__bitmap____Unify____num_bits_0_0(
  MR_Integer HeadVar__1_1,
  MR_Integer HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Integer Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = (Cast_HeadVar1_3 == Cast_HeadVar2_4);
  return succeeded;
}

void MR_CALL 
mercury__bitmap____Compare____copy_direction_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
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

MR_bool MR_CALL 
mercury__bitmap____Unify____copy_direction_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
mercury__bitmap____Compare____byte_index_0_0(
  MR_Word * HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Integer HeadVar__3_3)
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

MR_bool MR_CALL 
mercury__bitmap____Unify____byte_index_0_0(
  MR_Integer HeadVar__1_1,
  MR_Integer HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Integer Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = (Cast_HeadVar1_3 == Cast_HeadVar2_4);
  return succeeded;
}

void MR_CALL 
mercury__bitmap____Compare____byte_0_0(
  MR_Word * HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Integer HeadVar__3_3)
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

MR_bool MR_CALL 
mercury__bitmap____Unify____byte_0_0(
  MR_Integer HeadVar__1_1,
  MR_Integer HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Integer Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = (Cast_HeadVar1_3 == Cast_HeadVar2_4);
  return succeeded;
}

void MR_CALL 
mercury__bitmap____Compare____bitmap_error_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
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
    MR_Integer Var_9;

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
	Var_9  = Res;
}
    succeeded = (Var_9 < (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      succeeded = (Var_9 == (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 0;
      else
        *HeadVar__1_1 = (MR_Integer) 2;
    }
  }
}

MR_bool MR_CALL 
mercury__bitmap____Unify____bitmap_error_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
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

void MR_CALL 
mercury__bitmap____Compare____bitmap_0_0(
  MR_Word * HeadVar__1_1,
  MR_Box HeadVar__2_2,
  MR_Box HeadVar__3_3)
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

MR_bool MR_CALL 
mercury__bitmap____Unify____bitmap_0_0(
  MR_Box HeadVar__1_1,
  MR_Box HeadVar__2_2)
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

void MR_CALL 
mercury__bitmap____Compare____bit_index_in_byte_0_0(
  MR_Word * HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Integer HeadVar__3_3)
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

MR_bool MR_CALL 
mercury__bitmap____Unify____bit_index_in_byte_0_0(
  MR_Integer HeadVar__1_1,
  MR_Integer HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Integer Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = (Cast_HeadVar1_3 == Cast_HeadVar2_4);
  return succeeded;
}

void MR_CALL 
mercury__bitmap____Compare____bit_index_0_0(
  MR_Word * HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Integer HeadVar__3_3)
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

MR_bool MR_CALL 
mercury__bitmap____Unify____bit_index_0_0(
  MR_Integer HeadVar__1_1,
  MR_Integer HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Integer Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = (Cast_HeadVar1_3 == Cast_HeadVar2_4);
  return succeeded;
}

void MR_CALL 
mercury__bitmap__stream_put_4_p_0(
  MR_Word Stream_5,
  MR_Word Slice_6)
{
  MR_Box Var_10 = ((MR_Box) ((MR_hl_field(0, Slice_6, (MR_Integer) 0))));
  MR_Integer Var_11;
  MR_Integer Var_12;
  MR_Integer Var_13 = ((MR_Integer) ((MR_hl_field(0, Slice_6, (MR_Integer) 1))));
  MR_Integer Var_20;

  Var_11 = mercury__bitmap__quotient_bits_per_byte_with_rem_zero_2_f_0((MR_String) "bitmap.slice_start_byte_index", Var_13);
  Var_20 = ((MR_Integer) ((MR_hl_field(0, Slice_6, (MR_Integer) 2))));
  Var_12 = mercury__bitmap__quotient_bits_per_byte_with_rem_zero_2_f_0((MR_String) "bitmap.slice_num_bytes", Var_20);
  mercury__bitmap__write_bitmap_range_6_p_0(Stream_5, Var_10, Var_11, Var_12);
}

void MR_CALL 
mercury__bitmap__stream_bulk_get_9_p_0(
  MR_Word Stream_10,
  MR_Integer Index_11,
  MR_Integer Int_12,
  MR_Box STATE_VARIABLE_Store_0_18,
  MR_Box * STATE_VARIABLE_Store_19,
  MR_Integer * NumRead_14,
  MR_Word * Result_15)
{
  MR_Word Result0_17;

  mercury__bitmap__read_bitmap_range_9_p_0(Stream_10, Index_11, Int_12, STATE_VARIABLE_Store_0_18, STATE_VARIABLE_Store_19, NumRead_14, &Result0_17);
  if ((Result0_17 == (MR_Word) ((MR_Unsigned) 0U)))
    *Result_15 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word E_22 = ((MR_Word) ((MR_hl_field(1, Result0_17, (MR_Integer) 0))));

    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *Result_15 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (E_22));
    }
  }
}

void MR_CALL 
mercury__bitmap__throw_bitmap_error_1_p_0(
  MR_String Msg_2)
{
  MR_Word Var_3 = (MR_Word) (Msg_2);

  {
    mercury__exception__throw_1_p_0((MR_Word) (&mercury__bitmap__bitmap__type_ctor_info_bitmap_error_0), ((MR_Box) (Var_3)));
    return;
  }
}

MR_Integer MR_CALL 
mercury__bitmap__bitmask_1_f_0(
  MR_Integer I_3)
{
  MR_Integer HeadVar__2_2;
  MR_Integer Var_5;
  MR_Integer Var_6 = (MR_Integer) ((MR_Unsigned) 8 - (MR_Unsigned) 1);
  MR_Integer Var_9 = (I_3 % (MR_Integer) 8);

  Var_5 = (MR_Integer) ((MR_Unsigned) Var_6 - (MR_Unsigned) Var_9);
  HeadVar__2_2 = ((MR_Integer) 1 << Var_5);
  return HeadVar__2_2;
}

MR_Integer MR_CALL 
mercury__bitmap__bit_index_in_byte_1_f_0(
  MR_Integer I_3)
{
  MR_Integer HeadVar__2_2 = (I_3 % (MR_Integer) 8);

  return HeadVar__2_2;
}

MR_Integer MR_CALL 
mercury__bitmap__byte_index_for_bit_1_f_0(
  MR_Integer I_3)
{
  MR_bool succeeded = (I_3 < (MR_Integer) 0);
  MR_Integer ByteIndex_4;

  if (succeeded)
    ByteIndex_4 = (MR_Integer) -1;
  else
    ByteIndex_4 = (I_3 / (MR_Integer) 8);
  return ByteIndex_4;
}

static MR_Box MR_CALL 
mercury__bitmap__allocate_bitmap_1_f_0(
  MR_Integer N_1)
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

static void MR_CALL 
mercury__bitmap__bytes_compare_5_p_0(
  MR_Word * Result_6,
  MR_Integer Index_7,
  MR_Integer MaxIndex_8,
  MR_Box BM1_9,
  MR_Box BM2_10)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (Index_7 <= MaxIndex_8);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      MR_Integer Byte1_11;
      MR_Integer Byte2_12;
      MR_Word Result0_13;

{
#define MR_PROC_LABEL mercury__bitmap__bytes_compare_5_p_0

	MR_BitmapPtr BM;
	MR_Integer N;
	MR_Integer Byte;

	BM = (MR_BitmapPtr)BM1_9 ;
	N = Index_7 ;
		{

    Byte = (MR_Integer) BM->elements[N];


		;}
#undef MR_PROC_LABEL
	Byte1_11  = Byte;
}
{
#define MR_PROC_LABEL mercury__bitmap__bytes_compare_5_p_0

	MR_BitmapPtr BM;
	MR_Integer N;
	MR_Integer Byte;

	BM = (MR_BitmapPtr)BM2_10 ;
	N = Index_7 ;
		{

    Byte = (MR_Integer) BM->elements[N];


		;}
#undef MR_PROC_LABEL
	Byte2_12  = Byte;
}
      succeeded = (Byte1_11 < Byte2_12);
      if (succeeded)
        Result0_13 = (MR_Integer) 1;
      else
      {
        succeeded = (Byte1_11 == Byte2_12);
        if (succeeded)
          Result0_13 = (MR_Integer) 0;
        else
          Result0_13 = (MR_Integer) 2;
      }
      switch (Result0_13) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
        case (MR_Integer) 2:
          *Result_6 = Result0_13;
          break;
        case (MR_Integer) 0:
          {
            MR_Integer Var_14 = (MR_Integer) ((MR_Unsigned) Index_7 + (MR_Unsigned) 1);
            MR_Integer next_value_of_Index_7 = Var_14;

            // direct tailcall eliminated
            ;
            Index_7 = next_value_of_Index_7;
            continue;
          }
          break;
      }
    }
    else
      *Result_6 = (MR_Integer) 0;
    break;
  }
}

void MR_CALL 
mercury__bitmap__bitmap_compare_3_p_0(
  MR_Word * Result_1,
  MR_Box BM1_2,
  MR_Box BM2_3)
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

static MR_bool MR_CALL 
mercury__bitmap__bytes_equal_4_p_0(
  MR_Integer Index_5,
  MR_Integer MaxIndex_6,
  MR_Box BM_A_7,
  MR_Box BM_B_8)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (Index_5 <= MaxIndex_6);

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      MR_Integer Var_9;
      MR_Integer Var_10;
      MR_Integer Var_11;
      MR_Integer Var_12;
      MR_Integer next_value_of_Index_5;

{
#define MR_PROC_LABEL mercury__bitmap__bytes_equal_4_p_0

	MR_BitmapPtr BM;
	MR_Integer N;
	MR_Integer Byte;

	BM = (MR_BitmapPtr)BM_A_7 ;
	N = Index_5 ;
		{

    Byte = (MR_Integer) BM->elements[N];


		;}
#undef MR_PROC_LABEL
	Var_9  = Byte;
}
{
#define MR_PROC_LABEL mercury__bitmap__bytes_equal_4_p_0

	MR_BitmapPtr BM;
	MR_Integer N;
	MR_Integer Byte;

	BM = (MR_BitmapPtr)BM_B_8 ;
	N = Index_5 ;
		{

    Byte = (MR_Integer) BM->elements[N];


		;}
#undef MR_PROC_LABEL
	Var_12  = Byte;
}
      succeeded = (Var_9 == Var_12);
      if (succeeded)
      {
        Var_11 = (MR_Integer) 1;
        Var_10 = (MR_Integer) ((MR_Unsigned) Index_5 + (MR_Unsigned) Var_11);
        // direct tailcall eliminated
        ;
        next_value_of_Index_5 = Var_10;
        Index_5 = next_value_of_Index_5;
        continue;
      }
    }
    else
      succeeded = MR_TRUE;
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__bitmap__bitmap_equal_2_p_0(
  MR_Box BM1_1,
  MR_Box BM2_2)
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

void MR_CALL 
mercury__bitmap__do_write_bitmap_range_7_p_0(
  MR_Box Stream_1,
  MR_Box Bitmap_2,
  MR_Integer Start_3,
  MR_Integer Length_4,
  MR_Box * Error_5)
{
{
#define MR_PROC_LABEL mercury__bitmap__do_write_bitmap_range_7_p_0

	MercuryFilePtr Stream;
	MR_BitmapPtr Bitmap;
	MR_Integer Start;
	MR_Integer Length;
	MR_Integer Error;

	Stream = (MercuryFilePtr)Stream_1 ;
	Bitmap = (MR_BitmapPtr)Bitmap_2 ;
	Start = Start_3 ;
	Length = Length_4 ;
		{

    MR_Integer bytes_written =
        (MR_Integer) MR_WRITE(*Stream, Bitmap->elements + Start, Length);
    if (bytes_written != Length) {
        Error = errno;
    } else {
        Error = 0;
    }


		;}
#undef MR_PROC_LABEL
	*Error_5  = (MR_Box) Error;
}
}

static void MR_CALL 
mercury__bitmap__do_read_bitmap_range_10_p_0(
  MR_Box Stream_1,
  MR_Integer StartByte_2,
  MR_Integer NumBytes_3,
  MR_Box Bitmap0_4,
  MR_Box * Bitmap_5,
  MR_Integer BytesRead0_6,
  MR_Integer * BytesRead_7,
  MR_Box * Error_8)
{
{
#define MR_PROC_LABEL mercury__bitmap__do_read_bitmap_range_10_p_0

	MercuryFilePtr Stream;
	MR_Integer StartByte;
	MR_Integer NumBytes;
	MR_BitmapPtr Bitmap0;
	MR_BitmapPtr Bitmap;
	MR_Integer BytesRead0;
	MR_Integer BytesRead;
	MR_Integer Error;

	Stream = (MercuryFilePtr)Stream_1 ;
	StartByte = StartByte_2 ;
	NumBytes = NumBytes_3 ;
	Bitmap0 = (MR_BitmapPtr)Bitmap0_4 ;
	BytesRead0 = BytesRead0_6 ;
		{

    size_t nread;

    Bitmap = Bitmap0;
    nread = MR_READ(*Stream, Bitmap->elements + StartByte, NumBytes);
    BytesRead = BytesRead0 + nread;
    if (nread < NumBytes && MR_FERROR(*Stream)) {
        Error = errno;
    } else {
        Error = 0;
    }


		;}
#undef MR_PROC_LABEL
	*Bitmap_5  = (MR_Box) Bitmap;
	*BytesRead_7  = BytesRead;
	*Error_8  = (MR_Box) Error;
}
}

MR_Word MR_CALL 
mercury__bitmap__bitmap_to_byte_strings_1_f_0(
  MR_Box BM_3)
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

static void MR_CALL 
mercury__bitmap__unsafe_do_copy_bytes_7_p_0(
  MR_Box SrcBM_8,
  MR_Integer SrcByteIndex_9,
  MR_Integer DestByteIndex_10,
  MR_Integer NumBytes_11,
  MR_Integer AddForNext_12,
  MR_Box STATE_VARIABLE_DestBM_0_15,
  MR_Box * STATE_VARIABLE_DestBM_16)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (NumBytes_11 == (MR_Integer) 0);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
      *STATE_VARIABLE_DestBM_16 = STATE_VARIABLE_DestBM_0_15;
    else
    {
      MR_Integer Byte_14;
      MR_Box STATE_VARIABLE_DestBM_17_17;
      MR_Integer Var_18;
      MR_Integer Var_19;
      MR_Integer Var_20;
      MR_Integer next_value_of_SrcByteIndex_9;
      MR_Integer next_value_of_DestByteIndex_10;
      MR_Integer next_value_of_NumBytes_11;
      MR_Box next_value_of_STATE_VARIABLE_DestBM_0_15;

{
#define MR_PROC_LABEL mercury__bitmap__unsafe_do_copy_bytes_7_p_0

	MR_BitmapPtr BM;
	MR_Integer N;
	MR_Integer Byte;

	BM = (MR_BitmapPtr)SrcBM_8 ;
	N = SrcByteIndex_9 ;
		{

    Byte = (MR_Integer) BM->elements[N];


		;}
#undef MR_PROC_LABEL
	Byte_14  = Byte;
}
{
#define MR_PROC_LABEL mercury__bitmap__unsafe_do_copy_bytes_7_p_0

	MR_Integer N;
	MR_Integer Byte;
	MR_BitmapPtr BM0;
	MR_BitmapPtr BM;

	N = DestByteIndex_10 ;
	Byte = Byte_14 ;
	BM0 = (MR_BitmapPtr)STATE_VARIABLE_DestBM_0_15 ;
		{

    BM = BM0;
    BM->elements[N] = (MR_uint_least8_t) Byte;


		;}
#undef MR_PROC_LABEL
	STATE_VARIABLE_DestBM_17_17  = (MR_Box) BM;
}
      Var_18 = (MR_Integer) ((MR_Unsigned) SrcByteIndex_9 + (MR_Unsigned) AddForNext_12);
      Var_19 = (MR_Integer) ((MR_Unsigned) DestByteIndex_10 + (MR_Unsigned) AddForNext_12);
      Var_20 = (MR_Integer) ((MR_Unsigned) NumBytes_11 - (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_SrcByteIndex_9 = Var_18;
      next_value_of_DestByteIndex_10 = Var_19;
      next_value_of_NumBytes_11 = Var_20;
      next_value_of_STATE_VARIABLE_DestBM_0_15 = STATE_VARIABLE_DestBM_17_17;
      SrcByteIndex_9 = next_value_of_SrcByteIndex_9;
      DestByteIndex_10 = next_value_of_DestByteIndex_10;
      NumBytes_11 = next_value_of_NumBytes_11;
      STATE_VARIABLE_DestBM_0_15 = next_value_of_STATE_VARIABLE_DestBM_0_15;
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__bitmap__zip_4_p_0(
  MR_Word Fn_5,
  MR_Box BM_A_6,
  MR_Box BM_B_7,
  MR_Box * BM_8)
{
  MR_bool succeeded;
  MR_Integer Var_9;

{
#define MR_PROC_LABEL mercury__bitmap__zip_4_p_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr)BM_B_7 ;
		{

    NumBits = BM->num_bits;


		;}
#undef MR_PROC_LABEL
	Var_9  = NumBits;
}
  succeeded = (Var_9 == (MR_Integer) 0);
  if (succeeded)
    *BM_8 = BM_B_7;
  else
  {
    MR_Integer Var_10;
    MR_Integer Var_11;
    MR_Integer Var_12;

{
#define MR_PROC_LABEL mercury__bitmap__zip_4_p_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr)BM_B_7 ;
		{

    NumBits = BM->num_bits;


		;}
#undef MR_PROC_LABEL
	Var_12  = NumBits;
}
    Var_11 = (MR_Integer) ((MR_Unsigned) Var_12 - (MR_Unsigned) 1);
    succeeded = (Var_11 < (MR_Integer) 0);
    if (succeeded)
      Var_10 = (MR_Integer) -1;
    else
      Var_10 = (Var_11 / (MR_Integer) 8);
    mercury__bitmap__zip_loop_5_p_0(Var_10, Fn_5, BM_A_6, BM_B_7, BM_8);
  }
}

void MR_CALL 
mercury__bitmap__zip_loop_5_p_0(
  MR_Integer I_6,
  MR_Word Fn_7,
  MR_Box BM_A_8,
  MR_Box BM_B_9,
  MR_Box * BM_10)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (I_6 >= (MR_Integer) 0);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      MR_Integer XA_11;
      MR_Integer XB_12;
      MR_Box BM_C_13;
      MR_Integer Var_15;
      MR_Integer Var_16;
      MR_Box MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box);
      MR_Box conv1_Var_15;
      MR_Integer next_value_of_I_6;
      MR_Box next_value_of_BM_B_9;

{
#define MR_PROC_LABEL mercury__bitmap__zip_loop_5_p_0

	MR_BitmapPtr BM;
	MR_Integer N;
	MR_Integer Byte;

	BM = (MR_BitmapPtr)BM_A_8 ;
	N = I_6 ;
		{

    Byte = (MR_Integer) BM->elements[N];


		;}
#undef MR_PROC_LABEL
	XA_11  = Byte;
}
{
#define MR_PROC_LABEL mercury__bitmap__zip_loop_5_p_0

	MR_BitmapPtr BM;
	MR_Integer N;
	MR_Integer Byte;

	BM = (MR_BitmapPtr)BM_B_9 ;
	N = I_6 ;
		{

    Byte = (MR_Integer) BM->elements[N];


		;}
#undef MR_PROC_LABEL
	XB_12  = Byte;
}
      func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, Fn_7, (MR_Integer) 1))));
      conv1_Var_15 = func_0(((MR_Box) (Fn_7)), ((MR_Box) (XA_11)), ((MR_Box) (XB_12)));
      Var_15 = ((MR_Integer) (conv1_Var_15));
{
#define MR_PROC_LABEL mercury__bitmap__zip_loop_5_p_0

	MR_Integer N;
	MR_Integer Byte;
	MR_BitmapPtr BM0;
	MR_BitmapPtr BM;

	N = I_6 ;
	Byte = Var_15 ;
	BM0 = (MR_BitmapPtr)BM_B_9 ;
		{

    BM = BM0;
    BM->elements[N] = (MR_uint_least8_t) Byte;


		;}
#undef MR_PROC_LABEL
	BM_C_13  = (MR_Box) BM;
}
      Var_16 = (MR_Integer) ((MR_Unsigned) I_6 - (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_I_6 = Var_16;
      next_value_of_BM_B_9 = BM_C_13;
      I_6 = next_value_of_I_6;
      BM_B_9 = next_value_of_BM_B_9;
      continue;
    }
    else
      *BM_10 = BM_B_9;
    break;
  }
}

static void MR_CALL 
mercury__bitmap__set_num_bits_3_p_0(
  MR_Integer NumBits_1,
  MR_Box BM0_2,
  MR_Box * BM_3)
{
{
#define MR_PROC_LABEL mercury__bitmap__set_num_bits_3_p_0

	MR_Integer NumBits;
	MR_BitmapPtr BM0;
	MR_BitmapPtr BM;

	NumBits = NumBits_1 ;
	BM0 = (MR_BitmapPtr)BM0_2 ;
		{

    BM = BM0;
    BM->num_bits = NumBits;


		;}
#undef MR_PROC_LABEL
	*BM_3  = (MR_Box) BM;
}
}

void MR_CALL 
mercury__bitmap__clear_filler_bits_2_p_0(
  MR_Box STATE_VARIABLE_BM_0_4,
  MR_Box * STATE_VARIABLE_BM_5)
{
  MR_Integer Var_6;
  MR_Integer Var_9;

{
#define MR_PROC_LABEL mercury__bitmap__clear_filler_bits_2_p_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr)STATE_VARIABLE_BM_0_4 ;
		{

    NumBits = BM->num_bits;


		;}
#undef MR_PROC_LABEL
	Var_9  = NumBits;
}
  Var_6 = (MR_Integer) ((MR_Unsigned) Var_9 - (MR_Unsigned) 1);
  mercury__bitmap__set_trailing_bits_in_byte_4_p_0(Var_6, (MR_Integer) 0, STATE_VARIABLE_BM_0_4, STATE_VARIABLE_BM_5);
}

void MR_CALL 
mercury__bitmap__write_bitmap_range_5_p_0(
  MR_Box Bitmap_6,
  MR_Integer Start_7,
  MR_Integer NumBytes_8)
{
  MR_Word Stream_10;
  MR_Box Var_14;

{
#define MR_PROC_LABEL mercury__bitmap__write_bitmap_range_5_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_binary_output();


		;}
#undef MR_PROC_LABEL
	Var_14  = (MR_Box) Stream;
}
  Stream_10 = (MR_Word) (Var_14);
  mercury__bitmap__write_bitmap_range_6_p_0(Stream_10, Bitmap_6, Start_7, NumBytes_8);
}

void MR_CALL 
mercury__bitmap__write_bitmap_range_6_p_0(
  MR_Word OutputStream_7,
  MR_Box Bitmap_8,
  MR_Integer Start_9,
  MR_Integer NumBytes_10)
{
  MR_bool succeeded = (NumBytes_10 == (MR_Integer) 0);

  if (!(succeeded))
  {
    MR_Integer Var_17;
    MR_Integer Var_18;
    MR_Integer Var_19;

    succeeded = (NumBytes_10 > (MR_Integer) 0);
    if (succeeded)
    {
      succeeded = mercury__bitmap__byte_in_range_2_p_0(Bitmap_8, Start_9);
      if (succeeded)
      {
        Var_18 = (MR_Integer) ((MR_Unsigned) Start_9 + (MR_Unsigned) NumBytes_10);
        Var_19 = (MR_Integer) 1;
        Var_17 = (MR_Integer) ((MR_Unsigned) Var_18 - (MR_Unsigned) Var_19);
        succeeded = mercury__bitmap__byte_in_range_2_p_0(Bitmap_8, Var_17);
      }
    }
    if (succeeded)
    {
      MR_Box Stream_12 = (MR_Box) (OutputStream_7);
      MR_Box Error_13;

{
#define MR_PROC_LABEL mercury__bitmap__write_bitmap_range_6_p_0

	MercuryFilePtr Stream;
	MR_BitmapPtr Bitmap;
	MR_Integer Start;
	MR_Integer Length;
	MR_Integer Error;

	Stream = (MercuryFilePtr)Stream_12 ;
	Bitmap = (MR_BitmapPtr)Bitmap_8 ;
	Start = Start_9 ;
	Length = NumBytes_10 ;
		{

    MR_Integer bytes_written =
        (MR_Integer) MR_WRITE(*Stream, Bitmap->elements + Start, Length);
    if (bytes_written != Length) {
        Error = errno;
    } else {
        Error = 0;
    }


		;}
#undef MR_PROC_LABEL
	Error_13  = (MR_Box) Error;
}
{
#define MR_PROC_LABEL mercury__bitmap__write_bitmap_range_6_p_0

	MR_Integer Error;
	MR_bool SUCCESS_INDICATOR;

	Error = (MR_Integer)Error_13 ;
		{

    // This works for errno and Win32 error values (ERROR_SUCCESS == 0).
    SUCCESS_INDICATOR = (Error == 0) ? MR_TRUE : MR_FALSE;


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
      if (!(succeeded))
      {
        MR_Word Var_28;

        mercury__io__error_util__make_io_error_from_system_error_impl_5_p_0(Error_13, (MR_String) "error writing to output file: ", &Var_28);
        {
          mercury__exception__throw_1_p_0((MR_Word) (&mercury__io__io__type_ctor_info_error_0), ((MR_Box) (Var_28)));
          return;
        }
      }
    }
    else
    {
      MR_Integer Var_23 = (MR_Integer) ((MR_Unsigned) Start_9 * (MR_Unsigned) 8);
      MR_Integer Var_24 = (MR_Integer) ((MR_Unsigned) NumBytes_10 * (MR_Unsigned) 8);

      {
        mercury__bitmap__throw_bounds_error_4_p_0(Bitmap_8, (MR_String) "bitmap.write_bitmap", Var_23, Var_24);
        return;
      }
    }
  }
}

void MR_CALL 
mercury__bitmap__write_bitmap_3_p_0(
  MR_Box Bitmap_4)
{
  MR_Word Stream_6;
  MR_Box Var_10;

{
#define MR_PROC_LABEL mercury__bitmap__write_bitmap_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_binary_output();


		;}
#undef MR_PROC_LABEL
	Var_10  = (MR_Box) Stream;
}
  Stream_6 = (MR_Word) (Var_10);
  mercury__bitmap__write_bitmap_4_p_0(Stream_6, Bitmap_4);
}

void MR_CALL 
mercury__bitmap__write_bitmap_4_p_0(
  MR_Word OutputStream_5,
  MR_Box Bitmap_6)
{
  MR_bool succeeded;
  MR_Integer NumBytes_8;
  MR_Box Stream_9;
  MR_Box Error_10;

  NumBytes_8 = mercury__bitmap__det_num_bytes_1_f_0(Bitmap_6);
  Stream_9 = (MR_Box) (OutputStream_5);
{
#define MR_PROC_LABEL mercury__bitmap__write_bitmap_4_p_0

	MercuryFilePtr Stream;
	MR_BitmapPtr Bitmap;
	MR_Integer Start;
	MR_Integer Length;
	MR_Integer Error;

	Stream = (MercuryFilePtr)Stream_9 ;
	Bitmap = (MR_BitmapPtr)Bitmap_6 ;
	Start = (MR_Integer) 0 ;
	Length = NumBytes_8 ;
		{

    MR_Integer bytes_written =
        (MR_Integer) MR_WRITE(*Stream, Bitmap->elements + Start, Length);
    if (bytes_written != Length) {
        Error = errno;
    } else {
        Error = 0;
    }


		;}
#undef MR_PROC_LABEL
	Error_10  = (MR_Box) Error;
}
{
#define MR_PROC_LABEL mercury__bitmap__write_bitmap_4_p_0

	MR_Integer Error;
	MR_bool SUCCESS_INDICATOR;

	Error = (MR_Integer)Error_10 ;
		{

    // This works for errno and Win32 error values (ERROR_SUCCESS == 0).
    SUCCESS_INDICATOR = (Error == 0) ? MR_TRUE : MR_FALSE;


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
  if (!(succeeded))
  {
    MR_Word Var_16;

    mercury__io__error_util__make_io_error_from_system_error_impl_5_p_0(Error_10, (MR_String) "error writing to output file: ", &Var_16);
    {
      mercury__exception__throw_1_p_0((MR_Word) (&mercury__io__io__type_ctor_info_error_0), ((MR_Box) (Var_16)));
      return;
    }
  }
}

void MR_CALL 
mercury__bitmap__read_bitmap_range_8_p_0(
  MR_Integer StartByte_9,
  MR_Integer NumBytes_10,
  MR_Box STATE_VARIABLE_Bitmap_0_16,
  MR_Box * STATE_VARIABLE_Bitmap_17,
  MR_Integer * BytesRead_12,
  MR_Word * Result_13)
{
  MR_Word Stream_15;
  MR_Box Var_21;

{
#define MR_PROC_LABEL mercury__bitmap__read_bitmap_range_8_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_binary_input();


		;}
#undef MR_PROC_LABEL
	Var_21  = (MR_Box) Stream;
}
  Stream_15 = (MR_Word) (Var_21);
  mercury__bitmap__read_bitmap_range_9_p_0(Stream_15, StartByte_9, NumBytes_10, STATE_VARIABLE_Bitmap_0_16, STATE_VARIABLE_Bitmap_17, BytesRead_12, Result_13);
}

void MR_CALL 
mercury__bitmap__read_bitmap_7_p_0(
  MR_Word Stream_8,
  MR_Box STATE_VARIABLE_Bitmap_0_14,
  MR_Box * STATE_VARIABLE_Bitmap_15,
  MR_Integer * BytesRead_10,
  MR_Word * Result_11)
{
  MR_Integer NumBytes_13;

  NumBytes_13 = mercury__bitmap__det_num_bytes_1_f_0(STATE_VARIABLE_Bitmap_0_14);
  mercury__bitmap__read_bitmap_range_9_p_0(Stream_8, (MR_Integer) 0, NumBytes_13, STATE_VARIABLE_Bitmap_0_14, STATE_VARIABLE_Bitmap_15, BytesRead_10, Result_11);
}

void MR_CALL 
mercury__bitmap__read_bitmap_6_p_0(
  MR_Box STATE_VARIABLE_Bitmap_0_12,
  MR_Box * STATE_VARIABLE_Bitmap_13,
  MR_Integer * BytesRead_8,
  MR_Word * Result_9)
{
  MR_Word Stream_11;
  MR_Box Var_17;
  MR_Integer NumBytes_18;

{
#define MR_PROC_LABEL mercury__bitmap__read_bitmap_6_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_binary_input();


		;}
#undef MR_PROC_LABEL
	Var_17  = (MR_Box) Stream;
}
  Stream_11 = (MR_Word) (Var_17);
  NumBytes_18 = mercury__bitmap__det_num_bytes_1_f_0(STATE_VARIABLE_Bitmap_0_12);
  mercury__bitmap__read_bitmap_range_9_p_0(Stream_11, (MR_Integer) 0, NumBytes_18, STATE_VARIABLE_Bitmap_0_12, STATE_VARIABLE_Bitmap_13, BytesRead_8, Result_9);
}

void MR_CALL 
mercury__bitmap__read_bitmap_range_9_p_0(
  MR_Word InputStream_10,
  MR_Integer Start_11,
  MR_Integer NumBytes_12,
  MR_Box STATE_VARIABLE_Bitmap_0_21,
  MR_Box * STATE_VARIABLE_Bitmap_22,
  MR_Integer * BytesRead_14,
  MR_Word * Result_15)
{
  MR_bool succeeded = (NumBytes_12 > (MR_Integer) 0);
  MR_Integer Var_26;
  MR_Integer Var_27;
  MR_Integer Var_28;

  if (succeeded)
  {
    succeeded = mercury__bitmap__byte_in_range_2_p_0(STATE_VARIABLE_Bitmap_0_21, Start_11);
    if (succeeded)
    {
      Var_27 = (MR_Integer) ((MR_Unsigned) Start_11 + (MR_Unsigned) NumBytes_12);
      Var_28 = (MR_Integer) 1;
      Var_26 = (MR_Integer) ((MR_Unsigned) Var_27 - (MR_Unsigned) Var_28);
      succeeded = mercury__bitmap__byte_in_range_2_p_0(STATE_VARIABLE_Bitmap_0_21, Var_26);
    }
  }
  if (succeeded)
  {
    MR_Box Stream_17 = (MR_Box) (InputStream_10);
    MR_Box Error_18;
    MR_Word MaybeIOError_19;

{
#define MR_PROC_LABEL mercury__bitmap__read_bitmap_range_9_p_0

	MercuryFilePtr Stream;
	MR_Integer StartByte;
	MR_Integer NumBytes;
	MR_BitmapPtr Bitmap0;
	MR_BitmapPtr Bitmap;
	MR_Integer BytesRead0;
	MR_Integer BytesRead;
	MR_Integer Error;

	Stream = (MercuryFilePtr)Stream_17 ;
	StartByte = Start_11 ;
	NumBytes = NumBytes_12 ;
	Bitmap0 = (MR_BitmapPtr)STATE_VARIABLE_Bitmap_0_21 ;
	BytesRead0 = (MR_Integer) 0 ;
		{

    size_t nread;

    Bitmap = Bitmap0;
    nread = MR_READ(*Stream, Bitmap->elements + StartByte, NumBytes);
    BytesRead = BytesRead0 + nread;
    if (nread < NumBytes && MR_FERROR(*Stream)) {
        Error = errno;
    } else {
        Error = 0;
    }


		;}
#undef MR_PROC_LABEL
	*STATE_VARIABLE_Bitmap_22  = (MR_Box) Bitmap;
	*BytesRead_14  = BytesRead;
	Error_18  = (MR_Box) Error;
}
{
#define MR_PROC_LABEL mercury__bitmap__read_bitmap_range_9_p_0

	MR_Integer Error;
	MR_bool SUCCESS_INDICATOR;

	Error = (MR_Integer)Error_18 ;
		{

    // This works for errno and Win32 error values (ERROR_SUCCESS == 0).
    SUCCESS_INDICATOR = (Error == 0) ? MR_TRUE : MR_FALSE;


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
    if (succeeded)
      MaybeIOError_19 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word Var_39;

      mercury__io__error_util__make_io_error_from_system_error_impl_5_p_0(Error_18, (MR_String) "read failed: ", &Var_39);
      {
        MaybeIOError_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, MaybeIOError_19, 0) = ((MR_Box) (Var_39));
      }
    }
    if ((MaybeIOError_19 == (MR_Word) ((MR_Unsigned) 0U)))
      *Result_15 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word IOError_20 = ((MR_Word) ((MR_hl_field(1, MaybeIOError_19, (MR_Integer) 0))));

      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *Result_15 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (IOError_20));
      }
    }
  }
  else
  {
    succeeded = (NumBytes_12 == (MR_Integer) 0);
    if (succeeded)
      succeeded = mercury__bitmap__byte_in_range_2_p_0(STATE_VARIABLE_Bitmap_0_21, Start_11);
    if (succeeded)
    {
      *Result_15 = (MR_Word) ((MR_Unsigned) 0U);
      *BytesRead_14 = (MR_Integer) 0;
    }
    else
    {
      MR_Integer Var_35 = (MR_Integer) ((MR_Unsigned) Start_11 * (MR_Unsigned) 8);
      MR_Integer Var_36 = (MR_Integer) ((MR_Unsigned) NumBytes_12 * (MR_Unsigned) 8);

      {
        mercury__bitmap__throw_bounds_error_4_p_0(STATE_VARIABLE_Bitmap_0_21, (MR_String) "bitmap.read_bitmap", Var_35, Var_36);
        return;
      }
    }
    *STATE_VARIABLE_Bitmap_22 = STATE_VARIABLE_Bitmap_0_21;
  }
}

MR_String MR_CALL 
mercury__bitmap__to_byte_string_1_f_0(
  MR_Box BM_3)
{
  MR_String HeadVar__2_2;
  MR_Word Var_5;
  MR_Integer NumBits_6;

{
#define MR_PROC_LABEL mercury__bitmap__to_byte_string_1_f_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr)BM_3 ;
		{

    NumBits = BM->num_bits;


		;}
#undef MR_PROC_LABEL
	NumBits_6  = NumBits;
}
  Var_5 = mercury__bitmap__bitmap_to_byte_strings_3_f_0(BM_3, NumBits_6, (MR_Word) ((MR_Unsigned) 0U));
  HeadVar__2_2 = mercury__string__join_list_2_f_0((MR_String) ".", Var_5);
  return HeadVar__2_2;
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

      Var_16 = mercury__bitmap__det_byte_index_for_bit_1_f_0(Var_17);
{
#define MR_PROC_LABEL mercury__bitmap__bitmap_to_byte_strings_3_f_0

	MR_BitmapPtr BM;
	MR_Integer N;
	MR_Integer Byte;

	BM = (MR_BitmapPtr)BM_5 ;
	N = Var_16 ;
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
        STATE_VARIABLE_Strs_29_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, STATE_VARIABLE_Strs_29_29, 0) = ((MR_Box) (ThisByteStr_12));
        MR_hl_field(1, STATE_VARIABLE_Strs_29_29, 1) = ((MR_Box) (STATE_VARIABLE_Strs_0_13));
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
  MR_bool succeeded;
  MR_Box HeadVar__2_2;
  MR_Box BM_4;

  succeeded = mercury__bitmap__from_string_2_p_0(Str_3, &BM_4);
  if (succeeded)
    HeadVar__2_2 = BM_4;
  else
    mercury__require__unexpected_2_p_0((MR_String) "function \140bitmap.det_from_string\'/1", (MR_String) "bitmap.from_string failed");
  return HeadVar__2_2;
}

MR_bool MR_CALL 
mercury__bitmap__from_string_1_f_0(
  MR_String Str_3,
  MR_Box * BM_4)
{
  MR_bool succeeded;

  succeeded = mercury__bitmap__from_string_2_p_0(Str_3, BM_4);
  return succeeded;
}

MR_bool MR_CALL 
mercury__bitmap__from_string_2_p_0(
  MR_String Str_3,
  MR_Box * BM_4)
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
  MR_Integer Var_25;
  MR_Integer Var_23;
  MR_Integer Var_24;
  MR_Char Var_13;
  MR_Integer Var_26;

{
#define MR_PROC_LABEL mercury__bitmap__from_string_2_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_Integer ReplacedCodeUnit;
	MR_bool SUCCESS_INDICATOR;

	Str = Str_3 ;
	Index = (MR_Integer) 0 ;
		{

    Ch = (unsigned char) Str[Index];
    ReplacedCodeUnit = -1;
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        if (Ch < 0) {
            Ch = 0xfffd;
            ReplacedCodeUnit = (unsigned char) Str[Index];
            NextIndex = Index + 1;
        }
        SUCCESS_INDICATOR = MR_TRUE;
    }


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	Start_5  = NextIndex;
	Var_21  = Ch;
	Var_23  = ReplacedCodeUnit;
	}
succeeded  = SUCCESS_INDICATOR;
}
  if (succeeded)
  {
    succeeded = ((MR_Char) 60 == Var_21);
    if (succeeded)
    {
{
#define MR_PROC_LABEL mercury__bitmap__from_string_2_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Char Ch;

	Str = Str_3 ;
	Index = Start_5 ;
		{

    Ch = (unsigned char) Str[Index];
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
#define MR_PROC_LABEL mercury__bitmap__from_string_2_p_0

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
#define MR_PROC_LABEL mercury__bitmap__from_string_2_p_0

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
        Ch = (unsigned char) Str[PrevIndex];
        if (! MR_is_ascii(Ch)) {
            Ch = MR_utf8_prev_get(Str, &PrevIndex);
            // XXX MR_utf8_prev_get currently just scans backwards to find a
            // lead byte, so we need a separate check to ensure no bytes are
            // unaccounted for.
            if (Ch < 0 || PrevIndex + MR_utf8_width(Ch) != Index) {
                Ch = 0xfffd;
                ReplacedCodeUnit = (unsigned char) Str[Index - 1];
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
	Var_24  = ReplacedCodeUnit;
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
#define MR_PROC_LABEL mercury__bitmap__from_string_2_p_0

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
              Var_25 = (MR_Integer) 10;
              succeeded = mercury__string__base_string_to_int_3_p_0(Var_25, SizeStr_9, &Size_10);
              if (succeeded)
              {
                Var_19 = (MR_Integer) 0;
                succeeded = (Size_10 >= Var_19);
                if (succeeded)
                {
{
#define MR_PROC_LABEL mercury__bitmap__from_string_2_p_0

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
#define MR_PROC_LABEL mercury__bitmap__from_string_2_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_Integer ReplacedCodeUnit;
	MR_bool SUCCESS_INDICATOR;

	Str = Str_3 ;
	Index = Colon_8 ;
		{

    Ch = (unsigned char) Str[Index];
    ReplacedCodeUnit = -1;
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        if (Ch < 0) {
            Ch = 0xfffd;
            ReplacedCodeUnit = (unsigned char) Str[Index];
            NextIndex = Index + 1;
        }
        SUCCESS_INDICATOR = MR_TRUE;
    }


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	AfterColon_12  = NextIndex;
	Var_13  = Ch;
	Var_26  = ReplacedCodeUnit;
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

    Ch = (unsigned char) Str[Index];
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

    Ch = (unsigned char) Str[Index];
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
	MR_Integer Byte;
	MR_BitmapPtr BM0;
	MR_BitmapPtr BM;

	N = ByteIndex_10 ;
	Byte = Byte_14 ;
	BM0 = (MR_BitmapPtr)STATE_VARIABLE_BM_0_15 ;
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
  MR_Integer Var_23;

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
  mercury__bitmap__to_string_chars_4_p_0(Var_9, BM_3, (MR_Word) (MR_mkword(1, &mercury__bitmap_scalar_common_4[0])), &BitChars_6);
{
#define MR_PROC_LABEL mercury__bitmap__to_string_1_f_0

	MR_Integer I;
	MR_String S;

	I = NumBits_5 ;
		{

    char buffer[21]; // 1 for sign, 19 for digits, 1 for nul.
    sprintf(buffer, "%" MR_INTEGER_LENGTH_MODIFIER "d", I);
    MR_allocate_aligned_string_msg(S, strlen(buffer), MR_ALLOC_ID);
    strcpy(S, buffer);


		;}
#undef MR_PROC_LABEL
	Var_15  = S;
}
{
#define MR_PROC_LABEL mercury__bitmap__to_string_1_f_0

	MR_String Str;
	MR_Integer Length;

	Str = Var_15 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	Var_23  = Length;
}
  mercury__string__do_to_char_list_loop_4_p_0(Var_15, Var_23, (MR_Word) ((MR_Unsigned) 0U), &LenChars_7);
  {
    Var_16 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_16, 0) = ((MR_Box) (MR_Word) ((MR_Char) 60));
    MR_hl_field(1, Var_16, 1) = ((MR_Box) (LenChars_7));
  }
  {
    Var_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_18, 0) = ((MR_Box) (MR_Word) ((MR_Char) 58));
    MR_hl_field(1, Var_18, 1) = ((MR_Box) (BitChars_6));
  }
  mercury__list__append_3_p_1((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), Var_16, Var_18, &Chars_8);
  mercury__string__from_char_list_2_p_0(Chars_8, &Str_4);
  return Str_4;
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
      MR_Integer BitMask_28;
      MR_Integer Var_30;
      MR_Integer Var_32;
      MR_Char HighChar_10;
      MR_Char LowChar_11;
      MR_Integer Var_16;
      MR_Integer Var_17;
      MR_Integer Var_19;

{
#define MR_PROC_LABEL mercury__bitmap__to_string_chars_4_p_0

	MR_BitmapPtr BM;
	MR_Integer N;
	MR_Integer Byte;

	BM = (MR_BitmapPtr)BM_6 ;
	N = Index_5 ;
		{

    Byte = (MR_Integer) BM->elements[N];


		;}
#undef MR_PROC_LABEL
	Byte_8  = Byte;
}
      Var_30 = (MR_Integer) ((MR_Unsigned) 4 - (MR_Unsigned) 1);
      BitMask_28 = ((MR_Integer) 1 << Var_30);
      Var_32 = (MR_Integer) ((MR_Unsigned) BitMask_28 - (MR_Unsigned) 1);
      Mask_9 = (BitMask_28 | Var_32);
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
          Var_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_21, 0) = ((MR_Box) (MR_Word) (LowChar_11));
          MR_hl_field(1, Var_21, 1) = ((MR_Box) (STATE_VARIABLE_Chars_0_12));
        }
        {
          STATE_VARIABLE_Chars_20_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, STATE_VARIABLE_Chars_20_20, 0) = ((MR_Box) (MR_Word) (HighChar_10));
          MR_hl_field(1, STATE_VARIABLE_Chars_20_20, 1) = ((MR_Box) (Var_21));
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

MR_Integer MR_CALL 
mercury__bitmap__hash_1_f_0(
  MR_Box BM_3)
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
  mercury__bitmap__hash_loop_5_p_0(BM_3, (MR_Integer) 0, NumBytes_7, (MR_Integer) 0, &HashVal0_8);
  HashVal_4 = (HashVal0_8 ^ NumBits_5);
  return HashVal_4;
}

static void MR_CALL 
mercury__bitmap__hash_loop_5_p_0(
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
      MR_Integer H1_17;
      MR_Integer Var_18;
      MR_Integer next_value_of_Index_7;
      MR_Integer next_value_of_STATE_VARIABLE_HashVal_0_10;

{
#define MR_PROC_LABEL mercury__bitmap__hash_loop_5_p_0

	MR_BitmapPtr BM;
	MR_Integer N;
	MR_Integer Byte;

	BM = (MR_BitmapPtr)BM_6 ;
	N = Index_7 ;
		{

    Byte = (MR_Integer) BM->elements[N];


		;}
#undef MR_PROC_LABEL
	Var_12  = Byte;
}
      Var_18 = mercury__int__f_60_60_2_f_0(STATE_VARIABLE_HashVal_0_10, (MR_Integer) 5);
      H1_17 = (STATE_VARIABLE_HashVal_0_10 ^ Var_18);
      STATE_VARIABLE_HashVal_13_13 = (H1_17 ^ Var_12);
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

MR_Box MR_CALL 
mercury__bitmap__copy_bytes_in_bitmap_4_f_0(
  MR_Box SrcBM_6,
  MR_Integer SrcStartByteIndex_7,
  MR_Integer DestStartByteIndex_8,
  MR_Integer NumBytes_9)
{
  MR_Box DestBM_10;

  mercury__bitmap__do_copy_bytes_7_p_0((MR_Integer) 1, SrcBM_6, SrcStartByteIndex_7, DestStartByteIndex_8, NumBytes_9, SrcBM_6, &DestBM_10);
  return DestBM_10;
}

MR_Box MR_CALL 
mercury__bitmap__copy_bytes_5_f_0(
  MR_Box SrcBM_7,
  MR_Integer SrcStartByteIndex_8,
  MR_Box DestBM0_9,
  MR_Integer DestStartByteIndex_10,
  MR_Integer NumBytes_11)
{
  MR_Box DestBM_12;

  mercury__bitmap__do_copy_bytes_7_p_0((MR_Integer) 0, SrcBM_7, SrcStartByteIndex_8, DestStartByteIndex_10, NumBytes_11, DestBM0_9, &DestBM_12);
  return DestBM_12;
}

void MR_CALL 
mercury__bitmap__do_copy_bytes_7_p_0(
  MR_Integer SameBM_8,
  MR_Box SrcBM_9,
  MR_Integer SrcStartByte_10,
  MR_Integer DestStartByte_11,
  MR_Integer NumBytes_12,
  MR_Box STATE_VARIABLE_DestBM_0_14,
  MR_Box * STATE_VARIABLE_DestBM_15)
{
  MR_bool succeeded = (NumBytes_12 == (MR_Integer) 0);

  if (succeeded)
    *STATE_VARIABLE_DestBM_15 = STATE_VARIABLE_DestBM_0_14;
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

    succeeded = (NumBytes_12 > (MR_Integer) 0);
    if (succeeded)
    {
      Var_17 = (MR_Integer) 0;
      succeeded = (SrcStartByte_10 >= Var_17);
      if (succeeded)
      {
        Var_19 = (MR_Integer) ((MR_Unsigned) SrcStartByte_10 + (MR_Unsigned) NumBytes_12);
        Var_20 = (MR_Integer) 1;
        Var_18 = (MR_Integer) ((MR_Unsigned) Var_19 - (MR_Unsigned) Var_20);
        succeeded = mercury__bitmap__byte_in_range_2_p_0(SrcBM_9, Var_18);
        if (succeeded)
        {
          Var_21 = (MR_Integer) 0;
          succeeded = (DestStartByte_11 >= Var_21);
          if (succeeded)
          {
            Var_23 = (MR_Integer) ((MR_Unsigned) DestStartByte_11 + (MR_Unsigned) NumBytes_12);
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
#define MR_PROC_LABEL mercury__bitmap__do_copy_bytes_7_p_0

	MR_Integer SameBM;
	MR_BitmapPtr SrcBM;
	MR_Integer SrcFirstByteIndex;
	MR_Integer DestFirstByteIndex;
	MR_Integer NumBytes;
	MR_BitmapPtr DestBM0;
	MR_BitmapPtr DestBM;

	SameBM = SameBM_8 ;
	SrcBM = (MR_BitmapPtr)SrcBM_9 ;
	SrcFirstByteIndex = SrcStartByte_10 ;
	DestFirstByteIndex = DestStartByte_11 ;
	NumBytes = NumBytes_12 ;
	DestBM0 = (MR_BitmapPtr)STATE_VARIABLE_DestBM_0_14 ;
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
	*STATE_VARIABLE_DestBM_15  = (MR_Box) DestBM;
}
    }
    else
      {
        mercury__exception__throw_1_p_0((MR_Word) (&mercury__bitmap__bitmap__type_ctor_info_bitmap_error_0), ((MR_Box) (((MR_Box) ((MR_String) "bitmap.copy_bytes: out of range")))));
        return;
      }
  }
}

MR_Box MR_CALL 
mercury__bitmap__copy_bits_in_bitmap_4_f_0(
  MR_Box SrcBM_6,
  MR_Integer SrcStartBit_7,
  MR_Integer DestStartBit_8,
  MR_Integer NumBits_9)
{
  MR_Box DestBM_10;

  mercury__bitmap__copy_bits_7_p_0((MR_Integer) 1, SrcBM_6, SrcStartBit_7, DestStartBit_8, NumBits_9, SrcBM_6, &DestBM_10);
  return DestBM_10;
}

MR_Box MR_CALL 
mercury__bitmap__copy_bits_5_f_0(
  MR_Box SrcBM_7,
  MR_Integer SrcStartBit_8,
  MR_Box DestBM0_9,
  MR_Integer DestStartBit_10,
  MR_Integer NumBits_11)
{
  MR_Box DestBM_12;

  mercury__bitmap__copy_bits_7_p_0((MR_Integer) 0, SrcBM_7, SrcStartBit_8, DestStartBit_10, NumBits_11, DestBM0_9, &DestBM_12);
  return DestBM_12;
}

MR_Box MR_CALL 
mercury__bitmap__append_list_1_f_0(
  MR_Word BMs_3)
{
  MR_Box STATE_VARIABLE_BM_8;
  MR_Integer BMSize_5;
  MR_Box STATE_VARIABLE_BM_15_15;
  MR_Integer Var_7;

  BMSize_5 = mercury__bitmap__foldl__ho2_3_f_in__list_0(BMs_3, (MR_Integer) 0);
  STATE_VARIABLE_BM_15_15 = mercury__bitmap__init_2_f_0(BMSize_5, (MR_Integer) 0);
  mercury__bitmap__foldl2__ho1_6_p_in__list_0(BMs_3, (MR_Integer) 0, &Var_7, STATE_VARIABLE_BM_15_15, &STATE_VARIABLE_BM_8);
  return STATE_VARIABLE_BM_8;
}

static MR_Integer MR_CALL 
mercury__bitmap__foldl__ho2_3_f_in__list_0(
  MR_Word HeadVar__2_2,
  MR_Integer HeadVar__3_3)
{
  while (MR_TRUE)
  {
    MR_Integer HeadVar__4_4;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      HeadVar__4_4 = HeadVar__3_3;
    else
    {
      MR_Box Var_9 = ((MR_Box) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Var_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Integer Var_13;
      MR_Integer Var_16;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Integer next_value_of_HeadVar__3_3;

{
#define MR_PROC_LABEL mercury__bitmap__foldl__ho2_3_f_in__list_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr)Var_9 ;
		{

    NumBits = BM->num_bits;


		;}
#undef MR_PROC_LABEL
	Var_16  = NumBits;
}
      Var_13 = (MR_Integer) ((MR_Unsigned) HeadVar__3_3 + (MR_Unsigned) Var_16);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Var_10;
      next_value_of_HeadVar__3_3 = Var_13;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      continue;
    }
    return HeadVar__4_4;
    break;
  }
}

static void MR_CALL 
mercury__bitmap__foldl2__ho1_6_p_in__list_0(
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
      MR_Box Var_13 = ((MR_Box) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Var_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Integer Var_19;
      MR_Box Var_20;
      MR_Integer Var_26;
      MR_Integer Var_27;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Integer next_value_of_HeadVar__3_3;
      MR_Box next_value_of_HeadVar__5_5;

{
#define MR_PROC_LABEL mercury__bitmap__foldl2__ho1_6_p_in__list_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr)Var_13 ;
		{

    NumBits = BM->num_bits;


		;}
#undef MR_PROC_LABEL
	Var_26  = NumBits;
}
      mercury__bitmap__unsafe_copy_bits_7_p_0((MR_Integer) 0, Var_13, (MR_Integer) 0, HeadVar__3_3, Var_26, HeadVar__5_5, &Var_20);
{
#define MR_PROC_LABEL mercury__bitmap__foldl2__ho1_6_p_in__list_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr)Var_13 ;
		{

    NumBits = BM->num_bits;


		;}
#undef MR_PROC_LABEL
	Var_27  = NumBits;
}
      Var_19 = (MR_Integer) ((MR_Unsigned) HeadVar__3_3 + (MR_Unsigned) Var_27);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Var_14;
      next_value_of_HeadVar__3_3 = Var_19;
      next_value_of_HeadVar__5_5 = Var_20;
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
  MR_Box BM_A_4,
  MR_Box BM_B_5)
{
  MR_bool succeeded;
  MR_Box BM_6;
  MR_Integer Var_9;
  MR_Integer Var_17;

{
#define MR_PROC_LABEL mercury__bitmap__xor_2_f_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr)BM_A_4 ;
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

	BM = (MR_BitmapPtr)BM_B_5 ;
		{

    NumBits = BM->num_bits;


		;}
#undef MR_PROC_LABEL
	Var_17  = NumBits;
}
  succeeded = (Var_9 == Var_17);
  if (succeeded)
  {
    MR_Integer Var_19;

{
#define MR_PROC_LABEL mercury__bitmap__xor_2_f_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr)BM_B_5 ;
		{

    NumBits = BM->num_bits;


		;}
#undef MR_PROC_LABEL
	Var_19  = NumBits;
}
    succeeded = (Var_19 == (MR_Integer) 0);
    if (succeeded)
      BM_6 = BM_B_5;
    else
    {
      MR_Integer Var_20;
      MR_Integer Var_21;
      MR_Integer Var_22;

{
#define MR_PROC_LABEL mercury__bitmap__xor_2_f_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr)BM_B_5 ;
		{

    NumBits = BM->num_bits;


		;}
#undef MR_PROC_LABEL
	Var_22  = NumBits;
}
      Var_21 = (MR_Integer) ((MR_Unsigned) Var_22 - (MR_Unsigned) 1);
      succeeded = (Var_21 < (MR_Integer) 0);
      if (succeeded)
        Var_20 = (MR_Integer) -1;
      else
        Var_20 = (Var_21 / (MR_Integer) 8);
      mercury__bitmap__zip_loop__ho10_5_p_0(Var_20, BM_A_4, BM_B_5, &BM_6);
    }
  }
  else
    mercury__exception__throw_1_p_0((MR_Word) (&mercury__bitmap__bitmap__type_ctor_info_bitmap_error_0), ((MR_Box) (((MR_Box) ((MR_String) "bitmap.xor: bitmaps not the same size")))));
  return BM_6;
}

static void MR_CALL 
mercury__bitmap__zip_loop__ho10_5_p_0(
  MR_Integer I_6,
  MR_Box BM_A_8,
  MR_Box BM_B_9,
  MR_Box * BM_10)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (I_6 >= (MR_Integer) 0);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      MR_Integer XA_11;
      MR_Integer XB_12;
      MR_Box BM_C_13;
      MR_Integer Var_15;
      MR_Integer Var_16;
      MR_Integer next_value_of_I_6;
      MR_Box next_value_of_BM_B_9;

{
#define MR_PROC_LABEL mercury__bitmap__zip_loop__ho10_5_p_0

	MR_BitmapPtr BM;
	MR_Integer N;
	MR_Integer Byte;

	BM = (MR_BitmapPtr)BM_A_8 ;
	N = I_6 ;
		{

    Byte = (MR_Integer) BM->elements[N];


		;}
#undef MR_PROC_LABEL
	XA_11  = Byte;
}
{
#define MR_PROC_LABEL mercury__bitmap__zip_loop__ho10_5_p_0

	MR_BitmapPtr BM;
	MR_Integer N;
	MR_Integer Byte;

	BM = (MR_BitmapPtr)BM_B_9 ;
	N = I_6 ;
		{

    Byte = (MR_Integer) BM->elements[N];


		;}
#undef MR_PROC_LABEL
	XB_12  = Byte;
}
      Var_15 = (XA_11 ^ XB_12);
{
#define MR_PROC_LABEL mercury__bitmap__zip_loop__ho10_5_p_0

	MR_Integer N;
	MR_Integer Byte;
	MR_BitmapPtr BM0;
	MR_BitmapPtr BM;

	N = I_6 ;
	Byte = Var_15 ;
	BM0 = (MR_BitmapPtr)BM_B_9 ;
		{

    BM = BM0;
    BM->elements[N] = (MR_uint_least8_t) Byte;


		;}
#undef MR_PROC_LABEL
	BM_C_13  = (MR_Box) BM;
}
      Var_16 = (MR_Integer) ((MR_Unsigned) I_6 - (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_I_6 = Var_16;
      next_value_of_BM_B_9 = BM_C_13;
      I_6 = next_value_of_I_6;
      BM_B_9 = next_value_of_BM_B_9;
      continue;
    }
    else
      *BM_10 = BM_B_9;
    break;
  }
}

MR_Box MR_CALL 
mercury__bitmap__difference_2_f_0(
  MR_Box BM_A_4,
  MR_Box BM_B_5)
{
  MR_bool succeeded;
  MR_Box BM_6;
  MR_Integer Var_9;
  MR_Integer Var_18;

{
#define MR_PROC_LABEL mercury__bitmap__difference_2_f_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr)BM_A_4 ;
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

	BM = (MR_BitmapPtr)BM_B_5 ;
		{

    NumBits = BM->num_bits;


		;}
#undef MR_PROC_LABEL
	Var_18  = NumBits;
}
  succeeded = (Var_9 == Var_18);
  if (succeeded)
  {
    MR_Integer Var_20;

{
#define MR_PROC_LABEL mercury__bitmap__difference_2_f_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr)BM_B_5 ;
		{

    NumBits = BM->num_bits;


		;}
#undef MR_PROC_LABEL
	Var_20  = NumBits;
}
    succeeded = (Var_20 == (MR_Integer) 0);
    if (succeeded)
      BM_6 = BM_B_5;
    else
    {
      MR_Integer Var_21;
      MR_Integer Var_22;
      MR_Integer Var_23;

{
#define MR_PROC_LABEL mercury__bitmap__difference_2_f_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr)BM_B_5 ;
		{

    NumBits = BM->num_bits;


		;}
#undef MR_PROC_LABEL
	Var_23  = NumBits;
}
      Var_22 = (MR_Integer) ((MR_Unsigned) Var_23 - (MR_Unsigned) 1);
      succeeded = (Var_22 < (MR_Integer) 0);
      if (succeeded)
        Var_21 = (MR_Integer) -1;
      else
        Var_21 = (Var_22 / (MR_Integer) 8);
      mercury__bitmap__zip_loop__ho9_5_p_0(Var_21, BM_A_4, BM_B_5, &BM_6);
    }
  }
  else
    mercury__exception__throw_1_p_0((MR_Word) (&mercury__bitmap__bitmap__type_ctor_info_bitmap_error_0), ((MR_Box) (((MR_Box) ((MR_String) "bitmap.difference: bitmaps not the same size")))));
  return BM_6;
}

static void MR_CALL 
mercury__bitmap__zip_loop__ho9_5_p_0(
  MR_Integer I_6,
  MR_Box BM_A_8,
  MR_Box BM_B_9,
  MR_Box * BM_10)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (I_6 >= (MR_Integer) 0);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      MR_Integer XA_11;
      MR_Integer XB_12;
      MR_Box BM_C_13;
      MR_Integer Var_15;
      MR_Integer Var_16;
      MR_Integer Var_18;
      MR_Integer next_value_of_I_6;
      MR_Box next_value_of_BM_B_9;

{
#define MR_PROC_LABEL mercury__bitmap__zip_loop__ho9_5_p_0

	MR_BitmapPtr BM;
	MR_Integer N;
	MR_Integer Byte;

	BM = (MR_BitmapPtr)BM_A_8 ;
	N = I_6 ;
		{

    Byte = (MR_Integer) BM->elements[N];


		;}
#undef MR_PROC_LABEL
	XA_11  = Byte;
}
{
#define MR_PROC_LABEL mercury__bitmap__zip_loop__ho9_5_p_0

	MR_BitmapPtr BM;
	MR_Integer N;
	MR_Integer Byte;

	BM = (MR_BitmapPtr)BM_B_9 ;
	N = I_6 ;
		{

    Byte = (MR_Integer) BM->elements[N];


		;}
#undef MR_PROC_LABEL
	XB_12  = Byte;
}
      Var_18 = ~(XB_12);
      Var_15 = (XA_11 & Var_18);
{
#define MR_PROC_LABEL mercury__bitmap__zip_loop__ho9_5_p_0

	MR_Integer N;
	MR_Integer Byte;
	MR_BitmapPtr BM0;
	MR_BitmapPtr BM;

	N = I_6 ;
	Byte = Var_15 ;
	BM0 = (MR_BitmapPtr)BM_B_9 ;
		{

    BM = BM0;
    BM->elements[N] = (MR_uint_least8_t) Byte;


		;}
#undef MR_PROC_LABEL
	BM_C_13  = (MR_Box) BM;
}
      Var_16 = (MR_Integer) ((MR_Unsigned) I_6 - (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_I_6 = Var_16;
      next_value_of_BM_B_9 = BM_C_13;
      I_6 = next_value_of_I_6;
      BM_B_9 = next_value_of_BM_B_9;
      continue;
    }
    else
      *BM_10 = BM_B_9;
    break;
  }
}

MR_Box MR_CALL 
mercury__bitmap__intersect_2_f_0(
  MR_Box BM_A_4,
  MR_Box BM_B_5)
{
  MR_bool succeeded;
  MR_Box BM_6;
  MR_Integer Var_7;
  MR_Integer Var_13;

{
#define MR_PROC_LABEL mercury__bitmap__intersect_2_f_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr)BM_A_4 ;
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

	BM = (MR_BitmapPtr)BM_B_5 ;
		{

    NumBits = BM->num_bits;


		;}
#undef MR_PROC_LABEL
	Var_13  = NumBits;
}
  succeeded = (Var_7 == Var_13);
  if (succeeded)
  {
    MR_Integer Var_15;

{
#define MR_PROC_LABEL mercury__bitmap__intersect_2_f_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr)BM_B_5 ;
		{

    NumBits = BM->num_bits;


		;}
#undef MR_PROC_LABEL
	Var_15  = NumBits;
}
    succeeded = (Var_15 == (MR_Integer) 0);
    if (succeeded)
      BM_6 = BM_B_5;
    else
    {
      MR_Integer Var_16;
      MR_Integer Var_17;
      MR_Integer Var_18;

{
#define MR_PROC_LABEL mercury__bitmap__intersect_2_f_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr)BM_B_5 ;
		{

    NumBits = BM->num_bits;


		;}
#undef MR_PROC_LABEL
	Var_18  = NumBits;
}
      Var_17 = (MR_Integer) ((MR_Unsigned) Var_18 - (MR_Unsigned) 1);
      succeeded = (Var_17 < (MR_Integer) 0);
      if (succeeded)
        Var_16 = (MR_Integer) -1;
      else
        Var_16 = (Var_17 / (MR_Integer) 8);
      mercury__bitmap__zip_loop__ho8_5_p_0(Var_16, BM_A_4, BM_B_5, &BM_6);
    }
  }
  else
    mercury__exception__throw_1_p_0((MR_Word) (&mercury__bitmap__bitmap__type_ctor_info_bitmap_error_0), ((MR_Box) (((MR_Box) ((MR_String) "bitmap.intersect: bitmaps not the same size")))));
  return BM_6;
}

static void MR_CALL 
mercury__bitmap__zip_loop__ho8_5_p_0(
  MR_Integer I_6,
  MR_Box BM_A_8,
  MR_Box BM_B_9,
  MR_Box * BM_10)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (I_6 >= (MR_Integer) 0);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      MR_Integer XA_11;
      MR_Integer XB_12;
      MR_Box BM_C_13;
      MR_Integer Var_15;
      MR_Integer Var_16;
      MR_Integer next_value_of_I_6;
      MR_Box next_value_of_BM_B_9;

{
#define MR_PROC_LABEL mercury__bitmap__zip_loop__ho8_5_p_0

	MR_BitmapPtr BM;
	MR_Integer N;
	MR_Integer Byte;

	BM = (MR_BitmapPtr)BM_A_8 ;
	N = I_6 ;
		{

    Byte = (MR_Integer) BM->elements[N];


		;}
#undef MR_PROC_LABEL
	XA_11  = Byte;
}
{
#define MR_PROC_LABEL mercury__bitmap__zip_loop__ho8_5_p_0

	MR_BitmapPtr BM;
	MR_Integer N;
	MR_Integer Byte;

	BM = (MR_BitmapPtr)BM_B_9 ;
	N = I_6 ;
		{

    Byte = (MR_Integer) BM->elements[N];


		;}
#undef MR_PROC_LABEL
	XB_12  = Byte;
}
      Var_15 = (XA_11 & XB_12);
{
#define MR_PROC_LABEL mercury__bitmap__zip_loop__ho8_5_p_0

	MR_Integer N;
	MR_Integer Byte;
	MR_BitmapPtr BM0;
	MR_BitmapPtr BM;

	N = I_6 ;
	Byte = Var_15 ;
	BM0 = (MR_BitmapPtr)BM_B_9 ;
		{

    BM = BM0;
    BM->elements[N] = (MR_uint_least8_t) Byte;


		;}
#undef MR_PROC_LABEL
	BM_C_13  = (MR_Box) BM;
}
      Var_16 = (MR_Integer) ((MR_Unsigned) I_6 - (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_I_6 = Var_16;
      next_value_of_BM_B_9 = BM_C_13;
      I_6 = next_value_of_I_6;
      BM_B_9 = next_value_of_BM_B_9;
      continue;
    }
    else
      *BM_10 = BM_B_9;
    break;
  }
}

MR_Box MR_CALL 
mercury__bitmap__union_2_f_0(
  MR_Box BM_A_4,
  MR_Box BM_B_5)
{
  MR_bool succeeded;
  MR_Box BM_6;
  MR_Integer Var_7;
  MR_Integer Var_13;

{
#define MR_PROC_LABEL mercury__bitmap__union_2_f_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr)BM_A_4 ;
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

	BM = (MR_BitmapPtr)BM_B_5 ;
		{

    NumBits = BM->num_bits;


		;}
#undef MR_PROC_LABEL
	Var_13  = NumBits;
}
  succeeded = (Var_7 == Var_13);
  if (succeeded)
  {
    MR_Integer Var_15;

{
#define MR_PROC_LABEL mercury__bitmap__union_2_f_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr)BM_B_5 ;
		{

    NumBits = BM->num_bits;


		;}
#undef MR_PROC_LABEL
	Var_15  = NumBits;
}
    succeeded = (Var_15 == (MR_Integer) 0);
    if (succeeded)
      BM_6 = BM_B_5;
    else
    {
      MR_Integer Var_16;
      MR_Integer Var_17;
      MR_Integer Var_18;

{
#define MR_PROC_LABEL mercury__bitmap__union_2_f_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr)BM_B_5 ;
		{

    NumBits = BM->num_bits;


		;}
#undef MR_PROC_LABEL
	Var_18  = NumBits;
}
      Var_17 = (MR_Integer) ((MR_Unsigned) Var_18 - (MR_Unsigned) 1);
      succeeded = (Var_17 < (MR_Integer) 0);
      if (succeeded)
        Var_16 = (MR_Integer) -1;
      else
        Var_16 = (Var_17 / (MR_Integer) 8);
      mercury__bitmap__zip_loop__ho7_5_p_0(Var_16, BM_A_4, BM_B_5, &BM_6);
    }
  }
  else
    mercury__exception__throw_1_p_0((MR_Word) (&mercury__bitmap__bitmap__type_ctor_info_bitmap_error_0), ((MR_Box) (((MR_Box) ((MR_String) "bitmap.union: bitmaps not the same size")))));
  return BM_6;
}

static void MR_CALL 
mercury__bitmap__zip_loop__ho7_5_p_0(
  MR_Integer I_6,
  MR_Box BM_A_8,
  MR_Box BM_B_9,
  MR_Box * BM_10)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (I_6 >= (MR_Integer) 0);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      MR_Integer XA_11;
      MR_Integer XB_12;
      MR_Box BM_C_13;
      MR_Integer Var_15;
      MR_Integer Var_16;
      MR_Integer next_value_of_I_6;
      MR_Box next_value_of_BM_B_9;

{
#define MR_PROC_LABEL mercury__bitmap__zip_loop__ho7_5_p_0

	MR_BitmapPtr BM;
	MR_Integer N;
	MR_Integer Byte;

	BM = (MR_BitmapPtr)BM_A_8 ;
	N = I_6 ;
		{

    Byte = (MR_Integer) BM->elements[N];


		;}
#undef MR_PROC_LABEL
	XA_11  = Byte;
}
{
#define MR_PROC_LABEL mercury__bitmap__zip_loop__ho7_5_p_0

	MR_BitmapPtr BM;
	MR_Integer N;
	MR_Integer Byte;

	BM = (MR_BitmapPtr)BM_B_9 ;
	N = I_6 ;
		{

    Byte = (MR_Integer) BM->elements[N];


		;}
#undef MR_PROC_LABEL
	XB_12  = Byte;
}
      Var_15 = (XA_11 | XB_12);
{
#define MR_PROC_LABEL mercury__bitmap__zip_loop__ho7_5_p_0

	MR_Integer N;
	MR_Integer Byte;
	MR_BitmapPtr BM0;
	MR_BitmapPtr BM;

	N = I_6 ;
	Byte = Var_15 ;
	BM0 = (MR_BitmapPtr)BM_B_9 ;
		{

    BM = BM0;
    BM->elements[N] = (MR_uint_least8_t) Byte;


		;}
#undef MR_PROC_LABEL
	BM_C_13  = (MR_Box) BM;
}
      Var_16 = (MR_Integer) ((MR_Unsigned) I_6 - (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_I_6 = Var_16;
      next_value_of_BM_B_9 = BM_C_13;
      I_6 = next_value_of_I_6;
      BM_B_9 = next_value_of_BM_B_9;
      continue;
    }
    else
      *BM_10 = BM_B_9;
    break;
  }
}

MR_Box MR_CALL 
mercury__bitmap__complement_1_f_0(
  MR_Box STATE_VARIABLE_BM_0_4)
{
  MR_bool succeeded;
  MR_Box STATE_VARIABLE_BM_5;
  MR_Integer Var_6;
  MR_Box STATE_VARIABLE_BM_7_7;
  MR_Integer Var_8;
  MR_Integer Var_9;
  MR_Integer Var_13;
  MR_Integer Var_15;

{
#define MR_PROC_LABEL mercury__bitmap__complement_1_f_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr)STATE_VARIABLE_BM_0_4 ;
		{

    NumBits = BM->num_bits;


		;}
#undef MR_PROC_LABEL
	Var_9  = NumBits;
}
  Var_8 = (MR_Integer) ((MR_Unsigned) Var_9 - (MR_Unsigned) 1);
  succeeded = (Var_8 < (MR_Integer) 0);
  if (succeeded)
    Var_6 = (MR_Integer) -1;
  else
    Var_6 = (Var_8 / (MR_Integer) 8);
  mercury__bitmap__complement_loop_3_p_0(Var_6, STATE_VARIABLE_BM_0_4, &STATE_VARIABLE_BM_7_7);
{
#define MR_PROC_LABEL mercury__bitmap__complement_1_f_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr)STATE_VARIABLE_BM_7_7 ;
		{

    NumBits = BM->num_bits;


		;}
#undef MR_PROC_LABEL
	Var_15  = NumBits;
}
  Var_13 = (MR_Integer) ((MR_Unsigned) Var_15 - (MR_Unsigned) 1);
  mercury__bitmap__set_trailing_bits_in_byte_4_p_0(Var_13, (MR_Integer) 0, STATE_VARIABLE_BM_7_7, &STATE_VARIABLE_BM_5);
  return STATE_VARIABLE_BM_5;
}

void MR_CALL 
mercury__bitmap__complement_loop_3_p_0(
  MR_Integer ByteIndex_4,
  MR_Box STATE_VARIABLE_BM_0_7,
  MR_Box * STATE_VARIABLE_BM_8)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (ByteIndex_4 < (MR_Integer) 0);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
      *STATE_VARIABLE_BM_8 = STATE_VARIABLE_BM_0_7;
    else
    {
      MR_Integer X_6;
      MR_Integer Var_10;
      MR_Box STATE_VARIABLE_BM_11_11;
      MR_Integer Var_12;
      MR_Integer next_value_of_ByteIndex_4;
      MR_Box next_value_of_STATE_VARIABLE_BM_0_7;

{
#define MR_PROC_LABEL mercury__bitmap__complement_loop_3_p_0

	MR_BitmapPtr BM;
	MR_Integer N;
	MR_Integer Byte;

	BM = (MR_BitmapPtr)STATE_VARIABLE_BM_0_7 ;
	N = ByteIndex_4 ;
		{

    Byte = (MR_Integer) BM->elements[N];


		;}
#undef MR_PROC_LABEL
	X_6  = Byte;
}
      Var_10 = ~(X_6);
{
#define MR_PROC_LABEL mercury__bitmap__complement_loop_3_p_0

	MR_Integer N;
	MR_Integer Byte;
	MR_BitmapPtr BM0;
	MR_BitmapPtr BM;

	N = ByteIndex_4 ;
	Byte = Var_10 ;
	BM0 = (MR_BitmapPtr)STATE_VARIABLE_BM_0_7 ;
		{

    BM = BM0;
    BM->elements[N] = (MR_uint_least8_t) Byte;


		;}
#undef MR_PROC_LABEL
	STATE_VARIABLE_BM_11_11  = (MR_Box) BM;
}
      Var_12 = (MR_Integer) ((MR_Unsigned) ByteIndex_4 - (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_ByteIndex_4 = Var_12;
      next_value_of_STATE_VARIABLE_BM_0_7 = STATE_VARIABLE_BM_11_11;
      ByteIndex_4 = next_value_of_ByteIndex_4;
      STATE_VARIABLE_BM_0_7 = next_value_of_STATE_VARIABLE_BM_0_7;
      continue;
    }
    break;
  }
}

MR_Integer MR_CALL 
mercury__bitmap__slice_num_bytes_1_f_0(
  MR_Word Slice_3)
{
  MR_Integer HeadVar__2_2;
  MR_Integer Var_5 = ((MR_Integer) ((MR_hl_field(0, Slice_3, (MR_Integer) 2))));

  HeadVar__2_2 = mercury__bitmap__quotient_bits_per_byte_with_rem_zero_2_f_0((MR_String) "bitmap.slice_num_bytes", Var_5);
  return HeadVar__2_2;
}

MR_Integer MR_CALL 
mercury__bitmap__slice_start_byte_index_1_f_0(
  MR_Word Slice_3)
{
  MR_Integer HeadVar__2_2;
  MR_Integer Var_5 = ((MR_Integer) ((MR_hl_field(0, Slice_3, (MR_Integer) 1))));

  HeadVar__2_2 = mercury__bitmap__quotient_bits_per_byte_with_rem_zero_2_f_0((MR_String) "bitmap.slice_start_byte_index", Var_5);
  return HeadVar__2_2;
}

MR_Integer MR_CALL 
mercury__bitmap__quotient_bits_per_byte_with_rem_zero_2_f_0(
  MR_String Pred_4,
  MR_Integer Int_5)
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
    MR_Word Var_12;

    mercury__string__append_3_p_2(Pred_4, (MR_String) ": not a byte slice.", &Var_10);
    Var_12 = (MR_Word) (Var_10);
    mercury__exception__throw_1_p_0((MR_Word) (&mercury__bitmap__bitmap__type_ctor_info_bitmap_error_0), ((MR_Box) (Var_12)));
  }
  return Quotient_6;
}

MR_Integer MR_CALL 
mercury__bitmap__slice_num_bits_1_f_0(
  MR_Word Slice_3)
{
  MR_Integer HeadVar__2_2 = ((MR_Integer) ((MR_hl_field(0, Slice_3, (MR_Integer) 2))));

  return HeadVar__2_2;
}

MR_Integer MR_CALL 
mercury__bitmap__slice_start_bit_index_1_f_0(
  MR_Word Slice_3)
{
  MR_Integer HeadVar__2_2 = ((MR_Integer) ((MR_hl_field(0, Slice_3, (MR_Integer) 1))));

  return HeadVar__2_2;
}

MR_Box MR_CALL 
mercury__bitmap__slice_bitmap_1_f_0(
  MR_Word Slice_3)
{
  MR_Box HeadVar__2_2 = ((MR_Box) ((MR_hl_field(0, Slice_3, (MR_Integer) 0))));

  return HeadVar__2_2;
}

MR_Word MR_CALL 
mercury__bitmap__byte_slice_3_f_0(
  MR_Box BM_5,
  MR_Integer StartByte_6,
  MR_Integer NumBytes_7)
{
  MR_Word HeadVar__4_4;
  MR_Integer Var_8 = (MR_Integer) ((MR_Unsigned) StartByte_6 * (MR_Unsigned) 8);
  MR_Integer Var_10 = (MR_Integer) ((MR_Unsigned) NumBytes_7 * (MR_Unsigned) 8);

  HeadVar__4_4 = mercury__bitmap__slice_3_f_0(BM_5, Var_8, Var_10);
  return HeadVar__4_4;
}

MR_Word MR_CALL 
mercury__bitmap__slice_3_f_0(
  MR_Box BM_5,
  MR_Integer StartBit_6,
  MR_Integer NumBits_7)
{
  MR_bool succeeded = (NumBits_7 >= (MR_Integer) 0);
  MR_Word Slice_8;
  MR_Integer Var_10;
  MR_Integer Var_11;
  MR_Integer Var_13;
  MR_Integer Var_14;

  if (succeeded)
  {
    Var_10 = (MR_Integer) 0;
    succeeded = (StartBit_6 >= Var_10);
    if (succeeded)
    {
      Var_11 = (MR_Integer) ((MR_Unsigned) StartBit_6 + (MR_Unsigned) NumBits_7);
      Var_13 = (MR_Integer) 0;
      succeeded = (Var_13 <= Var_11);
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
	Var_14  = NumBits;
}
        succeeded = (Var_11 <= Var_14);
      }
    }
  }
  if (succeeded)
    {
      Slice_8 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Slice_8, 0) = ((MR_Box) (BM_5));
      MR_hl_field(0, Slice_8, 1) = ((MR_Box) (StartBit_6));
      MR_hl_field(0, Slice_8, 2) = ((MR_Box) (NumBits_7));
    }
  else
    mercury__bitmap__throw_bounds_error_4_p_0(BM_5, (MR_String) "bitmap.slice", StartBit_6, NumBits_7);
  return Slice_8;
}

MR_Box MR_CALL 
mercury__bitmap__shrink_without_copying_2_f_0(
  MR_Box STATE_VARIABLE_BM_0_6,
  MR_Integer NewSize_5)
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

	MR_Integer NumBits;
	MR_BitmapPtr BM0;
	MR_BitmapPtr BM;

	NumBits = NewSize_5 ;
	BM0 = (MR_BitmapPtr)STATE_VARIABLE_BM_0_6 ;
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

MR_Box MR_CALL 
mercury__bitmap__resize_3_f_0(
  MR_Box STATE_VARIABLE_BM_0_12,
  MR_Integer NewSize_6,
  MR_Word InitializerBit_7)
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
    MR_Box STATE_VARIABLE_BM_25_25;
    MR_Box Var_29;
    MR_Integer Var_31;
    MR_Integer Var_32;
    MR_Integer Var_38;
    MR_Integer Var_40;

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
	Var_29  = (MR_Box) BM;
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
	Var_32  = NumBits;
}
    succeeded = (Var_32 < NewSize_6);
    if (succeeded)
      Var_31 = Var_32;
    else
      Var_31 = NewSize_6;
    mercury__bitmap__copy_bits_7_p_0((MR_Integer) 0, STATE_VARIABLE_BM_0_12, (MR_Integer) 0, (MR_Integer) 0, Var_31, Var_29, &STATE_VARIABLE_BM_16_16);
    succeeded = (NewSize_6 > OldSize_8);
    if (succeeded)
    {
      MR_Integer OldLastByteIndex_10;
      MR_Integer NewLastByteIndex_11;
      MR_Integer Var_17 = (MR_Integer) ((MR_Unsigned) OldSize_8 - (MR_Unsigned) 1);
      MR_Box STATE_VARIABLE_BM_18_18;
      MR_Integer Var_20;
      MR_Integer Var_22;

      mercury__bitmap__set_trailing_bits_in_byte_4_p_0(Var_17, InitializerByte_9, STATE_VARIABLE_BM_16_16, &STATE_VARIABLE_BM_18_18);
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
        MR_Integer Var_24 = (MR_Integer) ((MR_Unsigned) OldLastByteIndex_10 + (MR_Unsigned) 1);

        mercury__bitmap__initialize_bitmap_bytes_5_p_0(Var_24, NewLastByteIndex_11, InitializerByte_9, STATE_VARIABLE_BM_18_18, &STATE_VARIABLE_BM_25_25);
      }
      else
        STATE_VARIABLE_BM_25_25 = STATE_VARIABLE_BM_18_18;
    }
    else
      STATE_VARIABLE_BM_25_25 = STATE_VARIABLE_BM_16_16;
{
#define MR_PROC_LABEL mercury__bitmap__resize_3_f_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr)STATE_VARIABLE_BM_25_25 ;
		{

    NumBits = BM->num_bits;


		;}
#undef MR_PROC_LABEL
	Var_40  = NumBits;
}
    Var_38 = (MR_Integer) ((MR_Unsigned) Var_40 - (MR_Unsigned) 1);
    mercury__bitmap__set_trailing_bits_in_byte_4_p_0(Var_38, (MR_Integer) 0, STATE_VARIABLE_BM_25_25, &STATE_VARIABLE_BM_13);
  }
  return STATE_VARIABLE_BM_13;
}

void MR_CALL 
mercury__bitmap__copy_bits_7_p_0(
  MR_Integer SameBM_8,
  MR_Box SrcBM_9,
  MR_Integer SrcStartBit_10,
  MR_Integer DestStartBit_11,
  MR_Integer NumBits_12,
  MR_Box STATE_VARIABLE_DestBM_0_14,
  MR_Box * STATE_VARIABLE_DestBM_15)
{
  MR_bool succeeded = (NumBits_12 >= (MR_Integer) 0);
  MR_Integer Var_17;
  MR_Integer Var_18;
  MR_Integer Var_19;
  MR_Integer Var_20;
  MR_Integer Var_34;
  MR_Integer Var_35;
  MR_Integer Var_36;
  MR_Integer Var_37;

  if (succeeded)
  {
    Var_17 = (MR_Integer) 0;
    succeeded = (SrcStartBit_10 >= Var_17);
    if (succeeded)
    {
      Var_18 = (MR_Integer) 0;
      succeeded = (DestStartBit_11 >= Var_18);
      if (succeeded)
      {
        Var_19 = (MR_Integer) ((MR_Unsigned) SrcStartBit_10 + (MR_Unsigned) NumBits_12);
        Var_34 = (MR_Integer) 0;
        succeeded = (Var_34 <= Var_19);
        if (succeeded)
        {
{
#define MR_PROC_LABEL mercury__bitmap__copy_bits_7_p_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr)SrcBM_9 ;
		{

    NumBits = BM->num_bits;


		;}
#undef MR_PROC_LABEL
	Var_35  = NumBits;
}
          succeeded = (Var_19 <= Var_35);
          if (succeeded)
          {
            Var_20 = (MR_Integer) ((MR_Unsigned) DestStartBit_11 + (MR_Unsigned) NumBits_12);
            Var_36 = (MR_Integer) 0;
            succeeded = (Var_36 <= Var_20);
            if (succeeded)
            {
{
#define MR_PROC_LABEL mercury__bitmap__copy_bits_7_p_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr)STATE_VARIABLE_DestBM_0_14 ;
		{

    NumBits = BM->num_bits;


		;}
#undef MR_PROC_LABEL
	Var_37  = NumBits;
}
              succeeded = (Var_20 <= Var_37);
            }
          }
        }
      }
    }
  }
  if (succeeded)
    mercury__bitmap__unsafe_copy_bits_7_p_0(SameBM_8, SrcBM_9, SrcStartBit_10, DestStartBit_11, NumBits_12, STATE_VARIABLE_DestBM_0_14, STATE_VARIABLE_DestBM_15);
  else
  {
    succeeded = (NumBits_12 < (MR_Integer) 0);
    if (!(succeeded))
    {
      succeeded = (SrcStartBit_10 < (MR_Integer) 0);
      if (!(succeeded))
      {
        MR_Integer Var_24;
        MR_Integer Var_25 = (MR_Integer) ((MR_Unsigned) SrcStartBit_10 + (MR_Unsigned) NumBits_12);
        MR_Integer Var_39;

        Var_24 = (MR_Integer) ((MR_Unsigned) Var_25 - (MR_Unsigned) 1);
        succeeded = ((MR_Integer) 0 <= Var_24);
        if (succeeded)
        {
{
#define MR_PROC_LABEL mercury__bitmap__copy_bits_7_p_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr)SrcBM_9 ;
		{

    NumBits = BM->num_bits;


		;}
#undef MR_PROC_LABEL
	Var_39  = NumBits;
}
          succeeded = (Var_24 < Var_39);
        }
        succeeded = !(succeeded);
      }
    }
    if (succeeded)
      {
        mercury__bitmap__throw_bounds_error_4_p_0(SrcBM_9, (MR_String) "copy_bits (source)", SrcStartBit_10, NumBits_12);
        return;
      }
    else
    {
      succeeded = (DestStartBit_11 < (MR_Integer) 0);
      if (!(succeeded))
      {
        MR_Integer Var_29;
        MR_Integer Var_30 = (MR_Integer) ((MR_Unsigned) DestStartBit_11 + (MR_Unsigned) NumBits_12);
        MR_Integer Var_41;

        Var_29 = (MR_Integer) ((MR_Unsigned) Var_30 - (MR_Unsigned) 1);
        succeeded = ((MR_Integer) 0 <= Var_29);
        if (succeeded)
        {
{
#define MR_PROC_LABEL mercury__bitmap__copy_bits_7_p_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr)STATE_VARIABLE_DestBM_0_14 ;
		{

    NumBits = BM->num_bits;


		;}
#undef MR_PROC_LABEL
	Var_41  = NumBits;
}
          succeeded = (Var_29 < Var_41);
        }
        succeeded = !(succeeded);
      }
      if (succeeded)
        {
          mercury__bitmap__throw_bounds_error_4_p_0(STATE_VARIABLE_DestBM_0_14, (MR_String) "copy_bits (destination)", DestStartBit_11, NumBits_12);
          return;
        }
      else
        {
          mercury__exception__throw_1_p_0((MR_Word) (&mercury__bitmap__bitmap__type_ctor_info_bitmap_error_0), ((MR_Box) (((MR_Box) ((MR_String) "bitmap.copy_bits: failed to diagnose error")))));
          return;
        }
    }
  }
}

static void MR_CALL 
mercury__bitmap__unsafe_copy_bits_7_p_0(
  MR_Integer SameBM_8,
  MR_Box SrcBM_9,
  MR_Integer SrcStartBit_10,
  MR_Integer DestStartBit_11,
  MR_Integer STATE_VARIABLE_NumBits_0_37,
  MR_Box STATE_VARIABLE_DestBM_0_38,
  MR_Box * STATE_VARIABLE_DestBM_39)
{
  MR_bool succeeded;
  MR_Integer SrcStartIndex_14 = (SrcStartBit_10 % (MR_Integer) 8);
  MR_Integer DestStartIndex_15 = (DestStartBit_11 % (MR_Integer) 8);
  MR_Integer Var_40 = (MR_Integer) ((MR_Unsigned) 2 * (MR_Unsigned) 8);

  succeeded = (STATE_VARIABLE_NumBits_0_37 < Var_40);
  if (succeeded)
  {
    MR_Integer Bits_16;

    Bits_16 = mercury__bitmap__unsafe_get_bits_3_f_0(SrcBM_9, SrcStartBit_10, STATE_VARIABLE_NumBits_0_37);
    mercury__bitmap__unsafe_set_bits_5_p_0(DestStartBit_11, STATE_VARIABLE_NumBits_0_37, Bits_16, STATE_VARIABLE_DestBM_0_38, STATE_VARIABLE_DestBM_39);
  }
  else
  {
    succeeded = (SrcStartIndex_14 == DestStartIndex_15);
    if (succeeded)
    {
      MR_Integer SrcEndBit_18;
      MR_Integer EndIndex_19;
      MR_Integer Var_44 = (MR_Integer) ((MR_Unsigned) SrcStartBit_10 + (MR_Unsigned) STATE_VARIABLE_NumBits_0_37);
      MR_Integer Var_46;
      MR_Integer Var_47;

      SrcEndBit_18 = (MR_Integer) ((MR_Unsigned) Var_44 - (MR_Unsigned) 1);
      EndIndex_19 = (SrcEndBit_18 % (MR_Integer) 8);
      succeeded = (SrcStartIndex_14 == (MR_Integer) 0);
      if (succeeded)
      {
        Var_46 = (MR_Integer) 8;
        Var_47 = (MR_Integer) ((MR_Unsigned) Var_46 - (MR_Unsigned) EndIndex_19);
        succeeded = (Var_47 == (MR_Integer) 1);
      }
      if (succeeded)
      {
        MR_Integer NumBytes_20 = (STATE_VARIABLE_NumBits_0_37 / (MR_Integer) 8);
        MR_Integer SrcStartByteIndex_21 = (SrcStartBit_10 / (MR_Integer) 8);
        MR_Integer DestStartByteIndex_22 = (DestStartBit_11 / (MR_Integer) 8);

{
#define MR_PROC_LABEL mercury__bitmap__unsafe_copy_bits_7_p_0

	MR_Integer SameBM;
	MR_BitmapPtr SrcBM;
	MR_Integer SrcFirstByteIndex;
	MR_Integer DestFirstByteIndex;
	MR_Integer NumBytes;
	MR_BitmapPtr DestBM0;
	MR_BitmapPtr DestBM;

	SameBM = SameBM_8 ;
	SrcBM = (MR_BitmapPtr)SrcBM_9 ;
	SrcFirstByteIndex = SrcStartByteIndex_21 ;
	DestFirstByteIndex = DestStartByteIndex_22 ;
	NumBytes = NumBytes_20 ;
	DestBM0 = (MR_BitmapPtr)STATE_VARIABLE_DestBM_0_38 ;
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
	*STATE_VARIABLE_DestBM_39  = (MR_Box) DestBM;
}
      }
      else
      {
        MR_Integer NumBitsAtStart_23;
        MR_Integer StartBitsToSet_24;
        MR_Integer NumBitsAtEnd_27;
        MR_Integer EndBitsToSet_28;
        MR_Integer STATE_VARIABLE_NumBits_53_53;
        MR_Integer STATE_VARIABLE_NumBits_58_58;
        MR_Integer Var_60;
        MR_Integer Var_62;
        MR_Box STATE_VARIABLE_DestBM_64_64;
        MR_Box STATE_VARIABLE_DestBM_66_66;
        MR_Integer NumBytes_70;
        MR_Integer SrcStartByteIndex_71;
        MR_Integer DestStartByteIndex_72;
        MR_Integer Var_55;

        succeeded = (SrcStartIndex_14 == (MR_Integer) 0);
        if (succeeded)
        {
          NumBitsAtStart_23 = (MR_Integer) 0;
          StartBitsToSet_24 = (MR_Integer) 0;
          STATE_VARIABLE_NumBits_53_53 = STATE_VARIABLE_NumBits_0_37;
        }
        else
        {
          MR_Integer SrcPartialStartByteIndex_25;
          MR_Integer PartialStartByte_26;
          MR_Integer LastBit_78;
          MR_Integer Shift_79;
          MR_Integer Var_80;
          MR_Integer Var_82;
          MR_Integer Var_85;
          MR_Integer Var_86;
          MR_Integer BitMask_87;
          MR_Integer Var_89;
          MR_Integer Var_91;

          NumBitsAtStart_23 = (MR_Integer) ((MR_Unsigned) 8 - (MR_Unsigned) SrcStartIndex_14);
          succeeded = (SrcStartBit_10 < (MR_Integer) 0);
          if (succeeded)
            SrcPartialStartByteIndex_25 = (MR_Integer) -1;
          else
            SrcPartialStartByteIndex_25 = (SrcStartBit_10 / (MR_Integer) 8);
{
#define MR_PROC_LABEL mercury__bitmap__unsafe_copy_bits_7_p_0

	MR_BitmapPtr BM;
	MR_Integer N;
	MR_Integer Byte;

	BM = (MR_BitmapPtr)SrcBM_9 ;
	N = SrcPartialStartByteIndex_25 ;
		{

    Byte = (MR_Integer) BM->elements[N];


		;}
#undef MR_PROC_LABEL
	PartialStartByte_26  = Byte;
}
          Var_80 = (MR_Integer) ((MR_Unsigned) SrcStartIndex_14 + (MR_Unsigned) NumBitsAtStart_23);
          LastBit_78 = (MR_Integer) ((MR_Unsigned) Var_80 - (MR_Unsigned) 1);
          Var_82 = (MR_Integer) ((MR_Unsigned) 8 - (MR_Unsigned) 1);
          Shift_79 = (MR_Integer) ((MR_Unsigned) Var_82 - (MR_Unsigned) LastBit_78);
          Var_85 = (PartialStartByte_26 >> Shift_79);
          Var_89 = (MR_Integer) ((MR_Unsigned) NumBitsAtStart_23 - (MR_Unsigned) 1);
          BitMask_87 = ((MR_Integer) 1 << Var_89);
          Var_91 = (MR_Integer) ((MR_Unsigned) BitMask_87 - (MR_Unsigned) 1);
          Var_86 = (BitMask_87 | Var_91);
          StartBitsToSet_24 = (Var_85 & Var_86);
          STATE_VARIABLE_NumBits_53_53 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_NumBits_0_37 - (MR_Unsigned) NumBitsAtStart_23);
        }
        Var_55 = (MR_Integer) ((MR_Unsigned) 8 - (MR_Unsigned) EndIndex_19);
        succeeded = (Var_55 == (MR_Integer) 1);
        if (succeeded)
        {
          NumBitsAtEnd_27 = (MR_Integer) 0;
          EndBitsToSet_28 = (MR_Integer) 0;
          STATE_VARIABLE_NumBits_58_58 = STATE_VARIABLE_NumBits_53_53;
        }
        else
        {
          MR_Integer SrcPartialEndByteIndex_29;
          MR_Integer PartialEndByte_30;
          MR_Integer LastBit_95;
          MR_Integer Shift_96;
          MR_Integer Var_97;
          MR_Integer Var_99;
          MR_Integer Var_102;
          MR_Integer Var_103;
          MR_Integer BitMask_104;
          MR_Integer Var_106;
          MR_Integer Var_108;

          NumBitsAtEnd_27 = (MR_Integer) ((MR_Unsigned) EndIndex_19 + (MR_Unsigned) 1);
          succeeded = (SrcEndBit_18 < (MR_Integer) 0);
          if (succeeded)
            SrcPartialEndByteIndex_29 = (MR_Integer) -1;
          else
            SrcPartialEndByteIndex_29 = (SrcEndBit_18 / (MR_Integer) 8);
{
#define MR_PROC_LABEL mercury__bitmap__unsafe_copy_bits_7_p_0

	MR_BitmapPtr BM;
	MR_Integer N;
	MR_Integer Byte;

	BM = (MR_BitmapPtr)SrcBM_9 ;
	N = SrcPartialEndByteIndex_29 ;
		{

    Byte = (MR_Integer) BM->elements[N];


		;}
#undef MR_PROC_LABEL
	PartialEndByte_30  = Byte;
}
          Var_97 = (MR_Integer) ((MR_Unsigned) 0 + (MR_Unsigned) NumBitsAtEnd_27);
          LastBit_95 = (MR_Integer) ((MR_Unsigned) Var_97 - (MR_Unsigned) 1);
          Var_99 = (MR_Integer) ((MR_Unsigned) 8 - (MR_Unsigned) 1);
          Shift_96 = (MR_Integer) ((MR_Unsigned) Var_99 - (MR_Unsigned) LastBit_95);
          Var_102 = (PartialEndByte_30 >> Shift_96);
          Var_106 = (MR_Integer) ((MR_Unsigned) NumBitsAtEnd_27 - (MR_Unsigned) 1);
          BitMask_104 = ((MR_Integer) 1 << Var_106);
          Var_108 = (MR_Integer) ((MR_Unsigned) BitMask_104 - (MR_Unsigned) 1);
          Var_103 = (BitMask_104 | Var_108);
          EndBitsToSet_28 = (Var_102 & Var_103);
          STATE_VARIABLE_NumBits_58_58 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_NumBits_53_53 - (MR_Unsigned) NumBitsAtEnd_27);
        }
        NumBytes_70 = (STATE_VARIABLE_NumBits_58_58 / (MR_Integer) 8);
        Var_60 = (MR_Integer) ((MR_Unsigned) SrcStartBit_10 + (MR_Unsigned) NumBitsAtStart_23);
        SrcStartByteIndex_71 = (Var_60 / (MR_Integer) 8);
        Var_62 = (MR_Integer) ((MR_Unsigned) DestStartBit_11 + (MR_Unsigned) NumBitsAtStart_23);
        DestStartByteIndex_72 = (Var_62 / (MR_Integer) 8);
        mercury__bitmap__unsafe_copy_bytes_7_p_0(SameBM_8, SrcBM_9, SrcStartByteIndex_71, DestStartByteIndex_72, NumBytes_70, STATE_VARIABLE_DestBM_0_38, &STATE_VARIABLE_DestBM_64_64);
        succeeded = (NumBitsAtStart_23 == (MR_Integer) 0);
        if (succeeded)
          STATE_VARIABLE_DestBM_66_66 = STATE_VARIABLE_DestBM_64_64;
        else
        {
          MR_Integer DestPartialStartByteIndex_31 = (MR_Integer) ((MR_Unsigned) DestStartByteIndex_72 - (MR_Unsigned) 1);
          MR_Integer StartByte0_32;
          MR_Integer StartByte_33;

{
#define MR_PROC_LABEL mercury__bitmap__unsafe_copy_bits_7_p_0

	MR_BitmapPtr BM;
	MR_Integer N;
	MR_Integer Byte;

	BM = (MR_BitmapPtr)STATE_VARIABLE_DestBM_64_64 ;
	N = DestPartialStartByteIndex_31 ;
		{

    Byte = (MR_Integer) BM->elements[N];


		;}
#undef MR_PROC_LABEL
	StartByte0_32  = Byte;
}
          mercury__bitmap__set_bits_in_byte_5_p_0(SrcStartIndex_14, NumBitsAtStart_23, StartBitsToSet_24, StartByte0_32, &StartByte_33);
{
#define MR_PROC_LABEL mercury__bitmap__unsafe_copy_bits_7_p_0

	MR_Integer N;
	MR_Integer Byte;
	MR_BitmapPtr BM0;
	MR_BitmapPtr BM;

	N = DestPartialStartByteIndex_31 ;
	Byte = StartByte_33 ;
	BM0 = (MR_BitmapPtr)STATE_VARIABLE_DestBM_64_64 ;
		{

    BM = BM0;
    BM->elements[N] = (MR_uint_least8_t) Byte;


		;}
#undef MR_PROC_LABEL
	STATE_VARIABLE_DestBM_66_66  = (MR_Box) BM;
}
        }
        succeeded = (NumBitsAtEnd_27 == (MR_Integer) 0);
        if (succeeded)
          *STATE_VARIABLE_DestBM_39 = STATE_VARIABLE_DestBM_66_66;
        else
        {
          MR_Integer DestPartialEndByteIndex_34 = (MR_Integer) ((MR_Unsigned) DestStartByteIndex_72 + (MR_Unsigned) NumBytes_70);
          MR_Integer EndByte0_35;
          MR_Integer EndByte_36;

{
#define MR_PROC_LABEL mercury__bitmap__unsafe_copy_bits_7_p_0

	MR_BitmapPtr BM;
	MR_Integer N;
	MR_Integer Byte;

	BM = (MR_BitmapPtr)STATE_VARIABLE_DestBM_66_66 ;
	N = DestPartialEndByteIndex_34 ;
		{

    Byte = (MR_Integer) BM->elements[N];


		;}
#undef MR_PROC_LABEL
	EndByte0_35  = Byte;
}
          mercury__bitmap__set_bits_in_byte_5_p_0((MR_Integer) 0, NumBitsAtEnd_27, EndBitsToSet_28, EndByte0_35, &EndByte_36);
{
#define MR_PROC_LABEL mercury__bitmap__unsafe_copy_bits_7_p_0

	MR_Integer N;
	MR_Integer Byte;
	MR_BitmapPtr BM0;
	MR_BitmapPtr BM;

	N = DestPartialEndByteIndex_34 ;
	Byte = EndByte_36 ;
	BM0 = (MR_BitmapPtr)STATE_VARIABLE_DestBM_66_66 ;
		{

    BM = BM0;
    BM->elements[N] = (MR_uint_least8_t) Byte;


		;}
#undef MR_PROC_LABEL
	*STATE_VARIABLE_DestBM_39  = (MR_Box) BM;
}
        }
      }
    }
    else
      mercury__bitmap__unsafe_copy_unaligned_bits_7_p_0(SameBM_8, SrcBM_9, SrcStartBit_10, DestStartBit_11, STATE_VARIABLE_NumBits_0_37, STATE_VARIABLE_DestBM_0_38, STATE_VARIABLE_DestBM_39);
  }
}

static void MR_CALL 
mercury__bitmap__unsafe_copy_unaligned_bits_7_p_0(
  MR_Integer SameBM_8,
  MR_Box SrcBM_9,
  MR_Integer SrcStartBit_10,
  MR_Integer DestStartBit_11,
  MR_Integer STATE_VARIABLE_NumBits_0_36,
  MR_Box STATE_VARIABLE_DestBM_0_37,
  MR_Box * STATE_VARIABLE_DestBM_38)
{
  MR_bool succeeded;
  MR_Integer DestStartIndex_14 = (DestStartBit_11 % (MR_Integer) 8);
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
  MR_Integer Var_39 = (MR_Integer) ((MR_Unsigned) DestStartBit_11 + (MR_Unsigned) STATE_VARIABLE_NumBits_0_36);
  MR_Integer STATE_VARIABLE_NumBits_42_42;
  MR_Integer STATE_VARIABLE_NumBits_51_51;
  MR_Box STATE_VARIABLE_DestBM_54_54;
  MR_Box STATE_VARIABLE_DestBM_65_65;
  MR_Integer Var_44;

  DestEndBit_15 = (MR_Integer) ((MR_Unsigned) Var_39 - (MR_Unsigned) 1);
  succeeded = (DestStartIndex_14 == (MR_Integer) 0);
  if (succeeded)
  {
    NumBitsAtStart_16 = (MR_Integer) 0;
    StartBits_17 = (MR_Integer) 0;
    STATE_VARIABLE_NumBits_42_42 = STATE_VARIABLE_NumBits_0_36;
  }
  else
  {
    NumBitsAtStart_16 = (MR_Integer) ((MR_Unsigned) 8 - (MR_Unsigned) DestStartIndex_14);
    StartBits_17 = mercury__bitmap__unsafe_get_bits_3_f_0(SrcBM_9, SrcStartBit_10, NumBitsAtStart_16);
    STATE_VARIABLE_NumBits_42_42 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_NumBits_0_36 - (MR_Unsigned) NumBitsAtStart_16);
  }
  NewSrcStartBit_18 = (MR_Integer) ((MR_Unsigned) SrcStartBit_10 + (MR_Unsigned) NumBitsAtStart_16);
  NewDestStartBit_19 = (MR_Integer) ((MR_Unsigned) DestStartBit_11 + (MR_Unsigned) NumBitsAtStart_16);
  DestEndIndex_20 = (DestEndBit_15 % (MR_Integer) 8);
  Var_44 = (MR_Integer) ((MR_Unsigned) 8 - (MR_Unsigned) DestEndIndex_20);
  succeeded = (Var_44 == (MR_Integer) 1);
  if (succeeded)
  {
    NumBitsAtEnd_21 = (MR_Integer) 0;
    EndBits_22 = (MR_Integer) 0;
    STATE_VARIABLE_NumBits_51_51 = STATE_VARIABLE_NumBits_42_42;
  }
  else
  {
    MR_Integer SrcEndBit_23;
    MR_Integer Var_46;
    MR_Integer Var_48;
    MR_Integer Var_49;

    NumBitsAtEnd_21 = (MR_Integer) ((MR_Unsigned) DestEndIndex_20 + (MR_Unsigned) 1);
    Var_46 = (MR_Integer) ((MR_Unsigned) NewSrcStartBit_18 + (MR_Unsigned) STATE_VARIABLE_NumBits_42_42);
    SrcEndBit_23 = (MR_Integer) ((MR_Unsigned) Var_46 - (MR_Unsigned) 1);
    Var_49 = (MR_Integer) ((MR_Unsigned) SrcEndBit_23 - (MR_Unsigned) NumBitsAtEnd_21);
    Var_48 = (MR_Integer) ((MR_Unsigned) Var_49 + (MR_Unsigned) 1);
    EndBits_22 = mercury__bitmap__unsafe_get_bits_3_f_0(SrcBM_9, Var_48, NumBitsAtEnd_21);
    STATE_VARIABLE_NumBits_51_51 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_NumBits_42_42 - (MR_Unsigned) NumBitsAtEnd_21);
  }
  NumBytes_24 = (STATE_VARIABLE_NumBits_51_51 / (MR_Integer) 8);
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
        MR_Integer SrcByte_29;
        MR_Integer Var_53;

        SrcStartByteIndex_27 = mercury__bitmap__det_byte_index_for_bit_1_f_0(NewSrcStartBit_18);
        DestStartByteIndex_28 = mercury__bitmap__det_byte_index_for_bit_1_f_0(NewDestStartBit_19);
{
#define MR_PROC_LABEL mercury__bitmap__unsafe_copy_unaligned_bits_7_p_0

	MR_BitmapPtr BM;
	MR_Integer N;
	MR_Integer Byte;

	BM = (MR_BitmapPtr)SrcBM_9 ;
	N = SrcStartByteIndex_27 ;
		{

    Byte = (MR_Integer) BM->elements[N];


		;}
#undef MR_PROC_LABEL
	SrcByte_29  = Byte;
}
        Var_53 = (MR_Integer) ((MR_Unsigned) SrcStartByteIndex_27 + (MR_Unsigned) 1);
        mercury__bitmap__unsafe_copy_unaligned_bytes_ltor_8_p_0(SrcBM_9, Var_53, SrcBitIndex_26, SrcByte_29, DestStartByteIndex_28, NumBytes_24, STATE_VARIABLE_DestBM_0_37, &STATE_VARIABLE_DestBM_54_54);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Integer Var_56;
        MR_Integer Var_57 = (MR_Integer) ((MR_Unsigned) NewSrcStartBit_18 + (MR_Unsigned) STATE_VARIABLE_NumBits_51_51);
        MR_Integer Var_59;
        MR_Integer Var_60;
        MR_Integer Var_62;
        MR_Integer SrcStartByteIndex_68;
        MR_Integer DestStartByteIndex_69;
        MR_Integer SrcByte_70;

        Var_56 = (MR_Integer) ((MR_Unsigned) Var_57 - (MR_Unsigned) 1);
        SrcStartByteIndex_68 = mercury__bitmap__det_byte_index_for_bit_1_f_0(Var_56);
        Var_60 = (MR_Integer) ((MR_Unsigned) NewDestStartBit_19 + (MR_Unsigned) STATE_VARIABLE_NumBits_51_51);
        Var_59 = (MR_Integer) ((MR_Unsigned) Var_60 - (MR_Unsigned) 1);
        DestStartByteIndex_69 = mercury__bitmap__det_byte_index_for_bit_1_f_0(Var_59);
{
#define MR_PROC_LABEL mercury__bitmap__unsafe_copy_unaligned_bits_7_p_0

	MR_BitmapPtr BM;
	MR_Integer N;
	MR_Integer Byte;

	BM = (MR_BitmapPtr)SrcBM_9 ;
	N = SrcStartByteIndex_68 ;
		{

    Byte = (MR_Integer) BM->elements[N];


		;}
#undef MR_PROC_LABEL
	SrcByte_70  = Byte;
}
        Var_62 = (MR_Integer) ((MR_Unsigned) SrcStartByteIndex_68 - (MR_Unsigned) 1);
        mercury__bitmap__unsafe_copy_unaligned_bytes_rtol_8_p_0(SrcBM_9, Var_62, SrcBitIndex_26, SrcByte_70, DestStartByteIndex_69, NumBytes_24, STATE_VARIABLE_DestBM_0_37, &STATE_VARIABLE_DestBM_54_54);
      }
      break;
  }
  succeeded = (NumBitsAtStart_16 == (MR_Integer) 0);
  if (succeeded)
    STATE_VARIABLE_DestBM_65_65 = STATE_VARIABLE_DestBM_54_54;
  else
  {
    MR_Integer PartialDestStartByteIndex_30;
    MR_Integer StartByte0_31;
    MR_Integer StartByte_32;
    MR_Integer LastBit_76;
    MR_Integer Shift_77;
    MR_Integer Mask_78;
    MR_Integer BitsToSet_79;
    MR_Integer Var_80;
    MR_Integer Var_82;
    MR_Integer Var_85;
    MR_Integer Var_86;
    MR_Integer Var_87;
    MR_Integer Var_88;
    MR_Integer BitMask_89;
    MR_Integer Var_91;
    MR_Integer Var_93;

    succeeded = (DestStartBit_11 < (MR_Integer) 0);
    if (succeeded)
      PartialDestStartByteIndex_30 = (MR_Integer) -1;
    else
      PartialDestStartByteIndex_30 = (DestStartBit_11 / (MR_Integer) 8);
{
#define MR_PROC_LABEL mercury__bitmap__unsafe_copy_unaligned_bits_7_p_0

	MR_BitmapPtr BM;
	MR_Integer N;
	MR_Integer Byte;

	BM = (MR_BitmapPtr)STATE_VARIABLE_DestBM_54_54 ;
	N = PartialDestStartByteIndex_30 ;
		{

    Byte = (MR_Integer) BM->elements[N];


		;}
#undef MR_PROC_LABEL
	StartByte0_31  = Byte;
}
    Var_80 = (MR_Integer) ((MR_Unsigned) DestStartIndex_14 + (MR_Unsigned) NumBitsAtStart_16);
    LastBit_76 = (MR_Integer) ((MR_Unsigned) Var_80 - (MR_Unsigned) 1);
    Var_82 = (MR_Integer) ((MR_Unsigned) 8 - (MR_Unsigned) 1);
    Shift_77 = (MR_Integer) ((MR_Unsigned) Var_82 - (MR_Unsigned) LastBit_76);
    Var_91 = (MR_Integer) ((MR_Unsigned) NumBitsAtStart_16 - (MR_Unsigned) 1);
    BitMask_89 = ((MR_Integer) 1 << Var_91);
    Var_93 = (MR_Integer) ((MR_Unsigned) BitMask_89 - (MR_Unsigned) 1);
    Mask_78 = (BitMask_89 | Var_93);
    BitsToSet_79 = (Mask_78 & StartBits_17);
    Var_87 = (Mask_78 << Shift_77);
    Var_86 = ~(Var_87);
    Var_85 = (StartByte0_31 & Var_86);
    Var_88 = (BitsToSet_79 << Shift_77);
    StartByte_32 = (Var_85 | Var_88);
{
#define MR_PROC_LABEL mercury__bitmap__unsafe_copy_unaligned_bits_7_p_0

	MR_Integer N;
	MR_Integer Byte;
	MR_BitmapPtr BM0;
	MR_BitmapPtr BM;

	N = PartialDestStartByteIndex_30 ;
	Byte = StartByte_32 ;
	BM0 = (MR_BitmapPtr)STATE_VARIABLE_DestBM_54_54 ;
		{

    BM = BM0;
    BM->elements[N] = (MR_uint_least8_t) Byte;


		;}
#undef MR_PROC_LABEL
	STATE_VARIABLE_DestBM_65_65  = (MR_Box) BM;
}
  }
  succeeded = (NumBitsAtEnd_21 == (MR_Integer) 0);
  if (succeeded)
    *STATE_VARIABLE_DestBM_38 = STATE_VARIABLE_DestBM_65_65;
  else
  {
    MR_Integer PartialDestEndByteIndex_33;
    MR_Integer EndByte0_34;
    MR_Integer EndByte_35;

    succeeded = (DestEndBit_15 < (MR_Integer) 0);
    if (succeeded)
      PartialDestEndByteIndex_33 = (MR_Integer) -1;
    else
      PartialDestEndByteIndex_33 = (DestEndBit_15 / (MR_Integer) 8);
{
#define MR_PROC_LABEL mercury__bitmap__unsafe_copy_unaligned_bits_7_p_0

	MR_BitmapPtr BM;
	MR_Integer N;
	MR_Integer Byte;

	BM = (MR_BitmapPtr)STATE_VARIABLE_DestBM_65_65 ;
	N = PartialDestEndByteIndex_33 ;
		{

    Byte = (MR_Integer) BM->elements[N];


		;}
#undef MR_PROC_LABEL
	EndByte0_34  = Byte;
}
    mercury__bitmap__set_bits_in_byte_5_p_0((MR_Integer) 0, NumBitsAtEnd_21, EndBits_22, EndByte0_34, &EndByte_35);
{
#define MR_PROC_LABEL mercury__bitmap__unsafe_copy_unaligned_bits_7_p_0

	MR_Integer N;
	MR_Integer Byte;
	MR_BitmapPtr BM0;
	MR_BitmapPtr BM;

	N = PartialDestEndByteIndex_33 ;
	Byte = EndByte_35 ;
	BM0 = (MR_BitmapPtr)STATE_VARIABLE_DestBM_65_65 ;
		{

    BM = BM0;
    BM->elements[N] = (MR_uint_least8_t) Byte;


		;}
#undef MR_PROC_LABEL
	*STATE_VARIABLE_DestBM_38  = (MR_Box) BM;
}
  }
}

static void MR_CALL 
mercury__bitmap__set_bits_in_byte_5_p_0(
  MR_Integer FirstBit_6,
  MR_Integer NumBits_7,
  MR_Integer Bits_8,
  MR_Integer Byte0_9,
  MR_Integer * Byte_10)
{
  MR_Integer LastBit_11;
  MR_Integer Shift_12;
  MR_Integer Mask_13;
  MR_Integer BitsToSet_14;
  MR_Integer Var_15 = (MR_Integer) ((MR_Unsigned) FirstBit_6 + (MR_Unsigned) NumBits_7);
  MR_Integer Var_17;
  MR_Integer Var_20;
  MR_Integer Var_21;
  MR_Integer Var_22;
  MR_Integer Var_23;
  MR_Integer BitMask_24;
  MR_Integer Var_26;
  MR_Integer Var_28;

  LastBit_11 = (MR_Integer) ((MR_Unsigned) Var_15 - (MR_Unsigned) 1);
  Var_17 = (MR_Integer) ((MR_Unsigned) 8 - (MR_Unsigned) 1);
  Shift_12 = (MR_Integer) ((MR_Unsigned) Var_17 - (MR_Unsigned) LastBit_11);
  Var_26 = (MR_Integer) ((MR_Unsigned) NumBits_7 - (MR_Unsigned) 1);
  BitMask_24 = ((MR_Integer) 1 << Var_26);
  Var_28 = (MR_Integer) ((MR_Unsigned) BitMask_24 - (MR_Unsigned) 1);
  Mask_13 = (BitMask_24 | Var_28);
  BitsToSet_14 = (Mask_13 & Bits_8);
  Var_22 = (Mask_13 << Shift_12);
  Var_21 = ~(Var_22);
  Var_20 = (Byte0_9 & Var_21);
  Var_23 = (BitsToSet_14 << Shift_12);
  *Byte_10 = (Var_20 | Var_23);
}

static void MR_CALL 
mercury__bitmap__unsafe_copy_unaligned_bytes_rtol_8_p_0(
  MR_Box SrcBM_9,
  MR_Integer SrcByteIndex_10,
  MR_Integer SrcBitIndex_11,
  MR_Integer PrevSrcByteBits_12,
  MR_Integer DestByteIndex_13,
  MR_Integer NumBytes_14,
  MR_Box STATE_VARIABLE_DestBM_0_18,
  MR_Box * STATE_VARIABLE_DestBM_19)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (NumBytes_14 <= (MR_Integer) 0);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
      *STATE_VARIABLE_DestBM_19 = STATE_VARIABLE_DestBM_0_18;
    else
    {
      MR_Integer SrcByteBits_16;
      MR_Integer DestByteBits_17;
      MR_Integer Var_21;
      MR_Integer Var_22;
      MR_Integer Var_23;
      MR_Box STATE_VARIABLE_DestBM_25_25;
      MR_Integer Var_26;
      MR_Integer Var_27;
      MR_Integer Var_28;
      MR_Integer next_value_of_SrcByteIndex_10;
      MR_Integer next_value_of_PrevSrcByteBits_12;
      MR_Integer next_value_of_DestByteIndex_13;
      MR_Integer next_value_of_NumBytes_14;
      MR_Box next_value_of_STATE_VARIABLE_DestBM_0_18;

{
#define MR_PROC_LABEL mercury__bitmap__unsafe_copy_unaligned_bytes_rtol_8_p_0

	MR_BitmapPtr BM;
	MR_Integer N;
	MR_Integer Byte;

	BM = (MR_BitmapPtr)SrcBM_9 ;
	N = SrcByteIndex_10 ;
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
#define MR_PROC_LABEL mercury__bitmap__unsafe_copy_unaligned_bytes_rtol_8_p_0

	MR_Integer N;
	MR_Integer Byte;
	MR_BitmapPtr BM0;
	MR_BitmapPtr BM;

	N = DestByteIndex_13 ;
	Byte = DestByteBits_17 ;
	BM0 = (MR_BitmapPtr)STATE_VARIABLE_DestBM_0_18 ;
		{

    BM = BM0;
    BM->elements[N] = (MR_uint_least8_t) Byte;


		;}
#undef MR_PROC_LABEL
	STATE_VARIABLE_DestBM_25_25  = (MR_Box) BM;
}
      Var_26 = (MR_Integer) ((MR_Unsigned) SrcByteIndex_10 - (MR_Unsigned) 1);
      Var_27 = (MR_Integer) ((MR_Unsigned) DestByteIndex_13 - (MR_Unsigned) 1);
      Var_28 = (MR_Integer) ((MR_Unsigned) NumBytes_14 - (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_SrcByteIndex_10 = Var_26;
      next_value_of_PrevSrcByteBits_12 = SrcByteBits_16;
      next_value_of_DestByteIndex_13 = Var_27;
      next_value_of_NumBytes_14 = Var_28;
      next_value_of_STATE_VARIABLE_DestBM_0_18 = STATE_VARIABLE_DestBM_25_25;
      SrcByteIndex_10 = next_value_of_SrcByteIndex_10;
      PrevSrcByteBits_12 = next_value_of_PrevSrcByteBits_12;
      DestByteIndex_13 = next_value_of_DestByteIndex_13;
      NumBytes_14 = next_value_of_NumBytes_14;
      STATE_VARIABLE_DestBM_0_18 = next_value_of_STATE_VARIABLE_DestBM_0_18;
      continue;
    }
    break;
  }
}

static void MR_CALL 
mercury__bitmap__unsafe_copy_unaligned_bytes_ltor_8_p_0(
  MR_Box SrcBM_9,
  MR_Integer SrcByteIndex_10,
  MR_Integer SrcBitIndex_11,
  MR_Integer PrevSrcByteBits_12,
  MR_Integer DestByteIndex_13,
  MR_Integer NumBytes_14,
  MR_Box STATE_VARIABLE_DestBM_0_18,
  MR_Box * STATE_VARIABLE_DestBM_19)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (NumBytes_14 <= (MR_Integer) 0);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
      *STATE_VARIABLE_DestBM_19 = STATE_VARIABLE_DestBM_0_18;
    else
    {
      MR_Integer SrcByteBits_16;
      MR_Integer DestByteBits_17;
      MR_Integer Var_21;
      MR_Integer Var_22;
      MR_Integer Var_23;
      MR_Box STATE_VARIABLE_DestBM_25_25;
      MR_Integer Var_26;
      MR_Integer Var_27;
      MR_Integer Var_28;
      MR_Integer next_value_of_SrcByteIndex_10;
      MR_Integer next_value_of_PrevSrcByteBits_12;
      MR_Integer next_value_of_DestByteIndex_13;
      MR_Integer next_value_of_NumBytes_14;
      MR_Box next_value_of_STATE_VARIABLE_DestBM_0_18;

{
#define MR_PROC_LABEL mercury__bitmap__unsafe_copy_unaligned_bytes_ltor_8_p_0

	MR_BitmapPtr BM;
	MR_Integer N;
	MR_Integer Byte;

	BM = (MR_BitmapPtr)SrcBM_9 ;
	N = SrcByteIndex_10 ;
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
#define MR_PROC_LABEL mercury__bitmap__unsafe_copy_unaligned_bytes_ltor_8_p_0

	MR_Integer N;
	MR_Integer Byte;
	MR_BitmapPtr BM0;
	MR_BitmapPtr BM;

	N = DestByteIndex_13 ;
	Byte = DestByteBits_17 ;
	BM0 = (MR_BitmapPtr)STATE_VARIABLE_DestBM_0_18 ;
		{

    BM = BM0;
    BM->elements[N] = (MR_uint_least8_t) Byte;


		;}
#undef MR_PROC_LABEL
	STATE_VARIABLE_DestBM_25_25  = (MR_Box) BM;
}
      Var_26 = (MR_Integer) ((MR_Unsigned) SrcByteIndex_10 + (MR_Unsigned) 1);
      Var_27 = (MR_Integer) ((MR_Unsigned) DestByteIndex_13 + (MR_Unsigned) 1);
      Var_28 = (MR_Integer) ((MR_Unsigned) NumBytes_14 - (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_SrcByteIndex_10 = Var_26;
      next_value_of_PrevSrcByteBits_12 = SrcByteBits_16;
      next_value_of_DestByteIndex_13 = Var_27;
      next_value_of_NumBytes_14 = Var_28;
      next_value_of_STATE_VARIABLE_DestBM_0_18 = STATE_VARIABLE_DestBM_25_25;
      SrcByteIndex_10 = next_value_of_SrcByteIndex_10;
      PrevSrcByteBits_12 = next_value_of_PrevSrcByteBits_12;
      DestByteIndex_13 = next_value_of_DestByteIndex_13;
      NumBytes_14 = next_value_of_NumBytes_14;
      STATE_VARIABLE_DestBM_0_18 = next_value_of_STATE_VARIABLE_DestBM_0_18;
      continue;
    }
    break;
  }
}

static void MR_CALL 
mercury__bitmap__unsafe_copy_bytes_7_p_0(
  MR_Integer SameBM_1,
  MR_Box SrcBM_2,
  MR_Integer SrcFirstByteIndex_3,
  MR_Integer DestFirstByteIndex_4,
  MR_Integer NumBytes_5,
  MR_Box DestBM0_6,
  MR_Box * DestBM_7)
{
{
#define MR_PROC_LABEL mercury__bitmap__unsafe_copy_bytes_7_p_0

	MR_Integer SameBM;
	MR_BitmapPtr SrcBM;
	MR_Integer SrcFirstByteIndex;
	MR_Integer DestFirstByteIndex;
	MR_Integer NumBytes;
	MR_BitmapPtr DestBM0;
	MR_BitmapPtr DestBM;

	SameBM = SameBM_1 ;
	SrcBM = (MR_BitmapPtr)SrcBM_2 ;
	SrcFirstByteIndex = SrcFirstByteIndex_3 ;
	DestFirstByteIndex = DestFirstByteIndex_4 ;
	NumBytes = NumBytes_5 ;
	DestBM0 = (MR_BitmapPtr)DestBM0_6 ;
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
	*DestBM_7  = (MR_Box) DestBM;
}
}

void MR_CALL 
mercury__bitmap__throw_bounds_error_4_p_0(
  MR_Box BM_5,
  MR_String Pred_6,
  MR_Integer Index_7,
  MR_Integer NumBits_8)
{
  MR_bool succeeded = (NumBits_8 < (MR_Integer) 0);
  MR_String Msg_9;
  MR_Word Var_78;

  if (succeeded)
  {
    MR_String Var_29;
    MR_String Var_36;
    MR_String Var_38;

    mercury__string__format__format_signed_int_component_5_p_0((MR_Word) (&mercury__bitmap_scalar_common_5[0]), (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), NumBits_8, &Var_29);
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
    mercury__string__format__format_signed_int_component_5_p_0((MR_Word) (&mercury__bitmap_scalar_common_5[0]), (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), Var_26, &Var_40);
    mercury__string__append_3_p_2(Var_40, (MR_String) ").", &Var_47);
    mercury__string__append_3_p_2((MR_String) " is out of bounds [0, ", Var_47, &Var_49);
    mercury__string__format__format_signed_int_component_5_p_0((MR_Word) (&mercury__bitmap_scalar_common_5[0]), (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), Index_7, &Var_50);
    mercury__string__append_3_p_2(Var_50, Var_49, &Var_57);
    mercury__string__append_3_p_2((MR_String) " bits starting at bit ", Var_57, &Var_59);
    mercury__string__format__format_signed_int_component_5_p_0((MR_Word) (&mercury__bitmap_scalar_common_5[0]), (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), NumBits_8, &Var_60);
    mercury__string__append_3_p_2(Var_60, Var_59, &Var_67);
    mercury__string__append_3_p_2((MR_String) ": ", Var_67, &Var_69);
    mercury__string__append_3_p_2(Pred_6, Var_69, &Msg_9);
  }
  Var_78 = (MR_Word) (Msg_9);
  {
    mercury__exception__throw_1_p_0((MR_Word) (&mercury__bitmap__bitmap__type_ctor_info_bitmap_error_0), ((MR_Box) (Var_78)));
    return;
  }
}

MR_Box MR_CALL 
mercury__bitmap__copy_1_f_0(
  MR_Box BM0_1)
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

MR_bool MR_CALL 
mercury__bitmap__unsafe_is_set_2_p_0(
  MR_Box BM_3,
  MR_Integer I_4)
{
  MR_bool succeeded;

  succeeded = mercury__bitmap__unsafe_is_clear_2_p_0(BM_3, I_4);
  succeeded = !(succeeded);
  return succeeded;
}

MR_Box MR_CALL 
mercury__bitmap__unsafe_clear_2_f_0(
  MR_Box BM0_4,
  MR_Integer I_5)
{
  MR_Box BM_6;

  mercury__bitmap__unsafe_clear_3_p_0(I_5, BM0_4, &BM_6);
  return BM_6;
}

MR_Box MR_CALL 
mercury__bitmap__unsafe_set_2_f_0(
  MR_Box BM0_4,
  MR_Integer I_5)
{
  MR_Box BM_6;

  mercury__bitmap__unsafe_set_3_p_0(I_5, BM0_4, &BM_6);
  return BM_6;
}

MR_Box MR_CALL 
mercury__bitmap__unsafe_flip_2_f_0(
  MR_Box BM0_4,
  MR_Integer I_5)
{
  MR_Box BM_6;

  mercury__bitmap__unsafe_flip_3_p_0(I_5, BM0_4, &BM_6);
  return BM_6;
}

MR_bool MR_CALL 
mercury__bitmap__is_clear_2_p_0(
  MR_Box BM_3,
  MR_Integer I_4)
{
  MR_bool succeeded = ((MR_Integer) 0 <= I_4);
  MR_Integer Var_7;

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
	Var_7  = NumBits;
}
    succeeded = (I_4 < Var_7);
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

MR_bool MR_CALL 
mercury__bitmap__is_set_2_p_0(
  MR_Box BM_3,
  MR_Integer I_4)
{
  MR_bool succeeded = ((MR_Integer) 0 <= I_4);
  MR_Integer Var_7;

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
	Var_7  = NumBits;
}
    succeeded = (I_4 < Var_7);
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

MR_Box MR_CALL 
mercury__bitmap__clear_2_f_0(
  MR_Box STATE_VARIABLE_BM_0_6,
  MR_Integer I_5)
{
  MR_Box STATE_VARIABLE_BM_7;

  mercury__bitmap__clear_3_p_0(I_5, STATE_VARIABLE_BM_0_6, &STATE_VARIABLE_BM_7);
  return STATE_VARIABLE_BM_7;
}

void MR_CALL 
mercury__bitmap__clear_3_p_0(
  MR_Integer I_4,
  MR_Box STATE_VARIABLE_BM_0_6,
  MR_Box * STATE_VARIABLE_BM_7)
{
  MR_bool succeeded = ((MR_Integer) 0 <= I_4);
  MR_Integer Var_11;

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
	Var_11  = NumBits;
}
    succeeded = (I_4 < Var_11);
  }
  if (succeeded)
    mercury__bitmap__unsafe_clear_3_p_0(I_4, STATE_VARIABLE_BM_0_6, STATE_VARIABLE_BM_7);
  else
    {
      mercury__bitmap__throw_bit_bounds_error_3_p_0(STATE_VARIABLE_BM_0_6, (MR_String) "bitmap.clear", I_4);
      return;
    }
}

MR_Box MR_CALL 
mercury__bitmap__set_2_f_0(
  MR_Box STATE_VARIABLE_BM_0_6,
  MR_Integer I_5)
{
  MR_Box STATE_VARIABLE_BM_7;

  mercury__bitmap__set_3_p_0(I_5, STATE_VARIABLE_BM_0_6, &STATE_VARIABLE_BM_7);
  return STATE_VARIABLE_BM_7;
}

void MR_CALL 
mercury__bitmap__set_3_p_0(
  MR_Integer I_4,
  MR_Box STATE_VARIABLE_BM_0_6,
  MR_Box * STATE_VARIABLE_BM_7)
{
  MR_bool succeeded = ((MR_Integer) 0 <= I_4);
  MR_Integer Var_11;

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
	Var_11  = NumBits;
}
    succeeded = (I_4 < Var_11);
  }
  if (succeeded)
    mercury__bitmap__unsafe_set_3_p_0(I_4, STATE_VARIABLE_BM_0_6, STATE_VARIABLE_BM_7);
  else
    {
      mercury__bitmap__throw_bit_bounds_error_3_p_0(STATE_VARIABLE_BM_0_6, (MR_String) "bitmap.set", I_4);
      return;
    }
}

MR_Box MR_CALL 
mercury__bitmap__flip_2_f_0(
  MR_Box STATE_VARIABLE_BM_0_6,
  MR_Integer I_5)
{
  MR_Box STATE_VARIABLE_BM_7;

  mercury__bitmap__flip_3_p_0(I_5, STATE_VARIABLE_BM_0_6, &STATE_VARIABLE_BM_7);
  return STATE_VARIABLE_BM_7;
}

void MR_CALL 
mercury__bitmap__flip_3_p_0(
  MR_Integer I_4,
  MR_Box STATE_VARIABLE_BM_0_6,
  MR_Box * STATE_VARIABLE_BM_7)
{
  MR_bool succeeded = ((MR_Integer) 0 <= I_4);
  MR_Integer Var_11;

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
	Var_11  = NumBits;
}
    succeeded = (I_4 < Var_11);
  }
  if (succeeded)
    mercury__bitmap__unsafe_flip_3_p_0(I_4, STATE_VARIABLE_BM_0_6, STATE_VARIABLE_BM_7);
  else
    {
      mercury__bitmap__throw_bit_bounds_error_3_p_0(STATE_VARIABLE_BM_0_6, (MR_String) "bitmap.flip", I_4);
      return;
    }
}

void MR_CALL 
mercury__bitmap__unsafe_flip_3_p_0(
  MR_Integer I_4,
  MR_Box BM0_5,
  MR_Box * BM_6)
{
  MR_Integer ByteIndex_7;
  MR_Integer Byte0_8;
  MR_Integer Byte_9;
  MR_Integer Var_10;
  MR_Integer Var_12;
  MR_Integer Var_13;
  MR_Integer Var_16;

  ByteIndex_7 = mercury__bitmap__det_byte_index_for_bit_1_f_0(I_4);
{
#define MR_PROC_LABEL mercury__bitmap__unsafe_flip_3_p_0

	MR_BitmapPtr BM;
	MR_Integer N;
	MR_Integer Byte;

	BM = (MR_BitmapPtr)BM0_5 ;
	N = ByteIndex_7 ;
		{

    Byte = (MR_Integer) BM->elements[N];


		;}
#undef MR_PROC_LABEL
	Byte0_8  = Byte;
}
  Var_13 = (MR_Integer) ((MR_Unsigned) 8 - (MR_Unsigned) 1);
  Var_16 = (I_4 % (MR_Integer) 8);
  Var_12 = (MR_Integer) ((MR_Unsigned) Var_13 - (MR_Unsigned) Var_16);
  Var_10 = ((MR_Integer) 1 << Var_12);
  Byte_9 = (Byte0_8 ^ Var_10);
{
#define MR_PROC_LABEL mercury__bitmap__unsafe_flip_3_p_0

	MR_Integer N;
	MR_Integer Byte;
	MR_BitmapPtr BM0;
	MR_BitmapPtr BM;

	N = ByteIndex_7 ;
	Byte = Byte_9 ;
	BM0 = (MR_BitmapPtr)BM0_5 ;
		{

    BM = BM0;
    BM->elements[N] = (MR_uint_least8_t) Byte;


		;}
#undef MR_PROC_LABEL
	*BM_6  = (MR_Box) BM;
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

void MR_CALL 
mercury__bitmap__set_uint8_4_p_0(
  MR_Integer N_5,
  uint8_t U8_6,
  MR_Box STATE_VARIABLE_BM_0_8,
  MR_Box * STATE_VARIABLE_BM_9)
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

uint8_t MR_CALL 
mercury__bitmap__unsafe_get_uint8_2_f_0(
  MR_Box BM_1,
  MR_Integer N_2)
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

uint8_t MR_CALL 
mercury__bitmap__get_uint8_2_f_0(
  MR_Box BM_4,
  MR_Integer N_5)
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

MR_Box MR_CALL 
mercury__bitmap__f_117_110_115_97_102_101_95_98_121_116_101_32_58_61_3_f_0(
  MR_Integer N_5,
  MR_Box STATE_VARIABLE_BM_0_8,
  MR_Integer Byte_7)
{
  MR_Box STATE_VARIABLE_BM_9;

{
#define MR_PROC_LABEL mercury__bitmap__f_117_110_115_97_102_101_95_98_121_116_101_32_58_61_3_f_0

	MR_Integer N;
	MR_Integer Byte;
	MR_BitmapPtr BM0;
	MR_BitmapPtr BM;

	N = N_5 ;
	Byte = Byte_7 ;
	BM0 = (MR_BitmapPtr)STATE_VARIABLE_BM_0_8 ;
		{

    BM = BM0;
    BM->elements[N] = (MR_uint_least8_t) Byte;


		;}
#undef MR_PROC_LABEL
	STATE_VARIABLE_BM_9  = (MR_Box) BM;
}
  return STATE_VARIABLE_BM_9;
}

void MR_CALL 
mercury__bitmap__unsafe_set_byte_4_p_0(
  MR_Integer N_1,
  MR_Integer Byte_2,
  MR_Box BM0_3,
  MR_Box * BM_4)
{
{
#define MR_PROC_LABEL mercury__bitmap__unsafe_set_byte_4_p_0

	MR_Integer N;
	MR_Integer Byte;
	MR_BitmapPtr BM0;
	MR_BitmapPtr BM;

	N = N_1 ;
	Byte = Byte_2 ;
	BM0 = (MR_BitmapPtr)BM0_3 ;
		{

    BM = BM0;
    BM->elements[N] = (MR_uint_least8_t) Byte;


		;}
#undef MR_PROC_LABEL
	*BM_4  = (MR_Box) BM;
}
}

MR_Box MR_CALL 
mercury__bitmap__f_98_121_116_101_32_58_61_3_f_0(
  MR_Integer N_5,
  MR_Box STATE_VARIABLE_BM_0_8,
  MR_Integer Byte_7)
{
  MR_bool succeeded;
  MR_Box STATE_VARIABLE_BM_9;

  succeeded = mercury__bitmap__byte_in_range_2_p_0(STATE_VARIABLE_BM_0_8, N_5);
  if (succeeded)
  {
{
#define MR_PROC_LABEL mercury__bitmap__f_98_121_116_101_32_58_61_3_f_0

	MR_Integer N;
	MR_Integer Byte;
	MR_BitmapPtr BM0;
	MR_BitmapPtr BM;

	N = N_5 ;
	Byte = Byte_7 ;
	BM0 = (MR_BitmapPtr)STATE_VARIABLE_BM_0_8 ;
		{

    BM = BM0;
    BM->elements[N] = (MR_uint_least8_t) Byte;


		;}
#undef MR_PROC_LABEL
	STATE_VARIABLE_BM_9  = (MR_Box) BM;
}
  }
  else
    mercury__bitmap__throw_byte_bounds_error_3_p_0(STATE_VARIABLE_BM_0_8, (MR_String) "bitmap.\'byte :=\'", N_5);
  return STATE_VARIABLE_BM_9;
}

void MR_CALL 
mercury__bitmap__set_byte_4_p_0(
  MR_Integer N_5,
  MR_Integer Byte_6,
  MR_Box STATE_VARIABLE_BM_0_8,
  MR_Box * STATE_VARIABLE_BM_9)
{
  MR_bool succeeded;

  succeeded = mercury__bitmap__byte_in_range_2_p_0(STATE_VARIABLE_BM_0_8, N_5);
  if (succeeded)
  {
{
#define MR_PROC_LABEL mercury__bitmap__set_byte_4_p_0

	MR_Integer N;
	MR_Integer Byte;
	MR_BitmapPtr BM0;
	MR_BitmapPtr BM;

	N = N_5 ;
	Byte = Byte_6 ;
	BM0 = (MR_BitmapPtr)STATE_VARIABLE_BM_0_8 ;
		{

    BM = BM0;
    BM->elements[N] = (MR_uint_least8_t) Byte;


		;}
#undef MR_PROC_LABEL
	*STATE_VARIABLE_BM_9  = (MR_Box) BM;
}
  }
  else
    {
      mercury__bitmap__throw_byte_bounds_error_3_p_0(STATE_VARIABLE_BM_0_8, (MR_String) "bitmap.set_byte", N_5);
      return;
    }
}

MR_Integer MR_CALL 
mercury__bitmap__unsafe_byte_2_f_0(
  MR_Integer N_4,
  MR_Box BM_5)
{
  MR_Integer Byte_6;

{
#define MR_PROC_LABEL mercury__bitmap__unsafe_byte_2_f_0

	MR_BitmapPtr BM;
	MR_Integer N;
	MR_Integer Byte;

	BM = (MR_BitmapPtr)BM_5 ;
	N = N_4 ;
		{

    Byte = (MR_Integer) BM->elements[N];


		;}
#undef MR_PROC_LABEL
	Byte_6  = Byte;
}
  return Byte_6;
}

MR_Integer MR_CALL 
mercury__bitmap__unsafe_get_byte_2_f_0(
  MR_Box BM_1,
  MR_Integer N_2)
{
  MR_Integer Byte_3;

{
#define MR_PROC_LABEL mercury__bitmap__unsafe_get_byte_2_f_0

	MR_BitmapPtr BM;
	MR_Integer N;
	MR_Integer Byte;

	BM = (MR_BitmapPtr)BM_1 ;
	N = N_2 ;
		{

    Byte = (MR_Integer) BM->elements[N];


		;}
#undef MR_PROC_LABEL
	Byte_3  = Byte;
}
  return Byte_3;
}

MR_Integer MR_CALL 
mercury__bitmap__byte_2_f_0(
  MR_Integer N_4,
  MR_Box BM_5)
{
  MR_bool succeeded;
  MR_Integer Byte_6;

  succeeded = mercury__bitmap__byte_in_range_2_p_0(BM_5, N_4);
  if (succeeded)
  {
{
#define MR_PROC_LABEL mercury__bitmap__byte_2_f_0

	MR_BitmapPtr BM;
	MR_Integer N;
	MR_Integer Byte;

	BM = (MR_BitmapPtr)BM_5 ;
	N = N_4 ;
		{

    Byte = (MR_Integer) BM->elements[N];


		;}
#undef MR_PROC_LABEL
	Byte_6  = Byte;
}
  }
  else
    mercury__bitmap__throw_byte_bounds_error_3_p_0(BM_5, (MR_String) "bitmap.byte", N_4);
  return Byte_6;
}

MR_Integer MR_CALL 
mercury__bitmap__get_byte_2_f_0(
  MR_Box BM_4,
  MR_Integer N_5)
{
  MR_bool succeeded;
  MR_Integer Byte_6;

  succeeded = mercury__bitmap__byte_in_range_2_p_0(BM_4, N_5);
  if (succeeded)
  {
{
#define MR_PROC_LABEL mercury__bitmap__get_byte_2_f_0

	MR_BitmapPtr BM;
	MR_Integer N;
	MR_Integer Byte;

	BM = (MR_BitmapPtr)BM_4 ;
	N = N_5 ;
		{

    Byte = (MR_Integer) BM->elements[N];


		;}
#undef MR_PROC_LABEL
	Byte_6  = Byte;
}
  }
  else
    mercury__bitmap__throw_byte_bounds_error_3_p_0(BM_4, (MR_String) "bitmap.get_byte", N_5);
  return Byte_6;
}

void MR_CALL 
mercury__bitmap__throw_byte_bounds_error_3_p_0(
  MR_Box BM_4,
  MR_String Pred_5,
  MR_Integer ByteIndex_6)
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
  MR_Word Var_47;

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
  mercury__string__format__format_signed_int_component_5_p_0((MR_Word) (&mercury__bitmap_scalar_common_5[0]), (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), Var_15, &Var_20);
  mercury__string__append_3_p_2(Var_20, (MR_String) ").", &Var_27);
  mercury__string__append_3_p_2((MR_String) " is out of bounds [0, ", Var_27, &Var_29);
  mercury__string__format__format_signed_int_component_5_p_0((MR_Word) (&mercury__bitmap_scalar_common_5[0]), (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), ByteIndex_6, &Var_30);
  mercury__string__append_3_p_2(Var_30, Var_29, &Var_37);
  mercury__string__append_3_p_2((MR_String) ": byte index ", Var_37, &Var_39);
  mercury__string__append_3_p_2(Pred_5, Var_39, &Msg_7);
  Var_47 = (MR_Word) (Msg_7);
  {
    mercury__exception__throw_1_p_0((MR_Word) (&mercury__bitmap__bitmap__type_ctor_info_bitmap_error_0), ((MR_Box) (Var_47)));
    return;
  }
}

MR_Box MR_CALL 
mercury__bitmap__f_117_110_115_97_102_101_95_98_105_116_115_32_58_61_4_f_0(
  MR_Integer FirstBit_6,
  MR_Integer NumBits_7,
  MR_Box STATE_VARIABLE_BM_0_10,
  MR_Integer Bits_9)
{
  MR_Box STATE_VARIABLE_BM_11;

  mercury__bitmap__unsafe_set_bits_5_p_0(FirstBit_6, NumBits_7, Bits_9, STATE_VARIABLE_BM_0_10, &STATE_VARIABLE_BM_11);
  return STATE_VARIABLE_BM_11;
}

MR_Box MR_CALL 
mercury__bitmap__f_98_105_116_115_32_58_61_4_f_0(
  MR_Integer FirstBit_6,
  MR_Integer NumBits_7,
  MR_Box STATE_VARIABLE_BM_0_10,
  MR_Integer Bits_9)
{
  MR_bool succeeded = (FirstBit_6 >= (MR_Integer) 0);
  MR_Box STATE_VARIABLE_BM_11;
  MR_Integer Var_13;
  MR_Integer Var_14;
  MR_Integer Var_15;
  MR_Integer Var_23;
  MR_Integer Var_24;

  if (succeeded)
  {
    Var_13 = (MR_Integer) 0;
    succeeded = (NumBits_7 >= Var_13);
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
      succeeded = (NumBits_7 <= Var_14);
      if (succeeded)
      {
        Var_15 = (MR_Integer) ((MR_Unsigned) FirstBit_6 + (MR_Unsigned) NumBits_7);
        Var_23 = (MR_Integer) 0;
        succeeded = (Var_23 <= Var_15);
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
	Var_24  = NumBits;
}
          succeeded = (Var_15 <= Var_24);
        }
      }
    }
  }
  if (succeeded)
    mercury__bitmap__unsafe_set_bits_5_p_0(FirstBit_6, NumBits_7, Bits_9, STATE_VARIABLE_BM_0_10, &STATE_VARIABLE_BM_11);
  else
  {
    succeeded = (NumBits_7 < (MR_Integer) 0);
    if (!(succeeded))
    {
      MR_Integer Var_18;

{
#define MR_PROC_LABEL mercury__bitmap__f_98_105_116_115_32_58_61_4_f_0

	MR_Integer Bits;

		{

    Bits = ML_BITS_PER_INT;


		;}
#undef MR_PROC_LABEL
	Var_18  = Bits;
}
      succeeded = (NumBits_7 > Var_18);
    }
    if (succeeded)
      mercury__exception__throw_1_p_0((MR_Word) (&mercury__bitmap__bitmap__type_ctor_info_bitmap_error_0), ((MR_Box) (((MR_Box) ((MR_String) "bitmap.\'bits :=\': number of bits must be between 0 and \140int.bits_per_int\'.")))));
    else
      mercury__bitmap__throw_bit_bounds_error_3_p_0(STATE_VARIABLE_BM_0_10, (MR_String) "bitmap.\'bits :=\'", FirstBit_6);
  }
  return STATE_VARIABLE_BM_11;
}

void MR_CALL 
mercury__bitmap__set_bits_5_p_0(
  MR_Integer FirstBit_6,
  MR_Integer NumBits_7,
  MR_Integer Bits_8,
  MR_Box STATE_VARIABLE_BM_0_10,
  MR_Box * STATE_VARIABLE_BM_11)
{
  MR_bool succeeded = (FirstBit_6 >= (MR_Integer) 0);
  MR_Integer Var_13;
  MR_Integer Var_14;
  MR_Integer Var_15;
  MR_Integer Var_23;
  MR_Integer Var_24;

  if (succeeded)
  {
    Var_13 = (MR_Integer) 0;
    succeeded = (NumBits_7 >= Var_13);
    if (succeeded)
    {
{
#define MR_PROC_LABEL mercury__bitmap__set_bits_5_p_0

	MR_Integer Bits;

		{

    Bits = ML_BITS_PER_INT;


		;}
#undef MR_PROC_LABEL
	Var_14  = Bits;
}
      succeeded = (NumBits_7 <= Var_14);
      if (succeeded)
      {
        Var_15 = (MR_Integer) ((MR_Unsigned) FirstBit_6 + (MR_Unsigned) NumBits_7);
        Var_23 = (MR_Integer) 0;
        succeeded = (Var_23 <= Var_15);
        if (succeeded)
        {
{
#define MR_PROC_LABEL mercury__bitmap__set_bits_5_p_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr)STATE_VARIABLE_BM_0_10 ;
		{

    NumBits = BM->num_bits;


		;}
#undef MR_PROC_LABEL
	Var_24  = NumBits;
}
          succeeded = (Var_15 <= Var_24);
        }
      }
    }
  }
  if (succeeded)
    mercury__bitmap__unsafe_set_bits_5_p_0(FirstBit_6, NumBits_7, Bits_8, STATE_VARIABLE_BM_0_10, STATE_VARIABLE_BM_11);
  else
  {
    succeeded = (NumBits_7 < (MR_Integer) 0);
    if (!(succeeded))
    {
      MR_Integer Var_18;

{
#define MR_PROC_LABEL mercury__bitmap__set_bits_5_p_0

	MR_Integer Bits;

		{

    Bits = ML_BITS_PER_INT;


		;}
#undef MR_PROC_LABEL
	Var_18  = Bits;
}
      succeeded = (NumBits_7 > Var_18);
    }
    if (succeeded)
      {
        mercury__exception__throw_1_p_0((MR_Word) (&mercury__bitmap__bitmap__type_ctor_info_bitmap_error_0), ((MR_Box) (((MR_Box) ((MR_String) "bitmap.set_bits: number of bits must be between 0 and \140int.bits_per_int\'.")))));
        return;
      }
    else
      {
        mercury__bitmap__throw_bit_bounds_error_3_p_0(STATE_VARIABLE_BM_0_10, (MR_String) "bitmap.set_bits", FirstBit_6);
        return;
      }
  }
}

void MR_CALL 
mercury__bitmap__unsafe_set_bits_5_p_0(
  MR_Integer FirstBit_6,
  MR_Integer NumBits_7,
  MR_Integer Bits_8,
  MR_Box STATE_VARIABLE_BM_0_13,
  MR_Box * STATE_VARIABLE_BM_14)
{
  MR_bool succeeded;
  MR_Integer LastBit_10;
  MR_Integer LastByteIndex_11;
  MR_Integer LastBitIndex_12;
  MR_Integer Var_15 = (MR_Integer) ((MR_Unsigned) FirstBit_6 + (MR_Unsigned) NumBits_7);

  LastBit_10 = (MR_Integer) ((MR_Unsigned) Var_15 - (MR_Unsigned) 1);
  succeeded = (LastBit_10 < (MR_Integer) 0);
  if (succeeded)
    LastByteIndex_11 = (MR_Integer) -1;
  else
    LastByteIndex_11 = (LastBit_10 / (MR_Integer) 8);
  LastBitIndex_12 = (LastBit_10 % (MR_Integer) 8);
  mercury__bitmap__set_bits_in_bytes_6_p_0(LastByteIndex_11, LastBitIndex_12, NumBits_7, Bits_8, STATE_VARIABLE_BM_0_13, STATE_VARIABLE_BM_14);
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
      MR_Integer FirstBitInByte_27;
      MR_Integer Byte0_28;
      MR_Integer Byte_29;
      MR_Integer Var_30 = (MR_Integer) ((MR_Unsigned) LastBitIndex_8 - (MR_Unsigned) RemainingBitsInByte_12);
      MR_Integer LastBit_32;
      MR_Integer Shift_33;
      MR_Integer Mask_34;
      MR_Integer BitsToSet_35;
      MR_Integer Var_36;
      MR_Integer Var_38;
      MR_Integer Var_41;
      MR_Integer Var_42;
      MR_Integer Var_43;
      MR_Integer Var_44;
      MR_Integer BitMask_45;
      MR_Integer Var_47;
      MR_Integer Var_49;
      MR_Integer next_value_of_LastByteIndex_7;
      MR_Integer next_value_of_LastBitIndex_8;
      MR_Integer next_value_of_NumBits_9;
      MR_Integer next_value_of_Bits_10;
      MR_Box next_value_of_STATE_VARIABLE_BM_0_14;

      FirstBitInByte_27 = (MR_Integer) ((MR_Unsigned) Var_30 + (MR_Unsigned) 1);
{
#define MR_PROC_LABEL mercury__bitmap__set_bits_in_bytes_6_p_0

	MR_BitmapPtr BM;
	MR_Integer N;
	MR_Integer Byte;

	BM = (MR_BitmapPtr)STATE_VARIABLE_BM_0_14 ;
	N = LastByteIndex_7 ;
		{

    Byte = (MR_Integer) BM->elements[N];


		;}
#undef MR_PROC_LABEL
	Byte0_28  = Byte;
}
      Var_36 = (MR_Integer) ((MR_Unsigned) FirstBitInByte_27 + (MR_Unsigned) RemainingBitsInByte_12);
      LastBit_32 = (MR_Integer) ((MR_Unsigned) Var_36 - (MR_Unsigned) 1);
      Var_38 = (MR_Integer) ((MR_Unsigned) 8 - (MR_Unsigned) 1);
      Shift_33 = (MR_Integer) ((MR_Unsigned) Var_38 - (MR_Unsigned) LastBit_32);
      Var_47 = (MR_Integer) ((MR_Unsigned) RemainingBitsInByte_12 - (MR_Unsigned) 1);
      BitMask_45 = ((MR_Integer) 1 << Var_47);
      Var_49 = (MR_Integer) ((MR_Unsigned) BitMask_45 - (MR_Unsigned) 1);
      Mask_34 = (BitMask_45 | Var_49);
      BitsToSet_35 = (Mask_34 & Bits_10);
      Var_43 = (Mask_34 << Shift_33);
      Var_42 = ~(Var_43);
      Var_41 = (Byte0_28 & Var_42);
      Var_44 = (BitsToSet_35 << Shift_33);
      Byte_29 = (Var_41 | Var_44);
{
#define MR_PROC_LABEL mercury__bitmap__set_bits_in_bytes_6_p_0

	MR_Integer N;
	MR_Integer Byte;
	MR_BitmapPtr BM0;
	MR_BitmapPtr BM;

	N = LastByteIndex_7 ;
	Byte = Byte_29 ;
	BM0 = (MR_BitmapPtr)STATE_VARIABLE_BM_0_14 ;
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
      {
        MR_Integer FirstBitInByte_51;
        MR_Integer Byte0_52;
        MR_Integer Byte_53;
        MR_Integer Var_54 = (MR_Integer) ((MR_Unsigned) LastBitIndex_8 - (MR_Unsigned) NumBits_9);
        MR_Integer LastBit_56;
        MR_Integer Shift_57;
        MR_Integer Mask_58;
        MR_Integer BitsToSet_59;
        MR_Integer Var_60;
        MR_Integer Var_62;
        MR_Integer Var_65;
        MR_Integer Var_66;
        MR_Integer Var_67;
        MR_Integer Var_68;
        MR_Integer BitMask_69;
        MR_Integer Var_71;
        MR_Integer Var_73;

        FirstBitInByte_51 = (MR_Integer) ((MR_Unsigned) Var_54 + (MR_Unsigned) 1);
{
#define MR_PROC_LABEL mercury__bitmap__set_bits_in_bytes_6_p_0

	MR_BitmapPtr BM;
	MR_Integer N;
	MR_Integer Byte;

	BM = (MR_BitmapPtr)STATE_VARIABLE_BM_0_14 ;
	N = LastByteIndex_7 ;
		{

    Byte = (MR_Integer) BM->elements[N];


		;}
#undef MR_PROC_LABEL
	Byte0_52  = Byte;
}
        Var_60 = (MR_Integer) ((MR_Unsigned) FirstBitInByte_51 + (MR_Unsigned) NumBits_9);
        LastBit_56 = (MR_Integer) ((MR_Unsigned) Var_60 - (MR_Unsigned) 1);
        Var_62 = (MR_Integer) ((MR_Unsigned) 8 - (MR_Unsigned) 1);
        Shift_57 = (MR_Integer) ((MR_Unsigned) Var_62 - (MR_Unsigned) LastBit_56);
        Var_71 = (MR_Integer) ((MR_Unsigned) NumBits_9 - (MR_Unsigned) 1);
        BitMask_69 = ((MR_Integer) 1 << Var_71);
        Var_73 = (MR_Integer) ((MR_Unsigned) BitMask_69 - (MR_Unsigned) 1);
        Mask_58 = (BitMask_69 | Var_73);
        BitsToSet_59 = (Mask_58 & Bits_10);
        Var_67 = (Mask_58 << Shift_57);
        Var_66 = ~(Var_67);
        Var_65 = (Byte0_52 & Var_66);
        Var_68 = (BitsToSet_59 << Shift_57);
        Byte_53 = (Var_65 | Var_68);
{
#define MR_PROC_LABEL mercury__bitmap__set_bits_in_bytes_6_p_0

	MR_Integer N;
	MR_Integer Byte;
	MR_BitmapPtr BM0;
	MR_BitmapPtr BM;

	N = LastByteIndex_7 ;
	Byte = Byte_53 ;
	BM0 = (MR_BitmapPtr)STATE_VARIABLE_BM_0_14 ;
		{

    BM = BM0;
    BM->elements[N] = (MR_uint_least8_t) Byte;


		;}
#undef MR_PROC_LABEL
	*STATE_VARIABLE_BM_15  = (MR_Box) BM;
}
      }
      else
        *STATE_VARIABLE_BM_15 = STATE_VARIABLE_BM_0_14;
    }
    break;
  }
}

MR_Integer MR_CALL 
mercury__bitmap__unsafe_bits_3_f_0(
  MR_Integer FirstBit_5,
  MR_Integer NumBits_6,
  MR_Box BM_7)
{
  MR_Integer Word_8;

  Word_8 = mercury__bitmap__unsafe_get_bits_3_f_0(BM_7, FirstBit_5, NumBits_6);
  return Word_8;
}

MR_Integer MR_CALL 
mercury__bitmap__bits_3_f_0(
  MR_Integer FirstBit_5,
  MR_Integer NumBits_6,
  MR_Box BM_7)
{
  MR_bool succeeded = (FirstBit_5 >= (MR_Integer) 0);
  MR_Integer Word_8;
  MR_Integer Var_10;
  MR_Integer Var_11;
  MR_Integer Var_12;
  MR_Integer Var_19;
  MR_Integer Var_20;

  if (succeeded)
  {
    Var_10 = (MR_Integer) 0;
    succeeded = (NumBits_6 >= Var_10);
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
      succeeded = (NumBits_6 <= Var_11);
      if (succeeded)
      {
        Var_12 = (MR_Integer) ((MR_Unsigned) FirstBit_5 + (MR_Unsigned) NumBits_6);
        Var_19 = (MR_Integer) 0;
        succeeded = (Var_19 <= Var_12);
        if (succeeded)
        {
{
#define MR_PROC_LABEL mercury__bitmap__bits_3_f_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr)BM_7 ;
		{

    NumBits = BM->num_bits;


		;}
#undef MR_PROC_LABEL
	Var_20  = NumBits;
}
          succeeded = (Var_12 <= Var_20);
        }
      }
    }
  }
  if (succeeded)
    Word_8 = mercury__bitmap__unsafe_get_bits_3_f_0(BM_7, FirstBit_5, NumBits_6);
  else
  {
    succeeded = (NumBits_6 < (MR_Integer) 0);
    if (!(succeeded))
    {
      MR_Integer Var_14;

{
#define MR_PROC_LABEL mercury__bitmap__bits_3_f_0

	MR_Integer Bits;

		{

    Bits = ML_BITS_PER_INT;


		;}
#undef MR_PROC_LABEL
	Var_14  = Bits;
}
      succeeded = (NumBits_6 > Var_14);
    }
    if (succeeded)
      mercury__exception__throw_1_p_0((MR_Word) (&mercury__bitmap__bitmap__type_ctor_info_bitmap_error_0), ((MR_Box) (((MR_Box) ((MR_String) "bitmap.bits: number of bits must be between 0 and \140int.bits_per_int\'.")))));
    else
      mercury__bitmap__throw_bit_bounds_error_3_p_0(BM_7, (MR_String) "bitmap.bits", FirstBit_5);
  }
  return Word_8;
}

MR_Integer MR_CALL 
mercury__bitmap__get_bits_3_f_0(
  MR_Box BM_5,
  MR_Integer FirstBit_6,
  MR_Integer NumBits_7)
{
  MR_bool succeeded = (FirstBit_6 >= (MR_Integer) 0);
  MR_Integer Word_8;
  MR_Integer Var_10;
  MR_Integer Var_11;
  MR_Integer Var_12;
  MR_Integer Var_19;
  MR_Integer Var_20;

  if (succeeded)
  {
    Var_10 = (MR_Integer) 0;
    succeeded = (NumBits_7 >= Var_10);
    if (succeeded)
    {
{
#define MR_PROC_LABEL mercury__bitmap__get_bits_3_f_0

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
        Var_19 = (MR_Integer) 0;
        succeeded = (Var_19 <= Var_12);
        if (succeeded)
        {
{
#define MR_PROC_LABEL mercury__bitmap__get_bits_3_f_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr)BM_5 ;
		{

    NumBits = BM->num_bits;


		;}
#undef MR_PROC_LABEL
	Var_20  = NumBits;
}
          succeeded = (Var_12 <= Var_20);
        }
      }
    }
  }
  if (succeeded)
    Word_8 = mercury__bitmap__unsafe_get_bits_3_f_0(BM_5, FirstBit_6, NumBits_7);
  else
  {
    succeeded = (NumBits_7 < (MR_Integer) 0);
    if (!(succeeded))
    {
      MR_Integer Var_14;

{
#define MR_PROC_LABEL mercury__bitmap__get_bits_3_f_0

	MR_Integer Bits;

		{

    Bits = ML_BITS_PER_INT;


		;}
#undef MR_PROC_LABEL
	Var_14  = Bits;
}
      succeeded = (NumBits_7 > Var_14);
    }
    if (succeeded)
      mercury__exception__throw_1_p_0((MR_Word) (&mercury__bitmap__bitmap__type_ctor_info_bitmap_error_0), ((MR_Box) (((MR_Box) ((MR_String) "bitmap.get_bits: number of bits must be between 0 and \140int.bits_per_int\'.")))));
    else
      mercury__bitmap__throw_bit_bounds_error_3_p_0(BM_5, (MR_String) "bitmap.get_bits", FirstBit_6);
  }
  return Word_8;
}

MR_Integer MR_CALL 
mercury__bitmap__unsafe_get_bits_3_f_0(
  MR_Box BM_5,
  MR_Integer FirstBit_6,
  MR_Integer NumBits_7)
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
      MR_Integer BitsThisByte_24;
      MR_Integer Var_25;
      MR_Integer Var_26;
      MR_Integer LastBit_27;
      MR_Integer Shift_28;
      MR_Integer Var_29;
      MR_Integer Var_31;
      MR_Integer Var_34;
      MR_Integer Var_35;
      MR_Integer BitMask_36;
      MR_Integer Var_38;
      MR_Integer Var_40;
      MR_Integer next_value_of_FirstByteIndex_7;
      MR_Integer next_value_of_NumBits_9;
      MR_Integer next_value_of_STATE_VARIABLE_Bits_0_14;

{
#define MR_PROC_LABEL mercury__bitmap__extract_bits_from_bytes_6_p_0

	MR_BitmapPtr BM;
	MR_Integer N;
	MR_Integer Byte;

	BM = (MR_BitmapPtr)BM_10 ;
	N = FirstByteIndex_7 ;
		{

    Byte = (MR_Integer) BM->elements[N];


		;}
#undef MR_PROC_LABEL
	Var_25  = Byte;
}
      Var_29 = (MR_Integer) ((MR_Unsigned) FirstBitIndex_8 + (MR_Unsigned) RemainingBitsInByte_12);
      LastBit_27 = (MR_Integer) ((MR_Unsigned) Var_29 - (MR_Unsigned) 1);
      Var_31 = (MR_Integer) ((MR_Unsigned) 8 - (MR_Unsigned) 1);
      Shift_28 = (MR_Integer) ((MR_Unsigned) Var_31 - (MR_Unsigned) LastBit_27);
      Var_34 = (Var_25 >> Shift_28);
      Var_38 = (MR_Integer) ((MR_Unsigned) RemainingBitsInByte_12 - (MR_Unsigned) 1);
      BitMask_36 = ((MR_Integer) 1 << Var_38);
      Var_40 = (MR_Integer) ((MR_Unsigned) BitMask_36 - (MR_Unsigned) 1);
      Var_35 = (BitMask_36 | Var_40);
      BitsThisByte_24 = (Var_34 & Var_35);
      Var_26 = (STATE_VARIABLE_Bits_0_14 << RemainingBitsInByte_12);
      STATE_VARIABLE_Bits_17_17 = (Var_26 | BitsThisByte_24);
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
      {
        MR_Integer BitsThisByte_42;
        MR_Integer Var_43;
        MR_Integer Var_44;
        MR_Integer LastBit_45;
        MR_Integer Shift_46;
        MR_Integer Var_47;
        MR_Integer Var_49;
        MR_Integer Var_52;
        MR_Integer Var_53;
        MR_Integer BitMask_54;
        MR_Integer Var_56;
        MR_Integer Var_58;

{
#define MR_PROC_LABEL mercury__bitmap__extract_bits_from_bytes_6_p_0

	MR_BitmapPtr BM;
	MR_Integer N;
	MR_Integer Byte;

	BM = (MR_BitmapPtr)BM_10 ;
	N = FirstByteIndex_7 ;
		{

    Byte = (MR_Integer) BM->elements[N];


		;}
#undef MR_PROC_LABEL
	Var_43  = Byte;
}
        Var_47 = (MR_Integer) ((MR_Unsigned) FirstBitIndex_8 + (MR_Unsigned) NumBits_9);
        LastBit_45 = (MR_Integer) ((MR_Unsigned) Var_47 - (MR_Unsigned) 1);
        Var_49 = (MR_Integer) ((MR_Unsigned) 8 - (MR_Unsigned) 1);
        Shift_46 = (MR_Integer) ((MR_Unsigned) Var_49 - (MR_Unsigned) LastBit_45);
        Var_52 = (Var_43 >> Shift_46);
        Var_56 = (MR_Integer) ((MR_Unsigned) NumBits_9 - (MR_Unsigned) 1);
        BitMask_54 = ((MR_Integer) 1 << Var_56);
        Var_58 = (MR_Integer) ((MR_Unsigned) BitMask_54 - (MR_Unsigned) 1);
        Var_53 = (BitMask_54 | Var_58);
        BitsThisByte_42 = (Var_52 & Var_53);
        Var_44 = (STATE_VARIABLE_Bits_0_14 << NumBits_9);
        *STATE_VARIABLE_Bits_15 = (Var_44 | BitsThisByte_42);
      }
      else
        *STATE_VARIABLE_Bits_15 = STATE_VARIABLE_Bits_0_14;
    }
    break;
  }
}

MR_Box MR_CALL 
mercury__bitmap__f_117_110_115_97_102_101_95_98_105_116_32_58_61_3_f_0(
  MR_Integer I_5,
  MR_Box STATE_VARIABLE_BM_0_8,
  MR_Word B_7)
{
  MR_Box STATE_VARIABLE_BM_9;

  switch (B_7) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      mercury__bitmap__unsafe_clear_3_p_0(I_5, STATE_VARIABLE_BM_0_8, &STATE_VARIABLE_BM_9);
      break;
    case (MR_Integer) 1:
      mercury__bitmap__unsafe_set_3_p_0(I_5, STATE_VARIABLE_BM_0_8, &STATE_VARIABLE_BM_9);
      break;
  }
  return STATE_VARIABLE_BM_9;
}

void MR_CALL 
mercury__bitmap__unsafe_set_bit_4_p_0(
  MR_Integer I_1,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_BM_0_3,
  MR_Box * STATE_VARIABLE_BM_4)
{
  switch (HeadVar__2_2) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      mercury__bitmap__unsafe_clear_3_p_0(I_1, STATE_VARIABLE_BM_0_3, STATE_VARIABLE_BM_4);
      break;
    case (MR_Integer) 1:
      mercury__bitmap__unsafe_set_3_p_0(I_1, STATE_VARIABLE_BM_0_3, STATE_VARIABLE_BM_4);
      break;
  }
}

MR_Box MR_CALL 
mercury__bitmap__f_98_105_116_32_58_61_3_f_0(
  MR_Integer I_5,
  MR_Box STATE_VARIABLE_BM_0_8,
  MR_Word B_7)
{
  MR_bool succeeded = ((MR_Integer) 0 <= I_5);
  MR_Box STATE_VARIABLE_BM_9;
  MR_Integer Var_13;

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
	Var_13  = NumBits;
}
    succeeded = (I_5 < Var_13);
  }
  if (succeeded)
    switch (B_7) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        mercury__bitmap__unsafe_clear_3_p_0(I_5, STATE_VARIABLE_BM_0_8, &STATE_VARIABLE_BM_9);
        break;
      case (MR_Integer) 1:
        mercury__bitmap__unsafe_set_3_p_0(I_5, STATE_VARIABLE_BM_0_8, &STATE_VARIABLE_BM_9);
        break;
    }
  else
    mercury__bitmap__throw_bit_bounds_error_3_p_0(STATE_VARIABLE_BM_0_8, (MR_String) "bitmap.\'bit :=\'", I_5);
  return STATE_VARIABLE_BM_9;
}

void MR_CALL 
mercury__bitmap__set_bit_4_p_0(
  MR_Integer I_5,
  MR_Word B_6,
  MR_Box STATE_VARIABLE_BM_0_8,
  MR_Box * STATE_VARIABLE_BM_9)
{
  MR_bool succeeded = ((MR_Integer) 0 <= I_5);
  MR_Integer Var_13;

  if (succeeded)
  {
{
#define MR_PROC_LABEL mercury__bitmap__set_bit_4_p_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr)STATE_VARIABLE_BM_0_8 ;
		{

    NumBits = BM->num_bits;


		;}
#undef MR_PROC_LABEL
	Var_13  = NumBits;
}
    succeeded = (I_5 < Var_13);
  }
  if (succeeded)
    switch (B_6) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        mercury__bitmap__unsafe_clear_3_p_0(I_5, STATE_VARIABLE_BM_0_8, STATE_VARIABLE_BM_9);
        break;
      case (MR_Integer) 1:
        mercury__bitmap__unsafe_set_3_p_0(I_5, STATE_VARIABLE_BM_0_8, STATE_VARIABLE_BM_9);
        break;
    }
  else
    {
      mercury__bitmap__throw_bit_bounds_error_3_p_0(STATE_VARIABLE_BM_0_8, (MR_String) "bitmap.set_bit", I_5);
      return;
    }
}

void MR_CALL 
mercury__bitmap__unsafe_clear_3_p_0(
  MR_Integer I_4,
  MR_Box BM0_5,
  MR_Box * BM_6)
{
  MR_Integer ByteIndex_7;
  MR_Integer Byte0_8;
  MR_Integer Byte_9;
  MR_Integer Var_10;
  MR_Integer Var_11;
  MR_Integer Var_13;
  MR_Integer Var_14;
  MR_Integer Var_17;

  ByteIndex_7 = mercury__bitmap__det_byte_index_for_bit_1_f_0(I_4);
{
#define MR_PROC_LABEL mercury__bitmap__unsafe_clear_3_p_0

	MR_BitmapPtr BM;
	MR_Integer N;
	MR_Integer Byte;

	BM = (MR_BitmapPtr)BM0_5 ;
	N = ByteIndex_7 ;
		{

    Byte = (MR_Integer) BM->elements[N];


		;}
#undef MR_PROC_LABEL
	Byte0_8  = Byte;
}
  Var_14 = (MR_Integer) ((MR_Unsigned) 8 - (MR_Unsigned) 1);
  Var_17 = (I_4 % (MR_Integer) 8);
  Var_13 = (MR_Integer) ((MR_Unsigned) Var_14 - (MR_Unsigned) Var_17);
  Var_11 = ((MR_Integer) 1 << Var_13);
  Var_10 = ~(Var_11);
  Byte_9 = (Byte0_8 & Var_10);
{
#define MR_PROC_LABEL mercury__bitmap__unsafe_clear_3_p_0

	MR_Integer N;
	MR_Integer Byte;
	MR_BitmapPtr BM0;
	MR_BitmapPtr BM;

	N = ByteIndex_7 ;
	Byte = Byte_9 ;
	BM0 = (MR_BitmapPtr)BM0_5 ;
		{

    BM = BM0;
    BM->elements[N] = (MR_uint_least8_t) Byte;


		;}
#undef MR_PROC_LABEL
	*BM_6  = (MR_Box) BM;
}
}

void MR_CALL 
mercury__bitmap__unsafe_set_3_p_0(
  MR_Integer I_4,
  MR_Box BM0_5,
  MR_Box * BM_6)
{
  MR_Integer ByteIndex_7;
  MR_Integer Byte0_8;
  MR_Integer Byte_9;
  MR_Integer Var_10;
  MR_Integer Var_12;
  MR_Integer Var_13;
  MR_Integer Var_16;

  ByteIndex_7 = mercury__bitmap__det_byte_index_for_bit_1_f_0(I_4);
{
#define MR_PROC_LABEL mercury__bitmap__unsafe_set_3_p_0

	MR_BitmapPtr BM;
	MR_Integer N;
	MR_Integer Byte;

	BM = (MR_BitmapPtr)BM0_5 ;
	N = ByteIndex_7 ;
		{

    Byte = (MR_Integer) BM->elements[N];


		;}
#undef MR_PROC_LABEL
	Byte0_8  = Byte;
}
  Var_13 = (MR_Integer) ((MR_Unsigned) 8 - (MR_Unsigned) 1);
  Var_16 = (I_4 % (MR_Integer) 8);
  Var_12 = (MR_Integer) ((MR_Unsigned) Var_13 - (MR_Unsigned) Var_16);
  Var_10 = ((MR_Integer) 1 << Var_12);
  Byte_9 = (Byte0_8 | Var_10);
{
#define MR_PROC_LABEL mercury__bitmap__unsafe_set_3_p_0

	MR_Integer N;
	MR_Integer Byte;
	MR_BitmapPtr BM0;
	MR_BitmapPtr BM;

	N = ByteIndex_7 ;
	Byte = Byte_9 ;
	BM0 = (MR_BitmapPtr)BM0_5 ;
		{

    BM = BM0;
    BM->elements[N] = (MR_uint_least8_t) Byte;


		;}
#undef MR_PROC_LABEL
	*BM_6  = (MR_Box) BM;
}
}

MR_Word MR_CALL 
mercury__bitmap__unsafe_bit_2_f_0(
  MR_Integer I_4,
  MR_Box BM_5)
{
  MR_bool succeeded;
  MR_Word B_6;

  succeeded = mercury__bitmap__unsafe_is_clear_2_p_0(BM_5, I_4);
  succeeded = !(succeeded);
  if (succeeded)
    B_6 = (MR_Integer) 1;
  else
    B_6 = (MR_Integer) 0;
  return B_6;
}

MR_Word MR_CALL 
mercury__bitmap__unsafe_get_bit_2_f_0(
  MR_Box BM_4,
  MR_Integer I_5)
{
  MR_bool succeeded;
  MR_Word B_6;

  succeeded = mercury__bitmap__unsafe_is_clear_2_p_0(BM_4, I_5);
  succeeded = !(succeeded);
  if (succeeded)
    B_6 = (MR_Integer) 1;
  else
    B_6 = (MR_Integer) 0;
  return B_6;
}

MR_Word MR_CALL 
mercury__bitmap__bit_2_f_0(
  MR_Integer I_4,
  MR_Box BM_5)
{
  MR_bool succeeded = ((MR_Integer) 0 <= I_4);
  MR_Word B_6;
  MR_Integer Var_9;

  if (succeeded)
  {
{
#define MR_PROC_LABEL mercury__bitmap__bit_2_f_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr)BM_5 ;
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
    succeeded = mercury__bitmap__unsafe_is_clear_2_p_0(BM_5, I_4);
    succeeded = !(succeeded);
    if (succeeded)
      B_6 = (MR_Integer) 1;
    else
      B_6 = (MR_Integer) 0;
  }
  else
    mercury__bitmap__throw_bit_bounds_error_3_p_0(BM_5, (MR_String) "bitmap.bit", I_4);
  return B_6;
}

MR_Word MR_CALL 
mercury__bitmap__get_bit_2_f_0(
  MR_Box BM_4,
  MR_Integer I_5)
{
  MR_bool succeeded = ((MR_Integer) 0 <= I_5);
  MR_Word B_6;
  MR_Integer Var_9;

  if (succeeded)
  {
{
#define MR_PROC_LABEL mercury__bitmap__get_bit_2_f_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr)BM_4 ;
		{

    NumBits = BM->num_bits;


		;}
#undef MR_PROC_LABEL
	Var_9  = NumBits;
}
    succeeded = (I_5 < Var_9);
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
    mercury__bitmap__throw_bit_bounds_error_3_p_0(BM_4, (MR_String) "bitmap.get_bit", I_5);
  return B_6;
}

void MR_CALL 
mercury__bitmap__throw_bit_bounds_error_3_p_0(
  MR_Box BM_4,
  MR_String Pred_5,
  MR_Integer BitIndex_6)
{
  MR_String Msg_7;
  MR_Integer Var_15;
  MR_String Var_18;
  MR_String Var_25;
  MR_String Var_27;
  MR_String Var_28;
  MR_String Var_35;
  MR_String Var_37;
  MR_Word Var_42;

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
  mercury__string__format__format_signed_int_component_5_p_0((MR_Word) (&mercury__bitmap_scalar_common_5[0]), (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), Var_15, &Var_18);
  mercury__string__append_3_p_2(Var_18, (MR_String) ").", &Var_25);
  mercury__string__append_3_p_2((MR_String) " is out of bounds [0, ", Var_25, &Var_27);
  mercury__string__format__format_signed_int_component_5_p_0((MR_Word) (&mercury__bitmap_scalar_common_5[0]), (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), BitIndex_6, &Var_28);
  mercury__string__append_3_p_2(Var_28, Var_27, &Var_35);
  mercury__string__append_3_p_2((MR_String) ": bit index ", Var_35, &Var_37);
  mercury__string__append_3_p_2(Pred_5, Var_37, &Msg_7);
  Var_42 = (MR_Word) (Msg_7);
  {
    mercury__exception__throw_1_p_0((MR_Word) (&mercury__bitmap__bitmap__type_ctor_info_bitmap_error_0), ((MR_Box) (Var_42)));
    return;
  }
}

MR_bool MR_CALL 
mercury__bitmap__unsafe_is_clear_2_p_0(
  MR_Box BM_3,
  MR_Integer I_4)
{
  MR_bool succeeded;
  MR_Integer Var_5;
  MR_Integer Var_6;
  MR_Integer Var_7;
  MR_Integer Var_8;
  MR_Integer Var_10;
  MR_Integer Var_11;
  MR_Integer Var_14;

  Var_7 = mercury__bitmap__det_byte_index_for_bit_1_f_0(I_4);
{
#define MR_PROC_LABEL mercury__bitmap__unsafe_is_clear_2_p_0

	MR_BitmapPtr BM;
	MR_Integer N;
	MR_Integer Byte;

	BM = (MR_BitmapPtr)BM_3 ;
	N = Var_7 ;
		{

    Byte = (MR_Integer) BM->elements[N];


		;}
#undef MR_PROC_LABEL
	Var_6  = Byte;
}
  Var_11 = (MR_Integer) ((MR_Unsigned) 8 - (MR_Unsigned) 1);
  Var_14 = (I_4 % (MR_Integer) 8);
  Var_10 = (MR_Integer) ((MR_Unsigned) Var_11 - (MR_Unsigned) Var_14);
  Var_8 = ((MR_Integer) 1 << Var_10);
  Var_5 = (Var_6 & Var_8);
  succeeded = (Var_5 == (MR_Integer) 0);
  return succeeded;
}

MR_bool MR_CALL 
mercury__bitmap__is_empty_1_p_0(
  MR_Box BM_2)
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

MR_Integer MR_CALL 
mercury__bitmap__bits_per_byte_0_f_0(void)
{
  return (MR_Integer) 8;
}

MR_Integer MR_CALL 
mercury__bitmap__det_num_bytes_1_f_0(
  MR_Box BM_3)
{
  MR_bool succeeded;
  MR_Integer Bytes_4;
  MR_Integer Bytes0_5;
  MR_Integer NumBits_7;
  MR_Integer Var_8;
  MR_Integer Var_10;

{
#define MR_PROC_LABEL mercury__bitmap__det_num_bytes_1_f_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr)BM_3 ;
		{

    NumBits = BM->num_bits;


		;}
#undef MR_PROC_LABEL
	NumBits_7  = NumBits;
}
  Var_8 = (NumBits_7 % (MR_Integer) 8);
  succeeded = (Var_8 == (MR_Integer) 0);
  if (succeeded)
  {
    Var_10 = (MR_Integer) 8;
    Bytes0_5 = (NumBits_7 / Var_10);
    succeeded = MR_TRUE;
  }
  if (succeeded)
    Bytes_4 = Bytes0_5;
  else
    mercury__exception__throw_1_p_0((MR_Word) (&mercury__bitmap__bitmap__type_ctor_info_bitmap_error_0), ((MR_Box) (((MR_Box) ((MR_String) "bitmap.det_num_bytes: bitmap has a partial final byte")))));
  return Bytes_4;
}

MR_bool MR_CALL 
mercury__bitmap__num_bytes_2_p_0(
  MR_Box BM_3,
  MR_Integer * Bytes_4)
{
  MR_bool succeeded;
  MR_Integer NumBits_5;
  MR_Integer Var_6;
  MR_Integer Var_8;

{
#define MR_PROC_LABEL mercury__bitmap__num_bytes_2_p_0

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

MR_bool MR_CALL 
mercury__bitmap__num_bytes_1_f_0(
  MR_Box BM_3,
  MR_Integer * Bytes_4)
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

MR_Integer MR_CALL 
mercury__bitmap__num_bits_1_f_0(
  MR_Box BM_1)
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

MR_bool MR_CALL 
mercury__bitmap__byte_in_range_2_p_0(
  MR_Box BM_3,
  MR_Integer I_4)
{
  MR_bool succeeded;
  MR_Integer Var_5;
  MR_Integer Var_6;
  MR_Integer Var_7 = (MR_Integer) ((MR_Unsigned) I_4 * (MR_Unsigned) 8);
  MR_Integer Var_12;

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
	Var_12  = NumBits;
}
    succeeded = (Var_5 < Var_12);
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__bitmap__in_range_2_p_0(
  MR_Box BM_3,
  MR_Integer I_4)
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

MR_Box MR_CALL 
mercury__bitmap__init_1_f_0(
  MR_Integer N_3)
{
  MR_Box HeadVar__2_2;

  HeadVar__2_2 = mercury__bitmap__init_2_f_0(N_3, (MR_Integer) 0);
  return HeadVar__2_2;
}

MR_Box MR_CALL 
mercury__bitmap__init_2_f_0(
  MR_Integer N_4,
  MR_Word B_5)
{
  MR_bool succeeded = (N_4 < (MR_Integer) 0);
  MR_Box BM_6;

  if (succeeded)
    mercury__exception__throw_1_p_0((MR_Word) (&mercury__bitmap__bitmap__type_ctor_info_bitmap_error_0), ((MR_Box) (((MR_Box) ((MR_String) "bitmap.init: negative size")))));
  else
  {
    MR_Integer X_7;
    MR_Box BM0_8;
    MR_Box BM1_9;
    MR_Integer Var_16;
    MR_Integer Var_17;
    MR_Integer Var_21;
    MR_Integer Var_23;

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
	BM0_8  = (MR_Box) BM;
}
    Var_17 = (MR_Integer) ((MR_Unsigned) N_4 - (MR_Unsigned) 1);
    succeeded = (Var_17 < (MR_Integer) 0);
    if (succeeded)
      Var_16 = (MR_Integer) -1;
    else
      Var_16 = (Var_17 / (MR_Integer) 8);
    mercury__bitmap__initialize_bitmap_bytes_5_p_0((MR_Integer) 0, Var_16, X_7, BM0_8, &BM1_9);
{
#define MR_PROC_LABEL mercury__bitmap__init_2_f_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr)BM1_9 ;
		{

    NumBits = BM->num_bits;


		;}
#undef MR_PROC_LABEL
	Var_23  = NumBits;
}
    Var_21 = (MR_Integer) ((MR_Unsigned) Var_23 - (MR_Unsigned) 1);
    mercury__bitmap__set_trailing_bits_in_byte_4_p_0(Var_21, (MR_Integer) 0, BM1_9, &BM_6);
  }
  return BM_6;
}

static void MR_CALL 
mercury__bitmap__initialize_bitmap_bytes_5_p_0(
  MR_Integer ByteIndex_6,
  MR_Integer LastByteIndex_7,
  MR_Integer Init_8,
  MR_Box STATE_VARIABLE_BM_0_10,
  MR_Box * STATE_VARIABLE_BM_11)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (ByteIndex_6 > LastByteIndex_7);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
      *STATE_VARIABLE_BM_11 = STATE_VARIABLE_BM_0_10;
    else
    {
      MR_Box STATE_VARIABLE_BM_12_12;
      MR_Integer Var_13;
      MR_Integer next_value_of_ByteIndex_6;
      MR_Box next_value_of_STATE_VARIABLE_BM_0_10;

{
#define MR_PROC_LABEL mercury__bitmap__initialize_bitmap_bytes_5_p_0

	MR_Integer N;
	MR_Integer Byte;
	MR_BitmapPtr BM0;
	MR_BitmapPtr BM;

	N = ByteIndex_6 ;
	Byte = Init_8 ;
	BM0 = (MR_BitmapPtr)STATE_VARIABLE_BM_0_10 ;
		{

    BM = BM0;
    BM->elements[N] = (MR_uint_least8_t) Byte;


		;}
#undef MR_PROC_LABEL
	STATE_VARIABLE_BM_12_12  = (MR_Box) BM;
}
      Var_13 = (MR_Integer) ((MR_Unsigned) ByteIndex_6 + (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_ByteIndex_6 = Var_13;
      next_value_of_STATE_VARIABLE_BM_0_10 = STATE_VARIABLE_BM_12_12;
      ByteIndex_6 = next_value_of_ByteIndex_6;
      STATE_VARIABLE_BM_0_10 = next_value_of_STATE_VARIABLE_BM_0_10;
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__bitmap__set_trailing_bits_in_byte_4_p_0(
  MR_Integer Bit_5,
  MR_Integer Initializer_6,
  MR_Box STATE_VARIABLE_BM_0_14,
  MR_Box * STATE_VARIABLE_BM_15)
{
  MR_bool succeeded;
  MR_Integer FirstTrailingBit_8 = (MR_Integer) ((MR_Unsigned) Bit_5 + (MR_Unsigned) 1);
  MR_Integer FirstTrailingBitIndex_9 = (FirstTrailingBit_8 % (MR_Integer) 8);

  succeeded = (FirstTrailingBitIndex_9 > (MR_Integer) 0);
  if (succeeded)
  {
    MR_Integer ByteIndex_10;
    MR_Integer NumBitsToSet_11;
    MR_Integer Byte0_12;
    MR_Integer Byte_13;
    MR_Integer LastBit_20;
    MR_Integer Shift_21;
    MR_Integer Mask_22;
    MR_Integer BitsToSet_23;
    MR_Integer Var_24;
    MR_Integer Var_26;
    MR_Integer Var_29;
    MR_Integer Var_30;
    MR_Integer Var_31;
    MR_Integer Var_32;
    MR_Integer BitMask_33;
    MR_Integer Var_35;
    MR_Integer Var_37;

    ByteIndex_10 = mercury__bitmap__det_byte_index_for_bit_1_f_0(FirstTrailingBit_8);
    NumBitsToSet_11 = (MR_Integer) ((MR_Unsigned) 8 - (MR_Unsigned) FirstTrailingBitIndex_9);
{
#define MR_PROC_LABEL mercury__bitmap__set_trailing_bits_in_byte_4_p_0

	MR_BitmapPtr BM;
	MR_Integer N;
	MR_Integer Byte;

	BM = (MR_BitmapPtr)STATE_VARIABLE_BM_0_14 ;
	N = ByteIndex_10 ;
		{

    Byte = (MR_Integer) BM->elements[N];


		;}
#undef MR_PROC_LABEL
	Byte0_12  = Byte;
}
    Var_24 = (MR_Integer) ((MR_Unsigned) FirstTrailingBitIndex_9 + (MR_Unsigned) NumBitsToSet_11);
    LastBit_20 = (MR_Integer) ((MR_Unsigned) Var_24 - (MR_Unsigned) 1);
    Var_26 = (MR_Integer) ((MR_Unsigned) 8 - (MR_Unsigned) 1);
    Shift_21 = (MR_Integer) ((MR_Unsigned) Var_26 - (MR_Unsigned) LastBit_20);
    Var_35 = (MR_Integer) ((MR_Unsigned) NumBitsToSet_11 - (MR_Unsigned) 1);
    BitMask_33 = ((MR_Integer) 1 << Var_35);
    Var_37 = (MR_Integer) ((MR_Unsigned) BitMask_33 - (MR_Unsigned) 1);
    Mask_22 = (BitMask_33 | Var_37);
    BitsToSet_23 = (Mask_22 & Initializer_6);
    Var_31 = (Mask_22 << Shift_21);
    Var_30 = ~(Var_31);
    Var_29 = (Byte0_12 & Var_30);
    Var_32 = (BitsToSet_23 << Shift_21);
    Byte_13 = (Var_29 | Var_32);
{
#define MR_PROC_LABEL mercury__bitmap__set_trailing_bits_in_byte_4_p_0

	MR_Integer N;
	MR_Integer Byte;
	MR_BitmapPtr BM0;
	MR_BitmapPtr BM;

	N = ByteIndex_10 ;
	Byte = Byte_13 ;
	BM0 = (MR_BitmapPtr)STATE_VARIABLE_BM_0_14 ;
		{

    BM = BM0;
    BM->elements[N] = (MR_uint_least8_t) Byte;


		;}
#undef MR_PROC_LABEL
	*STATE_VARIABLE_BM_15  = (MR_Box) BM;
}
  }
  else
    *STATE_VARIABLE_BM_15 = STATE_VARIABLE_BM_0_14;
}

MR_Integer MR_CALL 
mercury__bitmap__det_byte_index_for_bit_1_f_0(
  MR_Integer I_3)
{
  MR_bool succeeded = (I_3 < (MR_Integer) 0);
  MR_Integer ByteIndex_4;

  if (succeeded)
    mercury__require__unexpected_2_p_0((MR_String) "function \140bitmap.det_byte_index_for_bit\'/1", (MR_String) "I < 0");
  else
    ByteIndex_4 = (I_3 / (MR_Integer) 8);
  return ByteIndex_4;
}

static MR_bool MR_CALL 
mercury__bitmap____Unify____bit_index_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__bitmap____Unify____bit_index_0_0(((MR_Integer) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mercury__bitmap____Compare____bit_index_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__bitmap____Compare____bit_index_0_0(&conv0_HeadVar__1_1, ((MR_Integer) (wrapper_arg_2)), ((MR_Integer) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__bitmap____Unify____bit_index_in_byte_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__bitmap____Unify____bit_index_in_byte_0_0(((MR_Integer) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mercury__bitmap____Compare____bit_index_in_byte_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__bitmap____Compare____bit_index_in_byte_0_0(&conv0_HeadVar__1_1, ((MR_Integer) (wrapper_arg_2)), ((MR_Integer) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__bitmap____Unify____bitmap_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__bitmap____Unify____bitmap_0_0(((MR_Box) (wrapper_arg_1)), ((MR_Box) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mercury__bitmap____Compare____bitmap_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__bitmap____Compare____bitmap_0_0(&conv0_HeadVar__1_1, ((MR_Box) (wrapper_arg_2)), ((MR_Box) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__bitmap____Unify____bitmap_error_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__bitmap____Unify____bitmap_error_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mercury__bitmap____Compare____bitmap_error_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__bitmap____Compare____bitmap_error_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__bitmap____Unify____byte_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__bitmap____Unify____byte_0_0(((MR_Integer) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mercury__bitmap____Compare____byte_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__bitmap____Compare____byte_0_0(&conv0_HeadVar__1_1, ((MR_Integer) (wrapper_arg_2)), ((MR_Integer) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__bitmap____Unify____byte_index_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__bitmap____Unify____byte_index_0_0(((MR_Integer) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mercury__bitmap____Compare____byte_index_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__bitmap____Compare____byte_index_0_0(&conv0_HeadVar__1_1, ((MR_Integer) (wrapper_arg_2)), ((MR_Integer) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__bitmap____Unify____copy_direction_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__bitmap____Unify____copy_direction_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mercury__bitmap____Compare____copy_direction_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__bitmap____Compare____copy_direction_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__bitmap____Unify____num_bits_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__bitmap____Unify____num_bits_0_0(((MR_Integer) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mercury__bitmap____Compare____num_bits_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__bitmap____Compare____num_bits_0_0(&conv0_HeadVar__1_1, ((MR_Integer) (wrapper_arg_2)), ((MR_Integer) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__bitmap____Unify____num_bytes_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__bitmap____Unify____num_bytes_0_0(((MR_Integer) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mercury__bitmap____Compare____num_bytes_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__bitmap____Compare____num_bytes_0_0(&conv0_HeadVar__1_1, ((MR_Integer) (wrapper_arg_2)), ((MR_Integer) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__bitmap____Unify____slice_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__bitmap____Unify____slice_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mercury__bitmap____Compare____slice_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__bitmap____Compare____slice_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__bitmap____Unify____word_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__bitmap____Unify____word_0_0(((MR_Integer) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mercury__bitmap____Compare____word_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__bitmap____Compare____word_0_0(&conv0_HeadVar__1_1, ((MR_Integer) (wrapper_arg_2)), ((MR_Integer) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static void MR_CALL 
mercury__bitmap__ClassMethod_for_stream__writer____io__binary_output_stream__arity0__bitmap__slice__arity0__io__state__arity0______stream__put_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  mercury__bitmap__ClassMethod_for_stream__writer____io__binary_output_stream__arity0__bitmap__slice__arity0__io__state__arity0______stream__put_4_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
}

static void MR_CALL 
mercury__bitmap__ClassMethod_for_stream__writer____io__binary_output_stream__arity0__bitmap__bitmap__arity0__io__state__arity0______stream__put_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  mercury__bitmap__ClassMethod_for_stream__writer____io__binary_output_stream__arity0__bitmap__bitmap__arity0__io__state__arity0______stream__put_4_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Box) (wrapper_arg_2)));
}

static void MR_CALL 
mercury__bitmap__ClassMethod_for_stream__bulk_reader____io__binary_input_stream__arity0__int__arity0__bitmap__bitmap__arity0__io__state__arity0__io__error__arity0______stream__bulk_get_9_9_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box * wrapper_arg_7,
  MR_Box wrapper_arg_8,
  MR_Box * wrapper_arg_9)
{
  MR_Box closure = closure_arg;
  MR_Box conv2_HeadVar__5_5;
  MR_Integer conv1_HeadVar__6_6;
  MR_Word conv0_HeadVar__7_7;

  mercury__bitmap__ClassMethod_for_stream__bulk_reader____io__binary_input_stream__arity0__int__arity0__bitmap__bitmap__arity0__io__state__arity0__io__error__arity0______stream__bulk_get_9_9_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)), ((MR_Integer) (wrapper_arg_3)), ((MR_Box) (wrapper_arg_4)), &conv2_HeadVar__5_5, &conv1_HeadVar__6_6, &conv0_HeadVar__7_7);
  *wrapper_arg_5 = ((MR_Box) (conv2_HeadVar__5_5));
  *wrapper_arg_6 = ((MR_Box) (conv1_HeadVar__6_6));
  *wrapper_arg_7 = ((MR_Box) (conv0_HeadVar__7_7));
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
