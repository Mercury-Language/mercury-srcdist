/*
** Automatically generated from `bitmap.m'
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


/* :- module bitmap. */
/* :- implementation. */

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

static MR_bool MR_CALL 
mercury__bitmap____Unify____bit_index_0_0_10001(
  MR_Box mercury__bitmap__wrapper_arg_1,
  MR_Box mercury__bitmap__wrapper_arg_2);

static void MR_CALL 
mercury__bitmap____Compare____bit_index_0_0_10001(
  MR_Box * mercury__bitmap__wrapper_arg_1,
  MR_Box mercury__bitmap__wrapper_arg_2,
  MR_Box mercury__bitmap__wrapper_arg_3);

static MR_bool MR_CALL 
mercury__bitmap____Unify____bit_index_in_byte_0_0_10001(
  MR_Box mercury__bitmap__wrapper_arg_1,
  MR_Box mercury__bitmap__wrapper_arg_2);

static void MR_CALL 
mercury__bitmap____Compare____bit_index_in_byte_0_0_10001(
  MR_Box * mercury__bitmap__wrapper_arg_1,
  MR_Box mercury__bitmap__wrapper_arg_2,
  MR_Box mercury__bitmap__wrapper_arg_3);

static MR_bool MR_CALL 
mercury__bitmap____Unify____bitmap_0_0_10001(
  MR_Box mercury__bitmap__wrapper_arg_1,
  MR_Box mercury__bitmap__wrapper_arg_2);

static void MR_CALL 
mercury__bitmap____Compare____bitmap_0_0_10001(
  MR_Box * mercury__bitmap__wrapper_arg_1,
  MR_Box mercury__bitmap__wrapper_arg_2,
  MR_Box mercury__bitmap__wrapper_arg_3);

static MR_bool MR_CALL 
mercury__bitmap____Unify____bitmap_error_0_0_10001(
  MR_Box mercury__bitmap__wrapper_arg_1,
  MR_Box mercury__bitmap__wrapper_arg_2);

static void MR_CALL 
mercury__bitmap____Compare____bitmap_error_0_0_10001(
  MR_Box * mercury__bitmap__wrapper_arg_1,
  MR_Box mercury__bitmap__wrapper_arg_2,
  MR_Box mercury__bitmap__wrapper_arg_3);

static MR_bool MR_CALL 
mercury__bitmap____Unify____byte_0_0_10001(
  MR_Box mercury__bitmap__wrapper_arg_1,
  MR_Box mercury__bitmap__wrapper_arg_2);

static void MR_CALL 
mercury__bitmap____Compare____byte_0_0_10001(
  MR_Box * mercury__bitmap__wrapper_arg_1,
  MR_Box mercury__bitmap__wrapper_arg_2,
  MR_Box mercury__bitmap__wrapper_arg_3);

static MR_bool MR_CALL 
mercury__bitmap____Unify____byte_index_0_0_10001(
  MR_Box mercury__bitmap__wrapper_arg_1,
  MR_Box mercury__bitmap__wrapper_arg_2);

static void MR_CALL 
mercury__bitmap____Compare____byte_index_0_0_10001(
  MR_Box * mercury__bitmap__wrapper_arg_1,
  MR_Box mercury__bitmap__wrapper_arg_2,
  MR_Box mercury__bitmap__wrapper_arg_3);

static MR_bool MR_CALL 
mercury__bitmap____Unify____copy_direction_0_0_10001(
  MR_Box mercury__bitmap__wrapper_arg_1,
  MR_Box mercury__bitmap__wrapper_arg_2);

static void MR_CALL 
mercury__bitmap____Compare____copy_direction_0_0_10001(
  MR_Box * mercury__bitmap__wrapper_arg_1,
  MR_Box mercury__bitmap__wrapper_arg_2,
  MR_Box mercury__bitmap__wrapper_arg_3);

static MR_bool MR_CALL 
mercury__bitmap____Unify____num_bits_0_0_10001(
  MR_Box mercury__bitmap__wrapper_arg_1,
  MR_Box mercury__bitmap__wrapper_arg_2);

static void MR_CALL 
mercury__bitmap____Compare____num_bits_0_0_10001(
  MR_Box * mercury__bitmap__wrapper_arg_1,
  MR_Box mercury__bitmap__wrapper_arg_2,
  MR_Box mercury__bitmap__wrapper_arg_3);

static MR_bool MR_CALL 
mercury__bitmap____Unify____num_bytes_0_0_10001(
  MR_Box mercury__bitmap__wrapper_arg_1,
  MR_Box mercury__bitmap__wrapper_arg_2);

static void MR_CALL 
mercury__bitmap____Compare____num_bytes_0_0_10001(
  MR_Box * mercury__bitmap__wrapper_arg_1,
  MR_Box mercury__bitmap__wrapper_arg_2,
  MR_Box mercury__bitmap__wrapper_arg_3);

static MR_bool MR_CALL 
mercury__bitmap____Unify____slice_0_0_10001(
  MR_Box mercury__bitmap__wrapper_arg_1,
  MR_Box mercury__bitmap__wrapper_arg_2);

static void MR_CALL 
mercury__bitmap____Compare____slice_0_0_10001(
  MR_Box * mercury__bitmap__wrapper_arg_1,
  MR_Box mercury__bitmap__wrapper_arg_2,
  MR_Box mercury__bitmap__wrapper_arg_3);

static MR_bool MR_CALL 
mercury__bitmap____Unify____word_0_0_10001(
  MR_Box mercury__bitmap__wrapper_arg_1,
  MR_Box mercury__bitmap__wrapper_arg_2);

static void MR_CALL 
mercury__bitmap____Compare____word_0_0_10001(
  MR_Box * mercury__bitmap__wrapper_arg_1,
  MR_Box mercury__bitmap__wrapper_arg_2,
  MR_Box mercury__bitmap__wrapper_arg_3);

static MR_Integer MR_CALL 
mercury__bitmap__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);

static void MR_CALL 
mercury__bitmap__foldl__ho12_4_p_in__list_0(
  MR_Word mercury__bitmap__HeadVar__2_2,
  MR_Integer mercury__bitmap__HeadVar__3_3,
  MR_Integer * mercury__bitmap__HeadVar__4_4);

static MR_Box MR_CALL 
mercury__bitmap__zip2__ho11_4_f_0(
  MR_Integer mercury__bitmap__I_6,
  MR_Box mercury__bitmap__BMa_8,
  MR_Box mercury__bitmap__BMb_9);

static MR_Box MR_CALL 
mercury__bitmap__zip2__ho10_4_f_0(
  MR_Integer mercury__bitmap__I_6,
  MR_Box mercury__bitmap__BMa_8,
  MR_Box mercury__bitmap__BMb_9);

static MR_Box MR_CALL 
mercury__bitmap__zip2__ho9_4_f_0(
  MR_Integer mercury__bitmap__I_6,
  MR_Box mercury__bitmap__BMa_8,
  MR_Box mercury__bitmap__BMb_9);

static MR_Box MR_CALL 
mercury__bitmap__zip2__ho8_4_f_0(
  MR_Integer mercury__bitmap__I_6,
  MR_Box mercury__bitmap__BMa_8,
  MR_Box mercury__bitmap__BMb_9);

static void MR_CALL 
mercury__bitmap__foldl2__ho2_6_p_in__list_0(
  MR_Word mercury__bitmap__HeadVar__2_2,
  MR_Integer mercury__bitmap__HeadVar__3_3,
  MR_Integer * mercury__bitmap__HeadVar__4_4,
  MR_Box mercury__bitmap__HeadVar__5_5,
  MR_Box * mercury__bitmap__HeadVar__6_6);

static MR_Integer MR_CALL 
mercury__bitmap__set_bits_in_byte_4_f_0(
  MR_Integer mercury__bitmap__Byte0_6,
  MR_Integer mercury__bitmap__FirstBit_7,
  MR_Integer mercury__bitmap__NumBits_8,
  MR_Integer mercury__bitmap__Bits_9);

static MR_Integer MR_CALL 
mercury__bitmap__extract_bits_from_byte_3_f_0(
  MR_Integer mercury__bitmap__Byte_5,
  MR_Integer mercury__bitmap__FirstBit_6,
  MR_Integer mercury__bitmap__NumBits_7);

static MR_Box MR_CALL 
mercury__bitmap__allocate_bitmap_1_f_0(
  MR_Integer mercury__bitmap__N_1);

static void MR_CALL 
mercury__bitmap__hash_2_5_p_0(
  MR_Box mercury__bitmap__BM_6,
  MR_Integer mercury__bitmap__Index_7,
  MR_Integer mercury__bitmap__Length_8,
  MR_Integer mercury__bitmap__STATE_VARIABLE_HashVal_0_10,
  MR_Integer * mercury__bitmap__STATE_VARIABLE_HashVal_11);

static MR_bool MR_CALL 
mercury__bitmap__hex_chars_to_bitmap_6_p_0(
  MR_String mercury__bitmap__Str_7,
  MR_Integer mercury__bitmap__Index_8,
  MR_Integer mercury__bitmap__End_9,
  MR_Integer mercury__bitmap__ByteIndex_10,
  MR_Box mercury__bitmap__STATE_VARIABLE_BM_0_15,
  MR_Box * mercury__bitmap__STATE_VARIABLE_BM_16);

static void MR_CALL 
mercury__bitmap__to_string_chars_4_p_0(
  MR_Integer mercury__bitmap__Index_5,
  MR_Box mercury__bitmap__BM_6,
  MR_Word mercury__bitmap__STATE_VARIABLE_Chars_0_12,
  MR_Word * mercury__bitmap__STATE_VARIABLE_Chars_13);

static MR_Box MR_CALL 
mercury__bitmap__unsafe_copy_unaligned_bytes_rtol_7_f_0(
  MR_Box mercury__bitmap__SrcBM_9,
  MR_Integer mercury__bitmap__SrcByteIndex_10,
  MR_Integer mercury__bitmap__SrcBitIndex_11,
  MR_Integer mercury__bitmap__PrevSrcByteBits_12,
  MR_Box mercury__bitmap__STATE_VARIABLE_DestBM_0_18,
  MR_Integer mercury__bitmap__DestByteIndex_14,
  MR_Integer mercury__bitmap__NumBytes_15);

static MR_Box MR_CALL 
mercury__bitmap__unsafe_copy_unaligned_bytes_ltor_7_f_0(
  MR_Box mercury__bitmap__SrcBM_9,
  MR_Integer mercury__bitmap__SrcByteIndex_10,
  MR_Integer mercury__bitmap__SrcBitIndex_11,
  MR_Integer mercury__bitmap__PrevSrcByteBits_12,
  MR_Box mercury__bitmap__STATE_VARIABLE_DestBM_0_18,
  MR_Integer mercury__bitmap__DestByteIndex_14,
  MR_Integer mercury__bitmap__NumBytes_15);

static MR_Box MR_CALL 
mercury__bitmap__unsafe_copy_unaligned_bits_6_f_0(
  MR_Integer mercury__bitmap__SameBM_8,
  MR_Box mercury__bitmap__SrcBM_9,
  MR_Integer mercury__bitmap__SrcStartBit_10,
  MR_Box mercury__bitmap__STATE_VARIABLE_DestBM_0_31,
  MR_Integer mercury__bitmap__DestStartBit_12,
  MR_Integer mercury__bitmap__STATE_VARIABLE_NumBits_0_32);

static MR_Box MR_CALL 
mercury__bitmap__unsafe_copy_bytes_6_f_0(
  MR_Integer mercury__bitmap__SameBM_1,
  MR_Box mercury__bitmap__SrcBM_2,
  MR_Integer mercury__bitmap__SrcFirstByteIndex_3,
  MR_Box mercury__bitmap__DestBM0_4,
  MR_Integer mercury__bitmap__DestFirstByteIndex_5,
  MR_Integer mercury__bitmap__NumBytes_6);

static MR_Box MR_CALL 
mercury__bitmap__unsafe_copy_bits_6_f_0(
  MR_Integer mercury__bitmap__SameBM_8,
  MR_Box mercury__bitmap__SrcBM_9,
  MR_Integer mercury__bitmap__SrcStartBit_10,
  MR_Box mercury__bitmap__STATE_VARIABLE_DestBM_0_30,
  MR_Integer mercury__bitmap__DestStartBit_12,
  MR_Integer mercury__bitmap__STATE_VARIABLE_NumBits_0_31);

static MR_Box MR_CALL 
mercury__bitmap__f_110_117_109_95_98_105_116_115_32_58_61_2_f_0(
  MR_Box mercury__bitmap__BM0_1,
  MR_Integer mercury__bitmap__NumBits_2);

static void MR_CALL 
mercury__bitmap__set_bits_in_byte_index_6_p_0(
  MR_Integer mercury__bitmap__ByteIndex_7,
  MR_Integer mercury__bitmap__LastBitIndex_8,
  MR_Integer mercury__bitmap__NumBitsThisByte_9,
  MR_Integer mercury__bitmap__Bits_10,
  MR_Box mercury__bitmap__STATE_VARIABLE_BM_0_13,
  MR_Box * mercury__bitmap__STATE_VARIABLE_BM_14);

static void MR_CALL 
mercury__bitmap__extract_bits_from_byte_index_6_p_0(
  MR_Integer mercury__bitmap__ByteIndex_7,
  MR_Integer mercury__bitmap__FirstBitIndex_8,
  MR_Integer mercury__bitmap__NumBitsThisByte_9,
  MR_Box mercury__bitmap__BM_10,
  MR_Integer mercury__bitmap__STATE_VARIABLE_Bits_0_13,
  MR_Integer * mercury__bitmap__STATE_VARIABLE_Bits_14);

static MR_Box MR_CALL 
mercury__bitmap__initialize_bitmap_bytes_4_f_0(
  MR_Box mercury__bitmap__BM_6,
  MR_Integer mercury__bitmap__ByteIndex_7,
  MR_Integer mercury__bitmap__LastByteIndex_8,
  MR_Integer mercury__bitmap__Init_9);


static /* final */ const MR_Box mercury__bitmap_scalar_common_1[1][3];

static /* final */ const MR_Box mercury__bitmap_scalar_common_2[1][4];

static /* final */ const MR_Box mercury__bitmap_scalar_common_3[2][5];

static /* final */ const MR_Box mercury__bitmap_scalar_common_4[1][2];

static /* final */ const MR_Box mercury__bitmap_scalar_common_5[1][1];




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

static /* final */ const MR_Box mercury__bitmap_scalar_common_4[1][2] = {
  /* row 0 */
  {
    ((MR_Box) (MR_Word) ((MR_Char) 62)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box mercury__bitmap_scalar_common_5[1][1] = {
  /* row 0 */
  {
    ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 0 << (MR_Integer) 1)) | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((((MR_Integer) 0 << (MR_Integer) 3)) | (((MR_Integer) 0 << (MR_Integer) 4)))))))))))
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
#include "version_array.mh"



const MR_TypeCtorInfo_Struct mercury__bitmap__bitmap__type_ctor_info_bit_index_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mercury__bitmap____Unify____bit_index_0_0_10001)),
  ((MR_Box) (mercury__bitmap____Compare____bit_index_0_0_10001)),
  (MR_String) "bitmap",
  (MR_String) "bit_index",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

const MR_TypeCtorInfo_Struct mercury__bitmap__bitmap__type_ctor_info_bit_index_in_byte_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mercury__bitmap____Unify____bit_index_in_byte_0_0_10001)),
  ((MR_Box) (mercury__bitmap____Compare____bit_index_in_byte_0_0_10001)),
  (MR_String) "bitmap",
  (MR_String) "bit_index_in_byte",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

const MR_TypeCtorInfo_Struct mercury__bitmap__bitmap__type_ctor_info_bitmap_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_BITMAP,
  ((MR_Box) (mercury__bitmap____Unify____bitmap_0_0_10001)),
  ((MR_Box) (mercury__bitmap____Compare____bitmap_0_0_10001)),
  (MR_String) "bitmap",
  (MR_String) "bitmap",
  {     NULL },
  {     NULL },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_Integer mercury__bitmap__bitmap__functor_number_map_bitmap_error_0[1] = {
  (MR_Integer) 0
};

static const MR_NotagFunctorDesc mercury__bitmap__bitmap__notag_functor_desc_bitmap_error_0 = {
  (MR_String) "bitmap_error",
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct mercury__bitmap__bitmap__type_ctor_info_bitmap_error_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (mercury__bitmap____Unify____bitmap_error_0_0_10001)),
  ((MR_Box) (mercury__bitmap____Compare____bitmap_error_0_0_10001)),
  (MR_String) "bitmap",
  (MR_String) "bitmap_error",
  {     &mercury__bitmap__bitmap__notag_functor_desc_bitmap_error_0 },
  {     &mercury__bitmap__bitmap__notag_functor_desc_bitmap_error_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mercury__bitmap__bitmap__functor_number_map_bitmap_error_0
};

const MR_TypeCtorInfo_Struct mercury__bitmap__bitmap__type_ctor_info_byte_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mercury__bitmap____Unify____byte_0_0_10001)),
  ((MR_Box) (mercury__bitmap____Compare____byte_0_0_10001)),
  (MR_String) "bitmap",
  (MR_String) "byte",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

const MR_TypeCtorInfo_Struct mercury__bitmap__bitmap__type_ctor_info_byte_index_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mercury__bitmap____Unify____byte_index_0_0_10001)),
  ((MR_Box) (mercury__bitmap____Compare____byte_index_0_0_10001)),
  (MR_String) "bitmap",
  (MR_String) "byte_index",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_EnumFunctorDesc mercury__bitmap__bitmap__enum_functor_desc_copy_direction_0_0 = {
  (MR_String) "left_to_right",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc mercury__bitmap__bitmap__enum_functor_desc_copy_direction_0_1 = {
  (MR_String) "right_to_left",
  (MR_Integer) 1
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
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mercury__bitmap____Unify____copy_direction_0_0_10001)),
  ((MR_Box) (mercury__bitmap____Compare____copy_direction_0_0_10001)),
  (MR_String) "bitmap",
  (MR_String) "copy_direction",
  {     mercury__bitmap__bitmap__enum_name_ordered_copy_direction_0 },
  {     mercury__bitmap__bitmap__enum_value_ordered_copy_direction_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mercury__bitmap__bitmap__functor_number_map_copy_direction_0
};

const MR_TypeCtorInfo_Struct mercury__bitmap__bitmap__type_ctor_info_num_bits_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mercury__bitmap____Unify____num_bits_0_0_10001)),
  ((MR_Box) (mercury__bitmap____Compare____num_bits_0_0_10001)),
  (MR_String) "bitmap",
  (MR_String) "num_bits",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

const MR_TypeCtorInfo_Struct mercury__bitmap__bitmap__type_ctor_info_num_bytes_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mercury__bitmap____Unify____num_bytes_0_0_10001)),
  ((MR_Box) (mercury__bitmap____Compare____num_bytes_0_0_10001)),
  (MR_String) "bitmap",
  (MR_String) "num_bytes",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_PseudoTypeInfo mercury__bitmap__bitmap__field_types_slice_0_0[3] = {
  (MR_PseudoTypeInfo) &mercury__bitmap__bitmap__type_ctor_info_bitmap_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

static const MR_ConstString mercury__bitmap__bitmap__field_names_slice_0_0[3] = {
  (MR_String) "slice_bitmap_field",
  (MR_String) "slice_start_bit_index_field",
  (MR_String) "slice_num_bits_field"
};

static const MR_DuFunctorDesc mercury__bitmap__bitmap__du_functor_desc_slice_0_0 = {
  (MR_String) "slice_ctor",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mercury__bitmap__bitmap__field_types_slice_0_0,
  mercury__bitmap__bitmap__field_names_slice_0_0,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr mercury__bitmap__bitmap__du_stag_ordered_slice_0_0[1] = {
  &mercury__bitmap__bitmap__du_functor_desc_slice_0_0
};

static const MR_DuPtagLayout mercury__bitmap__bitmap__du_ptag_ordered_slice_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__bitmap__bitmap__du_stag_ordered_slice_0_0
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
  (MR_Integer) 17,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__bitmap____Unify____slice_0_0_10001)),
  ((MR_Box) (mercury__bitmap____Compare____slice_0_0_10001)),
  (MR_String) "bitmap",
  (MR_String) "slice",
  {     mercury__bitmap__bitmap__du_name_ordered_slice_0 },
  {     mercury__bitmap__bitmap__du_ptag_ordered_slice_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mercury__bitmap__bitmap__functor_number_map_slice_0
};

const MR_TypeCtorInfo_Struct mercury__bitmap__bitmap__type_ctor_info_word_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mercury__bitmap____Unify____word_0_0_10001)),
  ((MR_Box) (mercury__bitmap____Compare____word_0_0_10001)),
  (MR_String) "bitmap",
  (MR_String) "word",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static MR_bool MR_CALL 
mercury__bitmap____Unify____bit_index_0_0_10001(
  MR_Box mercury__bitmap__wrapper_arg_1,
  MR_Box mercury__bitmap__wrapper_arg_2)
{
  {
    MR_bool mercury__bitmap__succeeded;

    {
      mercury__bitmap__succeeded = mercury__bitmap____Unify____bit_index_0_0(((MR_Integer) mercury__bitmap__wrapper_arg_1), ((MR_Integer) mercury__bitmap__wrapper_arg_2));
    }
    return mercury__bitmap__succeeded;
  }
}

static void MR_CALL 
mercury__bitmap____Compare____bit_index_0_0_10001(
  MR_Box * mercury__bitmap__wrapper_arg_1,
  MR_Box mercury__bitmap__wrapper_arg_2,
  MR_Box mercury__bitmap__wrapper_arg_3)
{
  {
    MR_Word mercury__bitmap__conv0_HeadVar__1_1;

    {
      mercury__bitmap____Compare____bit_index_0_0(&mercury__bitmap__conv0_HeadVar__1_1, ((MR_Integer) mercury__bitmap__wrapper_arg_2), ((MR_Integer) mercury__bitmap__wrapper_arg_3));
    }
    *mercury__bitmap__wrapper_arg_1 = ((MR_Box) (mercury__bitmap__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__bitmap____Unify____bit_index_in_byte_0_0_10001(
  MR_Box mercury__bitmap__wrapper_arg_1,
  MR_Box mercury__bitmap__wrapper_arg_2)
{
  {
    MR_bool mercury__bitmap__succeeded;

    {
      mercury__bitmap__succeeded = mercury__bitmap____Unify____bit_index_in_byte_0_0(((MR_Integer) mercury__bitmap__wrapper_arg_1), ((MR_Integer) mercury__bitmap__wrapper_arg_2));
    }
    return mercury__bitmap__succeeded;
  }
}

static void MR_CALL 
mercury__bitmap____Compare____bit_index_in_byte_0_0_10001(
  MR_Box * mercury__bitmap__wrapper_arg_1,
  MR_Box mercury__bitmap__wrapper_arg_2,
  MR_Box mercury__bitmap__wrapper_arg_3)
{
  {
    MR_Word mercury__bitmap__conv0_HeadVar__1_1;

    {
      mercury__bitmap____Compare____bit_index_in_byte_0_0(&mercury__bitmap__conv0_HeadVar__1_1, ((MR_Integer) mercury__bitmap__wrapper_arg_2), ((MR_Integer) mercury__bitmap__wrapper_arg_3));
    }
    *mercury__bitmap__wrapper_arg_1 = ((MR_Box) (mercury__bitmap__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__bitmap____Unify____bitmap_0_0_10001(
  MR_Box mercury__bitmap__wrapper_arg_1,
  MR_Box mercury__bitmap__wrapper_arg_2)
{
  {
    MR_bool mercury__bitmap__succeeded;

    {
      mercury__bitmap__succeeded = mercury__bitmap____Unify____bitmap_0_0(((MR_Box) mercury__bitmap__wrapper_arg_1), ((MR_Box) mercury__bitmap__wrapper_arg_2));
    }
    return mercury__bitmap__succeeded;
  }
}

static void MR_CALL 
mercury__bitmap____Compare____bitmap_0_0_10001(
  MR_Box * mercury__bitmap__wrapper_arg_1,
  MR_Box mercury__bitmap__wrapper_arg_2,
  MR_Box mercury__bitmap__wrapper_arg_3)
{
  {
    MR_Word mercury__bitmap__conv0_HeadVar__1_1;

    {
      mercury__bitmap____Compare____bitmap_0_0(&mercury__bitmap__conv0_HeadVar__1_1, ((MR_Box) mercury__bitmap__wrapper_arg_2), ((MR_Box) mercury__bitmap__wrapper_arg_3));
    }
    *mercury__bitmap__wrapper_arg_1 = ((MR_Box) (mercury__bitmap__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__bitmap____Unify____bitmap_error_0_0_10001(
  MR_Box mercury__bitmap__wrapper_arg_1,
  MR_Box mercury__bitmap__wrapper_arg_2)
{
  {
    MR_bool mercury__bitmap__succeeded;

    {
      mercury__bitmap__succeeded = mercury__bitmap____Unify____bitmap_error_0_0(((MR_Word) mercury__bitmap__wrapper_arg_1), ((MR_Word) mercury__bitmap__wrapper_arg_2));
    }
    return mercury__bitmap__succeeded;
  }
}

static void MR_CALL 
mercury__bitmap____Compare____bitmap_error_0_0_10001(
  MR_Box * mercury__bitmap__wrapper_arg_1,
  MR_Box mercury__bitmap__wrapper_arg_2,
  MR_Box mercury__bitmap__wrapper_arg_3)
{
  {
    MR_Word mercury__bitmap__conv0_HeadVar__1_1;

    {
      mercury__bitmap____Compare____bitmap_error_0_0(&mercury__bitmap__conv0_HeadVar__1_1, ((MR_Word) mercury__bitmap__wrapper_arg_2), ((MR_Word) mercury__bitmap__wrapper_arg_3));
    }
    *mercury__bitmap__wrapper_arg_1 = ((MR_Box) (mercury__bitmap__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__bitmap____Unify____byte_0_0_10001(
  MR_Box mercury__bitmap__wrapper_arg_1,
  MR_Box mercury__bitmap__wrapper_arg_2)
{
  {
    MR_bool mercury__bitmap__succeeded;

    {
      mercury__bitmap__succeeded = mercury__bitmap____Unify____byte_0_0(((MR_Integer) mercury__bitmap__wrapper_arg_1), ((MR_Integer) mercury__bitmap__wrapper_arg_2));
    }
    return mercury__bitmap__succeeded;
  }
}

static void MR_CALL 
mercury__bitmap____Compare____byte_0_0_10001(
  MR_Box * mercury__bitmap__wrapper_arg_1,
  MR_Box mercury__bitmap__wrapper_arg_2,
  MR_Box mercury__bitmap__wrapper_arg_3)
{
  {
    MR_Word mercury__bitmap__conv0_HeadVar__1_1;

    {
      mercury__bitmap____Compare____byte_0_0(&mercury__bitmap__conv0_HeadVar__1_1, ((MR_Integer) mercury__bitmap__wrapper_arg_2), ((MR_Integer) mercury__bitmap__wrapper_arg_3));
    }
    *mercury__bitmap__wrapper_arg_1 = ((MR_Box) (mercury__bitmap__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__bitmap____Unify____byte_index_0_0_10001(
  MR_Box mercury__bitmap__wrapper_arg_1,
  MR_Box mercury__bitmap__wrapper_arg_2)
{
  {
    MR_bool mercury__bitmap__succeeded;

    {
      mercury__bitmap__succeeded = mercury__bitmap____Unify____byte_index_0_0(((MR_Integer) mercury__bitmap__wrapper_arg_1), ((MR_Integer) mercury__bitmap__wrapper_arg_2));
    }
    return mercury__bitmap__succeeded;
  }
}

static void MR_CALL 
mercury__bitmap____Compare____byte_index_0_0_10001(
  MR_Box * mercury__bitmap__wrapper_arg_1,
  MR_Box mercury__bitmap__wrapper_arg_2,
  MR_Box mercury__bitmap__wrapper_arg_3)
{
  {
    MR_Word mercury__bitmap__conv0_HeadVar__1_1;

    {
      mercury__bitmap____Compare____byte_index_0_0(&mercury__bitmap__conv0_HeadVar__1_1, ((MR_Integer) mercury__bitmap__wrapper_arg_2), ((MR_Integer) mercury__bitmap__wrapper_arg_3));
    }
    *mercury__bitmap__wrapper_arg_1 = ((MR_Box) (mercury__bitmap__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__bitmap____Unify____copy_direction_0_0_10001(
  MR_Box mercury__bitmap__wrapper_arg_1,
  MR_Box mercury__bitmap__wrapper_arg_2)
{
  {
    MR_bool mercury__bitmap__succeeded;

    {
      mercury__bitmap__succeeded = mercury__bitmap____Unify____copy_direction_0_0(((MR_Word) mercury__bitmap__wrapper_arg_1), ((MR_Word) mercury__bitmap__wrapper_arg_2));
    }
    return mercury__bitmap__succeeded;
  }
}

static void MR_CALL 
mercury__bitmap____Compare____copy_direction_0_0_10001(
  MR_Box * mercury__bitmap__wrapper_arg_1,
  MR_Box mercury__bitmap__wrapper_arg_2,
  MR_Box mercury__bitmap__wrapper_arg_3)
{
  {
    MR_Word mercury__bitmap__conv0_HeadVar__1_1;

    {
      mercury__bitmap____Compare____copy_direction_0_0(&mercury__bitmap__conv0_HeadVar__1_1, ((MR_Word) mercury__bitmap__wrapper_arg_2), ((MR_Word) mercury__bitmap__wrapper_arg_3));
    }
    *mercury__bitmap__wrapper_arg_1 = ((MR_Box) (mercury__bitmap__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__bitmap____Unify____num_bits_0_0_10001(
  MR_Box mercury__bitmap__wrapper_arg_1,
  MR_Box mercury__bitmap__wrapper_arg_2)
{
  {
    MR_bool mercury__bitmap__succeeded;

    {
      mercury__bitmap__succeeded = mercury__bitmap____Unify____num_bits_0_0(((MR_Integer) mercury__bitmap__wrapper_arg_1), ((MR_Integer) mercury__bitmap__wrapper_arg_2));
    }
    return mercury__bitmap__succeeded;
  }
}

static void MR_CALL 
mercury__bitmap____Compare____num_bits_0_0_10001(
  MR_Box * mercury__bitmap__wrapper_arg_1,
  MR_Box mercury__bitmap__wrapper_arg_2,
  MR_Box mercury__bitmap__wrapper_arg_3)
{
  {
    MR_Word mercury__bitmap__conv0_HeadVar__1_1;

    {
      mercury__bitmap____Compare____num_bits_0_0(&mercury__bitmap__conv0_HeadVar__1_1, ((MR_Integer) mercury__bitmap__wrapper_arg_2), ((MR_Integer) mercury__bitmap__wrapper_arg_3));
    }
    *mercury__bitmap__wrapper_arg_1 = ((MR_Box) (mercury__bitmap__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__bitmap____Unify____num_bytes_0_0_10001(
  MR_Box mercury__bitmap__wrapper_arg_1,
  MR_Box mercury__bitmap__wrapper_arg_2)
{
  {
    MR_bool mercury__bitmap__succeeded;

    {
      mercury__bitmap__succeeded = mercury__bitmap____Unify____num_bytes_0_0(((MR_Integer) mercury__bitmap__wrapper_arg_1), ((MR_Integer) mercury__bitmap__wrapper_arg_2));
    }
    return mercury__bitmap__succeeded;
  }
}

static void MR_CALL 
mercury__bitmap____Compare____num_bytes_0_0_10001(
  MR_Box * mercury__bitmap__wrapper_arg_1,
  MR_Box mercury__bitmap__wrapper_arg_2,
  MR_Box mercury__bitmap__wrapper_arg_3)
{
  {
    MR_Word mercury__bitmap__conv0_HeadVar__1_1;

    {
      mercury__bitmap____Compare____num_bytes_0_0(&mercury__bitmap__conv0_HeadVar__1_1, ((MR_Integer) mercury__bitmap__wrapper_arg_2), ((MR_Integer) mercury__bitmap__wrapper_arg_3));
    }
    *mercury__bitmap__wrapper_arg_1 = ((MR_Box) (mercury__bitmap__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__bitmap____Unify____slice_0_0_10001(
  MR_Box mercury__bitmap__wrapper_arg_1,
  MR_Box mercury__bitmap__wrapper_arg_2)
{
  {
    MR_bool mercury__bitmap__succeeded;

    {
      mercury__bitmap__succeeded = mercury__bitmap____Unify____slice_0_0(((MR_Word) mercury__bitmap__wrapper_arg_1), ((MR_Word) mercury__bitmap__wrapper_arg_2));
    }
    return mercury__bitmap__succeeded;
  }
}

static void MR_CALL 
mercury__bitmap____Compare____slice_0_0_10001(
  MR_Box * mercury__bitmap__wrapper_arg_1,
  MR_Box mercury__bitmap__wrapper_arg_2,
  MR_Box mercury__bitmap__wrapper_arg_3)
{
  {
    MR_Word mercury__bitmap__conv0_HeadVar__1_1;

    {
      mercury__bitmap____Compare____slice_0_0(&mercury__bitmap__conv0_HeadVar__1_1, ((MR_Word) mercury__bitmap__wrapper_arg_2), ((MR_Word) mercury__bitmap__wrapper_arg_3));
    }
    *mercury__bitmap__wrapper_arg_1 = ((MR_Box) (mercury__bitmap__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__bitmap____Unify____word_0_0_10001(
  MR_Box mercury__bitmap__wrapper_arg_1,
  MR_Box mercury__bitmap__wrapper_arg_2)
{
  {
    MR_bool mercury__bitmap__succeeded;

    {
      mercury__bitmap__succeeded = mercury__bitmap____Unify____word_0_0(((MR_Integer) mercury__bitmap__wrapper_arg_1), ((MR_Integer) mercury__bitmap__wrapper_arg_2));
    }
    return mercury__bitmap__succeeded;
  }
}

static void MR_CALL 
mercury__bitmap____Compare____word_0_0_10001(
  MR_Box * mercury__bitmap__wrapper_arg_1,
  MR_Box mercury__bitmap__wrapper_arg_2,
  MR_Box mercury__bitmap__wrapper_arg_3)
{
  {
    MR_Word mercury__bitmap__conv0_HeadVar__1_1;

    {
      mercury__bitmap____Compare____word_0_0(&mercury__bitmap__conv0_HeadVar__1_1, ((MR_Integer) mercury__bitmap__wrapper_arg_2), ((MR_Integer) mercury__bitmap__wrapper_arg_3));
    }
    *mercury__bitmap__wrapper_arg_1 = ((MR_Box) (mercury__bitmap__conv0_HeadVar__1_1));
  }
}

static MR_Integer MR_CALL 
mercury__bitmap__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
{
  {
    MR_bool mercury__bitmap__succeeded;

    return (MR_Integer) 1200;
  }
}

static void MR_CALL 
mercury__bitmap__foldl__ho12_4_p_in__list_0(
  MR_Word mercury__bitmap__HeadVar__2_2,
  MR_Integer mercury__bitmap__HeadVar__3_3,
  MR_Integer * mercury__bitmap__HeadVar__4_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__bitmap__succeeded;

        if ((mercury__bitmap__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *mercury__bitmap__HeadVar__4_4 = mercury__bitmap__HeadVar__3_3;
        else
          {
            MR_Box mercury__bitmap__V_10_9 = ((MR_Box) (MR_hl_field(MR_mktag(1), mercury__bitmap__HeadVar__2_2, (MR_Integer) 0)));
            MR_Word mercury__bitmap__V_11_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bitmap__HeadVar__2_2, (MR_Integer) 1)));
            MR_Integer mercury__bitmap__V_15_13;
            MR_Integer mercury__bitmap__Var_53;

{
#define MR_PROC_LABEL mercury__bitmap__foldl__ho12_4_p_in__list_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr) mercury__bitmap__V_10_9 ;
		{

    NumBits = BM->num_bits;


		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__Var_53  = NumBits;
}
            mercury__bitmap__V_15_13 = (mercury__bitmap__HeadVar__3_3 + mercury__bitmap__Var_53);
            /* direct tailcall eliminated */
            {
              MR_Word mercury__bitmap__next_value_of_HeadVar__2_2 = mercury__bitmap__V_11_10;
              MR_Integer mercury__bitmap__next_value_of_HeadVar__3_3 = mercury__bitmap__V_15_13;

              mercury__bitmap__HeadVar__3_3 = mercury__bitmap__next_value_of_HeadVar__3_3;
              mercury__bitmap__HeadVar__2_2 = mercury__bitmap__next_value_of_HeadVar__2_2;
            }
            continue;
          }
      }
      break;
    }
}

static MR_Box MR_CALL 
mercury__bitmap__zip2__ho11_4_f_0(
  MR_Integer mercury__bitmap__I_6,
  MR_Box mercury__bitmap__BMa_8,
  MR_Box mercury__bitmap__BMb_9)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__bitmap__succeeded = (mercury__bitmap__I_6 >= (MR_Integer) 0);
        MR_Box mercury__bitmap__BM_10;

        if (mercury__bitmap__succeeded)
          {
            MR_Integer mercury__bitmap__Xa_11;
            MR_Integer mercury__bitmap__Xb_12;
            MR_Box mercury__bitmap__BMc_13;
            MR_Integer mercury__bitmap__Var_15;
            MR_Integer mercury__bitmap__Var_16;

{
#define MR_PROC_LABEL mercury__bitmap__zip2__ho11_4_f_0

	MR_Integer N;
	MR_BitmapPtr BM;
	MR_Integer Byte;

	N =  mercury__bitmap__I_6 ;
	BM = (MR_BitmapPtr) mercury__bitmap__BMa_8 ;
		{

    Byte = (MR_Integer) BM->elements[N];


		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__Xa_11  = Byte;
}
{
#define MR_PROC_LABEL mercury__bitmap__zip2__ho11_4_f_0

	MR_Integer N;
	MR_BitmapPtr BM;
	MR_Integer Byte;

	N =  mercury__bitmap__I_6 ;
	BM = (MR_BitmapPtr) mercury__bitmap__BMb_9 ;
		{

    Byte = (MR_Integer) BM->elements[N];


		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__Xb_12  = Byte;
}
            mercury__bitmap__Var_15 = (mercury__bitmap__Xa_11 ^ mercury__bitmap__Xb_12);
{
#define MR_PROC_LABEL mercury__bitmap__zip2__ho11_4_f_0

	MR_Integer N;
	MR_BitmapPtr BM0;
	MR_Integer Byte;
	MR_BitmapPtr BM;

	N =  mercury__bitmap__I_6 ;
	BM0 = (MR_BitmapPtr) mercury__bitmap__BMb_9 ;
	Byte =  mercury__bitmap__Var_15 ;
		{

    BM = BM0;
    BM->elements[N] = (MR_uint_least8_t) Byte;


		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__BMc_13  = (MR_Box) BM;
}
            mercury__bitmap__Var_16 = (mercury__bitmap__I_6 - (MR_Integer) 1);
            /* direct tailcall eliminated */
            {
              MR_Integer mercury__bitmap__next_value_of_I_6 = mercury__bitmap__Var_16;
              MR_Box mercury__bitmap__next_value_of_BMb_9 = mercury__bitmap__BMc_13;

              mercury__bitmap__BMb_9 = mercury__bitmap__next_value_of_BMb_9;
              mercury__bitmap__I_6 = mercury__bitmap__next_value_of_I_6;
            }
            continue;
          }
        else
          mercury__bitmap__BM_10 = mercury__bitmap__BMb_9;
        return mercury__bitmap__BM_10;
      }
      break;
    }
}

static MR_Box MR_CALL 
mercury__bitmap__zip2__ho10_4_f_0(
  MR_Integer mercury__bitmap__I_6,
  MR_Box mercury__bitmap__BMa_8,
  MR_Box mercury__bitmap__BMb_9)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__bitmap__succeeded = (mercury__bitmap__I_6 >= (MR_Integer) 0);
        MR_Box mercury__bitmap__BM_10;

        if (mercury__bitmap__succeeded)
          {
            MR_Integer mercury__bitmap__Xa_11;
            MR_Integer mercury__bitmap__Xb_12;
            MR_Box mercury__bitmap__BMc_13;
            MR_Integer mercury__bitmap__Var_15;
            MR_Integer mercury__bitmap__Var_16;
            MR_Integer mercury__bitmap__Var_35;

{
#define MR_PROC_LABEL mercury__bitmap__zip2__ho10_4_f_0

	MR_Integer N;
	MR_BitmapPtr BM;
	MR_Integer Byte;

	N =  mercury__bitmap__I_6 ;
	BM = (MR_BitmapPtr) mercury__bitmap__BMa_8 ;
		{

    Byte = (MR_Integer) BM->elements[N];


		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__Xa_11  = Byte;
}
{
#define MR_PROC_LABEL mercury__bitmap__zip2__ho10_4_f_0

	MR_Integer N;
	MR_BitmapPtr BM;
	MR_Integer Byte;

	N =  mercury__bitmap__I_6 ;
	BM = (MR_BitmapPtr) mercury__bitmap__BMb_9 ;
		{

    Byte = (MR_Integer) BM->elements[N];


		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__Xb_12  = Byte;
}
            mercury__bitmap__Var_35 = ~(mercury__bitmap__Xb_12);
            mercury__bitmap__Var_15 = (mercury__bitmap__Xa_11 & mercury__bitmap__Var_35);
{
#define MR_PROC_LABEL mercury__bitmap__zip2__ho10_4_f_0

	MR_Integer N;
	MR_BitmapPtr BM0;
	MR_Integer Byte;
	MR_BitmapPtr BM;

	N =  mercury__bitmap__I_6 ;
	BM0 = (MR_BitmapPtr) mercury__bitmap__BMb_9 ;
	Byte =  mercury__bitmap__Var_15 ;
		{

    BM = BM0;
    BM->elements[N] = (MR_uint_least8_t) Byte;


		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__BMc_13  = (MR_Box) BM;
}
            mercury__bitmap__Var_16 = (mercury__bitmap__I_6 - (MR_Integer) 1);
            /* direct tailcall eliminated */
            {
              MR_Integer mercury__bitmap__next_value_of_I_6 = mercury__bitmap__Var_16;
              MR_Box mercury__bitmap__next_value_of_BMb_9 = mercury__bitmap__BMc_13;

              mercury__bitmap__BMb_9 = mercury__bitmap__next_value_of_BMb_9;
              mercury__bitmap__I_6 = mercury__bitmap__next_value_of_I_6;
            }
            continue;
          }
        else
          mercury__bitmap__BM_10 = mercury__bitmap__BMb_9;
        return mercury__bitmap__BM_10;
      }
      break;
    }
}

static MR_Box MR_CALL 
mercury__bitmap__zip2__ho9_4_f_0(
  MR_Integer mercury__bitmap__I_6,
  MR_Box mercury__bitmap__BMa_8,
  MR_Box mercury__bitmap__BMb_9)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__bitmap__succeeded = (mercury__bitmap__I_6 >= (MR_Integer) 0);
        MR_Box mercury__bitmap__BM_10;

        if (mercury__bitmap__succeeded)
          {
            MR_Integer mercury__bitmap__Xa_11;
            MR_Integer mercury__bitmap__Xb_12;
            MR_Box mercury__bitmap__BMc_13;
            MR_Integer mercury__bitmap__Var_15;
            MR_Integer mercury__bitmap__Var_16;

{
#define MR_PROC_LABEL mercury__bitmap__zip2__ho9_4_f_0

	MR_Integer N;
	MR_BitmapPtr BM;
	MR_Integer Byte;

	N =  mercury__bitmap__I_6 ;
	BM = (MR_BitmapPtr) mercury__bitmap__BMa_8 ;
		{

    Byte = (MR_Integer) BM->elements[N];


		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__Xa_11  = Byte;
}
{
#define MR_PROC_LABEL mercury__bitmap__zip2__ho9_4_f_0

	MR_Integer N;
	MR_BitmapPtr BM;
	MR_Integer Byte;

	N =  mercury__bitmap__I_6 ;
	BM = (MR_BitmapPtr) mercury__bitmap__BMb_9 ;
		{

    Byte = (MR_Integer) BM->elements[N];


		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__Xb_12  = Byte;
}
            mercury__bitmap__Var_15 = (mercury__bitmap__Xa_11 & mercury__bitmap__Xb_12);
{
#define MR_PROC_LABEL mercury__bitmap__zip2__ho9_4_f_0

	MR_Integer N;
	MR_BitmapPtr BM0;
	MR_Integer Byte;
	MR_BitmapPtr BM;

	N =  mercury__bitmap__I_6 ;
	BM0 = (MR_BitmapPtr) mercury__bitmap__BMb_9 ;
	Byte =  mercury__bitmap__Var_15 ;
		{

    BM = BM0;
    BM->elements[N] = (MR_uint_least8_t) Byte;


		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__BMc_13  = (MR_Box) BM;
}
            mercury__bitmap__Var_16 = (mercury__bitmap__I_6 - (MR_Integer) 1);
            /* direct tailcall eliminated */
            {
              MR_Integer mercury__bitmap__next_value_of_I_6 = mercury__bitmap__Var_16;
              MR_Box mercury__bitmap__next_value_of_BMb_9 = mercury__bitmap__BMc_13;

              mercury__bitmap__BMb_9 = mercury__bitmap__next_value_of_BMb_9;
              mercury__bitmap__I_6 = mercury__bitmap__next_value_of_I_6;
            }
            continue;
          }
        else
          mercury__bitmap__BM_10 = mercury__bitmap__BMb_9;
        return mercury__bitmap__BM_10;
      }
      break;
    }
}

static MR_Box MR_CALL 
mercury__bitmap__zip2__ho8_4_f_0(
  MR_Integer mercury__bitmap__I_6,
  MR_Box mercury__bitmap__BMa_8,
  MR_Box mercury__bitmap__BMb_9)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__bitmap__succeeded = (mercury__bitmap__I_6 >= (MR_Integer) 0);
        MR_Box mercury__bitmap__BM_10;

        if (mercury__bitmap__succeeded)
          {
            MR_Integer mercury__bitmap__Xa_11;
            MR_Integer mercury__bitmap__Xb_12;
            MR_Box mercury__bitmap__BMc_13;
            MR_Integer mercury__bitmap__Var_15;
            MR_Integer mercury__bitmap__Var_16;

{
#define MR_PROC_LABEL mercury__bitmap__zip2__ho8_4_f_0

	MR_Integer N;
	MR_BitmapPtr BM;
	MR_Integer Byte;

	N =  mercury__bitmap__I_6 ;
	BM = (MR_BitmapPtr) mercury__bitmap__BMa_8 ;
		{

    Byte = (MR_Integer) BM->elements[N];


		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__Xa_11  = Byte;
}
{
#define MR_PROC_LABEL mercury__bitmap__zip2__ho8_4_f_0

	MR_Integer N;
	MR_BitmapPtr BM;
	MR_Integer Byte;

	N =  mercury__bitmap__I_6 ;
	BM = (MR_BitmapPtr) mercury__bitmap__BMb_9 ;
		{

    Byte = (MR_Integer) BM->elements[N];


		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__Xb_12  = Byte;
}
            mercury__bitmap__Var_15 = (mercury__bitmap__Xa_11 | mercury__bitmap__Xb_12);
{
#define MR_PROC_LABEL mercury__bitmap__zip2__ho8_4_f_0

	MR_Integer N;
	MR_BitmapPtr BM0;
	MR_Integer Byte;
	MR_BitmapPtr BM;

	N =  mercury__bitmap__I_6 ;
	BM0 = (MR_BitmapPtr) mercury__bitmap__BMb_9 ;
	Byte =  mercury__bitmap__Var_15 ;
		{

    BM = BM0;
    BM->elements[N] = (MR_uint_least8_t) Byte;


		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__BMc_13  = (MR_Box) BM;
}
            mercury__bitmap__Var_16 = (mercury__bitmap__I_6 - (MR_Integer) 1);
            /* direct tailcall eliminated */
            {
              MR_Integer mercury__bitmap__next_value_of_I_6 = mercury__bitmap__Var_16;
              MR_Box mercury__bitmap__next_value_of_BMb_9 = mercury__bitmap__BMc_13;

              mercury__bitmap__BMb_9 = mercury__bitmap__next_value_of_BMb_9;
              mercury__bitmap__I_6 = mercury__bitmap__next_value_of_I_6;
            }
            continue;
          }
        else
          mercury__bitmap__BM_10 = mercury__bitmap__BMb_9;
        return mercury__bitmap__BM_10;
      }
      break;
    }
}

static void MR_CALL 
mercury__bitmap__foldl2__ho2_6_p_in__list_0(
  MR_Word mercury__bitmap__HeadVar__2_2,
  MR_Integer mercury__bitmap__HeadVar__3_3,
  MR_Integer * mercury__bitmap__HeadVar__4_4,
  MR_Box mercury__bitmap__HeadVar__5_5,
  MR_Box * mercury__bitmap__HeadVar__6_6)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__bitmap__succeeded;

        if ((mercury__bitmap__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *mercury__bitmap__HeadVar__6_6 = mercury__bitmap__HeadVar__5_5;
            *mercury__bitmap__HeadVar__4_4 = mercury__bitmap__HeadVar__3_3;
          }
        else
          {
            MR_Box mercury__bitmap__V_15_13 = ((MR_Box) (MR_hl_field(MR_mktag(1), mercury__bitmap__HeadVar__2_2, (MR_Integer) 0)));
            MR_Word mercury__bitmap__V_16_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bitmap__HeadVar__2_2, (MR_Integer) 1)));
            MR_Integer mercury__bitmap__V_23_19;
            MR_Box mercury__bitmap__V_24_20;
            MR_Integer mercury__bitmap__Var_34;
            MR_Integer mercury__bitmap__Var_36;

{
#define MR_PROC_LABEL mercury__bitmap__foldl2__ho2_6_p_in__list_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr) mercury__bitmap__V_15_13 ;
		{

    NumBits = BM->num_bits;


		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__Var_34  = NumBits;
}
            {
              mercury__bitmap__V_24_20 = mercury__bitmap__unsafe_copy_bits_6_f_0((MR_Integer) 0, mercury__bitmap__V_15_13, (MR_Integer) 0, mercury__bitmap__HeadVar__5_5, mercury__bitmap__HeadVar__3_3, mercury__bitmap__Var_34);
            }
{
#define MR_PROC_LABEL mercury__bitmap__foldl2__ho2_6_p_in__list_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr) mercury__bitmap__V_15_13 ;
		{

    NumBits = BM->num_bits;


		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__Var_36  = NumBits;
}
            mercury__bitmap__V_23_19 = (mercury__bitmap__HeadVar__3_3 + mercury__bitmap__Var_36);
            /* direct tailcall eliminated */
            {
              MR_Word mercury__bitmap__next_value_of_HeadVar__2_2 = mercury__bitmap__V_16_14;
              MR_Integer mercury__bitmap__next_value_of_HeadVar__3_3 = mercury__bitmap__V_23_19;
              MR_Box mercury__bitmap__next_value_of_HeadVar__5_5 = mercury__bitmap__V_24_20;

              mercury__bitmap__HeadVar__5_5 = mercury__bitmap__next_value_of_HeadVar__5_5;
              mercury__bitmap__HeadVar__3_3 = mercury__bitmap__next_value_of_HeadVar__3_3;
              mercury__bitmap__HeadVar__2_2 = mercury__bitmap__next_value_of_HeadVar__2_2;
            }
            continue;
          }
      }
      break;
    }
}

void MR_CALL 
mercury__bitmap____Compare____word_0_0(
  MR_Word * mercury__bitmap__HeadVar__1_1,
  MR_Integer mercury__bitmap__HeadVar__2_2,
  MR_Integer mercury__bitmap__HeadVar__3_3)
{
  {
    MR_bool mercury__bitmap__succeeded;
    MR_Integer mercury__bitmap__Cast_HeadVar1_4 = mercury__bitmap__HeadVar__2_2;
    MR_Integer mercury__bitmap__Cast_HeadVar2_5 = mercury__bitmap__HeadVar__3_3;

    mercury__bitmap__succeeded = (mercury__bitmap__Cast_HeadVar1_4 < mercury__bitmap__Cast_HeadVar2_5);
    if (mercury__bitmap__succeeded)
      *mercury__bitmap__HeadVar__1_1 = (MR_Integer) 1;
    else
      {
        mercury__bitmap__succeeded = (mercury__bitmap__Cast_HeadVar1_4 == mercury__bitmap__Cast_HeadVar2_5);
        if (mercury__bitmap__succeeded)
          *mercury__bitmap__HeadVar__1_1 = (MR_Integer) 0;
        else
          *mercury__bitmap__HeadVar__1_1 = (MR_Integer) 2;
      }
  }
}

MR_bool MR_CALL 
mercury__bitmap____Unify____word_0_0(
  MR_Integer mercury__bitmap__HeadVar__1_1,
  MR_Integer mercury__bitmap__HeadVar__2_2)
{
  {
    MR_bool mercury__bitmap__succeeded;
    MR_Integer mercury__bitmap__Cast_HeadVar1_3 = mercury__bitmap__HeadVar__1_1;
    MR_Integer mercury__bitmap__Cast_HeadVar2_4 = mercury__bitmap__HeadVar__2_2;

    mercury__bitmap__succeeded = (mercury__bitmap__Cast_HeadVar1_3 == mercury__bitmap__Cast_HeadVar2_4);
    return mercury__bitmap__succeeded;
  }
}

void MR_CALL 
mercury__bitmap____Compare____slice_0_0(
  MR_Word * mercury__bitmap__HeadVar__1_1,
  MR_Word mercury__bitmap__HeadVar__2_2,
  MR_Word mercury__bitmap__HeadVar__3_3)
{
  {
    MR_bool mercury__bitmap__succeeded;
    MR_Integer mercury__bitmap__CastX_12 = (MR_Integer) mercury__bitmap__HeadVar__2_2;
    MR_Integer mercury__bitmap__CastY_13 = (MR_Integer) mercury__bitmap__HeadVar__3_3;

    mercury__bitmap__succeeded = (mercury__bitmap__CastX_12 == mercury__bitmap__CastY_13);
    if (mercury__bitmap__succeeded)
      *mercury__bitmap__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Box mercury__bitmap__Var_4 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__bitmap__HeadVar__2_2, (MR_Integer) 0)));
        MR_Integer mercury__bitmap__Var_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__bitmap__HeadVar__2_2, (MR_Integer) 1)));
        MR_Integer mercury__bitmap__Var_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__bitmap__HeadVar__2_2, (MR_Integer) 2)));
        MR_Box mercury__bitmap__Var_7 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__bitmap__HeadVar__3_3, (MR_Integer) 0)));
        MR_Integer mercury__bitmap__Var_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__bitmap__HeadVar__3_3, (MR_Integer) 1)));
        MR_Integer mercury__bitmap__Var_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__bitmap__HeadVar__3_3, (MR_Integer) 2)));
        MR_Word mercury__bitmap__Var_10;
        MR_Integer mercury__bitmap__CastX_17 = (MR_Integer) mercury__bitmap__Var_4;
        MR_Integer mercury__bitmap__CastY_18 = (MR_Integer) mercury__bitmap__Var_7;

        mercury__bitmap__succeeded = (mercury__bitmap__CastX_17 == mercury__bitmap__CastY_18);
        if (mercury__bitmap__succeeded)
          mercury__bitmap__Var_10 = (MR_Integer) 0;
        else
          {
{
#define MR_PROC_LABEL mercury__bitmap____Compare____slice_0_0

	MR_Word Result;
	MR_BitmapPtr BM1;
	MR_BitmapPtr BM2;

	BM1 = (MR_BitmapPtr) mercury__bitmap__Var_4 ;
	BM2 = (MR_BitmapPtr) mercury__bitmap__Var_7 ;
		{

    MR_Integer  res;
    res = MR_bitmap_cmp(BM1, BM2);
    Result = ((res < 0) ? MR_COMPARE_LESS
        : (res == 0) ? MR_COMPARE_EQUAL
        : MR_COMPARE_GREATER);


		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__Var_10  = Result;
}
          }
        mercury__bitmap__succeeded = (mercury__bitmap__Var_10 == (MR_Integer) 0);
        mercury__bitmap__succeeded = !(mercury__bitmap__succeeded);
        if (mercury__bitmap__succeeded)
          *mercury__bitmap__HeadVar__1_1 = mercury__bitmap__Var_10;
        else
          {
            MR_Word mercury__bitmap__Var_11;

            mercury__bitmap__succeeded = (mercury__bitmap__Var_5 < mercury__bitmap__Var_8);
            if (mercury__bitmap__succeeded)
              mercury__bitmap__Var_11 = (MR_Integer) 1;
            else
              {
                mercury__bitmap__succeeded = (mercury__bitmap__Var_5 == mercury__bitmap__Var_8);
                if (mercury__bitmap__succeeded)
                  mercury__bitmap__Var_11 = (MR_Integer) 0;
                else
                  mercury__bitmap__Var_11 = (MR_Integer) 2;
              }
            mercury__bitmap__succeeded = (mercury__bitmap__Var_11 == (MR_Integer) 0);
            mercury__bitmap__succeeded = !(mercury__bitmap__succeeded);
            if (mercury__bitmap__succeeded)
              *mercury__bitmap__HeadVar__1_1 = mercury__bitmap__Var_11;
            else
              {
                mercury__bitmap__succeeded = (mercury__bitmap__Var_6 < mercury__bitmap__Var_9);
                if (mercury__bitmap__succeeded)
                  *mercury__bitmap__HeadVar__1_1 = (MR_Integer) 1;
                else
                  {
                    mercury__bitmap__succeeded = (mercury__bitmap__Var_6 == mercury__bitmap__Var_9);
                    if (mercury__bitmap__succeeded)
                      *mercury__bitmap__HeadVar__1_1 = (MR_Integer) 0;
                    else
                      *mercury__bitmap__HeadVar__1_1 = (MR_Integer) 2;
                  }
              }
          }
      }
  }
}

MR_bool MR_CALL 
mercury__bitmap____Unify____slice_0_0(
  MR_Word mercury__bitmap__HeadVar__1_1,
  MR_Word mercury__bitmap__HeadVar__2_2)
{
  {
    MR_bool mercury__bitmap__succeeded;
    MR_Integer mercury__bitmap__CastX_9 = (MR_Integer) mercury__bitmap__HeadVar__1_1;
    MR_Integer mercury__bitmap__CastY_10 = (MR_Integer) mercury__bitmap__HeadVar__2_2;

    mercury__bitmap__succeeded = (mercury__bitmap__CastX_9 == mercury__bitmap__CastY_10);
    if (mercury__bitmap__succeeded)
      mercury__bitmap__succeeded = MR_TRUE;
    else
      {
        MR_Box mercury__bitmap__Var_3 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__bitmap__HeadVar__1_1, (MR_Integer) 0)));
        MR_Integer mercury__bitmap__Var_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__bitmap__HeadVar__1_1, (MR_Integer) 1)));
        MR_Integer mercury__bitmap__Var_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__bitmap__HeadVar__1_1, (MR_Integer) 2)));
        MR_Box mercury__bitmap__Var_6 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__bitmap__HeadVar__2_2, (MR_Integer) 0)));
        MR_Integer mercury__bitmap__Var_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__bitmap__HeadVar__2_2, (MR_Integer) 1)));
        MR_Integer mercury__bitmap__Var_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__bitmap__HeadVar__2_2, (MR_Integer) 2)));
        MR_Integer mercury__bitmap__CastX_11 = (MR_Integer) mercury__bitmap__Var_3;
        MR_Integer mercury__bitmap__CastY_12 = (MR_Integer) mercury__bitmap__Var_6;

        mercury__bitmap__succeeded = (mercury__bitmap__CastX_11 == mercury__bitmap__CastY_12);
        if (mercury__bitmap__succeeded)
          mercury__bitmap__succeeded = MR_TRUE;
        else
          {
{
#define MR_PROC_LABEL mercury__bitmap____Unify____slice_0_0

	MR_BitmapPtr BM1;
	MR_BitmapPtr BM2;
	MR_bool SUCCESS_INDICATOR;

	BM1 = (MR_BitmapPtr) mercury__bitmap__Var_3 ;
	BM2 = (MR_BitmapPtr) mercury__bitmap__Var_6 ;
		{

    SUCCESS_INDICATOR = MR_bitmap_eq(BM1, BM2);


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
mercury__bitmap__succeeded  = SUCCESS_INDICATOR;
}
          }
        if (mercury__bitmap__succeeded)
          {
            mercury__bitmap__succeeded = (mercury__bitmap__Var_4 == mercury__bitmap__Var_7);
            if (mercury__bitmap__succeeded)
              mercury__bitmap__succeeded = (mercury__bitmap__Var_5 == mercury__bitmap__Var_8);
          }
      }
    return mercury__bitmap__succeeded;
  }
}

void MR_CALL 
mercury__bitmap____Compare____num_bytes_0_0(
  MR_Word * mercury__bitmap__HeadVar__1_1,
  MR_Integer mercury__bitmap__HeadVar__2_2,
  MR_Integer mercury__bitmap__HeadVar__3_3)
{
  {
    MR_bool mercury__bitmap__succeeded;
    MR_Integer mercury__bitmap__Cast_HeadVar1_4 = mercury__bitmap__HeadVar__2_2;
    MR_Integer mercury__bitmap__Cast_HeadVar2_5 = mercury__bitmap__HeadVar__3_3;

    mercury__bitmap__succeeded = (mercury__bitmap__Cast_HeadVar1_4 < mercury__bitmap__Cast_HeadVar2_5);
    if (mercury__bitmap__succeeded)
      *mercury__bitmap__HeadVar__1_1 = (MR_Integer) 1;
    else
      {
        mercury__bitmap__succeeded = (mercury__bitmap__Cast_HeadVar1_4 == mercury__bitmap__Cast_HeadVar2_5);
        if (mercury__bitmap__succeeded)
          *mercury__bitmap__HeadVar__1_1 = (MR_Integer) 0;
        else
          *mercury__bitmap__HeadVar__1_1 = (MR_Integer) 2;
      }
  }
}

MR_bool MR_CALL 
mercury__bitmap____Unify____num_bytes_0_0(
  MR_Integer mercury__bitmap__HeadVar__1_1,
  MR_Integer mercury__bitmap__HeadVar__2_2)
{
  {
    MR_bool mercury__bitmap__succeeded;
    MR_Integer mercury__bitmap__Cast_HeadVar1_3 = mercury__bitmap__HeadVar__1_1;
    MR_Integer mercury__bitmap__Cast_HeadVar2_4 = mercury__bitmap__HeadVar__2_2;

    mercury__bitmap__succeeded = (mercury__bitmap__Cast_HeadVar1_3 == mercury__bitmap__Cast_HeadVar2_4);
    return mercury__bitmap__succeeded;
  }
}

void MR_CALL 
mercury__bitmap____Compare____num_bits_0_0(
  MR_Word * mercury__bitmap__HeadVar__1_1,
  MR_Integer mercury__bitmap__HeadVar__2_2,
  MR_Integer mercury__bitmap__HeadVar__3_3)
{
  {
    MR_bool mercury__bitmap__succeeded;
    MR_Integer mercury__bitmap__Cast_HeadVar1_4 = mercury__bitmap__HeadVar__2_2;
    MR_Integer mercury__bitmap__Cast_HeadVar2_5 = mercury__bitmap__HeadVar__3_3;

    mercury__bitmap__succeeded = (mercury__bitmap__Cast_HeadVar1_4 < mercury__bitmap__Cast_HeadVar2_5);
    if (mercury__bitmap__succeeded)
      *mercury__bitmap__HeadVar__1_1 = (MR_Integer) 1;
    else
      {
        mercury__bitmap__succeeded = (mercury__bitmap__Cast_HeadVar1_4 == mercury__bitmap__Cast_HeadVar2_5);
        if (mercury__bitmap__succeeded)
          *mercury__bitmap__HeadVar__1_1 = (MR_Integer) 0;
        else
          *mercury__bitmap__HeadVar__1_1 = (MR_Integer) 2;
      }
  }
}

MR_bool MR_CALL 
mercury__bitmap____Unify____num_bits_0_0(
  MR_Integer mercury__bitmap__HeadVar__1_1,
  MR_Integer mercury__bitmap__HeadVar__2_2)
{
  {
    MR_bool mercury__bitmap__succeeded;
    MR_Integer mercury__bitmap__Cast_HeadVar1_3 = mercury__bitmap__HeadVar__1_1;
    MR_Integer mercury__bitmap__Cast_HeadVar2_4 = mercury__bitmap__HeadVar__2_2;

    mercury__bitmap__succeeded = (mercury__bitmap__Cast_HeadVar1_3 == mercury__bitmap__Cast_HeadVar2_4);
    return mercury__bitmap__succeeded;
  }
}

void MR_CALL 
mercury__bitmap____Compare____copy_direction_0_0(
  MR_Word * mercury__bitmap__HeadVar__1_1,
  MR_Word mercury__bitmap__HeadVar__2_2,
  MR_Word mercury__bitmap__HeadVar__3_3)
{
  {
    MR_bool mercury__bitmap__succeeded;
    MR_Integer mercury__bitmap__Cast_HeadVar1_4 = (MR_Integer) mercury__bitmap__HeadVar__2_2;
    MR_Integer mercury__bitmap__Cast_HeadVar2_5 = (MR_Integer) mercury__bitmap__HeadVar__3_3;

    mercury__bitmap__succeeded = (mercury__bitmap__Cast_HeadVar1_4 < mercury__bitmap__Cast_HeadVar2_5);
    if (mercury__bitmap__succeeded)
      *mercury__bitmap__HeadVar__1_1 = (MR_Integer) 1;
    else
      {
        mercury__bitmap__succeeded = (mercury__bitmap__Cast_HeadVar1_4 == mercury__bitmap__Cast_HeadVar2_5);
        if (mercury__bitmap__succeeded)
          *mercury__bitmap__HeadVar__1_1 = (MR_Integer) 0;
        else
          *mercury__bitmap__HeadVar__1_1 = (MR_Integer) 2;
      }
  }
}

MR_bool MR_CALL 
mercury__bitmap____Unify____copy_direction_0_0(
  MR_Word mercury__bitmap__HeadVar__2_1,
  MR_Word mercury__bitmap__HeadVar__2_2)
{
  {
    MR_bool mercury__bitmap__succeeded = (mercury__bitmap__HeadVar__2_1 == mercury__bitmap__HeadVar__2_2);

    return mercury__bitmap__succeeded;
  }
}

void MR_CALL 
mercury__bitmap____Compare____byte_index_0_0(
  MR_Word * mercury__bitmap__HeadVar__1_1,
  MR_Integer mercury__bitmap__HeadVar__2_2,
  MR_Integer mercury__bitmap__HeadVar__3_3)
{
  {
    MR_bool mercury__bitmap__succeeded;
    MR_Integer mercury__bitmap__Cast_HeadVar1_4 = mercury__bitmap__HeadVar__2_2;
    MR_Integer mercury__bitmap__Cast_HeadVar2_5 = mercury__bitmap__HeadVar__3_3;

    mercury__bitmap__succeeded = (mercury__bitmap__Cast_HeadVar1_4 < mercury__bitmap__Cast_HeadVar2_5);
    if (mercury__bitmap__succeeded)
      *mercury__bitmap__HeadVar__1_1 = (MR_Integer) 1;
    else
      {
        mercury__bitmap__succeeded = (mercury__bitmap__Cast_HeadVar1_4 == mercury__bitmap__Cast_HeadVar2_5);
        if (mercury__bitmap__succeeded)
          *mercury__bitmap__HeadVar__1_1 = (MR_Integer) 0;
        else
          *mercury__bitmap__HeadVar__1_1 = (MR_Integer) 2;
      }
  }
}

MR_bool MR_CALL 
mercury__bitmap____Unify____byte_index_0_0(
  MR_Integer mercury__bitmap__HeadVar__1_1,
  MR_Integer mercury__bitmap__HeadVar__2_2)
{
  {
    MR_bool mercury__bitmap__succeeded;
    MR_Integer mercury__bitmap__Cast_HeadVar1_3 = mercury__bitmap__HeadVar__1_1;
    MR_Integer mercury__bitmap__Cast_HeadVar2_4 = mercury__bitmap__HeadVar__2_2;

    mercury__bitmap__succeeded = (mercury__bitmap__Cast_HeadVar1_3 == mercury__bitmap__Cast_HeadVar2_4);
    return mercury__bitmap__succeeded;
  }
}

void MR_CALL 
mercury__bitmap____Compare____byte_0_0(
  MR_Word * mercury__bitmap__HeadVar__1_1,
  MR_Integer mercury__bitmap__HeadVar__2_2,
  MR_Integer mercury__bitmap__HeadVar__3_3)
{
  {
    MR_bool mercury__bitmap__succeeded;
    MR_Integer mercury__bitmap__Cast_HeadVar1_4 = mercury__bitmap__HeadVar__2_2;
    MR_Integer mercury__bitmap__Cast_HeadVar2_5 = mercury__bitmap__HeadVar__3_3;

    mercury__bitmap__succeeded = (mercury__bitmap__Cast_HeadVar1_4 < mercury__bitmap__Cast_HeadVar2_5);
    if (mercury__bitmap__succeeded)
      *mercury__bitmap__HeadVar__1_1 = (MR_Integer) 1;
    else
      {
        mercury__bitmap__succeeded = (mercury__bitmap__Cast_HeadVar1_4 == mercury__bitmap__Cast_HeadVar2_5);
        if (mercury__bitmap__succeeded)
          *mercury__bitmap__HeadVar__1_1 = (MR_Integer) 0;
        else
          *mercury__bitmap__HeadVar__1_1 = (MR_Integer) 2;
      }
  }
}

MR_bool MR_CALL 
mercury__bitmap____Unify____byte_0_0(
  MR_Integer mercury__bitmap__HeadVar__1_1,
  MR_Integer mercury__bitmap__HeadVar__2_2)
{
  {
    MR_bool mercury__bitmap__succeeded;
    MR_Integer mercury__bitmap__Cast_HeadVar1_3 = mercury__bitmap__HeadVar__1_1;
    MR_Integer mercury__bitmap__Cast_HeadVar2_4 = mercury__bitmap__HeadVar__2_2;

    mercury__bitmap__succeeded = (mercury__bitmap__Cast_HeadVar1_3 == mercury__bitmap__Cast_HeadVar2_4);
    return mercury__bitmap__succeeded;
  }
}

void MR_CALL 
mercury__bitmap____Compare____bitmap_error_0_0(
  MR_Word * mercury__bitmap__HeadVar__1_1,
  MR_Word mercury__bitmap__HeadVar__2_2,
  MR_Word mercury__bitmap__HeadVar__3_3)
{
  {
    MR_bool mercury__bitmap__succeeded;
    MR_Integer mercury__bitmap__CastX_6 = (MR_Integer) mercury__bitmap__HeadVar__2_2;
    MR_Integer mercury__bitmap__CastY_7 = (MR_Integer) mercury__bitmap__HeadVar__3_3;

    mercury__bitmap__succeeded = (mercury__bitmap__CastX_6 == mercury__bitmap__CastY_7);
    if (mercury__bitmap__succeeded)
      *mercury__bitmap__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_String mercury__bitmap__Var_4 = (MR_String) mercury__bitmap__HeadVar__2_2;
        MR_String mercury__bitmap__Var_5 = (MR_String) mercury__bitmap__HeadVar__3_3;
        MR_Integer mercury__bitmap__V_7_12;

{
#define MR_PROC_LABEL mercury__bitmap____Compare____bitmap_error_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__bitmap__Var_4 ;
	S2 =  mercury__bitmap__Var_5 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__V_7_12  = Res;
}
        mercury__bitmap__succeeded = (mercury__bitmap__V_7_12 < (MR_Integer) 0);
        if (mercury__bitmap__succeeded)
          *mercury__bitmap__HeadVar__1_1 = (MR_Integer) 1;
        else
          {
            mercury__bitmap__succeeded = (mercury__bitmap__V_7_12 == (MR_Integer) 0);
            if (mercury__bitmap__succeeded)
              *mercury__bitmap__HeadVar__1_1 = (MR_Integer) 0;
            else
              *mercury__bitmap__HeadVar__1_1 = (MR_Integer) 2;
          }
      }
  }
}

MR_bool MR_CALL 
mercury__bitmap____Unify____bitmap_error_0_0(
  MR_Word mercury__bitmap__HeadVar__1_1,
  MR_Word mercury__bitmap__HeadVar__2_2)
{
  {
    MR_bool mercury__bitmap__succeeded;
    MR_Integer mercury__bitmap__CastX_5 = (MR_Integer) mercury__bitmap__HeadVar__1_1;
    MR_Integer mercury__bitmap__CastY_6 = (MR_Integer) mercury__bitmap__HeadVar__2_2;

    mercury__bitmap__succeeded = (mercury__bitmap__CastX_5 == mercury__bitmap__CastY_6);
    if (mercury__bitmap__succeeded)
      mercury__bitmap__succeeded = MR_TRUE;
    else
      {
        MR_String mercury__bitmap__Var_3 = (MR_String) mercury__bitmap__HeadVar__1_1;
        MR_String mercury__bitmap__Var_4 = (MR_String) mercury__bitmap__HeadVar__2_2;

        mercury__bitmap__succeeded = (strcmp(mercury__bitmap__Var_3, mercury__bitmap__Var_4) == 0);
      }
    return mercury__bitmap__succeeded;
  }
}

void MR_CALL 
mercury__bitmap____Compare____bitmap_0_0(
  MR_Word * mercury__bitmap__HeadVar__1_1,
  MR_Box mercury__bitmap__HeadVar__2_2,
  MR_Box mercury__bitmap__HeadVar__3_3)
{
  {
    MR_bool mercury__bitmap__succeeded;
    MR_Integer mercury__bitmap__CastX_4 = (MR_Integer) mercury__bitmap__HeadVar__2_2;
    MR_Integer mercury__bitmap__CastY_5 = (MR_Integer) mercury__bitmap__HeadVar__3_3;

    mercury__bitmap__succeeded = (mercury__bitmap__CastX_4 == mercury__bitmap__CastY_5);
    if (mercury__bitmap__succeeded)
      *mercury__bitmap__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
{
#define MR_PROC_LABEL mercury__bitmap____Compare____bitmap_0_0

	MR_Word Result;
	MR_BitmapPtr BM1;
	MR_BitmapPtr BM2;

	BM1 = (MR_BitmapPtr) mercury__bitmap__HeadVar__2_2 ;
	BM2 = (MR_BitmapPtr) mercury__bitmap__HeadVar__3_3 ;
		{

    MR_Integer  res;
    res = MR_bitmap_cmp(BM1, BM2);
    Result = ((res < 0) ? MR_COMPARE_LESS
        : (res == 0) ? MR_COMPARE_EQUAL
        : MR_COMPARE_GREATER);


		;}
#undef MR_PROC_LABEL
	 *mercury__bitmap__HeadVar__1_1  = Result;
}
      }
  }
}

MR_bool MR_CALL 
mercury__bitmap____Unify____bitmap_0_0(
  MR_Box mercury__bitmap__HeadVar__1_1,
  MR_Box mercury__bitmap__HeadVar__2_2)
{
  {
    MR_bool mercury__bitmap__succeeded;
    MR_Integer mercury__bitmap__CastX_3 = (MR_Integer) mercury__bitmap__HeadVar__1_1;
    MR_Integer mercury__bitmap__CastY_4 = (MR_Integer) mercury__bitmap__HeadVar__2_2;

    mercury__bitmap__succeeded = (mercury__bitmap__CastX_3 == mercury__bitmap__CastY_4);
    if (mercury__bitmap__succeeded)
      mercury__bitmap__succeeded = MR_TRUE;
    else
      {
{
#define MR_PROC_LABEL mercury__bitmap____Unify____bitmap_0_0

	MR_BitmapPtr BM1;
	MR_BitmapPtr BM2;
	MR_bool SUCCESS_INDICATOR;

	BM1 = (MR_BitmapPtr) mercury__bitmap__HeadVar__1_1 ;
	BM2 = (MR_BitmapPtr) mercury__bitmap__HeadVar__2_2 ;
		{

    SUCCESS_INDICATOR = MR_bitmap_eq(BM1, BM2);


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
mercury__bitmap__succeeded  = SUCCESS_INDICATOR;
}
      }
    return mercury__bitmap__succeeded;
  }
}

void MR_CALL 
mercury__bitmap____Compare____bit_index_in_byte_0_0(
  MR_Word * mercury__bitmap__HeadVar__1_1,
  MR_Integer mercury__bitmap__HeadVar__2_2,
  MR_Integer mercury__bitmap__HeadVar__3_3)
{
  {
    MR_bool mercury__bitmap__succeeded;
    MR_Integer mercury__bitmap__Cast_HeadVar1_4 = mercury__bitmap__HeadVar__2_2;
    MR_Integer mercury__bitmap__Cast_HeadVar2_5 = mercury__bitmap__HeadVar__3_3;

    mercury__bitmap__succeeded = (mercury__bitmap__Cast_HeadVar1_4 < mercury__bitmap__Cast_HeadVar2_5);
    if (mercury__bitmap__succeeded)
      *mercury__bitmap__HeadVar__1_1 = (MR_Integer) 1;
    else
      {
        mercury__bitmap__succeeded = (mercury__bitmap__Cast_HeadVar1_4 == mercury__bitmap__Cast_HeadVar2_5);
        if (mercury__bitmap__succeeded)
          *mercury__bitmap__HeadVar__1_1 = (MR_Integer) 0;
        else
          *mercury__bitmap__HeadVar__1_1 = (MR_Integer) 2;
      }
  }
}

MR_bool MR_CALL 
mercury__bitmap____Unify____bit_index_in_byte_0_0(
  MR_Integer mercury__bitmap__HeadVar__1_1,
  MR_Integer mercury__bitmap__HeadVar__2_2)
{
  {
    MR_bool mercury__bitmap__succeeded;
    MR_Integer mercury__bitmap__Cast_HeadVar1_3 = mercury__bitmap__HeadVar__1_1;
    MR_Integer mercury__bitmap__Cast_HeadVar2_4 = mercury__bitmap__HeadVar__2_2;

    mercury__bitmap__succeeded = (mercury__bitmap__Cast_HeadVar1_3 == mercury__bitmap__Cast_HeadVar2_4);
    return mercury__bitmap__succeeded;
  }
}

void MR_CALL 
mercury__bitmap____Compare____bit_index_0_0(
  MR_Word * mercury__bitmap__HeadVar__1_1,
  MR_Integer mercury__bitmap__HeadVar__2_2,
  MR_Integer mercury__bitmap__HeadVar__3_3)
{
  {
    MR_bool mercury__bitmap__succeeded;
    MR_Integer mercury__bitmap__Cast_HeadVar1_4 = mercury__bitmap__HeadVar__2_2;
    MR_Integer mercury__bitmap__Cast_HeadVar2_5 = mercury__bitmap__HeadVar__3_3;

    mercury__bitmap__succeeded = (mercury__bitmap__Cast_HeadVar1_4 < mercury__bitmap__Cast_HeadVar2_5);
    if (mercury__bitmap__succeeded)
      *mercury__bitmap__HeadVar__1_1 = (MR_Integer) 1;
    else
      {
        mercury__bitmap__succeeded = (mercury__bitmap__Cast_HeadVar1_4 == mercury__bitmap__Cast_HeadVar2_5);
        if (mercury__bitmap__succeeded)
          *mercury__bitmap__HeadVar__1_1 = (MR_Integer) 0;
        else
          *mercury__bitmap__HeadVar__1_1 = (MR_Integer) 2;
      }
  }
}

MR_bool MR_CALL 
mercury__bitmap____Unify____bit_index_0_0(
  MR_Integer mercury__bitmap__HeadVar__1_1,
  MR_Integer mercury__bitmap__HeadVar__2_2)
{
  {
    MR_bool mercury__bitmap__succeeded;
    MR_Integer mercury__bitmap__Cast_HeadVar1_3 = mercury__bitmap__HeadVar__1_1;
    MR_Integer mercury__bitmap__Cast_HeadVar2_4 = mercury__bitmap__HeadVar__2_2;

    mercury__bitmap__succeeded = (mercury__bitmap__Cast_HeadVar1_3 == mercury__bitmap__Cast_HeadVar2_4);
    return mercury__bitmap__succeeded;
  }
}

void MR_CALL 
mercury__bitmap__throw_bitmap_error_1_p_0(
  MR_String mercury__bitmap__Msg_2)
{
  {
    MR_bool mercury__bitmap__succeeded;
    MR_Word mercury__bitmap__TypeCtorInfo_4_4 = (MR_Word) &mercury__bitmap__bitmap__type_ctor_info_bitmap_error_0;
    MR_Word mercury__bitmap__Var_3 = (MR_Word) mercury__bitmap__Msg_2;

    {
      mercury__exception__throw_1_p_0(mercury__bitmap__TypeCtorInfo_4_4, ((MR_Box) (mercury__bitmap__Var_3)));
      return;
    }
  }
}

MR_Box MR_CALL 
mercury__bitmap__throw_bitmap_error_1_f_0(
  MR_Word mercury__bitmap__TypeInfo_5_5,
  MR_String mercury__bitmap__Msg_3)
{
  {
    MR_bool mercury__bitmap__succeeded;
    MR_Box mercury__bitmap__HeadVar__2_4;
    MR_Word mercury__bitmap__TypeCtorInfo_4_8 = (MR_Word) &mercury__bitmap__bitmap__type_ctor_info_bitmap_error_0;
    MR_Word mercury__bitmap__Var_7 = (MR_Word) mercury__bitmap__Msg_3;

    {
      mercury__exception__throw_1_p_0(mercury__bitmap__TypeCtorInfo_4_8, ((MR_Box) (mercury__bitmap__Var_7)));
    }
    return mercury__bitmap__HeadVar__2_4;
  }
}

MR_Box MR_CALL 
mercury__bitmap__throw_bounds_error_3_f_0(
  MR_Word mercury__bitmap__TypeInfo_18_18,
  MR_Box mercury__bitmap__BM_5,
  MR_String mercury__bitmap__Pred_6,
  MR_Integer mercury__bitmap__Index_7)
{
  {
    MR_bool mercury__bitmap__succeeded;
    MR_Box mercury__bitmap__HeadVar__4_4;
    MR_Word mercury__bitmap__TypeCtorInfo_4_87;
    MR_String mercury__bitmap__Var_8;
    MR_Integer mercury__bitmap__Var_16;
    MR_String mercury__bitmap__Var_20;
    MR_Word mercury__bitmap__Var_26;
    MR_String mercury__bitmap__Var_27;
    MR_String mercury__bitmap__Var_29;
    MR_String mercury__bitmap__Var_30;
    MR_String mercury__bitmap__Var_37;
    MR_String mercury__bitmap__Var_39;
    MR_Word mercury__bitmap__V_7_46;
    MR_Word mercury__bitmap__V_8_47;
    MR_Word mercury__bitmap__V_7_63;
    MR_Word mercury__bitmap__V_8_64;
    MR_Word mercury__bitmap__Var_86;

{
#define MR_PROC_LABEL mercury__bitmap__throw_bounds_error_3_f_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr) mercury__bitmap__BM_5 ;
		{

    NumBits = BM->num_bits;


		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__Var_16  = NumBits;
}
    mercury__bitmap__Var_26 = (MR_Word) &mercury__bitmap_scalar_common_5[0];
    mercury__bitmap__V_7_46 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    mercury__bitmap__V_8_47 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    {
      mercury__string__format__format_signed_int_component_5_p_0(mercury__bitmap__Var_26, mercury__bitmap__V_7_46, mercury__bitmap__V_8_47, mercury__bitmap__Var_16, &mercury__bitmap__Var_20);
    }
    {
      mercury__string__append_3_p_2(mercury__bitmap__Var_20, (MR_String) ").", &mercury__bitmap__Var_27);
    }
    {
      mercury__string__append_3_p_2((MR_String) " is out of bounds [0 - ", mercury__bitmap__Var_27, &mercury__bitmap__Var_29);
    }
    mercury__bitmap__V_7_63 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    mercury__bitmap__V_8_64 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    {
      mercury__string__format__format_signed_int_component_5_p_0(mercury__bitmap__Var_26, mercury__bitmap__V_7_63, mercury__bitmap__V_8_64, mercury__bitmap__Index_7, &mercury__bitmap__Var_30);
    }
    {
      mercury__string__append_3_p_2(mercury__bitmap__Var_30, mercury__bitmap__Var_29, &mercury__bitmap__Var_37);
    }
    {
      mercury__string__append_3_p_2((MR_String) ": index ", mercury__bitmap__Var_37, &mercury__bitmap__Var_39);
    }
    {
      mercury__string__append_3_p_2(mercury__bitmap__Pred_6, mercury__bitmap__Var_39, &mercury__bitmap__Var_8);
    }
    mercury__bitmap__Var_86 = (MR_Word) mercury__bitmap__Var_8;
    mercury__bitmap__TypeCtorInfo_4_87 = (MR_Word) &mercury__bitmap__bitmap__type_ctor_info_bitmap_error_0;
    {
      mercury__exception__throw_1_p_0(mercury__bitmap__TypeCtorInfo_4_87, ((MR_Box) (mercury__bitmap__Var_86)));
    }
    return mercury__bitmap__HeadVar__4_4;
  }
}

static MR_Integer MR_CALL 
mercury__bitmap__set_bits_in_byte_4_f_0(
  MR_Integer mercury__bitmap__Byte0_6,
  MR_Integer mercury__bitmap__FirstBit_7,
  MR_Integer mercury__bitmap__NumBits_8,
  MR_Integer mercury__bitmap__Bits_9)
{
  {
    MR_bool mercury__bitmap__succeeded;
    MR_Integer mercury__bitmap__Byte_10;
    MR_Integer mercury__bitmap__LastBit_11;
    MR_Integer mercury__bitmap__Shift_12;
    MR_Integer mercury__bitmap__Mask_13;
    MR_Integer mercury__bitmap__BitsToSet_14;
    MR_Integer mercury__bitmap__Var_15 = (mercury__bitmap__FirstBit_7 + mercury__bitmap__NumBits_8);
    MR_Integer mercury__bitmap__Var_17;
    MR_Integer mercury__bitmap__Var_20;
    MR_Integer mercury__bitmap__Var_21;
    MR_Integer mercury__bitmap__Var_22;
    MR_Integer mercury__bitmap__Var_23;
    MR_Integer mercury__bitmap__BitMask_26;
    MR_Integer mercury__bitmap__Var_28;
    MR_Integer mercury__bitmap__Var_30;

    mercury__bitmap__LastBit_11 = (mercury__bitmap__Var_15 - (MR_Integer) 1);
    mercury__bitmap__Var_17 = ((MR_Integer) 8 - (MR_Integer) 1);
    mercury__bitmap__Shift_12 = (mercury__bitmap__Var_17 - mercury__bitmap__LastBit_11);
    mercury__bitmap__Var_28 = (mercury__bitmap__NumBits_8 - (MR_Integer) 1);
    mercury__bitmap__BitMask_26 = ((MR_Integer) 1 << mercury__bitmap__Var_28);
    mercury__bitmap__Var_30 = (mercury__bitmap__BitMask_26 - (MR_Integer) 1);
    mercury__bitmap__Mask_13 = (mercury__bitmap__BitMask_26 | mercury__bitmap__Var_30);
    mercury__bitmap__BitsToSet_14 = (mercury__bitmap__Mask_13 & mercury__bitmap__Bits_9);
    mercury__bitmap__Var_22 = (mercury__bitmap__Mask_13 << mercury__bitmap__Shift_12);
    mercury__bitmap__Var_21 = ~(mercury__bitmap__Var_22);
    mercury__bitmap__Var_20 = (mercury__bitmap__Byte0_6 & mercury__bitmap__Var_21);
    mercury__bitmap__Var_23 = (mercury__bitmap__BitsToSet_14 << mercury__bitmap__Shift_12);
    mercury__bitmap__Byte_10 = (mercury__bitmap__Var_20 | mercury__bitmap__Var_23);
    return mercury__bitmap__Byte_10;
  }
}

static MR_Integer MR_CALL 
mercury__bitmap__extract_bits_from_byte_3_f_0(
  MR_Integer mercury__bitmap__Byte_5,
  MR_Integer mercury__bitmap__FirstBit_6,
  MR_Integer mercury__bitmap__NumBits_7)
{
  {
    MR_bool mercury__bitmap__succeeded;
    MR_Integer mercury__bitmap__Bits_8;
    MR_Integer mercury__bitmap__LastBit_9;
    MR_Integer mercury__bitmap__Shift_10;
    MR_Integer mercury__bitmap__Var_11 = (mercury__bitmap__FirstBit_6 + mercury__bitmap__NumBits_7);
    MR_Integer mercury__bitmap__Var_13;
    MR_Integer mercury__bitmap__Var_16;
    MR_Integer mercury__bitmap__Var_17;
    MR_Integer mercury__bitmap__BitMask_20;
    MR_Integer mercury__bitmap__Var_22;
    MR_Integer mercury__bitmap__Var_24;

    mercury__bitmap__LastBit_9 = (mercury__bitmap__Var_11 - (MR_Integer) 1);
    mercury__bitmap__Var_13 = ((MR_Integer) 8 - (MR_Integer) 1);
    mercury__bitmap__Shift_10 = (mercury__bitmap__Var_13 - mercury__bitmap__LastBit_9);
    mercury__bitmap__Var_16 = (mercury__bitmap__Byte_5 >> mercury__bitmap__Shift_10);
    mercury__bitmap__Var_22 = (mercury__bitmap__NumBits_7 - (MR_Integer) 1);
    mercury__bitmap__BitMask_20 = ((MR_Integer) 1 << mercury__bitmap__Var_22);
    mercury__bitmap__Var_24 = (mercury__bitmap__BitMask_20 - (MR_Integer) 1);
    mercury__bitmap__Var_17 = (mercury__bitmap__BitMask_20 | mercury__bitmap__Var_24);
    mercury__bitmap__Bits_8 = (mercury__bitmap__Var_16 & mercury__bitmap__Var_17);
    return mercury__bitmap__Bits_8;
  }
}

MR_Integer MR_CALL 
mercury__bitmap__bitmask_1_f_0(
  MR_Integer mercury__bitmap__I_3)
{
  {
    MR_bool mercury__bitmap__succeeded;
    MR_Integer mercury__bitmap__HeadVar__2_2;
    MR_Integer mercury__bitmap__Var_5;
    MR_Integer mercury__bitmap__Var_6 = ((MR_Integer) 8 - (MR_Integer) 1);
    MR_Integer mercury__bitmap__Var_9 = (mercury__bitmap__I_3 % (MR_Integer) 8);

    mercury__bitmap__Var_5 = (mercury__bitmap__Var_6 - mercury__bitmap__Var_9);
    mercury__bitmap__HeadVar__2_2 = ((MR_Integer) 1 << mercury__bitmap__Var_5);
    return mercury__bitmap__HeadVar__2_2;
  }
}

MR_Integer MR_CALL 
mercury__bitmap__bit_index_in_byte_1_f_0(
  MR_Integer mercury__bitmap__I_3)
{
  {
    MR_bool mercury__bitmap__succeeded;
    MR_Integer mercury__bitmap__HeadVar__2_2 = (mercury__bitmap__I_3 % (MR_Integer) 8);

    return mercury__bitmap__HeadVar__2_2;
  }
}

MR_Integer MR_CALL 
mercury__bitmap__byte_index_for_bit_1_f_0(
  MR_Integer mercury__bitmap__I_3)
{
  {
    MR_bool mercury__bitmap__succeeded = (mercury__bitmap__I_3 < (MR_Integer) 0);
    MR_Integer mercury__bitmap__HeadVar__2_2;

    if (mercury__bitmap__succeeded)
      mercury__bitmap__HeadVar__2_2 = (MR_Integer) -1;
    else
      {
        mercury__bitmap__HeadVar__2_2 = (mercury__bitmap__I_3 / (MR_Integer) 8);
      }
    return mercury__bitmap__HeadVar__2_2;
  }
}

static MR_Box MR_CALL 
mercury__bitmap__allocate_bitmap_1_f_0(
  MR_Integer mercury__bitmap__N_1)
{
  {
    MR_bool mercury__bitmap__succeeded;
    MR_Box mercury__bitmap__BM_2;

{
#define MR_PROC_LABEL mercury__bitmap__allocate_bitmap_1_f_0

	MR_Integer N;
	MR_BitmapPtr BM;

	N =  mercury__bitmap__N_1 ;
		{

    MR_allocate_bitmap_msg(BM, N, MR_ALLOC_ID);


		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__BM_2  = (MR_Box) BM;
}
    return mercury__bitmap__BM_2;
  }
}

void MR_CALL 
mercury__bitmap__bitmap_compare_3_p_0(
  MR_Word * mercury__bitmap__Result_1,
  MR_Box mercury__bitmap__BM1_2,
  MR_Box mercury__bitmap__BM2_3)
{
  {
    MR_bool mercury__bitmap__succeeded;

{
#define MR_PROC_LABEL mercury__bitmap__bitmap_compare_3_p_0

	MR_Word Result;
	MR_BitmapPtr BM1;
	MR_BitmapPtr BM2;

	BM1 = (MR_BitmapPtr) mercury__bitmap__BM1_2 ;
	BM2 = (MR_BitmapPtr) mercury__bitmap__BM2_3 ;
		{

    MR_Integer  res;
    res = MR_bitmap_cmp(BM1, BM2);
    Result = ((res < 0) ? MR_COMPARE_LESS
        : (res == 0) ? MR_COMPARE_EQUAL
        : MR_COMPARE_GREATER);


		;}
#undef MR_PROC_LABEL
	 *mercury__bitmap__Result_1  = Result;
}
  }
}

MR_bool MR_CALL 
mercury__bitmap__bitmap_equal_2_p_0(
  MR_Box mercury__bitmap__BM1_1,
  MR_Box mercury__bitmap__BM2_2)
{
  {
    MR_bool mercury__bitmap__succeeded;

{
#define MR_PROC_LABEL mercury__bitmap__bitmap_equal_2_p_0

	MR_BitmapPtr BM1;
	MR_BitmapPtr BM2;
	MR_bool SUCCESS_INDICATOR;

	BM1 = (MR_BitmapPtr) mercury__bitmap__BM1_1 ;
	BM2 = (MR_BitmapPtr) mercury__bitmap__BM2_2 ;
		{

    SUCCESS_INDICATOR = MR_bitmap_eq(BM1, BM2);


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
mercury__bitmap__succeeded  = SUCCESS_INDICATOR;
}
    return mercury__bitmap__succeeded;
  }
}

static void MR_CALL 
mercury__bitmap__hash_2_5_p_0(
  MR_Box mercury__bitmap__BM_6,
  MR_Integer mercury__bitmap__Index_7,
  MR_Integer mercury__bitmap__Length_8,
  MR_Integer mercury__bitmap__STATE_VARIABLE_HashVal_0_10,
  MR_Integer * mercury__bitmap__STATE_VARIABLE_HashVal_11)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__bitmap__succeeded = (mercury__bitmap__Index_7 < mercury__bitmap__Length_8);

        if (mercury__bitmap__succeeded)
          {
            MR_Integer mercury__bitmap__Var_12;
            MR_Integer mercury__bitmap__STATE_VARIABLE_HashVal_13_13;
            MR_Integer mercury__bitmap__Var_14;
            MR_Integer mercury__bitmap__H1_24;
            MR_Integer mercury__bitmap__Var_25;

{
#define MR_PROC_LABEL mercury__bitmap__hash_2_5_p_0

	MR_Integer N;
	MR_BitmapPtr BM;
	MR_Integer Byte;

	N =  mercury__bitmap__Index_7 ;
	BM = (MR_BitmapPtr) mercury__bitmap__BM_6 ;
		{

    Byte = (MR_Integer) BM->elements[N];


		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__Var_12  = Byte;
}
            {
              mercury__bitmap__Var_25 = mercury__int__f_60_60_2_f_0(mercury__bitmap__STATE_VARIABLE_HashVal_0_10, (MR_Integer) 5);
            }
            mercury__bitmap__H1_24 = (mercury__bitmap__STATE_VARIABLE_HashVal_0_10 ^ mercury__bitmap__Var_25);
            mercury__bitmap__STATE_VARIABLE_HashVal_13_13 = (mercury__bitmap__H1_24 ^ mercury__bitmap__Var_12);
            mercury__bitmap__Var_14 = (mercury__bitmap__Index_7 + (MR_Integer) 1);
            /* direct tailcall eliminated */
            {
              MR_Integer mercury__bitmap__next_value_of_Index_7 = mercury__bitmap__Var_14;
              MR_Integer mercury__bitmap__next_value_of_STATE_VARIABLE_HashVal_0_10 = mercury__bitmap__STATE_VARIABLE_HashVal_13_13;

              mercury__bitmap__STATE_VARIABLE_HashVal_0_10 = mercury__bitmap__next_value_of_STATE_VARIABLE_HashVal_0_10;
              mercury__bitmap__Index_7 = mercury__bitmap__next_value_of_Index_7;
            }
            continue;
          }
        else
          *mercury__bitmap__STATE_VARIABLE_HashVal_11 = mercury__bitmap__STATE_VARIABLE_HashVal_0_10;
      }
      break;
    }
}

MR_Word MR_CALL 
mercury__bitmap__bitmap_to_byte_strings_3_f_0(
  MR_Box mercury__bitmap__BM_5,
  MR_Integer mercury__bitmap__NumBits_6,
  MR_Word mercury__bitmap__STATE_VARIABLE_Strs_0_13)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__bitmap__succeeded = (mercury__bitmap__NumBits_6 <= (MR_Integer) 0);
        MR_Word mercury__bitmap__STATE_VARIABLE_Strs_14;

        if (mercury__bitmap__succeeded)
          mercury__bitmap__STATE_VARIABLE_Strs_14 = mercury__bitmap__STATE_VARIABLE_Strs_0_13;
        else
          {
            MR_Integer mercury__bitmap__ThisByte0_8;
            MR_Integer mercury__bitmap__LastBitIndex_9;
            MR_Integer mercury__bitmap__BitsThisByte_10;
            MR_Integer mercury__bitmap__ThisByte_11;
            MR_String mercury__bitmap__ThisByteStr_12;
            MR_Integer mercury__bitmap__Var_16;
            MR_Integer mercury__bitmap__Var_17 = (mercury__bitmap__NumBits_6 - (MR_Integer) 1);
            MR_Integer mercury__bitmap__Var_19;
            MR_String mercury__bitmap__Var_26;
            MR_Word mercury__bitmap__STATE_VARIABLE_Strs_29_29;
            MR_Integer mercury__bitmap__Var_31;
            MR_Integer mercury__bitmap__Var_22;

            mercury__bitmap__succeeded = (mercury__bitmap__Var_17 < (MR_Integer) 0);
            if (mercury__bitmap__succeeded)
              mercury__bitmap__Var_16 = (MR_Integer) -1;
            else
              {
                mercury__bitmap__Var_16 = (mercury__bitmap__Var_17 / (MR_Integer) 8);
              }
{
#define MR_PROC_LABEL mercury__bitmap__bitmap_to_byte_strings_3_f_0

	MR_Integer N;
	MR_BitmapPtr BM;
	MR_Integer Byte;

	N =  mercury__bitmap__Var_16 ;
	BM = (MR_BitmapPtr) mercury__bitmap__BM_5 ;
		{

    Byte = (MR_Integer) BM->elements[N];


		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__ThisByte0_8  = Byte;
}
            mercury__bitmap__Var_19 = (mercury__bitmap__NumBits_6 - (MR_Integer) 1);
            mercury__bitmap__LastBitIndex_9 = (mercury__bitmap__Var_19 % (MR_Integer) 8);
            mercury__bitmap__Var_22 = ((MR_Integer) 8 - mercury__bitmap__LastBitIndex_9);
            mercury__bitmap__succeeded = (mercury__bitmap__Var_22 == (MR_Integer) 1);
            if (mercury__bitmap__succeeded)
              {
                mercury__bitmap__BitsThisByte_10 = (MR_Integer) 8;
                mercury__bitmap__ThisByte_11 = mercury__bitmap__ThisByte0_8;
              }
            else
              {
                MR_Integer mercury__bitmap__Var_24;

                mercury__bitmap__BitsThisByte_10 = (mercury__bitmap__LastBitIndex_9 + (MR_Integer) 1);
                mercury__bitmap__Var_24 = ((MR_Integer) 8 - mercury__bitmap__BitsThisByte_10);
                mercury__bitmap__ThisByte_11 = (mercury__bitmap__ThisByte0_8 >> mercury__bitmap__Var_24);
              }
            {
              mercury__string__int_to_base_string_3_p_0(mercury__bitmap__ThisByte_11, (MR_Integer) 2, &mercury__bitmap__Var_26);
            }
            {
              mercury__string__pad_left_4_p_0(mercury__bitmap__Var_26, (MR_Char) 48, mercury__bitmap__BitsThisByte_10, &mercury__bitmap__ThisByteStr_12);
            }
            {
              mercury__bitmap__STATE_VARIABLE_Strs_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), mercury__bitmap__STATE_VARIABLE_Strs_29_29, 0) = ((MR_Box) (mercury__bitmap__ThisByteStr_12));
              MR_hl_field(MR_mktag(1), mercury__bitmap__STATE_VARIABLE_Strs_29_29, 1) = ((MR_Box) (mercury__bitmap__STATE_VARIABLE_Strs_0_13));
            }
            mercury__bitmap__Var_31 = (mercury__bitmap__NumBits_6 - mercury__bitmap__BitsThisByte_10);
            /* direct tailcall eliminated */
            {
              MR_Integer mercury__bitmap__next_value_of_NumBits_6 = mercury__bitmap__Var_31;
              MR_Word mercury__bitmap__next_value_of_STATE_VARIABLE_Strs_0_13 = mercury__bitmap__STATE_VARIABLE_Strs_29_29;

              mercury__bitmap__STATE_VARIABLE_Strs_0_13 = mercury__bitmap__next_value_of_STATE_VARIABLE_Strs_0_13;
              mercury__bitmap__NumBits_6 = mercury__bitmap__next_value_of_NumBits_6;
            }
            continue;
          }
        return mercury__bitmap__STATE_VARIABLE_Strs_14;
      }
      break;
    }
}

MR_Word MR_CALL 
mercury__bitmap__bitmap_to_byte_strings_1_f_0(
  MR_Box mercury__bitmap__BM_3)
{
  {
    MR_bool mercury__bitmap__succeeded;
    MR_Word mercury__bitmap__Strs_4;
    MR_Integer mercury__bitmap__NumBits_5;
    MR_Word mercury__bitmap__Var_6;

{
#define MR_PROC_LABEL mercury__bitmap__bitmap_to_byte_strings_1_f_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr) mercury__bitmap__BM_3 ;
		{

    NumBits = BM->num_bits;


		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__NumBits_5  = NumBits;
}
    mercury__bitmap__Var_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    {
      mercury__bitmap__Strs_4 = mercury__bitmap__bitmap_to_byte_strings_3_f_0(mercury__bitmap__BM_3, mercury__bitmap__NumBits_5, mercury__bitmap__Var_6);
    }
    return mercury__bitmap__Strs_4;
  }
}

static MR_bool MR_CALL 
mercury__bitmap__hex_chars_to_bitmap_6_p_0(
  MR_String mercury__bitmap__Str_7,
  MR_Integer mercury__bitmap__Index_8,
  MR_Integer mercury__bitmap__End_9,
  MR_Integer mercury__bitmap__ByteIndex_10,
  MR_Box mercury__bitmap__STATE_VARIABLE_BM_0_15,
  MR_Box * mercury__bitmap__STATE_VARIABLE_BM_16)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__bitmap__succeeded = (mercury__bitmap__Index_8 == mercury__bitmap__End_9);

        if (mercury__bitmap__succeeded)
          {
            *mercury__bitmap__STATE_VARIABLE_BM_16 = mercury__bitmap__STATE_VARIABLE_BM_0_15;
            mercury__bitmap__succeeded = MR_TRUE;
          }
        else
          {
            MR_Integer mercury__bitmap__Var_17 = (mercury__bitmap__End_9 - mercury__bitmap__Index_8);

            mercury__bitmap__succeeded = (mercury__bitmap__Var_17 == (MR_Integer) 1);
            if (mercury__bitmap__succeeded)
              mercury__bitmap__succeeded = MR_FALSE;
            else
              {
                MR_Integer mercury__bitmap__HighNibble_12;
                MR_Integer mercury__bitmap__LowNibble_13;
                MR_Integer mercury__bitmap__Byte_14;
                MR_Char mercury__bitmap__Var_18;
                MR_Char mercury__bitmap__Var_19;
                MR_Integer mercury__bitmap__Var_20;
                MR_Integer mercury__bitmap__Var_21;
                MR_Integer mercury__bitmap__Var_22;
                MR_Integer mercury__bitmap__Var_23;
                MR_Box mercury__bitmap__STATE_VARIABLE_BM_24_24;
                MR_Integer mercury__bitmap__Var_25;
                MR_Integer mercury__bitmap__Var_26;
                MR_Integer mercury__bitmap__Var_28;
                MR_Integer mercury__bitmap__Var_29;

                {
                  mercury__string__unsafe_index_3_p_0(mercury__bitmap__Str_7, mercury__bitmap__Index_8, &mercury__bitmap__Var_18);
                }
                {
                  mercury__bitmap__succeeded = mercury__char__hex_digit_to_int_2_p_0(mercury__bitmap__Var_18, &mercury__bitmap__HighNibble_12);
                }
                if (mercury__bitmap__succeeded)
                  {
                    mercury__bitmap__Var_21 = (MR_Integer) 1;
                    mercury__bitmap__Var_20 = (mercury__bitmap__Index_8 + mercury__bitmap__Var_21);
                    {
                      mercury__string__unsafe_index_3_p_0(mercury__bitmap__Str_7, mercury__bitmap__Var_20, &mercury__bitmap__Var_19);
                    }
                    {
                      mercury__bitmap__succeeded = mercury__char__hex_digit_to_int_2_p_0(mercury__bitmap__Var_19, &mercury__bitmap__LowNibble_13);
                    }
                    if (mercury__bitmap__succeeded)
                      {
                        mercury__bitmap__Var_23 = (MR_Integer) 4;
                        mercury__bitmap__Var_22 = (mercury__bitmap__HighNibble_12 << mercury__bitmap__Var_23);
                        mercury__bitmap__Byte_14 = (mercury__bitmap__Var_22 | mercury__bitmap__LowNibble_13);
{
#define MR_PROC_LABEL mercury__bitmap__hex_chars_to_bitmap_6_p_0

	MR_Integer N;
	MR_BitmapPtr BM0;
	MR_Integer Byte;
	MR_BitmapPtr BM;

	N =  mercury__bitmap__ByteIndex_10 ;
	BM0 = (MR_BitmapPtr) mercury__bitmap__STATE_VARIABLE_BM_0_15 ;
	Byte =  mercury__bitmap__Byte_14 ;
		{

    BM = BM0;
    BM->elements[N] = (MR_uint_least8_t) Byte;


		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__STATE_VARIABLE_BM_24_24  = (MR_Box) BM;
}
                        mercury__bitmap__Var_28 = (MR_Integer) 2;
                        mercury__bitmap__Var_25 = (mercury__bitmap__Index_8 + mercury__bitmap__Var_28);
                        mercury__bitmap__Var_29 = (MR_Integer) 1;
                        mercury__bitmap__Var_26 = (mercury__bitmap__ByteIndex_10 + mercury__bitmap__Var_29);
                        /* direct tailcall eliminated */
                        {
                          MR_Integer mercury__bitmap__next_value_of_Index_8 = mercury__bitmap__Var_25;
                          MR_Integer mercury__bitmap__next_value_of_ByteIndex_10 = mercury__bitmap__Var_26;
                          MR_Box mercury__bitmap__next_value_of_STATE_VARIABLE_BM_0_15 = mercury__bitmap__STATE_VARIABLE_BM_24_24;

                          mercury__bitmap__STATE_VARIABLE_BM_0_15 = mercury__bitmap__next_value_of_STATE_VARIABLE_BM_0_15;
                          mercury__bitmap__ByteIndex_10 = mercury__bitmap__next_value_of_ByteIndex_10;
                          mercury__bitmap__Index_8 = mercury__bitmap__next_value_of_Index_8;
                        }
                        continue;
                      }
                  }
              }
          }
        return mercury__bitmap__succeeded;
      }
      break;
    }
}

static void MR_CALL 
mercury__bitmap__to_string_chars_4_p_0(
  MR_Integer mercury__bitmap__Index_5,
  MR_Box mercury__bitmap__BM_6,
  MR_Word mercury__bitmap__STATE_VARIABLE_Chars_0_12,
  MR_Word * mercury__bitmap__STATE_VARIABLE_Chars_13)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__bitmap__succeeded = (mercury__bitmap__Index_5 < (MR_Integer) 0);

        if (mercury__bitmap__succeeded)
          *mercury__bitmap__STATE_VARIABLE_Chars_13 = mercury__bitmap__STATE_VARIABLE_Chars_0_12;
        else
          {
            MR_Integer mercury__bitmap__Byte_8;
            MR_Integer mercury__bitmap__Mask_9;
            MR_Integer mercury__bitmap__BitMask_34;
            MR_Integer mercury__bitmap__Var_36;
            MR_Integer mercury__bitmap__Var_38;
            MR_Char mercury__bitmap__HighChar_10;
            MR_Char mercury__bitmap__LowChar_11;
            MR_Integer mercury__bitmap__Var_16;
            MR_Integer mercury__bitmap__Var_17;
            MR_Integer mercury__bitmap__Var_19;

{
#define MR_PROC_LABEL mercury__bitmap__to_string_chars_4_p_0

	MR_Integer N;
	MR_BitmapPtr BM;
	MR_Integer Byte;

	N =  mercury__bitmap__Index_5 ;
	BM = (MR_BitmapPtr) mercury__bitmap__BM_6 ;
		{

    Byte = (MR_Integer) BM->elements[N];


		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__Byte_8  = Byte;
}
            mercury__bitmap__Var_36 = ((MR_Integer) 4 - (MR_Integer) 1);
            mercury__bitmap__BitMask_34 = ((MR_Integer) 1 << mercury__bitmap__Var_36);
            mercury__bitmap__Var_38 = (mercury__bitmap__BitMask_34 - (MR_Integer) 1);
            mercury__bitmap__Mask_9 = (mercury__bitmap__BitMask_34 | mercury__bitmap__Var_38);
            mercury__bitmap__Var_17 = (mercury__bitmap__Byte_8 >> (MR_Integer) 4);
            mercury__bitmap__Var_16 = (mercury__bitmap__Var_17 & mercury__bitmap__Mask_9);
            {
              mercury__bitmap__succeeded = mercury__char__int_to_hex_digit_2_p_0(mercury__bitmap__Var_16, &mercury__bitmap__HighChar_10);
            }
            if (mercury__bitmap__succeeded)
              {
                mercury__bitmap__Var_19 = (mercury__bitmap__Byte_8 & mercury__bitmap__Mask_9);
                {
                  mercury__bitmap__succeeded = mercury__char__int_to_hex_digit_2_p_0(mercury__bitmap__Var_19, &mercury__bitmap__LowChar_11);
                }
              }
            if (mercury__bitmap__succeeded)
              {
                MR_Word mercury__bitmap__STATE_VARIABLE_Chars_20_20;
                MR_Word mercury__bitmap__Var_21;
                MR_Integer mercury__bitmap__Var_22;

                {
                  mercury__bitmap__Var_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), mercury__bitmap__Var_21, 0) = ((MR_Box) (MR_Word) (mercury__bitmap__LowChar_11));
                  MR_hl_field(MR_mktag(1), mercury__bitmap__Var_21, 1) = ((MR_Box) (mercury__bitmap__STATE_VARIABLE_Chars_0_12));
                }
                {
                  mercury__bitmap__STATE_VARIABLE_Chars_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), mercury__bitmap__STATE_VARIABLE_Chars_20_20, 0) = ((MR_Box) (MR_Word) (mercury__bitmap__HighChar_10));
                  MR_hl_field(MR_mktag(1), mercury__bitmap__STATE_VARIABLE_Chars_20_20, 1) = ((MR_Box) (mercury__bitmap__Var_21));
                }
                mercury__bitmap__Var_22 = (mercury__bitmap__Index_5 - (MR_Integer) 1);
                /* direct tailcall eliminated */
                {
                  MR_Integer mercury__bitmap__next_value_of_Index_5 = mercury__bitmap__Var_22;
                  MR_Word mercury__bitmap__next_value_of_STATE_VARIABLE_Chars_0_12 = mercury__bitmap__STATE_VARIABLE_Chars_20_20;

                  mercury__bitmap__STATE_VARIABLE_Chars_0_12 = mercury__bitmap__next_value_of_STATE_VARIABLE_Chars_0_12;
                  mercury__bitmap__Index_5 = mercury__bitmap__next_value_of_Index_5;
                }
                continue;
              }
            else
              {
                MR_Word mercury__bitmap__TypeCtorInfo_27_27 = (MR_Word) &mercury__exception__exception__type_ctor_info_software_error_0;
                MR_Word mercury__bitmap__Var_25 = (MR_Word) ((MR_Box) ((MR_String) "bitmap.to_string: internal error"));

                {
                  mercury__exception__throw_1_p_0(mercury__bitmap__TypeCtorInfo_27_27, ((MR_Box) (mercury__bitmap__Var_25)));
                  return;
                }
              }
          }
      }
      break;
    }
}

static MR_Box MR_CALL 
mercury__bitmap__unsafe_copy_unaligned_bytes_rtol_7_f_0(
  MR_Box mercury__bitmap__SrcBM_9,
  MR_Integer mercury__bitmap__SrcByteIndex_10,
  MR_Integer mercury__bitmap__SrcBitIndex_11,
  MR_Integer mercury__bitmap__PrevSrcByteBits_12,
  MR_Box mercury__bitmap__STATE_VARIABLE_DestBM_0_18,
  MR_Integer mercury__bitmap__DestByteIndex_14,
  MR_Integer mercury__bitmap__NumBytes_15)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__bitmap__succeeded = (mercury__bitmap__NumBytes_15 <= (MR_Integer) 0);
        MR_Box mercury__bitmap__STATE_VARIABLE_DestBM_19;

        if (mercury__bitmap__succeeded)
          mercury__bitmap__STATE_VARIABLE_DestBM_19 = mercury__bitmap__STATE_VARIABLE_DestBM_0_18;
        else
          {
            MR_Integer mercury__bitmap__SrcByteBits_16;
            MR_Integer mercury__bitmap__DestByteBits_17;
            MR_Integer mercury__bitmap__Var_21;
            MR_Integer mercury__bitmap__Var_22;
            MR_Integer mercury__bitmap__Var_23;
            MR_Box mercury__bitmap__STATE_VARIABLE_DestBM_25_25;
            MR_Integer mercury__bitmap__Var_27;
            MR_Integer mercury__bitmap__Var_29;
            MR_Integer mercury__bitmap__Var_31;

{
#define MR_PROC_LABEL mercury__bitmap__unsafe_copy_unaligned_bytes_rtol_7_f_0

	MR_Integer N;
	MR_BitmapPtr BM;
	MR_Integer Byte;

	N =  mercury__bitmap__SrcByteIndex_10 ;
	BM = (MR_BitmapPtr) mercury__bitmap__SrcBM_9 ;
		{

    Byte = (MR_Integer) BM->elements[N];


		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__SrcByteBits_16  = Byte;
}
            mercury__bitmap__Var_21 = (mercury__bitmap__SrcByteBits_16 << mercury__bitmap__SrcBitIndex_11);
            mercury__bitmap__Var_23 = ((MR_Integer) 8 - mercury__bitmap__SrcBitIndex_11);
            mercury__bitmap__Var_22 = (mercury__bitmap__PrevSrcByteBits_12 >> mercury__bitmap__Var_23);
            mercury__bitmap__DestByteBits_17 = (mercury__bitmap__Var_21 | mercury__bitmap__Var_22);
{
#define MR_PROC_LABEL mercury__bitmap__unsafe_copy_unaligned_bytes_rtol_7_f_0

	MR_Integer N;
	MR_BitmapPtr BM0;
	MR_Integer Byte;
	MR_BitmapPtr BM;

	N =  mercury__bitmap__DestByteIndex_14 ;
	BM0 = (MR_BitmapPtr) mercury__bitmap__STATE_VARIABLE_DestBM_0_18 ;
	Byte =  mercury__bitmap__DestByteBits_17 ;
		{

    BM = BM0;
    BM->elements[N] = (MR_uint_least8_t) Byte;


		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__STATE_VARIABLE_DestBM_25_25  = (MR_Box) BM;
}
            mercury__bitmap__Var_27 = (mercury__bitmap__SrcByteIndex_10 - (MR_Integer) 1);
            mercury__bitmap__Var_29 = (mercury__bitmap__DestByteIndex_14 - (MR_Integer) 1);
            mercury__bitmap__Var_31 = (mercury__bitmap__NumBytes_15 - (MR_Integer) 1);
            /* direct tailcall eliminated */
            {
              MR_Integer mercury__bitmap__next_value_of_SrcByteIndex_10 = mercury__bitmap__Var_27;
              MR_Integer mercury__bitmap__next_value_of_PrevSrcByteBits_12 = mercury__bitmap__SrcByteBits_16;
              MR_Box mercury__bitmap__next_value_of_STATE_VARIABLE_DestBM_0_18 = mercury__bitmap__STATE_VARIABLE_DestBM_25_25;
              MR_Integer mercury__bitmap__next_value_of_DestByteIndex_14 = mercury__bitmap__Var_29;
              MR_Integer mercury__bitmap__next_value_of_NumBytes_15 = mercury__bitmap__Var_31;

              mercury__bitmap__NumBytes_15 = mercury__bitmap__next_value_of_NumBytes_15;
              mercury__bitmap__DestByteIndex_14 = mercury__bitmap__next_value_of_DestByteIndex_14;
              mercury__bitmap__STATE_VARIABLE_DestBM_0_18 = mercury__bitmap__next_value_of_STATE_VARIABLE_DestBM_0_18;
              mercury__bitmap__PrevSrcByteBits_12 = mercury__bitmap__next_value_of_PrevSrcByteBits_12;
              mercury__bitmap__SrcByteIndex_10 = mercury__bitmap__next_value_of_SrcByteIndex_10;
            }
            continue;
          }
        return mercury__bitmap__STATE_VARIABLE_DestBM_19;
      }
      break;
    }
}

static MR_Box MR_CALL 
mercury__bitmap__unsafe_copy_unaligned_bytes_ltor_7_f_0(
  MR_Box mercury__bitmap__SrcBM_9,
  MR_Integer mercury__bitmap__SrcByteIndex_10,
  MR_Integer mercury__bitmap__SrcBitIndex_11,
  MR_Integer mercury__bitmap__PrevSrcByteBits_12,
  MR_Box mercury__bitmap__STATE_VARIABLE_DestBM_0_18,
  MR_Integer mercury__bitmap__DestByteIndex_14,
  MR_Integer mercury__bitmap__NumBytes_15)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__bitmap__succeeded = (mercury__bitmap__NumBytes_15 <= (MR_Integer) 0);
        MR_Box mercury__bitmap__STATE_VARIABLE_DestBM_19;

        if (mercury__bitmap__succeeded)
          mercury__bitmap__STATE_VARIABLE_DestBM_19 = mercury__bitmap__STATE_VARIABLE_DestBM_0_18;
        else
          {
            MR_Integer mercury__bitmap__SrcByteBits_16;
            MR_Integer mercury__bitmap__DestByteBits_17;
            MR_Integer mercury__bitmap__Var_21;
            MR_Integer mercury__bitmap__Var_22;
            MR_Integer mercury__bitmap__Var_23;
            MR_Box mercury__bitmap__STATE_VARIABLE_DestBM_25_25;
            MR_Integer mercury__bitmap__Var_27;
            MR_Integer mercury__bitmap__Var_29;
            MR_Integer mercury__bitmap__Var_31;

{
#define MR_PROC_LABEL mercury__bitmap__unsafe_copy_unaligned_bytes_ltor_7_f_0

	MR_Integer N;
	MR_BitmapPtr BM;
	MR_Integer Byte;

	N =  mercury__bitmap__SrcByteIndex_10 ;
	BM = (MR_BitmapPtr) mercury__bitmap__SrcBM_9 ;
		{

    Byte = (MR_Integer) BM->elements[N];


		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__SrcByteBits_16  = Byte;
}
            mercury__bitmap__Var_21 = (mercury__bitmap__PrevSrcByteBits_12 << mercury__bitmap__SrcBitIndex_11);
            mercury__bitmap__Var_23 = ((MR_Integer) 8 - mercury__bitmap__SrcBitIndex_11);
            mercury__bitmap__Var_22 = (mercury__bitmap__SrcByteBits_16 >> mercury__bitmap__Var_23);
            mercury__bitmap__DestByteBits_17 = (mercury__bitmap__Var_21 | mercury__bitmap__Var_22);
{
#define MR_PROC_LABEL mercury__bitmap__unsafe_copy_unaligned_bytes_ltor_7_f_0

	MR_Integer N;
	MR_BitmapPtr BM0;
	MR_Integer Byte;
	MR_BitmapPtr BM;

	N =  mercury__bitmap__DestByteIndex_14 ;
	BM0 = (MR_BitmapPtr) mercury__bitmap__STATE_VARIABLE_DestBM_0_18 ;
	Byte =  mercury__bitmap__DestByteBits_17 ;
		{

    BM = BM0;
    BM->elements[N] = (MR_uint_least8_t) Byte;


		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__STATE_VARIABLE_DestBM_25_25  = (MR_Box) BM;
}
            mercury__bitmap__Var_27 = (mercury__bitmap__SrcByteIndex_10 + (MR_Integer) 1);
            mercury__bitmap__Var_29 = (mercury__bitmap__DestByteIndex_14 + (MR_Integer) 1);
            mercury__bitmap__Var_31 = (mercury__bitmap__NumBytes_15 - (MR_Integer) 1);
            /* direct tailcall eliminated */
            {
              MR_Integer mercury__bitmap__next_value_of_SrcByteIndex_10 = mercury__bitmap__Var_27;
              MR_Integer mercury__bitmap__next_value_of_PrevSrcByteBits_12 = mercury__bitmap__SrcByteBits_16;
              MR_Box mercury__bitmap__next_value_of_STATE_VARIABLE_DestBM_0_18 = mercury__bitmap__STATE_VARIABLE_DestBM_25_25;
              MR_Integer mercury__bitmap__next_value_of_DestByteIndex_14 = mercury__bitmap__Var_29;
              MR_Integer mercury__bitmap__next_value_of_NumBytes_15 = mercury__bitmap__Var_31;

              mercury__bitmap__NumBytes_15 = mercury__bitmap__next_value_of_NumBytes_15;
              mercury__bitmap__DestByteIndex_14 = mercury__bitmap__next_value_of_DestByteIndex_14;
              mercury__bitmap__STATE_VARIABLE_DestBM_0_18 = mercury__bitmap__next_value_of_STATE_VARIABLE_DestBM_0_18;
              mercury__bitmap__PrevSrcByteBits_12 = mercury__bitmap__next_value_of_PrevSrcByteBits_12;
              mercury__bitmap__SrcByteIndex_10 = mercury__bitmap__next_value_of_SrcByteIndex_10;
            }
            continue;
          }
        return mercury__bitmap__STATE_VARIABLE_DestBM_19;
      }
      break;
    }
}

static MR_Box MR_CALL 
mercury__bitmap__unsafe_copy_unaligned_bits_6_f_0(
  MR_Integer mercury__bitmap__SameBM_8,
  MR_Box mercury__bitmap__SrcBM_9,
  MR_Integer mercury__bitmap__SrcStartBit_10,
  MR_Box mercury__bitmap__STATE_VARIABLE_DestBM_0_31,
  MR_Integer mercury__bitmap__DestStartBit_12,
  MR_Integer mercury__bitmap__STATE_VARIABLE_NumBits_0_32)
{
  {
    MR_bool mercury__bitmap__succeeded;
    MR_Box mercury__bitmap__STATE_VARIABLE_DestBM_33;
    MR_Integer mercury__bitmap__DestStartIndex_14 = (mercury__bitmap__DestStartBit_12 % (MR_Integer) 8);
    MR_Integer mercury__bitmap__DestEndBit_15;
    MR_Integer mercury__bitmap__NumBitsAtStart_16;
    MR_Integer mercury__bitmap__StartBits_17;
    MR_Integer mercury__bitmap__NewSrcStartBit_18;
    MR_Integer mercury__bitmap__NewDestStartBit_19;
    MR_Integer mercury__bitmap__DestEndIndex_20;
    MR_Integer mercury__bitmap__NumBitsAtEnd_21;
    MR_Integer mercury__bitmap__EndBits_22;
    MR_Integer mercury__bitmap__NumBytes_24;
    MR_Word mercury__bitmap__Direction_25;
    MR_Integer mercury__bitmap__SrcBitIndex_26;
    MR_Integer mercury__bitmap__Var_34 = (mercury__bitmap__DestStartBit_12 + mercury__bitmap__STATE_VARIABLE_NumBits_0_32);
    MR_Integer mercury__bitmap__STATE_VARIABLE_NumBits_37_37;
    MR_Integer mercury__bitmap__STATE_VARIABLE_NumBits_46_46;
    MR_Box mercury__bitmap__STATE_VARIABLE_DestBM_58_58;
    MR_Box mercury__bitmap__STATE_VARIABLE_DestBM_62_62;
    MR_Integer mercury__bitmap__Var_39;

    mercury__bitmap__DestEndBit_15 = (mercury__bitmap__Var_34 - (MR_Integer) 1);
    mercury__bitmap__succeeded = (mercury__bitmap__DestStartIndex_14 == (MR_Integer) 0);
    if (mercury__bitmap__succeeded)
      {
        mercury__bitmap__NumBitsAtStart_16 = (MR_Integer) 0;
        mercury__bitmap__StartBits_17 = (MR_Integer) 0;
        mercury__bitmap__STATE_VARIABLE_NumBits_37_37 = mercury__bitmap__STATE_VARIABLE_NumBits_0_32;
      }
    else
      {
        mercury__bitmap__NumBitsAtStart_16 = ((MR_Integer) 8 - mercury__bitmap__DestStartIndex_14);
        {
          mercury__bitmap__StartBits_17 = mercury__bitmap__unsafe_bits_3_f_0(mercury__bitmap__SrcStartBit_10, mercury__bitmap__NumBitsAtStart_16, mercury__bitmap__SrcBM_9);
        }
        mercury__bitmap__STATE_VARIABLE_NumBits_37_37 = (mercury__bitmap__STATE_VARIABLE_NumBits_0_32 - mercury__bitmap__NumBitsAtStart_16);
      }
    mercury__bitmap__NewSrcStartBit_18 = (mercury__bitmap__SrcStartBit_10 + mercury__bitmap__NumBitsAtStart_16);
    mercury__bitmap__NewDestStartBit_19 = (mercury__bitmap__DestStartBit_12 + mercury__bitmap__NumBitsAtStart_16);
    mercury__bitmap__DestEndIndex_20 = (mercury__bitmap__DestEndBit_15 % (MR_Integer) 8);
    mercury__bitmap__Var_39 = ((MR_Integer) 8 - mercury__bitmap__DestEndIndex_20);
    mercury__bitmap__succeeded = (mercury__bitmap__Var_39 == (MR_Integer) 1);
    if (mercury__bitmap__succeeded)
      {
        mercury__bitmap__NumBitsAtEnd_21 = (MR_Integer) 0;
        mercury__bitmap__EndBits_22 = (MR_Integer) 0;
        mercury__bitmap__STATE_VARIABLE_NumBits_46_46 = mercury__bitmap__STATE_VARIABLE_NumBits_37_37;
      }
    else
      {
        MR_Integer mercury__bitmap__SrcEndBit_23;
        MR_Integer mercury__bitmap__Var_41;
        MR_Integer mercury__bitmap__Var_43;
        MR_Integer mercury__bitmap__Var_44;

        mercury__bitmap__NumBitsAtEnd_21 = (mercury__bitmap__DestEndIndex_20 + (MR_Integer) 1);
        mercury__bitmap__Var_41 = (mercury__bitmap__NewSrcStartBit_18 + mercury__bitmap__STATE_VARIABLE_NumBits_37_37);
        mercury__bitmap__SrcEndBit_23 = (mercury__bitmap__Var_41 - (MR_Integer) 1);
        mercury__bitmap__Var_44 = (mercury__bitmap__SrcEndBit_23 - mercury__bitmap__NumBitsAtEnd_21);
        mercury__bitmap__Var_43 = (mercury__bitmap__Var_44 + (MR_Integer) 1);
        {
          mercury__bitmap__EndBits_22 = mercury__bitmap__unsafe_bits_3_f_0(mercury__bitmap__Var_43, mercury__bitmap__NumBitsAtEnd_21, mercury__bitmap__SrcBM_9);
        }
        mercury__bitmap__STATE_VARIABLE_NumBits_46_46 = (mercury__bitmap__STATE_VARIABLE_NumBits_37_37 - mercury__bitmap__NumBitsAtEnd_21);
      }
    mercury__bitmap__NumBytes_24 = (mercury__bitmap__STATE_VARIABLE_NumBits_46_46 / (MR_Integer) 8);
    mercury__bitmap__succeeded = (mercury__bitmap__SameBM_8 == (MR_Integer) 1);
    if (mercury__bitmap__succeeded)
      mercury__bitmap__succeeded = (mercury__bitmap__NewSrcStartBit_18 < mercury__bitmap__NewDestStartBit_19);
    if (mercury__bitmap__succeeded)
      mercury__bitmap__Direction_25 = (MR_Integer) 1;
    else
      mercury__bitmap__Direction_25 = (MR_Integer) 0;
    mercury__bitmap__SrcBitIndex_26 = (mercury__bitmap__NewSrcStartBit_18 % (MR_Integer) 8);
    switch (mercury__bitmap__Direction_25) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Integer mercury__bitmap__SrcStartByteIndex_27;
          MR_Integer mercury__bitmap__DestStartByteIndex_28;
          MR_Integer mercury__bitmap__Var_59;
          MR_Integer mercury__bitmap__Var_61;

          mercury__bitmap__succeeded = (mercury__bitmap__NewSrcStartBit_18 < (MR_Integer) 0);
          if (mercury__bitmap__succeeded)
            mercury__bitmap__SrcStartByteIndex_27 = (MR_Integer) -1;
          else
            {
              mercury__bitmap__SrcStartByteIndex_27 = (mercury__bitmap__NewSrcStartBit_18 / (MR_Integer) 8);
            }
          mercury__bitmap__succeeded = (mercury__bitmap__NewDestStartBit_19 < (MR_Integer) 0);
          if (mercury__bitmap__succeeded)
            mercury__bitmap__DestStartByteIndex_28 = (MR_Integer) -1;
          else
            {
              mercury__bitmap__DestStartByteIndex_28 = (mercury__bitmap__NewDestStartBit_19 / (MR_Integer) 8);
            }
          mercury__bitmap__Var_59 = (mercury__bitmap__SrcStartByteIndex_27 + (MR_Integer) 1);
{
#define MR_PROC_LABEL mercury__bitmap__unsafe_copy_unaligned_bits_6_f_0

	MR_Integer N;
	MR_BitmapPtr BM;
	MR_Integer Byte;

	N =  mercury__bitmap__SrcStartByteIndex_27 ;
	BM = (MR_BitmapPtr) mercury__bitmap__SrcBM_9 ;
		{

    Byte = (MR_Integer) BM->elements[N];


		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__Var_61  = Byte;
}
          {
            mercury__bitmap__STATE_VARIABLE_DestBM_58_58 = mercury__bitmap__unsafe_copy_unaligned_bytes_ltor_7_f_0(mercury__bitmap__SrcBM_9, mercury__bitmap__Var_59, mercury__bitmap__SrcBitIndex_26, mercury__bitmap__Var_61, mercury__bitmap__STATE_VARIABLE_DestBM_0_31, mercury__bitmap__DestStartByteIndex_28, mercury__bitmap__NumBytes_24);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Integer mercury__bitmap__Var_48;
          MR_Integer mercury__bitmap__Var_49 = (mercury__bitmap__NewSrcStartBit_18 + mercury__bitmap__STATE_VARIABLE_NumBits_46_46);
          MR_Integer mercury__bitmap__Var_51;
          MR_Integer mercury__bitmap__Var_52;
          MR_Integer mercury__bitmap__Var_55;
          MR_Integer mercury__bitmap__Var_57;
          MR_Integer mercury__bitmap__SrcStartByteIndex_69;
          MR_Integer mercury__bitmap__DestStartByteIndex_70;

          mercury__bitmap__Var_48 = (mercury__bitmap__Var_49 - (MR_Integer) 1);
          mercury__bitmap__succeeded = (mercury__bitmap__Var_48 < (MR_Integer) 0);
          if (mercury__bitmap__succeeded)
            mercury__bitmap__SrcStartByteIndex_69 = (MR_Integer) -1;
          else
            {
              mercury__bitmap__SrcStartByteIndex_69 = (mercury__bitmap__Var_48 / (MR_Integer) 8);
            }
          mercury__bitmap__Var_52 = (mercury__bitmap__NewDestStartBit_19 + mercury__bitmap__STATE_VARIABLE_NumBits_46_46);
          mercury__bitmap__Var_51 = (mercury__bitmap__Var_52 - (MR_Integer) 1);
          mercury__bitmap__succeeded = (mercury__bitmap__Var_51 < (MR_Integer) 0);
          if (mercury__bitmap__succeeded)
            mercury__bitmap__DestStartByteIndex_70 = (MR_Integer) -1;
          else
            {
              mercury__bitmap__DestStartByteIndex_70 = (mercury__bitmap__Var_51 / (MR_Integer) 8);
            }
          mercury__bitmap__Var_55 = (mercury__bitmap__SrcStartByteIndex_69 - (MR_Integer) 1);
          {
            mercury__bitmap__Var_57 = mercury__bitmap__unsafe_byte_2_f_0(mercury__bitmap__SrcStartByteIndex_69, mercury__bitmap__SrcBM_9);
          }
          {
            mercury__bitmap__STATE_VARIABLE_DestBM_58_58 = mercury__bitmap__unsafe_copy_unaligned_bytes_rtol_7_f_0(mercury__bitmap__SrcBM_9, mercury__bitmap__Var_55, mercury__bitmap__SrcBitIndex_26, mercury__bitmap__Var_57, mercury__bitmap__STATE_VARIABLE_DestBM_0_31, mercury__bitmap__DestStartByteIndex_70, mercury__bitmap__NumBytes_24);
          }
        }
        break;
    }
    mercury__bitmap__succeeded = (mercury__bitmap__NumBitsAtStart_16 == (MR_Integer) 0);
    if (mercury__bitmap__succeeded)
      mercury__bitmap__STATE_VARIABLE_DestBM_62_62 = mercury__bitmap__STATE_VARIABLE_DestBM_58_58;
    else
      {
        MR_Integer mercury__bitmap__PartialDestStartByteIndex_29;
        MR_Integer mercury__bitmap__Var_63;
        MR_Integer mercury__bitmap__Var_64;

        mercury__bitmap__succeeded = (mercury__bitmap__DestStartBit_12 < (MR_Integer) 0);
        if (mercury__bitmap__succeeded)
          mercury__bitmap__PartialDestStartByteIndex_29 = (MR_Integer) -1;
        else
          {
            mercury__bitmap__PartialDestStartByteIndex_29 = (mercury__bitmap__DestStartBit_12 / (MR_Integer) 8);
          }
        {
          mercury__bitmap__Var_64 = mercury__bitmap__unsafe_byte_2_f_0(mercury__bitmap__PartialDestStartByteIndex_29, mercury__bitmap__STATE_VARIABLE_DestBM_58_58);
        }
        {
          mercury__bitmap__Var_63 = mercury__bitmap__set_bits_in_byte_4_f_0(mercury__bitmap__Var_64, mercury__bitmap__DestStartIndex_14, mercury__bitmap__NumBitsAtStart_16, mercury__bitmap__StartBits_17);
        }
        {
          mercury__bitmap__STATE_VARIABLE_DestBM_62_62 = mercury__bitmap__f_117_110_115_97_102_101_95_98_121_116_101_32_58_61_3_f_0(mercury__bitmap__PartialDestStartByteIndex_29, mercury__bitmap__STATE_VARIABLE_DestBM_58_58, mercury__bitmap__Var_63);
        }
      }
    mercury__bitmap__succeeded = (mercury__bitmap__NumBitsAtEnd_21 == (MR_Integer) 0);
    if (mercury__bitmap__succeeded)
      mercury__bitmap__STATE_VARIABLE_DestBM_33 = mercury__bitmap__STATE_VARIABLE_DestBM_62_62;
    else
      {
        MR_Integer mercury__bitmap__PartialDestEndByteIndex_30;
        MR_Integer mercury__bitmap__Var_66;
        MR_Integer mercury__bitmap__Var_67;

        {
          mercury__bitmap__PartialDestEndByteIndex_30 = mercury__bitmap__byte_index_for_bit_1_f_0(mercury__bitmap__DestEndBit_15);
        }
        {
          mercury__bitmap__Var_67 = mercury__bitmap__unsafe_byte_2_f_0(mercury__bitmap__PartialDestEndByteIndex_30, mercury__bitmap__STATE_VARIABLE_DestBM_62_62);
        }
        {
          mercury__bitmap__Var_66 = mercury__bitmap__set_bits_in_byte_4_f_0(mercury__bitmap__Var_67, (MR_Integer) 0, mercury__bitmap__NumBitsAtEnd_21, mercury__bitmap__EndBits_22);
        }
        {
          mercury__bitmap__STATE_VARIABLE_DestBM_33 = mercury__bitmap__f_117_110_115_97_102_101_95_98_121_116_101_32_58_61_3_f_0(mercury__bitmap__PartialDestEndByteIndex_30, mercury__bitmap__STATE_VARIABLE_DestBM_62_62, mercury__bitmap__Var_66);
        }
      }
    return mercury__bitmap__STATE_VARIABLE_DestBM_33;
  }
}

static MR_Box MR_CALL 
mercury__bitmap__unsafe_copy_bytes_6_f_0(
  MR_Integer mercury__bitmap__SameBM_1,
  MR_Box mercury__bitmap__SrcBM_2,
  MR_Integer mercury__bitmap__SrcFirstByteIndex_3,
  MR_Box mercury__bitmap__DestBM0_4,
  MR_Integer mercury__bitmap__DestFirstByteIndex_5,
  MR_Integer mercury__bitmap__NumBytes_6)
{
  {
    MR_bool mercury__bitmap__succeeded;
    MR_Box mercury__bitmap__DestBM_7;

{
#define MR_PROC_LABEL mercury__bitmap__unsafe_copy_bytes_6_f_0

	MR_Integer SameBM;
	MR_BitmapPtr SrcBM;
	MR_Integer SrcFirstByteIndex;
	MR_BitmapPtr DestBM0;
	MR_Integer DestFirstByteIndex;
	MR_Integer NumBytes;
	MR_BitmapPtr DestBM;

	SameBM =  mercury__bitmap__SameBM_1 ;
	SrcBM = (MR_BitmapPtr) mercury__bitmap__SrcBM_2 ;
	SrcFirstByteIndex =  mercury__bitmap__SrcFirstByteIndex_3 ;
	DestBM0 = (MR_BitmapPtr) mercury__bitmap__DestBM0_4 ;
	DestFirstByteIndex =  mercury__bitmap__DestFirstByteIndex_5 ;
	NumBytes =  mercury__bitmap__NumBytes_6 ;
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
	 mercury__bitmap__DestBM_7  = (MR_Box) DestBM;
}
    return mercury__bitmap__DestBM_7;
  }
}

MR_Box MR_CALL 
mercury__bitmap__copy_bytes_6_f_0(
  MR_Integer mercury__bitmap__SameBM_8,
  MR_Box mercury__bitmap__SrcBM_9,
  MR_Integer mercury__bitmap__SrcStartByte_10,
  MR_Box mercury__bitmap__DestBM_11,
  MR_Integer mercury__bitmap__DestStartByte_12,
  MR_Integer mercury__bitmap__NumBytes_13)
{
  {
    MR_bool mercury__bitmap__succeeded = (mercury__bitmap__NumBytes_13 == (MR_Integer) 0);
    MR_Box mercury__bitmap__HeadVar__7_7;

    if (mercury__bitmap__succeeded)
      mercury__bitmap__HeadVar__7_7 = mercury__bitmap__DestBM_11;
    else
      {
        MR_Integer mercury__bitmap__Var_15;
        MR_Integer mercury__bitmap__Var_16;
        MR_Integer mercury__bitmap__Var_17;
        MR_Integer mercury__bitmap__Var_18;
        MR_Integer mercury__bitmap__Var_19;
        MR_Integer mercury__bitmap__Var_20;
        MR_Integer mercury__bitmap__Var_21;
        MR_Integer mercury__bitmap__Var_22;

        mercury__bitmap__succeeded = (mercury__bitmap__NumBytes_13 > (MR_Integer) 0);
        if (mercury__bitmap__succeeded)
          {
            mercury__bitmap__Var_15 = (MR_Integer) 0;
            mercury__bitmap__succeeded = (mercury__bitmap__SrcStartByte_10 >= mercury__bitmap__Var_15);
            if (mercury__bitmap__succeeded)
              {
                mercury__bitmap__Var_17 = (mercury__bitmap__SrcStartByte_10 + mercury__bitmap__NumBytes_13);
                mercury__bitmap__Var_18 = (MR_Integer) 1;
                mercury__bitmap__Var_16 = (mercury__bitmap__Var_17 - mercury__bitmap__Var_18);
                {
                  mercury__bitmap__succeeded = mercury__bitmap__byte_in_range_2_p_0(mercury__bitmap__SrcBM_9, mercury__bitmap__Var_16);
                }
                if (mercury__bitmap__succeeded)
                  {
                    mercury__bitmap__Var_19 = (MR_Integer) 0;
                    mercury__bitmap__succeeded = (mercury__bitmap__DestStartByte_12 >= mercury__bitmap__Var_19);
                    if (mercury__bitmap__succeeded)
                      {
                        mercury__bitmap__Var_21 = (mercury__bitmap__DestStartByte_12 + mercury__bitmap__NumBytes_13);
                        mercury__bitmap__Var_22 = (MR_Integer) 1;
                        mercury__bitmap__Var_20 = (mercury__bitmap__Var_21 - mercury__bitmap__Var_22);
                        {
                          mercury__bitmap__succeeded = mercury__bitmap__byte_in_range_2_p_0(mercury__bitmap__DestBM_11, mercury__bitmap__Var_20);
                        }
                      }
                  }
              }
          }
        if (mercury__bitmap__succeeded)
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

	SameBM =  mercury__bitmap__SameBM_8 ;
	SrcBM = (MR_BitmapPtr) mercury__bitmap__SrcBM_9 ;
	SrcFirstByteIndex =  mercury__bitmap__SrcStartByte_10 ;
	DestBM0 = (MR_BitmapPtr) mercury__bitmap__DestBM_11 ;
	DestFirstByteIndex =  mercury__bitmap__DestStartByte_12 ;
	NumBytes =  mercury__bitmap__NumBytes_13 ;
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
	 mercury__bitmap__HeadVar__7_7  = (MR_Box) DestBM;
}
          }
        else
          {
            MR_Word mercury__bitmap__TypeCtorInfo_4_48 = (MR_Word) &mercury__bitmap__bitmap__type_ctor_info_bitmap_error_0;
            MR_Word mercury__bitmap__Var_47 = (MR_Word) ((MR_Box) ((MR_String) "bitmap.copy_bytes: out of range"));

            {
              mercury__exception__throw_1_p_0(mercury__bitmap__TypeCtorInfo_4_48, ((MR_Box) (mercury__bitmap__Var_47)));
            }
          }
      }
    return mercury__bitmap__HeadVar__7_7;
  }
}

static MR_Box MR_CALL 
mercury__bitmap__unsafe_copy_bits_6_f_0(
  MR_Integer mercury__bitmap__SameBM_8,
  MR_Box mercury__bitmap__SrcBM_9,
  MR_Integer mercury__bitmap__SrcStartBit_10,
  MR_Box mercury__bitmap__STATE_VARIABLE_DestBM_0_30,
  MR_Integer mercury__bitmap__DestStartBit_12,
  MR_Integer mercury__bitmap__STATE_VARIABLE_NumBits_0_31)
{
  {
    MR_bool mercury__bitmap__succeeded;
    MR_Box mercury__bitmap__STATE_VARIABLE_DestBM_32;
    MR_Integer mercury__bitmap__SrcStartIndex_14 = (mercury__bitmap__SrcStartBit_10 % (MR_Integer) 8);
    MR_Integer mercury__bitmap__DestStartIndex_15 = (mercury__bitmap__DestStartBit_12 % (MR_Integer) 8);
    MR_Integer mercury__bitmap__Var_33 = ((MR_Integer) 2 * (MR_Integer) 8);

    mercury__bitmap__succeeded = (mercury__bitmap__STATE_VARIABLE_NumBits_0_31 < mercury__bitmap__Var_33);
    if (mercury__bitmap__succeeded)
      {
        MR_Integer mercury__bitmap__Var_37;

        {
          mercury__bitmap__Var_37 = mercury__bitmap__unsafe_bits_3_f_0(mercury__bitmap__SrcStartBit_10, mercury__bitmap__STATE_VARIABLE_NumBits_0_31, mercury__bitmap__SrcBM_9);
        }
        {
          mercury__bitmap__STATE_VARIABLE_DestBM_32 = mercury__bitmap__f_117_110_115_97_102_101_95_98_105_116_115_32_58_61_4_f_0(mercury__bitmap__DestStartBit_12, mercury__bitmap__STATE_VARIABLE_NumBits_0_31, mercury__bitmap__STATE_VARIABLE_DestBM_0_30, mercury__bitmap__Var_37);
        }
      }
    else
      {
        mercury__bitmap__succeeded = (mercury__bitmap__SrcStartIndex_14 == mercury__bitmap__DestStartIndex_15);
        if (mercury__bitmap__succeeded)
          {
            MR_Integer mercury__bitmap__SrcEndBit_17;
            MR_Integer mercury__bitmap__EndIndex_18;
            MR_Integer mercury__bitmap__Var_38 = (mercury__bitmap__SrcStartBit_10 + mercury__bitmap__STATE_VARIABLE_NumBits_0_31);
            MR_Integer mercury__bitmap__Var_40;
            MR_Integer mercury__bitmap__Var_41;

            mercury__bitmap__SrcEndBit_17 = (mercury__bitmap__Var_38 - (MR_Integer) 1);
            mercury__bitmap__EndIndex_18 = (mercury__bitmap__SrcEndBit_17 % (MR_Integer) 8);
            mercury__bitmap__succeeded = (mercury__bitmap__SrcStartIndex_14 == (MR_Integer) 0);
            if (mercury__bitmap__succeeded)
              {
                mercury__bitmap__Var_40 = (MR_Integer) 8;
                mercury__bitmap__Var_41 = (mercury__bitmap__Var_40 - mercury__bitmap__EndIndex_18);
                mercury__bitmap__succeeded = (mercury__bitmap__Var_41 == (MR_Integer) 1);
              }
            if (mercury__bitmap__succeeded)
              {
                MR_Integer mercury__bitmap__NumBytes_19 = (mercury__bitmap__STATE_VARIABLE_NumBits_0_31 / (MR_Integer) 8);
                MR_Integer mercury__bitmap__SrcStartByteIndex_20 = (mercury__bitmap__SrcStartBit_10 / (MR_Integer) 8);
                MR_Integer mercury__bitmap__DestStartByteIndex_21 = (mercury__bitmap__DestStartBit_12 / (MR_Integer) 8);

                {
                  mercury__bitmap__STATE_VARIABLE_DestBM_32 = mercury__bitmap__unsafe_copy_bytes_6_f_0(mercury__bitmap__SameBM_8, mercury__bitmap__SrcBM_9, mercury__bitmap__SrcStartByteIndex_20, mercury__bitmap__STATE_VARIABLE_DestBM_0_30, mercury__bitmap__DestStartByteIndex_21, mercury__bitmap__NumBytes_19);
                }
              }
            else
              {
                MR_Integer mercury__bitmap__NumBitsAtStart_22;
                MR_Integer mercury__bitmap__StartBitsToSet_23;
                MR_Integer mercury__bitmap__NumBitsAtEnd_25;
                MR_Integer mercury__bitmap__EndBitsToSet_26;
                MR_Integer mercury__bitmap__STATE_VARIABLE_NumBits_48_48;
                MR_Integer mercury__bitmap__Var_56;
                MR_Integer mercury__bitmap__Var_58;
                MR_Box mercury__bitmap__STATE_VARIABLE_DestBM_60_60;
                MR_Box mercury__bitmap__STATE_VARIABLE_DestBM_62_62;
                MR_Integer mercury__bitmap__NumBytes_72;
                MR_Integer mercury__bitmap__SrcStartByteIndex_73;
                MR_Integer mercury__bitmap__DestStartByteIndex_74;
                MR_Integer mercury__bitmap__STATE_VARIABLE_NumBits_54_75;
                MR_Integer mercury__bitmap__Var_50;

                mercury__bitmap__succeeded = (mercury__bitmap__SrcStartIndex_14 == (MR_Integer) 0);
                if (mercury__bitmap__succeeded)
                  {
                    mercury__bitmap__NumBitsAtStart_22 = (MR_Integer) 0;
                    mercury__bitmap__StartBitsToSet_23 = (MR_Integer) 0;
                    mercury__bitmap__STATE_VARIABLE_NumBits_48_48 = mercury__bitmap__STATE_VARIABLE_NumBits_0_31;
                  }
                else
                  {
                    MR_Integer mercury__bitmap__SrcPartialStartByteIndex_24;
                    MR_Integer mercury__bitmap__Var_47;

                    mercury__bitmap__NumBitsAtStart_22 = ((MR_Integer) 8 - mercury__bitmap__SrcStartIndex_14);
                    mercury__bitmap__succeeded = (mercury__bitmap__SrcStartBit_10 < (MR_Integer) 0);
                    if (mercury__bitmap__succeeded)
                      mercury__bitmap__SrcPartialStartByteIndex_24 = (MR_Integer) -1;
                    else
                      {
                        mercury__bitmap__SrcPartialStartByteIndex_24 = (mercury__bitmap__SrcStartBit_10 / (MR_Integer) 8);
                      }
{
#define MR_PROC_LABEL mercury__bitmap__unsafe_copy_bits_6_f_0

	MR_Integer N;
	MR_BitmapPtr BM;
	MR_Integer Byte;

	N =  mercury__bitmap__SrcPartialStartByteIndex_24 ;
	BM = (MR_BitmapPtr) mercury__bitmap__SrcBM_9 ;
		{

    Byte = (MR_Integer) BM->elements[N];


		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__Var_47  = Byte;
}
                    {
                      mercury__bitmap__StartBitsToSet_23 = mercury__bitmap__extract_bits_from_byte_3_f_0(mercury__bitmap__Var_47, mercury__bitmap__SrcStartIndex_14, mercury__bitmap__NumBitsAtStart_22);
                    }
                    mercury__bitmap__STATE_VARIABLE_NumBits_48_48 = (mercury__bitmap__STATE_VARIABLE_NumBits_0_31 - mercury__bitmap__NumBitsAtStart_22);
                  }
                mercury__bitmap__Var_50 = ((MR_Integer) 8 - mercury__bitmap__EndIndex_18);
                mercury__bitmap__succeeded = (mercury__bitmap__Var_50 == (MR_Integer) 1);
                if (mercury__bitmap__succeeded)
                  {
                    mercury__bitmap__NumBitsAtEnd_25 = (MR_Integer) 0;
                    mercury__bitmap__EndBitsToSet_26 = (MR_Integer) 0;
                    mercury__bitmap__STATE_VARIABLE_NumBits_54_75 = mercury__bitmap__STATE_VARIABLE_NumBits_48_48;
                  }
                else
                  {
                    MR_Integer mercury__bitmap__SrcPartialEndByteIndex_27;
                    MR_Integer mercury__bitmap__Var_52;

                    mercury__bitmap__NumBitsAtEnd_25 = (mercury__bitmap__EndIndex_18 + (MR_Integer) 1);
                    mercury__bitmap__succeeded = (mercury__bitmap__SrcEndBit_17 < (MR_Integer) 0);
                    if (mercury__bitmap__succeeded)
                      mercury__bitmap__SrcPartialEndByteIndex_27 = (MR_Integer) -1;
                    else
                      {
                        mercury__bitmap__SrcPartialEndByteIndex_27 = (mercury__bitmap__SrcEndBit_17 / (MR_Integer) 8);
                      }
                    {
                      mercury__bitmap__Var_52 = mercury__bitmap__unsafe_byte_2_f_0(mercury__bitmap__SrcPartialEndByteIndex_27, mercury__bitmap__SrcBM_9);
                    }
                    {
                      mercury__bitmap__EndBitsToSet_26 = mercury__bitmap__extract_bits_from_byte_3_f_0(mercury__bitmap__Var_52, (MR_Integer) 0, mercury__bitmap__NumBitsAtEnd_25);
                    }
                    mercury__bitmap__STATE_VARIABLE_NumBits_54_75 = (mercury__bitmap__STATE_VARIABLE_NumBits_48_48 - mercury__bitmap__NumBitsAtEnd_25);
                  }
                mercury__bitmap__NumBytes_72 = (mercury__bitmap__STATE_VARIABLE_NumBits_54_75 / (MR_Integer) 8);
                mercury__bitmap__Var_56 = (mercury__bitmap__SrcStartBit_10 + mercury__bitmap__NumBitsAtStart_22);
                mercury__bitmap__SrcStartByteIndex_73 = (mercury__bitmap__Var_56 / (MR_Integer) 8);
                mercury__bitmap__Var_58 = (mercury__bitmap__DestStartBit_12 + mercury__bitmap__NumBitsAtStart_22);
                mercury__bitmap__DestStartByteIndex_74 = (mercury__bitmap__Var_58 / (MR_Integer) 8);
                {
                  mercury__bitmap__STATE_VARIABLE_DestBM_60_60 = mercury__bitmap__unsafe_copy_bytes_6_f_0(mercury__bitmap__SameBM_8, mercury__bitmap__SrcBM_9, mercury__bitmap__SrcStartByteIndex_73, mercury__bitmap__STATE_VARIABLE_DestBM_0_30, mercury__bitmap__DestStartByteIndex_74, mercury__bitmap__NumBytes_72);
                }
                mercury__bitmap__succeeded = (mercury__bitmap__NumBitsAtStart_22 == (MR_Integer) 0);
                if (mercury__bitmap__succeeded)
                  mercury__bitmap__STATE_VARIABLE_DestBM_62_62 = mercury__bitmap__STATE_VARIABLE_DestBM_60_60;
                else
                  {
                    MR_Integer mercury__bitmap__DestPartialStartByteIndex_28 = (mercury__bitmap__DestStartByteIndex_74 - (MR_Integer) 1);
                    MR_Integer mercury__bitmap__Var_63;
                    MR_Integer mercury__bitmap__Var_64;

                    {
                      mercury__bitmap__Var_64 = mercury__bitmap__unsafe_byte_2_f_0(mercury__bitmap__DestPartialStartByteIndex_28, mercury__bitmap__STATE_VARIABLE_DestBM_60_60);
                    }
                    {
                      mercury__bitmap__Var_63 = mercury__bitmap__set_bits_in_byte_4_f_0(mercury__bitmap__Var_64, mercury__bitmap__SrcStartIndex_14, mercury__bitmap__NumBitsAtStart_22, mercury__bitmap__StartBitsToSet_23);
                    }
                    {
                      mercury__bitmap__STATE_VARIABLE_DestBM_62_62 = mercury__bitmap__f_117_110_115_97_102_101_95_98_121_116_101_32_58_61_3_f_0(mercury__bitmap__DestPartialStartByteIndex_28, mercury__bitmap__STATE_VARIABLE_DestBM_60_60, mercury__bitmap__Var_63);
                    }
                  }
                mercury__bitmap__succeeded = (mercury__bitmap__NumBitsAtEnd_25 == (MR_Integer) 0);
                if (mercury__bitmap__succeeded)
                  mercury__bitmap__STATE_VARIABLE_DestBM_32 = mercury__bitmap__STATE_VARIABLE_DestBM_62_62;
                else
                  {
                    MR_Integer mercury__bitmap__DestPartialEndByteIndex_29 = (mercury__bitmap__DestStartByteIndex_74 + mercury__bitmap__NumBytes_72);
                    MR_Integer mercury__bitmap__Var_66;
                    MR_Integer mercury__bitmap__Var_67;

                    {
                      mercury__bitmap__Var_67 = mercury__bitmap__unsafe_byte_2_f_0(mercury__bitmap__DestPartialEndByteIndex_29, mercury__bitmap__STATE_VARIABLE_DestBM_62_62);
                    }
                    {
                      mercury__bitmap__Var_66 = mercury__bitmap__set_bits_in_byte_4_f_0(mercury__bitmap__Var_67, (MR_Integer) 0, mercury__bitmap__NumBitsAtEnd_25, mercury__bitmap__EndBitsToSet_26);
                    }
                    {
                      mercury__bitmap__STATE_VARIABLE_DestBM_32 = mercury__bitmap__f_117_110_115_97_102_101_95_98_121_116_101_32_58_61_3_f_0(mercury__bitmap__DestPartialEndByteIndex_29, mercury__bitmap__STATE_VARIABLE_DestBM_62_62, mercury__bitmap__Var_66);
                    }
                  }
              }
          }
        else
          {
            mercury__bitmap__STATE_VARIABLE_DestBM_32 = mercury__bitmap__unsafe_copy_unaligned_bits_6_f_0(mercury__bitmap__SameBM_8, mercury__bitmap__SrcBM_9, mercury__bitmap__SrcStartBit_10, mercury__bitmap__STATE_VARIABLE_DestBM_0_30, mercury__bitmap__DestStartBit_12, mercury__bitmap__STATE_VARIABLE_NumBits_0_31);
          }
      }
    return mercury__bitmap__STATE_VARIABLE_DestBM_32;
  }
}

MR_Box MR_CALL 
mercury__bitmap__copy_bits_6_f_0(
  MR_Integer mercury__bitmap__SameBM_8,
  MR_Box mercury__bitmap__SrcBM_9,
  MR_Integer mercury__bitmap__SrcStartBit_10,
  MR_Box mercury__bitmap__DestBM_11,
  MR_Integer mercury__bitmap__DestStartBit_12,
  MR_Integer mercury__bitmap__NumBits_13)
{
  {
    MR_bool mercury__bitmap__succeeded = (mercury__bitmap__NumBits_13 >= (MR_Integer) 0);
    MR_Box mercury__bitmap__HeadVar__7_7;
    MR_Integer mercury__bitmap__Var_15;
    MR_Integer mercury__bitmap__Var_16;
    MR_Integer mercury__bitmap__Var_17;
    MR_Integer mercury__bitmap__Var_18;
    MR_Integer mercury__bitmap__Var_36;
    MR_Integer mercury__bitmap__Var_37;
    MR_Integer mercury__bitmap__Var_43;
    MR_Integer mercury__bitmap__Var_44;

    if (mercury__bitmap__succeeded)
      {
        mercury__bitmap__Var_15 = (MR_Integer) 0;
        mercury__bitmap__succeeded = (mercury__bitmap__SrcStartBit_10 >= mercury__bitmap__Var_15);
        if (mercury__bitmap__succeeded)
          {
            mercury__bitmap__Var_16 = (MR_Integer) 0;
            mercury__bitmap__succeeded = (mercury__bitmap__DestStartBit_12 >= mercury__bitmap__Var_16);
            if (mercury__bitmap__succeeded)
              {
                mercury__bitmap__Var_17 = (mercury__bitmap__SrcStartBit_10 + mercury__bitmap__NumBits_13);
                mercury__bitmap__Var_36 = (MR_Integer) 0;
                mercury__bitmap__succeeded = (mercury__bitmap__Var_36 <= mercury__bitmap__Var_17);
                if (mercury__bitmap__succeeded)
                  {
{
#define MR_PROC_LABEL mercury__bitmap__copy_bits_6_f_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr) mercury__bitmap__SrcBM_9 ;
		{

    NumBits = BM->num_bits;


		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__Var_37  = NumBits;
}
                    mercury__bitmap__succeeded = (mercury__bitmap__Var_17 <= mercury__bitmap__Var_37);
                    if (mercury__bitmap__succeeded)
                      {
                        mercury__bitmap__Var_18 = (mercury__bitmap__DestStartBit_12 + mercury__bitmap__NumBits_13);
                        mercury__bitmap__Var_43 = (MR_Integer) 0;
                        mercury__bitmap__succeeded = (mercury__bitmap__Var_43 <= mercury__bitmap__Var_18);
                        if (mercury__bitmap__succeeded)
                          {
{
#define MR_PROC_LABEL mercury__bitmap__copy_bits_6_f_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr) mercury__bitmap__DestBM_11 ;
		{

    NumBits = BM->num_bits;


		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__Var_44  = NumBits;
}
                            mercury__bitmap__succeeded = (mercury__bitmap__Var_18 <= mercury__bitmap__Var_44);
                          }
                      }
                  }
              }
          }
      }
    if (mercury__bitmap__succeeded)
      {
        mercury__bitmap__HeadVar__7_7 = mercury__bitmap__unsafe_copy_bits_6_f_0(mercury__bitmap__SameBM_8, mercury__bitmap__SrcBM_9, mercury__bitmap__SrcStartBit_10, mercury__bitmap__DestBM_11, mercury__bitmap__DestStartBit_12, mercury__bitmap__NumBits_13);
      }
    else
      {
        mercury__bitmap__succeeded = (mercury__bitmap__NumBits_13 < (MR_Integer) 0);
        if (!(mercury__bitmap__succeeded))
          {
            mercury__bitmap__succeeded = (mercury__bitmap__SrcStartBit_10 < (MR_Integer) 0);
            if (!(mercury__bitmap__succeeded))
              {
                MR_Integer mercury__bitmap__Var_19;
                MR_Integer mercury__bitmap__Var_20 = (mercury__bitmap__SrcStartBit_10 + mercury__bitmap__NumBits_13);
                MR_Integer mercury__bitmap__Var_51;

                mercury__bitmap__Var_19 = (mercury__bitmap__Var_20 - (MR_Integer) 1);
                mercury__bitmap__succeeded = ((MR_Integer) 0 <= mercury__bitmap__Var_19);
                if (mercury__bitmap__succeeded)
                  {
{
#define MR_PROC_LABEL mercury__bitmap__copy_bits_6_f_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr) mercury__bitmap__SrcBM_9 ;
		{

    NumBits = BM->num_bits;


		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__Var_51  = NumBits;
}
                    mercury__bitmap__succeeded = (mercury__bitmap__Var_19 < mercury__bitmap__Var_51);
                  }
                mercury__bitmap__succeeded = !(mercury__bitmap__succeeded);
              }
          }
        if (mercury__bitmap__succeeded)
          {
            {
              mercury__bitmap__throw_bounds_error_4_p_0(mercury__bitmap__SrcBM_9, (MR_String) "copy_bits (source)", mercury__bitmap__SrcStartBit_10, mercury__bitmap__NumBits_13);
            }
          }
        else
          {
            mercury__bitmap__succeeded = (mercury__bitmap__DestStartBit_12 < (MR_Integer) 0);
            if (!(mercury__bitmap__succeeded))
              {
                MR_Integer mercury__bitmap__Var_25;
                MR_Integer mercury__bitmap__Var_26 = (mercury__bitmap__DestStartBit_12 + mercury__bitmap__NumBits_13);
                MR_Integer mercury__bitmap__Var_63;

                mercury__bitmap__Var_25 = (mercury__bitmap__Var_26 - (MR_Integer) 1);
                mercury__bitmap__succeeded = ((MR_Integer) 0 <= mercury__bitmap__Var_25);
                if (mercury__bitmap__succeeded)
                  {
{
#define MR_PROC_LABEL mercury__bitmap__copy_bits_6_f_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr) mercury__bitmap__DestBM_11 ;
		{

    NumBits = BM->num_bits;


		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__Var_63  = NumBits;
}
                    mercury__bitmap__succeeded = (mercury__bitmap__Var_25 < mercury__bitmap__Var_63);
                  }
                mercury__bitmap__succeeded = !(mercury__bitmap__succeeded);
              }
            if (mercury__bitmap__succeeded)
              {
                {
                  mercury__bitmap__throw_bounds_error_4_p_0(mercury__bitmap__DestBM_11, (MR_String) "copy_bits (destination)", mercury__bitmap__DestStartBit_12, mercury__bitmap__NumBits_13);
                }
              }
            else
              {
                MR_Word mercury__bitmap__TypeCtorInfo_4_76 = (MR_Word) &mercury__bitmap__bitmap__type_ctor_info_bitmap_error_0;
                MR_Word mercury__bitmap__Var_75 = (MR_Word) ((MR_Box) ((MR_String) "bitmap.copy_bits: failed to diagnose error"));

                {
                  mercury__exception__throw_1_p_0(mercury__bitmap__TypeCtorInfo_4_76, ((MR_Box) (mercury__bitmap__Var_75)));
                }
              }
          }
      }
    return mercury__bitmap__HeadVar__7_7;
  }
}

MR_Box MR_CALL 
mercury__bitmap__zip2_4_f_0(
  MR_Integer mercury__bitmap__I_6,
  MR_Word mercury__bitmap__Fn_7,
  MR_Box mercury__bitmap__BMa_8,
  MR_Box mercury__bitmap__BMb_9)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__bitmap__succeeded = (mercury__bitmap__I_6 >= (MR_Integer) 0);
        MR_Box mercury__bitmap__BM_10;

        if (mercury__bitmap__succeeded)
          {
            MR_Integer mercury__bitmap__Xa_11;
            MR_Integer mercury__bitmap__Xb_12;
            MR_Box mercury__bitmap__BMc_13;
            MR_Integer mercury__bitmap__Var_15;
            MR_Integer mercury__bitmap__Var_16;
            MR_Box MR_CALL (* mercury__bitmap__func_0)(MR_Box, MR_Box, MR_Box);
            MR_Box mercury__bitmap__conv1_Var_15;

{
#define MR_PROC_LABEL mercury__bitmap__zip2_4_f_0

	MR_Integer N;
	MR_BitmapPtr BM;
	MR_Integer Byte;

	N =  mercury__bitmap__I_6 ;
	BM = (MR_BitmapPtr) mercury__bitmap__BMa_8 ;
		{

    Byte = (MR_Integer) BM->elements[N];


		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__Xa_11  = Byte;
}
{
#define MR_PROC_LABEL mercury__bitmap__zip2_4_f_0

	MR_Integer N;
	MR_BitmapPtr BM;
	MR_Integer Byte;

	N =  mercury__bitmap__I_6 ;
	BM = (MR_BitmapPtr) mercury__bitmap__BMb_9 ;
		{

    Byte = (MR_Integer) BM->elements[N];


		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__Xb_12  = Byte;
}
            mercury__bitmap__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__bitmap__Fn_7, (MR_Integer) 1)));
            {
              mercury__bitmap__conv1_Var_15 = mercury__bitmap__func_0(((MR_Box) mercury__bitmap__Fn_7), ((MR_Box) (mercury__bitmap__Xa_11)), ((MR_Box) (mercury__bitmap__Xb_12)));
            }
            mercury__bitmap__Var_15 = ((MR_Integer) mercury__bitmap__conv1_Var_15);
{
#define MR_PROC_LABEL mercury__bitmap__zip2_4_f_0

	MR_Integer N;
	MR_BitmapPtr BM0;
	MR_Integer Byte;
	MR_BitmapPtr BM;

	N =  mercury__bitmap__I_6 ;
	BM0 = (MR_BitmapPtr) mercury__bitmap__BMb_9 ;
	Byte =  mercury__bitmap__Var_15 ;
		{

    BM = BM0;
    BM->elements[N] = (MR_uint_least8_t) Byte;


		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__BMc_13  = (MR_Box) BM;
}
            mercury__bitmap__Var_16 = (mercury__bitmap__I_6 - (MR_Integer) 1);
            /* direct tailcall eliminated */
            {
              MR_Integer mercury__bitmap__next_value_of_I_6 = mercury__bitmap__Var_16;
              MR_Box mercury__bitmap__next_value_of_BMb_9 = mercury__bitmap__BMc_13;

              mercury__bitmap__BMb_9 = mercury__bitmap__next_value_of_BMb_9;
              mercury__bitmap__I_6 = mercury__bitmap__next_value_of_I_6;
            }
            continue;
          }
        else
          mercury__bitmap__BM_10 = mercury__bitmap__BMb_9;
        return mercury__bitmap__BM_10;
      }
      break;
    }
}

MR_Box MR_CALL 
mercury__bitmap__zip_3_f_0(
  MR_Word mercury__bitmap__Fn_5,
  MR_Box mercury__bitmap__BMa_6,
  MR_Box mercury__bitmap__BMb_7)
{
  {
    MR_bool mercury__bitmap__succeeded;
    MR_Box mercury__bitmap__HeadVar__4_4;
    MR_Integer mercury__bitmap__Var_8;

{
#define MR_PROC_LABEL mercury__bitmap__zip_3_f_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr) mercury__bitmap__BMb_7 ;
		{

    NumBits = BM->num_bits;


		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__Var_8  = NumBits;
}
    mercury__bitmap__succeeded = (mercury__bitmap__Var_8 == (MR_Integer) 0);
    if (mercury__bitmap__succeeded)
      mercury__bitmap__HeadVar__4_4 = mercury__bitmap__BMb_7;
    else
      {
        MR_Integer mercury__bitmap__Var_9;
        MR_Integer mercury__bitmap__Var_10;
        MR_Integer mercury__bitmap__Var_11;

{
#define MR_PROC_LABEL mercury__bitmap__zip_3_f_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr) mercury__bitmap__BMb_7 ;
		{

    NumBits = BM->num_bits;


		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__Var_11  = NumBits;
}
        mercury__bitmap__Var_10 = (mercury__bitmap__Var_11 - (MR_Integer) 1);
        mercury__bitmap__succeeded = (mercury__bitmap__Var_10 < (MR_Integer) 0);
        if (mercury__bitmap__succeeded)
          mercury__bitmap__Var_9 = (MR_Integer) -1;
        else
          {
            mercury__bitmap__Var_9 = (mercury__bitmap__Var_10 / (MR_Integer) 8);
          }
        {
          mercury__bitmap__HeadVar__4_4 = mercury__bitmap__zip2_4_f_0(mercury__bitmap__Var_9, mercury__bitmap__Fn_5, mercury__bitmap__BMa_6, mercury__bitmap__BMb_7);
        }
      }
    return mercury__bitmap__HeadVar__4_4;
  }
}

MR_Box MR_CALL 
mercury__bitmap__complement_2_2_f_0(
  MR_Integer mercury__bitmap__ByteI_4,
  MR_Box mercury__bitmap__BM0_5)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__bitmap__succeeded = (mercury__bitmap__ByteI_4 < (MR_Integer) 0);
        MR_Box mercury__bitmap__BM_6;

        if (mercury__bitmap__succeeded)
          mercury__bitmap__BM_6 = mercury__bitmap__BM0_5;
        else
          {
            MR_Integer mercury__bitmap__X_7;
            MR_Box mercury__bitmap__BM1_8;
            MR_Integer mercury__bitmap__Var_10;
            MR_Integer mercury__bitmap__Var_11;

{
#define MR_PROC_LABEL mercury__bitmap__complement_2_2_f_0

	MR_Integer N;
	MR_BitmapPtr BM;
	MR_Integer Byte;

	N =  mercury__bitmap__ByteI_4 ;
	BM = (MR_BitmapPtr) mercury__bitmap__BM0_5 ;
		{

    Byte = (MR_Integer) BM->elements[N];


		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__X_7  = Byte;
}
            mercury__bitmap__Var_10 = ~(mercury__bitmap__X_7);
{
#define MR_PROC_LABEL mercury__bitmap__complement_2_2_f_0

	MR_Integer N;
	MR_BitmapPtr BM0;
	MR_Integer Byte;
	MR_BitmapPtr BM;

	N =  mercury__bitmap__ByteI_4 ;
	BM0 = (MR_BitmapPtr) mercury__bitmap__BM0_5 ;
	Byte =  mercury__bitmap__Var_10 ;
		{

    BM = BM0;
    BM->elements[N] = (MR_uint_least8_t) Byte;


		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__BM1_8  = (MR_Box) BM;
}
            mercury__bitmap__Var_11 = (mercury__bitmap__ByteI_4 - (MR_Integer) 1);
            /* direct tailcall eliminated */
            {
              MR_Integer mercury__bitmap__next_value_of_ByteI_4 = mercury__bitmap__Var_11;
              MR_Box mercury__bitmap__next_value_of_BM0_5 = mercury__bitmap__BM1_8;

              mercury__bitmap__BM0_5 = mercury__bitmap__next_value_of_BM0_5;
              mercury__bitmap__ByteI_4 = mercury__bitmap__next_value_of_ByteI_4;
            }
            continue;
          }
        return mercury__bitmap__BM_6;
      }
      break;
    }
}

MR_Integer MR_CALL 
mercury__bitmap__quotient_bits_per_byte_with_rem_zero_2_f_0(
  MR_String mercury__bitmap__Pred_4,
  MR_Integer mercury__bitmap__Int_5)
{
  {
    MR_bool mercury__bitmap__succeeded;
    MR_Integer mercury__bitmap__Quotient_6;
    MR_Integer mercury__bitmap__Var_7 = (mercury__bitmap__Int_5 % (MR_Integer) 8);

    mercury__bitmap__succeeded = (mercury__bitmap__Var_7 == (MR_Integer) 0);
    if (mercury__bitmap__succeeded)
      {
        mercury__bitmap__Quotient_6 = (mercury__bitmap__Int_5 / (MR_Integer) 8);
      }
    else
      {
        MR_Word mercury__bitmap__TypeCtorInfo_4_20;
        MR_String mercury__bitmap__Var_10;
        MR_Word mercury__bitmap__Var_19;

        {
          mercury__string__append_3_p_2(mercury__bitmap__Pred_4, (MR_String) ": not a byte slice.", &mercury__bitmap__Var_10);
        }
        mercury__bitmap__Var_19 = (MR_Word) mercury__bitmap__Var_10;
        mercury__bitmap__TypeCtorInfo_4_20 = (MR_Word) &mercury__bitmap__bitmap__type_ctor_info_bitmap_error_0;
        {
          mercury__exception__throw_1_p_0(mercury__bitmap__TypeCtorInfo_4_20, ((MR_Box) (mercury__bitmap__Var_19)));
        }
      }
    return mercury__bitmap__Quotient_6;
  }
}

static MR_Box MR_CALL 
mercury__bitmap__f_110_117_109_95_98_105_116_115_32_58_61_2_f_0(
  MR_Box mercury__bitmap__BM0_1,
  MR_Integer mercury__bitmap__NumBits_2)
{
  {
    MR_bool mercury__bitmap__succeeded;
    MR_Box mercury__bitmap__BM_3;

{
#define MR_PROC_LABEL mercury__bitmap__f_110_117_109_95_98_105_116_115_32_58_61_2_f_0

	MR_BitmapPtr BM0;
	MR_Integer NumBits;
	MR_BitmapPtr BM;

	BM0 = (MR_BitmapPtr) mercury__bitmap__BM0_1 ;
	NumBits =  mercury__bitmap__NumBits_2 ;
		{

    BM = BM0;
    BM->num_bits = NumBits;


		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__BM_3  = (MR_Box) BM;
}
    return mercury__bitmap__BM_3;
  }
}

static void MR_CALL 
mercury__bitmap__set_bits_in_byte_index_6_p_0(
  MR_Integer mercury__bitmap__ByteIndex_7,
  MR_Integer mercury__bitmap__LastBitIndex_8,
  MR_Integer mercury__bitmap__NumBitsThisByte_9,
  MR_Integer mercury__bitmap__Bits_10,
  MR_Box mercury__bitmap__STATE_VARIABLE_BM_0_13,
  MR_Box * mercury__bitmap__STATE_VARIABLE_BM_14)
{
  {
    MR_bool mercury__bitmap__succeeded;
    MR_Integer mercury__bitmap__FirstBitInByte_12;
    MR_Integer mercury__bitmap__Var_15 = (mercury__bitmap__LastBitIndex_8 - mercury__bitmap__NumBitsThisByte_9);
    MR_Integer mercury__bitmap__Var_18;
    MR_Integer mercury__bitmap__Var_19;
    MR_Integer mercury__bitmap__LastBit_29;
    MR_Integer mercury__bitmap__Shift_30;
    MR_Integer mercury__bitmap__Mask_31;
    MR_Integer mercury__bitmap__BitsToSet_32;
    MR_Integer mercury__bitmap__Var_33;
    MR_Integer mercury__bitmap__Var_35;
    MR_Integer mercury__bitmap__Var_38;
    MR_Integer mercury__bitmap__Var_39;
    MR_Integer mercury__bitmap__Var_40;
    MR_Integer mercury__bitmap__Var_41;
    MR_Integer mercury__bitmap__BitMask_44;
    MR_Integer mercury__bitmap__Var_46;
    MR_Integer mercury__bitmap__Var_48;

    mercury__bitmap__FirstBitInByte_12 = (mercury__bitmap__Var_15 + (MR_Integer) 1);
{
#define MR_PROC_LABEL mercury__bitmap__set_bits_in_byte_index_6_p_0

	MR_Integer N;
	MR_BitmapPtr BM;
	MR_Integer Byte;

	N =  mercury__bitmap__ByteIndex_7 ;
	BM = (MR_BitmapPtr) mercury__bitmap__STATE_VARIABLE_BM_0_13 ;
		{

    Byte = (MR_Integer) BM->elements[N];


		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__Var_19  = Byte;
}
    mercury__bitmap__Var_33 = (mercury__bitmap__FirstBitInByte_12 + mercury__bitmap__NumBitsThisByte_9);
    mercury__bitmap__LastBit_29 = (mercury__bitmap__Var_33 - (MR_Integer) 1);
    mercury__bitmap__Var_35 = ((MR_Integer) 8 - (MR_Integer) 1);
    mercury__bitmap__Shift_30 = (mercury__bitmap__Var_35 - mercury__bitmap__LastBit_29);
    mercury__bitmap__Var_46 = (mercury__bitmap__NumBitsThisByte_9 - (MR_Integer) 1);
    mercury__bitmap__BitMask_44 = ((MR_Integer) 1 << mercury__bitmap__Var_46);
    mercury__bitmap__Var_48 = (mercury__bitmap__BitMask_44 - (MR_Integer) 1);
    mercury__bitmap__Mask_31 = (mercury__bitmap__BitMask_44 | mercury__bitmap__Var_48);
    mercury__bitmap__BitsToSet_32 = (mercury__bitmap__Mask_31 & mercury__bitmap__Bits_10);
    mercury__bitmap__Var_40 = (mercury__bitmap__Mask_31 << mercury__bitmap__Shift_30);
    mercury__bitmap__Var_39 = ~(mercury__bitmap__Var_40);
    mercury__bitmap__Var_38 = (mercury__bitmap__Var_19 & mercury__bitmap__Var_39);
    mercury__bitmap__Var_41 = (mercury__bitmap__BitsToSet_32 << mercury__bitmap__Shift_30);
    mercury__bitmap__Var_18 = (mercury__bitmap__Var_38 | mercury__bitmap__Var_41);
{
#define MR_PROC_LABEL mercury__bitmap__set_bits_in_byte_index_6_p_0

	MR_Integer N;
	MR_BitmapPtr BM0;
	MR_Integer Byte;
	MR_BitmapPtr BM;

	N =  mercury__bitmap__ByteIndex_7 ;
	BM0 = (MR_BitmapPtr) mercury__bitmap__STATE_VARIABLE_BM_0_13 ;
	Byte =  mercury__bitmap__Var_18 ;
		{

    BM = BM0;
    BM->elements[N] = (MR_uint_least8_t) Byte;


		;}
#undef MR_PROC_LABEL
	 *mercury__bitmap__STATE_VARIABLE_BM_14  = (MR_Box) BM;
}
  }
}

void MR_CALL 
mercury__bitmap__set_bits_in_bytes_6_p_0(
  MR_Integer mercury__bitmap__LastByteIndex_7,
  MR_Integer mercury__bitmap__LastBitIndex_8,
  MR_Integer mercury__bitmap__NumBits_9,
  MR_Integer mercury__bitmap__Bits_10,
  MR_Box mercury__bitmap__STATE_VARIABLE_BM_0_14,
  MR_Box * mercury__bitmap__STATE_VARIABLE_BM_15)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__bitmap__succeeded;
        MR_Integer mercury__bitmap__RemainingBitsInByte_12 = (mercury__bitmap__LastBitIndex_8 + (MR_Integer) 1);

        mercury__bitmap__succeeded = (mercury__bitmap__NumBits_9 > mercury__bitmap__RemainingBitsInByte_12);
        if (mercury__bitmap__succeeded)
          {
            MR_Box mercury__bitmap__STATE_VARIABLE_BM_17_17;
            MR_Integer mercury__bitmap__Var_18;
            MR_Integer mercury__bitmap__Var_19;
            MR_Integer mercury__bitmap__Var_20;
            MR_Integer mercury__bitmap__Var_21;
            MR_Integer mercury__bitmap__FirstBitInByte_35;
            MR_Integer mercury__bitmap__Var_36 = (mercury__bitmap__LastBitIndex_8 - mercury__bitmap__RemainingBitsInByte_12);
            MR_Integer mercury__bitmap__Var_39;
            MR_Integer mercury__bitmap__Var_40;
            MR_Integer mercury__bitmap__LastBit_50;
            MR_Integer mercury__bitmap__Shift_51;
            MR_Integer mercury__bitmap__Mask_52;
            MR_Integer mercury__bitmap__BitsToSet_53;
            MR_Integer mercury__bitmap__Var_54;
            MR_Integer mercury__bitmap__Var_56;
            MR_Integer mercury__bitmap__Var_59;
            MR_Integer mercury__bitmap__Var_60;
            MR_Integer mercury__bitmap__Var_61;
            MR_Integer mercury__bitmap__Var_62;
            MR_Integer mercury__bitmap__BitMask_65;
            MR_Integer mercury__bitmap__Var_67;
            MR_Integer mercury__bitmap__Var_69;

            mercury__bitmap__FirstBitInByte_35 = (mercury__bitmap__Var_36 + (MR_Integer) 1);
{
#define MR_PROC_LABEL mercury__bitmap__set_bits_in_bytes_6_p_0

	MR_Integer N;
	MR_BitmapPtr BM;
	MR_Integer Byte;

	N =  mercury__bitmap__LastByteIndex_7 ;
	BM = (MR_BitmapPtr) mercury__bitmap__STATE_VARIABLE_BM_0_14 ;
		{

    Byte = (MR_Integer) BM->elements[N];


		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__Var_40  = Byte;
}
            mercury__bitmap__Var_54 = (mercury__bitmap__FirstBitInByte_35 + mercury__bitmap__RemainingBitsInByte_12);
            mercury__bitmap__LastBit_50 = (mercury__bitmap__Var_54 - (MR_Integer) 1);
            mercury__bitmap__Var_56 = ((MR_Integer) 8 - (MR_Integer) 1);
            mercury__bitmap__Shift_51 = (mercury__bitmap__Var_56 - mercury__bitmap__LastBit_50);
            mercury__bitmap__Var_67 = (mercury__bitmap__RemainingBitsInByte_12 - (MR_Integer) 1);
            mercury__bitmap__BitMask_65 = ((MR_Integer) 1 << mercury__bitmap__Var_67);
            mercury__bitmap__Var_69 = (mercury__bitmap__BitMask_65 - (MR_Integer) 1);
            mercury__bitmap__Mask_52 = (mercury__bitmap__BitMask_65 | mercury__bitmap__Var_69);
            mercury__bitmap__BitsToSet_53 = (mercury__bitmap__Mask_52 & mercury__bitmap__Bits_10);
            mercury__bitmap__Var_61 = (mercury__bitmap__Mask_52 << mercury__bitmap__Shift_51);
            mercury__bitmap__Var_60 = ~(mercury__bitmap__Var_61);
            mercury__bitmap__Var_59 = (mercury__bitmap__Var_40 & mercury__bitmap__Var_60);
            mercury__bitmap__Var_62 = (mercury__bitmap__BitsToSet_53 << mercury__bitmap__Shift_51);
            mercury__bitmap__Var_39 = (mercury__bitmap__Var_59 | mercury__bitmap__Var_62);
{
#define MR_PROC_LABEL mercury__bitmap__set_bits_in_bytes_6_p_0

	MR_Integer N;
	MR_BitmapPtr BM0;
	MR_Integer Byte;
	MR_BitmapPtr BM;

	N =  mercury__bitmap__LastByteIndex_7 ;
	BM0 = (MR_BitmapPtr) mercury__bitmap__STATE_VARIABLE_BM_0_14 ;
	Byte =  mercury__bitmap__Var_39 ;
		{

    BM = BM0;
    BM->elements[N] = (MR_uint_least8_t) Byte;


		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__STATE_VARIABLE_BM_17_17  = (MR_Box) BM;
}
            mercury__bitmap__Var_18 = (mercury__bitmap__LastByteIndex_7 - (MR_Integer) 1);
            mercury__bitmap__Var_19 = ((MR_Integer) 8 - (MR_Integer) 1);
            mercury__bitmap__Var_20 = (mercury__bitmap__NumBits_9 - mercury__bitmap__RemainingBitsInByte_12);
            mercury__bitmap__Var_21 = (mercury__bitmap__Bits_10 >> mercury__bitmap__RemainingBitsInByte_12);
            /* direct tailcall eliminated */
            {
              MR_Integer mercury__bitmap__next_value_of_LastByteIndex_7 = mercury__bitmap__Var_18;
              MR_Integer mercury__bitmap__next_value_of_LastBitIndex_8 = mercury__bitmap__Var_19;
              MR_Integer mercury__bitmap__next_value_of_NumBits_9 = mercury__bitmap__Var_20;
              MR_Integer mercury__bitmap__next_value_of_Bits_10 = mercury__bitmap__Var_21;
              MR_Box mercury__bitmap__next_value_of_STATE_VARIABLE_BM_0_14 = mercury__bitmap__STATE_VARIABLE_BM_17_17;

              mercury__bitmap__STATE_VARIABLE_BM_0_14 = mercury__bitmap__next_value_of_STATE_VARIABLE_BM_0_14;
              mercury__bitmap__Bits_10 = mercury__bitmap__next_value_of_Bits_10;
              mercury__bitmap__NumBits_9 = mercury__bitmap__next_value_of_NumBits_9;
              mercury__bitmap__LastBitIndex_8 = mercury__bitmap__next_value_of_LastBitIndex_8;
              mercury__bitmap__LastByteIndex_7 = mercury__bitmap__next_value_of_LastByteIndex_7;
            }
            continue;
          }
        else
          {
            mercury__bitmap__succeeded = (mercury__bitmap__NumBits_9 > (MR_Integer) 0);
            if (mercury__bitmap__succeeded)
              {
                mercury__bitmap__set_bits_in_byte_index_6_p_0(mercury__bitmap__LastByteIndex_7, mercury__bitmap__LastBitIndex_8, mercury__bitmap__NumBits_9, mercury__bitmap__Bits_10, mercury__bitmap__STATE_VARIABLE_BM_0_14, mercury__bitmap__STATE_VARIABLE_BM_15);
              }
            else
              *mercury__bitmap__STATE_VARIABLE_BM_15 = mercury__bitmap__STATE_VARIABLE_BM_0_14;
          }
      }
      break;
    }
}

static void MR_CALL 
mercury__bitmap__extract_bits_from_byte_index_6_p_0(
  MR_Integer mercury__bitmap__ByteIndex_7,
  MR_Integer mercury__bitmap__FirstBitIndex_8,
  MR_Integer mercury__bitmap__NumBitsThisByte_9,
  MR_Box mercury__bitmap__BM_10,
  MR_Integer mercury__bitmap__STATE_VARIABLE_Bits_0_13,
  MR_Integer * mercury__bitmap__STATE_VARIABLE_Bits_14)
{
  {
    MR_bool mercury__bitmap__succeeded;
    MR_Integer mercury__bitmap__BitsThisByte_12;
    MR_Integer mercury__bitmap__Var_15;
    MR_Integer mercury__bitmap__Var_17;
    MR_Integer mercury__bitmap__LastBit_26;
    MR_Integer mercury__bitmap__Shift_27;
    MR_Integer mercury__bitmap__Var_28;
    MR_Integer mercury__bitmap__Var_30;
    MR_Integer mercury__bitmap__Var_33;
    MR_Integer mercury__bitmap__Var_34;
    MR_Integer mercury__bitmap__BitMask_37;
    MR_Integer mercury__bitmap__Var_39;
    MR_Integer mercury__bitmap__Var_41;

{
#define MR_PROC_LABEL mercury__bitmap__extract_bits_from_byte_index_6_p_0

	MR_Integer N;
	MR_BitmapPtr BM;
	MR_Integer Byte;

	N =  mercury__bitmap__ByteIndex_7 ;
	BM = (MR_BitmapPtr) mercury__bitmap__BM_10 ;
		{

    Byte = (MR_Integer) BM->elements[N];


		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__Var_15  = Byte;
}
    mercury__bitmap__Var_28 = (mercury__bitmap__FirstBitIndex_8 + mercury__bitmap__NumBitsThisByte_9);
    mercury__bitmap__LastBit_26 = (mercury__bitmap__Var_28 - (MR_Integer) 1);
    mercury__bitmap__Var_30 = ((MR_Integer) 8 - (MR_Integer) 1);
    mercury__bitmap__Shift_27 = (mercury__bitmap__Var_30 - mercury__bitmap__LastBit_26);
    mercury__bitmap__Var_33 = (mercury__bitmap__Var_15 >> mercury__bitmap__Shift_27);
    mercury__bitmap__Var_39 = (mercury__bitmap__NumBitsThisByte_9 - (MR_Integer) 1);
    mercury__bitmap__BitMask_37 = ((MR_Integer) 1 << mercury__bitmap__Var_39);
    mercury__bitmap__Var_41 = (mercury__bitmap__BitMask_37 - (MR_Integer) 1);
    mercury__bitmap__Var_34 = (mercury__bitmap__BitMask_37 | mercury__bitmap__Var_41);
    mercury__bitmap__BitsThisByte_12 = (mercury__bitmap__Var_33 & mercury__bitmap__Var_34);
    mercury__bitmap__Var_17 = (mercury__bitmap__STATE_VARIABLE_Bits_0_13 << mercury__bitmap__NumBitsThisByte_9);
    *mercury__bitmap__STATE_VARIABLE_Bits_14 = (mercury__bitmap__Var_17 | mercury__bitmap__BitsThisByte_12);
  }
}

void MR_CALL 
mercury__bitmap__extract_bits_from_bytes_6_p_0(
  MR_Integer mercury__bitmap__FirstByteIndex_7,
  MR_Integer mercury__bitmap__FirstBitIndex_8,
  MR_Integer mercury__bitmap__NumBits_9,
  MR_Box mercury__bitmap__BM_10,
  MR_Integer mercury__bitmap__STATE_VARIABLE_Bits_0_14,
  MR_Integer * mercury__bitmap__STATE_VARIABLE_Bits_15)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__bitmap__succeeded;
        MR_Integer mercury__bitmap__RemainingBitsInByte_12 = ((MR_Integer) 8 - mercury__bitmap__FirstBitIndex_8);

        mercury__bitmap__succeeded = (mercury__bitmap__NumBits_9 > mercury__bitmap__RemainingBitsInByte_12);
        if (mercury__bitmap__succeeded)
          {
            MR_Integer mercury__bitmap__STATE_VARIABLE_Bits_17_17;
            MR_Integer mercury__bitmap__Var_18;
            MR_Integer mercury__bitmap__Var_20;
            MR_Integer mercury__bitmap__BitsThisByte_32;
            MR_Integer mercury__bitmap__Var_33;
            MR_Integer mercury__bitmap__Var_35;
            MR_Integer mercury__bitmap__LastBit_44;
            MR_Integer mercury__bitmap__Shift_45;
            MR_Integer mercury__bitmap__Var_46;
            MR_Integer mercury__bitmap__Var_48;
            MR_Integer mercury__bitmap__Var_51;
            MR_Integer mercury__bitmap__Var_52;
            MR_Integer mercury__bitmap__BitMask_55;
            MR_Integer mercury__bitmap__Var_57;
            MR_Integer mercury__bitmap__Var_59;

{
#define MR_PROC_LABEL mercury__bitmap__extract_bits_from_bytes_6_p_0

	MR_Integer N;
	MR_BitmapPtr BM;
	MR_Integer Byte;

	N =  mercury__bitmap__FirstByteIndex_7 ;
	BM = (MR_BitmapPtr) mercury__bitmap__BM_10 ;
		{

    Byte = (MR_Integer) BM->elements[N];


		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__Var_33  = Byte;
}
            mercury__bitmap__Var_46 = (mercury__bitmap__FirstBitIndex_8 + mercury__bitmap__RemainingBitsInByte_12);
            mercury__bitmap__LastBit_44 = (mercury__bitmap__Var_46 - (MR_Integer) 1);
            mercury__bitmap__Var_48 = ((MR_Integer) 8 - (MR_Integer) 1);
            mercury__bitmap__Shift_45 = (mercury__bitmap__Var_48 - mercury__bitmap__LastBit_44);
            mercury__bitmap__Var_51 = (mercury__bitmap__Var_33 >> mercury__bitmap__Shift_45);
            mercury__bitmap__Var_57 = (mercury__bitmap__RemainingBitsInByte_12 - (MR_Integer) 1);
            mercury__bitmap__BitMask_55 = ((MR_Integer) 1 << mercury__bitmap__Var_57);
            mercury__bitmap__Var_59 = (mercury__bitmap__BitMask_55 - (MR_Integer) 1);
            mercury__bitmap__Var_52 = (mercury__bitmap__BitMask_55 | mercury__bitmap__Var_59);
            mercury__bitmap__BitsThisByte_32 = (mercury__bitmap__Var_51 & mercury__bitmap__Var_52);
            mercury__bitmap__Var_35 = (mercury__bitmap__STATE_VARIABLE_Bits_0_14 << mercury__bitmap__RemainingBitsInByte_12);
            mercury__bitmap__STATE_VARIABLE_Bits_17_17 = (mercury__bitmap__Var_35 | mercury__bitmap__BitsThisByte_32);
            mercury__bitmap__Var_18 = (mercury__bitmap__FirstByteIndex_7 + (MR_Integer) 1);
            mercury__bitmap__Var_20 = (mercury__bitmap__NumBits_9 - mercury__bitmap__RemainingBitsInByte_12);
            /* direct tailcall eliminated */
            {
              MR_Integer mercury__bitmap__next_value_of_FirstByteIndex_7 = mercury__bitmap__Var_18;
              MR_Integer mercury__bitmap__next_value_of_NumBits_9 = mercury__bitmap__Var_20;
              MR_Integer mercury__bitmap__next_value_of_STATE_VARIABLE_Bits_0_14 = mercury__bitmap__STATE_VARIABLE_Bits_17_17;

              mercury__bitmap__STATE_VARIABLE_Bits_0_14 = mercury__bitmap__next_value_of_STATE_VARIABLE_Bits_0_14;
              mercury__bitmap__NumBits_9 = mercury__bitmap__next_value_of_NumBits_9;
              mercury__bitmap__FirstBitIndex_8 = (MR_Integer) 0;
              mercury__bitmap__FirstByteIndex_7 = mercury__bitmap__next_value_of_FirstByteIndex_7;
            }
            continue;
          }
        else
          {
            mercury__bitmap__succeeded = (mercury__bitmap__NumBits_9 > (MR_Integer) 0);
            if (mercury__bitmap__succeeded)
              {
                mercury__bitmap__extract_bits_from_byte_index_6_p_0(mercury__bitmap__FirstByteIndex_7, mercury__bitmap__FirstBitIndex_8, mercury__bitmap__NumBits_9, mercury__bitmap__BM_10, mercury__bitmap__STATE_VARIABLE_Bits_0_14, mercury__bitmap__STATE_VARIABLE_Bits_15);
              }
            else
              *mercury__bitmap__STATE_VARIABLE_Bits_15 = mercury__bitmap__STATE_VARIABLE_Bits_0_14;
          }
      }
      break;
    }
}

static MR_Box MR_CALL 
mercury__bitmap__initialize_bitmap_bytes_4_f_0(
  MR_Box mercury__bitmap__BM_6,
  MR_Integer mercury__bitmap__ByteIndex_7,
  MR_Integer mercury__bitmap__LastByteIndex_8,
  MR_Integer mercury__bitmap__Init_9)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__bitmap__succeeded = (mercury__bitmap__ByteIndex_7 > mercury__bitmap__LastByteIndex_8);
        MR_Box mercury__bitmap__HeadVar__5_5;

        if (mercury__bitmap__succeeded)
          mercury__bitmap__HeadVar__5_5 = mercury__bitmap__BM_6;
        else
          {
            MR_Box mercury__bitmap__Var_10;
            MR_Integer mercury__bitmap__Var_11;

{
#define MR_PROC_LABEL mercury__bitmap__initialize_bitmap_bytes_4_f_0

	MR_Integer N;
	MR_BitmapPtr BM0;
	MR_Integer Byte;
	MR_BitmapPtr BM;

	N =  mercury__bitmap__ByteIndex_7 ;
	BM0 = (MR_BitmapPtr) mercury__bitmap__BM_6 ;
	Byte =  mercury__bitmap__Init_9 ;
		{

    BM = BM0;
    BM->elements[N] = (MR_uint_least8_t) Byte;


		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__Var_10  = (MR_Box) BM;
}
            mercury__bitmap__Var_11 = (mercury__bitmap__ByteIndex_7 + (MR_Integer) 1);
            /* direct tailcall eliminated */
            {
              MR_Box mercury__bitmap__next_value_of_BM_6 = mercury__bitmap__Var_10;
              MR_Integer mercury__bitmap__next_value_of_ByteIndex_7 = mercury__bitmap__Var_11;

              mercury__bitmap__ByteIndex_7 = mercury__bitmap__next_value_of_ByteIndex_7;
              mercury__bitmap__BM_6 = mercury__bitmap__next_value_of_BM_6;
            }
            continue;
          }
        return mercury__bitmap__HeadVar__5_5;
      }
      break;
    }
}

MR_Box MR_CALL 
mercury__bitmap__set_trailing_bits_in_byte_3_f_0(
  MR_Box mercury__bitmap__STATE_VARIABLE_BM_0_12,
  MR_Integer mercury__bitmap__Bit_6,
  MR_Integer mercury__bitmap__Initializer_7)
{
  {
    MR_bool mercury__bitmap__succeeded;
    MR_Box mercury__bitmap__STATE_VARIABLE_BM_13;
    MR_Integer mercury__bitmap__FirstTrailingBit_8 = (mercury__bitmap__Bit_6 + (MR_Integer) 1);
    MR_Integer mercury__bitmap__FirstTrailingBitIndex_9 = (mercury__bitmap__FirstTrailingBit_8 % (MR_Integer) 8);

    mercury__bitmap__succeeded = (mercury__bitmap__FirstTrailingBitIndex_9 == (MR_Integer) 0);
    mercury__bitmap__succeeded = !(mercury__bitmap__succeeded);
    if (mercury__bitmap__succeeded)
      {
        MR_Integer mercury__bitmap__ByteIndex_10;
        MR_Integer mercury__bitmap__NumBitsToSet_11;
        MR_Integer mercury__bitmap__Var_17;
        MR_Integer mercury__bitmap__Var_18;
        MR_Integer mercury__bitmap__LastBit_33;
        MR_Integer mercury__bitmap__Shift_34;
        MR_Integer mercury__bitmap__Mask_35;
        MR_Integer mercury__bitmap__BitsToSet_36;
        MR_Integer mercury__bitmap__Var_37;
        MR_Integer mercury__bitmap__Var_39;
        MR_Integer mercury__bitmap__Var_42;
        MR_Integer mercury__bitmap__Var_43;
        MR_Integer mercury__bitmap__Var_44;
        MR_Integer mercury__bitmap__Var_45;
        MR_Integer mercury__bitmap__BitMask_48;
        MR_Integer mercury__bitmap__Var_50;
        MR_Integer mercury__bitmap__Var_52;

        mercury__bitmap__succeeded = (mercury__bitmap__FirstTrailingBit_8 < (MR_Integer) 0);
        if (mercury__bitmap__succeeded)
          mercury__bitmap__ByteIndex_10 = (MR_Integer) -1;
        else
          {
            mercury__bitmap__ByteIndex_10 = (mercury__bitmap__FirstTrailingBit_8 / (MR_Integer) 8);
          }
        mercury__bitmap__NumBitsToSet_11 = ((MR_Integer) 8 - mercury__bitmap__FirstTrailingBitIndex_9);
{
#define MR_PROC_LABEL mercury__bitmap__set_trailing_bits_in_byte_3_f_0

	MR_Integer N;
	MR_BitmapPtr BM;
	MR_Integer Byte;

	N =  mercury__bitmap__ByteIndex_10 ;
	BM = (MR_BitmapPtr) mercury__bitmap__STATE_VARIABLE_BM_0_12 ;
		{

    Byte = (MR_Integer) BM->elements[N];


		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__Var_18  = Byte;
}
        mercury__bitmap__Var_37 = (mercury__bitmap__FirstTrailingBitIndex_9 + mercury__bitmap__NumBitsToSet_11);
        mercury__bitmap__LastBit_33 = (mercury__bitmap__Var_37 - (MR_Integer) 1);
        mercury__bitmap__Var_39 = ((MR_Integer) 8 - (MR_Integer) 1);
        mercury__bitmap__Shift_34 = (mercury__bitmap__Var_39 - mercury__bitmap__LastBit_33);
        mercury__bitmap__Var_50 = (mercury__bitmap__NumBitsToSet_11 - (MR_Integer) 1);
        mercury__bitmap__BitMask_48 = ((MR_Integer) 1 << mercury__bitmap__Var_50);
        mercury__bitmap__Var_52 = (mercury__bitmap__BitMask_48 - (MR_Integer) 1);
        mercury__bitmap__Mask_35 = (mercury__bitmap__BitMask_48 | mercury__bitmap__Var_52);
        mercury__bitmap__BitsToSet_36 = (mercury__bitmap__Mask_35 & mercury__bitmap__Initializer_7);
        mercury__bitmap__Var_44 = (mercury__bitmap__Mask_35 << mercury__bitmap__Shift_34);
        mercury__bitmap__Var_43 = ~(mercury__bitmap__Var_44);
        mercury__bitmap__Var_42 = (mercury__bitmap__Var_18 & mercury__bitmap__Var_43);
        mercury__bitmap__Var_45 = (mercury__bitmap__BitsToSet_36 << mercury__bitmap__Shift_34);
        mercury__bitmap__Var_17 = (mercury__bitmap__Var_42 | mercury__bitmap__Var_45);
{
#define MR_PROC_LABEL mercury__bitmap__set_trailing_bits_in_byte_3_f_0

	MR_Integer N;
	MR_BitmapPtr BM0;
	MR_Integer Byte;
	MR_BitmapPtr BM;

	N =  mercury__bitmap__ByteIndex_10 ;
	BM0 = (MR_BitmapPtr) mercury__bitmap__STATE_VARIABLE_BM_0_12 ;
	Byte =  mercury__bitmap__Var_17 ;
		{

    BM = BM0;
    BM->elements[N] = (MR_uint_least8_t) Byte;


		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__STATE_VARIABLE_BM_13  = (MR_Box) BM;
}
      }
    else
      mercury__bitmap__STATE_VARIABLE_BM_13 = mercury__bitmap__STATE_VARIABLE_BM_0_12;
    return mercury__bitmap__STATE_VARIABLE_BM_13;
  }
}

MR_Box MR_CALL 
mercury__bitmap__clear_filler_bits_1_f_0(
  MR_Box mercury__bitmap__BM_3)
{
  {
    MR_bool mercury__bitmap__succeeded;
    MR_Box mercury__bitmap__HeadVar__2_2;
    MR_Integer mercury__bitmap__Var_4;
    MR_Integer mercury__bitmap__Var_5;

{
#define MR_PROC_LABEL mercury__bitmap__clear_filler_bits_1_f_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr) mercury__bitmap__BM_3 ;
		{

    NumBits = BM->num_bits;


		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__Var_5  = NumBits;
}
    mercury__bitmap__Var_4 = (mercury__bitmap__Var_5 - (MR_Integer) 1);
    {
      mercury__bitmap__HeadVar__2_2 = mercury__bitmap__set_trailing_bits_in_byte_3_f_0(mercury__bitmap__BM_3, mercury__bitmap__Var_4, (MR_Integer) 0);
    }
    return mercury__bitmap__HeadVar__2_2;
  }
}

void MR_CALL 
mercury__bitmap__throw_bounds_error_4_p_0(
  MR_Box mercury__bitmap__BM_5,
  MR_String mercury__bitmap__Pred_6,
  MR_Integer mercury__bitmap__Index_7,
  MR_Integer mercury__bitmap__NumBits_8)
{
  {
    MR_bool mercury__bitmap__succeeded = (mercury__bitmap__NumBits_8 < (MR_Integer) 0);
    MR_Word mercury__bitmap__TypeCtorInfo_4_98;
    MR_String mercury__bitmap__Msg_9;
    MR_Word mercury__bitmap__Var_97;

    if (mercury__bitmap__succeeded)
      {
        MR_String mercury__bitmap__Var_29;
        MR_Word mercury__bitmap__Var_35 = (MR_Word) &mercury__bitmap_scalar_common_5[0];
        MR_String mercury__bitmap__Var_36;
        MR_String mercury__bitmap__Var_38;
        MR_Word mercury__bitmap__V_7_73 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        MR_Word mercury__bitmap__V_8_74 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

        {
          mercury__string__format__format_signed_int_component_5_p_0(mercury__bitmap__Var_35, mercury__bitmap__V_7_73, mercury__bitmap__V_8_74, mercury__bitmap__NumBits_8, &mercury__bitmap__Var_29);
        }
        {
          mercury__string__append_3_p_2(mercury__bitmap__Var_29, (MR_String) ".", &mercury__bitmap__Var_36);
        }
        {
          mercury__string__append_3_p_2((MR_String) ": negative number of bits: ", mercury__bitmap__Var_36, &mercury__bitmap__Var_38);
        }
        {
          mercury__string__append_3_p_2(mercury__bitmap__Pred_6, mercury__bitmap__Var_38, &mercury__bitmap__Msg_9);
        }
      }
    else
      {
        MR_Integer mercury__bitmap__Var_26;
        MR_String mercury__bitmap__Var_40;
        MR_Word mercury__bitmap__Var_46;
        MR_String mercury__bitmap__Var_47;
        MR_String mercury__bitmap__Var_49;
        MR_String mercury__bitmap__Var_50;
        MR_String mercury__bitmap__Var_57;
        MR_String mercury__bitmap__Var_59;
        MR_String mercury__bitmap__Var_60;
        MR_String mercury__bitmap__Var_67;
        MR_String mercury__bitmap__Var_69;

{
#define MR_PROC_LABEL mercury__bitmap__throw_bounds_error_4_p_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr) mercury__bitmap__BM_5 ;
		{

    NumBits = BM->num_bits;


		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__Var_26  = NumBits;
}
        mercury__bitmap__Var_46 = (MR_Word) &mercury__bitmap_scalar_common_5[0];
        {
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(mercury__bitmap__Var_46, mercury__bitmap__Var_26, &mercury__bitmap__Var_40);
        }
        {
          mercury__bitmap__Var_47 = mercury__string__f_43_43_2_f_0(mercury__bitmap__Var_40, (MR_String) ").");
        }
        {
          mercury__bitmap__Var_49 = mercury__string__f_43_43_2_f_0((MR_String) " is out of bounds [0, ", mercury__bitmap__Var_47);
        }
        {
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(mercury__bitmap__Var_46, mercury__bitmap__Index_7, &mercury__bitmap__Var_50);
        }
        {
          mercury__bitmap__Var_57 = mercury__string__f_43_43_2_f_0(mercury__bitmap__Var_50, mercury__bitmap__Var_49);
        }
        {
          mercury__bitmap__Var_59 = mercury__string__f_43_43_2_f_0((MR_String) " bits starting at bit ", mercury__bitmap__Var_57);
        }
        {
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(mercury__bitmap__Var_46, mercury__bitmap__NumBits_8, &mercury__bitmap__Var_60);
        }
        {
          mercury__bitmap__Var_67 = mercury__string__f_43_43_2_f_0(mercury__bitmap__Var_60, mercury__bitmap__Var_59);
        }
        {
          mercury__bitmap__Var_69 = mercury__string__f_43_43_2_f_0((MR_String) ": ", mercury__bitmap__Var_67);
        }
        {
          mercury__bitmap__Msg_9 = mercury__string__f_43_43_2_f_0(mercury__bitmap__Pred_6, mercury__bitmap__Var_69);
        }
      }
    mercury__bitmap__Var_97 = (MR_Word) mercury__bitmap__Msg_9;
    mercury__bitmap__TypeCtorInfo_4_98 = (MR_Word) &mercury__bitmap__bitmap__type_ctor_info_bitmap_error_0;
    {
      mercury__exception__throw_1_p_0(mercury__bitmap__TypeCtorInfo_4_98, ((MR_Box) (mercury__bitmap__Var_97)));
      return;
    }
  }
}

MR_Integer MR_CALL 
mercury__bitmap__hash_1_f_0(
  MR_Box mercury__bitmap__BM_3)
{
  {
    MR_bool mercury__bitmap__succeeded;
    MR_Integer mercury__bitmap__HashVal_4;
    MR_Integer mercury__bitmap__NumBits_5;
    MR_Integer mercury__bitmap__NumBytes0_6;
    MR_Integer mercury__bitmap__NumBytes_7;
    MR_Integer mercury__bitmap__HashVal0_8;
    MR_Integer mercury__bitmap__Var_10;

{
#define MR_PROC_LABEL mercury__bitmap__hash_1_f_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr) mercury__bitmap__BM_3 ;
		{

    NumBits = BM->num_bits;


		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__NumBits_5  = NumBits;
}
    mercury__bitmap__NumBytes0_6 = (mercury__bitmap__NumBits_5 / (MR_Integer) 8);
    mercury__bitmap__Var_10 = (mercury__bitmap__NumBits_5 % (MR_Integer) 8);
    mercury__bitmap__succeeded = (mercury__bitmap__Var_10 == (MR_Integer) 0);
    if (mercury__bitmap__succeeded)
      mercury__bitmap__NumBytes_7 = mercury__bitmap__NumBytes0_6;
    else
      {
        mercury__bitmap__NumBytes_7 = (mercury__bitmap__NumBytes0_6 + (MR_Integer) 1);
      }
    {
      mercury__bitmap__hash_2_5_p_0(mercury__bitmap__BM_3, (MR_Integer) 0, mercury__bitmap__NumBytes_7, (MR_Integer) 0, &mercury__bitmap__HashVal0_8);
    }
    mercury__bitmap__HashVal_4 = (mercury__bitmap__HashVal0_8 ^ mercury__bitmap__NumBits_5);
    return mercury__bitmap__HashVal_4;
  }
}

MR_String MR_CALL 
mercury__bitmap__to_byte_string_1_f_0(
  MR_Box mercury__bitmap__BM_3)
{
  {
    MR_bool mercury__bitmap__succeeded;
    MR_String mercury__bitmap__HeadVar__2_2;
    MR_Word mercury__bitmap__Var_5;
    MR_Integer mercury__bitmap__NumBits_8;
    MR_Word mercury__bitmap__Var_9;

{
#define MR_PROC_LABEL mercury__bitmap__to_byte_string_1_f_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr) mercury__bitmap__BM_3 ;
		{

    NumBits = BM->num_bits;


		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__NumBits_8  = NumBits;
}
    mercury__bitmap__Var_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    {
      mercury__bitmap__Var_5 = mercury__bitmap__bitmap_to_byte_strings_3_f_0(mercury__bitmap__BM_3, mercury__bitmap__NumBits_8, mercury__bitmap__Var_9);
    }
    {
      mercury__bitmap__HeadVar__2_2 = mercury__string__join_list_2_f_0((MR_String) ".", mercury__bitmap__Var_5);
    }
    return mercury__bitmap__HeadVar__2_2;
  }
}

MR_bool MR_CALL 
mercury__bitmap__from_string_1_f_0(
  MR_String mercury__bitmap__Str_3,
  MR_Box * mercury__bitmap__BM_4)
{
  {
    MR_bool mercury__bitmap__succeeded;
    MR_Integer mercury__bitmap__Start_5;
    MR_Char mercury__bitmap__Char_6;
    MR_Integer mercury__bitmap__End_7;
    MR_Integer mercury__bitmap__Colon_8;
    MR_String mercury__bitmap__SizeStr_9;
    MR_Integer mercury__bitmap__Size_10;
    MR_Box mercury__bitmap__BM0_11;
    MR_Integer mercury__bitmap__AfterColon_12;
    MR_Integer mercury__bitmap__Var_16;
    MR_Char mercury__bitmap__Var_17;
    MR_String mercury__bitmap__Var_18;
    MR_Integer mercury__bitmap__Var_19;
    MR_Integer mercury__bitmap__Var_20;
    MR_Char mercury__bitmap__Var_21;
    MR_Char mercury__bitmap__Var_22;
    MR_Integer mercury__bitmap__V_5_32;
    MR_Char mercury__bitmap__Var_13;

{
#define MR_PROC_LABEL mercury__bitmap__from_string_1_f_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__bitmap__Str_3 ;
	Index =  (MR_Integer) 0 ;
		{

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__bitmap__Start_5  = NextIndex;
	 mercury__bitmap__Var_21  = Ch;
	}
mercury__bitmap__succeeded  = SUCCESS_INDICATOR;
}
    if (mercury__bitmap__succeeded)
      {
        mercury__bitmap__succeeded = ((MR_Char) 60 == mercury__bitmap__Var_21);
        if (mercury__bitmap__succeeded)
          {
            {
              mercury__string__unsafe_index_3_p_0(mercury__bitmap__Str_3, mercury__bitmap__Start_5, &mercury__bitmap__Char_6);
            }
            {
              mercury__bitmap__succeeded = mercury__char__is_decimal_digit_1_p_0(mercury__bitmap__Char_6);
            }
            if (mercury__bitmap__succeeded)
              {
{
#define MR_PROC_LABEL mercury__bitmap__from_string_1_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__bitmap__Str_3 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__Var_16  = Length;
}
                mercury__bitmap__Var_17 = (MR_Char) 62;
{
#define MR_PROC_LABEL mercury__bitmap__from_string_1_f_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer PrevIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__bitmap__Str_3 ;
	Index =  mercury__bitmap__Var_16 ;
		{

    if (Index > 0) {
        PrevIndex = Index - 1;
        Ch = Str[PrevIndex];
        if (MR_is_ascii(Ch)) {
            SUCCESS_INDICATOR = (Ch != 0);
        } else {
            Ch = MR_utf8_prev_get(Str, &PrevIndex);
            SUCCESS_INDICATOR = (Ch > 0);
        }
    } else {
        SUCCESS_INDICATOR = MR_FALSE;
    }


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__bitmap__End_7  = PrevIndex;
	 mercury__bitmap__Var_22  = Ch;
	}
mercury__bitmap__succeeded  = SUCCESS_INDICATOR;
}
                if (mercury__bitmap__succeeded)
                  {
                    mercury__bitmap__succeeded = (mercury__bitmap__Var_17 == mercury__bitmap__Var_22);
                    if (mercury__bitmap__succeeded)
                      {
                        mercury__bitmap__Var_18 = (MR_String) ":";
{
#define MR_PROC_LABEL mercury__bitmap__from_string_1_f_0

	MR_String WholeString;
	MR_String Pattern;
	MR_Integer BeginAt;
	MR_Integer Index;
	MR_bool SUCCESS_INDICATOR;

	WholeString =  mercury__bitmap__Str_3 ;
	Pattern =  mercury__bitmap__Var_18 ;
	BeginAt =  mercury__bitmap__Start_5 ;
		{
{
    char *match;
    if ((MR_Unsigned) BeginAt > strlen(WholeString)) {
        SUCCESS_INDICATOR = MR_FALSE;
    } else {
        match = strstr(WholeString + BeginAt, Pattern);
        if (match) {
            Index = match - WholeString;
            SUCCESS_INDICATOR = MR_TRUE;
        } else {
            SUCCESS_INDICATOR = MR_FALSE;
        }
    }
}

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__bitmap__Colon_8  = Index;
	}
mercury__bitmap__succeeded  = SUCCESS_INDICATOR;
}
                        if (mercury__bitmap__succeeded)
                          {
{
#define MR_PROC_LABEL mercury__bitmap__from_string_1_f_0

	MR_String Str;
	MR_Integer Start;
	MR_Integer End;
	MR_String SubString;

	Str =  mercury__bitmap__Str_3 ;
	Start =  mercury__bitmap__Start_5 ;
	End =  mercury__bitmap__Colon_8 ;
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
	 mercury__bitmap__SizeStr_9  = SubString;
}
                            mercury__bitmap__V_5_32 = (MR_Integer) 10;
                            {
                              mercury__bitmap__succeeded = mercury__string__base_string_to_int_3_p_0(mercury__bitmap__V_5_32, mercury__bitmap__SizeStr_9, &mercury__bitmap__Size_10);
                            }
                            if (mercury__bitmap__succeeded)
                              {
                                mercury__bitmap__Var_19 = (MR_Integer) 0;
                                mercury__bitmap__succeeded = (mercury__bitmap__Size_10 >= mercury__bitmap__Var_19);
                                if (mercury__bitmap__succeeded)
                                  {
{
#define MR_PROC_LABEL mercury__bitmap__from_string_1_f_0

	MR_Integer N;
	MR_BitmapPtr BM;

	N =  mercury__bitmap__Size_10 ;
		{

    MR_allocate_bitmap_msg(BM, N, MR_ALLOC_ID);


		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__BM0_11  = (MR_Box) BM;
}
{
#define MR_PROC_LABEL mercury__bitmap__from_string_1_f_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__bitmap__Str_3 ;
	Index =  mercury__bitmap__Colon_8 ;
		{

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__bitmap__AfterColon_12  = NextIndex;
	 mercury__bitmap__Var_13  = Ch;
	}
mercury__bitmap__succeeded  = SUCCESS_INDICATOR;
}
                                    if (mercury__bitmap__succeeded)
                                      {
                                        mercury__bitmap__Var_20 = (MR_Integer) 0;
                                        {
                                          mercury__bitmap__succeeded = mercury__bitmap__hex_chars_to_bitmap_6_p_0(mercury__bitmap__Str_3, mercury__bitmap__AfterColon_12, mercury__bitmap__End_7, mercury__bitmap__Var_20, mercury__bitmap__BM0_11, mercury__bitmap__BM_4);
                                        }
                                      }
                                  }
                              }
                          }
                      }
                  }
              }
          }
      }
    return mercury__bitmap__succeeded;
  }
}

MR_String MR_CALL 
mercury__bitmap__to_string_1_f_0(
  MR_Box mercury__bitmap__BM_3)
{
  {
    MR_bool mercury__bitmap__succeeded;
    MR_String mercury__bitmap__Str_4;
    MR_Word mercury__bitmap__TypeCtorInfo_20_20;
    MR_Integer mercury__bitmap__NumBits_5;
    MR_Word mercury__bitmap__BitChars_6;
    MR_Word mercury__bitmap__LenChars_7;
    MR_Word mercury__bitmap__Chars_8;
    MR_Integer mercury__bitmap__Var_9;
    MR_Word mercury__bitmap__Var_10;
    MR_Integer mercury__bitmap__Var_11;
    MR_Word mercury__bitmap__Var_14;
    MR_String mercury__bitmap__Var_15;
    MR_Word mercury__bitmap__Var_16;
    MR_Word mercury__bitmap__Var_18;

{
#define MR_PROC_LABEL mercury__bitmap__to_string_1_f_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr) mercury__bitmap__BM_3 ;
		{

    NumBits = BM->num_bits;


		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__NumBits_5  = NumBits;
}
    mercury__bitmap__Var_11 = (mercury__bitmap__NumBits_5 - (MR_Integer) 1);
    mercury__bitmap__succeeded = (mercury__bitmap__Var_11 < (MR_Integer) 0);
    if (mercury__bitmap__succeeded)
      mercury__bitmap__Var_9 = (MR_Integer) -1;
    else
      {
        mercury__bitmap__Var_9 = (mercury__bitmap__Var_11 / (MR_Integer) 8);
      }
    mercury__bitmap__Var_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    mercury__bitmap__Var_10 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__bitmap_scalar_common_4[0]);
    {
      mercury__bitmap__to_string_chars_4_p_0(mercury__bitmap__Var_9, mercury__bitmap__BM_3, mercury__bitmap__Var_10, &mercury__bitmap__BitChars_6);
    }
    {
      mercury__string__int_to_base_string_3_p_0(mercury__bitmap__NumBits_5, (MR_Integer) 10, &mercury__bitmap__Var_15);
    }
    {
      mercury__string__to_char_list_2_p_0(mercury__bitmap__Var_15, &mercury__bitmap__LenChars_7);
    }
    mercury__bitmap__TypeCtorInfo_20_20 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0;
    {
      mercury__bitmap__Var_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mercury__bitmap__Var_16, 0) = ((MR_Box) (MR_Word) ((MR_Char) 60));
      MR_hl_field(MR_mktag(1), mercury__bitmap__Var_16, 1) = ((MR_Box) (mercury__bitmap__LenChars_7));
    }
    {
      mercury__bitmap__Var_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mercury__bitmap__Var_18, 0) = ((MR_Box) (MR_Word) ((MR_Char) 58));
      MR_hl_field(MR_mktag(1), mercury__bitmap__Var_18, 1) = ((MR_Box) (mercury__bitmap__BitChars_6));
    }
    {
      mercury__list__append_3_p_1(mercury__bitmap__TypeCtorInfo_20_20, mercury__bitmap__Var_16, mercury__bitmap__Var_18, &mercury__bitmap__Chars_8);
    }
    {
      mercury__string__from_char_list_2_p_0(mercury__bitmap__Chars_8, &mercury__bitmap__Str_4);
    }
    return mercury__bitmap__Str_4;
  }
}

MR_Box MR_CALL 
mercury__bitmap__copy_bytes_in_bitmap_4_f_0(
  MR_Box mercury__bitmap__SrcBM_6,
  MR_Integer mercury__bitmap__SrcStartByteIndex_7,
  MR_Integer mercury__bitmap__DestStartByteIndex_8,
  MR_Integer mercury__bitmap__NumBytes_9)
{
  {
    MR_bool mercury__bitmap__succeeded;
    MR_Box mercury__bitmap__HeadVar__5_5;

    {
      mercury__bitmap__HeadVar__5_5 = mercury__bitmap__copy_bytes_6_f_0((MR_Integer) 1, mercury__bitmap__SrcBM_6, mercury__bitmap__SrcStartByteIndex_7, mercury__bitmap__SrcBM_6, mercury__bitmap__DestStartByteIndex_8, mercury__bitmap__NumBytes_9);
    }
    return mercury__bitmap__HeadVar__5_5;
  }
}

MR_Box MR_CALL 
mercury__bitmap__copy_bytes_5_f_0(
  MR_Box mercury__bitmap__SrcBM_7,
  MR_Integer mercury__bitmap__SrcStartByteIndex_8,
  MR_Box mercury__bitmap__DestBM_9,
  MR_Integer mercury__bitmap__DestStartByteIndex_10,
  MR_Integer mercury__bitmap__NumBytes_11)
{
  {
    MR_bool mercury__bitmap__succeeded;
    MR_Box mercury__bitmap__HeadVar__6_6;

    {
      mercury__bitmap__HeadVar__6_6 = mercury__bitmap__copy_bytes_6_f_0((MR_Integer) 0, mercury__bitmap__SrcBM_7, mercury__bitmap__SrcStartByteIndex_8, mercury__bitmap__DestBM_9, mercury__bitmap__DestStartByteIndex_10, mercury__bitmap__NumBytes_11);
    }
    return mercury__bitmap__HeadVar__6_6;
  }
}

MR_Box MR_CALL 
mercury__bitmap__copy_bits_in_bitmap_4_f_0(
  MR_Box mercury__bitmap__SrcBM_6,
  MR_Integer mercury__bitmap__SrcStartBit_7,
  MR_Integer mercury__bitmap__DestStartBit_8,
  MR_Integer mercury__bitmap__NumBits_9)
{
  {
    MR_bool mercury__bitmap__succeeded;
    MR_Box mercury__bitmap__HeadVar__5_5;

    {
      mercury__bitmap__HeadVar__5_5 = mercury__bitmap__copy_bits_6_f_0((MR_Integer) 1, mercury__bitmap__SrcBM_6, mercury__bitmap__SrcStartBit_7, mercury__bitmap__SrcBM_6, mercury__bitmap__DestStartBit_8, mercury__bitmap__NumBits_9);
    }
    return mercury__bitmap__HeadVar__5_5;
  }
}

MR_Box MR_CALL 
mercury__bitmap__copy_bits_5_f_0(
  MR_Box mercury__bitmap__SrcBM_7,
  MR_Integer mercury__bitmap__SrcStartBit_8,
  MR_Box mercury__bitmap__DestBM_9,
  MR_Integer mercury__bitmap__DestStartBit_10,
  MR_Integer mercury__bitmap__NumBits_11)
{
  {
    MR_bool mercury__bitmap__succeeded;
    MR_Box mercury__bitmap__HeadVar__6_6;

    {
      mercury__bitmap__HeadVar__6_6 = mercury__bitmap__copy_bits_6_f_0((MR_Integer) 0, mercury__bitmap__SrcBM_7, mercury__bitmap__SrcStartBit_8, mercury__bitmap__DestBM_9, mercury__bitmap__DestStartBit_10, mercury__bitmap__NumBits_11);
    }
    return mercury__bitmap__HeadVar__6_6;
  }
}

MR_Box MR_CALL 
mercury__bitmap__append_list_1_f_0(
  MR_Word mercury__bitmap__BMs_3)
{
  {
    MR_bool mercury__bitmap__succeeded;
    MR_Box mercury__bitmap__STATE_VARIABLE_BM_8;
    MR_Integer mercury__bitmap__BMSize_5;
    MR_Box mercury__bitmap__STATE_VARIABLE_BM_15_15;
    MR_Integer mercury__bitmap__Var_7;

    {
      mercury__bitmap__foldl__ho12_4_p_in__list_0(mercury__bitmap__BMs_3, (MR_Integer) 0, &mercury__bitmap__BMSize_5);
    }
    {
      mercury__bitmap__STATE_VARIABLE_BM_15_15 = mercury__bitmap__init_2_f_0(mercury__bitmap__BMSize_5, (MR_Integer) 0);
    }
    {
      mercury__bitmap__foldl2__ho2_6_p_in__list_0(mercury__bitmap__BMs_3, (MR_Integer) 0, &mercury__bitmap__Var_7, mercury__bitmap__STATE_VARIABLE_BM_15_15, &mercury__bitmap__STATE_VARIABLE_BM_8);
    }
    return mercury__bitmap__STATE_VARIABLE_BM_8;
  }
}

MR_Box MR_CALL 
mercury__bitmap__xor_2_f_0(
  MR_Box mercury__bitmap__BMa_4,
  MR_Box mercury__bitmap__BMb_5)
{
  {
    MR_bool mercury__bitmap__succeeded;
    MR_Box mercury__bitmap__HeadVar__3_3;
    MR_Integer mercury__bitmap__Var_8;
    MR_Integer mercury__bitmap__Var_17;

{
#define MR_PROC_LABEL mercury__bitmap__xor_2_f_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr) mercury__bitmap__BMa_4 ;
		{

    NumBits = BM->num_bits;


		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__Var_8  = NumBits;
}
{
#define MR_PROC_LABEL mercury__bitmap__xor_2_f_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr) mercury__bitmap__BMb_5 ;
		{

    NumBits = BM->num_bits;


		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__Var_17  = NumBits;
}
    mercury__bitmap__succeeded = (mercury__bitmap__Var_8 == mercury__bitmap__Var_17);
    if (mercury__bitmap__succeeded)
      {
        MR_Integer mercury__bitmap__Var_28;

{
#define MR_PROC_LABEL mercury__bitmap__xor_2_f_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr) mercury__bitmap__BMb_5 ;
		{

    NumBits = BM->num_bits;


		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__Var_28  = NumBits;
}
        mercury__bitmap__succeeded = (mercury__bitmap__Var_28 == (MR_Integer) 0);
        if (mercury__bitmap__succeeded)
          mercury__bitmap__HeadVar__3_3 = mercury__bitmap__BMb_5;
        else
          {
            MR_Integer mercury__bitmap__Var_29;
            MR_Integer mercury__bitmap__Var_30;
            MR_Integer mercury__bitmap__Var_31;

{
#define MR_PROC_LABEL mercury__bitmap__xor_2_f_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr) mercury__bitmap__BMb_5 ;
		{

    NumBits = BM->num_bits;


		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__Var_31  = NumBits;
}
            mercury__bitmap__Var_30 = (mercury__bitmap__Var_31 - (MR_Integer) 1);
            mercury__bitmap__succeeded = (mercury__bitmap__Var_30 < (MR_Integer) 0);
            if (mercury__bitmap__succeeded)
              mercury__bitmap__Var_29 = (MR_Integer) -1;
            else
              {
                mercury__bitmap__Var_29 = (mercury__bitmap__Var_30 / (MR_Integer) 8);
              }
            {
              mercury__bitmap__HeadVar__3_3 = mercury__bitmap__zip2__ho11_4_f_0(mercury__bitmap__Var_29, mercury__bitmap__BMa_4, mercury__bitmap__BMb_5);
            }
          }
      }
    else
      {
        MR_Word mercury__bitmap__TypeCtorInfo_4_46 = (MR_Word) &mercury__bitmap__bitmap__type_ctor_info_bitmap_error_0;
        MR_Word mercury__bitmap__Var_45 = (MR_Word) ((MR_Box) ((MR_String) "bitmap.xor: bitmaps not the same size"));

        {
          mercury__exception__throw_1_p_0(mercury__bitmap__TypeCtorInfo_4_46, ((MR_Box) (mercury__bitmap__Var_45)));
        }
      }
    return mercury__bitmap__HeadVar__3_3;
  }
}

MR_Box MR_CALL 
mercury__bitmap__difference_2_f_0(
  MR_Box mercury__bitmap__BMa_4,
  MR_Box mercury__bitmap__BMb_5)
{
  {
    MR_bool mercury__bitmap__succeeded;
    MR_Box mercury__bitmap__HeadVar__3_3;
    MR_Integer mercury__bitmap__Var_8;
    MR_Integer mercury__bitmap__Var_18;

{
#define MR_PROC_LABEL mercury__bitmap__difference_2_f_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr) mercury__bitmap__BMa_4 ;
		{

    NumBits = BM->num_bits;


		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__Var_8  = NumBits;
}
{
#define MR_PROC_LABEL mercury__bitmap__difference_2_f_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr) mercury__bitmap__BMb_5 ;
		{

    NumBits = BM->num_bits;


		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__Var_18  = NumBits;
}
    mercury__bitmap__succeeded = (mercury__bitmap__Var_8 == mercury__bitmap__Var_18);
    if (mercury__bitmap__succeeded)
      {
        MR_Integer mercury__bitmap__Var_29;

{
#define MR_PROC_LABEL mercury__bitmap__difference_2_f_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr) mercury__bitmap__BMb_5 ;
		{

    NumBits = BM->num_bits;


		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__Var_29  = NumBits;
}
        mercury__bitmap__succeeded = (mercury__bitmap__Var_29 == (MR_Integer) 0);
        if (mercury__bitmap__succeeded)
          mercury__bitmap__HeadVar__3_3 = mercury__bitmap__BMb_5;
        else
          {
            MR_Integer mercury__bitmap__Var_30;
            MR_Integer mercury__bitmap__Var_31;
            MR_Integer mercury__bitmap__Var_32;

{
#define MR_PROC_LABEL mercury__bitmap__difference_2_f_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr) mercury__bitmap__BMb_5 ;
		{

    NumBits = BM->num_bits;


		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__Var_32  = NumBits;
}
            mercury__bitmap__Var_31 = (mercury__bitmap__Var_32 - (MR_Integer) 1);
            mercury__bitmap__succeeded = (mercury__bitmap__Var_31 < (MR_Integer) 0);
            if (mercury__bitmap__succeeded)
              mercury__bitmap__Var_30 = (MR_Integer) -1;
            else
              {
                mercury__bitmap__Var_30 = (mercury__bitmap__Var_31 / (MR_Integer) 8);
              }
            {
              mercury__bitmap__HeadVar__3_3 = mercury__bitmap__zip2__ho10_4_f_0(mercury__bitmap__Var_30, mercury__bitmap__BMa_4, mercury__bitmap__BMb_5);
            }
          }
      }
    else
      {
        MR_Word mercury__bitmap__TypeCtorInfo_4_47 = (MR_Word) &mercury__bitmap__bitmap__type_ctor_info_bitmap_error_0;
        MR_Word mercury__bitmap__Var_46 = (MR_Word) ((MR_Box) ((MR_String) "bitmap.difference: bitmaps not the same size"));

        {
          mercury__exception__throw_1_p_0(mercury__bitmap__TypeCtorInfo_4_47, ((MR_Box) (mercury__bitmap__Var_46)));
        }
      }
    return mercury__bitmap__HeadVar__3_3;
  }
}

MR_Box MR_CALL 
mercury__bitmap__intersect_2_f_0(
  MR_Box mercury__bitmap__BMa_4,
  MR_Box mercury__bitmap__BMb_5)
{
  {
    MR_bool mercury__bitmap__succeeded;
    MR_Box mercury__bitmap__HeadVar__3_3;
    MR_Integer mercury__bitmap__Var_6;
    MR_Integer mercury__bitmap__Var_13;

{
#define MR_PROC_LABEL mercury__bitmap__intersect_2_f_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr) mercury__bitmap__BMa_4 ;
		{

    NumBits = BM->num_bits;


		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__Var_6  = NumBits;
}
{
#define MR_PROC_LABEL mercury__bitmap__intersect_2_f_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr) mercury__bitmap__BMb_5 ;
		{

    NumBits = BM->num_bits;


		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__Var_13  = NumBits;
}
    mercury__bitmap__succeeded = (mercury__bitmap__Var_6 == mercury__bitmap__Var_13);
    if (mercury__bitmap__succeeded)
      {
        MR_Integer mercury__bitmap__Var_24;

{
#define MR_PROC_LABEL mercury__bitmap__intersect_2_f_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr) mercury__bitmap__BMb_5 ;
		{

    NumBits = BM->num_bits;


		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__Var_24  = NumBits;
}
        mercury__bitmap__succeeded = (mercury__bitmap__Var_24 == (MR_Integer) 0);
        if (mercury__bitmap__succeeded)
          mercury__bitmap__HeadVar__3_3 = mercury__bitmap__BMb_5;
        else
          {
            MR_Integer mercury__bitmap__Var_25;
            MR_Integer mercury__bitmap__Var_26;
            MR_Integer mercury__bitmap__Var_27;

{
#define MR_PROC_LABEL mercury__bitmap__intersect_2_f_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr) mercury__bitmap__BMb_5 ;
		{

    NumBits = BM->num_bits;


		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__Var_27  = NumBits;
}
            mercury__bitmap__Var_26 = (mercury__bitmap__Var_27 - (MR_Integer) 1);
            mercury__bitmap__succeeded = (mercury__bitmap__Var_26 < (MR_Integer) 0);
            if (mercury__bitmap__succeeded)
              mercury__bitmap__Var_25 = (MR_Integer) -1;
            else
              {
                mercury__bitmap__Var_25 = (mercury__bitmap__Var_26 / (MR_Integer) 8);
              }
            {
              mercury__bitmap__HeadVar__3_3 = mercury__bitmap__zip2__ho9_4_f_0(mercury__bitmap__Var_25, mercury__bitmap__BMa_4, mercury__bitmap__BMb_5);
            }
          }
      }
    else
      {
        MR_Word mercury__bitmap__TypeCtorInfo_4_42 = (MR_Word) &mercury__bitmap__bitmap__type_ctor_info_bitmap_error_0;
        MR_Word mercury__bitmap__Var_41 = (MR_Word) ((MR_Box) ((MR_String) "bitmap.intersect: bitmaps not the same size"));

        {
          mercury__exception__throw_1_p_0(mercury__bitmap__TypeCtorInfo_4_42, ((MR_Box) (mercury__bitmap__Var_41)));
        }
      }
    return mercury__bitmap__HeadVar__3_3;
  }
}

MR_Box MR_CALL 
mercury__bitmap__union_2_f_0(
  MR_Box mercury__bitmap__BMa_4,
  MR_Box mercury__bitmap__BMb_5)
{
  {
    MR_bool mercury__bitmap__succeeded;
    MR_Box mercury__bitmap__HeadVar__3_3;
    MR_Integer mercury__bitmap__Var_6;
    MR_Integer mercury__bitmap__Var_13;

{
#define MR_PROC_LABEL mercury__bitmap__union_2_f_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr) mercury__bitmap__BMa_4 ;
		{

    NumBits = BM->num_bits;


		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__Var_6  = NumBits;
}
{
#define MR_PROC_LABEL mercury__bitmap__union_2_f_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr) mercury__bitmap__BMb_5 ;
		{

    NumBits = BM->num_bits;


		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__Var_13  = NumBits;
}
    mercury__bitmap__succeeded = (mercury__bitmap__Var_6 == mercury__bitmap__Var_13);
    if (mercury__bitmap__succeeded)
      {
        MR_Integer mercury__bitmap__Var_24;

{
#define MR_PROC_LABEL mercury__bitmap__union_2_f_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr) mercury__bitmap__BMb_5 ;
		{

    NumBits = BM->num_bits;


		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__Var_24  = NumBits;
}
        mercury__bitmap__succeeded = (mercury__bitmap__Var_24 == (MR_Integer) 0);
        if (mercury__bitmap__succeeded)
          mercury__bitmap__HeadVar__3_3 = mercury__bitmap__BMb_5;
        else
          {
            MR_Integer mercury__bitmap__Var_25;
            MR_Integer mercury__bitmap__Var_26;
            MR_Integer mercury__bitmap__Var_27;

{
#define MR_PROC_LABEL mercury__bitmap__union_2_f_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr) mercury__bitmap__BMb_5 ;
		{

    NumBits = BM->num_bits;


		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__Var_27  = NumBits;
}
            mercury__bitmap__Var_26 = (mercury__bitmap__Var_27 - (MR_Integer) 1);
            mercury__bitmap__succeeded = (mercury__bitmap__Var_26 < (MR_Integer) 0);
            if (mercury__bitmap__succeeded)
              mercury__bitmap__Var_25 = (MR_Integer) -1;
            else
              {
                mercury__bitmap__Var_25 = (mercury__bitmap__Var_26 / (MR_Integer) 8);
              }
            {
              mercury__bitmap__HeadVar__3_3 = mercury__bitmap__zip2__ho8_4_f_0(mercury__bitmap__Var_25, mercury__bitmap__BMa_4, mercury__bitmap__BMb_5);
            }
          }
      }
    else
      {
        MR_Word mercury__bitmap__TypeCtorInfo_4_42 = (MR_Word) &mercury__bitmap__bitmap__type_ctor_info_bitmap_error_0;
        MR_Word mercury__bitmap__Var_41 = (MR_Word) ((MR_Box) ((MR_String) "bitmap.union: bitmaps not the same size"));

        {
          mercury__exception__throw_1_p_0(mercury__bitmap__TypeCtorInfo_4_42, ((MR_Box) (mercury__bitmap__Var_41)));
        }
      }
    return mercury__bitmap__HeadVar__3_3;
  }
}

MR_Box MR_CALL 
mercury__bitmap__complement_1_f_0(
  MR_Box mercury__bitmap__BM_3)
{
  {
    MR_bool mercury__bitmap__succeeded;
    MR_Box mercury__bitmap__HeadVar__2_2;
    MR_Box mercury__bitmap__Var_4;
    MR_Integer mercury__bitmap__Var_5;
    MR_Integer mercury__bitmap__Var_6;
    MR_Integer mercury__bitmap__Var_7;
    MR_Integer mercury__bitmap__Var_16;
    MR_Integer mercury__bitmap__Var_17;

{
#define MR_PROC_LABEL mercury__bitmap__complement_1_f_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr) mercury__bitmap__BM_3 ;
		{

    NumBits = BM->num_bits;


		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__Var_7  = NumBits;
}
    mercury__bitmap__Var_6 = (mercury__bitmap__Var_7 - (MR_Integer) 1);
    mercury__bitmap__succeeded = (mercury__bitmap__Var_6 < (MR_Integer) 0);
    if (mercury__bitmap__succeeded)
      mercury__bitmap__Var_5 = (MR_Integer) -1;
    else
      {
        mercury__bitmap__Var_5 = (mercury__bitmap__Var_6 / (MR_Integer) 8);
      }
    {
      mercury__bitmap__Var_4 = mercury__bitmap__complement_2_2_f_0(mercury__bitmap__Var_5, mercury__bitmap__BM_3);
    }
{
#define MR_PROC_LABEL mercury__bitmap__complement_1_f_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr) mercury__bitmap__Var_4 ;
		{

    NumBits = BM->num_bits;


		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__Var_17  = NumBits;
}
    mercury__bitmap__Var_16 = (mercury__bitmap__Var_17 - (MR_Integer) 1);
    {
      mercury__bitmap__HeadVar__2_2 = mercury__bitmap__set_trailing_bits_in_byte_3_f_0(mercury__bitmap__Var_4, mercury__bitmap__Var_16, (MR_Integer) 0);
    }
    return mercury__bitmap__HeadVar__2_2;
  }
}

MR_Integer MR_CALL 
mercury__bitmap__slice_num_bytes_1_f_0(
  MR_Word mercury__bitmap__Slice_3)
{
  {
    MR_bool mercury__bitmap__succeeded;
    MR_Integer mercury__bitmap__HeadVar__2_2;
    MR_Integer mercury__bitmap__Var_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__bitmap__Slice_3, (MR_Integer) 2)));
    MR_Box mercury__bitmap__Var_7 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__bitmap__Slice_3, (MR_Integer) 0)));
    MR_Integer mercury__bitmap__Var_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__bitmap__Slice_3, (MR_Integer) 1)));

    {
      mercury__bitmap__HeadVar__2_2 = mercury__bitmap__quotient_bits_per_byte_with_rem_zero_2_f_0((MR_String) "bitmap.slice_num_bytes", mercury__bitmap__Var_5);
    }
    return mercury__bitmap__HeadVar__2_2;
  }
}

MR_Integer MR_CALL 
mercury__bitmap__slice_start_byte_index_1_f_0(
  MR_Word mercury__bitmap__Slice_3)
{
  {
    MR_bool mercury__bitmap__succeeded;
    MR_Integer mercury__bitmap__HeadVar__2_2;
    MR_Integer mercury__bitmap__Var_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__bitmap__Slice_3, (MR_Integer) 1)));
    MR_Box mercury__bitmap__Var_7 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__bitmap__Slice_3, (MR_Integer) 0)));
    MR_Integer mercury__bitmap__Var_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__bitmap__Slice_3, (MR_Integer) 2)));

    {
      mercury__bitmap__HeadVar__2_2 = mercury__bitmap__quotient_bits_per_byte_with_rem_zero_2_f_0((MR_String) "bitmap.slice_start_byte_index", mercury__bitmap__Var_5);
    }
    return mercury__bitmap__HeadVar__2_2;
  }
}

MR_Integer MR_CALL 
mercury__bitmap__slice_num_bits_1_f_0(
  MR_Word mercury__bitmap__Slice_3)
{
  {
    MR_bool mercury__bitmap__succeeded;
    MR_Integer mercury__bitmap__HeadVar__2_2 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__bitmap__Slice_3, (MR_Integer) 2)));
    MR_Box mercury__bitmap__Var_4 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__bitmap__Slice_3, (MR_Integer) 0)));
    MR_Integer mercury__bitmap__Var_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__bitmap__Slice_3, (MR_Integer) 1)));

    return mercury__bitmap__HeadVar__2_2;
  }
}

MR_Integer MR_CALL 
mercury__bitmap__slice_start_bit_index_1_f_0(
  MR_Word mercury__bitmap__Slice_3)
{
  {
    MR_bool mercury__bitmap__succeeded;
    MR_Integer mercury__bitmap__HeadVar__2_2 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__bitmap__Slice_3, (MR_Integer) 1)));
    MR_Box mercury__bitmap__Var_4 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__bitmap__Slice_3, (MR_Integer) 0)));
    MR_Integer mercury__bitmap__Var_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__bitmap__Slice_3, (MR_Integer) 2)));

    return mercury__bitmap__HeadVar__2_2;
  }
}

MR_Box MR_CALL 
mercury__bitmap__slice_bitmap_1_f_0(
  MR_Word mercury__bitmap__Slice_3)
{
  {
    MR_bool mercury__bitmap__succeeded;
    MR_Box mercury__bitmap__HeadVar__2_2 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__bitmap__Slice_3, (MR_Integer) 0)));
    MR_Integer mercury__bitmap__Var_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__bitmap__Slice_3, (MR_Integer) 1)));
    MR_Integer mercury__bitmap__Var_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__bitmap__Slice_3, (MR_Integer) 2)));

    return mercury__bitmap__HeadVar__2_2;
  }
}

MR_Word MR_CALL 
mercury__bitmap__byte_slice_3_f_0(
  MR_Box mercury__bitmap__BM_5,
  MR_Integer mercury__bitmap__StartByte_6,
  MR_Integer mercury__bitmap__NumBytes_7)
{
  {
    MR_bool mercury__bitmap__succeeded;
    MR_Word mercury__bitmap__HeadVar__4_4;
    MR_Integer mercury__bitmap__Var_8 = (mercury__bitmap__StartByte_6 * (MR_Integer) 8);
    MR_Integer mercury__bitmap__Var_10 = (mercury__bitmap__NumBytes_7 * (MR_Integer) 8);

    {
      mercury__bitmap__HeadVar__4_4 = mercury__bitmap__slice_3_f_0(mercury__bitmap__BM_5, mercury__bitmap__Var_8, mercury__bitmap__Var_10);
    }
    return mercury__bitmap__HeadVar__4_4;
  }
}

MR_Word MR_CALL 
mercury__bitmap__slice_3_f_0(
  MR_Box mercury__bitmap__BM_5,
  MR_Integer mercury__bitmap__StartBit_6,
  MR_Integer mercury__bitmap__NumBits_7)
{
  {
    MR_bool mercury__bitmap__succeeded = (mercury__bitmap__NumBits_7 >= (MR_Integer) 0);
    MR_Word mercury__bitmap__Slice_8;
    MR_Integer mercury__bitmap__Var_10;
    MR_Integer mercury__bitmap__Var_11;
    MR_Integer mercury__bitmap__Var_15;
    MR_Integer mercury__bitmap__Var_16;

    if (mercury__bitmap__succeeded)
      {
        mercury__bitmap__Var_10 = (MR_Integer) 0;
        mercury__bitmap__succeeded = (mercury__bitmap__StartBit_6 >= mercury__bitmap__Var_10);
        if (mercury__bitmap__succeeded)
          {
            mercury__bitmap__Var_11 = (mercury__bitmap__StartBit_6 + mercury__bitmap__NumBits_7);
            mercury__bitmap__Var_15 = (MR_Integer) 0;
            mercury__bitmap__succeeded = (mercury__bitmap__Var_15 <= mercury__bitmap__Var_11);
            if (mercury__bitmap__succeeded)
              {
{
#define MR_PROC_LABEL mercury__bitmap__slice_3_f_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr) mercury__bitmap__BM_5 ;
		{

    NumBits = BM->num_bits;


		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__Var_16  = NumBits;
}
                mercury__bitmap__succeeded = (mercury__bitmap__Var_11 <= mercury__bitmap__Var_16);
              }
          }
      }
    if (mercury__bitmap__succeeded)
      {
        mercury__bitmap__Slice_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), mercury__bitmap__Slice_8, 0) = ((MR_Box) (mercury__bitmap__BM_5));
        MR_hl_field(MR_mktag(0), mercury__bitmap__Slice_8, 1) = ((MR_Box) (mercury__bitmap__StartBit_6));
        MR_hl_field(MR_mktag(0), mercury__bitmap__Slice_8, 2) = ((MR_Box) (mercury__bitmap__NumBits_7));
      }
    else
      {
        {
          mercury__bitmap__throw_bounds_error_4_p_0(mercury__bitmap__BM_5, (MR_String) "bitmap.slice", mercury__bitmap__StartBit_6, mercury__bitmap__NumBits_7);
        }
      }
    return mercury__bitmap__Slice_8;
  }
}

MR_Box MR_CALL 
mercury__bitmap__shrink_without_copying_2_f_0(
  MR_Box mercury__bitmap__STATE_VARIABLE_BM_0_7,
  MR_Integer mercury__bitmap__NewSize_5)
{
  {
    MR_bool mercury__bitmap__succeeded = ((MR_Integer) 0 <= mercury__bitmap__NewSize_5);
    MR_Box mercury__bitmap__STATE_VARIABLE_BM_8;
    MR_Integer mercury__bitmap__Var_10;

    if (mercury__bitmap__succeeded)
      {
{
#define MR_PROC_LABEL mercury__bitmap__shrink_without_copying_2_f_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr) mercury__bitmap__STATE_VARIABLE_BM_0_7 ;
		{

    NumBits = BM->num_bits;


		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__Var_10  = NumBits;
}
        mercury__bitmap__succeeded = (mercury__bitmap__NewSize_5 <= mercury__bitmap__Var_10);
      }
    if (mercury__bitmap__succeeded)
      {
{
#define MR_PROC_LABEL mercury__bitmap__shrink_without_copying_2_f_0

	MR_BitmapPtr BM0;
	MR_Integer NumBits;
	MR_BitmapPtr BM;

	BM0 = (MR_BitmapPtr) mercury__bitmap__STATE_VARIABLE_BM_0_7 ;
	NumBits =  mercury__bitmap__NewSize_5 ;
		{

    BM = BM0;
    BM->num_bits = NumBits;


		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__STATE_VARIABLE_BM_8  = (MR_Box) BM;
}
      }
    else
      {
        MR_Word mercury__bitmap__TypeCtorInfo_14_14 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
        MR_Integer mercury__bitmap__Var_12;
        MR_Box mercury__bitmap__conv0_Var_12;

        {
          mercury__bitmap__conv0_Var_12 = mercury__bitmap__throw_bounds_error_3_f_0(mercury__bitmap__TypeCtorInfo_14_14, mercury__bitmap__STATE_VARIABLE_BM_0_7, (MR_String) "bitmap.shrink_without_copying", mercury__bitmap__NewSize_5);
        }
        mercury__bitmap__Var_12 = ((MR_Integer) mercury__bitmap__conv0_Var_12);
      }
    return mercury__bitmap__STATE_VARIABLE_BM_8;
  }
}

MR_Box MR_CALL 
mercury__bitmap__resize_3_f_0(
  MR_Box mercury__bitmap__STATE_VARIABLE_BM_0_12,
  MR_Integer mercury__bitmap__NewSize_6,
  MR_Word mercury__bitmap__InitializerBit_7)
{
  {
    MR_bool mercury__bitmap__succeeded = (mercury__bitmap__NewSize_6 <= (MR_Integer) 0);
    MR_Box mercury__bitmap__STATE_VARIABLE_BM_13;

    if (mercury__bitmap__succeeded)
      {
        mercury__bitmap__STATE_VARIABLE_BM_13 = mercury__bitmap__init_2_f_0(mercury__bitmap__NewSize_6, mercury__bitmap__InitializerBit_7);
      }
    else
      {
        MR_Integer mercury__bitmap__OldSize_8;
        MR_Integer mercury__bitmap__InitializerByte_9;
        MR_Box mercury__bitmap__STATE_VARIABLE_BM_16_16;
        MR_Box mercury__bitmap__STATE_VARIABLE_BM_24_24;
        MR_Box mercury__bitmap__Var_35;
        MR_Integer mercury__bitmap__Var_37;
        MR_Integer mercury__bitmap__Var_38;
        MR_Integer mercury__bitmap__Var_61;
        MR_Integer mercury__bitmap__Var_62;

{
#define MR_PROC_LABEL mercury__bitmap__resize_3_f_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr) mercury__bitmap__STATE_VARIABLE_BM_0_12 ;
		{

    NumBits = BM->num_bits;


		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__OldSize_8  = NumBits;
}
        switch (mercury__bitmap__InitializerBit_7) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            mercury__bitmap__InitializerByte_9 = (MR_Integer) 0;
            break;
          case (MR_Integer) 1:
            mercury__bitmap__InitializerByte_9 = (MR_Integer) -1;
            break;
        }
{
#define MR_PROC_LABEL mercury__bitmap__resize_3_f_0

	MR_Integer N;
	MR_BitmapPtr BM;

	N =  mercury__bitmap__NewSize_6 ;
		{

    MR_allocate_bitmap_msg(BM, N, MR_ALLOC_ID);


		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__Var_35  = (MR_Box) BM;
}
{
#define MR_PROC_LABEL mercury__bitmap__resize_3_f_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr) mercury__bitmap__STATE_VARIABLE_BM_0_12 ;
		{

    NumBits = BM->num_bits;


		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__Var_38  = NumBits;
}
        mercury__bitmap__succeeded = (mercury__bitmap__Var_38 < mercury__bitmap__NewSize_6);
        if (mercury__bitmap__succeeded)
          mercury__bitmap__Var_37 = mercury__bitmap__Var_38;
        else
          mercury__bitmap__Var_37 = mercury__bitmap__NewSize_6;
        {
          mercury__bitmap__STATE_VARIABLE_BM_16_16 = mercury__bitmap__copy_bits_6_f_0((MR_Integer) 0, mercury__bitmap__STATE_VARIABLE_BM_0_12, (MR_Integer) 0, mercury__bitmap__Var_35, (MR_Integer) 0, mercury__bitmap__Var_37);
        }
        mercury__bitmap__succeeded = (mercury__bitmap__NewSize_6 > mercury__bitmap__OldSize_8);
        if (mercury__bitmap__succeeded)
          {
            MR_Integer mercury__bitmap__OldLastByteIndex_10;
            MR_Integer mercury__bitmap__NewLastByteIndex_11;
            MR_Box mercury__bitmap__STATE_VARIABLE_BM_17_17;
            MR_Integer mercury__bitmap__Var_18 = (mercury__bitmap__OldSize_8 - (MR_Integer) 1);
            MR_Integer mercury__bitmap__Var_20;
            MR_Integer mercury__bitmap__Var_22;

            {
              mercury__bitmap__STATE_VARIABLE_BM_17_17 = mercury__bitmap__set_trailing_bits_in_byte_3_f_0(mercury__bitmap__STATE_VARIABLE_BM_16_16, mercury__bitmap__Var_18, mercury__bitmap__InitializerByte_9);
            }
            mercury__bitmap__Var_20 = (mercury__bitmap__OldSize_8 - (MR_Integer) 1);
            mercury__bitmap__succeeded = (mercury__bitmap__Var_20 < (MR_Integer) 0);
            if (mercury__bitmap__succeeded)
              mercury__bitmap__OldLastByteIndex_10 = (MR_Integer) -1;
            else
              {
                mercury__bitmap__OldLastByteIndex_10 = (mercury__bitmap__Var_20 / (MR_Integer) 8);
              }
            mercury__bitmap__Var_22 = (mercury__bitmap__NewSize_6 - (MR_Integer) 1);
            mercury__bitmap__succeeded = (mercury__bitmap__Var_22 < (MR_Integer) 0);
            if (mercury__bitmap__succeeded)
              mercury__bitmap__NewLastByteIndex_11 = (MR_Integer) -1;
            else
              {
                mercury__bitmap__NewLastByteIndex_11 = (mercury__bitmap__Var_22 / (MR_Integer) 8);
              }
            mercury__bitmap__succeeded = (mercury__bitmap__NewLastByteIndex_11 > mercury__bitmap__OldLastByteIndex_10);
            if (mercury__bitmap__succeeded)
              {
                MR_Integer mercury__bitmap__Var_25 = (mercury__bitmap__OldLastByteIndex_10 + (MR_Integer) 1);

                {
                  mercury__bitmap__STATE_VARIABLE_BM_24_24 = mercury__bitmap__initialize_bitmap_bytes_4_f_0(mercury__bitmap__STATE_VARIABLE_BM_17_17, mercury__bitmap__Var_25, mercury__bitmap__NewLastByteIndex_11, mercury__bitmap__InitializerByte_9);
                }
              }
            else
              mercury__bitmap__STATE_VARIABLE_BM_24_24 = mercury__bitmap__STATE_VARIABLE_BM_17_17;
          }
        else
          mercury__bitmap__STATE_VARIABLE_BM_24_24 = mercury__bitmap__STATE_VARIABLE_BM_16_16;
{
#define MR_PROC_LABEL mercury__bitmap__resize_3_f_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr) mercury__bitmap__STATE_VARIABLE_BM_24_24 ;
		{

    NumBits = BM->num_bits;


		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__Var_62  = NumBits;
}
        mercury__bitmap__Var_61 = (mercury__bitmap__Var_62 - (MR_Integer) 1);
        {
          mercury__bitmap__STATE_VARIABLE_BM_13 = mercury__bitmap__set_trailing_bits_in_byte_3_f_0(mercury__bitmap__STATE_VARIABLE_BM_24_24, mercury__bitmap__Var_61, (MR_Integer) 0);
        }
      }
    return mercury__bitmap__STATE_VARIABLE_BM_13;
  }
}

MR_Box MR_CALL 
mercury__bitmap__copy_1_f_0(
  MR_Box mercury__bitmap__BM0_1)
{
  {
    MR_bool mercury__bitmap__succeeded;
    MR_Box mercury__bitmap__BM_2;

{
#define MR_PROC_LABEL mercury__bitmap__copy_1_f_0

	MR_BitmapPtr BM0;
	MR_BitmapPtr BM;

	BM0 = (MR_BitmapPtr) mercury__bitmap__BM0_1 ;
		{

    MR_allocate_bitmap_msg(BM, BM0->num_bits, MR_ALLOC_ID);
    MR_copy_bitmap(BM, BM0);


		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__BM_2  = (MR_Box) BM;
}
    return mercury__bitmap__BM_2;
  }
}

MR_bool MR_CALL 
mercury__bitmap__unsafe_is_clear_2_p_0(
  MR_Box mercury__bitmap__BM_3,
  MR_Integer mercury__bitmap__I_4)
{
  {
    MR_bool mercury__bitmap__succeeded = (mercury__bitmap__I_4 < (MR_Integer) 0);
    MR_Integer mercury__bitmap__Var_5;
    MR_Integer mercury__bitmap__Var_6;
    MR_Integer mercury__bitmap__Var_7;
    MR_Integer mercury__bitmap__Var_8;
    MR_Integer mercury__bitmap__Var_18;
    MR_Integer mercury__bitmap__Var_19;
    MR_Integer mercury__bitmap__Var_22;

    if (mercury__bitmap__succeeded)
      mercury__bitmap__Var_7 = (MR_Integer) -1;
    else
      {
        mercury__bitmap__Var_7 = (mercury__bitmap__I_4 / (MR_Integer) 8);
      }
{
#define MR_PROC_LABEL mercury__bitmap__unsafe_is_clear_2_p_0

	MR_Integer N;
	MR_BitmapPtr BM;
	MR_Integer Byte;

	N =  mercury__bitmap__Var_7 ;
	BM = (MR_BitmapPtr) mercury__bitmap__BM_3 ;
		{

    Byte = (MR_Integer) BM->elements[N];


		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__Var_6  = Byte;
}
    mercury__bitmap__Var_19 = ((MR_Integer) 8 - (MR_Integer) 1);
    mercury__bitmap__Var_22 = (mercury__bitmap__I_4 % (MR_Integer) 8);
    mercury__bitmap__Var_18 = (mercury__bitmap__Var_19 - mercury__bitmap__Var_22);
    mercury__bitmap__Var_8 = ((MR_Integer) 1 << mercury__bitmap__Var_18);
    mercury__bitmap__Var_5 = (mercury__bitmap__Var_6 & mercury__bitmap__Var_8);
    mercury__bitmap__succeeded = (mercury__bitmap__Var_5 == (MR_Integer) 0);
    return mercury__bitmap__succeeded;
  }
}

MR_bool MR_CALL 
mercury__bitmap__unsafe_is_set_2_p_0(
  MR_Box mercury__bitmap__BM_3,
  MR_Integer mercury__bitmap__I_4)
{
  {
    MR_bool mercury__bitmap__succeeded;

    {
      mercury__bitmap__succeeded = mercury__bitmap__unsafe_is_clear_2_p_0(mercury__bitmap__BM_3, mercury__bitmap__I_4);
    }
    mercury__bitmap__succeeded = !(mercury__bitmap__succeeded);
    return mercury__bitmap__succeeded;
  }
}

void MR_CALL 
mercury__bitmap__unsafe_clear_3_p_0(
  MR_Integer mercury__bitmap__I_4,
  MR_Box mercury__bitmap__BM_5,
  MR_Box * mercury__bitmap__HeadVar__3_3)
{
  {
    MR_bool mercury__bitmap__succeeded;

    {
      *mercury__bitmap__HeadVar__3_3 = mercury__bitmap__unsafe_clear_2_f_0(mercury__bitmap__BM_5, mercury__bitmap__I_4);
    }
  }
}

MR_Box MR_CALL 
mercury__bitmap__unsafe_clear_2_f_0(
  MR_Box mercury__bitmap__BM0_4,
  MR_Integer mercury__bitmap__I_5)
{
  {
    MR_bool mercury__bitmap__succeeded = (mercury__bitmap__I_5 < (MR_Integer) 0);
    MR_Box mercury__bitmap__BM_6;
    MR_Integer mercury__bitmap__ByteIndex_7;
    MR_Integer mercury__bitmap__Byte0_8;
    MR_Integer mercury__bitmap__Byte_9;
    MR_Integer mercury__bitmap__Var_10;
    MR_Integer mercury__bitmap__Var_11;
    MR_Integer mercury__bitmap__Var_21;
    MR_Integer mercury__bitmap__Var_22;
    MR_Integer mercury__bitmap__Var_25;

    if (mercury__bitmap__succeeded)
      mercury__bitmap__ByteIndex_7 = (MR_Integer) -1;
    else
      {
        mercury__bitmap__ByteIndex_7 = (mercury__bitmap__I_5 / (MR_Integer) 8);
      }
{
#define MR_PROC_LABEL mercury__bitmap__unsafe_clear_2_f_0

	MR_Integer N;
	MR_BitmapPtr BM;
	MR_Integer Byte;

	N =  mercury__bitmap__ByteIndex_7 ;
	BM = (MR_BitmapPtr) mercury__bitmap__BM0_4 ;
		{

    Byte = (MR_Integer) BM->elements[N];


		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__Byte0_8  = Byte;
}
    mercury__bitmap__Var_22 = ((MR_Integer) 8 - (MR_Integer) 1);
    mercury__bitmap__Var_25 = (mercury__bitmap__I_5 % (MR_Integer) 8);
    mercury__bitmap__Var_21 = (mercury__bitmap__Var_22 - mercury__bitmap__Var_25);
    mercury__bitmap__Var_11 = ((MR_Integer) 1 << mercury__bitmap__Var_21);
    mercury__bitmap__Var_10 = ~(mercury__bitmap__Var_11);
    mercury__bitmap__Byte_9 = (mercury__bitmap__Byte0_8 & mercury__bitmap__Var_10);
{
#define MR_PROC_LABEL mercury__bitmap__unsafe_clear_2_f_0

	MR_Integer N;
	MR_BitmapPtr BM0;
	MR_Integer Byte;
	MR_BitmapPtr BM;

	N =  mercury__bitmap__ByteIndex_7 ;
	BM0 = (MR_BitmapPtr) mercury__bitmap__BM0_4 ;
	Byte =  mercury__bitmap__Byte_9 ;
		{

    BM = BM0;
    BM->elements[N] = (MR_uint_least8_t) Byte;


		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__BM_6  = (MR_Box) BM;
}
    return mercury__bitmap__BM_6;
  }
}

void MR_CALL 
mercury__bitmap__unsafe_set_3_p_0(
  MR_Integer mercury__bitmap__I_4,
  MR_Box mercury__bitmap__BM_5,
  MR_Box * mercury__bitmap__HeadVar__3_3)
{
  {
    MR_bool mercury__bitmap__succeeded;

    {
      *mercury__bitmap__HeadVar__3_3 = mercury__bitmap__unsafe_set_2_f_0(mercury__bitmap__BM_5, mercury__bitmap__I_4);
    }
  }
}

MR_Box MR_CALL 
mercury__bitmap__unsafe_set_2_f_0(
  MR_Box mercury__bitmap__BM0_4,
  MR_Integer mercury__bitmap__I_5)
{
  {
    MR_bool mercury__bitmap__succeeded = (mercury__bitmap__I_5 < (MR_Integer) 0);
    MR_Box mercury__bitmap__BM_6;
    MR_Integer mercury__bitmap__ByteIndex_7;
    MR_Integer mercury__bitmap__Byte0_8;
    MR_Integer mercury__bitmap__Byte_9;
    MR_Integer mercury__bitmap__Var_10;
    MR_Integer mercury__bitmap__Var_20;
    MR_Integer mercury__bitmap__Var_21;
    MR_Integer mercury__bitmap__Var_24;

    if (mercury__bitmap__succeeded)
      mercury__bitmap__ByteIndex_7 = (MR_Integer) -1;
    else
      {
        mercury__bitmap__ByteIndex_7 = (mercury__bitmap__I_5 / (MR_Integer) 8);
      }
{
#define MR_PROC_LABEL mercury__bitmap__unsafe_set_2_f_0

	MR_Integer N;
	MR_BitmapPtr BM;
	MR_Integer Byte;

	N =  mercury__bitmap__ByteIndex_7 ;
	BM = (MR_BitmapPtr) mercury__bitmap__BM0_4 ;
		{

    Byte = (MR_Integer) BM->elements[N];


		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__Byte0_8  = Byte;
}
    mercury__bitmap__Var_21 = ((MR_Integer) 8 - (MR_Integer) 1);
    mercury__bitmap__Var_24 = (mercury__bitmap__I_5 % (MR_Integer) 8);
    mercury__bitmap__Var_20 = (mercury__bitmap__Var_21 - mercury__bitmap__Var_24);
    mercury__bitmap__Var_10 = ((MR_Integer) 1 << mercury__bitmap__Var_20);
    mercury__bitmap__Byte_9 = (mercury__bitmap__Byte0_8 | mercury__bitmap__Var_10);
{
#define MR_PROC_LABEL mercury__bitmap__unsafe_set_2_f_0

	MR_Integer N;
	MR_BitmapPtr BM0;
	MR_Integer Byte;
	MR_BitmapPtr BM;

	N =  mercury__bitmap__ByteIndex_7 ;
	BM0 = (MR_BitmapPtr) mercury__bitmap__BM0_4 ;
	Byte =  mercury__bitmap__Byte_9 ;
		{

    BM = BM0;
    BM->elements[N] = (MR_uint_least8_t) Byte;


		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__BM_6  = (MR_Box) BM;
}
    return mercury__bitmap__BM_6;
  }
}

void MR_CALL 
mercury__bitmap__unsafe_flip_3_p_0(
  MR_Integer mercury__bitmap__I_4,
  MR_Box mercury__bitmap__BM_5,
  MR_Box * mercury__bitmap__HeadVar__3_3)
{
  {
    MR_bool mercury__bitmap__succeeded;

    {
      *mercury__bitmap__HeadVar__3_3 = mercury__bitmap__unsafe_flip_2_f_0(mercury__bitmap__BM_5, mercury__bitmap__I_4);
    }
  }
}

MR_Box MR_CALL 
mercury__bitmap__unsafe_flip_2_f_0(
  MR_Box mercury__bitmap__BM0_4,
  MR_Integer mercury__bitmap__I_5)
{
  {
    MR_bool mercury__bitmap__succeeded = (mercury__bitmap__I_5 < (MR_Integer) 0);
    MR_Box mercury__bitmap__BM_6;
    MR_Integer mercury__bitmap__ByteIndex_7;
    MR_Integer mercury__bitmap__Byte0_8;
    MR_Integer mercury__bitmap__Byte_9;
    MR_Integer mercury__bitmap__Var_10;
    MR_Integer mercury__bitmap__Var_20;
    MR_Integer mercury__bitmap__Var_21;
    MR_Integer mercury__bitmap__Var_24;

    if (mercury__bitmap__succeeded)
      mercury__bitmap__ByteIndex_7 = (MR_Integer) -1;
    else
      {
        mercury__bitmap__ByteIndex_7 = (mercury__bitmap__I_5 / (MR_Integer) 8);
      }
{
#define MR_PROC_LABEL mercury__bitmap__unsafe_flip_2_f_0

	MR_Integer N;
	MR_BitmapPtr BM;
	MR_Integer Byte;

	N =  mercury__bitmap__ByteIndex_7 ;
	BM = (MR_BitmapPtr) mercury__bitmap__BM0_4 ;
		{

    Byte = (MR_Integer) BM->elements[N];


		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__Byte0_8  = Byte;
}
    mercury__bitmap__Var_21 = ((MR_Integer) 8 - (MR_Integer) 1);
    mercury__bitmap__Var_24 = (mercury__bitmap__I_5 % (MR_Integer) 8);
    mercury__bitmap__Var_20 = (mercury__bitmap__Var_21 - mercury__bitmap__Var_24);
    mercury__bitmap__Var_10 = ((MR_Integer) 1 << mercury__bitmap__Var_20);
    mercury__bitmap__Byte_9 = (mercury__bitmap__Byte0_8 ^ mercury__bitmap__Var_10);
{
#define MR_PROC_LABEL mercury__bitmap__unsafe_flip_2_f_0

	MR_Integer N;
	MR_BitmapPtr BM0;
	MR_Integer Byte;
	MR_BitmapPtr BM;

	N =  mercury__bitmap__ByteIndex_7 ;
	BM0 = (MR_BitmapPtr) mercury__bitmap__BM0_4 ;
	Byte =  mercury__bitmap__Byte_9 ;
		{

    BM = BM0;
    BM->elements[N] = (MR_uint_least8_t) Byte;


		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__BM_6  = (MR_Box) BM;
}
    return mercury__bitmap__BM_6;
  }
}

MR_bool MR_CALL 
mercury__bitmap__is_clear_2_p_0(
  MR_Box mercury__bitmap__BM_3,
  MR_Integer mercury__bitmap__I_4)
{
  {
    MR_bool mercury__bitmap__succeeded = ((MR_Integer) 0 <= mercury__bitmap__I_4);
    MR_Integer mercury__bitmap__Var_12;

    if (mercury__bitmap__succeeded)
      {
{
#define MR_PROC_LABEL mercury__bitmap__is_clear_2_p_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr) mercury__bitmap__BM_3 ;
		{

    NumBits = BM->num_bits;


		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__Var_12  = NumBits;
}
        mercury__bitmap__succeeded = (mercury__bitmap__I_4 < mercury__bitmap__Var_12);
      }
    if (mercury__bitmap__succeeded)
      {
        mercury__bitmap__succeeded = mercury__bitmap__unsafe_is_clear_2_p_0(mercury__bitmap__BM_3, mercury__bitmap__I_4);
      }
    else
      {
        MR_Word mercury__bitmap__TypeCtorInfo_8_8 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
        MR_Integer mercury__bitmap__Var_6;
        MR_Box mercury__bitmap__conv0_Var_6;

        {
          mercury__bitmap__conv0_Var_6 = mercury__bitmap__throw_bounds_error_3_f_0(mercury__bitmap__TypeCtorInfo_8_8, mercury__bitmap__BM_3, (MR_String) "bitmap.is_clear", mercury__bitmap__I_4);
        }
        mercury__bitmap__Var_6 = ((MR_Integer) mercury__bitmap__conv0_Var_6);
        mercury__bitmap__succeeded = MR_TRUE;
      }
    return mercury__bitmap__succeeded;
  }
}

MR_bool MR_CALL 
mercury__bitmap__is_set_2_p_0(
  MR_Box mercury__bitmap__BM_3,
  MR_Integer mercury__bitmap__I_4)
{
  {
    MR_bool mercury__bitmap__succeeded = ((MR_Integer) 0 <= mercury__bitmap__I_4);
    MR_Integer mercury__bitmap__Var_12;

    if (mercury__bitmap__succeeded)
      {
{
#define MR_PROC_LABEL mercury__bitmap__is_set_2_p_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr) mercury__bitmap__BM_3 ;
		{

    NumBits = BM->num_bits;


		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__Var_12  = NumBits;
}
        mercury__bitmap__succeeded = (mercury__bitmap__I_4 < mercury__bitmap__Var_12);
      }
    if (mercury__bitmap__succeeded)
      {
        {
          mercury__bitmap__succeeded = mercury__bitmap__unsafe_is_clear_2_p_0(mercury__bitmap__BM_3, mercury__bitmap__I_4);
        }
        mercury__bitmap__succeeded = !(mercury__bitmap__succeeded);
      }
    else
      {
        MR_Word mercury__bitmap__TypeCtorInfo_8_8 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
        MR_Integer mercury__bitmap__Var_6;
        MR_Box mercury__bitmap__conv0_Var_6;

        {
          mercury__bitmap__conv0_Var_6 = mercury__bitmap__throw_bounds_error_3_f_0(mercury__bitmap__TypeCtorInfo_8_8, mercury__bitmap__BM_3, (MR_String) "bitmap.is_set", mercury__bitmap__I_4);
        }
        mercury__bitmap__Var_6 = ((MR_Integer) mercury__bitmap__conv0_Var_6);
        mercury__bitmap__succeeded = MR_TRUE;
      }
    return mercury__bitmap__succeeded;
  }
}

void MR_CALL 
mercury__bitmap__clear_3_p_0(
  MR_Integer mercury__bitmap__I_4,
  MR_Box mercury__bitmap__BM_5,
  MR_Box * mercury__bitmap__HeadVar__3_3)
{
  {
    MR_bool mercury__bitmap__succeeded;

    {
      *mercury__bitmap__HeadVar__3_3 = mercury__bitmap__clear_2_f_0(mercury__bitmap__BM_5, mercury__bitmap__I_4);
    }
  }
}

MR_Box MR_CALL 
mercury__bitmap__clear_2_f_0(
  MR_Box mercury__bitmap__BM_4,
  MR_Integer mercury__bitmap__I_5)
{
  {
    MR_bool mercury__bitmap__succeeded = ((MR_Integer) 0 <= mercury__bitmap__I_5);
    MR_Box mercury__bitmap__HeadVar__3_3;
    MR_Integer mercury__bitmap__Var_11;

    if (mercury__bitmap__succeeded)
      {
{
#define MR_PROC_LABEL mercury__bitmap__clear_2_f_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr) mercury__bitmap__BM_4 ;
		{

    NumBits = BM->num_bits;


		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__Var_11  = NumBits;
}
        mercury__bitmap__succeeded = (mercury__bitmap__I_5 < mercury__bitmap__Var_11);
      }
    if (mercury__bitmap__succeeded)
      {
        mercury__bitmap__HeadVar__3_3 = mercury__bitmap__unsafe_clear_2_f_0(mercury__bitmap__BM_4, mercury__bitmap__I_5);
      }
    else
      {
        MR_Word mercury__bitmap__TypeCtorInfo_7_7 = (MR_Word) &mercury__bitmap__bitmap__type_ctor_info_bitmap_0;
        MR_Box mercury__bitmap__conv0_HeadVar__3_3;

        {
          mercury__bitmap__conv0_HeadVar__3_3 = mercury__bitmap__throw_bounds_error_3_f_0(mercury__bitmap__TypeCtorInfo_7_7, mercury__bitmap__BM_4, (MR_String) "bitmap.clear", mercury__bitmap__I_5);
        }
        mercury__bitmap__HeadVar__3_3 = ((MR_Box) mercury__bitmap__conv0_HeadVar__3_3);
      }
    return mercury__bitmap__HeadVar__3_3;
  }
}

void MR_CALL 
mercury__bitmap__set_3_p_0(
  MR_Integer mercury__bitmap__I_4,
  MR_Box mercury__bitmap__BM_5,
  MR_Box * mercury__bitmap__HeadVar__3_3)
{
  {
    MR_bool mercury__bitmap__succeeded;

    {
      *mercury__bitmap__HeadVar__3_3 = mercury__bitmap__set_2_f_0(mercury__bitmap__BM_5, mercury__bitmap__I_4);
    }
  }
}

MR_Box MR_CALL 
mercury__bitmap__set_2_f_0(
  MR_Box mercury__bitmap__BM_4,
  MR_Integer mercury__bitmap__I_5)
{
  {
    MR_bool mercury__bitmap__succeeded = ((MR_Integer) 0 <= mercury__bitmap__I_5);
    MR_Box mercury__bitmap__HeadVar__3_3;
    MR_Integer mercury__bitmap__Var_11;

    if (mercury__bitmap__succeeded)
      {
{
#define MR_PROC_LABEL mercury__bitmap__set_2_f_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr) mercury__bitmap__BM_4 ;
		{

    NumBits = BM->num_bits;


		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__Var_11  = NumBits;
}
        mercury__bitmap__succeeded = (mercury__bitmap__I_5 < mercury__bitmap__Var_11);
      }
    if (mercury__bitmap__succeeded)
      {
        mercury__bitmap__HeadVar__3_3 = mercury__bitmap__unsafe_set_2_f_0(mercury__bitmap__BM_4, mercury__bitmap__I_5);
      }
    else
      {
        MR_Word mercury__bitmap__TypeCtorInfo_7_7 = (MR_Word) &mercury__bitmap__bitmap__type_ctor_info_bitmap_0;
        MR_Box mercury__bitmap__conv0_HeadVar__3_3;

        {
          mercury__bitmap__conv0_HeadVar__3_3 = mercury__bitmap__throw_bounds_error_3_f_0(mercury__bitmap__TypeCtorInfo_7_7, mercury__bitmap__BM_4, (MR_String) "bitmap.set", mercury__bitmap__I_5);
        }
        mercury__bitmap__HeadVar__3_3 = ((MR_Box) mercury__bitmap__conv0_HeadVar__3_3);
      }
    return mercury__bitmap__HeadVar__3_3;
  }
}

void MR_CALL 
mercury__bitmap__flip_3_p_0(
  MR_Integer mercury__bitmap__I_4,
  MR_Box mercury__bitmap__BM_5,
  MR_Box * mercury__bitmap__HeadVar__3_3)
{
  {
    MR_bool mercury__bitmap__succeeded;

    {
      *mercury__bitmap__HeadVar__3_3 = mercury__bitmap__flip_2_f_0(mercury__bitmap__BM_5, mercury__bitmap__I_4);
    }
  }
}

MR_Box MR_CALL 
mercury__bitmap__flip_2_f_0(
  MR_Box mercury__bitmap__BM_4,
  MR_Integer mercury__bitmap__I_5)
{
  {
    MR_bool mercury__bitmap__succeeded = ((MR_Integer) 0 <= mercury__bitmap__I_5);
    MR_Box mercury__bitmap__HeadVar__3_3;
    MR_Integer mercury__bitmap__Var_11;

    if (mercury__bitmap__succeeded)
      {
{
#define MR_PROC_LABEL mercury__bitmap__flip_2_f_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr) mercury__bitmap__BM_4 ;
		{

    NumBits = BM->num_bits;


		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__Var_11  = NumBits;
}
        mercury__bitmap__succeeded = (mercury__bitmap__I_5 < mercury__bitmap__Var_11);
      }
    if (mercury__bitmap__succeeded)
      {
        mercury__bitmap__HeadVar__3_3 = mercury__bitmap__unsafe_flip_2_f_0(mercury__bitmap__BM_4, mercury__bitmap__I_5);
      }
    else
      {
        MR_Word mercury__bitmap__TypeCtorInfo_7_7 = (MR_Word) &mercury__bitmap__bitmap__type_ctor_info_bitmap_0;
        MR_Box mercury__bitmap__conv0_HeadVar__3_3;

        {
          mercury__bitmap__conv0_HeadVar__3_3 = mercury__bitmap__throw_bounds_error_3_f_0(mercury__bitmap__TypeCtorInfo_7_7, mercury__bitmap__BM_4, (MR_String) "bitmap.flip", mercury__bitmap__I_5);
        }
        mercury__bitmap__HeadVar__3_3 = ((MR_Box) mercury__bitmap__conv0_HeadVar__3_3);
      }
    return mercury__bitmap__HeadVar__3_3;
  }
}

MR_Box MR_CALL 
mercury__bitmap__f_117_110_115_97_102_101_95_98_121_116_101_32_58_61_3_f_0(
  MR_Integer mercury__bitmap__N_1,
  MR_Box mercury__bitmap__BM0_2,
  MR_Integer mercury__bitmap__Byte_3)
{
  {
    MR_bool mercury__bitmap__succeeded;
    MR_Box mercury__bitmap__BM_4;

{
#define MR_PROC_LABEL mercury__bitmap__f_117_110_115_97_102_101_95_98_121_116_101_32_58_61_3_f_0

	MR_Integer N;
	MR_BitmapPtr BM0;
	MR_Integer Byte;
	MR_BitmapPtr BM;

	N =  mercury__bitmap__N_1 ;
	BM0 = (MR_BitmapPtr) mercury__bitmap__BM0_2 ;
	Byte =  mercury__bitmap__Byte_3 ;
		{

    BM = BM0;
    BM->elements[N] = (MR_uint_least8_t) Byte;


		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__BM_4  = (MR_Box) BM;
}
    return mercury__bitmap__BM_4;
  }
}

MR_Box MR_CALL 
mercury__bitmap__f_98_121_116_101_32_58_61_3_f_0(
  MR_Integer mercury__bitmap__N_6,
  MR_Box mercury__bitmap__BM_5,
  MR_Integer mercury__bitmap__Byte_7)
{
  {
    MR_bool mercury__bitmap__succeeded = (mercury__bitmap__N_6 >= (MR_Integer) 0);
    MR_Box mercury__bitmap__HeadVar__4_4;
    MR_Integer mercury__bitmap__Var_9;
    MR_Integer mercury__bitmap__Var_10;
    MR_Integer mercury__bitmap__Var_11;
    MR_Integer mercury__bitmap__Var_12;
    MR_Integer mercury__bitmap__Var_13;
    MR_Integer mercury__bitmap__Var_14;
    MR_Integer mercury__bitmap__Var_19;
    MR_Integer mercury__bitmap__Var_20;

    if (mercury__bitmap__succeeded)
      {
        mercury__bitmap__Var_12 = (MR_Integer) 8;
        mercury__bitmap__Var_11 = (mercury__bitmap__N_6 * mercury__bitmap__Var_12);
        mercury__bitmap__Var_13 = (MR_Integer) 8;
        mercury__bitmap__Var_10 = (mercury__bitmap__Var_11 + mercury__bitmap__Var_13);
        mercury__bitmap__Var_14 = (MR_Integer) 1;
        mercury__bitmap__Var_9 = (mercury__bitmap__Var_10 - mercury__bitmap__Var_14);
        mercury__bitmap__Var_19 = (MR_Integer) 0;
        mercury__bitmap__succeeded = (mercury__bitmap__Var_19 <= mercury__bitmap__Var_9);
        if (mercury__bitmap__succeeded)
          {
{
#define MR_PROC_LABEL mercury__bitmap__f_98_121_116_101_32_58_61_3_f_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr) mercury__bitmap__BM_5 ;
		{

    NumBits = BM->num_bits;


		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__Var_20  = NumBits;
}
            mercury__bitmap__succeeded = (mercury__bitmap__Var_9 < mercury__bitmap__Var_20);
          }
      }
    if (mercury__bitmap__succeeded)
      {
{
#define MR_PROC_LABEL mercury__bitmap__f_98_121_116_101_32_58_61_3_f_0

	MR_Integer N;
	MR_BitmapPtr BM0;
	MR_Integer Byte;
	MR_BitmapPtr BM;

	N =  mercury__bitmap__N_6 ;
	BM0 = (MR_BitmapPtr) mercury__bitmap__BM_5 ;
	Byte =  mercury__bitmap__Byte_7 ;
		{

    BM = BM0;
    BM->elements[N] = (MR_uint_least8_t) Byte;


		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__HeadVar__4_4  = (MR_Box) BM;
}
      }
    else
      {
        MR_Word mercury__bitmap__TypeCtorInfo_16_16 = (MR_Word) &mercury__bitmap__bitmap__type_ctor_info_bitmap_0;
        MR_Box mercury__bitmap__conv0_HeadVar__4_4;

        {
          mercury__bitmap__conv0_HeadVar__4_4 = mercury__bitmap__throw_bounds_error_3_f_0(mercury__bitmap__TypeCtorInfo_16_16, mercury__bitmap__BM_5, (MR_String) "bitmap.\'byte :=\'", mercury__bitmap__N_6);
        }
        mercury__bitmap__HeadVar__4_4 = ((MR_Box) mercury__bitmap__conv0_HeadVar__4_4);
      }
    return mercury__bitmap__HeadVar__4_4;
  }
}

MR_Integer MR_CALL 
mercury__bitmap__unsafe_byte_2_f_0(
  MR_Integer mercury__bitmap__N_1,
  MR_Box mercury__bitmap__BM_2)
{
  {
    MR_bool mercury__bitmap__succeeded;
    MR_Integer mercury__bitmap__Byte_3;

{
#define MR_PROC_LABEL mercury__bitmap__unsafe_byte_2_f_0

	MR_Integer N;
	MR_BitmapPtr BM;
	MR_Integer Byte;

	N =  mercury__bitmap__N_1 ;
	BM = (MR_BitmapPtr) mercury__bitmap__BM_2 ;
		{

    Byte = (MR_Integer) BM->elements[N];


		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__Byte_3  = Byte;
}
    return mercury__bitmap__Byte_3;
  }
}

MR_Integer MR_CALL 
mercury__bitmap__byte_2_f_0(
  MR_Integer mercury__bitmap__N_5,
  MR_Box mercury__bitmap__BM_4)
{
  {
    MR_bool mercury__bitmap__succeeded = (mercury__bitmap__N_5 >= (MR_Integer) 0);
    MR_Integer mercury__bitmap__HeadVar__3_3;
    MR_Integer mercury__bitmap__Var_7;
    MR_Integer mercury__bitmap__Var_8;
    MR_Integer mercury__bitmap__Var_9;
    MR_Integer mercury__bitmap__Var_10;
    MR_Integer mercury__bitmap__Var_11;
    MR_Integer mercury__bitmap__Var_12;
    MR_Integer mercury__bitmap__Var_17;
    MR_Integer mercury__bitmap__Var_18;

    if (mercury__bitmap__succeeded)
      {
        mercury__bitmap__Var_10 = (MR_Integer) 8;
        mercury__bitmap__Var_9 = (mercury__bitmap__N_5 * mercury__bitmap__Var_10);
        mercury__bitmap__Var_11 = (MR_Integer) 8;
        mercury__bitmap__Var_8 = (mercury__bitmap__Var_9 + mercury__bitmap__Var_11);
        mercury__bitmap__Var_12 = (MR_Integer) 1;
        mercury__bitmap__Var_7 = (mercury__bitmap__Var_8 - mercury__bitmap__Var_12);
        mercury__bitmap__Var_17 = (MR_Integer) 0;
        mercury__bitmap__succeeded = (mercury__bitmap__Var_17 <= mercury__bitmap__Var_7);
        if (mercury__bitmap__succeeded)
          {
{
#define MR_PROC_LABEL mercury__bitmap__byte_2_f_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr) mercury__bitmap__BM_4 ;
		{

    NumBits = BM->num_bits;


		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__Var_18  = NumBits;
}
            mercury__bitmap__succeeded = (mercury__bitmap__Var_7 < mercury__bitmap__Var_18);
          }
      }
    if (mercury__bitmap__succeeded)
      {
{
#define MR_PROC_LABEL mercury__bitmap__byte_2_f_0

	MR_Integer N;
	MR_BitmapPtr BM;
	MR_Integer Byte;

	N =  mercury__bitmap__N_5 ;
	BM = (MR_BitmapPtr) mercury__bitmap__BM_4 ;
		{

    Byte = (MR_Integer) BM->elements[N];


		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__HeadVar__3_3  = Byte;
}
      }
    else
      {
        MR_Word mercury__bitmap__TypeCtorInfo_14_14 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
        MR_Box mercury__bitmap__conv0_HeadVar__3_3;

        {
          mercury__bitmap__conv0_HeadVar__3_3 = mercury__bitmap__throw_bounds_error_3_f_0(mercury__bitmap__TypeCtorInfo_14_14, mercury__bitmap__BM_4, (MR_String) "bitmap.byte", mercury__bitmap__N_5);
        }
        mercury__bitmap__HeadVar__3_3 = ((MR_Integer) mercury__bitmap__conv0_HeadVar__3_3);
      }
    return mercury__bitmap__HeadVar__3_3;
  }
}

MR_Box MR_CALL 
mercury__bitmap__f_117_110_115_97_102_101_95_98_105_116_115_32_58_61_4_f_0(
  MR_Integer mercury__bitmap__FirstBit_7,
  MR_Integer mercury__bitmap__NumBits_8,
  MR_Box mercury__bitmap__BM0_6,
  MR_Integer mercury__bitmap__Bits_9)
{
  {
    MR_bool mercury__bitmap__succeeded;
    MR_Box mercury__bitmap__BM_10;
    MR_Integer mercury__bitmap__LastBit_11;
    MR_Integer mercury__bitmap__LastByteIndex_12;
    MR_Integer mercury__bitmap__LastBitIndex_13;
    MR_Integer mercury__bitmap__Var_14 = (mercury__bitmap__FirstBit_7 + mercury__bitmap__NumBits_8);

    mercury__bitmap__LastBit_11 = (mercury__bitmap__Var_14 - (MR_Integer) 1);
    mercury__bitmap__succeeded = (mercury__bitmap__LastBit_11 < (MR_Integer) 0);
    if (mercury__bitmap__succeeded)
      mercury__bitmap__LastByteIndex_12 = (MR_Integer) -1;
    else
      {
        mercury__bitmap__LastByteIndex_12 = (mercury__bitmap__LastBit_11 / (MR_Integer) 8);
      }
    mercury__bitmap__LastBitIndex_13 = (mercury__bitmap__LastBit_11 % (MR_Integer) 8);
    {
      mercury__bitmap__set_bits_in_bytes_6_p_0(mercury__bitmap__LastByteIndex_12, mercury__bitmap__LastBitIndex_13, mercury__bitmap__NumBits_8, mercury__bitmap__Bits_9, mercury__bitmap__BM0_6, &mercury__bitmap__BM_10);
    }
    return mercury__bitmap__BM_10;
  }
}

MR_Box MR_CALL 
mercury__bitmap__f_98_105_116_115_32_58_61_4_f_0(
  MR_Integer mercury__bitmap__FirstBit_7,
  MR_Integer mercury__bitmap__NumBits_8,
  MR_Box mercury__bitmap__BM_6,
  MR_Integer mercury__bitmap__Bits_9)
{
  {
    MR_bool mercury__bitmap__succeeded = (mercury__bitmap__FirstBit_7 >= (MR_Integer) 0);
    MR_Box mercury__bitmap__HeadVar__5_5;
    MR_Integer mercury__bitmap__Var_11;
    MR_Integer mercury__bitmap__Var_12;
    MR_Integer mercury__bitmap__Var_13;
    MR_Integer mercury__bitmap__Var_25;
    MR_Integer mercury__bitmap__Var_26;

    if (mercury__bitmap__succeeded)
      {
        mercury__bitmap__Var_11 = (MR_Integer) 0;
        mercury__bitmap__succeeded = (mercury__bitmap__NumBits_8 >= mercury__bitmap__Var_11);
        if (mercury__bitmap__succeeded)
          {
{
#define MR_PROC_LABEL mercury__bitmap__f_98_105_116_115_32_58_61_4_f_0

	MR_Integer Bits;

		{

    Bits = ML_BITS_PER_INT;


		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__Var_12  = Bits;
}
            mercury__bitmap__succeeded = (mercury__bitmap__NumBits_8 <= mercury__bitmap__Var_12);
            if (mercury__bitmap__succeeded)
              {
                mercury__bitmap__Var_13 = (mercury__bitmap__FirstBit_7 + mercury__bitmap__NumBits_8);
                mercury__bitmap__Var_25 = (MR_Integer) 0;
                mercury__bitmap__succeeded = (mercury__bitmap__Var_25 <= mercury__bitmap__Var_13);
                if (mercury__bitmap__succeeded)
                  {
{
#define MR_PROC_LABEL mercury__bitmap__f_98_105_116_115_32_58_61_4_f_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr) mercury__bitmap__BM_6 ;
		{

    NumBits = BM->num_bits;


		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__Var_26  = NumBits;
}
                    mercury__bitmap__succeeded = (mercury__bitmap__Var_13 <= mercury__bitmap__Var_26);
                  }
              }
          }
      }
    if (mercury__bitmap__succeeded)
      {
        mercury__bitmap__HeadVar__5_5 = mercury__bitmap__f_117_110_115_97_102_101_95_98_105_116_115_32_58_61_4_f_0(mercury__bitmap__FirstBit_7, mercury__bitmap__NumBits_8, mercury__bitmap__BM_6, mercury__bitmap__Bits_9);
      }
    else
      {
        mercury__bitmap__succeeded = (mercury__bitmap__NumBits_8 < (MR_Integer) 0);
        if (!(mercury__bitmap__succeeded))
          {
            MR_Integer mercury__bitmap__Var_14;

{
#define MR_PROC_LABEL mercury__bitmap__f_98_105_116_115_32_58_61_4_f_0

	MR_Integer Bits;

		{

    Bits = ML_BITS_PER_INT;


		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__Var_14  = Bits;
}
            mercury__bitmap__succeeded = (mercury__bitmap__NumBits_8 > mercury__bitmap__Var_14);
          }
        if (mercury__bitmap__succeeded)
          {
            MR_Word mercury__bitmap__TypeCtorInfo_4_35 = (MR_Word) &mercury__bitmap__bitmap__type_ctor_info_bitmap_error_0;
            MR_Word mercury__bitmap__Var_34 = (MR_Word) ((MR_Box) ((MR_String) "bitmap.\'bits :=\': number of bits must be between 0 and \140int.bits_per_int\'."));

            {
              mercury__exception__throw_1_p_0(mercury__bitmap__TypeCtorInfo_4_35, ((MR_Box) (mercury__bitmap__Var_34)));
            }
          }
        else
          {
            MR_Word mercury__bitmap__TypeCtorInfo_21_21 = (MR_Word) &mercury__bitmap__bitmap__type_ctor_info_bitmap_0;
            MR_Box mercury__bitmap__conv0_HeadVar__5_5;

            {
              mercury__bitmap__conv0_HeadVar__5_5 = mercury__bitmap__throw_bounds_error_3_f_0(mercury__bitmap__TypeCtorInfo_21_21, mercury__bitmap__BM_6, (MR_String) "bitmap.\'bits :=\'", mercury__bitmap__FirstBit_7);
            }
            mercury__bitmap__HeadVar__5_5 = ((MR_Box) mercury__bitmap__conv0_HeadVar__5_5);
          }
      }
    return mercury__bitmap__HeadVar__5_5;
  }
}

MR_Integer MR_CALL 
mercury__bitmap__unsafe_bits_3_f_0(
  MR_Integer mercury__bitmap__FirstBit_6,
  MR_Integer mercury__bitmap__NumBits_7,
  MR_Box mercury__bitmap__BM_5)
{
  {
    MR_bool mercury__bitmap__succeeded = (mercury__bitmap__FirstBit_6 < (MR_Integer) 0);
    MR_Integer mercury__bitmap__Bits_8;
    MR_Integer mercury__bitmap__FirstByteIndex_9;
    MR_Integer mercury__bitmap__FirstBitIndex_10;

    if (mercury__bitmap__succeeded)
      mercury__bitmap__FirstByteIndex_9 = (MR_Integer) -1;
    else
      {
        mercury__bitmap__FirstByteIndex_9 = (mercury__bitmap__FirstBit_6 / (MR_Integer) 8);
      }
    mercury__bitmap__FirstBitIndex_10 = (mercury__bitmap__FirstBit_6 % (MR_Integer) 8);
    {
      mercury__bitmap__extract_bits_from_bytes_6_p_0(mercury__bitmap__FirstByteIndex_9, mercury__bitmap__FirstBitIndex_10, mercury__bitmap__NumBits_7, mercury__bitmap__BM_5, (MR_Integer) 0, &mercury__bitmap__Bits_8);
    }
    return mercury__bitmap__Bits_8;
  }
}

MR_Integer MR_CALL 
mercury__bitmap__bits_3_f_0(
  MR_Integer mercury__bitmap__FirstBit_6,
  MR_Integer mercury__bitmap__NumBits_7,
  MR_Box mercury__bitmap__BM_5)
{
  {
    MR_bool mercury__bitmap__succeeded = (mercury__bitmap__FirstBit_6 >= (MR_Integer) 0);
    MR_Integer mercury__bitmap__HeadVar__4_4;
    MR_Integer mercury__bitmap__Var_9;
    MR_Integer mercury__bitmap__Var_10;
    MR_Integer mercury__bitmap__Var_11;
    MR_Integer mercury__bitmap__Var_23;
    MR_Integer mercury__bitmap__Var_24;

    if (mercury__bitmap__succeeded)
      {
        mercury__bitmap__Var_9 = (MR_Integer) 0;
        mercury__bitmap__succeeded = (mercury__bitmap__NumBits_7 >= mercury__bitmap__Var_9);
        if (mercury__bitmap__succeeded)
          {
{
#define MR_PROC_LABEL mercury__bitmap__bits_3_f_0

	MR_Integer Bits;

		{

    Bits = ML_BITS_PER_INT;


		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__Var_10  = Bits;
}
            mercury__bitmap__succeeded = (mercury__bitmap__NumBits_7 <= mercury__bitmap__Var_10);
            if (mercury__bitmap__succeeded)
              {
                mercury__bitmap__Var_11 = (mercury__bitmap__FirstBit_6 + mercury__bitmap__NumBits_7);
                mercury__bitmap__Var_23 = (MR_Integer) 0;
                mercury__bitmap__succeeded = (mercury__bitmap__Var_23 <= mercury__bitmap__Var_11);
                if (mercury__bitmap__succeeded)
                  {
{
#define MR_PROC_LABEL mercury__bitmap__bits_3_f_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr) mercury__bitmap__BM_5 ;
		{

    NumBits = BM->num_bits;


		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__Var_24  = NumBits;
}
                    mercury__bitmap__succeeded = (mercury__bitmap__Var_11 <= mercury__bitmap__Var_24);
                  }
              }
          }
      }
    if (mercury__bitmap__succeeded)
      {
        mercury__bitmap__HeadVar__4_4 = mercury__bitmap__unsafe_bits_3_f_0(mercury__bitmap__FirstBit_6, mercury__bitmap__NumBits_7, mercury__bitmap__BM_5);
      }
    else
      {
        mercury__bitmap__succeeded = (mercury__bitmap__NumBits_7 < (MR_Integer) 0);
        if (!(mercury__bitmap__succeeded))
          {
            MR_Integer mercury__bitmap__Var_12;

{
#define MR_PROC_LABEL mercury__bitmap__bits_3_f_0

	MR_Integer Bits;

		{

    Bits = ML_BITS_PER_INT;


		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__Var_12  = Bits;
}
            mercury__bitmap__succeeded = (mercury__bitmap__NumBits_7 > mercury__bitmap__Var_12);
          }
        if (mercury__bitmap__succeeded)
          {
            MR_Word mercury__bitmap__TypeCtorInfo_4_33 = (MR_Word) &mercury__bitmap__bitmap__type_ctor_info_bitmap_error_0;
            MR_Word mercury__bitmap__Var_32 = (MR_Word) ((MR_Box) ((MR_String) "bitmap.bits: number of bits must be between 0 and \140int.bits_per_int\'."));

            {
              mercury__exception__throw_1_p_0(mercury__bitmap__TypeCtorInfo_4_33, ((MR_Box) (mercury__bitmap__Var_32)));
            }
          }
        else
          {
            MR_Word mercury__bitmap__TypeCtorInfo_19_19 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
            MR_Box mercury__bitmap__conv0_HeadVar__4_4;

            {
              mercury__bitmap__conv0_HeadVar__4_4 = mercury__bitmap__throw_bounds_error_3_f_0(mercury__bitmap__TypeCtorInfo_19_19, mercury__bitmap__BM_5, (MR_String) "bitmap.bits", mercury__bitmap__FirstBit_6);
            }
            mercury__bitmap__HeadVar__4_4 = ((MR_Integer) mercury__bitmap__conv0_HeadVar__4_4);
          }
      }
    return mercury__bitmap__HeadVar__4_4;
  }
}

MR_Box MR_CALL 
mercury__bitmap__f_117_110_115_97_102_101_95_98_105_116_32_58_61_3_f_0(
  MR_Integer mercury__bitmap__I_1,
  MR_Box mercury__bitmap__BM_2,
  MR_Word mercury__bitmap__HeadVar__3_3)
{
  {
    MR_bool mercury__bitmap__succeeded;
    MR_Box mercury__bitmap__HeadVar__4_4;

    switch (mercury__bitmap__HeadVar__3_3) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          mercury__bitmap__HeadVar__4_4 = mercury__bitmap__unsafe_clear_2_f_0(mercury__bitmap__BM_2, mercury__bitmap__I_1);
        }
        break;
      case (MR_Integer) 1:
        {
          mercury__bitmap__HeadVar__4_4 = mercury__bitmap__unsafe_set_2_f_0(mercury__bitmap__BM_2, mercury__bitmap__I_1);
        }
        break;
    }
    return mercury__bitmap__HeadVar__4_4;
  }
}

MR_Box MR_CALL 
mercury__bitmap__f_98_105_116_32_58_61_3_f_0(
  MR_Integer mercury__bitmap__I_6,
  MR_Box mercury__bitmap__BM_5,
  MR_Word mercury__bitmap__B_7)
{
  {
    MR_bool mercury__bitmap__succeeded = ((MR_Integer) 0 <= mercury__bitmap__I_6);
    MR_Box mercury__bitmap__HeadVar__4_4;
    MR_Integer mercury__bitmap__Var_13;

    if (mercury__bitmap__succeeded)
      {
{
#define MR_PROC_LABEL mercury__bitmap__f_98_105_116_32_58_61_3_f_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr) mercury__bitmap__BM_5 ;
		{

    NumBits = BM->num_bits;


		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__Var_13  = NumBits;
}
        mercury__bitmap__succeeded = (mercury__bitmap__I_6 < mercury__bitmap__Var_13);
      }
    if (mercury__bitmap__succeeded)
      switch (mercury__bitmap__B_7) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            mercury__bitmap__HeadVar__4_4 = mercury__bitmap__unsafe_clear_2_f_0(mercury__bitmap__BM_5, mercury__bitmap__I_6);
          }
          break;
        case (MR_Integer) 1:
          {
            mercury__bitmap__HeadVar__4_4 = mercury__bitmap__unsafe_set_2_f_0(mercury__bitmap__BM_5, mercury__bitmap__I_6);
          }
          break;
      }
    else
      {
        MR_Word mercury__bitmap__TypeCtorInfo_9_9 = (MR_Word) &mercury__bitmap__bitmap__type_ctor_info_bitmap_0;
        MR_Box mercury__bitmap__conv0_HeadVar__4_4;

        {
          mercury__bitmap__conv0_HeadVar__4_4 = mercury__bitmap__throw_bounds_error_3_f_0(mercury__bitmap__TypeCtorInfo_9_9, mercury__bitmap__BM_5, (MR_String) "bitmap.\'bit :=\'", mercury__bitmap__I_6);
        }
        mercury__bitmap__HeadVar__4_4 = ((MR_Box) mercury__bitmap__conv0_HeadVar__4_4);
      }
    return mercury__bitmap__HeadVar__4_4;
  }
}

MR_Word MR_CALL 
mercury__bitmap__unsafe_bit_2_f_0(
  MR_Integer mercury__bitmap__I_5,
  MR_Box mercury__bitmap__BM_4)
{
  {
    MR_bool mercury__bitmap__succeeded;
    MR_Word mercury__bitmap__HeadVar__3_3;

    {
      mercury__bitmap__succeeded = mercury__bitmap__unsafe_is_clear_2_p_0(mercury__bitmap__BM_4, mercury__bitmap__I_5);
    }
    mercury__bitmap__succeeded = !(mercury__bitmap__succeeded);
    if (mercury__bitmap__succeeded)
      mercury__bitmap__HeadVar__3_3 = (MR_Integer) 1;
    else
      mercury__bitmap__HeadVar__3_3 = (MR_Integer) 0;
    return mercury__bitmap__HeadVar__3_3;
  }
}

MR_Word MR_CALL 
mercury__bitmap__bit_2_f_0(
  MR_Integer mercury__bitmap__I_5,
  MR_Box mercury__bitmap__BM_4)
{
  {
    MR_bool mercury__bitmap__succeeded = ((MR_Integer) 0 <= mercury__bitmap__I_5);
    MR_Word mercury__bitmap__HeadVar__3_3;
    MR_Integer mercury__bitmap__Var_11;

    if (mercury__bitmap__succeeded)
      {
{
#define MR_PROC_LABEL mercury__bitmap__bit_2_f_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr) mercury__bitmap__BM_4 ;
		{

    NumBits = BM->num_bits;


		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__Var_11  = NumBits;
}
        mercury__bitmap__succeeded = (mercury__bitmap__I_5 < mercury__bitmap__Var_11);
      }
    if (mercury__bitmap__succeeded)
      {
        {
          mercury__bitmap__succeeded = mercury__bitmap__unsafe_is_clear_2_p_0(mercury__bitmap__BM_4, mercury__bitmap__I_5);
        }
        mercury__bitmap__succeeded = !(mercury__bitmap__succeeded);
        if (mercury__bitmap__succeeded)
          mercury__bitmap__HeadVar__3_3 = (MR_Integer) 1;
        else
          mercury__bitmap__HeadVar__3_3 = (MR_Integer) 0;
      }
    else
      {
        MR_Word mercury__bitmap__TypeCtorInfo_7_7 = (MR_Word) &mercury__bool__bool__type_ctor_info_bool_0;
        MR_Box mercury__bitmap__conv0_HeadVar__3_3;

        {
          mercury__bitmap__conv0_HeadVar__3_3 = mercury__bitmap__throw_bounds_error_3_f_0(mercury__bitmap__TypeCtorInfo_7_7, mercury__bitmap__BM_4, (MR_String) "bitmap.bit", mercury__bitmap__I_5);
        }
        mercury__bitmap__HeadVar__3_3 = ((MR_Word) mercury__bitmap__conv0_HeadVar__3_3);
      }
    return mercury__bitmap__HeadVar__3_3;
  }
}

MR_Integer MR_CALL 
mercury__bitmap__bits_per_byte_0_f_0(void)
{
  {
    MR_bool mercury__bitmap__succeeded;

    return (MR_Integer) 8;
  }
}

MR_Integer MR_CALL 
mercury__bitmap__det_num_bytes_1_f_0(
  MR_Box mercury__bitmap__BM_3)
{
  {
    MR_bool mercury__bitmap__succeeded;
    MR_Integer mercury__bitmap__Bytes_4;
    MR_Integer mercury__bitmap__Bytes0_5;
    MR_Integer mercury__bitmap__NumBits_9;
    MR_Integer mercury__bitmap__Var_10;
    MR_Integer mercury__bitmap__Var_12;

{
#define MR_PROC_LABEL mercury__bitmap__det_num_bytes_1_f_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr) mercury__bitmap__BM_3 ;
		{

    NumBits = BM->num_bits;


		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__NumBits_9  = NumBits;
}
    mercury__bitmap__Var_10 = (mercury__bitmap__NumBits_9 % (MR_Integer) 8);
    mercury__bitmap__succeeded = (mercury__bitmap__Var_10 == (MR_Integer) 0);
    if (mercury__bitmap__succeeded)
      {
        mercury__bitmap__Var_12 = (MR_Integer) 8;
        mercury__bitmap__Bytes0_5 = (mercury__bitmap__NumBits_9 / mercury__bitmap__Var_12);
        mercury__bitmap__succeeded = MR_TRUE;
      }
    if (mercury__bitmap__succeeded)
      mercury__bitmap__Bytes_4 = mercury__bitmap__Bytes0_5;
    else
      {
        MR_Word mercury__bitmap__TypeCtorInfo_4_18 = (MR_Word) &mercury__bitmap__bitmap__type_ctor_info_bitmap_error_0;
        MR_Word mercury__bitmap__Var_17 = (MR_Word) ((MR_Box) ((MR_String) "bitmap.det_num_bytes: bitmap has a partial final byte"));

        {
          mercury__exception__throw_1_p_0(mercury__bitmap__TypeCtorInfo_4_18, ((MR_Box) (mercury__bitmap__Var_17)));
        }
      }
    return mercury__bitmap__Bytes_4;
  }
}

MR_bool MR_CALL 
mercury__bitmap__num_bytes_1_f_0(
  MR_Box mercury__bitmap__BM_3,
  MR_Integer * mercury__bitmap__Bytes_4)
{
  {
    MR_bool mercury__bitmap__succeeded;
    MR_Integer mercury__bitmap__NumBits_5;
    MR_Integer mercury__bitmap__Var_6;
    MR_Integer mercury__bitmap__Var_8;

{
#define MR_PROC_LABEL mercury__bitmap__num_bytes_1_f_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr) mercury__bitmap__BM_3 ;
		{

    NumBits = BM->num_bits;


		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__NumBits_5  = NumBits;
}
    mercury__bitmap__Var_6 = (mercury__bitmap__NumBits_5 % (MR_Integer) 8);
    mercury__bitmap__succeeded = (mercury__bitmap__Var_6 == (MR_Integer) 0);
    if (mercury__bitmap__succeeded)
      {
        mercury__bitmap__Var_8 = (MR_Integer) 8;
        *mercury__bitmap__Bytes_4 = (mercury__bitmap__NumBits_5 / mercury__bitmap__Var_8);
        mercury__bitmap__succeeded = MR_TRUE;
      }
    return mercury__bitmap__succeeded;
  }
}

MR_Integer MR_CALL 
mercury__bitmap__num_bits_1_f_0(
  MR_Box mercury__bitmap__BM_1)
{
  {
    MR_bool mercury__bitmap__succeeded;
    MR_Integer mercury__bitmap__NumBits_2;

{
#define MR_PROC_LABEL mercury__bitmap__num_bits_1_f_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr) mercury__bitmap__BM_1 ;
		{

    NumBits = BM->num_bits;


		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__NumBits_2  = NumBits;
}
    return mercury__bitmap__NumBits_2;
  }
}

MR_bool MR_CALL 
mercury__bitmap__byte_in_range_2_p_0(
  MR_Box mercury__bitmap__BM_3,
  MR_Integer mercury__bitmap__I_4)
{
  {
    MR_bool mercury__bitmap__succeeded;
    MR_Integer mercury__bitmap__Var_5;
    MR_Integer mercury__bitmap__Var_6;
    MR_Integer mercury__bitmap__Var_7 = (mercury__bitmap__I_4 * (MR_Integer) 8);
    MR_Integer mercury__bitmap__Var_14;

    mercury__bitmap__Var_6 = (mercury__bitmap__Var_7 + (MR_Integer) 8);
    mercury__bitmap__Var_5 = (mercury__bitmap__Var_6 - (MR_Integer) 1);
    mercury__bitmap__succeeded = ((MR_Integer) 0 <= mercury__bitmap__Var_5);
    if (mercury__bitmap__succeeded)
      {
{
#define MR_PROC_LABEL mercury__bitmap__byte_in_range_2_p_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr) mercury__bitmap__BM_3 ;
		{

    NumBits = BM->num_bits;


		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__Var_14  = NumBits;
}
        mercury__bitmap__succeeded = (mercury__bitmap__Var_5 < mercury__bitmap__Var_14);
      }
    return mercury__bitmap__succeeded;
  }
}

MR_bool MR_CALL 
mercury__bitmap__in_range_2_p_0(
  MR_Box mercury__bitmap__BM_3,
  MR_Integer mercury__bitmap__I_4)
{
  {
    MR_bool mercury__bitmap__succeeded = ((MR_Integer) 0 <= mercury__bitmap__I_4);
    MR_Integer mercury__bitmap__Var_6;

    if (mercury__bitmap__succeeded)
      {
{
#define MR_PROC_LABEL mercury__bitmap__in_range_2_p_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr) mercury__bitmap__BM_3 ;
		{

    NumBits = BM->num_bits;


		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__Var_6  = NumBits;
}
        mercury__bitmap__succeeded = (mercury__bitmap__I_4 < mercury__bitmap__Var_6);
      }
    return mercury__bitmap__succeeded;
  }
}

MR_Box MR_CALL 
mercury__bitmap__init_1_f_0(
  MR_Integer mercury__bitmap__N_3)
{
  {
    MR_bool mercury__bitmap__succeeded;
    MR_Box mercury__bitmap__HeadVar__2_2;

    {
      mercury__bitmap__HeadVar__2_2 = mercury__bitmap__init_2_f_0(mercury__bitmap__N_3, (MR_Integer) 0);
    }
    return mercury__bitmap__HeadVar__2_2;
  }
}

MR_Box MR_CALL 
mercury__bitmap__init_2_f_0(
  MR_Integer mercury__bitmap__N_4,
  MR_Word mercury__bitmap__B_5)
{
  {
    MR_bool mercury__bitmap__succeeded = (mercury__bitmap__N_4 < (MR_Integer) 0);
    MR_Box mercury__bitmap__BM_6;

    if (mercury__bitmap__succeeded)
      {
        MR_Word mercury__bitmap__TypeCtorInfo_4_19 = (MR_Word) &mercury__bitmap__bitmap__type_ctor_info_bitmap_error_0;
        MR_Word mercury__bitmap__Var_18 = (MR_Word) ((MR_Box) ((MR_String) "bitmap.init: negative size"));

        {
          mercury__exception__throw_1_p_0(mercury__bitmap__TypeCtorInfo_4_19, ((MR_Box) (mercury__bitmap__Var_18)));
        }
      }
    else
      {
        MR_Integer mercury__bitmap__X_8;
        MR_Box mercury__bitmap__BM0_9;
        MR_Box mercury__bitmap__Var_13;
        MR_Integer mercury__bitmap__Var_25;
        MR_Integer mercury__bitmap__Var_26;
        MR_Integer mercury__bitmap__Var_32;
        MR_Integer mercury__bitmap__Var_33;

        switch (mercury__bitmap__B_5) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            mercury__bitmap__X_8 = (MR_Integer) 0;
            break;
          case (MR_Integer) 1:
            mercury__bitmap__X_8 = (MR_Integer) -1;
            break;
        }
{
#define MR_PROC_LABEL mercury__bitmap__init_2_f_0

	MR_Integer N;
	MR_BitmapPtr BM;

	N =  mercury__bitmap__N_4 ;
		{

    MR_allocate_bitmap_msg(BM, N, MR_ALLOC_ID);


		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__Var_13  = (MR_Box) BM;
}
        mercury__bitmap__Var_26 = (mercury__bitmap__N_4 - (MR_Integer) 1);
        mercury__bitmap__succeeded = (mercury__bitmap__Var_26 < (MR_Integer) 0);
        if (mercury__bitmap__succeeded)
          mercury__bitmap__Var_25 = (MR_Integer) -1;
        else
          {
            mercury__bitmap__Var_25 = (mercury__bitmap__Var_26 / (MR_Integer) 8);
          }
        {
          mercury__bitmap__BM0_9 = mercury__bitmap__initialize_bitmap_bytes_4_f_0(mercury__bitmap__Var_13, (MR_Integer) 0, mercury__bitmap__Var_25, mercury__bitmap__X_8);
        }
{
#define MR_PROC_LABEL mercury__bitmap__init_2_f_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr) mercury__bitmap__BM0_9 ;
		{

    NumBits = BM->num_bits;


		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__Var_33  = NumBits;
}
        mercury__bitmap__Var_32 = (mercury__bitmap__Var_33 - (MR_Integer) 1);
        {
          mercury__bitmap__BM_6 = mercury__bitmap__set_trailing_bits_in_byte_3_f_0(mercury__bitmap__BM0_9, mercury__bitmap__Var_32, (MR_Integer) 0);
        }
      }
    return mercury__bitmap__BM_6;
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

/* :- end_module bitmap. */
