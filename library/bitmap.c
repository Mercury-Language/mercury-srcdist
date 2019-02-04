/*
** Automatically generated from `bitmap.m'
** by the Mercury compiler,
** version rotd-2007-12-21, configured for i686-pc-linux-gnu.
** Do not edit.
**
** The autoconfigured grade settings governing
** the generation of this C file were
**
** TAG_BITS=2
** UNBOXED_FLOAT=no
**
** END_OF_C_GRADE_INFO
*/

/*
INIT mercury__bitmap__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 24 "bitmap.c"
#include "bitmap.mh"

#line 27 "bitmap.c"
#line 136 "io.int2"
#include "io.mh"

#line 31 "bitmap.c"
#line 144 "io.int2"
#include "string.mh"

#line 35 "bitmap.c"
#line 28 "time.int2"
#include "time.mh"

#line 39 "bitmap.c"
#line 21 "stm_builtin.int2"
#include "stm_builtin.mh"

#line 43 "bitmap.c"
#line 31 "array.int2"
#include "array.mh"

#line 47 "bitmap.c"
#line 4 "builtin.opt"
#include "builtin.mh"

#line 51 "bitmap.c"
#line 12 "pretty_printer.opt"
#include "pretty_printer.mh"

#line 55 "bitmap.c"
#line 3 "float.opt"
#include "float.mh"

#line 59 "bitmap.c"
#line 3 "math.opt"
#include "math.mh"

#line 63 "bitmap.c"
#line 150 "io.opt"
#include "dir.mh"

#line 67 "bitmap.c"
#line 160 "io.opt"
#include "table_builtin.mh"

#line 71 "bitmap.c"
#line 3 "construct.opt"
#include "construct.mh"

#line 75 "bitmap.c"
#line 6 "type_desc.opt"
#include "type_desc.mh"

#line 79 "bitmap.c"
#line 109 "rtti_implementation.opt"
#include "rtti_implementation.mh"

#line 83 "bitmap.c"
#line 4 "char.opt"
#include "char.mh"

#line 87 "bitmap.c"
#line 14 "exception.opt"
#include "exception.mh"

#line 91 "bitmap.c"
#line 23 "store.opt"
#include "store.mh"

#line 95 "bitmap.c"
#line 4 "int.opt"
#include "int.mh"

#line 99 "bitmap.c"
#line 3 "list.opt"
#include "list.mh"

#line 103 "bitmap.c"
#line 9 "private_builtin.opt"
#include "private_builtin.mh"

#line 107 "bitmap.c"
#line 108 "bitmap.c"
#ifndef BITMAP_DECL_GUARD
#define BITMAP_DECL_GUARD

#line 112 "bitmap.c"
#line 1522 "bitmap.m"

#include "mercury_types.h"
#include "mercury_bitmap.h"
#include "mercury_type_info.h"

#line 119 "bitmap.c"
#line 120 "bitmap.c"

#endif
#line 123 "bitmap.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

struct mercury_type_0 {
	MR_String f1;
	MR_Word * f2;
};
MR_STATIC_LINKAGE const struct mercury_type_0 mercury_common_0[];

struct mercury_type_1 {
	MR_Integer f1;
	MR_Word * f2;
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_bitmap__type_ctor_info_word_0,
	mercury_data_bitmap__type_ctor_info_slice_0,
	mercury_data_bitmap__type_ctor_info_num_bytes_0,
	mercury_data_bitmap__type_ctor_info_num_bits_0,
	mercury_data_bitmap__type_ctor_info_copy_direction_0,
	mercury_data_bitmap__type_ctor_info_byte_index_0,
	mercury_data_bitmap__type_ctor_info_byte_0,
	mercury_data_bitmap__type_ctor_info_bitmap_error_0,
	mercury_data_bitmap__type_ctor_info_bitmap_0,
	mercury_data_bitmap__type_ctor_info_bit_index_in_byte_0;

extern const MR_TypeCtorInfo_Struct
	mercury_data_bitmap__type_ctor_info_bit_index_0;
MR_decl_label1(bitmap__bitmap_equal_2_0, 1)
MR_decl_label1(bitmap__byte_in_range_2_0, 1)
MR_decl_label2(bitmap__extract_bits_from_bytes_6_0, 2,4)
MR_decl_label3(bitmap__hash_2_5_0, 11,3,2)
MR_decl_label6(bitmap__hex_chars_to_bitmap_6_0, 28,2,14,3,5,7)
MR_decl_label1(bitmap__in_range_2_0, 1)
MR_decl_label2(bitmap__is_clear_2_0, 10,21)
MR_decl_label4(bitmap__is_set_2_0, 6,12,3,1)
MR_decl_label2(bitmap__set_bits_in_bytes_6_0, 2,4)
MR_decl_label5(bitmap__throw_bounds_error_4_0, 3,2,4,5,6)
MR_decl_label5(bitmap__to_string_chars_4_0, 25,2,4,6,3)
MR_decl_label2(bitmap__unsafe_is_set_2_0, 4,1)
MR_decl_label3(bitmap__list__foldl2__ho2_6_0, 10,3,4)
MR_decl_label1(bitmap__list__foldl__ho12_4_0, 3)
MR_decl_label3(fn__bitmap__append_list_1_0, 2,3,4)
MR_decl_label3(fn__bitmap__bit_2_0, 7,4,3)
MR_decl_label2(fn__f_98_105_116_109_97_112_95_95_98_105_116_32_58_61_3_0, 5,3)
MR_decl_label5(fn__bitmap__bitmap_to_byte_strings_3_0, 17,2,3,6,7)
MR_decl_label4(fn__bitmap__bits_3_0, 3,8,7,6)
MR_decl_label5(fn__f_98_105_116_109_97_112_95_95_98_105_116_115_32_58_61_4_0, 6,3,12,11,10)
MR_decl_label1(fn__bitmap__byte_2_0, 3)
MR_decl_label1(fn__f_98_105_116_109_97_112_95_95_98_121_116_101_32_58_61_3_0, 3)
MR_decl_label1(fn__bitmap__clear_2_0, 3)
MR_decl_label1(fn__bitmap__complement_1_0, 2)
MR_decl_label1(fn__bitmap__complement_2_2_0, 2)
MR_decl_label8(fn__bitmap__copy_bits_6_0, 6,4,10,3,16,108,17,15)
MR_decl_label5(fn__bitmap__copy_bits_6_0, 14,47,23,22,21)
MR_decl_label3(fn__bitmap__copy_bytes_6_0, 3,5,2)
MR_decl_label1(fn__bitmap__det_num_bytes_1_0, 2)
MR_decl_label2(fn__bitmap__difference_2_0, 4,2)
MR_decl_label1(fn__bitmap__flip_2_0, 3)
MR_decl_label3(fn__bitmap__from_string_1_0, 3,8,1)
MR_decl_label2(fn__bitmap__hash_1_0, 2,5)
MR_decl_label1(fn__bitmap__initialize_bitmap_bytes_4_0, 12)
MR_decl_label2(fn__bitmap__intersect_2_0, 4,2)
MR_decl_label4(fn__bitmap__new_2_0, 21,5,4,6)
MR_decl_label1(fn__bitmap__num_bytes_1_0, 1)
MR_decl_label2(fn__bitmap__quotient_bits_per_byte_with_rem_zero_2_0, 14,4)
MR_decl_label7(fn__bitmap__resize_3_0, 41,5,4,6,8,10,14)
MR_decl_label1(fn__bitmap__set_2_0, 3)
MR_decl_label1(fn__bitmap__set_trailing_bits_in_byte_3_0, 5)
MR_decl_label1(fn__bitmap__shrink_without_copying_2_0, 3)
MR_decl_label3(fn__bitmap__slice_3_0, 6,4,3)
MR_decl_label2(fn__bitmap__throw_bounds_error_3_0, 2,3)
MR_decl_label1(fn__bitmap__to_byte_string_1_0, 2)
MR_decl_label4(fn__bitmap__to_string_1_0, 2,3,4,5)
MR_decl_label2(fn__bitmap__union_2_0, 4,2)
MR_decl_label2(fn__bitmap__unsafe_bit_2_0, 5,2)
MR_decl_label1(fn__f_98_105_116_109_97_112_95_95_117_110_115_97_102_101_95_98_105_116_32_58_61_3_0, 3)
MR_decl_label8(fn__bitmap__unsafe_copy_bits_6_0, 3,2,6,10,12,13,14,15)
MR_decl_label8(fn__bitmap__unsafe_copy_bits_6_0, 17,18,19,20,24,25,21,31)
MR_decl_label3(fn__bitmap__unsafe_copy_bits_6_0, 32,28,5)
MR_decl_label8(fn__bitmap__unsafe_copy_unaligned_bits_6_0, 2,4,5,6,8,9,10,12)
MR_decl_label8(fn__bitmap__unsafe_copy_unaligned_bits_6_0, 15,14,17,18,19,23,24,25)
MR_decl_label7(fn__bitmap__unsafe_copy_unaligned_bits_6_0, 26,20,27,31,32,33,28)
MR_decl_label1(fn__bitmap__unsafe_copy_unaligned_bytes_ltor_7_0, 2)
MR_decl_label1(fn__bitmap__unsafe_copy_unaligned_bytes_rtol_7_0, 2)
MR_decl_label2(fn__bitmap__unsafe_get_2_0, 5,2)
MR_decl_label2(fn__bitmap__xor_2_0, 4,2)
MR_decl_label1(fn__bitmap__zip_3_0, 3)
MR_decl_label3(fn__bitmap__zip2_4_0, 11,3,2)
MR_decl_label1(fn__bitmap__zip2__ho10_4_0, 2)
MR_decl_label1(fn__bitmap__zip2__ho11_4_0, 2)
MR_decl_label1(fn__bitmap__zip2__ho8_4_0, 2)
MR_decl_label1(fn__bitmap__zip2__ho9_4_0, 2)
MR_decl_label2(__Unify___bitmap__bitmap_0_0, 8,1)
MR_decl_label1(__Unify___bitmap__bitmap_error_0_0, 4)
MR_decl_label3(__Unify___bitmap__slice_0_0, 8,9,1)
MR_decl_label2(__Compare___bitmap__bit_index_0_0, 2,3)
MR_decl_label2(__Compare___bitmap__bit_index_in_byte_0_0, 2,3)
MR_decl_label2(__Compare___bitmap__bitmap_0_0, 3,2)
MR_decl_label3(__Compare___bitmap__bitmap_error_0_0, 4,12,5)
MR_decl_label2(__Compare___bitmap__byte_0_0, 2,3)
MR_decl_label2(__Compare___bitmap__byte_index_0_0, 2,3)
MR_decl_label2(__Compare___bitmap__copy_direction_0_0, 2,3)
MR_decl_label2(__Compare___bitmap__num_bits_0_0, 2,3)
MR_decl_label2(__Compare___bitmap__num_bytes_0_0, 2,3)
MR_decl_label8(__Compare___bitmap__slice_0_0, 7,6,8,13,14,16,19,33)
MR_decl_label2(__Compare___bitmap__slice_0_0, 20,25)
MR_decl_label2(__Compare___bitmap__word_0_0, 2,3)
MR_def_extern_entry(fn__bitmap__num_bits_1_0)
MR_def_extern_entry(fn__bitmap__bits_per_byte_0_0)
MR_def_extern_entry(fn__bitmap__unsafe_byte_2_0)
MR_def_extern_entry(fn__f_98_105_116_109_97_112_95_95_117_110_115_97_102_101_95_98_121_116_101_32_58_61_3_0)
MR_def_extern_entry(fn__bitmap__byte_index_for_bit_1_0)
MR_def_extern_entry(fn__bitmap__bit_index_in_byte_1_0)
MR_decl_static(fn__bitmap__set_bits_in_byte_4_0)
MR_def_extern_entry(fn__bitmap__set_trailing_bits_in_byte_3_0)
MR_def_extern_entry(fn__bitmap__clear_filler_bits_1_0)
MR_decl_static(fn__bitmap__initialize_bitmap_bytes_4_0)
MR_decl_static(fn__bitmap__allocate_bitmap_1_0)
MR_def_extern_entry(bitmap__throw_bitmap_error_1_0)
MR_def_extern_entry(fn__bitmap__throw_bitmap_error_1_0)
MR_def_extern_entry(fn__bitmap__new_2_0)
MR_def_extern_entry(fn__bitmap__new_1_0)
MR_def_extern_entry(fn__bitmap__copy_1_0)
MR_def_extern_entry(bitmap__in_range_2_0)
MR_decl_static(fn__bitmap__extract_bits_from_byte_3_0)
MR_decl_static(bitmap__extract_bits_from_byte_index_6_0)
MR_def_extern_entry(bitmap__extract_bits_from_bytes_6_0)
MR_def_extern_entry(fn__bitmap__unsafe_bits_3_0)
MR_decl_static(bitmap__set_bits_in_byte_index_6_0)
MR_def_extern_entry(bitmap__set_bits_in_bytes_6_0)
MR_def_extern_entry(fn__f_98_105_116_109_97_112_95_95_117_110_115_97_102_101_95_98_105_116_115_32_58_61_4_0)
MR_decl_static(fn__bitmap__unsafe_copy_bytes_6_0)
MR_decl_static(fn__bitmap__unsafe_copy_unaligned_bytes_ltor_7_0)
MR_decl_static(fn__bitmap__unsafe_copy_unaligned_bytes_rtol_7_0)
MR_decl_static(fn__bitmap__unsafe_copy_unaligned_bits_6_0)
MR_decl_static(fn__bitmap__unsafe_copy_bits_6_0)
MR_def_extern_entry(bitmap__throw_bounds_error_4_0)
MR_def_extern_entry(fn__bitmap__copy_bits_6_0)
MR_def_extern_entry(fn__bitmap__copy_bits_5_0)
MR_def_extern_entry(fn__bitmap__resize_3_0)
MR_decl_static(fn__f_98_105_116_109_97_112_95_95_110_117_109_95_98_105_116_115_32_58_61_2_0)
MR_def_extern_entry(fn__bitmap__throw_bounds_error_3_0)
MR_def_extern_entry(fn__bitmap__shrink_without_copying_2_0)
MR_def_extern_entry(bitmap__byte_in_range_2_0)
MR_def_extern_entry(fn__bitmap__num_bytes_1_0)
MR_def_extern_entry(fn__bitmap__det_num_bytes_1_0)
MR_def_extern_entry(fn__bitmap__bitmask_1_0)
MR_def_extern_entry(bitmap__unsafe_is_clear_2_0)
MR_def_extern_entry(bitmap__unsafe_is_set_2_0)
MR_def_extern_entry(fn__bitmap__unsafe_bit_2_0)
MR_def_extern_entry(fn__bitmap__bit_2_0)
MR_def_extern_entry(fn__bitmap__unsafe_set_2_0)
MR_def_extern_entry(fn__bitmap__unsafe_clear_2_0)
MR_def_extern_entry(fn__f_98_105_116_109_97_112_95_95_117_110_115_97_102_101_95_98_105_116_32_58_61_3_0)
MR_def_extern_entry(fn__f_98_105_116_109_97_112_95_95_98_105_116_32_58_61_3_0)
MR_def_extern_entry(fn__bitmap__bits_3_0)
MR_def_extern_entry(fn__f_98_105_116_109_97_112_95_95_98_105_116_115_32_58_61_4_0)
MR_def_extern_entry(fn__bitmap__byte_2_0)
MR_def_extern_entry(fn__f_98_105_116_109_97_112_95_95_98_121_116_101_32_58_61_3_0)
MR_def_extern_entry(fn__bitmap__slice_3_0)
MR_def_extern_entry(fn__bitmap__byte_slice_3_0)
MR_def_extern_entry(fn__bitmap__slice_bitmap_1_0)
MR_def_extern_entry(fn__bitmap__slice_start_bit_index_1_0)
MR_def_extern_entry(fn__bitmap__slice_num_bits_1_0)
MR_def_extern_entry(fn__bitmap__quotient_bits_per_byte_with_rem_zero_2_0)
MR_def_extern_entry(fn__bitmap__slice_start_byte_index_1_0)
MR_def_extern_entry(fn__bitmap__slice_num_bytes_1_0)
MR_def_extern_entry(fn__bitmap__unsafe_flip_2_0)
MR_def_extern_entry(fn__bitmap__flip_2_0)
MR_def_extern_entry(fn__bitmap__complement_2_2_0)
MR_def_extern_entry(fn__bitmap__complement_1_0)
MR_def_extern_entry(fn__bitmap__zip2_4_0)
MR_def_extern_entry(fn__bitmap__zip_3_0)
MR_def_extern_entry(fn__bitmap__union_2_0)
MR_def_extern_entry(fn__bitmap__intersect_2_0)
MR_def_extern_entry(fn__bitmap__difference_2_0)
MR_def_extern_entry(fn__bitmap__xor_2_0)
MR_def_extern_entry(fn__bitmap__append_list_1_0)
MR_def_extern_entry(fn__bitmap__copy_bits_in_bitmap_4_0)
MR_def_extern_entry(fn__bitmap__copy_bytes_6_0)
MR_def_extern_entry(fn__bitmap__copy_bytes_5_0)
MR_def_extern_entry(fn__bitmap__copy_bytes_in_bitmap_4_0)
MR_decl_static(bitmap__to_string_chars_4_0)
MR_def_extern_entry(fn__bitmap__to_string_1_0)
MR_decl_static(bitmap__hex_chars_to_bitmap_6_0)
MR_def_extern_entry(fn__bitmap__from_string_1_0)
MR_def_extern_entry(fn__bitmap__bitmap_to_byte_strings_3_0)
MR_def_extern_entry(fn__bitmap__bitmap_to_byte_strings_1_0)
MR_def_extern_entry(fn__bitmap__to_byte_string_1_0)
MR_decl_static(bitmap__hash_2_5_0)
MR_def_extern_entry(fn__bitmap__hash_1_0)
MR_def_extern_entry(fn__bitmap__set_2_0)
MR_def_extern_entry(fn__bitmap__clear_2_0)
MR_def_extern_entry(bitmap__is_set_2_0)
MR_def_extern_entry(bitmap__is_clear_2_0)
MR_def_extern_entry(bitmap__unsafe_set_3_0)
MR_def_extern_entry(bitmap__unsafe_clear_3_0)
MR_def_extern_entry(bitmap__unsafe_flip_3_0)
MR_def_extern_entry(bitmap__set_3_0)
MR_def_extern_entry(bitmap__clear_3_0)
MR_def_extern_entry(bitmap__flip_3_0)
MR_def_extern_entry(fn__bitmap__get_2_0)
MR_def_extern_entry(fn__bitmap__unsafe_get_2_0)
MR_def_extern_entry(bitmap__bitmap_equal_2_0)
MR_def_extern_entry(bitmap__bitmap_compare_3_0)
MR_def_extern_entry(__Unify___bitmap__bit_index_0_0)
MR_def_extern_entry(__Compare___bitmap__bit_index_0_0)
MR_def_extern_entry(__Unify___bitmap__bit_index_in_byte_0_0)
MR_def_extern_entry(__Compare___bitmap__bit_index_in_byte_0_0)
MR_def_extern_entry(__Unify___bitmap__bitmap_0_0)
MR_def_extern_entry(__Compare___bitmap__bitmap_0_0)
MR_def_extern_entry(__Unify___bitmap__bitmap_error_0_0)
MR_def_extern_entry(__Compare___bitmap__bitmap_error_0_0)
MR_def_extern_entry(__Unify___bitmap__byte_0_0)
MR_def_extern_entry(__Compare___bitmap__byte_0_0)
MR_def_extern_entry(__Unify___bitmap__byte_index_0_0)
MR_def_extern_entry(__Compare___bitmap__byte_index_0_0)
MR_def_extern_entry(__Unify___bitmap__copy_direction_0_0)
MR_def_extern_entry(__Compare___bitmap__copy_direction_0_0)
MR_def_extern_entry(__Unify___bitmap__num_bits_0_0)
MR_def_extern_entry(__Compare___bitmap__num_bits_0_0)
MR_def_extern_entry(__Unify___bitmap__num_bytes_0_0)
MR_def_extern_entry(__Compare___bitmap__num_bytes_0_0)
MR_def_extern_entry(__Unify___bitmap__slice_0_0)
MR_def_extern_entry(__Compare___bitmap__slice_0_0)
MR_def_extern_entry(__Unify___bitmap__word_0_0)
MR_def_extern_entry(__Compare___bitmap__word_0_0)
MR_decl_static(bitmap__list__foldl2__ho2_6_0)
MR_decl_static(fn__bitmap__zip2__ho8_4_0)
MR_decl_static(fn__bitmap__zip2__ho9_4_0)
MR_decl_static(fn__bitmap__zip2__ho10_4_0)
MR_decl_static(fn__bitmap__zip2__ho11_4_0)
MR_decl_static(bitmap__list__foldl__ho12_4_0)
MR_decl_static(fn__f_98_105_116_109_97_112_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0)

static const struct mercury_type_0 mercury_common_0[2] =
{
{
MR_string_const(".", 1),
MR_tbmkword(0, 0)
},
{
MR_string_const(").", 2),
MR_tbmkword(0, 0)
},
};

static const struct mercury_type_1 mercury_common_1[1] =
{
{
62,
MR_tbmkword(0, 0)
},
};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;

const MR_TypeCtorInfo_Struct mercury_data_bitmap__type_ctor_info_word_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___bitmap__word_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___bitmap__word_0_0)),
	"bitmap",
	"word",
	{ 0 },
	{ (void *)&mercury_data_builtin__type_ctor_info_int_0 },
	-1,
	0,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_bitmap__type_ctor_info_bitmap_0;

const MR_PseudoTypeInfo mercury_data_bitmap__field_types_slice_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_bitmap__type_ctor_info_bitmap_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

const MR_ConstString mercury_data_bitmap__field_names_slice_0_0[] = {
	"slice_bitmap_field",
	"slice_start_bit_index_field",
	"slice_num_bits_field"
};

static const MR_DuFunctorDesc mercury_data_bitmap__du_functor_desc_slice_0_0 = {
	"slice_ctor",
	3,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_bitmap__field_types_slice_0_0,
	mercury_data_bitmap__field_names_slice_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_bitmap__du_stag_ordered_slice_0_0[] = {
	&mercury_data_bitmap__du_functor_desc_slice_0_0

};

const MR_DuPtagLayout mercury_data_bitmap__du_ptag_ordered_slice_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_bitmap__du_stag_ordered_slice_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_bitmap__du_name_ordered_slice_0[] = {
	&mercury_data_bitmap__du_functor_desc_slice_0_0
};

const MR_Integer mercury_data_bitmap__functor_number_map_slice_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_bitmap__type_ctor_info_slice_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___bitmap__slice_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___bitmap__slice_0_0)),
	"bitmap",
	"slice",
	{ (void *)mercury_data_bitmap__du_name_ordered_slice_0 },
	{ (void *)mercury_data_bitmap__du_ptag_ordered_slice_0 },
	1,
	4,
	mercury_data_bitmap__functor_number_map_slice_0
};

const MR_TypeCtorInfo_Struct mercury_data_bitmap__type_ctor_info_num_bytes_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___bitmap__num_bytes_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___bitmap__num_bytes_0_0)),
	"bitmap",
	"num_bytes",
	{ 0 },
	{ (void *)&mercury_data_builtin__type_ctor_info_int_0 },
	-1,
	0,
	NULL
};

const MR_TypeCtorInfo_Struct mercury_data_bitmap__type_ctor_info_num_bits_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___bitmap__num_bits_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___bitmap__num_bits_0_0)),
	"bitmap",
	"num_bits",
	{ 0 },
	{ (void *)&mercury_data_builtin__type_ctor_info_int_0 },
	-1,
	0,
	NULL
};

static const MR_EnumFunctorDesc mercury_data_bitmap__enum_functor_desc_copy_direction_0_0 = {
	"left_to_right",
	0
};

static const MR_EnumFunctorDesc mercury_data_bitmap__enum_functor_desc_copy_direction_0_1 = {
	"right_to_left",
	1
};

const MR_EnumFunctorDescPtr mercury_data_bitmap__enum_value_ordered_copy_direction_0[] = {
	&mercury_data_bitmap__enum_functor_desc_copy_direction_0_0,
	&mercury_data_bitmap__enum_functor_desc_copy_direction_0_1
};

const MR_EnumFunctorDescPtr mercury_data_bitmap__enum_name_ordered_copy_direction_0[] = {
	&mercury_data_bitmap__enum_functor_desc_copy_direction_0_0,
	&mercury_data_bitmap__enum_functor_desc_copy_direction_0_1
};

const MR_Integer mercury_data_bitmap__functor_number_map_copy_direction_0[] = {
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_bitmap__type_ctor_info_copy_direction_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___bitmap__copy_direction_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___bitmap__copy_direction_0_0)),
	"bitmap",
	"copy_direction",
	{ (void *)mercury_data_bitmap__enum_name_ordered_copy_direction_0 },
	{ (void *)mercury_data_bitmap__enum_value_ordered_copy_direction_0 },
	2,
	4,
	mercury_data_bitmap__functor_number_map_copy_direction_0
};

const MR_TypeCtorInfo_Struct mercury_data_bitmap__type_ctor_info_byte_index_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___bitmap__byte_index_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___bitmap__byte_index_0_0)),
	"bitmap",
	"byte_index",
	{ 0 },
	{ (void *)&mercury_data_builtin__type_ctor_info_int_0 },
	-1,
	0,
	NULL
};

const MR_TypeCtorInfo_Struct mercury_data_bitmap__type_ctor_info_byte_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___bitmap__byte_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___bitmap__byte_0_0)),
	"bitmap",
	"byte",
	{ 0 },
	{ (void *)&mercury_data_builtin__type_ctor_info_int_0 },
	-1,
	0,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;

static const MR_NotagFunctorDesc mercury_data_bitmap__notag_functor_desc_bitmap_error_0 = {
	"bitmap_error",
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	NULL
};

const MR_Integer mercury_data_bitmap__functor_number_map_bitmap_error_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_bitmap__type_ctor_info_bitmap_error_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_NOTAG_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___bitmap__bitmap_error_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___bitmap__bitmap_error_0_0)),
	"bitmap",
	"bitmap_error",
	{ (void *)&mercury_data_bitmap__notag_functor_desc_bitmap_error_0 },
	{ (void *)&mercury_data_bitmap__notag_functor_desc_bitmap_error_0 },
	1,
	4,
	mercury_data_bitmap__functor_number_map_bitmap_error_0
};

const MR_TypeCtorInfo_Struct mercury_data_bitmap__type_ctor_info_bitmap_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_BITMAP,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___bitmap__bitmap_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___bitmap__bitmap_0_0)),
	"bitmap",
	"bitmap",
	{ 0 },
	{ 0 },
	-1,
	0,
	NULL
};

const MR_TypeCtorInfo_Struct mercury_data_bitmap__type_ctor_info_bit_index_in_byte_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___bitmap__bit_index_in_byte_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___bitmap__bit_index_in_byte_0_0)),
	"bitmap",
	"bit_index_in_byte",
	{ 0 },
	{ (void *)&mercury_data_builtin__type_ctor_info_int_0 },
	-1,
	0,
	NULL
};

const MR_TypeCtorInfo_Struct mercury_data_bitmap__type_ctor_info_bit_index_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___bitmap__bit_index_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___bitmap__bit_index_0_0)),
	"bitmap",
	"bit_index",
	{ 0 },
	{ (void *)&mercury_data_builtin__type_ctor_info_int_0 },
	-1,
	0,
	NULL
};


MR_BEGIN_MODULE(bitmap_module0)
	MR_init_entry1(fn__bitmap__num_bits_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__bitmap__num_bits_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_BitmapPtr	BM;
	MR_Integer	NumBits;
#define	MR_PROC_LABEL	mercury__fn__bitmap__num_bits_1_0
	BM = (MR_BitmapPtr) MR_r1;
{
#line 1674 "bitmap.m"

    NumBits = BM->num_bits;
;}
#line 663 "bitmap.c"
	MR_r1 = NumBits;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bitmap_module1)
	MR_init_entry1(fn__bitmap__bits_per_byte_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__bitmap__bits_per_byte_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 8;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bitmap_module2)
	MR_init_entry1(fn__bitmap__unsafe_byte_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__bitmap__unsafe_byte_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Integer	N;
	MR_BitmapPtr	BM;
	MR_Integer	Byte;
#define	MR_PROC_LABEL	mercury__fn__bitmap__unsafe_byte_2_0
	N = MR_r1;
	BM = (MR_BitmapPtr) MR_r2;
{
#line 1747 "bitmap.m"

    Byte = (MR_Integer) BM->elements[N];
;}
#line 716 "bitmap.c"
	MR_r1 = Byte;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bitmap_module3)
	MR_init_entry1(fn__f_98_105_116_109_97_112_95_95_117_110_115_97_102_101_95_98_121_116_101_32_58_61_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__f_98_105_116_109_97_112_95_95_117_110_115_97_102_101_95_98_121_116_101_32_58_61_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Integer	N;
	MR_BitmapPtr	BM0;
	MR_Integer	Byte;
	MR_BitmapPtr	BM;
#define	MR_PROC_LABEL	mercury__fn__f_98_105_116_109_97_112_95_95_117_110_115_97_102_101_95_98_121_116_101_32_58_61_3_0
	N = MR_r1;
	BM0 = (MR_BitmapPtr) MR_r2;
	Byte = MR_r3;
{
#line 1788 "bitmap.m"

    BM = BM0;
    BM->elements[N] = (MR_uint_least8_t) Byte;
;}
#line 753 "bitmap.c"
	MR_r1 = (MR_Word) BM;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bitmap_module4)
	MR_init_entry1(fn__bitmap__byte_index_for_bit_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__bitmap__byte_index_for_bit_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_r1 / (MR_Integer) 8);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bitmap_module5)
	MR_init_entry1(fn__bitmap__bit_index_in_byte_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__bitmap__bit_index_in_byte_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_r1 % (MR_Integer) 8);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bitmap_module6)
	MR_init_entry1(fn__bitmap__set_bits_in_byte_4_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__bitmap__set_bits_in_byte_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r3;
	MR_tempr1 = ((MR_Integer) 1 << ((MR_Integer) MR_tempr3 - (MR_Integer) 1));
	MR_tempr2 = ((MR_Integer) MR_tempr1 | ((MR_Integer) MR_tempr1 - (MR_Integer) 1));
	MR_tempr1 = ((MR_Integer) 7 - (((MR_Integer) MR_r2 + (MR_Integer) MR_tempr3) - (MR_Integer) 1));
	MR_r1 = (((MR_Integer) MR_r1 & ~(((MR_Integer) MR_tempr2 << (MR_Integer) MR_tempr1))) | (((MR_Integer) MR_tempr2 & (MR_Integer) MR_r4) << (MR_Integer) MR_tempr1));
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bitmap_module7)
	MR_init_entry1(fn__bitmap__set_trailing_bits_in_byte_3_0);
	MR_init_label1(fn__bitmap__set_trailing_bits_in_byte_3_0,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__bitmap__set_trailing_bits_in_byte_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_r2;
	MR_r4 = (((MR_Integer) MR_tempr5 + (MR_Integer) 1) % (MR_Integer) 8);
	MR_r5 = ((MR_Integer) MR_tempr5 + (MR_Integer) 1);
	if (MR_INT_EQ(MR_r4,0)) {
		MR_GOTO_LAB(fn__bitmap__set_trailing_bits_in_byte_3_0_i5);
	}
	MR_r2 = ((MR_Integer) MR_r5 / (MR_Integer) 8);
	{
	MR_Integer	N;
	MR_BitmapPtr	BM;
	MR_Integer	Byte;
#define	MR_PROC_LABEL	mercury__fn__bitmap__set_trailing_bits_in_byte_3_0
	N = MR_r2;
	BM = (MR_BitmapPtr) MR_r1;
{
#line 1747 "bitmap.m"

    Byte = (MR_Integer) BM->elements[N];
;}
#line 861 "bitmap.c"
	MR_r5 = Byte;
#undef	MR_PROC_LABEL
	}
	MR_tempr6 = MR_r4;
	MR_tempr1 = ((MR_Integer) 8 - (MR_Integer) MR_tempr6);
	MR_r7 = MR_tempr1;
	MR_tempr2 = ((MR_Integer) 1 << ((MR_Integer) MR_tempr1 - (MR_Integer) 1));
	MR_r8 = MR_tempr2;
	MR_tempr3 = ((MR_Integer) MR_tempr2 | ((MR_Integer) MR_tempr2 - (MR_Integer) 1));
	MR_r9 = MR_tempr3;
	MR_tempr4 = ((MR_Integer) 7 - (((MR_Integer) MR_tempr6 + (MR_Integer) MR_tempr1) - (MR_Integer) 1));
	MR_r8 = MR_tempr4;
	MR_r6 = (((MR_Integer) MR_r5 & ~(((MR_Integer) MR_tempr3 << (MR_Integer) MR_tempr4))) | (((MR_Integer) MR_tempr3 & (MR_Integer) MR_r3) << (MR_Integer) MR_tempr4));
	{
	MR_Integer	N;
	MR_BitmapPtr	BM0;
	MR_Integer	Byte;
	MR_BitmapPtr	BM;
#define	MR_PROC_LABEL	mercury__fn__bitmap__set_trailing_bits_in_byte_3_0
	N = MR_r2;
	BM0 = (MR_BitmapPtr) MR_r1;
	Byte = MR_r6;
{
#line 1788 "bitmap.m"

    BM = BM0;
    BM->elements[N] = (MR_uint_least8_t) Byte;
;}
#line 890 "bitmap.c"
	MR_r1 = (MR_Word) BM;
#undef	MR_PROC_LABEL
	}
	}
MR_def_label(fn__bitmap__set_trailing_bits_in_byte_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bitmap_module8)
	MR_init_entry1(fn__bitmap__clear_filler_bits_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__bitmap__clear_filler_bits_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	{
	MR_BitmapPtr	BM;
	MR_Integer	NumBits;
#define	MR_PROC_LABEL	mercury__fn__bitmap__clear_filler_bits_1_0
	BM = (MR_BitmapPtr) MR_r1;
{
#line 1674 "bitmap.m"

    NumBits = BM->num_bits;
;}
#line 927 "bitmap.c"
	MR_tempr1 = NumBits;
#undef	MR_PROC_LABEL
	}
	MR_r2 = ((MR_Integer) MR_tempr1 - (MR_Integer) 1);
	MR_r3 = (MR_Integer) 0;
	MR_np_tailcall_ent(fn__bitmap__set_trailing_bits_in_byte_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bitmap_module9)
	MR_init_entry1(fn__bitmap__initialize_bitmap_bytes_4_0);
	MR_init_label1(fn__bitmap__initialize_bitmap_bytes_4_0,12)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__bitmap__initialize_bitmap_bytes_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r2 > (MR_Integer) MR_r3)) {
		MR_GOTO_LAB(fn__bitmap__initialize_bitmap_bytes_4_0_i12);
	}
	{
	MR_Integer	N;
	MR_BitmapPtr	BM0;
	MR_Integer	Byte;
	MR_BitmapPtr	BM;
#define	MR_PROC_LABEL	mercury__fn__bitmap__initialize_bitmap_bytes_4_0
	N = MR_r2;
	BM0 = (MR_BitmapPtr) MR_r1;
	Byte = MR_r4;
{
#line 1788 "bitmap.m"

    BM = BM0;
    BM->elements[N] = (MR_uint_least8_t) Byte;
;}
#line 971 "bitmap.c"
	MR_r1 = (MR_Word) BM;
#undef	MR_PROC_LABEL
	}
	MR_r2 = ((MR_Integer) MR_r2 + (MR_Integer) 1);
	MR_np_localtailcall(fn__bitmap__initialize_bitmap_bytes_4_0);
MR_def_label(fn__bitmap__initialize_bitmap_bytes_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bitmap_module10)
	MR_init_entry1(fn__bitmap__allocate_bitmap_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__bitmap__allocate_bitmap_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Integer	N;
	MR_BitmapPtr	BM;
#define	MR_PROC_LABEL	mercury__fn__bitmap__allocate_bitmap_1_0
	N = MR_r1;
{
#line 1827 "bitmap.m"

    MR_allocate_bitmap_msg(BM, N, MR_PROC_LABEL);
;}
#line 1007 "bitmap.c"
	MR_r1 = (MR_Word) BM;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(exception__throw_1_0);

MR_BEGIN_MODULE(bitmap_module11)
	MR_init_entry1(bitmap__throw_bitmap_error_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__bitmap__throw_bitmap_error_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(bitmap, bitmap_error);
	MR_np_tailcall_ent(exception__throw_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bitmap_module12)
	MR_init_entry1(fn__bitmap__throw_bitmap_error_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__bitmap__throw_bitmap_error_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(bitmap, bitmap_error);
	MR_np_tailcall_ent(exception__throw_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bitmap_module13)
	MR_init_entry1(fn__bitmap__new_2_0);
	MR_init_label4(fn__bitmap__new_2_0,21,5,4,6)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__bitmap__new_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_GE(MR_r1,0)) {
		MR_GOTO_LAB(fn__bitmap__new_2_0_i21);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(bitmap, bitmap_error);
	MR_r2 = (MR_Word) MR_string_const("bitmap.new: negative size", 25);
	MR_np_tailcall_ent(exception__throw_1_0);
MR_def_label(fn__bitmap__new_2_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(fn__bitmap__new_2_0_i5);
	}
	MR_r4 = (MR_Integer) 0;
	MR_GOTO_LAB(fn__bitmap__new_2_0_i4);
MR_def_label(fn__bitmap__new_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = (MR_Integer) -1;
MR_def_label(fn__bitmap__new_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_Integer	N;
	MR_BitmapPtr	BM;
#define	MR_PROC_LABEL	mercury__fn__bitmap__new_2_0
	N = MR_r1;
{
#line 1827 "bitmap.m"

    MR_allocate_bitmap_msg(BM, N, MR_PROC_LABEL);
;}
#line 1102 "bitmap.c"
	MR_tempr1 = (MR_Word) BM;
#undef	MR_PROC_LABEL
	}
	MR_tempr2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 0;
	MR_r3 = (((MR_Integer) MR_tempr2 - (MR_Integer) 1) / (MR_Integer) 8);
	}
	MR_np_call_localret_ent(fn__bitmap__initialize_bitmap_bytes_4_0,
		fn__bitmap__new_2_0_i6);
MR_def_label(fn__bitmap__new_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	{
	MR_BitmapPtr	BM;
	MR_Integer	NumBits;
#define	MR_PROC_LABEL	mercury__fn__bitmap__new_2_0
	BM = (MR_BitmapPtr) MR_r1;
{
#line 1674 "bitmap.m"

    NumBits = BM->num_bits;
;}
#line 1127 "bitmap.c"
	MR_tempr1 = NumBits;
#undef	MR_PROC_LABEL
	}
	MR_r2 = ((MR_Integer) MR_tempr1 - (MR_Integer) 1);
	MR_r3 = (MR_Integer) 0;
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(fn__bitmap__set_trailing_bits_in_byte_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bitmap_module14)
	MR_init_entry1(fn__bitmap__new_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__bitmap__new_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 0;
	MR_np_tailcall_ent(fn__bitmap__new_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bitmap_module15)
	MR_init_entry1(fn__bitmap__copy_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__bitmap__copy_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_BitmapPtr	BM0;
	MR_BitmapPtr	BM;
#define	MR_PROC_LABEL	mercury__fn__bitmap__copy_1_0
	BM0 = (MR_BitmapPtr) MR_r1;
{
#line 1865 "bitmap.m"

    MR_allocate_bitmap_msg(BM, BM0->num_bits, MR_PROC_LABEL);
    MR_copy_bitmap(BM, BM0);
;}
#line 1184 "bitmap.c"
	MR_r1 = (MR_Word) BM;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bitmap_module16)
	MR_init_entry1(bitmap__in_range_2_0);
	MR_init_label1(bitmap__in_range_2_0,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__bitmap__in_range_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 0 > (MR_Integer) MR_r2)) {
		MR_GOTO_LAB(bitmap__in_range_2_0_i1);
	}
	{
	MR_BitmapPtr	BM;
	MR_Integer	NumBits;
#define	MR_PROC_LABEL	mercury__bitmap__in_range_2_0
	BM = (MR_BitmapPtr) MR_r1;
{
#line 1674 "bitmap.m"

    NumBits = BM->num_bits;
;}
#line 1220 "bitmap.c"
	MR_r1 = NumBits;
#undef	MR_PROC_LABEL
	}
	MR_r1 = ((MR_Integer) MR_r2 < (MR_Integer) MR_r1);
	MR_proceed();
MR_def_label(bitmap__in_range_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bitmap_module17)
	MR_init_entry1(fn__bitmap__extract_bits_from_byte_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__bitmap__extract_bits_from_byte_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_tempr1 = ((MR_Integer) 1 << ((MR_Integer) MR_tempr2 - (MR_Integer) 1));
	MR_r1 = (((MR_Integer) MR_r1 >> ((MR_Integer) 7 - (((MR_Integer) MR_r2 + (MR_Integer) MR_tempr2) - (MR_Integer) 1))) & ((MR_Integer) MR_tempr1 | ((MR_Integer) MR_tempr1 - (MR_Integer) 1)));
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bitmap_module18)
	MR_init_entry1(bitmap__extract_bits_from_byte_index_6_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(bitmap__extract_bits_from_byte_index_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	{
	MR_Integer	N;
	MR_BitmapPtr	BM;
	MR_Integer	Byte;
#define	MR_PROC_LABEL	mercury__bitmap__extract_bits_from_byte_index_6_0
	N = MR_r1;
	BM = (MR_BitmapPtr) MR_r4;
{
#line 1747 "bitmap.m"

    Byte = (MR_Integer) BM->elements[N];
;}
#line 1285 "bitmap.c"
	MR_tempr1 = Byte;
#undef	MR_PROC_LABEL
	}
	MR_tempr3 = MR_r3;
	MR_tempr2 = ((MR_Integer) 1 << ((MR_Integer) MR_tempr3 - (MR_Integer) 1));
	MR_r1 = (((MR_Integer) MR_r5 << (MR_Integer) MR_tempr3) | (((MR_Integer) MR_tempr1 >> ((MR_Integer) 7 - (((MR_Integer) MR_r2 + (MR_Integer) MR_tempr3) - (MR_Integer) 1))) & ((MR_Integer) MR_tempr2 | ((MR_Integer) MR_tempr2 - (MR_Integer) 1))));
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bitmap_module19)
	MR_init_entry1(bitmap__extract_bits_from_bytes_6_0);
	MR_init_label2(bitmap__extract_bits_from_bytes_6_0,2,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__bitmap__extract_bits_from_bytes_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = ((MR_Integer) 8 - (MR_Integer) MR_r2);
	if (((MR_Integer) MR_r3 <= (MR_Integer) MR_r6)) {
		MR_GOTO_LAB(bitmap__extract_bits_from_bytes_6_0_i2);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	{
	MR_Integer	N;
	MR_BitmapPtr	BM;
	MR_Integer	Byte;
#define	MR_PROC_LABEL	mercury__bitmap__extract_bits_from_bytes_6_0
	N = MR_r1;
	BM = (MR_BitmapPtr) MR_r4;
{
#line 1747 "bitmap.m"

    Byte = (MR_Integer) BM->elements[N];
;}
#line 1330 "bitmap.c"
	MR_tempr1 = Byte;
#undef	MR_PROC_LABEL
	}
	MR_r1 = ((MR_Integer) MR_r1 + (MR_Integer) 1);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Integer) 0;
	MR_tempr4 = MR_r6;
	MR_r3 = ((MR_Integer) MR_r3 - (MR_Integer) MR_tempr4);
	MR_tempr3 = ((MR_Integer) 1 << ((MR_Integer) MR_tempr4 - (MR_Integer) 1));
	MR_r5 = (((MR_Integer) MR_r5 << (MR_Integer) MR_tempr4) | (((MR_Integer) MR_tempr1 >> ((MR_Integer) 7 - (((MR_Integer) MR_tempr2 + (MR_Integer) MR_tempr4) - (MR_Integer) 1))) & ((MR_Integer) MR_tempr3 | ((MR_Integer) MR_tempr3 - (MR_Integer) 1))));
	MR_np_localtailcall(bitmap__extract_bits_from_bytes_6_0);
	}
MR_def_label(bitmap__extract_bits_from_bytes_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_LE(MR_r3,0)) {
		MR_GOTO_LAB(bitmap__extract_bits_from_bytes_6_0_i4);
	}
	MR_np_tailcall_ent(bitmap__extract_bits_from_byte_index_6_0);
MR_def_label(bitmap__extract_bits_from_bytes_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r5;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bitmap_module20)
	MR_init_entry1(fn__bitmap__unsafe_bits_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__bitmap__unsafe_bits_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = ((MR_Integer) MR_r1 / (MR_Integer) 8);
	MR_r4 = MR_r3;
	MR_r3 = MR_r2;
	MR_r2 = ((MR_Integer) MR_tempr1 % (MR_Integer) 8);
	MR_r5 = (MR_Integer) 0;
	MR_np_tailcall_ent(bitmap__extract_bits_from_bytes_6_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bitmap_module21)
	MR_init_entry1(bitmap__set_bits_in_byte_index_6_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(bitmap__set_bits_in_byte_index_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	{
	MR_Integer	N;
	MR_BitmapPtr	BM;
	MR_Integer	Byte;
#define	MR_PROC_LABEL	mercury__bitmap__set_bits_in_byte_index_6_0
	N = MR_r1;
	BM = (MR_BitmapPtr) MR_r5;
{
#line 1747 "bitmap.m"

    Byte = (MR_Integer) BM->elements[N];
;}
#line 1411 "bitmap.c"
	MR_tempr1 = Byte;
#undef	MR_PROC_LABEL
	}
	MR_tempr5 = MR_r3;
	MR_tempr2 = ((MR_Integer) 1 << ((MR_Integer) MR_tempr5 - (MR_Integer) 1));
	MR_tempr3 = ((MR_Integer) MR_tempr2 | ((MR_Integer) MR_tempr2 - (MR_Integer) 1));
	MR_tempr2 = ((MR_Integer) 7 - (((((MR_Integer) MR_r2 - (MR_Integer) MR_tempr5) + (MR_Integer) 1) + (MR_Integer) MR_tempr5) - (MR_Integer) 1));
	MR_tempr4 = (((MR_Integer) MR_tempr1 & ~(((MR_Integer) MR_tempr3 << (MR_Integer) MR_tempr2))) | (((MR_Integer) MR_tempr3 & (MR_Integer) MR_r4) << (MR_Integer) MR_tempr2));
	{
	MR_Integer	N;
	MR_BitmapPtr	BM0;
	MR_Integer	Byte;
	MR_BitmapPtr	BM;
#define	MR_PROC_LABEL	mercury__bitmap__set_bits_in_byte_index_6_0
	N = MR_r1;
	BM0 = (MR_BitmapPtr) MR_r5;
	Byte = MR_tempr4;
{
#line 1788 "bitmap.m"

    BM = BM0;
    BM->elements[N] = (MR_uint_least8_t) Byte;
;}
#line 1435 "bitmap.c"
	MR_r1 = (MR_Word) BM;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bitmap_module22)
	MR_init_entry1(bitmap__set_bits_in_bytes_6_0);
	MR_init_label2(bitmap__set_bits_in_bytes_6_0,2,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__bitmap__set_bits_in_bytes_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = ((MR_Integer) MR_r2 + (MR_Integer) 1);
	if (((MR_Integer) MR_r3 <= (MR_Integer) MR_r6)) {
		MR_GOTO_LAB(bitmap__set_bits_in_bytes_6_0_i2);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	{
	MR_Integer	N;
	MR_BitmapPtr	BM;
	MR_Integer	Byte;
#define	MR_PROC_LABEL	mercury__bitmap__set_bits_in_bytes_6_0
	N = MR_r1;
	BM = (MR_BitmapPtr) MR_r5;
{
#line 1747 "bitmap.m"

    Byte = (MR_Integer) BM->elements[N];
;}
#line 1477 "bitmap.c"
	MR_tempr1 = Byte;
#undef	MR_PROC_LABEL
	}
	MR_tempr5 = MR_r6;
	MR_tempr2 = ((MR_Integer) 1 << ((MR_Integer) MR_tempr5 - (MR_Integer) 1));
	MR_tempr3 = ((MR_Integer) MR_tempr2 | ((MR_Integer) MR_tempr2 - (MR_Integer) 1));
	MR_tempr2 = ((MR_Integer) 7 - (((((MR_Integer) MR_r2 - (MR_Integer) MR_tempr5) + (MR_Integer) 1) + (MR_Integer) MR_tempr5) - (MR_Integer) 1));
	MR_tempr4 = (((MR_Integer) MR_tempr1 & ~(((MR_Integer) MR_tempr3 << (MR_Integer) MR_tempr2))) | (((MR_Integer) MR_tempr3 & (MR_Integer) MR_r4) << (MR_Integer) MR_tempr2));
	{
	MR_Integer	N;
	MR_BitmapPtr	BM0;
	MR_Integer	Byte;
	MR_BitmapPtr	BM;
#define	MR_PROC_LABEL	mercury__bitmap__set_bits_in_bytes_6_0
	N = MR_r1;
	BM0 = (MR_BitmapPtr) MR_r5;
	Byte = MR_tempr4;
{
#line 1788 "bitmap.m"

    BM = BM0;
    BM->elements[N] = (MR_uint_least8_t) Byte;
;}
#line 1501 "bitmap.c"
	MR_r5 = (MR_Word) BM;
#undef	MR_PROC_LABEL
	}
	MR_r1 = ((MR_Integer) MR_r1 - (MR_Integer) 1);
	MR_r2 = (MR_Integer) 7;
	MR_tempr6 = MR_r6;
	MR_r3 = ((MR_Integer) MR_r3 - (MR_Integer) MR_tempr6);
	MR_r4 = ((MR_Integer) MR_r4 >> (MR_Integer) MR_tempr6);
	MR_np_localtailcall(bitmap__set_bits_in_bytes_6_0);
	}
MR_def_label(bitmap__set_bits_in_bytes_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_LE(MR_r3,0)) {
		MR_GOTO_LAB(bitmap__set_bits_in_bytes_6_0_i4);
	}
	MR_np_tailcall_ent(bitmap__set_bits_in_byte_index_6_0);
MR_def_label(bitmap__set_bits_in_bytes_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r5;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bitmap_module23)
	MR_init_entry1(fn__f_98_105_116_109_97_112_95_95_117_110_115_97_102_101_95_98_105_116_115_32_58_61_4_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__f_98_105_116_109_97_112_95_95_117_110_115_97_102_101_95_98_105_116_115_32_58_61_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_r1;
	MR_tempr1 = MR_tempr3;
	MR_tempr4 = MR_r2;
	MR_tempr2 = (((MR_Integer) MR_tempr3 + (MR_Integer) MR_tempr4) - (MR_Integer) 1);
	MR_r1 = ((MR_Integer) MR_tempr2 / (MR_Integer) 8);
	MR_r5 = MR_r3;
	MR_r3 = MR_tempr4;
	MR_r2 = ((MR_Integer) MR_tempr2 % (MR_Integer) 8);
	MR_np_tailcall_ent(bitmap__set_bits_in_bytes_6_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bitmap_module24)
	MR_init_entry1(fn__bitmap__unsafe_copy_bytes_6_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__bitmap__unsafe_copy_bytes_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Integer	SameBM;
	MR_BitmapPtr	SrcBM;
	MR_Integer	SrcFirstByteIndex;
	MR_BitmapPtr	DestBM0;
	MR_Integer	DestFirstByteIndex;
	MR_Integer	NumBytes;
	MR_BitmapPtr	DestBM;
#define	MR_PROC_LABEL	mercury__fn__bitmap__unsafe_copy_bytes_6_0
	SameBM = MR_r1;
	SrcBM = (MR_BitmapPtr) MR_r2;
	SrcFirstByteIndex = MR_r3;
	DestBM0 = (MR_BitmapPtr) MR_r4;
	DestFirstByteIndex = MR_r5;
	NumBytes = MR_r6;
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

;}
#line 1596 "bitmap.c"
	MR_r1 = (MR_Word) DestBM;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bitmap_module25)
	MR_init_entry1(fn__bitmap__unsafe_copy_unaligned_bytes_ltor_7_0);
	MR_init_label1(fn__bitmap__unsafe_copy_unaligned_bytes_ltor_7_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__bitmap__unsafe_copy_unaligned_bytes_ltor_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_GT(MR_r7,0)) {
		MR_GOTO_LAB(fn__bitmap__unsafe_copy_unaligned_bytes_ltor_7_0_i2);
	}
	MR_r1 = MR_r5;
	MR_proceed();
MR_def_label(fn__bitmap__unsafe_copy_unaligned_bytes_ltor_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	{
	MR_Integer	N;
	MR_BitmapPtr	BM;
	MR_Integer	Byte;
#define	MR_PROC_LABEL	mercury__fn__bitmap__unsafe_copy_unaligned_bytes_ltor_7_0
	N = MR_r2;
	BM = (MR_BitmapPtr) MR_r1;
{
#line 1747 "bitmap.m"

    Byte = (MR_Integer) BM->elements[N];
;}
#line 1640 "bitmap.c"
	MR_tempr1 = Byte;
#undef	MR_PROC_LABEL
	}
	MR_tempr3 = MR_r3;
	MR_tempr2 = (((MR_Integer) MR_r4 << (MR_Integer) MR_tempr3) | ((MR_Integer) MR_tempr1 >> ((MR_Integer) 8 - (MR_Integer) MR_tempr3)));
	{
	MR_Integer	N;
	MR_BitmapPtr	BM0;
	MR_Integer	Byte;
	MR_BitmapPtr	BM;
#define	MR_PROC_LABEL	mercury__fn__bitmap__unsafe_copy_unaligned_bytes_ltor_7_0
	N = MR_r6;
	BM0 = (MR_BitmapPtr) MR_r5;
	Byte = MR_tempr2;
{
#line 1788 "bitmap.m"

    BM = BM0;
    BM->elements[N] = (MR_uint_least8_t) Byte;
;}
#line 1661 "bitmap.c"
	MR_r5 = (MR_Word) BM;
#undef	MR_PROC_LABEL
	}
	MR_r2 = ((MR_Integer) MR_r2 + (MR_Integer) 1);
	MR_r4 = MR_tempr1;
	MR_r6 = ((MR_Integer) MR_r6 + (MR_Integer) 1);
	MR_r7 = ((MR_Integer) MR_r7 - (MR_Integer) 1);
	MR_np_localtailcall(fn__bitmap__unsafe_copy_unaligned_bytes_ltor_7_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bitmap_module26)
	MR_init_entry1(fn__bitmap__unsafe_copy_unaligned_bytes_rtol_7_0);
	MR_init_label1(fn__bitmap__unsafe_copy_unaligned_bytes_rtol_7_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__bitmap__unsafe_copy_unaligned_bytes_rtol_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_GT(MR_r7,0)) {
		MR_GOTO_LAB(fn__bitmap__unsafe_copy_unaligned_bytes_rtol_7_0_i2);
	}
	MR_r1 = MR_r5;
	MR_proceed();
MR_def_label(fn__bitmap__unsafe_copy_unaligned_bytes_rtol_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	{
	MR_Integer	N;
	MR_BitmapPtr	BM;
	MR_Integer	Byte;
#define	MR_PROC_LABEL	mercury__fn__bitmap__unsafe_copy_unaligned_bytes_rtol_7_0
	N = MR_r2;
	BM = (MR_BitmapPtr) MR_r1;
{
#line 1747 "bitmap.m"

    Byte = (MR_Integer) BM->elements[N];
;}
#line 1710 "bitmap.c"
	MR_tempr1 = Byte;
#undef	MR_PROC_LABEL
	}
	MR_tempr3 = MR_r3;
	MR_tempr2 = (((MR_Integer) MR_tempr1 << (MR_Integer) MR_tempr3) | ((MR_Integer) MR_r4 >> ((MR_Integer) 8 - (MR_Integer) MR_tempr3)));
	{
	MR_Integer	N;
	MR_BitmapPtr	BM0;
	MR_Integer	Byte;
	MR_BitmapPtr	BM;
#define	MR_PROC_LABEL	mercury__fn__bitmap__unsafe_copy_unaligned_bytes_rtol_7_0
	N = MR_r6;
	BM0 = (MR_BitmapPtr) MR_r5;
	Byte = MR_tempr2;
{
#line 1788 "bitmap.m"

    BM = BM0;
    BM->elements[N] = (MR_uint_least8_t) Byte;
;}
#line 1731 "bitmap.c"
	MR_r5 = (MR_Word) BM;
#undef	MR_PROC_LABEL
	}
	MR_r2 = ((MR_Integer) MR_r2 - (MR_Integer) 1);
	MR_r4 = MR_tempr1;
	MR_r6 = ((MR_Integer) MR_r6 - (MR_Integer) 1);
	MR_r7 = ((MR_Integer) MR_r7 - (MR_Integer) 1);
	MR_np_localtailcall(fn__bitmap__unsafe_copy_unaligned_bytes_rtol_7_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bitmap_module27)
	MR_init_entry1(fn__bitmap__unsafe_copy_unaligned_bits_6_0);
	MR_init_label8(fn__bitmap__unsafe_copy_unaligned_bits_6_0,2,4,5,6,8,9,10,12)
	MR_init_label8(fn__bitmap__unsafe_copy_unaligned_bits_6_0,15,14,17,18,19,23,24,25)
	MR_init_label7(fn__bitmap__unsafe_copy_unaligned_bits_6_0,26,20,27,31,32,33,28)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__bitmap__unsafe_copy_unaligned_bits_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(14);
	MR_sv(14) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr2 = MR_r5;
	MR_tempr3 = MR_r6;
	MR_sv(6) = (((MR_Integer) MR_tempr2 + (MR_Integer) MR_tempr3) - (MR_Integer) 1);
	MR_sv(5) = ((MR_Integer) MR_tempr2 % (MR_Integer) 8);
	if (MR_INT_NE(MR_sv(5),0)) {
		MR_GOTO_LAB(fn__bitmap__unsafe_copy_unaligned_bits_6_0_i2);
	}
	MR_sv(1) = MR_r1;
	MR_sv(4) = MR_tempr2;
	MR_tempr1 = (MR_Integer) 0;
	MR_sv(7) = MR_tempr1;
	MR_sv(3) = (MR_Integer) 0;
	MR_sv(8) = ((MR_Integer) MR_r3 + (MR_Integer) MR_tempr1);
	MR_sv(9) = ((MR_Integer) MR_tempr2 + (MR_Integer) MR_tempr1);
	MR_r1 = ((MR_Integer) MR_sv(6) % (MR_Integer) 8);
	MR_sv(12) = MR_r4;
	MR_sv(11) = MR_tempr3;
	MR_GOTO_LAB(fn__bitmap__unsafe_copy_unaligned_bits_6_0_i5);
	}
MR_def_label(fn__bitmap__unsafe_copy_unaligned_bits_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_r5;
	MR_sv(7) = ((MR_Integer) 8 - (MR_Integer) MR_sv(5));
	MR_sv(12) = MR_r4;
	MR_sv(8) = MR_r6;
	MR_r1 = ((MR_Integer) MR_tempr1 / (MR_Integer) 8);
	MR_r2 = ((MR_Integer) MR_tempr1 % (MR_Integer) 8);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(2);
	MR_r5 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(bitmap__extract_bits_from_bytes_6_0,
		fn__bitmap__unsafe_copy_unaligned_bits_6_0_i4);
MR_def_label(fn__bitmap__unsafe_copy_unaligned_bits_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_tempr2 = MR_sv(8);
	MR_tempr3 = MR_sv(7);
	MR_sv(8) = ((MR_Integer) MR_tempr1 + (MR_Integer) MR_tempr3);
	MR_sv(9) = ((MR_Integer) MR_sv(4) + (MR_Integer) MR_tempr3);
	MR_r1 = ((MR_Integer) MR_sv(6) % (MR_Integer) 8);
	MR_sv(11) = ((MR_Integer) MR_tempr2 - (MR_Integer) MR_tempr3);
	}
MR_def_label(fn__bitmap__unsafe_copy_unaligned_bits_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = ((MR_Integer) 8 - (MR_Integer) MR_r1);
	if (MR_INT_NE(MR_r3,1)) {
		MR_GOTO_LAB(fn__bitmap__unsafe_copy_unaligned_bits_6_0_i6);
	}
	MR_sv(10) = (MR_Integer) 0;
	MR_r1 = (MR_Integer) 0;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(11);
	MR_r3 = ((MR_Integer) MR_tempr1 / (MR_Integer) 8);
	MR_r4 = MR_tempr1;
	MR_GOTO_LAB(fn__bitmap__unsafe_copy_unaligned_bits_6_0_i9);
	}
MR_def_label(fn__bitmap__unsafe_copy_unaligned_bits_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = ((MR_Integer) MR_r1 + (MR_Integer) 1);
	MR_sv(10) = MR_tempr1;
	MR_r1 = (((((MR_Integer) MR_sv(8) + (MR_Integer) MR_sv(11)) - (MR_Integer) 1) - (MR_Integer) MR_tempr1) + (MR_Integer) 1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(fn__bitmap__unsafe_bits_3_0,
		fn__bitmap__unsafe_copy_unaligned_bits_6_0_i8);
MR_def_label(fn__bitmap__unsafe_copy_unaligned_bits_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(11);
	MR_tempr2 = MR_sv(10);
	MR_r3 = (((MR_Integer) MR_tempr1 - (MR_Integer) MR_tempr2) / (MR_Integer) 8);
	MR_r4 = ((MR_Integer) MR_tempr1 - (MR_Integer) MR_tempr2);
	}
MR_def_label(fn__bitmap__unsafe_copy_unaligned_bits_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),1)) {
		MR_GOTO_LAB(fn__bitmap__unsafe_copy_unaligned_bits_6_0_i10);
	}
	if (((MR_Integer) MR_sv(8) >= (MR_Integer) MR_sv(9))) {
		MR_GOTO_LAB(fn__bitmap__unsafe_copy_unaligned_bits_6_0_i10);
	}
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r3;
	MR_r3 = (MR_Integer) 1;
	MR_r5 = MR_r4;
	MR_r4 = ((MR_Integer) MR_sv(8) % (MR_Integer) 8);
	MR_GOTO_LAB(fn__bitmap__unsafe_copy_unaligned_bits_6_0_i12);
MR_def_label(fn__bitmap__unsafe_copy_unaligned_bits_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r3;
	MR_r3 = (MR_Integer) 0;
	MR_r5 = MR_r4;
	MR_r4 = ((MR_Integer) MR_sv(8) % (MR_Integer) 8);
MR_def_label(fn__bitmap__unsafe_copy_unaligned_bits_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(fn__bitmap__unsafe_copy_unaligned_bits_6_0_i14);
	}
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(8);
	MR_sv(8) = MR_r1;
	MR_tempr2 = MR_sv(9);
	MR_sv(9) = MR_r4;
	MR_sv(11) = ((MR_Integer) MR_tempr2 / (MR_Integer) 8);
	MR_sv(13) = (((MR_Integer) MR_tempr1 / (MR_Integer) 8) + (MR_Integer) 1);
	MR_r1 = ((MR_Integer) MR_tempr1 / (MR_Integer) 8);
	}
	MR_np_call_localret_ent(fn__bitmap__unsafe_byte_2_0,
		fn__bitmap__unsafe_copy_unaligned_bits_6_0_i15);
MR_def_label(fn__bitmap__unsafe_copy_unaligned_bits_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(13);
	MR_r3 = MR_sv(9);
	MR_r5 = MR_sv(12);
	MR_r6 = MR_sv(11);
	MR_r7 = MR_sv(8);
	MR_np_call_localret_ent(fn__bitmap__unsafe_copy_unaligned_bytes_ltor_7_0,
		fn__bitmap__unsafe_copy_unaligned_bits_6_0_i19);
MR_def_label(fn__bitmap__unsafe_copy_unaligned_bits_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_sv(8);
	MR_sv(8) = MR_r1;
	MR_tempr2 = MR_sv(9);
	MR_sv(9) = MR_r4;
	MR_tempr3 = MR_r5;
	MR_sv(11) = ((((MR_Integer) MR_tempr1 + (MR_Integer) MR_tempr3) - (MR_Integer) 1) / (MR_Integer) 8);
	MR_r1 = (((MR_Integer) MR_tempr2 + (MR_Integer) MR_tempr3) - (MR_Integer) 1);
	}
	MR_np_call_localret_ent(fn__bitmap__byte_index_for_bit_1_0,
		fn__bitmap__unsafe_copy_unaligned_bits_6_0_i17);
MR_def_label(fn__bitmap__unsafe_copy_unaligned_bits_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(13) = MR_r1;
	MR_r1 = MR_sv(11);
	MR_sv(11) = ((MR_Integer) MR_r1 - (MR_Integer) 1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(fn__bitmap__unsafe_byte_2_0,
		fn__bitmap__unsafe_copy_unaligned_bits_6_0_i18);
MR_def_label(fn__bitmap__unsafe_copy_unaligned_bits_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(11);
	MR_r3 = MR_sv(9);
	MR_r5 = MR_sv(12);
	MR_r6 = MR_sv(13);
	MR_r7 = MR_sv(8);
	MR_np_call_localret_ent(fn__bitmap__unsafe_copy_unaligned_bytes_rtol_7_0,
		fn__bitmap__unsafe_copy_unaligned_bits_6_0_i19);
MR_def_label(fn__bitmap__unsafe_copy_unaligned_bits_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_sv(4) = MR_tempr1;
	if (MR_INT_EQ(MR_sv(7),0)) {
		MR_GOTO_LAB(fn__bitmap__unsafe_copy_unaligned_bits_6_0_i20);
	}
	}
	MR_np_call_localret_ent(fn__bitmap__byte_index_for_bit_1_0,
		fn__bitmap__unsafe_copy_unaligned_bits_6_0_i23);
MR_def_label(fn__bitmap__unsafe_copy_unaligned_bits_6_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(fn__bitmap__unsafe_byte_2_0,
		fn__bitmap__unsafe_copy_unaligned_bits_6_0_i24);
MR_def_label(fn__bitmap__unsafe_copy_unaligned_bits_6_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(fn__bitmap__set_bits_in_byte_4_0,
		fn__bitmap__unsafe_copy_unaligned_bits_6_0_i25);
MR_def_label(fn__bitmap__unsafe_copy_unaligned_bits_6_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(fn__f_98_105_116_109_97_112_95_95_117_110_115_97_102_101_95_98_121_116_101_32_58_61_3_0,
		fn__bitmap__unsafe_copy_unaligned_bits_6_0_i26);
MR_def_label(fn__bitmap__unsafe_copy_unaligned_bits_6_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_GOTO_LAB(fn__bitmap__unsafe_copy_unaligned_bits_6_0_i27);
MR_def_label(fn__bitmap__unsafe_copy_unaligned_bits_6_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_sv(3) = MR_sv(4);
MR_def_label(fn__bitmap__unsafe_copy_unaligned_bits_6_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_sv(10),0)) {
		MR_GOTO_LAB(fn__bitmap__unsafe_copy_unaligned_bits_6_0_i28);
	}
	MR_np_call_localret_ent(fn__bitmap__byte_index_for_bit_1_0,
		fn__bitmap__unsafe_copy_unaligned_bits_6_0_i31);
MR_def_label(fn__bitmap__unsafe_copy_unaligned_bits_6_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(fn__bitmap__unsafe_byte_2_0,
		fn__bitmap__unsafe_copy_unaligned_bits_6_0_i32);
MR_def_label(fn__bitmap__unsafe_copy_unaligned_bits_6_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_sv(10);
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(fn__bitmap__set_bits_in_byte_4_0,
		fn__bitmap__unsafe_copy_unaligned_bits_6_0_i33);
MR_def_label(fn__bitmap__unsafe_copy_unaligned_bits_6_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_succip_word = MR_sv(14);
	MR_decr_sp(14);
	MR_np_tailcall_ent(fn__f_98_105_116_109_97_112_95_95_117_110_115_97_102_101_95_98_121_116_101_32_58_61_3_0);
MR_def_label(fn__bitmap__unsafe_copy_unaligned_bits_6_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_decr_sp_and_return(14);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bitmap_module28)
	MR_init_entry1(fn__bitmap__unsafe_copy_bits_6_0);
	MR_init_label8(fn__bitmap__unsafe_copy_bits_6_0,3,2,6,10,12,13,14,15)
	MR_init_label8(fn__bitmap__unsafe_copy_bits_6_0,17,18,19,20,24,25,21,31)
	MR_init_label3(fn__bitmap__unsafe_copy_bits_6_0,32,28,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__bitmap__unsafe_copy_bits_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r5;
	MR_r7 = ((MR_Integer) MR_tempr1 % (MR_Integer) 8);
	MR_tempr2 = MR_r3;
	MR_sv(5) = ((MR_Integer) MR_tempr2 % (MR_Integer) 8);
	if (MR_INT_GE(MR_r6,16)) {
		MR_GOTO_LAB(fn__bitmap__unsafe_copy_bits_6_0_i2);
	}
	MR_sv(4) = MR_tempr1;
	MR_sv(9) = MR_r4;
	MR_tempr3 = MR_r6;
	MR_sv(10) = MR_tempr3;
	MR_r1 = MR_tempr2;
	MR_r3 = MR_r2;
	MR_r2 = MR_tempr3;
	}
	MR_np_call_localret_ent(fn__bitmap__unsafe_bits_3_0,
		fn__bitmap__unsafe_copy_bits_6_0_i3);
MR_def_label(fn__bitmap__unsafe_copy_bits_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(9);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(fn__f_98_105_116_109_97_112_95_95_117_110_115_97_102_101_95_98_105_116_115_32_58_61_4_0);
MR_def_label(fn__bitmap__unsafe_copy_bits_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_sv(5) != MR_r7)) {
		MR_GOTO_LAB(fn__bitmap__unsafe_copy_bits_6_0_i5);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr2 = MR_r3;
	MR_tempr3 = MR_r6;
	MR_sv(7) = ((((MR_Integer) MR_tempr2 + (MR_Integer) MR_tempr3) - (MR_Integer) 1) % (MR_Integer) 8);
	MR_sv(6) = (((MR_Integer) MR_tempr2 + (MR_Integer) MR_tempr3) - (MR_Integer) 1);
	if (MR_INT_NE(MR_sv(5),0)) {
		MR_GOTO_LAB(fn__bitmap__unsafe_copy_bits_6_0_i6);
	}
	MR_tempr1 = ((MR_Integer) 8 - (MR_Integer) MR_sv(7));
	if (MR_INT_NE(MR_tempr1,1)) {
		MR_GOTO_LAB(fn__bitmap__unsafe_copy_bits_6_0_i6);
	}
	MR_r3 = ((MR_Integer) MR_r3 / (MR_Integer) 8);
	MR_r5 = ((MR_Integer) MR_r5 / (MR_Integer) 8);
	MR_r6 = ((MR_Integer) MR_r6 / (MR_Integer) 8);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(fn__bitmap__unsafe_copy_bytes_6_0);
	}
MR_def_label(fn__bitmap__unsafe_copy_bits_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(5),0)) {
		MR_GOTO_LAB(fn__bitmap__unsafe_copy_bits_6_0_i10);
	}
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r5;
	MR_sv(8) = (MR_Integer) 0;
	MR_r3 = (MR_Integer) 0;
	MR_sv(10) = MR_r6;
	MR_GOTO_LAB(fn__bitmap__unsafe_copy_bits_6_0_i14);
MR_def_label(fn__bitmap__unsafe_copy_bits_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_r5;
	MR_sv(8) = ((MR_Integer) 8 - (MR_Integer) MR_sv(5));
	MR_sv(9) = MR_r4;
	MR_sv(10) = MR_r6;
	MR_r1 = ((MR_Integer) MR_tempr1 / (MR_Integer) 8);
	}
	MR_np_call_localret_ent(fn__bitmap__unsafe_byte_2_0,
		fn__bitmap__unsafe_copy_bits_6_0_i12);
MR_def_label(fn__bitmap__unsafe_copy_bits_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(8);
	MR_np_call_localret_ent(fn__bitmap__extract_bits_from_byte_3_0,
		fn__bitmap__unsafe_copy_bits_6_0_i13);
MR_def_label(fn__bitmap__unsafe_copy_bits_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r4 = MR_sv(9);
	MR_sv(10) = ((MR_Integer) MR_sv(10) - (MR_Integer) MR_sv(8));
MR_def_label(fn__bitmap__unsafe_copy_bits_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r7 = ((MR_Integer) 8 - (MR_Integer) MR_sv(7));
	if (MR_INT_NE(MR_r7,1)) {
		MR_GOTO_LAB(fn__bitmap__unsafe_copy_bits_6_0_i15);
	}
	MR_sv(6) = MR_r3;
	MR_sv(7) = (MR_Integer) 0;
	MR_sv(1) = (MR_Integer) 0;
	MR_r6 = ((MR_Integer) MR_sv(10) / (MR_Integer) 8);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(8);
	MR_r3 = (((MR_Integer) MR_sv(3) + (MR_Integer) MR_tempr1) / (MR_Integer) 8);
	MR_r5 = (((MR_Integer) MR_sv(4) + (MR_Integer) MR_tempr1) / (MR_Integer) 8);
	MR_GOTO_LAB(fn__bitmap__unsafe_copy_bits_6_0_i19);
	}
MR_def_label(fn__bitmap__unsafe_copy_bits_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r3;
	MR_sv(7) = ((MR_Integer) MR_sv(7) + (MR_Integer) 1);
	MR_sv(9) = MR_r4;
	MR_r1 = ((MR_Integer) MR_tempr1 / (MR_Integer) 8);
	}
	MR_np_call_localret_ent(fn__bitmap__unsafe_byte_2_0,
		fn__bitmap__unsafe_copy_bits_6_0_i17);
MR_def_label(fn__bitmap__unsafe_copy_bits_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(fn__bitmap__extract_bits_from_byte_3_0,
		fn__bitmap__unsafe_copy_bits_6_0_i18);
MR_def_label(fn__bitmap__unsafe_copy_bits_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_sv(1) = MR_tempr1;
	MR_r4 = MR_sv(9);
	MR_r6 = (((MR_Integer) MR_sv(10) - (MR_Integer) MR_sv(7)) / (MR_Integer) 8);
	MR_tempr2 = MR_sv(8);
	MR_r3 = (((MR_Integer) MR_sv(3) + (MR_Integer) MR_tempr2) / (MR_Integer) 8);
	MR_r5 = (((MR_Integer) MR_sv(4) + (MR_Integer) MR_tempr2) / (MR_Integer) 8);
	}
MR_def_label(fn__bitmap__unsafe_copy_bits_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r6;
	MR_sv(4) = MR_r5;
	MR_np_call_localret_ent(fn__bitmap__unsafe_copy_bytes_6_0,
		fn__bitmap__unsafe_copy_bits_6_0_i20);
MR_def_label(fn__bitmap__unsafe_copy_bits_6_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_sv(8),0)) {
		MR_GOTO_LAB(fn__bitmap__unsafe_copy_bits_6_0_i21);
	}
	MR_sv(2) = ((MR_Integer) MR_sv(4) - (MR_Integer) 1);
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(fn__bitmap__unsafe_byte_2_0,
		fn__bitmap__unsafe_copy_bits_6_0_i24);
MR_def_label(fn__bitmap__unsafe_copy_bits_6_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_sv(6);
	MR_np_call_localret_ent(fn__bitmap__set_bits_in_byte_4_0,
		fn__bitmap__unsafe_copy_bits_6_0_i25);
MR_def_label(fn__bitmap__unsafe_copy_bits_6_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(fn__f_98_105_116_109_97_112_95_95_117_110_115_97_102_101_95_98_121_116_101_32_58_61_3_0,
		fn__bitmap__unsafe_copy_bits_6_0_i21);
MR_def_label(fn__bitmap__unsafe_copy_bits_6_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	if (MR_INT_EQ(MR_sv(7),0)) {
		MR_GOTO_LAB(fn__bitmap__unsafe_copy_bits_6_0_i28);
	}
	MR_sv(2) = ((MR_Integer) MR_sv(4) + (MR_Integer) MR_sv(3));
	MR_sv(3) = MR_r2;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__bitmap__unsafe_byte_2_0,
		fn__bitmap__unsafe_copy_bits_6_0_i31);
MR_def_label(fn__bitmap__unsafe_copy_bits_6_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(fn__bitmap__set_bits_in_byte_4_0,
		fn__bitmap__unsafe_copy_bits_6_0_i32);
MR_def_label(fn__bitmap__unsafe_copy_bits_6_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(fn__f_98_105_116_109_97_112_95_95_117_110_115_97_102_101_95_98_121_116_101_32_58_61_3_0);
MR_def_label(fn__bitmap__unsafe_copy_bits_6_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(11);
MR_def_label(fn__bitmap__unsafe_copy_bits_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(fn__bitmap__unsafe_copy_unaligned_bits_6_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(string__int_to_base_string_3_0);

MR_BEGIN_MODULE(bitmap_module29)
	MR_init_entry1(bitmap__throw_bounds_error_4_0);
	MR_init_label5(bitmap__throw_bounds_error_4_0,3,2,4,5,6)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__bitmap__throw_bounds_error_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	if (MR_INT_GE(MR_r4,0)) {
		MR_GOTO_LAB(bitmap__throw_bounds_error_4_0_i2);
	}
	MR_sv(2) = MR_r2;
	MR_r1 = MR_r4;
	MR_r2 = (MR_Integer) 10;
	MR_np_call_localret_ent(string__int_to_base_string_3_0,
		bitmap__throw_bounds_error_4_0_i3);
MR_def_label(bitmap__throw_bounds_error_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,0,0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_string_const(": negative number of bits: ", 27);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	{
	MR_Word	Strs;
	MR_String	Str;
#define	MR_PROC_LABEL	mercury__bitmap__throw_bounds_error_4_0
	Strs = MR_tempr1;
{
#line 710 "string.opt"
{
    MR_Word list = Strs;
    MR_Word tmp;
    size_t  len;

    /* Determine the total length of all strings */
    len = 0;
    while (!MR_list_is_empty(list)) {
        len += strlen((MR_String) MR_list_head(list));
        list = MR_list_tail(list);
    }

    /* Allocate enough word aligned memory for the string */
    MR_allocate_aligned_string_msg(Str, len, MR_PROC_LABEL);

    /* Copy the strings into the new memory */
    len = 0;
    list = Strs;
    while (!MR_list_is_empty(list)) {
        strcpy((MR_String) Str + len, (MR_String) MR_list_head(list));
        len += strlen((MR_String) MR_list_head(list));
        list = MR_list_tail(list);
    }

    Str[len] = '\0';
};}
#line 2321 "bitmap.c"
	MR_tempr1 = (MR_Word) Str;
#undef	MR_PROC_LABEL
	}
	MR_r2 = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(bitmap, bitmap_error);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(exception__throw_1_0);
	}
MR_def_label(bitmap__throw_bounds_error_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r1 = MR_r4;
	MR_r2 = (MR_Integer) 10;
	MR_np_call_localret_ent(string__int_to_base_string_3_0,
		bitmap__throw_bounds_error_4_0_i4);
MR_def_label(bitmap__throw_bounds_error_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_sv(3) = MR_tempr1;
	MR_r2 = (MR_Integer) 10;
	}
	MR_np_call_localret_ent(string__int_to_base_string_3_0,
		bitmap__throw_bounds_error_4_0_i5);
MR_def_label(bitmap__throw_bounds_error_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	{
	MR_BitmapPtr	BM;
	MR_Integer	NumBits;
#define	MR_PROC_LABEL	mercury__bitmap__throw_bounds_error_4_0
	BM = (MR_BitmapPtr) MR_sv(1);
{
#line 1674 "bitmap.m"

    NumBits = BM->num_bits;
;}
#line 2365 "bitmap.c"
	MR_tempr1 = NumBits;
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 10;
	}
	MR_np_call_localret_ent(string__int_to_base_string_3_0,
		bitmap__throw_bounds_error_4_0_i6);
MR_def_label(bitmap__throw_bounds_error_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,0,1);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_string_const(" is out of bounds [0, ", 22);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_string_const(" bits starting at bit ", 22);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_string_const(": ", 2);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	{
	MR_Word	Strs;
	MR_String	Str;
#define	MR_PROC_LABEL	mercury__bitmap__throw_bounds_error_4_0
	Strs = MR_tempr1;
{
#line 710 "string.opt"
{
    MR_Word list = Strs;
    MR_Word tmp;
    size_t  len;

    /* Determine the total length of all strings */
    len = 0;
    while (!MR_list_is_empty(list)) {
        len += strlen((MR_String) MR_list_head(list));
        list = MR_list_tail(list);
    }

    /* Allocate enough word aligned memory for the string */
    MR_allocate_aligned_string_msg(Str, len, MR_PROC_LABEL);

    /* Copy the strings into the new memory */
    len = 0;
    list = Strs;
    while (!MR_list_is_empty(list)) {
        strcpy((MR_String) Str + len, (MR_String) MR_list_head(list));
        len += strlen((MR_String) MR_list_head(list));
        list = MR_list_tail(list);
    }

    Str[len] = '\0';
};}
#line 2433 "bitmap.c"
	MR_tempr1 = (MR_Word) Str;
#undef	MR_PROC_LABEL
	}
	MR_r2 = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(bitmap, bitmap_error);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(exception__throw_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bitmap_module30)
	MR_init_entry1(fn__bitmap__copy_bits_6_0);
	MR_init_label8(fn__bitmap__copy_bits_6_0,6,4,10,3,16,108,17,15)
	MR_init_label5(fn__bitmap__copy_bits_6_0,14,47,23,22,21)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__bitmap__copy_bits_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_LT(MR_r6,0)) {
		MR_GOTO_LAB(fn__bitmap__copy_bits_6_0_i3);
	}
	if (MR_INT_LT(MR_r3,0)) {
		MR_GOTO_LAB(fn__bitmap__copy_bits_6_0_i3);
	}
	if (MR_INT_LT(MR_r5,0)) {
		MR_GOTO_LAB(fn__bitmap__copy_bits_6_0_i3);
	}
	MR_r7 = (((MR_Integer) MR_r3 + (MR_Integer) MR_r6) - (MR_Integer) 1);
	if (((MR_Integer) 0 > (MR_Integer) MR_r7)) {
		MR_GOTO_LAB(fn__bitmap__copy_bits_6_0_i6);
	}
	{
	MR_BitmapPtr	BM;
	MR_Integer	NumBits;
#define	MR_PROC_LABEL	mercury__fn__bitmap__copy_bits_6_0
	BM = (MR_BitmapPtr) MR_r2;
{
#line 1674 "bitmap.m"

    NumBits = BM->num_bits;
;}
#line 2485 "bitmap.c"
	MR_r8 = NumBits;
#undef	MR_PROC_LABEL
	}
	if (((MR_Integer) MR_r7 < (MR_Integer) MR_r8)) {
		MR_GOTO_LAB(fn__bitmap__copy_bits_6_0_i4);
	}
MR_def_label(fn__bitmap__copy_bits_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r6,0)) {
		MR_GOTO_LAB(fn__bitmap__copy_bits_6_0_i3);
	}
	if (((MR_Integer) 0 > (MR_Integer) MR_r3)) {
		MR_GOTO_LAB(fn__bitmap__copy_bits_6_0_i3);
	}
	{
	MR_BitmapPtr	BM;
	MR_Integer	NumBits;
#define	MR_PROC_LABEL	mercury__fn__bitmap__copy_bits_6_0
	BM = (MR_BitmapPtr) MR_r2;
{
#line 1674 "bitmap.m"

    NumBits = BM->num_bits;
;}
#line 2510 "bitmap.c"
	MR_r7 = NumBits;
#undef	MR_PROC_LABEL
	}
	if (((MR_Integer) MR_r3 >= (MR_Integer) MR_r7)) {
		MR_GOTO_LAB(fn__bitmap__copy_bits_6_0_i3);
	}
MR_def_label(fn__bitmap__copy_bits_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r7 = (((MR_Integer) MR_r5 + (MR_Integer) MR_r6) - (MR_Integer) 1);
	if (((MR_Integer) 0 > (MR_Integer) MR_r7)) {
		MR_GOTO_LAB(fn__bitmap__copy_bits_6_0_i10);
	}
	{
	MR_BitmapPtr	BM;
	MR_Integer	NumBits;
#define	MR_PROC_LABEL	mercury__fn__bitmap__copy_bits_6_0
	BM = (MR_BitmapPtr) MR_r4;
{
#line 1674 "bitmap.m"

    NumBits = BM->num_bits;
;}
#line 2533 "bitmap.c"
	MR_r8 = NumBits;
#undef	MR_PROC_LABEL
	}
	if (((MR_Integer) MR_r7 >= (MR_Integer) MR_r8)) {
		MR_GOTO_LAB(fn__bitmap__copy_bits_6_0_i10);
	}
	MR_np_tailcall_ent(fn__bitmap__unsafe_copy_bits_6_0);
MR_def_label(fn__bitmap__copy_bits_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r6,0)) {
		MR_GOTO_LAB(fn__bitmap__copy_bits_6_0_i3);
	}
	if (((MR_Integer) 0 > (MR_Integer) MR_r5)) {
		MR_GOTO_LAB(fn__bitmap__copy_bits_6_0_i3);
	}
	{
	MR_BitmapPtr	BM;
	MR_Integer	NumBits;
#define	MR_PROC_LABEL	mercury__fn__bitmap__copy_bits_6_0
	BM = (MR_BitmapPtr) MR_r4;
{
#line 1674 "bitmap.m"

    NumBits = BM->num_bits;
;}
#line 2559 "bitmap.c"
	MR_r7 = NumBits;
#undef	MR_PROC_LABEL
	}
	if (((MR_Integer) MR_r5 >= (MR_Integer) MR_r7)) {
		MR_GOTO_LAB(fn__bitmap__copy_bits_6_0_i3);
	}
	MR_np_tailcall_ent(fn__bitmap__unsafe_copy_bits_6_0);
MR_def_label(fn__bitmap__copy_bits_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_GE(MR_r6,0)) {
		MR_GOTO_LAB(fn__bitmap__copy_bits_6_0_i16);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_r1 = MR_r2;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_r4 = MR_r6;
	MR_GOTO_LAB(fn__bitmap__copy_bits_6_0_i15);
MR_def_label(fn__bitmap__copy_bits_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_GE(MR_r3,0)) {
		MR_GOTO_LAB(fn__bitmap__copy_bits_6_0_i17);
	}
MR_def_label(fn__bitmap__copy_bits_6_0,108)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_r1 = MR_r2;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_r4 = MR_r6;
	MR_GOTO_LAB(fn__bitmap__copy_bits_6_0_i15);
MR_def_label(fn__bitmap__copy_bits_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r7 = (((MR_Integer) MR_r3 + (MR_Integer) MR_r6) - (MR_Integer) 1);
	if (((MR_Integer) 0 > (MR_Integer) MR_r7)) {
		MR_GOTO_LAB(fn__bitmap__copy_bits_6_0_i108);
	}
	{
	MR_BitmapPtr	BM;
	MR_Integer	NumBits;
#define	MR_PROC_LABEL	mercury__fn__bitmap__copy_bits_6_0
	BM = (MR_BitmapPtr) MR_r2;
{
#line 1674 "bitmap.m"

    NumBits = BM->num_bits;
;}
#line 2609 "bitmap.c"
	MR_r8 = NumBits;
#undef	MR_PROC_LABEL
	}
	if (((MR_Integer) MR_r7 >= (MR_Integer) MR_r8)) {
		MR_GOTO_LAB(fn__bitmap__copy_bits_6_0_i108);
	}
	MR_GOTO_LAB(fn__bitmap__copy_bits_6_0_i14);
MR_def_label(fn__bitmap__copy_bits_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("copy_bits (source)", 18);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(bitmap__throw_bounds_error_4_0);
MR_def_label(fn__bitmap__copy_bits_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_GE(MR_r5,0)) {
		MR_GOTO_LAB(fn__bitmap__copy_bits_6_0_i23);
	}
MR_def_label(fn__bitmap__copy_bits_6_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r4;
	MR_r3 = MR_r5;
	MR_r4 = MR_r6;
	MR_GOTO_LAB(fn__bitmap__copy_bits_6_0_i22);
MR_def_label(fn__bitmap__copy_bits_6_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r7 = (((MR_Integer) MR_r5 + (MR_Integer) MR_r6) - (MR_Integer) 1);
	if (((MR_Integer) 0 > (MR_Integer) MR_r7)) {
		MR_GOTO_LAB(fn__bitmap__copy_bits_6_0_i47);
	}
	{
	MR_BitmapPtr	BM;
	MR_Integer	NumBits;
#define	MR_PROC_LABEL	mercury__fn__bitmap__copy_bits_6_0
	BM = (MR_BitmapPtr) MR_r4;
{
#line 1674 "bitmap.m"

    NumBits = BM->num_bits;
;}
#line 2650 "bitmap.c"
	MR_r8 = NumBits;
#undef	MR_PROC_LABEL
	}
	if (((MR_Integer) MR_r7 >= (MR_Integer) MR_r8)) {
		MR_GOTO_LAB(fn__bitmap__copy_bits_6_0_i47);
	}
	MR_GOTO_LAB(fn__bitmap__copy_bits_6_0_i21);
MR_def_label(fn__bitmap__copy_bits_6_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("copy_bits (destination)", 23);
	MR_np_tailcall_ent(bitmap__throw_bounds_error_4_0);
MR_def_label(fn__bitmap__copy_bits_6_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(bitmap, bitmap_error);
	MR_r2 = (MR_Word) MR_string_const("bitmap.copy_bits: failed to diagnose error", 42);
	MR_np_tailcall_ent(exception__throw_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bitmap_module31)
	MR_init_entry1(fn__bitmap__copy_bits_5_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__bitmap__copy_bits_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = MR_r5;
	MR_r5 = MR_r4;
	MR_r4 = MR_r3;
	MR_r3 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_np_tailcall_ent(fn__bitmap__copy_bits_6_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bitmap_module32)
	MR_init_entry1(fn__bitmap__resize_3_0);
	MR_init_label7(fn__bitmap__resize_3_0,41,5,4,6,8,10,14)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__bitmap__resize_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_GT(MR_r2,0)) {
		MR_GOTO_LAB(fn__bitmap__resize_3_0_i41);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_np_tailcall_ent(fn__bitmap__new_2_0);
MR_def_label(fn__bitmap__resize_3_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MR_BitmapPtr	BM;
	MR_Integer	NumBits;
#define	MR_PROC_LABEL	mercury__fn__bitmap__resize_3_0
	BM = (MR_BitmapPtr) MR_r1;
{
#line 1674 "bitmap.m"

    NumBits = BM->num_bits;
;}
#line 2729 "bitmap.c"
	MR_r7 = NumBits;
#undef	MR_PROC_LABEL
	}
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(fn__bitmap__resize_3_0_i5);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r7;
	MR_sv(3) = (MR_Integer) 0;
	MR_r2 = MR_r1;
	MR_GOTO_LAB(fn__bitmap__resize_3_0_i4);
MR_def_label(fn__bitmap__resize_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r7;
	MR_sv(3) = (MR_Integer) -1;
	MR_r2 = MR_r1;
MR_def_label(fn__bitmap__resize_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Integer	N;
	MR_BitmapPtr	BM;
#define	MR_PROC_LABEL	mercury__fn__bitmap__resize_3_0
	N = MR_sv(1);
{
#line 1827 "bitmap.m"

    MR_allocate_bitmap_msg(BM, N, MR_PROC_LABEL);
;}
#line 2759 "bitmap.c"
	MR_r4 = (MR_Word) BM;
#undef	MR_PROC_LABEL
	}
	{
	MR_BitmapPtr	BM;
	MR_Integer	NumBits;
#define	MR_PROC_LABEL	mercury__fn__bitmap__resize_3_0
	BM = (MR_BitmapPtr) MR_r2;
{
#line 1674 "bitmap.m"

    NumBits = BM->num_bits;
;}
#line 2773 "bitmap.c"
	MR_r6 = NumBits;
#undef	MR_PROC_LABEL
	}
	if (((MR_Integer) MR_r6 >= (MR_Integer) MR_sv(1))) {
		MR_GOTO_LAB(fn__bitmap__resize_3_0_i6);
	}
	MR_r1 = (MR_Integer) 0;
	MR_r3 = (MR_Integer) 0;
	MR_r5 = (MR_Integer) 0;
	MR_np_call_localret_ent(fn__bitmap__copy_bits_6_0,
		fn__bitmap__resize_3_0_i8);
MR_def_label(fn__bitmap__resize_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = MR_sv(1);
	MR_r1 = (MR_Integer) 0;
	MR_r3 = (MR_Integer) 0;
	MR_r5 = (MR_Integer) 0;
	MR_np_call_localret_ent(fn__bitmap__copy_bits_6_0,
		fn__bitmap__resize_3_0_i8);
MR_def_label(fn__bitmap__resize_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_sv(1) <= (MR_Integer) MR_sv(2))) {
		MR_GOTO_LAB(fn__bitmap__resize_3_0_i14);
	}
	MR_r2 = ((MR_Integer) MR_sv(2) - (MR_Integer) 1);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(fn__bitmap__set_trailing_bits_in_byte_3_0,
		fn__bitmap__resize_3_0_i10);
MR_def_label(fn__bitmap__resize_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = (((MR_Integer) MR_sv(1) - (MR_Integer) 1) / (MR_Integer) 8);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = (((MR_Integer) MR_sv(2) - (MR_Integer) 1) / (MR_Integer) 8);
	MR_r5 = MR_tempr1;
	if (((MR_Integer) MR_r3 <= (MR_Integer) MR_tempr1)) {
		MR_GOTO_LAB(fn__bitmap__resize_3_0_i14);
	}
	MR_r2 = ((MR_Integer) MR_tempr1 + (MR_Integer) 1);
	MR_r4 = MR_sv(3);
	}
	MR_np_call_localret_ent(fn__bitmap__initialize_bitmap_bytes_4_0,
		fn__bitmap__resize_3_0_i14);
MR_def_label(fn__bitmap__resize_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	{
	MR_BitmapPtr	BM;
	MR_Integer	NumBits;
#define	MR_PROC_LABEL	mercury__fn__bitmap__resize_3_0
	BM = (MR_BitmapPtr) MR_r1;
{
#line 1674 "bitmap.m"

    NumBits = BM->num_bits;
;}
#line 2831 "bitmap.c"
	MR_tempr1 = NumBits;
#undef	MR_PROC_LABEL
	}
	MR_r2 = ((MR_Integer) MR_tempr1 - (MR_Integer) 1);
	MR_r3 = (MR_Integer) 0;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(fn__bitmap__set_trailing_bits_in_byte_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bitmap_module33)
	MR_init_entry1(fn__f_98_105_116_109_97_112_95_95_110_117_109_95_98_105_116_115_32_58_61_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__f_98_105_116_109_97_112_95_95_110_117_109_95_98_105_116_115_32_58_61_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_BitmapPtr	BM0;
	MR_Integer	NumBits;
	MR_BitmapPtr	BM;
#define	MR_PROC_LABEL	mercury__fn__f_98_105_116_109_97_112_95_95_110_117_109_95_98_105_116_115_32_58_61_2_0
	BM0 = (MR_BitmapPtr) MR_r1;
	NumBits = MR_r2;
{
#line 1708 "bitmap.m"

    BM = BM0;
    BM->num_bits = NumBits;
;}
#line 2871 "bitmap.c"
	MR_r1 = (MR_Word) BM;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bitmap_module34)
	MR_init_entry1(fn__bitmap__throw_bounds_error_3_0);
	MR_init_label2(fn__bitmap__throw_bounds_error_3_0,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__bitmap__throw_bounds_error_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_r1 = MR_r4;
	MR_r2 = (MR_Integer) 10;
	MR_np_call_localret_ent(string__int_to_base_string_3_0,
		fn__bitmap__throw_bounds_error_3_0_i2);
MR_def_label(fn__bitmap__throw_bounds_error_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	{
	MR_BitmapPtr	BM;
	MR_Integer	NumBits;
#define	MR_PROC_LABEL	mercury__fn__bitmap__throw_bounds_error_3_0
	BM = (MR_BitmapPtr) MR_sv(1);
{
#line 1674 "bitmap.m"

    NumBits = BM->num_bits;
;}
#line 2916 "bitmap.c"
	MR_tempr1 = NumBits;
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 10;
	}
	MR_np_call_localret_ent(string__int_to_base_string_3_0,
		fn__bitmap__throw_bounds_error_3_0_i3);
MR_def_label(fn__bitmap__throw_bounds_error_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,0,1);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_string_const(" is out of bounds [0 - ", 23);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_string_const(": index ", 8);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	{
	MR_Word	Strs;
	MR_String	Str;
#define	MR_PROC_LABEL	mercury__fn__bitmap__throw_bounds_error_3_0
	Strs = MR_tempr1;
{
#line 710 "string.opt"
{
    MR_Word list = Strs;
    MR_Word tmp;
    size_t  len;

    /* Determine the total length of all strings */
    len = 0;
    while (!MR_list_is_empty(list)) {
        len += strlen((MR_String) MR_list_head(list));
        list = MR_list_tail(list);
    }

    /* Allocate enough word aligned memory for the string */
    MR_allocate_aligned_string_msg(Str, len, MR_PROC_LABEL);

    /* Copy the strings into the new memory */
    len = 0;
    list = Strs;
    while (!MR_list_is_empty(list)) {
        strcpy((MR_String) Str + len, (MR_String) MR_list_head(list));
        len += strlen((MR_String) MR_list_head(list));
        list = MR_list_tail(list);
    }

    Str[len] = '\0';
};}
#line 2978 "bitmap.c"
	MR_tempr1 = (MR_Word) Str;
#undef	MR_PROC_LABEL
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(bitmap, bitmap_error);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(exception__throw_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;

MR_BEGIN_MODULE(bitmap_module35)
	MR_init_entry1(fn__bitmap__shrink_without_copying_2_0);
	MR_init_label1(fn__bitmap__shrink_without_copying_2_0,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__bitmap__shrink_without_copying_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 0 > (MR_Integer) MR_r2)) {
		MR_GOTO_LAB(fn__bitmap__shrink_without_copying_2_0_i3);
	}
	{
	MR_BitmapPtr	BM;
	MR_Integer	NumBits;
#define	MR_PROC_LABEL	mercury__fn__bitmap__shrink_without_copying_2_0
	BM = (MR_BitmapPtr) MR_r1;
{
#line 1674 "bitmap.m"

    NumBits = BM->num_bits;
;}
#line 3020 "bitmap.c"
	MR_r3 = NumBits;
#undef	MR_PROC_LABEL
	}
	if (((MR_Integer) MR_r2 > (MR_Integer) MR_r3)) {
		MR_GOTO_LAB(fn__bitmap__shrink_without_copying_2_0_i3);
	}
	{
	MR_BitmapPtr	BM0;
	MR_Integer	NumBits;
	MR_BitmapPtr	BM;
#define	MR_PROC_LABEL	mercury__fn__bitmap__shrink_without_copying_2_0
	BM0 = (MR_BitmapPtr) MR_r1;
	NumBits = MR_r2;
{
#line 1708 "bitmap.m"

    BM = BM0;
    BM->num_bits = NumBits;
;}
#line 3040 "bitmap.c"
	MR_r1 = (MR_Word) BM;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
MR_def_label(fn__bitmap__shrink_without_copying_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r3 = (MR_Word) MR_string_const("bitmap.shrink_without_copying", 29);
	MR_np_tailcall_ent(fn__bitmap__throw_bounds_error_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bitmap_module36)
	MR_init_entry1(bitmap__byte_in_range_2_0);
	MR_init_label1(bitmap__byte_in_range_2_0,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__bitmap__byte_in_range_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = ((((MR_Integer) MR_r2 * (MR_Integer) 8) + (MR_Integer) 8) - (MR_Integer) 1);
	if (((MR_Integer) 0 > (MR_Integer) MR_r3)) {
		MR_GOTO_LAB(bitmap__byte_in_range_2_0_i1);
	}
	{
	MR_BitmapPtr	BM;
	MR_Integer	NumBits;
#define	MR_PROC_LABEL	mercury__bitmap__byte_in_range_2_0
	BM = (MR_BitmapPtr) MR_r1;
{
#line 1674 "bitmap.m"

    NumBits = BM->num_bits;
;}
#line 3084 "bitmap.c"
	MR_r1 = NumBits;
#undef	MR_PROC_LABEL
	}
	MR_r1 = ((MR_Integer) MR_r3 < (MR_Integer) MR_r1);
	MR_proceed();
MR_def_label(bitmap__byte_in_range_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bitmap_module37)
	MR_init_entry1(fn__bitmap__num_bytes_1_0);
	MR_init_label1(fn__bitmap__num_bytes_1_0,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__bitmap__num_bytes_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	{
	MR_BitmapPtr	BM;
	MR_Integer	NumBits;
#define	MR_PROC_LABEL	mercury__fn__bitmap__num_bytes_1_0
	BM = (MR_BitmapPtr) MR_r1;
{
#line 1674 "bitmap.m"

    NumBits = BM->num_bits;
;}
#line 3124 "bitmap.c"
	MR_tempr1 = NumBits;
#undef	MR_PROC_LABEL
	}
	MR_r3 = MR_tempr1;
	MR_r4 = ((MR_Integer) MR_tempr1 % (MR_Integer) 8);
	if (MR_INT_NE(MR_r4,0)) {
		MR_GOTO_LAB(fn__bitmap__num_bytes_1_0_i1);
	}
	MR_r2 = ((MR_Integer) MR_tempr1 / (MR_Integer) 8);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(fn__bitmap__num_bytes_1_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bitmap_module38)
	MR_init_entry1(fn__bitmap__det_num_bytes_1_0);
	MR_init_label1(fn__bitmap__det_num_bytes_1_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__bitmap__det_num_bytes_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	{
	MR_BitmapPtr	BM;
	MR_Integer	NumBits;
#define	MR_PROC_LABEL	mercury__fn__bitmap__det_num_bytes_1_0
	BM = (MR_BitmapPtr) MR_r1;
{
#line 1674 "bitmap.m"

    NumBits = BM->num_bits;
;}
#line 3171 "bitmap.c"
	MR_tempr1 = NumBits;
#undef	MR_PROC_LABEL
	}
	MR_r2 = MR_tempr1;
	MR_r3 = ((MR_Integer) MR_tempr1 % (MR_Integer) 8);
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(fn__bitmap__det_num_bytes_1_0_i2);
	}
	MR_r1 = ((MR_Integer) MR_tempr1 / (MR_Integer) 8);
	MR_proceed();
	}
MR_def_label(fn__bitmap__det_num_bytes_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(bitmap, bitmap_error);
	MR_r2 = (MR_Word) MR_string_const("bitmap.det_num_bytes: bitmap has a partial final byte", 53);
	MR_np_tailcall_ent(exception__throw_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bitmap_module39)
	MR_init_entry1(fn__bitmap__bitmask_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__bitmap__bitmask_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) 1 << ((MR_Integer) 7 - ((MR_Integer) MR_r1 % (MR_Integer) 8)));
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bitmap_module40)
	MR_init_entry1(bitmap__unsafe_is_clear_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__bitmap__unsafe_is_clear_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = ((MR_Integer) MR_r2 / (MR_Integer) 8);
	{
	MR_Integer	N;
	MR_BitmapPtr	BM;
	MR_Integer	Byte;
#define	MR_PROC_LABEL	mercury__bitmap__unsafe_is_clear_2_0
	N = MR_tempr1;
	BM = (MR_BitmapPtr) MR_r1;
{
#line 1747 "bitmap.m"

    Byte = (MR_Integer) BM->elements[N];
;}
#line 3239 "bitmap.c"
	MR_r1 = Byte;
#undef	MR_PROC_LABEL
	}
	MR_tempr1 = ((MR_Integer) MR_r1 & ((MR_Integer) 1 << ((MR_Integer) 7 - ((MR_Integer) MR_r2 % (MR_Integer) 8))));
	MR_r1 = ((MR_Integer) MR_tempr1 == (MR_Integer) 0);
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bitmap_module41)
	MR_init_entry1(bitmap__unsafe_is_set_2_0);
	MR_init_label2(bitmap__unsafe_is_set_2_0,4,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__bitmap__unsafe_is_set_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(bitmap__unsafe_is_clear_2_0,
		bitmap__unsafe_is_set_2_0_i4);
MR_def_label(bitmap__unsafe_is_set_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(bitmap__unsafe_is_set_2_0_i1);
	}
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(bitmap__unsafe_is_set_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bitmap_module42)
	MR_init_entry1(fn__bitmap__unsafe_bit_2_0);
	MR_init_label2(fn__bitmap__unsafe_bit_2_0,5,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__bitmap__unsafe_bit_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(bitmap__unsafe_is_clear_2_0,
		fn__bitmap__unsafe_bit_2_0_i5);
MR_def_label(fn__bitmap__unsafe_bit_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(fn__bitmap__unsafe_bit_2_0_i2);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(1);
MR_def_label(fn__bitmap__unsafe_bit_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;

MR_BEGIN_MODULE(bitmap_module43)
	MR_init_entry1(fn__bitmap__bit_2_0);
	MR_init_label3(fn__bitmap__bit_2_0,7,4,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__bitmap__bit_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 0 > (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(fn__bitmap__bit_2_0_i3);
	}
	{
	MR_BitmapPtr	BM;
	MR_Integer	NumBits;
#define	MR_PROC_LABEL	mercury__fn__bitmap__bit_2_0
	BM = (MR_BitmapPtr) MR_r2;
{
#line 1674 "bitmap.m"

    NumBits = BM->num_bits;
;}
#line 3355 "bitmap.c"
	MR_r3 = NumBits;
#undef	MR_PROC_LABEL
	}
	if (((MR_Integer) MR_r1 >= (MR_Integer) MR_r3)) {
		MR_GOTO_LAB(fn__bitmap__bit_2_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(bitmap__unsafe_is_clear_2_0,
		fn__bitmap__bit_2_0_i7);
MR_def_label(fn__bitmap__bit_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(fn__bitmap__bit_2_0_i4);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(fn__bitmap__bit_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(fn__bitmap__bit_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_BOOL_CTOR_ADDR;
	MR_r3 = (MR_Word) MR_string_const("bitmap.bit", 10);
	MR_np_tailcall_ent(fn__bitmap__throw_bounds_error_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bitmap_module44)
	MR_init_entry1(fn__bitmap__unsafe_set_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__bitmap__unsafe_set_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = ((MR_Integer) MR_r2 / (MR_Integer) 8);
	{
	MR_Integer	N;
	MR_BitmapPtr	BM;
	MR_Integer	Byte;
#define	MR_PROC_LABEL	mercury__fn__bitmap__unsafe_set_2_0
	N = MR_tempr1;
	BM = (MR_BitmapPtr) MR_r1;
{
#line 1747 "bitmap.m"

    Byte = (MR_Integer) BM->elements[N];
;}
#line 3421 "bitmap.c"
	MR_tempr1 = Byte;
#undef	MR_PROC_LABEL
	}
	MR_tempr4 = MR_r2;
	MR_tempr2 = ((MR_Integer) MR_tempr4 / (MR_Integer) 8);
	MR_tempr3 = ((MR_Integer) MR_tempr1 | ((MR_Integer) 1 << ((MR_Integer) 7 - ((MR_Integer) MR_tempr4 % (MR_Integer) 8))));
	{
	MR_Integer	N;
	MR_BitmapPtr	BM0;
	MR_Integer	Byte;
	MR_BitmapPtr	BM;
#define	MR_PROC_LABEL	mercury__fn__bitmap__unsafe_set_2_0
	N = MR_tempr2;
	BM0 = (MR_BitmapPtr) MR_r1;
	Byte = MR_tempr3;
{
#line 1788 "bitmap.m"

    BM = BM0;
    BM->elements[N] = (MR_uint_least8_t) Byte;
;}
#line 3443 "bitmap.c"
	MR_r1 = (MR_Word) BM;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bitmap_module45)
	MR_init_entry1(fn__bitmap__unsafe_clear_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__bitmap__unsafe_clear_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = ((MR_Integer) MR_r2 / (MR_Integer) 8);
	{
	MR_Integer	N;
	MR_BitmapPtr	BM;
	MR_Integer	Byte;
#define	MR_PROC_LABEL	mercury__fn__bitmap__unsafe_clear_2_0
	N = MR_tempr1;
	BM = (MR_BitmapPtr) MR_r1;
{
#line 1747 "bitmap.m"

    Byte = (MR_Integer) BM->elements[N];
;}
#line 3481 "bitmap.c"
	MR_tempr1 = Byte;
#undef	MR_PROC_LABEL
	}
	MR_tempr4 = MR_r2;
	MR_tempr2 = ((MR_Integer) MR_tempr4 / (MR_Integer) 8);
	MR_tempr3 = ((MR_Integer) MR_tempr1 & ~(((MR_Integer) 1 << ((MR_Integer) 7 - ((MR_Integer) MR_tempr4 % (MR_Integer) 8)))));
	{
	MR_Integer	N;
	MR_BitmapPtr	BM0;
	MR_Integer	Byte;
	MR_BitmapPtr	BM;
#define	MR_PROC_LABEL	mercury__fn__bitmap__unsafe_clear_2_0
	N = MR_tempr2;
	BM0 = (MR_BitmapPtr) MR_r1;
	Byte = MR_tempr3;
{
#line 1788 "bitmap.m"

    BM = BM0;
    BM->elements[N] = (MR_uint_least8_t) Byte;
;}
#line 3503 "bitmap.c"
	MR_r1 = (MR_Word) BM;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bitmap_module46)
	MR_init_entry1(fn__f_98_105_116_109_97_112_95_95_117_110_115_97_102_101_95_98_105_116_32_58_61_3_0);
	MR_init_label1(fn__f_98_105_116_109_97_112_95_95_117_110_115_97_102_101_95_98_105_116_32_58_61_3_0,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__f_98_105_116_109_97_112_95_95_117_110_115_97_102_101_95_98_105_116_32_58_61_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(fn__f_98_105_116_109_97_112_95_95_117_110_115_97_102_101_95_98_105_116_32_58_61_3_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_np_tailcall_ent(fn__bitmap__unsafe_clear_2_0);
	}
MR_def_label(fn__f_98_105_116_109_97_112_95_95_117_110_115_97_102_101_95_98_105_116_32_58_61_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_np_tailcall_ent(fn__bitmap__unsafe_set_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bitmap_module47)
	MR_init_entry1(fn__f_98_105_116_109_97_112_95_95_98_105_116_32_58_61_3_0);
	MR_init_label2(fn__f_98_105_116_109_97_112_95_95_98_105_116_32_58_61_3_0,5,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__f_98_105_116_109_97_112_95_95_98_105_116_32_58_61_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 0 > (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(fn__f_98_105_116_109_97_112_95_95_98_105_116_32_58_61_3_0_i3);
	}
	{
	MR_BitmapPtr	BM;
	MR_Integer	NumBits;
#define	MR_PROC_LABEL	mercury__fn__f_98_105_116_109_97_112_95_95_98_105_116_32_58_61_3_0
	BM = (MR_BitmapPtr) MR_r2;
{
#line 1674 "bitmap.m"

    NumBits = BM->num_bits;
;}
#line 3577 "bitmap.c"
	MR_r4 = NumBits;
#undef	MR_PROC_LABEL
	}
	if (((MR_Integer) MR_r1 >= (MR_Integer) MR_r4)) {
		MR_GOTO_LAB(fn__f_98_105_116_109_97_112_95_95_98_105_116_32_58_61_3_0_i3);
	}
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(fn__f_98_105_116_109_97_112_95_95_98_105_116_32_58_61_3_0_i5);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_np_tailcall_ent(fn__bitmap__unsafe_clear_2_0);
	}
MR_def_label(fn__f_98_105_116_109_97_112_95_95_98_105_116_32_58_61_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_np_tailcall_ent(fn__bitmap__unsafe_set_2_0);
	}
MR_def_label(fn__f_98_105_116_109_97_112_95_95_98_105_116_32_58_61_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(bitmap, bitmap);
	MR_r3 = (MR_Word) MR_string_const("bitmap.\'bit :=\'", 15);
	MR_np_tailcall_ent(fn__bitmap__throw_bounds_error_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bitmap_module48)
	MR_init_entry1(fn__bitmap__bits_3_0);
	MR_init_label4(fn__bitmap__bits_3_0,3,8,7,6)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__bitmap__bits_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_LT(MR_r1,0)) {
		MR_GOTO_LAB(fn__bitmap__bits_3_0_i3);
	}
	MR_r6 = (((MR_Integer) MR_r1 + (MR_Integer) MR_r2) - (MR_Integer) 1);
	if (((MR_Integer) 0 > (MR_Integer) MR_r6)) {
		MR_GOTO_LAB(fn__bitmap__bits_3_0_i3);
	}
	{
	MR_BitmapPtr	BM;
	MR_Integer	NumBits;
#define	MR_PROC_LABEL	mercury__fn__bitmap__bits_3_0
	BM = (MR_BitmapPtr) MR_r3;
{
#line 1674 "bitmap.m"

    NumBits = BM->num_bits;
;}
#line 3644 "bitmap.c"
	MR_r7 = NumBits;
#undef	MR_PROC_LABEL
	}
	if (((MR_Integer) MR_r6 >= (MR_Integer) MR_r7)) {
		MR_GOTO_LAB(fn__bitmap__bits_3_0_i3);
	}
	if (MR_INT_LT(MR_r2,0)) {
		MR_GOTO_LAB(fn__bitmap__bits_3_0_i3);
	}
	{
	MR_Integer	Bits;
#define	MR_PROC_LABEL	mercury__fn__bitmap__bits_3_0
{
#line 144 "int.opt"

    Bits = ML_BITS_PER_INT;
;}
#line 3662 "bitmap.c"
	MR_r6 = Bits;
#undef	MR_PROC_LABEL
	}
	if (((MR_Integer) MR_r2 > (MR_Integer) MR_r6)) {
		MR_GOTO_LAB(fn__bitmap__bits_3_0_i3);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r1;
	MR_r1 = ((MR_Integer) MR_r1 / (MR_Integer) 8);
	MR_r4 = MR_r3;
	MR_r3 = MR_r2;
	MR_r2 = ((MR_Integer) MR_sv(2) % (MR_Integer) 8);
	MR_r5 = (MR_Integer) 0;
	MR_decr_sp(4);
	MR_np_tailcall_ent(bitmap__extract_bits_from_bytes_6_0);
MR_def_label(fn__bitmap__bits_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_GE(MR_r2,0)) {
		MR_GOTO_LAB(fn__bitmap__bits_3_0_i8);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r1;
	MR_GOTO_LAB(fn__bitmap__bits_3_0_i7);
MR_def_label(fn__bitmap__bits_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Integer	Bits;
#define	MR_PROC_LABEL	mercury__fn__bitmap__bits_3_0
{
#line 144 "int.opt"

    Bits = ML_BITS_PER_INT;
;}
#line 3699 "bitmap.c"
	MR_r4 = Bits;
#undef	MR_PROC_LABEL
	}
	if (((MR_Integer) MR_r2 <= (MR_Integer) MR_r4)) {
		MR_GOTO_LAB(fn__bitmap__bits_3_0_i6);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r1;
MR_def_label(fn__bitmap__bits_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(bitmap, bitmap_error);
	MR_r2 = (MR_Word) MR_string_const("bitmap.bits: number of bits must be between 0 and \140int.bits_per_int\'.", 69);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(exception__throw_1_0);
MR_def_label(fn__bitmap__bits_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_r3;
	MR_r3 = (MR_Word) MR_string_const("bitmap.bits", 11);
	MR_np_tailcall_ent(fn__bitmap__throw_bounds_error_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bitmap_module49)
	MR_init_entry1(fn__f_98_105_116_109_97_112_95_95_98_105_116_115_32_58_61_4_0);
	MR_init_label5(fn__f_98_105_116_109_97_112_95_95_98_105_116_115_32_58_61_4_0,6,3,12,11,10)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__f_98_105_116_109_97_112_95_95_98_105_116_115_32_58_61_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_LT(MR_r1,0)) {
		MR_GOTO_LAB(fn__f_98_105_116_109_97_112_95_95_98_105_116_115_32_58_61_4_0_i3);
	}
	if (MR_INT_LT(MR_r2,0)) {
		MR_GOTO_LAB(fn__f_98_105_116_109_97_112_95_95_98_105_116_115_32_58_61_4_0_i6);
	}
	{
	MR_Integer	Bits;
#define	MR_PROC_LABEL	mercury__fn__f_98_105_116_109_97_112_95_95_98_105_116_115_32_58_61_4_0
{
#line 144 "int.opt"

    Bits = ML_BITS_PER_INT;
;}
#line 3756 "bitmap.c"
	MR_r5 = Bits;
#undef	MR_PROC_LABEL
	}
	if (((MR_Integer) MR_r2 > (MR_Integer) MR_r5)) {
		MR_GOTO_LAB(fn__f_98_105_116_109_97_112_95_95_98_105_116_115_32_58_61_4_0_i6);
	}
	MR_r5 = (((MR_Integer) MR_r1 + (MR_Integer) MR_r2) - (MR_Integer) 1);
	if (((MR_Integer) 0 > (MR_Integer) MR_r5)) {
		MR_GOTO_LAB(fn__f_98_105_116_109_97_112_95_95_98_105_116_115_32_58_61_4_0_i6);
	}
	{
	MR_BitmapPtr	BM;
	MR_Integer	NumBits;
#define	MR_PROC_LABEL	mercury__fn__f_98_105_116_109_97_112_95_95_98_105_116_115_32_58_61_4_0
	BM = (MR_BitmapPtr) MR_r3;
{
#line 1674 "bitmap.m"

    NumBits = BM->num_bits;
;}
#line 3777 "bitmap.c"
	MR_r6 = NumBits;
#undef	MR_PROC_LABEL
	}
	if (((MR_Integer) MR_r5 >= (MR_Integer) MR_r6)) {
		MR_GOTO_LAB(fn__f_98_105_116_109_97_112_95_95_98_105_116_115_32_58_61_4_0_i6);
	}
	MR_np_tailcall_ent(fn__f_98_105_116_109_97_112_95_95_117_110_115_97_102_101_95_98_105_116_115_32_58_61_4_0);
MR_def_label(fn__f_98_105_116_109_97_112_95_95_98_105_116_115_32_58_61_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(fn__f_98_105_116_109_97_112_95_95_98_105_116_115_32_58_61_4_0_i3);
	}
	if (((MR_Integer) 0 > (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(fn__f_98_105_116_109_97_112_95_95_98_105_116_115_32_58_61_4_0_i3);
	}
	{
	MR_BitmapPtr	BM;
	MR_Integer	NumBits;
#define	MR_PROC_LABEL	mercury__fn__f_98_105_116_109_97_112_95_95_98_105_116_115_32_58_61_4_0
	BM = (MR_BitmapPtr) MR_r3;
{
#line 1674 "bitmap.m"

    NumBits = BM->num_bits;
;}
#line 3803 "bitmap.c"
	MR_r5 = NumBits;
#undef	MR_PROC_LABEL
	}
	if (((MR_Integer) MR_r1 >= (MR_Integer) MR_r5)) {
		MR_GOTO_LAB(fn__f_98_105_116_109_97_112_95_95_98_105_116_115_32_58_61_4_0_i3);
	}
	MR_np_tailcall_ent(fn__f_98_105_116_109_97_112_95_95_117_110_115_97_102_101_95_98_105_116_115_32_58_61_4_0);
MR_def_label(fn__f_98_105_116_109_97_112_95_95_98_105_116_115_32_58_61_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_GE(MR_r2,0)) {
		MR_GOTO_LAB(fn__f_98_105_116_109_97_112_95_95_98_105_116_115_32_58_61_4_0_i12);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r1;
	MR_GOTO_LAB(fn__f_98_105_116_109_97_112_95_95_98_105_116_115_32_58_61_4_0_i11);
MR_def_label(fn__f_98_105_116_109_97_112_95_95_98_105_116_115_32_58_61_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Integer	Bits;
#define	MR_PROC_LABEL	mercury__fn__f_98_105_116_109_97_112_95_95_98_105_116_115_32_58_61_4_0
{
#line 144 "int.opt"

    Bits = ML_BITS_PER_INT;
;}
#line 3831 "bitmap.c"
	MR_r4 = Bits;
#undef	MR_PROC_LABEL
	}
	if (((MR_Integer) MR_r2 <= (MR_Integer) MR_r4)) {
		MR_GOTO_LAB(fn__f_98_105_116_109_97_112_95_95_98_105_116_115_32_58_61_4_0_i10);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r1;
MR_def_label(fn__f_98_105_116_109_97_112_95_95_98_105_116_115_32_58_61_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(bitmap, bitmap_error);
	MR_r2 = (MR_Word) MR_string_const("bitmap.\'bits :=\': number of bits must be between 0 and \140int.bits_per_int\'.", 74);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(exception__throw_1_0);
MR_def_label(fn__f_98_105_116_109_97_112_95_95_98_105_116_115_32_58_61_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(bitmap, bitmap);
	MR_r2 = MR_r3;
	MR_r3 = (MR_Word) MR_string_const("bitmap.\'bits :=\'", 16);
	MR_np_tailcall_ent(fn__bitmap__throw_bounds_error_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bitmap_module50)
	MR_init_entry1(fn__bitmap__byte_2_0);
	MR_init_label1(fn__bitmap__byte_2_0,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__bitmap__byte_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_LT(MR_r1,0)) {
		MR_GOTO_LAB(fn__bitmap__byte_2_0_i3);
	}
	MR_r3 = ((((MR_Integer) MR_r1 * (MR_Integer) 8) + (MR_Integer) 8) - (MR_Integer) 1);
	if (((MR_Integer) 0 > (MR_Integer) MR_r3)) {
		MR_GOTO_LAB(fn__bitmap__byte_2_0_i3);
	}
	{
	MR_BitmapPtr	BM;
	MR_Integer	NumBits;
#define	MR_PROC_LABEL	mercury__fn__bitmap__byte_2_0
	BM = (MR_BitmapPtr) MR_r2;
{
#line 1674 "bitmap.m"

    NumBits = BM->num_bits;
;}
#line 3891 "bitmap.c"
	MR_r4 = NumBits;
#undef	MR_PROC_LABEL
	}
	if (((MR_Integer) MR_r3 >= (MR_Integer) MR_r4)) {
		MR_GOTO_LAB(fn__bitmap__byte_2_0_i3);
	}
	{
	MR_Integer	N;
	MR_BitmapPtr	BM;
	MR_Integer	Byte;
#define	MR_PROC_LABEL	mercury__fn__bitmap__byte_2_0
	N = MR_r1;
	BM = (MR_BitmapPtr) MR_r2;
{
#line 1747 "bitmap.m"

    Byte = (MR_Integer) BM->elements[N];
;}
#line 3910 "bitmap.c"
	MR_r1 = Byte;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
MR_def_label(fn__bitmap__byte_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r3 = (MR_Word) MR_string_const("bitmap.byte", 11);
	MR_np_tailcall_ent(fn__bitmap__throw_bounds_error_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bitmap_module51)
	MR_init_entry1(fn__f_98_105_116_109_97_112_95_95_98_121_116_101_32_58_61_3_0);
	MR_init_label1(fn__f_98_105_116_109_97_112_95_95_98_121_116_101_32_58_61_3_0,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__f_98_105_116_109_97_112_95_95_98_121_116_101_32_58_61_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_LT(MR_r1,0)) {
		MR_GOTO_LAB(fn__f_98_105_116_109_97_112_95_95_98_121_116_101_32_58_61_3_0_i3);
	}
	MR_r4 = ((((MR_Integer) MR_r1 * (MR_Integer) 8) + (MR_Integer) 8) - (MR_Integer) 1);
	if (((MR_Integer) 0 > (MR_Integer) MR_r4)) {
		MR_GOTO_LAB(fn__f_98_105_116_109_97_112_95_95_98_121_116_101_32_58_61_3_0_i3);
	}
	{
	MR_BitmapPtr	BM;
	MR_Integer	NumBits;
#define	MR_PROC_LABEL	mercury__fn__f_98_105_116_109_97_112_95_95_98_121_116_101_32_58_61_3_0
	BM = (MR_BitmapPtr) MR_r2;
{
#line 1674 "bitmap.m"

    NumBits = BM->num_bits;
;}
#line 3956 "bitmap.c"
	MR_r5 = NumBits;
#undef	MR_PROC_LABEL
	}
	if (((MR_Integer) MR_r4 >= (MR_Integer) MR_r5)) {
		MR_GOTO_LAB(fn__f_98_105_116_109_97_112_95_95_98_121_116_101_32_58_61_3_0_i3);
	}
	{
	MR_Integer	N;
	MR_BitmapPtr	BM0;
	MR_Integer	Byte;
	MR_BitmapPtr	BM;
#define	MR_PROC_LABEL	mercury__fn__f_98_105_116_109_97_112_95_95_98_121_116_101_32_58_61_3_0
	N = MR_r1;
	BM0 = (MR_BitmapPtr) MR_r2;
	Byte = MR_r3;
{
#line 1788 "bitmap.m"

    BM = BM0;
    BM->elements[N] = (MR_uint_least8_t) Byte;
;}
#line 3978 "bitmap.c"
	MR_r1 = (MR_Word) BM;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
MR_def_label(fn__f_98_105_116_109_97_112_95_95_98_121_116_101_32_58_61_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(bitmap, bitmap);
	MR_r3 = (MR_Word) MR_string_const("bitmap.\'byte :=\'", 16);
	MR_np_tailcall_ent(fn__bitmap__throw_bounds_error_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bitmap_module52)
	MR_init_entry1(fn__bitmap__slice_3_0);
	MR_init_label3(fn__bitmap__slice_3_0,6,4,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__bitmap__slice_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_LT(MR_r3,0)) {
		MR_GOTO_LAB(fn__bitmap__slice_3_0_i3);
	}
	if (MR_INT_LT(MR_r2,0)) {
		MR_GOTO_LAB(fn__bitmap__slice_3_0_i3);
	}
	MR_r4 = (((MR_Integer) MR_r2 + (MR_Integer) MR_r3) - (MR_Integer) 1);
	if (((MR_Integer) 0 > (MR_Integer) MR_r4)) {
		MR_GOTO_LAB(fn__bitmap__slice_3_0_i6);
	}
	{
	MR_BitmapPtr	BM;
	MR_Integer	NumBits;
#define	MR_PROC_LABEL	mercury__fn__bitmap__slice_3_0
	BM = (MR_BitmapPtr) MR_r1;
{
#line 1674 "bitmap.m"

    NumBits = BM->num_bits;
;}
#line 4027 "bitmap.c"
	MR_r5 = NumBits;
#undef	MR_PROC_LABEL
	}
	if (((MR_Integer) MR_r4 >= (MR_Integer) MR_r5)) {
		MR_GOTO_LAB(fn__bitmap__slice_3_0_i6);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_GOTO_LAB(fn__bitmap__slice_3_0_i4);
MR_def_label(fn__bitmap__slice_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(fn__bitmap__slice_3_0_i3);
	}
	if (((MR_Integer) 0 > (MR_Integer) MR_r2)) {
		MR_GOTO_LAB(fn__bitmap__slice_3_0_i3);
	}
	{
	MR_BitmapPtr	BM;
	MR_Integer	NumBits;
#define	MR_PROC_LABEL	mercury__fn__bitmap__slice_3_0
	BM = (MR_BitmapPtr) MR_r1;
{
#line 1674 "bitmap.m"

    NumBits = BM->num_bits;
;}
#line 4058 "bitmap.c"
	MR_r4 = NumBits;
#undef	MR_PROC_LABEL
	}
	if (((MR_Integer) MR_r2 >= (MR_Integer) MR_r4)) {
		MR_GOTO_LAB(fn__bitmap__slice_3_0_i3);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
MR_def_label(fn__bitmap__slice_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_r1 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(3);
	MR_decr_sp_and_return(4);
	}
MR_def_label(fn__bitmap__slice_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r3;
	MR_r3 = MR_r2;
	MR_r2 = (MR_Word) MR_string_const("bitmap.slice", 12);
	MR_np_tailcall_ent(bitmap__throw_bounds_error_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bitmap_module53)
	MR_init_entry1(fn__bitmap__byte_slice_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__bitmap__byte_slice_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = ((MR_Integer) MR_r2 * (MR_Integer) 8);
	MR_r3 = ((MR_Integer) MR_r3 * (MR_Integer) 8);
	MR_np_tailcall_ent(fn__bitmap__slice_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bitmap_module54)
	MR_init_entry1(fn__bitmap__slice_bitmap_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__bitmap__slice_bitmap_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r1, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bitmap_module55)
	MR_init_entry1(fn__bitmap__slice_start_bit_index_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__bitmap__slice_start_bit_index_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r1, 1);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bitmap_module56)
	MR_init_entry1(fn__bitmap__slice_num_bits_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__bitmap__slice_num_bits_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r1, 2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(string__append_3_2);

MR_BEGIN_MODULE(bitmap_module57)
	MR_init_entry1(fn__bitmap__quotient_bits_per_byte_with_rem_zero_2_0);
	MR_init_label2(fn__bitmap__quotient_bits_per_byte_with_rem_zero_2_0,14,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__bitmap__quotient_bits_per_byte_with_rem_zero_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r2;
	MR_r3 = ((MR_Integer) MR_tempr2 / (MR_Integer) 8);
	MR_tempr1 = ((MR_Integer) MR_tempr2 % (MR_Integer) 8);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(fn__bitmap__quotient_bits_per_byte_with_rem_zero_2_0_i14);
	}
	MR_r1 = MR_r3;
	MR_proceed();
	}
MR_def_label(fn__bitmap__quotient_bits_per_byte_with_rem_zero_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_r2 = (MR_Word) MR_string_const(": not a byte slice.", 19);
	MR_np_call_localret_ent(string__append_3_2,
		fn__bitmap__quotient_bits_per_byte_with_rem_zero_2_0_i4);
MR_def_label(fn__bitmap__quotient_bits_per_byte_with_rem_zero_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(bitmap, bitmap_error);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(exception__throw_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bitmap_module58)
	MR_init_entry1(fn__bitmap__slice_start_byte_index_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__bitmap__slice_start_byte_index_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("bitmap.slice_start_byte_index", 29);
	MR_r2 = MR_ctfield(0, MR_tempr1, 1);
	MR_np_tailcall_ent(fn__bitmap__quotient_bits_per_byte_with_rem_zero_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bitmap_module59)
	MR_init_entry1(fn__bitmap__slice_num_bytes_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__bitmap__slice_num_bytes_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("bitmap.slice_num_bytes", 22);
	MR_r2 = MR_ctfield(0, MR_tempr1, 2);
	MR_np_tailcall_ent(fn__bitmap__quotient_bits_per_byte_with_rem_zero_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bitmap_module60)
	MR_init_entry1(fn__bitmap__unsafe_flip_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__bitmap__unsafe_flip_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = ((MR_Integer) MR_r2 / (MR_Integer) 8);
	{
	MR_Integer	N;
	MR_BitmapPtr	BM;
	MR_Integer	Byte;
#define	MR_PROC_LABEL	mercury__fn__bitmap__unsafe_flip_2_0
	N = MR_tempr1;
	BM = (MR_BitmapPtr) MR_r1;
{
#line 1747 "bitmap.m"

    Byte = (MR_Integer) BM->elements[N];
;}
#line 4289 "bitmap.c"
	MR_tempr1 = Byte;
#undef	MR_PROC_LABEL
	}
	MR_tempr4 = MR_r2;
	MR_tempr2 = ((MR_Integer) MR_tempr4 / (MR_Integer) 8);
	MR_tempr3 = ((MR_Integer) MR_tempr1 ^ ((MR_Integer) 1 << ((MR_Integer) 7 - ((MR_Integer) MR_tempr4 % (MR_Integer) 8))));
	{
	MR_Integer	N;
	MR_BitmapPtr	BM0;
	MR_Integer	Byte;
	MR_BitmapPtr	BM;
#define	MR_PROC_LABEL	mercury__fn__bitmap__unsafe_flip_2_0
	N = MR_tempr2;
	BM0 = (MR_BitmapPtr) MR_r1;
	Byte = MR_tempr3;
{
#line 1788 "bitmap.m"

    BM = BM0;
    BM->elements[N] = (MR_uint_least8_t) Byte;
;}
#line 4311 "bitmap.c"
	MR_r1 = (MR_Word) BM;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bitmap_module61)
	MR_init_entry1(fn__bitmap__flip_2_0);
	MR_init_label1(fn__bitmap__flip_2_0,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__bitmap__flip_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 0 > (MR_Integer) MR_r2)) {
		MR_GOTO_LAB(fn__bitmap__flip_2_0_i3);
	}
	{
	MR_BitmapPtr	BM;
	MR_Integer	NumBits;
#define	MR_PROC_LABEL	mercury__fn__bitmap__flip_2_0
	BM = (MR_BitmapPtr) MR_r1;
{
#line 1674 "bitmap.m"

    NumBits = BM->num_bits;
;}
#line 4348 "bitmap.c"
	MR_r3 = NumBits;
#undef	MR_PROC_LABEL
	}
	if (((MR_Integer) MR_r2 >= (MR_Integer) MR_r3)) {
		MR_GOTO_LAB(fn__bitmap__flip_2_0_i3);
	}
	MR_np_tailcall_ent(fn__bitmap__unsafe_flip_2_0);
MR_def_label(fn__bitmap__flip_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(bitmap, bitmap);
	MR_r3 = (MR_Word) MR_string_const("bitmap.flip", 11);
	MR_np_tailcall_ent(fn__bitmap__throw_bounds_error_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bitmap_module62)
	MR_init_entry1(fn__bitmap__complement_2_2_0);
	MR_init_label1(fn__bitmap__complement_2_2_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__bitmap__complement_2_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_GE(MR_r1,0)) {
		MR_GOTO_LAB(fn__bitmap__complement_2_2_0_i2);
	}
	MR_r1 = MR_r2;
	MR_proceed();
MR_def_label(fn__bitmap__complement_2_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_Integer	N;
	MR_BitmapPtr	BM;
	MR_Integer	Byte;
#define	MR_PROC_LABEL	mercury__fn__bitmap__complement_2_2_0
	N = MR_r1;
	BM = (MR_BitmapPtr) MR_r2;
{
#line 1747 "bitmap.m"

    Byte = (MR_Integer) BM->elements[N];
;}
#line 4402 "bitmap.c"
	MR_tempr1 = Byte;
#undef	MR_PROC_LABEL
	}
	MR_tempr2 = ~((MR_Integer) MR_tempr1);
	{
	MR_Integer	N;
	MR_BitmapPtr	BM0;
	MR_Integer	Byte;
	MR_BitmapPtr	BM;
#define	MR_PROC_LABEL	mercury__fn__bitmap__complement_2_2_0
	N = MR_r1;
	BM0 = (MR_BitmapPtr) MR_r2;
	Byte = MR_tempr2;
{
#line 1788 "bitmap.m"

    BM = BM0;
    BM->elements[N] = (MR_uint_least8_t) Byte;
;}
#line 4422 "bitmap.c"
	MR_r2 = (MR_Word) BM;
#undef	MR_PROC_LABEL
	}
	MR_r1 = ((MR_Integer) MR_r1 - (MR_Integer) 1);
	MR_np_localtailcall(fn__bitmap__complement_2_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bitmap_module63)
	MR_init_entry1(fn__bitmap__complement_1_0);
	MR_init_label1(fn__bitmap__complement_1_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__bitmap__complement_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	{
	MR_BitmapPtr	BM;
	MR_Integer	NumBits;
#define	MR_PROC_LABEL	mercury__fn__bitmap__complement_1_0
	BM = (MR_BitmapPtr) MR_r1;
{
#line 1674 "bitmap.m"

    NumBits = BM->num_bits;
;}
#line 4461 "bitmap.c"
	MR_tempr1 = NumBits;
#undef	MR_PROC_LABEL
	}
	MR_r2 = MR_r1;
	MR_r1 = (((MR_Integer) MR_tempr1 - (MR_Integer) 1) / (MR_Integer) 8);
	}
	MR_np_call_localret_ent(fn__bitmap__complement_2_2_0,
		fn__bitmap__complement_1_0_i2);
MR_def_label(fn__bitmap__complement_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	{
	MR_BitmapPtr	BM;
	MR_Integer	NumBits;
#define	MR_PROC_LABEL	mercury__fn__bitmap__complement_1_0
	BM = (MR_BitmapPtr) MR_r1;
{
#line 1674 "bitmap.m"

    NumBits = BM->num_bits;
;}
#line 4484 "bitmap.c"
	MR_tempr1 = NumBits;
#undef	MR_PROC_LABEL
	}
	MR_r2 = ((MR_Integer) MR_tempr1 - (MR_Integer) 1);
	MR_r3 = (MR_Integer) 0;
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(fn__bitmap__set_trailing_bits_in_byte_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(mercury__do_call_closure_2);

MR_BEGIN_MODULE(bitmap_module64)
	MR_init_entry1(fn__bitmap__zip2_4_0);
	MR_init_label3(fn__bitmap__zip2_4_0,11,3,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__bitmap__zip2_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
MR_def_label(fn__bitmap__zip2_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_LT(MR_r1,0)) {
		MR_GOTO_LAB(fn__bitmap__zip2_4_0_i2);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	{
	MR_Integer	N;
	MR_BitmapPtr	BM;
	MR_Integer	Byte;
#define	MR_PROC_LABEL	mercury__fn__bitmap__zip2_4_0
	N = MR_r1;
	BM = (MR_BitmapPtr) MR_r3;
{
#line 1747 "bitmap.m"

    Byte = (MR_Integer) BM->elements[N];
;}
#line 4534 "bitmap.c"
	MR_tempr1 = Byte;
#undef	MR_PROC_LABEL
	}
	{
	MR_Integer	N;
	MR_BitmapPtr	BM;
	MR_Integer	Byte;
#define	MR_PROC_LABEL	mercury__fn__bitmap__zip2_4_0
	N = MR_r1;
	BM = (MR_BitmapPtr) MR_r4;
{
#line 1747 "bitmap.m"

    Byte = (MR_Integer) BM->elements[N];
;}
#line 4550 "bitmap.c"
	MR_tempr2 = Byte;
#undef	MR_PROC_LABEL
	}
	MR_tempr3 = MR_r1;
	MR_sv(1) = MR_tempr3;
	MR_tempr4 = MR_r2;
	MR_sv(2) = MR_tempr4;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = ((MR_Integer) MR_tempr3 - (MR_Integer) 1);
	MR_r1 = MR_tempr4;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(fn__bitmap__zip2_4_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__fn__bitmap__zip2_4_0_i3);
MR_def_label(fn__bitmap__zip2_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Integer	N;
	MR_BitmapPtr	BM0;
	MR_Integer	Byte;
	MR_BitmapPtr	BM;
#define	MR_PROC_LABEL	mercury__fn__bitmap__zip2_4_0
	N = MR_sv(1);
	BM0 = (MR_BitmapPtr) MR_sv(4);
	Byte = MR_r1;
{
#line 1788 "bitmap.m"

    BM = BM0;
    BM->elements[N] = (MR_uint_least8_t) Byte;
;}
#line 4585 "bitmap.c"
	MR_r4 = (MR_Word) BM;
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(fn__bitmap__zip2_4_0_i11);
MR_def_label(fn__bitmap__zip2_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r4;
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bitmap_module65)
	MR_init_entry1(fn__bitmap__zip_3_0);
	MR_init_label1(fn__bitmap__zip_3_0,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__bitmap__zip_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_BitmapPtr	BM;
	MR_Integer	NumBits;
#define	MR_PROC_LABEL	mercury__fn__bitmap__zip_3_0
	BM = (MR_BitmapPtr) MR_r3;
{
#line 1674 "bitmap.m"

    NumBits = BM->num_bits;
;}
#line 4626 "bitmap.c"
	MR_r4 = NumBits;
#undef	MR_PROC_LABEL
	}
	if (MR_INT_NE(MR_r4,0)) {
		MR_GOTO_LAB(fn__bitmap__zip_3_0_i3);
	}
	MR_r1 = MR_r3;
	MR_proceed();
MR_def_label(fn__bitmap__zip_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	{
	MR_BitmapPtr	BM;
	MR_Integer	NumBits;
#define	MR_PROC_LABEL	mercury__fn__bitmap__zip_3_0
	BM = (MR_BitmapPtr) MR_r3;
{
#line 1674 "bitmap.m"

    NumBits = BM->num_bits;
;}
#line 4649 "bitmap.c"
	MR_tempr1 = NumBits;
#undef	MR_PROC_LABEL
	}
	MR_r4 = MR_r3;
	MR_r3 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = (((MR_Integer) MR_tempr1 - (MR_Integer) 1) / (MR_Integer) 8);
	MR_np_tailcall_ent(fn__bitmap__zip2_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bitmap_module66)
	MR_init_entry1(fn__bitmap__union_2_0);
	MR_init_label2(fn__bitmap__union_2_0,4,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__bitmap__union_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_BitmapPtr	BM;
	MR_Integer	NumBits;
#define	MR_PROC_LABEL	mercury__fn__bitmap__union_2_0
	BM = (MR_BitmapPtr) MR_r1;
{
#line 1674 "bitmap.m"

    NumBits = BM->num_bits;
;}
#line 4687 "bitmap.c"
	MR_r3 = NumBits;
#undef	MR_PROC_LABEL
	}
	{
	MR_BitmapPtr	BM;
	MR_Integer	NumBits;
#define	MR_PROC_LABEL	mercury__fn__bitmap__union_2_0
	BM = (MR_BitmapPtr) MR_r2;
{
#line 1674 "bitmap.m"

    NumBits = BM->num_bits;
;}
#line 4701 "bitmap.c"
	MR_r4 = NumBits;
#undef	MR_PROC_LABEL
	}
	if ((MR_r3 != MR_r4)) {
		MR_GOTO_LAB(fn__bitmap__union_2_0_i2);
	}
	{
	MR_BitmapPtr	BM;
	MR_Integer	NumBits;
#define	MR_PROC_LABEL	mercury__fn__bitmap__union_2_0
	BM = (MR_BitmapPtr) MR_r2;
{
#line 1674 "bitmap.m"

    NumBits = BM->num_bits;
;}
#line 4718 "bitmap.c"
	MR_r3 = NumBits;
#undef	MR_PROC_LABEL
	}
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(fn__bitmap__union_2_0_i4);
	}
	MR_r1 = MR_r2;
	MR_proceed();
MR_def_label(fn__bitmap__union_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	{
	MR_BitmapPtr	BM;
	MR_Integer	NumBits;
#define	MR_PROC_LABEL	mercury__fn__bitmap__union_2_0
	BM = (MR_BitmapPtr) MR_r2;
{
#line 1674 "bitmap.m"

    NumBits = BM->num_bits;
;}
#line 4741 "bitmap.c"
	MR_tempr1 = NumBits;
#undef	MR_PROC_LABEL
	}
	MR_r3 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = (((MR_Integer) MR_tempr1 - (MR_Integer) 1) / (MR_Integer) 8);
	MR_np_tailcall_ent(fn__bitmap__zip2__ho8_4_0);
	}
MR_def_label(fn__bitmap__union_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(bitmap, bitmap_error);
	MR_r2 = (MR_Word) MR_string_const("bitmap.union: bitmaps not the same size", 39);
	MR_np_tailcall_ent(exception__throw_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bitmap_module67)
	MR_init_entry1(fn__bitmap__intersect_2_0);
	MR_init_label2(fn__bitmap__intersect_2_0,4,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__bitmap__intersect_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_BitmapPtr	BM;
	MR_Integer	NumBits;
#define	MR_PROC_LABEL	mercury__fn__bitmap__intersect_2_0
	BM = (MR_BitmapPtr) MR_r1;
{
#line 1674 "bitmap.m"

    NumBits = BM->num_bits;
;}
#line 4783 "bitmap.c"
	MR_r3 = NumBits;
#undef	MR_PROC_LABEL
	}
	{
	MR_BitmapPtr	BM;
	MR_Integer	NumBits;
#define	MR_PROC_LABEL	mercury__fn__bitmap__intersect_2_0
	BM = (MR_BitmapPtr) MR_r2;
{
#line 1674 "bitmap.m"

    NumBits = BM->num_bits;
;}
#line 4797 "bitmap.c"
	MR_r4 = NumBits;
#undef	MR_PROC_LABEL
	}
	if ((MR_r3 != MR_r4)) {
		MR_GOTO_LAB(fn__bitmap__intersect_2_0_i2);
	}
	{
	MR_BitmapPtr	BM;
	MR_Integer	NumBits;
#define	MR_PROC_LABEL	mercury__fn__bitmap__intersect_2_0
	BM = (MR_BitmapPtr) MR_r2;
{
#line 1674 "bitmap.m"

    NumBits = BM->num_bits;
;}
#line 4814 "bitmap.c"
	MR_r3 = NumBits;
#undef	MR_PROC_LABEL
	}
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(fn__bitmap__intersect_2_0_i4);
	}
	MR_r1 = MR_r2;
	MR_proceed();
MR_def_label(fn__bitmap__intersect_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	{
	MR_BitmapPtr	BM;
	MR_Integer	NumBits;
#define	MR_PROC_LABEL	mercury__fn__bitmap__intersect_2_0
	BM = (MR_BitmapPtr) MR_r2;
{
#line 1674 "bitmap.m"

    NumBits = BM->num_bits;
;}
#line 4837 "bitmap.c"
	MR_tempr1 = NumBits;
#undef	MR_PROC_LABEL
	}
	MR_r3 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = (((MR_Integer) MR_tempr1 - (MR_Integer) 1) / (MR_Integer) 8);
	MR_np_tailcall_ent(fn__bitmap__zip2__ho9_4_0);
	}
MR_def_label(fn__bitmap__intersect_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(bitmap, bitmap_error);
	MR_r2 = (MR_Word) MR_string_const("bitmap.intersect: bitmaps not the same size", 43);
	MR_np_tailcall_ent(exception__throw_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bitmap_module68)
	MR_init_entry1(fn__bitmap__difference_2_0);
	MR_init_label2(fn__bitmap__difference_2_0,4,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__bitmap__difference_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_BitmapPtr	BM;
	MR_Integer	NumBits;
#define	MR_PROC_LABEL	mercury__fn__bitmap__difference_2_0
	BM = (MR_BitmapPtr) MR_r1;
{
#line 1674 "bitmap.m"

    NumBits = BM->num_bits;
;}
#line 4879 "bitmap.c"
	MR_r3 = NumBits;
#undef	MR_PROC_LABEL
	}
	{
	MR_BitmapPtr	BM;
	MR_Integer	NumBits;
#define	MR_PROC_LABEL	mercury__fn__bitmap__difference_2_0
	BM = (MR_BitmapPtr) MR_r2;
{
#line 1674 "bitmap.m"

    NumBits = BM->num_bits;
;}
#line 4893 "bitmap.c"
	MR_r4 = NumBits;
#undef	MR_PROC_LABEL
	}
	if ((MR_r3 != MR_r4)) {
		MR_GOTO_LAB(fn__bitmap__difference_2_0_i2);
	}
	{
	MR_BitmapPtr	BM;
	MR_Integer	NumBits;
#define	MR_PROC_LABEL	mercury__fn__bitmap__difference_2_0
	BM = (MR_BitmapPtr) MR_r2;
{
#line 1674 "bitmap.m"

    NumBits = BM->num_bits;
;}
#line 4910 "bitmap.c"
	MR_r3 = NumBits;
#undef	MR_PROC_LABEL
	}
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(fn__bitmap__difference_2_0_i4);
	}
	MR_r1 = MR_r2;
	MR_proceed();
MR_def_label(fn__bitmap__difference_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	{
	MR_BitmapPtr	BM;
	MR_Integer	NumBits;
#define	MR_PROC_LABEL	mercury__fn__bitmap__difference_2_0
	BM = (MR_BitmapPtr) MR_r2;
{
#line 1674 "bitmap.m"

    NumBits = BM->num_bits;
;}
#line 4933 "bitmap.c"
	MR_tempr1 = NumBits;
#undef	MR_PROC_LABEL
	}
	MR_r3 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = (((MR_Integer) MR_tempr1 - (MR_Integer) 1) / (MR_Integer) 8);
	MR_np_tailcall_ent(fn__bitmap__zip2__ho10_4_0);
	}
MR_def_label(fn__bitmap__difference_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(bitmap, bitmap_error);
	MR_r2 = (MR_Word) MR_string_const("bitmap.difference: bitmaps not the same size", 44);
	MR_np_tailcall_ent(exception__throw_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bitmap_module69)
	MR_init_entry1(fn__bitmap__xor_2_0);
	MR_init_label2(fn__bitmap__xor_2_0,4,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__bitmap__xor_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_BitmapPtr	BM;
	MR_Integer	NumBits;
#define	MR_PROC_LABEL	mercury__fn__bitmap__xor_2_0
	BM = (MR_BitmapPtr) MR_r1;
{
#line 1674 "bitmap.m"

    NumBits = BM->num_bits;
;}
#line 4975 "bitmap.c"
	MR_r3 = NumBits;
#undef	MR_PROC_LABEL
	}
	{
	MR_BitmapPtr	BM;
	MR_Integer	NumBits;
#define	MR_PROC_LABEL	mercury__fn__bitmap__xor_2_0
	BM = (MR_BitmapPtr) MR_r2;
{
#line 1674 "bitmap.m"

    NumBits = BM->num_bits;
;}
#line 4989 "bitmap.c"
	MR_r4 = NumBits;
#undef	MR_PROC_LABEL
	}
	if ((MR_r3 != MR_r4)) {
		MR_GOTO_LAB(fn__bitmap__xor_2_0_i2);
	}
	{
	MR_BitmapPtr	BM;
	MR_Integer	NumBits;
#define	MR_PROC_LABEL	mercury__fn__bitmap__xor_2_0
	BM = (MR_BitmapPtr) MR_r2;
{
#line 1674 "bitmap.m"

    NumBits = BM->num_bits;
;}
#line 5006 "bitmap.c"
	MR_r3 = NumBits;
#undef	MR_PROC_LABEL
	}
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(fn__bitmap__xor_2_0_i4);
	}
	MR_r1 = MR_r2;
	MR_proceed();
MR_def_label(fn__bitmap__xor_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	{
	MR_BitmapPtr	BM;
	MR_Integer	NumBits;
#define	MR_PROC_LABEL	mercury__fn__bitmap__xor_2_0
	BM = (MR_BitmapPtr) MR_r2;
{
#line 1674 "bitmap.m"

    NumBits = BM->num_bits;
;}
#line 5029 "bitmap.c"
	MR_tempr1 = NumBits;
#undef	MR_PROC_LABEL
	}
	MR_r3 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = (((MR_Integer) MR_tempr1 - (MR_Integer) 1) / (MR_Integer) 8);
	MR_np_tailcall_ent(fn__bitmap__zip2__ho11_4_0);
	}
MR_def_label(fn__bitmap__xor_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(bitmap, bitmap_error);
	MR_r2 = (MR_Word) MR_string_const("bitmap.xor: bitmaps not the same size", 37);
	MR_np_tailcall_ent(exception__throw_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bitmap_module70)
	MR_init_entry1(fn__bitmap__append_list_1_0);
	MR_init_label3(fn__bitmap__append_list_1_0,2,3,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__bitmap__append_list_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r2 = (MR_Integer) 0;
	MR_np_call_localret_ent(bitmap__list__foldl__ho12_4_0,
		fn__bitmap__append_list_1_0_i2);
MR_def_label(fn__bitmap__append_list_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 0;
	MR_np_call_localret_ent(fn__bitmap__new_2_0,
		fn__bitmap__append_list_1_0_i3);
MR_def_label(fn__bitmap__append_list_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 0;
	MR_np_call_localret_ent(bitmap__list__foldl2__ho2_6_0,
		fn__bitmap__append_list_1_0_i4);
MR_def_label(fn__bitmap__append_list_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bitmap_module71)
	MR_init_entry1(fn__bitmap__copy_bits_in_bitmap_4_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__bitmap__copy_bits_in_bitmap_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r3;
	MR_r3 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_r6 = MR_r4;
	MR_r4 = MR_r2;
	MR_np_tailcall_ent(fn__bitmap__copy_bits_6_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bitmap_module72)
	MR_init_entry1(fn__bitmap__copy_bytes_6_0);
	MR_init_label3(fn__bitmap__copy_bytes_6_0,3,5,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__bitmap__copy_bytes_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	if (MR_INT_LT(MR_r6,0)) {
		MR_GOTO_LAB(fn__bitmap__copy_bytes_6_0_i2);
	}
	if (MR_INT_LT(MR_r3,0)) {
		MR_GOTO_LAB(fn__bitmap__copy_bytes_6_0_i2);
	}
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_tempr1;
	MR_tempr2 = MR_r3;
	MR_sv(3) = MR_tempr2;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_tempr3 = MR_r6;
	MR_sv(6) = MR_tempr3;
	MR_r1 = MR_tempr1;
	MR_r2 = (((MR_Integer) MR_tempr2 + (MR_Integer) MR_tempr3) - (MR_Integer) 1);
	}
	MR_np_call_localret_ent(bitmap__byte_in_range_2_0,
		fn__bitmap__copy_bytes_6_0_i3);
MR_def_label(fn__bitmap__copy_bytes_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__bitmap__copy_bytes_6_0_i2);
	}
	if (MR_INT_LT(MR_sv(5),0)) {
		MR_GOTO_LAB(fn__bitmap__copy_bytes_6_0_i2);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = (((MR_Integer) MR_sv(5) + (MR_Integer) MR_sv(6)) - (MR_Integer) 1);
	MR_np_call_localret_ent(bitmap__byte_in_range_2_0,
		fn__bitmap__copy_bytes_6_0_i5);
MR_def_label(fn__bitmap__copy_bytes_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__bitmap__copy_bytes_6_0_i2);
	}
	{
	MR_Integer	SameBM;
	MR_BitmapPtr	SrcBM;
	MR_Integer	SrcFirstByteIndex;
	MR_BitmapPtr	DestBM0;
	MR_Integer	DestFirstByteIndex;
	MR_Integer	NumBytes;
	MR_BitmapPtr	DestBM;
#define	MR_PROC_LABEL	mercury__fn__bitmap__copy_bytes_6_0
	SameBM = MR_sv(1);
	SrcBM = (MR_BitmapPtr) MR_sv(2);
	SrcFirstByteIndex = MR_sv(3);
	DestBM0 = (MR_BitmapPtr) MR_sv(4);
	DestFirstByteIndex = MR_sv(5);
	NumBytes = MR_sv(6);
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

;}
#line 5194 "bitmap.c"
	MR_r1 = (MR_Word) DestBM;
#undef	MR_PROC_LABEL
	}
	MR_decr_sp_and_return(7);
MR_def_label(fn__bitmap__copy_bytes_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(bitmap, bitmap_error);
	MR_r2 = (MR_Word) MR_string_const("bitmap.copy_bytes: out of range", 31);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(exception__throw_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bitmap_module73)
	MR_init_entry1(fn__bitmap__copy_bytes_5_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__bitmap__copy_bytes_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = MR_r5;
	MR_r5 = MR_r4;
	MR_r4 = MR_r3;
	MR_r3 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_np_tailcall_ent(fn__bitmap__copy_bytes_6_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bitmap_module74)
	MR_init_entry1(fn__bitmap__copy_bytes_in_bitmap_4_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__bitmap__copy_bytes_in_bitmap_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r3;
	MR_r3 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_r6 = MR_r4;
	MR_r4 = MR_r2;
	MR_np_tailcall_ent(fn__bitmap__copy_bytes_6_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(char__int_to_hex_char_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_exception__type_ctor_info_software_error_0;

MR_BEGIN_MODULE(bitmap_module75)
	MR_init_entry1(bitmap__to_string_chars_4_0);
	MR_init_label5(bitmap__to_string_chars_4_0,25,2,4,6,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(bitmap__to_string_chars_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
MR_def_label(bitmap__to_string_chars_4_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_GE(MR_r1,0)) {
		MR_GOTO_LAB(bitmap__to_string_chars_4_0_i2);
	}
	MR_r1 = MR_r3;
	MR_decr_sp_and_return(6);
MR_def_label(bitmap__to_string_chars_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	{
	MR_Integer	N;
	MR_BitmapPtr	BM;
	MR_Integer	Byte;
#define	MR_PROC_LABEL	mercury__bitmap__to_string_chars_4_0
	N = MR_r1;
	BM = (MR_BitmapPtr) MR_r2;
{
#line 1747 "bitmap.m"

    Byte = (MR_Integer) BM->elements[N];
;}
#line 5299 "bitmap.c"
	MR_tempr1 = Byte;
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = (MR_Integer) 15;
	MR_sv(5) = MR_r3;
	MR_r1 = (((MR_Integer) MR_tempr1 >> (MR_Integer) 4) & (MR_Integer) MR_sv(4));
	}
	MR_np_call_localret_ent(char__int_to_hex_char_2_0,
		bitmap__to_string_chars_4_0_i4);
MR_def_label(bitmap__to_string_chars_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(bitmap__to_string_chars_4_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r2;
	MR_r1 = ((MR_Integer) MR_tempr1 & (MR_Integer) MR_sv(4));
	}
	MR_np_call_localret_ent(char__int_to_hex_char_2_0,
		bitmap__to_string_chars_4_0_i6);
MR_def_label(bitmap__to_string_chars_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(bitmap__to_string_chars_4_0_i3);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(5);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_r1 = ((MR_Integer) MR_sv(1) - (MR_Integer) 1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(bitmap__to_string_chars_4_0_i25);
	}
MR_def_label(bitmap__to_string_chars_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(exception, software_error);
	MR_r2 = (MR_Word) MR_string_const("bitmap.to_string: internal error", 32);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(exception__throw_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(string__to_char_list_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_character_0;
MR_decl_entry(list__append_3_1);
MR_decl_entry(string__from_char_list_2_0);

MR_BEGIN_MODULE(bitmap_module76)
	MR_init_entry1(fn__bitmap__to_string_1_0);
	MR_init_label4(fn__bitmap__to_string_1_0,2,3,4,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__bitmap__to_string_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	{
	MR_BitmapPtr	BM;
	MR_Integer	NumBits;
#define	MR_PROC_LABEL	mercury__fn__bitmap__to_string_1_0
	BM = (MR_BitmapPtr) MR_r1;
{
#line 1674 "bitmap.m"

    NumBits = BM->num_bits;
;}
#line 5387 "bitmap.c"
	MR_tempr1 = NumBits;
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_tempr1;
	MR_r2 = MR_r1;
	MR_r1 = (((MR_Integer) MR_tempr1 - (MR_Integer) 1) / (MR_Integer) 8);
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,1,0);
	}
	MR_np_call_localret_ent(bitmap__to_string_chars_4_0,
		fn__bitmap__to_string_1_0_i2);
MR_def_label(fn__bitmap__to_string_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r2 = (MR_Integer) 10;
	}
	MR_np_call_localret_ent(string__int_to_base_string_3_0,
		fn__bitmap__to_string_1_0_i3);
MR_def_label(fn__bitmap__to_string_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(string__to_char_list_2_0,
		fn__bitmap__to_string_1_0_i4);
MR_def_label(fn__bitmap__to_string_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = (MR_Integer) 60;
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = (MR_Integer) 58;
	MR_tfield(1, MR_tempr2, 1) = MR_sv(1);
	MR_r1 = (MR_Word) MR_CHAR_CTOR_ADDR;
	}
	MR_np_call_localret_ent(list__append_3_1,
		fn__bitmap__to_string_1_0_i5);
MR_def_label(fn__bitmap__to_string_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(string__from_char_list_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(char__is_hex_digit_2_0);

MR_BEGIN_MODULE(bitmap_module77)
	MR_init_entry1(bitmap__hex_chars_to_bitmap_6_0);
	MR_init_label6(bitmap__hex_chars_to_bitmap_6_0,28,2,14,3,5,7)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(bitmap__hex_chars_to_bitmap_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
MR_def_label(bitmap__hex_chars_to_bitmap_6_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 != MR_r3)) {
		MR_GOTO_LAB(bitmap__hex_chars_to_bitmap_6_0_i2);
	}
	MR_r2 = MR_r5;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(7);
MR_def_label(bitmap__hex_chars_to_bitmap_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = ((MR_Integer) MR_r3 - (MR_Integer) MR_r2);
	if (MR_INT_NE(MR_r6,1)) {
		MR_GOTO_LAB(bitmap__hex_chars_to_bitmap_6_0_i3);
	}
MR_def_label(bitmap__hex_chars_to_bitmap_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(7);
MR_def_label(bitmap__hex_chars_to_bitmap_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	{
	MR_String	Str;
	MR_Integer	Index;
	MR_Char	Ch;
#define	MR_PROC_LABEL	mercury__bitmap__hex_chars_to_bitmap_6_0
	Str = (MR_String) MR_r1;
	Index = MR_r2;
{
#line 507 "string.opt"

    Ch = Str[Index];
;}
#line 5489 "bitmap.c"
	MR_tempr1 = Ch;
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(6) = MR_r5;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(char__is_hex_digit_2_0,
		bitmap__hex_chars_to_bitmap_6_0_i5);
MR_def_label(bitmap__hex_chars_to_bitmap_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(bitmap__hex_chars_to_bitmap_6_0_i14);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	{
	MR_String	Str;
	MR_Integer	Index;
	MR_Char	Ch;
#define	MR_PROC_LABEL	mercury__bitmap__hex_chars_to_bitmap_6_0
	Str = (MR_String) MR_sv(1);
	Index = MR_tempr1;
{
#line 507 "string.opt"

    Ch = Str[Index];
;}
#line 5522 "bitmap.c"
	MR_r1 = Ch;
#undef	MR_PROC_LABEL
	}
	MR_sv(5) = MR_r2;
	}
	MR_np_call_localret_ent(char__is_hex_digit_2_0,
		bitmap__hex_chars_to_bitmap_6_0_i7);
MR_def_label(bitmap__hex_chars_to_bitmap_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(bitmap__hex_chars_to_bitmap_6_0_i14);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = (((MR_Integer) MR_sv(5) << (MR_Integer) 4) | (MR_Integer) MR_r2);
	{
	MR_Integer	N;
	MR_BitmapPtr	BM0;
	MR_Integer	Byte;
	MR_BitmapPtr	BM;
#define	MR_PROC_LABEL	mercury__bitmap__hex_chars_to_bitmap_6_0
	N = MR_sv(4);
	BM0 = (MR_BitmapPtr) MR_sv(6);
	Byte = MR_tempr1;
{
#line 1788 "bitmap.m"

    BM = BM0;
    BM->elements[N] = (MR_uint_least8_t) Byte;
;}
#line 5553 "bitmap.c"
	MR_r5 = (MR_Word) BM;
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_sv(1);
	MR_r2 = ((MR_Integer) MR_sv(2) + (MR_Integer) 2);
	MR_r3 = MR_sv(3);
	MR_r4 = ((MR_Integer) MR_sv(4) + (MR_Integer) 1);
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(bitmap__hex_chars_to_bitmap_6_0_i28);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(char__is_digit_1_0);
MR_decl_entry(string__base_string_to_int_3_0);

MR_BEGIN_MODULE(bitmap_module78)
	MR_init_entry1(fn__bitmap__from_string_1_0);
	MR_init_label3(fn__bitmap__from_string_1_0,3,8,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__bitmap__from_string_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_String	Str;
	MR_Integer	Length;
#define	MR_PROC_LABEL	mercury__fn__bitmap__from_string_1_0
	Str = (MR_String) MR_r1;
{
#line 218 "string.opt"

    Length = strlen(Str);
;}
#line 5598 "bitmap.c"
	MR_tempr1 = Length;
#undef	MR_PROC_LABEL
	}
	MR_r2 = MR_tempr1;
	if (MR_INT_LT(MR_tempr1,4)) {
		MR_GOTO_LAB(fn__bitmap__from_string_1_0_i1);
	}
	{
	MR_String	Str;
	MR_Integer	Index;
	MR_Char	Ch;
#define	MR_PROC_LABEL	mercury__fn__bitmap__from_string_1_0
	Str = (MR_String) MR_r1;
	Index = (MR_Integer) 0;
{
#line 507 "string.opt"

    Ch = Str[Index];
;}
#line 5618 "bitmap.c"
	MR_r3 = Ch;
#undef	MR_PROC_LABEL
	}
	if (MR_INT_NE(MR_r3,60)) {
		MR_GOTO_LAB(fn__bitmap__from_string_1_0_i1);
	}
	{
	MR_String	Str;
	MR_Integer	Index;
	MR_Char	Ch;
#define	MR_PROC_LABEL	mercury__fn__bitmap__from_string_1_0
	Str = (MR_String) MR_r1;
	Index = (MR_Integer) 1;
{
#line 507 "string.opt"

    Ch = Str[Index];
;}
#line 5637 "bitmap.c"
	MR_tempr2 = Ch;
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tempr2;
	}
	MR_np_call_localret_ent(char__is_digit_1_0,
		fn__bitmap__from_string_1_0_i3);
MR_def_label(fn__bitmap__from_string_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__bitmap__from_string_1_0_i1);
	}
	MR_r3 = ((MR_Integer) MR_sv(2) - (MR_Integer) 1);
	{
	MR_String	Str;
	MR_Integer	Index;
	MR_Char	Ch;
#define	MR_PROC_LABEL	mercury__fn__bitmap__from_string_1_0
	Str = (MR_String) MR_sv(1);
	Index = MR_r3;
{
#line 507 "string.opt"

    Ch = Str[Index];
;}
#line 5665 "bitmap.c"
	MR_r3 = Ch;
#undef	MR_PROC_LABEL
	}
	if (MR_INT_NE(MR_r3,62)) {
		MR_GOTO_LAB(fn__bitmap__from_string_1_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_String	WholeString;
	MR_String	Pattern;
	MR_Integer	BeginAt;
	MR_Integer	Index;
#define	MR_PROC_LABEL	mercury__fn__bitmap__from_string_1_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	WholeString = (MR_String) MR_sv(1);
	Pattern = (MR_String) (MR_Word) MR_string_const(":", 1);
	BeginAt = (MR_Integer) 0;
{
#line 787 "string.opt"
{
    char *match;
    match = strstr(WholeString + BeginAt, Pattern);
    if (match) {
        Index = match - WholeString;
        SUCCESS_INDICATOR = MR_TRUE;
    } else {
        SUCCESS_INDICATOR = MR_FALSE;
    }
};}
#line 5698 "bitmap.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(fn__bitmap__from_string_1_0_i1);
	MR_tempr1 = Index;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_tempr2 = ((MR_Integer) MR_tempr1 - (MR_Integer) 1);
	{
	MR_String	Str;
	MR_Integer	Start;
	MR_Integer	Count;
	MR_String	SubString;
#define	MR_PROC_LABEL	mercury__fn__bitmap__from_string_1_0
	Str = (MR_String) MR_sv(1);
	Start = (MR_Integer) 1;
	Count = MR_tempr2;
{
#line 703 "string.opt"
{
    MR_Integer len;

    MR_allocate_aligned_string_msg(SubString, Count, MR_PROC_LABEL);
    MR_memcpy(SubString, Str + Start, Count);
    SubString[Count] = '\0';
};}
#line 5724 "bitmap.c"
	MR_r2 = (MR_Word) SubString;
#undef	MR_PROC_LABEL
	}
	MR_sv(3) = MR_tempr1;
	MR_r1 = (MR_Integer) 10;
	}
	MR_np_call_localret_ent(string__base_string_to_int_3_0,
		fn__bitmap__from_string_1_0_i8);
MR_def_label(fn__bitmap__from_string_1_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__bitmap__from_string_1_0_i1);
	}
	if (MR_INT_LT(MR_r2,0)) {
		MR_GOTO_LAB(fn__bitmap__from_string_1_0_i1);
	}
	{
	MR_Integer	N;
	MR_BitmapPtr	BM;
#define	MR_PROC_LABEL	mercury__fn__bitmap__from_string_1_0
	N = MR_r2;
{
#line 1827 "bitmap.m"

    MR_allocate_bitmap_msg(BM, N, MR_PROC_LABEL);
;}
#line 5751 "bitmap.c"
	MR_r5 = (MR_Word) BM;
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_sv(1);
	MR_r2 = ((MR_Integer) MR_sv(3) + (MR_Integer) 1);
	MR_r3 = ((MR_Integer) MR_sv(2) - (MR_Integer) 1);
	MR_r4 = (MR_Integer) 0;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(bitmap__hex_chars_to_bitmap_6_0);
MR_def_label(fn__bitmap__from_string_1_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(string__pad_left_4_0);

MR_BEGIN_MODULE(bitmap_module79)
	MR_init_entry1(fn__bitmap__bitmap_to_byte_strings_3_0);
	MR_init_label5(fn__bitmap__bitmap_to_byte_strings_3_0,17,2,3,6,7)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__bitmap__bitmap_to_byte_strings_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(fn__bitmap__bitmap_to_byte_strings_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_GT(MR_r2,0)) {
		MR_GOTO_LAB(fn__bitmap__bitmap_to_byte_strings_3_0_i2);
	}
	MR_r1 = MR_r3;
	MR_decr_sp_and_return(5);
MR_def_label(fn__bitmap__bitmap_to_byte_strings_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = (((MR_Integer) MR_r2 - (MR_Integer) 1) / (MR_Integer) 8);
	{
	MR_Integer	N;
	MR_BitmapPtr	BM;
	MR_Integer	Byte;
#define	MR_PROC_LABEL	mercury__fn__bitmap__bitmap_to_byte_strings_3_0
	N = MR_r4;
	BM = (MR_BitmapPtr) MR_r1;
{
#line 1747 "bitmap.m"

    Byte = (MR_Integer) BM->elements[N];
;}
#line 5811 "bitmap.c"
	MR_r4 = Byte;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r5 = (((MR_Integer) MR_tempr1 - (MR_Integer) 1) % (MR_Integer) 8);
	MR_r6 = ((MR_Integer) 8 - (MR_Integer) MR_r5);
	if (MR_INT_NE(MR_r6,1)) {
		MR_GOTO_LAB(fn__bitmap__bitmap_to_byte_strings_3_0_i3);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = (MR_Integer) 8;
	MR_r1 = MR_r4;
	MR_sv(4) = MR_r3;
	MR_r2 = (MR_Integer) 2;
	}
	MR_np_call_localret_ent(string__int_to_base_string_3_0,
		fn__bitmap__bitmap_to_byte_strings_3_0_i6);
MR_def_label(fn__bitmap__bitmap_to_byte_strings_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = ((MR_Integer) MR_r5 + (MR_Integer) 1);
	MR_r1 = ((MR_Integer) MR_r4 >> ((MR_Integer) 8 - (MR_Integer) MR_sv(3)));
	MR_sv(4) = MR_r3;
	MR_r2 = (MR_Integer) 2;
	MR_np_call_localret_ent(string__int_to_base_string_3_0,
		fn__bitmap__bitmap_to_byte_strings_3_0_i6);
MR_def_label(fn__bitmap__bitmap_to_byte_strings_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 48;
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(string__pad_left_4_0,
		fn__bitmap__bitmap_to_byte_strings_3_0_i7);
MR_def_label(fn__bitmap__bitmap_to_byte_strings_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(4);
	MR_r1 = MR_sv(1);
	MR_r2 = ((MR_Integer) MR_sv(2) - (MR_Integer) MR_sv(3));
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(fn__bitmap__bitmap_to_byte_strings_3_0_i17);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bitmap_module80)
	MR_init_entry1(fn__bitmap__bitmap_to_byte_strings_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__bitmap__bitmap_to_byte_strings_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_BitmapPtr	BM;
	MR_Integer	NumBits;
#define	MR_PROC_LABEL	mercury__fn__bitmap__bitmap_to_byte_strings_1_0
	BM = (MR_BitmapPtr) MR_r1;
{
#line 1674 "bitmap.m"

    NumBits = BM->num_bits;
;}
#line 5888 "bitmap.c"
	MR_r2 = NumBits;
#undef	MR_PROC_LABEL
	}
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_tailcall_ent(fn__bitmap__bitmap_to_byte_strings_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bitmap_module81)
	MR_init_entry1(fn__bitmap__to_byte_string_1_0);
	MR_init_label1(fn__bitmap__to_byte_string_1_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__bitmap__to_byte_string_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_BitmapPtr	BM;
	MR_Integer	NumBits;
#define	MR_PROC_LABEL	mercury__fn__bitmap__to_byte_string_1_0
	BM = (MR_BitmapPtr) MR_r1;
{
#line 1674 "bitmap.m"

    NumBits = BM->num_bits;
;}
#line 5924 "bitmap.c"
	MR_r2 = NumBits;
#undef	MR_PROC_LABEL
	}
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(fn__bitmap__bitmap_to_byte_strings_3_0,
		fn__bitmap__to_byte_string_1_0_i2);
MR_def_label(fn__bitmap__to_byte_string_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_String	Sep;
	MR_Word	Strs;
	MR_String	Str;
#define	MR_PROC_LABEL	mercury__fn__bitmap__to_byte_string_1_0
	Sep = (MR_String) (MR_Word) MR_string_const(".", 1);
	Strs = MR_r1;
{
#line 738 "string.opt"
{
    MR_Word list;
    MR_Word tmp;
    size_t  len;
    size_t  sep_len;
    MR_bool add_sep;

    list = Strs;
    len = 0;
    sep_len = strlen(Sep);

    /* Determine the total length of all strings */
    len = 0;
    add_sep = MR_FALSE;
    while (!MR_list_is_empty(list)) {
        if (add_sep) {
            len += sep_len;
        }

        len += strlen((MR_String) MR_list_head(list));
        list = MR_list_tail(list);
        add_sep = MR_TRUE;
    }

    MR_allocate_aligned_string_msg(Str, len, MR_PROC_LABEL);

    /* Copy the strings into the new memory */
    len = 0;
    list = Strs;
    add_sep = MR_FALSE;
    while (!MR_list_is_empty(list)) {
        if (add_sep) {
            strcpy((MR_String) Str + len, Sep);
            len += sep_len;
        }

        strcpy((MR_String) Str + len, (MR_String) MR_list_head(list));
        len += strlen((MR_String) MR_list_head(list));
        list = MR_list_tail(list);
        add_sep = MR_TRUE;
    }

    Str[len] = '\0';
};}
#line 5986 "bitmap.c"
	MR_r1 = (MR_Word) Str;
#undef	MR_PROC_LABEL
	}
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__f_105_110_116_95_95_60_60_2_0);

MR_BEGIN_MODULE(bitmap_module82)
	MR_init_entry1(bitmap__hash_2_5_0);
	MR_init_label3(bitmap__hash_2_5_0,11,3,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(bitmap__hash_2_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
MR_def_label(bitmap__hash_2_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r2 >= (MR_Integer) MR_r3)) {
		MR_GOTO_LAB(bitmap__hash_2_5_0_i2);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_Integer	N;
	MR_BitmapPtr	BM;
	MR_Integer	Byte;
#define	MR_PROC_LABEL	mercury__bitmap__hash_2_5_0
	N = MR_r2;
	BM = (MR_BitmapPtr) MR_r1;
{
#line 1747 "bitmap.m"

    Byte = (MR_Integer) BM->elements[N];
;}
#line 6031 "bitmap.c"
	MR_tempr1 = Byte;
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_tempr2 = MR_r4;
	MR_sv(4) = MR_tempr2;
	MR_sv(5) = MR_tempr1;
	MR_r1 = MR_tempr2;
	MR_r2 = (MR_Integer) 5;
	}
	MR_np_call_localret_ent(fn__f_105_110_116_95_95_60_60_2_0,
		bitmap__hash_2_5_0_i3);
MR_def_label(bitmap__hash_2_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_r3 = MR_sv(3);
	MR_r4 = (((MR_Integer) MR_sv(4) ^ (MR_Integer) MR_tempr1) ^ (MR_Integer) MR_sv(5));
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(bitmap__hash_2_5_0_i11);
	}
MR_def_label(bitmap__hash_2_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r4;
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bitmap_module83)
	MR_init_entry1(fn__bitmap__hash_1_0);
	MR_init_label2(fn__bitmap__hash_1_0,2,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__bitmap__hash_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	{
	MR_BitmapPtr	BM;
	MR_Integer	NumBits;
#define	MR_PROC_LABEL	mercury__fn__bitmap__hash_1_0
	BM = (MR_BitmapPtr) MR_r1;
{
#line 1674 "bitmap.m"

    NumBits = BM->num_bits;
;}
#line 6094 "bitmap.c"
	MR_tempr1 = NumBits;
#undef	MR_PROC_LABEL
	}
	MR_r5 = MR_tempr1;
	MR_r3 = ((MR_Integer) MR_tempr1 / (MR_Integer) 8);
	MR_r6 = ((MR_Integer) MR_tempr1 % (MR_Integer) 8);
	if (MR_INT_NE(MR_r6,0)) {
		MR_GOTO_LAB(fn__bitmap__hash_1_0_i2);
	}
	MR_sv(1) = MR_tempr1;
	MR_r2 = (MR_Integer) 0;
	MR_r4 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(bitmap__hash_2_5_0,
		fn__bitmap__hash_1_0_i5);
MR_def_label(fn__bitmap__hash_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r5;
	MR_r3 = ((MR_Integer) MR_r3 + (MR_Integer) 1);
	MR_r2 = (MR_Integer) 0;
	MR_r4 = (MR_Integer) 0;
	MR_np_call_localret_ent(bitmap__hash_2_5_0,
		fn__bitmap__hash_1_0_i5);
MR_def_label(fn__bitmap__hash_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_r1 ^ (MR_Integer) MR_sv(1));
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bitmap_module84)
	MR_init_entry1(fn__bitmap__set_2_0);
	MR_init_label1(fn__bitmap__set_2_0,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__bitmap__set_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 0 > (MR_Integer) MR_r2)) {
		MR_GOTO_LAB(fn__bitmap__set_2_0_i3);
	}
	{
	MR_BitmapPtr	BM;
	MR_Integer	NumBits;
#define	MR_PROC_LABEL	mercury__fn__bitmap__set_2_0
	BM = (MR_BitmapPtr) MR_r1;
{
#line 1674 "bitmap.m"

    NumBits = BM->num_bits;
;}
#line 6153 "bitmap.c"
	MR_r3 = NumBits;
#undef	MR_PROC_LABEL
	}
	if (((MR_Integer) MR_r2 >= (MR_Integer) MR_r3)) {
		MR_GOTO_LAB(fn__bitmap__set_2_0_i3);
	}
	MR_np_tailcall_ent(fn__bitmap__unsafe_set_2_0);
MR_def_label(fn__bitmap__set_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(bitmap, bitmap);
	MR_r3 = (MR_Word) MR_string_const("bitmap.set", 10);
	MR_np_tailcall_ent(fn__bitmap__throw_bounds_error_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bitmap_module85)
	MR_init_entry1(fn__bitmap__clear_2_0);
	MR_init_label1(fn__bitmap__clear_2_0,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__bitmap__clear_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 0 > (MR_Integer) MR_r2)) {
		MR_GOTO_LAB(fn__bitmap__clear_2_0_i3);
	}
	{
	MR_BitmapPtr	BM;
	MR_Integer	NumBits;
#define	MR_PROC_LABEL	mercury__fn__bitmap__clear_2_0
	BM = (MR_BitmapPtr) MR_r1;
{
#line 1674 "bitmap.m"

    NumBits = BM->num_bits;
;}
#line 6199 "bitmap.c"
	MR_r3 = NumBits;
#undef	MR_PROC_LABEL
	}
	if (((MR_Integer) MR_r2 >= (MR_Integer) MR_r3)) {
		MR_GOTO_LAB(fn__bitmap__clear_2_0_i3);
	}
	MR_np_tailcall_ent(fn__bitmap__unsafe_clear_2_0);
MR_def_label(fn__bitmap__clear_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(bitmap, bitmap);
	MR_r3 = (MR_Word) MR_string_const("bitmap.clear", 12);
	MR_np_tailcall_ent(fn__bitmap__throw_bounds_error_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bitmap_module86)
	MR_init_entry1(bitmap__is_set_2_0);
	MR_init_label4(bitmap__is_set_2_0,6,12,3,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__bitmap__is_set_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if (((MR_Integer) 0 > (MR_Integer) MR_r2)) {
		MR_GOTO_LAB(bitmap__is_set_2_0_i3);
	}
	{
	MR_BitmapPtr	BM;
	MR_Integer	NumBits;
#define	MR_PROC_LABEL	mercury__bitmap__is_set_2_0
	BM = (MR_BitmapPtr) MR_r1;
{
#line 1674 "bitmap.m"

    NumBits = BM->num_bits;
;}
#line 6247 "bitmap.c"
	MR_r3 = NumBits;
#undef	MR_PROC_LABEL
	}
	if (((MR_Integer) MR_r2 >= (MR_Integer) MR_r3)) {
		MR_GOTO_LAB(bitmap__is_set_2_0_i3);
	}
	MR_np_call_localret_ent(bitmap__unsafe_is_clear_2_0,
		bitmap__is_set_2_0_i6);
MR_def_label(bitmap__is_set_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(bitmap__is_set_2_0_i1);
	}
MR_def_label(bitmap__is_set_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(bitmap__is_set_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r3 = (MR_Word) MR_string_const("bitmap.is_set", 13);
	MR_np_call_localret_ent(fn__bitmap__throw_bounds_error_3_0,
		bitmap__is_set_2_0_i12);
MR_def_label(bitmap__is_set_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bitmap_module87)
	MR_init_entry1(bitmap__is_clear_2_0);
	MR_init_label2(bitmap__is_clear_2_0,10,21)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__bitmap__is_clear_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 0 > (MR_Integer) MR_r2)) {
		MR_GOTO_LAB(bitmap__is_clear_2_0_i21);
	}
	{
	MR_BitmapPtr	BM;
	MR_Integer	NumBits;
#define	MR_PROC_LABEL	mercury__bitmap__is_clear_2_0
	BM = (MR_BitmapPtr) MR_r1;
{
#line 1674 "bitmap.m"

    NumBits = BM->num_bits;
;}
#line 6312 "bitmap.c"
	MR_r3 = NumBits;
#undef	MR_PROC_LABEL
	}
	if (((MR_Integer) MR_r2 >= (MR_Integer) MR_r3)) {
		MR_GOTO_LAB(bitmap__is_clear_2_0_i21);
	}
	MR_np_tailcall_ent(bitmap__unsafe_is_clear_2_0);
MR_def_label(bitmap__is_clear_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(3);
MR_def_label(bitmap__is_clear_2_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_r4 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r3 = (MR_Word) MR_string_const("bitmap.is_clear", 15);
	MR_np_call_localret_ent(fn__bitmap__throw_bounds_error_3_0,
		bitmap__is_clear_2_0_i10);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bitmap_module88)
	MR_init_entry1(bitmap__unsafe_set_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__bitmap__unsafe_set_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_np_tailcall_ent(fn__bitmap__unsafe_set_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bitmap_module89)
	MR_init_entry1(bitmap__unsafe_clear_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__bitmap__unsafe_clear_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_np_tailcall_ent(fn__bitmap__unsafe_clear_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bitmap_module90)
	MR_init_entry1(bitmap__unsafe_flip_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__bitmap__unsafe_flip_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_np_tailcall_ent(fn__bitmap__unsafe_flip_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bitmap_module91)
	MR_init_entry1(bitmap__set_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__bitmap__set_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_np_tailcall_ent(fn__bitmap__set_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bitmap_module92)
	MR_init_entry1(bitmap__clear_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__bitmap__clear_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_np_tailcall_ent(fn__bitmap__clear_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bitmap_module93)
	MR_init_entry1(bitmap__flip_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__bitmap__flip_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_np_tailcall_ent(fn__bitmap__flip_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bitmap_module94)
	MR_init_entry1(fn__bitmap__get_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__bitmap__get_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_np_tailcall_ent(fn__bitmap__bit_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bitmap_module95)
	MR_init_entry1(fn__bitmap__unsafe_get_2_0);
	MR_init_label2(fn__bitmap__unsafe_get_2_0,5,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__bitmap__unsafe_get_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(bitmap__unsafe_is_clear_2_0,
		fn__bitmap__unsafe_get_2_0_i5);
MR_def_label(fn__bitmap__unsafe_get_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(fn__bitmap__unsafe_get_2_0_i2);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(1);
MR_def_label(fn__bitmap__unsafe_get_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bitmap_module96)
	MR_init_entry1(bitmap__bitmap_equal_2_0);
	MR_init_label1(bitmap__bitmap_equal_2_0,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__bitmap__bitmap_equal_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_BitmapPtr	BM1;
	MR_BitmapPtr	BM2;
#define	MR_PROC_LABEL	mercury__bitmap__bitmap_equal_2_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	BM1 = (MR_BitmapPtr) MR_r1;
	BM2 = (MR_BitmapPtr) MR_r2;
{
#line 1570 "bitmap.m"

    SUCCESS_INDICATOR = MR_bitmap_eq(BM1, BM2);
;}
#line 6567 "bitmap.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(bitmap__bitmap_equal_2_0_i1);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(bitmap__bitmap_equal_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bitmap_module97)
	MR_init_entry1(bitmap__bitmap_compare_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__bitmap__bitmap_compare_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	Result;
	MR_BitmapPtr	BM1;
	MR_BitmapPtr	BM2;
#define	MR_PROC_LABEL	mercury__bitmap__bitmap_compare_3_0
	BM1 = (MR_BitmapPtr) MR_r1;
	BM2 = (MR_BitmapPtr) MR_r2;
{
#line 1603 "bitmap.m"

    int res;
    res = MR_bitmap_cmp(BM1, BM2);
    Result = ((res < 0) ? MR_COMPARE_LESS
                : (res == 0) ? MR_COMPARE_EQUAL
                : MR_COMPARE_GREATER);
;}
#line 6612 "bitmap.c"
	MR_r1 = Result;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bitmap_module98)
	MR_init_entry1(__Unify___bitmap__bit_index_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___bitmap__bit_index_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bitmap_module99)
	MR_init_entry1(__Compare___bitmap__bit_index_0_0);
	MR_init_label2(__Compare___bitmap__bit_index_0_0,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___bitmap__bit_index_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r2;
	MR_r2 = MR_r1;
	if (((MR_Integer) MR_r2 >= (MR_Integer) MR_r3)) {
		MR_GOTO_LAB(__Compare___bitmap__bit_index_0_0_i2);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(__Compare___bitmap__bit_index_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 != MR_r3)) {
		MR_GOTO_LAB(__Compare___bitmap__bit_index_0_0_i3);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___bitmap__bit_index_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bitmap_module100)
	MR_init_entry1(__Unify___bitmap__bit_index_in_byte_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___bitmap__bit_index_in_byte_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bitmap_module101)
	MR_init_entry1(__Compare___bitmap__bit_index_in_byte_0_0);
	MR_init_label2(__Compare___bitmap__bit_index_in_byte_0_0,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___bitmap__bit_index_in_byte_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r2;
	MR_r2 = MR_r1;
	if (((MR_Integer) MR_r2 >= (MR_Integer) MR_r3)) {
		MR_GOTO_LAB(__Compare___bitmap__bit_index_in_byte_0_0_i2);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(__Compare___bitmap__bit_index_in_byte_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 != MR_r3)) {
		MR_GOTO_LAB(__Compare___bitmap__bit_index_in_byte_0_0_i3);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___bitmap__bit_index_in_byte_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bitmap_module102)
	MR_init_entry1(__Unify___bitmap__bitmap_0_0);
	MR_init_label2(__Unify___bitmap__bitmap_0_0,8,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___bitmap__bitmap_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___bitmap__bitmap_0_0_i8);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_BitmapPtr	BM1;
	MR_BitmapPtr	BM2;
#define	MR_PROC_LABEL	mercury____Unify___bitmap__bitmap_0_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	BM1 = (MR_BitmapPtr) MR_sv(1);
	BM2 = (MR_BitmapPtr) MR_sv(2);
{
#line 1570 "bitmap.m"

    SUCCESS_INDICATOR = MR_bitmap_eq(BM1, BM2);
;}
#line 6765 "bitmap.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(__Unify___bitmap__bitmap_0_0_i1);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
MR_def_label(__Unify___bitmap__bitmap_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___bitmap__bitmap_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bitmap_module103)
	MR_init_entry1(__Compare___bitmap__bitmap_0_0);
	MR_init_label2(__Compare___bitmap__bitmap_0_0,3,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___bitmap__bitmap_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___bitmap__bitmap_0_0_i3);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___bitmap__bitmap_0_0_i2);
MR_def_label(__Compare___bitmap__bitmap_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Compare___bitmap__bitmap_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	Result;
	MR_BitmapPtr	BM1;
	MR_BitmapPtr	BM2;
#define	MR_PROC_LABEL	mercury____Compare___bitmap__bitmap_0_0
	BM1 = (MR_BitmapPtr) MR_sv(1);
	BM2 = (MR_BitmapPtr) MR_sv(2);
{
#line 1603 "bitmap.m"

    int res;
    res = MR_bitmap_cmp(BM1, BM2);
    Result = ((res < 0) ? MR_COMPARE_LESS
                : (res == 0) ? MR_COMPARE_EQUAL
                : MR_COMPARE_GREATER);
;}
#line 6829 "bitmap.c"
	MR_r1 = Result;
#undef	MR_PROC_LABEL
	}
	MR_decr_sp(2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bitmap_module104)
	MR_init_entry1(__Unify___bitmap__bitmap_error_0_0);
	MR_init_label1(__Unify___bitmap__bitmap_error_0_0,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___bitmap__bitmap_error_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___bitmap__bitmap_error_0_0_i4);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (strcmp((char *)MR_sv(1), (char *)MR_sv(2)) == 0);
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Unify___bitmap__bitmap_error_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bitmap_module105)
	MR_init_entry1(__Compare___bitmap__bitmap_error_0_0);
	MR_init_label3(__Compare___bitmap__bitmap_error_0_0,4,12,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___bitmap__bitmap_error_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___bitmap__bitmap_error_0_0_i12);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Integer	Res;
	MR_String	S1;
	MR_String	S2;
#define	MR_PROC_LABEL	mercury____Compare___bitmap__bitmap_error_0_0
	S1 = (MR_String) MR_sv(1);
	S2 = (MR_String) MR_sv(2);
{
#line 137 "private_builtin.opt"

    Res = strcmp(S1, S2);
;}
#line 6903 "bitmap.c"
	MR_r2 = Res;
#undef	MR_PROC_LABEL
	}
	if (MR_INT_GE(MR_r2,0)) {
		MR_GOTO_LAB(__Compare___bitmap__bitmap_error_0_0_i4);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Compare___bitmap__bitmap_error_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(__Compare___bitmap__bitmap_error_0_0_i5);
	}
MR_def_label(__Compare___bitmap__bitmap_error_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Compare___bitmap__bitmap_error_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp(2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bitmap_module106)
	MR_init_entry1(__Unify___bitmap__byte_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___bitmap__byte_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bitmap_module107)
	MR_init_entry1(__Compare___bitmap__byte_0_0);
	MR_init_label2(__Compare___bitmap__byte_0_0,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___bitmap__byte_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r2;
	MR_r2 = MR_r1;
	if (((MR_Integer) MR_r2 >= (MR_Integer) MR_r3)) {
		MR_GOTO_LAB(__Compare___bitmap__byte_0_0_i2);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(__Compare___bitmap__byte_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 != MR_r3)) {
		MR_GOTO_LAB(__Compare___bitmap__byte_0_0_i3);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___bitmap__byte_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bitmap_module108)
	MR_init_entry1(__Unify___bitmap__byte_index_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___bitmap__byte_index_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bitmap_module109)
	MR_init_entry1(__Compare___bitmap__byte_index_0_0);
	MR_init_label2(__Compare___bitmap__byte_index_0_0,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___bitmap__byte_index_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r2;
	MR_r2 = MR_r1;
	if (((MR_Integer) MR_r2 >= (MR_Integer) MR_r3)) {
		MR_GOTO_LAB(__Compare___bitmap__byte_index_0_0_i2);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(__Compare___bitmap__byte_index_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 != MR_r3)) {
		MR_GOTO_LAB(__Compare___bitmap__byte_index_0_0_i3);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___bitmap__byte_index_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bitmap_module110)
	MR_init_entry1(__Unify___bitmap__copy_direction_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___bitmap__copy_direction_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bitmap_module111)
	MR_init_entry1(__Compare___bitmap__copy_direction_0_0);
	MR_init_label2(__Compare___bitmap__copy_direction_0_0,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___bitmap__copy_direction_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r2;
	MR_r2 = MR_r1;
	if (((MR_Integer) MR_r2 >= (MR_Integer) MR_r3)) {
		MR_GOTO_LAB(__Compare___bitmap__copy_direction_0_0_i2);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(__Compare___bitmap__copy_direction_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 != MR_r3)) {
		MR_GOTO_LAB(__Compare___bitmap__copy_direction_0_0_i3);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___bitmap__copy_direction_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bitmap_module112)
	MR_init_entry1(__Unify___bitmap__num_bits_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___bitmap__num_bits_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bitmap_module113)
	MR_init_entry1(__Compare___bitmap__num_bits_0_0);
	MR_init_label2(__Compare___bitmap__num_bits_0_0,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___bitmap__num_bits_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r2;
	MR_r2 = MR_r1;
	if (((MR_Integer) MR_r2 >= (MR_Integer) MR_r3)) {
		MR_GOTO_LAB(__Compare___bitmap__num_bits_0_0_i2);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(__Compare___bitmap__num_bits_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 != MR_r3)) {
		MR_GOTO_LAB(__Compare___bitmap__num_bits_0_0_i3);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___bitmap__num_bits_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bitmap_module114)
	MR_init_entry1(__Unify___bitmap__num_bytes_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___bitmap__num_bytes_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bitmap_module115)
	MR_init_entry1(__Compare___bitmap__num_bytes_0_0);
	MR_init_label2(__Compare___bitmap__num_bytes_0_0,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___bitmap__num_bytes_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r2;
	MR_r2 = MR_r1;
	if (((MR_Integer) MR_r2 >= (MR_Integer) MR_r3)) {
		MR_GOTO_LAB(__Compare___bitmap__num_bytes_0_0_i2);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(__Compare___bitmap__num_bytes_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 != MR_r3)) {
		MR_GOTO_LAB(__Compare___bitmap__num_bytes_0_0_i3);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___bitmap__num_bytes_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bitmap_module116)
	MR_init_entry1(__Unify___bitmap__slice_0_0);
	MR_init_label3(__Unify___bitmap__slice_0_0,8,9,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___bitmap__slice_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___bitmap__slice_0_0_i9);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	MR_sv(6) = MR_ctfield(0, MR_tempr2, 2);
	MR_sv(5) = MR_ctfield(0, MR_tempr2, 1);
	MR_sv(4) = MR_ctfield(0, MR_tempr2, 0);
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 2);
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 1);
	MR_tempr3 = MR_ctfield(0, MR_tempr1, 0);
	MR_r1 = MR_tempr3;
	if ((MR_tempr3 == MR_sv(4))) {
		MR_GOTO_LAB(__Unify___bitmap__slice_0_0_i8);
	}
	MR_sv(1) = MR_tempr3;
	{
	MR_BitmapPtr	BM1;
	MR_BitmapPtr	BM2;
#define	MR_PROC_LABEL	mercury____Unify___bitmap__slice_0_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	BM1 = (MR_BitmapPtr) MR_sv(1);
	BM2 = (MR_BitmapPtr) MR_sv(4);
{
#line 1570 "bitmap.m"

    SUCCESS_INDICATOR = MR_bitmap_eq(BM1, BM2);
;}
#line 7256 "bitmap.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(__Unify___bitmap__slice_0_0_i1);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	}
MR_def_label(__Unify___bitmap__slice_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_sv(2) != MR_sv(5))) {
		MR_GOTO_LAB(__Unify___bitmap__slice_0_0_i1);
	}
	MR_r1 = (MR_sv(3) == MR_sv(6));
	MR_decr_sp(6);
	MR_proceed();
MR_def_label(__Unify___bitmap__slice_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(6);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___bitmap__slice_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(6);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bitmap_module117)
	MR_init_entry1(__Compare___bitmap__slice_0_0);
	MR_init_label8(__Compare___bitmap__slice_0_0,7,6,8,13,14,16,19,33)
	MR_init_label2(__Compare___bitmap__slice_0_0,20,25)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___bitmap__slice_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___bitmap__slice_0_0_i33);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	MR_sv(6) = MR_ctfield(0, MR_tempr2, 2);
	MR_sv(5) = MR_ctfield(0, MR_tempr2, 1);
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 2);
	MR_r2 = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(4) = MR_ctfield(0, MR_tempr2, 0);
	MR_tempr3 = MR_ctfield(0, MR_tempr1, 0);
	MR_r3 = MR_tempr3;
	if ((MR_tempr3 == MR_sv(4))) {
		MR_GOTO_LAB(__Compare___bitmap__slice_0_0_i7);
	}
	MR_sv(1) = MR_tempr3;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___bitmap__slice_0_0_i6);
	}
MR_def_label(__Compare___bitmap__slice_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 0;
	MR_GOTO_LAB(__Compare___bitmap__slice_0_0_i8);
MR_def_label(__Compare___bitmap__slice_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	Result;
	MR_BitmapPtr	BM1;
	MR_BitmapPtr	BM2;
#define	MR_PROC_LABEL	mercury____Compare___bitmap__slice_0_0
	BM1 = (MR_BitmapPtr) MR_sv(1);
	BM2 = (MR_BitmapPtr) MR_sv(4);
{
#line 1603 "bitmap.m"

    int res;
    res = MR_bitmap_cmp(BM1, BM2);
    Result = ((res < 0) ? MR_COMPARE_LESS
                : (res == 0) ? MR_COMPARE_EQUAL
                : MR_COMPARE_GREATER);
;}
#line 7347 "bitmap.c"
	MR_r1 = Result;
#undef	MR_PROC_LABEL
	}
MR_def_label(__Compare___bitmap__slice_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___bitmap__slice_0_0_i25);
	}
	MR_r2 = MR_sv(2);
	if (((MR_Integer) MR_r2 >= (MR_Integer) MR_sv(5))) {
		MR_GOTO_LAB(__Compare___bitmap__slice_0_0_i13);
	}
	MR_r1 = (MR_Integer) 1;
	MR_GOTO_LAB(__Compare___bitmap__slice_0_0_i16);
MR_def_label(__Compare___bitmap__slice_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 != MR_sv(5))) {
		MR_GOTO_LAB(__Compare___bitmap__slice_0_0_i14);
	}
	MR_r1 = (MR_Integer) 0;
	MR_GOTO_LAB(__Compare___bitmap__slice_0_0_i16);
MR_def_label(__Compare___bitmap__slice_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
MR_def_label(__Compare___bitmap__slice_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___bitmap__slice_0_0_i25);
	}
	if (((MR_Integer) MR_sv(3) >= (MR_Integer) MR_sv(6))) {
		MR_GOTO_LAB(__Compare___bitmap__slice_0_0_i19);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp(6);
	MR_proceed();
MR_def_label(__Compare___bitmap__slice_0_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_sv(3) != MR_sv(6))) {
		MR_GOTO_LAB(__Compare___bitmap__slice_0_0_i20);
	}
MR_def_label(__Compare___bitmap__slice_0_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp(6);
	MR_proceed();
MR_def_label(__Compare___bitmap__slice_0_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
MR_def_label(__Compare___bitmap__slice_0_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(6);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bitmap_module118)
	MR_init_entry1(__Unify___bitmap__word_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___bitmap__word_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bitmap_module119)
	MR_init_entry1(__Compare___bitmap__word_0_0);
	MR_init_label2(__Compare___bitmap__word_0_0,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___bitmap__word_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r2;
	MR_r2 = MR_r1;
	if (((MR_Integer) MR_r2 >= (MR_Integer) MR_r3)) {
		MR_GOTO_LAB(__Compare___bitmap__word_0_0_i2);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(__Compare___bitmap__word_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 != MR_r3)) {
		MR_GOTO_LAB(__Compare___bitmap__word_0_0_i3);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___bitmap__word_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bitmap_module120)
	MR_init_entry1(bitmap__list__foldl2__ho2_6_0);
	MR_init_label3(bitmap__list__foldl2__ho2_6_0,10,3,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(bitmap__list__foldl2__ho2_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(bitmap__list__foldl2__ho2_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(bitmap__list__foldl2__ho2_6_0_i3);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_decr_sp_and_return(4);
MR_def_label(bitmap__list__foldl2__ho2_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	{
	MR_BitmapPtr	BM;
	MR_Integer	NumBits;
#define	MR_PROC_LABEL	mercury__bitmap__list__foldl2__ho2_6_0
	BM = (MR_BitmapPtr) MR_tempr1;
{
#line 1674 "bitmap.m"

    NumBits = BM->num_bits;
;}
#line 7498 "bitmap.c"
	MR_r6 = NumBits;
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_tempr1;
	MR_r4 = MR_r3;
	MR_r3 = (MR_Integer) 0;
	MR_r5 = MR_sv(1);
	}
	MR_np_call_localret_ent(fn__bitmap__unsafe_copy_bits_6_0,
		bitmap__list__foldl2__ho2_6_0_i4);
MR_def_label(bitmap__list__foldl2__ho2_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	{
	MR_BitmapPtr	BM;
	MR_Integer	NumBits;
#define	MR_PROC_LABEL	mercury__bitmap__list__foldl2__ho2_6_0
	BM = (MR_BitmapPtr) MR_sv(2);
{
#line 1674 "bitmap.m"

    NumBits = BM->num_bits;
;}
#line 7527 "bitmap.c"
	MR_tempr1 = NumBits;
#undef	MR_PROC_LABEL
	}
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = ((MR_Integer) MR_sv(1) + (MR_Integer) MR_tempr1);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(bitmap__list__foldl2__ho2_6_0_i10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bitmap_module121)
	MR_init_entry1(fn__bitmap__zip2__ho8_4_0);
	MR_init_label1(fn__bitmap__zip2__ho8_4_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__bitmap__zip2__ho8_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_LT(MR_r1,0)) {
		MR_GOTO_LAB(fn__bitmap__zip2__ho8_4_0_i2);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	{
	MR_Integer	N;
	MR_BitmapPtr	BM;
	MR_Integer	Byte;
#define	MR_PROC_LABEL	mercury__fn__bitmap__zip2__ho8_4_0
	N = MR_r1;
	BM = (MR_BitmapPtr) MR_r2;
{
#line 1747 "bitmap.m"

    Byte = (MR_Integer) BM->elements[N];
;}
#line 7572 "bitmap.c"
	MR_tempr1 = Byte;
#undef	MR_PROC_LABEL
	}
	{
	MR_Integer	N;
	MR_BitmapPtr	BM;
	MR_Integer	Byte;
#define	MR_PROC_LABEL	mercury__fn__bitmap__zip2__ho8_4_0
	N = MR_r1;
	BM = (MR_BitmapPtr) MR_r3;
{
#line 1747 "bitmap.m"

    Byte = (MR_Integer) BM->elements[N];
;}
#line 7588 "bitmap.c"
	MR_tempr2 = Byte;
#undef	MR_PROC_LABEL
	}
	MR_tempr3 = ((MR_Integer) MR_tempr1 | (MR_Integer) MR_tempr2);
	{
	MR_Integer	N;
	MR_BitmapPtr	BM0;
	MR_Integer	Byte;
	MR_BitmapPtr	BM;
#define	MR_PROC_LABEL	mercury__fn__bitmap__zip2__ho8_4_0
	N = MR_r1;
	BM0 = (MR_BitmapPtr) MR_r3;
	Byte = MR_tempr3;
{
#line 1788 "bitmap.m"

    BM = BM0;
    BM->elements[N] = (MR_uint_least8_t) Byte;
;}
#line 7608 "bitmap.c"
	MR_r3 = (MR_Word) BM;
#undef	MR_PROC_LABEL
	}
	MR_r1 = ((MR_Integer) MR_r1 - (MR_Integer) 1);
	MR_np_localtailcall(fn__bitmap__zip2__ho8_4_0);
	}
MR_def_label(fn__bitmap__zip2__ho8_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bitmap_module122)
	MR_init_entry1(fn__bitmap__zip2__ho9_4_0);
	MR_init_label1(fn__bitmap__zip2__ho9_4_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__bitmap__zip2__ho9_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_LT(MR_r1,0)) {
		MR_GOTO_LAB(fn__bitmap__zip2__ho9_4_0_i2);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	{
	MR_Integer	N;
	MR_BitmapPtr	BM;
	MR_Integer	Byte;
#define	MR_PROC_LABEL	mercury__fn__bitmap__zip2__ho9_4_0
	N = MR_r1;
	BM = (MR_BitmapPtr) MR_r2;
{
#line 1747 "bitmap.m"

    Byte = (MR_Integer) BM->elements[N];
;}
#line 7654 "bitmap.c"
	MR_tempr1 = Byte;
#undef	MR_PROC_LABEL
	}
	{
	MR_Integer	N;
	MR_BitmapPtr	BM;
	MR_Integer	Byte;
#define	MR_PROC_LABEL	mercury__fn__bitmap__zip2__ho9_4_0
	N = MR_r1;
	BM = (MR_BitmapPtr) MR_r3;
{
#line 1747 "bitmap.m"

    Byte = (MR_Integer) BM->elements[N];
;}
#line 7670 "bitmap.c"
	MR_tempr2 = Byte;
#undef	MR_PROC_LABEL
	}
	MR_tempr3 = ((MR_Integer) MR_tempr1 & (MR_Integer) MR_tempr2);
	{
	MR_Integer	N;
	MR_BitmapPtr	BM0;
	MR_Integer	Byte;
	MR_BitmapPtr	BM;
#define	MR_PROC_LABEL	mercury__fn__bitmap__zip2__ho9_4_0
	N = MR_r1;
	BM0 = (MR_BitmapPtr) MR_r3;
	Byte = MR_tempr3;
{
#line 1788 "bitmap.m"

    BM = BM0;
    BM->elements[N] = (MR_uint_least8_t) Byte;
;}
#line 7690 "bitmap.c"
	MR_r3 = (MR_Word) BM;
#undef	MR_PROC_LABEL
	}
	MR_r1 = ((MR_Integer) MR_r1 - (MR_Integer) 1);
	MR_np_localtailcall(fn__bitmap__zip2__ho9_4_0);
	}
MR_def_label(fn__bitmap__zip2__ho9_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bitmap_module123)
	MR_init_entry1(fn__bitmap__zip2__ho10_4_0);
	MR_init_label1(fn__bitmap__zip2__ho10_4_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__bitmap__zip2__ho10_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_LT(MR_r1,0)) {
		MR_GOTO_LAB(fn__bitmap__zip2__ho10_4_0_i2);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	{
	MR_Integer	N;
	MR_BitmapPtr	BM;
	MR_Integer	Byte;
#define	MR_PROC_LABEL	mercury__fn__bitmap__zip2__ho10_4_0
	N = MR_r1;
	BM = (MR_BitmapPtr) MR_r2;
{
#line 1747 "bitmap.m"

    Byte = (MR_Integer) BM->elements[N];
;}
#line 7736 "bitmap.c"
	MR_tempr1 = Byte;
#undef	MR_PROC_LABEL
	}
	{
	MR_Integer	N;
	MR_BitmapPtr	BM;
	MR_Integer	Byte;
#define	MR_PROC_LABEL	mercury__fn__bitmap__zip2__ho10_4_0
	N = MR_r1;
	BM = (MR_BitmapPtr) MR_r3;
{
#line 1747 "bitmap.m"

    Byte = (MR_Integer) BM->elements[N];
;}
#line 7752 "bitmap.c"
	MR_tempr2 = Byte;
#undef	MR_PROC_LABEL
	}
	MR_tempr3 = ((MR_Integer) MR_tempr1 & ~((MR_Integer) MR_tempr2));
	{
	MR_Integer	N;
	MR_BitmapPtr	BM0;
	MR_Integer	Byte;
	MR_BitmapPtr	BM;
#define	MR_PROC_LABEL	mercury__fn__bitmap__zip2__ho10_4_0
	N = MR_r1;
	BM0 = (MR_BitmapPtr) MR_r3;
	Byte = MR_tempr3;
{
#line 1788 "bitmap.m"

    BM = BM0;
    BM->elements[N] = (MR_uint_least8_t) Byte;
;}
#line 7772 "bitmap.c"
	MR_r3 = (MR_Word) BM;
#undef	MR_PROC_LABEL
	}
	MR_r1 = ((MR_Integer) MR_r1 - (MR_Integer) 1);
	MR_np_localtailcall(fn__bitmap__zip2__ho10_4_0);
	}
MR_def_label(fn__bitmap__zip2__ho10_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bitmap_module124)
	MR_init_entry1(fn__bitmap__zip2__ho11_4_0);
	MR_init_label1(fn__bitmap__zip2__ho11_4_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__bitmap__zip2__ho11_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_LT(MR_r1,0)) {
		MR_GOTO_LAB(fn__bitmap__zip2__ho11_4_0_i2);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	{
	MR_Integer	N;
	MR_BitmapPtr	BM;
	MR_Integer	Byte;
#define	MR_PROC_LABEL	mercury__fn__bitmap__zip2__ho11_4_0
	N = MR_r1;
	BM = (MR_BitmapPtr) MR_r2;
{
#line 1747 "bitmap.m"

    Byte = (MR_Integer) BM->elements[N];
;}
#line 7818 "bitmap.c"
	MR_tempr1 = Byte;
#undef	MR_PROC_LABEL
	}
	{
	MR_Integer	N;
	MR_BitmapPtr	BM;
	MR_Integer	Byte;
#define	MR_PROC_LABEL	mercury__fn__bitmap__zip2__ho11_4_0
	N = MR_r1;
	BM = (MR_BitmapPtr) MR_r3;
{
#line 1747 "bitmap.m"

    Byte = (MR_Integer) BM->elements[N];
;}
#line 7834 "bitmap.c"
	MR_tempr2 = Byte;
#undef	MR_PROC_LABEL
	}
	MR_tempr3 = ((MR_Integer) MR_tempr1 ^ (MR_Integer) MR_tempr2);
	{
	MR_Integer	N;
	MR_BitmapPtr	BM0;
	MR_Integer	Byte;
	MR_BitmapPtr	BM;
#define	MR_PROC_LABEL	mercury__fn__bitmap__zip2__ho11_4_0
	N = MR_r1;
	BM0 = (MR_BitmapPtr) MR_r3;
	Byte = MR_tempr3;
{
#line 1788 "bitmap.m"

    BM = BM0;
    BM->elements[N] = (MR_uint_least8_t) Byte;
;}
#line 7854 "bitmap.c"
	MR_r3 = (MR_Word) BM;
#undef	MR_PROC_LABEL
	}
	MR_r1 = ((MR_Integer) MR_r1 - (MR_Integer) 1);
	MR_np_localtailcall(fn__bitmap__zip2__ho11_4_0);
	}
MR_def_label(fn__bitmap__zip2__ho11_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bitmap_module125)
	MR_init_entry1(bitmap__list__foldl__ho12_4_0);
	MR_init_label1(bitmap__list__foldl__ho12_4_0,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(bitmap__list__foldl__ho12_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(bitmap__list__foldl__ho12_4_0_i3);
	}
	MR_r1 = MR_r2;
	MR_proceed();
MR_def_label(bitmap__list__foldl__ho12_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	{
	MR_BitmapPtr	BM;
	MR_Integer	NumBits;
#define	MR_PROC_LABEL	mercury__bitmap__list__foldl__ho12_4_0
	BM = (MR_BitmapPtr) MR_tempr1;
{
#line 1674 "bitmap.m"

    NumBits = BM->num_bits;
;}
#line 7903 "bitmap.c"
	MR_tempr1 = NumBits;
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_ctfield(1, MR_r1, 1);
	MR_r2 = ((MR_Integer) MR_r2 + (MR_Integer) MR_tempr1);
	MR_np_localtailcall(bitmap__list__foldl__ho12_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bitmap_module126)
	MR_init_entry1(fn__f_98_105_116_109_97_112_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__f_98_105_116_109_97_112_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1200;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__bitmap_maybe_bunch_0(void)
{
	bitmap_module0();
	bitmap_module1();
	bitmap_module2();
	bitmap_module3();
	bitmap_module4();
	bitmap_module5();
	bitmap_module6();
	bitmap_module7();
	bitmap_module8();
	bitmap_module9();
	bitmap_module10();
	bitmap_module11();
	bitmap_module12();
	bitmap_module13();
	bitmap_module14();
	bitmap_module15();
	bitmap_module16();
	bitmap_module17();
	bitmap_module18();
	bitmap_module19();
	bitmap_module20();
	bitmap_module21();
	bitmap_module22();
	bitmap_module23();
	bitmap_module24();
	bitmap_module25();
	bitmap_module26();
	bitmap_module27();
	bitmap_module28();
	bitmap_module29();
	bitmap_module30();
	bitmap_module31();
	bitmap_module32();
	bitmap_module33();
	bitmap_module34();
	bitmap_module35();
	bitmap_module36();
	bitmap_module37();
	bitmap_module38();
	bitmap_module39();
}

static void mercury__bitmap_maybe_bunch_1(void)
{
	bitmap_module40();
	bitmap_module41();
	bitmap_module42();
	bitmap_module43();
	bitmap_module44();
	bitmap_module45();
	bitmap_module46();
	bitmap_module47();
	bitmap_module48();
	bitmap_module49();
	bitmap_module50();
	bitmap_module51();
	bitmap_module52();
	bitmap_module53();
	bitmap_module54();
	bitmap_module55();
	bitmap_module56();
	bitmap_module57();
	bitmap_module58();
	bitmap_module59();
	bitmap_module60();
	bitmap_module61();
	bitmap_module62();
	bitmap_module63();
	bitmap_module64();
	bitmap_module65();
	bitmap_module66();
	bitmap_module67();
	bitmap_module68();
	bitmap_module69();
	bitmap_module70();
	bitmap_module71();
	bitmap_module72();
	bitmap_module73();
	bitmap_module74();
	bitmap_module75();
	bitmap_module76();
	bitmap_module77();
	bitmap_module78();
	bitmap_module79();
}

static void mercury__bitmap_maybe_bunch_2(void)
{
	bitmap_module80();
	bitmap_module81();
	bitmap_module82();
	bitmap_module83();
	bitmap_module84();
	bitmap_module85();
	bitmap_module86();
	bitmap_module87();
	bitmap_module88();
	bitmap_module89();
	bitmap_module90();
	bitmap_module91();
	bitmap_module92();
	bitmap_module93();
	bitmap_module94();
	bitmap_module95();
	bitmap_module96();
	bitmap_module97();
	bitmap_module98();
	bitmap_module99();
	bitmap_module100();
	bitmap_module101();
	bitmap_module102();
	bitmap_module103();
	bitmap_module104();
	bitmap_module105();
	bitmap_module106();
	bitmap_module107();
	bitmap_module108();
	bitmap_module109();
	bitmap_module110();
	bitmap_module111();
	bitmap_module112();
	bitmap_module113();
	bitmap_module114();
	bitmap_module115();
	bitmap_module116();
	bitmap_module117();
	bitmap_module118();
	bitmap_module119();
}

static void mercury__bitmap_maybe_bunch_3(void)
{
	bitmap_module120();
	bitmap_module121();
	bitmap_module122();
	bitmap_module123();
	bitmap_module124();
	bitmap_module125();
	bitmap_module126();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__bitmap__init(void);
void mercury__bitmap__init_type_tables(void);
void mercury__bitmap__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__bitmap__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__bitmap__init_complexity_procs(void);
#endif

void mercury__bitmap__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__bitmap_maybe_bunch_0();
	mercury__bitmap_maybe_bunch_1();
	mercury__bitmap_maybe_bunch_2();
	mercury__bitmap_maybe_bunch_3();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_bitmap__type_ctor_info_word_0,
		bitmap__word_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_bitmap__type_ctor_info_slice_0,
		bitmap__slice_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_bitmap__type_ctor_info_num_bytes_0,
		bitmap__num_bytes_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_bitmap__type_ctor_info_num_bits_0,
		bitmap__num_bits_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_bitmap__type_ctor_info_copy_direction_0,
		bitmap__copy_direction_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_bitmap__type_ctor_info_byte_index_0,
		bitmap__byte_index_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_bitmap__type_ctor_info_byte_0,
		bitmap__byte_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_bitmap__type_ctor_info_bitmap_error_0,
		bitmap__bitmap_error_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_bitmap__type_ctor_info_bitmap_0,
		bitmap__bitmap_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_bitmap__type_ctor_info_bit_index_in_byte_0,
		bitmap__bit_index_in_byte_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_bitmap__type_ctor_info_bit_index_0,
		bitmap__bit_index_0_0);
	mercury__bitmap__init_debugger();
}

void mercury__bitmap__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_bitmap__type_ctor_info_word_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_bitmap__type_ctor_info_slice_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_bitmap__type_ctor_info_num_bytes_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_bitmap__type_ctor_info_num_bits_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_bitmap__type_ctor_info_copy_direction_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_bitmap__type_ctor_info_byte_index_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_bitmap__type_ctor_info_byte_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_bitmap__type_ctor_info_bitmap_error_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_bitmap__type_ctor_info_bitmap_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_bitmap__type_ctor_info_bit_index_in_byte_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_bitmap__type_ctor_info_bit_index_0);
	}
}


void mercury__bitmap__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__bitmap__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__bitmap);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__bitmap__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
