/*
** Automatically generated from `bitmap.m'
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




#line 85 "bitmap.c"
static const MR_Integer mercury__bitmap__bitmap__functor_number_map_bitmap_error_0[1];

#line 88 "bitmap.c"
static const MR_NotagFunctorDesc mercury__bitmap__bitmap__notag_functor_desc_bitmap_error_0;

#line 91 "bitmap.c"
static const MR_EnumFunctorDesc mercury__bitmap__bitmap__enum_functor_desc_copy_direction_0_0;

#line 94 "bitmap.c"
static const MR_EnumFunctorDesc mercury__bitmap__bitmap__enum_functor_desc_copy_direction_0_1;

#line 97 "bitmap.c"
static const MR_EnumFunctorDescPtr mercury__bitmap__bitmap__enum_value_ordered_copy_direction_0[2];

#line 100 "bitmap.c"
static const MR_EnumFunctorDescPtr mercury__bitmap__bitmap__enum_name_ordered_copy_direction_0[2];

#line 103 "bitmap.c"
static const MR_Integer mercury__bitmap__bitmap__functor_number_map_copy_direction_0[2];

#line 106 "bitmap.c"
static const MR_PseudoTypeInfo mercury__bitmap__bitmap__field_types_slice_0_0[3];

#line 109 "bitmap.c"
static const MR_ConstString mercury__bitmap__bitmap__field_names_slice_0_0[3];

#line 112 "bitmap.c"
static const MR_DuFunctorDesc mercury__bitmap__bitmap__du_functor_desc_slice_0_0;

#line 115 "bitmap.c"
static const MR_DuFunctorDescPtr mercury__bitmap__bitmap__du_stag_ordered_slice_0_0[1];

#line 118 "bitmap.c"
static const MR_DuPtagLayout mercury__bitmap__bitmap__du_ptag_ordered_slice_0[1];

#line 121 "bitmap.c"
static const MR_DuFunctorDescPtr mercury__bitmap__bitmap__du_name_ordered_slice_0[1];

#line 124 "bitmap.c"
static const MR_Integer mercury__bitmap__bitmap__functor_number_map_slice_0[1];

#line 127 "bitmap.c"
static MR_bool MR_CALL 
mercury__bitmap____Unify____bit_index_0_0_10001(
#line 130 "bitmap.c"
  MR_Box mercury__bitmap__wrapper_arg_1,
#line 132 "bitmap.c"
  MR_Box mercury__bitmap__wrapper_arg_2);

#line 135 "bitmap.c"
static void MR_CALL 
mercury__bitmap____Compare____bit_index_0_0_10001(
#line 138 "bitmap.c"
  MR_Box * mercury__bitmap__wrapper_arg_1,
#line 140 "bitmap.c"
  MR_Box mercury__bitmap__wrapper_arg_2,
#line 142 "bitmap.c"
  MR_Box mercury__bitmap__wrapper_arg_3);

#line 145 "bitmap.c"
static MR_bool MR_CALL 
mercury__bitmap____Unify____bit_index_in_byte_0_0_10001(
#line 148 "bitmap.c"
  MR_Box mercury__bitmap__wrapper_arg_1,
#line 150 "bitmap.c"
  MR_Box mercury__bitmap__wrapper_arg_2);

#line 153 "bitmap.c"
static void MR_CALL 
mercury__bitmap____Compare____bit_index_in_byte_0_0_10001(
#line 156 "bitmap.c"
  MR_Box * mercury__bitmap__wrapper_arg_1,
#line 158 "bitmap.c"
  MR_Box mercury__bitmap__wrapper_arg_2,
#line 160 "bitmap.c"
  MR_Box mercury__bitmap__wrapper_arg_3);

#line 163 "bitmap.c"
static MR_bool MR_CALL 
mercury__bitmap____Unify____bitmap_0_0_10001(
#line 166 "bitmap.c"
  MR_Box mercury__bitmap__wrapper_arg_1,
#line 168 "bitmap.c"
  MR_Box mercury__bitmap__wrapper_arg_2);

#line 171 "bitmap.c"
static void MR_CALL 
mercury__bitmap____Compare____bitmap_0_0_10001(
#line 174 "bitmap.c"
  MR_Box * mercury__bitmap__wrapper_arg_1,
#line 176 "bitmap.c"
  MR_Box mercury__bitmap__wrapper_arg_2,
#line 178 "bitmap.c"
  MR_Box mercury__bitmap__wrapper_arg_3);

#line 181 "bitmap.c"
static MR_bool MR_CALL 
mercury__bitmap____Unify____bitmap_error_0_0_10001(
#line 184 "bitmap.c"
  MR_Box mercury__bitmap__wrapper_arg_1,
#line 186 "bitmap.c"
  MR_Box mercury__bitmap__wrapper_arg_2);

#line 189 "bitmap.c"
static void MR_CALL 
mercury__bitmap____Compare____bitmap_error_0_0_10001(
#line 192 "bitmap.c"
  MR_Box * mercury__bitmap__wrapper_arg_1,
#line 194 "bitmap.c"
  MR_Box mercury__bitmap__wrapper_arg_2,
#line 196 "bitmap.c"
  MR_Box mercury__bitmap__wrapper_arg_3);

#line 199 "bitmap.c"
static MR_bool MR_CALL 
mercury__bitmap____Unify____byte_0_0_10001(
#line 202 "bitmap.c"
  MR_Box mercury__bitmap__wrapper_arg_1,
#line 204 "bitmap.c"
  MR_Box mercury__bitmap__wrapper_arg_2);

#line 207 "bitmap.c"
static void MR_CALL 
mercury__bitmap____Compare____byte_0_0_10001(
#line 210 "bitmap.c"
  MR_Box * mercury__bitmap__wrapper_arg_1,
#line 212 "bitmap.c"
  MR_Box mercury__bitmap__wrapper_arg_2,
#line 214 "bitmap.c"
  MR_Box mercury__bitmap__wrapper_arg_3);

#line 217 "bitmap.c"
static MR_bool MR_CALL 
mercury__bitmap____Unify____byte_index_0_0_10001(
#line 220 "bitmap.c"
  MR_Box mercury__bitmap__wrapper_arg_1,
#line 222 "bitmap.c"
  MR_Box mercury__bitmap__wrapper_arg_2);

#line 225 "bitmap.c"
static void MR_CALL 
mercury__bitmap____Compare____byte_index_0_0_10001(
#line 228 "bitmap.c"
  MR_Box * mercury__bitmap__wrapper_arg_1,
#line 230 "bitmap.c"
  MR_Box mercury__bitmap__wrapper_arg_2,
#line 232 "bitmap.c"
  MR_Box mercury__bitmap__wrapper_arg_3);

#line 235 "bitmap.c"
static MR_bool MR_CALL 
mercury__bitmap____Unify____copy_direction_0_0_10001(
#line 238 "bitmap.c"
  MR_Box mercury__bitmap__wrapper_arg_1,
#line 240 "bitmap.c"
  MR_Box mercury__bitmap__wrapper_arg_2);

#line 243 "bitmap.c"
static void MR_CALL 
mercury__bitmap____Compare____copy_direction_0_0_10001(
#line 246 "bitmap.c"
  MR_Box * mercury__bitmap__wrapper_arg_1,
#line 248 "bitmap.c"
  MR_Box mercury__bitmap__wrapper_arg_2,
#line 250 "bitmap.c"
  MR_Box mercury__bitmap__wrapper_arg_3);

#line 253 "bitmap.c"
static MR_bool MR_CALL 
mercury__bitmap____Unify____num_bits_0_0_10001(
#line 256 "bitmap.c"
  MR_Box mercury__bitmap__wrapper_arg_1,
#line 258 "bitmap.c"
  MR_Box mercury__bitmap__wrapper_arg_2);

#line 261 "bitmap.c"
static void MR_CALL 
mercury__bitmap____Compare____num_bits_0_0_10001(
#line 264 "bitmap.c"
  MR_Box * mercury__bitmap__wrapper_arg_1,
#line 266 "bitmap.c"
  MR_Box mercury__bitmap__wrapper_arg_2,
#line 268 "bitmap.c"
  MR_Box mercury__bitmap__wrapper_arg_3);

#line 271 "bitmap.c"
static MR_bool MR_CALL 
mercury__bitmap____Unify____num_bytes_0_0_10001(
#line 274 "bitmap.c"
  MR_Box mercury__bitmap__wrapper_arg_1,
#line 276 "bitmap.c"
  MR_Box mercury__bitmap__wrapper_arg_2);

#line 279 "bitmap.c"
static void MR_CALL 
mercury__bitmap____Compare____num_bytes_0_0_10001(
#line 282 "bitmap.c"
  MR_Box * mercury__bitmap__wrapper_arg_1,
#line 284 "bitmap.c"
  MR_Box mercury__bitmap__wrapper_arg_2,
#line 286 "bitmap.c"
  MR_Box mercury__bitmap__wrapper_arg_3);

#line 289 "bitmap.c"
static MR_bool MR_CALL 
mercury__bitmap____Unify____slice_0_0_10001(
#line 292 "bitmap.c"
  MR_Box mercury__bitmap__wrapper_arg_1,
#line 294 "bitmap.c"
  MR_Box mercury__bitmap__wrapper_arg_2);

#line 297 "bitmap.c"
static void MR_CALL 
mercury__bitmap____Compare____slice_0_0_10001(
#line 300 "bitmap.c"
  MR_Box * mercury__bitmap__wrapper_arg_1,
#line 302 "bitmap.c"
  MR_Box mercury__bitmap__wrapper_arg_2,
#line 304 "bitmap.c"
  MR_Box mercury__bitmap__wrapper_arg_3);

#line 307 "bitmap.c"
static MR_bool MR_CALL 
mercury__bitmap____Unify____word_0_0_10001(
#line 310 "bitmap.c"
  MR_Box mercury__bitmap__wrapper_arg_1,
#line 312 "bitmap.c"
  MR_Box mercury__bitmap__wrapper_arg_2);

#line 315 "bitmap.c"
static void MR_CALL 
mercury__bitmap____Compare____word_0_0_10001(
#line 318 "bitmap.c"
  MR_Box * mercury__bitmap__wrapper_arg_1,
#line 320 "bitmap.c"
  MR_Box mercury__bitmap__wrapper_arg_2,
#line 322 "bitmap.c"
  MR_Box mercury__bitmap__wrapper_arg_3);

#line 13 "ops.opt"
static MR_Integer MR_CALL 
mercury__bitmap__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);

#line 130 "list.int"
static void MR_CALL 
mercury__bitmap__foldl__ho16_4_p_in__list_0(
#line 130 "list.int"
  MR_Word mercury__bitmap__HeadVar__2_2,
#line 130 "list.int"
  MR_Integer mercury__bitmap__HeadVar__3_3,
#line 130 "list.int"
  MR_Integer * mercury__bitmap__HeadVar__4_4);

#line 899 "bitmap.m"
static MR_Box MR_CALL 
mercury__bitmap__zip2__ho15_4_f_0(
#line 899 "bitmap.m"
  MR_Integer mercury__bitmap__I_6,
#line 899 "bitmap.m"
  MR_Box mercury__bitmap__BMa_8,
#line 899 "bitmap.m"
  MR_Box mercury__bitmap__BMb_9);

#line 899 "bitmap.m"
static MR_Box MR_CALL 
mercury__bitmap__zip2__ho14_4_f_0(
#line 899 "bitmap.m"
  MR_Integer mercury__bitmap__I_6,
#line 899 "bitmap.m"
  MR_Box mercury__bitmap__BMa_8,
#line 899 "bitmap.m"
  MR_Box mercury__bitmap__BMb_9);

#line 899 "bitmap.m"
static MR_Box MR_CALL 
mercury__bitmap__zip2__ho13_4_f_0(
#line 899 "bitmap.m"
  MR_Integer mercury__bitmap__I_6,
#line 899 "bitmap.m"
  MR_Box mercury__bitmap__BMa_8,
#line 899 "bitmap.m"
  MR_Box mercury__bitmap__BMb_9);

#line 899 "bitmap.m"
static MR_Box MR_CALL 
mercury__bitmap__zip2__ho12_4_f_0(
#line 899 "bitmap.m"
  MR_Integer mercury__bitmap__I_6,
#line 899 "bitmap.m"
  MR_Box mercury__bitmap__BMa_8,
#line 899 "bitmap.m"
  MR_Box mercury__bitmap__BMb_9);

#line 143 "list.int"
static void MR_CALL 
mercury__bitmap__foldl2__ho6_6_p_in__list_0(
#line 143 "list.int"
  MR_Word mercury__bitmap__HeadVar__2_2,
#line 143 "list.int"
  MR_Integer mercury__bitmap__HeadVar__3_3,
#line 143 "list.int"
  MR_Integer * mercury__bitmap__HeadVar__4_4,
#line 143 "list.int"
  MR_Box mercury__bitmap__HeadVar__5_5,
#line 143 "list.int"
  MR_Box * mercury__bitmap__HeadVar__6_6);

#line 2133 "bitmap.m"
static MR_Integer MR_CALL 
mercury__bitmap__set_bits_in_byte_4_f_0(
#line 2133 "bitmap.m"
  MR_Integer mercury__bitmap__Byte0_6,
#line 2133 "bitmap.m"
  MR_Integer mercury__bitmap__FirstBit_7,
#line 2133 "bitmap.m"
  MR_Integer mercury__bitmap__NumBits_8,
#line 2133 "bitmap.m"
  MR_Integer mercury__bitmap__Bits_9);

#line 2118 "bitmap.m"
static MR_Integer MR_CALL 
mercury__bitmap__extract_bits_from_byte_3_f_0(
#line 2118 "bitmap.m"
  MR_Integer mercury__bitmap__Byte_5,
#line 2118 "bitmap.m"
  MR_Integer mercury__bitmap__FirstBit_6,
#line 2118 "bitmap.m"
  MR_Integer mercury__bitmap__NumBits_7);

#line 1962 "bitmap.m"
static MR_Box MR_CALL 
mercury__bitmap__allocate_bitmap_1_f_0(
#line 1962 "bitmap.m"
  MR_Integer mercury__bitmap__N_1);

#line 1841 "bitmap.m"
static MR_Box MR_CALL 
mercury__bitmap__f_110_117_109_95_98_105_116_115_32_58_61_2_f_0(
#line 1841 "bitmap.m"
  MR_Box mercury__bitmap__BM0_1,
#line 1841 "bitmap.m"
  MR_Integer mercury__bitmap__NumBits_2);

#line 1514 "bitmap.m"
static void MR_CALL 
mercury__bitmap__hash_2_5_p_0(
#line 1514 "bitmap.m"
  MR_Box mercury__bitmap__BM_6,
#line 1514 "bitmap.m"
  MR_Integer mercury__bitmap__Index_7,
#line 1514 "bitmap.m"
  MR_Integer mercury__bitmap__Length_8,
#line 1514 "bitmap.m"
  MR_Integer mercury__bitmap__STATE_VARIABLE_HashVal_0_10,
#line 1514 "bitmap.m"
  MR_Integer * mercury__bitmap__STATE_VARIABLE_HashVal_11);

#line 1444 "bitmap.m"
static MR_bool MR_CALL 
mercury__bitmap__hex_chars_to_bitmap_6_p_0(
#line 1444 "bitmap.m"
  MR_String mercury__bitmap__Str_7,
#line 1444 "bitmap.m"
  MR_Integer mercury__bitmap__Index_8,
#line 1444 "bitmap.m"
  MR_Integer mercury__bitmap__End_9,
#line 1444 "bitmap.m"
  MR_Integer mercury__bitmap__ByteIndex_10,
#line 1444 "bitmap.m"
  MR_Box mercury__bitmap__STATE_VARIABLE_BM_0_15,
#line 1444 "bitmap.m"
  MR_Box * mercury__bitmap__STATE_VARIABLE_BM_16);

#line 1408 "bitmap.m"
static void MR_CALL 
mercury__bitmap__to_string_chars_4_p_0(
#line 1408 "bitmap.m"
  MR_Integer mercury__bitmap__Index_5,
#line 1408 "bitmap.m"
  MR_Box mercury__bitmap__BM_6,
#line 1408 "bitmap.m"
  MR_Word mercury__bitmap__STATE_VARIABLE_Chars_0_12,
#line 1408 "bitmap.m"
  MR_Word * mercury__bitmap__STATE_VARIABLE_Chars_13);

#line 1336 "bitmap.m"
static MR_Box MR_CALL 
mercury__bitmap__unsafe_copy_unaligned_bytes_rtol_7_f_0(
#line 1336 "bitmap.m"
  MR_Box mercury__bitmap__SrcBM_9,
#line 1336 "bitmap.m"
  MR_Integer mercury__bitmap__SrcByteIndex_10,
#line 1336 "bitmap.m"
  MR_Integer mercury__bitmap__SrcBitIndex_11,
#line 1336 "bitmap.m"
  MR_Integer mercury__bitmap__PrevSrcByteBits_12,
#line 1336 "bitmap.m"
  MR_Box mercury__bitmap__STATE_VARIABLE_DestBM_0_18,
#line 1336 "bitmap.m"
  MR_Integer mercury__bitmap__DestByteIndex_14,
#line 1336 "bitmap.m"
  MR_Integer mercury__bitmap__NumBytes_15);

#line 1295 "bitmap.m"
static MR_Box MR_CALL 
mercury__bitmap__unsafe_copy_unaligned_bytes_ltor_7_f_0(
#line 1295 "bitmap.m"
  MR_Box mercury__bitmap__SrcBM_9,
#line 1295 "bitmap.m"
  MR_Integer mercury__bitmap__SrcByteIndex_10,
#line 1295 "bitmap.m"
  MR_Integer mercury__bitmap__SrcBitIndex_11,
#line 1295 "bitmap.m"
  MR_Integer mercury__bitmap__PrevSrcByteBits_12,
#line 1295 "bitmap.m"
  MR_Box mercury__bitmap__STATE_VARIABLE_DestBM_0_18,
#line 1295 "bitmap.m"
  MR_Integer mercury__bitmap__DestByteIndex_14,
#line 1295 "bitmap.m"
  MR_Integer mercury__bitmap__NumBytes_15);

#line 1207 "bitmap.m"
static MR_Box MR_CALL 
mercury__bitmap__unsafe_copy_unaligned_bits_6_f_0(
#line 1207 "bitmap.m"
  MR_Integer mercury__bitmap__SameBM_8,
#line 1207 "bitmap.m"
  MR_Box mercury__bitmap__SrcBM_9,
#line 1207 "bitmap.m"
  MR_Integer mercury__bitmap__SrcStartBit_10,
#line 1207 "bitmap.m"
  MR_Box mercury__bitmap__STATE_VARIABLE_DestBM_0_31,
#line 1207 "bitmap.m"
  MR_Integer mercury__bitmap__DestStartBit_12,
#line 1207 "bitmap.m"
  MR_Integer mercury__bitmap__STATE_VARIABLE_NumBits_0_32);

#line 1125 "bitmap.m"
static MR_Box MR_CALL 
mercury__bitmap__unsafe_copy_bytes_6_f_0(
#line 1125 "bitmap.m"
  MR_Integer mercury__bitmap__SameBM_1,
#line 1125 "bitmap.m"
  MR_Box mercury__bitmap__SrcBM_2,
#line 1125 "bitmap.m"
  MR_Integer mercury__bitmap__SrcFirstByteIndex_3,
#line 1125 "bitmap.m"
  MR_Box mercury__bitmap__DestBM0_4,
#line 1125 "bitmap.m"
  MR_Integer mercury__bitmap__DestFirstByteIndex_5,
#line 1125 "bitmap.m"
  MR_Integer mercury__bitmap__NumBytes_6);

#line 974 "bitmap.m"
static MR_Box MR_CALL 
mercury__bitmap__unsafe_copy_bits_6_f_0(
#line 974 "bitmap.m"
  MR_Integer mercury__bitmap__SameBM_8,
#line 974 "bitmap.m"
  MR_Box mercury__bitmap__SrcBM_9,
#line 974 "bitmap.m"
  MR_Integer mercury__bitmap__SrcStartBit_10,
#line 974 "bitmap.m"
  MR_Box mercury__bitmap__STATE_VARIABLE_DestBM_0_30,
#line 974 "bitmap.m"
  MR_Integer mercury__bitmap__DestStartBit_12,
#line 974 "bitmap.m"
  MR_Integer mercury__bitmap__STATE_VARIABLE_NumBits_0_31);

#line 696 "bitmap.m"
static void MR_CALL 
mercury__bitmap__set_bits_in_byte_index_6_p_0(
#line 696 "bitmap.m"
  MR_Integer mercury__bitmap__ByteIndex_7,
#line 696 "bitmap.m"
  MR_Integer mercury__bitmap__LastBitIndex_8,
#line 696 "bitmap.m"
  MR_Integer mercury__bitmap__NumBitsThisByte_9,
#line 696 "bitmap.m"
  MR_Integer mercury__bitmap__Bits_10,
#line 696 "bitmap.m"
  MR_Box mercury__bitmap__STATE_VARIABLE_BM_0_13,
#line 696 "bitmap.m"
  MR_Box * mercury__bitmap__STATE_VARIABLE_BM_14);

#line 638 "bitmap.m"
static void MR_CALL 
mercury__bitmap__extract_bits_from_byte_index_6_p_0(
#line 638 "bitmap.m"
  MR_Integer mercury__bitmap__ByteIndex_7,
#line 638 "bitmap.m"
  MR_Integer mercury__bitmap__FirstBitIndex_8,
#line 638 "bitmap.m"
  MR_Integer mercury__bitmap__NumBitsThisByte_9,
#line 638 "bitmap.m"
  MR_Box mercury__bitmap__BM_10,
#line 638 "bitmap.m"
  MR_Integer mercury__bitmap__STATE_VARIABLE_Bits_0_13,
#line 638 "bitmap.m"
  MR_Integer * mercury__bitmap__STATE_VARIABLE_Bits_14);

#line 541 "bitmap.m"
static MR_Box MR_CALL 
mercury__bitmap__initialize_bitmap_bytes_4_f_0(
#line 541 "bitmap.m"
  MR_Box mercury__bitmap__BM_6,
#line 541 "bitmap.m"
  MR_Integer mercury__bitmap__ByteIndex_7,
#line 541 "bitmap.m"
  MR_Integer mercury__bitmap__LastByteIndex_8,
#line 541 "bitmap.m"
  MR_Integer mercury__bitmap__Init_9);


static /* final */ const MR_Box mercury__bitmap_scalar_common_1[1][3];

static /* final */ const MR_Box mercury__bitmap_scalar_common_2[1][4];

static /* final */ const MR_Box mercury__bitmap_scalar_common_3[2][5];

static /* final */ const MR_Box mercury__bitmap_scalar_common_4[3][2];




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

static /* final */ const MR_Box mercury__bitmap_scalar_common_4[3][2] = {
  /* row 0 */
  {
    ((MR_Box) (MR_Word) ((MR_Char) 62)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_String) ".")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_String) ").")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};



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



#line 969 "bitmap.c"
const MR_TypeCtorInfo_Struct mercury__bitmap__bitmap__type_ctor_info_bit_index_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mercury__bitmap____Unify____bit_index_0_0_10001)),
  ((MR_Box) (mercury__bitmap____Compare____bit_index_0_0_10001)),
  (MR_String) "bitmap",
  (MR_String) "bit_index",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 990 "bitmap.c"
const MR_TypeCtorInfo_Struct mercury__bitmap__bitmap__type_ctor_info_bit_index_in_byte_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mercury__bitmap____Unify____bit_index_in_byte_0_0_10001)),
  ((MR_Box) (mercury__bitmap____Compare____bit_index_in_byte_0_0_10001)),
  (MR_String) "bitmap",
  (MR_String) "bit_index_in_byte",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1011 "bitmap.c"
const MR_TypeCtorInfo_Struct mercury__bitmap__bitmap__type_ctor_info_bitmap_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_BITMAP,
  ((MR_Box) (mercury__bitmap____Unify____bitmap_0_0_10001)),
  ((MR_Box) (mercury__bitmap____Compare____bitmap_0_0_10001)),
  (MR_String) "bitmap",
  (MR_String) "bitmap",
  {
    NULL
  },
  {
    NULL
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1032 "bitmap.c"
static const MR_Integer mercury__bitmap__bitmap__functor_number_map_bitmap_error_0[1] = {
  (MR_Integer) 0
};

#line 1037 "bitmap.c"
static const MR_NotagFunctorDesc mercury__bitmap__bitmap__notag_functor_desc_bitmap_error_0 = {
  (MR_String) "bitmap_error",
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  NULL
};

#line 1044 "bitmap.c"
const MR_TypeCtorInfo_Struct mercury__bitmap__bitmap__type_ctor_info_bitmap_error_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (mercury__bitmap____Unify____bitmap_error_0_0_10001)),
  ((MR_Box) (mercury__bitmap____Compare____bitmap_error_0_0_10001)),
  (MR_String) "bitmap",
  (MR_String) "bitmap_error",
  {
    &mercury__bitmap__bitmap__notag_functor_desc_bitmap_error_0
  },
  {
    &mercury__bitmap__bitmap__notag_functor_desc_bitmap_error_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mercury__bitmap__bitmap__functor_number_map_bitmap_error_0
};

#line 1065 "bitmap.c"
const MR_TypeCtorInfo_Struct mercury__bitmap__bitmap__type_ctor_info_byte_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mercury__bitmap____Unify____byte_0_0_10001)),
  ((MR_Box) (mercury__bitmap____Compare____byte_0_0_10001)),
  (MR_String) "bitmap",
  (MR_String) "byte",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1086 "bitmap.c"
const MR_TypeCtorInfo_Struct mercury__bitmap__bitmap__type_ctor_info_byte_index_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mercury__bitmap____Unify____byte_index_0_0_10001)),
  ((MR_Box) (mercury__bitmap____Compare____byte_index_0_0_10001)),
  (MR_String) "bitmap",
  (MR_String) "byte_index",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1107 "bitmap.c"
static const MR_EnumFunctorDesc mercury__bitmap__bitmap__enum_functor_desc_copy_direction_0_0 = {
  (MR_String) "left_to_right",
  (MR_Integer) 0
};

#line 1113 "bitmap.c"
static const MR_EnumFunctorDesc mercury__bitmap__bitmap__enum_functor_desc_copy_direction_0_1 = {
  (MR_String) "right_to_left",
  (MR_Integer) 1
};

#line 1119 "bitmap.c"
static const MR_EnumFunctorDescPtr mercury__bitmap__bitmap__enum_value_ordered_copy_direction_0[2] = {
  &mercury__bitmap__bitmap__enum_functor_desc_copy_direction_0_0,
  &mercury__bitmap__bitmap__enum_functor_desc_copy_direction_0_1
};

#line 1125 "bitmap.c"
static const MR_EnumFunctorDescPtr mercury__bitmap__bitmap__enum_name_ordered_copy_direction_0[2] = {
  &mercury__bitmap__bitmap__enum_functor_desc_copy_direction_0_0,
  &mercury__bitmap__bitmap__enum_functor_desc_copy_direction_0_1
};

#line 1131 "bitmap.c"
static const MR_Integer mercury__bitmap__bitmap__functor_number_map_copy_direction_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1137 "bitmap.c"
const MR_TypeCtorInfo_Struct mercury__bitmap__bitmap__type_ctor_info_copy_direction_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mercury__bitmap____Unify____copy_direction_0_0_10001)),
  ((MR_Box) (mercury__bitmap____Compare____copy_direction_0_0_10001)),
  (MR_String) "bitmap",
  (MR_String) "copy_direction",
  {
    mercury__bitmap__bitmap__enum_name_ordered_copy_direction_0
  },
  {
    mercury__bitmap__bitmap__enum_value_ordered_copy_direction_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mercury__bitmap__bitmap__functor_number_map_copy_direction_0
};

#line 1158 "bitmap.c"
const MR_TypeCtorInfo_Struct mercury__bitmap__bitmap__type_ctor_info_num_bits_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mercury__bitmap____Unify____num_bits_0_0_10001)),
  ((MR_Box) (mercury__bitmap____Compare____num_bits_0_0_10001)),
  (MR_String) "bitmap",
  (MR_String) "num_bits",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1179 "bitmap.c"
const MR_TypeCtorInfo_Struct mercury__bitmap__bitmap__type_ctor_info_num_bytes_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mercury__bitmap____Unify____num_bytes_0_0_10001)),
  ((MR_Box) (mercury__bitmap____Compare____num_bytes_0_0_10001)),
  (MR_String) "bitmap",
  (MR_String) "num_bytes",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1200 "bitmap.c"
static const MR_PseudoTypeInfo mercury__bitmap__bitmap__field_types_slice_0_0[3] = {
  (MR_PseudoTypeInfo) &mercury__bitmap__bitmap__type_ctor_info_bitmap_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1207 "bitmap.c"
static const MR_ConstString mercury__bitmap__bitmap__field_names_slice_0_0[3] = {
  (MR_String) "slice_bitmap_field",
  (MR_String) "slice_start_bit_index_field",
  (MR_String) "slice_num_bits_field"
};

#line 1214 "bitmap.c"
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
  NULL
};

#line 1229 "bitmap.c"
static const MR_DuFunctorDescPtr mercury__bitmap__bitmap__du_stag_ordered_slice_0_0[1] = {
  &mercury__bitmap__bitmap__du_functor_desc_slice_0_0
};

#line 1234 "bitmap.c"
static const MR_DuPtagLayout mercury__bitmap__bitmap__du_ptag_ordered_slice_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__bitmap__bitmap__du_stag_ordered_slice_0_0
  }
};

#line 1243 "bitmap.c"
static const MR_DuFunctorDescPtr mercury__bitmap__bitmap__du_name_ordered_slice_0[1] = {
  &mercury__bitmap__bitmap__du_functor_desc_slice_0_0
};

#line 1248 "bitmap.c"
static const MR_Integer mercury__bitmap__bitmap__functor_number_map_slice_0[1] = {
  (MR_Integer) 0
};

#line 1253 "bitmap.c"
const MR_TypeCtorInfo_Struct mercury__bitmap__bitmap__type_ctor_info_slice_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__bitmap____Unify____slice_0_0_10001)),
  ((MR_Box) (mercury__bitmap____Compare____slice_0_0_10001)),
  (MR_String) "bitmap",
  (MR_String) "slice",
  {
    mercury__bitmap__bitmap__du_name_ordered_slice_0
  },
  {
    mercury__bitmap__bitmap__du_ptag_ordered_slice_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mercury__bitmap__bitmap__functor_number_map_slice_0
};

#line 1274 "bitmap.c"
const MR_TypeCtorInfo_Struct mercury__bitmap__bitmap__type_ctor_info_word_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mercury__bitmap____Unify____word_0_0_10001)),
  ((MR_Box) (mercury__bitmap____Compare____word_0_0_10001)),
  (MR_String) "bitmap",
  (MR_String) "word",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1295 "bitmap.c"
static MR_bool MR_CALL 
mercury__bitmap____Unify____bit_index_0_0_10001(
#line 1298 "bitmap.c"
  MR_Box mercury__bitmap__wrapper_arg_1,
#line 1300 "bitmap.c"
  MR_Box mercury__bitmap__wrapper_arg_2)
#line 1302 "bitmap.c"
{
#line 1304 "bitmap.c"
  {
#line 1306 "bitmap.c"
    MR_bool mercury__bitmap__succeeded;

#line 1309 "bitmap.c"
    {
#line 1311 "bitmap.c"
      mercury__bitmap__succeeded = mercury__bitmap____Unify____bit_index_0_0(((MR_Integer) mercury__bitmap__wrapper_arg_1), ((MR_Integer) mercury__bitmap__wrapper_arg_2));
    }
#line 1314 "bitmap.c"
    return mercury__bitmap__succeeded;
#line 1316 "bitmap.c"
  }
#line 1318 "bitmap.c"
}

#line 1321 "bitmap.c"
static void MR_CALL 
mercury__bitmap____Compare____bit_index_0_0_10001(
#line 1324 "bitmap.c"
  MR_Box * mercury__bitmap__wrapper_arg_1,
#line 1326 "bitmap.c"
  MR_Box mercury__bitmap__wrapper_arg_2,
#line 1328 "bitmap.c"
  MR_Box mercury__bitmap__wrapper_arg_3)
#line 1330 "bitmap.c"
{
#line 1332 "bitmap.c"
  {
#line 1334 "bitmap.c"
    MR_Word mercury__bitmap__conv0_HeadVar__1_1;

#line 1337 "bitmap.c"
    {
#line 1339 "bitmap.c"
      mercury__bitmap____Compare____bit_index_0_0(&mercury__bitmap__conv0_HeadVar__1_1, ((MR_Integer) mercury__bitmap__wrapper_arg_2), ((MR_Integer) mercury__bitmap__wrapper_arg_3));
    }
#line 1342 "bitmap.c"
    *mercury__bitmap__wrapper_arg_1 = ((MR_Box) (mercury__bitmap__conv0_HeadVar__1_1));
#line 1344 "bitmap.c"
  }
#line 1346 "bitmap.c"
}

#line 1349 "bitmap.c"
static MR_bool MR_CALL 
mercury__bitmap____Unify____bit_index_in_byte_0_0_10001(
#line 1352 "bitmap.c"
  MR_Box mercury__bitmap__wrapper_arg_1,
#line 1354 "bitmap.c"
  MR_Box mercury__bitmap__wrapper_arg_2)
#line 1356 "bitmap.c"
{
#line 1358 "bitmap.c"
  {
#line 1360 "bitmap.c"
    MR_bool mercury__bitmap__succeeded;

#line 1363 "bitmap.c"
    {
#line 1365 "bitmap.c"
      mercury__bitmap__succeeded = mercury__bitmap____Unify____bit_index_in_byte_0_0(((MR_Integer) mercury__bitmap__wrapper_arg_1), ((MR_Integer) mercury__bitmap__wrapper_arg_2));
    }
#line 1368 "bitmap.c"
    return mercury__bitmap__succeeded;
#line 1370 "bitmap.c"
  }
#line 1372 "bitmap.c"
}

#line 1375 "bitmap.c"
static void MR_CALL 
mercury__bitmap____Compare____bit_index_in_byte_0_0_10001(
#line 1378 "bitmap.c"
  MR_Box * mercury__bitmap__wrapper_arg_1,
#line 1380 "bitmap.c"
  MR_Box mercury__bitmap__wrapper_arg_2,
#line 1382 "bitmap.c"
  MR_Box mercury__bitmap__wrapper_arg_3)
#line 1384 "bitmap.c"
{
#line 1386 "bitmap.c"
  {
#line 1388 "bitmap.c"
    MR_Word mercury__bitmap__conv0_HeadVar__1_1;

#line 1391 "bitmap.c"
    {
#line 1393 "bitmap.c"
      mercury__bitmap____Compare____bit_index_in_byte_0_0(&mercury__bitmap__conv0_HeadVar__1_1, ((MR_Integer) mercury__bitmap__wrapper_arg_2), ((MR_Integer) mercury__bitmap__wrapper_arg_3));
    }
#line 1396 "bitmap.c"
    *mercury__bitmap__wrapper_arg_1 = ((MR_Box) (mercury__bitmap__conv0_HeadVar__1_1));
#line 1398 "bitmap.c"
  }
#line 1400 "bitmap.c"
}

#line 1403 "bitmap.c"
static MR_bool MR_CALL 
mercury__bitmap____Unify____bitmap_0_0_10001(
#line 1406 "bitmap.c"
  MR_Box mercury__bitmap__wrapper_arg_1,
#line 1408 "bitmap.c"
  MR_Box mercury__bitmap__wrapper_arg_2)
#line 1410 "bitmap.c"
{
#line 1412 "bitmap.c"
  {
#line 1414 "bitmap.c"
    MR_bool mercury__bitmap__succeeded;

#line 1417 "bitmap.c"
    {
#line 1419 "bitmap.c"
      mercury__bitmap__succeeded = mercury__bitmap____Unify____bitmap_0_0(((MR_Box) mercury__bitmap__wrapper_arg_1), ((MR_Box) mercury__bitmap__wrapper_arg_2));
    }
#line 1422 "bitmap.c"
    return mercury__bitmap__succeeded;
#line 1424 "bitmap.c"
  }
#line 1426 "bitmap.c"
}

#line 1429 "bitmap.c"
static void MR_CALL 
mercury__bitmap____Compare____bitmap_0_0_10001(
#line 1432 "bitmap.c"
  MR_Box * mercury__bitmap__wrapper_arg_1,
#line 1434 "bitmap.c"
  MR_Box mercury__bitmap__wrapper_arg_2,
#line 1436 "bitmap.c"
  MR_Box mercury__bitmap__wrapper_arg_3)
#line 1438 "bitmap.c"
{
#line 1440 "bitmap.c"
  {
#line 1442 "bitmap.c"
    MR_Word mercury__bitmap__conv0_HeadVar__1_1;

#line 1445 "bitmap.c"
    {
#line 1447 "bitmap.c"
      mercury__bitmap____Compare____bitmap_0_0(&mercury__bitmap__conv0_HeadVar__1_1, ((MR_Box) mercury__bitmap__wrapper_arg_2), ((MR_Box) mercury__bitmap__wrapper_arg_3));
    }
#line 1450 "bitmap.c"
    *mercury__bitmap__wrapper_arg_1 = ((MR_Box) (mercury__bitmap__conv0_HeadVar__1_1));
#line 1452 "bitmap.c"
  }
#line 1454 "bitmap.c"
}

#line 1457 "bitmap.c"
static MR_bool MR_CALL 
mercury__bitmap____Unify____bitmap_error_0_0_10001(
#line 1460 "bitmap.c"
  MR_Box mercury__bitmap__wrapper_arg_1,
#line 1462 "bitmap.c"
  MR_Box mercury__bitmap__wrapper_arg_2)
#line 1464 "bitmap.c"
{
#line 1466 "bitmap.c"
  {
#line 1468 "bitmap.c"
    MR_bool mercury__bitmap__succeeded;

#line 1471 "bitmap.c"
    {
#line 1473 "bitmap.c"
      mercury__bitmap__succeeded = mercury__bitmap____Unify____bitmap_error_0_0(((MR_Word) mercury__bitmap__wrapper_arg_1), ((MR_Word) mercury__bitmap__wrapper_arg_2));
    }
#line 1476 "bitmap.c"
    return mercury__bitmap__succeeded;
#line 1478 "bitmap.c"
  }
#line 1480 "bitmap.c"
}

#line 1483 "bitmap.c"
static void MR_CALL 
mercury__bitmap____Compare____bitmap_error_0_0_10001(
#line 1486 "bitmap.c"
  MR_Box * mercury__bitmap__wrapper_arg_1,
#line 1488 "bitmap.c"
  MR_Box mercury__bitmap__wrapper_arg_2,
#line 1490 "bitmap.c"
  MR_Box mercury__bitmap__wrapper_arg_3)
#line 1492 "bitmap.c"
{
#line 1494 "bitmap.c"
  {
#line 1496 "bitmap.c"
    MR_Word mercury__bitmap__conv0_HeadVar__1_1;

#line 1499 "bitmap.c"
    {
#line 1501 "bitmap.c"
      mercury__bitmap____Compare____bitmap_error_0_0(&mercury__bitmap__conv0_HeadVar__1_1, ((MR_Word) mercury__bitmap__wrapper_arg_2), ((MR_Word) mercury__bitmap__wrapper_arg_3));
    }
#line 1504 "bitmap.c"
    *mercury__bitmap__wrapper_arg_1 = ((MR_Box) (mercury__bitmap__conv0_HeadVar__1_1));
#line 1506 "bitmap.c"
  }
#line 1508 "bitmap.c"
}

#line 1511 "bitmap.c"
static MR_bool MR_CALL 
mercury__bitmap____Unify____byte_0_0_10001(
#line 1514 "bitmap.c"
  MR_Box mercury__bitmap__wrapper_arg_1,
#line 1516 "bitmap.c"
  MR_Box mercury__bitmap__wrapper_arg_2)
#line 1518 "bitmap.c"
{
#line 1520 "bitmap.c"
  {
#line 1522 "bitmap.c"
    MR_bool mercury__bitmap__succeeded;

#line 1525 "bitmap.c"
    {
#line 1527 "bitmap.c"
      mercury__bitmap__succeeded = mercury__bitmap____Unify____byte_0_0(((MR_Integer) mercury__bitmap__wrapper_arg_1), ((MR_Integer) mercury__bitmap__wrapper_arg_2));
    }
#line 1530 "bitmap.c"
    return mercury__bitmap__succeeded;
#line 1532 "bitmap.c"
  }
#line 1534 "bitmap.c"
}

#line 1537 "bitmap.c"
static void MR_CALL 
mercury__bitmap____Compare____byte_0_0_10001(
#line 1540 "bitmap.c"
  MR_Box * mercury__bitmap__wrapper_arg_1,
#line 1542 "bitmap.c"
  MR_Box mercury__bitmap__wrapper_arg_2,
#line 1544 "bitmap.c"
  MR_Box mercury__bitmap__wrapper_arg_3)
#line 1546 "bitmap.c"
{
#line 1548 "bitmap.c"
  {
#line 1550 "bitmap.c"
    MR_Word mercury__bitmap__conv0_HeadVar__1_1;

#line 1553 "bitmap.c"
    {
#line 1555 "bitmap.c"
      mercury__bitmap____Compare____byte_0_0(&mercury__bitmap__conv0_HeadVar__1_1, ((MR_Integer) mercury__bitmap__wrapper_arg_2), ((MR_Integer) mercury__bitmap__wrapper_arg_3));
    }
#line 1558 "bitmap.c"
    *mercury__bitmap__wrapper_arg_1 = ((MR_Box) (mercury__bitmap__conv0_HeadVar__1_1));
#line 1560 "bitmap.c"
  }
#line 1562 "bitmap.c"
}

#line 1565 "bitmap.c"
static MR_bool MR_CALL 
mercury__bitmap____Unify____byte_index_0_0_10001(
#line 1568 "bitmap.c"
  MR_Box mercury__bitmap__wrapper_arg_1,
#line 1570 "bitmap.c"
  MR_Box mercury__bitmap__wrapper_arg_2)
#line 1572 "bitmap.c"
{
#line 1574 "bitmap.c"
  {
#line 1576 "bitmap.c"
    MR_bool mercury__bitmap__succeeded;

#line 1579 "bitmap.c"
    {
#line 1581 "bitmap.c"
      mercury__bitmap__succeeded = mercury__bitmap____Unify____byte_index_0_0(((MR_Integer) mercury__bitmap__wrapper_arg_1), ((MR_Integer) mercury__bitmap__wrapper_arg_2));
    }
#line 1584 "bitmap.c"
    return mercury__bitmap__succeeded;
#line 1586 "bitmap.c"
  }
#line 1588 "bitmap.c"
}

#line 1591 "bitmap.c"
static void MR_CALL 
mercury__bitmap____Compare____byte_index_0_0_10001(
#line 1594 "bitmap.c"
  MR_Box * mercury__bitmap__wrapper_arg_1,
#line 1596 "bitmap.c"
  MR_Box mercury__bitmap__wrapper_arg_2,
#line 1598 "bitmap.c"
  MR_Box mercury__bitmap__wrapper_arg_3)
#line 1600 "bitmap.c"
{
#line 1602 "bitmap.c"
  {
#line 1604 "bitmap.c"
    MR_Word mercury__bitmap__conv0_HeadVar__1_1;

#line 1607 "bitmap.c"
    {
#line 1609 "bitmap.c"
      mercury__bitmap____Compare____byte_index_0_0(&mercury__bitmap__conv0_HeadVar__1_1, ((MR_Integer) mercury__bitmap__wrapper_arg_2), ((MR_Integer) mercury__bitmap__wrapper_arg_3));
    }
#line 1612 "bitmap.c"
    *mercury__bitmap__wrapper_arg_1 = ((MR_Box) (mercury__bitmap__conv0_HeadVar__1_1));
#line 1614 "bitmap.c"
  }
#line 1616 "bitmap.c"
}

#line 1619 "bitmap.c"
static MR_bool MR_CALL 
mercury__bitmap____Unify____copy_direction_0_0_10001(
#line 1622 "bitmap.c"
  MR_Box mercury__bitmap__wrapper_arg_1,
#line 1624 "bitmap.c"
  MR_Box mercury__bitmap__wrapper_arg_2)
#line 1626 "bitmap.c"
{
#line 1628 "bitmap.c"
  {
#line 1630 "bitmap.c"
    MR_bool mercury__bitmap__succeeded;

#line 1633 "bitmap.c"
    {
#line 1635 "bitmap.c"
      mercury__bitmap__succeeded = mercury__bitmap____Unify____copy_direction_0_0(((MR_Word) mercury__bitmap__wrapper_arg_1), ((MR_Word) mercury__bitmap__wrapper_arg_2));
    }
#line 1638 "bitmap.c"
    return mercury__bitmap__succeeded;
#line 1640 "bitmap.c"
  }
#line 1642 "bitmap.c"
}

#line 1645 "bitmap.c"
static void MR_CALL 
mercury__bitmap____Compare____copy_direction_0_0_10001(
#line 1648 "bitmap.c"
  MR_Box * mercury__bitmap__wrapper_arg_1,
#line 1650 "bitmap.c"
  MR_Box mercury__bitmap__wrapper_arg_2,
#line 1652 "bitmap.c"
  MR_Box mercury__bitmap__wrapper_arg_3)
#line 1654 "bitmap.c"
{
#line 1656 "bitmap.c"
  {
#line 1658 "bitmap.c"
    MR_Word mercury__bitmap__conv0_HeadVar__1_1;

#line 1661 "bitmap.c"
    {
#line 1663 "bitmap.c"
      mercury__bitmap____Compare____copy_direction_0_0(&mercury__bitmap__conv0_HeadVar__1_1, ((MR_Word) mercury__bitmap__wrapper_arg_2), ((MR_Word) mercury__bitmap__wrapper_arg_3));
    }
#line 1666 "bitmap.c"
    *mercury__bitmap__wrapper_arg_1 = ((MR_Box) (mercury__bitmap__conv0_HeadVar__1_1));
#line 1668 "bitmap.c"
  }
#line 1670 "bitmap.c"
}

#line 1673 "bitmap.c"
static MR_bool MR_CALL 
mercury__bitmap____Unify____num_bits_0_0_10001(
#line 1676 "bitmap.c"
  MR_Box mercury__bitmap__wrapper_arg_1,
#line 1678 "bitmap.c"
  MR_Box mercury__bitmap__wrapper_arg_2)
#line 1680 "bitmap.c"
{
#line 1682 "bitmap.c"
  {
#line 1684 "bitmap.c"
    MR_bool mercury__bitmap__succeeded;

#line 1687 "bitmap.c"
    {
#line 1689 "bitmap.c"
      mercury__bitmap__succeeded = mercury__bitmap____Unify____num_bits_0_0(((MR_Integer) mercury__bitmap__wrapper_arg_1), ((MR_Integer) mercury__bitmap__wrapper_arg_2));
    }
#line 1692 "bitmap.c"
    return mercury__bitmap__succeeded;
#line 1694 "bitmap.c"
  }
#line 1696 "bitmap.c"
}

#line 1699 "bitmap.c"
static void MR_CALL 
mercury__bitmap____Compare____num_bits_0_0_10001(
#line 1702 "bitmap.c"
  MR_Box * mercury__bitmap__wrapper_arg_1,
#line 1704 "bitmap.c"
  MR_Box mercury__bitmap__wrapper_arg_2,
#line 1706 "bitmap.c"
  MR_Box mercury__bitmap__wrapper_arg_3)
#line 1708 "bitmap.c"
{
#line 1710 "bitmap.c"
  {
#line 1712 "bitmap.c"
    MR_Word mercury__bitmap__conv0_HeadVar__1_1;

#line 1715 "bitmap.c"
    {
#line 1717 "bitmap.c"
      mercury__bitmap____Compare____num_bits_0_0(&mercury__bitmap__conv0_HeadVar__1_1, ((MR_Integer) mercury__bitmap__wrapper_arg_2), ((MR_Integer) mercury__bitmap__wrapper_arg_3));
    }
#line 1720 "bitmap.c"
    *mercury__bitmap__wrapper_arg_1 = ((MR_Box) (mercury__bitmap__conv0_HeadVar__1_1));
#line 1722 "bitmap.c"
  }
#line 1724 "bitmap.c"
}

#line 1727 "bitmap.c"
static MR_bool MR_CALL 
mercury__bitmap____Unify____num_bytes_0_0_10001(
#line 1730 "bitmap.c"
  MR_Box mercury__bitmap__wrapper_arg_1,
#line 1732 "bitmap.c"
  MR_Box mercury__bitmap__wrapper_arg_2)
#line 1734 "bitmap.c"
{
#line 1736 "bitmap.c"
  {
#line 1738 "bitmap.c"
    MR_bool mercury__bitmap__succeeded;

#line 1741 "bitmap.c"
    {
#line 1743 "bitmap.c"
      mercury__bitmap__succeeded = mercury__bitmap____Unify____num_bytes_0_0(((MR_Integer) mercury__bitmap__wrapper_arg_1), ((MR_Integer) mercury__bitmap__wrapper_arg_2));
    }
#line 1746 "bitmap.c"
    return mercury__bitmap__succeeded;
#line 1748 "bitmap.c"
  }
#line 1750 "bitmap.c"
}

#line 1753 "bitmap.c"
static void MR_CALL 
mercury__bitmap____Compare____num_bytes_0_0_10001(
#line 1756 "bitmap.c"
  MR_Box * mercury__bitmap__wrapper_arg_1,
#line 1758 "bitmap.c"
  MR_Box mercury__bitmap__wrapper_arg_2,
#line 1760 "bitmap.c"
  MR_Box mercury__bitmap__wrapper_arg_3)
#line 1762 "bitmap.c"
{
#line 1764 "bitmap.c"
  {
#line 1766 "bitmap.c"
    MR_Word mercury__bitmap__conv0_HeadVar__1_1;

#line 1769 "bitmap.c"
    {
#line 1771 "bitmap.c"
      mercury__bitmap____Compare____num_bytes_0_0(&mercury__bitmap__conv0_HeadVar__1_1, ((MR_Integer) mercury__bitmap__wrapper_arg_2), ((MR_Integer) mercury__bitmap__wrapper_arg_3));
    }
#line 1774 "bitmap.c"
    *mercury__bitmap__wrapper_arg_1 = ((MR_Box) (mercury__bitmap__conv0_HeadVar__1_1));
#line 1776 "bitmap.c"
  }
#line 1778 "bitmap.c"
}

#line 1781 "bitmap.c"
static MR_bool MR_CALL 
mercury__bitmap____Unify____slice_0_0_10001(
#line 1784 "bitmap.c"
  MR_Box mercury__bitmap__wrapper_arg_1,
#line 1786 "bitmap.c"
  MR_Box mercury__bitmap__wrapper_arg_2)
#line 1788 "bitmap.c"
{
#line 1790 "bitmap.c"
  {
#line 1792 "bitmap.c"
    MR_bool mercury__bitmap__succeeded;

#line 1795 "bitmap.c"
    {
#line 1797 "bitmap.c"
      mercury__bitmap__succeeded = mercury__bitmap____Unify____slice_0_0(((MR_Word) mercury__bitmap__wrapper_arg_1), ((MR_Word) mercury__bitmap__wrapper_arg_2));
    }
#line 1800 "bitmap.c"
    return mercury__bitmap__succeeded;
#line 1802 "bitmap.c"
  }
#line 1804 "bitmap.c"
}

#line 1807 "bitmap.c"
static void MR_CALL 
mercury__bitmap____Compare____slice_0_0_10001(
#line 1810 "bitmap.c"
  MR_Box * mercury__bitmap__wrapper_arg_1,
#line 1812 "bitmap.c"
  MR_Box mercury__bitmap__wrapper_arg_2,
#line 1814 "bitmap.c"
  MR_Box mercury__bitmap__wrapper_arg_3)
#line 1816 "bitmap.c"
{
#line 1818 "bitmap.c"
  {
#line 1820 "bitmap.c"
    MR_Word mercury__bitmap__conv0_HeadVar__1_1;

#line 1823 "bitmap.c"
    {
#line 1825 "bitmap.c"
      mercury__bitmap____Compare____slice_0_0(&mercury__bitmap__conv0_HeadVar__1_1, ((MR_Word) mercury__bitmap__wrapper_arg_2), ((MR_Word) mercury__bitmap__wrapper_arg_3));
    }
#line 1828 "bitmap.c"
    *mercury__bitmap__wrapper_arg_1 = ((MR_Box) (mercury__bitmap__conv0_HeadVar__1_1));
#line 1830 "bitmap.c"
  }
#line 1832 "bitmap.c"
}

#line 1835 "bitmap.c"
static MR_bool MR_CALL 
mercury__bitmap____Unify____word_0_0_10001(
#line 1838 "bitmap.c"
  MR_Box mercury__bitmap__wrapper_arg_1,
#line 1840 "bitmap.c"
  MR_Box mercury__bitmap__wrapper_arg_2)
#line 1842 "bitmap.c"
{
#line 1844 "bitmap.c"
  {
#line 1846 "bitmap.c"
    MR_bool mercury__bitmap__succeeded;

#line 1849 "bitmap.c"
    {
#line 1851 "bitmap.c"
      mercury__bitmap__succeeded = mercury__bitmap____Unify____word_0_0(((MR_Integer) mercury__bitmap__wrapper_arg_1), ((MR_Integer) mercury__bitmap__wrapper_arg_2));
    }
#line 1854 "bitmap.c"
    return mercury__bitmap__succeeded;
#line 1856 "bitmap.c"
  }
#line 1858 "bitmap.c"
}

#line 1861 "bitmap.c"
static void MR_CALL 
mercury__bitmap____Compare____word_0_0_10001(
#line 1864 "bitmap.c"
  MR_Box * mercury__bitmap__wrapper_arg_1,
#line 1866 "bitmap.c"
  MR_Box mercury__bitmap__wrapper_arg_2,
#line 1868 "bitmap.c"
  MR_Box mercury__bitmap__wrapper_arg_3)
#line 1870 "bitmap.c"
{
#line 1872 "bitmap.c"
  {
#line 1874 "bitmap.c"
    MR_Word mercury__bitmap__conv0_HeadVar__1_1;

#line 1877 "bitmap.c"
    {
#line 1879 "bitmap.c"
      mercury__bitmap____Compare____word_0_0(&mercury__bitmap__conv0_HeadVar__1_1, ((MR_Integer) mercury__bitmap__wrapper_arg_2), ((MR_Integer) mercury__bitmap__wrapper_arg_3));
    }
#line 1882 "bitmap.c"
    *mercury__bitmap__wrapper_arg_1 = ((MR_Box) (mercury__bitmap__conv0_HeadVar__1_1));
#line 1884 "bitmap.c"
  }
#line 1886 "bitmap.c"
}

#line 13 "ops.opt"
static MR_Integer MR_CALL 
mercury__bitmap__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
#line 13 "ops.opt"
{
#line 38 "ops.opt"
  {
#line 38 "ops.opt"
    MR_bool mercury__bitmap__succeeded;

#line 38 "ops.opt"
    return (MR_Integer) 1200;
#line 38 "ops.opt"
  }
#line 13 "ops.opt"
}

#line 130 "list.int"
static void MR_CALL 
mercury__bitmap__foldl__ho16_4_p_in__list_0(
#line 130 "list.int"
  MR_Word mercury__bitmap__HeadVar__2_2,
#line 130 "list.int"
  MR_Integer mercury__bitmap__HeadVar__3_3,
#line 130 "list.int"
  MR_Integer * mercury__bitmap__HeadVar__4_4)
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
        MR_bool mercury__bitmap__succeeded;

#line 332 "list.opt"
        if ((mercury__bitmap__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 332 "list.opt"
          *mercury__bitmap__HeadVar__4_4 = mercury__bitmap__HeadVar__3_3;
#line 332 "list.opt"
        else
#line 334 "list.opt"
          {
#line 334 "list.opt"
            MR_Box mercury__bitmap__H_10_9 = ((MR_Box) (MR_hl_field(MR_mktag(1), mercury__bitmap__HeadVar__2_2, (MR_Integer) 0)));
#line 334 "list.opt"
            MR_Word mercury__bitmap__T_11_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bitmap__HeadVar__2_2, (MR_Integer) 1)));
#line 334 "list.opt"
            MR_Integer mercury__bitmap__STATE_VARIABLE_A_15_15_13;
#line 334 "list.opt"
            MR_Integer mercury__bitmap__V_53_53;

#line 1813 "bitmap.m"
{
#define MR_PROC_LABEL mercury__bitmap__foldl__ho16_4_p_in__list_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr) mercury__bitmap__H_10_9 ;
		{
#line 1813 "bitmap.m"

    NumBits = BM->num_bits;

#line 1958 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__V_53_53  = NumBits;
#line 1813 "bitmap.m"
}
#line 915 "bitmap.m"
            mercury__bitmap__STATE_VARIABLE_A_15_15_13 = (mercury__bitmap__HeadVar__3_3 + mercury__bitmap__V_53_53);
#line 336 "list.opt"
            /* direct tailcall eliminated */
#line 336 "list.opt"
            {
#line 336 "list.opt"
              MR_Word mercury__bitmap__HeadVar__2__tmp_copy_2 = mercury__bitmap__T_11_10;
#line 336 "list.opt"
              MR_Integer mercury__bitmap__HeadVar__3__tmp_copy_3 = mercury__bitmap__STATE_VARIABLE_A_15_15_13;

#line 336 "list.opt"
              mercury__bitmap__HeadVar__3_3 = mercury__bitmap__HeadVar__3__tmp_copy_3;
#line 336 "list.opt"
              mercury__bitmap__HeadVar__2_2 = mercury__bitmap__HeadVar__2__tmp_copy_2;
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

#line 899 "bitmap.m"
static MR_Box MR_CALL 
mercury__bitmap__zip2__ho15_4_f_0(
#line 899 "bitmap.m"
  MR_Integer mercury__bitmap__I_6,
#line 899 "bitmap.m"
  MR_Box mercury__bitmap__BMa_8,
#line 899 "bitmap.m"
  MR_Box mercury__bitmap__BMb_9)
#line 899 "bitmap.m"
{
#line 908 "bitmap.m"
  while (MR_TRUE)
#line 908 "bitmap.m"
    {
#line 908 "bitmap.m"
      /* tailcall optimized into a loop */
#line 908 "bitmap.m"
      {
#line 908 "bitmap.m"
        MR_bool mercury__bitmap__succeeded = (mercury__bitmap__I_6 >= (MR_Integer) 0);
#line 908 "bitmap.m"
        MR_Box mercury__bitmap__BM_10;

#line 908 "bitmap.m"
        if (mercury__bitmap__succeeded)
#line 904 "bitmap.m"
          {
#line 904 "bitmap.m"
            MR_Integer mercury__bitmap__Xa_11;
#line 904 "bitmap.m"
            MR_Integer mercury__bitmap__Xb_12;
#line 904 "bitmap.m"
            MR_Box mercury__bitmap__BMc_13;
#line 904 "bitmap.m"
            MR_Integer mercury__bitmap__V_15_15;
#line 904 "bitmap.m"
            MR_Integer mercury__bitmap__V_16_16;

#line 1887 "bitmap.m"
{
#define MR_PROC_LABEL mercury__bitmap__zip2__ho15_4_f_0

	MR_Integer N;
	MR_BitmapPtr BM;
	MR_Integer Byte;

	N =  mercury__bitmap__I_6 ;
	BM = (MR_BitmapPtr) mercury__bitmap__BMa_8 ;
		{
#line 1887 "bitmap.m"

    Byte = (MR_Integer) BM->elements[N];

#line 2049 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__Xa_11  = Byte;
#line 1887 "bitmap.m"
}
#line 1887 "bitmap.m"
{
#define MR_PROC_LABEL mercury__bitmap__zip2__ho15_4_f_0

	MR_Integer N;
	MR_BitmapPtr BM;
	MR_Integer Byte;

	N =  mercury__bitmap__I_6 ;
	BM = (MR_BitmapPtr) mercury__bitmap__BMb_9 ;
		{
#line 1887 "bitmap.m"

    Byte = (MR_Integer) BM->elements[N];

#line 2071 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__Xb_12  = Byte;
#line 1887 "bitmap.m"
}
#line 906 "bitmap.m"
            mercury__bitmap__V_15_15 = (mercury__bitmap__Xa_11 ^ mercury__bitmap__Xb_12);
#line 1928 "bitmap.m"
{
#define MR_PROC_LABEL mercury__bitmap__zip2__ho15_4_f_0

	MR_Integer N;
	MR_BitmapPtr BM0;
	MR_Integer Byte;
	MR_BitmapPtr BM;

	N =  mercury__bitmap__I_6 ;
	BM0 = (MR_BitmapPtr) mercury__bitmap__BMb_9 ;
	Byte =  mercury__bitmap__V_15_15 ;
		{
#line 1928 "bitmap.m"

    BM = BM0;
    BM->elements[N] = (MR_uint_least8_t) Byte;

#line 2098 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__BMc_13  = (MR_Box) BM;
#line 1928 "bitmap.m"
}
#line 907 "bitmap.m"
            mercury__bitmap__V_16_16 = (mercury__bitmap__I_6 - (MR_Integer) 1);
#line 907 "bitmap.m"
            /* direct tailcall eliminated */
#line 907 "bitmap.m"
            {
#line 907 "bitmap.m"
              MR_Integer mercury__bitmap__I__tmp_copy_6 = mercury__bitmap__V_16_16;
#line 907 "bitmap.m"
              MR_Box mercury__bitmap__BMb__tmp_copy_9 = mercury__bitmap__BMc_13;

#line 907 "bitmap.m"
              mercury__bitmap__BMb_9 = mercury__bitmap__BMb__tmp_copy_9;
#line 907 "bitmap.m"
              mercury__bitmap__I_6 = mercury__bitmap__I__tmp_copy_6;
#line 907 "bitmap.m"
            }
#line 907 "bitmap.m"
            continue;
#line 904 "bitmap.m"
          }
#line 908 "bitmap.m"
        else
#line 909 "bitmap.m"
          mercury__bitmap__BM_10 = mercury__bitmap__BMb_9;
#line 908 "bitmap.m"
        return mercury__bitmap__BM_10;
#line 908 "bitmap.m"
      }
#line 908 "bitmap.m"
      break;
#line 908 "bitmap.m"
    }
#line 899 "bitmap.m"
}

#line 899 "bitmap.m"
static MR_Box MR_CALL 
mercury__bitmap__zip2__ho14_4_f_0(
#line 899 "bitmap.m"
  MR_Integer mercury__bitmap__I_6,
#line 899 "bitmap.m"
  MR_Box mercury__bitmap__BMa_8,
#line 899 "bitmap.m"
  MR_Box mercury__bitmap__BMb_9)
#line 899 "bitmap.m"
{
#line 908 "bitmap.m"
  while (MR_TRUE)
#line 908 "bitmap.m"
    {
#line 908 "bitmap.m"
      /* tailcall optimized into a loop */
#line 908 "bitmap.m"
      {
#line 908 "bitmap.m"
        MR_bool mercury__bitmap__succeeded = (mercury__bitmap__I_6 >= (MR_Integer) 0);
#line 908 "bitmap.m"
        MR_Box mercury__bitmap__BM_10;

#line 908 "bitmap.m"
        if (mercury__bitmap__succeeded)
#line 904 "bitmap.m"
          {
#line 904 "bitmap.m"
            MR_Integer mercury__bitmap__Xa_11;
#line 904 "bitmap.m"
            MR_Integer mercury__bitmap__Xb_12;
#line 904 "bitmap.m"
            MR_Box mercury__bitmap__BMc_13;
#line 904 "bitmap.m"
            MR_Integer mercury__bitmap__V_15_15;
#line 904 "bitmap.m"
            MR_Integer mercury__bitmap__V_16_16;
#line 904 "bitmap.m"
            MR_Integer mercury__bitmap__V_35_35;

#line 1887 "bitmap.m"
{
#define MR_PROC_LABEL mercury__bitmap__zip2__ho14_4_f_0

	MR_Integer N;
	MR_BitmapPtr BM;
	MR_Integer Byte;

	N =  mercury__bitmap__I_6 ;
	BM = (MR_BitmapPtr) mercury__bitmap__BMa_8 ;
		{
#line 1887 "bitmap.m"

    Byte = (MR_Integer) BM->elements[N];

#line 2197 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__Xa_11  = Byte;
#line 1887 "bitmap.m"
}
#line 1887 "bitmap.m"
{
#define MR_PROC_LABEL mercury__bitmap__zip2__ho14_4_f_0

	MR_Integer N;
	MR_BitmapPtr BM;
	MR_Integer Byte;

	N =  mercury__bitmap__I_6 ;
	BM = (MR_BitmapPtr) mercury__bitmap__BMb_9 ;
		{
#line 1887 "bitmap.m"

    Byte = (MR_Integer) BM->elements[N];

#line 2219 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__Xb_12  = Byte;
#line 1887 "bitmap.m"
}
#line 863 "bitmap.m"
            mercury__bitmap__V_35_35 = ~(mercury__bitmap__Xb_12);
#line 863 "bitmap.m"
            mercury__bitmap__V_15_15 = (mercury__bitmap__Xa_11 & mercury__bitmap__V_35_35);
#line 1928 "bitmap.m"
{
#define MR_PROC_LABEL mercury__bitmap__zip2__ho14_4_f_0

	MR_Integer N;
	MR_BitmapPtr BM0;
	MR_Integer Byte;
	MR_BitmapPtr BM;

	N =  mercury__bitmap__I_6 ;
	BM0 = (MR_BitmapPtr) mercury__bitmap__BMb_9 ;
	Byte =  mercury__bitmap__V_15_15 ;
		{
#line 1928 "bitmap.m"

    BM = BM0;
    BM->elements[N] = (MR_uint_least8_t) Byte;

#line 2248 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__BMc_13  = (MR_Box) BM;
#line 1928 "bitmap.m"
}
#line 907 "bitmap.m"
            mercury__bitmap__V_16_16 = (mercury__bitmap__I_6 - (MR_Integer) 1);
#line 907 "bitmap.m"
            /* direct tailcall eliminated */
#line 907 "bitmap.m"
            {
#line 907 "bitmap.m"
              MR_Integer mercury__bitmap__I__tmp_copy_6 = mercury__bitmap__V_16_16;
#line 907 "bitmap.m"
              MR_Box mercury__bitmap__BMb__tmp_copy_9 = mercury__bitmap__BMc_13;

#line 907 "bitmap.m"
              mercury__bitmap__BMb_9 = mercury__bitmap__BMb__tmp_copy_9;
#line 907 "bitmap.m"
              mercury__bitmap__I_6 = mercury__bitmap__I__tmp_copy_6;
#line 907 "bitmap.m"
            }
#line 907 "bitmap.m"
            continue;
#line 904 "bitmap.m"
          }
#line 908 "bitmap.m"
        else
#line 909 "bitmap.m"
          mercury__bitmap__BM_10 = mercury__bitmap__BMb_9;
#line 908 "bitmap.m"
        return mercury__bitmap__BM_10;
#line 908 "bitmap.m"
      }
#line 908 "bitmap.m"
      break;
#line 908 "bitmap.m"
    }
#line 899 "bitmap.m"
}

#line 899 "bitmap.m"
static MR_Box MR_CALL 
mercury__bitmap__zip2__ho13_4_f_0(
#line 899 "bitmap.m"
  MR_Integer mercury__bitmap__I_6,
#line 899 "bitmap.m"
  MR_Box mercury__bitmap__BMa_8,
#line 899 "bitmap.m"
  MR_Box mercury__bitmap__BMb_9)
#line 899 "bitmap.m"
{
#line 908 "bitmap.m"
  while (MR_TRUE)
#line 908 "bitmap.m"
    {
#line 908 "bitmap.m"
      /* tailcall optimized into a loop */
#line 908 "bitmap.m"
      {
#line 908 "bitmap.m"
        MR_bool mercury__bitmap__succeeded = (mercury__bitmap__I_6 >= (MR_Integer) 0);
#line 908 "bitmap.m"
        MR_Box mercury__bitmap__BM_10;

#line 908 "bitmap.m"
        if (mercury__bitmap__succeeded)
#line 904 "bitmap.m"
          {
#line 904 "bitmap.m"
            MR_Integer mercury__bitmap__Xa_11;
#line 904 "bitmap.m"
            MR_Integer mercury__bitmap__Xb_12;
#line 904 "bitmap.m"
            MR_Box mercury__bitmap__BMc_13;
#line 904 "bitmap.m"
            MR_Integer mercury__bitmap__V_15_15;
#line 904 "bitmap.m"
            MR_Integer mercury__bitmap__V_16_16;

#line 1887 "bitmap.m"
{
#define MR_PROC_LABEL mercury__bitmap__zip2__ho13_4_f_0

	MR_Integer N;
	MR_BitmapPtr BM;
	MR_Integer Byte;

	N =  mercury__bitmap__I_6 ;
	BM = (MR_BitmapPtr) mercury__bitmap__BMa_8 ;
		{
#line 1887 "bitmap.m"

    Byte = (MR_Integer) BM->elements[N];

#line 2345 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__Xa_11  = Byte;
#line 1887 "bitmap.m"
}
#line 1887 "bitmap.m"
{
#define MR_PROC_LABEL mercury__bitmap__zip2__ho13_4_f_0

	MR_Integer N;
	MR_BitmapPtr BM;
	MR_Integer Byte;

	N =  mercury__bitmap__I_6 ;
	BM = (MR_BitmapPtr) mercury__bitmap__BMb_9 ;
		{
#line 1887 "bitmap.m"

    Byte = (MR_Integer) BM->elements[N];

#line 2367 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__Xb_12  = Byte;
#line 1887 "bitmap.m"
}
#line 906 "bitmap.m"
            mercury__bitmap__V_15_15 = (mercury__bitmap__Xa_11 & mercury__bitmap__Xb_12);
#line 1928 "bitmap.m"
{
#define MR_PROC_LABEL mercury__bitmap__zip2__ho13_4_f_0

	MR_Integer N;
	MR_BitmapPtr BM0;
	MR_Integer Byte;
	MR_BitmapPtr BM;

	N =  mercury__bitmap__I_6 ;
	BM0 = (MR_BitmapPtr) mercury__bitmap__BMb_9 ;
	Byte =  mercury__bitmap__V_15_15 ;
		{
#line 1928 "bitmap.m"

    BM = BM0;
    BM->elements[N] = (MR_uint_least8_t) Byte;

#line 2394 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__BMc_13  = (MR_Box) BM;
#line 1928 "bitmap.m"
}
#line 907 "bitmap.m"
            mercury__bitmap__V_16_16 = (mercury__bitmap__I_6 - (MR_Integer) 1);
#line 907 "bitmap.m"
            /* direct tailcall eliminated */
#line 907 "bitmap.m"
            {
#line 907 "bitmap.m"
              MR_Integer mercury__bitmap__I__tmp_copy_6 = mercury__bitmap__V_16_16;
#line 907 "bitmap.m"
              MR_Box mercury__bitmap__BMb__tmp_copy_9 = mercury__bitmap__BMc_13;

#line 907 "bitmap.m"
              mercury__bitmap__BMb_9 = mercury__bitmap__BMb__tmp_copy_9;
#line 907 "bitmap.m"
              mercury__bitmap__I_6 = mercury__bitmap__I__tmp_copy_6;
#line 907 "bitmap.m"
            }
#line 907 "bitmap.m"
            continue;
#line 904 "bitmap.m"
          }
#line 908 "bitmap.m"
        else
#line 909 "bitmap.m"
          mercury__bitmap__BM_10 = mercury__bitmap__BMb_9;
#line 908 "bitmap.m"
        return mercury__bitmap__BM_10;
#line 908 "bitmap.m"
      }
#line 908 "bitmap.m"
      break;
#line 908 "bitmap.m"
    }
#line 899 "bitmap.m"
}

#line 899 "bitmap.m"
static MR_Box MR_CALL 
mercury__bitmap__zip2__ho12_4_f_0(
#line 899 "bitmap.m"
  MR_Integer mercury__bitmap__I_6,
#line 899 "bitmap.m"
  MR_Box mercury__bitmap__BMa_8,
#line 899 "bitmap.m"
  MR_Box mercury__bitmap__BMb_9)
#line 899 "bitmap.m"
{
#line 908 "bitmap.m"
  while (MR_TRUE)
#line 908 "bitmap.m"
    {
#line 908 "bitmap.m"
      /* tailcall optimized into a loop */
#line 908 "bitmap.m"
      {
#line 908 "bitmap.m"
        MR_bool mercury__bitmap__succeeded = (mercury__bitmap__I_6 >= (MR_Integer) 0);
#line 908 "bitmap.m"
        MR_Box mercury__bitmap__BM_10;

#line 908 "bitmap.m"
        if (mercury__bitmap__succeeded)
#line 904 "bitmap.m"
          {
#line 904 "bitmap.m"
            MR_Integer mercury__bitmap__Xa_11;
#line 904 "bitmap.m"
            MR_Integer mercury__bitmap__Xb_12;
#line 904 "bitmap.m"
            MR_Box mercury__bitmap__BMc_13;
#line 904 "bitmap.m"
            MR_Integer mercury__bitmap__V_15_15;
#line 904 "bitmap.m"
            MR_Integer mercury__bitmap__V_16_16;

#line 1887 "bitmap.m"
{
#define MR_PROC_LABEL mercury__bitmap__zip2__ho12_4_f_0

	MR_Integer N;
	MR_BitmapPtr BM;
	MR_Integer Byte;

	N =  mercury__bitmap__I_6 ;
	BM = (MR_BitmapPtr) mercury__bitmap__BMa_8 ;
		{
#line 1887 "bitmap.m"

    Byte = (MR_Integer) BM->elements[N];

#line 2491 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__Xa_11  = Byte;
#line 1887 "bitmap.m"
}
#line 1887 "bitmap.m"
{
#define MR_PROC_LABEL mercury__bitmap__zip2__ho12_4_f_0

	MR_Integer N;
	MR_BitmapPtr BM;
	MR_Integer Byte;

	N =  mercury__bitmap__I_6 ;
	BM = (MR_BitmapPtr) mercury__bitmap__BMb_9 ;
		{
#line 1887 "bitmap.m"

    Byte = (MR_Integer) BM->elements[N];

#line 2513 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__Xb_12  = Byte;
#line 1887 "bitmap.m"
}
#line 906 "bitmap.m"
            mercury__bitmap__V_15_15 = (mercury__bitmap__Xa_11 | mercury__bitmap__Xb_12);
#line 1928 "bitmap.m"
{
#define MR_PROC_LABEL mercury__bitmap__zip2__ho12_4_f_0

	MR_Integer N;
	MR_BitmapPtr BM0;
	MR_Integer Byte;
	MR_BitmapPtr BM;

	N =  mercury__bitmap__I_6 ;
	BM0 = (MR_BitmapPtr) mercury__bitmap__BMb_9 ;
	Byte =  mercury__bitmap__V_15_15 ;
		{
#line 1928 "bitmap.m"

    BM = BM0;
    BM->elements[N] = (MR_uint_least8_t) Byte;

#line 2540 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__BMc_13  = (MR_Box) BM;
#line 1928 "bitmap.m"
}
#line 907 "bitmap.m"
            mercury__bitmap__V_16_16 = (mercury__bitmap__I_6 - (MR_Integer) 1);
#line 907 "bitmap.m"
            /* direct tailcall eliminated */
#line 907 "bitmap.m"
            {
#line 907 "bitmap.m"
              MR_Integer mercury__bitmap__I__tmp_copy_6 = mercury__bitmap__V_16_16;
#line 907 "bitmap.m"
              MR_Box mercury__bitmap__BMb__tmp_copy_9 = mercury__bitmap__BMc_13;

#line 907 "bitmap.m"
              mercury__bitmap__BMb_9 = mercury__bitmap__BMb__tmp_copy_9;
#line 907 "bitmap.m"
              mercury__bitmap__I_6 = mercury__bitmap__I__tmp_copy_6;
#line 907 "bitmap.m"
            }
#line 907 "bitmap.m"
            continue;
#line 904 "bitmap.m"
          }
#line 908 "bitmap.m"
        else
#line 909 "bitmap.m"
          mercury__bitmap__BM_10 = mercury__bitmap__BMb_9;
#line 908 "bitmap.m"
        return mercury__bitmap__BM_10;
#line 908 "bitmap.m"
      }
#line 908 "bitmap.m"
      break;
#line 908 "bitmap.m"
    }
#line 899 "bitmap.m"
}

#line 143 "list.int"
static void MR_CALL 
mercury__bitmap__foldl2__ho6_6_p_in__list_0(
#line 143 "list.int"
  MR_Word mercury__bitmap__HeadVar__2_2,
#line 143 "list.int"
  MR_Integer mercury__bitmap__HeadVar__3_3,
#line 143 "list.int"
  MR_Integer * mercury__bitmap__HeadVar__4_4,
#line 143 "list.int"
  MR_Box mercury__bitmap__HeadVar__5_5,
#line 143 "list.int"
  MR_Box * mercury__bitmap__HeadVar__6_6)
#line 143 "list.int"
{
#line 364 "list.opt"
  while (MR_TRUE)
#line 364 "list.opt"
    {
#line 364 "list.opt"
      /* tailcall optimized into a loop */
#line 364 "list.opt"
      {
#line 364 "list.opt"
        MR_bool mercury__bitmap__succeeded;

#line 364 "list.opt"
        if ((mercury__bitmap__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 364 "list.opt"
          {
#line 364 "list.opt"
            *mercury__bitmap__HeadVar__6_6 = mercury__bitmap__HeadVar__5_5;
#line 364 "list.opt"
            *mercury__bitmap__HeadVar__4_4 = mercury__bitmap__HeadVar__3_3;
#line 364 "list.opt"
          }
#line 364 "list.opt"
        else
#line 367 "list.opt"
          {
#line 367 "list.opt"
            MR_Box mercury__bitmap__H_15_13 = ((MR_Box) (MR_hl_field(MR_mktag(1), mercury__bitmap__HeadVar__2_2, (MR_Integer) 0)));
#line 367 "list.opt"
            MR_Word mercury__bitmap__T_16_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bitmap__HeadVar__2_2, (MR_Integer) 1)));
#line 367 "list.opt"
            MR_Integer mercury__bitmap__STATE_VARIABLE_A_23_23_19;
#line 367 "list.opt"
            MR_Box mercury__bitmap__STATE_VARIABLE_B_24_24_20;
#line 367 "list.opt"
            MR_Integer mercury__bitmap__V_34_34;
#line 367 "list.opt"
            MR_Integer mercury__bitmap__V_36_36;

#line 1813 "bitmap.m"
{
#define MR_PROC_LABEL mercury__bitmap__foldl2__ho6_6_p_in__list_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr) mercury__bitmap__H_15_13 ;
		{
#line 1813 "bitmap.m"

    NumBits = BM->num_bits;

#line 2649 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__V_34_34  = NumBits;
#line 1813 "bitmap.m"
}
#line 923 "bitmap.m"
            {
#line 923 "bitmap.m"
              mercury__bitmap__STATE_VARIABLE_B_24_24_20 = mercury__bitmap__unsafe_copy_bits_6_f_0((MR_Integer) 0, mercury__bitmap__H_15_13, (MR_Integer) 0, mercury__bitmap__HeadVar__5_5, mercury__bitmap__HeadVar__3_3, mercury__bitmap__V_34_34);
            }
#line 1813 "bitmap.m"
{
#define MR_PROC_LABEL mercury__bitmap__foldl2__ho6_6_p_in__list_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr) mercury__bitmap__H_15_13 ;
		{
#line 1813 "bitmap.m"

    NumBits = BM->num_bits;

#line 2674 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__V_36_36  = NumBits;
#line 1813 "bitmap.m"
}
#line 924 "bitmap.m"
            mercury__bitmap__STATE_VARIABLE_A_23_23_19 = (mercury__bitmap__HeadVar__3_3 + mercury__bitmap__V_36_36);
#line 369 "list.opt"
            /* direct tailcall eliminated */
#line 369 "list.opt"
            {
#line 369 "list.opt"
              MR_Word mercury__bitmap__HeadVar__2__tmp_copy_2 = mercury__bitmap__T_16_14;
#line 369 "list.opt"
              MR_Integer mercury__bitmap__HeadVar__3__tmp_copy_3 = mercury__bitmap__STATE_VARIABLE_A_23_23_19;
#line 369 "list.opt"
              MR_Box mercury__bitmap__HeadVar__5__tmp_copy_5 = mercury__bitmap__STATE_VARIABLE_B_24_24_20;

#line 369 "list.opt"
              mercury__bitmap__HeadVar__5_5 = mercury__bitmap__HeadVar__5__tmp_copy_5;
#line 369 "list.opt"
              mercury__bitmap__HeadVar__3_3 = mercury__bitmap__HeadVar__3__tmp_copy_3;
#line 369 "list.opt"
              mercury__bitmap__HeadVar__2_2 = mercury__bitmap__HeadVar__2__tmp_copy_2;
#line 369 "list.opt"
            }
#line 369 "list.opt"
            continue;
#line 367 "list.opt"
          }
#line 364 "list.opt"
      }
#line 364 "list.opt"
      break;
#line 364 "list.opt"
    }
#line 143 "list.int"
}

#line 69 "bitmap.m"
void MR_CALL 
mercury__bitmap____Compare____word_0_0(
#line 69 "bitmap.m"
  MR_Word * mercury__bitmap__HeadVar__1_1,
#line 69 "bitmap.m"
  MR_Integer mercury__bitmap__HeadVar__2_2,
#line 69 "bitmap.m"
  MR_Integer mercury__bitmap__HeadVar__3_3)
#line 69 "bitmap.m"
{
#line 69 "bitmap.m"
  {
#line 69 "bitmap.m"
    MR_bool mercury__bitmap__succeeded;
#line 69 "bitmap.m"
    MR_Integer mercury__bitmap__Cast_HeadVar1_4 = mercury__bitmap__HeadVar__2_2;
#line 69 "bitmap.m"
    MR_Integer mercury__bitmap__Cast_HeadVar2_5 = mercury__bitmap__HeadVar__3_3;

#line 66 "private_builtin.opt"
    mercury__bitmap__succeeded = (mercury__bitmap__Cast_HeadVar1_4 < mercury__bitmap__Cast_HeadVar2_5);
#line 69 "private_builtin.opt"
    if (mercury__bitmap__succeeded)
#line 68 "private_builtin.opt"
      *mercury__bitmap__HeadVar__1_1 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
    else
#line 74 "private_builtin.opt"
      {
#line 71 "private_builtin.opt"
        mercury__bitmap__succeeded = (mercury__bitmap__Cast_HeadVar1_4 == mercury__bitmap__Cast_HeadVar2_5);
#line 74 "private_builtin.opt"
        if (mercury__bitmap__succeeded)
#line 73 "private_builtin.opt"
          *mercury__bitmap__HeadVar__1_1 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
        else
#line 75 "private_builtin.opt"
          *mercury__bitmap__HeadVar__1_1 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
      }
#line 69 "bitmap.m"
  }
#line 69 "bitmap.m"
}

#line 69 "bitmap.m"
MR_bool MR_CALL 
mercury__bitmap____Unify____word_0_0(
#line 69 "bitmap.m"
  MR_Integer mercury__bitmap__HeadVar__1_1,
#line 69 "bitmap.m"
  MR_Integer mercury__bitmap__HeadVar__2_2)
#line 69 "bitmap.m"
{
#line 69 "bitmap.m"
  {
#line 69 "bitmap.m"
    MR_bool mercury__bitmap__succeeded;
#line 69 "bitmap.m"
    MR_Integer mercury__bitmap__Cast_HeadVar1_3 = mercury__bitmap__HeadVar__1_1;
#line 69 "bitmap.m"
    MR_Integer mercury__bitmap__Cast_HeadVar2_4 = mercury__bitmap__HeadVar__2_2;

#line 69 "bitmap.m"
    mercury__bitmap__succeeded = (mercury__bitmap__Cast_HeadVar1_3 == mercury__bitmap__Cast_HeadVar2_4);
#line 69 "bitmap.m"
    return mercury__bitmap__succeeded;
#line 69 "bitmap.m"
  }
#line 69 "bitmap.m"
}

#line 707 "bitmap.m"
void MR_CALL 
mercury__bitmap____Compare____slice_0_0(
#line 707 "bitmap.m"
  MR_Word * mercury__bitmap__HeadVar__1_1,
#line 707 "bitmap.m"
  MR_Word mercury__bitmap__HeadVar__2_2,
#line 707 "bitmap.m"
  MR_Word mercury__bitmap__HeadVar__3_3)
#line 707 "bitmap.m"
{
#line 707 "bitmap.m"
  {
#line 707 "bitmap.m"
    MR_bool mercury__bitmap__succeeded;
#line 707 "bitmap.m"
    MR_Integer mercury__bitmap__CastX_12 = (MR_Integer) mercury__bitmap__HeadVar__2_2;
#line 707 "bitmap.m"
    MR_Integer mercury__bitmap__CastY_13 = (MR_Integer) mercury__bitmap__HeadVar__3_3;

#line 707 "bitmap.m"
    mercury__bitmap__succeeded = (mercury__bitmap__CastX_12 == mercury__bitmap__CastY_13);
#line 707 "bitmap.m"
    if (mercury__bitmap__succeeded)
#line 2813 "bitmap.c"
      *mercury__bitmap__HeadVar__1_1 = (MR_Integer) 0;
#line 707 "bitmap.m"
    else
#line 707 "bitmap.m"
      {
#line 707 "bitmap.m"
        MR_Box mercury__bitmap__V_4_4 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__bitmap__HeadVar__2_2, (MR_Integer) 0)));
#line 707 "bitmap.m"
        MR_Integer mercury__bitmap__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__bitmap__HeadVar__2_2, (MR_Integer) 1)));
#line 707 "bitmap.m"
        MR_Integer mercury__bitmap__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__bitmap__HeadVar__2_2, (MR_Integer) 2)));
#line 707 "bitmap.m"
        MR_Box mercury__bitmap__V_7_7 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__bitmap__HeadVar__3_3, (MR_Integer) 0)));
#line 707 "bitmap.m"
        MR_Integer mercury__bitmap__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__bitmap__HeadVar__3_3, (MR_Integer) 1)));
#line 707 "bitmap.m"
        MR_Integer mercury__bitmap__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__bitmap__HeadVar__3_3, (MR_Integer) 2)));
#line 707 "bitmap.m"
        MR_Word mercury__bitmap__V_10_10;
#line 1621 "bitmap.m"
        MR_Integer mercury__bitmap__CastX_17 = (MR_Integer) mercury__bitmap__V_4_4;
#line 1621 "bitmap.m"
        MR_Integer mercury__bitmap__CastY_18 = (MR_Integer) mercury__bitmap__V_7_7;

#line 1621 "bitmap.m"
        mercury__bitmap__succeeded = (mercury__bitmap__CastX_17 == mercury__bitmap__CastY_18);
#line 1621 "bitmap.m"
        if (mercury__bitmap__succeeded)
#line 1621 "bitmap.m"
          mercury__bitmap__V_10_10 = (MR_Integer) 0;
#line 1621 "bitmap.m"
        else
#line 1675 "bitmap.m"
          {
#line 1678 "bitmap.m"
{
#define MR_PROC_LABEL mercury__bitmap____Compare____slice_0_0

	MR_Word Result;
	MR_BitmapPtr BM1;
	MR_BitmapPtr BM2;

	BM1 = (MR_BitmapPtr) mercury__bitmap__V_4_4 ;
	BM2 = (MR_BitmapPtr) mercury__bitmap__V_7_7 ;
		{
#line 1678 "bitmap.m"

    int res;
    res = MR_bitmap_cmp(BM1, BM2);
    Result = ((res < 0) ? MR_COMPARE_LESS
                : (res == 0) ? MR_COMPARE_EQUAL
                : MR_COMPARE_GREATER);

#line 2867 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__V_10_10  = Result;
#line 1678 "bitmap.m"
}
#line 1675 "bitmap.m"
          }
#line 2876 "bitmap.c"
        mercury__bitmap__succeeded = (mercury__bitmap__V_10_10 == (MR_Integer) 0);
#line 707 "bitmap.m"
        mercury__bitmap__succeeded = !(mercury__bitmap__succeeded);
#line 707 "bitmap.m"
        if (mercury__bitmap__succeeded)
#line 707 "bitmap.m"
          *mercury__bitmap__HeadVar__1_1 = mercury__bitmap__V_10_10;
#line 707 "bitmap.m"
        else
#line 707 "bitmap.m"
          {
#line 707 "bitmap.m"
            MR_Word mercury__bitmap__V_11_11;

#line 66 "private_builtin.opt"
            mercury__bitmap__succeeded = (mercury__bitmap__V_5_5 < mercury__bitmap__V_8_8);
#line 69 "private_builtin.opt"
            if (mercury__bitmap__succeeded)
#line 68 "private_builtin.opt"
              mercury__bitmap__V_11_11 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
            else
#line 74 "private_builtin.opt"
              {
#line 71 "private_builtin.opt"
                mercury__bitmap__succeeded = (mercury__bitmap__V_5_5 == mercury__bitmap__V_8_8);
#line 74 "private_builtin.opt"
                if (mercury__bitmap__succeeded)
#line 73 "private_builtin.opt"
                  mercury__bitmap__V_11_11 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
                else
#line 75 "private_builtin.opt"
                  mercury__bitmap__V_11_11 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
              }
#line 2913 "bitmap.c"
            mercury__bitmap__succeeded = (mercury__bitmap__V_11_11 == (MR_Integer) 0);
#line 707 "bitmap.m"
            mercury__bitmap__succeeded = !(mercury__bitmap__succeeded);
#line 707 "bitmap.m"
            if (mercury__bitmap__succeeded)
#line 707 "bitmap.m"
              *mercury__bitmap__HeadVar__1_1 = mercury__bitmap__V_11_11;
#line 707 "bitmap.m"
            else
#line 69 "private_builtin.opt"
              {
#line 66 "private_builtin.opt"
                mercury__bitmap__succeeded = (mercury__bitmap__V_6_6 < mercury__bitmap__V_9_9);
#line 69 "private_builtin.opt"
                if (mercury__bitmap__succeeded)
#line 68 "private_builtin.opt"
                  *mercury__bitmap__HeadVar__1_1 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
                else
#line 74 "private_builtin.opt"
                  {
#line 71 "private_builtin.opt"
                    mercury__bitmap__succeeded = (mercury__bitmap__V_6_6 == mercury__bitmap__V_9_9);
#line 74 "private_builtin.opt"
                    if (mercury__bitmap__succeeded)
#line 73 "private_builtin.opt"
                      *mercury__bitmap__HeadVar__1_1 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
                    else
#line 75 "private_builtin.opt"
                      *mercury__bitmap__HeadVar__1_1 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
                  }
#line 69 "private_builtin.opt"
              }
#line 707 "bitmap.m"
          }
#line 707 "bitmap.m"
      }
#line 707 "bitmap.m"
  }
#line 707 "bitmap.m"
}

#line 707 "bitmap.m"
MR_bool MR_CALL 
mercury__bitmap____Unify____slice_0_0(
#line 707 "bitmap.m"
  MR_Word mercury__bitmap__HeadVar__1_1,
#line 707 "bitmap.m"
  MR_Word mercury__bitmap__HeadVar__2_2)
#line 707 "bitmap.m"
{
#line 707 "bitmap.m"
  {
#line 707 "bitmap.m"
    MR_bool mercury__bitmap__succeeded;
#line 707 "bitmap.m"
    MR_Integer mercury__bitmap__CastX_9 = (MR_Integer) mercury__bitmap__HeadVar__1_1;
#line 707 "bitmap.m"
    MR_Integer mercury__bitmap__CastY_10 = (MR_Integer) mercury__bitmap__HeadVar__2_2;

#line 707 "bitmap.m"
    mercury__bitmap__succeeded = (mercury__bitmap__CastX_9 == mercury__bitmap__CastY_10);
#line 707 "bitmap.m"
    if (mercury__bitmap__succeeded)
#line 707 "bitmap.m"
      mercury__bitmap__succeeded = MR_TRUE;
#line 707 "bitmap.m"
    else
#line 707 "bitmap.m"
      {
#line 707 "bitmap.m"
        MR_Box mercury__bitmap__V_3_3 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__bitmap__HeadVar__1_1, (MR_Integer) 0)));
#line 707 "bitmap.m"
        MR_Integer mercury__bitmap__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__bitmap__HeadVar__1_1, (MR_Integer) 1)));
#line 707 "bitmap.m"
        MR_Integer mercury__bitmap__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__bitmap__HeadVar__1_1, (MR_Integer) 2)));
#line 707 "bitmap.m"
        MR_Box mercury__bitmap__V_6_6 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__bitmap__HeadVar__2_2, (MR_Integer) 0)));
#line 707 "bitmap.m"
        MR_Integer mercury__bitmap__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__bitmap__HeadVar__2_2, (MR_Integer) 1)));
#line 707 "bitmap.m"
        MR_Integer mercury__bitmap__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__bitmap__HeadVar__2_2, (MR_Integer) 2)));
#line 1621 "bitmap.m"
        MR_Integer mercury__bitmap__CastX_11 = (MR_Integer) mercury__bitmap__V_3_3;
#line 1621 "bitmap.m"
        MR_Integer mercury__bitmap__CastY_12 = (MR_Integer) mercury__bitmap__V_6_6;

#line 1621 "bitmap.m"
        mercury__bitmap__succeeded = (mercury__bitmap__CastX_11 == mercury__bitmap__CastY_12);
#line 1621 "bitmap.m"
        if (mercury__bitmap__succeeded)
#line 1621 "bitmap.m"
          mercury__bitmap__succeeded = MR_TRUE;
#line 1621 "bitmap.m"
        else
#line 1628 "bitmap.m"
          {
#line 1631 "bitmap.m"
{
#define MR_PROC_LABEL mercury__bitmap____Unify____slice_0_0

	MR_BitmapPtr BM1;
	MR_BitmapPtr BM2;
	MR_bool SUCCESS_INDICATOR;

	BM1 = (MR_BitmapPtr) mercury__bitmap__V_3_3 ;
	BM2 = (MR_BitmapPtr) mercury__bitmap__V_6_6 ;
		{
#line 1631 "bitmap.m"

    SUCCESS_INDICATOR = MR_bitmap_eq(BM1, BM2);

#line 3028 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 1631 "bitmap.m"
	}
mercury__bitmap__succeeded  = SUCCESS_INDICATOR;
}
#line 1628 "bitmap.m"
          }
#line 707 "bitmap.m"
        if (mercury__bitmap__succeeded)
#line 707 "bitmap.m"
          {
#line 3043 "bitmap.c"
            mercury__bitmap__succeeded = (mercury__bitmap__V_4_4 == mercury__bitmap__V_7_7);
#line 707 "bitmap.m"
            if (mercury__bitmap__succeeded)
#line 3047 "bitmap.c"
              mercury__bitmap__succeeded = (mercury__bitmap__V_5_5 == mercury__bitmap__V_8_8);
#line 707 "bitmap.m"
          }
#line 707 "bitmap.m"
      }
#line 707 "bitmap.m"
    return mercury__bitmap__succeeded;
#line 707 "bitmap.m"
  }
#line 707 "bitmap.m"
}

#line 61 "bitmap.m"
void MR_CALL 
mercury__bitmap____Compare____num_bytes_0_0(
#line 61 "bitmap.m"
  MR_Word * mercury__bitmap__HeadVar__1_1,
#line 61 "bitmap.m"
  MR_Integer mercury__bitmap__HeadVar__2_2,
#line 61 "bitmap.m"
  MR_Integer mercury__bitmap__HeadVar__3_3)
#line 61 "bitmap.m"
{
#line 61 "bitmap.m"
  {
#line 61 "bitmap.m"
    MR_bool mercury__bitmap__succeeded;
#line 61 "bitmap.m"
    MR_Integer mercury__bitmap__Cast_HeadVar1_4 = mercury__bitmap__HeadVar__2_2;
#line 61 "bitmap.m"
    MR_Integer mercury__bitmap__Cast_HeadVar2_5 = mercury__bitmap__HeadVar__3_3;

#line 66 "private_builtin.opt"
    mercury__bitmap__succeeded = (mercury__bitmap__Cast_HeadVar1_4 < mercury__bitmap__Cast_HeadVar2_5);
#line 69 "private_builtin.opt"
    if (mercury__bitmap__succeeded)
#line 68 "private_builtin.opt"
      *mercury__bitmap__HeadVar__1_1 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
    else
#line 74 "private_builtin.opt"
      {
#line 71 "private_builtin.opt"
        mercury__bitmap__succeeded = (mercury__bitmap__Cast_HeadVar1_4 == mercury__bitmap__Cast_HeadVar2_5);
#line 74 "private_builtin.opt"
        if (mercury__bitmap__succeeded)
#line 73 "private_builtin.opt"
          *mercury__bitmap__HeadVar__1_1 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
        else
#line 75 "private_builtin.opt"
          *mercury__bitmap__HeadVar__1_1 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
      }
#line 61 "bitmap.m"
  }
#line 61 "bitmap.m"
}

#line 61 "bitmap.m"
MR_bool MR_CALL 
mercury__bitmap____Unify____num_bytes_0_0(
#line 61 "bitmap.m"
  MR_Integer mercury__bitmap__HeadVar__1_1,
#line 61 "bitmap.m"
  MR_Integer mercury__bitmap__HeadVar__2_2)
#line 61 "bitmap.m"
{
#line 61 "bitmap.m"
  {
#line 61 "bitmap.m"
    MR_bool mercury__bitmap__succeeded;
#line 61 "bitmap.m"
    MR_Integer mercury__bitmap__Cast_HeadVar1_3 = mercury__bitmap__HeadVar__1_1;
#line 61 "bitmap.m"
    MR_Integer mercury__bitmap__Cast_HeadVar2_4 = mercury__bitmap__HeadVar__2_2;

#line 61 "bitmap.m"
    mercury__bitmap__succeeded = (mercury__bitmap__Cast_HeadVar1_3 == mercury__bitmap__Cast_HeadVar2_4);
#line 61 "bitmap.m"
    return mercury__bitmap__succeeded;
#line 61 "bitmap.m"
  }
#line 61 "bitmap.m"
}

#line 60 "bitmap.m"
void MR_CALL 
mercury__bitmap____Compare____num_bits_0_0(
#line 60 "bitmap.m"
  MR_Word * mercury__bitmap__HeadVar__1_1,
#line 60 "bitmap.m"
  MR_Integer mercury__bitmap__HeadVar__2_2,
#line 60 "bitmap.m"
  MR_Integer mercury__bitmap__HeadVar__3_3)
#line 60 "bitmap.m"
{
#line 60 "bitmap.m"
  {
#line 60 "bitmap.m"
    MR_bool mercury__bitmap__succeeded;
#line 60 "bitmap.m"
    MR_Integer mercury__bitmap__Cast_HeadVar1_4 = mercury__bitmap__HeadVar__2_2;
#line 60 "bitmap.m"
    MR_Integer mercury__bitmap__Cast_HeadVar2_5 = mercury__bitmap__HeadVar__3_3;

#line 66 "private_builtin.opt"
    mercury__bitmap__succeeded = (mercury__bitmap__Cast_HeadVar1_4 < mercury__bitmap__Cast_HeadVar2_5);
#line 69 "private_builtin.opt"
    if (mercury__bitmap__succeeded)
#line 68 "private_builtin.opt"
      *mercury__bitmap__HeadVar__1_1 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
    else
#line 74 "private_builtin.opt"
      {
#line 71 "private_builtin.opt"
        mercury__bitmap__succeeded = (mercury__bitmap__Cast_HeadVar1_4 == mercury__bitmap__Cast_HeadVar2_5);
#line 74 "private_builtin.opt"
        if (mercury__bitmap__succeeded)
#line 73 "private_builtin.opt"
          *mercury__bitmap__HeadVar__1_1 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
        else
#line 75 "private_builtin.opt"
          *mercury__bitmap__HeadVar__1_1 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
      }
#line 60 "bitmap.m"
  }
#line 60 "bitmap.m"
}

#line 60 "bitmap.m"
MR_bool MR_CALL 
mercury__bitmap____Unify____num_bits_0_0(
#line 60 "bitmap.m"
  MR_Integer mercury__bitmap__HeadVar__1_1,
#line 60 "bitmap.m"
  MR_Integer mercury__bitmap__HeadVar__2_2)
#line 60 "bitmap.m"
{
#line 60 "bitmap.m"
  {
#line 60 "bitmap.m"
    MR_bool mercury__bitmap__succeeded;
#line 60 "bitmap.m"
    MR_Integer mercury__bitmap__Cast_HeadVar1_3 = mercury__bitmap__HeadVar__1_1;
#line 60 "bitmap.m"
    MR_Integer mercury__bitmap__Cast_HeadVar2_4 = mercury__bitmap__HeadVar__2_2;

#line 60 "bitmap.m"
    mercury__bitmap__succeeded = (mercury__bitmap__Cast_HeadVar1_3 == mercury__bitmap__Cast_HeadVar2_4);
#line 60 "bitmap.m"
    return mercury__bitmap__succeeded;
#line 60 "bitmap.m"
  }
#line 60 "bitmap.m"
}

#line 1375 "bitmap.m"
void MR_CALL 
mercury__bitmap____Compare____copy_direction_0_0(
#line 1375 "bitmap.m"
  MR_Word * mercury__bitmap__HeadVar__1_1,
#line 1375 "bitmap.m"
  MR_Word mercury__bitmap__HeadVar__2_2,
#line 1375 "bitmap.m"
  MR_Word mercury__bitmap__HeadVar__3_3)
#line 1375 "bitmap.m"
{
#line 1375 "bitmap.m"
  {
#line 1375 "bitmap.m"
    MR_bool mercury__bitmap__succeeded;
#line 1375 "bitmap.m"
    MR_Integer mercury__bitmap__Cast_HeadVar1_4 = (MR_Integer) mercury__bitmap__HeadVar__2_2;
#line 1375 "bitmap.m"
    MR_Integer mercury__bitmap__Cast_HeadVar2_5 = (MR_Integer) mercury__bitmap__HeadVar__3_3;

#line 66 "private_builtin.opt"
    mercury__bitmap__succeeded = (mercury__bitmap__Cast_HeadVar1_4 < mercury__bitmap__Cast_HeadVar2_5);
#line 69 "private_builtin.opt"
    if (mercury__bitmap__succeeded)
#line 68 "private_builtin.opt"
      *mercury__bitmap__HeadVar__1_1 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
    else
#line 74 "private_builtin.opt"
      {
#line 71 "private_builtin.opt"
        mercury__bitmap__succeeded = (mercury__bitmap__Cast_HeadVar1_4 == mercury__bitmap__Cast_HeadVar2_5);
#line 74 "private_builtin.opt"
        if (mercury__bitmap__succeeded)
#line 73 "private_builtin.opt"
          *mercury__bitmap__HeadVar__1_1 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
        else
#line 75 "private_builtin.opt"
          *mercury__bitmap__HeadVar__1_1 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
      }
#line 1375 "bitmap.m"
  }
#line 1375 "bitmap.m"
}

#line 1375 "bitmap.m"
MR_bool MR_CALL 
mercury__bitmap____Unify____copy_direction_0_0(
#line 1375 "bitmap.m"
  MR_Word mercury__bitmap__HeadVar__2_1,
#line 1375 "bitmap.m"
  MR_Word mercury__bitmap__HeadVar__2_2)
#line 1375 "bitmap.m"
{
#line 3264 "bitmap.c"
  {
#line 3266 "bitmap.c"
    MR_bool mercury__bitmap__succeeded = (mercury__bitmap__HeadVar__2_1 == mercury__bitmap__HeadVar__2_2);

#line 3269 "bitmap.c"
    return mercury__bitmap__succeeded;
#line 3271 "bitmap.c"
  }
#line 1375 "bitmap.m"
}

#line 59 "bitmap.m"
void MR_CALL 
mercury__bitmap____Compare____byte_index_0_0(
#line 59 "bitmap.m"
  MR_Word * mercury__bitmap__HeadVar__1_1,
#line 59 "bitmap.m"
  MR_Integer mercury__bitmap__HeadVar__2_2,
#line 59 "bitmap.m"
  MR_Integer mercury__bitmap__HeadVar__3_3)
#line 59 "bitmap.m"
{
#line 59 "bitmap.m"
  {
#line 59 "bitmap.m"
    MR_bool mercury__bitmap__succeeded;
#line 59 "bitmap.m"
    MR_Integer mercury__bitmap__Cast_HeadVar1_4 = mercury__bitmap__HeadVar__2_2;
#line 59 "bitmap.m"
    MR_Integer mercury__bitmap__Cast_HeadVar2_5 = mercury__bitmap__HeadVar__3_3;

#line 66 "private_builtin.opt"
    mercury__bitmap__succeeded = (mercury__bitmap__Cast_HeadVar1_4 < mercury__bitmap__Cast_HeadVar2_5);
#line 69 "private_builtin.opt"
    if (mercury__bitmap__succeeded)
#line 68 "private_builtin.opt"
      *mercury__bitmap__HeadVar__1_1 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
    else
#line 74 "private_builtin.opt"
      {
#line 71 "private_builtin.opt"
        mercury__bitmap__succeeded = (mercury__bitmap__Cast_HeadVar1_4 == mercury__bitmap__Cast_HeadVar2_5);
#line 74 "private_builtin.opt"
        if (mercury__bitmap__succeeded)
#line 73 "private_builtin.opt"
          *mercury__bitmap__HeadVar__1_1 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
        else
#line 75 "private_builtin.opt"
          *mercury__bitmap__HeadVar__1_1 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
      }
#line 59 "bitmap.m"
  }
#line 59 "bitmap.m"
}

#line 59 "bitmap.m"
MR_bool MR_CALL 
mercury__bitmap____Unify____byte_index_0_0(
#line 59 "bitmap.m"
  MR_Integer mercury__bitmap__HeadVar__1_1,
#line 59 "bitmap.m"
  MR_Integer mercury__bitmap__HeadVar__2_2)
#line 59 "bitmap.m"
{
#line 59 "bitmap.m"
  {
#line 59 "bitmap.m"
    MR_bool mercury__bitmap__succeeded;
#line 59 "bitmap.m"
    MR_Integer mercury__bitmap__Cast_HeadVar1_3 = mercury__bitmap__HeadVar__1_1;
#line 59 "bitmap.m"
    MR_Integer mercury__bitmap__Cast_HeadVar2_4 = mercury__bitmap__HeadVar__2_2;

#line 59 "bitmap.m"
    mercury__bitmap__succeeded = (mercury__bitmap__Cast_HeadVar1_3 == mercury__bitmap__Cast_HeadVar2_4);
#line 59 "bitmap.m"
    return mercury__bitmap__succeeded;
#line 59 "bitmap.m"
  }
#line 59 "bitmap.m"
}

#line 65 "bitmap.m"
void MR_CALL 
mercury__bitmap____Compare____byte_0_0(
#line 65 "bitmap.m"
  MR_Word * mercury__bitmap__HeadVar__1_1,
#line 65 "bitmap.m"
  MR_Integer mercury__bitmap__HeadVar__2_2,
#line 65 "bitmap.m"
  MR_Integer mercury__bitmap__HeadVar__3_3)
#line 65 "bitmap.m"
{
#line 65 "bitmap.m"
  {
#line 65 "bitmap.m"
    MR_bool mercury__bitmap__succeeded;
#line 65 "bitmap.m"
    MR_Integer mercury__bitmap__Cast_HeadVar1_4 = mercury__bitmap__HeadVar__2_2;
#line 65 "bitmap.m"
    MR_Integer mercury__bitmap__Cast_HeadVar2_5 = mercury__bitmap__HeadVar__3_3;

#line 66 "private_builtin.opt"
    mercury__bitmap__succeeded = (mercury__bitmap__Cast_HeadVar1_4 < mercury__bitmap__Cast_HeadVar2_5);
#line 69 "private_builtin.opt"
    if (mercury__bitmap__succeeded)
#line 68 "private_builtin.opt"
      *mercury__bitmap__HeadVar__1_1 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
    else
#line 74 "private_builtin.opt"
      {
#line 71 "private_builtin.opt"
        mercury__bitmap__succeeded = (mercury__bitmap__Cast_HeadVar1_4 == mercury__bitmap__Cast_HeadVar2_5);
#line 74 "private_builtin.opt"
        if (mercury__bitmap__succeeded)
#line 73 "private_builtin.opt"
          *mercury__bitmap__HeadVar__1_1 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
        else
#line 75 "private_builtin.opt"
          *mercury__bitmap__HeadVar__1_1 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
      }
#line 65 "bitmap.m"
  }
#line 65 "bitmap.m"
}

#line 65 "bitmap.m"
MR_bool MR_CALL 
mercury__bitmap____Unify____byte_0_0(
#line 65 "bitmap.m"
  MR_Integer mercury__bitmap__HeadVar__1_1,
#line 65 "bitmap.m"
  MR_Integer mercury__bitmap__HeadVar__2_2)
#line 65 "bitmap.m"
{
#line 65 "bitmap.m"
  {
#line 65 "bitmap.m"
    MR_bool mercury__bitmap__succeeded;
#line 65 "bitmap.m"
    MR_Integer mercury__bitmap__Cast_HeadVar1_3 = mercury__bitmap__HeadVar__1_1;
#line 65 "bitmap.m"
    MR_Integer mercury__bitmap__Cast_HeadVar2_4 = mercury__bitmap__HeadVar__2_2;

#line 65 "bitmap.m"
    mercury__bitmap__succeeded = (mercury__bitmap__Cast_HeadVar1_3 == mercury__bitmap__Cast_HeadVar2_4);
#line 65 "bitmap.m"
    return mercury__bitmap__succeeded;
#line 65 "bitmap.m"
  }
#line 65 "bitmap.m"
}

#line 53 "bitmap.m"
void MR_CALL 
mercury__bitmap____Compare____bitmap_error_0_0(
#line 53 "bitmap.m"
  MR_Word * mercury__bitmap__HeadVar__1_1,
#line 53 "bitmap.m"
  MR_Word mercury__bitmap__HeadVar__2_2,
#line 53 "bitmap.m"
  MR_Word mercury__bitmap__HeadVar__3_3)
#line 53 "bitmap.m"
{
#line 53 "bitmap.m"
  {
#line 53 "bitmap.m"
    MR_bool mercury__bitmap__succeeded;
#line 53 "bitmap.m"
    MR_Integer mercury__bitmap__CastX_6 = (MR_Integer) mercury__bitmap__HeadVar__2_2;
#line 53 "bitmap.m"
    MR_Integer mercury__bitmap__CastY_7 = (MR_Integer) mercury__bitmap__HeadVar__3_3;

#line 53 "bitmap.m"
    mercury__bitmap__succeeded = (mercury__bitmap__CastX_6 == mercury__bitmap__CastY_7);
#line 53 "bitmap.m"
    if (mercury__bitmap__succeeded)
#line 3448 "bitmap.c"
      *mercury__bitmap__HeadVar__1_1 = (MR_Integer) 0;
#line 53 "bitmap.m"
    else
#line 53 "bitmap.m"
      {
#line 53 "bitmap.m"
        MR_String mercury__bitmap__V_4_4 = (MR_String) mercury__bitmap__HeadVar__2_2;
#line 53 "bitmap.m"
        MR_String mercury__bitmap__V_5_5 = (MR_String) mercury__bitmap__HeadVar__3_3;
#line 53 "bitmap.m"
        MR_Integer mercury__bitmap__Res_7_12;

#line 130 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__bitmap____Compare____bitmap_error_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__bitmap__V_4_4 ;
	S2 =  mercury__bitmap__V_5_5 ;
		{
#line 130 "private_builtin.opt"

    Res = strcmp(S1, S2);

#line 3476 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__Res_7_12  = Res;
#line 130 "private_builtin.opt"
}
#line 102 "private_builtin.opt"
        mercury__bitmap__succeeded = (mercury__bitmap__Res_7_12 < (MR_Integer) 0);
#line 105 "private_builtin.opt"
        if (mercury__bitmap__succeeded)
#line 104 "private_builtin.opt"
          *mercury__bitmap__HeadVar__1_1 = (MR_Integer) 1;
#line 105 "private_builtin.opt"
        else
#line 110 "private_builtin.opt"
          {
#line 107 "private_builtin.opt"
            mercury__bitmap__succeeded = (mercury__bitmap__Res_7_12 == (MR_Integer) 0);
#line 110 "private_builtin.opt"
            if (mercury__bitmap__succeeded)
#line 109 "private_builtin.opt"
              *mercury__bitmap__HeadVar__1_1 = (MR_Integer) 0;
#line 110 "private_builtin.opt"
            else
#line 111 "private_builtin.opt"
              *mercury__bitmap__HeadVar__1_1 = (MR_Integer) 2;
#line 110 "private_builtin.opt"
          }
#line 53 "bitmap.m"
      }
#line 53 "bitmap.m"
  }
#line 53 "bitmap.m"
}

#line 53 "bitmap.m"
MR_bool MR_CALL 
mercury__bitmap____Unify____bitmap_error_0_0(
#line 53 "bitmap.m"
  MR_Word mercury__bitmap__HeadVar__1_1,
#line 53 "bitmap.m"
  MR_Word mercury__bitmap__HeadVar__2_2)
#line 53 "bitmap.m"
{
#line 53 "bitmap.m"
  {
#line 53 "bitmap.m"
    MR_bool mercury__bitmap__succeeded;
#line 53 "bitmap.m"
    MR_Integer mercury__bitmap__CastX_5 = (MR_Integer) mercury__bitmap__HeadVar__1_1;
#line 53 "bitmap.m"
    MR_Integer mercury__bitmap__CastY_6 = (MR_Integer) mercury__bitmap__HeadVar__2_2;

#line 53 "bitmap.m"
    mercury__bitmap__succeeded = (mercury__bitmap__CastX_5 == mercury__bitmap__CastY_6);
#line 53 "bitmap.m"
    if (mercury__bitmap__succeeded)
#line 53 "bitmap.m"
      mercury__bitmap__succeeded = MR_TRUE;
#line 53 "bitmap.m"
    else
#line 53 "bitmap.m"
      {
#line 53 "bitmap.m"
        MR_String mercury__bitmap__V_3_3 = (MR_String) mercury__bitmap__HeadVar__1_1;
#line 53 "bitmap.m"
        MR_String mercury__bitmap__V_4_4 = (MR_String) mercury__bitmap__HeadVar__2_2;

#line 3545 "bitmap.c"
        mercury__bitmap__succeeded = (strcmp(mercury__bitmap__V_3_3, mercury__bitmap__V_4_4) == 0);
#line 53 "bitmap.m"
      }
#line 53 "bitmap.m"
    return mercury__bitmap__succeeded;
#line 53 "bitmap.m"
  }
#line 53 "bitmap.m"
}

#line 1621 "bitmap.m"
void MR_CALL 
mercury__bitmap____Compare____bitmap_0_0(
#line 1621 "bitmap.m"
  MR_Word * mercury__bitmap__HeadVar__1_1,
#line 1621 "bitmap.m"
  MR_Box mercury__bitmap__HeadVar__2_2,
#line 1621 "bitmap.m"
  MR_Box mercury__bitmap__HeadVar__3_3)
#line 1621 "bitmap.m"
{
#line 1621 "bitmap.m"
  {
#line 1621 "bitmap.m"
    MR_bool mercury__bitmap__succeeded;
#line 1621 "bitmap.m"
    MR_Integer mercury__bitmap__CastX_4 = (MR_Integer) mercury__bitmap__HeadVar__2_2;
#line 1621 "bitmap.m"
    MR_Integer mercury__bitmap__CastY_5 = (MR_Integer) mercury__bitmap__HeadVar__3_3;

#line 1621 "bitmap.m"
    mercury__bitmap__succeeded = (mercury__bitmap__CastX_4 == mercury__bitmap__CastY_5);
#line 1621 "bitmap.m"
    if (mercury__bitmap__succeeded)
#line 1621 "bitmap.m"
      *mercury__bitmap__HeadVar__1_1 = (MR_Integer) 0;
#line 1621 "bitmap.m"
    else
#line 1675 "bitmap.m"
      {
#line 1678 "bitmap.m"
{
#define MR_PROC_LABEL mercury__bitmap____Compare____bitmap_0_0

	MR_Word Result;
	MR_BitmapPtr BM1;
	MR_BitmapPtr BM2;

	BM1 = (MR_BitmapPtr) mercury__bitmap__HeadVar__2_2 ;
	BM2 = (MR_BitmapPtr) mercury__bitmap__HeadVar__3_3 ;
		{
#line 1678 "bitmap.m"

    int res;
    res = MR_bitmap_cmp(BM1, BM2);
    Result = ((res < 0) ? MR_COMPARE_LESS
                : (res == 0) ? MR_COMPARE_EQUAL
                : MR_COMPARE_GREATER);

#line 3605 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__bitmap__HeadVar__1_1  = Result;
#line 1678 "bitmap.m"
}
#line 1675 "bitmap.m"
      }
#line 1621 "bitmap.m"
  }
#line 1621 "bitmap.m"
}

#line 1621 "bitmap.m"
MR_bool MR_CALL 
mercury__bitmap____Unify____bitmap_0_0(
#line 1621 "bitmap.m"
  MR_Box mercury__bitmap__HeadVar__1_1,
#line 1621 "bitmap.m"
  MR_Box mercury__bitmap__HeadVar__2_2)
#line 1621 "bitmap.m"
{
#line 1621 "bitmap.m"
  {
#line 1621 "bitmap.m"
    MR_bool mercury__bitmap__succeeded;
#line 1621 "bitmap.m"
    MR_Integer mercury__bitmap__CastX_3 = (MR_Integer) mercury__bitmap__HeadVar__1_1;
#line 1621 "bitmap.m"
    MR_Integer mercury__bitmap__CastY_4 = (MR_Integer) mercury__bitmap__HeadVar__2_2;

#line 1621 "bitmap.m"
    mercury__bitmap__succeeded = (mercury__bitmap__CastX_3 == mercury__bitmap__CastY_4);
#line 1621 "bitmap.m"
    if (mercury__bitmap__succeeded)
#line 1621 "bitmap.m"
      mercury__bitmap__succeeded = MR_TRUE;
#line 1621 "bitmap.m"
    else
#line 1628 "bitmap.m"
      {
#line 1631 "bitmap.m"
{
#define MR_PROC_LABEL mercury__bitmap____Unify____bitmap_0_0

	MR_BitmapPtr BM1;
	MR_BitmapPtr BM2;
	MR_bool SUCCESS_INDICATOR;

	BM1 = (MR_BitmapPtr) mercury__bitmap__HeadVar__1_1 ;
	BM2 = (MR_BitmapPtr) mercury__bitmap__HeadVar__2_2 ;
		{
#line 1631 "bitmap.m"

    SUCCESS_INDICATOR = MR_bitmap_eq(BM1, BM2);

#line 3662 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 1631 "bitmap.m"
	}
mercury__bitmap__succeeded  = SUCCESS_INDICATOR;
}
#line 1628 "bitmap.m"
      }
#line 1621 "bitmap.m"
    return mercury__bitmap__succeeded;
#line 1621 "bitmap.m"
  }
#line 1621 "bitmap.m"
}

#line 2076 "bitmap.m"
void MR_CALL 
mercury__bitmap____Compare____bit_index_in_byte_0_0(
#line 2076 "bitmap.m"
  MR_Word * mercury__bitmap__HeadVar__1_1,
#line 2076 "bitmap.m"
  MR_Integer mercury__bitmap__HeadVar__2_2,
#line 2076 "bitmap.m"
  MR_Integer mercury__bitmap__HeadVar__3_3)
#line 2076 "bitmap.m"
{
#line 2076 "bitmap.m"
  {
#line 2076 "bitmap.m"
    MR_bool mercury__bitmap__succeeded;
#line 2076 "bitmap.m"
    MR_Integer mercury__bitmap__Cast_HeadVar1_4 = mercury__bitmap__HeadVar__2_2;
#line 2076 "bitmap.m"
    MR_Integer mercury__bitmap__Cast_HeadVar2_5 = mercury__bitmap__HeadVar__3_3;

#line 66 "private_builtin.opt"
    mercury__bitmap__succeeded = (mercury__bitmap__Cast_HeadVar1_4 < mercury__bitmap__Cast_HeadVar2_5);
#line 69 "private_builtin.opt"
    if (mercury__bitmap__succeeded)
#line 68 "private_builtin.opt"
      *mercury__bitmap__HeadVar__1_1 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
    else
#line 74 "private_builtin.opt"
      {
#line 71 "private_builtin.opt"
        mercury__bitmap__succeeded = (mercury__bitmap__Cast_HeadVar1_4 == mercury__bitmap__Cast_HeadVar2_5);
#line 74 "private_builtin.opt"
        if (mercury__bitmap__succeeded)
#line 73 "private_builtin.opt"
          *mercury__bitmap__HeadVar__1_1 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
        else
#line 75 "private_builtin.opt"
          *mercury__bitmap__HeadVar__1_1 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
      }
#line 2076 "bitmap.m"
  }
#line 2076 "bitmap.m"
}

#line 2076 "bitmap.m"
MR_bool MR_CALL 
mercury__bitmap____Unify____bit_index_in_byte_0_0(
#line 2076 "bitmap.m"
  MR_Integer mercury__bitmap__HeadVar__1_1,
#line 2076 "bitmap.m"
  MR_Integer mercury__bitmap__HeadVar__2_2)
#line 2076 "bitmap.m"
{
#line 2076 "bitmap.m"
  {
#line 2076 "bitmap.m"
    MR_bool mercury__bitmap__succeeded;
#line 2076 "bitmap.m"
    MR_Integer mercury__bitmap__Cast_HeadVar1_3 = mercury__bitmap__HeadVar__1_1;
#line 2076 "bitmap.m"
    MR_Integer mercury__bitmap__Cast_HeadVar2_4 = mercury__bitmap__HeadVar__2_2;

#line 2076 "bitmap.m"
    mercury__bitmap__succeeded = (mercury__bitmap__Cast_HeadVar1_3 == mercury__bitmap__Cast_HeadVar2_4);
#line 2076 "bitmap.m"
    return mercury__bitmap__succeeded;
#line 2076 "bitmap.m"
  }
#line 2076 "bitmap.m"
}

#line 58 "bitmap.m"
void MR_CALL 
mercury__bitmap____Compare____bit_index_0_0(
#line 58 "bitmap.m"
  MR_Word * mercury__bitmap__HeadVar__1_1,
#line 58 "bitmap.m"
  MR_Integer mercury__bitmap__HeadVar__2_2,
#line 58 "bitmap.m"
  MR_Integer mercury__bitmap__HeadVar__3_3)
#line 58 "bitmap.m"
{
#line 58 "bitmap.m"
  {
#line 58 "bitmap.m"
    MR_bool mercury__bitmap__succeeded;
#line 58 "bitmap.m"
    MR_Integer mercury__bitmap__Cast_HeadVar1_4 = mercury__bitmap__HeadVar__2_2;
#line 58 "bitmap.m"
    MR_Integer mercury__bitmap__Cast_HeadVar2_5 = mercury__bitmap__HeadVar__3_3;

#line 66 "private_builtin.opt"
    mercury__bitmap__succeeded = (mercury__bitmap__Cast_HeadVar1_4 < mercury__bitmap__Cast_HeadVar2_5);
#line 69 "private_builtin.opt"
    if (mercury__bitmap__succeeded)
#line 68 "private_builtin.opt"
      *mercury__bitmap__HeadVar__1_1 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
    else
#line 74 "private_builtin.opt"
      {
#line 71 "private_builtin.opt"
        mercury__bitmap__succeeded = (mercury__bitmap__Cast_HeadVar1_4 == mercury__bitmap__Cast_HeadVar2_5);
#line 74 "private_builtin.opt"
        if (mercury__bitmap__succeeded)
#line 73 "private_builtin.opt"
          *mercury__bitmap__HeadVar__1_1 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
        else
#line 75 "private_builtin.opt"
          *mercury__bitmap__HeadVar__1_1 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
      }
#line 58 "bitmap.m"
  }
#line 58 "bitmap.m"
}

#line 58 "bitmap.m"
MR_bool MR_CALL 
mercury__bitmap____Unify____bit_index_0_0(
#line 58 "bitmap.m"
  MR_Integer mercury__bitmap__HeadVar__1_1,
#line 58 "bitmap.m"
  MR_Integer mercury__bitmap__HeadVar__2_2)
#line 58 "bitmap.m"
{
#line 58 "bitmap.m"
  {
#line 58 "bitmap.m"
    MR_bool mercury__bitmap__succeeded;
#line 58 "bitmap.m"
    MR_Integer mercury__bitmap__Cast_HeadVar1_3 = mercury__bitmap__HeadVar__1_1;
#line 58 "bitmap.m"
    MR_Integer mercury__bitmap__Cast_HeadVar2_4 = mercury__bitmap__HeadVar__2_2;

#line 58 "bitmap.m"
    mercury__bitmap__succeeded = (mercury__bitmap__Cast_HeadVar1_3 == mercury__bitmap__Cast_HeadVar2_4);
#line 58 "bitmap.m"
    return mercury__bitmap__succeeded;
#line 58 "bitmap.m"
  }
#line 58 "bitmap.m"
}

#line 2188 "bitmap.m"
void MR_CALL 
mercury__bitmap__throw_bitmap_error_1_p_0(
#line 2188 "bitmap.m"
  MR_String mercury__bitmap__Msg_2)
#line 2188 "bitmap.m"
{
#line 2190 "bitmap.m"
  {
#line 2190 "bitmap.m"
    MR_bool mercury__bitmap__succeeded;
#line 2190 "bitmap.m"
    MR_Word mercury__bitmap__TypeCtorInfo_4_4 = (MR_Word) &mercury__bitmap__bitmap__type_ctor_info_bitmap_error_0;
#line 2190 "bitmap.m"
    MR_Word mercury__bitmap__V_3_3 = (MR_Word) mercury__bitmap__Msg_2;

#line 2191 "bitmap.m"
    {
#line 2191 "bitmap.m"
      mercury__exception__throw_1_p_0(mercury__bitmap__TypeCtorInfo_4_4, ((MR_Box) (mercury__bitmap__V_3_3)));
#line 2191 "bitmap.m"
      return;
    }
#line 2190 "bitmap.m"
  }
#line 2188 "bitmap.m"
}

#line 2183 "bitmap.m"
MR_Box MR_CALL 
mercury__bitmap__throw_bitmap_error_1_f_0(
#line 2183 "bitmap.m"
  MR_Word mercury__bitmap__TypeInfo_5_5,
#line 2183 "bitmap.m"
  MR_String mercury__bitmap__Msg_3)
#line 2183 "bitmap.m"
{
#line 2190 "bitmap.m"
  {
#line 2190 "bitmap.m"
    MR_bool mercury__bitmap__succeeded;
#line 2190 "bitmap.m"
    MR_Box mercury__bitmap__HeadVar__2_4;
#line 2190 "bitmap.m"
    MR_Word mercury__bitmap__TypeCtorInfo_4_8 = (MR_Word) &mercury__bitmap__bitmap__type_ctor_info_bitmap_error_0;
#line 2190 "bitmap.m"
    MR_Word mercury__bitmap__V_7_7 = (MR_Word) mercury__bitmap__Msg_3;

#line 2191 "bitmap.m"
    {
#line 2191 "bitmap.m"
      mercury__exception__throw_1_p_0(mercury__bitmap__TypeCtorInfo_4_8, ((MR_Box) (mercury__bitmap__V_7_7)));
    }
#line 2190 "bitmap.m"
    return mercury__bitmap__HeadVar__2_4;
#line 2190 "bitmap.m"
  }
#line 2183 "bitmap.m"
}

#line 2147 "bitmap.m"
MR_Box MR_CALL 
mercury__bitmap__throw_bounds_error_3_f_0(
#line 2147 "bitmap.m"
  MR_Word mercury__bitmap__TypeInfo_22_22,
#line 2147 "bitmap.m"
  MR_Box mercury__bitmap__BM_5,
#line 2147 "bitmap.m"
  MR_String mercury__bitmap__Pred_6,
#line 2147 "bitmap.m"
  MR_Integer mercury__bitmap__Index_7)
#line 2147 "bitmap.m"
{
#line 2149 "bitmap.m"
  {
#line 2149 "bitmap.m"
    MR_bool mercury__bitmap__succeeded;
#line 2149 "bitmap.m"
    MR_Box mercury__bitmap__HeadVar__4_4;
#line 2149 "bitmap.m"
    MR_Word mercury__bitmap__TypeCtorInfo_4_40;
#line 2149 "bitmap.m"
    MR_String mercury__bitmap__V_8_8;
#line 2149 "bitmap.m"
    MR_Word mercury__bitmap__V_9_9;
#line 2149 "bitmap.m"
    MR_Word mercury__bitmap__V_10_10;
#line 2149 "bitmap.m"
    MR_Word mercury__bitmap__V_12_12;
#line 2149 "bitmap.m"
    MR_String mercury__bitmap__V_13_13;
#line 2149 "bitmap.m"
    MR_Word mercury__bitmap__V_14_14;
#line 2149 "bitmap.m"
    MR_Word mercury__bitmap__V_16_16;
#line 2149 "bitmap.m"
    MR_String mercury__bitmap__V_17_17;
#line 2149 "bitmap.m"
    MR_Integer mercury__bitmap__V_18_18;
#line 2149 "bitmap.m"
    MR_Word mercury__bitmap__V_19_19;
#line 2149 "bitmap.m"
    MR_Word mercury__bitmap__V_21_21;
#line 2149 "bitmap.m"
    MR_Word mercury__bitmap__V_39_39;

#line 284 "string.opt"
    {
#line 284 "string.opt"
      mercury__string__int_to_base_string_3_p_0(mercury__bitmap__Index_7, (MR_Integer) 10, &mercury__bitmap__V_13_13);
    }
#line 1813 "bitmap.m"
{
#define MR_PROC_LABEL mercury__bitmap__throw_bounds_error_3_f_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr) mercury__bitmap__BM_5 ;
		{
#line 1813 "bitmap.m"

    NumBits = BM->num_bits;

#line 3952 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__V_18_18  = NumBits;
#line 1813 "bitmap.m"
}
#line 284 "string.opt"
    {
#line 284 "string.opt"
      mercury__string__int_to_base_string_3_p_0(mercury__bitmap__V_18_18, (MR_Integer) 10, &mercury__bitmap__V_17_17);
    }
#line 2156 "bitmap.m"
    mercury__bitmap__V_21_21 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2155 "bitmap.m"
    mercury__bitmap__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__bitmap_scalar_common_4[2]);
#line 2154 "bitmap.m"
    {
#line 2154 "bitmap.m"
      mercury__bitmap__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2154 "bitmap.m"
      MR_hl_field(MR_mktag(1), mercury__bitmap__V_16_16, 0) = ((MR_Box) (mercury__bitmap__V_17_17));
#line 2154 "bitmap.m"
      MR_hl_field(MR_mktag(1), mercury__bitmap__V_16_16, 1) = ((MR_Box) (mercury__bitmap__V_19_19));
#line 2154 "bitmap.m"
    }
#line 2153 "bitmap.m"
    {
#line 2153 "bitmap.m"
      mercury__bitmap__V_14_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2153 "bitmap.m"
      MR_hl_field(MR_mktag(1), mercury__bitmap__V_14_14, 0) = ((MR_Box) ((MR_String) " is out of bounds [0 - "));
#line 2153 "bitmap.m"
      MR_hl_field(MR_mktag(1), mercury__bitmap__V_14_14, 1) = ((MR_Box) (mercury__bitmap__V_16_16));
#line 2153 "bitmap.m"
    }
#line 2152 "bitmap.m"
    {
#line 2152 "bitmap.m"
      mercury__bitmap__V_12_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2152 "bitmap.m"
      MR_hl_field(MR_mktag(1), mercury__bitmap__V_12_12, 0) = ((MR_Box) (mercury__bitmap__V_13_13));
#line 2152 "bitmap.m"
      MR_hl_field(MR_mktag(1), mercury__bitmap__V_12_12, 1) = ((MR_Box) (mercury__bitmap__V_14_14));
#line 2152 "bitmap.m"
    }
#line 2152 "bitmap.m"
    {
#line 2152 "bitmap.m"
      mercury__bitmap__V_10_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2152 "bitmap.m"
      MR_hl_field(MR_mktag(1), mercury__bitmap__V_10_10, 0) = ((MR_Box) ((MR_String) ": index "));
#line 2152 "bitmap.m"
      MR_hl_field(MR_mktag(1), mercury__bitmap__V_10_10, 1) = ((MR_Box) (mercury__bitmap__V_12_12));
#line 2152 "bitmap.m"
    }
#line 2151 "bitmap.m"
    {
#line 2151 "bitmap.m"
      mercury__bitmap__V_9_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2151 "bitmap.m"
      MR_hl_field(MR_mktag(1), mercury__bitmap__V_9_9, 0) = ((MR_Box) (mercury__bitmap__Pred_6));
#line 2151 "bitmap.m"
      MR_hl_field(MR_mktag(1), mercury__bitmap__V_9_9, 1) = ((MR_Box) (mercury__bitmap__V_10_10));
#line 2151 "bitmap.m"
    }
#line 2150 "bitmap.m"
    {
#line 2150 "bitmap.m"
      mercury__bitmap__V_8_8 = mercury__string__append_list_1_f_0(mercury__bitmap__V_9_9);
    }
#line 2191 "bitmap.m"
    mercury__bitmap__V_39_39 = (MR_Word) mercury__bitmap__V_8_8;
#line 4025 "bitmap.c"
    mercury__bitmap__TypeCtorInfo_4_40 = (MR_Word) &mercury__bitmap__bitmap__type_ctor_info_bitmap_error_0;
#line 2191 "bitmap.m"
    {
#line 2191 "bitmap.m"
      mercury__exception__throw_1_p_0(mercury__bitmap__TypeCtorInfo_4_40, ((MR_Box) (mercury__bitmap__V_39_39)));
    }
#line 2149 "bitmap.m"
    return mercury__bitmap__HeadVar__4_4;
#line 2149 "bitmap.m"
  }
#line 2147 "bitmap.m"
}

#line 2133 "bitmap.m"
static MR_Integer MR_CALL 
mercury__bitmap__set_bits_in_byte_4_f_0(
#line 2133 "bitmap.m"
  MR_Integer mercury__bitmap__Byte0_6,
#line 2133 "bitmap.m"
  MR_Integer mercury__bitmap__FirstBit_7,
#line 2133 "bitmap.m"
  MR_Integer mercury__bitmap__NumBits_8,
#line 2133 "bitmap.m"
  MR_Integer mercury__bitmap__Bits_9)
#line 2133 "bitmap.m"
{
#line 2135 "bitmap.m"
  {
#line 2135 "bitmap.m"
    MR_bool mercury__bitmap__succeeded;
#line 2135 "bitmap.m"
    MR_Integer mercury__bitmap__Byte_10;
#line 2135 "bitmap.m"
    MR_Integer mercury__bitmap__LastBit_11;
#line 2135 "bitmap.m"
    MR_Integer mercury__bitmap__Shift_12;
#line 2135 "bitmap.m"
    MR_Integer mercury__bitmap__Mask_13;
#line 2135 "bitmap.m"
    MR_Integer mercury__bitmap__BitsToSet_14;
#line 2135 "bitmap.m"
    MR_Integer mercury__bitmap__V_15_15 = (mercury__bitmap__FirstBit_7 + mercury__bitmap__NumBits_8);
#line 2135 "bitmap.m"
    MR_Integer mercury__bitmap__V_20_20;
#line 2135 "bitmap.m"
    MR_Integer mercury__bitmap__V_21_21;
#line 2135 "bitmap.m"
    MR_Integer mercury__bitmap__V_22_22;
#line 2135 "bitmap.m"
    MR_Integer mercury__bitmap__V_23_23;
#line 2135 "bitmap.m"
    MR_Integer mercury__bitmap__BitMask_26;
#line 2135 "bitmap.m"
    MR_Integer mercury__bitmap__V_28_28;
#line 2135 "bitmap.m"
    MR_Integer mercury__bitmap__V_30_30;

#line 2136 "bitmap.m"
    mercury__bitmap__LastBit_11 = (mercury__bitmap__V_15_15 - (MR_Integer) 1);
#line 2137 "bitmap.m"
    mercury__bitmap__Shift_12 = ((MR_Integer) 7 - mercury__bitmap__LastBit_11);
#line 2108 "bitmap.m"
    mercury__bitmap__V_28_28 = (mercury__bitmap__NumBits_8 - (MR_Integer) 1);
#line 2108 "bitmap.m"
    mercury__bitmap__BitMask_26 = ((MR_Integer) 1 << mercury__bitmap__V_28_28);
#line 2109 "bitmap.m"
    mercury__bitmap__V_30_30 = (mercury__bitmap__BitMask_26 - (MR_Integer) 1);
#line 2109 "bitmap.m"
    mercury__bitmap__Mask_13 = (mercury__bitmap__BitMask_26 | mercury__bitmap__V_30_30);
#line 2139 "bitmap.m"
    mercury__bitmap__BitsToSet_14 = (mercury__bitmap__Mask_13 & mercury__bitmap__Bits_9);
#line 2140 "bitmap.m"
    mercury__bitmap__V_22_22 = (mercury__bitmap__Mask_13 << mercury__bitmap__Shift_12);
#line 2140 "bitmap.m"
    mercury__bitmap__V_21_21 = ~(mercury__bitmap__V_22_22);
#line 2141 "bitmap.m"
    mercury__bitmap__V_20_20 = (mercury__bitmap__Byte0_6 & mercury__bitmap__V_21_21);
#line 2141 "bitmap.m"
    mercury__bitmap__V_23_23 = (mercury__bitmap__BitsToSet_14 << mercury__bitmap__Shift_12);
#line 2140 "bitmap.m"
    mercury__bitmap__Byte_10 = (mercury__bitmap__V_20_20 | mercury__bitmap__V_23_23);
#line 2135 "bitmap.m"
    return mercury__bitmap__Byte_10;
#line 2135 "bitmap.m"
  }
#line 2133 "bitmap.m"
}

#line 2118 "bitmap.m"
static MR_Integer MR_CALL 
mercury__bitmap__extract_bits_from_byte_3_f_0(
#line 2118 "bitmap.m"
  MR_Integer mercury__bitmap__Byte_5,
#line 2118 "bitmap.m"
  MR_Integer mercury__bitmap__FirstBit_6,
#line 2118 "bitmap.m"
  MR_Integer mercury__bitmap__NumBits_7)
#line 2118 "bitmap.m"
{
#line 2120 "bitmap.m"
  {
#line 2120 "bitmap.m"
    MR_bool mercury__bitmap__succeeded;
#line 2120 "bitmap.m"
    MR_Integer mercury__bitmap__Bits_8;
#line 2120 "bitmap.m"
    MR_Integer mercury__bitmap__LastBit_9;
#line 2120 "bitmap.m"
    MR_Integer mercury__bitmap__Shift_10;
#line 2120 "bitmap.m"
    MR_Integer mercury__bitmap__V_11_11 = (mercury__bitmap__FirstBit_6 + mercury__bitmap__NumBits_7);
#line 2120 "bitmap.m"
    MR_Integer mercury__bitmap__V_16_16;
#line 2120 "bitmap.m"
    MR_Integer mercury__bitmap__V_17_17;
#line 2120 "bitmap.m"
    MR_Integer mercury__bitmap__BitMask_20;
#line 2120 "bitmap.m"
    MR_Integer mercury__bitmap__V_22_22;
#line 2120 "bitmap.m"
    MR_Integer mercury__bitmap__V_24_24;

#line 2123 "bitmap.m"
    mercury__bitmap__LastBit_9 = (mercury__bitmap__V_11_11 - (MR_Integer) 1);
#line 2124 "bitmap.m"
    mercury__bitmap__Shift_10 = ((MR_Integer) 7 - mercury__bitmap__LastBit_9);
#line 2125 "bitmap.m"
    mercury__bitmap__V_16_16 = (mercury__bitmap__Byte_5 >> mercury__bitmap__Shift_10);
#line 2108 "bitmap.m"
    mercury__bitmap__V_22_22 = (mercury__bitmap__NumBits_7 - (MR_Integer) 1);
#line 2108 "bitmap.m"
    mercury__bitmap__BitMask_20 = ((MR_Integer) 1 << mercury__bitmap__V_22_22);
#line 2109 "bitmap.m"
    mercury__bitmap__V_24_24 = (mercury__bitmap__BitMask_20 - (MR_Integer) 1);
#line 2109 "bitmap.m"
    mercury__bitmap__V_17_17 = (mercury__bitmap__BitMask_20 | mercury__bitmap__V_24_24);
#line 2125 "bitmap.m"
    mercury__bitmap__Bits_8 = (mercury__bitmap__V_16_16 & mercury__bitmap__V_17_17);
#line 2120 "bitmap.m"
    return mercury__bitmap__Bits_8;
#line 2120 "bitmap.m"
  }
#line 2118 "bitmap.m"
}

#line 2093 "bitmap.m"
MR_Integer MR_CALL 
mercury__bitmap__bitmask_1_f_0(
#line 2093 "bitmap.m"
  MR_Integer mercury__bitmap__I_3)
#line 2093 "bitmap.m"
{
#line 2095 "bitmap.m"
  {
#line 2095 "bitmap.m"
    MR_bool mercury__bitmap__succeeded;
#line 2095 "bitmap.m"
    MR_Integer mercury__bitmap__HeadVar__2_2;
#line 2095 "bitmap.m"
    MR_Integer mercury__bitmap__V_5_5;
#line 2095 "bitmap.m"
    MR_Integer mercury__bitmap__V_9_9 = (mercury__bitmap__I_3 % (MR_Integer) 8);

#line 2095 "bitmap.m"
    mercury__bitmap__V_5_5 = ((MR_Integer) 7 - mercury__bitmap__V_9_9);
#line 2095 "bitmap.m"
    mercury__bitmap__HeadVar__2_2 = ((MR_Integer) 1 << mercury__bitmap__V_5_5);
#line 2095 "bitmap.m"
    return mercury__bitmap__HeadVar__2_2;
#line 2095 "bitmap.m"
  }
#line 2093 "bitmap.m"
}

#line 2081 "bitmap.m"
MR_Integer MR_CALL 
mercury__bitmap__bit_index_in_byte_1_f_0(
#line 2081 "bitmap.m"
  MR_Integer mercury__bitmap__I_3)
#line 2081 "bitmap.m"
{
#line 2083 "bitmap.m"
  {
#line 2083 "bitmap.m"
    MR_bool mercury__bitmap__succeeded;
#line 2083 "bitmap.m"
    MR_Integer mercury__bitmap__HeadVar__2_2 = (mercury__bitmap__I_3 % (MR_Integer) 8);

#line 2083 "bitmap.m"
    return mercury__bitmap__HeadVar__2_2;
#line 2083 "bitmap.m"
  }
#line 2081 "bitmap.m"
}

#line 2045 "bitmap.m"
MR_Integer MR_CALL 
mercury__bitmap__byte_index_for_bit_1_f_0(
#line 2045 "bitmap.m"
  MR_Integer mercury__bitmap__I_3)
#line 2045 "bitmap.m"
{
#line 2047 "bitmap.m"
  {
#line 2047 "bitmap.m"
    MR_bool mercury__bitmap__succeeded = (mercury__bitmap__I_3 < (MR_Integer) 0);
#line 2047 "bitmap.m"
    MR_Integer mercury__bitmap__HeadVar__2_2;

#line 2047 "bitmap.m"
    if (mercury__bitmap__succeeded)
#line 2047 "bitmap.m"
      mercury__bitmap__HeadVar__2_2 = (MR_Integer) -1;
#line 2047 "bitmap.m"
    else
#line 2051 "bitmap.m"
      {
#line 2047 "bitmap.m"
        mercury__bitmap__HeadVar__2_2 = (mercury__bitmap__I_3 / (MR_Integer) 8);
#line 2051 "bitmap.m"
      }
#line 2047 "bitmap.m"
    return mercury__bitmap__HeadVar__2_2;
#line 2047 "bitmap.m"
  }
#line 2045 "bitmap.m"
}

#line 1962 "bitmap.m"
static MR_Box MR_CALL 
mercury__bitmap__allocate_bitmap_1_f_0(
#line 1962 "bitmap.m"
  MR_Integer mercury__bitmap__N_1)
#line 1962 "bitmap.m"
{
#line 1964 "bitmap.m"
  {
#line 1964 "bitmap.m"
    MR_bool mercury__bitmap__succeeded;
#line 1964 "bitmap.m"
    MR_Box mercury__bitmap__BM_2;

#line 1967 "bitmap.m"
{
#define MR_PROC_LABEL mercury__bitmap__allocate_bitmap_1_f_0

	MR_Integer N;
	MR_BitmapPtr BM;

	N =  mercury__bitmap__N_1 ;
		{
#line 1967 "bitmap.m"

    MR_allocate_bitmap_msg(BM, N, MR_ALLOC_ID);

#line 4281 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__BM_2  = (MR_Box) BM;
#line 1967 "bitmap.m"
}
#line 1964 "bitmap.m"
    return mercury__bitmap__BM_2;
#line 1964 "bitmap.m"
  }
#line 1962 "bitmap.m"
}

#line 1841 "bitmap.m"
static MR_Box MR_CALL 
mercury__bitmap__f_110_117_109_95_98_105_116_115_32_58_61_2_f_0(
#line 1841 "bitmap.m"
  MR_Box mercury__bitmap__BM0_1,
#line 1841 "bitmap.m"
  MR_Integer mercury__bitmap__NumBits_2)
#line 1841 "bitmap.m"
{
#line 1845 "bitmap.m"
  {
#line 1845 "bitmap.m"
    MR_bool mercury__bitmap__succeeded;
#line 1845 "bitmap.m"
    MR_Box mercury__bitmap__BM_3;

#line 1848 "bitmap.m"
{
#define MR_PROC_LABEL mercury__bitmap__f_110_117_109_95_98_105_116_115_32_58_61_2_f_0

	MR_BitmapPtr BM0;
	MR_Integer NumBits;
	MR_BitmapPtr BM;

	BM0 = (MR_BitmapPtr) mercury__bitmap__BM0_1 ;
	NumBits =  mercury__bitmap__NumBits_2 ;
		{
#line 1848 "bitmap.m"

    BM = BM0;
    BM->num_bits = NumBits;

#line 4327 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__BM_3  = (MR_Box) BM;
#line 1848 "bitmap.m"
}
#line 1845 "bitmap.m"
    return mercury__bitmap__BM_3;
#line 1845 "bitmap.m"
  }
#line 1841 "bitmap.m"
}

#line 1673 "bitmap.m"
void MR_CALL 
mercury__bitmap__bitmap_compare_3_p_0(
#line 1673 "bitmap.m"
  MR_Word * mercury__bitmap__Result_1,
#line 1673 "bitmap.m"
  MR_Box mercury__bitmap__BM1_2,
#line 1673 "bitmap.m"
  MR_Box mercury__bitmap__BM2_3)
#line 1673 "bitmap.m"
{
#line 1675 "bitmap.m"
  {
#line 1675 "bitmap.m"
    MR_bool mercury__bitmap__succeeded;

#line 1678 "bitmap.m"
{
#define MR_PROC_LABEL mercury__bitmap__bitmap_compare_3_p_0

	MR_Word Result;
	MR_BitmapPtr BM1;
	MR_BitmapPtr BM2;

	BM1 = (MR_BitmapPtr) mercury__bitmap__BM1_2 ;
	BM2 = (MR_BitmapPtr) mercury__bitmap__BM2_3 ;
		{
#line 1678 "bitmap.m"

    int res;
    res = MR_bitmap_cmp(BM1, BM2);
    Result = ((res < 0) ? MR_COMPARE_LESS
                : (res == 0) ? MR_COMPARE_EQUAL
                : MR_COMPARE_GREATER);

#line 4376 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__bitmap__Result_1  = Result;
#line 1678 "bitmap.m"
}
#line 1675 "bitmap.m"
  }
#line 1673 "bitmap.m"
}

#line 1626 "bitmap.m"
MR_bool MR_CALL 
mercury__bitmap__bitmap_equal_2_p_0(
#line 1626 "bitmap.m"
  MR_Box mercury__bitmap__BM1_1,
#line 1626 "bitmap.m"
  MR_Box mercury__bitmap__BM2_2)
#line 1626 "bitmap.m"
{
#line 1628 "bitmap.m"
  {
#line 1628 "bitmap.m"
    MR_bool mercury__bitmap__succeeded;

#line 1631 "bitmap.m"
{
#define MR_PROC_LABEL mercury__bitmap__bitmap_equal_2_p_0

	MR_BitmapPtr BM1;
	MR_BitmapPtr BM2;
	MR_bool SUCCESS_INDICATOR;

	BM1 = (MR_BitmapPtr) mercury__bitmap__BM1_1 ;
	BM2 = (MR_BitmapPtr) mercury__bitmap__BM2_2 ;
		{
#line 1631 "bitmap.m"

    SUCCESS_INDICATOR = MR_bitmap_eq(BM1, BM2);

#line 4417 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 1631 "bitmap.m"
	}
mercury__bitmap__succeeded  = SUCCESS_INDICATOR;
}
#line 1628 "bitmap.m"
    return mercury__bitmap__succeeded;
#line 1628 "bitmap.m"
  }
#line 1626 "bitmap.m"
}

#line 1514 "bitmap.m"
static void MR_CALL 
mercury__bitmap__hash_2_5_p_0(
#line 1514 "bitmap.m"
  MR_Box mercury__bitmap__BM_6,
#line 1514 "bitmap.m"
  MR_Integer mercury__bitmap__Index_7,
#line 1514 "bitmap.m"
  MR_Integer mercury__bitmap__Length_8,
#line 1514 "bitmap.m"
  MR_Integer mercury__bitmap__STATE_VARIABLE_HashVal_0_10,
#line 1514 "bitmap.m"
  MR_Integer * mercury__bitmap__STATE_VARIABLE_HashVal_11)
#line 1514 "bitmap.m"
{
#line 1520 "bitmap.m"
  while (MR_TRUE)
#line 1520 "bitmap.m"
    {
#line 1520 "bitmap.m"
      /* tailcall optimized into a loop */
#line 1520 "bitmap.m"
      {
#line 1520 "bitmap.m"
        MR_bool mercury__bitmap__succeeded = (mercury__bitmap__Index_7 < mercury__bitmap__Length_8);

#line 1520 "bitmap.m"
        if (mercury__bitmap__succeeded)
#line 1518 "bitmap.m"
          {
#line 1518 "bitmap.m"
            MR_Integer mercury__bitmap__V_12_12;
#line 1518 "bitmap.m"
            MR_Integer mercury__bitmap__STATE_VARIABLE_HashVal_13_13;
#line 1518 "bitmap.m"
            MR_Integer mercury__bitmap__V_14_14;
#line 1518 "bitmap.m"
            MR_Integer mercury__bitmap__H1_24;
#line 1518 "bitmap.m"
            MR_Integer mercury__bitmap__V_25_25;

#line 1887 "bitmap.m"
{
#define MR_PROC_LABEL mercury__bitmap__hash_2_5_p_0

	MR_Integer N;
	MR_BitmapPtr BM;
	MR_Integer Byte;

	N =  mercury__bitmap__Index_7 ;
	BM = (MR_BitmapPtr) mercury__bitmap__BM_6 ;
		{
#line 1887 "bitmap.m"

    Byte = (MR_Integer) BM->elements[N];

#line 4489 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__V_12_12  = Byte;
#line 1887 "bitmap.m"
}
#line 1527 "bitmap.m"
            {
#line 1527 "bitmap.m"
              mercury__bitmap__V_25_25 = mercury__int__f_60_60_2_f_0(mercury__bitmap__STATE_VARIABLE_HashVal_0_10, (MR_Integer) 5);
            }
#line 1527 "bitmap.m"
            mercury__bitmap__H1_24 = (mercury__bitmap__STATE_VARIABLE_HashVal_0_10 ^ mercury__bitmap__V_25_25);
#line 1528 "bitmap.m"
            mercury__bitmap__STATE_VARIABLE_HashVal_13_13 = (mercury__bitmap__H1_24 ^ mercury__bitmap__V_12_12);
#line 1519 "bitmap.m"
            mercury__bitmap__V_14_14 = (mercury__bitmap__Index_7 + (MR_Integer) 1);
#line 1519 "bitmap.m"
            /* direct tailcall eliminated */
#line 1519 "bitmap.m"
            {
#line 1519 "bitmap.m"
              MR_Integer mercury__bitmap__Index__tmp_copy_7 = mercury__bitmap__V_14_14;
#line 1519 "bitmap.m"
              MR_Integer mercury__bitmap__STATE_VARIABLE_HashVal_0__tmp_copy_10 = mercury__bitmap__STATE_VARIABLE_HashVal_13_13;

#line 1519 "bitmap.m"
              mercury__bitmap__STATE_VARIABLE_HashVal_0_10 = mercury__bitmap__STATE_VARIABLE_HashVal_0__tmp_copy_10;
#line 1519 "bitmap.m"
              mercury__bitmap__Index_7 = mercury__bitmap__Index__tmp_copy_7;
#line 1519 "bitmap.m"
            }
#line 1519 "bitmap.m"
            continue;
#line 1518 "bitmap.m"
          }
#line 1520 "bitmap.m"
        else
#line 1519 "bitmap.m"
          *mercury__bitmap__STATE_VARIABLE_HashVal_11 = mercury__bitmap__STATE_VARIABLE_HashVal_0_10;
#line 1520 "bitmap.m"
      }
#line 1520 "bitmap.m"
      break;
#line 1520 "bitmap.m"
    }
#line 1514 "bitmap.m"
}

#line 1475 "bitmap.m"
MR_Word MR_CALL 
mercury__bitmap__bitmap_to_byte_strings_3_f_0(
#line 1475 "bitmap.m"
  MR_Box mercury__bitmap__BM_5,
#line 1475 "bitmap.m"
  MR_Integer mercury__bitmap__NumBits_6,
#line 1475 "bitmap.m"
  MR_Word mercury__bitmap__STATE_VARIABLE_Strs_0_13)
#line 1475 "bitmap.m"
{
#line 1480 "bitmap.m"
  while (MR_TRUE)
#line 1480 "bitmap.m"
    {
#line 1480 "bitmap.m"
      /* tailcall optimized into a loop */
#line 1480 "bitmap.m"
      {
#line 1480 "bitmap.m"
        MR_bool mercury__bitmap__succeeded = (mercury__bitmap__NumBits_6 <= (MR_Integer) 0);
#line 1480 "bitmap.m"
        MR_Word mercury__bitmap__STATE_VARIABLE_Strs_14;

#line 1480 "bitmap.m"
        if (mercury__bitmap__succeeded)
#line 1478 "bitmap.m"
          mercury__bitmap__STATE_VARIABLE_Strs_14 = mercury__bitmap__STATE_VARIABLE_Strs_0_13;
#line 1480 "bitmap.m"
        else
#line 1481 "bitmap.m"
          {
#line 1481 "bitmap.m"
            MR_Integer mercury__bitmap__ThisByte0_8;
#line 1481 "bitmap.m"
            MR_Integer mercury__bitmap__LastBitIndex_9;
#line 1481 "bitmap.m"
            MR_Integer mercury__bitmap__BitsThisByte_10;
#line 1481 "bitmap.m"
            MR_Integer mercury__bitmap__ThisByte_11;
#line 1481 "bitmap.m"
            MR_String mercury__bitmap__ThisByteStr_12;
#line 1481 "bitmap.m"
            MR_Integer mercury__bitmap__V_16_16;
#line 1481 "bitmap.m"
            MR_Integer mercury__bitmap__V_17_17 = (mercury__bitmap__NumBits_6 - (MR_Integer) 1);
#line 1481 "bitmap.m"
            MR_Integer mercury__bitmap__V_19_19;
#line 1481 "bitmap.m"
            MR_String mercury__bitmap__V_26_26;
#line 1481 "bitmap.m"
            MR_Word mercury__bitmap__STATE_VARIABLE_Strs_29_29;
#line 1481 "bitmap.m"
            MR_Integer mercury__bitmap__V_31_31;
#line 1483 "bitmap.m"
            MR_Integer mercury__bitmap__V_22_22;

#line 2048 "bitmap.m"
            mercury__bitmap__succeeded = (mercury__bitmap__V_17_17 < (MR_Integer) 0);
#line 2047 "bitmap.m"
            if (mercury__bitmap__succeeded)
#line 2047 "bitmap.m"
              mercury__bitmap__V_16_16 = (MR_Integer) -1;
#line 2047 "bitmap.m"
            else
#line 2051 "bitmap.m"
              {
#line 2047 "bitmap.m"
                mercury__bitmap__V_16_16 = (mercury__bitmap__V_17_17 / (MR_Integer) 8);
#line 2051 "bitmap.m"
              }
#line 1887 "bitmap.m"
{
#define MR_PROC_LABEL mercury__bitmap__bitmap_to_byte_strings_3_f_0

	MR_Integer N;
	MR_BitmapPtr BM;
	MR_Integer Byte;

	N =  mercury__bitmap__V_16_16 ;
	BM = (MR_BitmapPtr) mercury__bitmap__BM_5 ;
		{
#line 1887 "bitmap.m"

    Byte = (MR_Integer) BM->elements[N];

#line 4625 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__ThisByte0_8  = Byte;
#line 1887 "bitmap.m"
}
#line 1482 "bitmap.m"
            mercury__bitmap__V_19_19 = (mercury__bitmap__NumBits_6 - (MR_Integer) 1);
#line 2083 "bitmap.m"
            mercury__bitmap__LastBitIndex_9 = (mercury__bitmap__V_19_19 % (MR_Integer) 8);
#line 1483 "bitmap.m"
            mercury__bitmap__V_22_22 = ((MR_Integer) 8 - mercury__bitmap__LastBitIndex_9);
#line 1483 "bitmap.m"
            mercury__bitmap__succeeded = (mercury__bitmap__V_22_22 == (MR_Integer) 1);
#line 1486 "bitmap.m"
            if (mercury__bitmap__succeeded)
#line 1484 "bitmap.m"
              {
#line 2039 "bitmap.m"
                mercury__bitmap__BitsThisByte_10 = (MR_Integer) 8;
#line 1485 "bitmap.m"
                mercury__bitmap__ThisByte_11 = mercury__bitmap__ThisByte0_8;
#line 1484 "bitmap.m"
              }
#line 1486 "bitmap.m"
            else
#line 1487 "bitmap.m"
              {
#line 1487 "bitmap.m"
                MR_Integer mercury__bitmap__V_24_24;

#line 1487 "bitmap.m"
                mercury__bitmap__BitsThisByte_10 = (mercury__bitmap__LastBitIndex_9 + (MR_Integer) 1);
#line 1488 "bitmap.m"
                mercury__bitmap__V_24_24 = ((MR_Integer) 8 - mercury__bitmap__BitsThisByte_10);
#line 1488 "bitmap.m"
                mercury__bitmap__ThisByte_11 = (mercury__bitmap__ThisByte0_8 >> mercury__bitmap__V_24_24);
#line 1487 "bitmap.m"
              }
#line 293 "string.opt"
            {
#line 293 "string.opt"
              mercury__string__int_to_base_string_3_p_0(mercury__bitmap__ThisByte_11, (MR_Integer) 2, &mercury__bitmap__V_26_26);
            }
#line 522 "string.opt"
            {
#line 522 "string.opt"
              mercury__string__pad_left_4_p_0(mercury__bitmap__V_26_26, (MR_Char) 48, mercury__bitmap__BitsThisByte_10, &mercury__bitmap__ThisByteStr_12);
            }
#line 1494 "bitmap.m"
            {
#line 1494 "bitmap.m"
              mercury__bitmap__STATE_VARIABLE_Strs_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1494 "bitmap.m"
              MR_hl_field(MR_mktag(1), mercury__bitmap__STATE_VARIABLE_Strs_29_29, 0) = ((MR_Box) (mercury__bitmap__ThisByteStr_12));
#line 1494 "bitmap.m"
              MR_hl_field(MR_mktag(1), mercury__bitmap__STATE_VARIABLE_Strs_29_29, 1) = ((MR_Box) (mercury__bitmap__STATE_VARIABLE_Strs_0_13));
#line 1494 "bitmap.m"
            }
#line 1495 "bitmap.m"
            mercury__bitmap__V_31_31 = (mercury__bitmap__NumBits_6 - mercury__bitmap__BitsThisByte_10);
#line 1495 "bitmap.m"
            /* direct tailcall eliminated */
#line 1495 "bitmap.m"
            {
#line 1495 "bitmap.m"
              MR_Integer mercury__bitmap__NumBits__tmp_copy_6 = mercury__bitmap__V_31_31;
#line 1495 "bitmap.m"
              MR_Word mercury__bitmap__STATE_VARIABLE_Strs_0__tmp_copy_13 = mercury__bitmap__STATE_VARIABLE_Strs_29_29;

#line 1495 "bitmap.m"
              mercury__bitmap__STATE_VARIABLE_Strs_0_13 = mercury__bitmap__STATE_VARIABLE_Strs_0__tmp_copy_13;
#line 1495 "bitmap.m"
              mercury__bitmap__NumBits_6 = mercury__bitmap__NumBits__tmp_copy_6;
#line 1495 "bitmap.m"
            }
#line 1495 "bitmap.m"
            continue;
#line 1481 "bitmap.m"
          }
#line 1480 "bitmap.m"
        return mercury__bitmap__STATE_VARIABLE_Strs_14;
#line 1480 "bitmap.m"
      }
#line 1480 "bitmap.m"
      break;
#line 1480 "bitmap.m"
    }
#line 1475 "bitmap.m"
}

#line 1467 "bitmap.m"
MR_Word MR_CALL 
mercury__bitmap__bitmap_to_byte_strings_1_f_0(
#line 1467 "bitmap.m"
  MR_Box mercury__bitmap__BM_3)
#line 1467 "bitmap.m"
{
#line 1469 "bitmap.m"
  {
#line 1469 "bitmap.m"
    MR_bool mercury__bitmap__succeeded;
#line 1469 "bitmap.m"
    MR_Word mercury__bitmap__Strs_4;
#line 1469 "bitmap.m"
    MR_Integer mercury__bitmap__NumBits_5;
#line 1469 "bitmap.m"
    MR_Word mercury__bitmap__V_6_6;

#line 1813 "bitmap.m"
{
#define MR_PROC_LABEL mercury__bitmap__bitmap_to_byte_strings_1_f_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr) mercury__bitmap__BM_3 ;
		{
#line 1813 "bitmap.m"

    NumBits = BM->num_bits;

#line 4748 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__NumBits_5  = NumBits;
#line 1813 "bitmap.m"
}
#line 1471 "bitmap.m"
    mercury__bitmap__V_6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1471 "bitmap.m"
    {
#line 1471 "bitmap.m"
      return mercury__bitmap__Strs_4 = mercury__bitmap__bitmap_to_byte_strings_3_f_0(mercury__bitmap__BM_3, mercury__bitmap__NumBits_5, mercury__bitmap__V_6_6);
    }
#line 1469 "bitmap.m"
    return mercury__bitmap__Strs_4;
#line 1469 "bitmap.m"
  }
#line 1467 "bitmap.m"
}

#line 1444 "bitmap.m"
static MR_bool MR_CALL 
mercury__bitmap__hex_chars_to_bitmap_6_p_0(
#line 1444 "bitmap.m"
  MR_String mercury__bitmap__Str_7,
#line 1444 "bitmap.m"
  MR_Integer mercury__bitmap__Index_8,
#line 1444 "bitmap.m"
  MR_Integer mercury__bitmap__End_9,
#line 1444 "bitmap.m"
  MR_Integer mercury__bitmap__ByteIndex_10,
#line 1444 "bitmap.m"
  MR_Box mercury__bitmap__STATE_VARIABLE_BM_0_15,
#line 1444 "bitmap.m"
  MR_Box * mercury__bitmap__STATE_VARIABLE_BM_16)
#line 1444 "bitmap.m"
{
#line 1450 "bitmap.m"
  while (MR_TRUE)
#line 1450 "bitmap.m"
    {
#line 1450 "bitmap.m"
      /* tailcall optimized into a loop */
#line 1450 "bitmap.m"
      {
#line 1450 "bitmap.m"
        MR_bool mercury__bitmap__succeeded = (mercury__bitmap__Index_8 == mercury__bitmap__End_9);

#line 1450 "bitmap.m"
        if (mercury__bitmap__succeeded)
#line 1448 "bitmap.m"
          {
#line 1448 "bitmap.m"
            *mercury__bitmap__STATE_VARIABLE_BM_16 = mercury__bitmap__STATE_VARIABLE_BM_0_15;
#line 1448 "bitmap.m"
            mercury__bitmap__succeeded = MR_TRUE;
#line 1448 "bitmap.m"
          }
#line 1450 "bitmap.m"
        else
#line 1453 "bitmap.m"
          {
#line 1450 "bitmap.m"
            MR_Integer mercury__bitmap__V_17_17 = (mercury__bitmap__End_9 - mercury__bitmap__Index_8);

#line 1450 "bitmap.m"
            mercury__bitmap__succeeded = (mercury__bitmap__V_17_17 == (MR_Integer) 1);
#line 1453 "bitmap.m"
            if (mercury__bitmap__succeeded)
#line 1452 "bitmap.m"
              mercury__bitmap__succeeded = MR_FALSE;
#line 1453 "bitmap.m"
            else
#line 1454 "bitmap.m"
              {
#line 1454 "bitmap.m"
                MR_Integer mercury__bitmap__HighNibble_12;
#line 1454 "bitmap.m"
                MR_Integer mercury__bitmap__LowNibble_13;
#line 1454 "bitmap.m"
                MR_Integer mercury__bitmap__Byte_14;
#line 1454 "bitmap.m"
                MR_Char mercury__bitmap__V_18_18;
#line 1454 "bitmap.m"
                MR_Char mercury__bitmap__V_19_19;
#line 1454 "bitmap.m"
                MR_Integer mercury__bitmap__V_20_20;
#line 1454 "bitmap.m"
                MR_Integer mercury__bitmap__V_21_21;
#line 1454 "bitmap.m"
                MR_Integer mercury__bitmap__V_22_22;
#line 1454 "bitmap.m"
                MR_Integer mercury__bitmap__V_23_23;
#line 1454 "bitmap.m"
                MR_Box mercury__bitmap__STATE_VARIABLE_BM_24_24;
#line 1454 "bitmap.m"
                MR_Integer mercury__bitmap__V_25_25;
#line 1454 "bitmap.m"
                MR_Integer mercury__bitmap__V_26_26;
#line 1454 "bitmap.m"
                MR_Integer mercury__bitmap__V_28_28;
#line 1454 "bitmap.m"
                MR_Integer mercury__bitmap__V_29_29;

#line 567 "string.opt"
                {
#line 567 "string.opt"
                  mercury__string__unsafe_index_3_p_0(mercury__bitmap__Str_7, mercury__bitmap__Index_8, &mercury__bitmap__V_18_18);
                }
#line 1454 "bitmap.m"
                {
#line 1454 "bitmap.m"
                  mercury__bitmap__succeeded = mercury__char__is_hex_digit_2_p_0(mercury__bitmap__V_18_18, &mercury__bitmap__HighNibble_12);
                }
#line 1454 "bitmap.m"
                if (mercury__bitmap__succeeded)
#line 1454 "bitmap.m"
                  {
#line 1455 "bitmap.m"
                    mercury__bitmap__V_21_21 = (MR_Integer) 1;
#line 1455 "bitmap.m"
                    mercury__bitmap__V_20_20 = (mercury__bitmap__Index_8 + mercury__bitmap__V_21_21);
#line 567 "string.opt"
                    {
#line 567 "string.opt"
                      mercury__string__unsafe_index_3_p_0(mercury__bitmap__Str_7, mercury__bitmap__V_20_20, &mercury__bitmap__V_19_19);
                    }
#line 1455 "bitmap.m"
                    {
#line 1455 "bitmap.m"
                      mercury__bitmap__succeeded = mercury__char__is_hex_digit_2_p_0(mercury__bitmap__V_19_19, &mercury__bitmap__LowNibble_13);
                    }
#line 1454 "bitmap.m"
                    if (mercury__bitmap__succeeded)
#line 1454 "bitmap.m"
                      {
#line 1456 "bitmap.m"
                        mercury__bitmap__V_23_23 = (MR_Integer) 4;
#line 1456 "bitmap.m"
                        mercury__bitmap__V_22_22 = (mercury__bitmap__HighNibble_12 << mercury__bitmap__V_23_23);
#line 1456 "bitmap.m"
                        mercury__bitmap__Byte_14 = (mercury__bitmap__V_22_22 | mercury__bitmap__LowNibble_13);
#line 1928 "bitmap.m"
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
#line 1928 "bitmap.m"

    BM = BM0;
    BM->elements[N] = (MR_uint_least8_t) Byte;

#line 4909 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__STATE_VARIABLE_BM_24_24  = (MR_Box) BM;
#line 1928 "bitmap.m"
}
#line 1458 "bitmap.m"
                        mercury__bitmap__V_28_28 = (MR_Integer) 2;
#line 1458 "bitmap.m"
                        mercury__bitmap__V_25_25 = (mercury__bitmap__Index_8 + mercury__bitmap__V_28_28);
#line 1458 "bitmap.m"
                        mercury__bitmap__V_29_29 = (MR_Integer) 1;
#line 1458 "bitmap.m"
                        mercury__bitmap__V_26_26 = (mercury__bitmap__ByteIndex_10 + mercury__bitmap__V_29_29);
#line 1458 "bitmap.m"
                        /* direct tailcall eliminated */
#line 1458 "bitmap.m"
                        {
#line 1458 "bitmap.m"
                          MR_Integer mercury__bitmap__Index__tmp_copy_8 = mercury__bitmap__V_25_25;
#line 1458 "bitmap.m"
                          MR_Integer mercury__bitmap__ByteIndex__tmp_copy_10 = mercury__bitmap__V_26_26;
#line 1458 "bitmap.m"
                          MR_Box mercury__bitmap__STATE_VARIABLE_BM_0__tmp_copy_15 = mercury__bitmap__STATE_VARIABLE_BM_24_24;

#line 1458 "bitmap.m"
                          mercury__bitmap__STATE_VARIABLE_BM_0_15 = mercury__bitmap__STATE_VARIABLE_BM_0__tmp_copy_15;
#line 1458 "bitmap.m"
                          mercury__bitmap__ByteIndex_10 = mercury__bitmap__ByteIndex__tmp_copy_10;
#line 1458 "bitmap.m"
                          mercury__bitmap__Index_8 = mercury__bitmap__Index__tmp_copy_8;
#line 1458 "bitmap.m"
                        }
#line 1458 "bitmap.m"
                        continue;
#line 1454 "bitmap.m"
                      }
#line 1454 "bitmap.m"
                  }
#line 1454 "bitmap.m"
              }
#line 1453 "bitmap.m"
          }
#line 1450 "bitmap.m"
        return mercury__bitmap__succeeded;
#line 1450 "bitmap.m"
      }
#line 1450 "bitmap.m"
      break;
#line 1450 "bitmap.m"
    }
#line 1444 "bitmap.m"
}

#line 1408 "bitmap.m"
static void MR_CALL 
mercury__bitmap__to_string_chars_4_p_0(
#line 1408 "bitmap.m"
  MR_Integer mercury__bitmap__Index_5,
#line 1408 "bitmap.m"
  MR_Box mercury__bitmap__BM_6,
#line 1408 "bitmap.m"
  MR_Word mercury__bitmap__STATE_VARIABLE_Chars_0_12,
#line 1408 "bitmap.m"
  MR_Word * mercury__bitmap__STATE_VARIABLE_Chars_13)
#line 1408 "bitmap.m"
{
#line 1413 "bitmap.m"
  while (MR_TRUE)
#line 1413 "bitmap.m"
    {
#line 1413 "bitmap.m"
      /* tailcall optimized into a loop */
#line 1413 "bitmap.m"
      {
#line 1413 "bitmap.m"
        MR_bool mercury__bitmap__succeeded = (mercury__bitmap__Index_5 < (MR_Integer) 0);

#line 1413 "bitmap.m"
        if (mercury__bitmap__succeeded)
#line 1411 "bitmap.m"
          *mercury__bitmap__STATE_VARIABLE_Chars_13 = mercury__bitmap__STATE_VARIABLE_Chars_0_12;
#line 1413 "bitmap.m"
        else
#line 1414 "bitmap.m"
          {
#line 1414 "bitmap.m"
            MR_Integer mercury__bitmap__Byte_8;
#line 1423 "bitmap.m"
            MR_Char mercury__bitmap__HighChar_10;
#line 1423 "bitmap.m"
            MR_Char mercury__bitmap__LowChar_11;
#line 1418 "bitmap.m"
            MR_Integer mercury__bitmap__V_16_16;
#line 1418 "bitmap.m"
            MR_Integer mercury__bitmap__V_17_17;
#line 1418 "bitmap.m"
            MR_Integer mercury__bitmap__V_19_19;

#line 1887 "bitmap.m"
{
#define MR_PROC_LABEL mercury__bitmap__to_string_chars_4_p_0

	MR_Integer N;
	MR_BitmapPtr BM;
	MR_Integer Byte;

	N =  mercury__bitmap__Index_5 ;
	BM = (MR_BitmapPtr) mercury__bitmap__BM_6 ;
		{
#line 1887 "bitmap.m"

    Byte = (MR_Integer) BM->elements[N];

#line 5024 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__Byte_8  = Byte;
#line 1887 "bitmap.m"
}
#line 1417 "bitmap.m"
            mercury__bitmap__V_17_17 = (mercury__bitmap__Byte_8 >> (MR_Integer) 4);
#line 1417 "bitmap.m"
            mercury__bitmap__V_16_16 = (mercury__bitmap__V_17_17 & (MR_Integer) 15);
#line 1417 "bitmap.m"
            {
#line 1417 "bitmap.m"
              mercury__bitmap__succeeded = mercury__char__int_to_hex_char_2_p_0(mercury__bitmap__V_16_16, &mercury__bitmap__HighChar_10);
            }
#line 1418 "bitmap.m"
            if (mercury__bitmap__succeeded)
#line 1418 "bitmap.m"
              {
#line 1419 "bitmap.m"
                mercury__bitmap__V_19_19 = (mercury__bitmap__Byte_8 & (MR_Integer) 15);
#line 1419 "bitmap.m"
                {
#line 1419 "bitmap.m"
                  mercury__bitmap__succeeded = mercury__char__int_to_hex_char_2_p_0(mercury__bitmap__V_19_19, &mercury__bitmap__LowChar_11);
                }
#line 1418 "bitmap.m"
              }
#line 1423 "bitmap.m"
            if (mercury__bitmap__succeeded)
#line 1421 "bitmap.m"
              {
#line 1421 "bitmap.m"
                MR_Word mercury__bitmap__STATE_VARIABLE_Chars_20_20;
#line 1421 "bitmap.m"
                MR_Word mercury__bitmap__V_21_21;
#line 1421 "bitmap.m"
                MR_Integer mercury__bitmap__V_22_22;

#line 1421 "bitmap.m"
                {
#line 1421 "bitmap.m"
                  mercury__bitmap__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1421 "bitmap.m"
                  MR_hl_field(MR_mktag(1), mercury__bitmap__V_21_21, 0) = ((MR_Box) (MR_Word) (mercury__bitmap__LowChar_11));
#line 1421 "bitmap.m"
                  MR_hl_field(MR_mktag(1), mercury__bitmap__V_21_21, 1) = ((MR_Box) (mercury__bitmap__STATE_VARIABLE_Chars_0_12));
#line 1421 "bitmap.m"
                }
#line 1421 "bitmap.m"
                {
#line 1421 "bitmap.m"
                  mercury__bitmap__STATE_VARIABLE_Chars_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1421 "bitmap.m"
                  MR_hl_field(MR_mktag(1), mercury__bitmap__STATE_VARIABLE_Chars_20_20, 0) = ((MR_Box) (MR_Word) (mercury__bitmap__HighChar_10));
#line 1421 "bitmap.m"
                  MR_hl_field(MR_mktag(1), mercury__bitmap__STATE_VARIABLE_Chars_20_20, 1) = ((MR_Box) (mercury__bitmap__V_21_21));
#line 1421 "bitmap.m"
                }
#line 1422 "bitmap.m"
                mercury__bitmap__V_22_22 = (mercury__bitmap__Index_5 - (MR_Integer) 1);
#line 1422 "bitmap.m"
                /* direct tailcall eliminated */
#line 1422 "bitmap.m"
                {
#line 1422 "bitmap.m"
                  MR_Integer mercury__bitmap__Index__tmp_copy_5 = mercury__bitmap__V_22_22;
#line 1422 "bitmap.m"
                  MR_Word mercury__bitmap__STATE_VARIABLE_Chars_0__tmp_copy_12 = mercury__bitmap__STATE_VARIABLE_Chars_20_20;

#line 1422 "bitmap.m"
                  mercury__bitmap__STATE_VARIABLE_Chars_0_12 = mercury__bitmap__STATE_VARIABLE_Chars_0__tmp_copy_12;
#line 1422 "bitmap.m"
                  mercury__bitmap__Index_5 = mercury__bitmap__Index__tmp_copy_5;
#line 1422 "bitmap.m"
                }
#line 1422 "bitmap.m"
                continue;
#line 1421 "bitmap.m"
              }
#line 1423 "bitmap.m"
            else
#line 1424 "bitmap.m"
              {
#line 1424 "bitmap.m"
                MR_Word mercury__bitmap__TypeCtorInfo_27_27 = (MR_Word) &mercury__exception__exception__type_ctor_info_software_error_0;
#line 1424 "bitmap.m"
                MR_Word mercury__bitmap__V_25_25 = (MR_Word) ((MR_Box) ((MR_String) "bitmap.to_string: internal error"));

#line 1424 "bitmap.m"
                {
#line 1424 "bitmap.m"
                  mercury__exception__throw_1_p_0(mercury__bitmap__TypeCtorInfo_27_27, ((MR_Box) (mercury__bitmap__V_25_25)));
#line 1424 "bitmap.m"
                  return;
                }
#line 1424 "bitmap.m"
              }
#line 1414 "bitmap.m"
          }
#line 1413 "bitmap.m"
      }
#line 1413 "bitmap.m"
      break;
#line 1413 "bitmap.m"
    }
#line 1408 "bitmap.m"
}

#line 1336 "bitmap.m"
static MR_Box MR_CALL 
mercury__bitmap__unsafe_copy_unaligned_bytes_rtol_7_f_0(
#line 1336 "bitmap.m"
  MR_Box mercury__bitmap__SrcBM_9,
#line 1336 "bitmap.m"
  MR_Integer mercury__bitmap__SrcByteIndex_10,
#line 1336 "bitmap.m"
  MR_Integer mercury__bitmap__SrcBitIndex_11,
#line 1336 "bitmap.m"
  MR_Integer mercury__bitmap__PrevSrcByteBits_12,
#line 1336 "bitmap.m"
  MR_Box mercury__bitmap__STATE_VARIABLE_DestBM_0_18,
#line 1336 "bitmap.m"
  MR_Integer mercury__bitmap__DestByteIndex_14,
#line 1336 "bitmap.m"
  MR_Integer mercury__bitmap__NumBytes_15)
#line 1336 "bitmap.m"
{
#line 1345 "bitmap.m"
  while (MR_TRUE)
#line 1345 "bitmap.m"
    {
#line 1345 "bitmap.m"
      /* tailcall optimized into a loop */
#line 1345 "bitmap.m"
      {
#line 1345 "bitmap.m"
        MR_bool mercury__bitmap__succeeded = (mercury__bitmap__NumBytes_15 <= (MR_Integer) 0);
#line 1345 "bitmap.m"
        MR_Box mercury__bitmap__STATE_VARIABLE_DestBM_19;

#line 1345 "bitmap.m"
        if (mercury__bitmap__succeeded)
#line 1343 "bitmap.m"
          mercury__bitmap__STATE_VARIABLE_DestBM_19 = mercury__bitmap__STATE_VARIABLE_DestBM_0_18;
#line 1345 "bitmap.m"
        else
#line 1363 "bitmap.m"
          {
#line 1363 "bitmap.m"
            MR_Integer mercury__bitmap__SrcByteBits_16;
#line 1363 "bitmap.m"
            MR_Integer mercury__bitmap__DestByteBits_17;
#line 1363 "bitmap.m"
            MR_Integer mercury__bitmap__V_21_21;
#line 1363 "bitmap.m"
            MR_Integer mercury__bitmap__V_22_22;
#line 1363 "bitmap.m"
            MR_Integer mercury__bitmap__V_23_23;
#line 1363 "bitmap.m"
            MR_Box mercury__bitmap__STATE_VARIABLE_DestBM_25_25;
#line 1363 "bitmap.m"
            MR_Integer mercury__bitmap__V_27_27;
#line 1363 "bitmap.m"
            MR_Integer mercury__bitmap__V_29_29;
#line 1363 "bitmap.m"
            MR_Integer mercury__bitmap__V_31_31;

#line 1887 "bitmap.m"
{
#define MR_PROC_LABEL mercury__bitmap__unsafe_copy_unaligned_bytes_rtol_7_f_0

	MR_Integer N;
	MR_BitmapPtr BM;
	MR_Integer Byte;

	N =  mercury__bitmap__SrcByteIndex_10 ;
	BM = (MR_BitmapPtr) mercury__bitmap__SrcBM_9 ;
		{
#line 1887 "bitmap.m"

    Byte = (MR_Integer) BM->elements[N];

#line 5208 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__SrcByteBits_16  = Byte;
#line 1887 "bitmap.m"
}
#line 1366 "bitmap.m"
            mercury__bitmap__V_21_21 = (mercury__bitmap__SrcByteBits_16 << mercury__bitmap__SrcBitIndex_11);
#line 1366 "bitmap.m"
            mercury__bitmap__V_23_23 = ((MR_Integer) 8 - mercury__bitmap__SrcBitIndex_11);
#line 1366 "bitmap.m"
            mercury__bitmap__V_22_22 = (mercury__bitmap__PrevSrcByteBits_12 >> mercury__bitmap__V_23_23);
#line 1364 "bitmap.m"
            mercury__bitmap__DestByteBits_17 = (mercury__bitmap__V_21_21 | mercury__bitmap__V_22_22);
#line 1928 "bitmap.m"
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
#line 1928 "bitmap.m"

    BM = BM0;
    BM->elements[N] = (MR_uint_least8_t) Byte;

#line 5241 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__STATE_VARIABLE_DestBM_25_25  = (MR_Box) BM;
#line 1928 "bitmap.m"
}
#line 1370 "bitmap.m"
            mercury__bitmap__V_27_27 = (mercury__bitmap__SrcByteIndex_10 - (MR_Integer) 1);
#line 1370 "bitmap.m"
            mercury__bitmap__V_29_29 = (mercury__bitmap__DestByteIndex_14 - (MR_Integer) 1);
#line 1370 "bitmap.m"
            mercury__bitmap__V_31_31 = (mercury__bitmap__NumBytes_15 - (MR_Integer) 1);
#line 1370 "bitmap.m"
            /* direct tailcall eliminated */
#line 1370 "bitmap.m"
            {
#line 1370 "bitmap.m"
              MR_Integer mercury__bitmap__SrcByteIndex__tmp_copy_10 = mercury__bitmap__V_27_27;
#line 1370 "bitmap.m"
              MR_Integer mercury__bitmap__PrevSrcByteBits__tmp_copy_12 = mercury__bitmap__SrcByteBits_16;
#line 1370 "bitmap.m"
              MR_Box mercury__bitmap__STATE_VARIABLE_DestBM_0__tmp_copy_18 = mercury__bitmap__STATE_VARIABLE_DestBM_25_25;
#line 1370 "bitmap.m"
              MR_Integer mercury__bitmap__DestByteIndex__tmp_copy_14 = mercury__bitmap__V_29_29;
#line 1370 "bitmap.m"
              MR_Integer mercury__bitmap__NumBytes__tmp_copy_15 = mercury__bitmap__V_31_31;

#line 1370 "bitmap.m"
              mercury__bitmap__NumBytes_15 = mercury__bitmap__NumBytes__tmp_copy_15;
#line 1370 "bitmap.m"
              mercury__bitmap__DestByteIndex_14 = mercury__bitmap__DestByteIndex__tmp_copy_14;
#line 1370 "bitmap.m"
              mercury__bitmap__STATE_VARIABLE_DestBM_0_18 = mercury__bitmap__STATE_VARIABLE_DestBM_0__tmp_copy_18;
#line 1370 "bitmap.m"
              mercury__bitmap__PrevSrcByteBits_12 = mercury__bitmap__PrevSrcByteBits__tmp_copy_12;
#line 1370 "bitmap.m"
              mercury__bitmap__SrcByteIndex_10 = mercury__bitmap__SrcByteIndex__tmp_copy_10;
#line 1370 "bitmap.m"
            }
#line 1370 "bitmap.m"
            continue;
#line 1363 "bitmap.m"
          }
#line 1345 "bitmap.m"
        return mercury__bitmap__STATE_VARIABLE_DestBM_19;
#line 1345 "bitmap.m"
      }
#line 1345 "bitmap.m"
      break;
#line 1345 "bitmap.m"
    }
#line 1336 "bitmap.m"
}

#line 1295 "bitmap.m"
static MR_Box MR_CALL 
mercury__bitmap__unsafe_copy_unaligned_bytes_ltor_7_f_0(
#line 1295 "bitmap.m"
  MR_Box mercury__bitmap__SrcBM_9,
#line 1295 "bitmap.m"
  MR_Integer mercury__bitmap__SrcByteIndex_10,
#line 1295 "bitmap.m"
  MR_Integer mercury__bitmap__SrcBitIndex_11,
#line 1295 "bitmap.m"
  MR_Integer mercury__bitmap__PrevSrcByteBits_12,
#line 1295 "bitmap.m"
  MR_Box mercury__bitmap__STATE_VARIABLE_DestBM_0_18,
#line 1295 "bitmap.m"
  MR_Integer mercury__bitmap__DestByteIndex_14,
#line 1295 "bitmap.m"
  MR_Integer mercury__bitmap__NumBytes_15)
#line 1295 "bitmap.m"
{
#line 1304 "bitmap.m"
  while (MR_TRUE)
#line 1304 "bitmap.m"
    {
#line 1304 "bitmap.m"
      /* tailcall optimized into a loop */
#line 1304 "bitmap.m"
      {
#line 1304 "bitmap.m"
        MR_bool mercury__bitmap__succeeded = (mercury__bitmap__NumBytes_15 <= (MR_Integer) 0);
#line 1304 "bitmap.m"
        MR_Box mercury__bitmap__STATE_VARIABLE_DestBM_19;

#line 1304 "bitmap.m"
        if (mercury__bitmap__succeeded)
#line 1302 "bitmap.m"
          mercury__bitmap__STATE_VARIABLE_DestBM_19 = mercury__bitmap__STATE_VARIABLE_DestBM_0_18;
#line 1304 "bitmap.m"
        else
#line 1323 "bitmap.m"
          {
#line 1323 "bitmap.m"
            MR_Integer mercury__bitmap__SrcByteBits_16;
#line 1323 "bitmap.m"
            MR_Integer mercury__bitmap__DestByteBits_17;
#line 1323 "bitmap.m"
            MR_Integer mercury__bitmap__V_21_21;
#line 1323 "bitmap.m"
            MR_Integer mercury__bitmap__V_22_22;
#line 1323 "bitmap.m"
            MR_Integer mercury__bitmap__V_23_23;
#line 1323 "bitmap.m"
            MR_Box mercury__bitmap__STATE_VARIABLE_DestBM_25_25;
#line 1323 "bitmap.m"
            MR_Integer mercury__bitmap__V_27_27;
#line 1323 "bitmap.m"
            MR_Integer mercury__bitmap__V_29_29;
#line 1323 "bitmap.m"
            MR_Integer mercury__bitmap__V_31_31;

#line 1887 "bitmap.m"
{
#define MR_PROC_LABEL mercury__bitmap__unsafe_copy_unaligned_bytes_ltor_7_f_0

	MR_Integer N;
	MR_BitmapPtr BM;
	MR_Integer Byte;

	N =  mercury__bitmap__SrcByteIndex_10 ;
	BM = (MR_BitmapPtr) mercury__bitmap__SrcBM_9 ;
		{
#line 1887 "bitmap.m"

    Byte = (MR_Integer) BM->elements[N];

#line 5370 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__SrcByteBits_16  = Byte;
#line 1887 "bitmap.m"
}
#line 1326 "bitmap.m"
            mercury__bitmap__V_21_21 = (mercury__bitmap__PrevSrcByteBits_12 << mercury__bitmap__SrcBitIndex_11);
#line 1326 "bitmap.m"
            mercury__bitmap__V_23_23 = ((MR_Integer) 8 - mercury__bitmap__SrcBitIndex_11);
#line 1326 "bitmap.m"
            mercury__bitmap__V_22_22 = (mercury__bitmap__SrcByteBits_16 >> mercury__bitmap__V_23_23);
#line 1324 "bitmap.m"
            mercury__bitmap__DestByteBits_17 = (mercury__bitmap__V_21_21 | mercury__bitmap__V_22_22);
#line 1928 "bitmap.m"
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
#line 1928 "bitmap.m"

    BM = BM0;
    BM->elements[N] = (MR_uint_least8_t) Byte;

#line 5403 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__STATE_VARIABLE_DestBM_25_25  = (MR_Box) BM;
#line 1928 "bitmap.m"
}
#line 1330 "bitmap.m"
            mercury__bitmap__V_27_27 = (mercury__bitmap__SrcByteIndex_10 + (MR_Integer) 1);
#line 1330 "bitmap.m"
            mercury__bitmap__V_29_29 = (mercury__bitmap__DestByteIndex_14 + (MR_Integer) 1);
#line 1330 "bitmap.m"
            mercury__bitmap__V_31_31 = (mercury__bitmap__NumBytes_15 - (MR_Integer) 1);
#line 1331 "bitmap.m"
            /* direct tailcall eliminated */
#line 1331 "bitmap.m"
            {
#line 1331 "bitmap.m"
              MR_Integer mercury__bitmap__SrcByteIndex__tmp_copy_10 = mercury__bitmap__V_27_27;
#line 1331 "bitmap.m"
              MR_Integer mercury__bitmap__PrevSrcByteBits__tmp_copy_12 = mercury__bitmap__SrcByteBits_16;
#line 1331 "bitmap.m"
              MR_Box mercury__bitmap__STATE_VARIABLE_DestBM_0__tmp_copy_18 = mercury__bitmap__STATE_VARIABLE_DestBM_25_25;
#line 1331 "bitmap.m"
              MR_Integer mercury__bitmap__DestByteIndex__tmp_copy_14 = mercury__bitmap__V_29_29;
#line 1331 "bitmap.m"
              MR_Integer mercury__bitmap__NumBytes__tmp_copy_15 = mercury__bitmap__V_31_31;

#line 1331 "bitmap.m"
              mercury__bitmap__NumBytes_15 = mercury__bitmap__NumBytes__tmp_copy_15;
#line 1331 "bitmap.m"
              mercury__bitmap__DestByteIndex_14 = mercury__bitmap__DestByteIndex__tmp_copy_14;
#line 1331 "bitmap.m"
              mercury__bitmap__STATE_VARIABLE_DestBM_0_18 = mercury__bitmap__STATE_VARIABLE_DestBM_0__tmp_copy_18;
#line 1331 "bitmap.m"
              mercury__bitmap__PrevSrcByteBits_12 = mercury__bitmap__PrevSrcByteBits__tmp_copy_12;
#line 1331 "bitmap.m"
              mercury__bitmap__SrcByteIndex_10 = mercury__bitmap__SrcByteIndex__tmp_copy_10;
#line 1331 "bitmap.m"
            }
#line 1331 "bitmap.m"
            continue;
#line 1323 "bitmap.m"
          }
#line 1304 "bitmap.m"
        return mercury__bitmap__STATE_VARIABLE_DestBM_19;
#line 1304 "bitmap.m"
      }
#line 1304 "bitmap.m"
      break;
#line 1304 "bitmap.m"
    }
#line 1295 "bitmap.m"
}

#line 1207 "bitmap.m"
static MR_Box MR_CALL 
mercury__bitmap__unsafe_copy_unaligned_bits_6_f_0(
#line 1207 "bitmap.m"
  MR_Integer mercury__bitmap__SameBM_8,
#line 1207 "bitmap.m"
  MR_Box mercury__bitmap__SrcBM_9,
#line 1207 "bitmap.m"
  MR_Integer mercury__bitmap__SrcStartBit_10,
#line 1207 "bitmap.m"
  MR_Box mercury__bitmap__STATE_VARIABLE_DestBM_0_31,
#line 1207 "bitmap.m"
  MR_Integer mercury__bitmap__DestStartBit_12,
#line 1207 "bitmap.m"
  MR_Integer mercury__bitmap__STATE_VARIABLE_NumBits_0_32)
#line 1207 "bitmap.m"
{
#line 1211 "bitmap.m"
  {
#line 1211 "bitmap.m"
    MR_bool mercury__bitmap__succeeded;
#line 1211 "bitmap.m"
    MR_Box mercury__bitmap__STATE_VARIABLE_DestBM_33;
#line 1211 "bitmap.m"
    MR_Integer mercury__bitmap__DestStartIndex_14 = (mercury__bitmap__DestStartBit_12 % (MR_Integer) 8);
#line 1211 "bitmap.m"
    MR_Integer mercury__bitmap__DestEndBit_15;
#line 1211 "bitmap.m"
    MR_Integer mercury__bitmap__NumBitsAtStart_16;
#line 1211 "bitmap.m"
    MR_Integer mercury__bitmap__StartBits_17;
#line 1211 "bitmap.m"
    MR_Integer mercury__bitmap__NewSrcStartBit_18;
#line 1211 "bitmap.m"
    MR_Integer mercury__bitmap__NewDestStartBit_19;
#line 1211 "bitmap.m"
    MR_Integer mercury__bitmap__DestEndIndex_20;
#line 1211 "bitmap.m"
    MR_Integer mercury__bitmap__NumBitsAtEnd_21;
#line 1211 "bitmap.m"
    MR_Integer mercury__bitmap__EndBits_22;
#line 1211 "bitmap.m"
    MR_Integer mercury__bitmap__NumBytes_24;
#line 1211 "bitmap.m"
    MR_Word mercury__bitmap__Direction_25;
#line 1211 "bitmap.m"
    MR_Integer mercury__bitmap__SrcBitIndex_26;
#line 1211 "bitmap.m"
    MR_Integer mercury__bitmap__V_34_34 = (mercury__bitmap__DestStartBit_12 + mercury__bitmap__STATE_VARIABLE_NumBits_0_32);
#line 1211 "bitmap.m"
    MR_Integer mercury__bitmap__STATE_VARIABLE_NumBits_37_37;
#line 1211 "bitmap.m"
    MR_Integer mercury__bitmap__STATE_VARIABLE_NumBits_46_46;
#line 1211 "bitmap.m"
    MR_Box mercury__bitmap__STATE_VARIABLE_DestBM_58_58;
#line 1211 "bitmap.m"
    MR_Box mercury__bitmap__STATE_VARIABLE_DestBM_62_62;
#line 1231 "bitmap.m"
    MR_Integer mercury__bitmap__V_39_39;

#line 1217 "bitmap.m"
    mercury__bitmap__DestEndBit_15 = (mercury__bitmap__V_34_34 - (MR_Integer) 1);
#line 1218 "bitmap.m"
    mercury__bitmap__succeeded = (mercury__bitmap__DestStartIndex_14 == (MR_Integer) 0);
#line 1221 "bitmap.m"
    if (mercury__bitmap__succeeded)
#line 1219 "bitmap.m"
      {
#line 1219 "bitmap.m"
        mercury__bitmap__NumBitsAtStart_16 = (MR_Integer) 0;
#line 1220 "bitmap.m"
        mercury__bitmap__StartBits_17 = (MR_Integer) 0;
#line 1220 "bitmap.m"
        mercury__bitmap__STATE_VARIABLE_NumBits_37_37 = mercury__bitmap__STATE_VARIABLE_NumBits_0_32;
#line 1219 "bitmap.m"
      }
#line 1221 "bitmap.m"
    else
#line 1222 "bitmap.m"
      {
#line 1222 "bitmap.m"
        mercury__bitmap__NumBitsAtStart_16 = ((MR_Integer) 8 - mercury__bitmap__DestStartIndex_14);
#line 1223 "bitmap.m"
        {
#line 1223 "bitmap.m"
          mercury__bitmap__StartBits_17 = mercury__bitmap__unsafe_bits_3_f_0(mercury__bitmap__SrcStartBit_10, mercury__bitmap__NumBitsAtStart_16, mercury__bitmap__SrcBM_9);
        }
#line 1224 "bitmap.m"
        mercury__bitmap__STATE_VARIABLE_NumBits_37_37 = (mercury__bitmap__STATE_VARIABLE_NumBits_0_32 - mercury__bitmap__NumBitsAtStart_16);
#line 1222 "bitmap.m"
      }
#line 1227 "bitmap.m"
    mercury__bitmap__NewSrcStartBit_18 = (mercury__bitmap__SrcStartBit_10 + mercury__bitmap__NumBitsAtStart_16);
#line 1228 "bitmap.m"
    mercury__bitmap__NewDestStartBit_19 = (mercury__bitmap__DestStartBit_12 + mercury__bitmap__NumBitsAtStart_16);
#line 2083 "bitmap.m"
    mercury__bitmap__DestEndIndex_20 = (mercury__bitmap__DestEndBit_15 % (MR_Integer) 8);
#line 1231 "bitmap.m"
    mercury__bitmap__V_39_39 = ((MR_Integer) 8 - mercury__bitmap__DestEndIndex_20);
#line 1231 "bitmap.m"
    mercury__bitmap__succeeded = (mercury__bitmap__V_39_39 == (MR_Integer) 1);
#line 1234 "bitmap.m"
    if (mercury__bitmap__succeeded)
#line 1232 "bitmap.m"
      {
#line 1232 "bitmap.m"
        mercury__bitmap__NumBitsAtEnd_21 = (MR_Integer) 0;
#line 1233 "bitmap.m"
        mercury__bitmap__EndBits_22 = (MR_Integer) 0;
#line 1233 "bitmap.m"
        mercury__bitmap__STATE_VARIABLE_NumBits_46_46 = mercury__bitmap__STATE_VARIABLE_NumBits_37_37;
#line 1232 "bitmap.m"
      }
#line 1234 "bitmap.m"
    else
#line 1235 "bitmap.m"
      {
#line 1235 "bitmap.m"
        MR_Integer mercury__bitmap__SrcEndBit_23;
#line 1235 "bitmap.m"
        MR_Integer mercury__bitmap__V_41_41;
#line 1235 "bitmap.m"
        MR_Integer mercury__bitmap__V_43_43;
#line 1235 "bitmap.m"
        MR_Integer mercury__bitmap__V_44_44;

#line 1235 "bitmap.m"
        mercury__bitmap__NumBitsAtEnd_21 = (mercury__bitmap__DestEndIndex_20 + (MR_Integer) 1);
#line 1236 "bitmap.m"
        mercury__bitmap__V_41_41 = (mercury__bitmap__NewSrcStartBit_18 + mercury__bitmap__STATE_VARIABLE_NumBits_37_37);
#line 1236 "bitmap.m"
        mercury__bitmap__SrcEndBit_23 = (mercury__bitmap__V_41_41 - (MR_Integer) 1);
#line 1238 "bitmap.m"
        mercury__bitmap__V_44_44 = (mercury__bitmap__SrcEndBit_23 - mercury__bitmap__NumBitsAtEnd_21);
#line 1237 "bitmap.m"
        mercury__bitmap__V_43_43 = (mercury__bitmap__V_44_44 + (MR_Integer) 1);
#line 1237 "bitmap.m"
        {
#line 1237 "bitmap.m"
          mercury__bitmap__EndBits_22 = mercury__bitmap__unsafe_bits_3_f_0(mercury__bitmap__V_43_43, mercury__bitmap__NumBitsAtEnd_21, mercury__bitmap__SrcBM_9);
        }
#line 1239 "bitmap.m"
        mercury__bitmap__STATE_VARIABLE_NumBits_46_46 = (mercury__bitmap__STATE_VARIABLE_NumBits_37_37 - mercury__bitmap__NumBitsAtEnd_21);
#line 1235 "bitmap.m"
      }
#line 1245 "bitmap.m"
    mercury__bitmap__NumBytes_24 = (mercury__bitmap__STATE_VARIABLE_NumBits_46_46 / (MR_Integer) 8);
#line 1389 "bitmap.m"
    mercury__bitmap__succeeded = (mercury__bitmap__SameBM_8 == (MR_Integer) 1);
#line 1389 "bitmap.m"
    if (mercury__bitmap__succeeded)
#line 1389 "bitmap.m"
      mercury__bitmap__succeeded = (mercury__bitmap__NewSrcStartBit_18 < mercury__bitmap__NewDestStartBit_19);
#line 1388 "bitmap.m"
    if (mercury__bitmap__succeeded)
#line 1388 "bitmap.m"
      mercury__bitmap__Direction_25 = (MR_Integer) 1;
#line 1388 "bitmap.m"
    else
#line 1388 "bitmap.m"
      mercury__bitmap__Direction_25 = (MR_Integer) 0;
#line 2083 "bitmap.m"
    mercury__bitmap__SrcBitIndex_26 = (mercury__bitmap__NewSrcStartBit_18 % (MR_Integer) 8);
#line 1257 "bitmap.m"
    if ((mercury__bitmap__Direction_25 == (MR_Integer) 0))
#line 1250 "bitmap.m"
      {
#line 1250 "bitmap.m"
        MR_Integer mercury__bitmap__SrcStartByteIndex_27;
#line 1250 "bitmap.m"
        MR_Integer mercury__bitmap__DestStartByteIndex_28;
#line 1250 "bitmap.m"
        MR_Integer mercury__bitmap__V_59_59;
#line 1250 "bitmap.m"
        MR_Integer mercury__bitmap__V_61_61;

#line 2048 "bitmap.m"
        mercury__bitmap__succeeded = (mercury__bitmap__NewSrcStartBit_18 < (MR_Integer) 0);
#line 2047 "bitmap.m"
        if (mercury__bitmap__succeeded)
#line 2047 "bitmap.m"
          mercury__bitmap__SrcStartByteIndex_27 = (MR_Integer) -1;
#line 2047 "bitmap.m"
        else
#line 2051 "bitmap.m"
          {
#line 2047 "bitmap.m"
            mercury__bitmap__SrcStartByteIndex_27 = (mercury__bitmap__NewSrcStartBit_18 / (MR_Integer) 8);
#line 2051 "bitmap.m"
          }
#line 2048 "bitmap.m"
        mercury__bitmap__succeeded = (mercury__bitmap__NewDestStartBit_19 < (MR_Integer) 0);
#line 2047 "bitmap.m"
        if (mercury__bitmap__succeeded)
#line 2047 "bitmap.m"
          mercury__bitmap__DestStartByteIndex_28 = (MR_Integer) -1;
#line 2047 "bitmap.m"
        else
#line 2051 "bitmap.m"
          {
#line 2047 "bitmap.m"
            mercury__bitmap__DestStartByteIndex_28 = (mercury__bitmap__NewDestStartBit_19 / (MR_Integer) 8);
#line 2051 "bitmap.m"
          }
#line 1253 "bitmap.m"
        mercury__bitmap__V_59_59 = (mercury__bitmap__SrcStartByteIndex_27 + (MR_Integer) 1);
#line 1887 "bitmap.m"
{
#define MR_PROC_LABEL mercury__bitmap__unsafe_copy_unaligned_bits_6_f_0

	MR_Integer N;
	MR_BitmapPtr BM;
	MR_Integer Byte;

	N =  mercury__bitmap__SrcStartByteIndex_27 ;
	BM = (MR_BitmapPtr) mercury__bitmap__SrcBM_9 ;
		{
#line 1887 "bitmap.m"

    Byte = (MR_Integer) BM->elements[N];

#line 5679 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__V_61_61  = Byte;
#line 1887 "bitmap.m"
}
#line 1253 "bitmap.m"
        {
#line 1253 "bitmap.m"
          mercury__bitmap__STATE_VARIABLE_DestBM_58_58 = mercury__bitmap__unsafe_copy_unaligned_bytes_ltor_7_f_0(mercury__bitmap__SrcBM_9, mercury__bitmap__V_59_59, mercury__bitmap__SrcBitIndex_26, mercury__bitmap__V_61_61, mercury__bitmap__STATE_VARIABLE_DestBM_0_31, mercury__bitmap__DestStartByteIndex_28, mercury__bitmap__NumBytes_24);
        }
#line 1250 "bitmap.m"
      }
#line 1257 "bitmap.m"
    else
#line 1258 "bitmap.m"
      {
#line 1258 "bitmap.m"
        MR_Integer mercury__bitmap__V_48_48;
#line 1258 "bitmap.m"
        MR_Integer mercury__bitmap__V_49_49 = (mercury__bitmap__NewSrcStartBit_18 + mercury__bitmap__STATE_VARIABLE_NumBits_46_46);
#line 1258 "bitmap.m"
        MR_Integer mercury__bitmap__V_51_51;
#line 1258 "bitmap.m"
        MR_Integer mercury__bitmap__V_52_52;
#line 1258 "bitmap.m"
        MR_Integer mercury__bitmap__V_55_55;
#line 1258 "bitmap.m"
        MR_Integer mercury__bitmap__V_57_57;
#line 1258 "bitmap.m"
        MR_Integer mercury__bitmap__SrcStartByteIndex_69;
#line 1258 "bitmap.m"
        MR_Integer mercury__bitmap__DestStartByteIndex_70;

#line 1259 "bitmap.m"
        mercury__bitmap__V_48_48 = (mercury__bitmap__V_49_49 - (MR_Integer) 1);
#line 2048 "bitmap.m"
        mercury__bitmap__succeeded = (mercury__bitmap__V_48_48 < (MR_Integer) 0);
#line 2047 "bitmap.m"
        if (mercury__bitmap__succeeded)
#line 2047 "bitmap.m"
          mercury__bitmap__SrcStartByteIndex_69 = (MR_Integer) -1;
#line 2047 "bitmap.m"
        else
#line 2051 "bitmap.m"
          {
#line 2047 "bitmap.m"
            mercury__bitmap__SrcStartByteIndex_69 = (mercury__bitmap__V_48_48 / (MR_Integer) 8);
#line 2051 "bitmap.m"
          }
#line 1261 "bitmap.m"
        mercury__bitmap__V_52_52 = (mercury__bitmap__NewDestStartBit_19 + mercury__bitmap__STATE_VARIABLE_NumBits_46_46);
#line 1261 "bitmap.m"
        mercury__bitmap__V_51_51 = (mercury__bitmap__V_52_52 - (MR_Integer) 1);
#line 2048 "bitmap.m"
        mercury__bitmap__succeeded = (mercury__bitmap__V_51_51 < (MR_Integer) 0);
#line 2047 "bitmap.m"
        if (mercury__bitmap__succeeded)
#line 2047 "bitmap.m"
          mercury__bitmap__DestStartByteIndex_70 = (MR_Integer) -1;
#line 2047 "bitmap.m"
        else
#line 2051 "bitmap.m"
          {
#line 2047 "bitmap.m"
            mercury__bitmap__DestStartByteIndex_70 = (mercury__bitmap__V_51_51 / (MR_Integer) 8);
#line 2051 "bitmap.m"
          }
#line 1262 "bitmap.m"
        mercury__bitmap__V_55_55 = (mercury__bitmap__SrcStartByteIndex_69 - (MR_Integer) 1);
#line 1262 "bitmap.m"
        {
#line 1262 "bitmap.m"
          mercury__bitmap__V_57_57 = mercury__bitmap__unsafe_byte_2_f_0(mercury__bitmap__SrcStartByteIndex_69, mercury__bitmap__SrcBM_9);
        }
#line 1262 "bitmap.m"
        {
#line 1262 "bitmap.m"
          mercury__bitmap__STATE_VARIABLE_DestBM_58_58 = mercury__bitmap__unsafe_copy_unaligned_bytes_rtol_7_f_0(mercury__bitmap__SrcBM_9, mercury__bitmap__V_55_55, mercury__bitmap__SrcBitIndex_26, mercury__bitmap__V_57_57, mercury__bitmap__STATE_VARIABLE_DestBM_0_31, mercury__bitmap__DestStartByteIndex_70, mercury__bitmap__NumBytes_24);
        }
#line 1258 "bitmap.m"
      }
#line 1271 "bitmap.m"
    mercury__bitmap__succeeded = (mercury__bitmap__NumBitsAtStart_16 == (MR_Integer) 0);
#line 1271 "bitmap.m"
    mercury__bitmap__succeeded = !(mercury__bitmap__succeeded);
#line 1278 "bitmap.m"
    if (mercury__bitmap__succeeded)
#line 1272 "bitmap.m"
      {
#line 1272 "bitmap.m"
        MR_Integer mercury__bitmap__PartialDestStartByteIndex_29;
#line 1272 "bitmap.m"
        MR_Integer mercury__bitmap__V_63_63;
#line 1272 "bitmap.m"
        MR_Integer mercury__bitmap__V_64_64;

#line 2048 "bitmap.m"
        mercury__bitmap__succeeded = (mercury__bitmap__DestStartBit_12 < (MR_Integer) 0);
#line 2047 "bitmap.m"
        if (mercury__bitmap__succeeded)
#line 2047 "bitmap.m"
          mercury__bitmap__PartialDestStartByteIndex_29 = (MR_Integer) -1;
#line 2047 "bitmap.m"
        else
#line 2051 "bitmap.m"
          {
#line 2047 "bitmap.m"
            mercury__bitmap__PartialDestStartByteIndex_29 = (mercury__bitmap__DestStartBit_12 / (MR_Integer) 8);
#line 2051 "bitmap.m"
          }
#line 1275 "bitmap.m"
        {
#line 1275 "bitmap.m"
          mercury__bitmap__V_64_64 = mercury__bitmap__unsafe_byte_2_f_0(mercury__bitmap__PartialDestStartByteIndex_29, mercury__bitmap__STATE_VARIABLE_DestBM_58_58);
        }
#line 1273 "bitmap.m"
        {
#line 1273 "bitmap.m"
          mercury__bitmap__V_63_63 = mercury__bitmap__set_bits_in_byte_4_f_0(mercury__bitmap__V_64_64, mercury__bitmap__DestStartIndex_14, mercury__bitmap__NumBitsAtStart_16, mercury__bitmap__StartBits_17);
        }
#line 1273 "bitmap.m"
        {
#line 1273 "bitmap.m"
          mercury__bitmap__STATE_VARIABLE_DestBM_62_62 = mercury__bitmap__f_117_110_115_97_102_101_95_98_121_116_101_32_58_61_3_f_0(mercury__bitmap__PartialDestStartByteIndex_29, mercury__bitmap__STATE_VARIABLE_DestBM_58_58, mercury__bitmap__V_63_63);
        }
#line 1272 "bitmap.m"
      }
#line 1278 "bitmap.m"
    else
#line 1273 "bitmap.m"
      mercury__bitmap__STATE_VARIABLE_DestBM_62_62 = mercury__bitmap__STATE_VARIABLE_DestBM_58_58;
#line 1282 "bitmap.m"
    mercury__bitmap__succeeded = (mercury__bitmap__NumBitsAtEnd_21 == (MR_Integer) 0);
#line 1282 "bitmap.m"
    mercury__bitmap__succeeded = !(mercury__bitmap__succeeded);
#line 1289 "bitmap.m"
    if (mercury__bitmap__succeeded)
#line 1283 "bitmap.m"
      {
#line 1283 "bitmap.m"
        MR_Integer mercury__bitmap__PartialDestEndByteIndex_30;
#line 1283 "bitmap.m"
        MR_Integer mercury__bitmap__V_66_66;
#line 1283 "bitmap.m"
        MR_Integer mercury__bitmap__V_67_67;

#line 1283 "bitmap.m"
        {
#line 1283 "bitmap.m"
          mercury__bitmap__PartialDestEndByteIndex_30 = mercury__bitmap__byte_index_for_bit_1_f_0(mercury__bitmap__DestEndBit_15);
        }
#line 1286 "bitmap.m"
        {
#line 1286 "bitmap.m"
          mercury__bitmap__V_67_67 = mercury__bitmap__unsafe_byte_2_f_0(mercury__bitmap__PartialDestEndByteIndex_30, mercury__bitmap__STATE_VARIABLE_DestBM_62_62);
        }
#line 1284 "bitmap.m"
        {
#line 1284 "bitmap.m"
          mercury__bitmap__V_66_66 = mercury__bitmap__set_bits_in_byte_4_f_0(mercury__bitmap__V_67_67, (MR_Integer) 0, mercury__bitmap__NumBitsAtEnd_21, mercury__bitmap__EndBits_22);
        }
#line 1284 "bitmap.m"
        {
#line 1284 "bitmap.m"
          return mercury__bitmap__STATE_VARIABLE_DestBM_33 = mercury__bitmap__f_117_110_115_97_102_101_95_98_121_116_101_32_58_61_3_f_0(mercury__bitmap__PartialDestEndByteIndex_30, mercury__bitmap__STATE_VARIABLE_DestBM_62_62, mercury__bitmap__V_66_66);
        }
#line 1283 "bitmap.m"
      }
#line 1289 "bitmap.m"
    else
#line 1284 "bitmap.m"
      mercury__bitmap__STATE_VARIABLE_DestBM_33 = mercury__bitmap__STATE_VARIABLE_DestBM_62_62;
#line 1211 "bitmap.m"
    return mercury__bitmap__STATE_VARIABLE_DestBM_33;
#line 1211 "bitmap.m"
  }
#line 1207 "bitmap.m"
}

#line 1125 "bitmap.m"
static MR_Box MR_CALL 
mercury__bitmap__unsafe_copy_bytes_6_f_0(
#line 1125 "bitmap.m"
  MR_Integer mercury__bitmap__SameBM_1,
#line 1125 "bitmap.m"
  MR_Box mercury__bitmap__SrcBM_2,
#line 1125 "bitmap.m"
  MR_Integer mercury__bitmap__SrcFirstByteIndex_3,
#line 1125 "bitmap.m"
  MR_Box mercury__bitmap__DestBM0_4,
#line 1125 "bitmap.m"
  MR_Integer mercury__bitmap__DestFirstByteIndex_5,
#line 1125 "bitmap.m"
  MR_Integer mercury__bitmap__NumBytes_6)
#line 1125 "bitmap.m"
{
#line 1128 "bitmap.m"
  {
#line 1128 "bitmap.m"
    MR_bool mercury__bitmap__succeeded;
#line 1128 "bitmap.m"
    MR_Box mercury__bitmap__DestBM_7;

#line 1133 "bitmap.m"
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
#line 1133 "bitmap.m"

    DestBM = DestBM0;
    if (SameBM) {
        memmove(DestBM->elements + DestFirstByteIndex,
            SrcBM->elements + SrcFirstByteIndex, NumBytes);
    } else {
        MR_memcpy(DestBM->elements + DestFirstByteIndex,
            SrcBM->elements + SrcFirstByteIndex, NumBytes);
    }

#line 5914 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__DestBM_7  = (MR_Box) DestBM;
#line 1133 "bitmap.m"
}
#line 1128 "bitmap.m"
    return mercury__bitmap__DestBM_7;
#line 1128 "bitmap.m"
  }
#line 1125 "bitmap.m"
}

#line 1100 "bitmap.m"
MR_Box MR_CALL 
mercury__bitmap__copy_bytes_6_f_0(
#line 1100 "bitmap.m"
  MR_Integer mercury__bitmap__SameBM_8,
#line 1100 "bitmap.m"
  MR_Box mercury__bitmap__SrcBM_9,
#line 1100 "bitmap.m"
  MR_Integer mercury__bitmap__SrcStartByte_10,
#line 1100 "bitmap.m"
  MR_Box mercury__bitmap__DestBM_11,
#line 1100 "bitmap.m"
  MR_Integer mercury__bitmap__DestStartByte_12,
#line 1100 "bitmap.m"
  MR_Integer mercury__bitmap__NumBytes_13)
#line 1100 "bitmap.m"
{
#line 1103 "bitmap.m"
  {
#line 1103 "bitmap.m"
    MR_bool mercury__bitmap__succeeded = (mercury__bitmap__NumBytes_13 == (MR_Integer) 0);
#line 1103 "bitmap.m"
    MR_Box mercury__bitmap__HeadVar__7_7;

#line 1103 "bitmap.m"
    if (mercury__bitmap__succeeded)
#line 1103 "bitmap.m"
      mercury__bitmap__HeadVar__7_7 = mercury__bitmap__DestBM_11;
#line 1103 "bitmap.m"
    else
#line 1103 "bitmap.m"
      {
#line 1109 "bitmap.m"
        MR_Integer mercury__bitmap__V_15_15;
#line 1109 "bitmap.m"
        MR_Integer mercury__bitmap__V_16_16;
#line 1109 "bitmap.m"
        MR_Integer mercury__bitmap__V_17_17;
#line 1109 "bitmap.m"
        MR_Integer mercury__bitmap__V_18_18;
#line 1109 "bitmap.m"
        MR_Integer mercury__bitmap__V_19_19;
#line 1109 "bitmap.m"
        MR_Integer mercury__bitmap__V_20_20;
#line 1109 "bitmap.m"
        MR_Integer mercury__bitmap__V_21_21;
#line 1109 "bitmap.m"
        MR_Integer mercury__bitmap__V_22_22;

#line 1109 "bitmap.m"
        mercury__bitmap__succeeded = (mercury__bitmap__NumBytes_13 > (MR_Integer) 0);
#line 1109 "bitmap.m"
        if (mercury__bitmap__succeeded)
#line 1109 "bitmap.m"
          {
#line 1110 "bitmap.m"
            mercury__bitmap__V_15_15 = (MR_Integer) 0;
#line 1110 "bitmap.m"
            mercury__bitmap__succeeded = (mercury__bitmap__SrcStartByte_10 >= mercury__bitmap__V_15_15);
#line 1109 "bitmap.m"
            if (mercury__bitmap__succeeded)
#line 1109 "bitmap.m"
              {
#line 1111 "bitmap.m"
                mercury__bitmap__V_17_17 = (mercury__bitmap__SrcStartByte_10 + mercury__bitmap__NumBytes_13);
#line 1111 "bitmap.m"
                mercury__bitmap__V_18_18 = (MR_Integer) 1;
#line 1111 "bitmap.m"
                mercury__bitmap__V_16_16 = (mercury__bitmap__V_17_17 - mercury__bitmap__V_18_18);
#line 1111 "bitmap.m"
                {
#line 1111 "bitmap.m"
                  mercury__bitmap__succeeded = mercury__bitmap__byte_in_range_2_p_0(mercury__bitmap__SrcBM_9, mercury__bitmap__V_16_16);
                }
#line 1109 "bitmap.m"
                if (mercury__bitmap__succeeded)
#line 1109 "bitmap.m"
                  {
#line 1112 "bitmap.m"
                    mercury__bitmap__V_19_19 = (MR_Integer) 0;
#line 1112 "bitmap.m"
                    mercury__bitmap__succeeded = (mercury__bitmap__DestStartByte_12 >= mercury__bitmap__V_19_19);
#line 1109 "bitmap.m"
                    if (mercury__bitmap__succeeded)
#line 1109 "bitmap.m"
                      {
#line 1113 "bitmap.m"
                        mercury__bitmap__V_21_21 = (mercury__bitmap__DestStartByte_12 + mercury__bitmap__NumBytes_13);
#line 1113 "bitmap.m"
                        mercury__bitmap__V_22_22 = (MR_Integer) 1;
#line 1113 "bitmap.m"
                        mercury__bitmap__V_20_20 = (mercury__bitmap__V_21_21 - mercury__bitmap__V_22_22);
#line 1113 "bitmap.m"
                        {
#line 1113 "bitmap.m"
                          mercury__bitmap__succeeded = mercury__bitmap__byte_in_range_2_p_0(mercury__bitmap__DestBM_11, mercury__bitmap__V_20_20);
                        }
#line 1109 "bitmap.m"
                      }
#line 1109 "bitmap.m"
                  }
#line 1109 "bitmap.m"
              }
#line 1109 "bitmap.m"
          }
#line 1103 "bitmap.m"
        if (mercury__bitmap__succeeded)
#line 1128 "bitmap.m"
          {
#line 1133 "bitmap.m"
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
#line 1133 "bitmap.m"

    DestBM = DestBM0;
    if (SameBM) {
        memmove(DestBM->elements + DestFirstByteIndex,
            SrcBM->elements + SrcFirstByteIndex, NumBytes);
    } else {
        MR_memcpy(DestBM->elements + DestFirstByteIndex,
            SrcBM->elements + SrcFirstByteIndex, NumBytes);
    }

#line 6067 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__HeadVar__7_7  = (MR_Box) DestBM;
#line 1133 "bitmap.m"
}
#line 1128 "bitmap.m"
          }
#line 1103 "bitmap.m"
        else
#line 1118 "bitmap.m"
          {
#line 1118 "bitmap.m"
            MR_Word mercury__bitmap__TypeCtorInfo_4_48 = (MR_Word) &mercury__bitmap__bitmap__type_ctor_info_bitmap_error_0;
#line 1118 "bitmap.m"
            MR_Word mercury__bitmap__V_47_47 = (MR_Word) ((MR_Box) ((MR_String) "bitmap.copy_bytes: out of range"));

#line 2191 "bitmap.m"
            {
#line 2191 "bitmap.m"
              mercury__exception__throw_1_p_0(mercury__bitmap__TypeCtorInfo_4_48, ((MR_Box) (mercury__bitmap__V_47_47)));
            }
#line 1118 "bitmap.m"
          }
#line 1103 "bitmap.m"
      }
#line 1103 "bitmap.m"
    return mercury__bitmap__HeadVar__7_7;
#line 1103 "bitmap.m"
  }
#line 1100 "bitmap.m"
}

#line 974 "bitmap.m"
static MR_Box MR_CALL 
mercury__bitmap__unsafe_copy_bits_6_f_0(
#line 974 "bitmap.m"
  MR_Integer mercury__bitmap__SameBM_8,
#line 974 "bitmap.m"
  MR_Box mercury__bitmap__SrcBM_9,
#line 974 "bitmap.m"
  MR_Integer mercury__bitmap__SrcStartBit_10,
#line 974 "bitmap.m"
  MR_Box mercury__bitmap__STATE_VARIABLE_DestBM_0_30,
#line 974 "bitmap.m"
  MR_Integer mercury__bitmap__DestStartBit_12,
#line 974 "bitmap.m"
  MR_Integer mercury__bitmap__STATE_VARIABLE_NumBits_0_31)
#line 974 "bitmap.m"
{
#line 978 "bitmap.m"
  {
#line 978 "bitmap.m"
    MR_bool mercury__bitmap__succeeded = (mercury__bitmap__STATE_VARIABLE_NumBits_0_31 < (MR_Integer) 16);
#line 978 "bitmap.m"
    MR_Box mercury__bitmap__STATE_VARIABLE_DestBM_32;
#line 978 "bitmap.m"
    MR_Integer mercury__bitmap__SrcStartIndex_14 = (mercury__bitmap__SrcStartBit_10 % (MR_Integer) 8);
#line 978 "bitmap.m"
    MR_Integer mercury__bitmap__DestStartIndex_15 = (mercury__bitmap__DestStartBit_12 % (MR_Integer) 8);

#line 988 "bitmap.m"
    if (mercury__bitmap__succeeded)
#line 986 "bitmap.m"
      {
#line 986 "bitmap.m"
        MR_Integer mercury__bitmap__V_37_37;

#line 986 "bitmap.m"
        {
#line 986 "bitmap.m"
          mercury__bitmap__V_37_37 = mercury__bitmap__unsafe_bits_3_f_0(mercury__bitmap__SrcStartBit_10, mercury__bitmap__STATE_VARIABLE_NumBits_0_31, mercury__bitmap__SrcBM_9);
        }
#line 986 "bitmap.m"
        {
#line 986 "bitmap.m"
          return mercury__bitmap__STATE_VARIABLE_DestBM_32 = mercury__bitmap__f_117_110_115_97_102_101_95_98_105_116_115_32_58_61_4_f_0(mercury__bitmap__DestStartBit_12, mercury__bitmap__STATE_VARIABLE_NumBits_0_31, mercury__bitmap__STATE_VARIABLE_DestBM_0_30, mercury__bitmap__V_37_37);
        }
#line 986 "bitmap.m"
      }
#line 988 "bitmap.m"
    else
#line 1080 "bitmap.m"
      {
#line 988 "bitmap.m"
        mercury__bitmap__succeeded = (mercury__bitmap__SrcStartIndex_14 == mercury__bitmap__DestStartIndex_15);
#line 1080 "bitmap.m"
        if (mercury__bitmap__succeeded)
#line 995 "bitmap.m"
          {
#line 995 "bitmap.m"
            MR_Integer mercury__bitmap__SrcEndBit_17;
#line 995 "bitmap.m"
            MR_Integer mercury__bitmap__EndIndex_18;
#line 995 "bitmap.m"
            MR_Integer mercury__bitmap__V_38_38 = (mercury__bitmap__SrcStartBit_10 + mercury__bitmap__STATE_VARIABLE_NumBits_0_31);
#line 999 "bitmap.m"
            MR_Integer mercury__bitmap__V_40_40;
#line 999 "bitmap.m"
            MR_Integer mercury__bitmap__V_41_41;

#line 996 "bitmap.m"
            mercury__bitmap__SrcEndBit_17 = (mercury__bitmap__V_38_38 - (MR_Integer) 1);
#line 2083 "bitmap.m"
            mercury__bitmap__EndIndex_18 = (mercury__bitmap__SrcEndBit_17 % (MR_Integer) 8);
#line 999 "bitmap.m"
            mercury__bitmap__succeeded = (mercury__bitmap__SrcStartIndex_14 == (MR_Integer) 0);
#line 999 "bitmap.m"
            if (mercury__bitmap__succeeded)
#line 999 "bitmap.m"
              {
#line 2039 "bitmap.m"
                mercury__bitmap__V_40_40 = (MR_Integer) 8;
#line 1000 "bitmap.m"
                mercury__bitmap__V_41_41 = (mercury__bitmap__V_40_40 - mercury__bitmap__EndIndex_18);
#line 1000 "bitmap.m"
                mercury__bitmap__succeeded = (mercury__bitmap__V_41_41 == (MR_Integer) 1);
#line 999 "bitmap.m"
              }
#line 1011 "bitmap.m"
            if (mercury__bitmap__succeeded)
#line 1005 "bitmap.m"
              {
#line 1005 "bitmap.m"
                MR_Integer mercury__bitmap__NumBytes_19 = (mercury__bitmap__STATE_VARIABLE_NumBits_0_31 / (MR_Integer) 8);
#line 1005 "bitmap.m"
                MR_Integer mercury__bitmap__SrcStartByteIndex_20 = (mercury__bitmap__SrcStartBit_10 / (MR_Integer) 8);
#line 1005 "bitmap.m"
                MR_Integer mercury__bitmap__DestStartByteIndex_21 = (mercury__bitmap__DestStartBit_12 / (MR_Integer) 8);

#line 1009 "bitmap.m"
                {
#line 1009 "bitmap.m"
                  return mercury__bitmap__STATE_VARIABLE_DestBM_32 = mercury__bitmap__unsafe_copy_bytes_6_f_0(mercury__bitmap__SameBM_8, mercury__bitmap__SrcBM_9, mercury__bitmap__SrcStartByteIndex_20, mercury__bitmap__STATE_VARIABLE_DestBM_0_30, mercury__bitmap__DestStartByteIndex_21, mercury__bitmap__NumBytes_19);
                }
#line 1005 "bitmap.m"
              }
#line 1011 "bitmap.m"
            else
#line 1028 "bitmap.m"
              {
#line 1028 "bitmap.m"
                MR_Integer mercury__bitmap__NumBitsAtStart_22;
#line 1028 "bitmap.m"
                MR_Integer mercury__bitmap__StartBitsToSet_23;
#line 1028 "bitmap.m"
                MR_Integer mercury__bitmap__NumBitsAtEnd_25;
#line 1028 "bitmap.m"
                MR_Integer mercury__bitmap__EndBitsToSet_26;
#line 1028 "bitmap.m"
                MR_Integer mercury__bitmap__STATE_VARIABLE_NumBits_48_48;
#line 1028 "bitmap.m"
                MR_Integer mercury__bitmap__V_56_56;
#line 1028 "bitmap.m"
                MR_Integer mercury__bitmap__V_58_58;
#line 1028 "bitmap.m"
                MR_Box mercury__bitmap__STATE_VARIABLE_DestBM_60_60;
#line 1028 "bitmap.m"
                MR_Box mercury__bitmap__STATE_VARIABLE_DestBM_62_62;
#line 1028 "bitmap.m"
                MR_Integer mercury__bitmap__NumBytes_72;
#line 1028 "bitmap.m"
                MR_Integer mercury__bitmap__SrcStartByteIndex_73;
#line 1028 "bitmap.m"
                MR_Integer mercury__bitmap__DestStartByteIndex_74;
#line 1028 "bitmap.m"
                MR_Integer mercury__bitmap__STATE_VARIABLE_NumBits_54_75;
#line 1030 "bitmap.m"
                MR_Integer mercury__bitmap__V_50_50;

#line 1016 "bitmap.m"
                mercury__bitmap__succeeded = (mercury__bitmap__SrcStartIndex_14 == (MR_Integer) 0);
#line 1019 "bitmap.m"
                if (mercury__bitmap__succeeded)
#line 1017 "bitmap.m"
                  {
#line 1017 "bitmap.m"
                    mercury__bitmap__NumBitsAtStart_22 = (MR_Integer) 0;
#line 1018 "bitmap.m"
                    mercury__bitmap__StartBitsToSet_23 = (MR_Integer) 0;
#line 1018 "bitmap.m"
                    mercury__bitmap__STATE_VARIABLE_NumBits_48_48 = mercury__bitmap__STATE_VARIABLE_NumBits_0_31;
#line 1017 "bitmap.m"
                  }
#line 1019 "bitmap.m"
                else
#line 1020 "bitmap.m"
                  {
#line 1020 "bitmap.m"
                    MR_Integer mercury__bitmap__SrcPartialStartByteIndex_24;
#line 1020 "bitmap.m"
                    MR_Integer mercury__bitmap__V_47_47;

#line 1020 "bitmap.m"
                    mercury__bitmap__NumBitsAtStart_22 = ((MR_Integer) 8 - mercury__bitmap__SrcStartIndex_14);
#line 2048 "bitmap.m"
                    mercury__bitmap__succeeded = (mercury__bitmap__SrcStartBit_10 < (MR_Integer) 0);
#line 2047 "bitmap.m"
                    if (mercury__bitmap__succeeded)
#line 2047 "bitmap.m"
                      mercury__bitmap__SrcPartialStartByteIndex_24 = (MR_Integer) -1;
#line 2047 "bitmap.m"
                    else
#line 2051 "bitmap.m"
                      {
#line 2047 "bitmap.m"
                        mercury__bitmap__SrcPartialStartByteIndex_24 = (mercury__bitmap__SrcStartBit_10 / (MR_Integer) 8);
#line 2051 "bitmap.m"
                      }
#line 1887 "bitmap.m"
{
#define MR_PROC_LABEL mercury__bitmap__unsafe_copy_bits_6_f_0

	MR_Integer N;
	MR_BitmapPtr BM;
	MR_Integer Byte;

	N =  mercury__bitmap__SrcPartialStartByteIndex_24 ;
	BM = (MR_BitmapPtr) mercury__bitmap__SrcBM_9 ;
		{
#line 1887 "bitmap.m"

    Byte = (MR_Integer) BM->elements[N];

#line 6292 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__V_47_47  = Byte;
#line 1887 "bitmap.m"
}
#line 1022 "bitmap.m"
                    {
#line 1022 "bitmap.m"
                      mercury__bitmap__StartBitsToSet_23 = mercury__bitmap__extract_bits_from_byte_3_f_0(mercury__bitmap__V_47_47, mercury__bitmap__SrcStartIndex_14, mercury__bitmap__NumBitsAtStart_22);
                    }
#line 1027 "bitmap.m"
                    mercury__bitmap__STATE_VARIABLE_NumBits_48_48 = (mercury__bitmap__STATE_VARIABLE_NumBits_0_31 - mercury__bitmap__NumBitsAtStart_22);
#line 1020 "bitmap.m"
                  }
#line 1030 "bitmap.m"
                mercury__bitmap__V_50_50 = ((MR_Integer) 8 - mercury__bitmap__EndIndex_18);
#line 1030 "bitmap.m"
                mercury__bitmap__succeeded = (mercury__bitmap__V_50_50 == (MR_Integer) 1);
#line 1033 "bitmap.m"
                if (mercury__bitmap__succeeded)
#line 1031 "bitmap.m"
                  {
#line 1031 "bitmap.m"
                    mercury__bitmap__NumBitsAtEnd_25 = (MR_Integer) 0;
#line 1032 "bitmap.m"
                    mercury__bitmap__EndBitsToSet_26 = (MR_Integer) 0;
#line 1032 "bitmap.m"
                    mercury__bitmap__STATE_VARIABLE_NumBits_54_75 = mercury__bitmap__STATE_VARIABLE_NumBits_48_48;
#line 1031 "bitmap.m"
                  }
#line 1033 "bitmap.m"
                else
#line 1034 "bitmap.m"
                  {
#line 1034 "bitmap.m"
                    MR_Integer mercury__bitmap__SrcPartialEndByteIndex_27;
#line 1034 "bitmap.m"
                    MR_Integer mercury__bitmap__V_52_52;

#line 1034 "bitmap.m"
                    mercury__bitmap__NumBitsAtEnd_25 = (mercury__bitmap__EndIndex_18 + (MR_Integer) 1);
#line 2048 "bitmap.m"
                    mercury__bitmap__succeeded = (mercury__bitmap__SrcEndBit_17 < (MR_Integer) 0);
#line 2047 "bitmap.m"
                    if (mercury__bitmap__succeeded)
#line 2047 "bitmap.m"
                      mercury__bitmap__SrcPartialEndByteIndex_27 = (MR_Integer) -1;
#line 2047 "bitmap.m"
                    else
#line 2051 "bitmap.m"
                      {
#line 2047 "bitmap.m"
                        mercury__bitmap__SrcPartialEndByteIndex_27 = (mercury__bitmap__SrcEndBit_17 / (MR_Integer) 8);
#line 2051 "bitmap.m"
                      }
#line 1037 "bitmap.m"
                    {
#line 1037 "bitmap.m"
                      mercury__bitmap__V_52_52 = mercury__bitmap__unsafe_byte_2_f_0(mercury__bitmap__SrcPartialEndByteIndex_27, mercury__bitmap__SrcBM_9);
                    }
#line 1036 "bitmap.m"
                    {
#line 1036 "bitmap.m"
                      mercury__bitmap__EndBitsToSet_26 = mercury__bitmap__extract_bits_from_byte_3_f_0(mercury__bitmap__V_52_52, (MR_Integer) 0, mercury__bitmap__NumBitsAtEnd_25);
                    }
#line 1041 "bitmap.m"
                    mercury__bitmap__STATE_VARIABLE_NumBits_54_75 = (mercury__bitmap__STATE_VARIABLE_NumBits_48_48 - mercury__bitmap__NumBitsAtEnd_25);
#line 1034 "bitmap.m"
                  }
#line 1047 "bitmap.m"
                mercury__bitmap__NumBytes_72 = (mercury__bitmap__STATE_VARIABLE_NumBits_54_75 / (MR_Integer) 8);
#line 1049 "bitmap.m"
                mercury__bitmap__V_56_56 = (mercury__bitmap__SrcStartBit_10 + mercury__bitmap__NumBitsAtStart_22);
#line 1048 "bitmap.m"
                mercury__bitmap__SrcStartByteIndex_73 = (mercury__bitmap__V_56_56 / (MR_Integer) 8);
#line 1051 "bitmap.m"
                mercury__bitmap__V_58_58 = (mercury__bitmap__DestStartBit_12 + mercury__bitmap__NumBitsAtStart_22);
#line 1050 "bitmap.m"
                mercury__bitmap__DestStartByteIndex_74 = (mercury__bitmap__V_58_58 / (MR_Integer) 8);
#line 1052 "bitmap.m"
                {
#line 1052 "bitmap.m"
                  mercury__bitmap__STATE_VARIABLE_DestBM_60_60 = mercury__bitmap__unsafe_copy_bytes_6_f_0(mercury__bitmap__SameBM_8, mercury__bitmap__SrcBM_9, mercury__bitmap__SrcStartByteIndex_73, mercury__bitmap__STATE_VARIABLE_DestBM_0_30, mercury__bitmap__DestStartByteIndex_74, mercury__bitmap__NumBytes_72);
                }
#line 1058 "bitmap.m"
                mercury__bitmap__succeeded = (mercury__bitmap__NumBitsAtStart_22 == (MR_Integer) 0);
#line 1058 "bitmap.m"
                mercury__bitmap__succeeded = !(mercury__bitmap__succeeded);
#line 1065 "bitmap.m"
                if (mercury__bitmap__succeeded)
#line 1059 "bitmap.m"
                  {
#line 1059 "bitmap.m"
                    MR_Integer mercury__bitmap__DestPartialStartByteIndex_28 = (mercury__bitmap__DestStartByteIndex_74 - (MR_Integer) 1);
#line 1059 "bitmap.m"
                    MR_Integer mercury__bitmap__V_63_63;
#line 1059 "bitmap.m"
                    MR_Integer mercury__bitmap__V_64_64;

#line 1062 "bitmap.m"
                    {
#line 1062 "bitmap.m"
                      mercury__bitmap__V_64_64 = mercury__bitmap__unsafe_byte_2_f_0(mercury__bitmap__DestPartialStartByteIndex_28, mercury__bitmap__STATE_VARIABLE_DestBM_60_60);
                    }
#line 1060 "bitmap.m"
                    {
#line 1060 "bitmap.m"
                      mercury__bitmap__V_63_63 = mercury__bitmap__set_bits_in_byte_4_f_0(mercury__bitmap__V_64_64, mercury__bitmap__SrcStartIndex_14, mercury__bitmap__NumBitsAtStart_22, mercury__bitmap__StartBitsToSet_23);
                    }
#line 1060 "bitmap.m"
                    {
#line 1060 "bitmap.m"
                      mercury__bitmap__STATE_VARIABLE_DestBM_62_62 = mercury__bitmap__f_117_110_115_97_102_101_95_98_121_116_101_32_58_61_3_f_0(mercury__bitmap__DestPartialStartByteIndex_28, mercury__bitmap__STATE_VARIABLE_DestBM_60_60, mercury__bitmap__V_63_63);
                    }
#line 1059 "bitmap.m"
                  }
#line 1065 "bitmap.m"
                else
#line 1060 "bitmap.m"
                  mercury__bitmap__STATE_VARIABLE_DestBM_62_62 = mercury__bitmap__STATE_VARIABLE_DestBM_60_60;
#line 1069 "bitmap.m"
                mercury__bitmap__succeeded = (mercury__bitmap__NumBitsAtEnd_25 == (MR_Integer) 0);
#line 1069 "bitmap.m"
                mercury__bitmap__succeeded = !(mercury__bitmap__succeeded);
#line 1076 "bitmap.m"
                if (mercury__bitmap__succeeded)
#line 1070 "bitmap.m"
                  {
#line 1070 "bitmap.m"
                    MR_Integer mercury__bitmap__DestPartialEndByteIndex_29 = (mercury__bitmap__DestStartByteIndex_74 + mercury__bitmap__NumBytes_72);
#line 1070 "bitmap.m"
                    MR_Integer mercury__bitmap__V_66_66;
#line 1070 "bitmap.m"
                    MR_Integer mercury__bitmap__V_67_67;

#line 1073 "bitmap.m"
                    {
#line 1073 "bitmap.m"
                      mercury__bitmap__V_67_67 = mercury__bitmap__unsafe_byte_2_f_0(mercury__bitmap__DestPartialEndByteIndex_29, mercury__bitmap__STATE_VARIABLE_DestBM_62_62);
                    }
#line 1071 "bitmap.m"
                    {
#line 1071 "bitmap.m"
                      mercury__bitmap__V_66_66 = mercury__bitmap__set_bits_in_byte_4_f_0(mercury__bitmap__V_67_67, (MR_Integer) 0, mercury__bitmap__NumBitsAtEnd_25, mercury__bitmap__EndBitsToSet_26);
                    }
#line 1071 "bitmap.m"
                    {
#line 1071 "bitmap.m"
                      return mercury__bitmap__STATE_VARIABLE_DestBM_32 = mercury__bitmap__f_117_110_115_97_102_101_95_98_121_116_101_32_58_61_3_f_0(mercury__bitmap__DestPartialEndByteIndex_29, mercury__bitmap__STATE_VARIABLE_DestBM_62_62, mercury__bitmap__V_66_66);
                    }
#line 1070 "bitmap.m"
                  }
#line 1076 "bitmap.m"
                else
#line 1071 "bitmap.m"
                  mercury__bitmap__STATE_VARIABLE_DestBM_32 = mercury__bitmap__STATE_VARIABLE_DestBM_62_62;
#line 1028 "bitmap.m"
              }
#line 995 "bitmap.m"
          }
#line 1080 "bitmap.m"
        else
#line 1081 "bitmap.m"
          {
#line 1081 "bitmap.m"
            return mercury__bitmap__STATE_VARIABLE_DestBM_32 = mercury__bitmap__unsafe_copy_unaligned_bits_6_f_0(mercury__bitmap__SameBM_8, mercury__bitmap__SrcBM_9, mercury__bitmap__SrcStartBit_10, mercury__bitmap__STATE_VARIABLE_DestBM_0_30, mercury__bitmap__DestStartBit_12, mercury__bitmap__STATE_VARIABLE_NumBits_0_31);
          }
#line 1080 "bitmap.m"
      }
#line 978 "bitmap.m"
    return mercury__bitmap__STATE_VARIABLE_DestBM_32;
#line 978 "bitmap.m"
  }
#line 974 "bitmap.m"
}

#line 937 "bitmap.m"
MR_Box MR_CALL 
mercury__bitmap__copy_bits_6_f_0(
#line 937 "bitmap.m"
  MR_Integer mercury__bitmap__SameBM_8,
#line 937 "bitmap.m"
  MR_Box mercury__bitmap__SrcBM_9,
#line 937 "bitmap.m"
  MR_Integer mercury__bitmap__SrcStartBit_10,
#line 937 "bitmap.m"
  MR_Box mercury__bitmap__DestBM_11,
#line 937 "bitmap.m"
  MR_Integer mercury__bitmap__DestStartBit_12,
#line 937 "bitmap.m"
  MR_Integer mercury__bitmap__NumBits_13)
#line 937 "bitmap.m"
{
#line 939 "bitmap.m"
  {
#line 939 "bitmap.m"
    MR_bool mercury__bitmap__succeeded = (mercury__bitmap__NumBits_13 >= (MR_Integer) 0);
#line 939 "bitmap.m"
    MR_Box mercury__bitmap__HeadVar__7_7;
#line 941 "bitmap.m"
    MR_Integer mercury__bitmap__V_15_15;
#line 941 "bitmap.m"
    MR_Integer mercury__bitmap__V_16_16;
#line 941 "bitmap.m"
    MR_Integer mercury__bitmap__V_17_17;
#line 941 "bitmap.m"
    MR_Integer mercury__bitmap__V_18_18;
#line 941 "bitmap.m"
    MR_Integer mercury__bitmap__V_36_36;
#line 941 "bitmap.m"
    MR_Integer mercury__bitmap__V_37_37;
#line 941 "bitmap.m"
    MR_Integer mercury__bitmap__V_43_43;
#line 941 "bitmap.m"
    MR_Integer mercury__bitmap__V_44_44;

#line 941 "bitmap.m"
    if (mercury__bitmap__succeeded)
#line 941 "bitmap.m"
      {
#line 942 "bitmap.m"
        mercury__bitmap__V_15_15 = (MR_Integer) 0;
#line 942 "bitmap.m"
        mercury__bitmap__succeeded = (mercury__bitmap__SrcStartBit_10 >= mercury__bitmap__V_15_15);
#line 941 "bitmap.m"
        if (mercury__bitmap__succeeded)
#line 941 "bitmap.m"
          {
#line 943 "bitmap.m"
            mercury__bitmap__V_16_16 = (MR_Integer) 0;
#line 943 "bitmap.m"
            mercury__bitmap__succeeded = (mercury__bitmap__DestStartBit_12 >= mercury__bitmap__V_16_16);
#line 941 "bitmap.m"
            if (mercury__bitmap__succeeded)
#line 941 "bitmap.m"
              {
#line 944 "bitmap.m"
                mercury__bitmap__V_17_17 = (mercury__bitmap__SrcStartBit_10 + mercury__bitmap__NumBits_13);
#line 558 "bitmap.m"
                mercury__bitmap__V_36_36 = (MR_Integer) 0;
#line 558 "bitmap.m"
                mercury__bitmap__succeeded = (mercury__bitmap__V_36_36 <= mercury__bitmap__V_17_17);
#line 941 "bitmap.m"
                if (mercury__bitmap__succeeded)
#line 941 "bitmap.m"
                  {
#line 1813 "bitmap.m"
{
#define MR_PROC_LABEL mercury__bitmap__copy_bits_6_f_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr) mercury__bitmap__SrcBM_9 ;
		{
#line 1813 "bitmap.m"

    NumBits = BM->num_bits;

#line 6553 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__V_37_37  = NumBits;
#line 1813 "bitmap.m"
}
#line 558 "bitmap.m"
                    mercury__bitmap__succeeded = (mercury__bitmap__V_17_17 <= mercury__bitmap__V_37_37);
#line 941 "bitmap.m"
                    if (mercury__bitmap__succeeded)
#line 941 "bitmap.m"
                      {
#line 945 "bitmap.m"
                        mercury__bitmap__V_18_18 = (mercury__bitmap__DestStartBit_12 + mercury__bitmap__NumBits_13);
#line 558 "bitmap.m"
                        mercury__bitmap__V_43_43 = (MR_Integer) 0;
#line 558 "bitmap.m"
                        mercury__bitmap__succeeded = (mercury__bitmap__V_43_43 <= mercury__bitmap__V_18_18);
#line 941 "bitmap.m"
                        if (mercury__bitmap__succeeded)
#line 941 "bitmap.m"
                          {
#line 1813 "bitmap.m"
{
#define MR_PROC_LABEL mercury__bitmap__copy_bits_6_f_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr) mercury__bitmap__DestBM_11 ;
		{
#line 1813 "bitmap.m"

    NumBits = BM->num_bits;

#line 6589 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__V_44_44  = NumBits;
#line 1813 "bitmap.m"
}
#line 558 "bitmap.m"
                            mercury__bitmap__succeeded = (mercury__bitmap__V_18_18 <= mercury__bitmap__V_44_44);
#line 941 "bitmap.m"
                          }
#line 941 "bitmap.m"
                      }
#line 941 "bitmap.m"
                  }
#line 941 "bitmap.m"
              }
#line 941 "bitmap.m"
          }
#line 941 "bitmap.m"
      }
#line 939 "bitmap.m"
    if (mercury__bitmap__succeeded)
#line 939 "bitmap.m"
      {
#line 939 "bitmap.m"
        return mercury__bitmap__HeadVar__7_7 = mercury__bitmap__unsafe_copy_bits_6_f_0(mercury__bitmap__SameBM_8, mercury__bitmap__SrcBM_9, mercury__bitmap__SrcStartBit_10, mercury__bitmap__DestBM_11, mercury__bitmap__DestStartBit_12, mercury__bitmap__NumBits_13);
      }
#line 939 "bitmap.m"
    else
#line 939 "bitmap.m"
      {
#line 951 "bitmap.m"
        mercury__bitmap__succeeded = (mercury__bitmap__NumBits_13 < (MR_Integer) 0);
#line 952 "bitmap.m"
        if (!(mercury__bitmap__succeeded))
#line 952 "bitmap.m"
          {
#line 952 "bitmap.m"
            mercury__bitmap__succeeded = (mercury__bitmap__SrcStartBit_10 < (MR_Integer) 0);
#line 952 "bitmap.m"
            if (!(mercury__bitmap__succeeded))
#line 953 "bitmap.m"
              {
#line 953 "bitmap.m"
                MR_Integer mercury__bitmap__V_19_19;
#line 953 "bitmap.m"
                MR_Integer mercury__bitmap__V_20_20 = (mercury__bitmap__SrcStartBit_10 + mercury__bitmap__NumBits_13);
#line 953 "bitmap.m"
                MR_Integer mercury__bitmap__V_51_51;

#line 953 "bitmap.m"
                mercury__bitmap__V_19_19 = (mercury__bitmap__V_20_20 - (MR_Integer) 1);
#line 553 "bitmap.m"
                mercury__bitmap__succeeded = ((MR_Integer) 0 <= mercury__bitmap__V_19_19);
#line 953 "bitmap.m"
                if (mercury__bitmap__succeeded)
#line 953 "bitmap.m"
                  {
#line 1813 "bitmap.m"
{
#define MR_PROC_LABEL mercury__bitmap__copy_bits_6_f_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr) mercury__bitmap__SrcBM_9 ;
		{
#line 1813 "bitmap.m"

    NumBits = BM->num_bits;

#line 6661 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__V_51_51  = NumBits;
#line 1813 "bitmap.m"
}
#line 553 "bitmap.m"
                    mercury__bitmap__succeeded = (mercury__bitmap__V_19_19 < mercury__bitmap__V_51_51);
#line 953 "bitmap.m"
                  }
#line 953 "bitmap.m"
                mercury__bitmap__succeeded = !(mercury__bitmap__succeeded);
#line 953 "bitmap.m"
              }
#line 952 "bitmap.m"
          }
#line 939 "bitmap.m"
        if (mercury__bitmap__succeeded)
#line 956 "bitmap.m"
          {
#line 2164 "bitmap.m"
            {
#line 2164 "bitmap.m"
              mercury__bitmap__throw_bounds_error_4_p_0(mercury__bitmap__SrcBM_9, (MR_String) "copy_bits (source)", mercury__bitmap__SrcStartBit_10, mercury__bitmap__NumBits_13);
            }
#line 956 "bitmap.m"
          }
#line 939 "bitmap.m"
        else
#line 939 "bitmap.m"
          {
#line 959 "bitmap.m"
            mercury__bitmap__succeeded = (mercury__bitmap__DestStartBit_12 < (MR_Integer) 0);
#line 960 "bitmap.m"
            if (!(mercury__bitmap__succeeded))
#line 960 "bitmap.m"
              {
#line 960 "bitmap.m"
                MR_Integer mercury__bitmap__V_25_25;
#line 960 "bitmap.m"
                MR_Integer mercury__bitmap__V_26_26 = (mercury__bitmap__DestStartBit_12 + mercury__bitmap__NumBits_13);
#line 960 "bitmap.m"
                MR_Integer mercury__bitmap__V_63_63;

#line 960 "bitmap.m"
                mercury__bitmap__V_25_25 = (mercury__bitmap__V_26_26 - (MR_Integer) 1);
#line 553 "bitmap.m"
                mercury__bitmap__succeeded = ((MR_Integer) 0 <= mercury__bitmap__V_25_25);
#line 960 "bitmap.m"
                if (mercury__bitmap__succeeded)
#line 960 "bitmap.m"
                  {
#line 1813 "bitmap.m"
{
#define MR_PROC_LABEL mercury__bitmap__copy_bits_6_f_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr) mercury__bitmap__DestBM_11 ;
		{
#line 1813 "bitmap.m"

    NumBits = BM->num_bits;

#line 6727 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__V_63_63  = NumBits;
#line 1813 "bitmap.m"
}
#line 553 "bitmap.m"
                    mercury__bitmap__succeeded = (mercury__bitmap__V_25_25 < mercury__bitmap__V_63_63);
#line 960 "bitmap.m"
                  }
#line 960 "bitmap.m"
                mercury__bitmap__succeeded = !(mercury__bitmap__succeeded);
#line 960 "bitmap.m"
              }
#line 939 "bitmap.m"
            if (mercury__bitmap__succeeded)
#line 963 "bitmap.m"
              {
#line 2164 "bitmap.m"
                {
#line 2164 "bitmap.m"
                  mercury__bitmap__throw_bounds_error_4_p_0(mercury__bitmap__DestBM_11, (MR_String) "copy_bits (destination)", mercury__bitmap__DestStartBit_12, mercury__bitmap__NumBits_13);
                }
#line 963 "bitmap.m"
              }
#line 939 "bitmap.m"
            else
#line 966 "bitmap.m"
              {
#line 966 "bitmap.m"
                MR_Word mercury__bitmap__TypeCtorInfo_4_76 = (MR_Word) &mercury__bitmap__bitmap__type_ctor_info_bitmap_error_0;
#line 966 "bitmap.m"
                MR_Word mercury__bitmap__V_75_75 = (MR_Word) ((MR_Box) ((MR_String) "bitmap.copy_bits: failed to diagnose error"));

#line 2191 "bitmap.m"
                {
#line 2191 "bitmap.m"
                  mercury__exception__throw_1_p_0(mercury__bitmap__TypeCtorInfo_4_76, ((MR_Box) (mercury__bitmap__V_75_75)));
                }
#line 966 "bitmap.m"
              }
#line 939 "bitmap.m"
          }
#line 939 "bitmap.m"
      }
#line 939 "bitmap.m"
    return mercury__bitmap__HeadVar__7_7;
#line 939 "bitmap.m"
  }
#line 937 "bitmap.m"
}

#line 899 "bitmap.m"
MR_Box MR_CALL 
mercury__bitmap__zip2_4_f_0(
#line 899 "bitmap.m"
  MR_Integer mercury__bitmap__I_6,
#line 899 "bitmap.m"
  MR_Word mercury__bitmap__Fn_7,
#line 899 "bitmap.m"
  MR_Box mercury__bitmap__BMa_8,
#line 899 "bitmap.m"
  MR_Box mercury__bitmap__BMb_9)
#line 899 "bitmap.m"
{
#line 908 "bitmap.m"
  while (MR_TRUE)
#line 908 "bitmap.m"
    {
#line 908 "bitmap.m"
      /* tailcall optimized into a loop */
#line 908 "bitmap.m"
      {
#line 908 "bitmap.m"
        MR_bool mercury__bitmap__succeeded = (mercury__bitmap__I_6 >= (MR_Integer) 0);
#line 908 "bitmap.m"
        MR_Box mercury__bitmap__BM_10;

#line 908 "bitmap.m"
        if (mercury__bitmap__succeeded)
#line 904 "bitmap.m"
          {
#line 904 "bitmap.m"
            MR_Integer mercury__bitmap__Xa_11;
#line 904 "bitmap.m"
            MR_Integer mercury__bitmap__Xb_12;
#line 904 "bitmap.m"
            MR_Box mercury__bitmap__BMc_13;
#line 904 "bitmap.m"
            MR_Integer mercury__bitmap__V_15_15;
#line 904 "bitmap.m"
            MR_Integer mercury__bitmap__V_16_16;
#line 906 "bitmap.m"
            MR_Box MR_CALL (* mercury__bitmap__func_0)(MR_Box, MR_Box, MR_Box);
#line 906 "bitmap.m"
            MR_Box mercury__bitmap__conv1_V_15_15;

#line 1887 "bitmap.m"
{
#define MR_PROC_LABEL mercury__bitmap__zip2_4_f_0

	MR_Integer N;
	MR_BitmapPtr BM;
	MR_Integer Byte;

	N =  mercury__bitmap__I_6 ;
	BM = (MR_BitmapPtr) mercury__bitmap__BMa_8 ;
		{
#line 1887 "bitmap.m"

    Byte = (MR_Integer) BM->elements[N];

#line 6840 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__Xa_11  = Byte;
#line 1887 "bitmap.m"
}
#line 1887 "bitmap.m"
{
#define MR_PROC_LABEL mercury__bitmap__zip2_4_f_0

	MR_Integer N;
	MR_BitmapPtr BM;
	MR_Integer Byte;

	N =  mercury__bitmap__I_6 ;
	BM = (MR_BitmapPtr) mercury__bitmap__BMb_9 ;
		{
#line 1887 "bitmap.m"

    Byte = (MR_Integer) BM->elements[N];

#line 6862 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__Xb_12  = Byte;
#line 1887 "bitmap.m"
}
#line 906 "bitmap.m"
            mercury__bitmap__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__bitmap__Fn_7, (MR_Integer) 1)));
#line 906 "bitmap.m"
            {
#line 906 "bitmap.m"
              mercury__bitmap__conv1_V_15_15 = mercury__bitmap__func_0(((MR_Box) mercury__bitmap__Fn_7), ((MR_Box) (mercury__bitmap__Xa_11)), ((MR_Box) (mercury__bitmap__Xb_12)));
            }
#line 906 "bitmap.m"
            mercury__bitmap__V_15_15 = ((MR_Integer) mercury__bitmap__conv1_V_15_15);
#line 1928 "bitmap.m"
{
#define MR_PROC_LABEL mercury__bitmap__zip2_4_f_0

	MR_Integer N;
	MR_BitmapPtr BM0;
	MR_Integer Byte;
	MR_BitmapPtr BM;

	N =  mercury__bitmap__I_6 ;
	BM0 = (MR_BitmapPtr) mercury__bitmap__BMb_9 ;
	Byte =  mercury__bitmap__V_15_15 ;
		{
#line 1928 "bitmap.m"

    BM = BM0;
    BM->elements[N] = (MR_uint_least8_t) Byte;

#line 6896 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__BMc_13  = (MR_Box) BM;
#line 1928 "bitmap.m"
}
#line 907 "bitmap.m"
            mercury__bitmap__V_16_16 = (mercury__bitmap__I_6 - (MR_Integer) 1);
#line 907 "bitmap.m"
            /* direct tailcall eliminated */
#line 907 "bitmap.m"
            {
#line 907 "bitmap.m"
              MR_Integer mercury__bitmap__I__tmp_copy_6 = mercury__bitmap__V_16_16;
#line 907 "bitmap.m"
              MR_Box mercury__bitmap__BMb__tmp_copy_9 = mercury__bitmap__BMc_13;

#line 907 "bitmap.m"
              mercury__bitmap__BMb_9 = mercury__bitmap__BMb__tmp_copy_9;
#line 907 "bitmap.m"
              mercury__bitmap__I_6 = mercury__bitmap__I__tmp_copy_6;
#line 907 "bitmap.m"
            }
#line 907 "bitmap.m"
            continue;
#line 904 "bitmap.m"
          }
#line 908 "bitmap.m"
        else
#line 909 "bitmap.m"
          mercury__bitmap__BM_10 = mercury__bitmap__BMb_9;
#line 908 "bitmap.m"
        return mercury__bitmap__BM_10;
#line 908 "bitmap.m"
      }
#line 908 "bitmap.m"
      break;
#line 908 "bitmap.m"
    }
#line 899 "bitmap.m"
}

#line 886 "bitmap.m"
MR_Box MR_CALL 
mercury__bitmap__zip_3_f_0(
#line 886 "bitmap.m"
  MR_Word mercury__bitmap__Fn_5,
#line 886 "bitmap.m"
  MR_Box mercury__bitmap__BMa_6,
#line 886 "bitmap.m"
  MR_Box mercury__bitmap__BMb_7)
#line 886 "bitmap.m"
{
#line 889 "bitmap.m"
  {
#line 889 "bitmap.m"
    MR_bool mercury__bitmap__succeeded;
#line 889 "bitmap.m"
    MR_Box mercury__bitmap__HeadVar__4_4;
#line 890 "bitmap.m"
    MR_Integer mercury__bitmap__V_8_8;

#line 1813 "bitmap.m"
{
#define MR_PROC_LABEL mercury__bitmap__zip_3_f_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr) mercury__bitmap__BMb_7 ;
		{
#line 1813 "bitmap.m"

    NumBits = BM->num_bits;

#line 6972 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__V_8_8  = NumBits;
#line 1813 "bitmap.m"
}
#line 890 "bitmap.m"
    mercury__bitmap__succeeded = (mercury__bitmap__V_8_8 == (MR_Integer) 0);
#line 889 "bitmap.m"
    if (mercury__bitmap__succeeded)
#line 889 "bitmap.m"
      mercury__bitmap__HeadVar__4_4 = mercury__bitmap__BMb_7;
#line 889 "bitmap.m"
    else
#line 892 "bitmap.m"
      {
#line 892 "bitmap.m"
        MR_Integer mercury__bitmap__V_9_9;
#line 892 "bitmap.m"
        MR_Integer mercury__bitmap__V_10_10;
#line 892 "bitmap.m"
        MR_Integer mercury__bitmap__V_11_11;

#line 1813 "bitmap.m"
{
#define MR_PROC_LABEL mercury__bitmap__zip_3_f_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr) mercury__bitmap__BMb_7 ;
		{
#line 1813 "bitmap.m"

    NumBits = BM->num_bits;

#line 7009 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__V_11_11  = NumBits;
#line 1813 "bitmap.m"
}
#line 892 "bitmap.m"
        mercury__bitmap__V_10_10 = (mercury__bitmap__V_11_11 - (MR_Integer) 1);
#line 2048 "bitmap.m"
        mercury__bitmap__succeeded = (mercury__bitmap__V_10_10 < (MR_Integer) 0);
#line 2047 "bitmap.m"
        if (mercury__bitmap__succeeded)
#line 2047 "bitmap.m"
          mercury__bitmap__V_9_9 = (MR_Integer) -1;
#line 2047 "bitmap.m"
        else
#line 2051 "bitmap.m"
          {
#line 2047 "bitmap.m"
            mercury__bitmap__V_9_9 = (mercury__bitmap__V_10_10 / (MR_Integer) 8);
#line 2051 "bitmap.m"
          }
#line 889 "bitmap.m"
        {
#line 889 "bitmap.m"
          return mercury__bitmap__HeadVar__4_4 = mercury__bitmap__zip2_4_f_0(mercury__bitmap__V_9_9, mercury__bitmap__Fn_5, mercury__bitmap__BMa_6, mercury__bitmap__BMb_7);
        }
#line 892 "bitmap.m"
      }
#line 889 "bitmap.m"
    return mercury__bitmap__HeadVar__4_4;
#line 889 "bitmap.m"
  }
#line 886 "bitmap.m"
}

#line 828 "bitmap.m"
MR_Box MR_CALL 
mercury__bitmap__complement_2_2_f_0(
#line 828 "bitmap.m"
  MR_Integer mercury__bitmap__ByteI_4,
#line 828 "bitmap.m"
  MR_Box mercury__bitmap__BM0_5)
#line 828 "bitmap.m"
{
#line 835 "bitmap.m"
  while (MR_TRUE)
#line 835 "bitmap.m"
    {
#line 835 "bitmap.m"
      /* tailcall optimized into a loop */
#line 835 "bitmap.m"
      {
#line 835 "bitmap.m"
        MR_bool mercury__bitmap__succeeded = (mercury__bitmap__ByteI_4 < (MR_Integer) 0);
#line 835 "bitmap.m"
        MR_Box mercury__bitmap__BM_6;

#line 835 "bitmap.m"
        if (mercury__bitmap__succeeded)
#line 834 "bitmap.m"
          mercury__bitmap__BM_6 = mercury__bitmap__BM0_5;
#line 835 "bitmap.m"
        else
#line 836 "bitmap.m"
          {
#line 836 "bitmap.m"
            MR_Integer mercury__bitmap__X_7;
#line 836 "bitmap.m"
            MR_Box mercury__bitmap__BM1_8;
#line 836 "bitmap.m"
            MR_Integer mercury__bitmap__V_10_10;
#line 836 "bitmap.m"
            MR_Integer mercury__bitmap__V_11_11;

#line 1887 "bitmap.m"
{
#define MR_PROC_LABEL mercury__bitmap__complement_2_2_f_0

	MR_Integer N;
	MR_BitmapPtr BM;
	MR_Integer Byte;

	N =  mercury__bitmap__ByteI_4 ;
	BM = (MR_BitmapPtr) mercury__bitmap__BM0_5 ;
		{
#line 1887 "bitmap.m"

    Byte = (MR_Integer) BM->elements[N];

#line 7100 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__X_7  = Byte;
#line 1887 "bitmap.m"
}
#line 837 "bitmap.m"
            mercury__bitmap__V_10_10 = ~(mercury__bitmap__X_7);
#line 1928 "bitmap.m"
{
#define MR_PROC_LABEL mercury__bitmap__complement_2_2_f_0

	MR_Integer N;
	MR_BitmapPtr BM0;
	MR_Integer Byte;
	MR_BitmapPtr BM;

	N =  mercury__bitmap__ByteI_4 ;
	BM0 = (MR_BitmapPtr) mercury__bitmap__BM0_5 ;
	Byte =  mercury__bitmap__V_10_10 ;
		{
#line 1928 "bitmap.m"

    BM = BM0;
    BM->elements[N] = (MR_uint_least8_t) Byte;

#line 7127 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__BM1_8  = (MR_Box) BM;
#line 1928 "bitmap.m"
}
#line 838 "bitmap.m"
            mercury__bitmap__V_11_11 = (mercury__bitmap__ByteI_4 - (MR_Integer) 1);
#line 838 "bitmap.m"
            /* direct tailcall eliminated */
#line 838 "bitmap.m"
            {
#line 838 "bitmap.m"
              MR_Integer mercury__bitmap__ByteI__tmp_copy_4 = mercury__bitmap__V_11_11;
#line 838 "bitmap.m"
              MR_Box mercury__bitmap__BM0__tmp_copy_5 = mercury__bitmap__BM1_8;

#line 838 "bitmap.m"
              mercury__bitmap__BM0_5 = mercury__bitmap__BM0__tmp_copy_5;
#line 838 "bitmap.m"
              mercury__bitmap__ByteI_4 = mercury__bitmap__ByteI__tmp_copy_4;
#line 838 "bitmap.m"
            }
#line 838 "bitmap.m"
            continue;
#line 836 "bitmap.m"
          }
#line 835 "bitmap.m"
        return mercury__bitmap__BM_6;
#line 835 "bitmap.m"
      }
#line 835 "bitmap.m"
      break;
#line 835 "bitmap.m"
    }
#line 828 "bitmap.m"
}

#line 739 "bitmap.m"
MR_Integer MR_CALL 
mercury__bitmap__quotient_bits_per_byte_with_rem_zero_2_f_0(
#line 739 "bitmap.m"
  MR_String mercury__bitmap__Pred_4,
#line 739 "bitmap.m"
  MR_Integer mercury__bitmap__Int_5)
#line 739 "bitmap.m"
{
#line 744 "bitmap.m"
  {
#line 744 "bitmap.m"
    MR_bool mercury__bitmap__succeeded;
#line 744 "bitmap.m"
    MR_Integer mercury__bitmap__Quotient_6;
#line 742 "bitmap.m"
    MR_Integer mercury__bitmap__V_7_7 = (mercury__bitmap__Int_5 % (MR_Integer) 8);

#line 742 "bitmap.m"
    mercury__bitmap__succeeded = (mercury__bitmap__V_7_7 == (MR_Integer) 0);
#line 744 "bitmap.m"
    if (mercury__bitmap__succeeded)
#line 743 "bitmap.m"
      {
#line 743 "bitmap.m"
        mercury__bitmap__Quotient_6 = (mercury__bitmap__Int_5 / (MR_Integer) 8);
#line 743 "bitmap.m"
      }
#line 744 "bitmap.m"
    else
#line 745 "bitmap.m"
      {
#line 745 "bitmap.m"
        MR_Word mercury__bitmap__TypeCtorInfo_4_20;
#line 745 "bitmap.m"
        MR_String mercury__bitmap__V_10_10;
#line 745 "bitmap.m"
        MR_Word mercury__bitmap__V_19_19;

#line 247 "string.opt"
        {
#line 247 "string.opt"
          mercury__string__append_3_p_2(mercury__bitmap__Pred_4, (MR_String) ": not a byte slice.", &mercury__bitmap__V_10_10);
        }
#line 2191 "bitmap.m"
        mercury__bitmap__V_19_19 = (MR_Word) mercury__bitmap__V_10_10;
#line 7212 "bitmap.c"
        mercury__bitmap__TypeCtorInfo_4_20 = (MR_Word) &mercury__bitmap__bitmap__type_ctor_info_bitmap_error_0;
#line 2191 "bitmap.m"
        {
#line 2191 "bitmap.m"
          mercury__exception__throw_1_p_0(mercury__bitmap__TypeCtorInfo_4_20, ((MR_Box) (mercury__bitmap__V_19_19)));
        }
#line 745 "bitmap.m"
      }
#line 744 "bitmap.m"
    return mercury__bitmap__Quotient_6;
#line 744 "bitmap.m"
  }
#line 739 "bitmap.m"
}

#line 696 "bitmap.m"
static void MR_CALL 
mercury__bitmap__set_bits_in_byte_index_6_p_0(
#line 696 "bitmap.m"
  MR_Integer mercury__bitmap__ByteIndex_7,
#line 696 "bitmap.m"
  MR_Integer mercury__bitmap__LastBitIndex_8,
#line 696 "bitmap.m"
  MR_Integer mercury__bitmap__NumBitsThisByte_9,
#line 696 "bitmap.m"
  MR_Integer mercury__bitmap__Bits_10,
#line 696 "bitmap.m"
  MR_Box mercury__bitmap__STATE_VARIABLE_BM_0_13,
#line 696 "bitmap.m"
  MR_Box * mercury__bitmap__STATE_VARIABLE_BM_14)
#line 696 "bitmap.m"
{
#line 699 "bitmap.m"
  {
#line 699 "bitmap.m"
    MR_bool mercury__bitmap__succeeded;
#line 699 "bitmap.m"
    MR_Integer mercury__bitmap__FirstBitInByte_12;
#line 699 "bitmap.m"
    MR_Integer mercury__bitmap__V_15_15 = (mercury__bitmap__LastBitIndex_8 - mercury__bitmap__NumBitsThisByte_9);
#line 699 "bitmap.m"
    MR_Integer mercury__bitmap__V_18_18;
#line 699 "bitmap.m"
    MR_Integer mercury__bitmap__V_19_19;
#line 699 "bitmap.m"
    MR_Integer mercury__bitmap__LastBit_29;
#line 699 "bitmap.m"
    MR_Integer mercury__bitmap__Shift_30;
#line 699 "bitmap.m"
    MR_Integer mercury__bitmap__Mask_31;
#line 699 "bitmap.m"
    MR_Integer mercury__bitmap__BitsToSet_32;
#line 699 "bitmap.m"
    MR_Integer mercury__bitmap__V_33_33;
#line 699 "bitmap.m"
    MR_Integer mercury__bitmap__V_38_38;
#line 699 "bitmap.m"
    MR_Integer mercury__bitmap__V_39_39;
#line 699 "bitmap.m"
    MR_Integer mercury__bitmap__V_40_40;
#line 699 "bitmap.m"
    MR_Integer mercury__bitmap__V_41_41;
#line 699 "bitmap.m"
    MR_Integer mercury__bitmap__BitMask_44;
#line 699 "bitmap.m"
    MR_Integer mercury__bitmap__V_46_46;
#line 699 "bitmap.m"
    MR_Integer mercury__bitmap__V_48_48;

#line 700 "bitmap.m"
    mercury__bitmap__FirstBitInByte_12 = (mercury__bitmap__V_15_15 + (MR_Integer) 1);
#line 1887 "bitmap.m"
{
#define MR_PROC_LABEL mercury__bitmap__set_bits_in_byte_index_6_p_0

	MR_Integer N;
	MR_BitmapPtr BM;
	MR_Integer Byte;

	N =  mercury__bitmap__ByteIndex_7 ;
	BM = (MR_BitmapPtr) mercury__bitmap__STATE_VARIABLE_BM_0_13 ;
		{
#line 1887 "bitmap.m"

    Byte = (MR_Integer) BM->elements[N];

#line 7299 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__V_19_19  = Byte;
#line 1887 "bitmap.m"
}
#line 2136 "bitmap.m"
    mercury__bitmap__V_33_33 = (mercury__bitmap__FirstBitInByte_12 + mercury__bitmap__NumBitsThisByte_9);
#line 2136 "bitmap.m"
    mercury__bitmap__LastBit_29 = (mercury__bitmap__V_33_33 - (MR_Integer) 1);
#line 2137 "bitmap.m"
    mercury__bitmap__Shift_30 = ((MR_Integer) 7 - mercury__bitmap__LastBit_29);
#line 2108 "bitmap.m"
    mercury__bitmap__V_46_46 = (mercury__bitmap__NumBitsThisByte_9 - (MR_Integer) 1);
#line 2108 "bitmap.m"
    mercury__bitmap__BitMask_44 = ((MR_Integer) 1 << mercury__bitmap__V_46_46);
#line 2109 "bitmap.m"
    mercury__bitmap__V_48_48 = (mercury__bitmap__BitMask_44 - (MR_Integer) 1);
#line 2109 "bitmap.m"
    mercury__bitmap__Mask_31 = (mercury__bitmap__BitMask_44 | mercury__bitmap__V_48_48);
#line 2139 "bitmap.m"
    mercury__bitmap__BitsToSet_32 = (mercury__bitmap__Mask_31 & mercury__bitmap__Bits_10);
#line 2140 "bitmap.m"
    mercury__bitmap__V_40_40 = (mercury__bitmap__Mask_31 << mercury__bitmap__Shift_30);
#line 2140 "bitmap.m"
    mercury__bitmap__V_39_39 = ~(mercury__bitmap__V_40_40);
#line 2141 "bitmap.m"
    mercury__bitmap__V_38_38 = (mercury__bitmap__V_19_19 & mercury__bitmap__V_39_39);
#line 2141 "bitmap.m"
    mercury__bitmap__V_41_41 = (mercury__bitmap__BitsToSet_32 << mercury__bitmap__Shift_30);
#line 2140 "bitmap.m"
    mercury__bitmap__V_18_18 = (mercury__bitmap__V_38_38 | mercury__bitmap__V_41_41);
#line 1928 "bitmap.m"
{
#define MR_PROC_LABEL mercury__bitmap__set_bits_in_byte_index_6_p_0

	MR_Integer N;
	MR_BitmapPtr BM0;
	MR_Integer Byte;
	MR_BitmapPtr BM;

	N =  mercury__bitmap__ByteIndex_7 ;
	BM0 = (MR_BitmapPtr) mercury__bitmap__STATE_VARIABLE_BM_0_13 ;
	Byte =  mercury__bitmap__V_18_18 ;
		{
#line 1928 "bitmap.m"

    BM = BM0;
    BM->elements[N] = (MR_uint_least8_t) Byte;

#line 7350 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__bitmap__STATE_VARIABLE_BM_14  = (MR_Box) BM;
#line 1928 "bitmap.m"
}
#line 699 "bitmap.m"
  }
#line 696 "bitmap.m"
}

#line 677 "bitmap.m"
void MR_CALL 
mercury__bitmap__set_bits_in_bytes_6_p_0(
#line 677 "bitmap.m"
  MR_Integer mercury__bitmap__LastByteIndex_7,
#line 677 "bitmap.m"
  MR_Integer mercury__bitmap__LastBitIndex_8,
#line 677 "bitmap.m"
  MR_Integer mercury__bitmap__NumBits_9,
#line 677 "bitmap.m"
  MR_Integer mercury__bitmap__Bits_10,
#line 677 "bitmap.m"
  MR_Box mercury__bitmap__STATE_VARIABLE_BM_0_14,
#line 677 "bitmap.m"
  MR_Box * mercury__bitmap__STATE_VARIABLE_BM_15)
#line 677 "bitmap.m"
{
#line 679 "bitmap.m"
  while (MR_TRUE)
#line 679 "bitmap.m"
    {
#line 679 "bitmap.m"
      /* tailcall optimized into a loop */
#line 679 "bitmap.m"
      {
#line 679 "bitmap.m"
        MR_bool mercury__bitmap__succeeded;
#line 679 "bitmap.m"
        MR_Integer mercury__bitmap__RemainingBitsInByte_12 = (mercury__bitmap__LastBitIndex_8 + (MR_Integer) 1);

#line 681 "bitmap.m"
        mercury__bitmap__succeeded = (mercury__bitmap__NumBits_9 > mercury__bitmap__RemainingBitsInByte_12);
#line 688 "bitmap.m"
        if (mercury__bitmap__succeeded)
#line 682 "bitmap.m"
          {
#line 682 "bitmap.m"
            MR_Box mercury__bitmap__STATE_VARIABLE_BM_17_17;
#line 682 "bitmap.m"
            MR_Integer mercury__bitmap__V_18_18;
#line 682 "bitmap.m"
            MR_Integer mercury__bitmap__V_20_20;
#line 682 "bitmap.m"
            MR_Integer mercury__bitmap__V_21_21;
#line 682 "bitmap.m"
            MR_Integer mercury__bitmap__FirstBitInByte_35;
#line 682 "bitmap.m"
            MR_Integer mercury__bitmap__V_36_36 = (mercury__bitmap__LastBitIndex_8 - mercury__bitmap__RemainingBitsInByte_12);
#line 682 "bitmap.m"
            MR_Integer mercury__bitmap__V_39_39;
#line 682 "bitmap.m"
            MR_Integer mercury__bitmap__V_40_40;
#line 682 "bitmap.m"
            MR_Integer mercury__bitmap__LastBit_50;
#line 682 "bitmap.m"
            MR_Integer mercury__bitmap__Shift_51;
#line 682 "bitmap.m"
            MR_Integer mercury__bitmap__Mask_52;
#line 682 "bitmap.m"
            MR_Integer mercury__bitmap__BitsToSet_53;
#line 682 "bitmap.m"
            MR_Integer mercury__bitmap__V_54_54;
#line 682 "bitmap.m"
            MR_Integer mercury__bitmap__V_59_59;
#line 682 "bitmap.m"
            MR_Integer mercury__bitmap__V_60_60;
#line 682 "bitmap.m"
            MR_Integer mercury__bitmap__V_61_61;
#line 682 "bitmap.m"
            MR_Integer mercury__bitmap__V_62_62;
#line 682 "bitmap.m"
            MR_Integer mercury__bitmap__BitMask_65;
#line 682 "bitmap.m"
            MR_Integer mercury__bitmap__V_67_67;
#line 682 "bitmap.m"
            MR_Integer mercury__bitmap__V_69_69;

#line 700 "bitmap.m"
            mercury__bitmap__FirstBitInByte_35 = (mercury__bitmap__V_36_36 + (MR_Integer) 1);
#line 1887 "bitmap.m"
{
#define MR_PROC_LABEL mercury__bitmap__set_bits_in_bytes_6_p_0

	MR_Integer N;
	MR_BitmapPtr BM;
	MR_Integer Byte;

	N =  mercury__bitmap__LastByteIndex_7 ;
	BM = (MR_BitmapPtr) mercury__bitmap__STATE_VARIABLE_BM_0_14 ;
		{
#line 1887 "bitmap.m"

    Byte = (MR_Integer) BM->elements[N];

#line 7456 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__V_40_40  = Byte;
#line 1887 "bitmap.m"
}
#line 2136 "bitmap.m"
            mercury__bitmap__V_54_54 = (mercury__bitmap__FirstBitInByte_35 + mercury__bitmap__RemainingBitsInByte_12);
#line 2136 "bitmap.m"
            mercury__bitmap__LastBit_50 = (mercury__bitmap__V_54_54 - (MR_Integer) 1);
#line 2137 "bitmap.m"
            mercury__bitmap__Shift_51 = ((MR_Integer) 7 - mercury__bitmap__LastBit_50);
#line 2108 "bitmap.m"
            mercury__bitmap__V_67_67 = (mercury__bitmap__RemainingBitsInByte_12 - (MR_Integer) 1);
#line 2108 "bitmap.m"
            mercury__bitmap__BitMask_65 = ((MR_Integer) 1 << mercury__bitmap__V_67_67);
#line 2109 "bitmap.m"
            mercury__bitmap__V_69_69 = (mercury__bitmap__BitMask_65 - (MR_Integer) 1);
#line 2109 "bitmap.m"
            mercury__bitmap__Mask_52 = (mercury__bitmap__BitMask_65 | mercury__bitmap__V_69_69);
#line 2139 "bitmap.m"
            mercury__bitmap__BitsToSet_53 = (mercury__bitmap__Mask_52 & mercury__bitmap__Bits_10);
#line 2140 "bitmap.m"
            mercury__bitmap__V_61_61 = (mercury__bitmap__Mask_52 << mercury__bitmap__Shift_51);
#line 2140 "bitmap.m"
            mercury__bitmap__V_60_60 = ~(mercury__bitmap__V_61_61);
#line 2141 "bitmap.m"
            mercury__bitmap__V_59_59 = (mercury__bitmap__V_40_40 & mercury__bitmap__V_60_60);
#line 2141 "bitmap.m"
            mercury__bitmap__V_62_62 = (mercury__bitmap__BitsToSet_53 << mercury__bitmap__Shift_51);
#line 2140 "bitmap.m"
            mercury__bitmap__V_39_39 = (mercury__bitmap__V_59_59 | mercury__bitmap__V_62_62);
#line 1928 "bitmap.m"
{
#define MR_PROC_LABEL mercury__bitmap__set_bits_in_bytes_6_p_0

	MR_Integer N;
	MR_BitmapPtr BM0;
	MR_Integer Byte;
	MR_BitmapPtr BM;

	N =  mercury__bitmap__LastByteIndex_7 ;
	BM0 = (MR_BitmapPtr) mercury__bitmap__STATE_VARIABLE_BM_0_14 ;
	Byte =  mercury__bitmap__V_39_39 ;
		{
#line 1928 "bitmap.m"

    BM = BM0;
    BM->elements[N] = (MR_uint_least8_t) Byte;

#line 7507 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__STATE_VARIABLE_BM_17_17  = (MR_Box) BM;
#line 1928 "bitmap.m"
}
#line 685 "bitmap.m"
            mercury__bitmap__V_18_18 = (mercury__bitmap__LastByteIndex_7 - (MR_Integer) 1);
#line 685 "bitmap.m"
            mercury__bitmap__V_20_20 = (mercury__bitmap__NumBits_9 - mercury__bitmap__RemainingBitsInByte_12);
#line 685 "bitmap.m"
            mercury__bitmap__V_21_21 = (mercury__bitmap__Bits_10 >> mercury__bitmap__RemainingBitsInByte_12);
#line 685 "bitmap.m"
            /* direct tailcall eliminated */
#line 685 "bitmap.m"
            {
#line 685 "bitmap.m"
              MR_Integer mercury__bitmap__LastByteIndex__tmp_copy_7 = mercury__bitmap__V_18_18;
#line 685 "bitmap.m"
              MR_Integer mercury__bitmap__NumBits__tmp_copy_9 = mercury__bitmap__V_20_20;
#line 685 "bitmap.m"
              MR_Integer mercury__bitmap__Bits__tmp_copy_10 = mercury__bitmap__V_21_21;
#line 685 "bitmap.m"
              MR_Box mercury__bitmap__STATE_VARIABLE_BM_0__tmp_copy_14 = mercury__bitmap__STATE_VARIABLE_BM_17_17;

#line 685 "bitmap.m"
              mercury__bitmap__STATE_VARIABLE_BM_0_14 = mercury__bitmap__STATE_VARIABLE_BM_0__tmp_copy_14;
#line 685 "bitmap.m"
              mercury__bitmap__Bits_10 = mercury__bitmap__Bits__tmp_copy_10;
#line 685 "bitmap.m"
              mercury__bitmap__NumBits_9 = mercury__bitmap__NumBits__tmp_copy_9;
#line 685 "bitmap.m"
              mercury__bitmap__LastBitIndex_8 = (MR_Integer) 7;
#line 685 "bitmap.m"
              mercury__bitmap__LastByteIndex_7 = mercury__bitmap__LastByteIndex__tmp_copy_7;
#line 685 "bitmap.m"
            }
#line 685 "bitmap.m"
            continue;
#line 682 "bitmap.m"
          }
#line 688 "bitmap.m"
        else
#line 690 "bitmap.m"
          {
#line 688 "bitmap.m"
            mercury__bitmap__succeeded = (mercury__bitmap__NumBits_9 > (MR_Integer) 0);
#line 690 "bitmap.m"
            if (mercury__bitmap__succeeded)
#line 689 "bitmap.m"
              {
#line 689 "bitmap.m"
                mercury__bitmap__set_bits_in_byte_index_6_p_0(mercury__bitmap__LastByteIndex_7, mercury__bitmap__LastBitIndex_8, mercury__bitmap__NumBits_9, mercury__bitmap__Bits_10, mercury__bitmap__STATE_VARIABLE_BM_0_14, mercury__bitmap__STATE_VARIABLE_BM_15);
#line 689 "bitmap.m"
                return;
              }
#line 690 "bitmap.m"
            else
#line 689 "bitmap.m"
              *mercury__bitmap__STATE_VARIABLE_BM_15 = mercury__bitmap__STATE_VARIABLE_BM_0_14;
#line 690 "bitmap.m"
          }
#line 679 "bitmap.m"
      }
#line 679 "bitmap.m"
      break;
#line 679 "bitmap.m"
    }
#line 677 "bitmap.m"
}

#line 638 "bitmap.m"
static void MR_CALL 
mercury__bitmap__extract_bits_from_byte_index_6_p_0(
#line 638 "bitmap.m"
  MR_Integer mercury__bitmap__ByteIndex_7,
#line 638 "bitmap.m"
  MR_Integer mercury__bitmap__FirstBitIndex_8,
#line 638 "bitmap.m"
  MR_Integer mercury__bitmap__NumBitsThisByte_9,
#line 638 "bitmap.m"
  MR_Box mercury__bitmap__BM_10,
#line 638 "bitmap.m"
  MR_Integer mercury__bitmap__STATE_VARIABLE_Bits_0_13,
#line 638 "bitmap.m"
  MR_Integer * mercury__bitmap__STATE_VARIABLE_Bits_14)
#line 638 "bitmap.m"
{
#line 641 "bitmap.m"
  {
#line 641 "bitmap.m"
    MR_bool mercury__bitmap__succeeded;
#line 641 "bitmap.m"
    MR_Integer mercury__bitmap__BitsThisByte_12;
#line 641 "bitmap.m"
    MR_Integer mercury__bitmap__V_15_15;
#line 641 "bitmap.m"
    MR_Integer mercury__bitmap__V_17_17;
#line 641 "bitmap.m"
    MR_Integer mercury__bitmap__LastBit_26;
#line 641 "bitmap.m"
    MR_Integer mercury__bitmap__Shift_27;
#line 641 "bitmap.m"
    MR_Integer mercury__bitmap__V_28_28;
#line 641 "bitmap.m"
    MR_Integer mercury__bitmap__V_33_33;
#line 641 "bitmap.m"
    MR_Integer mercury__bitmap__V_34_34;
#line 641 "bitmap.m"
    MR_Integer mercury__bitmap__BitMask_37;
#line 641 "bitmap.m"
    MR_Integer mercury__bitmap__V_39_39;
#line 641 "bitmap.m"
    MR_Integer mercury__bitmap__V_41_41;

#line 1887 "bitmap.m"
{
#define MR_PROC_LABEL mercury__bitmap__extract_bits_from_byte_index_6_p_0

	MR_Integer N;
	MR_BitmapPtr BM;
	MR_Integer Byte;

	N =  mercury__bitmap__ByteIndex_7 ;
	BM = (MR_BitmapPtr) mercury__bitmap__BM_10 ;
		{
#line 1887 "bitmap.m"

    Byte = (MR_Integer) BM->elements[N];

#line 7638 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__V_15_15  = Byte;
#line 1887 "bitmap.m"
}
#line 2123 "bitmap.m"
    mercury__bitmap__V_28_28 = (mercury__bitmap__FirstBitIndex_8 + mercury__bitmap__NumBitsThisByte_9);
#line 2123 "bitmap.m"
    mercury__bitmap__LastBit_26 = (mercury__bitmap__V_28_28 - (MR_Integer) 1);
#line 2124 "bitmap.m"
    mercury__bitmap__Shift_27 = ((MR_Integer) 7 - mercury__bitmap__LastBit_26);
#line 2125 "bitmap.m"
    mercury__bitmap__V_33_33 = (mercury__bitmap__V_15_15 >> mercury__bitmap__Shift_27);
#line 2108 "bitmap.m"
    mercury__bitmap__V_39_39 = (mercury__bitmap__NumBitsThisByte_9 - (MR_Integer) 1);
#line 2108 "bitmap.m"
    mercury__bitmap__BitMask_37 = ((MR_Integer) 1 << mercury__bitmap__V_39_39);
#line 2109 "bitmap.m"
    mercury__bitmap__V_41_41 = (mercury__bitmap__BitMask_37 - (MR_Integer) 1);
#line 2109 "bitmap.m"
    mercury__bitmap__V_34_34 = (mercury__bitmap__BitMask_37 | mercury__bitmap__V_41_41);
#line 2125 "bitmap.m"
    mercury__bitmap__BitsThisByte_12 = (mercury__bitmap__V_33_33 & mercury__bitmap__V_34_34);
#line 644 "bitmap.m"
    mercury__bitmap__V_17_17 = (mercury__bitmap__STATE_VARIABLE_Bits_0_13 << mercury__bitmap__NumBitsThisByte_9);
#line 644 "bitmap.m"
    *mercury__bitmap__STATE_VARIABLE_Bits_14 = (mercury__bitmap__V_17_17 | mercury__bitmap__BitsThisByte_12);
#line 641 "bitmap.m"
  }
#line 638 "bitmap.m"
}

#line 614 "bitmap.m"
void MR_CALL 
mercury__bitmap__extract_bits_from_bytes_6_p_0(
#line 614 "bitmap.m"
  MR_Integer mercury__bitmap__FirstByteIndex_7,
#line 614 "bitmap.m"
  MR_Integer mercury__bitmap__FirstBitIndex_8,
#line 614 "bitmap.m"
  MR_Integer mercury__bitmap__NumBits_9,
#line 614 "bitmap.m"
  MR_Box mercury__bitmap__BM_10,
#line 614 "bitmap.m"
  MR_Integer mercury__bitmap__STATE_VARIABLE_Bits_0_14,
#line 614 "bitmap.m"
  MR_Integer * mercury__bitmap__STATE_VARIABLE_Bits_15)
#line 614 "bitmap.m"
{
#line 616 "bitmap.m"
  while (MR_TRUE)
#line 616 "bitmap.m"
    {
#line 616 "bitmap.m"
      /* tailcall optimized into a loop */
#line 616 "bitmap.m"
      {
#line 616 "bitmap.m"
        MR_bool mercury__bitmap__succeeded;
#line 616 "bitmap.m"
        MR_Integer mercury__bitmap__RemainingBitsInByte_12 = ((MR_Integer) 8 - mercury__bitmap__FirstBitIndex_8);

#line 619 "bitmap.m"
        mercury__bitmap__succeeded = (mercury__bitmap__NumBits_9 > mercury__bitmap__RemainingBitsInByte_12);
#line 626 "bitmap.m"
        if (mercury__bitmap__succeeded)
#line 621 "bitmap.m"
          {
#line 621 "bitmap.m"
            MR_Integer mercury__bitmap__STATE_VARIABLE_Bits_17_17;
#line 621 "bitmap.m"
            MR_Integer mercury__bitmap__V_18_18;
#line 621 "bitmap.m"
            MR_Integer mercury__bitmap__V_20_20;
#line 621 "bitmap.m"
            MR_Integer mercury__bitmap__BitsThisByte_32;
#line 621 "bitmap.m"
            MR_Integer mercury__bitmap__V_33_33;
#line 621 "bitmap.m"
            MR_Integer mercury__bitmap__V_35_35;
#line 621 "bitmap.m"
            MR_Integer mercury__bitmap__LastBit_44;
#line 621 "bitmap.m"
            MR_Integer mercury__bitmap__Shift_45;
#line 621 "bitmap.m"
            MR_Integer mercury__bitmap__V_46_46;
#line 621 "bitmap.m"
            MR_Integer mercury__bitmap__V_51_51;
#line 621 "bitmap.m"
            MR_Integer mercury__bitmap__V_52_52;
#line 621 "bitmap.m"
            MR_Integer mercury__bitmap__BitMask_55;
#line 621 "bitmap.m"
            MR_Integer mercury__bitmap__V_57_57;
#line 621 "bitmap.m"
            MR_Integer mercury__bitmap__V_59_59;

#line 1887 "bitmap.m"
{
#define MR_PROC_LABEL mercury__bitmap__extract_bits_from_bytes_6_p_0

	MR_Integer N;
	MR_BitmapPtr BM;
	MR_Integer Byte;

	N =  mercury__bitmap__FirstByteIndex_7 ;
	BM = (MR_BitmapPtr) mercury__bitmap__BM_10 ;
		{
#line 1887 "bitmap.m"

    Byte = (MR_Integer) BM->elements[N];

#line 7752 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__V_33_33  = Byte;
#line 1887 "bitmap.m"
}
#line 2123 "bitmap.m"
            mercury__bitmap__V_46_46 = (mercury__bitmap__FirstBitIndex_8 + mercury__bitmap__RemainingBitsInByte_12);
#line 2123 "bitmap.m"
            mercury__bitmap__LastBit_44 = (mercury__bitmap__V_46_46 - (MR_Integer) 1);
#line 2124 "bitmap.m"
            mercury__bitmap__Shift_45 = ((MR_Integer) 7 - mercury__bitmap__LastBit_44);
#line 2125 "bitmap.m"
            mercury__bitmap__V_51_51 = (mercury__bitmap__V_33_33 >> mercury__bitmap__Shift_45);
#line 2108 "bitmap.m"
            mercury__bitmap__V_57_57 = (mercury__bitmap__RemainingBitsInByte_12 - (MR_Integer) 1);
#line 2108 "bitmap.m"
            mercury__bitmap__BitMask_55 = ((MR_Integer) 1 << mercury__bitmap__V_57_57);
#line 2109 "bitmap.m"
            mercury__bitmap__V_59_59 = (mercury__bitmap__BitMask_55 - (MR_Integer) 1);
#line 2109 "bitmap.m"
            mercury__bitmap__V_52_52 = (mercury__bitmap__BitMask_55 | mercury__bitmap__V_59_59);
#line 2125 "bitmap.m"
            mercury__bitmap__BitsThisByte_32 = (mercury__bitmap__V_51_51 & mercury__bitmap__V_52_52);
#line 644 "bitmap.m"
            mercury__bitmap__V_35_35 = (mercury__bitmap__STATE_VARIABLE_Bits_0_14 << mercury__bitmap__RemainingBitsInByte_12);
#line 644 "bitmap.m"
            mercury__bitmap__STATE_VARIABLE_Bits_17_17 = (mercury__bitmap__V_35_35 | mercury__bitmap__BitsThisByte_32);
#line 624 "bitmap.m"
            mercury__bitmap__V_18_18 = (mercury__bitmap__FirstByteIndex_7 + (MR_Integer) 1);
#line 624 "bitmap.m"
            mercury__bitmap__V_20_20 = (mercury__bitmap__NumBits_9 - mercury__bitmap__RemainingBitsInByte_12);
#line 624 "bitmap.m"
            /* direct tailcall eliminated */
#line 624 "bitmap.m"
            {
#line 624 "bitmap.m"
              MR_Integer mercury__bitmap__FirstByteIndex__tmp_copy_7 = mercury__bitmap__V_18_18;
#line 624 "bitmap.m"
              MR_Integer mercury__bitmap__NumBits__tmp_copy_9 = mercury__bitmap__V_20_20;
#line 624 "bitmap.m"
              MR_Integer mercury__bitmap__STATE_VARIABLE_Bits_0__tmp_copy_14 = mercury__bitmap__STATE_VARIABLE_Bits_17_17;

#line 624 "bitmap.m"
              mercury__bitmap__STATE_VARIABLE_Bits_0_14 = mercury__bitmap__STATE_VARIABLE_Bits_0__tmp_copy_14;
#line 624 "bitmap.m"
              mercury__bitmap__NumBits_9 = mercury__bitmap__NumBits__tmp_copy_9;
#line 624 "bitmap.m"
              mercury__bitmap__FirstBitIndex_8 = (MR_Integer) 0;
#line 624 "bitmap.m"
              mercury__bitmap__FirstByteIndex_7 = mercury__bitmap__FirstByteIndex__tmp_copy_7;
#line 624 "bitmap.m"
            }
#line 624 "bitmap.m"
            continue;
#line 621 "bitmap.m"
          }
#line 626 "bitmap.m"
        else
#line 631 "bitmap.m"
          {
#line 627 "bitmap.m"
            mercury__bitmap__succeeded = (mercury__bitmap__NumBits_9 > (MR_Integer) 0);
#line 631 "bitmap.m"
            if (mercury__bitmap__succeeded)
#line 629 "bitmap.m"
              {
#line 629 "bitmap.m"
                mercury__bitmap__extract_bits_from_byte_index_6_p_0(mercury__bitmap__FirstByteIndex_7, mercury__bitmap__FirstBitIndex_8, mercury__bitmap__NumBits_9, mercury__bitmap__BM_10, mercury__bitmap__STATE_VARIABLE_Bits_0_14, mercury__bitmap__STATE_VARIABLE_Bits_15);
#line 629 "bitmap.m"
                return;
              }
#line 631 "bitmap.m"
            else
#line 629 "bitmap.m"
              *mercury__bitmap__STATE_VARIABLE_Bits_15 = mercury__bitmap__STATE_VARIABLE_Bits_0_14;
#line 631 "bitmap.m"
          }
#line 616 "bitmap.m"
      }
#line 616 "bitmap.m"
      break;
#line 616 "bitmap.m"
    }
#line 614 "bitmap.m"
}

#line 541 "bitmap.m"
static MR_Box MR_CALL 
mercury__bitmap__initialize_bitmap_bytes_4_f_0(
#line 541 "bitmap.m"
  MR_Box mercury__bitmap__BM_6,
#line 541 "bitmap.m"
  MR_Integer mercury__bitmap__ByteIndex_7,
#line 541 "bitmap.m"
  MR_Integer mercury__bitmap__LastByteIndex_8,
#line 541 "bitmap.m"
  MR_Integer mercury__bitmap__Init_9)
#line 541 "bitmap.m"
{
#line 543 "bitmap.m"
  while (MR_TRUE)
#line 543 "bitmap.m"
    {
#line 543 "bitmap.m"
      /* tailcall optimized into a loop */
#line 543 "bitmap.m"
      {
#line 543 "bitmap.m"
        MR_bool mercury__bitmap__succeeded = (mercury__bitmap__ByteIndex_7 > mercury__bitmap__LastByteIndex_8);
#line 543 "bitmap.m"
        MR_Box mercury__bitmap__HeadVar__5_5;

#line 543 "bitmap.m"
        if (mercury__bitmap__succeeded)
#line 543 "bitmap.m"
          mercury__bitmap__HeadVar__5_5 = mercury__bitmap__BM_6;
#line 543 "bitmap.m"
        else
#line 547 "bitmap.m"
          {
#line 547 "bitmap.m"
            MR_Box mercury__bitmap__V_10_10;
#line 547 "bitmap.m"
            MR_Integer mercury__bitmap__V_11_11;

#line 1928 "bitmap.m"
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
#line 1928 "bitmap.m"

    BM = BM0;
    BM->elements[N] = (MR_uint_least8_t) Byte;

#line 7897 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__V_10_10  = (MR_Box) BM;
#line 1928 "bitmap.m"
}
#line 547 "bitmap.m"
            mercury__bitmap__V_11_11 = (mercury__bitmap__ByteIndex_7 + (MR_Integer) 1);
#line 543 "bitmap.m"
            /* direct tailcall eliminated */
#line 543 "bitmap.m"
            {
#line 543 "bitmap.m"
              MR_Box mercury__bitmap__BM__tmp_copy_6 = mercury__bitmap__V_10_10;
#line 543 "bitmap.m"
              MR_Integer mercury__bitmap__ByteIndex__tmp_copy_7 = mercury__bitmap__V_11_11;

#line 543 "bitmap.m"
              mercury__bitmap__ByteIndex_7 = mercury__bitmap__ByteIndex__tmp_copy_7;
#line 543 "bitmap.m"
              mercury__bitmap__BM_6 = mercury__bitmap__BM__tmp_copy_6;
#line 543 "bitmap.m"
            }
#line 543 "bitmap.m"
            continue;
#line 547 "bitmap.m"
          }
#line 543 "bitmap.m"
        return mercury__bitmap__HeadVar__5_5;
#line 543 "bitmap.m"
      }
#line 543 "bitmap.m"
      break;
#line 543 "bitmap.m"
    }
#line 541 "bitmap.m"
}

#line 511 "bitmap.m"
MR_Box MR_CALL 
mercury__bitmap__set_trailing_bits_in_byte_3_f_0(
#line 511 "bitmap.m"
  MR_Box mercury__bitmap__STATE_VARIABLE_BM_0_12,
#line 511 "bitmap.m"
  MR_Integer mercury__bitmap__Bit_6,
#line 511 "bitmap.m"
  MR_Integer mercury__bitmap__Initializer_7)
#line 511 "bitmap.m"
{
#line 513 "bitmap.m"
  {
#line 513 "bitmap.m"
    MR_bool mercury__bitmap__succeeded;
#line 513 "bitmap.m"
    MR_Box mercury__bitmap__STATE_VARIABLE_BM_13;
#line 513 "bitmap.m"
    MR_Integer mercury__bitmap__FirstTrailingBit_8 = (mercury__bitmap__Bit_6 + (MR_Integer) 1);
#line 513 "bitmap.m"
    MR_Integer mercury__bitmap__FirstTrailingBitIndex_9 = (mercury__bitmap__FirstTrailingBit_8 % (MR_Integer) 8);

#line 516 "bitmap.m"
    mercury__bitmap__succeeded = (mercury__bitmap__FirstTrailingBitIndex_9 == (MR_Integer) 0);
#line 516 "bitmap.m"
    mercury__bitmap__succeeded = !(mercury__bitmap__succeeded);
#line 522 "bitmap.m"
    if (mercury__bitmap__succeeded)
#line 517 "bitmap.m"
      {
#line 517 "bitmap.m"
        MR_Integer mercury__bitmap__ByteIndex_10;
#line 517 "bitmap.m"
        MR_Integer mercury__bitmap__NumBitsToSet_11;
#line 517 "bitmap.m"
        MR_Integer mercury__bitmap__V_17_17;
#line 517 "bitmap.m"
        MR_Integer mercury__bitmap__V_18_18;
#line 517 "bitmap.m"
        MR_Integer mercury__bitmap__LastBit_33;
#line 517 "bitmap.m"
        MR_Integer mercury__bitmap__Shift_34;
#line 517 "bitmap.m"
        MR_Integer mercury__bitmap__Mask_35;
#line 517 "bitmap.m"
        MR_Integer mercury__bitmap__BitsToSet_36;
#line 517 "bitmap.m"
        MR_Integer mercury__bitmap__V_37_37;
#line 517 "bitmap.m"
        MR_Integer mercury__bitmap__V_42_42;
#line 517 "bitmap.m"
        MR_Integer mercury__bitmap__V_43_43;
#line 517 "bitmap.m"
        MR_Integer mercury__bitmap__V_44_44;
#line 517 "bitmap.m"
        MR_Integer mercury__bitmap__V_45_45;
#line 517 "bitmap.m"
        MR_Integer mercury__bitmap__BitMask_48;
#line 517 "bitmap.m"
        MR_Integer mercury__bitmap__V_50_50;
#line 517 "bitmap.m"
        MR_Integer mercury__bitmap__V_52_52;

#line 2048 "bitmap.m"
        mercury__bitmap__succeeded = (mercury__bitmap__FirstTrailingBit_8 < (MR_Integer) 0);
#line 2047 "bitmap.m"
        if (mercury__bitmap__succeeded)
#line 2047 "bitmap.m"
          mercury__bitmap__ByteIndex_10 = (MR_Integer) -1;
#line 2047 "bitmap.m"
        else
#line 2051 "bitmap.m"
          {
#line 2047 "bitmap.m"
            mercury__bitmap__ByteIndex_10 = (mercury__bitmap__FirstTrailingBit_8 / (MR_Integer) 8);
#line 2051 "bitmap.m"
          }
#line 518 "bitmap.m"
        mercury__bitmap__NumBitsToSet_11 = ((MR_Integer) 8 - mercury__bitmap__FirstTrailingBitIndex_9);
#line 1887 "bitmap.m"
{
#define MR_PROC_LABEL mercury__bitmap__set_trailing_bits_in_byte_3_f_0

	MR_Integer N;
	MR_BitmapPtr BM;
	MR_Integer Byte;

	N =  mercury__bitmap__ByteIndex_10 ;
	BM = (MR_BitmapPtr) mercury__bitmap__STATE_VARIABLE_BM_0_12 ;
		{
#line 1887 "bitmap.m"

    Byte = (MR_Integer) BM->elements[N];

#line 8030 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__V_18_18  = Byte;
#line 1887 "bitmap.m"
}
#line 2136 "bitmap.m"
        mercury__bitmap__V_37_37 = (mercury__bitmap__FirstTrailingBitIndex_9 + mercury__bitmap__NumBitsToSet_11);
#line 2136 "bitmap.m"
        mercury__bitmap__LastBit_33 = (mercury__bitmap__V_37_37 - (MR_Integer) 1);
#line 2137 "bitmap.m"
        mercury__bitmap__Shift_34 = ((MR_Integer) 7 - mercury__bitmap__LastBit_33);
#line 2108 "bitmap.m"
        mercury__bitmap__V_50_50 = (mercury__bitmap__NumBitsToSet_11 - (MR_Integer) 1);
#line 2108 "bitmap.m"
        mercury__bitmap__BitMask_48 = ((MR_Integer) 1 << mercury__bitmap__V_50_50);
#line 2109 "bitmap.m"
        mercury__bitmap__V_52_52 = (mercury__bitmap__BitMask_48 - (MR_Integer) 1);
#line 2109 "bitmap.m"
        mercury__bitmap__Mask_35 = (mercury__bitmap__BitMask_48 | mercury__bitmap__V_52_52);
#line 2139 "bitmap.m"
        mercury__bitmap__BitsToSet_36 = (mercury__bitmap__Mask_35 & mercury__bitmap__Initializer_7);
#line 2140 "bitmap.m"
        mercury__bitmap__V_44_44 = (mercury__bitmap__Mask_35 << mercury__bitmap__Shift_34);
#line 2140 "bitmap.m"
        mercury__bitmap__V_43_43 = ~(mercury__bitmap__V_44_44);
#line 2141 "bitmap.m"
        mercury__bitmap__V_42_42 = (mercury__bitmap__V_18_18 & mercury__bitmap__V_43_43);
#line 2141 "bitmap.m"
        mercury__bitmap__V_45_45 = (mercury__bitmap__BitsToSet_36 << mercury__bitmap__Shift_34);
#line 2140 "bitmap.m"
        mercury__bitmap__V_17_17 = (mercury__bitmap__V_42_42 | mercury__bitmap__V_45_45);
#line 1928 "bitmap.m"
{
#define MR_PROC_LABEL mercury__bitmap__set_trailing_bits_in_byte_3_f_0

	MR_Integer N;
	MR_BitmapPtr BM0;
	MR_Integer Byte;
	MR_BitmapPtr BM;

	N =  mercury__bitmap__ByteIndex_10 ;
	BM0 = (MR_BitmapPtr) mercury__bitmap__STATE_VARIABLE_BM_0_12 ;
	Byte =  mercury__bitmap__V_17_17 ;
		{
#line 1928 "bitmap.m"

    BM = BM0;
    BM->elements[N] = (MR_uint_least8_t) Byte;

#line 8081 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__STATE_VARIABLE_BM_13  = (MR_Box) BM;
#line 1928 "bitmap.m"
}
#line 517 "bitmap.m"
      }
#line 522 "bitmap.m"
    else
#line 519 "bitmap.m"
      mercury__bitmap__STATE_VARIABLE_BM_13 = mercury__bitmap__STATE_VARIABLE_BM_0_12;
#line 513 "bitmap.m"
    return mercury__bitmap__STATE_VARIABLE_BM_13;
#line 513 "bitmap.m"
  }
#line 511 "bitmap.m"
}

#line 506 "bitmap.m"
MR_Box MR_CALL 
mercury__bitmap__clear_filler_bits_1_f_0(
#line 506 "bitmap.m"
  MR_Box mercury__bitmap__BM_3)
#line 506 "bitmap.m"
{
#line 508 "bitmap.m"
  {
#line 508 "bitmap.m"
    MR_bool mercury__bitmap__succeeded;
#line 508 "bitmap.m"
    MR_Box mercury__bitmap__HeadVar__2_2;
#line 508 "bitmap.m"
    MR_Integer mercury__bitmap__V_4_4;
#line 508 "bitmap.m"
    MR_Integer mercury__bitmap__V_5_5;

#line 1813 "bitmap.m"
{
#define MR_PROC_LABEL mercury__bitmap__clear_filler_bits_1_f_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr) mercury__bitmap__BM_3 ;
		{
#line 1813 "bitmap.m"

    NumBits = BM->num_bits;

#line 8132 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__V_5_5  = NumBits;
#line 1813 "bitmap.m"
}
#line 508 "bitmap.m"
    mercury__bitmap__V_4_4 = (mercury__bitmap__V_5_5 - (MR_Integer) 1);
#line 508 "bitmap.m"
    {
#line 508 "bitmap.m"
      return mercury__bitmap__HeadVar__2_2 = mercury__bitmap__set_trailing_bits_in_byte_3_f_0(mercury__bitmap__BM_3, mercury__bitmap__V_4_4, (MR_Integer) 0);
    }
#line 508 "bitmap.m"
    return mercury__bitmap__HeadVar__2_2;
#line 508 "bitmap.m"
  }
#line 506 "bitmap.m"
}

#line 437 "bitmap.m"
void MR_CALL 
mercury__bitmap__throw_bounds_error_4_p_0(
#line 437 "bitmap.m"
  MR_Box mercury__bitmap__BM_5,
#line 437 "bitmap.m"
  MR_String mercury__bitmap__Pred_6,
#line 437 "bitmap.m"
  MR_Integer mercury__bitmap__Index_7,
#line 437 "bitmap.m"
  MR_Integer mercury__bitmap__NumBits_8)
#line 437 "bitmap.m"
{
#line 2166 "bitmap.m"
  {
#line 2166 "bitmap.m"
    MR_bool mercury__bitmap__succeeded = (mercury__bitmap__NumBits_8 < (MR_Integer) 0);
#line 2166 "bitmap.m"
    MR_Word mercury__bitmap__TypeCtorInfo_4_61;
#line 2166 "bitmap.m"
    MR_String mercury__bitmap__Msg_9;
#line 2166 "bitmap.m"
    MR_Word mercury__bitmap__V_60_60;

#line 2171 "bitmap.m"
    if (mercury__bitmap__succeeded)
#line 2168 "bitmap.m"
      {
#line 2168 "bitmap.m"
        MR_Word mercury__bitmap__V_11_11;
#line 2168 "bitmap.m"
        MR_Word mercury__bitmap__V_12_12;
#line 2168 "bitmap.m"
        MR_Word mercury__bitmap__V_14_14;
#line 2168 "bitmap.m"
        MR_String mercury__bitmap__V_15_15;
#line 2168 "bitmap.m"
        MR_Word mercury__bitmap__V_16_16;
#line 2168 "bitmap.m"
        MR_Word mercury__bitmap__V_18_18;

#line 284 "string.opt"
        {
#line 284 "string.opt"
          mercury__string__int_to_base_string_3_p_0(mercury__bitmap__NumBits_8, (MR_Integer) 10, &mercury__bitmap__V_15_15);
        }
#line 2170 "bitmap.m"
        mercury__bitmap__V_18_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2170 "bitmap.m"
        mercury__bitmap__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__bitmap_scalar_common_4[1]);
#line 2169 "bitmap.m"
        {
#line 2169 "bitmap.m"
          mercury__bitmap__V_14_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2169 "bitmap.m"
          MR_hl_field(MR_mktag(1), mercury__bitmap__V_14_14, 0) = ((MR_Box) (mercury__bitmap__V_15_15));
#line 2169 "bitmap.m"
          MR_hl_field(MR_mktag(1), mercury__bitmap__V_14_14, 1) = ((MR_Box) (mercury__bitmap__V_16_16));
#line 2169 "bitmap.m"
        }
#line 2169 "bitmap.m"
        {
#line 2169 "bitmap.m"
          mercury__bitmap__V_12_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2169 "bitmap.m"
          MR_hl_field(MR_mktag(1), mercury__bitmap__V_12_12, 0) = ((MR_Box) ((MR_String) ": negative number of bits: "));
#line 2169 "bitmap.m"
          MR_hl_field(MR_mktag(1), mercury__bitmap__V_12_12, 1) = ((MR_Box) (mercury__bitmap__V_14_14));
#line 2169 "bitmap.m"
        }
#line 2168 "bitmap.m"
        {
#line 2168 "bitmap.m"
          mercury__bitmap__V_11_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2168 "bitmap.m"
          MR_hl_field(MR_mktag(1), mercury__bitmap__V_11_11, 0) = ((MR_Box) (mercury__bitmap__Pred_6));
#line 2168 "bitmap.m"
          MR_hl_field(MR_mktag(1), mercury__bitmap__V_11_11, 1) = ((MR_Box) (mercury__bitmap__V_12_12));
#line 2168 "bitmap.m"
        }
#line 2168 "bitmap.m"
        {
#line 2168 "bitmap.m"
          mercury__bitmap__Msg_9 = mercury__string__append_list_1_f_0(mercury__bitmap__V_11_11);
        }
#line 2168 "bitmap.m"
      }
#line 2171 "bitmap.m"
    else
#line 2172 "bitmap.m"
      {
#line 2172 "bitmap.m"
        MR_Word mercury__bitmap__V_19_19;
#line 2172 "bitmap.m"
        MR_Word mercury__bitmap__V_20_20;
#line 2172 "bitmap.m"
        MR_Word mercury__bitmap__V_22_22;
#line 2172 "bitmap.m"
        MR_String mercury__bitmap__V_23_23;
#line 2172 "bitmap.m"
        MR_Word mercury__bitmap__V_24_24;
#line 2172 "bitmap.m"
        MR_Word mercury__bitmap__V_26_26;
#line 2172 "bitmap.m"
        MR_String mercury__bitmap__V_27_27;
#line 2172 "bitmap.m"
        MR_Word mercury__bitmap__V_28_28;
#line 2172 "bitmap.m"
        MR_Word mercury__bitmap__V_30_30;
#line 2172 "bitmap.m"
        MR_String mercury__bitmap__V_31_31;
#line 2172 "bitmap.m"
        MR_Integer mercury__bitmap__V_32_32;
#line 2172 "bitmap.m"
        MR_Word mercury__bitmap__V_33_33;
#line 2172 "bitmap.m"
        MR_Word mercury__bitmap__V_35_35;

#line 284 "string.opt"
        {
#line 284 "string.opt"
          mercury__string__int_to_base_string_3_p_0(mercury__bitmap__NumBits_8, (MR_Integer) 10, &mercury__bitmap__V_23_23);
        }
#line 284 "string.opt"
        {
#line 284 "string.opt"
          mercury__string__int_to_base_string_3_p_0(mercury__bitmap__Index_7, (MR_Integer) 10, &mercury__bitmap__V_27_27);
        }
#line 1813 "bitmap.m"
{
#define MR_PROC_LABEL mercury__bitmap__throw_bounds_error_4_p_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr) mercury__bitmap__BM_5 ;
		{
#line 1813 "bitmap.m"

    NumBits = BM->num_bits;

#line 8294 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__V_32_32  = NumBits;
#line 1813 "bitmap.m"
}
#line 284 "string.opt"
        {
#line 284 "string.opt"
          mercury__string__int_to_base_string_3_p_0(mercury__bitmap__V_32_32, (MR_Integer) 10, &mercury__bitmap__V_31_31);
        }
#line 2179 "bitmap.m"
        mercury__bitmap__V_35_35 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2178 "bitmap.m"
        mercury__bitmap__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__bitmap_scalar_common_4[2]);
#line 2177 "bitmap.m"
        {
#line 2177 "bitmap.m"
          mercury__bitmap__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2177 "bitmap.m"
          MR_hl_field(MR_mktag(1), mercury__bitmap__V_30_30, 0) = ((MR_Box) (mercury__bitmap__V_31_31));
#line 2177 "bitmap.m"
          MR_hl_field(MR_mktag(1), mercury__bitmap__V_30_30, 1) = ((MR_Box) (mercury__bitmap__V_33_33));
#line 2177 "bitmap.m"
        }
#line 2176 "bitmap.m"
        {
#line 2176 "bitmap.m"
          mercury__bitmap__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2176 "bitmap.m"
          MR_hl_field(MR_mktag(1), mercury__bitmap__V_28_28, 0) = ((MR_Box) ((MR_String) " is out of bounds [0, "));
#line 2176 "bitmap.m"
          MR_hl_field(MR_mktag(1), mercury__bitmap__V_28_28, 1) = ((MR_Box) (mercury__bitmap__V_30_30));
#line 2176 "bitmap.m"
        }
#line 2175 "bitmap.m"
        {
#line 2175 "bitmap.m"
          mercury__bitmap__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2175 "bitmap.m"
          MR_hl_field(MR_mktag(1), mercury__bitmap__V_26_26, 0) = ((MR_Box) (mercury__bitmap__V_27_27));
#line 2175 "bitmap.m"
          MR_hl_field(MR_mktag(1), mercury__bitmap__V_26_26, 1) = ((MR_Box) (mercury__bitmap__V_28_28));
#line 2175 "bitmap.m"
        }
#line 2174 "bitmap.m"
        {
#line 2174 "bitmap.m"
          mercury__bitmap__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2174 "bitmap.m"
          MR_hl_field(MR_mktag(1), mercury__bitmap__V_24_24, 0) = ((MR_Box) ((MR_String) " bits starting at bit "));
#line 2174 "bitmap.m"
          MR_hl_field(MR_mktag(1), mercury__bitmap__V_24_24, 1) = ((MR_Box) (mercury__bitmap__V_26_26));
#line 2174 "bitmap.m"
        }
#line 2173 "bitmap.m"
        {
#line 2173 "bitmap.m"
          mercury__bitmap__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2173 "bitmap.m"
          MR_hl_field(MR_mktag(1), mercury__bitmap__V_22_22, 0) = ((MR_Box) (mercury__bitmap__V_23_23));
#line 2173 "bitmap.m"
          MR_hl_field(MR_mktag(1), mercury__bitmap__V_22_22, 1) = ((MR_Box) (mercury__bitmap__V_24_24));
#line 2173 "bitmap.m"
        }
#line 2173 "bitmap.m"
        {
#line 2173 "bitmap.m"
          mercury__bitmap__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2173 "bitmap.m"
          MR_hl_field(MR_mktag(1), mercury__bitmap__V_20_20, 0) = ((MR_Box) ((MR_String) ": "));
#line 2173 "bitmap.m"
          MR_hl_field(MR_mktag(1), mercury__bitmap__V_20_20, 1) = ((MR_Box) (mercury__bitmap__V_22_22));
#line 2173 "bitmap.m"
        }
#line 2172 "bitmap.m"
        {
#line 2172 "bitmap.m"
          mercury__bitmap__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2172 "bitmap.m"
          MR_hl_field(MR_mktag(1), mercury__bitmap__V_19_19, 0) = ((MR_Box) (mercury__bitmap__Pred_6));
#line 2172 "bitmap.m"
          MR_hl_field(MR_mktag(1), mercury__bitmap__V_19_19, 1) = ((MR_Box) (mercury__bitmap__V_20_20));
#line 2172 "bitmap.m"
        }
#line 2172 "bitmap.m"
        {
#line 2172 "bitmap.m"
          mercury__bitmap__Msg_9 = mercury__string__append_list_1_f_0(mercury__bitmap__V_19_19);
        }
#line 2172 "bitmap.m"
      }
#line 2191 "bitmap.m"
    mercury__bitmap__V_60_60 = (MR_Word) mercury__bitmap__Msg_9;
#line 8389 "bitmap.c"
    mercury__bitmap__TypeCtorInfo_4_61 = (MR_Word) &mercury__bitmap__bitmap__type_ctor_info_bitmap_error_0;
#line 2191 "bitmap.m"
    {
#line 2191 "bitmap.m"
      mercury__exception__throw_1_p_0(mercury__bitmap__TypeCtorInfo_4_61, ((MR_Box) (mercury__bitmap__V_60_60)));
#line 2191 "bitmap.m"
      return;
    }
#line 2166 "bitmap.m"
  }
#line 437 "bitmap.m"
}

#line 425 "bitmap.m"
void MR_CALL 
mercury__bitmap__flip_3_p_0(
#line 425 "bitmap.m"
  MR_Integer mercury__bitmap__I_4,
#line 425 "bitmap.m"
  MR_Box mercury__bitmap__BM_5,
#line 425 "bitmap.m"
  MR_Box * mercury__bitmap__HeadVar__3_3)
#line 425 "bitmap.m"
{
#line 772 "bitmap.m"
  {
#line 772 "bitmap.m"
    MR_bool mercury__bitmap__succeeded;

#line 772 "bitmap.m"
    {
#line 772 "bitmap.m"
      *mercury__bitmap__HeadVar__3_3 = mercury__bitmap__flip_2_f_0(mercury__bitmap__BM_5, mercury__bitmap__I_4);
    }
#line 772 "bitmap.m"
  }
#line 425 "bitmap.m"
}

#line 422 "bitmap.m"
void MR_CALL 
mercury__bitmap__clear_3_p_0(
#line 422 "bitmap.m"
  MR_Integer mercury__bitmap__I_4,
#line 422 "bitmap.m"
  MR_Box mercury__bitmap__BM_5,
#line 422 "bitmap.m"
  MR_Box * mercury__bitmap__HeadVar__3_3)
#line 422 "bitmap.m"
{
#line 770 "bitmap.m"
  {
#line 770 "bitmap.m"
    MR_bool mercury__bitmap__succeeded;

#line 770 "bitmap.m"
    {
#line 770 "bitmap.m"
      *mercury__bitmap__HeadVar__3_3 = mercury__bitmap__clear_2_f_0(mercury__bitmap__BM_5, mercury__bitmap__I_4);
    }
#line 770 "bitmap.m"
  }
#line 422 "bitmap.m"
}

#line 419 "bitmap.m"
void MR_CALL 
mercury__bitmap__set_3_p_0(
#line 419 "bitmap.m"
  MR_Integer mercury__bitmap__I_4,
#line 419 "bitmap.m"
  MR_Box mercury__bitmap__BM_5,
#line 419 "bitmap.m"
  MR_Box * mercury__bitmap__HeadVar__3_3)
#line 419 "bitmap.m"
{
#line 768 "bitmap.m"
  {
#line 768 "bitmap.m"
    MR_bool mercury__bitmap__succeeded;

#line 768 "bitmap.m"
    {
#line 768 "bitmap.m"
      *mercury__bitmap__HeadVar__3_3 = mercury__bitmap__set_2_f_0(mercury__bitmap__BM_5, mercury__bitmap__I_4);
    }
#line 768 "bitmap.m"
  }
#line 419 "bitmap.m"
}

#line 412 "bitmap.m"
MR_bool MR_CALL 
mercury__bitmap__unsafe_is_clear_2_p_0(
#line 412 "bitmap.m"
  MR_Box mercury__bitmap__BM_3,
#line 412 "bitmap.m"
  MR_Integer mercury__bitmap__I_4)
#line 412 "bitmap.m"
{
#line 819 "bitmap.m"
  {
#line 819 "bitmap.m"
    MR_bool mercury__bitmap__succeeded = (mercury__bitmap__I_4 < (MR_Integer) 0);
#line 819 "bitmap.m"
    MR_Integer mercury__bitmap__V_5_5;
#line 819 "bitmap.m"
    MR_Integer mercury__bitmap__V_6_6;
#line 819 "bitmap.m"
    MR_Integer mercury__bitmap__V_7_7;
#line 819 "bitmap.m"
    MR_Integer mercury__bitmap__V_8_8;
#line 819 "bitmap.m"
    MR_Integer mercury__bitmap__V_18_18;
#line 819 "bitmap.m"
    MR_Integer mercury__bitmap__V_22_22;

#line 2047 "bitmap.m"
    if (mercury__bitmap__succeeded)
#line 2047 "bitmap.m"
      mercury__bitmap__V_7_7 = (MR_Integer) -1;
#line 2047 "bitmap.m"
    else
#line 2051 "bitmap.m"
      {
#line 2047 "bitmap.m"
        mercury__bitmap__V_7_7 = (mercury__bitmap__I_4 / (MR_Integer) 8);
#line 2051 "bitmap.m"
      }
#line 1887 "bitmap.m"
{
#define MR_PROC_LABEL mercury__bitmap__unsafe_is_clear_2_p_0

	MR_Integer N;
	MR_BitmapPtr BM;
	MR_Integer Byte;

	N =  mercury__bitmap__V_7_7 ;
	BM = (MR_BitmapPtr) mercury__bitmap__BM_3 ;
		{
#line 1887 "bitmap.m"

    Byte = (MR_Integer) BM->elements[N];

#line 8534 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__V_6_6  = Byte;
#line 1887 "bitmap.m"
}
#line 2083 "bitmap.m"
    mercury__bitmap__V_22_22 = (mercury__bitmap__I_4 % (MR_Integer) 8);
#line 2095 "bitmap.m"
    mercury__bitmap__V_18_18 = ((MR_Integer) 7 - mercury__bitmap__V_22_22);
#line 2095 "bitmap.m"
    mercury__bitmap__V_8_8 = ((MR_Integer) 1 << mercury__bitmap__V_18_18);
#line 820 "bitmap.m"
    mercury__bitmap__V_5_5 = (mercury__bitmap__V_6_6 & mercury__bitmap__V_8_8);
#line 820 "bitmap.m"
    mercury__bitmap__succeeded = (mercury__bitmap__V_5_5 == (MR_Integer) 0);
#line 819 "bitmap.m"
    return mercury__bitmap__succeeded;
#line 819 "bitmap.m"
  }
#line 412 "bitmap.m"
}

#line 408 "bitmap.m"
MR_bool MR_CALL 
mercury__bitmap__unsafe_is_set_2_p_0(
#line 408 "bitmap.m"
  MR_Box mercury__bitmap__BM_3,
#line 408 "bitmap.m"
  MR_Integer mercury__bitmap__I_4)
#line 408 "bitmap.m"
{
#line 817 "bitmap.m"
  {
#line 817 "bitmap.m"
    MR_bool mercury__bitmap__succeeded;

#line 817 "bitmap.m"
    {
#line 817 "bitmap.m"
      mercury__bitmap__succeeded = mercury__bitmap__unsafe_is_clear_2_p_0(mercury__bitmap__BM_3, mercury__bitmap__I_4);
    }
#line 817 "bitmap.m"
    mercury__bitmap__succeeded = !(mercury__bitmap__succeeded);
#line 817 "bitmap.m"
    return mercury__bitmap__succeeded;
#line 817 "bitmap.m"
  }
#line 408 "bitmap.m"
}

#line 404 "bitmap.m"
void MR_CALL 
mercury__bitmap__unsafe_flip_3_p_0(
#line 404 "bitmap.m"
  MR_Integer mercury__bitmap__I_4,
#line 404 "bitmap.m"
  MR_Box mercury__bitmap__BM_5,
#line 404 "bitmap.m"
  MR_Box * mercury__bitmap__HeadVar__3_3)
#line 404 "bitmap.m"
{
#line 798 "bitmap.m"
  {
#line 798 "bitmap.m"
    MR_bool mercury__bitmap__succeeded;

#line 798 "bitmap.m"
    {
#line 798 "bitmap.m"
      *mercury__bitmap__HeadVar__3_3 = mercury__bitmap__unsafe_flip_2_f_0(mercury__bitmap__BM_5, mercury__bitmap__I_4);
    }
#line 798 "bitmap.m"
  }
#line 404 "bitmap.m"
}

#line 401 "bitmap.m"
void MR_CALL 
mercury__bitmap__unsafe_clear_3_p_0(
#line 401 "bitmap.m"
  MR_Integer mercury__bitmap__I_4,
#line 401 "bitmap.m"
  MR_Box mercury__bitmap__BM_5,
#line 401 "bitmap.m"
  MR_Box * mercury__bitmap__HeadVar__3_3)
#line 401 "bitmap.m"
{
#line 796 "bitmap.m"
  {
#line 796 "bitmap.m"
    MR_bool mercury__bitmap__succeeded;

#line 796 "bitmap.m"
    {
#line 796 "bitmap.m"
      *mercury__bitmap__HeadVar__3_3 = mercury__bitmap__unsafe_clear_2_f_0(mercury__bitmap__BM_5, mercury__bitmap__I_4);
    }
#line 796 "bitmap.m"
  }
#line 401 "bitmap.m"
}

#line 398 "bitmap.m"
void MR_CALL 
mercury__bitmap__unsafe_set_3_p_0(
#line 398 "bitmap.m"
  MR_Integer mercury__bitmap__I_4,
#line 398 "bitmap.m"
  MR_Box mercury__bitmap__BM_5,
#line 398 "bitmap.m"
  MR_Box * mercury__bitmap__HeadVar__3_3)
#line 398 "bitmap.m"
{
#line 794 "bitmap.m"
  {
#line 794 "bitmap.m"
    MR_bool mercury__bitmap__succeeded;

#line 794 "bitmap.m"
    {
#line 794 "bitmap.m"
      *mercury__bitmap__HeadVar__3_3 = mercury__bitmap__unsafe_set_2_f_0(mercury__bitmap__BM_5, mercury__bitmap__I_4);
    }
#line 794 "bitmap.m"
  }
#line 398 "bitmap.m"
}

#line 395 "bitmap.m"
MR_Box MR_CALL 
mercury__bitmap__unsafe_clear_2_f_0(
#line 395 "bitmap.m"
  MR_Box mercury__bitmap__BM0_4,
#line 395 "bitmap.m"
  MR_Integer mercury__bitmap__I_5)
#line 395 "bitmap.m"
{
#line 782 "bitmap.m"
  {
#line 782 "bitmap.m"
    MR_bool mercury__bitmap__succeeded = (mercury__bitmap__I_5 < (MR_Integer) 0);
#line 782 "bitmap.m"
    MR_Box mercury__bitmap__BM_6;
#line 782 "bitmap.m"
    MR_Integer mercury__bitmap__ByteIndex_7;
#line 782 "bitmap.m"
    MR_Integer mercury__bitmap__Byte0_8;
#line 782 "bitmap.m"
    MR_Integer mercury__bitmap__Byte_9;
#line 782 "bitmap.m"
    MR_Integer mercury__bitmap__V_10_10;
#line 782 "bitmap.m"
    MR_Integer mercury__bitmap__V_11_11;
#line 782 "bitmap.m"
    MR_Integer mercury__bitmap__V_21_21;
#line 782 "bitmap.m"
    MR_Integer mercury__bitmap__V_25_25;

#line 2047 "bitmap.m"
    if (mercury__bitmap__succeeded)
#line 2047 "bitmap.m"
      mercury__bitmap__ByteIndex_7 = (MR_Integer) -1;
#line 2047 "bitmap.m"
    else
#line 2051 "bitmap.m"
      {
#line 2047 "bitmap.m"
        mercury__bitmap__ByteIndex_7 = (mercury__bitmap__I_5 / (MR_Integer) 8);
#line 2051 "bitmap.m"
      }
#line 1887 "bitmap.m"
{
#define MR_PROC_LABEL mercury__bitmap__unsafe_clear_2_f_0

	MR_Integer N;
	MR_BitmapPtr BM;
	MR_Integer Byte;

	N =  mercury__bitmap__ByteIndex_7 ;
	BM = (MR_BitmapPtr) mercury__bitmap__BM0_4 ;
		{
#line 1887 "bitmap.m"

    Byte = (MR_Integer) BM->elements[N];

#line 8721 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__Byte0_8  = Byte;
#line 1887 "bitmap.m"
}
#line 2083 "bitmap.m"
    mercury__bitmap__V_25_25 = (mercury__bitmap__I_5 % (MR_Integer) 8);
#line 2095 "bitmap.m"
    mercury__bitmap__V_21_21 = ((MR_Integer) 7 - mercury__bitmap__V_25_25);
#line 2095 "bitmap.m"
    mercury__bitmap__V_11_11 = ((MR_Integer) 1 << mercury__bitmap__V_21_21);
#line 785 "bitmap.m"
    mercury__bitmap__V_10_10 = ~(mercury__bitmap__V_11_11);
#line 785 "bitmap.m"
    mercury__bitmap__Byte_9 = (mercury__bitmap__Byte0_8 & mercury__bitmap__V_10_10);
#line 1928 "bitmap.m"
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
#line 1928 "bitmap.m"

    BM = BM0;
    BM->elements[N] = (MR_uint_least8_t) Byte;

#line 8756 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__BM_6  = (MR_Box) BM;
#line 1928 "bitmap.m"
}
#line 782 "bitmap.m"
    return mercury__bitmap__BM_6;
#line 782 "bitmap.m"
  }
#line 395 "bitmap.m"
}

#line 392 "bitmap.m"
MR_Box MR_CALL 
mercury__bitmap__unsafe_set_2_f_0(
#line 392 "bitmap.m"
  MR_Box mercury__bitmap__BM0_4,
#line 392 "bitmap.m"
  MR_Integer mercury__bitmap__I_5)
#line 392 "bitmap.m"
{
#line 776 "bitmap.m"
  {
#line 776 "bitmap.m"
    MR_bool mercury__bitmap__succeeded = (mercury__bitmap__I_5 < (MR_Integer) 0);
#line 776 "bitmap.m"
    MR_Box mercury__bitmap__BM_6;
#line 776 "bitmap.m"
    MR_Integer mercury__bitmap__ByteIndex_7;
#line 776 "bitmap.m"
    MR_Integer mercury__bitmap__Byte0_8;
#line 776 "bitmap.m"
    MR_Integer mercury__bitmap__Byte_9;
#line 776 "bitmap.m"
    MR_Integer mercury__bitmap__V_10_10;
#line 776 "bitmap.m"
    MR_Integer mercury__bitmap__V_20_20;
#line 776 "bitmap.m"
    MR_Integer mercury__bitmap__V_24_24;

#line 2047 "bitmap.m"
    if (mercury__bitmap__succeeded)
#line 2047 "bitmap.m"
      mercury__bitmap__ByteIndex_7 = (MR_Integer) -1;
#line 2047 "bitmap.m"
    else
#line 2051 "bitmap.m"
      {
#line 2047 "bitmap.m"
        mercury__bitmap__ByteIndex_7 = (mercury__bitmap__I_5 / (MR_Integer) 8);
#line 2051 "bitmap.m"
      }
#line 1887 "bitmap.m"
{
#define MR_PROC_LABEL mercury__bitmap__unsafe_set_2_f_0

	MR_Integer N;
	MR_BitmapPtr BM;
	MR_Integer Byte;

	N =  mercury__bitmap__ByteIndex_7 ;
	BM = (MR_BitmapPtr) mercury__bitmap__BM0_4 ;
		{
#line 1887 "bitmap.m"

    Byte = (MR_Integer) BM->elements[N];

#line 8825 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__Byte0_8  = Byte;
#line 1887 "bitmap.m"
}
#line 2083 "bitmap.m"
    mercury__bitmap__V_24_24 = (mercury__bitmap__I_5 % (MR_Integer) 8);
#line 2095 "bitmap.m"
    mercury__bitmap__V_20_20 = ((MR_Integer) 7 - mercury__bitmap__V_24_24);
#line 2095 "bitmap.m"
    mercury__bitmap__V_10_10 = ((MR_Integer) 1 << mercury__bitmap__V_20_20);
#line 779 "bitmap.m"
    mercury__bitmap__Byte_9 = (mercury__bitmap__Byte0_8 | mercury__bitmap__V_10_10);
#line 1928 "bitmap.m"
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
#line 1928 "bitmap.m"

    BM = BM0;
    BM->elements[N] = (MR_uint_least8_t) Byte;

#line 8858 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__BM_6  = (MR_Box) BM;
#line 1928 "bitmap.m"
}
#line 776 "bitmap.m"
    return mercury__bitmap__BM_6;
#line 776 "bitmap.m"
  }
#line 392 "bitmap.m"
}

#line 384 "bitmap.m"
MR_bool MR_CALL 
mercury__bitmap__is_clear_2_p_0(
#line 384 "bitmap.m"
  MR_Box mercury__bitmap__BM_3,
#line 384 "bitmap.m"
  MR_Integer mercury__bitmap__I_4)
#line 384 "bitmap.m"
{
#line 811 "bitmap.m"
  {
#line 811 "bitmap.m"
    MR_bool mercury__bitmap__succeeded = ((MR_Integer) 0 <= mercury__bitmap__I_4);
#line 553 "bitmap.m"
    MR_Integer mercury__bitmap__V_12_12;

#line 553 "bitmap.m"
    if (mercury__bitmap__succeeded)
#line 553 "bitmap.m"
      {
#line 1813 "bitmap.m"
{
#define MR_PROC_LABEL mercury__bitmap__is_clear_2_p_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr) mercury__bitmap__BM_3 ;
		{
#line 1813 "bitmap.m"

    NumBits = BM->num_bits;

#line 8905 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__V_12_12  = NumBits;
#line 1813 "bitmap.m"
}
#line 553 "bitmap.m"
        mercury__bitmap__succeeded = (mercury__bitmap__I_4 < mercury__bitmap__V_12_12);
#line 553 "bitmap.m"
      }
#line 811 "bitmap.m"
    if (mercury__bitmap__succeeded)
#line 810 "bitmap.m"
      {
#line 810 "bitmap.m"
        return mercury__bitmap__succeeded = mercury__bitmap__unsafe_is_clear_2_p_0(mercury__bitmap__BM_3, mercury__bitmap__I_4);
      }
#line 811 "bitmap.m"
    else
#line 811 "bitmap.m"
      {
#line 811 "bitmap.m"
        MR_Word mercury__bitmap__TypeCtorInfo_8_8 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 811 "bitmap.m"
        MR_Integer mercury__bitmap__V_6_6;
#line 811 "bitmap.m"
        MR_Box mercury__bitmap__conv0_V_6_6;

#line 811 "bitmap.m"
        {
#line 811 "bitmap.m"
          mercury__bitmap__conv0_V_6_6 = mercury__bitmap__throw_bounds_error_3_f_0(mercury__bitmap__TypeCtorInfo_8_8, mercury__bitmap__BM_3, (MR_String) "bitmap.is_clear", mercury__bitmap__I_4);
        }
#line 811 "bitmap.m"
        mercury__bitmap__V_6_6 = ((MR_Integer) mercury__bitmap__conv0_V_6_6);
#line 811 "bitmap.m"
        mercury__bitmap__succeeded = MR_TRUE;
#line 811 "bitmap.m"
      }
#line 811 "bitmap.m"
    return mercury__bitmap__succeeded;
#line 811 "bitmap.m"
  }
#line 384 "bitmap.m"
}

#line 380 "bitmap.m"
MR_bool MR_CALL 
mercury__bitmap__is_set_2_p_0(
#line 380 "bitmap.m"
  MR_Box mercury__bitmap__BM_3,
#line 380 "bitmap.m"
  MR_Integer mercury__bitmap__I_4)
#line 380 "bitmap.m"
{
#line 805 "bitmap.m"
  {
#line 805 "bitmap.m"
    MR_bool mercury__bitmap__succeeded = ((MR_Integer) 0 <= mercury__bitmap__I_4);
#line 553 "bitmap.m"
    MR_Integer mercury__bitmap__V_12_12;

#line 553 "bitmap.m"
    if (mercury__bitmap__succeeded)
#line 553 "bitmap.m"
      {
#line 1813 "bitmap.m"
{
#define MR_PROC_LABEL mercury__bitmap__is_set_2_p_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr) mercury__bitmap__BM_3 ;
		{
#line 1813 "bitmap.m"

    NumBits = BM->num_bits;

#line 8985 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__V_12_12  = NumBits;
#line 1813 "bitmap.m"
}
#line 553 "bitmap.m"
        mercury__bitmap__succeeded = (mercury__bitmap__I_4 < mercury__bitmap__V_12_12);
#line 553 "bitmap.m"
      }
#line 805 "bitmap.m"
    if (mercury__bitmap__succeeded)
#line 817 "bitmap.m"
      {
#line 817 "bitmap.m"
        {
#line 817 "bitmap.m"
          mercury__bitmap__succeeded = mercury__bitmap__unsafe_is_clear_2_p_0(mercury__bitmap__BM_3, mercury__bitmap__I_4);
        }
#line 817 "bitmap.m"
        mercury__bitmap__succeeded = !(mercury__bitmap__succeeded);
#line 817 "bitmap.m"
      }
#line 805 "bitmap.m"
    else
#line 805 "bitmap.m"
      {
#line 805 "bitmap.m"
        MR_Word mercury__bitmap__TypeCtorInfo_8_8 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 805 "bitmap.m"
        MR_Integer mercury__bitmap__V_6_6;
#line 805 "bitmap.m"
        MR_Box mercury__bitmap__conv0_V_6_6;

#line 805 "bitmap.m"
        {
#line 805 "bitmap.m"
          mercury__bitmap__conv0_V_6_6 = mercury__bitmap__throw_bounds_error_3_f_0(mercury__bitmap__TypeCtorInfo_8_8, mercury__bitmap__BM_3, (MR_String) "bitmap.is_set", mercury__bitmap__I_4);
        }
#line 805 "bitmap.m"
        mercury__bitmap__V_6_6 = ((MR_Integer) mercury__bitmap__conv0_V_6_6);
#line 805 "bitmap.m"
        mercury__bitmap__succeeded = MR_TRUE;
#line 805 "bitmap.m"
      }
#line 805 "bitmap.m"
    return mercury__bitmap__succeeded;
#line 805 "bitmap.m"
  }
#line 380 "bitmap.m"
}

#line 373 "bitmap.m"
MR_Box MR_CALL 
mercury__bitmap__clear_2_f_0(
#line 373 "bitmap.m"
  MR_Box mercury__bitmap__BM_4,
#line 373 "bitmap.m"
  MR_Integer mercury__bitmap__I_5)
#line 373 "bitmap.m"
{
#line 756 "bitmap.m"
  {
#line 756 "bitmap.m"
    MR_bool mercury__bitmap__succeeded = ((MR_Integer) 0 <= mercury__bitmap__I_5);
#line 756 "bitmap.m"
    MR_Box mercury__bitmap__HeadVar__3_3;
#line 553 "bitmap.m"
    MR_Integer mercury__bitmap__V_11_11;

#line 553 "bitmap.m"
    if (mercury__bitmap__succeeded)
#line 553 "bitmap.m"
      {
#line 1813 "bitmap.m"
{
#define MR_PROC_LABEL mercury__bitmap__clear_2_f_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr) mercury__bitmap__BM_4 ;
		{
#line 1813 "bitmap.m"

    NumBits = BM->num_bits;

#line 9073 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__V_11_11  = NumBits;
#line 1813 "bitmap.m"
}
#line 553 "bitmap.m"
        mercury__bitmap__succeeded = (mercury__bitmap__I_5 < mercury__bitmap__V_11_11);
#line 553 "bitmap.m"
      }
#line 756 "bitmap.m"
    if (mercury__bitmap__succeeded)
#line 756 "bitmap.m"
      {
#line 756 "bitmap.m"
        return mercury__bitmap__HeadVar__3_3 = mercury__bitmap__unsafe_clear_2_f_0(mercury__bitmap__BM_4, mercury__bitmap__I_5);
      }
#line 756 "bitmap.m"
    else
#line 759 "bitmap.m"
      {
#line 759 "bitmap.m"
        MR_Word mercury__bitmap__TypeCtorInfo_7_7 = (MR_Word) &mercury__bitmap__bitmap__type_ctor_info_bitmap_0;
#line 756 "bitmap.m"
        MR_Box mercury__bitmap__conv0_HeadVar__3_3;

#line 756 "bitmap.m"
        {
#line 756 "bitmap.m"
          mercury__bitmap__conv0_HeadVar__3_3 = mercury__bitmap__throw_bounds_error_3_f_0(mercury__bitmap__TypeCtorInfo_7_7, mercury__bitmap__BM_4, (MR_String) "bitmap.clear", mercury__bitmap__I_5);
        }
#line 756 "bitmap.m"
        mercury__bitmap__HeadVar__3_3 = ((MR_Box) mercury__bitmap__conv0_HeadVar__3_3);
#line 759 "bitmap.m"
      }
#line 756 "bitmap.m"
    return mercury__bitmap__HeadVar__3_3;
#line 756 "bitmap.m"
  }
#line 373 "bitmap.m"
}

#line 370 "bitmap.m"
MR_Box MR_CALL 
mercury__bitmap__set_2_f_0(
#line 370 "bitmap.m"
  MR_Box mercury__bitmap__BM_4,
#line 370 "bitmap.m"
  MR_Integer mercury__bitmap__I_5)
#line 370 "bitmap.m"
{
#line 750 "bitmap.m"
  {
#line 750 "bitmap.m"
    MR_bool mercury__bitmap__succeeded = ((MR_Integer) 0 <= mercury__bitmap__I_5);
#line 750 "bitmap.m"
    MR_Box mercury__bitmap__HeadVar__3_3;
#line 553 "bitmap.m"
    MR_Integer mercury__bitmap__V_11_11;

#line 553 "bitmap.m"
    if (mercury__bitmap__succeeded)
#line 553 "bitmap.m"
      {
#line 1813 "bitmap.m"
{
#define MR_PROC_LABEL mercury__bitmap__set_2_f_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr) mercury__bitmap__BM_4 ;
		{
#line 1813 "bitmap.m"

    NumBits = BM->num_bits;

#line 9151 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__V_11_11  = NumBits;
#line 1813 "bitmap.m"
}
#line 553 "bitmap.m"
        mercury__bitmap__succeeded = (mercury__bitmap__I_5 < mercury__bitmap__V_11_11);
#line 553 "bitmap.m"
      }
#line 750 "bitmap.m"
    if (mercury__bitmap__succeeded)
#line 750 "bitmap.m"
      {
#line 750 "bitmap.m"
        return mercury__bitmap__HeadVar__3_3 = mercury__bitmap__unsafe_set_2_f_0(mercury__bitmap__BM_4, mercury__bitmap__I_5);
      }
#line 750 "bitmap.m"
    else
#line 753 "bitmap.m"
      {
#line 753 "bitmap.m"
        MR_Word mercury__bitmap__TypeCtorInfo_7_7 = (MR_Word) &mercury__bitmap__bitmap__type_ctor_info_bitmap_0;
#line 750 "bitmap.m"
        MR_Box mercury__bitmap__conv0_HeadVar__3_3;

#line 750 "bitmap.m"
        {
#line 750 "bitmap.m"
          mercury__bitmap__conv0_HeadVar__3_3 = mercury__bitmap__throw_bounds_error_3_f_0(mercury__bitmap__TypeCtorInfo_7_7, mercury__bitmap__BM_4, (MR_String) "bitmap.set", mercury__bitmap__I_5);
        }
#line 750 "bitmap.m"
        mercury__bitmap__HeadVar__3_3 = ((MR_Box) mercury__bitmap__conv0_HeadVar__3_3);
#line 753 "bitmap.m"
      }
#line 750 "bitmap.m"
    return mercury__bitmap__HeadVar__3_3;
#line 750 "bitmap.m"
  }
#line 370 "bitmap.m"
}

#line 360 "bitmap.m"
MR_Integer MR_CALL 
mercury__bitmap__hash_1_f_0(
#line 360 "bitmap.m"
  MR_Box mercury__bitmap__BM_3)
#line 360 "bitmap.m"
{
#line 1503 "bitmap.m"
  {
#line 1503 "bitmap.m"
    MR_bool mercury__bitmap__succeeded;
#line 1503 "bitmap.m"
    MR_Integer mercury__bitmap__HashVal_4;
#line 1503 "bitmap.m"
    MR_Integer mercury__bitmap__NumBits_5;
#line 1503 "bitmap.m"
    MR_Integer mercury__bitmap__NumBytes0_6;
#line 1503 "bitmap.m"
    MR_Integer mercury__bitmap__NumBytes_7;
#line 1503 "bitmap.m"
    MR_Integer mercury__bitmap__HashVal0_8;
#line 1506 "bitmap.m"
    MR_Integer mercury__bitmap__V_10_10;

#line 1813 "bitmap.m"
{
#define MR_PROC_LABEL mercury__bitmap__hash_1_f_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr) mercury__bitmap__BM_3 ;
		{
#line 1813 "bitmap.m"

    NumBits = BM->num_bits;

#line 9231 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__NumBits_5  = NumBits;
#line 1813 "bitmap.m"
}
#line 1505 "bitmap.m"
    mercury__bitmap__NumBytes0_6 = (mercury__bitmap__NumBits_5 / (MR_Integer) 8);
#line 1506 "bitmap.m"
    mercury__bitmap__V_10_10 = (mercury__bitmap__NumBits_5 % (MR_Integer) 8);
#line 1506 "bitmap.m"
    mercury__bitmap__succeeded = (mercury__bitmap__V_10_10 == (MR_Integer) 0);
#line 1508 "bitmap.m"
    if (mercury__bitmap__succeeded)
#line 1507 "bitmap.m"
      mercury__bitmap__NumBytes_7 = mercury__bitmap__NumBytes0_6;
#line 1508 "bitmap.m"
    else
#line 1509 "bitmap.m"
      {
#line 1509 "bitmap.m"
        mercury__bitmap__NumBytes_7 = (mercury__bitmap__NumBytes0_6 + (MR_Integer) 1);
#line 1509 "bitmap.m"
      }
#line 1511 "bitmap.m"
    {
#line 1511 "bitmap.m"
      mercury__bitmap__hash_2_5_p_0(mercury__bitmap__BM_3, (MR_Integer) 0, mercury__bitmap__NumBytes_7, (MR_Integer) 0, &mercury__bitmap__HashVal0_8);
    }
#line 1512 "bitmap.m"
    mercury__bitmap__HashVal_4 = (mercury__bitmap__HashVal0_8 ^ mercury__bitmap__NumBits_5);
#line 1503 "bitmap.m"
    return mercury__bitmap__HashVal_4;
#line 1503 "bitmap.m"
  }
#line 360 "bitmap.m"
}

#line 352 "bitmap.m"
MR_String MR_CALL 
mercury__bitmap__to_byte_string_1_f_0(
#line 352 "bitmap.m"
  MR_Box mercury__bitmap__BM_3)
#line 352 "bitmap.m"
{
#line 1463 "bitmap.m"
  {
#line 1463 "bitmap.m"
    MR_bool mercury__bitmap__succeeded;
#line 1463 "bitmap.m"
    MR_String mercury__bitmap__HeadVar__2_2;
#line 1463 "bitmap.m"
    MR_Word mercury__bitmap__V_5_5;
#line 1463 "bitmap.m"
    MR_Integer mercury__bitmap__NumBits_8;
#line 1463 "bitmap.m"
    MR_Word mercury__bitmap__V_9_9;

#line 1813 "bitmap.m"
{
#define MR_PROC_LABEL mercury__bitmap__to_byte_string_1_f_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr) mercury__bitmap__BM_3 ;
		{
#line 1813 "bitmap.m"

    NumBits = BM->num_bits;

#line 9303 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__NumBits_8  = NumBits;
#line 1813 "bitmap.m"
}
#line 1471 "bitmap.m"
    mercury__bitmap__V_9_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1471 "bitmap.m"
    {
#line 1471 "bitmap.m"
      mercury__bitmap__V_5_5 = mercury__bitmap__bitmap_to_byte_strings_3_f_0(mercury__bitmap__BM_3, mercury__bitmap__NumBits_8, mercury__bitmap__V_9_9);
    }
#line 1463 "bitmap.m"
    {
#line 1463 "bitmap.m"
      return mercury__bitmap__HeadVar__2_2 = mercury__string__join_list_2_f_0((MR_String) ".", mercury__bitmap__V_5_5);
    }
#line 1463 "bitmap.m"
    return mercury__bitmap__HeadVar__2_2;
#line 1463 "bitmap.m"
  }
#line 352 "bitmap.m"
}

#line 345 "bitmap.m"
MR_bool MR_CALL 
mercury__bitmap__from_string_1_f_0(
#line 345 "bitmap.m"
  MR_String mercury__bitmap__Str_3,
#line 345 "bitmap.m"
  MR_Box * mercury__bitmap__BM_4)
#line 345 "bitmap.m"
{
#line 1428 "bitmap.m"
  {
#line 1428 "bitmap.m"
    MR_bool mercury__bitmap__succeeded;
#line 1428 "bitmap.m"
    MR_Integer mercury__bitmap__Start_5;
#line 1428 "bitmap.m"
    MR_Char mercury__bitmap__Char_6;
#line 1428 "bitmap.m"
    MR_Integer mercury__bitmap__End_7;
#line 1428 "bitmap.m"
    MR_Integer mercury__bitmap__Colon_8;
#line 1428 "bitmap.m"
    MR_String mercury__bitmap__SizeStr_9;
#line 1428 "bitmap.m"
    MR_Integer mercury__bitmap__Size_10;
#line 1428 "bitmap.m"
    MR_Box mercury__bitmap__BM0_11;
#line 1428 "bitmap.m"
    MR_Integer mercury__bitmap__AfterColon_12;
#line 1428 "bitmap.m"
    MR_Integer mercury__bitmap__V_16_16;
#line 1428 "bitmap.m"
    MR_Char mercury__bitmap__V_17_17;
#line 1428 "bitmap.m"
    MR_String mercury__bitmap__V_18_18;
#line 1428 "bitmap.m"
    MR_Integer mercury__bitmap__V_19_19;
#line 1428 "bitmap.m"
    MR_Integer mercury__bitmap__V_20_20;
#line 1428 "bitmap.m"
    MR_Char mercury__bitmap__V_21_21;
#line 1428 "bitmap.m"
    MR_Char mercury__bitmap__V_22_22;
#line 1428 "bitmap.m"
    MR_Integer mercury__bitmap__V_5_31;
#line 580 "string.opt"
    MR_Char mercury__bitmap__V_13_13;

#line 580 "string.opt"
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
#line 580 "string.opt"

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }

#line 9402 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__bitmap__Start_5  = NextIndex;
	 mercury__bitmap__V_21_21  = Ch;
#line 580 "string.opt"
	}
mercury__bitmap__succeeded  = SUCCESS_INDICATOR;
}
#line 1428 "bitmap.m"
    if (mercury__bitmap__succeeded)
#line 1428 "bitmap.m"
      {
#line 1429 "bitmap.m"
        mercury__bitmap__succeeded = ((MR_Char) 60 == mercury__bitmap__V_21_21);
#line 1428 "bitmap.m"
        if (mercury__bitmap__succeeded)
#line 1428 "bitmap.m"
          {
#line 1430 "bitmap.m"
            {
#line 1430 "bitmap.m"
              mercury__string__unsafe_index_3_p_0(mercury__bitmap__Str_3, mercury__bitmap__Start_5, &mercury__bitmap__Char_6);
            }
#line 1431 "bitmap.m"
            {
#line 1431 "bitmap.m"
              mercury__bitmap__succeeded = mercury__char__is_digit_1_p_0(mercury__bitmap__Char_6);
            }
#line 1428 "bitmap.m"
            if (mercury__bitmap__succeeded)
#line 1428 "bitmap.m"
              {
#line 231 "string.opt"
{
#define MR_PROC_LABEL mercury__bitmap__from_string_1_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__bitmap__Str_3 ;
		{
#line 231 "string.opt"

    Length = strlen(Str);

#line 9450 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__V_16_16  = Length;
#line 231 "string.opt"
}
#line 1432 "bitmap.m"
                mercury__bitmap__V_17_17 = (MR_Char) 62;
#line 603 "string.opt"
{
#define MR_PROC_LABEL mercury__bitmap__from_string_1_f_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer PrevIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__bitmap__Str_3 ;
	Index =  mercury__bitmap__V_16_16 ;
		{
#line 603 "string.opt"

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

#line 9487 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__bitmap__End_7  = PrevIndex;
	 mercury__bitmap__V_22_22  = Ch;
#line 603 "string.opt"
	}
mercury__bitmap__succeeded  = SUCCESS_INDICATOR;
}
#line 1428 "bitmap.m"
                if (mercury__bitmap__succeeded)
#line 1428 "bitmap.m"
                  {
#line 1432 "bitmap.m"
                    mercury__bitmap__succeeded = (mercury__bitmap__V_17_17 == mercury__bitmap__V_22_22);
#line 1428 "bitmap.m"
                    if (mercury__bitmap__succeeded)
#line 1428 "bitmap.m"
                      {
#line 1433 "bitmap.m"
                        mercury__bitmap__V_18_18 = (MR_String) ":";
#line 812 "string.opt"
{
#define MR_PROC_LABEL mercury__bitmap__from_string_1_f_0

	MR_String WholeString;
	MR_String Pattern;
	MR_Integer BeginAt;
	MR_Integer Index;
	MR_bool SUCCESS_INDICATOR;

	WholeString =  mercury__bitmap__Str_3 ;
	Pattern =  mercury__bitmap__V_18_18 ;
	BeginAt =  mercury__bitmap__Start_5 ;
		{
#line 812 "string.opt"
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
#line 9539 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__bitmap__Colon_8  = Index;
#line 812 "string.opt"
	}
mercury__bitmap__succeeded  = SUCCESS_INDICATOR;
}
#line 1428 "bitmap.m"
                        if (mercury__bitmap__succeeded)
#line 1428 "bitmap.m"
                          {
#line 791 "string.opt"
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
#line 791 "string.opt"
{
    MR_Integer Count;

    Count = End - Start;
    MR_allocate_aligned_string_msg(SubString, Count, MR_ALLOC_ID);
    MR_memcpy(SubString, Str + Start, Count);
    SubString[Count] = '\0';
}
#line 9575 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__SizeStr_9  = SubString;
#line 791 "string.opt"
}
#line 392 "string.opt"
                            mercury__bitmap__V_5_31 = (MR_Integer) 10;
#line 393 "string.opt"
                            {
#line 393 "string.opt"
                              mercury__bitmap__succeeded = mercury__string__base_string_to_int_3_p_0(mercury__bitmap__V_5_31, mercury__bitmap__SizeStr_9, &mercury__bitmap__Size_10);
                            }
#line 1428 "bitmap.m"
                            if (mercury__bitmap__succeeded)
#line 1428 "bitmap.m"
                              {
#line 1436 "bitmap.m"
                                mercury__bitmap__V_19_19 = (MR_Integer) 0;
#line 1436 "bitmap.m"
                                mercury__bitmap__succeeded = (mercury__bitmap__Size_10 >= mercury__bitmap__V_19_19);
#line 1428 "bitmap.m"
                                if (mercury__bitmap__succeeded)
#line 1428 "bitmap.m"
                                  {
#line 1967 "bitmap.m"
{
#define MR_PROC_LABEL mercury__bitmap__from_string_1_f_0

	MR_Integer N;
	MR_BitmapPtr BM;

	N =  mercury__bitmap__Size_10 ;
		{
#line 1967 "bitmap.m"

    MR_allocate_bitmap_msg(BM, N, MR_ALLOC_ID);

#line 9614 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__BM0_11  = (MR_Box) BM;
#line 1967 "bitmap.m"
}
#line 580 "string.opt"
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
#line 580 "string.opt"

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }

#line 9646 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__bitmap__AfterColon_12  = NextIndex;
	 mercury__bitmap__V_13_13  = Ch;
#line 580 "string.opt"
	}
mercury__bitmap__succeeded  = SUCCESS_INDICATOR;
}
#line 1428 "bitmap.m"
                                    if (mercury__bitmap__succeeded)
#line 1428 "bitmap.m"
                                      {
#line 1439 "bitmap.m"
                                        mercury__bitmap__V_20_20 = (MR_Integer) 0;
#line 1439 "bitmap.m"
                                        {
#line 1439 "bitmap.m"
                                          return mercury__bitmap__succeeded = mercury__bitmap__hex_chars_to_bitmap_6_p_0(mercury__bitmap__Str_3, mercury__bitmap__AfterColon_12, mercury__bitmap__End_7, mercury__bitmap__V_20_20, mercury__bitmap__BM0_11, mercury__bitmap__BM_4);
                                        }
#line 1428 "bitmap.m"
                                      }
#line 1428 "bitmap.m"
                                  }
#line 1428 "bitmap.m"
                              }
#line 1428 "bitmap.m"
                          }
#line 1428 "bitmap.m"
                      }
#line 1428 "bitmap.m"
                  }
#line 1428 "bitmap.m"
              }
#line 1428 "bitmap.m"
          }
#line 1428 "bitmap.m"
      }
#line 1428 "bitmap.m"
    return mercury__bitmap__succeeded;
#line 1428 "bitmap.m"
  }
#line 345 "bitmap.m"
}

#line 340 "bitmap.m"
MR_String MR_CALL 
mercury__bitmap__to_string_1_f_0(
#line 340 "bitmap.m"
  MR_Box mercury__bitmap__BM_3)
#line 340 "bitmap.m"
{
#line 1399 "bitmap.m"
  {
#line 1399 "bitmap.m"
    MR_bool mercury__bitmap__succeeded;
#line 1399 "bitmap.m"
    MR_String mercury__bitmap__Str_4;
#line 1399 "bitmap.m"
    MR_Word mercury__bitmap__TypeCtorInfo_20_20;
#line 1399 "bitmap.m"
    MR_Integer mercury__bitmap__NumBits_5;
#line 1399 "bitmap.m"
    MR_Word mercury__bitmap__BitChars_6;
#line 1399 "bitmap.m"
    MR_Word mercury__bitmap__LenChars_7;
#line 1399 "bitmap.m"
    MR_Word mercury__bitmap__Chars_8;
#line 1399 "bitmap.m"
    MR_Integer mercury__bitmap__V_9_9;
#line 1399 "bitmap.m"
    MR_Word mercury__bitmap__V_10_10;
#line 1399 "bitmap.m"
    MR_Integer mercury__bitmap__V_11_11;
#line 1399 "bitmap.m"
    MR_Word mercury__bitmap__V_14_14;
#line 1399 "bitmap.m"
    MR_String mercury__bitmap__V_15_15;
#line 1399 "bitmap.m"
    MR_Word mercury__bitmap__V_16_16;
#line 1399 "bitmap.m"
    MR_Word mercury__bitmap__V_18_18;

#line 1813 "bitmap.m"
{
#define MR_PROC_LABEL mercury__bitmap__to_string_1_f_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr) mercury__bitmap__BM_3 ;
		{
#line 1813 "bitmap.m"

    NumBits = BM->num_bits;

#line 9744 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__NumBits_5  = NumBits;
#line 1813 "bitmap.m"
}
#line 1401 "bitmap.m"
    mercury__bitmap__V_11_11 = (mercury__bitmap__NumBits_5 - (MR_Integer) 1);
#line 2048 "bitmap.m"
    mercury__bitmap__succeeded = (mercury__bitmap__V_11_11 < (MR_Integer) 0);
#line 2047 "bitmap.m"
    if (mercury__bitmap__succeeded)
#line 2047 "bitmap.m"
      mercury__bitmap__V_9_9 = (MR_Integer) -1;
#line 2047 "bitmap.m"
    else
#line 2051 "bitmap.m"
      {
#line 2047 "bitmap.m"
        mercury__bitmap__V_9_9 = (mercury__bitmap__V_11_11 / (MR_Integer) 8);
#line 2051 "bitmap.m"
      }
#line 1401 "bitmap.m"
    mercury__bitmap__V_14_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1401 "bitmap.m"
    mercury__bitmap__V_10_10 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__bitmap_scalar_common_4[0]);
#line 1401 "bitmap.m"
    {
#line 1401 "bitmap.m"
      mercury__bitmap__to_string_chars_4_p_0(mercury__bitmap__V_9_9, mercury__bitmap__BM_3, mercury__bitmap__V_10_10, &mercury__bitmap__BitChars_6);
    }
#line 284 "string.opt"
    {
#line 284 "string.opt"
      mercury__string__int_to_base_string_3_p_0(mercury__bitmap__NumBits_5, (MR_Integer) 10, &mercury__bitmap__V_15_15);
    }
#line 379 "string.opt"
    {
#line 379 "string.opt"
      mercury__string__to_char_list_2_p_0(mercury__bitmap__V_15_15, &mercury__bitmap__LenChars_7);
    }
#line 9786 "bitmap.c"
    mercury__bitmap__TypeCtorInfo_20_20 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0;
#line 1403 "bitmap.m"
    {
#line 1403 "bitmap.m"
      mercury__bitmap__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1403 "bitmap.m"
      MR_hl_field(MR_mktag(1), mercury__bitmap__V_16_16, 0) = ((MR_Box) (MR_Word) ((MR_Char) 60));
#line 1403 "bitmap.m"
      MR_hl_field(MR_mktag(1), mercury__bitmap__V_16_16, 1) = ((MR_Box) (mercury__bitmap__LenChars_7));
#line 1403 "bitmap.m"
    }
#line 1403 "bitmap.m"
    {
#line 1403 "bitmap.m"
      mercury__bitmap__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1403 "bitmap.m"
      MR_hl_field(MR_mktag(1), mercury__bitmap__V_18_18, 0) = ((MR_Box) (MR_Word) ((MR_Char) 58));
#line 1403 "bitmap.m"
      MR_hl_field(MR_mktag(1), mercury__bitmap__V_18_18, 1) = ((MR_Box) (mercury__bitmap__BitChars_6));
#line 1403 "bitmap.m"
    }
#line 46 "list.opt"
    {
#line 46 "list.opt"
      mercury__list__append_3_p_1(mercury__bitmap__TypeCtorInfo_20_20, mercury__bitmap__V_16_16, mercury__bitmap__V_18_18, &mercury__bitmap__Chars_8);
    }
#line 381 "string.opt"
    {
#line 381 "string.opt"
      mercury__string__from_char_list_2_p_0(mercury__bitmap__Chars_8, &mercury__bitmap__Str_4);
    }
#line 1399 "bitmap.m"
    return mercury__bitmap__Str_4;
#line 1399 "bitmap.m"
  }
#line 340 "bitmap.m"
}

#line 331 "bitmap.m"
MR_Box MR_CALL 
mercury__bitmap__copy_bytes_in_bitmap_4_f_0(
#line 331 "bitmap.m"
  MR_Box mercury__bitmap__SrcBM_6,
#line 331 "bitmap.m"
  MR_Integer mercury__bitmap__SrcStartByteIndex_7,
#line 331 "bitmap.m"
  MR_Integer mercury__bitmap__DestStartByteIndex_8,
#line 331 "bitmap.m"
  MR_Integer mercury__bitmap__NumBytes_9)
#line 331 "bitmap.m"
{
#line 1089 "bitmap.m"
  {
#line 1089 "bitmap.m"
    MR_bool mercury__bitmap__succeeded;
#line 1089 "bitmap.m"
    MR_Box mercury__bitmap__HeadVar__5_5;

#line 1089 "bitmap.m"
    {
#line 1089 "bitmap.m"
      return mercury__bitmap__HeadVar__5_5 = mercury__bitmap__copy_bytes_6_f_0((MR_Integer) 1, mercury__bitmap__SrcBM_6, mercury__bitmap__SrcStartByteIndex_7, mercury__bitmap__SrcBM_6, mercury__bitmap__DestStartByteIndex_8, mercury__bitmap__NumBytes_9);
    }
#line 1089 "bitmap.m"
    return mercury__bitmap__HeadVar__5_5;
#line 1089 "bitmap.m"
  }
#line 331 "bitmap.m"
}

#line 322 "bitmap.m"
MR_Box MR_CALL 
mercury__bitmap__copy_bytes_5_f_0(
#line 322 "bitmap.m"
  MR_Box mercury__bitmap__SrcBM_7,
#line 322 "bitmap.m"
  MR_Integer mercury__bitmap__SrcStartByteIndex_8,
#line 322 "bitmap.m"
  MR_Box mercury__bitmap__DestBM_9,
#line 322 "bitmap.m"
  MR_Integer mercury__bitmap__DestStartByteIndex_10,
#line 322 "bitmap.m"
  MR_Integer mercury__bitmap__NumBytes_11)
#line 322 "bitmap.m"
{
#line 1085 "bitmap.m"
  {
#line 1085 "bitmap.m"
    MR_bool mercury__bitmap__succeeded;
#line 1085 "bitmap.m"
    MR_Box mercury__bitmap__HeadVar__6_6;

#line 1085 "bitmap.m"
    {
#line 1085 "bitmap.m"
      return mercury__bitmap__HeadVar__6_6 = mercury__bitmap__copy_bytes_6_f_0((MR_Integer) 0, mercury__bitmap__SrcBM_7, mercury__bitmap__SrcStartByteIndex_8, mercury__bitmap__DestBM_9, mercury__bitmap__DestStartByteIndex_10, mercury__bitmap__NumBytes_11);
    }
#line 1085 "bitmap.m"
    return mercury__bitmap__HeadVar__6_6;
#line 1085 "bitmap.m"
  }
#line 322 "bitmap.m"
}

#line 313 "bitmap.m"
MR_Box MR_CALL 
mercury__bitmap__copy_bits_in_bitmap_4_f_0(
#line 313 "bitmap.m"
  MR_Box mercury__bitmap__SrcBM_6,
#line 313 "bitmap.m"
  MR_Integer mercury__bitmap__SrcStartBit_7,
#line 313 "bitmap.m"
  MR_Integer mercury__bitmap__DestStartBit_8,
#line 313 "bitmap.m"
  MR_Integer mercury__bitmap__NumBits_9)
#line 313 "bitmap.m"
{
#line 931 "bitmap.m"
  {
#line 931 "bitmap.m"
    MR_bool mercury__bitmap__succeeded;
#line 931 "bitmap.m"
    MR_Box mercury__bitmap__HeadVar__5_5;

#line 931 "bitmap.m"
    {
#line 931 "bitmap.m"
      return mercury__bitmap__HeadVar__5_5 = mercury__bitmap__copy_bits_6_f_0((MR_Integer) 1, mercury__bitmap__SrcBM_6, mercury__bitmap__SrcStartBit_7, mercury__bitmap__SrcBM_6, mercury__bitmap__DestStartBit_8, mercury__bitmap__NumBits_9);
    }
#line 931 "bitmap.m"
    return mercury__bitmap__HeadVar__5_5;
#line 931 "bitmap.m"
  }
#line 313 "bitmap.m"
}

#line 305 "bitmap.m"
MR_Box MR_CALL 
mercury__bitmap__copy_bits_5_f_0(
#line 305 "bitmap.m"
  MR_Box mercury__bitmap__SrcBM_7,
#line 305 "bitmap.m"
  MR_Integer mercury__bitmap__SrcStartBit_8,
#line 305 "bitmap.m"
  MR_Box mercury__bitmap__DestBM_9,
#line 305 "bitmap.m"
  MR_Integer mercury__bitmap__DestStartBit_10,
#line 305 "bitmap.m"
  MR_Integer mercury__bitmap__NumBits_11)
#line 305 "bitmap.m"
{
#line 928 "bitmap.m"
  {
#line 928 "bitmap.m"
    MR_bool mercury__bitmap__succeeded;
#line 928 "bitmap.m"
    MR_Box mercury__bitmap__HeadVar__6_6;

#line 928 "bitmap.m"
    {
#line 928 "bitmap.m"
      return mercury__bitmap__HeadVar__6_6 = mercury__bitmap__copy_bits_6_f_0((MR_Integer) 0, mercury__bitmap__SrcBM_7, mercury__bitmap__SrcStartBit_8, mercury__bitmap__DestBM_9, mercury__bitmap__DestStartBit_10, mercury__bitmap__NumBits_11);
    }
#line 928 "bitmap.m"
    return mercury__bitmap__HeadVar__6_6;
#line 928 "bitmap.m"
  }
#line 305 "bitmap.m"
}

#line 290 "bitmap.m"
MR_Box MR_CALL 
mercury__bitmap__append_list_1_f_0(
#line 290 "bitmap.m"
  MR_Word mercury__bitmap__BMs_3)
#line 290 "bitmap.m"
{
#line 914 "bitmap.m"
  {
#line 914 "bitmap.m"
    MR_bool mercury__bitmap__succeeded;
#line 914 "bitmap.m"
    MR_Box mercury__bitmap__STATE_VARIABLE_BM_8;
#line 914 "bitmap.m"
    MR_Integer mercury__bitmap__BMSize_5;
#line 914 "bitmap.m"
    MR_Box mercury__bitmap__STATE_VARIABLE_BM_15_15;
#line 917 "bitmap.m"
    MR_Integer mercury__bitmap__V_7_7;

#line 347 "list.opt"
    {
#line 347 "list.opt"
      mercury__bitmap__foldl__ho16_4_p_in__list_0(mercury__bitmap__BMs_3, (MR_Integer) 0, &mercury__bitmap__BMSize_5);
    }
#line 451 "bitmap.m"
    {
#line 451 "bitmap.m"
      mercury__bitmap__STATE_VARIABLE_BM_15_15 = mercury__bitmap__init_2_f_0(mercury__bitmap__BMSize_5, (MR_Integer) 0);
    }
#line 917 "bitmap.m"
    {
#line 917 "bitmap.m"
      mercury__bitmap__foldl2__ho6_6_p_in__list_0(mercury__bitmap__BMs_3, (MR_Integer) 0, &mercury__bitmap__V_7_7, mercury__bitmap__STATE_VARIABLE_BM_15_15, &mercury__bitmap__STATE_VARIABLE_BM_8);
    }
#line 914 "bitmap.m"
    return mercury__bitmap__STATE_VARIABLE_BM_8;
#line 914 "bitmap.m"
  }
#line 290 "bitmap.m"
}

#line 284 "bitmap.m"
MR_Box MR_CALL 
mercury__bitmap__xor_2_f_0(
#line 284 "bitmap.m"
  MR_Box mercury__bitmap__BMa_4,
#line 284 "bitmap.m"
  MR_Box mercury__bitmap__BMb_5)
#line 284 "bitmap.m"
{
#line 870 "bitmap.m"
  {
#line 870 "bitmap.m"
    MR_bool mercury__bitmap__succeeded;
#line 870 "bitmap.m"
    MR_Box mercury__bitmap__HeadVar__3_3;
#line 871 "bitmap.m"
    MR_Integer mercury__bitmap__V_8_8;
#line 871 "bitmap.m"
    MR_Integer mercury__bitmap__V_17_17;

#line 1813 "bitmap.m"
{
#define MR_PROC_LABEL mercury__bitmap__xor_2_f_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr) mercury__bitmap__BMa_4 ;
		{
#line 1813 "bitmap.m"

    NumBits = BM->num_bits;

#line 10032 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__V_8_8  = NumBits;
#line 1813 "bitmap.m"
}
#line 1813 "bitmap.m"
{
#define MR_PROC_LABEL mercury__bitmap__xor_2_f_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr) mercury__bitmap__BMb_5 ;
		{
#line 1813 "bitmap.m"

    NumBits = BM->num_bits;

#line 10052 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__V_17_17  = NumBits;
#line 1813 "bitmap.m"
}
#line 871 "bitmap.m"
    mercury__bitmap__succeeded = (mercury__bitmap__V_8_8 == mercury__bitmap__V_17_17);
#line 870 "bitmap.m"
    if (mercury__bitmap__succeeded)
#line 889 "bitmap.m"
      {
#line 890 "bitmap.m"
        MR_Integer mercury__bitmap__V_28_28;

#line 1813 "bitmap.m"
{
#define MR_PROC_LABEL mercury__bitmap__xor_2_f_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr) mercury__bitmap__BMb_5 ;
		{
#line 1813 "bitmap.m"

    NumBits = BM->num_bits;

#line 10081 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__V_28_28  = NumBits;
#line 1813 "bitmap.m"
}
#line 890 "bitmap.m"
        mercury__bitmap__succeeded = (mercury__bitmap__V_28_28 == (MR_Integer) 0);
#line 889 "bitmap.m"
        if (mercury__bitmap__succeeded)
#line 889 "bitmap.m"
          mercury__bitmap__HeadVar__3_3 = mercury__bitmap__BMb_5;
#line 889 "bitmap.m"
        else
#line 892 "bitmap.m"
          {
#line 892 "bitmap.m"
            MR_Integer mercury__bitmap__V_29_29;
#line 892 "bitmap.m"
            MR_Integer mercury__bitmap__V_30_30;
#line 892 "bitmap.m"
            MR_Integer mercury__bitmap__V_31_31;

#line 1813 "bitmap.m"
{
#define MR_PROC_LABEL mercury__bitmap__xor_2_f_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr) mercury__bitmap__BMb_5 ;
		{
#line 1813 "bitmap.m"

    NumBits = BM->num_bits;

#line 10118 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__V_31_31  = NumBits;
#line 1813 "bitmap.m"
}
#line 892 "bitmap.m"
            mercury__bitmap__V_30_30 = (mercury__bitmap__V_31_31 - (MR_Integer) 1);
#line 2048 "bitmap.m"
            mercury__bitmap__succeeded = (mercury__bitmap__V_30_30 < (MR_Integer) 0);
#line 2047 "bitmap.m"
            if (mercury__bitmap__succeeded)
#line 2047 "bitmap.m"
              mercury__bitmap__V_29_29 = (MR_Integer) -1;
#line 2047 "bitmap.m"
            else
#line 2051 "bitmap.m"
              {
#line 2047 "bitmap.m"
                mercury__bitmap__V_29_29 = (mercury__bitmap__V_30_30 / (MR_Integer) 8);
#line 2051 "bitmap.m"
              }
#line 889 "bitmap.m"
            {
#line 889 "bitmap.m"
              return mercury__bitmap__HeadVar__3_3 = mercury__bitmap__zip2__ho15_4_f_0(mercury__bitmap__V_29_29, mercury__bitmap__BMa_4, mercury__bitmap__BMb_5);
            }
#line 892 "bitmap.m"
          }
#line 889 "bitmap.m"
      }
#line 870 "bitmap.m"
    else
#line 874 "bitmap.m"
      {
#line 874 "bitmap.m"
        MR_Word mercury__bitmap__TypeCtorInfo_4_46 = (MR_Word) &mercury__bitmap__bitmap__type_ctor_info_bitmap_error_0;
#line 874 "bitmap.m"
        MR_Word mercury__bitmap__V_45_45 = (MR_Word) ((MR_Box) ((MR_String) "bitmap.xor: bitmaps not the same size"));

#line 2191 "bitmap.m"
        {
#line 2191 "bitmap.m"
          mercury__exception__throw_1_p_0(mercury__bitmap__TypeCtorInfo_4_46, ((MR_Box) (mercury__bitmap__V_45_45)));
        }
#line 874 "bitmap.m"
      }
#line 870 "bitmap.m"
    return mercury__bitmap__HeadVar__3_3;
#line 870 "bitmap.m"
  }
#line 284 "bitmap.m"
}

#line 280 "bitmap.m"
MR_Box MR_CALL 
mercury__bitmap__difference_2_f_0(
#line 280 "bitmap.m"
  MR_Box mercury__bitmap__BMa_4,
#line 280 "bitmap.m"
  MR_Box mercury__bitmap__BMb_5)
#line 280 "bitmap.m"
{
#line 861 "bitmap.m"
  {
#line 861 "bitmap.m"
    MR_bool mercury__bitmap__succeeded;
#line 861 "bitmap.m"
    MR_Box mercury__bitmap__HeadVar__3_3;
#line 862 "bitmap.m"
    MR_Integer mercury__bitmap__V_8_8;
#line 862 "bitmap.m"
    MR_Integer mercury__bitmap__V_18_18;

#line 1813 "bitmap.m"
{
#define MR_PROC_LABEL mercury__bitmap__difference_2_f_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr) mercury__bitmap__BMa_4 ;
		{
#line 1813 "bitmap.m"

    NumBits = BM->num_bits;

#line 10206 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__V_8_8  = NumBits;
#line 1813 "bitmap.m"
}
#line 1813 "bitmap.m"
{
#define MR_PROC_LABEL mercury__bitmap__difference_2_f_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr) mercury__bitmap__BMb_5 ;
		{
#line 1813 "bitmap.m"

    NumBits = BM->num_bits;

#line 10226 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__V_18_18  = NumBits;
#line 1813 "bitmap.m"
}
#line 862 "bitmap.m"
    mercury__bitmap__succeeded = (mercury__bitmap__V_8_8 == mercury__bitmap__V_18_18);
#line 861 "bitmap.m"
    if (mercury__bitmap__succeeded)
#line 889 "bitmap.m"
      {
#line 890 "bitmap.m"
        MR_Integer mercury__bitmap__V_29_29;

#line 1813 "bitmap.m"
{
#define MR_PROC_LABEL mercury__bitmap__difference_2_f_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr) mercury__bitmap__BMb_5 ;
		{
#line 1813 "bitmap.m"

    NumBits = BM->num_bits;

#line 10255 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__V_29_29  = NumBits;
#line 1813 "bitmap.m"
}
#line 890 "bitmap.m"
        mercury__bitmap__succeeded = (mercury__bitmap__V_29_29 == (MR_Integer) 0);
#line 889 "bitmap.m"
        if (mercury__bitmap__succeeded)
#line 889 "bitmap.m"
          mercury__bitmap__HeadVar__3_3 = mercury__bitmap__BMb_5;
#line 889 "bitmap.m"
        else
#line 892 "bitmap.m"
          {
#line 892 "bitmap.m"
            MR_Integer mercury__bitmap__V_30_30;
#line 892 "bitmap.m"
            MR_Integer mercury__bitmap__V_31_31;
#line 892 "bitmap.m"
            MR_Integer mercury__bitmap__V_32_32;

#line 1813 "bitmap.m"
{
#define MR_PROC_LABEL mercury__bitmap__difference_2_f_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr) mercury__bitmap__BMb_5 ;
		{
#line 1813 "bitmap.m"

    NumBits = BM->num_bits;

#line 10292 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__V_32_32  = NumBits;
#line 1813 "bitmap.m"
}
#line 892 "bitmap.m"
            mercury__bitmap__V_31_31 = (mercury__bitmap__V_32_32 - (MR_Integer) 1);
#line 2048 "bitmap.m"
            mercury__bitmap__succeeded = (mercury__bitmap__V_31_31 < (MR_Integer) 0);
#line 2047 "bitmap.m"
            if (mercury__bitmap__succeeded)
#line 2047 "bitmap.m"
              mercury__bitmap__V_30_30 = (MR_Integer) -1;
#line 2047 "bitmap.m"
            else
#line 2051 "bitmap.m"
              {
#line 2047 "bitmap.m"
                mercury__bitmap__V_30_30 = (mercury__bitmap__V_31_31 / (MR_Integer) 8);
#line 2051 "bitmap.m"
              }
#line 889 "bitmap.m"
            {
#line 889 "bitmap.m"
              return mercury__bitmap__HeadVar__3_3 = mercury__bitmap__zip2__ho14_4_f_0(mercury__bitmap__V_30_30, mercury__bitmap__BMa_4, mercury__bitmap__BMb_5);
            }
#line 892 "bitmap.m"
          }
#line 889 "bitmap.m"
      }
#line 861 "bitmap.m"
    else
#line 865 "bitmap.m"
      {
#line 865 "bitmap.m"
        MR_Word mercury__bitmap__TypeCtorInfo_4_47 = (MR_Word) &mercury__bitmap__bitmap__type_ctor_info_bitmap_error_0;
#line 865 "bitmap.m"
        MR_Word mercury__bitmap__V_46_46 = (MR_Word) ((MR_Box) ((MR_String) "bitmap.difference: bitmaps not the same size"));

#line 2191 "bitmap.m"
        {
#line 2191 "bitmap.m"
          mercury__exception__throw_1_p_0(mercury__bitmap__TypeCtorInfo_4_47, ((MR_Box) (mercury__bitmap__V_46_46)));
        }
#line 865 "bitmap.m"
      }
#line 861 "bitmap.m"
    return mercury__bitmap__HeadVar__3_3;
#line 861 "bitmap.m"
  }
#line 280 "bitmap.m"
}

#line 276 "bitmap.m"
MR_Box MR_CALL 
mercury__bitmap__intersect_2_f_0(
#line 276 "bitmap.m"
  MR_Box mercury__bitmap__BMa_4,
#line 276 "bitmap.m"
  MR_Box mercury__bitmap__BMb_5)
#line 276 "bitmap.m"
{
#line 852 "bitmap.m"
  {
#line 852 "bitmap.m"
    MR_bool mercury__bitmap__succeeded;
#line 852 "bitmap.m"
    MR_Box mercury__bitmap__HeadVar__3_3;
#line 853 "bitmap.m"
    MR_Integer mercury__bitmap__V_6_6;
#line 853 "bitmap.m"
    MR_Integer mercury__bitmap__V_13_13;

#line 1813 "bitmap.m"
{
#define MR_PROC_LABEL mercury__bitmap__intersect_2_f_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr) mercury__bitmap__BMa_4 ;
		{
#line 1813 "bitmap.m"

    NumBits = BM->num_bits;

#line 10380 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__V_6_6  = NumBits;
#line 1813 "bitmap.m"
}
#line 1813 "bitmap.m"
{
#define MR_PROC_LABEL mercury__bitmap__intersect_2_f_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr) mercury__bitmap__BMb_5 ;
		{
#line 1813 "bitmap.m"

    NumBits = BM->num_bits;

#line 10400 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__V_13_13  = NumBits;
#line 1813 "bitmap.m"
}
#line 853 "bitmap.m"
    mercury__bitmap__succeeded = (mercury__bitmap__V_6_6 == mercury__bitmap__V_13_13);
#line 852 "bitmap.m"
    if (mercury__bitmap__succeeded)
#line 889 "bitmap.m"
      {
#line 890 "bitmap.m"
        MR_Integer mercury__bitmap__V_24_24;

#line 1813 "bitmap.m"
{
#define MR_PROC_LABEL mercury__bitmap__intersect_2_f_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr) mercury__bitmap__BMb_5 ;
		{
#line 1813 "bitmap.m"

    NumBits = BM->num_bits;

#line 10429 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__V_24_24  = NumBits;
#line 1813 "bitmap.m"
}
#line 890 "bitmap.m"
        mercury__bitmap__succeeded = (mercury__bitmap__V_24_24 == (MR_Integer) 0);
#line 889 "bitmap.m"
        if (mercury__bitmap__succeeded)
#line 889 "bitmap.m"
          mercury__bitmap__HeadVar__3_3 = mercury__bitmap__BMb_5;
#line 889 "bitmap.m"
        else
#line 892 "bitmap.m"
          {
#line 892 "bitmap.m"
            MR_Integer mercury__bitmap__V_25_25;
#line 892 "bitmap.m"
            MR_Integer mercury__bitmap__V_26_26;
#line 892 "bitmap.m"
            MR_Integer mercury__bitmap__V_27_27;

#line 1813 "bitmap.m"
{
#define MR_PROC_LABEL mercury__bitmap__intersect_2_f_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr) mercury__bitmap__BMb_5 ;
		{
#line 1813 "bitmap.m"

    NumBits = BM->num_bits;

#line 10466 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__V_27_27  = NumBits;
#line 1813 "bitmap.m"
}
#line 892 "bitmap.m"
            mercury__bitmap__V_26_26 = (mercury__bitmap__V_27_27 - (MR_Integer) 1);
#line 2048 "bitmap.m"
            mercury__bitmap__succeeded = (mercury__bitmap__V_26_26 < (MR_Integer) 0);
#line 2047 "bitmap.m"
            if (mercury__bitmap__succeeded)
#line 2047 "bitmap.m"
              mercury__bitmap__V_25_25 = (MR_Integer) -1;
#line 2047 "bitmap.m"
            else
#line 2051 "bitmap.m"
              {
#line 2047 "bitmap.m"
                mercury__bitmap__V_25_25 = (mercury__bitmap__V_26_26 / (MR_Integer) 8);
#line 2051 "bitmap.m"
              }
#line 889 "bitmap.m"
            {
#line 889 "bitmap.m"
              return mercury__bitmap__HeadVar__3_3 = mercury__bitmap__zip2__ho13_4_f_0(mercury__bitmap__V_25_25, mercury__bitmap__BMa_4, mercury__bitmap__BMb_5);
            }
#line 892 "bitmap.m"
          }
#line 889 "bitmap.m"
      }
#line 852 "bitmap.m"
    else
#line 856 "bitmap.m"
      {
#line 856 "bitmap.m"
        MR_Word mercury__bitmap__TypeCtorInfo_4_42 = (MR_Word) &mercury__bitmap__bitmap__type_ctor_info_bitmap_error_0;
#line 856 "bitmap.m"
        MR_Word mercury__bitmap__V_41_41 = (MR_Word) ((MR_Box) ((MR_String) "bitmap.intersect: bitmaps not the same size"));

#line 2191 "bitmap.m"
        {
#line 2191 "bitmap.m"
          mercury__exception__throw_1_p_0(mercury__bitmap__TypeCtorInfo_4_42, ((MR_Box) (mercury__bitmap__V_41_41)));
        }
#line 856 "bitmap.m"
      }
#line 852 "bitmap.m"
    return mercury__bitmap__HeadVar__3_3;
#line 852 "bitmap.m"
  }
#line 276 "bitmap.m"
}

#line 272 "bitmap.m"
MR_Box MR_CALL 
mercury__bitmap__union_2_f_0(
#line 272 "bitmap.m"
  MR_Box mercury__bitmap__BMa_4,
#line 272 "bitmap.m"
  MR_Box mercury__bitmap__BMb_5)
#line 272 "bitmap.m"
{
#line 843 "bitmap.m"
  {
#line 843 "bitmap.m"
    MR_bool mercury__bitmap__succeeded;
#line 843 "bitmap.m"
    MR_Box mercury__bitmap__HeadVar__3_3;
#line 844 "bitmap.m"
    MR_Integer mercury__bitmap__V_6_6;
#line 844 "bitmap.m"
    MR_Integer mercury__bitmap__V_13_13;

#line 1813 "bitmap.m"
{
#define MR_PROC_LABEL mercury__bitmap__union_2_f_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr) mercury__bitmap__BMa_4 ;
		{
#line 1813 "bitmap.m"

    NumBits = BM->num_bits;

#line 10554 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__V_6_6  = NumBits;
#line 1813 "bitmap.m"
}
#line 1813 "bitmap.m"
{
#define MR_PROC_LABEL mercury__bitmap__union_2_f_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr) mercury__bitmap__BMb_5 ;
		{
#line 1813 "bitmap.m"

    NumBits = BM->num_bits;

#line 10574 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__V_13_13  = NumBits;
#line 1813 "bitmap.m"
}
#line 844 "bitmap.m"
    mercury__bitmap__succeeded = (mercury__bitmap__V_6_6 == mercury__bitmap__V_13_13);
#line 843 "bitmap.m"
    if (mercury__bitmap__succeeded)
#line 889 "bitmap.m"
      {
#line 890 "bitmap.m"
        MR_Integer mercury__bitmap__V_24_24;

#line 1813 "bitmap.m"
{
#define MR_PROC_LABEL mercury__bitmap__union_2_f_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr) mercury__bitmap__BMb_5 ;
		{
#line 1813 "bitmap.m"

    NumBits = BM->num_bits;

#line 10603 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__V_24_24  = NumBits;
#line 1813 "bitmap.m"
}
#line 890 "bitmap.m"
        mercury__bitmap__succeeded = (mercury__bitmap__V_24_24 == (MR_Integer) 0);
#line 889 "bitmap.m"
        if (mercury__bitmap__succeeded)
#line 889 "bitmap.m"
          mercury__bitmap__HeadVar__3_3 = mercury__bitmap__BMb_5;
#line 889 "bitmap.m"
        else
#line 892 "bitmap.m"
          {
#line 892 "bitmap.m"
            MR_Integer mercury__bitmap__V_25_25;
#line 892 "bitmap.m"
            MR_Integer mercury__bitmap__V_26_26;
#line 892 "bitmap.m"
            MR_Integer mercury__bitmap__V_27_27;

#line 1813 "bitmap.m"
{
#define MR_PROC_LABEL mercury__bitmap__union_2_f_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr) mercury__bitmap__BMb_5 ;
		{
#line 1813 "bitmap.m"

    NumBits = BM->num_bits;

#line 10640 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__V_27_27  = NumBits;
#line 1813 "bitmap.m"
}
#line 892 "bitmap.m"
            mercury__bitmap__V_26_26 = (mercury__bitmap__V_27_27 - (MR_Integer) 1);
#line 2048 "bitmap.m"
            mercury__bitmap__succeeded = (mercury__bitmap__V_26_26 < (MR_Integer) 0);
#line 2047 "bitmap.m"
            if (mercury__bitmap__succeeded)
#line 2047 "bitmap.m"
              mercury__bitmap__V_25_25 = (MR_Integer) -1;
#line 2047 "bitmap.m"
            else
#line 2051 "bitmap.m"
              {
#line 2047 "bitmap.m"
                mercury__bitmap__V_25_25 = (mercury__bitmap__V_26_26 / (MR_Integer) 8);
#line 2051 "bitmap.m"
              }
#line 889 "bitmap.m"
            {
#line 889 "bitmap.m"
              return mercury__bitmap__HeadVar__3_3 = mercury__bitmap__zip2__ho12_4_f_0(mercury__bitmap__V_25_25, mercury__bitmap__BMa_4, mercury__bitmap__BMb_5);
            }
#line 892 "bitmap.m"
          }
#line 889 "bitmap.m"
      }
#line 843 "bitmap.m"
    else
#line 847 "bitmap.m"
      {
#line 847 "bitmap.m"
        MR_Word mercury__bitmap__TypeCtorInfo_4_42 = (MR_Word) &mercury__bitmap__bitmap__type_ctor_info_bitmap_error_0;
#line 847 "bitmap.m"
        MR_Word mercury__bitmap__V_41_41 = (MR_Word) ((MR_Box) ((MR_String) "bitmap.union: bitmaps not the same size"));

#line 2191 "bitmap.m"
        {
#line 2191 "bitmap.m"
          mercury__exception__throw_1_p_0(mercury__bitmap__TypeCtorInfo_4_42, ((MR_Box) (mercury__bitmap__V_41_41)));
        }
#line 847 "bitmap.m"
      }
#line 843 "bitmap.m"
    return mercury__bitmap__HeadVar__3_3;
#line 843 "bitmap.m"
  }
#line 272 "bitmap.m"
}

#line 268 "bitmap.m"
MR_Box MR_CALL 
mercury__bitmap__complement_1_f_0(
#line 268 "bitmap.m"
  MR_Box mercury__bitmap__BM_3)
#line 268 "bitmap.m"
{
#line 824 "bitmap.m"
  {
#line 824 "bitmap.m"
    MR_bool mercury__bitmap__succeeded;
#line 824 "bitmap.m"
    MR_Box mercury__bitmap__HeadVar__2_2;
#line 824 "bitmap.m"
    MR_Box mercury__bitmap__V_4_4;
#line 824 "bitmap.m"
    MR_Integer mercury__bitmap__V_5_5;
#line 824 "bitmap.m"
    MR_Integer mercury__bitmap__V_6_6;
#line 824 "bitmap.m"
    MR_Integer mercury__bitmap__V_7_7;
#line 824 "bitmap.m"
    MR_Integer mercury__bitmap__V_16_16;
#line 824 "bitmap.m"
    MR_Integer mercury__bitmap__V_17_17;

#line 1813 "bitmap.m"
{
#define MR_PROC_LABEL mercury__bitmap__complement_1_f_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr) mercury__bitmap__BM_3 ;
		{
#line 1813 "bitmap.m"

    NumBits = BM->num_bits;

#line 10734 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__V_7_7  = NumBits;
#line 1813 "bitmap.m"
}
#line 825 "bitmap.m"
    mercury__bitmap__V_6_6 = (mercury__bitmap__V_7_7 - (MR_Integer) 1);
#line 2048 "bitmap.m"
    mercury__bitmap__succeeded = (mercury__bitmap__V_6_6 < (MR_Integer) 0);
#line 2047 "bitmap.m"
    if (mercury__bitmap__succeeded)
#line 2047 "bitmap.m"
      mercury__bitmap__V_5_5 = (MR_Integer) -1;
#line 2047 "bitmap.m"
    else
#line 2051 "bitmap.m"
      {
#line 2047 "bitmap.m"
        mercury__bitmap__V_5_5 = (mercury__bitmap__V_6_6 / (MR_Integer) 8);
#line 2051 "bitmap.m"
      }
#line 825 "bitmap.m"
    {
#line 825 "bitmap.m"
      mercury__bitmap__V_4_4 = mercury__bitmap__complement_2_2_f_0(mercury__bitmap__V_5_5, mercury__bitmap__BM_3);
    }
#line 1813 "bitmap.m"
{
#define MR_PROC_LABEL mercury__bitmap__complement_1_f_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr) mercury__bitmap__V_4_4 ;
		{
#line 1813 "bitmap.m"

    NumBits = BM->num_bits;

#line 10775 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__V_17_17  = NumBits;
#line 1813 "bitmap.m"
}
#line 508 "bitmap.m"
    mercury__bitmap__V_16_16 = (mercury__bitmap__V_17_17 - (MR_Integer) 1);
#line 508 "bitmap.m"
    {
#line 508 "bitmap.m"
      return mercury__bitmap__HeadVar__2_2 = mercury__bitmap__set_trailing_bits_in_byte_3_f_0(mercury__bitmap__V_4_4, mercury__bitmap__V_16_16, (MR_Integer) 0);
    }
#line 824 "bitmap.m"
    return mercury__bitmap__HeadVar__2_2;
#line 824 "bitmap.m"
  }
#line 268 "bitmap.m"
}

#line 258 "bitmap.m"
MR_Box MR_CALL 
mercury__bitmap__unsafe_flip_2_f_0(
#line 258 "bitmap.m"
  MR_Box mercury__bitmap__BM0_4,
#line 258 "bitmap.m"
  MR_Integer mercury__bitmap__I_5)
#line 258 "bitmap.m"
{
#line 788 "bitmap.m"
  {
#line 788 "bitmap.m"
    MR_bool mercury__bitmap__succeeded = (mercury__bitmap__I_5 < (MR_Integer) 0);
#line 788 "bitmap.m"
    MR_Box mercury__bitmap__BM_6;
#line 788 "bitmap.m"
    MR_Integer mercury__bitmap__ByteIndex_7;
#line 788 "bitmap.m"
    MR_Integer mercury__bitmap__Byte0_8;
#line 788 "bitmap.m"
    MR_Integer mercury__bitmap__Byte_9;
#line 788 "bitmap.m"
    MR_Integer mercury__bitmap__V_10_10;
#line 788 "bitmap.m"
    MR_Integer mercury__bitmap__V_20_20;
#line 788 "bitmap.m"
    MR_Integer mercury__bitmap__V_24_24;

#line 2047 "bitmap.m"
    if (mercury__bitmap__succeeded)
#line 2047 "bitmap.m"
      mercury__bitmap__ByteIndex_7 = (MR_Integer) -1;
#line 2047 "bitmap.m"
    else
#line 2051 "bitmap.m"
      {
#line 2047 "bitmap.m"
        mercury__bitmap__ByteIndex_7 = (mercury__bitmap__I_5 / (MR_Integer) 8);
#line 2051 "bitmap.m"
      }
#line 1887 "bitmap.m"
{
#define MR_PROC_LABEL mercury__bitmap__unsafe_flip_2_f_0

	MR_Integer N;
	MR_BitmapPtr BM;
	MR_Integer Byte;

	N =  mercury__bitmap__ByteIndex_7 ;
	BM = (MR_BitmapPtr) mercury__bitmap__BM0_4 ;
		{
#line 1887 "bitmap.m"

    Byte = (MR_Integer) BM->elements[N];

#line 10851 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__Byte0_8  = Byte;
#line 1887 "bitmap.m"
}
#line 2083 "bitmap.m"
    mercury__bitmap__V_24_24 = (mercury__bitmap__I_5 % (MR_Integer) 8);
#line 2095 "bitmap.m"
    mercury__bitmap__V_20_20 = ((MR_Integer) 7 - mercury__bitmap__V_24_24);
#line 2095 "bitmap.m"
    mercury__bitmap__V_10_10 = ((MR_Integer) 1 << mercury__bitmap__V_20_20);
#line 791 "bitmap.m"
    mercury__bitmap__Byte_9 = (mercury__bitmap__Byte0_8 ^ mercury__bitmap__V_10_10);
#line 1928 "bitmap.m"
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
#line 1928 "bitmap.m"

    BM = BM0;
    BM->elements[N] = (MR_uint_least8_t) Byte;

#line 10884 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__BM_6  = (MR_Box) BM;
#line 1928 "bitmap.m"
}
#line 788 "bitmap.m"
    return mercury__bitmap__BM_6;
#line 788 "bitmap.m"
  }
#line 258 "bitmap.m"
}

#line 255 "bitmap.m"
MR_Box MR_CALL 
mercury__bitmap__flip_2_f_0(
#line 255 "bitmap.m"
  MR_Box mercury__bitmap__BM_4,
#line 255 "bitmap.m"
  MR_Integer mercury__bitmap__I_5)
#line 255 "bitmap.m"
{
#line 762 "bitmap.m"
  {
#line 762 "bitmap.m"
    MR_bool mercury__bitmap__succeeded = ((MR_Integer) 0 <= mercury__bitmap__I_5);
#line 762 "bitmap.m"
    MR_Box mercury__bitmap__HeadVar__3_3;
#line 553 "bitmap.m"
    MR_Integer mercury__bitmap__V_11_11;

#line 553 "bitmap.m"
    if (mercury__bitmap__succeeded)
#line 553 "bitmap.m"
      {
#line 1813 "bitmap.m"
{
#define MR_PROC_LABEL mercury__bitmap__flip_2_f_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr) mercury__bitmap__BM_4 ;
		{
#line 1813 "bitmap.m"

    NumBits = BM->num_bits;

#line 10933 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__V_11_11  = NumBits;
#line 1813 "bitmap.m"
}
#line 553 "bitmap.m"
        mercury__bitmap__succeeded = (mercury__bitmap__I_5 < mercury__bitmap__V_11_11);
#line 553 "bitmap.m"
      }
#line 762 "bitmap.m"
    if (mercury__bitmap__succeeded)
#line 762 "bitmap.m"
      {
#line 762 "bitmap.m"
        return mercury__bitmap__HeadVar__3_3 = mercury__bitmap__unsafe_flip_2_f_0(mercury__bitmap__BM_4, mercury__bitmap__I_5);
      }
#line 762 "bitmap.m"
    else
#line 765 "bitmap.m"
      {
#line 765 "bitmap.m"
        MR_Word mercury__bitmap__TypeCtorInfo_7_7 = (MR_Word) &mercury__bitmap__bitmap__type_ctor_info_bitmap_0;
#line 762 "bitmap.m"
        MR_Box mercury__bitmap__conv0_HeadVar__3_3;

#line 762 "bitmap.m"
        {
#line 762 "bitmap.m"
          mercury__bitmap__conv0_HeadVar__3_3 = mercury__bitmap__throw_bounds_error_3_f_0(mercury__bitmap__TypeCtorInfo_7_7, mercury__bitmap__BM_4, (MR_String) "bitmap.flip", mercury__bitmap__I_5);
        }
#line 762 "bitmap.m"
        mercury__bitmap__HeadVar__3_3 = ((MR_Box) mercury__bitmap__conv0_HeadVar__3_3);
#line 765 "bitmap.m"
      }
#line 762 "bitmap.m"
    return mercury__bitmap__HeadVar__3_3;
#line 762 "bitmap.m"
  }
#line 255 "bitmap.m"
}

#line 248 "bitmap.m"
MR_Integer MR_CALL 
mercury__bitmap__slice_num_bytes_1_f_0(
#line 248 "bitmap.m"
  MR_Word mercury__bitmap__Slice_3)
#line 248 "bitmap.m"
{
#line 735 "bitmap.m"
  {
#line 735 "bitmap.m"
    MR_bool mercury__bitmap__succeeded;
#line 735 "bitmap.m"
    MR_Integer mercury__bitmap__HeadVar__2_2;
#line 735 "bitmap.m"
    MR_Integer mercury__bitmap__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__bitmap__Slice_3, (MR_Integer) 2)));
#line 727 "bitmap.m"
    MR_Box mercury__bitmap__V_7_7 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__bitmap__Slice_3, (MR_Integer) 0)));
#line 727 "bitmap.m"
    MR_Integer mercury__bitmap__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__bitmap__Slice_3, (MR_Integer) 1)));

#line 735 "bitmap.m"
    {
#line 735 "bitmap.m"
      return mercury__bitmap__HeadVar__2_2 = mercury__bitmap__quotient_bits_per_byte_with_rem_zero_2_f_0((MR_String) "bitmap.slice_num_bytes", mercury__bitmap__V_5_5);
    }
#line 735 "bitmap.m"
    return mercury__bitmap__HeadVar__2_2;
#line 735 "bitmap.m"
  }
#line 248 "bitmap.m"
}

#line 247 "bitmap.m"
MR_Integer MR_CALL 
mercury__bitmap__slice_start_byte_index_1_f_0(
#line 247 "bitmap.m"
  MR_Word mercury__bitmap__Slice_3)
#line 247 "bitmap.m"
{
#line 732 "bitmap.m"
  {
#line 732 "bitmap.m"
    MR_bool mercury__bitmap__succeeded;
#line 732 "bitmap.m"
    MR_Integer mercury__bitmap__HeadVar__2_2;
#line 732 "bitmap.m"
    MR_Integer mercury__bitmap__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__bitmap__Slice_3, (MR_Integer) 1)));
#line 726 "bitmap.m"
    MR_Box mercury__bitmap__V_7_7 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__bitmap__Slice_3, (MR_Integer) 0)));
#line 726 "bitmap.m"
    MR_Integer mercury__bitmap__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__bitmap__Slice_3, (MR_Integer) 2)));

#line 732 "bitmap.m"
    {
#line 732 "bitmap.m"
      return mercury__bitmap__HeadVar__2_2 = mercury__bitmap__quotient_bits_per_byte_with_rem_zero_2_f_0((MR_String) "bitmap.slice_start_byte_index", mercury__bitmap__V_5_5);
    }
#line 732 "bitmap.m"
    return mercury__bitmap__HeadVar__2_2;
#line 732 "bitmap.m"
  }
#line 247 "bitmap.m"
}

#line 242 "bitmap.m"
MR_Integer MR_CALL 
mercury__bitmap__slice_num_bits_1_f_0(
#line 242 "bitmap.m"
  MR_Word mercury__bitmap__Slice_3)
#line 242 "bitmap.m"
{
#line 727 "bitmap.m"
  {
#line 727 "bitmap.m"
    MR_bool mercury__bitmap__succeeded;
#line 727 "bitmap.m"
    MR_Integer mercury__bitmap__HeadVar__2_2 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__bitmap__Slice_3, (MR_Integer) 2)));
#line 727 "bitmap.m"
    MR_Box mercury__bitmap__V_4_4 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__bitmap__Slice_3, (MR_Integer) 0)));
#line 727 "bitmap.m"
    MR_Integer mercury__bitmap__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__bitmap__Slice_3, (MR_Integer) 1)));

#line 727 "bitmap.m"
    return mercury__bitmap__HeadVar__2_2;
#line 727 "bitmap.m"
  }
#line 242 "bitmap.m"
}

#line 241 "bitmap.m"
MR_Integer MR_CALL 
mercury__bitmap__slice_start_bit_index_1_f_0(
#line 241 "bitmap.m"
  MR_Word mercury__bitmap__Slice_3)
#line 241 "bitmap.m"
{
#line 726 "bitmap.m"
  {
#line 726 "bitmap.m"
    MR_bool mercury__bitmap__succeeded;
#line 726 "bitmap.m"
    MR_Integer mercury__bitmap__HeadVar__2_2 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__bitmap__Slice_3, (MR_Integer) 1)));
#line 726 "bitmap.m"
    MR_Box mercury__bitmap__V_4_4 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__bitmap__Slice_3, (MR_Integer) 0)));
#line 726 "bitmap.m"
    MR_Integer mercury__bitmap__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__bitmap__Slice_3, (MR_Integer) 2)));

#line 726 "bitmap.m"
    return mercury__bitmap__HeadVar__2_2;
#line 726 "bitmap.m"
  }
#line 241 "bitmap.m"
}

#line 240 "bitmap.m"
MR_Box MR_CALL 
mercury__bitmap__slice_bitmap_1_f_0(
#line 240 "bitmap.m"
  MR_Word mercury__bitmap__Slice_3)
#line 240 "bitmap.m"
{
#line 725 "bitmap.m"
  {
#line 725 "bitmap.m"
    MR_bool mercury__bitmap__succeeded;
#line 725 "bitmap.m"
    MR_Box mercury__bitmap__HeadVar__2_2 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__bitmap__Slice_3, (MR_Integer) 0)));
#line 725 "bitmap.m"
    MR_Integer mercury__bitmap__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__bitmap__Slice_3, (MR_Integer) 1)));
#line 725 "bitmap.m"
    MR_Integer mercury__bitmap__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__bitmap__Slice_3, (MR_Integer) 2)));

#line 725 "bitmap.m"
    return mercury__bitmap__HeadVar__2_2;
#line 725 "bitmap.m"
  }
#line 240 "bitmap.m"
}

#line 236 "bitmap.m"
MR_Word MR_CALL 
mercury__bitmap__byte_slice_3_f_0(
#line 236 "bitmap.m"
  MR_Box mercury__bitmap__BM_5,
#line 236 "bitmap.m"
  MR_Integer mercury__bitmap__StartByte_6,
#line 236 "bitmap.m"
  MR_Integer mercury__bitmap__NumBytes_7)
#line 236 "bitmap.m"
{
#line 729 "bitmap.m"
  {
#line 729 "bitmap.m"
    MR_bool mercury__bitmap__succeeded;
#line 729 "bitmap.m"
    MR_Word mercury__bitmap__HeadVar__4_4;
#line 729 "bitmap.m"
    MR_Integer mercury__bitmap__V_8_8 = (mercury__bitmap__StartByte_6 * (MR_Integer) 8);
#line 729 "bitmap.m"
    MR_Integer mercury__bitmap__V_10_10 = (mercury__bitmap__NumBytes_7 * (MR_Integer) 8);

#line 729 "bitmap.m"
    {
#line 729 "bitmap.m"
      return mercury__bitmap__HeadVar__4_4 = mercury__bitmap__slice_3_f_0(mercury__bitmap__BM_5, mercury__bitmap__V_8_8, mercury__bitmap__V_10_10);
    }
#line 729 "bitmap.m"
    return mercury__bitmap__HeadVar__4_4;
#line 729 "bitmap.m"
  }
#line 236 "bitmap.m"
}

#line 232 "bitmap.m"
MR_Word MR_CALL 
mercury__bitmap__slice_3_f_0(
#line 232 "bitmap.m"
  MR_Box mercury__bitmap__BM_5,
#line 232 "bitmap.m"
  MR_Integer mercury__bitmap__StartBit_6,
#line 232 "bitmap.m"
  MR_Integer mercury__bitmap__NumBits_7)
#line 232 "bitmap.m"
{
#line 721 "bitmap.m"
  {
#line 721 "bitmap.m"
    MR_bool mercury__bitmap__succeeded = (mercury__bitmap__NumBits_7 >= (MR_Integer) 0);
#line 721 "bitmap.m"
    MR_Word mercury__bitmap__Slice_8;
#line 716 "bitmap.m"
    MR_Integer mercury__bitmap__V_10_10;
#line 716 "bitmap.m"
    MR_Integer mercury__bitmap__V_11_11;
#line 716 "bitmap.m"
    MR_Integer mercury__bitmap__V_15_15;
#line 716 "bitmap.m"
    MR_Integer mercury__bitmap__V_16_16;

#line 716 "bitmap.m"
    if (mercury__bitmap__succeeded)
#line 716 "bitmap.m"
      {
#line 717 "bitmap.m"
        mercury__bitmap__V_10_10 = (MR_Integer) 0;
#line 717 "bitmap.m"
        mercury__bitmap__succeeded = (mercury__bitmap__StartBit_6 >= mercury__bitmap__V_10_10);
#line 716 "bitmap.m"
        if (mercury__bitmap__succeeded)
#line 716 "bitmap.m"
          {
#line 718 "bitmap.m"
            mercury__bitmap__V_11_11 = (mercury__bitmap__StartBit_6 + mercury__bitmap__NumBits_7);
#line 558 "bitmap.m"
            mercury__bitmap__V_15_15 = (MR_Integer) 0;
#line 558 "bitmap.m"
            mercury__bitmap__succeeded = (mercury__bitmap__V_15_15 <= mercury__bitmap__V_11_11);
#line 716 "bitmap.m"
            if (mercury__bitmap__succeeded)
#line 716 "bitmap.m"
              {
#line 1813 "bitmap.m"
{
#define MR_PROC_LABEL mercury__bitmap__slice_3_f_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr) mercury__bitmap__BM_5 ;
		{
#line 1813 "bitmap.m"

    NumBits = BM->num_bits;

#line 11210 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__V_16_16  = NumBits;
#line 1813 "bitmap.m"
}
#line 558 "bitmap.m"
                mercury__bitmap__succeeded = (mercury__bitmap__V_11_11 <= mercury__bitmap__V_16_16);
#line 716 "bitmap.m"
              }
#line 716 "bitmap.m"
          }
#line 716 "bitmap.m"
      }
#line 721 "bitmap.m"
    if (mercury__bitmap__succeeded)
#line 720 "bitmap.m"
      {
#line 720 "bitmap.m"
        mercury__bitmap__Slice_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 720 "bitmap.m"
        MR_hl_field(MR_mktag(0), mercury__bitmap__Slice_8, 0) = ((MR_Box) (mercury__bitmap__BM_5));
#line 720 "bitmap.m"
        MR_hl_field(MR_mktag(0), mercury__bitmap__Slice_8, 1) = ((MR_Box) (mercury__bitmap__StartBit_6));
#line 720 "bitmap.m"
        MR_hl_field(MR_mktag(0), mercury__bitmap__Slice_8, 2) = ((MR_Box) (mercury__bitmap__NumBits_7));
#line 720 "bitmap.m"
      }
#line 721 "bitmap.m"
    else
#line 722 "bitmap.m"
      {
#line 722 "bitmap.m"
        {
#line 722 "bitmap.m"
          mercury__bitmap__throw_bounds_error_4_p_0(mercury__bitmap__BM_5, (MR_String) "bitmap.slice", mercury__bitmap__StartBit_6, mercury__bitmap__NumBits_7);
        }
#line 722 "bitmap.m"
      }
#line 721 "bitmap.m"
    return mercury__bitmap__Slice_8;
#line 721 "bitmap.m"
  }
#line 232 "bitmap.m"
}

#line 221 "bitmap.m"
MR_Box MR_CALL 
mercury__bitmap__f_117_110_115_97_102_101_95_98_121_116_101_32_58_61_3_f_0(
#line 221 "bitmap.m"
  MR_Integer mercury__bitmap__N_1,
#line 221 "bitmap.m"
  MR_Box mercury__bitmap__BM0_2,
#line 221 "bitmap.m"
  MR_Integer mercury__bitmap__Byte_3)
#line 221 "bitmap.m"
{
#line 1925 "bitmap.m"
  {
#line 1925 "bitmap.m"
    MR_bool mercury__bitmap__succeeded;
#line 1925 "bitmap.m"
    MR_Box mercury__bitmap__BM_4;

#line 1928 "bitmap.m"
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
#line 1928 "bitmap.m"

    BM = BM0;
    BM->elements[N] = (MR_uint_least8_t) Byte;

#line 11293 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__BM_4  = (MR_Box) BM;
#line 1928 "bitmap.m"
}
#line 1925 "bitmap.m"
    return mercury__bitmap__BM_4;
#line 1925 "bitmap.m"
  }
#line 221 "bitmap.m"
}

#line 218 "bitmap.m"
MR_Box MR_CALL 
mercury__bitmap__f_98_121_116_101_32_58_61_3_f_0(
#line 218 "bitmap.m"
  MR_Integer mercury__bitmap__N_6,
#line 218 "bitmap.m"
  MR_Box mercury__bitmap__BM_5,
#line 218 "bitmap.m"
  MR_Integer mercury__bitmap__Byte_7)
#line 218 "bitmap.m"
{
#line 1916 "bitmap.m"
  {
#line 1916 "bitmap.m"
    MR_bool mercury__bitmap__succeeded = (mercury__bitmap__N_6 >= (MR_Integer) 0);
#line 1916 "bitmap.m"
    MR_Box mercury__bitmap__HeadVar__4_4;
#line 1917 "bitmap.m"
    MR_Integer mercury__bitmap__V_9_9;
#line 1917 "bitmap.m"
    MR_Integer mercury__bitmap__V_10_10;
#line 1917 "bitmap.m"
    MR_Integer mercury__bitmap__V_11_11;
#line 1917 "bitmap.m"
    MR_Integer mercury__bitmap__V_12_12;
#line 1917 "bitmap.m"
    MR_Integer mercury__bitmap__V_13_13;
#line 1917 "bitmap.m"
    MR_Integer mercury__bitmap__V_14_14;
#line 1917 "bitmap.m"
    MR_Integer mercury__bitmap__V_19_19;
#line 1917 "bitmap.m"
    MR_Integer mercury__bitmap__V_20_20;

#line 1917 "bitmap.m"
    if (mercury__bitmap__succeeded)
#line 1917 "bitmap.m"
      {
#line 2039 "bitmap.m"
        mercury__bitmap__V_12_12 = (MR_Integer) 8;
#line 1917 "bitmap.m"
        mercury__bitmap__V_11_11 = (mercury__bitmap__N_6 * mercury__bitmap__V_12_12);
#line 2039 "bitmap.m"
        mercury__bitmap__V_13_13 = (MR_Integer) 8;
#line 1917 "bitmap.m"
        mercury__bitmap__V_10_10 = (mercury__bitmap__V_11_11 + mercury__bitmap__V_13_13);
#line 1917 "bitmap.m"
        mercury__bitmap__V_14_14 = (MR_Integer) 1;
#line 1917 "bitmap.m"
        mercury__bitmap__V_9_9 = (mercury__bitmap__V_10_10 - mercury__bitmap__V_14_14);
#line 553 "bitmap.m"
        mercury__bitmap__V_19_19 = (MR_Integer) 0;
#line 553 "bitmap.m"
        mercury__bitmap__succeeded = (mercury__bitmap__V_19_19 <= mercury__bitmap__V_9_9);
#line 1917 "bitmap.m"
        if (mercury__bitmap__succeeded)
#line 1917 "bitmap.m"
          {
#line 1813 "bitmap.m"
{
#define MR_PROC_LABEL mercury__bitmap__f_98_121_116_101_32_58_61_3_f_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr) mercury__bitmap__BM_5 ;
		{
#line 1813 "bitmap.m"

    NumBits = BM->num_bits;

#line 11378 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__V_20_20  = NumBits;
#line 1813 "bitmap.m"
}
#line 553 "bitmap.m"
            mercury__bitmap__succeeded = (mercury__bitmap__V_9_9 < mercury__bitmap__V_20_20);
#line 1917 "bitmap.m"
          }
#line 1917 "bitmap.m"
      }
#line 1916 "bitmap.m"
    if (mercury__bitmap__succeeded)
#line 1925 "bitmap.m"
      {
#line 1928 "bitmap.m"
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
#line 1928 "bitmap.m"

    BM = BM0;
    BM->elements[N] = (MR_uint_least8_t) Byte;

#line 11413 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__HeadVar__4_4  = (MR_Box) BM;
#line 1928 "bitmap.m"
}
#line 1925 "bitmap.m"
      }
#line 1916 "bitmap.m"
    else
#line 1919 "bitmap.m"
      {
#line 1919 "bitmap.m"
        MR_Word mercury__bitmap__TypeCtorInfo_16_16 = (MR_Word) &mercury__bitmap__bitmap__type_ctor_info_bitmap_0;
#line 1916 "bitmap.m"
        MR_Box mercury__bitmap__conv0_HeadVar__4_4;

#line 1916 "bitmap.m"
        {
#line 1916 "bitmap.m"
          mercury__bitmap__conv0_HeadVar__4_4 = mercury__bitmap__throw_bounds_error_3_f_0(mercury__bitmap__TypeCtorInfo_16_16, mercury__bitmap__BM_5, (MR_String) "bitmap.\'byte :=\'", mercury__bitmap__N_6);
        }
#line 1916 "bitmap.m"
        mercury__bitmap__HeadVar__4_4 = ((MR_Box) mercury__bitmap__conv0_HeadVar__4_4);
#line 1919 "bitmap.m"
      }
#line 1916 "bitmap.m"
    return mercury__bitmap__HeadVar__4_4;
#line 1916 "bitmap.m"
  }
#line 218 "bitmap.m"
}

#line 215 "bitmap.m"
MR_Integer MR_CALL 
mercury__bitmap__unsafe_byte_2_f_0(
#line 215 "bitmap.m"
  MR_Integer mercury__bitmap__N_1,
#line 215 "bitmap.m"
  MR_Box mercury__bitmap__BM_2)
#line 215 "bitmap.m"
{
#line 1884 "bitmap.m"
  {
#line 1884 "bitmap.m"
    MR_bool mercury__bitmap__succeeded;
#line 1884 "bitmap.m"
    MR_Integer mercury__bitmap__Byte_3;

#line 1887 "bitmap.m"
{
#define MR_PROC_LABEL mercury__bitmap__unsafe_byte_2_f_0

	MR_Integer N;
	MR_BitmapPtr BM;
	MR_Integer Byte;

	N =  mercury__bitmap__N_1 ;
	BM = (MR_BitmapPtr) mercury__bitmap__BM_2 ;
		{
#line 1887 "bitmap.m"

    Byte = (MR_Integer) BM->elements[N];

#line 11478 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__Byte_3  = Byte;
#line 1887 "bitmap.m"
}
#line 1884 "bitmap.m"
    return mercury__bitmap__Byte_3;
#line 1884 "bitmap.m"
  }
#line 215 "bitmap.m"
}

#line 211 "bitmap.m"
MR_Integer MR_CALL 
mercury__bitmap__byte_2_f_0(
#line 211 "bitmap.m"
  MR_Integer mercury__bitmap__N_5,
#line 211 "bitmap.m"
  MR_Box mercury__bitmap__BM_4)
#line 211 "bitmap.m"
{
#line 1877 "bitmap.m"
  {
#line 1877 "bitmap.m"
    MR_bool mercury__bitmap__succeeded = (mercury__bitmap__N_5 >= (MR_Integer) 0);
#line 1877 "bitmap.m"
    MR_Integer mercury__bitmap__HeadVar__3_3;
#line 1878 "bitmap.m"
    MR_Integer mercury__bitmap__V_7_7;
#line 1878 "bitmap.m"
    MR_Integer mercury__bitmap__V_8_8;
#line 1878 "bitmap.m"
    MR_Integer mercury__bitmap__V_9_9;
#line 1878 "bitmap.m"
    MR_Integer mercury__bitmap__V_10_10;
#line 1878 "bitmap.m"
    MR_Integer mercury__bitmap__V_11_11;
#line 1878 "bitmap.m"
    MR_Integer mercury__bitmap__V_12_12;
#line 1878 "bitmap.m"
    MR_Integer mercury__bitmap__V_17_17;
#line 1878 "bitmap.m"
    MR_Integer mercury__bitmap__V_18_18;

#line 1878 "bitmap.m"
    if (mercury__bitmap__succeeded)
#line 1878 "bitmap.m"
      {
#line 2039 "bitmap.m"
        mercury__bitmap__V_10_10 = (MR_Integer) 8;
#line 1878 "bitmap.m"
        mercury__bitmap__V_9_9 = (mercury__bitmap__N_5 * mercury__bitmap__V_10_10);
#line 2039 "bitmap.m"
        mercury__bitmap__V_11_11 = (MR_Integer) 8;
#line 1878 "bitmap.m"
        mercury__bitmap__V_8_8 = (mercury__bitmap__V_9_9 + mercury__bitmap__V_11_11);
#line 1878 "bitmap.m"
        mercury__bitmap__V_12_12 = (MR_Integer) 1;
#line 1878 "bitmap.m"
        mercury__bitmap__V_7_7 = (mercury__bitmap__V_8_8 - mercury__bitmap__V_12_12);
#line 553 "bitmap.m"
        mercury__bitmap__V_17_17 = (MR_Integer) 0;
#line 553 "bitmap.m"
        mercury__bitmap__succeeded = (mercury__bitmap__V_17_17 <= mercury__bitmap__V_7_7);
#line 1878 "bitmap.m"
        if (mercury__bitmap__succeeded)
#line 1878 "bitmap.m"
          {
#line 1813 "bitmap.m"
{
#define MR_PROC_LABEL mercury__bitmap__byte_2_f_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr) mercury__bitmap__BM_4 ;
		{
#line 1813 "bitmap.m"

    NumBits = BM->num_bits;

#line 11561 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__V_18_18  = NumBits;
#line 1813 "bitmap.m"
}
#line 553 "bitmap.m"
            mercury__bitmap__succeeded = (mercury__bitmap__V_7_7 < mercury__bitmap__V_18_18);
#line 1878 "bitmap.m"
          }
#line 1878 "bitmap.m"
      }
#line 1877 "bitmap.m"
    if (mercury__bitmap__succeeded)
#line 1884 "bitmap.m"
      {
#line 1887 "bitmap.m"
{
#define MR_PROC_LABEL mercury__bitmap__byte_2_f_0

	MR_Integer N;
	MR_BitmapPtr BM;
	MR_Integer Byte;

	N =  mercury__bitmap__N_5 ;
	BM = (MR_BitmapPtr) mercury__bitmap__BM_4 ;
		{
#line 1887 "bitmap.m"

    Byte = (MR_Integer) BM->elements[N];

#line 11593 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__HeadVar__3_3  = Byte;
#line 1887 "bitmap.m"
}
#line 1884 "bitmap.m"
      }
#line 1877 "bitmap.m"
    else
#line 1880 "bitmap.m"
      {
#line 1880 "bitmap.m"
        MR_Word mercury__bitmap__TypeCtorInfo_14_14 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 1877 "bitmap.m"
        MR_Box mercury__bitmap__conv0_HeadVar__3_3;

#line 1877 "bitmap.m"
        {
#line 1877 "bitmap.m"
          mercury__bitmap__conv0_HeadVar__3_3 = mercury__bitmap__throw_bounds_error_3_f_0(mercury__bitmap__TypeCtorInfo_14_14, mercury__bitmap__BM_4, (MR_String) "bitmap.byte", mercury__bitmap__N_5);
        }
#line 1877 "bitmap.m"
        mercury__bitmap__HeadVar__3_3 = ((MR_Integer) mercury__bitmap__conv0_HeadVar__3_3);
#line 1880 "bitmap.m"
      }
#line 1877 "bitmap.m"
    return mercury__bitmap__HeadVar__3_3;
#line 1877 "bitmap.m"
  }
#line 211 "bitmap.m"
}

#line 194 "bitmap.m"
MR_Box MR_CALL 
mercury__bitmap__f_117_110_115_97_102_101_95_98_105_116_115_32_58_61_4_f_0(
#line 194 "bitmap.m"
  MR_Integer mercury__bitmap__FirstBit_7,
#line 194 "bitmap.m"
  MR_Integer mercury__bitmap__NumBits_8,
#line 194 "bitmap.m"
  MR_Box mercury__bitmap__BM0_6,
#line 194 "bitmap.m"
  MR_Integer mercury__bitmap__Bits_9)
#line 194 "bitmap.m"
{
#line 668 "bitmap.m"
  {
#line 668 "bitmap.m"
    MR_bool mercury__bitmap__succeeded;
#line 668 "bitmap.m"
    MR_Box mercury__bitmap__BM_10;
#line 668 "bitmap.m"
    MR_Integer mercury__bitmap__LastBit_11;
#line 668 "bitmap.m"
    MR_Integer mercury__bitmap__LastByteIndex_12;
#line 668 "bitmap.m"
    MR_Integer mercury__bitmap__LastBitIndex_13;
#line 668 "bitmap.m"
    MR_Integer mercury__bitmap__V_14_14 = (mercury__bitmap__FirstBit_7 + mercury__bitmap__NumBits_8);

#line 669 "bitmap.m"
    mercury__bitmap__LastBit_11 = (mercury__bitmap__V_14_14 - (MR_Integer) 1);
#line 2048 "bitmap.m"
    mercury__bitmap__succeeded = (mercury__bitmap__LastBit_11 < (MR_Integer) 0);
#line 2047 "bitmap.m"
    if (mercury__bitmap__succeeded)
#line 2047 "bitmap.m"
      mercury__bitmap__LastByteIndex_12 = (MR_Integer) -1;
#line 2047 "bitmap.m"
    else
#line 2051 "bitmap.m"
      {
#line 2047 "bitmap.m"
        mercury__bitmap__LastByteIndex_12 = (mercury__bitmap__LastBit_11 / (MR_Integer) 8);
#line 2051 "bitmap.m"
      }
#line 2083 "bitmap.m"
    mercury__bitmap__LastBitIndex_13 = (mercury__bitmap__LastBit_11 % (MR_Integer) 8);
#line 672 "bitmap.m"
    {
#line 672 "bitmap.m"
      mercury__bitmap__set_bits_in_bytes_6_p_0(mercury__bitmap__LastByteIndex_12, mercury__bitmap__LastBitIndex_13, mercury__bitmap__NumBits_8, mercury__bitmap__Bits_9, mercury__bitmap__BM0_6, &mercury__bitmap__BM_10);
    }
#line 668 "bitmap.m"
    return mercury__bitmap__BM_10;
#line 668 "bitmap.m"
  }
#line 194 "bitmap.m"
}

#line 191 "bitmap.m"
MR_Box MR_CALL 
mercury__bitmap__f_98_105_116_115_32_58_61_4_f_0(
#line 191 "bitmap.m"
  MR_Integer mercury__bitmap__FirstBit_7,
#line 191 "bitmap.m"
  MR_Integer mercury__bitmap__NumBits_8,
#line 191 "bitmap.m"
  MR_Box mercury__bitmap__BM_6,
#line 191 "bitmap.m"
  MR_Integer mercury__bitmap__Bits_9)
#line 191 "bitmap.m"
{
#line 648 "bitmap.m"
  {
#line 648 "bitmap.m"
    MR_bool mercury__bitmap__succeeded = (mercury__bitmap__FirstBit_7 >= (MR_Integer) 0);
#line 648 "bitmap.m"
    MR_Box mercury__bitmap__HeadVar__5_5;
#line 650 "bitmap.m"
    MR_Integer mercury__bitmap__V_11_11;
#line 650 "bitmap.m"
    MR_Integer mercury__bitmap__V_12_12;
#line 650 "bitmap.m"
    MR_Integer mercury__bitmap__V_13_13;
#line 650 "bitmap.m"
    MR_Integer mercury__bitmap__V_25_25;
#line 650 "bitmap.m"
    MR_Integer mercury__bitmap__V_26_26;

#line 650 "bitmap.m"
    if (mercury__bitmap__succeeded)
#line 650 "bitmap.m"
      {
#line 651 "bitmap.m"
        mercury__bitmap__V_11_11 = (MR_Integer) 0;
#line 651 "bitmap.m"
        mercury__bitmap__succeeded = (mercury__bitmap__NumBits_8 >= mercury__bitmap__V_11_11);
#line 650 "bitmap.m"
        if (mercury__bitmap__succeeded)
#line 650 "bitmap.m"
          {
#line 171 "int.opt"
{
#define MR_PROC_LABEL mercury__bitmap__f_98_105_116_115_32_58_61_4_f_0

	MR_Integer Bits;

		{
#line 171 "int.opt"

    Bits = ML_BITS_PER_INT;

#line 11738 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__V_12_12  = Bits;
#line 171 "int.opt"
}
#line 652 "bitmap.m"
            mercury__bitmap__succeeded = (mercury__bitmap__NumBits_8 <= mercury__bitmap__V_12_12);
#line 650 "bitmap.m"
            if (mercury__bitmap__succeeded)
#line 650 "bitmap.m"
              {
#line 653 "bitmap.m"
                mercury__bitmap__V_13_13 = (mercury__bitmap__FirstBit_7 + mercury__bitmap__NumBits_8);
#line 558 "bitmap.m"
                mercury__bitmap__V_25_25 = (MR_Integer) 0;
#line 558 "bitmap.m"
                mercury__bitmap__succeeded = (mercury__bitmap__V_25_25 <= mercury__bitmap__V_13_13);
#line 650 "bitmap.m"
                if (mercury__bitmap__succeeded)
#line 650 "bitmap.m"
                  {
#line 1813 "bitmap.m"
{
#define MR_PROC_LABEL mercury__bitmap__f_98_105_116_115_32_58_61_4_f_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr) mercury__bitmap__BM_6 ;
		{
#line 1813 "bitmap.m"

    NumBits = BM->num_bits;

#line 11774 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__V_26_26  = NumBits;
#line 1813 "bitmap.m"
}
#line 558 "bitmap.m"
                    mercury__bitmap__succeeded = (mercury__bitmap__V_13_13 <= mercury__bitmap__V_26_26);
#line 650 "bitmap.m"
                  }
#line 650 "bitmap.m"
              }
#line 650 "bitmap.m"
          }
#line 650 "bitmap.m"
      }
#line 648 "bitmap.m"
    if (mercury__bitmap__succeeded)
#line 648 "bitmap.m"
      {
#line 648 "bitmap.m"
        return mercury__bitmap__HeadVar__5_5 = mercury__bitmap__f_117_110_115_97_102_101_95_98_105_116_115_32_58_61_4_f_0(mercury__bitmap__FirstBit_7, mercury__bitmap__NumBits_8, mercury__bitmap__BM_6, mercury__bitmap__Bits_9);
      }
#line 648 "bitmap.m"
    else
#line 648 "bitmap.m"
      {
#line 657 "bitmap.m"
        mercury__bitmap__succeeded = (mercury__bitmap__NumBits_8 < (MR_Integer) 0);
#line 658 "bitmap.m"
        if (!(mercury__bitmap__succeeded))
#line 658 "bitmap.m"
          {
#line 658 "bitmap.m"
            MR_Integer mercury__bitmap__V_14_14;

#line 171 "int.opt"
{
#define MR_PROC_LABEL mercury__bitmap__f_98_105_116_115_32_58_61_4_f_0

	MR_Integer Bits;

		{
#line 171 "int.opt"

    Bits = ML_BITS_PER_INT;

#line 11822 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__V_14_14  = Bits;
#line 171 "int.opt"
}
#line 658 "bitmap.m"
            mercury__bitmap__succeeded = (mercury__bitmap__NumBits_8 > mercury__bitmap__V_14_14);
#line 658 "bitmap.m"
          }
#line 648 "bitmap.m"
        if (mercury__bitmap__succeeded)
#line 661 "bitmap.m"
          {
#line 661 "bitmap.m"
            MR_Word mercury__bitmap__TypeCtorInfo_4_35 = (MR_Word) &mercury__bitmap__bitmap__type_ctor_info_bitmap_error_0;
#line 661 "bitmap.m"
            MR_Word mercury__bitmap__V_34_34 = (MR_Word) ((MR_Box) ((MR_String) "bitmap.\'bits :=\': number of bits must be between 0 and \140int.bits_per_int\'."));

#line 2191 "bitmap.m"
            {
#line 2191 "bitmap.m"
              mercury__exception__throw_1_p_0(mercury__bitmap__TypeCtorInfo_4_35, ((MR_Box) (mercury__bitmap__V_34_34)));
            }
#line 661 "bitmap.m"
          }
#line 648 "bitmap.m"
        else
#line 665 "bitmap.m"
          {
#line 665 "bitmap.m"
            MR_Word mercury__bitmap__TypeCtorInfo_21_21 = (MR_Word) &mercury__bitmap__bitmap__type_ctor_info_bitmap_0;
#line 648 "bitmap.m"
            MR_Box mercury__bitmap__conv0_HeadVar__5_5;

#line 648 "bitmap.m"
            {
#line 648 "bitmap.m"
              mercury__bitmap__conv0_HeadVar__5_5 = mercury__bitmap__throw_bounds_error_3_f_0(mercury__bitmap__TypeCtorInfo_21_21, mercury__bitmap__BM_6, (MR_String) "bitmap.\'bits :=\'", mercury__bitmap__FirstBit_7);
            }
#line 648 "bitmap.m"
            mercury__bitmap__HeadVar__5_5 = ((MR_Box) mercury__bitmap__conv0_HeadVar__5_5);
#line 665 "bitmap.m"
          }
#line 648 "bitmap.m"
      }
#line 648 "bitmap.m"
    return mercury__bitmap__HeadVar__5_5;
#line 648 "bitmap.m"
  }
#line 191 "bitmap.m"
}

#line 188 "bitmap.m"
MR_Integer MR_CALL 
mercury__bitmap__unsafe_bits_3_f_0(
#line 188 "bitmap.m"
  MR_Integer mercury__bitmap__FirstBit_6,
#line 188 "bitmap.m"
  MR_Integer mercury__bitmap__NumBits_7,
#line 188 "bitmap.m"
  MR_Box mercury__bitmap__BM_5)
#line 188 "bitmap.m"
{
#line 604 "bitmap.m"
  {
#line 604 "bitmap.m"
    MR_bool mercury__bitmap__succeeded = (mercury__bitmap__FirstBit_6 < (MR_Integer) 0);
#line 604 "bitmap.m"
    MR_Integer mercury__bitmap__Bits_8;
#line 604 "bitmap.m"
    MR_Integer mercury__bitmap__FirstByteIndex_9;
#line 604 "bitmap.m"
    MR_Integer mercury__bitmap__FirstBitIndex_10;

#line 2047 "bitmap.m"
    if (mercury__bitmap__succeeded)
#line 2047 "bitmap.m"
      mercury__bitmap__FirstByteIndex_9 = (MR_Integer) -1;
#line 2047 "bitmap.m"
    else
#line 2051 "bitmap.m"
      {
#line 2047 "bitmap.m"
        mercury__bitmap__FirstByteIndex_9 = (mercury__bitmap__FirstBit_6 / (MR_Integer) 8);
#line 2051 "bitmap.m"
      }
#line 2083 "bitmap.m"
    mercury__bitmap__FirstBitIndex_10 = (mercury__bitmap__FirstBit_6 % (MR_Integer) 8);
#line 607 "bitmap.m"
    {
#line 607 "bitmap.m"
      mercury__bitmap__extract_bits_from_bytes_6_p_0(mercury__bitmap__FirstByteIndex_9, mercury__bitmap__FirstBitIndex_10, mercury__bitmap__NumBits_7, mercury__bitmap__BM_5, (MR_Integer) 0, &mercury__bitmap__Bits_8);
    }
#line 604 "bitmap.m"
    return mercury__bitmap__Bits_8;
#line 604 "bitmap.m"
  }
#line 188 "bitmap.m"
}

#line 184 "bitmap.m"
MR_Integer MR_CALL 
mercury__bitmap__bits_3_f_0(
#line 184 "bitmap.m"
  MR_Integer mercury__bitmap__FirstBit_6,
#line 184 "bitmap.m"
  MR_Integer mercury__bitmap__NumBits_7,
#line 184 "bitmap.m"
  MR_Box mercury__bitmap__BM_5)
#line 184 "bitmap.m"
{
#line 585 "bitmap.m"
  {
#line 585 "bitmap.m"
    MR_bool mercury__bitmap__succeeded = (mercury__bitmap__FirstBit_6 >= (MR_Integer) 0);
#line 585 "bitmap.m"
    MR_Integer mercury__bitmap__HeadVar__4_4;
#line 587 "bitmap.m"
    MR_Integer mercury__bitmap__V_9_9;
#line 587 "bitmap.m"
    MR_Integer mercury__bitmap__V_10_10;
#line 587 "bitmap.m"
    MR_Integer mercury__bitmap__V_11_11;
#line 587 "bitmap.m"
    MR_Integer mercury__bitmap__V_23_23;
#line 587 "bitmap.m"
    MR_Integer mercury__bitmap__V_24_24;

#line 587 "bitmap.m"
    if (mercury__bitmap__succeeded)
#line 587 "bitmap.m"
      {
#line 588 "bitmap.m"
        mercury__bitmap__V_9_9 = (MR_Integer) 0;
#line 588 "bitmap.m"
        mercury__bitmap__succeeded = (mercury__bitmap__NumBits_7 >= mercury__bitmap__V_9_9);
#line 587 "bitmap.m"
        if (mercury__bitmap__succeeded)
#line 587 "bitmap.m"
          {
#line 171 "int.opt"
{
#define MR_PROC_LABEL mercury__bitmap__bits_3_f_0

	MR_Integer Bits;

		{
#line 171 "int.opt"

    Bits = ML_BITS_PER_INT;

#line 11975 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__V_10_10  = Bits;
#line 171 "int.opt"
}
#line 589 "bitmap.m"
            mercury__bitmap__succeeded = (mercury__bitmap__NumBits_7 <= mercury__bitmap__V_10_10);
#line 587 "bitmap.m"
            if (mercury__bitmap__succeeded)
#line 587 "bitmap.m"
              {
#line 590 "bitmap.m"
                mercury__bitmap__V_11_11 = (mercury__bitmap__FirstBit_6 + mercury__bitmap__NumBits_7);
#line 558 "bitmap.m"
                mercury__bitmap__V_23_23 = (MR_Integer) 0;
#line 558 "bitmap.m"
                mercury__bitmap__succeeded = (mercury__bitmap__V_23_23 <= mercury__bitmap__V_11_11);
#line 587 "bitmap.m"
                if (mercury__bitmap__succeeded)
#line 587 "bitmap.m"
                  {
#line 1813 "bitmap.m"
{
#define MR_PROC_LABEL mercury__bitmap__bits_3_f_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr) mercury__bitmap__BM_5 ;
		{
#line 1813 "bitmap.m"

    NumBits = BM->num_bits;

#line 12011 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__V_24_24  = NumBits;
#line 1813 "bitmap.m"
}
#line 558 "bitmap.m"
                    mercury__bitmap__succeeded = (mercury__bitmap__V_11_11 <= mercury__bitmap__V_24_24);
#line 587 "bitmap.m"
                  }
#line 587 "bitmap.m"
              }
#line 587 "bitmap.m"
          }
#line 587 "bitmap.m"
      }
#line 585 "bitmap.m"
    if (mercury__bitmap__succeeded)
#line 585 "bitmap.m"
      {
#line 585 "bitmap.m"
        return mercury__bitmap__HeadVar__4_4 = mercury__bitmap__unsafe_bits_3_f_0(mercury__bitmap__FirstBit_6, mercury__bitmap__NumBits_7, mercury__bitmap__BM_5);
      }
#line 585 "bitmap.m"
    else
#line 585 "bitmap.m"
      {
#line 594 "bitmap.m"
        mercury__bitmap__succeeded = (mercury__bitmap__NumBits_7 < (MR_Integer) 0);
#line 595 "bitmap.m"
        if (!(mercury__bitmap__succeeded))
#line 595 "bitmap.m"
          {
#line 595 "bitmap.m"
            MR_Integer mercury__bitmap__V_12_12;

#line 171 "int.opt"
{
#define MR_PROC_LABEL mercury__bitmap__bits_3_f_0

	MR_Integer Bits;

		{
#line 171 "int.opt"

    Bits = ML_BITS_PER_INT;

#line 12059 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__V_12_12  = Bits;
#line 171 "int.opt"
}
#line 595 "bitmap.m"
            mercury__bitmap__succeeded = (mercury__bitmap__NumBits_7 > mercury__bitmap__V_12_12);
#line 595 "bitmap.m"
          }
#line 585 "bitmap.m"
        if (mercury__bitmap__succeeded)
#line 598 "bitmap.m"
          {
#line 598 "bitmap.m"
            MR_Word mercury__bitmap__TypeCtorInfo_4_33 = (MR_Word) &mercury__bitmap__bitmap__type_ctor_info_bitmap_error_0;
#line 598 "bitmap.m"
            MR_Word mercury__bitmap__V_32_32 = (MR_Word) ((MR_Box) ((MR_String) "bitmap.bits: number of bits must be between 0 and \140int.bits_per_int\'."));

#line 2191 "bitmap.m"
            {
#line 2191 "bitmap.m"
              mercury__exception__throw_1_p_0(mercury__bitmap__TypeCtorInfo_4_33, ((MR_Box) (mercury__bitmap__V_32_32)));
            }
#line 598 "bitmap.m"
          }
#line 585 "bitmap.m"
        else
#line 601 "bitmap.m"
          {
#line 601 "bitmap.m"
            MR_Word mercury__bitmap__TypeCtorInfo_19_19 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 585 "bitmap.m"
            MR_Box mercury__bitmap__conv0_HeadVar__4_4;

#line 585 "bitmap.m"
            {
#line 585 "bitmap.m"
              mercury__bitmap__conv0_HeadVar__4_4 = mercury__bitmap__throw_bounds_error_3_f_0(mercury__bitmap__TypeCtorInfo_19_19, mercury__bitmap__BM_5, (MR_String) "bitmap.bits", mercury__bitmap__FirstBit_6);
            }
#line 585 "bitmap.m"
            mercury__bitmap__HeadVar__4_4 = ((MR_Integer) mercury__bitmap__conv0_HeadVar__4_4);
#line 601 "bitmap.m"
          }
#line 585 "bitmap.m"
      }
#line 585 "bitmap.m"
    return mercury__bitmap__HeadVar__4_4;
#line 585 "bitmap.m"
  }
#line 184 "bitmap.m"
}

#line 171 "bitmap.m"
MR_Box MR_CALL 
mercury__bitmap__f_117_110_115_97_102_101_95_98_105_116_32_58_61_3_f_0(
#line 171 "bitmap.m"
  MR_Integer mercury__bitmap__I_1,
#line 171 "bitmap.m"
  MR_Box mercury__bitmap__BM_2,
#line 171 "bitmap.m"
  MR_Word mercury__bitmap__HeadVar__3_3)
#line 171 "bitmap.m"
{
#line 580 "bitmap.m"
  {
#line 580 "bitmap.m"
    MR_bool mercury__bitmap__succeeded;
#line 580 "bitmap.m"
    MR_Box mercury__bitmap__HeadVar__4_4;

#line 580 "bitmap.m"
    if ((mercury__bitmap__HeadVar__3_3 == (MR_Integer) 0))
#line 581 "bitmap.m"
      {
#line 581 "bitmap.m"
        return mercury__bitmap__HeadVar__4_4 = mercury__bitmap__unsafe_clear_2_f_0(mercury__bitmap__BM_2, mercury__bitmap__I_1);
      }
#line 580 "bitmap.m"
    else
#line 580 "bitmap.m"
      {
#line 580 "bitmap.m"
        return mercury__bitmap__HeadVar__4_4 = mercury__bitmap__unsafe_set_2_f_0(mercury__bitmap__BM_2, mercury__bitmap__I_1);
      }
#line 580 "bitmap.m"
    return mercury__bitmap__HeadVar__4_4;
#line 580 "bitmap.m"
  }
#line 171 "bitmap.m"
}

#line 168 "bitmap.m"
MR_Box MR_CALL 
mercury__bitmap__f_98_105_116_32_58_61_3_f_0(
#line 168 "bitmap.m"
  MR_Integer mercury__bitmap__I_6,
#line 168 "bitmap.m"
  MR_Box mercury__bitmap__BM_5,
#line 168 "bitmap.m"
  MR_Word mercury__bitmap__B_7)
#line 168 "bitmap.m"
{
#line 574 "bitmap.m"
  {
#line 574 "bitmap.m"
    MR_bool mercury__bitmap__succeeded = ((MR_Integer) 0 <= mercury__bitmap__I_6);
#line 574 "bitmap.m"
    MR_Box mercury__bitmap__HeadVar__4_4;
#line 553 "bitmap.m"
    MR_Integer mercury__bitmap__V_13_13;

#line 553 "bitmap.m"
    if (mercury__bitmap__succeeded)
#line 553 "bitmap.m"
      {
#line 1813 "bitmap.m"
{
#define MR_PROC_LABEL mercury__bitmap__f_98_105_116_32_58_61_3_f_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr) mercury__bitmap__BM_5 ;
		{
#line 1813 "bitmap.m"

    NumBits = BM->num_bits;

#line 12189 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__V_13_13  = NumBits;
#line 1813 "bitmap.m"
}
#line 553 "bitmap.m"
        mercury__bitmap__succeeded = (mercury__bitmap__I_6 < mercury__bitmap__V_13_13);
#line 553 "bitmap.m"
      }
#line 574 "bitmap.m"
    if (mercury__bitmap__succeeded)
#line 580 "bitmap.m"
      if ((mercury__bitmap__B_7 == (MR_Integer) 0))
#line 581 "bitmap.m"
        {
#line 581 "bitmap.m"
          return mercury__bitmap__HeadVar__4_4 = mercury__bitmap__unsafe_clear_2_f_0(mercury__bitmap__BM_5, mercury__bitmap__I_6);
        }
#line 580 "bitmap.m"
      else
#line 580 "bitmap.m"
        {
#line 580 "bitmap.m"
          return mercury__bitmap__HeadVar__4_4 = mercury__bitmap__unsafe_set_2_f_0(mercury__bitmap__BM_5, mercury__bitmap__I_6);
        }
#line 574 "bitmap.m"
    else
#line 577 "bitmap.m"
      {
#line 577 "bitmap.m"
        MR_Word mercury__bitmap__TypeCtorInfo_9_9 = (MR_Word) &mercury__bitmap__bitmap__type_ctor_info_bitmap_0;
#line 574 "bitmap.m"
        MR_Box mercury__bitmap__conv0_HeadVar__4_4;

#line 574 "bitmap.m"
        {
#line 574 "bitmap.m"
          mercury__bitmap__conv0_HeadVar__4_4 = mercury__bitmap__throw_bounds_error_3_f_0(mercury__bitmap__TypeCtorInfo_9_9, mercury__bitmap__BM_5, (MR_String) "bitmap.\'bit :=\'", mercury__bitmap__I_6);
        }
#line 574 "bitmap.m"
        mercury__bitmap__HeadVar__4_4 = ((MR_Box) mercury__bitmap__conv0_HeadVar__4_4);
#line 577 "bitmap.m"
      }
#line 574 "bitmap.m"
    return mercury__bitmap__HeadVar__4_4;
#line 574 "bitmap.m"
  }
#line 168 "bitmap.m"
}

#line 165 "bitmap.m"
MR_Word MR_CALL 
mercury__bitmap__unsafe_bit_2_f_0(
#line 165 "bitmap.m"
  MR_Integer mercury__bitmap__I_5,
#line 165 "bitmap.m"
  MR_Box mercury__bitmap__BM_4)
#line 165 "bitmap.m"
{
#line 571 "bitmap.m"
  {
#line 571 "bitmap.m"
    MR_bool mercury__bitmap__succeeded;
#line 571 "bitmap.m"
    MR_Word mercury__bitmap__HeadVar__3_3;

#line 817 "bitmap.m"
    {
#line 817 "bitmap.m"
      mercury__bitmap__succeeded = mercury__bitmap__unsafe_is_clear_2_p_0(mercury__bitmap__BM_4, mercury__bitmap__I_5);
    }
#line 817 "bitmap.m"
    mercury__bitmap__succeeded = !(mercury__bitmap__succeeded);
#line 571 "bitmap.m"
    if (mercury__bitmap__succeeded)
#line 571 "bitmap.m"
      mercury__bitmap__HeadVar__3_3 = (MR_Integer) 1;
#line 571 "bitmap.m"
    else
#line 571 "bitmap.m"
      mercury__bitmap__HeadVar__3_3 = (MR_Integer) 0;
#line 571 "bitmap.m"
    return mercury__bitmap__HeadVar__3_3;
#line 571 "bitmap.m"
  }
#line 165 "bitmap.m"
}

#line 161 "bitmap.m"
MR_Word MR_CALL 
mercury__bitmap__bit_2_f_0(
#line 161 "bitmap.m"
  MR_Integer mercury__bitmap__I_5,
#line 161 "bitmap.m"
  MR_Box mercury__bitmap__BM_4)
#line 161 "bitmap.m"
{
#line 565 "bitmap.m"
  {
#line 565 "bitmap.m"
    MR_bool mercury__bitmap__succeeded = ((MR_Integer) 0 <= mercury__bitmap__I_5);
#line 565 "bitmap.m"
    MR_Word mercury__bitmap__HeadVar__3_3;
#line 553 "bitmap.m"
    MR_Integer mercury__bitmap__V_11_11;

#line 553 "bitmap.m"
    if (mercury__bitmap__succeeded)
#line 553 "bitmap.m"
      {
#line 1813 "bitmap.m"
{
#define MR_PROC_LABEL mercury__bitmap__bit_2_f_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr) mercury__bitmap__BM_4 ;
		{
#line 1813 "bitmap.m"

    NumBits = BM->num_bits;

#line 12314 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__V_11_11  = NumBits;
#line 1813 "bitmap.m"
}
#line 553 "bitmap.m"
        mercury__bitmap__succeeded = (mercury__bitmap__I_5 < mercury__bitmap__V_11_11);
#line 553 "bitmap.m"
      }
#line 565 "bitmap.m"
    if (mercury__bitmap__succeeded)
#line 571 "bitmap.m"
      {
#line 817 "bitmap.m"
        {
#line 817 "bitmap.m"
          mercury__bitmap__succeeded = mercury__bitmap__unsafe_is_clear_2_p_0(mercury__bitmap__BM_4, mercury__bitmap__I_5);
        }
#line 817 "bitmap.m"
        mercury__bitmap__succeeded = !(mercury__bitmap__succeeded);
#line 571 "bitmap.m"
        if (mercury__bitmap__succeeded)
#line 571 "bitmap.m"
          mercury__bitmap__HeadVar__3_3 = (MR_Integer) 1;
#line 571 "bitmap.m"
        else
#line 571 "bitmap.m"
          mercury__bitmap__HeadVar__3_3 = (MR_Integer) 0;
#line 571 "bitmap.m"
      }
#line 565 "bitmap.m"
    else
#line 568 "bitmap.m"
      {
#line 568 "bitmap.m"
        MR_Word mercury__bitmap__TypeCtorInfo_7_7 = (MR_Word) &mercury__bool__bool__type_ctor_info_bool_0;
#line 565 "bitmap.m"
        MR_Box mercury__bitmap__conv0_HeadVar__3_3;

#line 565 "bitmap.m"
        {
#line 565 "bitmap.m"
          mercury__bitmap__conv0_HeadVar__3_3 = mercury__bitmap__throw_bounds_error_3_f_0(mercury__bitmap__TypeCtorInfo_7_7, mercury__bitmap__BM_4, (MR_String) "bitmap.bit", mercury__bitmap__I_5);
        }
#line 565 "bitmap.m"
        mercury__bitmap__HeadVar__3_3 = ((MR_Word) mercury__bitmap__conv0_HeadVar__3_3);
#line 568 "bitmap.m"
      }
#line 565 "bitmap.m"
    return mercury__bitmap__HeadVar__3_3;
#line 565 "bitmap.m"
  }
#line 161 "bitmap.m"
}

#line 150 "bitmap.m"
MR_Integer MR_CALL 
mercury__bitmap__bits_per_byte_0_f_0(void)
#line 150 "bitmap.m"
{
#line 2039 "bitmap.m"
  {
#line 2039 "bitmap.m"
    MR_bool mercury__bitmap__succeeded;

#line 2039 "bitmap.m"
    return (MR_Integer) 8;
#line 2039 "bitmap.m"
  }
#line 150 "bitmap.m"
}

#line 146 "bitmap.m"
MR_Integer MR_CALL 
mercury__bitmap__det_num_bytes_1_f_0(
#line 146 "bitmap.m"
  MR_Box mercury__bitmap__BM_3)
#line 146 "bitmap.m"
{
#line 1801 "bitmap.m"
  {
#line 1801 "bitmap.m"
    MR_bool mercury__bitmap__succeeded;
#line 1801 "bitmap.m"
    MR_Integer mercury__bitmap__Bytes_4;
#line 1801 "bitmap.m"
    MR_Integer mercury__bitmap__Bytes0_5;
#line 1793 "bitmap.m"
    MR_Integer mercury__bitmap__NumBits_9;
#line 1793 "bitmap.m"
    MR_Integer mercury__bitmap__V_10_10;
#line 1793 "bitmap.m"
    MR_Integer mercury__bitmap__V_12_12;

#line 1813 "bitmap.m"
{
#define MR_PROC_LABEL mercury__bitmap__det_num_bytes_1_f_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr) mercury__bitmap__BM_3 ;
		{
#line 1813 "bitmap.m"

    NumBits = BM->num_bits;

#line 12423 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__NumBits_9  = NumBits;
#line 1813 "bitmap.m"
}
#line 1795 "bitmap.m"
    mercury__bitmap__V_10_10 = (mercury__bitmap__NumBits_9 % (MR_Integer) 8);
#line 1795 "bitmap.m"
    mercury__bitmap__succeeded = (mercury__bitmap__V_10_10 == (MR_Integer) 0);
#line 1793 "bitmap.m"
    if (mercury__bitmap__succeeded)
#line 1793 "bitmap.m"
      {
#line 2039 "bitmap.m"
        mercury__bitmap__V_12_12 = (MR_Integer) 8;
#line 1796 "bitmap.m"
        mercury__bitmap__Bytes0_5 = (mercury__bitmap__NumBits_9 / mercury__bitmap__V_12_12);
#line 1796 "bitmap.m"
        mercury__bitmap__succeeded = MR_TRUE;
#line 1793 "bitmap.m"
      }
#line 1801 "bitmap.m"
    if (mercury__bitmap__succeeded)
#line 1800 "bitmap.m"
      mercury__bitmap__Bytes_4 = mercury__bitmap__Bytes0_5;
#line 1801 "bitmap.m"
    else
#line 1802 "bitmap.m"
      {
#line 1802 "bitmap.m"
        MR_Word mercury__bitmap__TypeCtorInfo_4_18 = (MR_Word) &mercury__bitmap__bitmap__type_ctor_info_bitmap_error_0;
#line 1802 "bitmap.m"
        MR_Word mercury__bitmap__V_17_17 = (MR_Word) ((MR_Box) ((MR_String) "bitmap.det_num_bytes: bitmap has a partial final byte"));

#line 2191 "bitmap.m"
        {
#line 2191 "bitmap.m"
          mercury__exception__throw_1_p_0(mercury__bitmap__TypeCtorInfo_4_18, ((MR_Box) (mercury__bitmap__V_17_17)));
        }
#line 1802 "bitmap.m"
      }
#line 1801 "bitmap.m"
    return mercury__bitmap__Bytes_4;
#line 1801 "bitmap.m"
  }
#line 146 "bitmap.m"
}

#line 140 "bitmap.m"
MR_bool MR_CALL 
mercury__bitmap__num_bytes_1_f_0(
#line 140 "bitmap.m"
  MR_Box mercury__bitmap__BM_3,
#line 140 "bitmap.m"
  MR_Integer * mercury__bitmap__Bytes_4)
#line 140 "bitmap.m"
{
#line 1793 "bitmap.m"
  {
#line 1793 "bitmap.m"
    MR_bool mercury__bitmap__succeeded;
#line 1793 "bitmap.m"
    MR_Integer mercury__bitmap__NumBits_5;
#line 1793 "bitmap.m"
    MR_Integer mercury__bitmap__V_6_6;
#line 1793 "bitmap.m"
    MR_Integer mercury__bitmap__V_8_8;

#line 1813 "bitmap.m"
{
#define MR_PROC_LABEL mercury__bitmap__num_bytes_1_f_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr) mercury__bitmap__BM_3 ;
		{
#line 1813 "bitmap.m"

    NumBits = BM->num_bits;

#line 12506 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__NumBits_5  = NumBits;
#line 1813 "bitmap.m"
}
#line 1795 "bitmap.m"
    mercury__bitmap__V_6_6 = (mercury__bitmap__NumBits_5 % (MR_Integer) 8);
#line 1795 "bitmap.m"
    mercury__bitmap__succeeded = (mercury__bitmap__V_6_6 == (MR_Integer) 0);
#line 1793 "bitmap.m"
    if (mercury__bitmap__succeeded)
#line 1793 "bitmap.m"
      {
#line 2039 "bitmap.m"
        mercury__bitmap__V_8_8 = (MR_Integer) 8;
#line 1796 "bitmap.m"
        *mercury__bitmap__Bytes_4 = (mercury__bitmap__NumBits_5 / mercury__bitmap__V_8_8);
#line 1796 "bitmap.m"
        mercury__bitmap__succeeded = MR_TRUE;
#line 1793 "bitmap.m"
      }
#line 1793 "bitmap.m"
    return mercury__bitmap__succeeded;
#line 1793 "bitmap.m"
  }
#line 140 "bitmap.m"
}

#line 133 "bitmap.m"
MR_Integer MR_CALL 
mercury__bitmap__num_bits_1_f_0(
#line 133 "bitmap.m"
  MR_Box mercury__bitmap__BM_1)
#line 133 "bitmap.m"
{
#line 1810 "bitmap.m"
  {
#line 1810 "bitmap.m"
    MR_bool mercury__bitmap__succeeded;
#line 1810 "bitmap.m"
    MR_Integer mercury__bitmap__NumBits_2;

#line 1813 "bitmap.m"
{
#define MR_PROC_LABEL mercury__bitmap__num_bits_1_f_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr) mercury__bitmap__BM_1 ;
		{
#line 1813 "bitmap.m"

    NumBits = BM->num_bits;

#line 12563 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__NumBits_2  = NumBits;
#line 1813 "bitmap.m"
}
#line 1810 "bitmap.m"
    return mercury__bitmap__NumBits_2;
#line 1810 "bitmap.m"
  }
#line 133 "bitmap.m"
}

#line 127 "bitmap.m"
MR_bool MR_CALL 
mercury__bitmap__byte_in_range_2_p_0(
#line 127 "bitmap.m"
  MR_Box mercury__bitmap__BM_3,
#line 127 "bitmap.m"
  MR_Integer mercury__bitmap__I_4)
#line 127 "bitmap.m"
{
#line 560 "bitmap.m"
  {
#line 560 "bitmap.m"
    MR_bool mercury__bitmap__succeeded;
#line 560 "bitmap.m"
    MR_Integer mercury__bitmap__V_5_5;
#line 560 "bitmap.m"
    MR_Integer mercury__bitmap__V_6_6;
#line 560 "bitmap.m"
    MR_Integer mercury__bitmap__V_7_7 = (mercury__bitmap__I_4 * (MR_Integer) 8);
#line 560 "bitmap.m"
    MR_Integer mercury__bitmap__V_14_14;

#line 561 "bitmap.m"
    mercury__bitmap__V_6_6 = (mercury__bitmap__V_7_7 + (MR_Integer) 8);
#line 561 "bitmap.m"
    mercury__bitmap__V_5_5 = (mercury__bitmap__V_6_6 - (MR_Integer) 1);
#line 553 "bitmap.m"
    mercury__bitmap__succeeded = ((MR_Integer) 0 <= mercury__bitmap__V_5_5);
#line 560 "bitmap.m"
    if (mercury__bitmap__succeeded)
#line 560 "bitmap.m"
      {
#line 1813 "bitmap.m"
{
#define MR_PROC_LABEL mercury__bitmap__byte_in_range_2_p_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr) mercury__bitmap__BM_3 ;
		{
#line 1813 "bitmap.m"

    NumBits = BM->num_bits;

#line 12622 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__V_14_14  = NumBits;
#line 1813 "bitmap.m"
}
#line 553 "bitmap.m"
        mercury__bitmap__succeeded = (mercury__bitmap__V_5_5 < mercury__bitmap__V_14_14);
#line 560 "bitmap.m"
      }
#line 560 "bitmap.m"
    return mercury__bitmap__succeeded;
#line 560 "bitmap.m"
  }
#line 127 "bitmap.m"
}

#line 121 "bitmap.m"
MR_bool MR_CALL 
mercury__bitmap__in_range_2_p_0(
#line 121 "bitmap.m"
  MR_Box mercury__bitmap__BM_3,
#line 121 "bitmap.m"
  MR_Integer mercury__bitmap__I_4)
#line 121 "bitmap.m"
{
#line 553 "bitmap.m"
  {
#line 553 "bitmap.m"
    MR_bool mercury__bitmap__succeeded = ((MR_Integer) 0 <= mercury__bitmap__I_4);
#line 553 "bitmap.m"
    MR_Integer mercury__bitmap__V_6_6;

#line 553 "bitmap.m"
    if (mercury__bitmap__succeeded)
#line 553 "bitmap.m"
      {
#line 1813 "bitmap.m"
{
#define MR_PROC_LABEL mercury__bitmap__in_range_2_p_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr) mercury__bitmap__BM_3 ;
		{
#line 1813 "bitmap.m"

    NumBits = BM->num_bits;

#line 12673 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__V_6_6  = NumBits;
#line 1813 "bitmap.m"
}
#line 553 "bitmap.m"
        mercury__bitmap__succeeded = (mercury__bitmap__I_4 < mercury__bitmap__V_6_6);
#line 553 "bitmap.m"
      }
#line 553 "bitmap.m"
    return mercury__bitmap__succeeded;
#line 553 "bitmap.m"
  }
#line 121 "bitmap.m"
}

#line 115 "bitmap.m"
MR_Box MR_CALL 
mercury__bitmap__shrink_without_copying_2_f_0(
#line 115 "bitmap.m"
  MR_Box mercury__bitmap__STATE_VARIABLE_BM_0_7,
#line 115 "bitmap.m"
  MR_Integer mercury__bitmap__NewSize_5)
#line 115 "bitmap.m"
{
#line 498 "bitmap.m"
  {
#line 498 "bitmap.m"
    MR_bool mercury__bitmap__succeeded = ((MR_Integer) 0 <= mercury__bitmap__NewSize_5);
#line 498 "bitmap.m"
    MR_Box mercury__bitmap__STATE_VARIABLE_BM_8;
#line 496 "bitmap.m"
    MR_Integer mercury__bitmap__V_10_10;

#line 496 "bitmap.m"
    if (mercury__bitmap__succeeded)
#line 496 "bitmap.m"
      {
#line 1813 "bitmap.m"
{
#define MR_PROC_LABEL mercury__bitmap__shrink_without_copying_2_f_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr) mercury__bitmap__STATE_VARIABLE_BM_0_7 ;
		{
#line 1813 "bitmap.m"

    NumBits = BM->num_bits;

#line 12726 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__V_10_10  = NumBits;
#line 1813 "bitmap.m"
}
#line 496 "bitmap.m"
        mercury__bitmap__succeeded = (mercury__bitmap__NewSize_5 <= mercury__bitmap__V_10_10);
#line 496 "bitmap.m"
      }
#line 498 "bitmap.m"
    if (mercury__bitmap__succeeded)
#line 1845 "bitmap.m"
      {
#line 1848 "bitmap.m"
{
#define MR_PROC_LABEL mercury__bitmap__shrink_without_copying_2_f_0

	MR_BitmapPtr BM0;
	MR_Integer NumBits;
	MR_BitmapPtr BM;

	BM0 = (MR_BitmapPtr) mercury__bitmap__STATE_VARIABLE_BM_0_7 ;
	NumBits =  mercury__bitmap__NewSize_5 ;
		{
#line 1848 "bitmap.m"

    BM = BM0;
    BM->num_bits = NumBits;

#line 12757 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__STATE_VARIABLE_BM_8  = (MR_Box) BM;
#line 1848 "bitmap.m"
}
#line 1845 "bitmap.m"
      }
#line 498 "bitmap.m"
    else
#line 500 "bitmap.m"
      {
#line 500 "bitmap.m"
        MR_Word mercury__bitmap__TypeCtorInfo_14_14 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 500 "bitmap.m"
        MR_Integer mercury__bitmap__V_12_12;
#line 500 "bitmap.m"
        MR_Box mercury__bitmap__conv0_V_12_12;

#line 500 "bitmap.m"
        {
#line 500 "bitmap.m"
          mercury__bitmap__conv0_V_12_12 = mercury__bitmap__throw_bounds_error_3_f_0(mercury__bitmap__TypeCtorInfo_14_14, mercury__bitmap__STATE_VARIABLE_BM_0_7, (MR_String) "bitmap.shrink_without_copying", mercury__bitmap__NewSize_5);
        }
#line 500 "bitmap.m"
        mercury__bitmap__V_12_12 = ((MR_Integer) mercury__bitmap__conv0_V_12_12);
#line 500 "bitmap.m"
      }
#line 498 "bitmap.m"
    return mercury__bitmap__STATE_VARIABLE_BM_8;
#line 498 "bitmap.m"
  }
#line 115 "bitmap.m"
}

#line 110 "bitmap.m"
MR_Box MR_CALL 
mercury__bitmap__resize_3_f_0(
#line 110 "bitmap.m"
  MR_Box mercury__bitmap__STATE_VARIABLE_BM_0_12,
#line 110 "bitmap.m"
  MR_Integer mercury__bitmap__NewSize_6,
#line 110 "bitmap.m"
  MR_Word mercury__bitmap__InitializerBit_7)
#line 110 "bitmap.m"
{
#line 471 "bitmap.m"
  {
#line 471 "bitmap.m"
    MR_bool mercury__bitmap__succeeded = (mercury__bitmap__NewSize_6 <= (MR_Integer) 0);
#line 471 "bitmap.m"
    MR_Box mercury__bitmap__STATE_VARIABLE_BM_13;

#line 471 "bitmap.m"
    if (mercury__bitmap__succeeded)
#line 470 "bitmap.m"
      {
#line 470 "bitmap.m"
        return mercury__bitmap__STATE_VARIABLE_BM_13 = mercury__bitmap__init_2_f_0(mercury__bitmap__NewSize_6, mercury__bitmap__InitializerBit_7);
      }
#line 471 "bitmap.m"
    else
#line 472 "bitmap.m"
      {
#line 472 "bitmap.m"
        MR_Integer mercury__bitmap__OldSize_8;
#line 472 "bitmap.m"
        MR_Integer mercury__bitmap__InitializerByte_9;
#line 472 "bitmap.m"
        MR_Box mercury__bitmap__STATE_VARIABLE_BM_16_16;
#line 472 "bitmap.m"
        MR_Box mercury__bitmap__STATE_VARIABLE_BM_24_24;
#line 472 "bitmap.m"
        MR_Box mercury__bitmap__V_35_35;
#line 472 "bitmap.m"
        MR_Integer mercury__bitmap__V_37_37;
#line 472 "bitmap.m"
        MR_Integer mercury__bitmap__V_38_38;
#line 472 "bitmap.m"
        MR_Integer mercury__bitmap__V_61_61;
#line 472 "bitmap.m"
        MR_Integer mercury__bitmap__V_62_62;

#line 1813 "bitmap.m"
{
#define MR_PROC_LABEL mercury__bitmap__resize_3_f_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr) mercury__bitmap__STATE_VARIABLE_BM_0_12 ;
		{
#line 1813 "bitmap.m"

    NumBits = BM->num_bits;

#line 12854 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__OldSize_8  = NumBits;
#line 1813 "bitmap.m"
}
#line 530 "bitmap.m"
        if ((mercury__bitmap__InitializerBit_7 == (MR_Integer) 0))
#line 530 "bitmap.m"
          mercury__bitmap__InitializerByte_9 = (MR_Integer) 0;
#line 530 "bitmap.m"
        else
#line 531 "bitmap.m"
          mercury__bitmap__InitializerByte_9 = (MR_Integer) -1;
#line 1967 "bitmap.m"
{
#define MR_PROC_LABEL mercury__bitmap__resize_3_f_0

	MR_Integer N;
	MR_BitmapPtr BM;

	N =  mercury__bitmap__NewSize_6 ;
		{
#line 1967 "bitmap.m"

    MR_allocate_bitmap_msg(BM, N, MR_ALLOC_ID);

#line 12882 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__V_35_35  = (MR_Box) BM;
#line 1967 "bitmap.m"
}
#line 1813 "bitmap.m"
{
#define MR_PROC_LABEL mercury__bitmap__resize_3_f_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr) mercury__bitmap__STATE_VARIABLE_BM_0_12 ;
		{
#line 1813 "bitmap.m"

    NumBits = BM->num_bits;

#line 12902 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__V_38_38  = NumBits;
#line 1813 "bitmap.m"
}
#line 85 "int.opt"
        mercury__bitmap__succeeded = (mercury__bitmap__V_38_38 < mercury__bitmap__NewSize_6);
#line 88 "int.opt"
        if (mercury__bitmap__succeeded)
#line 87 "int.opt"
          mercury__bitmap__V_37_37 = mercury__bitmap__V_38_38;
#line 88 "int.opt"
        else
#line 89 "int.opt"
          mercury__bitmap__V_37_37 = mercury__bitmap__NewSize_6;
#line 928 "bitmap.m"
        {
#line 928 "bitmap.m"
          mercury__bitmap__STATE_VARIABLE_BM_16_16 = mercury__bitmap__copy_bits_6_f_0((MR_Integer) 0, mercury__bitmap__STATE_VARIABLE_BM_0_12, (MR_Integer) 0, mercury__bitmap__V_35_35, (MR_Integer) 0, mercury__bitmap__V_37_37);
        }
#line 475 "bitmap.m"
        mercury__bitmap__succeeded = (mercury__bitmap__NewSize_6 > mercury__bitmap__OldSize_8);
#line 487 "bitmap.m"
        if (mercury__bitmap__succeeded)
#line 478 "bitmap.m"
          {
#line 478 "bitmap.m"
            MR_Integer mercury__bitmap__OldLastByteIndex_10;
#line 478 "bitmap.m"
            MR_Integer mercury__bitmap__NewLastByteIndex_11;
#line 478 "bitmap.m"
            MR_Box mercury__bitmap__STATE_VARIABLE_BM_17_17;
#line 478 "bitmap.m"
            MR_Integer mercury__bitmap__V_18_18 = (mercury__bitmap__OldSize_8 - (MR_Integer) 1);
#line 478 "bitmap.m"
            MR_Integer mercury__bitmap__V_20_20;
#line 478 "bitmap.m"
            MR_Integer mercury__bitmap__V_22_22;

#line 477 "bitmap.m"
            {
#line 477 "bitmap.m"
              mercury__bitmap__STATE_VARIABLE_BM_17_17 = mercury__bitmap__set_trailing_bits_in_byte_3_f_0(mercury__bitmap__STATE_VARIABLE_BM_16_16, mercury__bitmap__V_18_18, mercury__bitmap__InitializerByte_9);
            }
#line 479 "bitmap.m"
            mercury__bitmap__V_20_20 = (mercury__bitmap__OldSize_8 - (MR_Integer) 1);
#line 2048 "bitmap.m"
            mercury__bitmap__succeeded = (mercury__bitmap__V_20_20 < (MR_Integer) 0);
#line 2047 "bitmap.m"
            if (mercury__bitmap__succeeded)
#line 2047 "bitmap.m"
              mercury__bitmap__OldLastByteIndex_10 = (MR_Integer) -1;
#line 2047 "bitmap.m"
            else
#line 2051 "bitmap.m"
              {
#line 2047 "bitmap.m"
                mercury__bitmap__OldLastByteIndex_10 = (mercury__bitmap__V_20_20 / (MR_Integer) 8);
#line 2051 "bitmap.m"
              }
#line 480 "bitmap.m"
            mercury__bitmap__V_22_22 = (mercury__bitmap__NewSize_6 - (MR_Integer) 1);
#line 2048 "bitmap.m"
            mercury__bitmap__succeeded = (mercury__bitmap__V_22_22 < (MR_Integer) 0);
#line 2047 "bitmap.m"
            if (mercury__bitmap__succeeded)
#line 2047 "bitmap.m"
              mercury__bitmap__NewLastByteIndex_11 = (MR_Integer) -1;
#line 2047 "bitmap.m"
            else
#line 2051 "bitmap.m"
              {
#line 2047 "bitmap.m"
                mercury__bitmap__NewLastByteIndex_11 = (mercury__bitmap__V_22_22 / (MR_Integer) 8);
#line 2051 "bitmap.m"
              }
#line 481 "bitmap.m"
            mercury__bitmap__succeeded = (mercury__bitmap__NewLastByteIndex_11 > mercury__bitmap__OldLastByteIndex_10);
#line 484 "bitmap.m"
            if (mercury__bitmap__succeeded)
#line 482 "bitmap.m"
              {
#line 482 "bitmap.m"
                MR_Integer mercury__bitmap__V_25_25 = (mercury__bitmap__OldLastByteIndex_10 + (MR_Integer) 1);

#line 482 "bitmap.m"
                {
#line 482 "bitmap.m"
                  mercury__bitmap__STATE_VARIABLE_BM_24_24 = mercury__bitmap__initialize_bitmap_bytes_4_f_0(mercury__bitmap__STATE_VARIABLE_BM_17_17, mercury__bitmap__V_25_25, mercury__bitmap__NewLastByteIndex_11, mercury__bitmap__InitializerByte_9);
                }
#line 482 "bitmap.m"
              }
#line 484 "bitmap.m"
            else
#line 482 "bitmap.m"
              mercury__bitmap__STATE_VARIABLE_BM_24_24 = mercury__bitmap__STATE_VARIABLE_BM_17_17;
#line 478 "bitmap.m"
          }
#line 487 "bitmap.m"
        else
#line 482 "bitmap.m"
          mercury__bitmap__STATE_VARIABLE_BM_24_24 = mercury__bitmap__STATE_VARIABLE_BM_16_16;
#line 1813 "bitmap.m"
{
#define MR_PROC_LABEL mercury__bitmap__resize_3_f_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr) mercury__bitmap__STATE_VARIABLE_BM_24_24 ;
		{
#line 1813 "bitmap.m"

    NumBits = BM->num_bits;

#line 13019 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__V_62_62  = NumBits;
#line 1813 "bitmap.m"
}
#line 508 "bitmap.m"
        mercury__bitmap__V_61_61 = (mercury__bitmap__V_62_62 - (MR_Integer) 1);
#line 508 "bitmap.m"
        {
#line 508 "bitmap.m"
          return mercury__bitmap__STATE_VARIABLE_BM_13 = mercury__bitmap__set_trailing_bits_in_byte_3_f_0(mercury__bitmap__STATE_VARIABLE_BM_24_24, mercury__bitmap__V_61_61, (MR_Integer) 0);
        }
#line 472 "bitmap.m"
      }
#line 471 "bitmap.m"
    return mercury__bitmap__STATE_VARIABLE_BM_13;
#line 471 "bitmap.m"
  }
#line 110 "bitmap.m"
}

#line 101 "bitmap.m"
MR_Box MR_CALL 
mercury__bitmap__copy_1_f_0(
#line 101 "bitmap.m"
  MR_Box mercury__bitmap__BM0_1)
#line 101 "bitmap.m"
{
#line 2001 "bitmap.m"
  {
#line 2001 "bitmap.m"
    MR_bool mercury__bitmap__succeeded;
#line 2001 "bitmap.m"
    MR_Box mercury__bitmap__BM_2;

#line 2004 "bitmap.m"
{
#define MR_PROC_LABEL mercury__bitmap__copy_1_f_0

	MR_BitmapPtr BM0;
	MR_BitmapPtr BM;

	BM0 = (MR_BitmapPtr) mercury__bitmap__BM0_1 ;
		{
#line 2004 "bitmap.m"

    MR_allocate_bitmap_msg(BM, BM0->num_bits, MR_ALLOC_ID);
    MR_copy_bitmap(BM, BM0);

#line 13070 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__BM_2  = (MR_Box) BM;
#line 2004 "bitmap.m"
}
#line 2001 "bitmap.m"
    return mercury__bitmap__BM_2;
#line 2001 "bitmap.m"
  }
#line 101 "bitmap.m"
}

#line 95 "bitmap.m"
MR_Box MR_CALL 
mercury__bitmap__new_1_f_0(
#line 95 "bitmap.m"
  MR_Integer mercury__bitmap__N_3)
#line 95 "bitmap.m"
{
#line 451 "bitmap.m"
  {
#line 451 "bitmap.m"
    MR_bool mercury__bitmap__succeeded;
#line 451 "bitmap.m"
    MR_Box mercury__bitmap__HeadVar__2_2;

#line 451 "bitmap.m"
    {
#line 451 "bitmap.m"
      return mercury__bitmap__HeadVar__2_2 = mercury__bitmap__init_2_f_0(mercury__bitmap__N_3, (MR_Integer) 0);
    }
#line 451 "bitmap.m"
    return mercury__bitmap__HeadVar__2_2;
#line 451 "bitmap.m"
  }
#line 95 "bitmap.m"
}

#line 89 "bitmap.m"
MR_Box MR_CALL 
mercury__bitmap__init_1_f_0(
#line 89 "bitmap.m"
  MR_Integer mercury__bitmap__N_3)
#line 89 "bitmap.m"
{
#line 451 "bitmap.m"
  {
#line 451 "bitmap.m"
    MR_bool mercury__bitmap__succeeded;
#line 451 "bitmap.m"
    MR_Box mercury__bitmap__HeadVar__2_2;

#line 451 "bitmap.m"
    {
#line 451 "bitmap.m"
      return mercury__bitmap__HeadVar__2_2 = mercury__bitmap__init_2_f_0(mercury__bitmap__N_3, (MR_Integer) 0);
    }
#line 451 "bitmap.m"
    return mercury__bitmap__HeadVar__2_2;
#line 451 "bitmap.m"
  }
#line 89 "bitmap.m"
}

#line 85 "bitmap.m"
MR_Box MR_CALL 
mercury__bitmap__new_2_f_0(
#line 85 "bitmap.m"
  MR_Integer mercury__bitmap__N_4,
#line 85 "bitmap.m"
  MR_Word mercury__bitmap__B_5)
#line 85 "bitmap.m"
{
#line 462 "bitmap.m"
  {
#line 462 "bitmap.m"
    MR_bool mercury__bitmap__succeeded;
#line 462 "bitmap.m"
    MR_Box mercury__bitmap__HeadVar__3_3;

#line 462 "bitmap.m"
    {
#line 462 "bitmap.m"
      return mercury__bitmap__HeadVar__3_3 = mercury__bitmap__init_2_f_0(mercury__bitmap__N_4, mercury__bitmap__B_5);
    }
#line 462 "bitmap.m"
    return mercury__bitmap__HeadVar__3_3;
#line 462 "bitmap.m"
  }
#line 85 "bitmap.m"
}

#line 77 "bitmap.m"
MR_Box MR_CALL 
mercury__bitmap__init_2_f_0(
#line 77 "bitmap.m"
  MR_Integer mercury__bitmap__N_4,
#line 77 "bitmap.m"
  MR_Word mercury__bitmap__B_5)
#line 77 "bitmap.m"
{
#line 456 "bitmap.m"
  {
#line 456 "bitmap.m"
    MR_bool mercury__bitmap__succeeded = (mercury__bitmap__N_4 < (MR_Integer) 0);
#line 456 "bitmap.m"
    MR_Box mercury__bitmap__BM_6;

#line 456 "bitmap.m"
    if (mercury__bitmap__succeeded)
#line 455 "bitmap.m"
      {
#line 455 "bitmap.m"
        MR_Word mercury__bitmap__TypeCtorInfo_4_19 = (MR_Word) &mercury__bitmap__bitmap__type_ctor_info_bitmap_error_0;
#line 455 "bitmap.m"
        MR_Word mercury__bitmap__V_18_18 = (MR_Word) ((MR_Box) ((MR_String) "bitmap.new: negative size"));

#line 2191 "bitmap.m"
        {
#line 2191 "bitmap.m"
          mercury__exception__throw_1_p_0(mercury__bitmap__TypeCtorInfo_4_19, ((MR_Box) (mercury__bitmap__V_18_18)));
        }
#line 455 "bitmap.m"
      }
#line 456 "bitmap.m"
    else
#line 457 "bitmap.m"
      {
#line 457 "bitmap.m"
        MR_Integer mercury__bitmap__X_8;
#line 457 "bitmap.m"
        MR_Box mercury__bitmap__BM0_9;
#line 457 "bitmap.m"
        MR_Box mercury__bitmap__V_13_13;
#line 457 "bitmap.m"
        MR_Integer mercury__bitmap__V_25_25;
#line 457 "bitmap.m"
        MR_Integer mercury__bitmap__V_26_26;
#line 457 "bitmap.m"
        MR_Integer mercury__bitmap__V_32_32;
#line 457 "bitmap.m"
        MR_Integer mercury__bitmap__V_33_33;

#line 530 "bitmap.m"
        if ((mercury__bitmap__B_5 == (MR_Integer) 0))
#line 530 "bitmap.m"
          mercury__bitmap__X_8 = (MR_Integer) 0;
#line 530 "bitmap.m"
        else
#line 531 "bitmap.m"
          mercury__bitmap__X_8 = (MR_Integer) -1;
#line 1967 "bitmap.m"
{
#define MR_PROC_LABEL mercury__bitmap__init_2_f_0

	MR_Integer N;
	MR_BitmapPtr BM;

	N =  mercury__bitmap__N_4 ;
		{
#line 1967 "bitmap.m"

    MR_allocate_bitmap_msg(BM, N, MR_ALLOC_ID);

#line 13236 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__V_13_13  = (MR_Box) BM;
#line 1967 "bitmap.m"
}
#line 537 "bitmap.m"
        mercury__bitmap__V_26_26 = (mercury__bitmap__N_4 - (MR_Integer) 1);
#line 2048 "bitmap.m"
        mercury__bitmap__succeeded = (mercury__bitmap__V_26_26 < (MR_Integer) 0);
#line 2047 "bitmap.m"
        if (mercury__bitmap__succeeded)
#line 2047 "bitmap.m"
          mercury__bitmap__V_25_25 = (MR_Integer) -1;
#line 2047 "bitmap.m"
        else
#line 2051 "bitmap.m"
          {
#line 2047 "bitmap.m"
            mercury__bitmap__V_25_25 = (mercury__bitmap__V_26_26 / (MR_Integer) 8);
#line 2051 "bitmap.m"
          }
#line 536 "bitmap.m"
        {
#line 536 "bitmap.m"
          mercury__bitmap__BM0_9 = mercury__bitmap__initialize_bitmap_bytes_4_f_0(mercury__bitmap__V_13_13, (MR_Integer) 0, mercury__bitmap__V_25_25, mercury__bitmap__X_8);
        }
#line 1813 "bitmap.m"
{
#define MR_PROC_LABEL mercury__bitmap__init_2_f_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr) mercury__bitmap__BM0_9 ;
		{
#line 1813 "bitmap.m"

    NumBits = BM->num_bits;

#line 13277 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__V_33_33  = NumBits;
#line 1813 "bitmap.m"
}
#line 508 "bitmap.m"
        mercury__bitmap__V_32_32 = (mercury__bitmap__V_33_33 - (MR_Integer) 1);
#line 508 "bitmap.m"
        {
#line 508 "bitmap.m"
          return mercury__bitmap__BM_6 = mercury__bitmap__set_trailing_bits_in_byte_3_f_0(mercury__bitmap__BM0_9, mercury__bitmap__V_32_32, (MR_Integer) 0);
        }
#line 457 "bitmap.m"
      }
#line 456 "bitmap.m"
    return mercury__bitmap__BM_6;
#line 456 "bitmap.m"
  }
#line 77 "bitmap.m"
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

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module bitmap. */
