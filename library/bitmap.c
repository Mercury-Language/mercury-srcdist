/*
** Automatically generated from `bitmap.m'
** by the Mercury compiler,
** version rotd-2014-10-24
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




#line 86 "bitmap.c"
static const MR_Integer mercury__bitmap__bitmap__functor_number_map_bitmap_error_0[1];

#line 89 "bitmap.c"
static const MR_NotagFunctorDesc mercury__bitmap__bitmap__notag_functor_desc_bitmap_error_0;

#line 92 "bitmap.c"
static const MR_EnumFunctorDesc mercury__bitmap__bitmap__enum_functor_desc_copy_direction_0_0;

#line 95 "bitmap.c"
static const MR_EnumFunctorDesc mercury__bitmap__bitmap__enum_functor_desc_copy_direction_0_1;

#line 98 "bitmap.c"
static const MR_EnumFunctorDescPtr mercury__bitmap__bitmap__enum_value_ordered_copy_direction_0[2];

#line 101 "bitmap.c"
static const MR_EnumFunctorDescPtr mercury__bitmap__bitmap__enum_name_ordered_copy_direction_0[2];

#line 104 "bitmap.c"
static const MR_Integer mercury__bitmap__bitmap__functor_number_map_copy_direction_0[2];

#line 107 "bitmap.c"
static const MR_PseudoTypeInfo mercury__bitmap__bitmap__field_types_slice_0_0[3];

#line 110 "bitmap.c"
static const MR_ConstString mercury__bitmap__bitmap__field_names_slice_0_0[3];

#line 113 "bitmap.c"
static const MR_DuFunctorDesc mercury__bitmap__bitmap__du_functor_desc_slice_0_0;

#line 116 "bitmap.c"
static const MR_DuFunctorDescPtr mercury__bitmap__bitmap__du_stag_ordered_slice_0_0[1];

#line 119 "bitmap.c"
static const MR_DuPtagLayout mercury__bitmap__bitmap__du_ptag_ordered_slice_0[1];

#line 122 "bitmap.c"
static const MR_DuFunctorDescPtr mercury__bitmap__bitmap__du_name_ordered_slice_0[1];

#line 125 "bitmap.c"
static const MR_Integer mercury__bitmap__bitmap__functor_number_map_slice_0[1];

#line 128 "bitmap.c"
static MR_bool MR_CALL 
mercury__bitmap____Unify____bit_index_0_0_10001(
#line 131 "bitmap.c"
  MR_Box mercury__bitmap__wrapper_arg_1,
#line 133 "bitmap.c"
  MR_Box mercury__bitmap__wrapper_arg_2);

#line 136 "bitmap.c"
static void MR_CALL 
mercury__bitmap____Compare____bit_index_0_0_10001(
#line 139 "bitmap.c"
  MR_Box * mercury__bitmap__wrapper_arg_1,
#line 141 "bitmap.c"
  MR_Box mercury__bitmap__wrapper_arg_2,
#line 143 "bitmap.c"
  MR_Box mercury__bitmap__wrapper_arg_3);

#line 146 "bitmap.c"
static MR_bool MR_CALL 
mercury__bitmap____Unify____bit_index_in_byte_0_0_10001(
#line 149 "bitmap.c"
  MR_Box mercury__bitmap__wrapper_arg_1,
#line 151 "bitmap.c"
  MR_Box mercury__bitmap__wrapper_arg_2);

#line 154 "bitmap.c"
static void MR_CALL 
mercury__bitmap____Compare____bit_index_in_byte_0_0_10001(
#line 157 "bitmap.c"
  MR_Box * mercury__bitmap__wrapper_arg_1,
#line 159 "bitmap.c"
  MR_Box mercury__bitmap__wrapper_arg_2,
#line 161 "bitmap.c"
  MR_Box mercury__bitmap__wrapper_arg_3);

#line 164 "bitmap.c"
static MR_bool MR_CALL 
mercury__bitmap____Unify____bitmap_0_0_10001(
#line 167 "bitmap.c"
  MR_Box mercury__bitmap__wrapper_arg_1,
#line 169 "bitmap.c"
  MR_Box mercury__bitmap__wrapper_arg_2);

#line 172 "bitmap.c"
static void MR_CALL 
mercury__bitmap____Compare____bitmap_0_0_10001(
#line 175 "bitmap.c"
  MR_Box * mercury__bitmap__wrapper_arg_1,
#line 177 "bitmap.c"
  MR_Box mercury__bitmap__wrapper_arg_2,
#line 179 "bitmap.c"
  MR_Box mercury__bitmap__wrapper_arg_3);

#line 182 "bitmap.c"
static MR_bool MR_CALL 
mercury__bitmap____Unify____bitmap_error_0_0_10001(
#line 185 "bitmap.c"
  MR_Box mercury__bitmap__wrapper_arg_1,
#line 187 "bitmap.c"
  MR_Box mercury__bitmap__wrapper_arg_2);

#line 190 "bitmap.c"
static void MR_CALL 
mercury__bitmap____Compare____bitmap_error_0_0_10001(
#line 193 "bitmap.c"
  MR_Box * mercury__bitmap__wrapper_arg_1,
#line 195 "bitmap.c"
  MR_Box mercury__bitmap__wrapper_arg_2,
#line 197 "bitmap.c"
  MR_Box mercury__bitmap__wrapper_arg_3);

#line 200 "bitmap.c"
static MR_bool MR_CALL 
mercury__bitmap____Unify____byte_0_0_10001(
#line 203 "bitmap.c"
  MR_Box mercury__bitmap__wrapper_arg_1,
#line 205 "bitmap.c"
  MR_Box mercury__bitmap__wrapper_arg_2);

#line 208 "bitmap.c"
static void MR_CALL 
mercury__bitmap____Compare____byte_0_0_10001(
#line 211 "bitmap.c"
  MR_Box * mercury__bitmap__wrapper_arg_1,
#line 213 "bitmap.c"
  MR_Box mercury__bitmap__wrapper_arg_2,
#line 215 "bitmap.c"
  MR_Box mercury__bitmap__wrapper_arg_3);

#line 218 "bitmap.c"
static MR_bool MR_CALL 
mercury__bitmap____Unify____byte_index_0_0_10001(
#line 221 "bitmap.c"
  MR_Box mercury__bitmap__wrapper_arg_1,
#line 223 "bitmap.c"
  MR_Box mercury__bitmap__wrapper_arg_2);

#line 226 "bitmap.c"
static void MR_CALL 
mercury__bitmap____Compare____byte_index_0_0_10001(
#line 229 "bitmap.c"
  MR_Box * mercury__bitmap__wrapper_arg_1,
#line 231 "bitmap.c"
  MR_Box mercury__bitmap__wrapper_arg_2,
#line 233 "bitmap.c"
  MR_Box mercury__bitmap__wrapper_arg_3);

#line 236 "bitmap.c"
static MR_bool MR_CALL 
mercury__bitmap____Unify____copy_direction_0_0_10001(
#line 239 "bitmap.c"
  MR_Box mercury__bitmap__wrapper_arg_1,
#line 241 "bitmap.c"
  MR_Box mercury__bitmap__wrapper_arg_2);

#line 244 "bitmap.c"
static void MR_CALL 
mercury__bitmap____Compare____copy_direction_0_0_10001(
#line 247 "bitmap.c"
  MR_Box * mercury__bitmap__wrapper_arg_1,
#line 249 "bitmap.c"
  MR_Box mercury__bitmap__wrapper_arg_2,
#line 251 "bitmap.c"
  MR_Box mercury__bitmap__wrapper_arg_3);

#line 254 "bitmap.c"
static MR_bool MR_CALL 
mercury__bitmap____Unify____num_bits_0_0_10001(
#line 257 "bitmap.c"
  MR_Box mercury__bitmap__wrapper_arg_1,
#line 259 "bitmap.c"
  MR_Box mercury__bitmap__wrapper_arg_2);

#line 262 "bitmap.c"
static void MR_CALL 
mercury__bitmap____Compare____num_bits_0_0_10001(
#line 265 "bitmap.c"
  MR_Box * mercury__bitmap__wrapper_arg_1,
#line 267 "bitmap.c"
  MR_Box mercury__bitmap__wrapper_arg_2,
#line 269 "bitmap.c"
  MR_Box mercury__bitmap__wrapper_arg_3);

#line 272 "bitmap.c"
static MR_bool MR_CALL 
mercury__bitmap____Unify____num_bytes_0_0_10001(
#line 275 "bitmap.c"
  MR_Box mercury__bitmap__wrapper_arg_1,
#line 277 "bitmap.c"
  MR_Box mercury__bitmap__wrapper_arg_2);

#line 280 "bitmap.c"
static void MR_CALL 
mercury__bitmap____Compare____num_bytes_0_0_10001(
#line 283 "bitmap.c"
  MR_Box * mercury__bitmap__wrapper_arg_1,
#line 285 "bitmap.c"
  MR_Box mercury__bitmap__wrapper_arg_2,
#line 287 "bitmap.c"
  MR_Box mercury__bitmap__wrapper_arg_3);

#line 290 "bitmap.c"
static MR_bool MR_CALL 
mercury__bitmap____Unify____slice_0_0_10001(
#line 293 "bitmap.c"
  MR_Box mercury__bitmap__wrapper_arg_1,
#line 295 "bitmap.c"
  MR_Box mercury__bitmap__wrapper_arg_2);

#line 298 "bitmap.c"
static void MR_CALL 
mercury__bitmap____Compare____slice_0_0_10001(
#line 301 "bitmap.c"
  MR_Box * mercury__bitmap__wrapper_arg_1,
#line 303 "bitmap.c"
  MR_Box mercury__bitmap__wrapper_arg_2,
#line 305 "bitmap.c"
  MR_Box mercury__bitmap__wrapper_arg_3);

#line 308 "bitmap.c"
static MR_bool MR_CALL 
mercury__bitmap____Unify____word_0_0_10001(
#line 311 "bitmap.c"
  MR_Box mercury__bitmap__wrapper_arg_1,
#line 313 "bitmap.c"
  MR_Box mercury__bitmap__wrapper_arg_2);

#line 316 "bitmap.c"
static void MR_CALL 
mercury__bitmap____Compare____word_0_0_10001(
#line 319 "bitmap.c"
  MR_Box * mercury__bitmap__wrapper_arg_1,
#line 321 "bitmap.c"
  MR_Box mercury__bitmap__wrapper_arg_2,
#line 323 "bitmap.c"
  MR_Box mercury__bitmap__wrapper_arg_3);

#line 13 "ops.opt"
static MR_Integer MR_CALL 
mercury__bitmap__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);

#line 133 "list.int"
static void MR_CALL 
mercury__bitmap__foldl__ho12_4_p_in__list_0(
#line 133 "list.int"
  MR_Word mercury__bitmap__HeadVar__2_2,
#line 133 "list.int"
  MR_Integer mercury__bitmap__HeadVar__3_3,
#line 133 "list.int"
  MR_Integer * mercury__bitmap__HeadVar__4_4);

#line 881 "bitmap.m"
static MR_Box MR_CALL 
mercury__bitmap__zip2__ho11_4_f_0(
#line 881 "bitmap.m"
  MR_Integer mercury__bitmap__I_6,
#line 881 "bitmap.m"
  MR_Box mercury__bitmap__BMa_8,
#line 881 "bitmap.m"
  MR_Box mercury__bitmap__BMb_9);

#line 881 "bitmap.m"
static MR_Box MR_CALL 
mercury__bitmap__zip2__ho10_4_f_0(
#line 881 "bitmap.m"
  MR_Integer mercury__bitmap__I_6,
#line 881 "bitmap.m"
  MR_Box mercury__bitmap__BMa_8,
#line 881 "bitmap.m"
  MR_Box mercury__bitmap__BMb_9);

#line 881 "bitmap.m"
static MR_Box MR_CALL 
mercury__bitmap__zip2__ho9_4_f_0(
#line 881 "bitmap.m"
  MR_Integer mercury__bitmap__I_6,
#line 881 "bitmap.m"
  MR_Box mercury__bitmap__BMa_8,
#line 881 "bitmap.m"
  MR_Box mercury__bitmap__BMb_9);

#line 881 "bitmap.m"
static MR_Box MR_CALL 
mercury__bitmap__zip2__ho8_4_f_0(
#line 881 "bitmap.m"
  MR_Integer mercury__bitmap__I_6,
#line 881 "bitmap.m"
  MR_Box mercury__bitmap__BMa_8,
#line 881 "bitmap.m"
  MR_Box mercury__bitmap__BMb_9);

#line 146 "list.int"
static void MR_CALL 
mercury__bitmap__foldl2__ho2_6_p_in__list_0(
#line 146 "list.int"
  MR_Word mercury__bitmap__HeadVar__2_2,
#line 146 "list.int"
  MR_Integer mercury__bitmap__HeadVar__3_3,
#line 146 "list.int"
  MR_Integer * mercury__bitmap__HeadVar__4_4,
#line 146 "list.int"
  MR_Box mercury__bitmap__HeadVar__5_5,
#line 146 "list.int"
  MR_Box * mercury__bitmap__HeadVar__6_6);

#line 2054 "bitmap.m"
static MR_Integer MR_CALL 
mercury__bitmap__set_bits_in_byte_4_f_0(
#line 2054 "bitmap.m"
  MR_Integer mercury__bitmap__Byte0_6,
#line 2054 "bitmap.m"
  MR_Integer mercury__bitmap__FirstBit_7,
#line 2054 "bitmap.m"
  MR_Integer mercury__bitmap__NumBits_8,
#line 2054 "bitmap.m"
  MR_Integer mercury__bitmap__Bits_9);

#line 2039 "bitmap.m"
static MR_Integer MR_CALL 
mercury__bitmap__extract_bits_from_byte_3_f_0(
#line 2039 "bitmap.m"
  MR_Integer mercury__bitmap__Byte_5,
#line 2039 "bitmap.m"
  MR_Integer mercury__bitmap__FirstBit_6,
#line 2039 "bitmap.m"
  MR_Integer mercury__bitmap__NumBits_7);

#line 1883 "bitmap.m"
static MR_Box MR_CALL 
mercury__bitmap__allocate_bitmap_1_f_0(
#line 1883 "bitmap.m"
  MR_Integer mercury__bitmap__N_1);

#line 1762 "bitmap.m"
static MR_Box MR_CALL 
mercury__bitmap__f_110_117_109_95_98_105_116_115_32_58_61_2_f_0(
#line 1762 "bitmap.m"
  MR_Box mercury__bitmap__BM0_1,
#line 1762 "bitmap.m"
  MR_Integer mercury__bitmap__NumBits_2);

#line 1496 "bitmap.m"
static void MR_CALL 
mercury__bitmap__hash_2_5_p_0(
#line 1496 "bitmap.m"
  MR_Box mercury__bitmap__BM_6,
#line 1496 "bitmap.m"
  MR_Integer mercury__bitmap__Index_7,
#line 1496 "bitmap.m"
  MR_Integer mercury__bitmap__Length_8,
#line 1496 "bitmap.m"
  MR_Integer mercury__bitmap__STATE_VARIABLE_HashVal_0_10,
#line 1496 "bitmap.m"
  MR_Integer * mercury__bitmap__STATE_VARIABLE_HashVal_11);

#line 1426 "bitmap.m"
static MR_bool MR_CALL 
mercury__bitmap__hex_chars_to_bitmap_6_p_0(
#line 1426 "bitmap.m"
  MR_String mercury__bitmap__Str_7,
#line 1426 "bitmap.m"
  MR_Integer mercury__bitmap__Index_8,
#line 1426 "bitmap.m"
  MR_Integer mercury__bitmap__End_9,
#line 1426 "bitmap.m"
  MR_Integer mercury__bitmap__ByteIndex_10,
#line 1426 "bitmap.m"
  MR_Box mercury__bitmap__STATE_VARIABLE_BM_0_15,
#line 1426 "bitmap.m"
  MR_Box * mercury__bitmap__STATE_VARIABLE_BM_16);

#line 1390 "bitmap.m"
static void MR_CALL 
mercury__bitmap__to_string_chars_4_p_0(
#line 1390 "bitmap.m"
  MR_Integer mercury__bitmap__Index_5,
#line 1390 "bitmap.m"
  MR_Box mercury__bitmap__BM_6,
#line 1390 "bitmap.m"
  MR_Word mercury__bitmap__STATE_VARIABLE_Chars_0_12,
#line 1390 "bitmap.m"
  MR_Word * mercury__bitmap__STATE_VARIABLE_Chars_13);

#line 1318 "bitmap.m"
static MR_Box MR_CALL 
mercury__bitmap__unsafe_copy_unaligned_bytes_rtol_7_f_0(
#line 1318 "bitmap.m"
  MR_Box mercury__bitmap__SrcBM_9,
#line 1318 "bitmap.m"
  MR_Integer mercury__bitmap__SrcByteIndex_10,
#line 1318 "bitmap.m"
  MR_Integer mercury__bitmap__SrcBitIndex_11,
#line 1318 "bitmap.m"
  MR_Integer mercury__bitmap__PrevSrcByteBits_12,
#line 1318 "bitmap.m"
  MR_Box mercury__bitmap__STATE_VARIABLE_DestBM_0_18,
#line 1318 "bitmap.m"
  MR_Integer mercury__bitmap__DestByteIndex_14,
#line 1318 "bitmap.m"
  MR_Integer mercury__bitmap__NumBytes_15);

#line 1277 "bitmap.m"
static MR_Box MR_CALL 
mercury__bitmap__unsafe_copy_unaligned_bytes_ltor_7_f_0(
#line 1277 "bitmap.m"
  MR_Box mercury__bitmap__SrcBM_9,
#line 1277 "bitmap.m"
  MR_Integer mercury__bitmap__SrcByteIndex_10,
#line 1277 "bitmap.m"
  MR_Integer mercury__bitmap__SrcBitIndex_11,
#line 1277 "bitmap.m"
  MR_Integer mercury__bitmap__PrevSrcByteBits_12,
#line 1277 "bitmap.m"
  MR_Box mercury__bitmap__STATE_VARIABLE_DestBM_0_18,
#line 1277 "bitmap.m"
  MR_Integer mercury__bitmap__DestByteIndex_14,
#line 1277 "bitmap.m"
  MR_Integer mercury__bitmap__NumBytes_15);

#line 1189 "bitmap.m"
static MR_Box MR_CALL 
mercury__bitmap__unsafe_copy_unaligned_bits_6_f_0(
#line 1189 "bitmap.m"
  MR_Integer mercury__bitmap__SameBM_8,
#line 1189 "bitmap.m"
  MR_Box mercury__bitmap__SrcBM_9,
#line 1189 "bitmap.m"
  MR_Integer mercury__bitmap__SrcStartBit_10,
#line 1189 "bitmap.m"
  MR_Box mercury__bitmap__STATE_VARIABLE_DestBM_0_31,
#line 1189 "bitmap.m"
  MR_Integer mercury__bitmap__DestStartBit_12,
#line 1189 "bitmap.m"
  MR_Integer mercury__bitmap__STATE_VARIABLE_NumBits_0_32);

#line 1107 "bitmap.m"
static MR_Box MR_CALL 
mercury__bitmap__unsafe_copy_bytes_6_f_0(
#line 1107 "bitmap.m"
  MR_Integer mercury__bitmap__SameBM_1,
#line 1107 "bitmap.m"
  MR_Box mercury__bitmap__SrcBM_2,
#line 1107 "bitmap.m"
  MR_Integer mercury__bitmap__SrcFirstByteIndex_3,
#line 1107 "bitmap.m"
  MR_Box mercury__bitmap__DestBM0_4,
#line 1107 "bitmap.m"
  MR_Integer mercury__bitmap__DestFirstByteIndex_5,
#line 1107 "bitmap.m"
  MR_Integer mercury__bitmap__NumBytes_6);

#line 956 "bitmap.m"
static MR_Box MR_CALL 
mercury__bitmap__unsafe_copy_bits_6_f_0(
#line 956 "bitmap.m"
  MR_Integer mercury__bitmap__SameBM_8,
#line 956 "bitmap.m"
  MR_Box mercury__bitmap__SrcBM_9,
#line 956 "bitmap.m"
  MR_Integer mercury__bitmap__SrcStartBit_10,
#line 956 "bitmap.m"
  MR_Box mercury__bitmap__STATE_VARIABLE_DestBM_0_30,
#line 956 "bitmap.m"
  MR_Integer mercury__bitmap__DestStartBit_12,
#line 956 "bitmap.m"
  MR_Integer mercury__bitmap__STATE_VARIABLE_NumBits_0_31);

#line 678 "bitmap.m"
static void MR_CALL 
mercury__bitmap__set_bits_in_byte_index_6_p_0(
#line 678 "bitmap.m"
  MR_Integer mercury__bitmap__ByteIndex_7,
#line 678 "bitmap.m"
  MR_Integer mercury__bitmap__LastBitIndex_8,
#line 678 "bitmap.m"
  MR_Integer mercury__bitmap__NumBitsThisByte_9,
#line 678 "bitmap.m"
  MR_Integer mercury__bitmap__Bits_10,
#line 678 "bitmap.m"
  MR_Box mercury__bitmap__STATE_VARIABLE_BM_0_13,
#line 678 "bitmap.m"
  MR_Box * mercury__bitmap__STATE_VARIABLE_BM_14);

#line 620 "bitmap.m"
static void MR_CALL 
mercury__bitmap__extract_bits_from_byte_index_6_p_0(
#line 620 "bitmap.m"
  MR_Integer mercury__bitmap__ByteIndex_7,
#line 620 "bitmap.m"
  MR_Integer mercury__bitmap__FirstBitIndex_8,
#line 620 "bitmap.m"
  MR_Integer mercury__bitmap__NumBitsThisByte_9,
#line 620 "bitmap.m"
  MR_Box mercury__bitmap__BM_10,
#line 620 "bitmap.m"
  MR_Integer mercury__bitmap__STATE_VARIABLE_Bits_0_13,
#line 620 "bitmap.m"
  MR_Integer * mercury__bitmap__STATE_VARIABLE_Bits_14);

#line 523 "bitmap.m"
static MR_Box MR_CALL 
mercury__bitmap__initialize_bitmap_bytes_4_f_0(
#line 523 "bitmap.m"
  MR_Box mercury__bitmap__BM_6,
#line 523 "bitmap.m"
  MR_Integer mercury__bitmap__ByteIndex_7,
#line 523 "bitmap.m"
  MR_Integer mercury__bitmap__LastByteIndex_8,
#line 523 "bitmap.m"
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



#line 972 "bitmap.c"
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

#line 993 "bitmap.c"
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

#line 1014 "bitmap.c"
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

#line 1035 "bitmap.c"
static const MR_Integer mercury__bitmap__bitmap__functor_number_map_bitmap_error_0[1] = {
  (MR_Integer) 0
};

#line 1040 "bitmap.c"
static const MR_NotagFunctorDesc mercury__bitmap__bitmap__notag_functor_desc_bitmap_error_0 = {
  (MR_String) "bitmap_error",
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  NULL
};

#line 1047 "bitmap.c"
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

#line 1068 "bitmap.c"
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

#line 1089 "bitmap.c"
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

#line 1110 "bitmap.c"
static const MR_EnumFunctorDesc mercury__bitmap__bitmap__enum_functor_desc_copy_direction_0_0 = {
  (MR_String) "left_to_right",
  (MR_Integer) 0
};

#line 1116 "bitmap.c"
static const MR_EnumFunctorDesc mercury__bitmap__bitmap__enum_functor_desc_copy_direction_0_1 = {
  (MR_String) "right_to_left",
  (MR_Integer) 1
};

#line 1122 "bitmap.c"
static const MR_EnumFunctorDescPtr mercury__bitmap__bitmap__enum_value_ordered_copy_direction_0[2] = {
  &mercury__bitmap__bitmap__enum_functor_desc_copy_direction_0_0,
  &mercury__bitmap__bitmap__enum_functor_desc_copy_direction_0_1
};

#line 1128 "bitmap.c"
static const MR_EnumFunctorDescPtr mercury__bitmap__bitmap__enum_name_ordered_copy_direction_0[2] = {
  &mercury__bitmap__bitmap__enum_functor_desc_copy_direction_0_0,
  &mercury__bitmap__bitmap__enum_functor_desc_copy_direction_0_1
};

#line 1134 "bitmap.c"
static const MR_Integer mercury__bitmap__bitmap__functor_number_map_copy_direction_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1140 "bitmap.c"
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

#line 1161 "bitmap.c"
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

#line 1182 "bitmap.c"
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

#line 1203 "bitmap.c"
static const MR_PseudoTypeInfo mercury__bitmap__bitmap__field_types_slice_0_0[3] = {
  (MR_PseudoTypeInfo) &mercury__bitmap__bitmap__type_ctor_info_bitmap_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1210 "bitmap.c"
static const MR_ConstString mercury__bitmap__bitmap__field_names_slice_0_0[3] = {
  (MR_String) "slice_bitmap_field",
  (MR_String) "slice_start_bit_index_field",
  (MR_String) "slice_num_bits_field"
};

#line 1217 "bitmap.c"
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

#line 1232 "bitmap.c"
static const MR_DuFunctorDescPtr mercury__bitmap__bitmap__du_stag_ordered_slice_0_0[1] = {
  &mercury__bitmap__bitmap__du_functor_desc_slice_0_0
};

#line 1237 "bitmap.c"
static const MR_DuPtagLayout mercury__bitmap__bitmap__du_ptag_ordered_slice_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__bitmap__bitmap__du_stag_ordered_slice_0_0
  }
};

#line 1246 "bitmap.c"
static const MR_DuFunctorDescPtr mercury__bitmap__bitmap__du_name_ordered_slice_0[1] = {
  &mercury__bitmap__bitmap__du_functor_desc_slice_0_0
};

#line 1251 "bitmap.c"
static const MR_Integer mercury__bitmap__bitmap__functor_number_map_slice_0[1] = {
  (MR_Integer) 0
};

#line 1256 "bitmap.c"
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

#line 1277 "bitmap.c"
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

#line 1298 "bitmap.c"
static MR_bool MR_CALL 
mercury__bitmap____Unify____bit_index_0_0_10001(
#line 1301 "bitmap.c"
  MR_Box mercury__bitmap__wrapper_arg_1,
#line 1303 "bitmap.c"
  MR_Box mercury__bitmap__wrapper_arg_2)
#line 1305 "bitmap.c"
{
#line 1307 "bitmap.c"
  {
#line 1309 "bitmap.c"
    MR_bool mercury__bitmap__succeeded;

#line 1312 "bitmap.c"
    {
#line 1314 "bitmap.c"
      mercury__bitmap__succeeded = mercury__bitmap____Unify____bit_index_0_0(((MR_Integer) mercury__bitmap__wrapper_arg_1), ((MR_Integer) mercury__bitmap__wrapper_arg_2));
    }
#line 1317 "bitmap.c"
    return mercury__bitmap__succeeded;
#line 1319 "bitmap.c"
  }
#line 1321 "bitmap.c"
}

#line 1324 "bitmap.c"
static void MR_CALL 
mercury__bitmap____Compare____bit_index_0_0_10001(
#line 1327 "bitmap.c"
  MR_Box * mercury__bitmap__wrapper_arg_1,
#line 1329 "bitmap.c"
  MR_Box mercury__bitmap__wrapper_arg_2,
#line 1331 "bitmap.c"
  MR_Box mercury__bitmap__wrapper_arg_3)
#line 1333 "bitmap.c"
{
#line 1335 "bitmap.c"
  {
#line 1337 "bitmap.c"
    MR_Word mercury__bitmap__conv0_HeadVar__1_1;

#line 1340 "bitmap.c"
    {
#line 1342 "bitmap.c"
      mercury__bitmap____Compare____bit_index_0_0(&mercury__bitmap__conv0_HeadVar__1_1, ((MR_Integer) mercury__bitmap__wrapper_arg_2), ((MR_Integer) mercury__bitmap__wrapper_arg_3));
    }
#line 1345 "bitmap.c"
    *mercury__bitmap__wrapper_arg_1 = ((MR_Box) (mercury__bitmap__conv0_HeadVar__1_1));
#line 1347 "bitmap.c"
  }
#line 1349 "bitmap.c"
}

#line 1352 "bitmap.c"
static MR_bool MR_CALL 
mercury__bitmap____Unify____bit_index_in_byte_0_0_10001(
#line 1355 "bitmap.c"
  MR_Box mercury__bitmap__wrapper_arg_1,
#line 1357 "bitmap.c"
  MR_Box mercury__bitmap__wrapper_arg_2)
#line 1359 "bitmap.c"
{
#line 1361 "bitmap.c"
  {
#line 1363 "bitmap.c"
    MR_bool mercury__bitmap__succeeded;

#line 1366 "bitmap.c"
    {
#line 1368 "bitmap.c"
      mercury__bitmap__succeeded = mercury__bitmap____Unify____bit_index_in_byte_0_0(((MR_Integer) mercury__bitmap__wrapper_arg_1), ((MR_Integer) mercury__bitmap__wrapper_arg_2));
    }
#line 1371 "bitmap.c"
    return mercury__bitmap__succeeded;
#line 1373 "bitmap.c"
  }
#line 1375 "bitmap.c"
}

#line 1378 "bitmap.c"
static void MR_CALL 
mercury__bitmap____Compare____bit_index_in_byte_0_0_10001(
#line 1381 "bitmap.c"
  MR_Box * mercury__bitmap__wrapper_arg_1,
#line 1383 "bitmap.c"
  MR_Box mercury__bitmap__wrapper_arg_2,
#line 1385 "bitmap.c"
  MR_Box mercury__bitmap__wrapper_arg_3)
#line 1387 "bitmap.c"
{
#line 1389 "bitmap.c"
  {
#line 1391 "bitmap.c"
    MR_Word mercury__bitmap__conv0_HeadVar__1_1;

#line 1394 "bitmap.c"
    {
#line 1396 "bitmap.c"
      mercury__bitmap____Compare____bit_index_in_byte_0_0(&mercury__bitmap__conv0_HeadVar__1_1, ((MR_Integer) mercury__bitmap__wrapper_arg_2), ((MR_Integer) mercury__bitmap__wrapper_arg_3));
    }
#line 1399 "bitmap.c"
    *mercury__bitmap__wrapper_arg_1 = ((MR_Box) (mercury__bitmap__conv0_HeadVar__1_1));
#line 1401 "bitmap.c"
  }
#line 1403 "bitmap.c"
}

#line 1406 "bitmap.c"
static MR_bool MR_CALL 
mercury__bitmap____Unify____bitmap_0_0_10001(
#line 1409 "bitmap.c"
  MR_Box mercury__bitmap__wrapper_arg_1,
#line 1411 "bitmap.c"
  MR_Box mercury__bitmap__wrapper_arg_2)
#line 1413 "bitmap.c"
{
#line 1415 "bitmap.c"
  {
#line 1417 "bitmap.c"
    MR_bool mercury__bitmap__succeeded;

#line 1420 "bitmap.c"
    {
#line 1422 "bitmap.c"
      mercury__bitmap__succeeded = mercury__bitmap____Unify____bitmap_0_0(((MR_Box) mercury__bitmap__wrapper_arg_1), ((MR_Box) mercury__bitmap__wrapper_arg_2));
    }
#line 1425 "bitmap.c"
    return mercury__bitmap__succeeded;
#line 1427 "bitmap.c"
  }
#line 1429 "bitmap.c"
}

#line 1432 "bitmap.c"
static void MR_CALL 
mercury__bitmap____Compare____bitmap_0_0_10001(
#line 1435 "bitmap.c"
  MR_Box * mercury__bitmap__wrapper_arg_1,
#line 1437 "bitmap.c"
  MR_Box mercury__bitmap__wrapper_arg_2,
#line 1439 "bitmap.c"
  MR_Box mercury__bitmap__wrapper_arg_3)
#line 1441 "bitmap.c"
{
#line 1443 "bitmap.c"
  {
#line 1445 "bitmap.c"
    MR_Word mercury__bitmap__conv0_HeadVar__1_1;

#line 1448 "bitmap.c"
    {
#line 1450 "bitmap.c"
      mercury__bitmap____Compare____bitmap_0_0(&mercury__bitmap__conv0_HeadVar__1_1, ((MR_Box) mercury__bitmap__wrapper_arg_2), ((MR_Box) mercury__bitmap__wrapper_arg_3));
    }
#line 1453 "bitmap.c"
    *mercury__bitmap__wrapper_arg_1 = ((MR_Box) (mercury__bitmap__conv0_HeadVar__1_1));
#line 1455 "bitmap.c"
  }
#line 1457 "bitmap.c"
}

#line 1460 "bitmap.c"
static MR_bool MR_CALL 
mercury__bitmap____Unify____bitmap_error_0_0_10001(
#line 1463 "bitmap.c"
  MR_Box mercury__bitmap__wrapper_arg_1,
#line 1465 "bitmap.c"
  MR_Box mercury__bitmap__wrapper_arg_2)
#line 1467 "bitmap.c"
{
#line 1469 "bitmap.c"
  {
#line 1471 "bitmap.c"
    MR_bool mercury__bitmap__succeeded;

#line 1474 "bitmap.c"
    {
#line 1476 "bitmap.c"
      mercury__bitmap__succeeded = mercury__bitmap____Unify____bitmap_error_0_0(((MR_Word) mercury__bitmap__wrapper_arg_1), ((MR_Word) mercury__bitmap__wrapper_arg_2));
    }
#line 1479 "bitmap.c"
    return mercury__bitmap__succeeded;
#line 1481 "bitmap.c"
  }
#line 1483 "bitmap.c"
}

#line 1486 "bitmap.c"
static void MR_CALL 
mercury__bitmap____Compare____bitmap_error_0_0_10001(
#line 1489 "bitmap.c"
  MR_Box * mercury__bitmap__wrapper_arg_1,
#line 1491 "bitmap.c"
  MR_Box mercury__bitmap__wrapper_arg_2,
#line 1493 "bitmap.c"
  MR_Box mercury__bitmap__wrapper_arg_3)
#line 1495 "bitmap.c"
{
#line 1497 "bitmap.c"
  {
#line 1499 "bitmap.c"
    MR_Word mercury__bitmap__conv0_HeadVar__1_1;

#line 1502 "bitmap.c"
    {
#line 1504 "bitmap.c"
      mercury__bitmap____Compare____bitmap_error_0_0(&mercury__bitmap__conv0_HeadVar__1_1, ((MR_Word) mercury__bitmap__wrapper_arg_2), ((MR_Word) mercury__bitmap__wrapper_arg_3));
    }
#line 1507 "bitmap.c"
    *mercury__bitmap__wrapper_arg_1 = ((MR_Box) (mercury__bitmap__conv0_HeadVar__1_1));
#line 1509 "bitmap.c"
  }
#line 1511 "bitmap.c"
}

#line 1514 "bitmap.c"
static MR_bool MR_CALL 
mercury__bitmap____Unify____byte_0_0_10001(
#line 1517 "bitmap.c"
  MR_Box mercury__bitmap__wrapper_arg_1,
#line 1519 "bitmap.c"
  MR_Box mercury__bitmap__wrapper_arg_2)
#line 1521 "bitmap.c"
{
#line 1523 "bitmap.c"
  {
#line 1525 "bitmap.c"
    MR_bool mercury__bitmap__succeeded;

#line 1528 "bitmap.c"
    {
#line 1530 "bitmap.c"
      mercury__bitmap__succeeded = mercury__bitmap____Unify____byte_0_0(((MR_Integer) mercury__bitmap__wrapper_arg_1), ((MR_Integer) mercury__bitmap__wrapper_arg_2));
    }
#line 1533 "bitmap.c"
    return mercury__bitmap__succeeded;
#line 1535 "bitmap.c"
  }
#line 1537 "bitmap.c"
}

#line 1540 "bitmap.c"
static void MR_CALL 
mercury__bitmap____Compare____byte_0_0_10001(
#line 1543 "bitmap.c"
  MR_Box * mercury__bitmap__wrapper_arg_1,
#line 1545 "bitmap.c"
  MR_Box mercury__bitmap__wrapper_arg_2,
#line 1547 "bitmap.c"
  MR_Box mercury__bitmap__wrapper_arg_3)
#line 1549 "bitmap.c"
{
#line 1551 "bitmap.c"
  {
#line 1553 "bitmap.c"
    MR_Word mercury__bitmap__conv0_HeadVar__1_1;

#line 1556 "bitmap.c"
    {
#line 1558 "bitmap.c"
      mercury__bitmap____Compare____byte_0_0(&mercury__bitmap__conv0_HeadVar__1_1, ((MR_Integer) mercury__bitmap__wrapper_arg_2), ((MR_Integer) mercury__bitmap__wrapper_arg_3));
    }
#line 1561 "bitmap.c"
    *mercury__bitmap__wrapper_arg_1 = ((MR_Box) (mercury__bitmap__conv0_HeadVar__1_1));
#line 1563 "bitmap.c"
  }
#line 1565 "bitmap.c"
}

#line 1568 "bitmap.c"
static MR_bool MR_CALL 
mercury__bitmap____Unify____byte_index_0_0_10001(
#line 1571 "bitmap.c"
  MR_Box mercury__bitmap__wrapper_arg_1,
#line 1573 "bitmap.c"
  MR_Box mercury__bitmap__wrapper_arg_2)
#line 1575 "bitmap.c"
{
#line 1577 "bitmap.c"
  {
#line 1579 "bitmap.c"
    MR_bool mercury__bitmap__succeeded;

#line 1582 "bitmap.c"
    {
#line 1584 "bitmap.c"
      mercury__bitmap__succeeded = mercury__bitmap____Unify____byte_index_0_0(((MR_Integer) mercury__bitmap__wrapper_arg_1), ((MR_Integer) mercury__bitmap__wrapper_arg_2));
    }
#line 1587 "bitmap.c"
    return mercury__bitmap__succeeded;
#line 1589 "bitmap.c"
  }
#line 1591 "bitmap.c"
}

#line 1594 "bitmap.c"
static void MR_CALL 
mercury__bitmap____Compare____byte_index_0_0_10001(
#line 1597 "bitmap.c"
  MR_Box * mercury__bitmap__wrapper_arg_1,
#line 1599 "bitmap.c"
  MR_Box mercury__bitmap__wrapper_arg_2,
#line 1601 "bitmap.c"
  MR_Box mercury__bitmap__wrapper_arg_3)
#line 1603 "bitmap.c"
{
#line 1605 "bitmap.c"
  {
#line 1607 "bitmap.c"
    MR_Word mercury__bitmap__conv0_HeadVar__1_1;

#line 1610 "bitmap.c"
    {
#line 1612 "bitmap.c"
      mercury__bitmap____Compare____byte_index_0_0(&mercury__bitmap__conv0_HeadVar__1_1, ((MR_Integer) mercury__bitmap__wrapper_arg_2), ((MR_Integer) mercury__bitmap__wrapper_arg_3));
    }
#line 1615 "bitmap.c"
    *mercury__bitmap__wrapper_arg_1 = ((MR_Box) (mercury__bitmap__conv0_HeadVar__1_1));
#line 1617 "bitmap.c"
  }
#line 1619 "bitmap.c"
}

#line 1622 "bitmap.c"
static MR_bool MR_CALL 
mercury__bitmap____Unify____copy_direction_0_0_10001(
#line 1625 "bitmap.c"
  MR_Box mercury__bitmap__wrapper_arg_1,
#line 1627 "bitmap.c"
  MR_Box mercury__bitmap__wrapper_arg_2)
#line 1629 "bitmap.c"
{
#line 1631 "bitmap.c"
  {
#line 1633 "bitmap.c"
    MR_bool mercury__bitmap__succeeded;

#line 1636 "bitmap.c"
    {
#line 1638 "bitmap.c"
      mercury__bitmap__succeeded = mercury__bitmap____Unify____copy_direction_0_0(((MR_Word) mercury__bitmap__wrapper_arg_1), ((MR_Word) mercury__bitmap__wrapper_arg_2));
    }
#line 1641 "bitmap.c"
    return mercury__bitmap__succeeded;
#line 1643 "bitmap.c"
  }
#line 1645 "bitmap.c"
}

#line 1648 "bitmap.c"
static void MR_CALL 
mercury__bitmap____Compare____copy_direction_0_0_10001(
#line 1651 "bitmap.c"
  MR_Box * mercury__bitmap__wrapper_arg_1,
#line 1653 "bitmap.c"
  MR_Box mercury__bitmap__wrapper_arg_2,
#line 1655 "bitmap.c"
  MR_Box mercury__bitmap__wrapper_arg_3)
#line 1657 "bitmap.c"
{
#line 1659 "bitmap.c"
  {
#line 1661 "bitmap.c"
    MR_Word mercury__bitmap__conv0_HeadVar__1_1;

#line 1664 "bitmap.c"
    {
#line 1666 "bitmap.c"
      mercury__bitmap____Compare____copy_direction_0_0(&mercury__bitmap__conv0_HeadVar__1_1, ((MR_Word) mercury__bitmap__wrapper_arg_2), ((MR_Word) mercury__bitmap__wrapper_arg_3));
    }
#line 1669 "bitmap.c"
    *mercury__bitmap__wrapper_arg_1 = ((MR_Box) (mercury__bitmap__conv0_HeadVar__1_1));
#line 1671 "bitmap.c"
  }
#line 1673 "bitmap.c"
}

#line 1676 "bitmap.c"
static MR_bool MR_CALL 
mercury__bitmap____Unify____num_bits_0_0_10001(
#line 1679 "bitmap.c"
  MR_Box mercury__bitmap__wrapper_arg_1,
#line 1681 "bitmap.c"
  MR_Box mercury__bitmap__wrapper_arg_2)
#line 1683 "bitmap.c"
{
#line 1685 "bitmap.c"
  {
#line 1687 "bitmap.c"
    MR_bool mercury__bitmap__succeeded;

#line 1690 "bitmap.c"
    {
#line 1692 "bitmap.c"
      mercury__bitmap__succeeded = mercury__bitmap____Unify____num_bits_0_0(((MR_Integer) mercury__bitmap__wrapper_arg_1), ((MR_Integer) mercury__bitmap__wrapper_arg_2));
    }
#line 1695 "bitmap.c"
    return mercury__bitmap__succeeded;
#line 1697 "bitmap.c"
  }
#line 1699 "bitmap.c"
}

#line 1702 "bitmap.c"
static void MR_CALL 
mercury__bitmap____Compare____num_bits_0_0_10001(
#line 1705 "bitmap.c"
  MR_Box * mercury__bitmap__wrapper_arg_1,
#line 1707 "bitmap.c"
  MR_Box mercury__bitmap__wrapper_arg_2,
#line 1709 "bitmap.c"
  MR_Box mercury__bitmap__wrapper_arg_3)
#line 1711 "bitmap.c"
{
#line 1713 "bitmap.c"
  {
#line 1715 "bitmap.c"
    MR_Word mercury__bitmap__conv0_HeadVar__1_1;

#line 1718 "bitmap.c"
    {
#line 1720 "bitmap.c"
      mercury__bitmap____Compare____num_bits_0_0(&mercury__bitmap__conv0_HeadVar__1_1, ((MR_Integer) mercury__bitmap__wrapper_arg_2), ((MR_Integer) mercury__bitmap__wrapper_arg_3));
    }
#line 1723 "bitmap.c"
    *mercury__bitmap__wrapper_arg_1 = ((MR_Box) (mercury__bitmap__conv0_HeadVar__1_1));
#line 1725 "bitmap.c"
  }
#line 1727 "bitmap.c"
}

#line 1730 "bitmap.c"
static MR_bool MR_CALL 
mercury__bitmap____Unify____num_bytes_0_0_10001(
#line 1733 "bitmap.c"
  MR_Box mercury__bitmap__wrapper_arg_1,
#line 1735 "bitmap.c"
  MR_Box mercury__bitmap__wrapper_arg_2)
#line 1737 "bitmap.c"
{
#line 1739 "bitmap.c"
  {
#line 1741 "bitmap.c"
    MR_bool mercury__bitmap__succeeded;

#line 1744 "bitmap.c"
    {
#line 1746 "bitmap.c"
      mercury__bitmap__succeeded = mercury__bitmap____Unify____num_bytes_0_0(((MR_Integer) mercury__bitmap__wrapper_arg_1), ((MR_Integer) mercury__bitmap__wrapper_arg_2));
    }
#line 1749 "bitmap.c"
    return mercury__bitmap__succeeded;
#line 1751 "bitmap.c"
  }
#line 1753 "bitmap.c"
}

#line 1756 "bitmap.c"
static void MR_CALL 
mercury__bitmap____Compare____num_bytes_0_0_10001(
#line 1759 "bitmap.c"
  MR_Box * mercury__bitmap__wrapper_arg_1,
#line 1761 "bitmap.c"
  MR_Box mercury__bitmap__wrapper_arg_2,
#line 1763 "bitmap.c"
  MR_Box mercury__bitmap__wrapper_arg_3)
#line 1765 "bitmap.c"
{
#line 1767 "bitmap.c"
  {
#line 1769 "bitmap.c"
    MR_Word mercury__bitmap__conv0_HeadVar__1_1;

#line 1772 "bitmap.c"
    {
#line 1774 "bitmap.c"
      mercury__bitmap____Compare____num_bytes_0_0(&mercury__bitmap__conv0_HeadVar__1_1, ((MR_Integer) mercury__bitmap__wrapper_arg_2), ((MR_Integer) mercury__bitmap__wrapper_arg_3));
    }
#line 1777 "bitmap.c"
    *mercury__bitmap__wrapper_arg_1 = ((MR_Box) (mercury__bitmap__conv0_HeadVar__1_1));
#line 1779 "bitmap.c"
  }
#line 1781 "bitmap.c"
}

#line 1784 "bitmap.c"
static MR_bool MR_CALL 
mercury__bitmap____Unify____slice_0_0_10001(
#line 1787 "bitmap.c"
  MR_Box mercury__bitmap__wrapper_arg_1,
#line 1789 "bitmap.c"
  MR_Box mercury__bitmap__wrapper_arg_2)
#line 1791 "bitmap.c"
{
#line 1793 "bitmap.c"
  {
#line 1795 "bitmap.c"
    MR_bool mercury__bitmap__succeeded;

#line 1798 "bitmap.c"
    {
#line 1800 "bitmap.c"
      mercury__bitmap__succeeded = mercury__bitmap____Unify____slice_0_0(((MR_Word) mercury__bitmap__wrapper_arg_1), ((MR_Word) mercury__bitmap__wrapper_arg_2));
    }
#line 1803 "bitmap.c"
    return mercury__bitmap__succeeded;
#line 1805 "bitmap.c"
  }
#line 1807 "bitmap.c"
}

#line 1810 "bitmap.c"
static void MR_CALL 
mercury__bitmap____Compare____slice_0_0_10001(
#line 1813 "bitmap.c"
  MR_Box * mercury__bitmap__wrapper_arg_1,
#line 1815 "bitmap.c"
  MR_Box mercury__bitmap__wrapper_arg_2,
#line 1817 "bitmap.c"
  MR_Box mercury__bitmap__wrapper_arg_3)
#line 1819 "bitmap.c"
{
#line 1821 "bitmap.c"
  {
#line 1823 "bitmap.c"
    MR_Word mercury__bitmap__conv0_HeadVar__1_1;

#line 1826 "bitmap.c"
    {
#line 1828 "bitmap.c"
      mercury__bitmap____Compare____slice_0_0(&mercury__bitmap__conv0_HeadVar__1_1, ((MR_Word) mercury__bitmap__wrapper_arg_2), ((MR_Word) mercury__bitmap__wrapper_arg_3));
    }
#line 1831 "bitmap.c"
    *mercury__bitmap__wrapper_arg_1 = ((MR_Box) (mercury__bitmap__conv0_HeadVar__1_1));
#line 1833 "bitmap.c"
  }
#line 1835 "bitmap.c"
}

#line 1838 "bitmap.c"
static MR_bool MR_CALL 
mercury__bitmap____Unify____word_0_0_10001(
#line 1841 "bitmap.c"
  MR_Box mercury__bitmap__wrapper_arg_1,
#line 1843 "bitmap.c"
  MR_Box mercury__bitmap__wrapper_arg_2)
#line 1845 "bitmap.c"
{
#line 1847 "bitmap.c"
  {
#line 1849 "bitmap.c"
    MR_bool mercury__bitmap__succeeded;

#line 1852 "bitmap.c"
    {
#line 1854 "bitmap.c"
      mercury__bitmap__succeeded = mercury__bitmap____Unify____word_0_0(((MR_Integer) mercury__bitmap__wrapper_arg_1), ((MR_Integer) mercury__bitmap__wrapper_arg_2));
    }
#line 1857 "bitmap.c"
    return mercury__bitmap__succeeded;
#line 1859 "bitmap.c"
  }
#line 1861 "bitmap.c"
}

#line 1864 "bitmap.c"
static void MR_CALL 
mercury__bitmap____Compare____word_0_0_10001(
#line 1867 "bitmap.c"
  MR_Box * mercury__bitmap__wrapper_arg_1,
#line 1869 "bitmap.c"
  MR_Box mercury__bitmap__wrapper_arg_2,
#line 1871 "bitmap.c"
  MR_Box mercury__bitmap__wrapper_arg_3)
#line 1873 "bitmap.c"
{
#line 1875 "bitmap.c"
  {
#line 1877 "bitmap.c"
    MR_Word mercury__bitmap__conv0_HeadVar__1_1;

#line 1880 "bitmap.c"
    {
#line 1882 "bitmap.c"
      mercury__bitmap____Compare____word_0_0(&mercury__bitmap__conv0_HeadVar__1_1, ((MR_Integer) mercury__bitmap__wrapper_arg_2), ((MR_Integer) mercury__bitmap__wrapper_arg_3));
    }
#line 1885 "bitmap.c"
    *mercury__bitmap__wrapper_arg_1 = ((MR_Box) (mercury__bitmap__conv0_HeadVar__1_1));
#line 1887 "bitmap.c"
  }
#line 1889 "bitmap.c"
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

#line 133 "list.int"
static void MR_CALL 
mercury__bitmap__foldl__ho12_4_p_in__list_0(
#line 133 "list.int"
  MR_Word mercury__bitmap__HeadVar__2_2,
#line 133 "list.int"
  MR_Integer mercury__bitmap__HeadVar__3_3,
#line 133 "list.int"
  MR_Integer * mercury__bitmap__HeadVar__4_4)
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
        MR_bool mercury__bitmap__succeeded;

#line 380 "list.opt"
        if ((mercury__bitmap__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 380 "list.opt"
          *mercury__bitmap__HeadVar__4_4 = mercury__bitmap__HeadVar__3_3;
#line 380 "list.opt"
        else
#line 382 "list.opt"
          {
#line 382 "list.opt"
            MR_Box mercury__bitmap__H_10_9 = ((MR_Box) (MR_hl_field(MR_mktag(1), mercury__bitmap__HeadVar__2_2, (MR_Integer) 0)));
#line 382 "list.opt"
            MR_Word mercury__bitmap__T_11_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bitmap__HeadVar__2_2, (MR_Integer) 1)));
#line 382 "list.opt"
            MR_Integer mercury__bitmap__STATE_VARIABLE_A_15_15_13;
#line 382 "list.opt"
            MR_Integer mercury__bitmap__V_53_53;

#line 1734 "bitmap.m"
{
#define MR_PROC_LABEL mercury__bitmap__foldl__ho12_4_p_in__list_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr) mercury__bitmap__H_10_9 ;
		{
#line 1734 "bitmap.m"

    NumBits = BM->num_bits;

#line 1961 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__V_53_53  = NumBits;
#line 1734 "bitmap.m"
}
#line 897 "bitmap.m"
            mercury__bitmap__STATE_VARIABLE_A_15_15_13 = (mercury__bitmap__HeadVar__3_3 + mercury__bitmap__V_53_53);
#line 384 "list.opt"
            /* direct tailcall eliminated */
#line 384 "list.opt"
            {
#line 384 "list.opt"
              MR_Word mercury__bitmap__HeadVar__2__tmp_copy_2 = mercury__bitmap__T_11_10;
#line 384 "list.opt"
              MR_Integer mercury__bitmap__HeadVar__3__tmp_copy_3 = mercury__bitmap__STATE_VARIABLE_A_15_15_13;

#line 384 "list.opt"
              mercury__bitmap__HeadVar__3_3 = mercury__bitmap__HeadVar__3__tmp_copy_3;
#line 384 "list.opt"
              mercury__bitmap__HeadVar__2_2 = mercury__bitmap__HeadVar__2__tmp_copy_2;
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

#line 881 "bitmap.m"
static MR_Box MR_CALL 
mercury__bitmap__zip2__ho11_4_f_0(
#line 881 "bitmap.m"
  MR_Integer mercury__bitmap__I_6,
#line 881 "bitmap.m"
  MR_Box mercury__bitmap__BMa_8,
#line 881 "bitmap.m"
  MR_Box mercury__bitmap__BMb_9)
#line 881 "bitmap.m"
{
#line 890 "bitmap.m"
  while (MR_TRUE)
#line 890 "bitmap.m"
    {
#line 890 "bitmap.m"
      /* tailcall optimized into a loop */
#line 890 "bitmap.m"
      {
#line 890 "bitmap.m"
        MR_bool mercury__bitmap__succeeded = (mercury__bitmap__I_6 >= (MR_Integer) 0);
#line 890 "bitmap.m"
        MR_Box mercury__bitmap__BM_10;

#line 890 "bitmap.m"
        if (mercury__bitmap__succeeded)
#line 886 "bitmap.m"
          {
#line 886 "bitmap.m"
            MR_Integer mercury__bitmap__Xa_11;
#line 886 "bitmap.m"
            MR_Integer mercury__bitmap__Xb_12;
#line 886 "bitmap.m"
            MR_Box mercury__bitmap__BMc_13;
#line 886 "bitmap.m"
            MR_Integer mercury__bitmap__V_15_15;
#line 886 "bitmap.m"
            MR_Integer mercury__bitmap__V_16_16;

#line 1808 "bitmap.m"
{
#define MR_PROC_LABEL mercury__bitmap__zip2__ho11_4_f_0

	MR_Integer N;
	MR_BitmapPtr BM;
	MR_Integer Byte;

	N =  mercury__bitmap__I_6 ;
	BM = (MR_BitmapPtr) mercury__bitmap__BMa_8 ;
		{
#line 1808 "bitmap.m"

    Byte = (MR_Integer) BM->elements[N];

#line 2052 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__Xa_11  = Byte;
#line 1808 "bitmap.m"
}
#line 1808 "bitmap.m"
{
#define MR_PROC_LABEL mercury__bitmap__zip2__ho11_4_f_0

	MR_Integer N;
	MR_BitmapPtr BM;
	MR_Integer Byte;

	N =  mercury__bitmap__I_6 ;
	BM = (MR_BitmapPtr) mercury__bitmap__BMb_9 ;
		{
#line 1808 "bitmap.m"

    Byte = (MR_Integer) BM->elements[N];

#line 2074 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__Xb_12  = Byte;
#line 1808 "bitmap.m"
}
#line 888 "bitmap.m"
            mercury__bitmap__V_15_15 = (mercury__bitmap__Xa_11 ^ mercury__bitmap__Xb_12);
#line 1849 "bitmap.m"
{
#define MR_PROC_LABEL mercury__bitmap__zip2__ho11_4_f_0

	MR_Integer N;
	MR_BitmapPtr BM0;
	MR_Integer Byte;
	MR_BitmapPtr BM;

	N =  mercury__bitmap__I_6 ;
	BM0 = (MR_BitmapPtr) mercury__bitmap__BMb_9 ;
	Byte =  mercury__bitmap__V_15_15 ;
		{
#line 1849 "bitmap.m"

    BM = BM0;
    BM->elements[N] = (MR_uint_least8_t) Byte;

#line 2101 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__BMc_13  = (MR_Box) BM;
#line 1849 "bitmap.m"
}
#line 889 "bitmap.m"
            mercury__bitmap__V_16_16 = (mercury__bitmap__I_6 - (MR_Integer) 1);
#line 889 "bitmap.m"
            /* direct tailcall eliminated */
#line 889 "bitmap.m"
            {
#line 889 "bitmap.m"
              MR_Integer mercury__bitmap__I__tmp_copy_6 = mercury__bitmap__V_16_16;
#line 889 "bitmap.m"
              MR_Box mercury__bitmap__BMb__tmp_copy_9 = mercury__bitmap__BMc_13;

#line 889 "bitmap.m"
              mercury__bitmap__BMb_9 = mercury__bitmap__BMb__tmp_copy_9;
#line 889 "bitmap.m"
              mercury__bitmap__I_6 = mercury__bitmap__I__tmp_copy_6;
#line 889 "bitmap.m"
            }
#line 889 "bitmap.m"
            continue;
#line 886 "bitmap.m"
          }
#line 890 "bitmap.m"
        else
#line 891 "bitmap.m"
          mercury__bitmap__BM_10 = mercury__bitmap__BMb_9;
#line 890 "bitmap.m"
        return mercury__bitmap__BM_10;
#line 890 "bitmap.m"
      }
#line 890 "bitmap.m"
      break;
#line 890 "bitmap.m"
    }
#line 881 "bitmap.m"
}

#line 881 "bitmap.m"
static MR_Box MR_CALL 
mercury__bitmap__zip2__ho10_4_f_0(
#line 881 "bitmap.m"
  MR_Integer mercury__bitmap__I_6,
#line 881 "bitmap.m"
  MR_Box mercury__bitmap__BMa_8,
#line 881 "bitmap.m"
  MR_Box mercury__bitmap__BMb_9)
#line 881 "bitmap.m"
{
#line 890 "bitmap.m"
  while (MR_TRUE)
#line 890 "bitmap.m"
    {
#line 890 "bitmap.m"
      /* tailcall optimized into a loop */
#line 890 "bitmap.m"
      {
#line 890 "bitmap.m"
        MR_bool mercury__bitmap__succeeded = (mercury__bitmap__I_6 >= (MR_Integer) 0);
#line 890 "bitmap.m"
        MR_Box mercury__bitmap__BM_10;

#line 890 "bitmap.m"
        if (mercury__bitmap__succeeded)
#line 886 "bitmap.m"
          {
#line 886 "bitmap.m"
            MR_Integer mercury__bitmap__Xa_11;
#line 886 "bitmap.m"
            MR_Integer mercury__bitmap__Xb_12;
#line 886 "bitmap.m"
            MR_Box mercury__bitmap__BMc_13;
#line 886 "bitmap.m"
            MR_Integer mercury__bitmap__V_15_15;
#line 886 "bitmap.m"
            MR_Integer mercury__bitmap__V_16_16;
#line 886 "bitmap.m"
            MR_Integer mercury__bitmap__V_35_35;

#line 1808 "bitmap.m"
{
#define MR_PROC_LABEL mercury__bitmap__zip2__ho10_4_f_0

	MR_Integer N;
	MR_BitmapPtr BM;
	MR_Integer Byte;

	N =  mercury__bitmap__I_6 ;
	BM = (MR_BitmapPtr) mercury__bitmap__BMa_8 ;
		{
#line 1808 "bitmap.m"

    Byte = (MR_Integer) BM->elements[N];

#line 2200 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__Xa_11  = Byte;
#line 1808 "bitmap.m"
}
#line 1808 "bitmap.m"
{
#define MR_PROC_LABEL mercury__bitmap__zip2__ho10_4_f_0

	MR_Integer N;
	MR_BitmapPtr BM;
	MR_Integer Byte;

	N =  mercury__bitmap__I_6 ;
	BM = (MR_BitmapPtr) mercury__bitmap__BMb_9 ;
		{
#line 1808 "bitmap.m"

    Byte = (MR_Integer) BM->elements[N];

#line 2222 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__Xb_12  = Byte;
#line 1808 "bitmap.m"
}
#line 845 "bitmap.m"
            mercury__bitmap__V_35_35 = ~(mercury__bitmap__Xb_12);
#line 845 "bitmap.m"
            mercury__bitmap__V_15_15 = (mercury__bitmap__Xa_11 & mercury__bitmap__V_35_35);
#line 1849 "bitmap.m"
{
#define MR_PROC_LABEL mercury__bitmap__zip2__ho10_4_f_0

	MR_Integer N;
	MR_BitmapPtr BM0;
	MR_Integer Byte;
	MR_BitmapPtr BM;

	N =  mercury__bitmap__I_6 ;
	BM0 = (MR_BitmapPtr) mercury__bitmap__BMb_9 ;
	Byte =  mercury__bitmap__V_15_15 ;
		{
#line 1849 "bitmap.m"

    BM = BM0;
    BM->elements[N] = (MR_uint_least8_t) Byte;

#line 2251 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__BMc_13  = (MR_Box) BM;
#line 1849 "bitmap.m"
}
#line 889 "bitmap.m"
            mercury__bitmap__V_16_16 = (mercury__bitmap__I_6 - (MR_Integer) 1);
#line 889 "bitmap.m"
            /* direct tailcall eliminated */
#line 889 "bitmap.m"
            {
#line 889 "bitmap.m"
              MR_Integer mercury__bitmap__I__tmp_copy_6 = mercury__bitmap__V_16_16;
#line 889 "bitmap.m"
              MR_Box mercury__bitmap__BMb__tmp_copy_9 = mercury__bitmap__BMc_13;

#line 889 "bitmap.m"
              mercury__bitmap__BMb_9 = mercury__bitmap__BMb__tmp_copy_9;
#line 889 "bitmap.m"
              mercury__bitmap__I_6 = mercury__bitmap__I__tmp_copy_6;
#line 889 "bitmap.m"
            }
#line 889 "bitmap.m"
            continue;
#line 886 "bitmap.m"
          }
#line 890 "bitmap.m"
        else
#line 891 "bitmap.m"
          mercury__bitmap__BM_10 = mercury__bitmap__BMb_9;
#line 890 "bitmap.m"
        return mercury__bitmap__BM_10;
#line 890 "bitmap.m"
      }
#line 890 "bitmap.m"
      break;
#line 890 "bitmap.m"
    }
#line 881 "bitmap.m"
}

#line 881 "bitmap.m"
static MR_Box MR_CALL 
mercury__bitmap__zip2__ho9_4_f_0(
#line 881 "bitmap.m"
  MR_Integer mercury__bitmap__I_6,
#line 881 "bitmap.m"
  MR_Box mercury__bitmap__BMa_8,
#line 881 "bitmap.m"
  MR_Box mercury__bitmap__BMb_9)
#line 881 "bitmap.m"
{
#line 890 "bitmap.m"
  while (MR_TRUE)
#line 890 "bitmap.m"
    {
#line 890 "bitmap.m"
      /* tailcall optimized into a loop */
#line 890 "bitmap.m"
      {
#line 890 "bitmap.m"
        MR_bool mercury__bitmap__succeeded = (mercury__bitmap__I_6 >= (MR_Integer) 0);
#line 890 "bitmap.m"
        MR_Box mercury__bitmap__BM_10;

#line 890 "bitmap.m"
        if (mercury__bitmap__succeeded)
#line 886 "bitmap.m"
          {
#line 886 "bitmap.m"
            MR_Integer mercury__bitmap__Xa_11;
#line 886 "bitmap.m"
            MR_Integer mercury__bitmap__Xb_12;
#line 886 "bitmap.m"
            MR_Box mercury__bitmap__BMc_13;
#line 886 "bitmap.m"
            MR_Integer mercury__bitmap__V_15_15;
#line 886 "bitmap.m"
            MR_Integer mercury__bitmap__V_16_16;

#line 1808 "bitmap.m"
{
#define MR_PROC_LABEL mercury__bitmap__zip2__ho9_4_f_0

	MR_Integer N;
	MR_BitmapPtr BM;
	MR_Integer Byte;

	N =  mercury__bitmap__I_6 ;
	BM = (MR_BitmapPtr) mercury__bitmap__BMa_8 ;
		{
#line 1808 "bitmap.m"

    Byte = (MR_Integer) BM->elements[N];

#line 2348 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__Xa_11  = Byte;
#line 1808 "bitmap.m"
}
#line 1808 "bitmap.m"
{
#define MR_PROC_LABEL mercury__bitmap__zip2__ho9_4_f_0

	MR_Integer N;
	MR_BitmapPtr BM;
	MR_Integer Byte;

	N =  mercury__bitmap__I_6 ;
	BM = (MR_BitmapPtr) mercury__bitmap__BMb_9 ;
		{
#line 1808 "bitmap.m"

    Byte = (MR_Integer) BM->elements[N];

#line 2370 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__Xb_12  = Byte;
#line 1808 "bitmap.m"
}
#line 888 "bitmap.m"
            mercury__bitmap__V_15_15 = (mercury__bitmap__Xa_11 & mercury__bitmap__Xb_12);
#line 1849 "bitmap.m"
{
#define MR_PROC_LABEL mercury__bitmap__zip2__ho9_4_f_0

	MR_Integer N;
	MR_BitmapPtr BM0;
	MR_Integer Byte;
	MR_BitmapPtr BM;

	N =  mercury__bitmap__I_6 ;
	BM0 = (MR_BitmapPtr) mercury__bitmap__BMb_9 ;
	Byte =  mercury__bitmap__V_15_15 ;
		{
#line 1849 "bitmap.m"

    BM = BM0;
    BM->elements[N] = (MR_uint_least8_t) Byte;

#line 2397 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__BMc_13  = (MR_Box) BM;
#line 1849 "bitmap.m"
}
#line 889 "bitmap.m"
            mercury__bitmap__V_16_16 = (mercury__bitmap__I_6 - (MR_Integer) 1);
#line 889 "bitmap.m"
            /* direct tailcall eliminated */
#line 889 "bitmap.m"
            {
#line 889 "bitmap.m"
              MR_Integer mercury__bitmap__I__tmp_copy_6 = mercury__bitmap__V_16_16;
#line 889 "bitmap.m"
              MR_Box mercury__bitmap__BMb__tmp_copy_9 = mercury__bitmap__BMc_13;

#line 889 "bitmap.m"
              mercury__bitmap__BMb_9 = mercury__bitmap__BMb__tmp_copy_9;
#line 889 "bitmap.m"
              mercury__bitmap__I_6 = mercury__bitmap__I__tmp_copy_6;
#line 889 "bitmap.m"
            }
#line 889 "bitmap.m"
            continue;
#line 886 "bitmap.m"
          }
#line 890 "bitmap.m"
        else
#line 891 "bitmap.m"
          mercury__bitmap__BM_10 = mercury__bitmap__BMb_9;
#line 890 "bitmap.m"
        return mercury__bitmap__BM_10;
#line 890 "bitmap.m"
      }
#line 890 "bitmap.m"
      break;
#line 890 "bitmap.m"
    }
#line 881 "bitmap.m"
}

#line 881 "bitmap.m"
static MR_Box MR_CALL 
mercury__bitmap__zip2__ho8_4_f_0(
#line 881 "bitmap.m"
  MR_Integer mercury__bitmap__I_6,
#line 881 "bitmap.m"
  MR_Box mercury__bitmap__BMa_8,
#line 881 "bitmap.m"
  MR_Box mercury__bitmap__BMb_9)
#line 881 "bitmap.m"
{
#line 890 "bitmap.m"
  while (MR_TRUE)
#line 890 "bitmap.m"
    {
#line 890 "bitmap.m"
      /* tailcall optimized into a loop */
#line 890 "bitmap.m"
      {
#line 890 "bitmap.m"
        MR_bool mercury__bitmap__succeeded = (mercury__bitmap__I_6 >= (MR_Integer) 0);
#line 890 "bitmap.m"
        MR_Box mercury__bitmap__BM_10;

#line 890 "bitmap.m"
        if (mercury__bitmap__succeeded)
#line 886 "bitmap.m"
          {
#line 886 "bitmap.m"
            MR_Integer mercury__bitmap__Xa_11;
#line 886 "bitmap.m"
            MR_Integer mercury__bitmap__Xb_12;
#line 886 "bitmap.m"
            MR_Box mercury__bitmap__BMc_13;
#line 886 "bitmap.m"
            MR_Integer mercury__bitmap__V_15_15;
#line 886 "bitmap.m"
            MR_Integer mercury__bitmap__V_16_16;

#line 1808 "bitmap.m"
{
#define MR_PROC_LABEL mercury__bitmap__zip2__ho8_4_f_0

	MR_Integer N;
	MR_BitmapPtr BM;
	MR_Integer Byte;

	N =  mercury__bitmap__I_6 ;
	BM = (MR_BitmapPtr) mercury__bitmap__BMa_8 ;
		{
#line 1808 "bitmap.m"

    Byte = (MR_Integer) BM->elements[N];

#line 2494 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__Xa_11  = Byte;
#line 1808 "bitmap.m"
}
#line 1808 "bitmap.m"
{
#define MR_PROC_LABEL mercury__bitmap__zip2__ho8_4_f_0

	MR_Integer N;
	MR_BitmapPtr BM;
	MR_Integer Byte;

	N =  mercury__bitmap__I_6 ;
	BM = (MR_BitmapPtr) mercury__bitmap__BMb_9 ;
		{
#line 1808 "bitmap.m"

    Byte = (MR_Integer) BM->elements[N];

#line 2516 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__Xb_12  = Byte;
#line 1808 "bitmap.m"
}
#line 888 "bitmap.m"
            mercury__bitmap__V_15_15 = (mercury__bitmap__Xa_11 | mercury__bitmap__Xb_12);
#line 1849 "bitmap.m"
{
#define MR_PROC_LABEL mercury__bitmap__zip2__ho8_4_f_0

	MR_Integer N;
	MR_BitmapPtr BM0;
	MR_Integer Byte;
	MR_BitmapPtr BM;

	N =  mercury__bitmap__I_6 ;
	BM0 = (MR_BitmapPtr) mercury__bitmap__BMb_9 ;
	Byte =  mercury__bitmap__V_15_15 ;
		{
#line 1849 "bitmap.m"

    BM = BM0;
    BM->elements[N] = (MR_uint_least8_t) Byte;

#line 2543 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__BMc_13  = (MR_Box) BM;
#line 1849 "bitmap.m"
}
#line 889 "bitmap.m"
            mercury__bitmap__V_16_16 = (mercury__bitmap__I_6 - (MR_Integer) 1);
#line 889 "bitmap.m"
            /* direct tailcall eliminated */
#line 889 "bitmap.m"
            {
#line 889 "bitmap.m"
              MR_Integer mercury__bitmap__I__tmp_copy_6 = mercury__bitmap__V_16_16;
#line 889 "bitmap.m"
              MR_Box mercury__bitmap__BMb__tmp_copy_9 = mercury__bitmap__BMc_13;

#line 889 "bitmap.m"
              mercury__bitmap__BMb_9 = mercury__bitmap__BMb__tmp_copy_9;
#line 889 "bitmap.m"
              mercury__bitmap__I_6 = mercury__bitmap__I__tmp_copy_6;
#line 889 "bitmap.m"
            }
#line 889 "bitmap.m"
            continue;
#line 886 "bitmap.m"
          }
#line 890 "bitmap.m"
        else
#line 891 "bitmap.m"
          mercury__bitmap__BM_10 = mercury__bitmap__BMb_9;
#line 890 "bitmap.m"
        return mercury__bitmap__BM_10;
#line 890 "bitmap.m"
      }
#line 890 "bitmap.m"
      break;
#line 890 "bitmap.m"
    }
#line 881 "bitmap.m"
}

#line 146 "list.int"
static void MR_CALL 
mercury__bitmap__foldl2__ho2_6_p_in__list_0(
#line 146 "list.int"
  MR_Word mercury__bitmap__HeadVar__2_2,
#line 146 "list.int"
  MR_Integer mercury__bitmap__HeadVar__3_3,
#line 146 "list.int"
  MR_Integer * mercury__bitmap__HeadVar__4_4,
#line 146 "list.int"
  MR_Box mercury__bitmap__HeadVar__5_5,
#line 146 "list.int"
  MR_Box * mercury__bitmap__HeadVar__6_6)
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
        MR_bool mercury__bitmap__succeeded;

#line 396 "list.opt"
        if ((mercury__bitmap__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 396 "list.opt"
          {
#line 396 "list.opt"
            *mercury__bitmap__HeadVar__6_6 = mercury__bitmap__HeadVar__5_5;
#line 396 "list.opt"
            *mercury__bitmap__HeadVar__4_4 = mercury__bitmap__HeadVar__3_3;
#line 396 "list.opt"
          }
#line 396 "list.opt"
        else
#line 399 "list.opt"
          {
#line 399 "list.opt"
            MR_Box mercury__bitmap__H_15_13 = ((MR_Box) (MR_hl_field(MR_mktag(1), mercury__bitmap__HeadVar__2_2, (MR_Integer) 0)));
#line 399 "list.opt"
            MR_Word mercury__bitmap__T_16_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bitmap__HeadVar__2_2, (MR_Integer) 1)));
#line 399 "list.opt"
            MR_Integer mercury__bitmap__STATE_VARIABLE_A_23_23_19;
#line 399 "list.opt"
            MR_Box mercury__bitmap__STATE_VARIABLE_B_24_24_20;
#line 399 "list.opt"
            MR_Integer mercury__bitmap__V_34_34;
#line 399 "list.opt"
            MR_Integer mercury__bitmap__V_36_36;

#line 1734 "bitmap.m"
{
#define MR_PROC_LABEL mercury__bitmap__foldl2__ho2_6_p_in__list_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr) mercury__bitmap__H_15_13 ;
		{
#line 1734 "bitmap.m"

    NumBits = BM->num_bits;

#line 2652 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__V_34_34  = NumBits;
#line 1734 "bitmap.m"
}
#line 905 "bitmap.m"
            {
#line 905 "bitmap.m"
              mercury__bitmap__STATE_VARIABLE_B_24_24_20 = mercury__bitmap__unsafe_copy_bits_6_f_0((MR_Integer) 0, mercury__bitmap__H_15_13, (MR_Integer) 0, mercury__bitmap__HeadVar__5_5, mercury__bitmap__HeadVar__3_3, mercury__bitmap__V_34_34);
            }
#line 1734 "bitmap.m"
{
#define MR_PROC_LABEL mercury__bitmap__foldl2__ho2_6_p_in__list_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr) mercury__bitmap__H_15_13 ;
		{
#line 1734 "bitmap.m"

    NumBits = BM->num_bits;

#line 2677 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__V_36_36  = NumBits;
#line 1734 "bitmap.m"
}
#line 906 "bitmap.m"
            mercury__bitmap__STATE_VARIABLE_A_23_23_19 = (mercury__bitmap__HeadVar__3_3 + mercury__bitmap__V_36_36);
#line 401 "list.opt"
            /* direct tailcall eliminated */
#line 401 "list.opt"
            {
#line 401 "list.opt"
              MR_Word mercury__bitmap__HeadVar__2__tmp_copy_2 = mercury__bitmap__T_16_14;
#line 401 "list.opt"
              MR_Integer mercury__bitmap__HeadVar__3__tmp_copy_3 = mercury__bitmap__STATE_VARIABLE_A_23_23_19;
#line 401 "list.opt"
              MR_Box mercury__bitmap__HeadVar__5__tmp_copy_5 = mercury__bitmap__STATE_VARIABLE_B_24_24_20;

#line 401 "list.opt"
              mercury__bitmap__HeadVar__5_5 = mercury__bitmap__HeadVar__5__tmp_copy_5;
#line 401 "list.opt"
              mercury__bitmap__HeadVar__3_3 = mercury__bitmap__HeadVar__3__tmp_copy_3;
#line 401 "list.opt"
              mercury__bitmap__HeadVar__2_2 = mercury__bitmap__HeadVar__2__tmp_copy_2;
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

#line 689 "bitmap.m"
void MR_CALL 
mercury__bitmap____Compare____slice_0_0(
#line 689 "bitmap.m"
  MR_Word * mercury__bitmap__HeadVar__1_1,
#line 689 "bitmap.m"
  MR_Word mercury__bitmap__HeadVar__2_2,
#line 689 "bitmap.m"
  MR_Word mercury__bitmap__HeadVar__3_3)
#line 689 "bitmap.m"
{
#line 689 "bitmap.m"
  {
#line 689 "bitmap.m"
    MR_bool mercury__bitmap__succeeded;
#line 689 "bitmap.m"
    MR_Integer mercury__bitmap__CastX_12 = (MR_Integer) mercury__bitmap__HeadVar__2_2;
#line 689 "bitmap.m"
    MR_Integer mercury__bitmap__CastY_13 = (MR_Integer) mercury__bitmap__HeadVar__3_3;

#line 689 "bitmap.m"
    mercury__bitmap__succeeded = (mercury__bitmap__CastX_12 == mercury__bitmap__CastY_13);
#line 689 "bitmap.m"
    if (mercury__bitmap__succeeded)
#line 2816 "bitmap.c"
      *mercury__bitmap__HeadVar__1_1 = (MR_Integer) 0;
#line 689 "bitmap.m"
    else
#line 689 "bitmap.m"
      {
#line 689 "bitmap.m"
        MR_Box mercury__bitmap__V_4_4 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__bitmap__HeadVar__2_2, (MR_Integer) 0)));
#line 689 "bitmap.m"
        MR_Integer mercury__bitmap__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__bitmap__HeadVar__2_2, (MR_Integer) 1)));
#line 689 "bitmap.m"
        MR_Integer mercury__bitmap__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__bitmap__HeadVar__2_2, (MR_Integer) 2)));
#line 689 "bitmap.m"
        MR_Box mercury__bitmap__V_7_7 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__bitmap__HeadVar__3_3, (MR_Integer) 0)));
#line 689 "bitmap.m"
        MR_Integer mercury__bitmap__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__bitmap__HeadVar__3_3, (MR_Integer) 1)));
#line 689 "bitmap.m"
        MR_Integer mercury__bitmap__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__bitmap__HeadVar__3_3, (MR_Integer) 2)));
#line 689 "bitmap.m"
        MR_Word mercury__bitmap__V_10_10;
#line 1542 "bitmap.m"
        MR_Integer mercury__bitmap__CastX_17 = (MR_Integer) mercury__bitmap__V_4_4;
#line 1542 "bitmap.m"
        MR_Integer mercury__bitmap__CastY_18 = (MR_Integer) mercury__bitmap__V_7_7;

#line 1542 "bitmap.m"
        mercury__bitmap__succeeded = (mercury__bitmap__CastX_17 == mercury__bitmap__CastY_18);
#line 1542 "bitmap.m"
        if (mercury__bitmap__succeeded)
#line 1542 "bitmap.m"
          mercury__bitmap__V_10_10 = (MR_Integer) 0;
#line 1542 "bitmap.m"
        else
#line 1596 "bitmap.m"
          {
#line 1599 "bitmap.m"
{
#define MR_PROC_LABEL mercury__bitmap____Compare____slice_0_0

	MR_Word Result;
	MR_BitmapPtr BM1;
	MR_BitmapPtr BM2;

	BM1 = (MR_BitmapPtr) mercury__bitmap__V_4_4 ;
	BM2 = (MR_BitmapPtr) mercury__bitmap__V_7_7 ;
		{
#line 1599 "bitmap.m"

    MR_Integer  res;
    res = MR_bitmap_cmp(BM1, BM2);
    Result = ((res < 0) ? MR_COMPARE_LESS
                : (res == 0) ? MR_COMPARE_EQUAL
                : MR_COMPARE_GREATER);

#line 2870 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__V_10_10  = Result;
#line 1599 "bitmap.m"
}
#line 1596 "bitmap.m"
          }
#line 2879 "bitmap.c"
        mercury__bitmap__succeeded = (mercury__bitmap__V_10_10 == (MR_Integer) 0);
#line 689 "bitmap.m"
        mercury__bitmap__succeeded = !(mercury__bitmap__succeeded);
#line 689 "bitmap.m"
        if (mercury__bitmap__succeeded)
#line 689 "bitmap.m"
          *mercury__bitmap__HeadVar__1_1 = mercury__bitmap__V_10_10;
#line 689 "bitmap.m"
        else
#line 689 "bitmap.m"
          {
#line 689 "bitmap.m"
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
#line 2916 "bitmap.c"
            mercury__bitmap__succeeded = (mercury__bitmap__V_11_11 == (MR_Integer) 0);
#line 689 "bitmap.m"
            mercury__bitmap__succeeded = !(mercury__bitmap__succeeded);
#line 689 "bitmap.m"
            if (mercury__bitmap__succeeded)
#line 689 "bitmap.m"
              *mercury__bitmap__HeadVar__1_1 = mercury__bitmap__V_11_11;
#line 689 "bitmap.m"
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
#line 689 "bitmap.m"
          }
#line 689 "bitmap.m"
      }
#line 689 "bitmap.m"
  }
#line 689 "bitmap.m"
}

#line 689 "bitmap.m"
MR_bool MR_CALL 
mercury__bitmap____Unify____slice_0_0(
#line 689 "bitmap.m"
  MR_Word mercury__bitmap__HeadVar__1_1,
#line 689 "bitmap.m"
  MR_Word mercury__bitmap__HeadVar__2_2)
#line 689 "bitmap.m"
{
#line 689 "bitmap.m"
  {
#line 689 "bitmap.m"
    MR_bool mercury__bitmap__succeeded;
#line 689 "bitmap.m"
    MR_Integer mercury__bitmap__CastX_9 = (MR_Integer) mercury__bitmap__HeadVar__1_1;
#line 689 "bitmap.m"
    MR_Integer mercury__bitmap__CastY_10 = (MR_Integer) mercury__bitmap__HeadVar__2_2;

#line 689 "bitmap.m"
    mercury__bitmap__succeeded = (mercury__bitmap__CastX_9 == mercury__bitmap__CastY_10);
#line 689 "bitmap.m"
    if (mercury__bitmap__succeeded)
#line 689 "bitmap.m"
      mercury__bitmap__succeeded = MR_TRUE;
#line 689 "bitmap.m"
    else
#line 689 "bitmap.m"
      {
#line 689 "bitmap.m"
        MR_Box mercury__bitmap__V_3_3 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__bitmap__HeadVar__1_1, (MR_Integer) 0)));
#line 689 "bitmap.m"
        MR_Integer mercury__bitmap__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__bitmap__HeadVar__1_1, (MR_Integer) 1)));
#line 689 "bitmap.m"
        MR_Integer mercury__bitmap__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__bitmap__HeadVar__1_1, (MR_Integer) 2)));
#line 689 "bitmap.m"
        MR_Box mercury__bitmap__V_6_6 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__bitmap__HeadVar__2_2, (MR_Integer) 0)));
#line 689 "bitmap.m"
        MR_Integer mercury__bitmap__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__bitmap__HeadVar__2_2, (MR_Integer) 1)));
#line 689 "bitmap.m"
        MR_Integer mercury__bitmap__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__bitmap__HeadVar__2_2, (MR_Integer) 2)));
#line 1542 "bitmap.m"
        MR_Integer mercury__bitmap__CastX_11 = (MR_Integer) mercury__bitmap__V_3_3;
#line 1542 "bitmap.m"
        MR_Integer mercury__bitmap__CastY_12 = (MR_Integer) mercury__bitmap__V_6_6;

#line 1542 "bitmap.m"
        mercury__bitmap__succeeded = (mercury__bitmap__CastX_11 == mercury__bitmap__CastY_12);
#line 1542 "bitmap.m"
        if (mercury__bitmap__succeeded)
#line 1542 "bitmap.m"
          mercury__bitmap__succeeded = MR_TRUE;
#line 1542 "bitmap.m"
        else
#line 1549 "bitmap.m"
          {
#line 1552 "bitmap.m"
{
#define MR_PROC_LABEL mercury__bitmap____Unify____slice_0_0

	MR_BitmapPtr BM1;
	MR_BitmapPtr BM2;
	MR_bool SUCCESS_INDICATOR;

	BM1 = (MR_BitmapPtr) mercury__bitmap__V_3_3 ;
	BM2 = (MR_BitmapPtr) mercury__bitmap__V_6_6 ;
		{
#line 1552 "bitmap.m"

    SUCCESS_INDICATOR = MR_bitmap_eq(BM1, BM2);

#line 3031 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 1552 "bitmap.m"
	}
mercury__bitmap__succeeded  = SUCCESS_INDICATOR;
}
#line 1549 "bitmap.m"
          }
#line 689 "bitmap.m"
        if (mercury__bitmap__succeeded)
#line 689 "bitmap.m"
          {
#line 3046 "bitmap.c"
            mercury__bitmap__succeeded = (mercury__bitmap__V_4_4 == mercury__bitmap__V_7_7);
#line 689 "bitmap.m"
            if (mercury__bitmap__succeeded)
#line 3050 "bitmap.c"
              mercury__bitmap__succeeded = (mercury__bitmap__V_5_5 == mercury__bitmap__V_8_8);
#line 689 "bitmap.m"
          }
#line 689 "bitmap.m"
      }
#line 689 "bitmap.m"
    return mercury__bitmap__succeeded;
#line 689 "bitmap.m"
  }
#line 689 "bitmap.m"
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

#line 1357 "bitmap.m"
void MR_CALL 
mercury__bitmap____Compare____copy_direction_0_0(
#line 1357 "bitmap.m"
  MR_Word * mercury__bitmap__HeadVar__1_1,
#line 1357 "bitmap.m"
  MR_Word mercury__bitmap__HeadVar__2_2,
#line 1357 "bitmap.m"
  MR_Word mercury__bitmap__HeadVar__3_3)
#line 1357 "bitmap.m"
{
#line 1357 "bitmap.m"
  {
#line 1357 "bitmap.m"
    MR_bool mercury__bitmap__succeeded;
#line 1357 "bitmap.m"
    MR_Integer mercury__bitmap__Cast_HeadVar1_4 = (MR_Integer) mercury__bitmap__HeadVar__2_2;
#line 1357 "bitmap.m"
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
#line 1357 "bitmap.m"
  }
#line 1357 "bitmap.m"
}

#line 1357 "bitmap.m"
MR_bool MR_CALL 
mercury__bitmap____Unify____copy_direction_0_0(
#line 1357 "bitmap.m"
  MR_Word mercury__bitmap__HeadVar__2_1,
#line 1357 "bitmap.m"
  MR_Word mercury__bitmap__HeadVar__2_2)
#line 1357 "bitmap.m"
{
#line 3267 "bitmap.c"
  {
#line 3269 "bitmap.c"
    MR_bool mercury__bitmap__succeeded = (mercury__bitmap__HeadVar__2_1 == mercury__bitmap__HeadVar__2_2);

#line 3272 "bitmap.c"
    return mercury__bitmap__succeeded;
#line 3274 "bitmap.c"
  }
#line 1357 "bitmap.m"
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
#line 3451 "bitmap.c"
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

#line 134 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__bitmap____Compare____bitmap_error_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__bitmap__V_4_4 ;
	S2 =  mercury__bitmap__V_5_5 ;
		{
#line 134 "private_builtin.opt"

    Res = strcmp(S1, S2);

#line 3479 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__Res_7_12  = Res;
#line 134 "private_builtin.opt"
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

#line 3548 "bitmap.c"
        mercury__bitmap__succeeded = (strcmp(mercury__bitmap__V_3_3, mercury__bitmap__V_4_4) == 0);
#line 53 "bitmap.m"
      }
#line 53 "bitmap.m"
    return mercury__bitmap__succeeded;
#line 53 "bitmap.m"
  }
#line 53 "bitmap.m"
}

#line 1542 "bitmap.m"
void MR_CALL 
mercury__bitmap____Compare____bitmap_0_0(
#line 1542 "bitmap.m"
  MR_Word * mercury__bitmap__HeadVar__1_1,
#line 1542 "bitmap.m"
  MR_Box mercury__bitmap__HeadVar__2_2,
#line 1542 "bitmap.m"
  MR_Box mercury__bitmap__HeadVar__3_3)
#line 1542 "bitmap.m"
{
#line 1542 "bitmap.m"
  {
#line 1542 "bitmap.m"
    MR_bool mercury__bitmap__succeeded;
#line 1542 "bitmap.m"
    MR_Integer mercury__bitmap__CastX_4 = (MR_Integer) mercury__bitmap__HeadVar__2_2;
#line 1542 "bitmap.m"
    MR_Integer mercury__bitmap__CastY_5 = (MR_Integer) mercury__bitmap__HeadVar__3_3;

#line 1542 "bitmap.m"
    mercury__bitmap__succeeded = (mercury__bitmap__CastX_4 == mercury__bitmap__CastY_5);
#line 1542 "bitmap.m"
    if (mercury__bitmap__succeeded)
#line 1542 "bitmap.m"
      *mercury__bitmap__HeadVar__1_1 = (MR_Integer) 0;
#line 1542 "bitmap.m"
    else
#line 1596 "bitmap.m"
      {
#line 1599 "bitmap.m"
{
#define MR_PROC_LABEL mercury__bitmap____Compare____bitmap_0_0

	MR_Word Result;
	MR_BitmapPtr BM1;
	MR_BitmapPtr BM2;

	BM1 = (MR_BitmapPtr) mercury__bitmap__HeadVar__2_2 ;
	BM2 = (MR_BitmapPtr) mercury__bitmap__HeadVar__3_3 ;
		{
#line 1599 "bitmap.m"

    MR_Integer  res;
    res = MR_bitmap_cmp(BM1, BM2);
    Result = ((res < 0) ? MR_COMPARE_LESS
                : (res == 0) ? MR_COMPARE_EQUAL
                : MR_COMPARE_GREATER);

#line 3608 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__bitmap__HeadVar__1_1  = Result;
#line 1599 "bitmap.m"
}
#line 1596 "bitmap.m"
      }
#line 1542 "bitmap.m"
  }
#line 1542 "bitmap.m"
}

#line 1542 "bitmap.m"
MR_bool MR_CALL 
mercury__bitmap____Unify____bitmap_0_0(
#line 1542 "bitmap.m"
  MR_Box mercury__bitmap__HeadVar__1_1,
#line 1542 "bitmap.m"
  MR_Box mercury__bitmap__HeadVar__2_2)
#line 1542 "bitmap.m"
{
#line 1542 "bitmap.m"
  {
#line 1542 "bitmap.m"
    MR_bool mercury__bitmap__succeeded;
#line 1542 "bitmap.m"
    MR_Integer mercury__bitmap__CastX_3 = (MR_Integer) mercury__bitmap__HeadVar__1_1;
#line 1542 "bitmap.m"
    MR_Integer mercury__bitmap__CastY_4 = (MR_Integer) mercury__bitmap__HeadVar__2_2;

#line 1542 "bitmap.m"
    mercury__bitmap__succeeded = (mercury__bitmap__CastX_3 == mercury__bitmap__CastY_4);
#line 1542 "bitmap.m"
    if (mercury__bitmap__succeeded)
#line 1542 "bitmap.m"
      mercury__bitmap__succeeded = MR_TRUE;
#line 1542 "bitmap.m"
    else
#line 1549 "bitmap.m"
      {
#line 1552 "bitmap.m"
{
#define MR_PROC_LABEL mercury__bitmap____Unify____bitmap_0_0

	MR_BitmapPtr BM1;
	MR_BitmapPtr BM2;
	MR_bool SUCCESS_INDICATOR;

	BM1 = (MR_BitmapPtr) mercury__bitmap__HeadVar__1_1 ;
	BM2 = (MR_BitmapPtr) mercury__bitmap__HeadVar__2_2 ;
		{
#line 1552 "bitmap.m"

    SUCCESS_INDICATOR = MR_bitmap_eq(BM1, BM2);

#line 3665 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 1552 "bitmap.m"
	}
mercury__bitmap__succeeded  = SUCCESS_INDICATOR;
}
#line 1549 "bitmap.m"
      }
#line 1542 "bitmap.m"
    return mercury__bitmap__succeeded;
#line 1542 "bitmap.m"
  }
#line 1542 "bitmap.m"
}

#line 1997 "bitmap.m"
void MR_CALL 
mercury__bitmap____Compare____bit_index_in_byte_0_0(
#line 1997 "bitmap.m"
  MR_Word * mercury__bitmap__HeadVar__1_1,
#line 1997 "bitmap.m"
  MR_Integer mercury__bitmap__HeadVar__2_2,
#line 1997 "bitmap.m"
  MR_Integer mercury__bitmap__HeadVar__3_3)
#line 1997 "bitmap.m"
{
#line 1997 "bitmap.m"
  {
#line 1997 "bitmap.m"
    MR_bool mercury__bitmap__succeeded;
#line 1997 "bitmap.m"
    MR_Integer mercury__bitmap__Cast_HeadVar1_4 = mercury__bitmap__HeadVar__2_2;
#line 1997 "bitmap.m"
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
#line 1997 "bitmap.m"
  }
#line 1997 "bitmap.m"
}

#line 1997 "bitmap.m"
MR_bool MR_CALL 
mercury__bitmap____Unify____bit_index_in_byte_0_0(
#line 1997 "bitmap.m"
  MR_Integer mercury__bitmap__HeadVar__1_1,
#line 1997 "bitmap.m"
  MR_Integer mercury__bitmap__HeadVar__2_2)
#line 1997 "bitmap.m"
{
#line 1997 "bitmap.m"
  {
#line 1997 "bitmap.m"
    MR_bool mercury__bitmap__succeeded;
#line 1997 "bitmap.m"
    MR_Integer mercury__bitmap__Cast_HeadVar1_3 = mercury__bitmap__HeadVar__1_1;
#line 1997 "bitmap.m"
    MR_Integer mercury__bitmap__Cast_HeadVar2_4 = mercury__bitmap__HeadVar__2_2;

#line 1997 "bitmap.m"
    mercury__bitmap__succeeded = (mercury__bitmap__Cast_HeadVar1_3 == mercury__bitmap__Cast_HeadVar2_4);
#line 1997 "bitmap.m"
    return mercury__bitmap__succeeded;
#line 1997 "bitmap.m"
  }
#line 1997 "bitmap.m"
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

#line 2109 "bitmap.m"
void MR_CALL 
mercury__bitmap__throw_bitmap_error_1_p_0(
#line 2109 "bitmap.m"
  MR_String mercury__bitmap__Msg_2)
#line 2109 "bitmap.m"
{
#line 2111 "bitmap.m"
  {
#line 2111 "bitmap.m"
    MR_bool mercury__bitmap__succeeded;
#line 2111 "bitmap.m"
    MR_Word mercury__bitmap__TypeCtorInfo_4_4 = (MR_Word) &mercury__bitmap__bitmap__type_ctor_info_bitmap_error_0;
#line 2111 "bitmap.m"
    MR_Word mercury__bitmap__V_3_3 = (MR_Word) mercury__bitmap__Msg_2;

#line 2112 "bitmap.m"
    {
#line 2112 "bitmap.m"
      mercury__exception__throw_1_p_0(mercury__bitmap__TypeCtorInfo_4_4, ((MR_Box) (mercury__bitmap__V_3_3)));
#line 2112 "bitmap.m"
      return;
    }
#line 2111 "bitmap.m"
  }
#line 2109 "bitmap.m"
}

#line 2104 "bitmap.m"
MR_Box MR_CALL 
mercury__bitmap__throw_bitmap_error_1_f_0(
#line 2104 "bitmap.m"
  MR_Word mercury__bitmap__TypeInfo_5_5,
#line 2104 "bitmap.m"
  MR_String mercury__bitmap__Msg_3)
#line 2104 "bitmap.m"
{
#line 2111 "bitmap.m"
  {
#line 2111 "bitmap.m"
    MR_bool mercury__bitmap__succeeded;
#line 2111 "bitmap.m"
    MR_Box mercury__bitmap__HeadVar__2_4;
#line 2111 "bitmap.m"
    MR_Word mercury__bitmap__TypeCtorInfo_4_8 = (MR_Word) &mercury__bitmap__bitmap__type_ctor_info_bitmap_error_0;
#line 2111 "bitmap.m"
    MR_Word mercury__bitmap__V_7_7 = (MR_Word) mercury__bitmap__Msg_3;

#line 2112 "bitmap.m"
    {
#line 2112 "bitmap.m"
      mercury__exception__throw_1_p_0(mercury__bitmap__TypeCtorInfo_4_8, ((MR_Box) (mercury__bitmap__V_7_7)));
    }
#line 2111 "bitmap.m"
    return mercury__bitmap__HeadVar__2_4;
#line 2111 "bitmap.m"
  }
#line 2104 "bitmap.m"
}

#line 2068 "bitmap.m"
MR_Box MR_CALL 
mercury__bitmap__throw_bounds_error_3_f_0(
#line 2068 "bitmap.m"
  MR_Word mercury__bitmap__TypeInfo_22_22,
#line 2068 "bitmap.m"
  MR_Box mercury__bitmap__BM_5,
#line 2068 "bitmap.m"
  MR_String mercury__bitmap__Pred_6,
#line 2068 "bitmap.m"
  MR_Integer mercury__bitmap__Index_7)
#line 2068 "bitmap.m"
{
#line 2070 "bitmap.m"
  {
#line 2070 "bitmap.m"
    MR_bool mercury__bitmap__succeeded;
#line 2070 "bitmap.m"
    MR_Box mercury__bitmap__HeadVar__4_4;
#line 2070 "bitmap.m"
    MR_Word mercury__bitmap__TypeCtorInfo_4_40;
#line 2070 "bitmap.m"
    MR_String mercury__bitmap__V_8_8;
#line 2070 "bitmap.m"
    MR_Word mercury__bitmap__V_9_9;
#line 2070 "bitmap.m"
    MR_Word mercury__bitmap__V_10_10;
#line 2070 "bitmap.m"
    MR_Word mercury__bitmap__V_12_12;
#line 2070 "bitmap.m"
    MR_String mercury__bitmap__V_13_13;
#line 2070 "bitmap.m"
    MR_Word mercury__bitmap__V_14_14;
#line 2070 "bitmap.m"
    MR_Word mercury__bitmap__V_16_16;
#line 2070 "bitmap.m"
    MR_String mercury__bitmap__V_17_17;
#line 2070 "bitmap.m"
    MR_Integer mercury__bitmap__V_18_18;
#line 2070 "bitmap.m"
    MR_Word mercury__bitmap__V_19_19;
#line 2070 "bitmap.m"
    MR_Word mercury__bitmap__V_21_21;
#line 2070 "bitmap.m"
    MR_Word mercury__bitmap__V_39_39;

#line 297 "string.opt"
    {
#line 297 "string.opt"
      mercury__string__int_to_base_string_3_p_0(mercury__bitmap__Index_7, (MR_Integer) 10, &mercury__bitmap__V_13_13);
    }
#line 1734 "bitmap.m"
{
#define MR_PROC_LABEL mercury__bitmap__throw_bounds_error_3_f_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr) mercury__bitmap__BM_5 ;
		{
#line 1734 "bitmap.m"

    NumBits = BM->num_bits;

#line 3955 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__V_18_18  = NumBits;
#line 1734 "bitmap.m"
}
#line 297 "string.opt"
    {
#line 297 "string.opt"
      mercury__string__int_to_base_string_3_p_0(mercury__bitmap__V_18_18, (MR_Integer) 10, &mercury__bitmap__V_17_17);
    }
#line 2077 "bitmap.m"
    mercury__bitmap__V_21_21 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2077 "bitmap.m"
    mercury__bitmap__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__bitmap_scalar_common_4[2]);
#line 2076 "bitmap.m"
    {
#line 2076 "bitmap.m"
      mercury__bitmap__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2076 "bitmap.m"
      MR_hl_field(MR_mktag(1), mercury__bitmap__V_16_16, 0) = ((MR_Box) (mercury__bitmap__V_17_17));
#line 2076 "bitmap.m"
      MR_hl_field(MR_mktag(1), mercury__bitmap__V_16_16, 1) = ((MR_Box) (mercury__bitmap__V_19_19));
#line 2076 "bitmap.m"
    }
#line 2075 "bitmap.m"
    {
#line 2075 "bitmap.m"
      mercury__bitmap__V_14_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2075 "bitmap.m"
      MR_hl_field(MR_mktag(1), mercury__bitmap__V_14_14, 0) = ((MR_Box) ((MR_String) " is out of bounds [0 - "));
#line 2075 "bitmap.m"
      MR_hl_field(MR_mktag(1), mercury__bitmap__V_14_14, 1) = ((MR_Box) (mercury__bitmap__V_16_16));
#line 2075 "bitmap.m"
    }
#line 2074 "bitmap.m"
    {
#line 2074 "bitmap.m"
      mercury__bitmap__V_12_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2074 "bitmap.m"
      MR_hl_field(MR_mktag(1), mercury__bitmap__V_12_12, 0) = ((MR_Box) (mercury__bitmap__V_13_13));
#line 2074 "bitmap.m"
      MR_hl_field(MR_mktag(1), mercury__bitmap__V_12_12, 1) = ((MR_Box) (mercury__bitmap__V_14_14));
#line 2074 "bitmap.m"
    }
#line 2073 "bitmap.m"
    {
#line 2073 "bitmap.m"
      mercury__bitmap__V_10_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2073 "bitmap.m"
      MR_hl_field(MR_mktag(1), mercury__bitmap__V_10_10, 0) = ((MR_Box) ((MR_String) ": index "));
#line 2073 "bitmap.m"
      MR_hl_field(MR_mktag(1), mercury__bitmap__V_10_10, 1) = ((MR_Box) (mercury__bitmap__V_12_12));
#line 2073 "bitmap.m"
    }
#line 2073 "bitmap.m"
    {
#line 2073 "bitmap.m"
      mercury__bitmap__V_9_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2073 "bitmap.m"
      MR_hl_field(MR_mktag(1), mercury__bitmap__V_9_9, 0) = ((MR_Box) (mercury__bitmap__Pred_6));
#line 2073 "bitmap.m"
      MR_hl_field(MR_mktag(1), mercury__bitmap__V_9_9, 1) = ((MR_Box) (mercury__bitmap__V_10_10));
#line 2073 "bitmap.m"
    }
#line 2072 "bitmap.m"
    {
#line 2072 "bitmap.m"
      mercury__bitmap__V_8_8 = mercury__string__append_list_1_f_0(mercury__bitmap__V_9_9);
    }
#line 2112 "bitmap.m"
    mercury__bitmap__V_39_39 = (MR_Word) mercury__bitmap__V_8_8;
#line 4028 "bitmap.c"
    mercury__bitmap__TypeCtorInfo_4_40 = (MR_Word) &mercury__bitmap__bitmap__type_ctor_info_bitmap_error_0;
#line 2112 "bitmap.m"
    {
#line 2112 "bitmap.m"
      mercury__exception__throw_1_p_0(mercury__bitmap__TypeCtorInfo_4_40, ((MR_Box) (mercury__bitmap__V_39_39)));
    }
#line 2070 "bitmap.m"
    return mercury__bitmap__HeadVar__4_4;
#line 2070 "bitmap.m"
  }
#line 2068 "bitmap.m"
}

#line 2054 "bitmap.m"
static MR_Integer MR_CALL 
mercury__bitmap__set_bits_in_byte_4_f_0(
#line 2054 "bitmap.m"
  MR_Integer mercury__bitmap__Byte0_6,
#line 2054 "bitmap.m"
  MR_Integer mercury__bitmap__FirstBit_7,
#line 2054 "bitmap.m"
  MR_Integer mercury__bitmap__NumBits_8,
#line 2054 "bitmap.m"
  MR_Integer mercury__bitmap__Bits_9)
#line 2054 "bitmap.m"
{
#line 2056 "bitmap.m"
  {
#line 2056 "bitmap.m"
    MR_bool mercury__bitmap__succeeded;
#line 2056 "bitmap.m"
    MR_Integer mercury__bitmap__Byte_10;
#line 2056 "bitmap.m"
    MR_Integer mercury__bitmap__LastBit_11;
#line 2056 "bitmap.m"
    MR_Integer mercury__bitmap__Shift_12;
#line 2056 "bitmap.m"
    MR_Integer mercury__bitmap__Mask_13;
#line 2056 "bitmap.m"
    MR_Integer mercury__bitmap__BitsToSet_14;
#line 2056 "bitmap.m"
    MR_Integer mercury__bitmap__V_15_15 = (mercury__bitmap__FirstBit_7 + mercury__bitmap__NumBits_8);
#line 2056 "bitmap.m"
    MR_Integer mercury__bitmap__V_20_20;
#line 2056 "bitmap.m"
    MR_Integer mercury__bitmap__V_21_21;
#line 2056 "bitmap.m"
    MR_Integer mercury__bitmap__V_22_22;
#line 2056 "bitmap.m"
    MR_Integer mercury__bitmap__V_23_23;
#line 2056 "bitmap.m"
    MR_Integer mercury__bitmap__BitMask_26;
#line 2056 "bitmap.m"
    MR_Integer mercury__bitmap__V_28_28;
#line 2056 "bitmap.m"
    MR_Integer mercury__bitmap__V_30_30;

#line 2057 "bitmap.m"
    mercury__bitmap__LastBit_11 = (mercury__bitmap__V_15_15 - (MR_Integer) 1);
#line 2058 "bitmap.m"
    mercury__bitmap__Shift_12 = ((MR_Integer) 7 - mercury__bitmap__LastBit_11);
#line 2029 "bitmap.m"
    mercury__bitmap__V_28_28 = (mercury__bitmap__NumBits_8 - (MR_Integer) 1);
#line 2029 "bitmap.m"
    mercury__bitmap__BitMask_26 = ((MR_Integer) 1 << mercury__bitmap__V_28_28);
#line 2030 "bitmap.m"
    mercury__bitmap__V_30_30 = (mercury__bitmap__BitMask_26 - (MR_Integer) 1);
#line 2030 "bitmap.m"
    mercury__bitmap__Mask_13 = (mercury__bitmap__BitMask_26 | mercury__bitmap__V_30_30);
#line 2060 "bitmap.m"
    mercury__bitmap__BitsToSet_14 = (mercury__bitmap__Mask_13 & mercury__bitmap__Bits_9);
#line 2061 "bitmap.m"
    mercury__bitmap__V_22_22 = (mercury__bitmap__Mask_13 << mercury__bitmap__Shift_12);
#line 2061 "bitmap.m"
    mercury__bitmap__V_21_21 = ~(mercury__bitmap__V_22_22);
#line 2061 "bitmap.m"
    mercury__bitmap__V_20_20 = (mercury__bitmap__Byte0_6 & mercury__bitmap__V_21_21);
#line 2062 "bitmap.m"
    mercury__bitmap__V_23_23 = (mercury__bitmap__BitsToSet_14 << mercury__bitmap__Shift_12);
#line 2062 "bitmap.m"
    mercury__bitmap__Byte_10 = (mercury__bitmap__V_20_20 | mercury__bitmap__V_23_23);
#line 2056 "bitmap.m"
    return mercury__bitmap__Byte_10;
#line 2056 "bitmap.m"
  }
#line 2054 "bitmap.m"
}

#line 2039 "bitmap.m"
static MR_Integer MR_CALL 
mercury__bitmap__extract_bits_from_byte_3_f_0(
#line 2039 "bitmap.m"
  MR_Integer mercury__bitmap__Byte_5,
#line 2039 "bitmap.m"
  MR_Integer mercury__bitmap__FirstBit_6,
#line 2039 "bitmap.m"
  MR_Integer mercury__bitmap__NumBits_7)
#line 2039 "bitmap.m"
{
#line 2041 "bitmap.m"
  {
#line 2041 "bitmap.m"
    MR_bool mercury__bitmap__succeeded;
#line 2041 "bitmap.m"
    MR_Integer mercury__bitmap__Bits_8;
#line 2041 "bitmap.m"
    MR_Integer mercury__bitmap__LastBit_9;
#line 2041 "bitmap.m"
    MR_Integer mercury__bitmap__Shift_10;
#line 2041 "bitmap.m"
    MR_Integer mercury__bitmap__V_11_11 = (mercury__bitmap__FirstBit_6 + mercury__bitmap__NumBits_7);
#line 2041 "bitmap.m"
    MR_Integer mercury__bitmap__V_16_16;
#line 2041 "bitmap.m"
    MR_Integer mercury__bitmap__V_17_17;
#line 2041 "bitmap.m"
    MR_Integer mercury__bitmap__BitMask_20;
#line 2041 "bitmap.m"
    MR_Integer mercury__bitmap__V_22_22;
#line 2041 "bitmap.m"
    MR_Integer mercury__bitmap__V_24_24;

#line 2044 "bitmap.m"
    mercury__bitmap__LastBit_9 = (mercury__bitmap__V_11_11 - (MR_Integer) 1);
#line 2045 "bitmap.m"
    mercury__bitmap__Shift_10 = ((MR_Integer) 7 - mercury__bitmap__LastBit_9);
#line 2046 "bitmap.m"
    mercury__bitmap__V_16_16 = (mercury__bitmap__Byte_5 >> mercury__bitmap__Shift_10);
#line 2029 "bitmap.m"
    mercury__bitmap__V_22_22 = (mercury__bitmap__NumBits_7 - (MR_Integer) 1);
#line 2029 "bitmap.m"
    mercury__bitmap__BitMask_20 = ((MR_Integer) 1 << mercury__bitmap__V_22_22);
#line 2030 "bitmap.m"
    mercury__bitmap__V_24_24 = (mercury__bitmap__BitMask_20 - (MR_Integer) 1);
#line 2030 "bitmap.m"
    mercury__bitmap__V_17_17 = (mercury__bitmap__BitMask_20 | mercury__bitmap__V_24_24);
#line 2046 "bitmap.m"
    mercury__bitmap__Bits_8 = (mercury__bitmap__V_16_16 & mercury__bitmap__V_17_17);
#line 2041 "bitmap.m"
    return mercury__bitmap__Bits_8;
#line 2041 "bitmap.m"
  }
#line 2039 "bitmap.m"
}

#line 2014 "bitmap.m"
MR_Integer MR_CALL 
mercury__bitmap__bitmask_1_f_0(
#line 2014 "bitmap.m"
  MR_Integer mercury__bitmap__I_3)
#line 2014 "bitmap.m"
{
#line 2016 "bitmap.m"
  {
#line 2016 "bitmap.m"
    MR_bool mercury__bitmap__succeeded;
#line 2016 "bitmap.m"
    MR_Integer mercury__bitmap__HeadVar__2_2;
#line 2016 "bitmap.m"
    MR_Integer mercury__bitmap__V_5_5;
#line 2016 "bitmap.m"
    MR_Integer mercury__bitmap__V_9_9 = (mercury__bitmap__I_3 % (MR_Integer) 8);

#line 2017 "bitmap.m"
    mercury__bitmap__V_5_5 = ((MR_Integer) 7 - mercury__bitmap__V_9_9);
#line 2016 "bitmap.m"
    mercury__bitmap__HeadVar__2_2 = ((MR_Integer) 1 << mercury__bitmap__V_5_5);
#line 2016 "bitmap.m"
    return mercury__bitmap__HeadVar__2_2;
#line 2016 "bitmap.m"
  }
#line 2014 "bitmap.m"
}

#line 2002 "bitmap.m"
MR_Integer MR_CALL 
mercury__bitmap__bit_index_in_byte_1_f_0(
#line 2002 "bitmap.m"
  MR_Integer mercury__bitmap__I_3)
#line 2002 "bitmap.m"
{
#line 2004 "bitmap.m"
  {
#line 2004 "bitmap.m"
    MR_bool mercury__bitmap__succeeded;
#line 2004 "bitmap.m"
    MR_Integer mercury__bitmap__HeadVar__2_2 = (mercury__bitmap__I_3 % (MR_Integer) 8);

#line 2004 "bitmap.m"
    return mercury__bitmap__HeadVar__2_2;
#line 2004 "bitmap.m"
  }
#line 2002 "bitmap.m"
}

#line 1966 "bitmap.m"
MR_Integer MR_CALL 
mercury__bitmap__byte_index_for_bit_1_f_0(
#line 1966 "bitmap.m"
  MR_Integer mercury__bitmap__I_3)
#line 1966 "bitmap.m"
{
#line 1968 "bitmap.m"
  {
#line 1968 "bitmap.m"
    MR_bool mercury__bitmap__succeeded = (mercury__bitmap__I_3 < (MR_Integer) 0);
#line 1968 "bitmap.m"
    MR_Integer mercury__bitmap__HeadVar__2_2;

#line 1968 "bitmap.m"
    if (mercury__bitmap__succeeded)
#line 1970 "bitmap.m"
      mercury__bitmap__HeadVar__2_2 = (MR_Integer) -1;
#line 1968 "bitmap.m"
    else
#line 1972 "bitmap.m"
      {
#line 1972 "bitmap.m"
        mercury__bitmap__HeadVar__2_2 = (mercury__bitmap__I_3 / (MR_Integer) 8);
#line 1972 "bitmap.m"
      }
#line 1968 "bitmap.m"
    return mercury__bitmap__HeadVar__2_2;
#line 1968 "bitmap.m"
  }
#line 1966 "bitmap.m"
}

#line 1883 "bitmap.m"
static MR_Box MR_CALL 
mercury__bitmap__allocate_bitmap_1_f_0(
#line 1883 "bitmap.m"
  MR_Integer mercury__bitmap__N_1)
#line 1883 "bitmap.m"
{
#line 1885 "bitmap.m"
  {
#line 1885 "bitmap.m"
    MR_bool mercury__bitmap__succeeded;
#line 1885 "bitmap.m"
    MR_Box mercury__bitmap__BM_2;

#line 1888 "bitmap.m"
{
#define MR_PROC_LABEL mercury__bitmap__allocate_bitmap_1_f_0

	MR_Integer N;
	MR_BitmapPtr BM;

	N =  mercury__bitmap__N_1 ;
		{
#line 1888 "bitmap.m"

    MR_allocate_bitmap_msg(BM, N, MR_ALLOC_ID);

#line 4284 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__BM_2  = (MR_Box) BM;
#line 1888 "bitmap.m"
}
#line 1885 "bitmap.m"
    return mercury__bitmap__BM_2;
#line 1885 "bitmap.m"
  }
#line 1883 "bitmap.m"
}

#line 1762 "bitmap.m"
static MR_Box MR_CALL 
mercury__bitmap__f_110_117_109_95_98_105_116_115_32_58_61_2_f_0(
#line 1762 "bitmap.m"
  MR_Box mercury__bitmap__BM0_1,
#line 1762 "bitmap.m"
  MR_Integer mercury__bitmap__NumBits_2)
#line 1762 "bitmap.m"
{
#line 1766 "bitmap.m"
  {
#line 1766 "bitmap.m"
    MR_bool mercury__bitmap__succeeded;
#line 1766 "bitmap.m"
    MR_Box mercury__bitmap__BM_3;

#line 1769 "bitmap.m"
{
#define MR_PROC_LABEL mercury__bitmap__f_110_117_109_95_98_105_116_115_32_58_61_2_f_0

	MR_BitmapPtr BM0;
	MR_Integer NumBits;
	MR_BitmapPtr BM;

	BM0 = (MR_BitmapPtr) mercury__bitmap__BM0_1 ;
	NumBits =  mercury__bitmap__NumBits_2 ;
		{
#line 1769 "bitmap.m"

    BM = BM0;
    BM->num_bits = NumBits;

#line 4330 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__BM_3  = (MR_Box) BM;
#line 1769 "bitmap.m"
}
#line 1766 "bitmap.m"
    return mercury__bitmap__BM_3;
#line 1766 "bitmap.m"
  }
#line 1762 "bitmap.m"
}

#line 1594 "bitmap.m"
void MR_CALL 
mercury__bitmap__bitmap_compare_3_p_0(
#line 1594 "bitmap.m"
  MR_Word * mercury__bitmap__Result_1,
#line 1594 "bitmap.m"
  MR_Box mercury__bitmap__BM1_2,
#line 1594 "bitmap.m"
  MR_Box mercury__bitmap__BM2_3)
#line 1594 "bitmap.m"
{
#line 1596 "bitmap.m"
  {
#line 1596 "bitmap.m"
    MR_bool mercury__bitmap__succeeded;

#line 1599 "bitmap.m"
{
#define MR_PROC_LABEL mercury__bitmap__bitmap_compare_3_p_0

	MR_Word Result;
	MR_BitmapPtr BM1;
	MR_BitmapPtr BM2;

	BM1 = (MR_BitmapPtr) mercury__bitmap__BM1_2 ;
	BM2 = (MR_BitmapPtr) mercury__bitmap__BM2_3 ;
		{
#line 1599 "bitmap.m"

    MR_Integer  res;
    res = MR_bitmap_cmp(BM1, BM2);
    Result = ((res < 0) ? MR_COMPARE_LESS
                : (res == 0) ? MR_COMPARE_EQUAL
                : MR_COMPARE_GREATER);

#line 4379 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__bitmap__Result_1  = Result;
#line 1599 "bitmap.m"
}
#line 1596 "bitmap.m"
  }
#line 1594 "bitmap.m"
}

#line 1547 "bitmap.m"
MR_bool MR_CALL 
mercury__bitmap__bitmap_equal_2_p_0(
#line 1547 "bitmap.m"
  MR_Box mercury__bitmap__BM1_1,
#line 1547 "bitmap.m"
  MR_Box mercury__bitmap__BM2_2)
#line 1547 "bitmap.m"
{
#line 1549 "bitmap.m"
  {
#line 1549 "bitmap.m"
    MR_bool mercury__bitmap__succeeded;

#line 1552 "bitmap.m"
{
#define MR_PROC_LABEL mercury__bitmap__bitmap_equal_2_p_0

	MR_BitmapPtr BM1;
	MR_BitmapPtr BM2;
	MR_bool SUCCESS_INDICATOR;

	BM1 = (MR_BitmapPtr) mercury__bitmap__BM1_1 ;
	BM2 = (MR_BitmapPtr) mercury__bitmap__BM2_2 ;
		{
#line 1552 "bitmap.m"

    SUCCESS_INDICATOR = MR_bitmap_eq(BM1, BM2);

#line 4420 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 1552 "bitmap.m"
	}
mercury__bitmap__succeeded  = SUCCESS_INDICATOR;
}
#line 1549 "bitmap.m"
    return mercury__bitmap__succeeded;
#line 1549 "bitmap.m"
  }
#line 1547 "bitmap.m"
}

#line 1496 "bitmap.m"
static void MR_CALL 
mercury__bitmap__hash_2_5_p_0(
#line 1496 "bitmap.m"
  MR_Box mercury__bitmap__BM_6,
#line 1496 "bitmap.m"
  MR_Integer mercury__bitmap__Index_7,
#line 1496 "bitmap.m"
  MR_Integer mercury__bitmap__Length_8,
#line 1496 "bitmap.m"
  MR_Integer mercury__bitmap__STATE_VARIABLE_HashVal_0_10,
#line 1496 "bitmap.m"
  MR_Integer * mercury__bitmap__STATE_VARIABLE_HashVal_11)
#line 1496 "bitmap.m"
{
#line 1502 "bitmap.m"
  while (MR_TRUE)
#line 1502 "bitmap.m"
    {
#line 1502 "bitmap.m"
      /* tailcall optimized into a loop */
#line 1502 "bitmap.m"
      {
#line 1502 "bitmap.m"
        MR_bool mercury__bitmap__succeeded = (mercury__bitmap__Index_7 < mercury__bitmap__Length_8);

#line 1502 "bitmap.m"
        if (mercury__bitmap__succeeded)
#line 1500 "bitmap.m"
          {
#line 1500 "bitmap.m"
            MR_Integer mercury__bitmap__V_12_12;
#line 1500 "bitmap.m"
            MR_Integer mercury__bitmap__STATE_VARIABLE_HashVal_13_13;
#line 1500 "bitmap.m"
            MR_Integer mercury__bitmap__V_14_14;
#line 1500 "bitmap.m"
            MR_Integer mercury__bitmap__H1_24;
#line 1500 "bitmap.m"
            MR_Integer mercury__bitmap__V_25_25;

#line 1808 "bitmap.m"
{
#define MR_PROC_LABEL mercury__bitmap__hash_2_5_p_0

	MR_Integer N;
	MR_BitmapPtr BM;
	MR_Integer Byte;

	N =  mercury__bitmap__Index_7 ;
	BM = (MR_BitmapPtr) mercury__bitmap__BM_6 ;
		{
#line 1808 "bitmap.m"

    Byte = (MR_Integer) BM->elements[N];

#line 4492 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__V_12_12  = Byte;
#line 1808 "bitmap.m"
}
#line 1509 "bitmap.m"
            {
#line 1509 "bitmap.m"
              mercury__bitmap__V_25_25 = mercury__int__f_60_60_2_f_0(mercury__bitmap__STATE_VARIABLE_HashVal_0_10, (MR_Integer) 5);
            }
#line 1509 "bitmap.m"
            mercury__bitmap__H1_24 = (mercury__bitmap__STATE_VARIABLE_HashVal_0_10 ^ mercury__bitmap__V_25_25);
#line 1510 "bitmap.m"
            mercury__bitmap__STATE_VARIABLE_HashVal_13_13 = (mercury__bitmap__H1_24 ^ mercury__bitmap__V_12_12);
#line 1501 "bitmap.m"
            mercury__bitmap__V_14_14 = (mercury__bitmap__Index_7 + (MR_Integer) 1);
#line 1501 "bitmap.m"
            /* direct tailcall eliminated */
#line 1501 "bitmap.m"
            {
#line 1501 "bitmap.m"
              MR_Integer mercury__bitmap__Index__tmp_copy_7 = mercury__bitmap__V_14_14;
#line 1501 "bitmap.m"
              MR_Integer mercury__bitmap__STATE_VARIABLE_HashVal_0__tmp_copy_10 = mercury__bitmap__STATE_VARIABLE_HashVal_13_13;

#line 1501 "bitmap.m"
              mercury__bitmap__STATE_VARIABLE_HashVal_0_10 = mercury__bitmap__STATE_VARIABLE_HashVal_0__tmp_copy_10;
#line 1501 "bitmap.m"
              mercury__bitmap__Index_7 = mercury__bitmap__Index__tmp_copy_7;
#line 1501 "bitmap.m"
            }
#line 1501 "bitmap.m"
            continue;
#line 1500 "bitmap.m"
          }
#line 1502 "bitmap.m"
        else
#line 1501 "bitmap.m"
          *mercury__bitmap__STATE_VARIABLE_HashVal_11 = mercury__bitmap__STATE_VARIABLE_HashVal_0_10;
#line 1502 "bitmap.m"
      }
#line 1502 "bitmap.m"
      break;
#line 1502 "bitmap.m"
    }
#line 1496 "bitmap.m"
}

#line 1457 "bitmap.m"
MR_Word MR_CALL 
mercury__bitmap__bitmap_to_byte_strings_3_f_0(
#line 1457 "bitmap.m"
  MR_Box mercury__bitmap__BM_5,
#line 1457 "bitmap.m"
  MR_Integer mercury__bitmap__NumBits_6,
#line 1457 "bitmap.m"
  MR_Word mercury__bitmap__STATE_VARIABLE_Strs_0_13)
#line 1457 "bitmap.m"
{
#line 1462 "bitmap.m"
  while (MR_TRUE)
#line 1462 "bitmap.m"
    {
#line 1462 "bitmap.m"
      /* tailcall optimized into a loop */
#line 1462 "bitmap.m"
      {
#line 1462 "bitmap.m"
        MR_bool mercury__bitmap__succeeded = (mercury__bitmap__NumBits_6 <= (MR_Integer) 0);
#line 1462 "bitmap.m"
        MR_Word mercury__bitmap__STATE_VARIABLE_Strs_14;

#line 1462 "bitmap.m"
        if (mercury__bitmap__succeeded)
#line 1460 "bitmap.m"
          mercury__bitmap__STATE_VARIABLE_Strs_14 = mercury__bitmap__STATE_VARIABLE_Strs_0_13;
#line 1462 "bitmap.m"
        else
#line 1463 "bitmap.m"
          {
#line 1463 "bitmap.m"
            MR_Integer mercury__bitmap__ThisByte0_8;
#line 1463 "bitmap.m"
            MR_Integer mercury__bitmap__LastBitIndex_9;
#line 1463 "bitmap.m"
            MR_Integer mercury__bitmap__BitsThisByte_10;
#line 1463 "bitmap.m"
            MR_Integer mercury__bitmap__ThisByte_11;
#line 1463 "bitmap.m"
            MR_String mercury__bitmap__ThisByteStr_12;
#line 1463 "bitmap.m"
            MR_Integer mercury__bitmap__V_16_16;
#line 1463 "bitmap.m"
            MR_Integer mercury__bitmap__V_17_17 = (mercury__bitmap__NumBits_6 - (MR_Integer) 1);
#line 1463 "bitmap.m"
            MR_Integer mercury__bitmap__V_19_19;
#line 1463 "bitmap.m"
            MR_String mercury__bitmap__V_26_26;
#line 1463 "bitmap.m"
            MR_Word mercury__bitmap__STATE_VARIABLE_Strs_29_29;
#line 1463 "bitmap.m"
            MR_Integer mercury__bitmap__V_31_31;
#line 1465 "bitmap.m"
            MR_Integer mercury__bitmap__V_22_22;

#line 1969 "bitmap.m"
            mercury__bitmap__succeeded = (mercury__bitmap__V_17_17 < (MR_Integer) 0);
#line 1968 "bitmap.m"
            if (mercury__bitmap__succeeded)
#line 1970 "bitmap.m"
              mercury__bitmap__V_16_16 = (MR_Integer) -1;
#line 1968 "bitmap.m"
            else
#line 1972 "bitmap.m"
              {
#line 1972 "bitmap.m"
                mercury__bitmap__V_16_16 = (mercury__bitmap__V_17_17 / (MR_Integer) 8);
#line 1972 "bitmap.m"
              }
#line 1808 "bitmap.m"
{
#define MR_PROC_LABEL mercury__bitmap__bitmap_to_byte_strings_3_f_0

	MR_Integer N;
	MR_BitmapPtr BM;
	MR_Integer Byte;

	N =  mercury__bitmap__V_16_16 ;
	BM = (MR_BitmapPtr) mercury__bitmap__BM_5 ;
		{
#line 1808 "bitmap.m"

    Byte = (MR_Integer) BM->elements[N];

#line 4628 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__ThisByte0_8  = Byte;
#line 1808 "bitmap.m"
}
#line 1464 "bitmap.m"
            mercury__bitmap__V_19_19 = (mercury__bitmap__NumBits_6 - (MR_Integer) 1);
#line 2004 "bitmap.m"
            mercury__bitmap__LastBitIndex_9 = (mercury__bitmap__V_19_19 % (MR_Integer) 8);
#line 1465 "bitmap.m"
            mercury__bitmap__V_22_22 = ((MR_Integer) 8 - mercury__bitmap__LastBitIndex_9);
#line 1465 "bitmap.m"
            mercury__bitmap__succeeded = (mercury__bitmap__V_22_22 == (MR_Integer) 1);
#line 1468 "bitmap.m"
            if (mercury__bitmap__succeeded)
#line 1466 "bitmap.m"
              {
#line 1960 "bitmap.m"
                mercury__bitmap__BitsThisByte_10 = (MR_Integer) 8;
#line 1467 "bitmap.m"
                mercury__bitmap__ThisByte_11 = mercury__bitmap__ThisByte0_8;
#line 1466 "bitmap.m"
              }
#line 1468 "bitmap.m"
            else
#line 1469 "bitmap.m"
              {
#line 1469 "bitmap.m"
                MR_Integer mercury__bitmap__V_24_24;

#line 1469 "bitmap.m"
                mercury__bitmap__BitsThisByte_10 = (mercury__bitmap__LastBitIndex_9 + (MR_Integer) 1);
#line 1471 "bitmap.m"
                mercury__bitmap__V_24_24 = ((MR_Integer) 8 - mercury__bitmap__BitsThisByte_10);
#line 1470 "bitmap.m"
                mercury__bitmap__ThisByte_11 = (mercury__bitmap__ThisByte0_8 >> mercury__bitmap__V_24_24);
#line 1469 "bitmap.m"
              }
#line 306 "string.opt"
            {
#line 306 "string.opt"
              mercury__string__int_to_base_string_3_p_0(mercury__bitmap__ThisByte_11, (MR_Integer) 2, &mercury__bitmap__V_26_26);
            }
#line 535 "string.opt"
            {
#line 535 "string.opt"
              mercury__string__pad_left_4_p_0(mercury__bitmap__V_26_26, (MR_Char) 48, mercury__bitmap__BitsThisByte_10, &mercury__bitmap__ThisByteStr_12);
            }
#line 1476 "bitmap.m"
            {
#line 1476 "bitmap.m"
              mercury__bitmap__STATE_VARIABLE_Strs_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1476 "bitmap.m"
              MR_hl_field(MR_mktag(1), mercury__bitmap__STATE_VARIABLE_Strs_29_29, 0) = ((MR_Box) (mercury__bitmap__ThisByteStr_12));
#line 1476 "bitmap.m"
              MR_hl_field(MR_mktag(1), mercury__bitmap__STATE_VARIABLE_Strs_29_29, 1) = ((MR_Box) (mercury__bitmap__STATE_VARIABLE_Strs_0_13));
#line 1476 "bitmap.m"
            }
#line 1477 "bitmap.m"
            mercury__bitmap__V_31_31 = (mercury__bitmap__NumBits_6 - mercury__bitmap__BitsThisByte_10);
#line 1477 "bitmap.m"
            /* direct tailcall eliminated */
#line 1477 "bitmap.m"
            {
#line 1477 "bitmap.m"
              MR_Integer mercury__bitmap__NumBits__tmp_copy_6 = mercury__bitmap__V_31_31;
#line 1477 "bitmap.m"
              MR_Word mercury__bitmap__STATE_VARIABLE_Strs_0__tmp_copy_13 = mercury__bitmap__STATE_VARIABLE_Strs_29_29;

#line 1477 "bitmap.m"
              mercury__bitmap__STATE_VARIABLE_Strs_0_13 = mercury__bitmap__STATE_VARIABLE_Strs_0__tmp_copy_13;
#line 1477 "bitmap.m"
              mercury__bitmap__NumBits_6 = mercury__bitmap__NumBits__tmp_copy_6;
#line 1477 "bitmap.m"
            }
#line 1477 "bitmap.m"
            continue;
#line 1463 "bitmap.m"
          }
#line 1462 "bitmap.m"
        return mercury__bitmap__STATE_VARIABLE_Strs_14;
#line 1462 "bitmap.m"
      }
#line 1462 "bitmap.m"
      break;
#line 1462 "bitmap.m"
    }
#line 1457 "bitmap.m"
}

#line 1449 "bitmap.m"
MR_Word MR_CALL 
mercury__bitmap__bitmap_to_byte_strings_1_f_0(
#line 1449 "bitmap.m"
  MR_Box mercury__bitmap__BM_3)
#line 1449 "bitmap.m"
{
#line 1451 "bitmap.m"
  {
#line 1451 "bitmap.m"
    MR_bool mercury__bitmap__succeeded;
#line 1451 "bitmap.m"
    MR_Word mercury__bitmap__Strs_4;
#line 1451 "bitmap.m"
    MR_Integer mercury__bitmap__NumBits_5;
#line 1451 "bitmap.m"
    MR_Word mercury__bitmap__V_6_6;

#line 1734 "bitmap.m"
{
#define MR_PROC_LABEL mercury__bitmap__bitmap_to_byte_strings_1_f_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr) mercury__bitmap__BM_3 ;
		{
#line 1734 "bitmap.m"

    NumBits = BM->num_bits;

#line 4751 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__NumBits_5  = NumBits;
#line 1734 "bitmap.m"
}
#line 1453 "bitmap.m"
    mercury__bitmap__V_6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1453 "bitmap.m"
    {
#line 1453 "bitmap.m"
      return mercury__bitmap__Strs_4 = mercury__bitmap__bitmap_to_byte_strings_3_f_0(mercury__bitmap__BM_3, mercury__bitmap__NumBits_5, mercury__bitmap__V_6_6);
    }
#line 1451 "bitmap.m"
    return mercury__bitmap__Strs_4;
#line 1451 "bitmap.m"
  }
#line 1449 "bitmap.m"
}

#line 1426 "bitmap.m"
static MR_bool MR_CALL 
mercury__bitmap__hex_chars_to_bitmap_6_p_0(
#line 1426 "bitmap.m"
  MR_String mercury__bitmap__Str_7,
#line 1426 "bitmap.m"
  MR_Integer mercury__bitmap__Index_8,
#line 1426 "bitmap.m"
  MR_Integer mercury__bitmap__End_9,
#line 1426 "bitmap.m"
  MR_Integer mercury__bitmap__ByteIndex_10,
#line 1426 "bitmap.m"
  MR_Box mercury__bitmap__STATE_VARIABLE_BM_0_15,
#line 1426 "bitmap.m"
  MR_Box * mercury__bitmap__STATE_VARIABLE_BM_16)
#line 1426 "bitmap.m"
{
#line 1432 "bitmap.m"
  while (MR_TRUE)
#line 1432 "bitmap.m"
    {
#line 1432 "bitmap.m"
      /* tailcall optimized into a loop */
#line 1432 "bitmap.m"
      {
#line 1432 "bitmap.m"
        MR_bool mercury__bitmap__succeeded = (mercury__bitmap__Index_8 == mercury__bitmap__End_9);

#line 1432 "bitmap.m"
        if (mercury__bitmap__succeeded)
#line 1430 "bitmap.m"
          {
#line 1430 "bitmap.m"
            *mercury__bitmap__STATE_VARIABLE_BM_16 = mercury__bitmap__STATE_VARIABLE_BM_0_15;
#line 1430 "bitmap.m"
            mercury__bitmap__succeeded = MR_TRUE;
#line 1430 "bitmap.m"
          }
#line 1432 "bitmap.m"
        else
#line 1435 "bitmap.m"
          {
#line 1432 "bitmap.m"
            MR_Integer mercury__bitmap__V_17_17 = (mercury__bitmap__End_9 - mercury__bitmap__Index_8);

#line 1432 "bitmap.m"
            mercury__bitmap__succeeded = (mercury__bitmap__V_17_17 == (MR_Integer) 1);
#line 1435 "bitmap.m"
            if (mercury__bitmap__succeeded)
#line 1434 "bitmap.m"
              mercury__bitmap__succeeded = MR_FALSE;
#line 1435 "bitmap.m"
            else
#line 1436 "bitmap.m"
              {
#line 1436 "bitmap.m"
                MR_Integer mercury__bitmap__HighNibble_12;
#line 1436 "bitmap.m"
                MR_Integer mercury__bitmap__LowNibble_13;
#line 1436 "bitmap.m"
                MR_Integer mercury__bitmap__Byte_14;
#line 1436 "bitmap.m"
                MR_Char mercury__bitmap__V_18_18;
#line 1436 "bitmap.m"
                MR_Char mercury__bitmap__V_19_19;
#line 1436 "bitmap.m"
                MR_Integer mercury__bitmap__V_20_20;
#line 1436 "bitmap.m"
                MR_Integer mercury__bitmap__V_21_21;
#line 1436 "bitmap.m"
                MR_Integer mercury__bitmap__V_22_22;
#line 1436 "bitmap.m"
                MR_Integer mercury__bitmap__V_23_23;
#line 1436 "bitmap.m"
                MR_Box mercury__bitmap__STATE_VARIABLE_BM_24_24;
#line 1436 "bitmap.m"
                MR_Integer mercury__bitmap__V_25_25;
#line 1436 "bitmap.m"
                MR_Integer mercury__bitmap__V_26_26;
#line 1436 "bitmap.m"
                MR_Integer mercury__bitmap__V_28_28;
#line 1436 "bitmap.m"
                MR_Integer mercury__bitmap__V_29_29;

#line 580 "string.opt"
                {
#line 580 "string.opt"
                  mercury__string__unsafe_index_3_p_0(mercury__bitmap__Str_7, mercury__bitmap__Index_8, &mercury__bitmap__V_18_18);
                }
#line 1436 "bitmap.m"
                {
#line 1436 "bitmap.m"
                  mercury__bitmap__succeeded = mercury__char__hex_digit_to_int_2_p_0(mercury__bitmap__V_18_18, &mercury__bitmap__HighNibble_12);
                }
#line 1436 "bitmap.m"
                if (mercury__bitmap__succeeded)
#line 1436 "bitmap.m"
                  {
#line 1437 "bitmap.m"
                    mercury__bitmap__V_21_21 = (MR_Integer) 1;
#line 1437 "bitmap.m"
                    mercury__bitmap__V_20_20 = (mercury__bitmap__Index_8 + mercury__bitmap__V_21_21);
#line 580 "string.opt"
                    {
#line 580 "string.opt"
                      mercury__string__unsafe_index_3_p_0(mercury__bitmap__Str_7, mercury__bitmap__V_20_20, &mercury__bitmap__V_19_19);
                    }
#line 1437 "bitmap.m"
                    {
#line 1437 "bitmap.m"
                      mercury__bitmap__succeeded = mercury__char__hex_digit_to_int_2_p_0(mercury__bitmap__V_19_19, &mercury__bitmap__LowNibble_13);
                    }
#line 1436 "bitmap.m"
                    if (mercury__bitmap__succeeded)
#line 1436 "bitmap.m"
                      {
#line 1438 "bitmap.m"
                        mercury__bitmap__V_23_23 = (MR_Integer) 4;
#line 1438 "bitmap.m"
                        mercury__bitmap__V_22_22 = (mercury__bitmap__HighNibble_12 << mercury__bitmap__V_23_23);
#line 1438 "bitmap.m"
                        mercury__bitmap__Byte_14 = (mercury__bitmap__V_22_22 | mercury__bitmap__LowNibble_13);
#line 1849 "bitmap.m"
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
#line 1849 "bitmap.m"

    BM = BM0;
    BM->elements[N] = (MR_uint_least8_t) Byte;

#line 4912 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__STATE_VARIABLE_BM_24_24  = (MR_Box) BM;
#line 1849 "bitmap.m"
}
#line 1440 "bitmap.m"
                        mercury__bitmap__V_28_28 = (MR_Integer) 2;
#line 1440 "bitmap.m"
                        mercury__bitmap__V_25_25 = (mercury__bitmap__Index_8 + mercury__bitmap__V_28_28);
#line 1440 "bitmap.m"
                        mercury__bitmap__V_29_29 = (MR_Integer) 1;
#line 1440 "bitmap.m"
                        mercury__bitmap__V_26_26 = (mercury__bitmap__ByteIndex_10 + mercury__bitmap__V_29_29);
#line 1440 "bitmap.m"
                        /* direct tailcall eliminated */
#line 1440 "bitmap.m"
                        {
#line 1440 "bitmap.m"
                          MR_Integer mercury__bitmap__Index__tmp_copy_8 = mercury__bitmap__V_25_25;
#line 1440 "bitmap.m"
                          MR_Integer mercury__bitmap__ByteIndex__tmp_copy_10 = mercury__bitmap__V_26_26;
#line 1440 "bitmap.m"
                          MR_Box mercury__bitmap__STATE_VARIABLE_BM_0__tmp_copy_15 = mercury__bitmap__STATE_VARIABLE_BM_24_24;

#line 1440 "bitmap.m"
                          mercury__bitmap__STATE_VARIABLE_BM_0_15 = mercury__bitmap__STATE_VARIABLE_BM_0__tmp_copy_15;
#line 1440 "bitmap.m"
                          mercury__bitmap__ByteIndex_10 = mercury__bitmap__ByteIndex__tmp_copy_10;
#line 1440 "bitmap.m"
                          mercury__bitmap__Index_8 = mercury__bitmap__Index__tmp_copy_8;
#line 1440 "bitmap.m"
                        }
#line 1440 "bitmap.m"
                        continue;
#line 1436 "bitmap.m"
                      }
#line 1436 "bitmap.m"
                  }
#line 1436 "bitmap.m"
              }
#line 1435 "bitmap.m"
          }
#line 1432 "bitmap.m"
        return mercury__bitmap__succeeded;
#line 1432 "bitmap.m"
      }
#line 1432 "bitmap.m"
      break;
#line 1432 "bitmap.m"
    }
#line 1426 "bitmap.m"
}

#line 1390 "bitmap.m"
static void MR_CALL 
mercury__bitmap__to_string_chars_4_p_0(
#line 1390 "bitmap.m"
  MR_Integer mercury__bitmap__Index_5,
#line 1390 "bitmap.m"
  MR_Box mercury__bitmap__BM_6,
#line 1390 "bitmap.m"
  MR_Word mercury__bitmap__STATE_VARIABLE_Chars_0_12,
#line 1390 "bitmap.m"
  MR_Word * mercury__bitmap__STATE_VARIABLE_Chars_13)
#line 1390 "bitmap.m"
{
#line 1395 "bitmap.m"
  while (MR_TRUE)
#line 1395 "bitmap.m"
    {
#line 1395 "bitmap.m"
      /* tailcall optimized into a loop */
#line 1395 "bitmap.m"
      {
#line 1395 "bitmap.m"
        MR_bool mercury__bitmap__succeeded = (mercury__bitmap__Index_5 < (MR_Integer) 0);

#line 1395 "bitmap.m"
        if (mercury__bitmap__succeeded)
#line 1393 "bitmap.m"
          *mercury__bitmap__STATE_VARIABLE_Chars_13 = mercury__bitmap__STATE_VARIABLE_Chars_0_12;
#line 1395 "bitmap.m"
        else
#line 1396 "bitmap.m"
          {
#line 1396 "bitmap.m"
            MR_Integer mercury__bitmap__Byte_8;
#line 1405 "bitmap.m"
            MR_Char mercury__bitmap__HighChar_10;
#line 1405 "bitmap.m"
            MR_Char mercury__bitmap__LowChar_11;
#line 1400 "bitmap.m"
            MR_Integer mercury__bitmap__V_16_16;
#line 1400 "bitmap.m"
            MR_Integer mercury__bitmap__V_17_17;
#line 1400 "bitmap.m"
            MR_Integer mercury__bitmap__V_19_19;

#line 1808 "bitmap.m"
{
#define MR_PROC_LABEL mercury__bitmap__to_string_chars_4_p_0

	MR_Integer N;
	MR_BitmapPtr BM;
	MR_Integer Byte;

	N =  mercury__bitmap__Index_5 ;
	BM = (MR_BitmapPtr) mercury__bitmap__BM_6 ;
		{
#line 1808 "bitmap.m"

    Byte = (MR_Integer) BM->elements[N];

#line 5027 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__Byte_8  = Byte;
#line 1808 "bitmap.m"
}
#line 1399 "bitmap.m"
            mercury__bitmap__V_17_17 = (mercury__bitmap__Byte_8 >> (MR_Integer) 4);
#line 1399 "bitmap.m"
            mercury__bitmap__V_16_16 = (mercury__bitmap__V_17_17 & (MR_Integer) 15);
#line 1399 "bitmap.m"
            {
#line 1399 "bitmap.m"
              mercury__bitmap__succeeded = mercury__char__int_to_hex_digit_2_p_0(mercury__bitmap__V_16_16, &mercury__bitmap__HighChar_10);
            }
#line 1400 "bitmap.m"
            if (mercury__bitmap__succeeded)
#line 1400 "bitmap.m"
              {
#line 1401 "bitmap.m"
                mercury__bitmap__V_19_19 = (mercury__bitmap__Byte_8 & (MR_Integer) 15);
#line 1401 "bitmap.m"
                {
#line 1401 "bitmap.m"
                  mercury__bitmap__succeeded = mercury__char__int_to_hex_digit_2_p_0(mercury__bitmap__V_19_19, &mercury__bitmap__LowChar_11);
                }
#line 1400 "bitmap.m"
              }
#line 1405 "bitmap.m"
            if (mercury__bitmap__succeeded)
#line 1403 "bitmap.m"
              {
#line 1403 "bitmap.m"
                MR_Word mercury__bitmap__STATE_VARIABLE_Chars_20_20;
#line 1403 "bitmap.m"
                MR_Word mercury__bitmap__V_21_21;
#line 1403 "bitmap.m"
                MR_Integer mercury__bitmap__V_22_22;

#line 1403 "bitmap.m"
                {
#line 1403 "bitmap.m"
                  mercury__bitmap__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1403 "bitmap.m"
                  MR_hl_field(MR_mktag(1), mercury__bitmap__V_21_21, 0) = ((MR_Box) (MR_Word) (mercury__bitmap__LowChar_11));
#line 1403 "bitmap.m"
                  MR_hl_field(MR_mktag(1), mercury__bitmap__V_21_21, 1) = ((MR_Box) (mercury__bitmap__STATE_VARIABLE_Chars_0_12));
#line 1403 "bitmap.m"
                }
#line 1403 "bitmap.m"
                {
#line 1403 "bitmap.m"
                  mercury__bitmap__STATE_VARIABLE_Chars_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1403 "bitmap.m"
                  MR_hl_field(MR_mktag(1), mercury__bitmap__STATE_VARIABLE_Chars_20_20, 0) = ((MR_Box) (MR_Word) (mercury__bitmap__HighChar_10));
#line 1403 "bitmap.m"
                  MR_hl_field(MR_mktag(1), mercury__bitmap__STATE_VARIABLE_Chars_20_20, 1) = ((MR_Box) (mercury__bitmap__V_21_21));
#line 1403 "bitmap.m"
                }
#line 1404 "bitmap.m"
                mercury__bitmap__V_22_22 = (mercury__bitmap__Index_5 - (MR_Integer) 1);
#line 1404 "bitmap.m"
                /* direct tailcall eliminated */
#line 1404 "bitmap.m"
                {
#line 1404 "bitmap.m"
                  MR_Integer mercury__bitmap__Index__tmp_copy_5 = mercury__bitmap__V_22_22;
#line 1404 "bitmap.m"
                  MR_Word mercury__bitmap__STATE_VARIABLE_Chars_0__tmp_copy_12 = mercury__bitmap__STATE_VARIABLE_Chars_20_20;

#line 1404 "bitmap.m"
                  mercury__bitmap__STATE_VARIABLE_Chars_0_12 = mercury__bitmap__STATE_VARIABLE_Chars_0__tmp_copy_12;
#line 1404 "bitmap.m"
                  mercury__bitmap__Index_5 = mercury__bitmap__Index__tmp_copy_5;
#line 1404 "bitmap.m"
                }
#line 1404 "bitmap.m"
                continue;
#line 1403 "bitmap.m"
              }
#line 1405 "bitmap.m"
            else
#line 1406 "bitmap.m"
              {
#line 1406 "bitmap.m"
                MR_Word mercury__bitmap__TypeCtorInfo_27_27 = (MR_Word) &mercury__exception__exception__type_ctor_info_software_error_0;
#line 1406 "bitmap.m"
                MR_Word mercury__bitmap__V_25_25 = (MR_Word) ((MR_Box) ((MR_String) "bitmap.to_string: internal error"));

#line 1406 "bitmap.m"
                {
#line 1406 "bitmap.m"
                  mercury__exception__throw_1_p_0(mercury__bitmap__TypeCtorInfo_27_27, ((MR_Box) (mercury__bitmap__V_25_25)));
#line 1406 "bitmap.m"
                  return;
                }
#line 1406 "bitmap.m"
              }
#line 1396 "bitmap.m"
          }
#line 1395 "bitmap.m"
      }
#line 1395 "bitmap.m"
      break;
#line 1395 "bitmap.m"
    }
#line 1390 "bitmap.m"
}

#line 1318 "bitmap.m"
static MR_Box MR_CALL 
mercury__bitmap__unsafe_copy_unaligned_bytes_rtol_7_f_0(
#line 1318 "bitmap.m"
  MR_Box mercury__bitmap__SrcBM_9,
#line 1318 "bitmap.m"
  MR_Integer mercury__bitmap__SrcByteIndex_10,
#line 1318 "bitmap.m"
  MR_Integer mercury__bitmap__SrcBitIndex_11,
#line 1318 "bitmap.m"
  MR_Integer mercury__bitmap__PrevSrcByteBits_12,
#line 1318 "bitmap.m"
  MR_Box mercury__bitmap__STATE_VARIABLE_DestBM_0_18,
#line 1318 "bitmap.m"
  MR_Integer mercury__bitmap__DestByteIndex_14,
#line 1318 "bitmap.m"
  MR_Integer mercury__bitmap__NumBytes_15)
#line 1318 "bitmap.m"
{
#line 1327 "bitmap.m"
  while (MR_TRUE)
#line 1327 "bitmap.m"
    {
#line 1327 "bitmap.m"
      /* tailcall optimized into a loop */
#line 1327 "bitmap.m"
      {
#line 1327 "bitmap.m"
        MR_bool mercury__bitmap__succeeded = (mercury__bitmap__NumBytes_15 <= (MR_Integer) 0);
#line 1327 "bitmap.m"
        MR_Box mercury__bitmap__STATE_VARIABLE_DestBM_19;

#line 1327 "bitmap.m"
        if (mercury__bitmap__succeeded)
#line 1325 "bitmap.m"
          mercury__bitmap__STATE_VARIABLE_DestBM_19 = mercury__bitmap__STATE_VARIABLE_DestBM_0_18;
#line 1327 "bitmap.m"
        else
#line 1345 "bitmap.m"
          {
#line 1345 "bitmap.m"
            MR_Integer mercury__bitmap__SrcByteBits_16;
#line 1345 "bitmap.m"
            MR_Integer mercury__bitmap__DestByteBits_17;
#line 1345 "bitmap.m"
            MR_Integer mercury__bitmap__V_21_21;
#line 1345 "bitmap.m"
            MR_Integer mercury__bitmap__V_22_22;
#line 1345 "bitmap.m"
            MR_Integer mercury__bitmap__V_23_23;
#line 1345 "bitmap.m"
            MR_Box mercury__bitmap__STATE_VARIABLE_DestBM_25_25;
#line 1345 "bitmap.m"
            MR_Integer mercury__bitmap__V_27_27;
#line 1345 "bitmap.m"
            MR_Integer mercury__bitmap__V_29_29;
#line 1345 "bitmap.m"
            MR_Integer mercury__bitmap__V_31_31;

#line 1808 "bitmap.m"
{
#define MR_PROC_LABEL mercury__bitmap__unsafe_copy_unaligned_bytes_rtol_7_f_0

	MR_Integer N;
	MR_BitmapPtr BM;
	MR_Integer Byte;

	N =  mercury__bitmap__SrcByteIndex_10 ;
	BM = (MR_BitmapPtr) mercury__bitmap__SrcBM_9 ;
		{
#line 1808 "bitmap.m"

    Byte = (MR_Integer) BM->elements[N];

#line 5211 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__SrcByteBits_16  = Byte;
#line 1808 "bitmap.m"
}
#line 1347 "bitmap.m"
            mercury__bitmap__V_21_21 = (mercury__bitmap__SrcByteBits_16 << mercury__bitmap__SrcBitIndex_11);
#line 1349 "bitmap.m"
            mercury__bitmap__V_23_23 = ((MR_Integer) 8 - mercury__bitmap__SrcBitIndex_11);
#line 1348 "bitmap.m"
            mercury__bitmap__V_22_22 = (mercury__bitmap__PrevSrcByteBits_12 >> mercury__bitmap__V_23_23);
#line 1348 "bitmap.m"
            mercury__bitmap__DestByteBits_17 = (mercury__bitmap__V_21_21 | mercury__bitmap__V_22_22);
#line 1849 "bitmap.m"
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
#line 1849 "bitmap.m"

    BM = BM0;
    BM->elements[N] = (MR_uint_least8_t) Byte;

#line 5244 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__STATE_VARIABLE_DestBM_25_25  = (MR_Box) BM;
#line 1849 "bitmap.m"
}
#line 1352 "bitmap.m"
            mercury__bitmap__V_27_27 = (mercury__bitmap__SrcByteIndex_10 - (MR_Integer) 1);
#line 1354 "bitmap.m"
            mercury__bitmap__V_29_29 = (mercury__bitmap__DestByteIndex_14 - (MR_Integer) 1);
#line 1354 "bitmap.m"
            mercury__bitmap__V_31_31 = (mercury__bitmap__NumBytes_15 - (MR_Integer) 1);
#line 1352 "bitmap.m"
            /* direct tailcall eliminated */
#line 1352 "bitmap.m"
            {
#line 1352 "bitmap.m"
              MR_Integer mercury__bitmap__SrcByteIndex__tmp_copy_10 = mercury__bitmap__V_27_27;
#line 1352 "bitmap.m"
              MR_Integer mercury__bitmap__PrevSrcByteBits__tmp_copy_12 = mercury__bitmap__SrcByteBits_16;
#line 1352 "bitmap.m"
              MR_Box mercury__bitmap__STATE_VARIABLE_DestBM_0__tmp_copy_18 = mercury__bitmap__STATE_VARIABLE_DestBM_25_25;
#line 1352 "bitmap.m"
              MR_Integer mercury__bitmap__DestByteIndex__tmp_copy_14 = mercury__bitmap__V_29_29;
#line 1352 "bitmap.m"
              MR_Integer mercury__bitmap__NumBytes__tmp_copy_15 = mercury__bitmap__V_31_31;

#line 1352 "bitmap.m"
              mercury__bitmap__NumBytes_15 = mercury__bitmap__NumBytes__tmp_copy_15;
#line 1352 "bitmap.m"
              mercury__bitmap__DestByteIndex_14 = mercury__bitmap__DestByteIndex__tmp_copy_14;
#line 1352 "bitmap.m"
              mercury__bitmap__STATE_VARIABLE_DestBM_0_18 = mercury__bitmap__STATE_VARIABLE_DestBM_0__tmp_copy_18;
#line 1352 "bitmap.m"
              mercury__bitmap__PrevSrcByteBits_12 = mercury__bitmap__PrevSrcByteBits__tmp_copy_12;
#line 1352 "bitmap.m"
              mercury__bitmap__SrcByteIndex_10 = mercury__bitmap__SrcByteIndex__tmp_copy_10;
#line 1352 "bitmap.m"
            }
#line 1352 "bitmap.m"
            continue;
#line 1345 "bitmap.m"
          }
#line 1327 "bitmap.m"
        return mercury__bitmap__STATE_VARIABLE_DestBM_19;
#line 1327 "bitmap.m"
      }
#line 1327 "bitmap.m"
      break;
#line 1327 "bitmap.m"
    }
#line 1318 "bitmap.m"
}

#line 1277 "bitmap.m"
static MR_Box MR_CALL 
mercury__bitmap__unsafe_copy_unaligned_bytes_ltor_7_f_0(
#line 1277 "bitmap.m"
  MR_Box mercury__bitmap__SrcBM_9,
#line 1277 "bitmap.m"
  MR_Integer mercury__bitmap__SrcByteIndex_10,
#line 1277 "bitmap.m"
  MR_Integer mercury__bitmap__SrcBitIndex_11,
#line 1277 "bitmap.m"
  MR_Integer mercury__bitmap__PrevSrcByteBits_12,
#line 1277 "bitmap.m"
  MR_Box mercury__bitmap__STATE_VARIABLE_DestBM_0_18,
#line 1277 "bitmap.m"
  MR_Integer mercury__bitmap__DestByteIndex_14,
#line 1277 "bitmap.m"
  MR_Integer mercury__bitmap__NumBytes_15)
#line 1277 "bitmap.m"
{
#line 1286 "bitmap.m"
  while (MR_TRUE)
#line 1286 "bitmap.m"
    {
#line 1286 "bitmap.m"
      /* tailcall optimized into a loop */
#line 1286 "bitmap.m"
      {
#line 1286 "bitmap.m"
        MR_bool mercury__bitmap__succeeded = (mercury__bitmap__NumBytes_15 <= (MR_Integer) 0);
#line 1286 "bitmap.m"
        MR_Box mercury__bitmap__STATE_VARIABLE_DestBM_19;

#line 1286 "bitmap.m"
        if (mercury__bitmap__succeeded)
#line 1284 "bitmap.m"
          mercury__bitmap__STATE_VARIABLE_DestBM_19 = mercury__bitmap__STATE_VARIABLE_DestBM_0_18;
#line 1286 "bitmap.m"
        else
#line 1305 "bitmap.m"
          {
#line 1305 "bitmap.m"
            MR_Integer mercury__bitmap__SrcByteBits_16;
#line 1305 "bitmap.m"
            MR_Integer mercury__bitmap__DestByteBits_17;
#line 1305 "bitmap.m"
            MR_Integer mercury__bitmap__V_21_21;
#line 1305 "bitmap.m"
            MR_Integer mercury__bitmap__V_22_22;
#line 1305 "bitmap.m"
            MR_Integer mercury__bitmap__V_23_23;
#line 1305 "bitmap.m"
            MR_Box mercury__bitmap__STATE_VARIABLE_DestBM_25_25;
#line 1305 "bitmap.m"
            MR_Integer mercury__bitmap__V_27_27;
#line 1305 "bitmap.m"
            MR_Integer mercury__bitmap__V_29_29;
#line 1305 "bitmap.m"
            MR_Integer mercury__bitmap__V_31_31;

#line 1808 "bitmap.m"
{
#define MR_PROC_LABEL mercury__bitmap__unsafe_copy_unaligned_bytes_ltor_7_f_0

	MR_Integer N;
	MR_BitmapPtr BM;
	MR_Integer Byte;

	N =  mercury__bitmap__SrcByteIndex_10 ;
	BM = (MR_BitmapPtr) mercury__bitmap__SrcBM_9 ;
		{
#line 1808 "bitmap.m"

    Byte = (MR_Integer) BM->elements[N];

#line 5373 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__SrcByteBits_16  = Byte;
#line 1808 "bitmap.m"
}
#line 1307 "bitmap.m"
            mercury__bitmap__V_21_21 = (mercury__bitmap__PrevSrcByteBits_12 << mercury__bitmap__SrcBitIndex_11);
#line 1309 "bitmap.m"
            mercury__bitmap__V_23_23 = ((MR_Integer) 8 - mercury__bitmap__SrcBitIndex_11);
#line 1308 "bitmap.m"
            mercury__bitmap__V_22_22 = (mercury__bitmap__SrcByteBits_16 >> mercury__bitmap__V_23_23);
#line 1308 "bitmap.m"
            mercury__bitmap__DestByteBits_17 = (mercury__bitmap__V_21_21 | mercury__bitmap__V_22_22);
#line 1849 "bitmap.m"
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
#line 1849 "bitmap.m"

    BM = BM0;
    BM->elements[N] = (MR_uint_least8_t) Byte;

#line 5406 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__STATE_VARIABLE_DestBM_25_25  = (MR_Box) BM;
#line 1849 "bitmap.m"
}
#line 1312 "bitmap.m"
            mercury__bitmap__V_27_27 = (mercury__bitmap__SrcByteIndex_10 + (MR_Integer) 1);
#line 1313 "bitmap.m"
            mercury__bitmap__V_29_29 = (mercury__bitmap__DestByteIndex_14 + (MR_Integer) 1);
#line 1313 "bitmap.m"
            mercury__bitmap__V_31_31 = (mercury__bitmap__NumBytes_15 - (MR_Integer) 1);
#line 1312 "bitmap.m"
            /* direct tailcall eliminated */
#line 1312 "bitmap.m"
            {
#line 1312 "bitmap.m"
              MR_Integer mercury__bitmap__SrcByteIndex__tmp_copy_10 = mercury__bitmap__V_27_27;
#line 1312 "bitmap.m"
              MR_Integer mercury__bitmap__PrevSrcByteBits__tmp_copy_12 = mercury__bitmap__SrcByteBits_16;
#line 1312 "bitmap.m"
              MR_Box mercury__bitmap__STATE_VARIABLE_DestBM_0__tmp_copy_18 = mercury__bitmap__STATE_VARIABLE_DestBM_25_25;
#line 1312 "bitmap.m"
              MR_Integer mercury__bitmap__DestByteIndex__tmp_copy_14 = mercury__bitmap__V_29_29;
#line 1312 "bitmap.m"
              MR_Integer mercury__bitmap__NumBytes__tmp_copy_15 = mercury__bitmap__V_31_31;

#line 1312 "bitmap.m"
              mercury__bitmap__NumBytes_15 = mercury__bitmap__NumBytes__tmp_copy_15;
#line 1312 "bitmap.m"
              mercury__bitmap__DestByteIndex_14 = mercury__bitmap__DestByteIndex__tmp_copy_14;
#line 1312 "bitmap.m"
              mercury__bitmap__STATE_VARIABLE_DestBM_0_18 = mercury__bitmap__STATE_VARIABLE_DestBM_0__tmp_copy_18;
#line 1312 "bitmap.m"
              mercury__bitmap__PrevSrcByteBits_12 = mercury__bitmap__PrevSrcByteBits__tmp_copy_12;
#line 1312 "bitmap.m"
              mercury__bitmap__SrcByteIndex_10 = mercury__bitmap__SrcByteIndex__tmp_copy_10;
#line 1312 "bitmap.m"
            }
#line 1312 "bitmap.m"
            continue;
#line 1305 "bitmap.m"
          }
#line 1286 "bitmap.m"
        return mercury__bitmap__STATE_VARIABLE_DestBM_19;
#line 1286 "bitmap.m"
      }
#line 1286 "bitmap.m"
      break;
#line 1286 "bitmap.m"
    }
#line 1277 "bitmap.m"
}

#line 1189 "bitmap.m"
static MR_Box MR_CALL 
mercury__bitmap__unsafe_copy_unaligned_bits_6_f_0(
#line 1189 "bitmap.m"
  MR_Integer mercury__bitmap__SameBM_8,
#line 1189 "bitmap.m"
  MR_Box mercury__bitmap__SrcBM_9,
#line 1189 "bitmap.m"
  MR_Integer mercury__bitmap__SrcStartBit_10,
#line 1189 "bitmap.m"
  MR_Box mercury__bitmap__STATE_VARIABLE_DestBM_0_31,
#line 1189 "bitmap.m"
  MR_Integer mercury__bitmap__DestStartBit_12,
#line 1189 "bitmap.m"
  MR_Integer mercury__bitmap__STATE_VARIABLE_NumBits_0_32)
#line 1189 "bitmap.m"
{
#line 1193 "bitmap.m"
  {
#line 1193 "bitmap.m"
    MR_bool mercury__bitmap__succeeded;
#line 1193 "bitmap.m"
    MR_Box mercury__bitmap__STATE_VARIABLE_DestBM_33;
#line 1193 "bitmap.m"
    MR_Integer mercury__bitmap__DestStartIndex_14 = (mercury__bitmap__DestStartBit_12 % (MR_Integer) 8);
#line 1193 "bitmap.m"
    MR_Integer mercury__bitmap__DestEndBit_15;
#line 1193 "bitmap.m"
    MR_Integer mercury__bitmap__NumBitsAtStart_16;
#line 1193 "bitmap.m"
    MR_Integer mercury__bitmap__StartBits_17;
#line 1193 "bitmap.m"
    MR_Integer mercury__bitmap__NewSrcStartBit_18;
#line 1193 "bitmap.m"
    MR_Integer mercury__bitmap__NewDestStartBit_19;
#line 1193 "bitmap.m"
    MR_Integer mercury__bitmap__DestEndIndex_20;
#line 1193 "bitmap.m"
    MR_Integer mercury__bitmap__NumBitsAtEnd_21;
#line 1193 "bitmap.m"
    MR_Integer mercury__bitmap__EndBits_22;
#line 1193 "bitmap.m"
    MR_Integer mercury__bitmap__NumBytes_24;
#line 1193 "bitmap.m"
    MR_Word mercury__bitmap__Direction_25;
#line 1193 "bitmap.m"
    MR_Integer mercury__bitmap__SrcBitIndex_26;
#line 1193 "bitmap.m"
    MR_Integer mercury__bitmap__V_34_34 = (mercury__bitmap__DestStartBit_12 + mercury__bitmap__STATE_VARIABLE_NumBits_0_32);
#line 1193 "bitmap.m"
    MR_Integer mercury__bitmap__STATE_VARIABLE_NumBits_37_37;
#line 1193 "bitmap.m"
    MR_Integer mercury__bitmap__STATE_VARIABLE_NumBits_46_46;
#line 1193 "bitmap.m"
    MR_Box mercury__bitmap__STATE_VARIABLE_DestBM_58_58;
#line 1193 "bitmap.m"
    MR_Box mercury__bitmap__STATE_VARIABLE_DestBM_62_62;
#line 1213 "bitmap.m"
    MR_Integer mercury__bitmap__V_39_39;

#line 1199 "bitmap.m"
    mercury__bitmap__DestEndBit_15 = (mercury__bitmap__V_34_34 - (MR_Integer) 1);
#line 1200 "bitmap.m"
    mercury__bitmap__succeeded = (mercury__bitmap__DestStartIndex_14 == (MR_Integer) 0);
#line 1203 "bitmap.m"
    if (mercury__bitmap__succeeded)
#line 1201 "bitmap.m"
      {
#line 1201 "bitmap.m"
        mercury__bitmap__NumBitsAtStart_16 = (MR_Integer) 0;
#line 1202 "bitmap.m"
        mercury__bitmap__StartBits_17 = (MR_Integer) 0;
#line 1202 "bitmap.m"
        mercury__bitmap__STATE_VARIABLE_NumBits_37_37 = mercury__bitmap__STATE_VARIABLE_NumBits_0_32;
#line 1201 "bitmap.m"
      }
#line 1203 "bitmap.m"
    else
#line 1204 "bitmap.m"
      {
#line 1204 "bitmap.m"
        mercury__bitmap__NumBitsAtStart_16 = ((MR_Integer) 8 - mercury__bitmap__DestStartIndex_14);
#line 1205 "bitmap.m"
        {
#line 1205 "bitmap.m"
          mercury__bitmap__StartBits_17 = mercury__bitmap__unsafe_bits_3_f_0(mercury__bitmap__SrcStartBit_10, mercury__bitmap__NumBitsAtStart_16, mercury__bitmap__SrcBM_9);
        }
#line 1206 "bitmap.m"
        mercury__bitmap__STATE_VARIABLE_NumBits_37_37 = (mercury__bitmap__STATE_VARIABLE_NumBits_0_32 - mercury__bitmap__NumBitsAtStart_16);
#line 1204 "bitmap.m"
      }
#line 1209 "bitmap.m"
    mercury__bitmap__NewSrcStartBit_18 = (mercury__bitmap__SrcStartBit_10 + mercury__bitmap__NumBitsAtStart_16);
#line 1210 "bitmap.m"
    mercury__bitmap__NewDestStartBit_19 = (mercury__bitmap__DestStartBit_12 + mercury__bitmap__NumBitsAtStart_16);
#line 2004 "bitmap.m"
    mercury__bitmap__DestEndIndex_20 = (mercury__bitmap__DestEndBit_15 % (MR_Integer) 8);
#line 1213 "bitmap.m"
    mercury__bitmap__V_39_39 = ((MR_Integer) 8 - mercury__bitmap__DestEndIndex_20);
#line 1213 "bitmap.m"
    mercury__bitmap__succeeded = (mercury__bitmap__V_39_39 == (MR_Integer) 1);
#line 1216 "bitmap.m"
    if (mercury__bitmap__succeeded)
#line 1214 "bitmap.m"
      {
#line 1214 "bitmap.m"
        mercury__bitmap__NumBitsAtEnd_21 = (MR_Integer) 0;
#line 1215 "bitmap.m"
        mercury__bitmap__EndBits_22 = (MR_Integer) 0;
#line 1215 "bitmap.m"
        mercury__bitmap__STATE_VARIABLE_NumBits_46_46 = mercury__bitmap__STATE_VARIABLE_NumBits_37_37;
#line 1214 "bitmap.m"
      }
#line 1216 "bitmap.m"
    else
#line 1217 "bitmap.m"
      {
#line 1217 "bitmap.m"
        MR_Integer mercury__bitmap__SrcEndBit_23;
#line 1217 "bitmap.m"
        MR_Integer mercury__bitmap__V_41_41;
#line 1217 "bitmap.m"
        MR_Integer mercury__bitmap__V_43_43;
#line 1217 "bitmap.m"
        MR_Integer mercury__bitmap__V_44_44;

#line 1217 "bitmap.m"
        mercury__bitmap__NumBitsAtEnd_21 = (mercury__bitmap__DestEndIndex_20 + (MR_Integer) 1);
#line 1218 "bitmap.m"
        mercury__bitmap__V_41_41 = (mercury__bitmap__NewSrcStartBit_18 + mercury__bitmap__STATE_VARIABLE_NumBits_37_37);
#line 1218 "bitmap.m"
        mercury__bitmap__SrcEndBit_23 = (mercury__bitmap__V_41_41 - (MR_Integer) 1);
#line 1220 "bitmap.m"
        mercury__bitmap__V_44_44 = (mercury__bitmap__SrcEndBit_23 - mercury__bitmap__NumBitsAtEnd_21);
#line 1220 "bitmap.m"
        mercury__bitmap__V_43_43 = (mercury__bitmap__V_44_44 + (MR_Integer) 1);
#line 1219 "bitmap.m"
        {
#line 1219 "bitmap.m"
          mercury__bitmap__EndBits_22 = mercury__bitmap__unsafe_bits_3_f_0(mercury__bitmap__V_43_43, mercury__bitmap__NumBitsAtEnd_21, mercury__bitmap__SrcBM_9);
        }
#line 1221 "bitmap.m"
        mercury__bitmap__STATE_VARIABLE_NumBits_46_46 = (mercury__bitmap__STATE_VARIABLE_NumBits_37_37 - mercury__bitmap__NumBitsAtEnd_21);
#line 1217 "bitmap.m"
      }
#line 1227 "bitmap.m"
    mercury__bitmap__NumBytes_24 = (mercury__bitmap__STATE_VARIABLE_NumBits_46_46 / (MR_Integer) 8);
#line 1371 "bitmap.m"
    mercury__bitmap__succeeded = (mercury__bitmap__SameBM_8 == (MR_Integer) 1);
#line 1371 "bitmap.m"
    if (mercury__bitmap__succeeded)
#line 1371 "bitmap.m"
      mercury__bitmap__succeeded = (mercury__bitmap__NewSrcStartBit_18 < mercury__bitmap__NewDestStartBit_19);
#line 1370 "bitmap.m"
    if (mercury__bitmap__succeeded)
#line 1372 "bitmap.m"
      mercury__bitmap__Direction_25 = (MR_Integer) 1;
#line 1370 "bitmap.m"
    else
#line 1373 "bitmap.m"
      mercury__bitmap__Direction_25 = (MR_Integer) 0;
#line 2004 "bitmap.m"
    mercury__bitmap__SrcBitIndex_26 = (mercury__bitmap__NewSrcStartBit_18 % (MR_Integer) 8);
#line 1239 "bitmap.m"
    if ((mercury__bitmap__Direction_25 == (MR_Integer) 0))
#line 1232 "bitmap.m"
      {
#line 1232 "bitmap.m"
        MR_Integer mercury__bitmap__SrcStartByteIndex_27;
#line 1232 "bitmap.m"
        MR_Integer mercury__bitmap__DestStartByteIndex_28;
#line 1232 "bitmap.m"
        MR_Integer mercury__bitmap__V_59_59;
#line 1232 "bitmap.m"
        MR_Integer mercury__bitmap__V_61_61;

#line 1969 "bitmap.m"
        mercury__bitmap__succeeded = (mercury__bitmap__NewSrcStartBit_18 < (MR_Integer) 0);
#line 1968 "bitmap.m"
        if (mercury__bitmap__succeeded)
#line 1970 "bitmap.m"
          mercury__bitmap__SrcStartByteIndex_27 = (MR_Integer) -1;
#line 1968 "bitmap.m"
        else
#line 1972 "bitmap.m"
          {
#line 1972 "bitmap.m"
            mercury__bitmap__SrcStartByteIndex_27 = (mercury__bitmap__NewSrcStartBit_18 / (MR_Integer) 8);
#line 1972 "bitmap.m"
          }
#line 1969 "bitmap.m"
        mercury__bitmap__succeeded = (mercury__bitmap__NewDestStartBit_19 < (MR_Integer) 0);
#line 1968 "bitmap.m"
        if (mercury__bitmap__succeeded)
#line 1970 "bitmap.m"
          mercury__bitmap__DestStartByteIndex_28 = (MR_Integer) -1;
#line 1968 "bitmap.m"
        else
#line 1972 "bitmap.m"
          {
#line 1972 "bitmap.m"
            mercury__bitmap__DestStartByteIndex_28 = (mercury__bitmap__NewDestStartBit_19 / (MR_Integer) 8);
#line 1972 "bitmap.m"
          }
#line 1236 "bitmap.m"
        mercury__bitmap__V_59_59 = (mercury__bitmap__SrcStartByteIndex_27 + (MR_Integer) 1);
#line 1808 "bitmap.m"
{
#define MR_PROC_LABEL mercury__bitmap__unsafe_copy_unaligned_bits_6_f_0

	MR_Integer N;
	MR_BitmapPtr BM;
	MR_Integer Byte;

	N =  mercury__bitmap__SrcStartByteIndex_27 ;
	BM = (MR_BitmapPtr) mercury__bitmap__SrcBM_9 ;
		{
#line 1808 "bitmap.m"

    Byte = (MR_Integer) BM->elements[N];

#line 5682 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__V_61_61  = Byte;
#line 1808 "bitmap.m"
}
#line 1235 "bitmap.m"
        {
#line 1235 "bitmap.m"
          mercury__bitmap__STATE_VARIABLE_DestBM_58_58 = mercury__bitmap__unsafe_copy_unaligned_bytes_ltor_7_f_0(mercury__bitmap__SrcBM_9, mercury__bitmap__V_59_59, mercury__bitmap__SrcBitIndex_26, mercury__bitmap__V_61_61, mercury__bitmap__STATE_VARIABLE_DestBM_0_31, mercury__bitmap__DestStartByteIndex_28, mercury__bitmap__NumBytes_24);
        }
#line 1232 "bitmap.m"
      }
#line 1239 "bitmap.m"
    else
#line 1240 "bitmap.m"
      {
#line 1240 "bitmap.m"
        MR_Integer mercury__bitmap__V_48_48;
#line 1240 "bitmap.m"
        MR_Integer mercury__bitmap__V_49_49 = (mercury__bitmap__NewSrcStartBit_18 + mercury__bitmap__STATE_VARIABLE_NumBits_46_46);
#line 1240 "bitmap.m"
        MR_Integer mercury__bitmap__V_51_51;
#line 1240 "bitmap.m"
        MR_Integer mercury__bitmap__V_52_52;
#line 1240 "bitmap.m"
        MR_Integer mercury__bitmap__V_55_55;
#line 1240 "bitmap.m"
        MR_Integer mercury__bitmap__V_57_57;
#line 1240 "bitmap.m"
        MR_Integer mercury__bitmap__SrcStartByteIndex_69;
#line 1240 "bitmap.m"
        MR_Integer mercury__bitmap__DestStartByteIndex_70;

#line 1241 "bitmap.m"
        mercury__bitmap__V_48_48 = (mercury__bitmap__V_49_49 - (MR_Integer) 1);
#line 1969 "bitmap.m"
        mercury__bitmap__succeeded = (mercury__bitmap__V_48_48 < (MR_Integer) 0);
#line 1968 "bitmap.m"
        if (mercury__bitmap__succeeded)
#line 1970 "bitmap.m"
          mercury__bitmap__SrcStartByteIndex_69 = (MR_Integer) -1;
#line 1968 "bitmap.m"
        else
#line 1972 "bitmap.m"
          {
#line 1972 "bitmap.m"
            mercury__bitmap__SrcStartByteIndex_69 = (mercury__bitmap__V_48_48 / (MR_Integer) 8);
#line 1972 "bitmap.m"
          }
#line 1243 "bitmap.m"
        mercury__bitmap__V_52_52 = (mercury__bitmap__NewDestStartBit_19 + mercury__bitmap__STATE_VARIABLE_NumBits_46_46);
#line 1243 "bitmap.m"
        mercury__bitmap__V_51_51 = (mercury__bitmap__V_52_52 - (MR_Integer) 1);
#line 1969 "bitmap.m"
        mercury__bitmap__succeeded = (mercury__bitmap__V_51_51 < (MR_Integer) 0);
#line 1968 "bitmap.m"
        if (mercury__bitmap__succeeded)
#line 1970 "bitmap.m"
          mercury__bitmap__DestStartByteIndex_70 = (MR_Integer) -1;
#line 1968 "bitmap.m"
        else
#line 1972 "bitmap.m"
          {
#line 1972 "bitmap.m"
            mercury__bitmap__DestStartByteIndex_70 = (mercury__bitmap__V_51_51 / (MR_Integer) 8);
#line 1972 "bitmap.m"
          }
#line 1245 "bitmap.m"
        mercury__bitmap__V_55_55 = (mercury__bitmap__SrcStartByteIndex_69 - (MR_Integer) 1);
#line 1244 "bitmap.m"
        {
#line 1244 "bitmap.m"
          mercury__bitmap__V_57_57 = mercury__bitmap__unsafe_byte_2_f_0(mercury__bitmap__SrcStartByteIndex_69, mercury__bitmap__SrcBM_9);
        }
#line 1244 "bitmap.m"
        {
#line 1244 "bitmap.m"
          mercury__bitmap__STATE_VARIABLE_DestBM_58_58 = mercury__bitmap__unsafe_copy_unaligned_bytes_rtol_7_f_0(mercury__bitmap__SrcBM_9, mercury__bitmap__V_55_55, mercury__bitmap__SrcBitIndex_26, mercury__bitmap__V_57_57, mercury__bitmap__STATE_VARIABLE_DestBM_0_31, mercury__bitmap__DestStartByteIndex_70, mercury__bitmap__NumBytes_24);
        }
#line 1240 "bitmap.m"
      }
#line 1253 "bitmap.m"
    mercury__bitmap__succeeded = (mercury__bitmap__NumBitsAtStart_16 == (MR_Integer) 0);
#line 1253 "bitmap.m"
    mercury__bitmap__succeeded = !(mercury__bitmap__succeeded);
#line 1260 "bitmap.m"
    if (mercury__bitmap__succeeded)
#line 1254 "bitmap.m"
      {
#line 1254 "bitmap.m"
        MR_Integer mercury__bitmap__PartialDestStartByteIndex_29;
#line 1254 "bitmap.m"
        MR_Integer mercury__bitmap__V_63_63;
#line 1254 "bitmap.m"
        MR_Integer mercury__bitmap__V_64_64;

#line 1969 "bitmap.m"
        mercury__bitmap__succeeded = (mercury__bitmap__DestStartBit_12 < (MR_Integer) 0);
#line 1968 "bitmap.m"
        if (mercury__bitmap__succeeded)
#line 1970 "bitmap.m"
          mercury__bitmap__PartialDestStartByteIndex_29 = (MR_Integer) -1;
#line 1968 "bitmap.m"
        else
#line 1972 "bitmap.m"
          {
#line 1972 "bitmap.m"
            mercury__bitmap__PartialDestStartByteIndex_29 = (mercury__bitmap__DestStartBit_12 / (MR_Integer) 8);
#line 1972 "bitmap.m"
          }
#line 1257 "bitmap.m"
        {
#line 1257 "bitmap.m"
          mercury__bitmap__V_64_64 = mercury__bitmap__unsafe_byte_2_f_0(mercury__bitmap__PartialDestStartByteIndex_29, mercury__bitmap__STATE_VARIABLE_DestBM_58_58);
        }
#line 1257 "bitmap.m"
        {
#line 1257 "bitmap.m"
          mercury__bitmap__V_63_63 = mercury__bitmap__set_bits_in_byte_4_f_0(mercury__bitmap__V_64_64, mercury__bitmap__DestStartIndex_14, mercury__bitmap__NumBitsAtStart_16, mercury__bitmap__StartBits_17);
        }
#line 1255 "bitmap.m"
        {
#line 1255 "bitmap.m"
          mercury__bitmap__STATE_VARIABLE_DestBM_62_62 = mercury__bitmap__f_117_110_115_97_102_101_95_98_121_116_101_32_58_61_3_f_0(mercury__bitmap__PartialDestStartByteIndex_29, mercury__bitmap__STATE_VARIABLE_DestBM_58_58, mercury__bitmap__V_63_63);
        }
#line 1254 "bitmap.m"
      }
#line 1260 "bitmap.m"
    else
#line 1255 "bitmap.m"
      mercury__bitmap__STATE_VARIABLE_DestBM_62_62 = mercury__bitmap__STATE_VARIABLE_DestBM_58_58;
#line 1264 "bitmap.m"
    mercury__bitmap__succeeded = (mercury__bitmap__NumBitsAtEnd_21 == (MR_Integer) 0);
#line 1264 "bitmap.m"
    mercury__bitmap__succeeded = !(mercury__bitmap__succeeded);
#line 1271 "bitmap.m"
    if (mercury__bitmap__succeeded)
#line 1265 "bitmap.m"
      {
#line 1265 "bitmap.m"
        MR_Integer mercury__bitmap__PartialDestEndByteIndex_30;
#line 1265 "bitmap.m"
        MR_Integer mercury__bitmap__V_66_66;
#line 1265 "bitmap.m"
        MR_Integer mercury__bitmap__V_67_67;

#line 1265 "bitmap.m"
        {
#line 1265 "bitmap.m"
          mercury__bitmap__PartialDestEndByteIndex_30 = mercury__bitmap__byte_index_for_bit_1_f_0(mercury__bitmap__DestEndBit_15);
        }
#line 1268 "bitmap.m"
        {
#line 1268 "bitmap.m"
          mercury__bitmap__V_67_67 = mercury__bitmap__unsafe_byte_2_f_0(mercury__bitmap__PartialDestEndByteIndex_30, mercury__bitmap__STATE_VARIABLE_DestBM_62_62);
        }
#line 1268 "bitmap.m"
        {
#line 1268 "bitmap.m"
          mercury__bitmap__V_66_66 = mercury__bitmap__set_bits_in_byte_4_f_0(mercury__bitmap__V_67_67, (MR_Integer) 0, mercury__bitmap__NumBitsAtEnd_21, mercury__bitmap__EndBits_22);
        }
#line 1266 "bitmap.m"
        {
#line 1266 "bitmap.m"
          return mercury__bitmap__STATE_VARIABLE_DestBM_33 = mercury__bitmap__f_117_110_115_97_102_101_95_98_121_116_101_32_58_61_3_f_0(mercury__bitmap__PartialDestEndByteIndex_30, mercury__bitmap__STATE_VARIABLE_DestBM_62_62, mercury__bitmap__V_66_66);
        }
#line 1265 "bitmap.m"
      }
#line 1271 "bitmap.m"
    else
#line 1266 "bitmap.m"
      mercury__bitmap__STATE_VARIABLE_DestBM_33 = mercury__bitmap__STATE_VARIABLE_DestBM_62_62;
#line 1193 "bitmap.m"
    return mercury__bitmap__STATE_VARIABLE_DestBM_33;
#line 1193 "bitmap.m"
  }
#line 1189 "bitmap.m"
}

#line 1107 "bitmap.m"
static MR_Box MR_CALL 
mercury__bitmap__unsafe_copy_bytes_6_f_0(
#line 1107 "bitmap.m"
  MR_Integer mercury__bitmap__SameBM_1,
#line 1107 "bitmap.m"
  MR_Box mercury__bitmap__SrcBM_2,
#line 1107 "bitmap.m"
  MR_Integer mercury__bitmap__SrcFirstByteIndex_3,
#line 1107 "bitmap.m"
  MR_Box mercury__bitmap__DestBM0_4,
#line 1107 "bitmap.m"
  MR_Integer mercury__bitmap__DestFirstByteIndex_5,
#line 1107 "bitmap.m"
  MR_Integer mercury__bitmap__NumBytes_6)
#line 1107 "bitmap.m"
{
#line 1110 "bitmap.m"
  {
#line 1110 "bitmap.m"
    MR_bool mercury__bitmap__succeeded;
#line 1110 "bitmap.m"
    MR_Box mercury__bitmap__DestBM_7;

#line 1115 "bitmap.m"
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
#line 1115 "bitmap.m"

    DestBM = DestBM0;
    if (SameBM) {
        memmove(DestBM->elements + DestFirstByteIndex,
            SrcBM->elements + SrcFirstByteIndex, NumBytes);
    } else {
        MR_memcpy(DestBM->elements + DestFirstByteIndex,
            SrcBM->elements + SrcFirstByteIndex, NumBytes);
    }

#line 5917 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__DestBM_7  = (MR_Box) DestBM;
#line 1115 "bitmap.m"
}
#line 1110 "bitmap.m"
    return mercury__bitmap__DestBM_7;
#line 1110 "bitmap.m"
  }
#line 1107 "bitmap.m"
}

#line 1082 "bitmap.m"
MR_Box MR_CALL 
mercury__bitmap__copy_bytes_6_f_0(
#line 1082 "bitmap.m"
  MR_Integer mercury__bitmap__SameBM_8,
#line 1082 "bitmap.m"
  MR_Box mercury__bitmap__SrcBM_9,
#line 1082 "bitmap.m"
  MR_Integer mercury__bitmap__SrcStartByte_10,
#line 1082 "bitmap.m"
  MR_Box mercury__bitmap__DestBM_11,
#line 1082 "bitmap.m"
  MR_Integer mercury__bitmap__DestStartByte_12,
#line 1082 "bitmap.m"
  MR_Integer mercury__bitmap__NumBytes_13)
#line 1082 "bitmap.m"
{
#line 1085 "bitmap.m"
  {
#line 1085 "bitmap.m"
    MR_bool mercury__bitmap__succeeded = (mercury__bitmap__NumBytes_13 == (MR_Integer) 0);
#line 1085 "bitmap.m"
    MR_Box mercury__bitmap__HeadVar__7_7;

#line 1085 "bitmap.m"
    if (mercury__bitmap__succeeded)
#line 1085 "bitmap.m"
      mercury__bitmap__HeadVar__7_7 = mercury__bitmap__DestBM_11;
#line 1085 "bitmap.m"
    else
#line 1085 "bitmap.m"
      {
#line 1091 "bitmap.m"
        MR_Integer mercury__bitmap__V_15_15;
#line 1091 "bitmap.m"
        MR_Integer mercury__bitmap__V_16_16;
#line 1091 "bitmap.m"
        MR_Integer mercury__bitmap__V_17_17;
#line 1091 "bitmap.m"
        MR_Integer mercury__bitmap__V_18_18;
#line 1091 "bitmap.m"
        MR_Integer mercury__bitmap__V_19_19;
#line 1091 "bitmap.m"
        MR_Integer mercury__bitmap__V_20_20;
#line 1091 "bitmap.m"
        MR_Integer mercury__bitmap__V_21_21;
#line 1091 "bitmap.m"
        MR_Integer mercury__bitmap__V_22_22;

#line 1091 "bitmap.m"
        mercury__bitmap__succeeded = (mercury__bitmap__NumBytes_13 > (MR_Integer) 0);
#line 1091 "bitmap.m"
        if (mercury__bitmap__succeeded)
#line 1091 "bitmap.m"
          {
#line 1092 "bitmap.m"
            mercury__bitmap__V_15_15 = (MR_Integer) 0;
#line 1092 "bitmap.m"
            mercury__bitmap__succeeded = (mercury__bitmap__SrcStartByte_10 >= mercury__bitmap__V_15_15);
#line 1091 "bitmap.m"
            if (mercury__bitmap__succeeded)
#line 1091 "bitmap.m"
              {
#line 1093 "bitmap.m"
                mercury__bitmap__V_17_17 = (mercury__bitmap__SrcStartByte_10 + mercury__bitmap__NumBytes_13);
#line 1093 "bitmap.m"
                mercury__bitmap__V_18_18 = (MR_Integer) 1;
#line 1093 "bitmap.m"
                mercury__bitmap__V_16_16 = (mercury__bitmap__V_17_17 - mercury__bitmap__V_18_18);
#line 1093 "bitmap.m"
                {
#line 1093 "bitmap.m"
                  mercury__bitmap__succeeded = mercury__bitmap__byte_in_range_2_p_0(mercury__bitmap__SrcBM_9, mercury__bitmap__V_16_16);
                }
#line 1091 "bitmap.m"
                if (mercury__bitmap__succeeded)
#line 1091 "bitmap.m"
                  {
#line 1094 "bitmap.m"
                    mercury__bitmap__V_19_19 = (MR_Integer) 0;
#line 1094 "bitmap.m"
                    mercury__bitmap__succeeded = (mercury__bitmap__DestStartByte_12 >= mercury__bitmap__V_19_19);
#line 1091 "bitmap.m"
                    if (mercury__bitmap__succeeded)
#line 1091 "bitmap.m"
                      {
#line 1095 "bitmap.m"
                        mercury__bitmap__V_21_21 = (mercury__bitmap__DestStartByte_12 + mercury__bitmap__NumBytes_13);
#line 1095 "bitmap.m"
                        mercury__bitmap__V_22_22 = (MR_Integer) 1;
#line 1095 "bitmap.m"
                        mercury__bitmap__V_20_20 = (mercury__bitmap__V_21_21 - mercury__bitmap__V_22_22);
#line 1095 "bitmap.m"
                        {
#line 1095 "bitmap.m"
                          mercury__bitmap__succeeded = mercury__bitmap__byte_in_range_2_p_0(mercury__bitmap__DestBM_11, mercury__bitmap__V_20_20);
                        }
#line 1091 "bitmap.m"
                      }
#line 1091 "bitmap.m"
                  }
#line 1091 "bitmap.m"
              }
#line 1091 "bitmap.m"
          }
#line 1085 "bitmap.m"
        if (mercury__bitmap__succeeded)
#line 1110 "bitmap.m"
          {
#line 1115 "bitmap.m"
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
#line 1115 "bitmap.m"

    DestBM = DestBM0;
    if (SameBM) {
        memmove(DestBM->elements + DestFirstByteIndex,
            SrcBM->elements + SrcFirstByteIndex, NumBytes);
    } else {
        MR_memcpy(DestBM->elements + DestFirstByteIndex,
            SrcBM->elements + SrcFirstByteIndex, NumBytes);
    }

#line 6070 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__HeadVar__7_7  = (MR_Box) DestBM;
#line 1115 "bitmap.m"
}
#line 1110 "bitmap.m"
          }
#line 1085 "bitmap.m"
        else
#line 1100 "bitmap.m"
          {
#line 1100 "bitmap.m"
            MR_Word mercury__bitmap__TypeCtorInfo_4_48 = (MR_Word) &mercury__bitmap__bitmap__type_ctor_info_bitmap_error_0;
#line 1100 "bitmap.m"
            MR_Word mercury__bitmap__V_47_47 = (MR_Word) ((MR_Box) ((MR_String) "bitmap.copy_bytes: out of range"));

#line 2112 "bitmap.m"
            {
#line 2112 "bitmap.m"
              mercury__exception__throw_1_p_0(mercury__bitmap__TypeCtorInfo_4_48, ((MR_Box) (mercury__bitmap__V_47_47)));
            }
#line 1100 "bitmap.m"
          }
#line 1085 "bitmap.m"
      }
#line 1085 "bitmap.m"
    return mercury__bitmap__HeadVar__7_7;
#line 1085 "bitmap.m"
  }
#line 1082 "bitmap.m"
}

#line 956 "bitmap.m"
static MR_Box MR_CALL 
mercury__bitmap__unsafe_copy_bits_6_f_0(
#line 956 "bitmap.m"
  MR_Integer mercury__bitmap__SameBM_8,
#line 956 "bitmap.m"
  MR_Box mercury__bitmap__SrcBM_9,
#line 956 "bitmap.m"
  MR_Integer mercury__bitmap__SrcStartBit_10,
#line 956 "bitmap.m"
  MR_Box mercury__bitmap__STATE_VARIABLE_DestBM_0_30,
#line 956 "bitmap.m"
  MR_Integer mercury__bitmap__DestStartBit_12,
#line 956 "bitmap.m"
  MR_Integer mercury__bitmap__STATE_VARIABLE_NumBits_0_31)
#line 956 "bitmap.m"
{
#line 960 "bitmap.m"
  {
#line 960 "bitmap.m"
    MR_bool mercury__bitmap__succeeded = (mercury__bitmap__STATE_VARIABLE_NumBits_0_31 < (MR_Integer) 16);
#line 960 "bitmap.m"
    MR_Box mercury__bitmap__STATE_VARIABLE_DestBM_32;
#line 960 "bitmap.m"
    MR_Integer mercury__bitmap__SrcStartIndex_14 = (mercury__bitmap__SrcStartBit_10 % (MR_Integer) 8);
#line 960 "bitmap.m"
    MR_Integer mercury__bitmap__DestStartIndex_15 = (mercury__bitmap__DestStartBit_12 % (MR_Integer) 8);

#line 970 "bitmap.m"
    if (mercury__bitmap__succeeded)
#line 968 "bitmap.m"
      {
#line 968 "bitmap.m"
        MR_Integer mercury__bitmap__V_37_37;

#line 968 "bitmap.m"
        {
#line 968 "bitmap.m"
          mercury__bitmap__V_37_37 = mercury__bitmap__unsafe_bits_3_f_0(mercury__bitmap__SrcStartBit_10, mercury__bitmap__STATE_VARIABLE_NumBits_0_31, mercury__bitmap__SrcBM_9);
        }
#line 968 "bitmap.m"
        {
#line 968 "bitmap.m"
          return mercury__bitmap__STATE_VARIABLE_DestBM_32 = mercury__bitmap__f_117_110_115_97_102_101_95_98_105_116_115_32_58_61_4_f_0(mercury__bitmap__DestStartBit_12, mercury__bitmap__STATE_VARIABLE_NumBits_0_31, mercury__bitmap__STATE_VARIABLE_DestBM_0_30, mercury__bitmap__V_37_37);
        }
#line 968 "bitmap.m"
      }
#line 970 "bitmap.m"
    else
#line 1062 "bitmap.m"
      {
#line 970 "bitmap.m"
        mercury__bitmap__succeeded = (mercury__bitmap__SrcStartIndex_14 == mercury__bitmap__DestStartIndex_15);
#line 1062 "bitmap.m"
        if (mercury__bitmap__succeeded)
#line 977 "bitmap.m"
          {
#line 977 "bitmap.m"
            MR_Integer mercury__bitmap__SrcEndBit_17;
#line 977 "bitmap.m"
            MR_Integer mercury__bitmap__EndIndex_18;
#line 977 "bitmap.m"
            MR_Integer mercury__bitmap__V_38_38 = (mercury__bitmap__SrcStartBit_10 + mercury__bitmap__STATE_VARIABLE_NumBits_0_31);
#line 981 "bitmap.m"
            MR_Integer mercury__bitmap__V_40_40;
#line 981 "bitmap.m"
            MR_Integer mercury__bitmap__V_41_41;

#line 978 "bitmap.m"
            mercury__bitmap__SrcEndBit_17 = (mercury__bitmap__V_38_38 - (MR_Integer) 1);
#line 2004 "bitmap.m"
            mercury__bitmap__EndIndex_18 = (mercury__bitmap__SrcEndBit_17 % (MR_Integer) 8);
#line 981 "bitmap.m"
            mercury__bitmap__succeeded = (mercury__bitmap__SrcStartIndex_14 == (MR_Integer) 0);
#line 981 "bitmap.m"
            if (mercury__bitmap__succeeded)
#line 981 "bitmap.m"
              {
#line 1960 "bitmap.m"
                mercury__bitmap__V_40_40 = (MR_Integer) 8;
#line 982 "bitmap.m"
                mercury__bitmap__V_41_41 = (mercury__bitmap__V_40_40 - mercury__bitmap__EndIndex_18);
#line 982 "bitmap.m"
                mercury__bitmap__succeeded = (mercury__bitmap__V_41_41 == (MR_Integer) 1);
#line 981 "bitmap.m"
              }
#line 993 "bitmap.m"
            if (mercury__bitmap__succeeded)
#line 987 "bitmap.m"
              {
#line 987 "bitmap.m"
                MR_Integer mercury__bitmap__NumBytes_19 = (mercury__bitmap__STATE_VARIABLE_NumBits_0_31 / (MR_Integer) 8);
#line 987 "bitmap.m"
                MR_Integer mercury__bitmap__SrcStartByteIndex_20 = (mercury__bitmap__SrcStartBit_10 / (MR_Integer) 8);
#line 987 "bitmap.m"
                MR_Integer mercury__bitmap__DestStartByteIndex_21 = (mercury__bitmap__DestStartBit_12 / (MR_Integer) 8);

#line 991 "bitmap.m"
                {
#line 991 "bitmap.m"
                  return mercury__bitmap__STATE_VARIABLE_DestBM_32 = mercury__bitmap__unsafe_copy_bytes_6_f_0(mercury__bitmap__SameBM_8, mercury__bitmap__SrcBM_9, mercury__bitmap__SrcStartByteIndex_20, mercury__bitmap__STATE_VARIABLE_DestBM_0_30, mercury__bitmap__DestStartByteIndex_21, mercury__bitmap__NumBytes_19);
                }
#line 987 "bitmap.m"
              }
#line 993 "bitmap.m"
            else
#line 1010 "bitmap.m"
              {
#line 1010 "bitmap.m"
                MR_Integer mercury__bitmap__NumBitsAtStart_22;
#line 1010 "bitmap.m"
                MR_Integer mercury__bitmap__StartBitsToSet_23;
#line 1010 "bitmap.m"
                MR_Integer mercury__bitmap__NumBitsAtEnd_25;
#line 1010 "bitmap.m"
                MR_Integer mercury__bitmap__EndBitsToSet_26;
#line 1010 "bitmap.m"
                MR_Integer mercury__bitmap__STATE_VARIABLE_NumBits_48_48;
#line 1010 "bitmap.m"
                MR_Integer mercury__bitmap__V_56_56;
#line 1010 "bitmap.m"
                MR_Integer mercury__bitmap__V_58_58;
#line 1010 "bitmap.m"
                MR_Box mercury__bitmap__STATE_VARIABLE_DestBM_60_60;
#line 1010 "bitmap.m"
                MR_Box mercury__bitmap__STATE_VARIABLE_DestBM_62_62;
#line 1010 "bitmap.m"
                MR_Integer mercury__bitmap__NumBytes_72;
#line 1010 "bitmap.m"
                MR_Integer mercury__bitmap__SrcStartByteIndex_73;
#line 1010 "bitmap.m"
                MR_Integer mercury__bitmap__DestStartByteIndex_74;
#line 1010 "bitmap.m"
                MR_Integer mercury__bitmap__STATE_VARIABLE_NumBits_54_75;
#line 1012 "bitmap.m"
                MR_Integer mercury__bitmap__V_50_50;

#line 998 "bitmap.m"
                mercury__bitmap__succeeded = (mercury__bitmap__SrcStartIndex_14 == (MR_Integer) 0);
#line 1001 "bitmap.m"
                if (mercury__bitmap__succeeded)
#line 999 "bitmap.m"
                  {
#line 999 "bitmap.m"
                    mercury__bitmap__NumBitsAtStart_22 = (MR_Integer) 0;
#line 1000 "bitmap.m"
                    mercury__bitmap__StartBitsToSet_23 = (MR_Integer) 0;
#line 1000 "bitmap.m"
                    mercury__bitmap__STATE_VARIABLE_NumBits_48_48 = mercury__bitmap__STATE_VARIABLE_NumBits_0_31;
#line 999 "bitmap.m"
                  }
#line 1001 "bitmap.m"
                else
#line 1002 "bitmap.m"
                  {
#line 1002 "bitmap.m"
                    MR_Integer mercury__bitmap__SrcPartialStartByteIndex_24;
#line 1002 "bitmap.m"
                    MR_Integer mercury__bitmap__V_47_47;

#line 1002 "bitmap.m"
                    mercury__bitmap__NumBitsAtStart_22 = ((MR_Integer) 8 - mercury__bitmap__SrcStartIndex_14);
#line 1969 "bitmap.m"
                    mercury__bitmap__succeeded = (mercury__bitmap__SrcStartBit_10 < (MR_Integer) 0);
#line 1968 "bitmap.m"
                    if (mercury__bitmap__succeeded)
#line 1970 "bitmap.m"
                      mercury__bitmap__SrcPartialStartByteIndex_24 = (MR_Integer) -1;
#line 1968 "bitmap.m"
                    else
#line 1972 "bitmap.m"
                      {
#line 1972 "bitmap.m"
                        mercury__bitmap__SrcPartialStartByteIndex_24 = (mercury__bitmap__SrcStartBit_10 / (MR_Integer) 8);
#line 1972 "bitmap.m"
                      }
#line 1808 "bitmap.m"
{
#define MR_PROC_LABEL mercury__bitmap__unsafe_copy_bits_6_f_0

	MR_Integer N;
	MR_BitmapPtr BM;
	MR_Integer Byte;

	N =  mercury__bitmap__SrcPartialStartByteIndex_24 ;
	BM = (MR_BitmapPtr) mercury__bitmap__SrcBM_9 ;
		{
#line 1808 "bitmap.m"

    Byte = (MR_Integer) BM->elements[N];

#line 6295 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__V_47_47  = Byte;
#line 1808 "bitmap.m"
}
#line 1005 "bitmap.m"
                    {
#line 1005 "bitmap.m"
                      mercury__bitmap__StartBitsToSet_23 = mercury__bitmap__extract_bits_from_byte_3_f_0(mercury__bitmap__V_47_47, mercury__bitmap__SrcStartIndex_14, mercury__bitmap__NumBitsAtStart_22);
                    }
#line 1009 "bitmap.m"
                    mercury__bitmap__STATE_VARIABLE_NumBits_48_48 = (mercury__bitmap__STATE_VARIABLE_NumBits_0_31 - mercury__bitmap__NumBitsAtStart_22);
#line 1002 "bitmap.m"
                  }
#line 1012 "bitmap.m"
                mercury__bitmap__V_50_50 = ((MR_Integer) 8 - mercury__bitmap__EndIndex_18);
#line 1012 "bitmap.m"
                mercury__bitmap__succeeded = (mercury__bitmap__V_50_50 == (MR_Integer) 1);
#line 1015 "bitmap.m"
                if (mercury__bitmap__succeeded)
#line 1013 "bitmap.m"
                  {
#line 1013 "bitmap.m"
                    mercury__bitmap__NumBitsAtEnd_25 = (MR_Integer) 0;
#line 1014 "bitmap.m"
                    mercury__bitmap__EndBitsToSet_26 = (MR_Integer) 0;
#line 1014 "bitmap.m"
                    mercury__bitmap__STATE_VARIABLE_NumBits_54_75 = mercury__bitmap__STATE_VARIABLE_NumBits_48_48;
#line 1013 "bitmap.m"
                  }
#line 1015 "bitmap.m"
                else
#line 1016 "bitmap.m"
                  {
#line 1016 "bitmap.m"
                    MR_Integer mercury__bitmap__SrcPartialEndByteIndex_27;
#line 1016 "bitmap.m"
                    MR_Integer mercury__bitmap__V_52_52;

#line 1016 "bitmap.m"
                    mercury__bitmap__NumBitsAtEnd_25 = (mercury__bitmap__EndIndex_18 + (MR_Integer) 1);
#line 1969 "bitmap.m"
                    mercury__bitmap__succeeded = (mercury__bitmap__SrcEndBit_17 < (MR_Integer) 0);
#line 1968 "bitmap.m"
                    if (mercury__bitmap__succeeded)
#line 1970 "bitmap.m"
                      mercury__bitmap__SrcPartialEndByteIndex_27 = (MR_Integer) -1;
#line 1968 "bitmap.m"
                    else
#line 1972 "bitmap.m"
                      {
#line 1972 "bitmap.m"
                        mercury__bitmap__SrcPartialEndByteIndex_27 = (mercury__bitmap__SrcEndBit_17 / (MR_Integer) 8);
#line 1972 "bitmap.m"
                      }
#line 1019 "bitmap.m"
                    {
#line 1019 "bitmap.m"
                      mercury__bitmap__V_52_52 = mercury__bitmap__unsafe_byte_2_f_0(mercury__bitmap__SrcPartialEndByteIndex_27, mercury__bitmap__SrcBM_9);
                    }
#line 1019 "bitmap.m"
                    {
#line 1019 "bitmap.m"
                      mercury__bitmap__EndBitsToSet_26 = mercury__bitmap__extract_bits_from_byte_3_f_0(mercury__bitmap__V_52_52, (MR_Integer) 0, mercury__bitmap__NumBitsAtEnd_25);
                    }
#line 1023 "bitmap.m"
                    mercury__bitmap__STATE_VARIABLE_NumBits_54_75 = (mercury__bitmap__STATE_VARIABLE_NumBits_48_48 - mercury__bitmap__NumBitsAtEnd_25);
#line 1016 "bitmap.m"
                  }
#line 1029 "bitmap.m"
                mercury__bitmap__NumBytes_72 = (mercury__bitmap__STATE_VARIABLE_NumBits_54_75 / (MR_Integer) 8);
#line 1030 "bitmap.m"
                mercury__bitmap__V_56_56 = (mercury__bitmap__SrcStartBit_10 + mercury__bitmap__NumBitsAtStart_22);
#line 1031 "bitmap.m"
                mercury__bitmap__SrcStartByteIndex_73 = (mercury__bitmap__V_56_56 / (MR_Integer) 8);
#line 1032 "bitmap.m"
                mercury__bitmap__V_58_58 = (mercury__bitmap__DestStartBit_12 + mercury__bitmap__NumBitsAtStart_22);
#line 1033 "bitmap.m"
                mercury__bitmap__DestStartByteIndex_74 = (mercury__bitmap__V_58_58 / (MR_Integer) 8);
#line 1034 "bitmap.m"
                {
#line 1034 "bitmap.m"
                  mercury__bitmap__STATE_VARIABLE_DestBM_60_60 = mercury__bitmap__unsafe_copy_bytes_6_f_0(mercury__bitmap__SameBM_8, mercury__bitmap__SrcBM_9, mercury__bitmap__SrcStartByteIndex_73, mercury__bitmap__STATE_VARIABLE_DestBM_0_30, mercury__bitmap__DestStartByteIndex_74, mercury__bitmap__NumBytes_72);
                }
#line 1040 "bitmap.m"
                mercury__bitmap__succeeded = (mercury__bitmap__NumBitsAtStart_22 == (MR_Integer) 0);
#line 1040 "bitmap.m"
                mercury__bitmap__succeeded = !(mercury__bitmap__succeeded);
#line 1047 "bitmap.m"
                if (mercury__bitmap__succeeded)
#line 1041 "bitmap.m"
                  {
#line 1041 "bitmap.m"
                    MR_Integer mercury__bitmap__DestPartialStartByteIndex_28 = (mercury__bitmap__DestStartByteIndex_74 - (MR_Integer) 1);
#line 1041 "bitmap.m"
                    MR_Integer mercury__bitmap__V_63_63;
#line 1041 "bitmap.m"
                    MR_Integer mercury__bitmap__V_64_64;

#line 1044 "bitmap.m"
                    {
#line 1044 "bitmap.m"
                      mercury__bitmap__V_64_64 = mercury__bitmap__unsafe_byte_2_f_0(mercury__bitmap__DestPartialStartByteIndex_28, mercury__bitmap__STATE_VARIABLE_DestBM_60_60);
                    }
#line 1044 "bitmap.m"
                    {
#line 1044 "bitmap.m"
                      mercury__bitmap__V_63_63 = mercury__bitmap__set_bits_in_byte_4_f_0(mercury__bitmap__V_64_64, mercury__bitmap__SrcStartIndex_14, mercury__bitmap__NumBitsAtStart_22, mercury__bitmap__StartBitsToSet_23);
                    }
#line 1042 "bitmap.m"
                    {
#line 1042 "bitmap.m"
                      mercury__bitmap__STATE_VARIABLE_DestBM_62_62 = mercury__bitmap__f_117_110_115_97_102_101_95_98_121_116_101_32_58_61_3_f_0(mercury__bitmap__DestPartialStartByteIndex_28, mercury__bitmap__STATE_VARIABLE_DestBM_60_60, mercury__bitmap__V_63_63);
                    }
#line 1041 "bitmap.m"
                  }
#line 1047 "bitmap.m"
                else
#line 1042 "bitmap.m"
                  mercury__bitmap__STATE_VARIABLE_DestBM_62_62 = mercury__bitmap__STATE_VARIABLE_DestBM_60_60;
#line 1051 "bitmap.m"
                mercury__bitmap__succeeded = (mercury__bitmap__NumBitsAtEnd_25 == (MR_Integer) 0);
#line 1051 "bitmap.m"
                mercury__bitmap__succeeded = !(mercury__bitmap__succeeded);
#line 1058 "bitmap.m"
                if (mercury__bitmap__succeeded)
#line 1052 "bitmap.m"
                  {
#line 1052 "bitmap.m"
                    MR_Integer mercury__bitmap__DestPartialEndByteIndex_29 = (mercury__bitmap__DestStartByteIndex_74 + mercury__bitmap__NumBytes_72);
#line 1052 "bitmap.m"
                    MR_Integer mercury__bitmap__V_66_66;
#line 1052 "bitmap.m"
                    MR_Integer mercury__bitmap__V_67_67;

#line 1055 "bitmap.m"
                    {
#line 1055 "bitmap.m"
                      mercury__bitmap__V_67_67 = mercury__bitmap__unsafe_byte_2_f_0(mercury__bitmap__DestPartialEndByteIndex_29, mercury__bitmap__STATE_VARIABLE_DestBM_62_62);
                    }
#line 1055 "bitmap.m"
                    {
#line 1055 "bitmap.m"
                      mercury__bitmap__V_66_66 = mercury__bitmap__set_bits_in_byte_4_f_0(mercury__bitmap__V_67_67, (MR_Integer) 0, mercury__bitmap__NumBitsAtEnd_25, mercury__bitmap__EndBitsToSet_26);
                    }
#line 1053 "bitmap.m"
                    {
#line 1053 "bitmap.m"
                      return mercury__bitmap__STATE_VARIABLE_DestBM_32 = mercury__bitmap__f_117_110_115_97_102_101_95_98_121_116_101_32_58_61_3_f_0(mercury__bitmap__DestPartialEndByteIndex_29, mercury__bitmap__STATE_VARIABLE_DestBM_62_62, mercury__bitmap__V_66_66);
                    }
#line 1052 "bitmap.m"
                  }
#line 1058 "bitmap.m"
                else
#line 1053 "bitmap.m"
                  mercury__bitmap__STATE_VARIABLE_DestBM_32 = mercury__bitmap__STATE_VARIABLE_DestBM_62_62;
#line 1010 "bitmap.m"
              }
#line 977 "bitmap.m"
          }
#line 1062 "bitmap.m"
        else
#line 1063 "bitmap.m"
          {
#line 1063 "bitmap.m"
            return mercury__bitmap__STATE_VARIABLE_DestBM_32 = mercury__bitmap__unsafe_copy_unaligned_bits_6_f_0(mercury__bitmap__SameBM_8, mercury__bitmap__SrcBM_9, mercury__bitmap__SrcStartBit_10, mercury__bitmap__STATE_VARIABLE_DestBM_0_30, mercury__bitmap__DestStartBit_12, mercury__bitmap__STATE_VARIABLE_NumBits_0_31);
          }
#line 1062 "bitmap.m"
      }
#line 960 "bitmap.m"
    return mercury__bitmap__STATE_VARIABLE_DestBM_32;
#line 960 "bitmap.m"
  }
#line 956 "bitmap.m"
}

#line 919 "bitmap.m"
MR_Box MR_CALL 
mercury__bitmap__copy_bits_6_f_0(
#line 919 "bitmap.m"
  MR_Integer mercury__bitmap__SameBM_8,
#line 919 "bitmap.m"
  MR_Box mercury__bitmap__SrcBM_9,
#line 919 "bitmap.m"
  MR_Integer mercury__bitmap__SrcStartBit_10,
#line 919 "bitmap.m"
  MR_Box mercury__bitmap__DestBM_11,
#line 919 "bitmap.m"
  MR_Integer mercury__bitmap__DestStartBit_12,
#line 919 "bitmap.m"
  MR_Integer mercury__bitmap__NumBits_13)
#line 919 "bitmap.m"
{
#line 921 "bitmap.m"
  {
#line 921 "bitmap.m"
    MR_bool mercury__bitmap__succeeded = (mercury__bitmap__NumBits_13 >= (MR_Integer) 0);
#line 921 "bitmap.m"
    MR_Box mercury__bitmap__HeadVar__7_7;
#line 923 "bitmap.m"
    MR_Integer mercury__bitmap__V_15_15;
#line 923 "bitmap.m"
    MR_Integer mercury__bitmap__V_16_16;
#line 923 "bitmap.m"
    MR_Integer mercury__bitmap__V_17_17;
#line 923 "bitmap.m"
    MR_Integer mercury__bitmap__V_18_18;
#line 923 "bitmap.m"
    MR_Integer mercury__bitmap__V_36_36;
#line 923 "bitmap.m"
    MR_Integer mercury__bitmap__V_37_37;
#line 923 "bitmap.m"
    MR_Integer mercury__bitmap__V_43_43;
#line 923 "bitmap.m"
    MR_Integer mercury__bitmap__V_44_44;

#line 923 "bitmap.m"
    if (mercury__bitmap__succeeded)
#line 923 "bitmap.m"
      {
#line 924 "bitmap.m"
        mercury__bitmap__V_15_15 = (MR_Integer) 0;
#line 924 "bitmap.m"
        mercury__bitmap__succeeded = (mercury__bitmap__SrcStartBit_10 >= mercury__bitmap__V_15_15);
#line 923 "bitmap.m"
        if (mercury__bitmap__succeeded)
#line 923 "bitmap.m"
          {
#line 925 "bitmap.m"
            mercury__bitmap__V_16_16 = (MR_Integer) 0;
#line 925 "bitmap.m"
            mercury__bitmap__succeeded = (mercury__bitmap__DestStartBit_12 >= mercury__bitmap__V_16_16);
#line 923 "bitmap.m"
            if (mercury__bitmap__succeeded)
#line 923 "bitmap.m"
              {
#line 926 "bitmap.m"
                mercury__bitmap__V_17_17 = (mercury__bitmap__SrcStartBit_10 + mercury__bitmap__NumBits_13);
#line 540 "bitmap.m"
                mercury__bitmap__V_36_36 = (MR_Integer) 0;
#line 540 "bitmap.m"
                mercury__bitmap__succeeded = (mercury__bitmap__V_36_36 <= mercury__bitmap__V_17_17);
#line 923 "bitmap.m"
                if (mercury__bitmap__succeeded)
#line 923 "bitmap.m"
                  {
#line 1734 "bitmap.m"
{
#define MR_PROC_LABEL mercury__bitmap__copy_bits_6_f_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr) mercury__bitmap__SrcBM_9 ;
		{
#line 1734 "bitmap.m"

    NumBits = BM->num_bits;

#line 6556 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__V_37_37  = NumBits;
#line 1734 "bitmap.m"
}
#line 540 "bitmap.m"
                    mercury__bitmap__succeeded = (mercury__bitmap__V_17_17 <= mercury__bitmap__V_37_37);
#line 923 "bitmap.m"
                    if (mercury__bitmap__succeeded)
#line 923 "bitmap.m"
                      {
#line 927 "bitmap.m"
                        mercury__bitmap__V_18_18 = (mercury__bitmap__DestStartBit_12 + mercury__bitmap__NumBits_13);
#line 540 "bitmap.m"
                        mercury__bitmap__V_43_43 = (MR_Integer) 0;
#line 540 "bitmap.m"
                        mercury__bitmap__succeeded = (mercury__bitmap__V_43_43 <= mercury__bitmap__V_18_18);
#line 923 "bitmap.m"
                        if (mercury__bitmap__succeeded)
#line 923 "bitmap.m"
                          {
#line 1734 "bitmap.m"
{
#define MR_PROC_LABEL mercury__bitmap__copy_bits_6_f_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr) mercury__bitmap__DestBM_11 ;
		{
#line 1734 "bitmap.m"

    NumBits = BM->num_bits;

#line 6592 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__V_44_44  = NumBits;
#line 1734 "bitmap.m"
}
#line 540 "bitmap.m"
                            mercury__bitmap__succeeded = (mercury__bitmap__V_18_18 <= mercury__bitmap__V_44_44);
#line 923 "bitmap.m"
                          }
#line 923 "bitmap.m"
                      }
#line 923 "bitmap.m"
                  }
#line 923 "bitmap.m"
              }
#line 923 "bitmap.m"
          }
#line 923 "bitmap.m"
      }
#line 921 "bitmap.m"
    if (mercury__bitmap__succeeded)
#line 929 "bitmap.m"
      {
#line 929 "bitmap.m"
        return mercury__bitmap__HeadVar__7_7 = mercury__bitmap__unsafe_copy_bits_6_f_0(mercury__bitmap__SameBM_8, mercury__bitmap__SrcBM_9, mercury__bitmap__SrcStartBit_10, mercury__bitmap__DestBM_11, mercury__bitmap__DestStartBit_12, mercury__bitmap__NumBits_13);
      }
#line 921 "bitmap.m"
    else
#line 921 "bitmap.m"
      {
#line 933 "bitmap.m"
        mercury__bitmap__succeeded = (mercury__bitmap__NumBits_13 < (MR_Integer) 0);
#line 934 "bitmap.m"
        if (!(mercury__bitmap__succeeded))
#line 934 "bitmap.m"
          {
#line 934 "bitmap.m"
            mercury__bitmap__succeeded = (mercury__bitmap__SrcStartBit_10 < (MR_Integer) 0);
#line 934 "bitmap.m"
            if (!(mercury__bitmap__succeeded))
#line 935 "bitmap.m"
              {
#line 935 "bitmap.m"
                MR_Integer mercury__bitmap__V_19_19;
#line 935 "bitmap.m"
                MR_Integer mercury__bitmap__V_20_20 = (mercury__bitmap__SrcStartBit_10 + mercury__bitmap__NumBits_13);
#line 935 "bitmap.m"
                MR_Integer mercury__bitmap__V_51_51;

#line 935 "bitmap.m"
                mercury__bitmap__V_19_19 = (mercury__bitmap__V_20_20 - (MR_Integer) 1);
#line 535 "bitmap.m"
                mercury__bitmap__succeeded = ((MR_Integer) 0 <= mercury__bitmap__V_19_19);
#line 935 "bitmap.m"
                if (mercury__bitmap__succeeded)
#line 935 "bitmap.m"
                  {
#line 1734 "bitmap.m"
{
#define MR_PROC_LABEL mercury__bitmap__copy_bits_6_f_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr) mercury__bitmap__SrcBM_9 ;
		{
#line 1734 "bitmap.m"

    NumBits = BM->num_bits;

#line 6664 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__V_51_51  = NumBits;
#line 1734 "bitmap.m"
}
#line 535 "bitmap.m"
                    mercury__bitmap__succeeded = (mercury__bitmap__V_19_19 < mercury__bitmap__V_51_51);
#line 935 "bitmap.m"
                  }
#line 935 "bitmap.m"
                mercury__bitmap__succeeded = !(mercury__bitmap__succeeded);
#line 935 "bitmap.m"
              }
#line 934 "bitmap.m"
          }
#line 921 "bitmap.m"
        if (mercury__bitmap__succeeded)
#line 938 "bitmap.m"
          {
#line 2085 "bitmap.m"
            {
#line 2085 "bitmap.m"
              mercury__bitmap__throw_bounds_error_4_p_0(mercury__bitmap__SrcBM_9, (MR_String) "copy_bits (source)", mercury__bitmap__SrcStartBit_10, mercury__bitmap__NumBits_13);
            }
#line 938 "bitmap.m"
          }
#line 921 "bitmap.m"
        else
#line 921 "bitmap.m"
          {
#line 941 "bitmap.m"
            mercury__bitmap__succeeded = (mercury__bitmap__DestStartBit_12 < (MR_Integer) 0);
#line 942 "bitmap.m"
            if (!(mercury__bitmap__succeeded))
#line 942 "bitmap.m"
              {
#line 942 "bitmap.m"
                MR_Integer mercury__bitmap__V_25_25;
#line 942 "bitmap.m"
                MR_Integer mercury__bitmap__V_26_26 = (mercury__bitmap__DestStartBit_12 + mercury__bitmap__NumBits_13);
#line 942 "bitmap.m"
                MR_Integer mercury__bitmap__V_63_63;

#line 942 "bitmap.m"
                mercury__bitmap__V_25_25 = (mercury__bitmap__V_26_26 - (MR_Integer) 1);
#line 535 "bitmap.m"
                mercury__bitmap__succeeded = ((MR_Integer) 0 <= mercury__bitmap__V_25_25);
#line 942 "bitmap.m"
                if (mercury__bitmap__succeeded)
#line 942 "bitmap.m"
                  {
#line 1734 "bitmap.m"
{
#define MR_PROC_LABEL mercury__bitmap__copy_bits_6_f_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr) mercury__bitmap__DestBM_11 ;
		{
#line 1734 "bitmap.m"

    NumBits = BM->num_bits;

#line 6730 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__V_63_63  = NumBits;
#line 1734 "bitmap.m"
}
#line 535 "bitmap.m"
                    mercury__bitmap__succeeded = (mercury__bitmap__V_25_25 < mercury__bitmap__V_63_63);
#line 942 "bitmap.m"
                  }
#line 942 "bitmap.m"
                mercury__bitmap__succeeded = !(mercury__bitmap__succeeded);
#line 942 "bitmap.m"
              }
#line 921 "bitmap.m"
            if (mercury__bitmap__succeeded)
#line 945 "bitmap.m"
              {
#line 2085 "bitmap.m"
                {
#line 2085 "bitmap.m"
                  mercury__bitmap__throw_bounds_error_4_p_0(mercury__bitmap__DestBM_11, (MR_String) "copy_bits (destination)", mercury__bitmap__DestStartBit_12, mercury__bitmap__NumBits_13);
                }
#line 945 "bitmap.m"
              }
#line 921 "bitmap.m"
            else
#line 948 "bitmap.m"
              {
#line 948 "bitmap.m"
                MR_Word mercury__bitmap__TypeCtorInfo_4_76 = (MR_Word) &mercury__bitmap__bitmap__type_ctor_info_bitmap_error_0;
#line 948 "bitmap.m"
                MR_Word mercury__bitmap__V_75_75 = (MR_Word) ((MR_Box) ((MR_String) "bitmap.copy_bits: failed to diagnose error"));

#line 2112 "bitmap.m"
                {
#line 2112 "bitmap.m"
                  mercury__exception__throw_1_p_0(mercury__bitmap__TypeCtorInfo_4_76, ((MR_Box) (mercury__bitmap__V_75_75)));
                }
#line 948 "bitmap.m"
              }
#line 921 "bitmap.m"
          }
#line 921 "bitmap.m"
      }
#line 921 "bitmap.m"
    return mercury__bitmap__HeadVar__7_7;
#line 921 "bitmap.m"
  }
#line 919 "bitmap.m"
}

#line 881 "bitmap.m"
MR_Box MR_CALL 
mercury__bitmap__zip2_4_f_0(
#line 881 "bitmap.m"
  MR_Integer mercury__bitmap__I_6,
#line 881 "bitmap.m"
  MR_Word mercury__bitmap__Fn_7,
#line 881 "bitmap.m"
  MR_Box mercury__bitmap__BMa_8,
#line 881 "bitmap.m"
  MR_Box mercury__bitmap__BMb_9)
#line 881 "bitmap.m"
{
#line 890 "bitmap.m"
  while (MR_TRUE)
#line 890 "bitmap.m"
    {
#line 890 "bitmap.m"
      /* tailcall optimized into a loop */
#line 890 "bitmap.m"
      {
#line 890 "bitmap.m"
        MR_bool mercury__bitmap__succeeded = (mercury__bitmap__I_6 >= (MR_Integer) 0);
#line 890 "bitmap.m"
        MR_Box mercury__bitmap__BM_10;

#line 890 "bitmap.m"
        if (mercury__bitmap__succeeded)
#line 886 "bitmap.m"
          {
#line 886 "bitmap.m"
            MR_Integer mercury__bitmap__Xa_11;
#line 886 "bitmap.m"
            MR_Integer mercury__bitmap__Xb_12;
#line 886 "bitmap.m"
            MR_Box mercury__bitmap__BMc_13;
#line 886 "bitmap.m"
            MR_Integer mercury__bitmap__V_15_15;
#line 886 "bitmap.m"
            MR_Integer mercury__bitmap__V_16_16;
#line 888 "bitmap.m"
            MR_Box MR_CALL (* mercury__bitmap__func_0)(MR_Box, MR_Box, MR_Box);
#line 888 "bitmap.m"
            MR_Box mercury__bitmap__conv1_V_15_15;

#line 1808 "bitmap.m"
{
#define MR_PROC_LABEL mercury__bitmap__zip2_4_f_0

	MR_Integer N;
	MR_BitmapPtr BM;
	MR_Integer Byte;

	N =  mercury__bitmap__I_6 ;
	BM = (MR_BitmapPtr) mercury__bitmap__BMa_8 ;
		{
#line 1808 "bitmap.m"

    Byte = (MR_Integer) BM->elements[N];

#line 6843 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__Xa_11  = Byte;
#line 1808 "bitmap.m"
}
#line 1808 "bitmap.m"
{
#define MR_PROC_LABEL mercury__bitmap__zip2_4_f_0

	MR_Integer N;
	MR_BitmapPtr BM;
	MR_Integer Byte;

	N =  mercury__bitmap__I_6 ;
	BM = (MR_BitmapPtr) mercury__bitmap__BMb_9 ;
		{
#line 1808 "bitmap.m"

    Byte = (MR_Integer) BM->elements[N];

#line 6865 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__Xb_12  = Byte;
#line 1808 "bitmap.m"
}
#line 888 "bitmap.m"
            mercury__bitmap__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__bitmap__Fn_7, (MR_Integer) 1)));
#line 888 "bitmap.m"
            {
#line 888 "bitmap.m"
              mercury__bitmap__conv1_V_15_15 = mercury__bitmap__func_0(((MR_Box) mercury__bitmap__Fn_7), ((MR_Box) (mercury__bitmap__Xa_11)), ((MR_Box) (mercury__bitmap__Xb_12)));
            }
#line 888 "bitmap.m"
            mercury__bitmap__V_15_15 = ((MR_Integer) mercury__bitmap__conv1_V_15_15);
#line 1849 "bitmap.m"
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
#line 1849 "bitmap.m"

    BM = BM0;
    BM->elements[N] = (MR_uint_least8_t) Byte;

#line 6899 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__BMc_13  = (MR_Box) BM;
#line 1849 "bitmap.m"
}
#line 889 "bitmap.m"
            mercury__bitmap__V_16_16 = (mercury__bitmap__I_6 - (MR_Integer) 1);
#line 889 "bitmap.m"
            /* direct tailcall eliminated */
#line 889 "bitmap.m"
            {
#line 889 "bitmap.m"
              MR_Integer mercury__bitmap__I__tmp_copy_6 = mercury__bitmap__V_16_16;
#line 889 "bitmap.m"
              MR_Box mercury__bitmap__BMb__tmp_copy_9 = mercury__bitmap__BMc_13;

#line 889 "bitmap.m"
              mercury__bitmap__BMb_9 = mercury__bitmap__BMb__tmp_copy_9;
#line 889 "bitmap.m"
              mercury__bitmap__I_6 = mercury__bitmap__I__tmp_copy_6;
#line 889 "bitmap.m"
            }
#line 889 "bitmap.m"
            continue;
#line 886 "bitmap.m"
          }
#line 890 "bitmap.m"
        else
#line 891 "bitmap.m"
          mercury__bitmap__BM_10 = mercury__bitmap__BMb_9;
#line 890 "bitmap.m"
        return mercury__bitmap__BM_10;
#line 890 "bitmap.m"
      }
#line 890 "bitmap.m"
      break;
#line 890 "bitmap.m"
    }
#line 881 "bitmap.m"
}

#line 868 "bitmap.m"
MR_Box MR_CALL 
mercury__bitmap__zip_3_f_0(
#line 868 "bitmap.m"
  MR_Word mercury__bitmap__Fn_5,
#line 868 "bitmap.m"
  MR_Box mercury__bitmap__BMa_6,
#line 868 "bitmap.m"
  MR_Box mercury__bitmap__BMb_7)
#line 868 "bitmap.m"
{
#line 871 "bitmap.m"
  {
#line 871 "bitmap.m"
    MR_bool mercury__bitmap__succeeded;
#line 871 "bitmap.m"
    MR_Box mercury__bitmap__HeadVar__4_4;
#line 872 "bitmap.m"
    MR_Integer mercury__bitmap__V_8_8;

#line 1734 "bitmap.m"
{
#define MR_PROC_LABEL mercury__bitmap__zip_3_f_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr) mercury__bitmap__BMb_7 ;
		{
#line 1734 "bitmap.m"

    NumBits = BM->num_bits;

#line 6975 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__V_8_8  = NumBits;
#line 1734 "bitmap.m"
}
#line 872 "bitmap.m"
    mercury__bitmap__succeeded = (mercury__bitmap__V_8_8 == (MR_Integer) 0);
#line 871 "bitmap.m"
    if (mercury__bitmap__succeeded)
#line 871 "bitmap.m"
      mercury__bitmap__HeadVar__4_4 = mercury__bitmap__BMb_7;
#line 871 "bitmap.m"
    else
#line 874 "bitmap.m"
      {
#line 874 "bitmap.m"
        MR_Integer mercury__bitmap__V_9_9;
#line 874 "bitmap.m"
        MR_Integer mercury__bitmap__V_10_10;
#line 874 "bitmap.m"
        MR_Integer mercury__bitmap__V_11_11;

#line 1734 "bitmap.m"
{
#define MR_PROC_LABEL mercury__bitmap__zip_3_f_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr) mercury__bitmap__BMb_7 ;
		{
#line 1734 "bitmap.m"

    NumBits = BM->num_bits;

#line 7012 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__V_11_11  = NumBits;
#line 1734 "bitmap.m"
}
#line 874 "bitmap.m"
        mercury__bitmap__V_10_10 = (mercury__bitmap__V_11_11 - (MR_Integer) 1);
#line 1969 "bitmap.m"
        mercury__bitmap__succeeded = (mercury__bitmap__V_10_10 < (MR_Integer) 0);
#line 1968 "bitmap.m"
        if (mercury__bitmap__succeeded)
#line 1970 "bitmap.m"
          mercury__bitmap__V_9_9 = (MR_Integer) -1;
#line 1968 "bitmap.m"
        else
#line 1972 "bitmap.m"
          {
#line 1972 "bitmap.m"
            mercury__bitmap__V_9_9 = (mercury__bitmap__V_10_10 / (MR_Integer) 8);
#line 1972 "bitmap.m"
          }
#line 874 "bitmap.m"
        {
#line 874 "bitmap.m"
          return mercury__bitmap__HeadVar__4_4 = mercury__bitmap__zip2_4_f_0(mercury__bitmap__V_9_9, mercury__bitmap__Fn_5, mercury__bitmap__BMa_6, mercury__bitmap__BMb_7);
        }
#line 874 "bitmap.m"
      }
#line 871 "bitmap.m"
    return mercury__bitmap__HeadVar__4_4;
#line 871 "bitmap.m"
  }
#line 868 "bitmap.m"
}

#line 810 "bitmap.m"
MR_Box MR_CALL 
mercury__bitmap__complement_2_2_f_0(
#line 810 "bitmap.m"
  MR_Integer mercury__bitmap__ByteI_4,
#line 810 "bitmap.m"
  MR_Box mercury__bitmap__BM0_5)
#line 810 "bitmap.m"
{
#line 817 "bitmap.m"
  while (MR_TRUE)
#line 817 "bitmap.m"
    {
#line 817 "bitmap.m"
      /* tailcall optimized into a loop */
#line 817 "bitmap.m"
      {
#line 817 "bitmap.m"
        MR_bool mercury__bitmap__succeeded = (mercury__bitmap__ByteI_4 < (MR_Integer) 0);
#line 817 "bitmap.m"
        MR_Box mercury__bitmap__BM_6;

#line 817 "bitmap.m"
        if (mercury__bitmap__succeeded)
#line 816 "bitmap.m"
          mercury__bitmap__BM_6 = mercury__bitmap__BM0_5;
#line 817 "bitmap.m"
        else
#line 818 "bitmap.m"
          {
#line 818 "bitmap.m"
            MR_Integer mercury__bitmap__X_7;
#line 818 "bitmap.m"
            MR_Box mercury__bitmap__BM1_8;
#line 818 "bitmap.m"
            MR_Integer mercury__bitmap__V_10_10;
#line 818 "bitmap.m"
            MR_Integer mercury__bitmap__V_11_11;

#line 1808 "bitmap.m"
{
#define MR_PROC_LABEL mercury__bitmap__complement_2_2_f_0

	MR_Integer N;
	MR_BitmapPtr BM;
	MR_Integer Byte;

	N =  mercury__bitmap__ByteI_4 ;
	BM = (MR_BitmapPtr) mercury__bitmap__BM0_5 ;
		{
#line 1808 "bitmap.m"

    Byte = (MR_Integer) BM->elements[N];

#line 7103 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__X_7  = Byte;
#line 1808 "bitmap.m"
}
#line 819 "bitmap.m"
            mercury__bitmap__V_10_10 = ~(mercury__bitmap__X_7);
#line 1849 "bitmap.m"
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
#line 1849 "bitmap.m"

    BM = BM0;
    BM->elements[N] = (MR_uint_least8_t) Byte;

#line 7130 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__BM1_8  = (MR_Box) BM;
#line 1849 "bitmap.m"
}
#line 820 "bitmap.m"
            mercury__bitmap__V_11_11 = (mercury__bitmap__ByteI_4 - (MR_Integer) 1);
#line 820 "bitmap.m"
            /* direct tailcall eliminated */
#line 820 "bitmap.m"
            {
#line 820 "bitmap.m"
              MR_Integer mercury__bitmap__ByteI__tmp_copy_4 = mercury__bitmap__V_11_11;
#line 820 "bitmap.m"
              MR_Box mercury__bitmap__BM0__tmp_copy_5 = mercury__bitmap__BM1_8;

#line 820 "bitmap.m"
              mercury__bitmap__BM0_5 = mercury__bitmap__BM0__tmp_copy_5;
#line 820 "bitmap.m"
              mercury__bitmap__ByteI_4 = mercury__bitmap__ByteI__tmp_copy_4;
#line 820 "bitmap.m"
            }
#line 820 "bitmap.m"
            continue;
#line 818 "bitmap.m"
          }
#line 817 "bitmap.m"
        return mercury__bitmap__BM_6;
#line 817 "bitmap.m"
      }
#line 817 "bitmap.m"
      break;
#line 817 "bitmap.m"
    }
#line 810 "bitmap.m"
}

#line 721 "bitmap.m"
MR_Integer MR_CALL 
mercury__bitmap__quotient_bits_per_byte_with_rem_zero_2_f_0(
#line 721 "bitmap.m"
  MR_String mercury__bitmap__Pred_4,
#line 721 "bitmap.m"
  MR_Integer mercury__bitmap__Int_5)
#line 721 "bitmap.m"
{
#line 726 "bitmap.m"
  {
#line 726 "bitmap.m"
    MR_bool mercury__bitmap__succeeded;
#line 726 "bitmap.m"
    MR_Integer mercury__bitmap__Quotient_6;
#line 724 "bitmap.m"
    MR_Integer mercury__bitmap__V_7_7 = (mercury__bitmap__Int_5 % (MR_Integer) 8);

#line 724 "bitmap.m"
    mercury__bitmap__succeeded = (mercury__bitmap__V_7_7 == (MR_Integer) 0);
#line 726 "bitmap.m"
    if (mercury__bitmap__succeeded)
#line 725 "bitmap.m"
      {
#line 725 "bitmap.m"
        mercury__bitmap__Quotient_6 = (mercury__bitmap__Int_5 / (MR_Integer) 8);
#line 725 "bitmap.m"
      }
#line 726 "bitmap.m"
    else
#line 727 "bitmap.m"
      {
#line 727 "bitmap.m"
        MR_Word mercury__bitmap__TypeCtorInfo_4_20;
#line 727 "bitmap.m"
        MR_String mercury__bitmap__V_10_10;
#line 727 "bitmap.m"
        MR_Word mercury__bitmap__V_19_19;

#line 260 "string.opt"
        {
#line 260 "string.opt"
          mercury__string__append_3_p_2(mercury__bitmap__Pred_4, (MR_String) ": not a byte slice.", &mercury__bitmap__V_10_10);
        }
#line 2112 "bitmap.m"
        mercury__bitmap__V_19_19 = (MR_Word) mercury__bitmap__V_10_10;
#line 7215 "bitmap.c"
        mercury__bitmap__TypeCtorInfo_4_20 = (MR_Word) &mercury__bitmap__bitmap__type_ctor_info_bitmap_error_0;
#line 2112 "bitmap.m"
        {
#line 2112 "bitmap.m"
          mercury__exception__throw_1_p_0(mercury__bitmap__TypeCtorInfo_4_20, ((MR_Box) (mercury__bitmap__V_19_19)));
        }
#line 727 "bitmap.m"
      }
#line 726 "bitmap.m"
    return mercury__bitmap__Quotient_6;
#line 726 "bitmap.m"
  }
#line 721 "bitmap.m"
}

#line 678 "bitmap.m"
static void MR_CALL 
mercury__bitmap__set_bits_in_byte_index_6_p_0(
#line 678 "bitmap.m"
  MR_Integer mercury__bitmap__ByteIndex_7,
#line 678 "bitmap.m"
  MR_Integer mercury__bitmap__LastBitIndex_8,
#line 678 "bitmap.m"
  MR_Integer mercury__bitmap__NumBitsThisByte_9,
#line 678 "bitmap.m"
  MR_Integer mercury__bitmap__Bits_10,
#line 678 "bitmap.m"
  MR_Box mercury__bitmap__STATE_VARIABLE_BM_0_13,
#line 678 "bitmap.m"
  MR_Box * mercury__bitmap__STATE_VARIABLE_BM_14)
#line 678 "bitmap.m"
{
#line 681 "bitmap.m"
  {
#line 681 "bitmap.m"
    MR_bool mercury__bitmap__succeeded;
#line 681 "bitmap.m"
    MR_Integer mercury__bitmap__FirstBitInByte_12;
#line 681 "bitmap.m"
    MR_Integer mercury__bitmap__V_15_15 = (mercury__bitmap__LastBitIndex_8 - mercury__bitmap__NumBitsThisByte_9);
#line 681 "bitmap.m"
    MR_Integer mercury__bitmap__V_18_18;
#line 681 "bitmap.m"
    MR_Integer mercury__bitmap__V_19_19;
#line 681 "bitmap.m"
    MR_Integer mercury__bitmap__LastBit_29;
#line 681 "bitmap.m"
    MR_Integer mercury__bitmap__Shift_30;
#line 681 "bitmap.m"
    MR_Integer mercury__bitmap__Mask_31;
#line 681 "bitmap.m"
    MR_Integer mercury__bitmap__BitsToSet_32;
#line 681 "bitmap.m"
    MR_Integer mercury__bitmap__V_33_33;
#line 681 "bitmap.m"
    MR_Integer mercury__bitmap__V_38_38;
#line 681 "bitmap.m"
    MR_Integer mercury__bitmap__V_39_39;
#line 681 "bitmap.m"
    MR_Integer mercury__bitmap__V_40_40;
#line 681 "bitmap.m"
    MR_Integer mercury__bitmap__V_41_41;
#line 681 "bitmap.m"
    MR_Integer mercury__bitmap__BitMask_44;
#line 681 "bitmap.m"
    MR_Integer mercury__bitmap__V_46_46;
#line 681 "bitmap.m"
    MR_Integer mercury__bitmap__V_48_48;

#line 682 "bitmap.m"
    mercury__bitmap__FirstBitInByte_12 = (mercury__bitmap__V_15_15 + (MR_Integer) 1);
#line 1808 "bitmap.m"
{
#define MR_PROC_LABEL mercury__bitmap__set_bits_in_byte_index_6_p_0

	MR_Integer N;
	MR_BitmapPtr BM;
	MR_Integer Byte;

	N =  mercury__bitmap__ByteIndex_7 ;
	BM = (MR_BitmapPtr) mercury__bitmap__STATE_VARIABLE_BM_0_13 ;
		{
#line 1808 "bitmap.m"

    Byte = (MR_Integer) BM->elements[N];

#line 7302 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__V_19_19  = Byte;
#line 1808 "bitmap.m"
}
#line 2057 "bitmap.m"
    mercury__bitmap__V_33_33 = (mercury__bitmap__FirstBitInByte_12 + mercury__bitmap__NumBitsThisByte_9);
#line 2057 "bitmap.m"
    mercury__bitmap__LastBit_29 = (mercury__bitmap__V_33_33 - (MR_Integer) 1);
#line 2058 "bitmap.m"
    mercury__bitmap__Shift_30 = ((MR_Integer) 7 - mercury__bitmap__LastBit_29);
#line 2029 "bitmap.m"
    mercury__bitmap__V_46_46 = (mercury__bitmap__NumBitsThisByte_9 - (MR_Integer) 1);
#line 2029 "bitmap.m"
    mercury__bitmap__BitMask_44 = ((MR_Integer) 1 << mercury__bitmap__V_46_46);
#line 2030 "bitmap.m"
    mercury__bitmap__V_48_48 = (mercury__bitmap__BitMask_44 - (MR_Integer) 1);
#line 2030 "bitmap.m"
    mercury__bitmap__Mask_31 = (mercury__bitmap__BitMask_44 | mercury__bitmap__V_48_48);
#line 2060 "bitmap.m"
    mercury__bitmap__BitsToSet_32 = (mercury__bitmap__Mask_31 & mercury__bitmap__Bits_10);
#line 2061 "bitmap.m"
    mercury__bitmap__V_40_40 = (mercury__bitmap__Mask_31 << mercury__bitmap__Shift_30);
#line 2061 "bitmap.m"
    mercury__bitmap__V_39_39 = ~(mercury__bitmap__V_40_40);
#line 2061 "bitmap.m"
    mercury__bitmap__V_38_38 = (mercury__bitmap__V_19_19 & mercury__bitmap__V_39_39);
#line 2062 "bitmap.m"
    mercury__bitmap__V_41_41 = (mercury__bitmap__BitsToSet_32 << mercury__bitmap__Shift_30);
#line 2062 "bitmap.m"
    mercury__bitmap__V_18_18 = (mercury__bitmap__V_38_38 | mercury__bitmap__V_41_41);
#line 1849 "bitmap.m"
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
#line 1849 "bitmap.m"

    BM = BM0;
    BM->elements[N] = (MR_uint_least8_t) Byte;

#line 7353 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__bitmap__STATE_VARIABLE_BM_14  = (MR_Box) BM;
#line 1849 "bitmap.m"
}
#line 681 "bitmap.m"
  }
#line 678 "bitmap.m"
}

#line 659 "bitmap.m"
void MR_CALL 
mercury__bitmap__set_bits_in_bytes_6_p_0(
#line 659 "bitmap.m"
  MR_Integer mercury__bitmap__LastByteIndex_7,
#line 659 "bitmap.m"
  MR_Integer mercury__bitmap__LastBitIndex_8,
#line 659 "bitmap.m"
  MR_Integer mercury__bitmap__NumBits_9,
#line 659 "bitmap.m"
  MR_Integer mercury__bitmap__Bits_10,
#line 659 "bitmap.m"
  MR_Box mercury__bitmap__STATE_VARIABLE_BM_0_14,
#line 659 "bitmap.m"
  MR_Box * mercury__bitmap__STATE_VARIABLE_BM_15)
#line 659 "bitmap.m"
{
#line 661 "bitmap.m"
  while (MR_TRUE)
#line 661 "bitmap.m"
    {
#line 661 "bitmap.m"
      /* tailcall optimized into a loop */
#line 661 "bitmap.m"
      {
#line 661 "bitmap.m"
        MR_bool mercury__bitmap__succeeded;
#line 661 "bitmap.m"
        MR_Integer mercury__bitmap__RemainingBitsInByte_12 = (mercury__bitmap__LastBitIndex_8 + (MR_Integer) 1);

#line 663 "bitmap.m"
        mercury__bitmap__succeeded = (mercury__bitmap__NumBits_9 > mercury__bitmap__RemainingBitsInByte_12);
#line 670 "bitmap.m"
        if (mercury__bitmap__succeeded)
#line 664 "bitmap.m"
          {
#line 664 "bitmap.m"
            MR_Box mercury__bitmap__STATE_VARIABLE_BM_17_17;
#line 664 "bitmap.m"
            MR_Integer mercury__bitmap__V_18_18;
#line 664 "bitmap.m"
            MR_Integer mercury__bitmap__V_20_20;
#line 664 "bitmap.m"
            MR_Integer mercury__bitmap__V_21_21;
#line 664 "bitmap.m"
            MR_Integer mercury__bitmap__FirstBitInByte_35;
#line 664 "bitmap.m"
            MR_Integer mercury__bitmap__V_36_36 = (mercury__bitmap__LastBitIndex_8 - mercury__bitmap__RemainingBitsInByte_12);
#line 664 "bitmap.m"
            MR_Integer mercury__bitmap__V_39_39;
#line 664 "bitmap.m"
            MR_Integer mercury__bitmap__V_40_40;
#line 664 "bitmap.m"
            MR_Integer mercury__bitmap__LastBit_50;
#line 664 "bitmap.m"
            MR_Integer mercury__bitmap__Shift_51;
#line 664 "bitmap.m"
            MR_Integer mercury__bitmap__Mask_52;
#line 664 "bitmap.m"
            MR_Integer mercury__bitmap__BitsToSet_53;
#line 664 "bitmap.m"
            MR_Integer mercury__bitmap__V_54_54;
#line 664 "bitmap.m"
            MR_Integer mercury__bitmap__V_59_59;
#line 664 "bitmap.m"
            MR_Integer mercury__bitmap__V_60_60;
#line 664 "bitmap.m"
            MR_Integer mercury__bitmap__V_61_61;
#line 664 "bitmap.m"
            MR_Integer mercury__bitmap__V_62_62;
#line 664 "bitmap.m"
            MR_Integer mercury__bitmap__BitMask_65;
#line 664 "bitmap.m"
            MR_Integer mercury__bitmap__V_67_67;
#line 664 "bitmap.m"
            MR_Integer mercury__bitmap__V_69_69;

#line 682 "bitmap.m"
            mercury__bitmap__FirstBitInByte_35 = (mercury__bitmap__V_36_36 + (MR_Integer) 1);
#line 1808 "bitmap.m"
{
#define MR_PROC_LABEL mercury__bitmap__set_bits_in_bytes_6_p_0

	MR_Integer N;
	MR_BitmapPtr BM;
	MR_Integer Byte;

	N =  mercury__bitmap__LastByteIndex_7 ;
	BM = (MR_BitmapPtr) mercury__bitmap__STATE_VARIABLE_BM_0_14 ;
		{
#line 1808 "bitmap.m"

    Byte = (MR_Integer) BM->elements[N];

#line 7459 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__V_40_40  = Byte;
#line 1808 "bitmap.m"
}
#line 2057 "bitmap.m"
            mercury__bitmap__V_54_54 = (mercury__bitmap__FirstBitInByte_35 + mercury__bitmap__RemainingBitsInByte_12);
#line 2057 "bitmap.m"
            mercury__bitmap__LastBit_50 = (mercury__bitmap__V_54_54 - (MR_Integer) 1);
#line 2058 "bitmap.m"
            mercury__bitmap__Shift_51 = ((MR_Integer) 7 - mercury__bitmap__LastBit_50);
#line 2029 "bitmap.m"
            mercury__bitmap__V_67_67 = (mercury__bitmap__RemainingBitsInByte_12 - (MR_Integer) 1);
#line 2029 "bitmap.m"
            mercury__bitmap__BitMask_65 = ((MR_Integer) 1 << mercury__bitmap__V_67_67);
#line 2030 "bitmap.m"
            mercury__bitmap__V_69_69 = (mercury__bitmap__BitMask_65 - (MR_Integer) 1);
#line 2030 "bitmap.m"
            mercury__bitmap__Mask_52 = (mercury__bitmap__BitMask_65 | mercury__bitmap__V_69_69);
#line 2060 "bitmap.m"
            mercury__bitmap__BitsToSet_53 = (mercury__bitmap__Mask_52 & mercury__bitmap__Bits_10);
#line 2061 "bitmap.m"
            mercury__bitmap__V_61_61 = (mercury__bitmap__Mask_52 << mercury__bitmap__Shift_51);
#line 2061 "bitmap.m"
            mercury__bitmap__V_60_60 = ~(mercury__bitmap__V_61_61);
#line 2061 "bitmap.m"
            mercury__bitmap__V_59_59 = (mercury__bitmap__V_40_40 & mercury__bitmap__V_60_60);
#line 2062 "bitmap.m"
            mercury__bitmap__V_62_62 = (mercury__bitmap__BitsToSet_53 << mercury__bitmap__Shift_51);
#line 2062 "bitmap.m"
            mercury__bitmap__V_39_39 = (mercury__bitmap__V_59_59 | mercury__bitmap__V_62_62);
#line 1849 "bitmap.m"
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
#line 1849 "bitmap.m"

    BM = BM0;
    BM->elements[N] = (MR_uint_least8_t) Byte;

#line 7510 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__STATE_VARIABLE_BM_17_17  = (MR_Box) BM;
#line 1849 "bitmap.m"
}
#line 667 "bitmap.m"
            mercury__bitmap__V_18_18 = (mercury__bitmap__LastByteIndex_7 - (MR_Integer) 1);
#line 668 "bitmap.m"
            mercury__bitmap__V_20_20 = (mercury__bitmap__NumBits_9 - mercury__bitmap__RemainingBitsInByte_12);
#line 669 "bitmap.m"
            mercury__bitmap__V_21_21 = (mercury__bitmap__Bits_10 >> mercury__bitmap__RemainingBitsInByte_12);
#line 667 "bitmap.m"
            /* direct tailcall eliminated */
#line 667 "bitmap.m"
            {
#line 667 "bitmap.m"
              MR_Integer mercury__bitmap__LastByteIndex__tmp_copy_7 = mercury__bitmap__V_18_18;
#line 667 "bitmap.m"
              MR_Integer mercury__bitmap__NumBits__tmp_copy_9 = mercury__bitmap__V_20_20;
#line 667 "bitmap.m"
              MR_Integer mercury__bitmap__Bits__tmp_copy_10 = mercury__bitmap__V_21_21;
#line 667 "bitmap.m"
              MR_Box mercury__bitmap__STATE_VARIABLE_BM_0__tmp_copy_14 = mercury__bitmap__STATE_VARIABLE_BM_17_17;

#line 667 "bitmap.m"
              mercury__bitmap__STATE_VARIABLE_BM_0_14 = mercury__bitmap__STATE_VARIABLE_BM_0__tmp_copy_14;
#line 667 "bitmap.m"
              mercury__bitmap__Bits_10 = mercury__bitmap__Bits__tmp_copy_10;
#line 667 "bitmap.m"
              mercury__bitmap__NumBits_9 = mercury__bitmap__NumBits__tmp_copy_9;
#line 667 "bitmap.m"
              mercury__bitmap__LastBitIndex_8 = (MR_Integer) 7;
#line 667 "bitmap.m"
              mercury__bitmap__LastByteIndex_7 = mercury__bitmap__LastByteIndex__tmp_copy_7;
#line 667 "bitmap.m"
            }
#line 667 "bitmap.m"
            continue;
#line 664 "bitmap.m"
          }
#line 670 "bitmap.m"
        else
#line 672 "bitmap.m"
          {
#line 670 "bitmap.m"
            mercury__bitmap__succeeded = (mercury__bitmap__NumBits_9 > (MR_Integer) 0);
#line 672 "bitmap.m"
            if (mercury__bitmap__succeeded)
#line 671 "bitmap.m"
              {
#line 671 "bitmap.m"
                mercury__bitmap__set_bits_in_byte_index_6_p_0(mercury__bitmap__LastByteIndex_7, mercury__bitmap__LastBitIndex_8, mercury__bitmap__NumBits_9, mercury__bitmap__Bits_10, mercury__bitmap__STATE_VARIABLE_BM_0_14, mercury__bitmap__STATE_VARIABLE_BM_15);
#line 671 "bitmap.m"
                return;
              }
#line 672 "bitmap.m"
            else
#line 671 "bitmap.m"
              *mercury__bitmap__STATE_VARIABLE_BM_15 = mercury__bitmap__STATE_VARIABLE_BM_0_14;
#line 672 "bitmap.m"
          }
#line 661 "bitmap.m"
      }
#line 661 "bitmap.m"
      break;
#line 661 "bitmap.m"
    }
#line 659 "bitmap.m"
}

#line 620 "bitmap.m"
static void MR_CALL 
mercury__bitmap__extract_bits_from_byte_index_6_p_0(
#line 620 "bitmap.m"
  MR_Integer mercury__bitmap__ByteIndex_7,
#line 620 "bitmap.m"
  MR_Integer mercury__bitmap__FirstBitIndex_8,
#line 620 "bitmap.m"
  MR_Integer mercury__bitmap__NumBitsThisByte_9,
#line 620 "bitmap.m"
  MR_Box mercury__bitmap__BM_10,
#line 620 "bitmap.m"
  MR_Integer mercury__bitmap__STATE_VARIABLE_Bits_0_13,
#line 620 "bitmap.m"
  MR_Integer * mercury__bitmap__STATE_VARIABLE_Bits_14)
#line 620 "bitmap.m"
{
#line 623 "bitmap.m"
  {
#line 623 "bitmap.m"
    MR_bool mercury__bitmap__succeeded;
#line 623 "bitmap.m"
    MR_Integer mercury__bitmap__BitsThisByte_12;
#line 623 "bitmap.m"
    MR_Integer mercury__bitmap__V_15_15;
#line 623 "bitmap.m"
    MR_Integer mercury__bitmap__V_17_17;
#line 623 "bitmap.m"
    MR_Integer mercury__bitmap__LastBit_26;
#line 623 "bitmap.m"
    MR_Integer mercury__bitmap__Shift_27;
#line 623 "bitmap.m"
    MR_Integer mercury__bitmap__V_28_28;
#line 623 "bitmap.m"
    MR_Integer mercury__bitmap__V_33_33;
#line 623 "bitmap.m"
    MR_Integer mercury__bitmap__V_34_34;
#line 623 "bitmap.m"
    MR_Integer mercury__bitmap__BitMask_37;
#line 623 "bitmap.m"
    MR_Integer mercury__bitmap__V_39_39;
#line 623 "bitmap.m"
    MR_Integer mercury__bitmap__V_41_41;

#line 1808 "bitmap.m"
{
#define MR_PROC_LABEL mercury__bitmap__extract_bits_from_byte_index_6_p_0

	MR_Integer N;
	MR_BitmapPtr BM;
	MR_Integer Byte;

	N =  mercury__bitmap__ByteIndex_7 ;
	BM = (MR_BitmapPtr) mercury__bitmap__BM_10 ;
		{
#line 1808 "bitmap.m"

    Byte = (MR_Integer) BM->elements[N];

#line 7641 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__V_15_15  = Byte;
#line 1808 "bitmap.m"
}
#line 2044 "bitmap.m"
    mercury__bitmap__V_28_28 = (mercury__bitmap__FirstBitIndex_8 + mercury__bitmap__NumBitsThisByte_9);
#line 2044 "bitmap.m"
    mercury__bitmap__LastBit_26 = (mercury__bitmap__V_28_28 - (MR_Integer) 1);
#line 2045 "bitmap.m"
    mercury__bitmap__Shift_27 = ((MR_Integer) 7 - mercury__bitmap__LastBit_26);
#line 2046 "bitmap.m"
    mercury__bitmap__V_33_33 = (mercury__bitmap__V_15_15 >> mercury__bitmap__Shift_27);
#line 2029 "bitmap.m"
    mercury__bitmap__V_39_39 = (mercury__bitmap__NumBitsThisByte_9 - (MR_Integer) 1);
#line 2029 "bitmap.m"
    mercury__bitmap__BitMask_37 = ((MR_Integer) 1 << mercury__bitmap__V_39_39);
#line 2030 "bitmap.m"
    mercury__bitmap__V_41_41 = (mercury__bitmap__BitMask_37 - (MR_Integer) 1);
#line 2030 "bitmap.m"
    mercury__bitmap__V_34_34 = (mercury__bitmap__BitMask_37 | mercury__bitmap__V_41_41);
#line 2046 "bitmap.m"
    mercury__bitmap__BitsThisByte_12 = (mercury__bitmap__V_33_33 & mercury__bitmap__V_34_34);
#line 626 "bitmap.m"
    mercury__bitmap__V_17_17 = (mercury__bitmap__STATE_VARIABLE_Bits_0_13 << mercury__bitmap__NumBitsThisByte_9);
#line 626 "bitmap.m"
    *mercury__bitmap__STATE_VARIABLE_Bits_14 = (mercury__bitmap__V_17_17 | mercury__bitmap__BitsThisByte_12);
#line 623 "bitmap.m"
  }
#line 620 "bitmap.m"
}

#line 596 "bitmap.m"
void MR_CALL 
mercury__bitmap__extract_bits_from_bytes_6_p_0(
#line 596 "bitmap.m"
  MR_Integer mercury__bitmap__FirstByteIndex_7,
#line 596 "bitmap.m"
  MR_Integer mercury__bitmap__FirstBitIndex_8,
#line 596 "bitmap.m"
  MR_Integer mercury__bitmap__NumBits_9,
#line 596 "bitmap.m"
  MR_Box mercury__bitmap__BM_10,
#line 596 "bitmap.m"
  MR_Integer mercury__bitmap__STATE_VARIABLE_Bits_0_14,
#line 596 "bitmap.m"
  MR_Integer * mercury__bitmap__STATE_VARIABLE_Bits_15)
#line 596 "bitmap.m"
{
#line 598 "bitmap.m"
  while (MR_TRUE)
#line 598 "bitmap.m"
    {
#line 598 "bitmap.m"
      /* tailcall optimized into a loop */
#line 598 "bitmap.m"
      {
#line 598 "bitmap.m"
        MR_bool mercury__bitmap__succeeded;
#line 598 "bitmap.m"
        MR_Integer mercury__bitmap__RemainingBitsInByte_12 = ((MR_Integer) 8 - mercury__bitmap__FirstBitIndex_8);

#line 601 "bitmap.m"
        mercury__bitmap__succeeded = (mercury__bitmap__NumBits_9 > mercury__bitmap__RemainingBitsInByte_12);
#line 608 "bitmap.m"
        if (mercury__bitmap__succeeded)
#line 603 "bitmap.m"
          {
#line 603 "bitmap.m"
            MR_Integer mercury__bitmap__STATE_VARIABLE_Bits_17_17;
#line 603 "bitmap.m"
            MR_Integer mercury__bitmap__V_18_18;
#line 603 "bitmap.m"
            MR_Integer mercury__bitmap__V_20_20;
#line 603 "bitmap.m"
            MR_Integer mercury__bitmap__BitsThisByte_32;
#line 603 "bitmap.m"
            MR_Integer mercury__bitmap__V_33_33;
#line 603 "bitmap.m"
            MR_Integer mercury__bitmap__V_35_35;
#line 603 "bitmap.m"
            MR_Integer mercury__bitmap__LastBit_44;
#line 603 "bitmap.m"
            MR_Integer mercury__bitmap__Shift_45;
#line 603 "bitmap.m"
            MR_Integer mercury__bitmap__V_46_46;
#line 603 "bitmap.m"
            MR_Integer mercury__bitmap__V_51_51;
#line 603 "bitmap.m"
            MR_Integer mercury__bitmap__V_52_52;
#line 603 "bitmap.m"
            MR_Integer mercury__bitmap__BitMask_55;
#line 603 "bitmap.m"
            MR_Integer mercury__bitmap__V_57_57;
#line 603 "bitmap.m"
            MR_Integer mercury__bitmap__V_59_59;

#line 1808 "bitmap.m"
{
#define MR_PROC_LABEL mercury__bitmap__extract_bits_from_bytes_6_p_0

	MR_Integer N;
	MR_BitmapPtr BM;
	MR_Integer Byte;

	N =  mercury__bitmap__FirstByteIndex_7 ;
	BM = (MR_BitmapPtr) mercury__bitmap__BM_10 ;
		{
#line 1808 "bitmap.m"

    Byte = (MR_Integer) BM->elements[N];

#line 7755 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__V_33_33  = Byte;
#line 1808 "bitmap.m"
}
#line 2044 "bitmap.m"
            mercury__bitmap__V_46_46 = (mercury__bitmap__FirstBitIndex_8 + mercury__bitmap__RemainingBitsInByte_12);
#line 2044 "bitmap.m"
            mercury__bitmap__LastBit_44 = (mercury__bitmap__V_46_46 - (MR_Integer) 1);
#line 2045 "bitmap.m"
            mercury__bitmap__Shift_45 = ((MR_Integer) 7 - mercury__bitmap__LastBit_44);
#line 2046 "bitmap.m"
            mercury__bitmap__V_51_51 = (mercury__bitmap__V_33_33 >> mercury__bitmap__Shift_45);
#line 2029 "bitmap.m"
            mercury__bitmap__V_57_57 = (mercury__bitmap__RemainingBitsInByte_12 - (MR_Integer) 1);
#line 2029 "bitmap.m"
            mercury__bitmap__BitMask_55 = ((MR_Integer) 1 << mercury__bitmap__V_57_57);
#line 2030 "bitmap.m"
            mercury__bitmap__V_59_59 = (mercury__bitmap__BitMask_55 - (MR_Integer) 1);
#line 2030 "bitmap.m"
            mercury__bitmap__V_52_52 = (mercury__bitmap__BitMask_55 | mercury__bitmap__V_59_59);
#line 2046 "bitmap.m"
            mercury__bitmap__BitsThisByte_32 = (mercury__bitmap__V_51_51 & mercury__bitmap__V_52_52);
#line 626 "bitmap.m"
            mercury__bitmap__V_35_35 = (mercury__bitmap__STATE_VARIABLE_Bits_0_14 << mercury__bitmap__RemainingBitsInByte_12);
#line 626 "bitmap.m"
            mercury__bitmap__STATE_VARIABLE_Bits_17_17 = (mercury__bitmap__V_35_35 | mercury__bitmap__BitsThisByte_32);
#line 606 "bitmap.m"
            mercury__bitmap__V_18_18 = (mercury__bitmap__FirstByteIndex_7 + (MR_Integer) 1);
#line 607 "bitmap.m"
            mercury__bitmap__V_20_20 = (mercury__bitmap__NumBits_9 - mercury__bitmap__RemainingBitsInByte_12);
#line 606 "bitmap.m"
            /* direct tailcall eliminated */
#line 606 "bitmap.m"
            {
#line 606 "bitmap.m"
              MR_Integer mercury__bitmap__FirstByteIndex__tmp_copy_7 = mercury__bitmap__V_18_18;
#line 606 "bitmap.m"
              MR_Integer mercury__bitmap__NumBits__tmp_copy_9 = mercury__bitmap__V_20_20;
#line 606 "bitmap.m"
              MR_Integer mercury__bitmap__STATE_VARIABLE_Bits_0__tmp_copy_14 = mercury__bitmap__STATE_VARIABLE_Bits_17_17;

#line 606 "bitmap.m"
              mercury__bitmap__STATE_VARIABLE_Bits_0_14 = mercury__bitmap__STATE_VARIABLE_Bits_0__tmp_copy_14;
#line 606 "bitmap.m"
              mercury__bitmap__NumBits_9 = mercury__bitmap__NumBits__tmp_copy_9;
#line 606 "bitmap.m"
              mercury__bitmap__FirstBitIndex_8 = (MR_Integer) 0;
#line 606 "bitmap.m"
              mercury__bitmap__FirstByteIndex_7 = mercury__bitmap__FirstByteIndex__tmp_copy_7;
#line 606 "bitmap.m"
            }
#line 606 "bitmap.m"
            continue;
#line 603 "bitmap.m"
          }
#line 608 "bitmap.m"
        else
#line 613 "bitmap.m"
          {
#line 609 "bitmap.m"
            mercury__bitmap__succeeded = (mercury__bitmap__NumBits_9 > (MR_Integer) 0);
#line 613 "bitmap.m"
            if (mercury__bitmap__succeeded)
#line 611 "bitmap.m"
              {
#line 611 "bitmap.m"
                mercury__bitmap__extract_bits_from_byte_index_6_p_0(mercury__bitmap__FirstByteIndex_7, mercury__bitmap__FirstBitIndex_8, mercury__bitmap__NumBits_9, mercury__bitmap__BM_10, mercury__bitmap__STATE_VARIABLE_Bits_0_14, mercury__bitmap__STATE_VARIABLE_Bits_15);
#line 611 "bitmap.m"
                return;
              }
#line 613 "bitmap.m"
            else
#line 611 "bitmap.m"
              *mercury__bitmap__STATE_VARIABLE_Bits_15 = mercury__bitmap__STATE_VARIABLE_Bits_0_14;
#line 613 "bitmap.m"
          }
#line 598 "bitmap.m"
      }
#line 598 "bitmap.m"
      break;
#line 598 "bitmap.m"
    }
#line 596 "bitmap.m"
}

#line 523 "bitmap.m"
static MR_Box MR_CALL 
mercury__bitmap__initialize_bitmap_bytes_4_f_0(
#line 523 "bitmap.m"
  MR_Box mercury__bitmap__BM_6,
#line 523 "bitmap.m"
  MR_Integer mercury__bitmap__ByteIndex_7,
#line 523 "bitmap.m"
  MR_Integer mercury__bitmap__LastByteIndex_8,
#line 523 "bitmap.m"
  MR_Integer mercury__bitmap__Init_9)
#line 523 "bitmap.m"
{
#line 525 "bitmap.m"
  while (MR_TRUE)
#line 525 "bitmap.m"
    {
#line 525 "bitmap.m"
      /* tailcall optimized into a loop */
#line 525 "bitmap.m"
      {
#line 525 "bitmap.m"
        MR_bool mercury__bitmap__succeeded = (mercury__bitmap__ByteIndex_7 > mercury__bitmap__LastByteIndex_8);
#line 525 "bitmap.m"
        MR_Box mercury__bitmap__HeadVar__5_5;

#line 525 "bitmap.m"
        if (mercury__bitmap__succeeded)
#line 525 "bitmap.m"
          mercury__bitmap__HeadVar__5_5 = mercury__bitmap__BM_6;
#line 525 "bitmap.m"
        else
#line 529 "bitmap.m"
          {
#line 529 "bitmap.m"
            MR_Box mercury__bitmap__V_10_10;
#line 529 "bitmap.m"
            MR_Integer mercury__bitmap__V_11_11;

#line 1849 "bitmap.m"
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
#line 1849 "bitmap.m"

    BM = BM0;
    BM->elements[N] = (MR_uint_least8_t) Byte;

#line 7900 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__V_10_10  = (MR_Box) BM;
#line 1849 "bitmap.m"
}
#line 530 "bitmap.m"
            mercury__bitmap__V_11_11 = (mercury__bitmap__ByteIndex_7 + (MR_Integer) 1);
#line 529 "bitmap.m"
            /* direct tailcall eliminated */
#line 529 "bitmap.m"
            {
#line 529 "bitmap.m"
              MR_Box mercury__bitmap__BM__tmp_copy_6 = mercury__bitmap__V_10_10;
#line 529 "bitmap.m"
              MR_Integer mercury__bitmap__ByteIndex__tmp_copy_7 = mercury__bitmap__V_11_11;

#line 529 "bitmap.m"
              mercury__bitmap__ByteIndex_7 = mercury__bitmap__ByteIndex__tmp_copy_7;
#line 529 "bitmap.m"
              mercury__bitmap__BM_6 = mercury__bitmap__BM__tmp_copy_6;
#line 529 "bitmap.m"
            }
#line 529 "bitmap.m"
            continue;
#line 529 "bitmap.m"
          }
#line 525 "bitmap.m"
        return mercury__bitmap__HeadVar__5_5;
#line 525 "bitmap.m"
      }
#line 525 "bitmap.m"
      break;
#line 525 "bitmap.m"
    }
#line 523 "bitmap.m"
}

#line 493 "bitmap.m"
MR_Box MR_CALL 
mercury__bitmap__set_trailing_bits_in_byte_3_f_0(
#line 493 "bitmap.m"
  MR_Box mercury__bitmap__STATE_VARIABLE_BM_0_12,
#line 493 "bitmap.m"
  MR_Integer mercury__bitmap__Bit_6,
#line 493 "bitmap.m"
  MR_Integer mercury__bitmap__Initializer_7)
#line 493 "bitmap.m"
{
#line 495 "bitmap.m"
  {
#line 495 "bitmap.m"
    MR_bool mercury__bitmap__succeeded;
#line 495 "bitmap.m"
    MR_Box mercury__bitmap__STATE_VARIABLE_BM_13;
#line 495 "bitmap.m"
    MR_Integer mercury__bitmap__FirstTrailingBit_8 = (mercury__bitmap__Bit_6 + (MR_Integer) 1);
#line 495 "bitmap.m"
    MR_Integer mercury__bitmap__FirstTrailingBitIndex_9 = (mercury__bitmap__FirstTrailingBit_8 % (MR_Integer) 8);

#line 498 "bitmap.m"
    mercury__bitmap__succeeded = (mercury__bitmap__FirstTrailingBitIndex_9 == (MR_Integer) 0);
#line 498 "bitmap.m"
    mercury__bitmap__succeeded = !(mercury__bitmap__succeeded);
#line 504 "bitmap.m"
    if (mercury__bitmap__succeeded)
#line 499 "bitmap.m"
      {
#line 499 "bitmap.m"
        MR_Integer mercury__bitmap__ByteIndex_10;
#line 499 "bitmap.m"
        MR_Integer mercury__bitmap__NumBitsToSet_11;
#line 499 "bitmap.m"
        MR_Integer mercury__bitmap__V_17_17;
#line 499 "bitmap.m"
        MR_Integer mercury__bitmap__V_18_18;
#line 499 "bitmap.m"
        MR_Integer mercury__bitmap__LastBit_33;
#line 499 "bitmap.m"
        MR_Integer mercury__bitmap__Shift_34;
#line 499 "bitmap.m"
        MR_Integer mercury__bitmap__Mask_35;
#line 499 "bitmap.m"
        MR_Integer mercury__bitmap__BitsToSet_36;
#line 499 "bitmap.m"
        MR_Integer mercury__bitmap__V_37_37;
#line 499 "bitmap.m"
        MR_Integer mercury__bitmap__V_42_42;
#line 499 "bitmap.m"
        MR_Integer mercury__bitmap__V_43_43;
#line 499 "bitmap.m"
        MR_Integer mercury__bitmap__V_44_44;
#line 499 "bitmap.m"
        MR_Integer mercury__bitmap__V_45_45;
#line 499 "bitmap.m"
        MR_Integer mercury__bitmap__BitMask_48;
#line 499 "bitmap.m"
        MR_Integer mercury__bitmap__V_50_50;
#line 499 "bitmap.m"
        MR_Integer mercury__bitmap__V_52_52;

#line 1969 "bitmap.m"
        mercury__bitmap__succeeded = (mercury__bitmap__FirstTrailingBit_8 < (MR_Integer) 0);
#line 1968 "bitmap.m"
        if (mercury__bitmap__succeeded)
#line 1970 "bitmap.m"
          mercury__bitmap__ByteIndex_10 = (MR_Integer) -1;
#line 1968 "bitmap.m"
        else
#line 1972 "bitmap.m"
          {
#line 1972 "bitmap.m"
            mercury__bitmap__ByteIndex_10 = (mercury__bitmap__FirstTrailingBit_8 / (MR_Integer) 8);
#line 1972 "bitmap.m"
          }
#line 500 "bitmap.m"
        mercury__bitmap__NumBitsToSet_11 = ((MR_Integer) 8 - mercury__bitmap__FirstTrailingBitIndex_9);
#line 1808 "bitmap.m"
{
#define MR_PROC_LABEL mercury__bitmap__set_trailing_bits_in_byte_3_f_0

	MR_Integer N;
	MR_BitmapPtr BM;
	MR_Integer Byte;

	N =  mercury__bitmap__ByteIndex_10 ;
	BM = (MR_BitmapPtr) mercury__bitmap__STATE_VARIABLE_BM_0_12 ;
		{
#line 1808 "bitmap.m"

    Byte = (MR_Integer) BM->elements[N];

#line 8033 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__V_18_18  = Byte;
#line 1808 "bitmap.m"
}
#line 2057 "bitmap.m"
        mercury__bitmap__V_37_37 = (mercury__bitmap__FirstTrailingBitIndex_9 + mercury__bitmap__NumBitsToSet_11);
#line 2057 "bitmap.m"
        mercury__bitmap__LastBit_33 = (mercury__bitmap__V_37_37 - (MR_Integer) 1);
#line 2058 "bitmap.m"
        mercury__bitmap__Shift_34 = ((MR_Integer) 7 - mercury__bitmap__LastBit_33);
#line 2029 "bitmap.m"
        mercury__bitmap__V_50_50 = (mercury__bitmap__NumBitsToSet_11 - (MR_Integer) 1);
#line 2029 "bitmap.m"
        mercury__bitmap__BitMask_48 = ((MR_Integer) 1 << mercury__bitmap__V_50_50);
#line 2030 "bitmap.m"
        mercury__bitmap__V_52_52 = (mercury__bitmap__BitMask_48 - (MR_Integer) 1);
#line 2030 "bitmap.m"
        mercury__bitmap__Mask_35 = (mercury__bitmap__BitMask_48 | mercury__bitmap__V_52_52);
#line 2060 "bitmap.m"
        mercury__bitmap__BitsToSet_36 = (mercury__bitmap__Mask_35 & mercury__bitmap__Initializer_7);
#line 2061 "bitmap.m"
        mercury__bitmap__V_44_44 = (mercury__bitmap__Mask_35 << mercury__bitmap__Shift_34);
#line 2061 "bitmap.m"
        mercury__bitmap__V_43_43 = ~(mercury__bitmap__V_44_44);
#line 2061 "bitmap.m"
        mercury__bitmap__V_42_42 = (mercury__bitmap__V_18_18 & mercury__bitmap__V_43_43);
#line 2062 "bitmap.m"
        mercury__bitmap__V_45_45 = (mercury__bitmap__BitsToSet_36 << mercury__bitmap__Shift_34);
#line 2062 "bitmap.m"
        mercury__bitmap__V_17_17 = (mercury__bitmap__V_42_42 | mercury__bitmap__V_45_45);
#line 1849 "bitmap.m"
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
#line 1849 "bitmap.m"

    BM = BM0;
    BM->elements[N] = (MR_uint_least8_t) Byte;

#line 8084 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__STATE_VARIABLE_BM_13  = (MR_Box) BM;
#line 1849 "bitmap.m"
}
#line 499 "bitmap.m"
      }
#line 504 "bitmap.m"
    else
#line 501 "bitmap.m"
      mercury__bitmap__STATE_VARIABLE_BM_13 = mercury__bitmap__STATE_VARIABLE_BM_0_12;
#line 495 "bitmap.m"
    return mercury__bitmap__STATE_VARIABLE_BM_13;
#line 495 "bitmap.m"
  }
#line 493 "bitmap.m"
}

#line 488 "bitmap.m"
MR_Box MR_CALL 
mercury__bitmap__clear_filler_bits_1_f_0(
#line 488 "bitmap.m"
  MR_Box mercury__bitmap__BM_3)
#line 488 "bitmap.m"
{
#line 490 "bitmap.m"
  {
#line 490 "bitmap.m"
    MR_bool mercury__bitmap__succeeded;
#line 490 "bitmap.m"
    MR_Box mercury__bitmap__HeadVar__2_2;
#line 490 "bitmap.m"
    MR_Integer mercury__bitmap__V_4_4;
#line 490 "bitmap.m"
    MR_Integer mercury__bitmap__V_5_5;

#line 1734 "bitmap.m"
{
#define MR_PROC_LABEL mercury__bitmap__clear_filler_bits_1_f_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr) mercury__bitmap__BM_3 ;
		{
#line 1734 "bitmap.m"

    NumBits = BM->num_bits;

#line 8135 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__V_5_5  = NumBits;
#line 1734 "bitmap.m"
}
#line 490 "bitmap.m"
    mercury__bitmap__V_4_4 = (mercury__bitmap__V_5_5 - (MR_Integer) 1);
#line 490 "bitmap.m"
    {
#line 490 "bitmap.m"
      return mercury__bitmap__HeadVar__2_2 = mercury__bitmap__set_trailing_bits_in_byte_3_f_0(mercury__bitmap__BM_3, mercury__bitmap__V_4_4, (MR_Integer) 0);
    }
#line 490 "bitmap.m"
    return mercury__bitmap__HeadVar__2_2;
#line 490 "bitmap.m"
  }
#line 488 "bitmap.m"
}

#line 423 "bitmap.m"
void MR_CALL 
mercury__bitmap__throw_bounds_error_4_p_0(
#line 423 "bitmap.m"
  MR_Box mercury__bitmap__BM_5,
#line 423 "bitmap.m"
  MR_String mercury__bitmap__Pred_6,
#line 423 "bitmap.m"
  MR_Integer mercury__bitmap__Index_7,
#line 423 "bitmap.m"
  MR_Integer mercury__bitmap__NumBits_8)
#line 423 "bitmap.m"
{
#line 2087 "bitmap.m"
  {
#line 2087 "bitmap.m"
    MR_bool mercury__bitmap__succeeded = (mercury__bitmap__NumBits_8 < (MR_Integer) 0);
#line 2087 "bitmap.m"
    MR_Word mercury__bitmap__TypeCtorInfo_4_61;
#line 2087 "bitmap.m"
    MR_String mercury__bitmap__Msg_9;
#line 2087 "bitmap.m"
    MR_Word mercury__bitmap__V_60_60;

#line 2092 "bitmap.m"
    if (mercury__bitmap__succeeded)
#line 2089 "bitmap.m"
      {
#line 2089 "bitmap.m"
        MR_Word mercury__bitmap__V_11_11;
#line 2089 "bitmap.m"
        MR_Word mercury__bitmap__V_12_12;
#line 2089 "bitmap.m"
        MR_Word mercury__bitmap__V_14_14;
#line 2089 "bitmap.m"
        MR_String mercury__bitmap__V_15_15;
#line 2089 "bitmap.m"
        MR_Word mercury__bitmap__V_16_16;
#line 2089 "bitmap.m"
        MR_Word mercury__bitmap__V_18_18;

#line 297 "string.opt"
        {
#line 297 "string.opt"
          mercury__string__int_to_base_string_3_p_0(mercury__bitmap__NumBits_8, (MR_Integer) 10, &mercury__bitmap__V_15_15);
        }
#line 2091 "bitmap.m"
        mercury__bitmap__V_18_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2091 "bitmap.m"
        mercury__bitmap__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__bitmap_scalar_common_4[1]);
#line 2091 "bitmap.m"
        {
#line 2091 "bitmap.m"
          mercury__bitmap__V_14_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2091 "bitmap.m"
          MR_hl_field(MR_mktag(1), mercury__bitmap__V_14_14, 0) = ((MR_Box) (mercury__bitmap__V_15_15));
#line 2091 "bitmap.m"
          MR_hl_field(MR_mktag(1), mercury__bitmap__V_14_14, 1) = ((MR_Box) (mercury__bitmap__V_16_16));
#line 2091 "bitmap.m"
        }
#line 2090 "bitmap.m"
        {
#line 2090 "bitmap.m"
          mercury__bitmap__V_12_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2090 "bitmap.m"
          MR_hl_field(MR_mktag(1), mercury__bitmap__V_12_12, 0) = ((MR_Box) ((MR_String) ": negative number of bits: "));
#line 2090 "bitmap.m"
          MR_hl_field(MR_mktag(1), mercury__bitmap__V_12_12, 1) = ((MR_Box) (mercury__bitmap__V_14_14));
#line 2090 "bitmap.m"
        }
#line 2090 "bitmap.m"
        {
#line 2090 "bitmap.m"
          mercury__bitmap__V_11_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2090 "bitmap.m"
          MR_hl_field(MR_mktag(1), mercury__bitmap__V_11_11, 0) = ((MR_Box) (mercury__bitmap__Pred_6));
#line 2090 "bitmap.m"
          MR_hl_field(MR_mktag(1), mercury__bitmap__V_11_11, 1) = ((MR_Box) (mercury__bitmap__V_12_12));
#line 2090 "bitmap.m"
        }
#line 2089 "bitmap.m"
        {
#line 2089 "bitmap.m"
          mercury__bitmap__Msg_9 = mercury__string__append_list_1_f_0(mercury__bitmap__V_11_11);
        }
#line 2089 "bitmap.m"
      }
#line 2092 "bitmap.m"
    else
#line 2093 "bitmap.m"
      {
#line 2093 "bitmap.m"
        MR_Word mercury__bitmap__V_19_19;
#line 2093 "bitmap.m"
        MR_Word mercury__bitmap__V_20_20;
#line 2093 "bitmap.m"
        MR_Word mercury__bitmap__V_22_22;
#line 2093 "bitmap.m"
        MR_String mercury__bitmap__V_23_23;
#line 2093 "bitmap.m"
        MR_Word mercury__bitmap__V_24_24;
#line 2093 "bitmap.m"
        MR_Word mercury__bitmap__V_26_26;
#line 2093 "bitmap.m"
        MR_String mercury__bitmap__V_27_27;
#line 2093 "bitmap.m"
        MR_Word mercury__bitmap__V_28_28;
#line 2093 "bitmap.m"
        MR_Word mercury__bitmap__V_30_30;
#line 2093 "bitmap.m"
        MR_String mercury__bitmap__V_31_31;
#line 2093 "bitmap.m"
        MR_Integer mercury__bitmap__V_32_32;
#line 2093 "bitmap.m"
        MR_Word mercury__bitmap__V_33_33;
#line 2093 "bitmap.m"
        MR_Word mercury__bitmap__V_35_35;

#line 297 "string.opt"
        {
#line 297 "string.opt"
          mercury__string__int_to_base_string_3_p_0(mercury__bitmap__NumBits_8, (MR_Integer) 10, &mercury__bitmap__V_23_23);
        }
#line 297 "string.opt"
        {
#line 297 "string.opt"
          mercury__string__int_to_base_string_3_p_0(mercury__bitmap__Index_7, (MR_Integer) 10, &mercury__bitmap__V_27_27);
        }
#line 1734 "bitmap.m"
{
#define MR_PROC_LABEL mercury__bitmap__throw_bounds_error_4_p_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr) mercury__bitmap__BM_5 ;
		{
#line 1734 "bitmap.m"

    NumBits = BM->num_bits;

#line 8297 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__V_32_32  = NumBits;
#line 1734 "bitmap.m"
}
#line 297 "string.opt"
        {
#line 297 "string.opt"
          mercury__string__int_to_base_string_3_p_0(mercury__bitmap__V_32_32, (MR_Integer) 10, &mercury__bitmap__V_31_31);
        }
#line 2100 "bitmap.m"
        mercury__bitmap__V_35_35 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2100 "bitmap.m"
        mercury__bitmap__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__bitmap_scalar_common_4[2]);
#line 2099 "bitmap.m"
        {
#line 2099 "bitmap.m"
          mercury__bitmap__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2099 "bitmap.m"
          MR_hl_field(MR_mktag(1), mercury__bitmap__V_30_30, 0) = ((MR_Box) (mercury__bitmap__V_31_31));
#line 2099 "bitmap.m"
          MR_hl_field(MR_mktag(1), mercury__bitmap__V_30_30, 1) = ((MR_Box) (mercury__bitmap__V_33_33));
#line 2099 "bitmap.m"
        }
#line 2098 "bitmap.m"
        {
#line 2098 "bitmap.m"
          mercury__bitmap__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2098 "bitmap.m"
          MR_hl_field(MR_mktag(1), mercury__bitmap__V_28_28, 0) = ((MR_Box) ((MR_String) " is out of bounds [0, "));
#line 2098 "bitmap.m"
          MR_hl_field(MR_mktag(1), mercury__bitmap__V_28_28, 1) = ((MR_Box) (mercury__bitmap__V_30_30));
#line 2098 "bitmap.m"
        }
#line 2097 "bitmap.m"
        {
#line 2097 "bitmap.m"
          mercury__bitmap__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2097 "bitmap.m"
          MR_hl_field(MR_mktag(1), mercury__bitmap__V_26_26, 0) = ((MR_Box) (mercury__bitmap__V_27_27));
#line 2097 "bitmap.m"
          MR_hl_field(MR_mktag(1), mercury__bitmap__V_26_26, 1) = ((MR_Box) (mercury__bitmap__V_28_28));
#line 2097 "bitmap.m"
        }
#line 2096 "bitmap.m"
        {
#line 2096 "bitmap.m"
          mercury__bitmap__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2096 "bitmap.m"
          MR_hl_field(MR_mktag(1), mercury__bitmap__V_24_24, 0) = ((MR_Box) ((MR_String) " bits starting at bit "));
#line 2096 "bitmap.m"
          MR_hl_field(MR_mktag(1), mercury__bitmap__V_24_24, 1) = ((MR_Box) (mercury__bitmap__V_26_26));
#line 2096 "bitmap.m"
        }
#line 2095 "bitmap.m"
        {
#line 2095 "bitmap.m"
          mercury__bitmap__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2095 "bitmap.m"
          MR_hl_field(MR_mktag(1), mercury__bitmap__V_22_22, 0) = ((MR_Box) (mercury__bitmap__V_23_23));
#line 2095 "bitmap.m"
          MR_hl_field(MR_mktag(1), mercury__bitmap__V_22_22, 1) = ((MR_Box) (mercury__bitmap__V_24_24));
#line 2095 "bitmap.m"
        }
#line 2094 "bitmap.m"
        {
#line 2094 "bitmap.m"
          mercury__bitmap__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2094 "bitmap.m"
          MR_hl_field(MR_mktag(1), mercury__bitmap__V_20_20, 0) = ((MR_Box) ((MR_String) ": "));
#line 2094 "bitmap.m"
          MR_hl_field(MR_mktag(1), mercury__bitmap__V_20_20, 1) = ((MR_Box) (mercury__bitmap__V_22_22));
#line 2094 "bitmap.m"
        }
#line 2094 "bitmap.m"
        {
#line 2094 "bitmap.m"
          mercury__bitmap__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2094 "bitmap.m"
          MR_hl_field(MR_mktag(1), mercury__bitmap__V_19_19, 0) = ((MR_Box) (mercury__bitmap__Pred_6));
#line 2094 "bitmap.m"
          MR_hl_field(MR_mktag(1), mercury__bitmap__V_19_19, 1) = ((MR_Box) (mercury__bitmap__V_20_20));
#line 2094 "bitmap.m"
        }
#line 2093 "bitmap.m"
        {
#line 2093 "bitmap.m"
          mercury__bitmap__Msg_9 = mercury__string__append_list_1_f_0(mercury__bitmap__V_19_19);
        }
#line 2093 "bitmap.m"
      }
#line 2112 "bitmap.m"
    mercury__bitmap__V_60_60 = (MR_Word) mercury__bitmap__Msg_9;
#line 8392 "bitmap.c"
    mercury__bitmap__TypeCtorInfo_4_61 = (MR_Word) &mercury__bitmap__bitmap__type_ctor_info_bitmap_error_0;
#line 2112 "bitmap.m"
    {
#line 2112 "bitmap.m"
      mercury__exception__throw_1_p_0(mercury__bitmap__TypeCtorInfo_4_61, ((MR_Box) (mercury__bitmap__V_60_60)));
#line 2112 "bitmap.m"
      return;
    }
#line 2087 "bitmap.m"
  }
#line 423 "bitmap.m"
}

#line 411 "bitmap.m"
void MR_CALL 
mercury__bitmap__flip_3_p_0(
#line 411 "bitmap.m"
  MR_Integer mercury__bitmap__I_4,
#line 411 "bitmap.m"
  MR_Box mercury__bitmap__BM_5,
#line 411 "bitmap.m"
  MR_Box * mercury__bitmap__HeadVar__3_3)
#line 411 "bitmap.m"
{
#line 754 "bitmap.m"
  {
#line 754 "bitmap.m"
    MR_bool mercury__bitmap__succeeded;

#line 754 "bitmap.m"
    {
#line 754 "bitmap.m"
      *mercury__bitmap__HeadVar__3_3 = mercury__bitmap__flip_2_f_0(mercury__bitmap__BM_5, mercury__bitmap__I_4);
    }
#line 754 "bitmap.m"
  }
#line 411 "bitmap.m"
}

#line 408 "bitmap.m"
void MR_CALL 
mercury__bitmap__clear_3_p_0(
#line 408 "bitmap.m"
  MR_Integer mercury__bitmap__I_4,
#line 408 "bitmap.m"
  MR_Box mercury__bitmap__BM_5,
#line 408 "bitmap.m"
  MR_Box * mercury__bitmap__HeadVar__3_3)
#line 408 "bitmap.m"
{
#line 752 "bitmap.m"
  {
#line 752 "bitmap.m"
    MR_bool mercury__bitmap__succeeded;

#line 752 "bitmap.m"
    {
#line 752 "bitmap.m"
      *mercury__bitmap__HeadVar__3_3 = mercury__bitmap__clear_2_f_0(mercury__bitmap__BM_5, mercury__bitmap__I_4);
    }
#line 752 "bitmap.m"
  }
#line 408 "bitmap.m"
}

#line 405 "bitmap.m"
void MR_CALL 
mercury__bitmap__set_3_p_0(
#line 405 "bitmap.m"
  MR_Integer mercury__bitmap__I_4,
#line 405 "bitmap.m"
  MR_Box mercury__bitmap__BM_5,
#line 405 "bitmap.m"
  MR_Box * mercury__bitmap__HeadVar__3_3)
#line 405 "bitmap.m"
{
#line 750 "bitmap.m"
  {
#line 750 "bitmap.m"
    MR_bool mercury__bitmap__succeeded;

#line 750 "bitmap.m"
    {
#line 750 "bitmap.m"
      *mercury__bitmap__HeadVar__3_3 = mercury__bitmap__set_2_f_0(mercury__bitmap__BM_5, mercury__bitmap__I_4);
    }
#line 750 "bitmap.m"
  }
#line 405 "bitmap.m"
}

#line 398 "bitmap.m"
MR_bool MR_CALL 
mercury__bitmap__unsafe_is_clear_2_p_0(
#line 398 "bitmap.m"
  MR_Box mercury__bitmap__BM_3,
#line 398 "bitmap.m"
  MR_Integer mercury__bitmap__I_4)
#line 398 "bitmap.m"
{
#line 801 "bitmap.m"
  {
#line 801 "bitmap.m"
    MR_bool mercury__bitmap__succeeded = (mercury__bitmap__I_4 < (MR_Integer) 0);
#line 801 "bitmap.m"
    MR_Integer mercury__bitmap__V_5_5;
#line 801 "bitmap.m"
    MR_Integer mercury__bitmap__V_6_6;
#line 801 "bitmap.m"
    MR_Integer mercury__bitmap__V_7_7;
#line 801 "bitmap.m"
    MR_Integer mercury__bitmap__V_8_8;
#line 801 "bitmap.m"
    MR_Integer mercury__bitmap__V_18_18;
#line 801 "bitmap.m"
    MR_Integer mercury__bitmap__V_22_22;

#line 1968 "bitmap.m"
    if (mercury__bitmap__succeeded)
#line 1970 "bitmap.m"
      mercury__bitmap__V_7_7 = (MR_Integer) -1;
#line 1968 "bitmap.m"
    else
#line 1972 "bitmap.m"
      {
#line 1972 "bitmap.m"
        mercury__bitmap__V_7_7 = (mercury__bitmap__I_4 / (MR_Integer) 8);
#line 1972 "bitmap.m"
      }
#line 1808 "bitmap.m"
{
#define MR_PROC_LABEL mercury__bitmap__unsafe_is_clear_2_p_0

	MR_Integer N;
	MR_BitmapPtr BM;
	MR_Integer Byte;

	N =  mercury__bitmap__V_7_7 ;
	BM = (MR_BitmapPtr) mercury__bitmap__BM_3 ;
		{
#line 1808 "bitmap.m"

    Byte = (MR_Integer) BM->elements[N];

#line 8537 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__V_6_6  = Byte;
#line 1808 "bitmap.m"
}
#line 2004 "bitmap.m"
    mercury__bitmap__V_22_22 = (mercury__bitmap__I_4 % (MR_Integer) 8);
#line 2017 "bitmap.m"
    mercury__bitmap__V_18_18 = ((MR_Integer) 7 - mercury__bitmap__V_22_22);
#line 2016 "bitmap.m"
    mercury__bitmap__V_8_8 = ((MR_Integer) 1 << mercury__bitmap__V_18_18);
#line 802 "bitmap.m"
    mercury__bitmap__V_5_5 = (mercury__bitmap__V_6_6 & mercury__bitmap__V_8_8);
#line 802 "bitmap.m"
    mercury__bitmap__succeeded = (mercury__bitmap__V_5_5 == (MR_Integer) 0);
#line 801 "bitmap.m"
    return mercury__bitmap__succeeded;
#line 801 "bitmap.m"
  }
#line 398 "bitmap.m"
}

#line 394 "bitmap.m"
MR_bool MR_CALL 
mercury__bitmap__unsafe_is_set_2_p_0(
#line 394 "bitmap.m"
  MR_Box mercury__bitmap__BM_3,
#line 394 "bitmap.m"
  MR_Integer mercury__bitmap__I_4)
#line 394 "bitmap.m"
{
#line 799 "bitmap.m"
  {
#line 799 "bitmap.m"
    MR_bool mercury__bitmap__succeeded;

#line 799 "bitmap.m"
    {
#line 799 "bitmap.m"
      mercury__bitmap__succeeded = mercury__bitmap__unsafe_is_clear_2_p_0(mercury__bitmap__BM_3, mercury__bitmap__I_4);
    }
#line 799 "bitmap.m"
    mercury__bitmap__succeeded = !(mercury__bitmap__succeeded);
#line 799 "bitmap.m"
    return mercury__bitmap__succeeded;
#line 799 "bitmap.m"
  }
#line 394 "bitmap.m"
}

#line 390 "bitmap.m"
void MR_CALL 
mercury__bitmap__unsafe_flip_3_p_0(
#line 390 "bitmap.m"
  MR_Integer mercury__bitmap__I_4,
#line 390 "bitmap.m"
  MR_Box mercury__bitmap__BM_5,
#line 390 "bitmap.m"
  MR_Box * mercury__bitmap__HeadVar__3_3)
#line 390 "bitmap.m"
{
#line 780 "bitmap.m"
  {
#line 780 "bitmap.m"
    MR_bool mercury__bitmap__succeeded;

#line 780 "bitmap.m"
    {
#line 780 "bitmap.m"
      *mercury__bitmap__HeadVar__3_3 = mercury__bitmap__unsafe_flip_2_f_0(mercury__bitmap__BM_5, mercury__bitmap__I_4);
    }
#line 780 "bitmap.m"
  }
#line 390 "bitmap.m"
}

#line 387 "bitmap.m"
void MR_CALL 
mercury__bitmap__unsafe_clear_3_p_0(
#line 387 "bitmap.m"
  MR_Integer mercury__bitmap__I_4,
#line 387 "bitmap.m"
  MR_Box mercury__bitmap__BM_5,
#line 387 "bitmap.m"
  MR_Box * mercury__bitmap__HeadVar__3_3)
#line 387 "bitmap.m"
{
#line 778 "bitmap.m"
  {
#line 778 "bitmap.m"
    MR_bool mercury__bitmap__succeeded;

#line 778 "bitmap.m"
    {
#line 778 "bitmap.m"
      *mercury__bitmap__HeadVar__3_3 = mercury__bitmap__unsafe_clear_2_f_0(mercury__bitmap__BM_5, mercury__bitmap__I_4);
    }
#line 778 "bitmap.m"
  }
#line 387 "bitmap.m"
}

#line 384 "bitmap.m"
void MR_CALL 
mercury__bitmap__unsafe_set_3_p_0(
#line 384 "bitmap.m"
  MR_Integer mercury__bitmap__I_4,
#line 384 "bitmap.m"
  MR_Box mercury__bitmap__BM_5,
#line 384 "bitmap.m"
  MR_Box * mercury__bitmap__HeadVar__3_3)
#line 384 "bitmap.m"
{
#line 776 "bitmap.m"
  {
#line 776 "bitmap.m"
    MR_bool mercury__bitmap__succeeded;

#line 776 "bitmap.m"
    {
#line 776 "bitmap.m"
      *mercury__bitmap__HeadVar__3_3 = mercury__bitmap__unsafe_set_2_f_0(mercury__bitmap__BM_5, mercury__bitmap__I_4);
    }
#line 776 "bitmap.m"
  }
#line 384 "bitmap.m"
}

#line 381 "bitmap.m"
MR_Box MR_CALL 
mercury__bitmap__unsafe_clear_2_f_0(
#line 381 "bitmap.m"
  MR_Box mercury__bitmap__BM0_4,
#line 381 "bitmap.m"
  MR_Integer mercury__bitmap__I_5)
#line 381 "bitmap.m"
{
#line 764 "bitmap.m"
  {
#line 764 "bitmap.m"
    MR_bool mercury__bitmap__succeeded = (mercury__bitmap__I_5 < (MR_Integer) 0);
#line 764 "bitmap.m"
    MR_Box mercury__bitmap__BM_6;
#line 764 "bitmap.m"
    MR_Integer mercury__bitmap__ByteIndex_7;
#line 764 "bitmap.m"
    MR_Integer mercury__bitmap__Byte0_8;
#line 764 "bitmap.m"
    MR_Integer mercury__bitmap__Byte_9;
#line 764 "bitmap.m"
    MR_Integer mercury__bitmap__V_10_10;
#line 764 "bitmap.m"
    MR_Integer mercury__bitmap__V_11_11;
#line 764 "bitmap.m"
    MR_Integer mercury__bitmap__V_21_21;
#line 764 "bitmap.m"
    MR_Integer mercury__bitmap__V_25_25;

#line 1968 "bitmap.m"
    if (mercury__bitmap__succeeded)
#line 1970 "bitmap.m"
      mercury__bitmap__ByteIndex_7 = (MR_Integer) -1;
#line 1968 "bitmap.m"
    else
#line 1972 "bitmap.m"
      {
#line 1972 "bitmap.m"
        mercury__bitmap__ByteIndex_7 = (mercury__bitmap__I_5 / (MR_Integer) 8);
#line 1972 "bitmap.m"
      }
#line 1808 "bitmap.m"
{
#define MR_PROC_LABEL mercury__bitmap__unsafe_clear_2_f_0

	MR_Integer N;
	MR_BitmapPtr BM;
	MR_Integer Byte;

	N =  mercury__bitmap__ByteIndex_7 ;
	BM = (MR_BitmapPtr) mercury__bitmap__BM0_4 ;
		{
#line 1808 "bitmap.m"

    Byte = (MR_Integer) BM->elements[N];

#line 8724 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__Byte0_8  = Byte;
#line 1808 "bitmap.m"
}
#line 2004 "bitmap.m"
    mercury__bitmap__V_25_25 = (mercury__bitmap__I_5 % (MR_Integer) 8);
#line 2017 "bitmap.m"
    mercury__bitmap__V_21_21 = ((MR_Integer) 7 - mercury__bitmap__V_25_25);
#line 2016 "bitmap.m"
    mercury__bitmap__V_11_11 = ((MR_Integer) 1 << mercury__bitmap__V_21_21);
#line 767 "bitmap.m"
    mercury__bitmap__V_10_10 = ~(mercury__bitmap__V_11_11);
#line 767 "bitmap.m"
    mercury__bitmap__Byte_9 = (mercury__bitmap__Byte0_8 & mercury__bitmap__V_10_10);
#line 1849 "bitmap.m"
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
#line 1849 "bitmap.m"

    BM = BM0;
    BM->elements[N] = (MR_uint_least8_t) Byte;

#line 8759 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__BM_6  = (MR_Box) BM;
#line 1849 "bitmap.m"
}
#line 764 "bitmap.m"
    return mercury__bitmap__BM_6;
#line 764 "bitmap.m"
  }
#line 381 "bitmap.m"
}

#line 378 "bitmap.m"
MR_Box MR_CALL 
mercury__bitmap__unsafe_set_2_f_0(
#line 378 "bitmap.m"
  MR_Box mercury__bitmap__BM0_4,
#line 378 "bitmap.m"
  MR_Integer mercury__bitmap__I_5)
#line 378 "bitmap.m"
{
#line 758 "bitmap.m"
  {
#line 758 "bitmap.m"
    MR_bool mercury__bitmap__succeeded = (mercury__bitmap__I_5 < (MR_Integer) 0);
#line 758 "bitmap.m"
    MR_Box mercury__bitmap__BM_6;
#line 758 "bitmap.m"
    MR_Integer mercury__bitmap__ByteIndex_7;
#line 758 "bitmap.m"
    MR_Integer mercury__bitmap__Byte0_8;
#line 758 "bitmap.m"
    MR_Integer mercury__bitmap__Byte_9;
#line 758 "bitmap.m"
    MR_Integer mercury__bitmap__V_10_10;
#line 758 "bitmap.m"
    MR_Integer mercury__bitmap__V_20_20;
#line 758 "bitmap.m"
    MR_Integer mercury__bitmap__V_24_24;

#line 1968 "bitmap.m"
    if (mercury__bitmap__succeeded)
#line 1970 "bitmap.m"
      mercury__bitmap__ByteIndex_7 = (MR_Integer) -1;
#line 1968 "bitmap.m"
    else
#line 1972 "bitmap.m"
      {
#line 1972 "bitmap.m"
        mercury__bitmap__ByteIndex_7 = (mercury__bitmap__I_5 / (MR_Integer) 8);
#line 1972 "bitmap.m"
      }
#line 1808 "bitmap.m"
{
#define MR_PROC_LABEL mercury__bitmap__unsafe_set_2_f_0

	MR_Integer N;
	MR_BitmapPtr BM;
	MR_Integer Byte;

	N =  mercury__bitmap__ByteIndex_7 ;
	BM = (MR_BitmapPtr) mercury__bitmap__BM0_4 ;
		{
#line 1808 "bitmap.m"

    Byte = (MR_Integer) BM->elements[N];

#line 8828 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__Byte0_8  = Byte;
#line 1808 "bitmap.m"
}
#line 2004 "bitmap.m"
    mercury__bitmap__V_24_24 = (mercury__bitmap__I_5 % (MR_Integer) 8);
#line 2017 "bitmap.m"
    mercury__bitmap__V_20_20 = ((MR_Integer) 7 - mercury__bitmap__V_24_24);
#line 2016 "bitmap.m"
    mercury__bitmap__V_10_10 = ((MR_Integer) 1 << mercury__bitmap__V_20_20);
#line 761 "bitmap.m"
    mercury__bitmap__Byte_9 = (mercury__bitmap__Byte0_8 | mercury__bitmap__V_10_10);
#line 1849 "bitmap.m"
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
#line 1849 "bitmap.m"

    BM = BM0;
    BM->elements[N] = (MR_uint_least8_t) Byte;

#line 8861 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__BM_6  = (MR_Box) BM;
#line 1849 "bitmap.m"
}
#line 758 "bitmap.m"
    return mercury__bitmap__BM_6;
#line 758 "bitmap.m"
  }
#line 378 "bitmap.m"
}

#line 370 "bitmap.m"
MR_bool MR_CALL 
mercury__bitmap__is_clear_2_p_0(
#line 370 "bitmap.m"
  MR_Box mercury__bitmap__BM_3,
#line 370 "bitmap.m"
  MR_Integer mercury__bitmap__I_4)
#line 370 "bitmap.m"
{
#line 793 "bitmap.m"
  {
#line 793 "bitmap.m"
    MR_bool mercury__bitmap__succeeded = ((MR_Integer) 0 <= mercury__bitmap__I_4);
#line 535 "bitmap.m"
    MR_Integer mercury__bitmap__V_12_12;

#line 535 "bitmap.m"
    if (mercury__bitmap__succeeded)
#line 535 "bitmap.m"
      {
#line 1734 "bitmap.m"
{
#define MR_PROC_LABEL mercury__bitmap__is_clear_2_p_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr) mercury__bitmap__BM_3 ;
		{
#line 1734 "bitmap.m"

    NumBits = BM->num_bits;

#line 8908 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__V_12_12  = NumBits;
#line 1734 "bitmap.m"
}
#line 535 "bitmap.m"
        mercury__bitmap__succeeded = (mercury__bitmap__I_4 < mercury__bitmap__V_12_12);
#line 535 "bitmap.m"
      }
#line 793 "bitmap.m"
    if (mercury__bitmap__succeeded)
#line 792 "bitmap.m"
      {
#line 792 "bitmap.m"
        return mercury__bitmap__succeeded = mercury__bitmap__unsafe_is_clear_2_p_0(mercury__bitmap__BM_3, mercury__bitmap__I_4);
      }
#line 793 "bitmap.m"
    else
#line 793 "bitmap.m"
      {
#line 793 "bitmap.m"
        MR_Word mercury__bitmap__TypeCtorInfo_8_8 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 793 "bitmap.m"
        MR_Integer mercury__bitmap__V_6_6;
#line 793 "bitmap.m"
        MR_Box mercury__bitmap__conv0_V_6_6;

#line 793 "bitmap.m"
        {
#line 793 "bitmap.m"
          mercury__bitmap__conv0_V_6_6 = mercury__bitmap__throw_bounds_error_3_f_0(mercury__bitmap__TypeCtorInfo_8_8, mercury__bitmap__BM_3, (MR_String) "bitmap.is_clear", mercury__bitmap__I_4);
        }
#line 793 "bitmap.m"
        mercury__bitmap__V_6_6 = ((MR_Integer) mercury__bitmap__conv0_V_6_6);
#line 793 "bitmap.m"
        mercury__bitmap__succeeded = MR_TRUE;
#line 793 "bitmap.m"
      }
#line 793 "bitmap.m"
    return mercury__bitmap__succeeded;
#line 793 "bitmap.m"
  }
#line 370 "bitmap.m"
}

#line 366 "bitmap.m"
MR_bool MR_CALL 
mercury__bitmap__is_set_2_p_0(
#line 366 "bitmap.m"
  MR_Box mercury__bitmap__BM_3,
#line 366 "bitmap.m"
  MR_Integer mercury__bitmap__I_4)
#line 366 "bitmap.m"
{
#line 787 "bitmap.m"
  {
#line 787 "bitmap.m"
    MR_bool mercury__bitmap__succeeded = ((MR_Integer) 0 <= mercury__bitmap__I_4);
#line 535 "bitmap.m"
    MR_Integer mercury__bitmap__V_12_12;

#line 535 "bitmap.m"
    if (mercury__bitmap__succeeded)
#line 535 "bitmap.m"
      {
#line 1734 "bitmap.m"
{
#define MR_PROC_LABEL mercury__bitmap__is_set_2_p_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr) mercury__bitmap__BM_3 ;
		{
#line 1734 "bitmap.m"

    NumBits = BM->num_bits;

#line 8988 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__V_12_12  = NumBits;
#line 1734 "bitmap.m"
}
#line 535 "bitmap.m"
        mercury__bitmap__succeeded = (mercury__bitmap__I_4 < mercury__bitmap__V_12_12);
#line 535 "bitmap.m"
      }
#line 787 "bitmap.m"
    if (mercury__bitmap__succeeded)
#line 799 "bitmap.m"
      {
#line 799 "bitmap.m"
        {
#line 799 "bitmap.m"
          mercury__bitmap__succeeded = mercury__bitmap__unsafe_is_clear_2_p_0(mercury__bitmap__BM_3, mercury__bitmap__I_4);
        }
#line 799 "bitmap.m"
        mercury__bitmap__succeeded = !(mercury__bitmap__succeeded);
#line 799 "bitmap.m"
      }
#line 787 "bitmap.m"
    else
#line 787 "bitmap.m"
      {
#line 787 "bitmap.m"
        MR_Word mercury__bitmap__TypeCtorInfo_8_8 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 787 "bitmap.m"
        MR_Integer mercury__bitmap__V_6_6;
#line 787 "bitmap.m"
        MR_Box mercury__bitmap__conv0_V_6_6;

#line 787 "bitmap.m"
        {
#line 787 "bitmap.m"
          mercury__bitmap__conv0_V_6_6 = mercury__bitmap__throw_bounds_error_3_f_0(mercury__bitmap__TypeCtorInfo_8_8, mercury__bitmap__BM_3, (MR_String) "bitmap.is_set", mercury__bitmap__I_4);
        }
#line 787 "bitmap.m"
        mercury__bitmap__V_6_6 = ((MR_Integer) mercury__bitmap__conv0_V_6_6);
#line 787 "bitmap.m"
        mercury__bitmap__succeeded = MR_TRUE;
#line 787 "bitmap.m"
      }
#line 787 "bitmap.m"
    return mercury__bitmap__succeeded;
#line 787 "bitmap.m"
  }
#line 366 "bitmap.m"
}

#line 359 "bitmap.m"
MR_Box MR_CALL 
mercury__bitmap__clear_2_f_0(
#line 359 "bitmap.m"
  MR_Box mercury__bitmap__BM_4,
#line 359 "bitmap.m"
  MR_Integer mercury__bitmap__I_5)
#line 359 "bitmap.m"
{
#line 738 "bitmap.m"
  {
#line 738 "bitmap.m"
    MR_bool mercury__bitmap__succeeded = ((MR_Integer) 0 <= mercury__bitmap__I_5);
#line 738 "bitmap.m"
    MR_Box mercury__bitmap__HeadVar__3_3;
#line 535 "bitmap.m"
    MR_Integer mercury__bitmap__V_11_11;

#line 535 "bitmap.m"
    if (mercury__bitmap__succeeded)
#line 535 "bitmap.m"
      {
#line 1734 "bitmap.m"
{
#define MR_PROC_LABEL mercury__bitmap__clear_2_f_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr) mercury__bitmap__BM_4 ;
		{
#line 1734 "bitmap.m"

    NumBits = BM->num_bits;

#line 9076 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__V_11_11  = NumBits;
#line 1734 "bitmap.m"
}
#line 535 "bitmap.m"
        mercury__bitmap__succeeded = (mercury__bitmap__I_5 < mercury__bitmap__V_11_11);
#line 535 "bitmap.m"
      }
#line 738 "bitmap.m"
    if (mercury__bitmap__succeeded)
#line 740 "bitmap.m"
      {
#line 740 "bitmap.m"
        return mercury__bitmap__HeadVar__3_3 = mercury__bitmap__unsafe_clear_2_f_0(mercury__bitmap__BM_4, mercury__bitmap__I_5);
      }
#line 738 "bitmap.m"
    else
#line 741 "bitmap.m"
      {
#line 741 "bitmap.m"
        MR_Word mercury__bitmap__TypeCtorInfo_7_7 = (MR_Word) &mercury__bitmap__bitmap__type_ctor_info_bitmap_0;
#line 741 "bitmap.m"
        MR_Box mercury__bitmap__conv0_HeadVar__3_3;

#line 741 "bitmap.m"
        {
#line 741 "bitmap.m"
          mercury__bitmap__conv0_HeadVar__3_3 = mercury__bitmap__throw_bounds_error_3_f_0(mercury__bitmap__TypeCtorInfo_7_7, mercury__bitmap__BM_4, (MR_String) "bitmap.clear", mercury__bitmap__I_5);
        }
#line 741 "bitmap.m"
        mercury__bitmap__HeadVar__3_3 = ((MR_Box) mercury__bitmap__conv0_HeadVar__3_3);
#line 741 "bitmap.m"
      }
#line 738 "bitmap.m"
    return mercury__bitmap__HeadVar__3_3;
#line 738 "bitmap.m"
  }
#line 359 "bitmap.m"
}

#line 356 "bitmap.m"
MR_Box MR_CALL 
mercury__bitmap__set_2_f_0(
#line 356 "bitmap.m"
  MR_Box mercury__bitmap__BM_4,
#line 356 "bitmap.m"
  MR_Integer mercury__bitmap__I_5)
#line 356 "bitmap.m"
{
#line 732 "bitmap.m"
  {
#line 732 "bitmap.m"
    MR_bool mercury__bitmap__succeeded = ((MR_Integer) 0 <= mercury__bitmap__I_5);
#line 732 "bitmap.m"
    MR_Box mercury__bitmap__HeadVar__3_3;
#line 535 "bitmap.m"
    MR_Integer mercury__bitmap__V_11_11;

#line 535 "bitmap.m"
    if (mercury__bitmap__succeeded)
#line 535 "bitmap.m"
      {
#line 1734 "bitmap.m"
{
#define MR_PROC_LABEL mercury__bitmap__set_2_f_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr) mercury__bitmap__BM_4 ;
		{
#line 1734 "bitmap.m"

    NumBits = BM->num_bits;

#line 9154 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__V_11_11  = NumBits;
#line 1734 "bitmap.m"
}
#line 535 "bitmap.m"
        mercury__bitmap__succeeded = (mercury__bitmap__I_5 < mercury__bitmap__V_11_11);
#line 535 "bitmap.m"
      }
#line 732 "bitmap.m"
    if (mercury__bitmap__succeeded)
#line 734 "bitmap.m"
      {
#line 734 "bitmap.m"
        return mercury__bitmap__HeadVar__3_3 = mercury__bitmap__unsafe_set_2_f_0(mercury__bitmap__BM_4, mercury__bitmap__I_5);
      }
#line 732 "bitmap.m"
    else
#line 735 "bitmap.m"
      {
#line 735 "bitmap.m"
        MR_Word mercury__bitmap__TypeCtorInfo_7_7 = (MR_Word) &mercury__bitmap__bitmap__type_ctor_info_bitmap_0;
#line 735 "bitmap.m"
        MR_Box mercury__bitmap__conv0_HeadVar__3_3;

#line 735 "bitmap.m"
        {
#line 735 "bitmap.m"
          mercury__bitmap__conv0_HeadVar__3_3 = mercury__bitmap__throw_bounds_error_3_f_0(mercury__bitmap__TypeCtorInfo_7_7, mercury__bitmap__BM_4, (MR_String) "bitmap.set", mercury__bitmap__I_5);
        }
#line 735 "bitmap.m"
        mercury__bitmap__HeadVar__3_3 = ((MR_Box) mercury__bitmap__conv0_HeadVar__3_3);
#line 735 "bitmap.m"
      }
#line 732 "bitmap.m"
    return mercury__bitmap__HeadVar__3_3;
#line 732 "bitmap.m"
  }
#line 356 "bitmap.m"
}

#line 346 "bitmap.m"
MR_Integer MR_CALL 
mercury__bitmap__hash_1_f_0(
#line 346 "bitmap.m"
  MR_Box mercury__bitmap__BM_3)
#line 346 "bitmap.m"
{
#line 1485 "bitmap.m"
  {
#line 1485 "bitmap.m"
    MR_bool mercury__bitmap__succeeded;
#line 1485 "bitmap.m"
    MR_Integer mercury__bitmap__HashVal_4;
#line 1485 "bitmap.m"
    MR_Integer mercury__bitmap__NumBits_5;
#line 1485 "bitmap.m"
    MR_Integer mercury__bitmap__NumBytes0_6;
#line 1485 "bitmap.m"
    MR_Integer mercury__bitmap__NumBytes_7;
#line 1485 "bitmap.m"
    MR_Integer mercury__bitmap__HashVal0_8;
#line 1488 "bitmap.m"
    MR_Integer mercury__bitmap__V_10_10;

#line 1734 "bitmap.m"
{
#define MR_PROC_LABEL mercury__bitmap__hash_1_f_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr) mercury__bitmap__BM_3 ;
		{
#line 1734 "bitmap.m"

    NumBits = BM->num_bits;

#line 9234 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__NumBits_5  = NumBits;
#line 1734 "bitmap.m"
}
#line 1487 "bitmap.m"
    mercury__bitmap__NumBytes0_6 = (mercury__bitmap__NumBits_5 / (MR_Integer) 8);
#line 1488 "bitmap.m"
    mercury__bitmap__V_10_10 = (mercury__bitmap__NumBits_5 % (MR_Integer) 8);
#line 1488 "bitmap.m"
    mercury__bitmap__succeeded = (mercury__bitmap__V_10_10 == (MR_Integer) 0);
#line 1490 "bitmap.m"
    if (mercury__bitmap__succeeded)
#line 1489 "bitmap.m"
      mercury__bitmap__NumBytes_7 = mercury__bitmap__NumBytes0_6;
#line 1490 "bitmap.m"
    else
#line 1491 "bitmap.m"
      {
#line 1491 "bitmap.m"
        mercury__bitmap__NumBytes_7 = (mercury__bitmap__NumBytes0_6 + (MR_Integer) 1);
#line 1491 "bitmap.m"
      }
#line 1493 "bitmap.m"
    {
#line 1493 "bitmap.m"
      mercury__bitmap__hash_2_5_p_0(mercury__bitmap__BM_3, (MR_Integer) 0, mercury__bitmap__NumBytes_7, (MR_Integer) 0, &mercury__bitmap__HashVal0_8);
    }
#line 1494 "bitmap.m"
    mercury__bitmap__HashVal_4 = (mercury__bitmap__HashVal0_8 ^ mercury__bitmap__NumBits_5);
#line 1485 "bitmap.m"
    return mercury__bitmap__HashVal_4;
#line 1485 "bitmap.m"
  }
#line 346 "bitmap.m"
}

#line 338 "bitmap.m"
MR_String MR_CALL 
mercury__bitmap__to_byte_string_1_f_0(
#line 338 "bitmap.m"
  MR_Box mercury__bitmap__BM_3)
#line 338 "bitmap.m"
{
#line 1445 "bitmap.m"
  {
#line 1445 "bitmap.m"
    MR_bool mercury__bitmap__succeeded;
#line 1445 "bitmap.m"
    MR_String mercury__bitmap__HeadVar__2_2;
#line 1445 "bitmap.m"
    MR_Word mercury__bitmap__V_5_5;
#line 1445 "bitmap.m"
    MR_Integer mercury__bitmap__NumBits_8;
#line 1445 "bitmap.m"
    MR_Word mercury__bitmap__V_9_9;

#line 1734 "bitmap.m"
{
#define MR_PROC_LABEL mercury__bitmap__to_byte_string_1_f_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr) mercury__bitmap__BM_3 ;
		{
#line 1734 "bitmap.m"

    NumBits = BM->num_bits;

#line 9306 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__NumBits_8  = NumBits;
#line 1734 "bitmap.m"
}
#line 1453 "bitmap.m"
    mercury__bitmap__V_9_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1453 "bitmap.m"
    {
#line 1453 "bitmap.m"
      mercury__bitmap__V_5_5 = mercury__bitmap__bitmap_to_byte_strings_3_f_0(mercury__bitmap__BM_3, mercury__bitmap__NumBits_8, mercury__bitmap__V_9_9);
    }
#line 1445 "bitmap.m"
    {
#line 1445 "bitmap.m"
      return mercury__bitmap__HeadVar__2_2 = mercury__string__join_list_2_f_0((MR_String) ".", mercury__bitmap__V_5_5);
    }
#line 1445 "bitmap.m"
    return mercury__bitmap__HeadVar__2_2;
#line 1445 "bitmap.m"
  }
#line 338 "bitmap.m"
}

#line 331 "bitmap.m"
MR_bool MR_CALL 
mercury__bitmap__from_string_1_f_0(
#line 331 "bitmap.m"
  MR_String mercury__bitmap__Str_3,
#line 331 "bitmap.m"
  MR_Box * mercury__bitmap__BM_4)
#line 331 "bitmap.m"
{
#line 1410 "bitmap.m"
  {
#line 1410 "bitmap.m"
    MR_bool mercury__bitmap__succeeded;
#line 1410 "bitmap.m"
    MR_Integer mercury__bitmap__Start_5;
#line 1410 "bitmap.m"
    MR_Char mercury__bitmap__Char_6;
#line 1410 "bitmap.m"
    MR_Integer mercury__bitmap__End_7;
#line 1410 "bitmap.m"
    MR_Integer mercury__bitmap__Colon_8;
#line 1410 "bitmap.m"
    MR_String mercury__bitmap__SizeStr_9;
#line 1410 "bitmap.m"
    MR_Integer mercury__bitmap__Size_10;
#line 1410 "bitmap.m"
    MR_Box mercury__bitmap__BM0_11;
#line 1410 "bitmap.m"
    MR_Integer mercury__bitmap__AfterColon_12;
#line 1410 "bitmap.m"
    MR_Integer mercury__bitmap__V_16_16;
#line 1410 "bitmap.m"
    MR_Char mercury__bitmap__V_17_17;
#line 1410 "bitmap.m"
    MR_String mercury__bitmap__V_18_18;
#line 1410 "bitmap.m"
    MR_Integer mercury__bitmap__V_19_19;
#line 1410 "bitmap.m"
    MR_Integer mercury__bitmap__V_20_20;
#line 1410 "bitmap.m"
    MR_Char mercury__bitmap__V_21_21;
#line 1410 "bitmap.m"
    MR_Char mercury__bitmap__V_22_22;
#line 1410 "bitmap.m"
    MR_Integer mercury__bitmap__V_5_32;
#line 593 "string.opt"
    MR_Char mercury__bitmap__V_13_13;

#line 593 "string.opt"
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
#line 593 "string.opt"

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }

#line 9405 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__bitmap__Start_5  = NextIndex;
	 mercury__bitmap__V_21_21  = Ch;
#line 593 "string.opt"
	}
mercury__bitmap__succeeded  = SUCCESS_INDICATOR;
}
#line 1410 "bitmap.m"
    if (mercury__bitmap__succeeded)
#line 1410 "bitmap.m"
      {
#line 1411 "bitmap.m"
        mercury__bitmap__succeeded = ((MR_Char) 60 == mercury__bitmap__V_21_21);
#line 1410 "bitmap.m"
        if (mercury__bitmap__succeeded)
#line 1410 "bitmap.m"
          {
#line 1412 "bitmap.m"
            {
#line 1412 "bitmap.m"
              mercury__string__unsafe_index_3_p_0(mercury__bitmap__Str_3, mercury__bitmap__Start_5, &mercury__bitmap__Char_6);
            }
#line 120 "char.opt"
            {
#line 120 "char.opt"
              mercury__bitmap__succeeded = mercury__char__is_decimal_digit_1_p_0(mercury__bitmap__Char_6);
            }
#line 1410 "bitmap.m"
            if (mercury__bitmap__succeeded)
#line 1410 "bitmap.m"
              {
#line 244 "string.opt"
{
#define MR_PROC_LABEL mercury__bitmap__from_string_1_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__bitmap__Str_3 ;
		{
#line 244 "string.opt"

    Length = strlen(Str);

#line 9453 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__V_16_16  = Length;
#line 244 "string.opt"
}
#line 1414 "bitmap.m"
                mercury__bitmap__V_17_17 = (MR_Char) 62;
#line 616 "string.opt"
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
#line 616 "string.opt"

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

#line 9490 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__bitmap__End_7  = PrevIndex;
	 mercury__bitmap__V_22_22  = Ch;
#line 616 "string.opt"
	}
mercury__bitmap__succeeded  = SUCCESS_INDICATOR;
}
#line 1410 "bitmap.m"
                if (mercury__bitmap__succeeded)
#line 1410 "bitmap.m"
                  {
#line 1414 "bitmap.m"
                    mercury__bitmap__succeeded = (mercury__bitmap__V_17_17 == mercury__bitmap__V_22_22);
#line 1410 "bitmap.m"
                    if (mercury__bitmap__succeeded)
#line 1410 "bitmap.m"
                      {
#line 1415 "bitmap.m"
                        mercury__bitmap__V_18_18 = (MR_String) ":";
#line 821 "string.opt"
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
#line 821 "string.opt"
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
#line 9542 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__bitmap__Colon_8  = Index;
#line 821 "string.opt"
	}
mercury__bitmap__succeeded  = SUCCESS_INDICATOR;
}
#line 1410 "bitmap.m"
                        if (mercury__bitmap__succeeded)
#line 1410 "bitmap.m"
                          {
#line 800 "string.opt"
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
#line 800 "string.opt"
{
    MR_Integer Count;

    Count = End - Start;
    MR_allocate_aligned_string_msg(SubString, Count, MR_ALLOC_ID);
    MR_memcpy(SubString, Str + Start, Count);
    SubString[Count] = '\0';
}
#line 9578 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__SizeStr_9  = SubString;
#line 800 "string.opt"
}
#line 405 "string.opt"
                            mercury__bitmap__V_5_32 = (MR_Integer) 10;
#line 406 "string.opt"
                            {
#line 406 "string.opt"
                              mercury__bitmap__succeeded = mercury__string__base_string_to_int_3_p_0(mercury__bitmap__V_5_32, mercury__bitmap__SizeStr_9, &mercury__bitmap__Size_10);
                            }
#line 1410 "bitmap.m"
                            if (mercury__bitmap__succeeded)
#line 1410 "bitmap.m"
                              {
#line 1418 "bitmap.m"
                                mercury__bitmap__V_19_19 = (MR_Integer) 0;
#line 1418 "bitmap.m"
                                mercury__bitmap__succeeded = (mercury__bitmap__Size_10 >= mercury__bitmap__V_19_19);
#line 1410 "bitmap.m"
                                if (mercury__bitmap__succeeded)
#line 1410 "bitmap.m"
                                  {
#line 1888 "bitmap.m"
{
#define MR_PROC_LABEL mercury__bitmap__from_string_1_f_0

	MR_Integer N;
	MR_BitmapPtr BM;

	N =  mercury__bitmap__Size_10 ;
		{
#line 1888 "bitmap.m"

    MR_allocate_bitmap_msg(BM, N, MR_ALLOC_ID);

#line 9617 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__BM0_11  = (MR_Box) BM;
#line 1888 "bitmap.m"
}
#line 593 "string.opt"
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
#line 593 "string.opt"

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }

#line 9649 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__bitmap__AfterColon_12  = NextIndex;
	 mercury__bitmap__V_13_13  = Ch;
#line 593 "string.opt"
	}
mercury__bitmap__succeeded  = SUCCESS_INDICATOR;
}
#line 1410 "bitmap.m"
                                    if (mercury__bitmap__succeeded)
#line 1410 "bitmap.m"
                                      {
#line 1421 "bitmap.m"
                                        mercury__bitmap__V_20_20 = (MR_Integer) 0;
#line 1421 "bitmap.m"
                                        {
#line 1421 "bitmap.m"
                                          return mercury__bitmap__succeeded = mercury__bitmap__hex_chars_to_bitmap_6_p_0(mercury__bitmap__Str_3, mercury__bitmap__AfterColon_12, mercury__bitmap__End_7, mercury__bitmap__V_20_20, mercury__bitmap__BM0_11, mercury__bitmap__BM_4);
                                        }
#line 1410 "bitmap.m"
                                      }
#line 1410 "bitmap.m"
                                  }
#line 1410 "bitmap.m"
                              }
#line 1410 "bitmap.m"
                          }
#line 1410 "bitmap.m"
                      }
#line 1410 "bitmap.m"
                  }
#line 1410 "bitmap.m"
              }
#line 1410 "bitmap.m"
          }
#line 1410 "bitmap.m"
      }
#line 1410 "bitmap.m"
    return mercury__bitmap__succeeded;
#line 1410 "bitmap.m"
  }
#line 331 "bitmap.m"
}

#line 326 "bitmap.m"
MR_String MR_CALL 
mercury__bitmap__to_string_1_f_0(
#line 326 "bitmap.m"
  MR_Box mercury__bitmap__BM_3)
#line 326 "bitmap.m"
{
#line 1381 "bitmap.m"
  {
#line 1381 "bitmap.m"
    MR_bool mercury__bitmap__succeeded;
#line 1381 "bitmap.m"
    MR_String mercury__bitmap__Str_4;
#line 1381 "bitmap.m"
    MR_Word mercury__bitmap__TypeCtorInfo_20_20;
#line 1381 "bitmap.m"
    MR_Integer mercury__bitmap__NumBits_5;
#line 1381 "bitmap.m"
    MR_Word mercury__bitmap__BitChars_6;
#line 1381 "bitmap.m"
    MR_Word mercury__bitmap__LenChars_7;
#line 1381 "bitmap.m"
    MR_Word mercury__bitmap__Chars_8;
#line 1381 "bitmap.m"
    MR_Integer mercury__bitmap__V_9_9;
#line 1381 "bitmap.m"
    MR_Word mercury__bitmap__V_10_10;
#line 1381 "bitmap.m"
    MR_Integer mercury__bitmap__V_11_11;
#line 1381 "bitmap.m"
    MR_Word mercury__bitmap__V_14_14;
#line 1381 "bitmap.m"
    MR_String mercury__bitmap__V_15_15;
#line 1381 "bitmap.m"
    MR_Word mercury__bitmap__V_16_16;
#line 1381 "bitmap.m"
    MR_Word mercury__bitmap__V_18_18;

#line 1734 "bitmap.m"
{
#define MR_PROC_LABEL mercury__bitmap__to_string_1_f_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr) mercury__bitmap__BM_3 ;
		{
#line 1734 "bitmap.m"

    NumBits = BM->num_bits;

#line 9747 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__NumBits_5  = NumBits;
#line 1734 "bitmap.m"
}
#line 1383 "bitmap.m"
    mercury__bitmap__V_11_11 = (mercury__bitmap__NumBits_5 - (MR_Integer) 1);
#line 1969 "bitmap.m"
    mercury__bitmap__succeeded = (mercury__bitmap__V_11_11 < (MR_Integer) 0);
#line 1968 "bitmap.m"
    if (mercury__bitmap__succeeded)
#line 1970 "bitmap.m"
      mercury__bitmap__V_9_9 = (MR_Integer) -1;
#line 1968 "bitmap.m"
    else
#line 1972 "bitmap.m"
      {
#line 1972 "bitmap.m"
        mercury__bitmap__V_9_9 = (mercury__bitmap__V_11_11 / (MR_Integer) 8);
#line 1972 "bitmap.m"
      }
#line 1383 "bitmap.m"
    mercury__bitmap__V_14_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1383 "bitmap.m"
    mercury__bitmap__V_10_10 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__bitmap_scalar_common_4[0]);
#line 1383 "bitmap.m"
    {
#line 1383 "bitmap.m"
      mercury__bitmap__to_string_chars_4_p_0(mercury__bitmap__V_9_9, mercury__bitmap__BM_3, mercury__bitmap__V_10_10, &mercury__bitmap__BitChars_6);
    }
#line 297 "string.opt"
    {
#line 297 "string.opt"
      mercury__string__int_to_base_string_3_p_0(mercury__bitmap__NumBits_5, (MR_Integer) 10, &mercury__bitmap__V_15_15);
    }
#line 392 "string.opt"
    {
#line 392 "string.opt"
      mercury__string__to_char_list_2_p_0(mercury__bitmap__V_15_15, &mercury__bitmap__LenChars_7);
    }
#line 9789 "bitmap.c"
    mercury__bitmap__TypeCtorInfo_20_20 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0;
#line 1385 "bitmap.m"
    {
#line 1385 "bitmap.m"
      mercury__bitmap__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1385 "bitmap.m"
      MR_hl_field(MR_mktag(1), mercury__bitmap__V_16_16, 0) = ((MR_Box) (MR_Word) ((MR_Char) 60));
#line 1385 "bitmap.m"
      MR_hl_field(MR_mktag(1), mercury__bitmap__V_16_16, 1) = ((MR_Box) (mercury__bitmap__LenChars_7));
#line 1385 "bitmap.m"
    }
#line 1385 "bitmap.m"
    {
#line 1385 "bitmap.m"
      mercury__bitmap__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1385 "bitmap.m"
      MR_hl_field(MR_mktag(1), mercury__bitmap__V_18_18, 0) = ((MR_Box) (MR_Word) ((MR_Char) 58));
#line 1385 "bitmap.m"
      MR_hl_field(MR_mktag(1), mercury__bitmap__V_18_18, 1) = ((MR_Box) (mercury__bitmap__BitChars_6));
#line 1385 "bitmap.m"
    }
#line 46 "list.opt"
    {
#line 46 "list.opt"
      mercury__list__append_3_p_1(mercury__bitmap__TypeCtorInfo_20_20, mercury__bitmap__V_16_16, mercury__bitmap__V_18_18, &mercury__bitmap__Chars_8);
    }
#line 394 "string.opt"
    {
#line 394 "string.opt"
      mercury__string__from_char_list_2_p_0(mercury__bitmap__Chars_8, &mercury__bitmap__Str_4);
    }
#line 1381 "bitmap.m"
    return mercury__bitmap__Str_4;
#line 1381 "bitmap.m"
  }
#line 326 "bitmap.m"
}

#line 317 "bitmap.m"
MR_Box MR_CALL 
mercury__bitmap__copy_bytes_in_bitmap_4_f_0(
#line 317 "bitmap.m"
  MR_Box mercury__bitmap__SrcBM_6,
#line 317 "bitmap.m"
  MR_Integer mercury__bitmap__SrcStartByteIndex_7,
#line 317 "bitmap.m"
  MR_Integer mercury__bitmap__DestStartByteIndex_8,
#line 317 "bitmap.m"
  MR_Integer mercury__bitmap__NumBytes_9)
#line 317 "bitmap.m"
{
#line 1071 "bitmap.m"
  {
#line 1071 "bitmap.m"
    MR_bool mercury__bitmap__succeeded;
#line 1071 "bitmap.m"
    MR_Box mercury__bitmap__HeadVar__5_5;

#line 1072 "bitmap.m"
    {
#line 1072 "bitmap.m"
      return mercury__bitmap__HeadVar__5_5 = mercury__bitmap__copy_bytes_6_f_0((MR_Integer) 1, mercury__bitmap__SrcBM_6, mercury__bitmap__SrcStartByteIndex_7, mercury__bitmap__SrcBM_6, mercury__bitmap__DestStartByteIndex_8, mercury__bitmap__NumBytes_9);
    }
#line 1071 "bitmap.m"
    return mercury__bitmap__HeadVar__5_5;
#line 1071 "bitmap.m"
  }
#line 317 "bitmap.m"
}

#line 308 "bitmap.m"
MR_Box MR_CALL 
mercury__bitmap__copy_bytes_5_f_0(
#line 308 "bitmap.m"
  MR_Box mercury__bitmap__SrcBM_7,
#line 308 "bitmap.m"
  MR_Integer mercury__bitmap__SrcStartByteIndex_8,
#line 308 "bitmap.m"
  MR_Box mercury__bitmap__DestBM_9,
#line 308 "bitmap.m"
  MR_Integer mercury__bitmap__DestStartByteIndex_10,
#line 308 "bitmap.m"
  MR_Integer mercury__bitmap__NumBytes_11)
#line 308 "bitmap.m"
{
#line 1067 "bitmap.m"
  {
#line 1067 "bitmap.m"
    MR_bool mercury__bitmap__succeeded;
#line 1067 "bitmap.m"
    MR_Box mercury__bitmap__HeadVar__6_6;

#line 1068 "bitmap.m"
    {
#line 1068 "bitmap.m"
      return mercury__bitmap__HeadVar__6_6 = mercury__bitmap__copy_bytes_6_f_0((MR_Integer) 0, mercury__bitmap__SrcBM_7, mercury__bitmap__SrcStartByteIndex_8, mercury__bitmap__DestBM_9, mercury__bitmap__DestStartByteIndex_10, mercury__bitmap__NumBytes_11);
    }
#line 1067 "bitmap.m"
    return mercury__bitmap__HeadVar__6_6;
#line 1067 "bitmap.m"
  }
#line 308 "bitmap.m"
}

#line 299 "bitmap.m"
MR_Box MR_CALL 
mercury__bitmap__copy_bits_in_bitmap_4_f_0(
#line 299 "bitmap.m"
  MR_Box mercury__bitmap__SrcBM_6,
#line 299 "bitmap.m"
  MR_Integer mercury__bitmap__SrcStartBit_7,
#line 299 "bitmap.m"
  MR_Integer mercury__bitmap__DestStartBit_8,
#line 299 "bitmap.m"
  MR_Integer mercury__bitmap__NumBits_9)
#line 299 "bitmap.m"
{
#line 913 "bitmap.m"
  {
#line 913 "bitmap.m"
    MR_bool mercury__bitmap__succeeded;
#line 913 "bitmap.m"
    MR_Box mercury__bitmap__HeadVar__5_5;

#line 914 "bitmap.m"
    {
#line 914 "bitmap.m"
      return mercury__bitmap__HeadVar__5_5 = mercury__bitmap__copy_bits_6_f_0((MR_Integer) 1, mercury__bitmap__SrcBM_6, mercury__bitmap__SrcStartBit_7, mercury__bitmap__SrcBM_6, mercury__bitmap__DestStartBit_8, mercury__bitmap__NumBits_9);
    }
#line 913 "bitmap.m"
    return mercury__bitmap__HeadVar__5_5;
#line 913 "bitmap.m"
  }
#line 299 "bitmap.m"
}

#line 291 "bitmap.m"
MR_Box MR_CALL 
mercury__bitmap__copy_bits_5_f_0(
#line 291 "bitmap.m"
  MR_Box mercury__bitmap__SrcBM_7,
#line 291 "bitmap.m"
  MR_Integer mercury__bitmap__SrcStartBit_8,
#line 291 "bitmap.m"
  MR_Box mercury__bitmap__DestBM_9,
#line 291 "bitmap.m"
  MR_Integer mercury__bitmap__DestStartBit_10,
#line 291 "bitmap.m"
  MR_Integer mercury__bitmap__NumBits_11)
#line 291 "bitmap.m"
{
#line 910 "bitmap.m"
  {
#line 910 "bitmap.m"
    MR_bool mercury__bitmap__succeeded;
#line 910 "bitmap.m"
    MR_Box mercury__bitmap__HeadVar__6_6;

#line 911 "bitmap.m"
    {
#line 911 "bitmap.m"
      return mercury__bitmap__HeadVar__6_6 = mercury__bitmap__copy_bits_6_f_0((MR_Integer) 0, mercury__bitmap__SrcBM_7, mercury__bitmap__SrcStartBit_8, mercury__bitmap__DestBM_9, mercury__bitmap__DestStartBit_10, mercury__bitmap__NumBits_11);
    }
#line 910 "bitmap.m"
    return mercury__bitmap__HeadVar__6_6;
#line 910 "bitmap.m"
  }
#line 291 "bitmap.m"
}

#line 276 "bitmap.m"
MR_Box MR_CALL 
mercury__bitmap__append_list_1_f_0(
#line 276 "bitmap.m"
  MR_Word mercury__bitmap__BMs_3)
#line 276 "bitmap.m"
{
#line 896 "bitmap.m"
  {
#line 896 "bitmap.m"
    MR_bool mercury__bitmap__succeeded;
#line 896 "bitmap.m"
    MR_Box mercury__bitmap__STATE_VARIABLE_BM_8;
#line 896 "bitmap.m"
    MR_Integer mercury__bitmap__BMSize_5;
#line 896 "bitmap.m"
    MR_Box mercury__bitmap__STATE_VARIABLE_BM_15_15;
#line 899 "bitmap.m"
    MR_Integer mercury__bitmap__V_7_7;

#line 395 "list.opt"
    {
#line 395 "list.opt"
      mercury__bitmap__foldl__ho12_4_p_in__list_0(mercury__bitmap__BMs_3, (MR_Integer) 0, &mercury__bitmap__BMSize_5);
    }
#line 437 "bitmap.m"
    {
#line 437 "bitmap.m"
      mercury__bitmap__STATE_VARIABLE_BM_15_15 = mercury__bitmap__init_2_f_0(mercury__bitmap__BMSize_5, (MR_Integer) 0);
    }
#line 899 "bitmap.m"
    {
#line 899 "bitmap.m"
      mercury__bitmap__foldl2__ho2_6_p_in__list_0(mercury__bitmap__BMs_3, (MR_Integer) 0, &mercury__bitmap__V_7_7, mercury__bitmap__STATE_VARIABLE_BM_15_15, &mercury__bitmap__STATE_VARIABLE_BM_8);
    }
#line 896 "bitmap.m"
    return mercury__bitmap__STATE_VARIABLE_BM_8;
#line 896 "bitmap.m"
  }
#line 276 "bitmap.m"
}

#line 270 "bitmap.m"
MR_Box MR_CALL 
mercury__bitmap__xor_2_f_0(
#line 270 "bitmap.m"
  MR_Box mercury__bitmap__BMa_4,
#line 270 "bitmap.m"
  MR_Box mercury__bitmap__BMb_5)
#line 270 "bitmap.m"
{
#line 852 "bitmap.m"
  {
#line 852 "bitmap.m"
    MR_bool mercury__bitmap__succeeded;
#line 852 "bitmap.m"
    MR_Box mercury__bitmap__HeadVar__3_3;
#line 853 "bitmap.m"
    MR_Integer mercury__bitmap__V_8_8;
#line 853 "bitmap.m"
    MR_Integer mercury__bitmap__V_17_17;

#line 1734 "bitmap.m"
{
#define MR_PROC_LABEL mercury__bitmap__xor_2_f_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr) mercury__bitmap__BMa_4 ;
		{
#line 1734 "bitmap.m"

    NumBits = BM->num_bits;

#line 10035 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__V_8_8  = NumBits;
#line 1734 "bitmap.m"
}
#line 1734 "bitmap.m"
{
#define MR_PROC_LABEL mercury__bitmap__xor_2_f_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr) mercury__bitmap__BMb_5 ;
		{
#line 1734 "bitmap.m"

    NumBits = BM->num_bits;

#line 10055 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__V_17_17  = NumBits;
#line 1734 "bitmap.m"
}
#line 853 "bitmap.m"
    mercury__bitmap__succeeded = (mercury__bitmap__V_8_8 == mercury__bitmap__V_17_17);
#line 852 "bitmap.m"
    if (mercury__bitmap__succeeded)
#line 871 "bitmap.m"
      {
#line 872 "bitmap.m"
        MR_Integer mercury__bitmap__V_28_28;

#line 1734 "bitmap.m"
{
#define MR_PROC_LABEL mercury__bitmap__xor_2_f_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr) mercury__bitmap__BMb_5 ;
		{
#line 1734 "bitmap.m"

    NumBits = BM->num_bits;

#line 10084 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__V_28_28  = NumBits;
#line 1734 "bitmap.m"
}
#line 872 "bitmap.m"
        mercury__bitmap__succeeded = (mercury__bitmap__V_28_28 == (MR_Integer) 0);
#line 871 "bitmap.m"
        if (mercury__bitmap__succeeded)
#line 871 "bitmap.m"
          mercury__bitmap__HeadVar__3_3 = mercury__bitmap__BMb_5;
#line 871 "bitmap.m"
        else
#line 874 "bitmap.m"
          {
#line 874 "bitmap.m"
            MR_Integer mercury__bitmap__V_29_29;
#line 874 "bitmap.m"
            MR_Integer mercury__bitmap__V_30_30;
#line 874 "bitmap.m"
            MR_Integer mercury__bitmap__V_31_31;

#line 1734 "bitmap.m"
{
#define MR_PROC_LABEL mercury__bitmap__xor_2_f_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr) mercury__bitmap__BMb_5 ;
		{
#line 1734 "bitmap.m"

    NumBits = BM->num_bits;

#line 10121 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__V_31_31  = NumBits;
#line 1734 "bitmap.m"
}
#line 874 "bitmap.m"
            mercury__bitmap__V_30_30 = (mercury__bitmap__V_31_31 - (MR_Integer) 1);
#line 1969 "bitmap.m"
            mercury__bitmap__succeeded = (mercury__bitmap__V_30_30 < (MR_Integer) 0);
#line 1968 "bitmap.m"
            if (mercury__bitmap__succeeded)
#line 1970 "bitmap.m"
              mercury__bitmap__V_29_29 = (MR_Integer) -1;
#line 1968 "bitmap.m"
            else
#line 1972 "bitmap.m"
              {
#line 1972 "bitmap.m"
                mercury__bitmap__V_29_29 = (mercury__bitmap__V_30_30 / (MR_Integer) 8);
#line 1972 "bitmap.m"
              }
#line 874 "bitmap.m"
            {
#line 874 "bitmap.m"
              return mercury__bitmap__HeadVar__3_3 = mercury__bitmap__zip2__ho11_4_f_0(mercury__bitmap__V_29_29, mercury__bitmap__BMa_4, mercury__bitmap__BMb_5);
            }
#line 874 "bitmap.m"
          }
#line 871 "bitmap.m"
      }
#line 852 "bitmap.m"
    else
#line 856 "bitmap.m"
      {
#line 856 "bitmap.m"
        MR_Word mercury__bitmap__TypeCtorInfo_4_46 = (MR_Word) &mercury__bitmap__bitmap__type_ctor_info_bitmap_error_0;
#line 856 "bitmap.m"
        MR_Word mercury__bitmap__V_45_45 = (MR_Word) ((MR_Box) ((MR_String) "bitmap.xor: bitmaps not the same size"));

#line 2112 "bitmap.m"
        {
#line 2112 "bitmap.m"
          mercury__exception__throw_1_p_0(mercury__bitmap__TypeCtorInfo_4_46, ((MR_Box) (mercury__bitmap__V_45_45)));
        }
#line 856 "bitmap.m"
      }
#line 852 "bitmap.m"
    return mercury__bitmap__HeadVar__3_3;
#line 852 "bitmap.m"
  }
#line 270 "bitmap.m"
}

#line 266 "bitmap.m"
MR_Box MR_CALL 
mercury__bitmap__difference_2_f_0(
#line 266 "bitmap.m"
  MR_Box mercury__bitmap__BMa_4,
#line 266 "bitmap.m"
  MR_Box mercury__bitmap__BMb_5)
#line 266 "bitmap.m"
{
#line 843 "bitmap.m"
  {
#line 843 "bitmap.m"
    MR_bool mercury__bitmap__succeeded;
#line 843 "bitmap.m"
    MR_Box mercury__bitmap__HeadVar__3_3;
#line 844 "bitmap.m"
    MR_Integer mercury__bitmap__V_8_8;
#line 844 "bitmap.m"
    MR_Integer mercury__bitmap__V_18_18;

#line 1734 "bitmap.m"
{
#define MR_PROC_LABEL mercury__bitmap__difference_2_f_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr) mercury__bitmap__BMa_4 ;
		{
#line 1734 "bitmap.m"

    NumBits = BM->num_bits;

#line 10209 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__V_8_8  = NumBits;
#line 1734 "bitmap.m"
}
#line 1734 "bitmap.m"
{
#define MR_PROC_LABEL mercury__bitmap__difference_2_f_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr) mercury__bitmap__BMb_5 ;
		{
#line 1734 "bitmap.m"

    NumBits = BM->num_bits;

#line 10229 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__V_18_18  = NumBits;
#line 1734 "bitmap.m"
}
#line 844 "bitmap.m"
    mercury__bitmap__succeeded = (mercury__bitmap__V_8_8 == mercury__bitmap__V_18_18);
#line 843 "bitmap.m"
    if (mercury__bitmap__succeeded)
#line 871 "bitmap.m"
      {
#line 872 "bitmap.m"
        MR_Integer mercury__bitmap__V_29_29;

#line 1734 "bitmap.m"
{
#define MR_PROC_LABEL mercury__bitmap__difference_2_f_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr) mercury__bitmap__BMb_5 ;
		{
#line 1734 "bitmap.m"

    NumBits = BM->num_bits;

#line 10258 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__V_29_29  = NumBits;
#line 1734 "bitmap.m"
}
#line 872 "bitmap.m"
        mercury__bitmap__succeeded = (mercury__bitmap__V_29_29 == (MR_Integer) 0);
#line 871 "bitmap.m"
        if (mercury__bitmap__succeeded)
#line 871 "bitmap.m"
          mercury__bitmap__HeadVar__3_3 = mercury__bitmap__BMb_5;
#line 871 "bitmap.m"
        else
#line 874 "bitmap.m"
          {
#line 874 "bitmap.m"
            MR_Integer mercury__bitmap__V_30_30;
#line 874 "bitmap.m"
            MR_Integer mercury__bitmap__V_31_31;
#line 874 "bitmap.m"
            MR_Integer mercury__bitmap__V_32_32;

#line 1734 "bitmap.m"
{
#define MR_PROC_LABEL mercury__bitmap__difference_2_f_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr) mercury__bitmap__BMb_5 ;
		{
#line 1734 "bitmap.m"

    NumBits = BM->num_bits;

#line 10295 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__V_32_32  = NumBits;
#line 1734 "bitmap.m"
}
#line 874 "bitmap.m"
            mercury__bitmap__V_31_31 = (mercury__bitmap__V_32_32 - (MR_Integer) 1);
#line 1969 "bitmap.m"
            mercury__bitmap__succeeded = (mercury__bitmap__V_31_31 < (MR_Integer) 0);
#line 1968 "bitmap.m"
            if (mercury__bitmap__succeeded)
#line 1970 "bitmap.m"
              mercury__bitmap__V_30_30 = (MR_Integer) -1;
#line 1968 "bitmap.m"
            else
#line 1972 "bitmap.m"
              {
#line 1972 "bitmap.m"
                mercury__bitmap__V_30_30 = (mercury__bitmap__V_31_31 / (MR_Integer) 8);
#line 1972 "bitmap.m"
              }
#line 874 "bitmap.m"
            {
#line 874 "bitmap.m"
              return mercury__bitmap__HeadVar__3_3 = mercury__bitmap__zip2__ho10_4_f_0(mercury__bitmap__V_30_30, mercury__bitmap__BMa_4, mercury__bitmap__BMb_5);
            }
#line 874 "bitmap.m"
          }
#line 871 "bitmap.m"
      }
#line 843 "bitmap.m"
    else
#line 847 "bitmap.m"
      {
#line 847 "bitmap.m"
        MR_Word mercury__bitmap__TypeCtorInfo_4_47 = (MR_Word) &mercury__bitmap__bitmap__type_ctor_info_bitmap_error_0;
#line 847 "bitmap.m"
        MR_Word mercury__bitmap__V_46_46 = (MR_Word) ((MR_Box) ((MR_String) "bitmap.difference: bitmaps not the same size"));

#line 2112 "bitmap.m"
        {
#line 2112 "bitmap.m"
          mercury__exception__throw_1_p_0(mercury__bitmap__TypeCtorInfo_4_47, ((MR_Box) (mercury__bitmap__V_46_46)));
        }
#line 847 "bitmap.m"
      }
#line 843 "bitmap.m"
    return mercury__bitmap__HeadVar__3_3;
#line 843 "bitmap.m"
  }
#line 266 "bitmap.m"
}

#line 262 "bitmap.m"
MR_Box MR_CALL 
mercury__bitmap__intersect_2_f_0(
#line 262 "bitmap.m"
  MR_Box mercury__bitmap__BMa_4,
#line 262 "bitmap.m"
  MR_Box mercury__bitmap__BMb_5)
#line 262 "bitmap.m"
{
#line 834 "bitmap.m"
  {
#line 834 "bitmap.m"
    MR_bool mercury__bitmap__succeeded;
#line 834 "bitmap.m"
    MR_Box mercury__bitmap__HeadVar__3_3;
#line 835 "bitmap.m"
    MR_Integer mercury__bitmap__V_6_6;
#line 835 "bitmap.m"
    MR_Integer mercury__bitmap__V_13_13;

#line 1734 "bitmap.m"
{
#define MR_PROC_LABEL mercury__bitmap__intersect_2_f_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr) mercury__bitmap__BMa_4 ;
		{
#line 1734 "bitmap.m"

    NumBits = BM->num_bits;

#line 10383 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__V_6_6  = NumBits;
#line 1734 "bitmap.m"
}
#line 1734 "bitmap.m"
{
#define MR_PROC_LABEL mercury__bitmap__intersect_2_f_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr) mercury__bitmap__BMb_5 ;
		{
#line 1734 "bitmap.m"

    NumBits = BM->num_bits;

#line 10403 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__V_13_13  = NumBits;
#line 1734 "bitmap.m"
}
#line 835 "bitmap.m"
    mercury__bitmap__succeeded = (mercury__bitmap__V_6_6 == mercury__bitmap__V_13_13);
#line 834 "bitmap.m"
    if (mercury__bitmap__succeeded)
#line 871 "bitmap.m"
      {
#line 872 "bitmap.m"
        MR_Integer mercury__bitmap__V_24_24;

#line 1734 "bitmap.m"
{
#define MR_PROC_LABEL mercury__bitmap__intersect_2_f_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr) mercury__bitmap__BMb_5 ;
		{
#line 1734 "bitmap.m"

    NumBits = BM->num_bits;

#line 10432 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__V_24_24  = NumBits;
#line 1734 "bitmap.m"
}
#line 872 "bitmap.m"
        mercury__bitmap__succeeded = (mercury__bitmap__V_24_24 == (MR_Integer) 0);
#line 871 "bitmap.m"
        if (mercury__bitmap__succeeded)
#line 871 "bitmap.m"
          mercury__bitmap__HeadVar__3_3 = mercury__bitmap__BMb_5;
#line 871 "bitmap.m"
        else
#line 874 "bitmap.m"
          {
#line 874 "bitmap.m"
            MR_Integer mercury__bitmap__V_25_25;
#line 874 "bitmap.m"
            MR_Integer mercury__bitmap__V_26_26;
#line 874 "bitmap.m"
            MR_Integer mercury__bitmap__V_27_27;

#line 1734 "bitmap.m"
{
#define MR_PROC_LABEL mercury__bitmap__intersect_2_f_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr) mercury__bitmap__BMb_5 ;
		{
#line 1734 "bitmap.m"

    NumBits = BM->num_bits;

#line 10469 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__V_27_27  = NumBits;
#line 1734 "bitmap.m"
}
#line 874 "bitmap.m"
            mercury__bitmap__V_26_26 = (mercury__bitmap__V_27_27 - (MR_Integer) 1);
#line 1969 "bitmap.m"
            mercury__bitmap__succeeded = (mercury__bitmap__V_26_26 < (MR_Integer) 0);
#line 1968 "bitmap.m"
            if (mercury__bitmap__succeeded)
#line 1970 "bitmap.m"
              mercury__bitmap__V_25_25 = (MR_Integer) -1;
#line 1968 "bitmap.m"
            else
#line 1972 "bitmap.m"
              {
#line 1972 "bitmap.m"
                mercury__bitmap__V_25_25 = (mercury__bitmap__V_26_26 / (MR_Integer) 8);
#line 1972 "bitmap.m"
              }
#line 874 "bitmap.m"
            {
#line 874 "bitmap.m"
              return mercury__bitmap__HeadVar__3_3 = mercury__bitmap__zip2__ho9_4_f_0(mercury__bitmap__V_25_25, mercury__bitmap__BMa_4, mercury__bitmap__BMb_5);
            }
#line 874 "bitmap.m"
          }
#line 871 "bitmap.m"
      }
#line 834 "bitmap.m"
    else
#line 838 "bitmap.m"
      {
#line 838 "bitmap.m"
        MR_Word mercury__bitmap__TypeCtorInfo_4_42 = (MR_Word) &mercury__bitmap__bitmap__type_ctor_info_bitmap_error_0;
#line 838 "bitmap.m"
        MR_Word mercury__bitmap__V_41_41 = (MR_Word) ((MR_Box) ((MR_String) "bitmap.intersect: bitmaps not the same size"));

#line 2112 "bitmap.m"
        {
#line 2112 "bitmap.m"
          mercury__exception__throw_1_p_0(mercury__bitmap__TypeCtorInfo_4_42, ((MR_Box) (mercury__bitmap__V_41_41)));
        }
#line 838 "bitmap.m"
      }
#line 834 "bitmap.m"
    return mercury__bitmap__HeadVar__3_3;
#line 834 "bitmap.m"
  }
#line 262 "bitmap.m"
}

#line 258 "bitmap.m"
MR_Box MR_CALL 
mercury__bitmap__union_2_f_0(
#line 258 "bitmap.m"
  MR_Box mercury__bitmap__BMa_4,
#line 258 "bitmap.m"
  MR_Box mercury__bitmap__BMb_5)
#line 258 "bitmap.m"
{
#line 825 "bitmap.m"
  {
#line 825 "bitmap.m"
    MR_bool mercury__bitmap__succeeded;
#line 825 "bitmap.m"
    MR_Box mercury__bitmap__HeadVar__3_3;
#line 826 "bitmap.m"
    MR_Integer mercury__bitmap__V_6_6;
#line 826 "bitmap.m"
    MR_Integer mercury__bitmap__V_13_13;

#line 1734 "bitmap.m"
{
#define MR_PROC_LABEL mercury__bitmap__union_2_f_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr) mercury__bitmap__BMa_4 ;
		{
#line 1734 "bitmap.m"

    NumBits = BM->num_bits;

#line 10557 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__V_6_6  = NumBits;
#line 1734 "bitmap.m"
}
#line 1734 "bitmap.m"
{
#define MR_PROC_LABEL mercury__bitmap__union_2_f_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr) mercury__bitmap__BMb_5 ;
		{
#line 1734 "bitmap.m"

    NumBits = BM->num_bits;

#line 10577 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__V_13_13  = NumBits;
#line 1734 "bitmap.m"
}
#line 826 "bitmap.m"
    mercury__bitmap__succeeded = (mercury__bitmap__V_6_6 == mercury__bitmap__V_13_13);
#line 825 "bitmap.m"
    if (mercury__bitmap__succeeded)
#line 871 "bitmap.m"
      {
#line 872 "bitmap.m"
        MR_Integer mercury__bitmap__V_24_24;

#line 1734 "bitmap.m"
{
#define MR_PROC_LABEL mercury__bitmap__union_2_f_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr) mercury__bitmap__BMb_5 ;
		{
#line 1734 "bitmap.m"

    NumBits = BM->num_bits;

#line 10606 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__V_24_24  = NumBits;
#line 1734 "bitmap.m"
}
#line 872 "bitmap.m"
        mercury__bitmap__succeeded = (mercury__bitmap__V_24_24 == (MR_Integer) 0);
#line 871 "bitmap.m"
        if (mercury__bitmap__succeeded)
#line 871 "bitmap.m"
          mercury__bitmap__HeadVar__3_3 = mercury__bitmap__BMb_5;
#line 871 "bitmap.m"
        else
#line 874 "bitmap.m"
          {
#line 874 "bitmap.m"
            MR_Integer mercury__bitmap__V_25_25;
#line 874 "bitmap.m"
            MR_Integer mercury__bitmap__V_26_26;
#line 874 "bitmap.m"
            MR_Integer mercury__bitmap__V_27_27;

#line 1734 "bitmap.m"
{
#define MR_PROC_LABEL mercury__bitmap__union_2_f_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr) mercury__bitmap__BMb_5 ;
		{
#line 1734 "bitmap.m"

    NumBits = BM->num_bits;

#line 10643 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__V_27_27  = NumBits;
#line 1734 "bitmap.m"
}
#line 874 "bitmap.m"
            mercury__bitmap__V_26_26 = (mercury__bitmap__V_27_27 - (MR_Integer) 1);
#line 1969 "bitmap.m"
            mercury__bitmap__succeeded = (mercury__bitmap__V_26_26 < (MR_Integer) 0);
#line 1968 "bitmap.m"
            if (mercury__bitmap__succeeded)
#line 1970 "bitmap.m"
              mercury__bitmap__V_25_25 = (MR_Integer) -1;
#line 1968 "bitmap.m"
            else
#line 1972 "bitmap.m"
              {
#line 1972 "bitmap.m"
                mercury__bitmap__V_25_25 = (mercury__bitmap__V_26_26 / (MR_Integer) 8);
#line 1972 "bitmap.m"
              }
#line 874 "bitmap.m"
            {
#line 874 "bitmap.m"
              return mercury__bitmap__HeadVar__3_3 = mercury__bitmap__zip2__ho8_4_f_0(mercury__bitmap__V_25_25, mercury__bitmap__BMa_4, mercury__bitmap__BMb_5);
            }
#line 874 "bitmap.m"
          }
#line 871 "bitmap.m"
      }
#line 825 "bitmap.m"
    else
#line 829 "bitmap.m"
      {
#line 829 "bitmap.m"
        MR_Word mercury__bitmap__TypeCtorInfo_4_42 = (MR_Word) &mercury__bitmap__bitmap__type_ctor_info_bitmap_error_0;
#line 829 "bitmap.m"
        MR_Word mercury__bitmap__V_41_41 = (MR_Word) ((MR_Box) ((MR_String) "bitmap.union: bitmaps not the same size"));

#line 2112 "bitmap.m"
        {
#line 2112 "bitmap.m"
          mercury__exception__throw_1_p_0(mercury__bitmap__TypeCtorInfo_4_42, ((MR_Box) (mercury__bitmap__V_41_41)));
        }
#line 829 "bitmap.m"
      }
#line 825 "bitmap.m"
    return mercury__bitmap__HeadVar__3_3;
#line 825 "bitmap.m"
  }
#line 258 "bitmap.m"
}

#line 254 "bitmap.m"
MR_Box MR_CALL 
mercury__bitmap__complement_1_f_0(
#line 254 "bitmap.m"
  MR_Box mercury__bitmap__BM_3)
#line 254 "bitmap.m"
{
#line 806 "bitmap.m"
  {
#line 806 "bitmap.m"
    MR_bool mercury__bitmap__succeeded;
#line 806 "bitmap.m"
    MR_Box mercury__bitmap__HeadVar__2_2;
#line 806 "bitmap.m"
    MR_Box mercury__bitmap__V_4_4;
#line 806 "bitmap.m"
    MR_Integer mercury__bitmap__V_5_5;
#line 806 "bitmap.m"
    MR_Integer mercury__bitmap__V_6_6;
#line 806 "bitmap.m"
    MR_Integer mercury__bitmap__V_7_7;
#line 806 "bitmap.m"
    MR_Integer mercury__bitmap__V_16_16;
#line 806 "bitmap.m"
    MR_Integer mercury__bitmap__V_17_17;

#line 1734 "bitmap.m"
{
#define MR_PROC_LABEL mercury__bitmap__complement_1_f_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr) mercury__bitmap__BM_3 ;
		{
#line 1734 "bitmap.m"

    NumBits = BM->num_bits;

#line 10737 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__V_7_7  = NumBits;
#line 1734 "bitmap.m"
}
#line 807 "bitmap.m"
    mercury__bitmap__V_6_6 = (mercury__bitmap__V_7_7 - (MR_Integer) 1);
#line 1969 "bitmap.m"
    mercury__bitmap__succeeded = (mercury__bitmap__V_6_6 < (MR_Integer) 0);
#line 1968 "bitmap.m"
    if (mercury__bitmap__succeeded)
#line 1970 "bitmap.m"
      mercury__bitmap__V_5_5 = (MR_Integer) -1;
#line 1968 "bitmap.m"
    else
#line 1972 "bitmap.m"
      {
#line 1972 "bitmap.m"
        mercury__bitmap__V_5_5 = (mercury__bitmap__V_6_6 / (MR_Integer) 8);
#line 1972 "bitmap.m"
      }
#line 807 "bitmap.m"
    {
#line 807 "bitmap.m"
      mercury__bitmap__V_4_4 = mercury__bitmap__complement_2_2_f_0(mercury__bitmap__V_5_5, mercury__bitmap__BM_3);
    }
#line 1734 "bitmap.m"
{
#define MR_PROC_LABEL mercury__bitmap__complement_1_f_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr) mercury__bitmap__V_4_4 ;
		{
#line 1734 "bitmap.m"

    NumBits = BM->num_bits;

#line 10778 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__V_17_17  = NumBits;
#line 1734 "bitmap.m"
}
#line 490 "bitmap.m"
    mercury__bitmap__V_16_16 = (mercury__bitmap__V_17_17 - (MR_Integer) 1);
#line 490 "bitmap.m"
    {
#line 490 "bitmap.m"
      return mercury__bitmap__HeadVar__2_2 = mercury__bitmap__set_trailing_bits_in_byte_3_f_0(mercury__bitmap__V_4_4, mercury__bitmap__V_16_16, (MR_Integer) 0);
    }
#line 806 "bitmap.m"
    return mercury__bitmap__HeadVar__2_2;
#line 806 "bitmap.m"
  }
#line 254 "bitmap.m"
}

#line 244 "bitmap.m"
MR_Box MR_CALL 
mercury__bitmap__unsafe_flip_2_f_0(
#line 244 "bitmap.m"
  MR_Box mercury__bitmap__BM0_4,
#line 244 "bitmap.m"
  MR_Integer mercury__bitmap__I_5)
#line 244 "bitmap.m"
{
#line 770 "bitmap.m"
  {
#line 770 "bitmap.m"
    MR_bool mercury__bitmap__succeeded = (mercury__bitmap__I_5 < (MR_Integer) 0);
#line 770 "bitmap.m"
    MR_Box mercury__bitmap__BM_6;
#line 770 "bitmap.m"
    MR_Integer mercury__bitmap__ByteIndex_7;
#line 770 "bitmap.m"
    MR_Integer mercury__bitmap__Byte0_8;
#line 770 "bitmap.m"
    MR_Integer mercury__bitmap__Byte_9;
#line 770 "bitmap.m"
    MR_Integer mercury__bitmap__V_10_10;
#line 770 "bitmap.m"
    MR_Integer mercury__bitmap__V_20_20;
#line 770 "bitmap.m"
    MR_Integer mercury__bitmap__V_24_24;

#line 1968 "bitmap.m"
    if (mercury__bitmap__succeeded)
#line 1970 "bitmap.m"
      mercury__bitmap__ByteIndex_7 = (MR_Integer) -1;
#line 1968 "bitmap.m"
    else
#line 1972 "bitmap.m"
      {
#line 1972 "bitmap.m"
        mercury__bitmap__ByteIndex_7 = (mercury__bitmap__I_5 / (MR_Integer) 8);
#line 1972 "bitmap.m"
      }
#line 1808 "bitmap.m"
{
#define MR_PROC_LABEL mercury__bitmap__unsafe_flip_2_f_0

	MR_Integer N;
	MR_BitmapPtr BM;
	MR_Integer Byte;

	N =  mercury__bitmap__ByteIndex_7 ;
	BM = (MR_BitmapPtr) mercury__bitmap__BM0_4 ;
		{
#line 1808 "bitmap.m"

    Byte = (MR_Integer) BM->elements[N];

#line 10854 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__Byte0_8  = Byte;
#line 1808 "bitmap.m"
}
#line 2004 "bitmap.m"
    mercury__bitmap__V_24_24 = (mercury__bitmap__I_5 % (MR_Integer) 8);
#line 2017 "bitmap.m"
    mercury__bitmap__V_20_20 = ((MR_Integer) 7 - mercury__bitmap__V_24_24);
#line 2016 "bitmap.m"
    mercury__bitmap__V_10_10 = ((MR_Integer) 1 << mercury__bitmap__V_20_20);
#line 773 "bitmap.m"
    mercury__bitmap__Byte_9 = (mercury__bitmap__Byte0_8 ^ mercury__bitmap__V_10_10);
#line 1849 "bitmap.m"
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
#line 1849 "bitmap.m"

    BM = BM0;
    BM->elements[N] = (MR_uint_least8_t) Byte;

#line 10887 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__BM_6  = (MR_Box) BM;
#line 1849 "bitmap.m"
}
#line 770 "bitmap.m"
    return mercury__bitmap__BM_6;
#line 770 "bitmap.m"
  }
#line 244 "bitmap.m"
}

#line 241 "bitmap.m"
MR_Box MR_CALL 
mercury__bitmap__flip_2_f_0(
#line 241 "bitmap.m"
  MR_Box mercury__bitmap__BM_4,
#line 241 "bitmap.m"
  MR_Integer mercury__bitmap__I_5)
#line 241 "bitmap.m"
{
#line 744 "bitmap.m"
  {
#line 744 "bitmap.m"
    MR_bool mercury__bitmap__succeeded = ((MR_Integer) 0 <= mercury__bitmap__I_5);
#line 744 "bitmap.m"
    MR_Box mercury__bitmap__HeadVar__3_3;
#line 535 "bitmap.m"
    MR_Integer mercury__bitmap__V_11_11;

#line 535 "bitmap.m"
    if (mercury__bitmap__succeeded)
#line 535 "bitmap.m"
      {
#line 1734 "bitmap.m"
{
#define MR_PROC_LABEL mercury__bitmap__flip_2_f_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr) mercury__bitmap__BM_4 ;
		{
#line 1734 "bitmap.m"

    NumBits = BM->num_bits;

#line 10936 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__V_11_11  = NumBits;
#line 1734 "bitmap.m"
}
#line 535 "bitmap.m"
        mercury__bitmap__succeeded = (mercury__bitmap__I_5 < mercury__bitmap__V_11_11);
#line 535 "bitmap.m"
      }
#line 744 "bitmap.m"
    if (mercury__bitmap__succeeded)
#line 746 "bitmap.m"
      {
#line 746 "bitmap.m"
        return mercury__bitmap__HeadVar__3_3 = mercury__bitmap__unsafe_flip_2_f_0(mercury__bitmap__BM_4, mercury__bitmap__I_5);
      }
#line 744 "bitmap.m"
    else
#line 747 "bitmap.m"
      {
#line 747 "bitmap.m"
        MR_Word mercury__bitmap__TypeCtorInfo_7_7 = (MR_Word) &mercury__bitmap__bitmap__type_ctor_info_bitmap_0;
#line 747 "bitmap.m"
        MR_Box mercury__bitmap__conv0_HeadVar__3_3;

#line 747 "bitmap.m"
        {
#line 747 "bitmap.m"
          mercury__bitmap__conv0_HeadVar__3_3 = mercury__bitmap__throw_bounds_error_3_f_0(mercury__bitmap__TypeCtorInfo_7_7, mercury__bitmap__BM_4, (MR_String) "bitmap.flip", mercury__bitmap__I_5);
        }
#line 747 "bitmap.m"
        mercury__bitmap__HeadVar__3_3 = ((MR_Box) mercury__bitmap__conv0_HeadVar__3_3);
#line 747 "bitmap.m"
      }
#line 744 "bitmap.m"
    return mercury__bitmap__HeadVar__3_3;
#line 744 "bitmap.m"
  }
#line 241 "bitmap.m"
}

#line 234 "bitmap.m"
MR_Integer MR_CALL 
mercury__bitmap__slice_num_bytes_1_f_0(
#line 234 "bitmap.m"
  MR_Word mercury__bitmap__Slice_3)
#line 234 "bitmap.m"
{
#line 717 "bitmap.m"
  {
#line 717 "bitmap.m"
    MR_bool mercury__bitmap__succeeded;
#line 717 "bitmap.m"
    MR_Integer mercury__bitmap__HeadVar__2_2;
#line 717 "bitmap.m"
    MR_Integer mercury__bitmap__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__bitmap__Slice_3, (MR_Integer) 2)));
#line 709 "bitmap.m"
    MR_Box mercury__bitmap__V_7_7 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__bitmap__Slice_3, (MR_Integer) 0)));
#line 709 "bitmap.m"
    MR_Integer mercury__bitmap__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__bitmap__Slice_3, (MR_Integer) 1)));

#line 718 "bitmap.m"
    {
#line 718 "bitmap.m"
      return mercury__bitmap__HeadVar__2_2 = mercury__bitmap__quotient_bits_per_byte_with_rem_zero_2_f_0((MR_String) "bitmap.slice_num_bytes", mercury__bitmap__V_5_5);
    }
#line 717 "bitmap.m"
    return mercury__bitmap__HeadVar__2_2;
#line 717 "bitmap.m"
  }
#line 234 "bitmap.m"
}

#line 233 "bitmap.m"
MR_Integer MR_CALL 
mercury__bitmap__slice_start_byte_index_1_f_0(
#line 233 "bitmap.m"
  MR_Word mercury__bitmap__Slice_3)
#line 233 "bitmap.m"
{
#line 714 "bitmap.m"
  {
#line 714 "bitmap.m"
    MR_bool mercury__bitmap__succeeded;
#line 714 "bitmap.m"
    MR_Integer mercury__bitmap__HeadVar__2_2;
#line 714 "bitmap.m"
    MR_Integer mercury__bitmap__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__bitmap__Slice_3, (MR_Integer) 1)));
#line 708 "bitmap.m"
    MR_Box mercury__bitmap__V_7_7 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__bitmap__Slice_3, (MR_Integer) 0)));
#line 708 "bitmap.m"
    MR_Integer mercury__bitmap__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__bitmap__Slice_3, (MR_Integer) 2)));

#line 715 "bitmap.m"
    {
#line 715 "bitmap.m"
      return mercury__bitmap__HeadVar__2_2 = mercury__bitmap__quotient_bits_per_byte_with_rem_zero_2_f_0((MR_String) "bitmap.slice_start_byte_index", mercury__bitmap__V_5_5);
    }
#line 714 "bitmap.m"
    return mercury__bitmap__HeadVar__2_2;
#line 714 "bitmap.m"
  }
#line 233 "bitmap.m"
}

#line 228 "bitmap.m"
MR_Integer MR_CALL 
mercury__bitmap__slice_num_bits_1_f_0(
#line 228 "bitmap.m"
  MR_Word mercury__bitmap__Slice_3)
#line 228 "bitmap.m"
{
#line 709 "bitmap.m"
  {
#line 709 "bitmap.m"
    MR_bool mercury__bitmap__succeeded;
#line 709 "bitmap.m"
    MR_Integer mercury__bitmap__HeadVar__2_2 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__bitmap__Slice_3, (MR_Integer) 2)));
#line 709 "bitmap.m"
    MR_Box mercury__bitmap__V_4_4 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__bitmap__Slice_3, (MR_Integer) 0)));
#line 709 "bitmap.m"
    MR_Integer mercury__bitmap__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__bitmap__Slice_3, (MR_Integer) 1)));

#line 709 "bitmap.m"
    return mercury__bitmap__HeadVar__2_2;
#line 709 "bitmap.m"
  }
#line 228 "bitmap.m"
}

#line 227 "bitmap.m"
MR_Integer MR_CALL 
mercury__bitmap__slice_start_bit_index_1_f_0(
#line 227 "bitmap.m"
  MR_Word mercury__bitmap__Slice_3)
#line 227 "bitmap.m"
{
#line 708 "bitmap.m"
  {
#line 708 "bitmap.m"
    MR_bool mercury__bitmap__succeeded;
#line 708 "bitmap.m"
    MR_Integer mercury__bitmap__HeadVar__2_2 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__bitmap__Slice_3, (MR_Integer) 1)));
#line 708 "bitmap.m"
    MR_Box mercury__bitmap__V_4_4 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__bitmap__Slice_3, (MR_Integer) 0)));
#line 708 "bitmap.m"
    MR_Integer mercury__bitmap__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__bitmap__Slice_3, (MR_Integer) 2)));

#line 708 "bitmap.m"
    return mercury__bitmap__HeadVar__2_2;
#line 708 "bitmap.m"
  }
#line 227 "bitmap.m"
}

#line 226 "bitmap.m"
MR_Box MR_CALL 
mercury__bitmap__slice_bitmap_1_f_0(
#line 226 "bitmap.m"
  MR_Word mercury__bitmap__Slice_3)
#line 226 "bitmap.m"
{
#line 707 "bitmap.m"
  {
#line 707 "bitmap.m"
    MR_bool mercury__bitmap__succeeded;
#line 707 "bitmap.m"
    MR_Box mercury__bitmap__HeadVar__2_2 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__bitmap__Slice_3, (MR_Integer) 0)));
#line 707 "bitmap.m"
    MR_Integer mercury__bitmap__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__bitmap__Slice_3, (MR_Integer) 1)));
#line 707 "bitmap.m"
    MR_Integer mercury__bitmap__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__bitmap__Slice_3, (MR_Integer) 2)));

#line 707 "bitmap.m"
    return mercury__bitmap__HeadVar__2_2;
#line 707 "bitmap.m"
  }
#line 226 "bitmap.m"
}

#line 222 "bitmap.m"
MR_Word MR_CALL 
mercury__bitmap__byte_slice_3_f_0(
#line 222 "bitmap.m"
  MR_Box mercury__bitmap__BM_5,
#line 222 "bitmap.m"
  MR_Integer mercury__bitmap__StartByte_6,
#line 222 "bitmap.m"
  MR_Integer mercury__bitmap__NumBytes_7)
#line 222 "bitmap.m"
{
#line 711 "bitmap.m"
  {
#line 711 "bitmap.m"
    MR_bool mercury__bitmap__succeeded;
#line 711 "bitmap.m"
    MR_Word mercury__bitmap__HeadVar__4_4;
#line 711 "bitmap.m"
    MR_Integer mercury__bitmap__V_8_8 = (mercury__bitmap__StartByte_6 * (MR_Integer) 8);
#line 711 "bitmap.m"
    MR_Integer mercury__bitmap__V_10_10 = (mercury__bitmap__NumBytes_7 * (MR_Integer) 8);

#line 712 "bitmap.m"
    {
#line 712 "bitmap.m"
      return mercury__bitmap__HeadVar__4_4 = mercury__bitmap__slice_3_f_0(mercury__bitmap__BM_5, mercury__bitmap__V_8_8, mercury__bitmap__V_10_10);
    }
#line 711 "bitmap.m"
    return mercury__bitmap__HeadVar__4_4;
#line 711 "bitmap.m"
  }
#line 222 "bitmap.m"
}

#line 218 "bitmap.m"
MR_Word MR_CALL 
mercury__bitmap__slice_3_f_0(
#line 218 "bitmap.m"
  MR_Box mercury__bitmap__BM_5,
#line 218 "bitmap.m"
  MR_Integer mercury__bitmap__StartBit_6,
#line 218 "bitmap.m"
  MR_Integer mercury__bitmap__NumBits_7)
#line 218 "bitmap.m"
{
#line 703 "bitmap.m"
  {
#line 703 "bitmap.m"
    MR_bool mercury__bitmap__succeeded = (mercury__bitmap__NumBits_7 >= (MR_Integer) 0);
#line 703 "bitmap.m"
    MR_Word mercury__bitmap__Slice_8;
#line 698 "bitmap.m"
    MR_Integer mercury__bitmap__V_10_10;
#line 698 "bitmap.m"
    MR_Integer mercury__bitmap__V_11_11;
#line 698 "bitmap.m"
    MR_Integer mercury__bitmap__V_15_15;
#line 698 "bitmap.m"
    MR_Integer mercury__bitmap__V_16_16;

#line 698 "bitmap.m"
    if (mercury__bitmap__succeeded)
#line 698 "bitmap.m"
      {
#line 699 "bitmap.m"
        mercury__bitmap__V_10_10 = (MR_Integer) 0;
#line 699 "bitmap.m"
        mercury__bitmap__succeeded = (mercury__bitmap__StartBit_6 >= mercury__bitmap__V_10_10);
#line 698 "bitmap.m"
        if (mercury__bitmap__succeeded)
#line 698 "bitmap.m"
          {
#line 700 "bitmap.m"
            mercury__bitmap__V_11_11 = (mercury__bitmap__StartBit_6 + mercury__bitmap__NumBits_7);
#line 540 "bitmap.m"
            mercury__bitmap__V_15_15 = (MR_Integer) 0;
#line 540 "bitmap.m"
            mercury__bitmap__succeeded = (mercury__bitmap__V_15_15 <= mercury__bitmap__V_11_11);
#line 698 "bitmap.m"
            if (mercury__bitmap__succeeded)
#line 698 "bitmap.m"
              {
#line 1734 "bitmap.m"
{
#define MR_PROC_LABEL mercury__bitmap__slice_3_f_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr) mercury__bitmap__BM_5 ;
		{
#line 1734 "bitmap.m"

    NumBits = BM->num_bits;

#line 11213 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__V_16_16  = NumBits;
#line 1734 "bitmap.m"
}
#line 540 "bitmap.m"
                mercury__bitmap__succeeded = (mercury__bitmap__V_11_11 <= mercury__bitmap__V_16_16);
#line 698 "bitmap.m"
              }
#line 698 "bitmap.m"
          }
#line 698 "bitmap.m"
      }
#line 703 "bitmap.m"
    if (mercury__bitmap__succeeded)
#line 702 "bitmap.m"
      {
#line 702 "bitmap.m"
        mercury__bitmap__Slice_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 702 "bitmap.m"
        MR_hl_field(MR_mktag(0), mercury__bitmap__Slice_8, 0) = ((MR_Box) (mercury__bitmap__BM_5));
#line 702 "bitmap.m"
        MR_hl_field(MR_mktag(0), mercury__bitmap__Slice_8, 1) = ((MR_Box) (mercury__bitmap__StartBit_6));
#line 702 "bitmap.m"
        MR_hl_field(MR_mktag(0), mercury__bitmap__Slice_8, 2) = ((MR_Box) (mercury__bitmap__NumBits_7));
#line 702 "bitmap.m"
      }
#line 703 "bitmap.m"
    else
#line 704 "bitmap.m"
      {
#line 704 "bitmap.m"
        {
#line 704 "bitmap.m"
          mercury__bitmap__throw_bounds_error_4_p_0(mercury__bitmap__BM_5, (MR_String) "bitmap.slice", mercury__bitmap__StartBit_6, mercury__bitmap__NumBits_7);
        }
#line 704 "bitmap.m"
      }
#line 703 "bitmap.m"
    return mercury__bitmap__Slice_8;
#line 703 "bitmap.m"
  }
#line 218 "bitmap.m"
}

#line 207 "bitmap.m"
MR_Box MR_CALL 
mercury__bitmap__f_117_110_115_97_102_101_95_98_121_116_101_32_58_61_3_f_0(
#line 207 "bitmap.m"
  MR_Integer mercury__bitmap__N_1,
#line 207 "bitmap.m"
  MR_Box mercury__bitmap__BM0_2,
#line 207 "bitmap.m"
  MR_Integer mercury__bitmap__Byte_3)
#line 207 "bitmap.m"
{
#line 1846 "bitmap.m"
  {
#line 1846 "bitmap.m"
    MR_bool mercury__bitmap__succeeded;
#line 1846 "bitmap.m"
    MR_Box mercury__bitmap__BM_4;

#line 1849 "bitmap.m"
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
#line 1849 "bitmap.m"

    BM = BM0;
    BM->elements[N] = (MR_uint_least8_t) Byte;

#line 11296 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__BM_4  = (MR_Box) BM;
#line 1849 "bitmap.m"
}
#line 1846 "bitmap.m"
    return mercury__bitmap__BM_4;
#line 1846 "bitmap.m"
  }
#line 207 "bitmap.m"
}

#line 204 "bitmap.m"
MR_Box MR_CALL 
mercury__bitmap__f_98_121_116_101_32_58_61_3_f_0(
#line 204 "bitmap.m"
  MR_Integer mercury__bitmap__N_6,
#line 204 "bitmap.m"
  MR_Box mercury__bitmap__BM_5,
#line 204 "bitmap.m"
  MR_Integer mercury__bitmap__Byte_7)
#line 204 "bitmap.m"
{
#line 1837 "bitmap.m"
  {
#line 1837 "bitmap.m"
    MR_bool mercury__bitmap__succeeded = (mercury__bitmap__N_6 >= (MR_Integer) 0);
#line 1837 "bitmap.m"
    MR_Box mercury__bitmap__HeadVar__4_4;
#line 1838 "bitmap.m"
    MR_Integer mercury__bitmap__V_9_9;
#line 1838 "bitmap.m"
    MR_Integer mercury__bitmap__V_10_10;
#line 1838 "bitmap.m"
    MR_Integer mercury__bitmap__V_11_11;
#line 1838 "bitmap.m"
    MR_Integer mercury__bitmap__V_12_12;
#line 1838 "bitmap.m"
    MR_Integer mercury__bitmap__V_13_13;
#line 1838 "bitmap.m"
    MR_Integer mercury__bitmap__V_14_14;
#line 1838 "bitmap.m"
    MR_Integer mercury__bitmap__V_19_19;
#line 1838 "bitmap.m"
    MR_Integer mercury__bitmap__V_20_20;

#line 1838 "bitmap.m"
    if (mercury__bitmap__succeeded)
#line 1838 "bitmap.m"
      {
#line 1960 "bitmap.m"
        mercury__bitmap__V_12_12 = (MR_Integer) 8;
#line 1838 "bitmap.m"
        mercury__bitmap__V_11_11 = (mercury__bitmap__N_6 * mercury__bitmap__V_12_12);
#line 1960 "bitmap.m"
        mercury__bitmap__V_13_13 = (MR_Integer) 8;
#line 1838 "bitmap.m"
        mercury__bitmap__V_10_10 = (mercury__bitmap__V_11_11 + mercury__bitmap__V_13_13);
#line 1838 "bitmap.m"
        mercury__bitmap__V_14_14 = (MR_Integer) 1;
#line 1838 "bitmap.m"
        mercury__bitmap__V_9_9 = (mercury__bitmap__V_10_10 - mercury__bitmap__V_14_14);
#line 535 "bitmap.m"
        mercury__bitmap__V_19_19 = (MR_Integer) 0;
#line 535 "bitmap.m"
        mercury__bitmap__succeeded = (mercury__bitmap__V_19_19 <= mercury__bitmap__V_9_9);
#line 1838 "bitmap.m"
        if (mercury__bitmap__succeeded)
#line 1838 "bitmap.m"
          {
#line 1734 "bitmap.m"
{
#define MR_PROC_LABEL mercury__bitmap__f_98_121_116_101_32_58_61_3_f_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr) mercury__bitmap__BM_5 ;
		{
#line 1734 "bitmap.m"

    NumBits = BM->num_bits;

#line 11381 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__V_20_20  = NumBits;
#line 1734 "bitmap.m"
}
#line 535 "bitmap.m"
            mercury__bitmap__succeeded = (mercury__bitmap__V_9_9 < mercury__bitmap__V_20_20);
#line 1838 "bitmap.m"
          }
#line 1838 "bitmap.m"
      }
#line 1837 "bitmap.m"
    if (mercury__bitmap__succeeded)
#line 1846 "bitmap.m"
      {
#line 1849 "bitmap.m"
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
#line 1849 "bitmap.m"

    BM = BM0;
    BM->elements[N] = (MR_uint_least8_t) Byte;

#line 11416 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__HeadVar__4_4  = (MR_Box) BM;
#line 1849 "bitmap.m"
}
#line 1846 "bitmap.m"
      }
#line 1837 "bitmap.m"
    else
#line 1840 "bitmap.m"
      {
#line 1840 "bitmap.m"
        MR_Word mercury__bitmap__TypeCtorInfo_16_16 = (MR_Word) &mercury__bitmap__bitmap__type_ctor_info_bitmap_0;
#line 1840 "bitmap.m"
        MR_Box mercury__bitmap__conv0_HeadVar__4_4;

#line 1840 "bitmap.m"
        {
#line 1840 "bitmap.m"
          mercury__bitmap__conv0_HeadVar__4_4 = mercury__bitmap__throw_bounds_error_3_f_0(mercury__bitmap__TypeCtorInfo_16_16, mercury__bitmap__BM_5, (MR_String) "bitmap.\'byte :=\'", mercury__bitmap__N_6);
        }
#line 1840 "bitmap.m"
        mercury__bitmap__HeadVar__4_4 = ((MR_Box) mercury__bitmap__conv0_HeadVar__4_4);
#line 1840 "bitmap.m"
      }
#line 1837 "bitmap.m"
    return mercury__bitmap__HeadVar__4_4;
#line 1837 "bitmap.m"
  }
#line 204 "bitmap.m"
}

#line 201 "bitmap.m"
MR_Integer MR_CALL 
mercury__bitmap__unsafe_byte_2_f_0(
#line 201 "bitmap.m"
  MR_Integer mercury__bitmap__N_1,
#line 201 "bitmap.m"
  MR_Box mercury__bitmap__BM_2)
#line 201 "bitmap.m"
{
#line 1805 "bitmap.m"
  {
#line 1805 "bitmap.m"
    MR_bool mercury__bitmap__succeeded;
#line 1805 "bitmap.m"
    MR_Integer mercury__bitmap__Byte_3;

#line 1808 "bitmap.m"
{
#define MR_PROC_LABEL mercury__bitmap__unsafe_byte_2_f_0

	MR_Integer N;
	MR_BitmapPtr BM;
	MR_Integer Byte;

	N =  mercury__bitmap__N_1 ;
	BM = (MR_BitmapPtr) mercury__bitmap__BM_2 ;
		{
#line 1808 "bitmap.m"

    Byte = (MR_Integer) BM->elements[N];

#line 11481 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__Byte_3  = Byte;
#line 1808 "bitmap.m"
}
#line 1805 "bitmap.m"
    return mercury__bitmap__Byte_3;
#line 1805 "bitmap.m"
  }
#line 201 "bitmap.m"
}

#line 197 "bitmap.m"
MR_Integer MR_CALL 
mercury__bitmap__byte_2_f_0(
#line 197 "bitmap.m"
  MR_Integer mercury__bitmap__N_5,
#line 197 "bitmap.m"
  MR_Box mercury__bitmap__BM_4)
#line 197 "bitmap.m"
{
#line 1798 "bitmap.m"
  {
#line 1798 "bitmap.m"
    MR_bool mercury__bitmap__succeeded = (mercury__bitmap__N_5 >= (MR_Integer) 0);
#line 1798 "bitmap.m"
    MR_Integer mercury__bitmap__HeadVar__3_3;
#line 1799 "bitmap.m"
    MR_Integer mercury__bitmap__V_7_7;
#line 1799 "bitmap.m"
    MR_Integer mercury__bitmap__V_8_8;
#line 1799 "bitmap.m"
    MR_Integer mercury__bitmap__V_9_9;
#line 1799 "bitmap.m"
    MR_Integer mercury__bitmap__V_10_10;
#line 1799 "bitmap.m"
    MR_Integer mercury__bitmap__V_11_11;
#line 1799 "bitmap.m"
    MR_Integer mercury__bitmap__V_12_12;
#line 1799 "bitmap.m"
    MR_Integer mercury__bitmap__V_17_17;
#line 1799 "bitmap.m"
    MR_Integer mercury__bitmap__V_18_18;

#line 1799 "bitmap.m"
    if (mercury__bitmap__succeeded)
#line 1799 "bitmap.m"
      {
#line 1960 "bitmap.m"
        mercury__bitmap__V_10_10 = (MR_Integer) 8;
#line 1799 "bitmap.m"
        mercury__bitmap__V_9_9 = (mercury__bitmap__N_5 * mercury__bitmap__V_10_10);
#line 1960 "bitmap.m"
        mercury__bitmap__V_11_11 = (MR_Integer) 8;
#line 1799 "bitmap.m"
        mercury__bitmap__V_8_8 = (mercury__bitmap__V_9_9 + mercury__bitmap__V_11_11);
#line 1799 "bitmap.m"
        mercury__bitmap__V_12_12 = (MR_Integer) 1;
#line 1799 "bitmap.m"
        mercury__bitmap__V_7_7 = (mercury__bitmap__V_8_8 - mercury__bitmap__V_12_12);
#line 535 "bitmap.m"
        mercury__bitmap__V_17_17 = (MR_Integer) 0;
#line 535 "bitmap.m"
        mercury__bitmap__succeeded = (mercury__bitmap__V_17_17 <= mercury__bitmap__V_7_7);
#line 1799 "bitmap.m"
        if (mercury__bitmap__succeeded)
#line 1799 "bitmap.m"
          {
#line 1734 "bitmap.m"
{
#define MR_PROC_LABEL mercury__bitmap__byte_2_f_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr) mercury__bitmap__BM_4 ;
		{
#line 1734 "bitmap.m"

    NumBits = BM->num_bits;

#line 11564 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__V_18_18  = NumBits;
#line 1734 "bitmap.m"
}
#line 535 "bitmap.m"
            mercury__bitmap__succeeded = (mercury__bitmap__V_7_7 < mercury__bitmap__V_18_18);
#line 1799 "bitmap.m"
          }
#line 1799 "bitmap.m"
      }
#line 1798 "bitmap.m"
    if (mercury__bitmap__succeeded)
#line 1805 "bitmap.m"
      {
#line 1808 "bitmap.m"
{
#define MR_PROC_LABEL mercury__bitmap__byte_2_f_0

	MR_Integer N;
	MR_BitmapPtr BM;
	MR_Integer Byte;

	N =  mercury__bitmap__N_5 ;
	BM = (MR_BitmapPtr) mercury__bitmap__BM_4 ;
		{
#line 1808 "bitmap.m"

    Byte = (MR_Integer) BM->elements[N];

#line 11596 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__HeadVar__3_3  = Byte;
#line 1808 "bitmap.m"
}
#line 1805 "bitmap.m"
      }
#line 1798 "bitmap.m"
    else
#line 1801 "bitmap.m"
      {
#line 1801 "bitmap.m"
        MR_Word mercury__bitmap__TypeCtorInfo_14_14 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 1801 "bitmap.m"
        MR_Box mercury__bitmap__conv0_HeadVar__3_3;

#line 1801 "bitmap.m"
        {
#line 1801 "bitmap.m"
          mercury__bitmap__conv0_HeadVar__3_3 = mercury__bitmap__throw_bounds_error_3_f_0(mercury__bitmap__TypeCtorInfo_14_14, mercury__bitmap__BM_4, (MR_String) "bitmap.byte", mercury__bitmap__N_5);
        }
#line 1801 "bitmap.m"
        mercury__bitmap__HeadVar__3_3 = ((MR_Integer) mercury__bitmap__conv0_HeadVar__3_3);
#line 1801 "bitmap.m"
      }
#line 1798 "bitmap.m"
    return mercury__bitmap__HeadVar__3_3;
#line 1798 "bitmap.m"
  }
#line 197 "bitmap.m"
}

#line 180 "bitmap.m"
MR_Box MR_CALL 
mercury__bitmap__f_117_110_115_97_102_101_95_98_105_116_115_32_58_61_4_f_0(
#line 180 "bitmap.m"
  MR_Integer mercury__bitmap__FirstBit_7,
#line 180 "bitmap.m"
  MR_Integer mercury__bitmap__NumBits_8,
#line 180 "bitmap.m"
  MR_Box mercury__bitmap__BM0_6,
#line 180 "bitmap.m"
  MR_Integer mercury__bitmap__Bits_9)
#line 180 "bitmap.m"
{
#line 650 "bitmap.m"
  {
#line 650 "bitmap.m"
    MR_bool mercury__bitmap__succeeded;
#line 650 "bitmap.m"
    MR_Box mercury__bitmap__BM_10;
#line 650 "bitmap.m"
    MR_Integer mercury__bitmap__LastBit_11;
#line 650 "bitmap.m"
    MR_Integer mercury__bitmap__LastByteIndex_12;
#line 650 "bitmap.m"
    MR_Integer mercury__bitmap__LastBitIndex_13;
#line 650 "bitmap.m"
    MR_Integer mercury__bitmap__V_14_14 = (mercury__bitmap__FirstBit_7 + mercury__bitmap__NumBits_8);

#line 651 "bitmap.m"
    mercury__bitmap__LastBit_11 = (mercury__bitmap__V_14_14 - (MR_Integer) 1);
#line 1969 "bitmap.m"
    mercury__bitmap__succeeded = (mercury__bitmap__LastBit_11 < (MR_Integer) 0);
#line 1968 "bitmap.m"
    if (mercury__bitmap__succeeded)
#line 1970 "bitmap.m"
      mercury__bitmap__LastByteIndex_12 = (MR_Integer) -1;
#line 1968 "bitmap.m"
    else
#line 1972 "bitmap.m"
      {
#line 1972 "bitmap.m"
        mercury__bitmap__LastByteIndex_12 = (mercury__bitmap__LastBit_11 / (MR_Integer) 8);
#line 1972 "bitmap.m"
      }
#line 2004 "bitmap.m"
    mercury__bitmap__LastBitIndex_13 = (mercury__bitmap__LastBit_11 % (MR_Integer) 8);
#line 654 "bitmap.m"
    {
#line 654 "bitmap.m"
      mercury__bitmap__set_bits_in_bytes_6_p_0(mercury__bitmap__LastByteIndex_12, mercury__bitmap__LastBitIndex_13, mercury__bitmap__NumBits_8, mercury__bitmap__Bits_9, mercury__bitmap__BM0_6, &mercury__bitmap__BM_10);
    }
#line 650 "bitmap.m"
    return mercury__bitmap__BM_10;
#line 650 "bitmap.m"
  }
#line 180 "bitmap.m"
}

#line 177 "bitmap.m"
MR_Box MR_CALL 
mercury__bitmap__f_98_105_116_115_32_58_61_4_f_0(
#line 177 "bitmap.m"
  MR_Integer mercury__bitmap__FirstBit_7,
#line 177 "bitmap.m"
  MR_Integer mercury__bitmap__NumBits_8,
#line 177 "bitmap.m"
  MR_Box mercury__bitmap__BM_6,
#line 177 "bitmap.m"
  MR_Integer mercury__bitmap__Bits_9)
#line 177 "bitmap.m"
{
#line 630 "bitmap.m"
  {
#line 630 "bitmap.m"
    MR_bool mercury__bitmap__succeeded = (mercury__bitmap__FirstBit_7 >= (MR_Integer) 0);
#line 630 "bitmap.m"
    MR_Box mercury__bitmap__HeadVar__5_5;
#line 632 "bitmap.m"
    MR_Integer mercury__bitmap__V_11_11;
#line 632 "bitmap.m"
    MR_Integer mercury__bitmap__V_12_12;
#line 632 "bitmap.m"
    MR_Integer mercury__bitmap__V_13_13;
#line 632 "bitmap.m"
    MR_Integer mercury__bitmap__V_25_25;
#line 632 "bitmap.m"
    MR_Integer mercury__bitmap__V_26_26;

#line 632 "bitmap.m"
    if (mercury__bitmap__succeeded)
#line 632 "bitmap.m"
      {
#line 633 "bitmap.m"
        mercury__bitmap__V_11_11 = (MR_Integer) 0;
#line 633 "bitmap.m"
        mercury__bitmap__succeeded = (mercury__bitmap__NumBits_8 >= mercury__bitmap__V_11_11);
#line 632 "bitmap.m"
        if (mercury__bitmap__succeeded)
#line 632 "bitmap.m"
          {
#line 171 "int.opt"
{
#define MR_PROC_LABEL mercury__bitmap__f_98_105_116_115_32_58_61_4_f_0

	MR_Integer Bits;

		{
#line 171 "int.opt"

    Bits = ML_BITS_PER_INT;

#line 11741 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__V_12_12  = Bits;
#line 171 "int.opt"
}
#line 634 "bitmap.m"
            mercury__bitmap__succeeded = (mercury__bitmap__NumBits_8 <= mercury__bitmap__V_12_12);
#line 632 "bitmap.m"
            if (mercury__bitmap__succeeded)
#line 632 "bitmap.m"
              {
#line 635 "bitmap.m"
                mercury__bitmap__V_13_13 = (mercury__bitmap__FirstBit_7 + mercury__bitmap__NumBits_8);
#line 540 "bitmap.m"
                mercury__bitmap__V_25_25 = (MR_Integer) 0;
#line 540 "bitmap.m"
                mercury__bitmap__succeeded = (mercury__bitmap__V_25_25 <= mercury__bitmap__V_13_13);
#line 632 "bitmap.m"
                if (mercury__bitmap__succeeded)
#line 632 "bitmap.m"
                  {
#line 1734 "bitmap.m"
{
#define MR_PROC_LABEL mercury__bitmap__f_98_105_116_115_32_58_61_4_f_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr) mercury__bitmap__BM_6 ;
		{
#line 1734 "bitmap.m"

    NumBits = BM->num_bits;

#line 11777 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__V_26_26  = NumBits;
#line 1734 "bitmap.m"
}
#line 540 "bitmap.m"
                    mercury__bitmap__succeeded = (mercury__bitmap__V_13_13 <= mercury__bitmap__V_26_26);
#line 632 "bitmap.m"
                  }
#line 632 "bitmap.m"
              }
#line 632 "bitmap.m"
          }
#line 632 "bitmap.m"
      }
#line 630 "bitmap.m"
    if (mercury__bitmap__succeeded)
#line 630 "bitmap.m"
      {
#line 630 "bitmap.m"
        return mercury__bitmap__HeadVar__5_5 = mercury__bitmap__f_117_110_115_97_102_101_95_98_105_116_115_32_58_61_4_f_0(mercury__bitmap__FirstBit_7, mercury__bitmap__NumBits_8, mercury__bitmap__BM_6, mercury__bitmap__Bits_9);
      }
#line 630 "bitmap.m"
    else
#line 630 "bitmap.m"
      {
#line 639 "bitmap.m"
        mercury__bitmap__succeeded = (mercury__bitmap__NumBits_8 < (MR_Integer) 0);
#line 640 "bitmap.m"
        if (!(mercury__bitmap__succeeded))
#line 640 "bitmap.m"
          {
#line 640 "bitmap.m"
            MR_Integer mercury__bitmap__V_14_14;

#line 171 "int.opt"
{
#define MR_PROC_LABEL mercury__bitmap__f_98_105_116_115_32_58_61_4_f_0

	MR_Integer Bits;

		{
#line 171 "int.opt"

    Bits = ML_BITS_PER_INT;

#line 11825 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__V_14_14  = Bits;
#line 171 "int.opt"
}
#line 640 "bitmap.m"
            mercury__bitmap__succeeded = (mercury__bitmap__NumBits_8 > mercury__bitmap__V_14_14);
#line 640 "bitmap.m"
          }
#line 630 "bitmap.m"
        if (mercury__bitmap__succeeded)
#line 643 "bitmap.m"
          {
#line 643 "bitmap.m"
            MR_Word mercury__bitmap__TypeCtorInfo_4_35 = (MR_Word) &mercury__bitmap__bitmap__type_ctor_info_bitmap_error_0;
#line 643 "bitmap.m"
            MR_Word mercury__bitmap__V_34_34 = (MR_Word) ((MR_Box) ((MR_String) "bitmap.\'bits :=\': number of bits must be between 0 and \140int.bits_per_int\'."));

#line 2112 "bitmap.m"
            {
#line 2112 "bitmap.m"
              mercury__exception__throw_1_p_0(mercury__bitmap__TypeCtorInfo_4_35, ((MR_Box) (mercury__bitmap__V_34_34)));
            }
#line 643 "bitmap.m"
          }
#line 630 "bitmap.m"
        else
#line 647 "bitmap.m"
          {
#line 647 "bitmap.m"
            MR_Word mercury__bitmap__TypeCtorInfo_21_21 = (MR_Word) &mercury__bitmap__bitmap__type_ctor_info_bitmap_0;
#line 647 "bitmap.m"
            MR_Box mercury__bitmap__conv0_HeadVar__5_5;

#line 647 "bitmap.m"
            {
#line 647 "bitmap.m"
              mercury__bitmap__conv0_HeadVar__5_5 = mercury__bitmap__throw_bounds_error_3_f_0(mercury__bitmap__TypeCtorInfo_21_21, mercury__bitmap__BM_6, (MR_String) "bitmap.\'bits :=\'", mercury__bitmap__FirstBit_7);
            }
#line 647 "bitmap.m"
            mercury__bitmap__HeadVar__5_5 = ((MR_Box) mercury__bitmap__conv0_HeadVar__5_5);
#line 647 "bitmap.m"
          }
#line 630 "bitmap.m"
      }
#line 630 "bitmap.m"
    return mercury__bitmap__HeadVar__5_5;
#line 630 "bitmap.m"
  }
#line 177 "bitmap.m"
}

#line 174 "bitmap.m"
MR_Integer MR_CALL 
mercury__bitmap__unsafe_bits_3_f_0(
#line 174 "bitmap.m"
  MR_Integer mercury__bitmap__FirstBit_6,
#line 174 "bitmap.m"
  MR_Integer mercury__bitmap__NumBits_7,
#line 174 "bitmap.m"
  MR_Box mercury__bitmap__BM_5)
#line 174 "bitmap.m"
{
#line 586 "bitmap.m"
  {
#line 586 "bitmap.m"
    MR_bool mercury__bitmap__succeeded = (mercury__bitmap__FirstBit_6 < (MR_Integer) 0);
#line 586 "bitmap.m"
    MR_Integer mercury__bitmap__Bits_8;
#line 586 "bitmap.m"
    MR_Integer mercury__bitmap__FirstByteIndex_9;
#line 586 "bitmap.m"
    MR_Integer mercury__bitmap__FirstBitIndex_10;

#line 1968 "bitmap.m"
    if (mercury__bitmap__succeeded)
#line 1970 "bitmap.m"
      mercury__bitmap__FirstByteIndex_9 = (MR_Integer) -1;
#line 1968 "bitmap.m"
    else
#line 1972 "bitmap.m"
      {
#line 1972 "bitmap.m"
        mercury__bitmap__FirstByteIndex_9 = (mercury__bitmap__FirstBit_6 / (MR_Integer) 8);
#line 1972 "bitmap.m"
      }
#line 2004 "bitmap.m"
    mercury__bitmap__FirstBitIndex_10 = (mercury__bitmap__FirstBit_6 % (MR_Integer) 8);
#line 589 "bitmap.m"
    {
#line 589 "bitmap.m"
      mercury__bitmap__extract_bits_from_bytes_6_p_0(mercury__bitmap__FirstByteIndex_9, mercury__bitmap__FirstBitIndex_10, mercury__bitmap__NumBits_7, mercury__bitmap__BM_5, (MR_Integer) 0, &mercury__bitmap__Bits_8);
    }
#line 586 "bitmap.m"
    return mercury__bitmap__Bits_8;
#line 586 "bitmap.m"
  }
#line 174 "bitmap.m"
}

#line 170 "bitmap.m"
MR_Integer MR_CALL 
mercury__bitmap__bits_3_f_0(
#line 170 "bitmap.m"
  MR_Integer mercury__bitmap__FirstBit_6,
#line 170 "bitmap.m"
  MR_Integer mercury__bitmap__NumBits_7,
#line 170 "bitmap.m"
  MR_Box mercury__bitmap__BM_5)
#line 170 "bitmap.m"
{
#line 567 "bitmap.m"
  {
#line 567 "bitmap.m"
    MR_bool mercury__bitmap__succeeded = (mercury__bitmap__FirstBit_6 >= (MR_Integer) 0);
#line 567 "bitmap.m"
    MR_Integer mercury__bitmap__HeadVar__4_4;
#line 569 "bitmap.m"
    MR_Integer mercury__bitmap__V_9_9;
#line 569 "bitmap.m"
    MR_Integer mercury__bitmap__V_10_10;
#line 569 "bitmap.m"
    MR_Integer mercury__bitmap__V_11_11;
#line 569 "bitmap.m"
    MR_Integer mercury__bitmap__V_23_23;
#line 569 "bitmap.m"
    MR_Integer mercury__bitmap__V_24_24;

#line 569 "bitmap.m"
    if (mercury__bitmap__succeeded)
#line 569 "bitmap.m"
      {
#line 570 "bitmap.m"
        mercury__bitmap__V_9_9 = (MR_Integer) 0;
#line 570 "bitmap.m"
        mercury__bitmap__succeeded = (mercury__bitmap__NumBits_7 >= mercury__bitmap__V_9_9);
#line 569 "bitmap.m"
        if (mercury__bitmap__succeeded)
#line 569 "bitmap.m"
          {
#line 171 "int.opt"
{
#define MR_PROC_LABEL mercury__bitmap__bits_3_f_0

	MR_Integer Bits;

		{
#line 171 "int.opt"

    Bits = ML_BITS_PER_INT;

#line 11978 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__V_10_10  = Bits;
#line 171 "int.opt"
}
#line 571 "bitmap.m"
            mercury__bitmap__succeeded = (mercury__bitmap__NumBits_7 <= mercury__bitmap__V_10_10);
#line 569 "bitmap.m"
            if (mercury__bitmap__succeeded)
#line 569 "bitmap.m"
              {
#line 572 "bitmap.m"
                mercury__bitmap__V_11_11 = (mercury__bitmap__FirstBit_6 + mercury__bitmap__NumBits_7);
#line 540 "bitmap.m"
                mercury__bitmap__V_23_23 = (MR_Integer) 0;
#line 540 "bitmap.m"
                mercury__bitmap__succeeded = (mercury__bitmap__V_23_23 <= mercury__bitmap__V_11_11);
#line 569 "bitmap.m"
                if (mercury__bitmap__succeeded)
#line 569 "bitmap.m"
                  {
#line 1734 "bitmap.m"
{
#define MR_PROC_LABEL mercury__bitmap__bits_3_f_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr) mercury__bitmap__BM_5 ;
		{
#line 1734 "bitmap.m"

    NumBits = BM->num_bits;

#line 12014 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__V_24_24  = NumBits;
#line 1734 "bitmap.m"
}
#line 540 "bitmap.m"
                    mercury__bitmap__succeeded = (mercury__bitmap__V_11_11 <= mercury__bitmap__V_24_24);
#line 569 "bitmap.m"
                  }
#line 569 "bitmap.m"
              }
#line 569 "bitmap.m"
          }
#line 569 "bitmap.m"
      }
#line 567 "bitmap.m"
    if (mercury__bitmap__succeeded)
#line 567 "bitmap.m"
      {
#line 567 "bitmap.m"
        return mercury__bitmap__HeadVar__4_4 = mercury__bitmap__unsafe_bits_3_f_0(mercury__bitmap__FirstBit_6, mercury__bitmap__NumBits_7, mercury__bitmap__BM_5);
      }
#line 567 "bitmap.m"
    else
#line 567 "bitmap.m"
      {
#line 576 "bitmap.m"
        mercury__bitmap__succeeded = (mercury__bitmap__NumBits_7 < (MR_Integer) 0);
#line 577 "bitmap.m"
        if (!(mercury__bitmap__succeeded))
#line 577 "bitmap.m"
          {
#line 577 "bitmap.m"
            MR_Integer mercury__bitmap__V_12_12;

#line 171 "int.opt"
{
#define MR_PROC_LABEL mercury__bitmap__bits_3_f_0

	MR_Integer Bits;

		{
#line 171 "int.opt"

    Bits = ML_BITS_PER_INT;

#line 12062 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__V_12_12  = Bits;
#line 171 "int.opt"
}
#line 577 "bitmap.m"
            mercury__bitmap__succeeded = (mercury__bitmap__NumBits_7 > mercury__bitmap__V_12_12);
#line 577 "bitmap.m"
          }
#line 567 "bitmap.m"
        if (mercury__bitmap__succeeded)
#line 580 "bitmap.m"
          {
#line 580 "bitmap.m"
            MR_Word mercury__bitmap__TypeCtorInfo_4_33 = (MR_Word) &mercury__bitmap__bitmap__type_ctor_info_bitmap_error_0;
#line 580 "bitmap.m"
            MR_Word mercury__bitmap__V_32_32 = (MR_Word) ((MR_Box) ((MR_String) "bitmap.bits: number of bits must be between 0 and \140int.bits_per_int\'."));

#line 2112 "bitmap.m"
            {
#line 2112 "bitmap.m"
              mercury__exception__throw_1_p_0(mercury__bitmap__TypeCtorInfo_4_33, ((MR_Box) (mercury__bitmap__V_32_32)));
            }
#line 580 "bitmap.m"
          }
#line 567 "bitmap.m"
        else
#line 583 "bitmap.m"
          {
#line 583 "bitmap.m"
            MR_Word mercury__bitmap__TypeCtorInfo_19_19 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 583 "bitmap.m"
            MR_Box mercury__bitmap__conv0_HeadVar__4_4;

#line 583 "bitmap.m"
            {
#line 583 "bitmap.m"
              mercury__bitmap__conv0_HeadVar__4_4 = mercury__bitmap__throw_bounds_error_3_f_0(mercury__bitmap__TypeCtorInfo_19_19, mercury__bitmap__BM_5, (MR_String) "bitmap.bits", mercury__bitmap__FirstBit_6);
            }
#line 583 "bitmap.m"
            mercury__bitmap__HeadVar__4_4 = ((MR_Integer) mercury__bitmap__conv0_HeadVar__4_4);
#line 583 "bitmap.m"
          }
#line 567 "bitmap.m"
      }
#line 567 "bitmap.m"
    return mercury__bitmap__HeadVar__4_4;
#line 567 "bitmap.m"
  }
#line 170 "bitmap.m"
}

#line 157 "bitmap.m"
MR_Box MR_CALL 
mercury__bitmap__f_117_110_115_97_102_101_95_98_105_116_32_58_61_3_f_0(
#line 157 "bitmap.m"
  MR_Integer mercury__bitmap__I_1,
#line 157 "bitmap.m"
  MR_Box mercury__bitmap__BM_2,
#line 157 "bitmap.m"
  MR_Word mercury__bitmap__HeadVar__3_3)
#line 157 "bitmap.m"
{
#line 562 "bitmap.m"
  {
#line 562 "bitmap.m"
    MR_bool mercury__bitmap__succeeded;
#line 562 "bitmap.m"
    MR_Box mercury__bitmap__HeadVar__4_4;

#line 562 "bitmap.m"
    if ((mercury__bitmap__HeadVar__3_3 == (MR_Integer) 0))
#line 563 "bitmap.m"
      {
#line 563 "bitmap.m"
        return mercury__bitmap__HeadVar__4_4 = mercury__bitmap__unsafe_clear_2_f_0(mercury__bitmap__BM_2, mercury__bitmap__I_1);
      }
#line 562 "bitmap.m"
    else
#line 562 "bitmap.m"
      {
#line 562 "bitmap.m"
        return mercury__bitmap__HeadVar__4_4 = mercury__bitmap__unsafe_set_2_f_0(mercury__bitmap__BM_2, mercury__bitmap__I_1);
      }
#line 562 "bitmap.m"
    return mercury__bitmap__HeadVar__4_4;
#line 562 "bitmap.m"
  }
#line 157 "bitmap.m"
}

#line 154 "bitmap.m"
MR_Box MR_CALL 
mercury__bitmap__f_98_105_116_32_58_61_3_f_0(
#line 154 "bitmap.m"
  MR_Integer mercury__bitmap__I_6,
#line 154 "bitmap.m"
  MR_Box mercury__bitmap__BM_5,
#line 154 "bitmap.m"
  MR_Word mercury__bitmap__B_7)
#line 154 "bitmap.m"
{
#line 556 "bitmap.m"
  {
#line 556 "bitmap.m"
    MR_bool mercury__bitmap__succeeded = ((MR_Integer) 0 <= mercury__bitmap__I_6);
#line 556 "bitmap.m"
    MR_Box mercury__bitmap__HeadVar__4_4;
#line 535 "bitmap.m"
    MR_Integer mercury__bitmap__V_13_13;

#line 535 "bitmap.m"
    if (mercury__bitmap__succeeded)
#line 535 "bitmap.m"
      {
#line 1734 "bitmap.m"
{
#define MR_PROC_LABEL mercury__bitmap__f_98_105_116_32_58_61_3_f_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr) mercury__bitmap__BM_5 ;
		{
#line 1734 "bitmap.m"

    NumBits = BM->num_bits;

#line 12192 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__V_13_13  = NumBits;
#line 1734 "bitmap.m"
}
#line 535 "bitmap.m"
        mercury__bitmap__succeeded = (mercury__bitmap__I_6 < mercury__bitmap__V_13_13);
#line 535 "bitmap.m"
      }
#line 556 "bitmap.m"
    if (mercury__bitmap__succeeded)
#line 562 "bitmap.m"
      if ((mercury__bitmap__B_7 == (MR_Integer) 0))
#line 563 "bitmap.m"
        {
#line 563 "bitmap.m"
          return mercury__bitmap__HeadVar__4_4 = mercury__bitmap__unsafe_clear_2_f_0(mercury__bitmap__BM_5, mercury__bitmap__I_6);
        }
#line 562 "bitmap.m"
      else
#line 562 "bitmap.m"
        {
#line 562 "bitmap.m"
          return mercury__bitmap__HeadVar__4_4 = mercury__bitmap__unsafe_set_2_f_0(mercury__bitmap__BM_5, mercury__bitmap__I_6);
        }
#line 556 "bitmap.m"
    else
#line 559 "bitmap.m"
      {
#line 559 "bitmap.m"
        MR_Word mercury__bitmap__TypeCtorInfo_9_9 = (MR_Word) &mercury__bitmap__bitmap__type_ctor_info_bitmap_0;
#line 559 "bitmap.m"
        MR_Box mercury__bitmap__conv0_HeadVar__4_4;

#line 559 "bitmap.m"
        {
#line 559 "bitmap.m"
          mercury__bitmap__conv0_HeadVar__4_4 = mercury__bitmap__throw_bounds_error_3_f_0(mercury__bitmap__TypeCtorInfo_9_9, mercury__bitmap__BM_5, (MR_String) "bitmap.\'bit :=\'", mercury__bitmap__I_6);
        }
#line 559 "bitmap.m"
        mercury__bitmap__HeadVar__4_4 = ((MR_Box) mercury__bitmap__conv0_HeadVar__4_4);
#line 559 "bitmap.m"
      }
#line 556 "bitmap.m"
    return mercury__bitmap__HeadVar__4_4;
#line 556 "bitmap.m"
  }
#line 154 "bitmap.m"
}

#line 151 "bitmap.m"
MR_Word MR_CALL 
mercury__bitmap__unsafe_bit_2_f_0(
#line 151 "bitmap.m"
  MR_Integer mercury__bitmap__I_5,
#line 151 "bitmap.m"
  MR_Box mercury__bitmap__BM_4)
#line 151 "bitmap.m"
{
#line 553 "bitmap.m"
  {
#line 553 "bitmap.m"
    MR_bool mercury__bitmap__succeeded;
#line 553 "bitmap.m"
    MR_Word mercury__bitmap__HeadVar__3_3;

#line 799 "bitmap.m"
    {
#line 799 "bitmap.m"
      mercury__bitmap__succeeded = mercury__bitmap__unsafe_is_clear_2_p_0(mercury__bitmap__BM_4, mercury__bitmap__I_5);
    }
#line 799 "bitmap.m"
    mercury__bitmap__succeeded = !(mercury__bitmap__succeeded);
#line 553 "bitmap.m"
    if (mercury__bitmap__succeeded)
#line 554 "bitmap.m"
      mercury__bitmap__HeadVar__3_3 = (MR_Integer) 1;
#line 553 "bitmap.m"
    else
#line 554 "bitmap.m"
      mercury__bitmap__HeadVar__3_3 = (MR_Integer) 0;
#line 553 "bitmap.m"
    return mercury__bitmap__HeadVar__3_3;
#line 553 "bitmap.m"
  }
#line 151 "bitmap.m"
}

#line 147 "bitmap.m"
MR_Word MR_CALL 
mercury__bitmap__bit_2_f_0(
#line 147 "bitmap.m"
  MR_Integer mercury__bitmap__I_5,
#line 147 "bitmap.m"
  MR_Box mercury__bitmap__BM_4)
#line 147 "bitmap.m"
{
#line 547 "bitmap.m"
  {
#line 547 "bitmap.m"
    MR_bool mercury__bitmap__succeeded = ((MR_Integer) 0 <= mercury__bitmap__I_5);
#line 547 "bitmap.m"
    MR_Word mercury__bitmap__HeadVar__3_3;
#line 535 "bitmap.m"
    MR_Integer mercury__bitmap__V_11_11;

#line 535 "bitmap.m"
    if (mercury__bitmap__succeeded)
#line 535 "bitmap.m"
      {
#line 1734 "bitmap.m"
{
#define MR_PROC_LABEL mercury__bitmap__bit_2_f_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr) mercury__bitmap__BM_4 ;
		{
#line 1734 "bitmap.m"

    NumBits = BM->num_bits;

#line 12317 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__V_11_11  = NumBits;
#line 1734 "bitmap.m"
}
#line 535 "bitmap.m"
        mercury__bitmap__succeeded = (mercury__bitmap__I_5 < mercury__bitmap__V_11_11);
#line 535 "bitmap.m"
      }
#line 547 "bitmap.m"
    if (mercury__bitmap__succeeded)
#line 553 "bitmap.m"
      {
#line 799 "bitmap.m"
        {
#line 799 "bitmap.m"
          mercury__bitmap__succeeded = mercury__bitmap__unsafe_is_clear_2_p_0(mercury__bitmap__BM_4, mercury__bitmap__I_5);
        }
#line 799 "bitmap.m"
        mercury__bitmap__succeeded = !(mercury__bitmap__succeeded);
#line 553 "bitmap.m"
        if (mercury__bitmap__succeeded)
#line 554 "bitmap.m"
          mercury__bitmap__HeadVar__3_3 = (MR_Integer) 1;
#line 553 "bitmap.m"
        else
#line 554 "bitmap.m"
          mercury__bitmap__HeadVar__3_3 = (MR_Integer) 0;
#line 553 "bitmap.m"
      }
#line 547 "bitmap.m"
    else
#line 550 "bitmap.m"
      {
#line 550 "bitmap.m"
        MR_Word mercury__bitmap__TypeCtorInfo_7_7 = (MR_Word) &mercury__bool__bool__type_ctor_info_bool_0;
#line 550 "bitmap.m"
        MR_Box mercury__bitmap__conv0_HeadVar__3_3;

#line 550 "bitmap.m"
        {
#line 550 "bitmap.m"
          mercury__bitmap__conv0_HeadVar__3_3 = mercury__bitmap__throw_bounds_error_3_f_0(mercury__bitmap__TypeCtorInfo_7_7, mercury__bitmap__BM_4, (MR_String) "bitmap.bit", mercury__bitmap__I_5);
        }
#line 550 "bitmap.m"
        mercury__bitmap__HeadVar__3_3 = ((MR_Word) mercury__bitmap__conv0_HeadVar__3_3);
#line 550 "bitmap.m"
      }
#line 547 "bitmap.m"
    return mercury__bitmap__HeadVar__3_3;
#line 547 "bitmap.m"
  }
#line 147 "bitmap.m"
}

#line 136 "bitmap.m"
MR_Integer MR_CALL 
mercury__bitmap__bits_per_byte_0_f_0(void)
#line 136 "bitmap.m"
{
#line 1960 "bitmap.m"
  {
#line 1960 "bitmap.m"
    MR_bool mercury__bitmap__succeeded;

#line 1960 "bitmap.m"
    return (MR_Integer) 8;
#line 1960 "bitmap.m"
  }
#line 136 "bitmap.m"
}

#line 132 "bitmap.m"
MR_Integer MR_CALL 
mercury__bitmap__det_num_bytes_1_f_0(
#line 132 "bitmap.m"
  MR_Box mercury__bitmap__BM_3)
#line 132 "bitmap.m"
{
#line 1722 "bitmap.m"
  {
#line 1722 "bitmap.m"
    MR_bool mercury__bitmap__succeeded;
#line 1722 "bitmap.m"
    MR_Integer mercury__bitmap__Bytes_4;
#line 1722 "bitmap.m"
    MR_Integer mercury__bitmap__Bytes0_5;
#line 1714 "bitmap.m"
    MR_Integer mercury__bitmap__NumBits_9;
#line 1714 "bitmap.m"
    MR_Integer mercury__bitmap__V_10_10;
#line 1714 "bitmap.m"
    MR_Integer mercury__bitmap__V_12_12;

#line 1734 "bitmap.m"
{
#define MR_PROC_LABEL mercury__bitmap__det_num_bytes_1_f_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr) mercury__bitmap__BM_3 ;
		{
#line 1734 "bitmap.m"

    NumBits = BM->num_bits;

#line 12426 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__NumBits_9  = NumBits;
#line 1734 "bitmap.m"
}
#line 1716 "bitmap.m"
    mercury__bitmap__V_10_10 = (mercury__bitmap__NumBits_9 % (MR_Integer) 8);
#line 1716 "bitmap.m"
    mercury__bitmap__succeeded = (mercury__bitmap__V_10_10 == (MR_Integer) 0);
#line 1714 "bitmap.m"
    if (mercury__bitmap__succeeded)
#line 1714 "bitmap.m"
      {
#line 1960 "bitmap.m"
        mercury__bitmap__V_12_12 = (MR_Integer) 8;
#line 1717 "bitmap.m"
        mercury__bitmap__Bytes0_5 = (mercury__bitmap__NumBits_9 / mercury__bitmap__V_12_12);
#line 1717 "bitmap.m"
        mercury__bitmap__succeeded = MR_TRUE;
#line 1714 "bitmap.m"
      }
#line 1722 "bitmap.m"
    if (mercury__bitmap__succeeded)
#line 1721 "bitmap.m"
      mercury__bitmap__Bytes_4 = mercury__bitmap__Bytes0_5;
#line 1722 "bitmap.m"
    else
#line 1723 "bitmap.m"
      {
#line 1723 "bitmap.m"
        MR_Word mercury__bitmap__TypeCtorInfo_4_18 = (MR_Word) &mercury__bitmap__bitmap__type_ctor_info_bitmap_error_0;
#line 1723 "bitmap.m"
        MR_Word mercury__bitmap__V_17_17 = (MR_Word) ((MR_Box) ((MR_String) "bitmap.det_num_bytes: bitmap has a partial final byte"));

#line 2112 "bitmap.m"
        {
#line 2112 "bitmap.m"
          mercury__exception__throw_1_p_0(mercury__bitmap__TypeCtorInfo_4_18, ((MR_Box) (mercury__bitmap__V_17_17)));
        }
#line 1723 "bitmap.m"
      }
#line 1722 "bitmap.m"
    return mercury__bitmap__Bytes_4;
#line 1722 "bitmap.m"
  }
#line 132 "bitmap.m"
}

#line 126 "bitmap.m"
MR_bool MR_CALL 
mercury__bitmap__num_bytes_1_f_0(
#line 126 "bitmap.m"
  MR_Box mercury__bitmap__BM_3,
#line 126 "bitmap.m"
  MR_Integer * mercury__bitmap__Bytes_4)
#line 126 "bitmap.m"
{
#line 1714 "bitmap.m"
  {
#line 1714 "bitmap.m"
    MR_bool mercury__bitmap__succeeded;
#line 1714 "bitmap.m"
    MR_Integer mercury__bitmap__NumBits_5;
#line 1714 "bitmap.m"
    MR_Integer mercury__bitmap__V_6_6;
#line 1714 "bitmap.m"
    MR_Integer mercury__bitmap__V_8_8;

#line 1734 "bitmap.m"
{
#define MR_PROC_LABEL mercury__bitmap__num_bytes_1_f_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr) mercury__bitmap__BM_3 ;
		{
#line 1734 "bitmap.m"

    NumBits = BM->num_bits;

#line 12509 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__NumBits_5  = NumBits;
#line 1734 "bitmap.m"
}
#line 1716 "bitmap.m"
    mercury__bitmap__V_6_6 = (mercury__bitmap__NumBits_5 % (MR_Integer) 8);
#line 1716 "bitmap.m"
    mercury__bitmap__succeeded = (mercury__bitmap__V_6_6 == (MR_Integer) 0);
#line 1714 "bitmap.m"
    if (mercury__bitmap__succeeded)
#line 1714 "bitmap.m"
      {
#line 1960 "bitmap.m"
        mercury__bitmap__V_8_8 = (MR_Integer) 8;
#line 1717 "bitmap.m"
        *mercury__bitmap__Bytes_4 = (mercury__bitmap__NumBits_5 / mercury__bitmap__V_8_8);
#line 1717 "bitmap.m"
        mercury__bitmap__succeeded = MR_TRUE;
#line 1714 "bitmap.m"
      }
#line 1714 "bitmap.m"
    return mercury__bitmap__succeeded;
#line 1714 "bitmap.m"
  }
#line 126 "bitmap.m"
}

#line 119 "bitmap.m"
MR_Integer MR_CALL 
mercury__bitmap__num_bits_1_f_0(
#line 119 "bitmap.m"
  MR_Box mercury__bitmap__BM_1)
#line 119 "bitmap.m"
{
#line 1731 "bitmap.m"
  {
#line 1731 "bitmap.m"
    MR_bool mercury__bitmap__succeeded;
#line 1731 "bitmap.m"
    MR_Integer mercury__bitmap__NumBits_2;

#line 1734 "bitmap.m"
{
#define MR_PROC_LABEL mercury__bitmap__num_bits_1_f_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr) mercury__bitmap__BM_1 ;
		{
#line 1734 "bitmap.m"

    NumBits = BM->num_bits;

#line 12566 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__NumBits_2  = NumBits;
#line 1734 "bitmap.m"
}
#line 1731 "bitmap.m"
    return mercury__bitmap__NumBits_2;
#line 1731 "bitmap.m"
  }
#line 119 "bitmap.m"
}

#line 113 "bitmap.m"
MR_bool MR_CALL 
mercury__bitmap__byte_in_range_2_p_0(
#line 113 "bitmap.m"
  MR_Box mercury__bitmap__BM_3,
#line 113 "bitmap.m"
  MR_Integer mercury__bitmap__I_4)
#line 113 "bitmap.m"
{
#line 542 "bitmap.m"
  {
#line 542 "bitmap.m"
    MR_bool mercury__bitmap__succeeded;
#line 542 "bitmap.m"
    MR_Integer mercury__bitmap__V_5_5;
#line 542 "bitmap.m"
    MR_Integer mercury__bitmap__V_6_6;
#line 542 "bitmap.m"
    MR_Integer mercury__bitmap__V_7_7 = (mercury__bitmap__I_4 * (MR_Integer) 8);
#line 542 "bitmap.m"
    MR_Integer mercury__bitmap__V_14_14;

#line 543 "bitmap.m"
    mercury__bitmap__V_6_6 = (mercury__bitmap__V_7_7 + (MR_Integer) 8);
#line 543 "bitmap.m"
    mercury__bitmap__V_5_5 = (mercury__bitmap__V_6_6 - (MR_Integer) 1);
#line 535 "bitmap.m"
    mercury__bitmap__succeeded = ((MR_Integer) 0 <= mercury__bitmap__V_5_5);
#line 542 "bitmap.m"
    if (mercury__bitmap__succeeded)
#line 542 "bitmap.m"
      {
#line 1734 "bitmap.m"
{
#define MR_PROC_LABEL mercury__bitmap__byte_in_range_2_p_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr) mercury__bitmap__BM_3 ;
		{
#line 1734 "bitmap.m"

    NumBits = BM->num_bits;

#line 12625 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__V_14_14  = NumBits;
#line 1734 "bitmap.m"
}
#line 535 "bitmap.m"
        mercury__bitmap__succeeded = (mercury__bitmap__V_5_5 < mercury__bitmap__V_14_14);
#line 542 "bitmap.m"
      }
#line 542 "bitmap.m"
    return mercury__bitmap__succeeded;
#line 542 "bitmap.m"
  }
#line 113 "bitmap.m"
}

#line 107 "bitmap.m"
MR_bool MR_CALL 
mercury__bitmap__in_range_2_p_0(
#line 107 "bitmap.m"
  MR_Box mercury__bitmap__BM_3,
#line 107 "bitmap.m"
  MR_Integer mercury__bitmap__I_4)
#line 107 "bitmap.m"
{
#line 535 "bitmap.m"
  {
#line 535 "bitmap.m"
    MR_bool mercury__bitmap__succeeded = ((MR_Integer) 0 <= mercury__bitmap__I_4);
#line 535 "bitmap.m"
    MR_Integer mercury__bitmap__V_6_6;

#line 535 "bitmap.m"
    if (mercury__bitmap__succeeded)
#line 535 "bitmap.m"
      {
#line 1734 "bitmap.m"
{
#define MR_PROC_LABEL mercury__bitmap__in_range_2_p_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr) mercury__bitmap__BM_3 ;
		{
#line 1734 "bitmap.m"

    NumBits = BM->num_bits;

#line 12676 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__V_6_6  = NumBits;
#line 1734 "bitmap.m"
}
#line 535 "bitmap.m"
        mercury__bitmap__succeeded = (mercury__bitmap__I_4 < mercury__bitmap__V_6_6);
#line 535 "bitmap.m"
      }
#line 535 "bitmap.m"
    return mercury__bitmap__succeeded;
#line 535 "bitmap.m"
  }
#line 107 "bitmap.m"
}

#line 101 "bitmap.m"
MR_Box MR_CALL 
mercury__bitmap__shrink_without_copying_2_f_0(
#line 101 "bitmap.m"
  MR_Box mercury__bitmap__STATE_VARIABLE_BM_0_7,
#line 101 "bitmap.m"
  MR_Integer mercury__bitmap__NewSize_5)
#line 101 "bitmap.m"
{
#line 480 "bitmap.m"
  {
#line 480 "bitmap.m"
    MR_bool mercury__bitmap__succeeded = ((MR_Integer) 0 <= mercury__bitmap__NewSize_5);
#line 480 "bitmap.m"
    MR_Box mercury__bitmap__STATE_VARIABLE_BM_8;
#line 478 "bitmap.m"
    MR_Integer mercury__bitmap__V_10_10;

#line 478 "bitmap.m"
    if (mercury__bitmap__succeeded)
#line 478 "bitmap.m"
      {
#line 1734 "bitmap.m"
{
#define MR_PROC_LABEL mercury__bitmap__shrink_without_copying_2_f_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr) mercury__bitmap__STATE_VARIABLE_BM_0_7 ;
		{
#line 1734 "bitmap.m"

    NumBits = BM->num_bits;

#line 12729 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__V_10_10  = NumBits;
#line 1734 "bitmap.m"
}
#line 478 "bitmap.m"
        mercury__bitmap__succeeded = (mercury__bitmap__NewSize_5 <= mercury__bitmap__V_10_10);
#line 478 "bitmap.m"
      }
#line 480 "bitmap.m"
    if (mercury__bitmap__succeeded)
#line 1766 "bitmap.m"
      {
#line 1769 "bitmap.m"
{
#define MR_PROC_LABEL mercury__bitmap__shrink_without_copying_2_f_0

	MR_BitmapPtr BM0;
	MR_Integer NumBits;
	MR_BitmapPtr BM;

	BM0 = (MR_BitmapPtr) mercury__bitmap__STATE_VARIABLE_BM_0_7 ;
	NumBits =  mercury__bitmap__NewSize_5 ;
		{
#line 1769 "bitmap.m"

    BM = BM0;
    BM->num_bits = NumBits;

#line 12760 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__STATE_VARIABLE_BM_8  = (MR_Box) BM;
#line 1769 "bitmap.m"
}
#line 1766 "bitmap.m"
      }
#line 480 "bitmap.m"
    else
#line 482 "bitmap.m"
      {
#line 482 "bitmap.m"
        MR_Word mercury__bitmap__TypeCtorInfo_14_14 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 481 "bitmap.m"
        MR_Integer mercury__bitmap__V_12_12;
#line 481 "bitmap.m"
        MR_Box mercury__bitmap__conv0_V_12_12;

#line 481 "bitmap.m"
        {
#line 481 "bitmap.m"
          mercury__bitmap__conv0_V_12_12 = mercury__bitmap__throw_bounds_error_3_f_0(mercury__bitmap__TypeCtorInfo_14_14, mercury__bitmap__STATE_VARIABLE_BM_0_7, (MR_String) "bitmap.shrink_without_copying", mercury__bitmap__NewSize_5);
        }
#line 481 "bitmap.m"
        mercury__bitmap__V_12_12 = ((MR_Integer) mercury__bitmap__conv0_V_12_12);
#line 482 "bitmap.m"
      }
#line 480 "bitmap.m"
    return mercury__bitmap__STATE_VARIABLE_BM_8;
#line 480 "bitmap.m"
  }
#line 101 "bitmap.m"
}

#line 96 "bitmap.m"
MR_Box MR_CALL 
mercury__bitmap__resize_3_f_0(
#line 96 "bitmap.m"
  MR_Box mercury__bitmap__STATE_VARIABLE_BM_0_12,
#line 96 "bitmap.m"
  MR_Integer mercury__bitmap__NewSize_6,
#line 96 "bitmap.m"
  MR_Word mercury__bitmap__InitializerBit_7)
#line 96 "bitmap.m"
{
#line 453 "bitmap.m"
  {
#line 453 "bitmap.m"
    MR_bool mercury__bitmap__succeeded = (mercury__bitmap__NewSize_6 <= (MR_Integer) 0);
#line 453 "bitmap.m"
    MR_Box mercury__bitmap__STATE_VARIABLE_BM_13;

#line 453 "bitmap.m"
    if (mercury__bitmap__succeeded)
#line 452 "bitmap.m"
      {
#line 452 "bitmap.m"
        return mercury__bitmap__STATE_VARIABLE_BM_13 = mercury__bitmap__init_2_f_0(mercury__bitmap__NewSize_6, mercury__bitmap__InitializerBit_7);
      }
#line 453 "bitmap.m"
    else
#line 454 "bitmap.m"
      {
#line 454 "bitmap.m"
        MR_Integer mercury__bitmap__OldSize_8;
#line 454 "bitmap.m"
        MR_Integer mercury__bitmap__InitializerByte_9;
#line 454 "bitmap.m"
        MR_Box mercury__bitmap__STATE_VARIABLE_BM_16_16;
#line 454 "bitmap.m"
        MR_Box mercury__bitmap__STATE_VARIABLE_BM_24_24;
#line 454 "bitmap.m"
        MR_Box mercury__bitmap__V_35_35;
#line 454 "bitmap.m"
        MR_Integer mercury__bitmap__V_37_37;
#line 454 "bitmap.m"
        MR_Integer mercury__bitmap__V_38_38;
#line 454 "bitmap.m"
        MR_Integer mercury__bitmap__V_61_61;
#line 454 "bitmap.m"
        MR_Integer mercury__bitmap__V_62_62;

#line 1734 "bitmap.m"
{
#define MR_PROC_LABEL mercury__bitmap__resize_3_f_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr) mercury__bitmap__STATE_VARIABLE_BM_0_12 ;
		{
#line 1734 "bitmap.m"

    NumBits = BM->num_bits;

#line 12857 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__OldSize_8  = NumBits;
#line 1734 "bitmap.m"
}
#line 512 "bitmap.m"
        if ((mercury__bitmap__InitializerBit_7 == (MR_Integer) 0))
#line 512 "bitmap.m"
          mercury__bitmap__InitializerByte_9 = (MR_Integer) 0;
#line 512 "bitmap.m"
        else
#line 513 "bitmap.m"
          mercury__bitmap__InitializerByte_9 = (MR_Integer) -1;
#line 1888 "bitmap.m"
{
#define MR_PROC_LABEL mercury__bitmap__resize_3_f_0

	MR_Integer N;
	MR_BitmapPtr BM;

	N =  mercury__bitmap__NewSize_6 ;
		{
#line 1888 "bitmap.m"

    MR_allocate_bitmap_msg(BM, N, MR_ALLOC_ID);

#line 12885 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__V_35_35  = (MR_Box) BM;
#line 1888 "bitmap.m"
}
#line 1734 "bitmap.m"
{
#define MR_PROC_LABEL mercury__bitmap__resize_3_f_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr) mercury__bitmap__STATE_VARIABLE_BM_0_12 ;
		{
#line 1734 "bitmap.m"

    NumBits = BM->num_bits;

#line 12905 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__V_38_38  = NumBits;
#line 1734 "bitmap.m"
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
#line 911 "bitmap.m"
        {
#line 911 "bitmap.m"
          mercury__bitmap__STATE_VARIABLE_BM_16_16 = mercury__bitmap__copy_bits_6_f_0((MR_Integer) 0, mercury__bitmap__STATE_VARIABLE_BM_0_12, (MR_Integer) 0, mercury__bitmap__V_35_35, (MR_Integer) 0, mercury__bitmap__V_37_37);
        }
#line 457 "bitmap.m"
        mercury__bitmap__succeeded = (mercury__bitmap__NewSize_6 > mercury__bitmap__OldSize_8);
#line 469 "bitmap.m"
        if (mercury__bitmap__succeeded)
#line 460 "bitmap.m"
          {
#line 460 "bitmap.m"
            MR_Integer mercury__bitmap__OldLastByteIndex_10;
#line 460 "bitmap.m"
            MR_Integer mercury__bitmap__NewLastByteIndex_11;
#line 460 "bitmap.m"
            MR_Box mercury__bitmap__STATE_VARIABLE_BM_17_17;
#line 460 "bitmap.m"
            MR_Integer mercury__bitmap__V_18_18 = (mercury__bitmap__OldSize_8 - (MR_Integer) 1);
#line 460 "bitmap.m"
            MR_Integer mercury__bitmap__V_20_20;
#line 460 "bitmap.m"
            MR_Integer mercury__bitmap__V_22_22;

#line 459 "bitmap.m"
            {
#line 459 "bitmap.m"
              mercury__bitmap__STATE_VARIABLE_BM_17_17 = mercury__bitmap__set_trailing_bits_in_byte_3_f_0(mercury__bitmap__STATE_VARIABLE_BM_16_16, mercury__bitmap__V_18_18, mercury__bitmap__InitializerByte_9);
            }
#line 461 "bitmap.m"
            mercury__bitmap__V_20_20 = (mercury__bitmap__OldSize_8 - (MR_Integer) 1);
#line 1969 "bitmap.m"
            mercury__bitmap__succeeded = (mercury__bitmap__V_20_20 < (MR_Integer) 0);
#line 1968 "bitmap.m"
            if (mercury__bitmap__succeeded)
#line 1970 "bitmap.m"
              mercury__bitmap__OldLastByteIndex_10 = (MR_Integer) -1;
#line 1968 "bitmap.m"
            else
#line 1972 "bitmap.m"
              {
#line 1972 "bitmap.m"
                mercury__bitmap__OldLastByteIndex_10 = (mercury__bitmap__V_20_20 / (MR_Integer) 8);
#line 1972 "bitmap.m"
              }
#line 462 "bitmap.m"
            mercury__bitmap__V_22_22 = (mercury__bitmap__NewSize_6 - (MR_Integer) 1);
#line 1969 "bitmap.m"
            mercury__bitmap__succeeded = (mercury__bitmap__V_22_22 < (MR_Integer) 0);
#line 1968 "bitmap.m"
            if (mercury__bitmap__succeeded)
#line 1970 "bitmap.m"
              mercury__bitmap__NewLastByteIndex_11 = (MR_Integer) -1;
#line 1968 "bitmap.m"
            else
#line 1972 "bitmap.m"
              {
#line 1972 "bitmap.m"
                mercury__bitmap__NewLastByteIndex_11 = (mercury__bitmap__V_22_22 / (MR_Integer) 8);
#line 1972 "bitmap.m"
              }
#line 463 "bitmap.m"
            mercury__bitmap__succeeded = (mercury__bitmap__NewLastByteIndex_11 > mercury__bitmap__OldLastByteIndex_10);
#line 466 "bitmap.m"
            if (mercury__bitmap__succeeded)
#line 464 "bitmap.m"
              {
#line 464 "bitmap.m"
                MR_Integer mercury__bitmap__V_25_25 = (mercury__bitmap__OldLastByteIndex_10 + (MR_Integer) 1);

#line 464 "bitmap.m"
                {
#line 464 "bitmap.m"
                  mercury__bitmap__STATE_VARIABLE_BM_24_24 = mercury__bitmap__initialize_bitmap_bytes_4_f_0(mercury__bitmap__STATE_VARIABLE_BM_17_17, mercury__bitmap__V_25_25, mercury__bitmap__NewLastByteIndex_11, mercury__bitmap__InitializerByte_9);
                }
#line 464 "bitmap.m"
              }
#line 466 "bitmap.m"
            else
#line 464 "bitmap.m"
              mercury__bitmap__STATE_VARIABLE_BM_24_24 = mercury__bitmap__STATE_VARIABLE_BM_17_17;
#line 460 "bitmap.m"
          }
#line 469 "bitmap.m"
        else
#line 464 "bitmap.m"
          mercury__bitmap__STATE_VARIABLE_BM_24_24 = mercury__bitmap__STATE_VARIABLE_BM_16_16;
#line 1734 "bitmap.m"
{
#define MR_PROC_LABEL mercury__bitmap__resize_3_f_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr) mercury__bitmap__STATE_VARIABLE_BM_24_24 ;
		{
#line 1734 "bitmap.m"

    NumBits = BM->num_bits;

#line 13022 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__V_62_62  = NumBits;
#line 1734 "bitmap.m"
}
#line 490 "bitmap.m"
        mercury__bitmap__V_61_61 = (mercury__bitmap__V_62_62 - (MR_Integer) 1);
#line 490 "bitmap.m"
        {
#line 490 "bitmap.m"
          return mercury__bitmap__STATE_VARIABLE_BM_13 = mercury__bitmap__set_trailing_bits_in_byte_3_f_0(mercury__bitmap__STATE_VARIABLE_BM_24_24, mercury__bitmap__V_61_61, (MR_Integer) 0);
        }
#line 454 "bitmap.m"
      }
#line 453 "bitmap.m"
    return mercury__bitmap__STATE_VARIABLE_BM_13;
#line 453 "bitmap.m"
  }
#line 96 "bitmap.m"
}

#line 87 "bitmap.m"
MR_Box MR_CALL 
mercury__bitmap__copy_1_f_0(
#line 87 "bitmap.m"
  MR_Box mercury__bitmap__BM0_1)
#line 87 "bitmap.m"
{
#line 1922 "bitmap.m"
  {
#line 1922 "bitmap.m"
    MR_bool mercury__bitmap__succeeded;
#line 1922 "bitmap.m"
    MR_Box mercury__bitmap__BM_2;

#line 1925 "bitmap.m"
{
#define MR_PROC_LABEL mercury__bitmap__copy_1_f_0

	MR_BitmapPtr BM0;
	MR_BitmapPtr BM;

	BM0 = (MR_BitmapPtr) mercury__bitmap__BM0_1 ;
		{
#line 1925 "bitmap.m"

    MR_allocate_bitmap_msg(BM, BM0->num_bits, MR_ALLOC_ID);
    MR_copy_bitmap(BM, BM0);

#line 13073 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__BM_2  = (MR_Box) BM;
#line 1925 "bitmap.m"
}
#line 1922 "bitmap.m"
    return mercury__bitmap__BM_2;
#line 1922 "bitmap.m"
  }
#line 87 "bitmap.m"
}

#line 81 "bitmap.m"
MR_Box MR_CALL 
mercury__bitmap__init_1_f_0(
#line 81 "bitmap.m"
  MR_Integer mercury__bitmap__N_3)
#line 81 "bitmap.m"
{
#line 437 "bitmap.m"
  {
#line 437 "bitmap.m"
    MR_bool mercury__bitmap__succeeded;
#line 437 "bitmap.m"
    MR_Box mercury__bitmap__HeadVar__2_2;

#line 437 "bitmap.m"
    {
#line 437 "bitmap.m"
      return mercury__bitmap__HeadVar__2_2 = mercury__bitmap__init_2_f_0(mercury__bitmap__N_3, (MR_Integer) 0);
    }
#line 437 "bitmap.m"
    return mercury__bitmap__HeadVar__2_2;
#line 437 "bitmap.m"
  }
#line 81 "bitmap.m"
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
#line 442 "bitmap.m"
  {
#line 442 "bitmap.m"
    MR_bool mercury__bitmap__succeeded = (mercury__bitmap__N_4 < (MR_Integer) 0);
#line 442 "bitmap.m"
    MR_Box mercury__bitmap__BM_6;

#line 442 "bitmap.m"
    if (mercury__bitmap__succeeded)
#line 441 "bitmap.m"
      {
#line 441 "bitmap.m"
        MR_Word mercury__bitmap__TypeCtorInfo_4_19 = (MR_Word) &mercury__bitmap__bitmap__type_ctor_info_bitmap_error_0;
#line 441 "bitmap.m"
        MR_Word mercury__bitmap__V_18_18 = (MR_Word) ((MR_Box) ((MR_String) "bitmap.init: negative size"));

#line 2112 "bitmap.m"
        {
#line 2112 "bitmap.m"
          mercury__exception__throw_1_p_0(mercury__bitmap__TypeCtorInfo_4_19, ((MR_Box) (mercury__bitmap__V_18_18)));
        }
#line 441 "bitmap.m"
      }
#line 442 "bitmap.m"
    else
#line 443 "bitmap.m"
      {
#line 443 "bitmap.m"
        MR_Integer mercury__bitmap__X_8;
#line 443 "bitmap.m"
        MR_Box mercury__bitmap__BM0_9;
#line 443 "bitmap.m"
        MR_Box mercury__bitmap__V_13_13;
#line 443 "bitmap.m"
        MR_Integer mercury__bitmap__V_25_25;
#line 443 "bitmap.m"
        MR_Integer mercury__bitmap__V_26_26;
#line 443 "bitmap.m"
        MR_Integer mercury__bitmap__V_32_32;
#line 443 "bitmap.m"
        MR_Integer mercury__bitmap__V_33_33;

#line 512 "bitmap.m"
        if ((mercury__bitmap__B_5 == (MR_Integer) 0))
#line 512 "bitmap.m"
          mercury__bitmap__X_8 = (MR_Integer) 0;
#line 512 "bitmap.m"
        else
#line 513 "bitmap.m"
          mercury__bitmap__X_8 = (MR_Integer) -1;
#line 1888 "bitmap.m"
{
#define MR_PROC_LABEL mercury__bitmap__init_2_f_0

	MR_Integer N;
	MR_BitmapPtr BM;

	N =  mercury__bitmap__N_4 ;
		{
#line 1888 "bitmap.m"

    MR_allocate_bitmap_msg(BM, N, MR_ALLOC_ID);

#line 13185 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__V_13_13  = (MR_Box) BM;
#line 1888 "bitmap.m"
}
#line 519 "bitmap.m"
        mercury__bitmap__V_26_26 = (mercury__bitmap__N_4 - (MR_Integer) 1);
#line 1969 "bitmap.m"
        mercury__bitmap__succeeded = (mercury__bitmap__V_26_26 < (MR_Integer) 0);
#line 1968 "bitmap.m"
        if (mercury__bitmap__succeeded)
#line 1970 "bitmap.m"
          mercury__bitmap__V_25_25 = (MR_Integer) -1;
#line 1968 "bitmap.m"
        else
#line 1972 "bitmap.m"
          {
#line 1972 "bitmap.m"
            mercury__bitmap__V_25_25 = (mercury__bitmap__V_26_26 / (MR_Integer) 8);
#line 1972 "bitmap.m"
          }
#line 519 "bitmap.m"
        {
#line 519 "bitmap.m"
          mercury__bitmap__BM0_9 = mercury__bitmap__initialize_bitmap_bytes_4_f_0(mercury__bitmap__V_13_13, (MR_Integer) 0, mercury__bitmap__V_25_25, mercury__bitmap__X_8);
        }
#line 1734 "bitmap.m"
{
#define MR_PROC_LABEL mercury__bitmap__init_2_f_0

	MR_BitmapPtr BM;
	MR_Integer NumBits;

	BM = (MR_BitmapPtr) mercury__bitmap__BM0_9 ;
		{
#line 1734 "bitmap.m"

    NumBits = BM->num_bits;

#line 13226 "bitmap.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bitmap__V_33_33  = NumBits;
#line 1734 "bitmap.m"
}
#line 490 "bitmap.m"
        mercury__bitmap__V_32_32 = (mercury__bitmap__V_33_33 - (MR_Integer) 1);
#line 490 "bitmap.m"
        {
#line 490 "bitmap.m"
          return mercury__bitmap__BM_6 = mercury__bitmap__set_trailing_bits_in_byte_3_f_0(mercury__bitmap__BM0_9, mercury__bitmap__V_32_32, (MR_Integer) 0);
        }
#line 443 "bitmap.m"
      }
#line 442 "bitmap.m"
    return mercury__bitmap__BM_6;
#line 442 "bitmap.m"
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
