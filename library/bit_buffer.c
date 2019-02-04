/*
** Automatically generated from `bit_buffer.m'
** by the Mercury compiler,
** version rotd-2011-05-29, configured for x86_64-unknown-linux-gnu.
** Do not edit.
**
** The autoconfigured grade settings governing
** the generation of this C file were
**
** TAG_BITS=2
** UNBOXED_FLOAT=no
** HIGHLEVEL_CODE=no
**
** END_OF_C_GRADE_INFO
*/

/*
INIT mercury__bit_buffer__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 151 "bitmap.int"
#include "bitmap.mh"

#line 28 "bit_buffer.c"
#line 140 "io.int2"
#include "io.mh"

#line 32 "bit_buffer.c"
#line 150 "io.int2"
#include "string.mh"

#line 36 "bit_buffer.c"
#line 30 "time.int2"
#include "time.mh"

#line 40 "bit_buffer.c"
#line 21 "stm_builtin.int2"
#include "stm_builtin.mh"

#line 44 "bit_buffer.c"
#line 35 "store.int2"
#include "store.mh"

#line 48 "bit_buffer.c"
#line 33 "array.int2"
#include "array.mh"

#line 52 "bit_buffer.c"
#line 4 "char.opt"
#include "char.mh"

#line 56 "bit_buffer.c"
#line 12 "pretty_printer.opt"
#include "pretty_printer.mh"

#line 60 "bit_buffer.c"
#line 38 "pretty_printer.opt"
#include "version_array.mh"

#line 64 "bit_buffer.c"
#line 3 "construct.opt"
#include "construct.mh"

#line 68 "bit_buffer.c"
#line 129 "rtti_implementation.opt"
#include "rtti_implementation.mh"

#line 72 "bit_buffer.c"
#line 3 "float.opt"
#include "float.mh"

#line 76 "bit_buffer.c"
#line 3 "math.opt"
#include "math.mh"

#line 80 "bit_buffer.c"
#line 156 "io.opt"
#include "dir.mh"

#line 84 "bit_buffer.c"
#line 170 "io.opt"
#include "table_builtin.mh"

#line 88 "bit_buffer.c"
#line 6 "benchmarking.opt"
#include "benchmarking.mh"

#line 92 "bit_buffer.c"
#line 6 "type_desc.opt"
#include "type_desc.mh"

#line 96 "bit_buffer.c"
#line 4 "builtin.opt"
#include "builtin.mh"

#line 100 "bit_buffer.c"
#line 14 "exception.opt"
#include "exception.mh"

#line 104 "bit_buffer.c"
#line 4 "int.opt"
#include "int.mh"

#line 108 "bit_buffer.c"
#line 9 "private_builtin.opt"
#include "private_builtin.mh"

#line 112 "bit_buffer.c"
#line 113 "bit_buffer.c"
#include "bit_buffer.mh"

#line 116 "bit_buffer.c"
#line 117 "bit_buffer.c"
#ifndef BIT_BUFFER_DECL_GUARD
#define BIT_BUFFER_DECL_GUARD

#line 121 "bit_buffer.c"
#line 137 "bit_buffer.m"

typedef struct {
    MR_BitmapPtr    ML_bit_buffer_bitmap;
    MR_Integer      ML_bit_buffer_pos;
    MR_Integer      ML_bit_buffer_size;
    MR_Word         ML_bit_buffer_use_stream;
    MR_Word         ML_bit_buffer_stream;
    MR_Word         ML_bit_buffer_state;
    MR_Word         ML_bit_buffer_filled_bitmaps;
    MR_Word         ML_bit_buffer_read_status;
} ML_BitBuffer;

typedef ML_BitBuffer *ML_BitBufferPtr;

#line 137 "bit_buffer.c"
#line 138 "bit_buffer.c"

#endif
#line 141 "bit_buffer.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

struct mercury_type_0 {
	MR_Integer f1;
};
MR_STATIC_LINKAGE const struct mercury_type_0 mercury_common_0[];

extern const MR_BaseTypeclassInfo
	mercury_data_base_typeclass_info_stream__writer__arity3__bit_buffer__error_stream__arity0__bitmap__slice__arity0__bit_buffer__error_state__arity0__[],
	mercury_data_base_typeclass_info_stream__stream__arity2__bit_buffer__error_stream__arity0__bit_buffer__error_state__arity0__[],
	mercury_data_base_typeclass_info_stream__output__arity2__bit_buffer__error_stream__arity0__bit_buffer__error_state__arity0__[],
	mercury_data_base_typeclass_info_stream__input__arity2__bit_buffer__error_stream__arity0__bit_buffer__error_state__arity0__[],
	mercury_data_base_typeclass_info_stream__error__arity1__bit_buffer__error_stream_error__arity0__[],
	mercury_data_base_typeclass_info_stream__bulk_reader__arity5__bit_buffer__error_stream__arity0__int__arity0__bitmap__bitmap__arity0__bit_buffer__error_state__arity0__bit_buffer__error_stream_error__arity0__[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_bit_buffer__type_ctor_info_bit_buffer_3,
	mercury_data_bit_buffer__type_ctor_info_bit_buffer_2,
	mercury_data_bit_buffer__type_ctor_info_error_state_0,
	mercury_data_bit_buffer__type_ctor_info_error_stream_0,
	mercury_data_bit_buffer__type_ctor_info_error_stream_error_0;
MR_decl_label1(fn__bit_buffer__new_buffer_6_0, 2)
MR_def_extern_entry(fn__bit_buffer__new_buffer_2_7_0)
MR_def_extern_entry(fn__bit_buffer__new_buffer_6_0)
MR_def_extern_entry(fn__bit_buffer__bitmap_1_0)
MR_def_extern_entry(fn__bit_buffer__pos_1_0)
MR_def_extern_entry(fn__bit_buffer__size_1_0)
MR_def_extern_entry(fn__bit_buffer__use_stream_1_0)
MR_def_extern_entry(fn__bit_buffer__stream_1_0)
MR_def_extern_entry(fn__bit_buffer__state_1_0)
MR_def_extern_entry(fn__bit_buffer__filled_bitmaps_1_0)
MR_def_extern_entry(fn__bit_buffer__read_status_1_0)
MR_def_extern_entry(bit_buffer__set_all_7_0)
MR_def_extern_entry(bit_buffer__set_bitmap_4_0)
MR_def_extern_entry(bit_buffer__set_state_3_0)
MR_def_extern_entry(bit_buffer__set_use_stream_3_0)
MR_def_extern_entry(bit_buffer__set_read_status_3_0)
MR_def_extern_entry(__Unify___bit_buffer__bit_buffer_2_0)
MR_def_extern_entry(__Compare___bit_buffer__bit_buffer_2_0)
MR_def_extern_entry(__Unify___bit_buffer__bit_buffer_3_0)
MR_def_extern_entry(__Compare___bit_buffer__bit_buffer_3_0)
MR_def_extern_entry(__Unify___bit_buffer__error_state_0_0)
MR_def_extern_entry(__Compare___bit_buffer__error_state_0_0)
MR_def_extern_entry(__Unify___bit_buffer__error_stream_0_0)
MR_def_extern_entry(__Compare___bit_buffer__error_stream_0_0)
MR_def_extern_entry(__Unify___bit_buffer__error_stream_error_0_0)
MR_def_extern_entry(__Compare___bit_buffer__error_stream_error_0_0)
MR_def_extern_entry(bit_buffer__ClassMethod_for_stream__bulk_reader____bit_buffer__error_stream__arity0__int__arity0__bitmap__bitmap__arity0__bit_buffer__error_state__arity0__bit_buffer__error_stream_error__arity0______stream__bulk_get_9_9_0)
MR_def_extern_entry(fn__bit_buffer__ClassMethod_for_stream__error____bit_buffer__error_stream_error__arity0______stream__error_message_1_1_0)
MR_def_extern_entry(bit_buffer__ClassMethod_for_stream__output____bit_buffer__error_stream__arity0__bit_buffer__error_state__arity0______stream__flush_3_3_0)
MR_def_extern_entry(bit_buffer__ClassMethod_for_stream__stream____bit_buffer__error_stream__arity0__bit_buffer__error_state__arity0______stream__name_4_4_0)
MR_def_extern_entry(bit_buffer__ClassMethod_for_stream__writer____bit_buffer__error_stream__arity0__bitmap__slice__arity0__bit_buffer__error_state__arity0______stream__put_4_4_0)
MR_def_extern_entry(f_98_105_116_95_98_117_102_102_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_98_105_116_95_98_117_102_102_101_114_95_95_101_114_114_111_114_95_115_116_97_116_101_95_48_95_95_91_49_44_32_50_93_95_48_2_0)
MR_def_extern_entry(f_98_105_116_95_98_117_102_102_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_98_105_116_95_98_117_102_102_101_114_95_95_101_114_114_111_114_95_115_116_97_116_101_95_48_95_95_91_50_44_32_51_93_95_48_3_0)
MR_def_extern_entry(f_98_105_116_95_98_117_102_102_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_98_105_116_95_98_117_102_102_101_114_95_95_101_114_114_111_114_95_115_116_114_101_97_109_95_48_95_95_91_49_44_32_50_93_95_48_2_0)
MR_def_extern_entry(f_98_105_116_95_98_117_102_102_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_98_105_116_95_98_117_102_102_101_114_95_95_101_114_114_111_114_95_115_116_114_101_97_109_95_48_95_95_91_50_44_32_51_93_95_48_3_0)
MR_def_extern_entry(f_98_105_116_95_98_117_102_102_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_98_105_116_95_98_117_102_102_101_114_95_95_101_114_114_111_114_95_115_116_114_101_97_109_95_101_114_114_111_114_95_48_95_95_91_49_44_32_50_93_95_48_2_0)
MR_def_extern_entry(f_98_105_116_95_98_117_102_102_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_98_105_116_95_98_117_102_102_101_114_95_95_101_114_114_111_114_95_115_116_114_101_97_109_95_101_114_114_111_114_95_48_95_95_91_50_44_32_51_93_95_48_3_0)
MR_decl_static(fn__f_98_105_116_95_98_117_102_102_101_114_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0)
MR_def_extern_entry(f_98_105_116_95_98_117_102_102_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_115_116_114_101_97_109_95_95_98_117_108_107_95_114_101_97_100_101_114_95_95_95_95_98_105_116_95_98_117_102_102_101_114_95_95_101_114_114_111_114_95_115_116_114_101_97_109_95_95_97_114_105_116_121_48_95_95_105_110_116_95_95_97_114_105_116_121_48_95_95_98_105_116_109_97_112_95_95_98_105_116_109_97_112_95_95_97_114_105_116_121_48_95_95_98_105_116_95_98_117_102_102_101_114_95_95_101_114_114_111_114_95_115_116_97_116_101_95_95_97_114_105_116_121_48_95_95_98_105_116_95_98_117_102_102_101_114_95_95_101_114_114_111_114_95_115_116_114_101_97_109_95_101_114_114_111_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_115_116_114_101_97_109_95_95_98_117_108_107_95_103_101_116_95_57_95_95_91_49_44_32_50_44_32_51_93_95_48_9_0)
MR_def_extern_entry(fn__f_98_105_116_95_98_117_102_102_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_115_116_114_101_97_109_95_95_101_114_114_111_114_95_95_95_95_98_105_116_95_98_117_102_102_101_114_95_95_101_114_114_111_114_95_115_116_114_101_97_109_95_101_114_114_111_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_115_116_114_101_97_109_95_95_101_114_114_111_114_95_109_101_115_115_97_103_101_95_49_95_95_91_49_93_95_48_1_0)
MR_def_extern_entry(f_98_105_116_95_98_117_102_102_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_115_116_114_101_97_109_95_95_111_117_116_112_117_116_95_95_95_95_98_105_116_95_98_117_102_102_101_114_95_95_101_114_114_111_114_95_115_116_114_101_97_109_95_95_97_114_105_116_121_48_95_95_98_105_116_95_98_117_102_102_101_114_95_95_101_114_114_111_114_95_115_116_97_116_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_115_116_114_101_97_109_95_95_102_108_117_115_104_95_51_95_95_91_49_44_32_50_93_95_48_3_0)
MR_def_extern_entry(f_98_105_116_95_98_117_102_102_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_115_116_114_101_97_109_95_95_115_116_114_101_97_109_95_95_95_95_98_105_116_95_98_117_102_102_101_114_95_95_101_114_114_111_114_95_115_116_114_101_97_109_95_95_97_114_105_116_121_48_95_95_98_105_116_95_98_117_102_102_101_114_95_95_101_114_114_111_114_95_115_116_97_116_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_115_116_114_101_97_109_95_95_110_97_109_101_95_52_95_95_91_49_93_95_48_4_0)
MR_def_extern_entry(f_98_105_116_95_98_117_102_102_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_115_116_114_101_97_109_95_95_119_114_105_116_101_114_95_95_95_95_98_105_116_95_98_117_102_102_101_114_95_95_101_114_114_111_114_95_115_116_114_101_97_109_95_95_97_114_105_116_121_48_95_95_98_105_116_109_97_112_95_95_115_108_105_99_101_95_95_97_114_105_116_121_48_95_95_98_105_116_95_98_117_102_102_101_114_95_95_101_114_114_111_114_95_115_116_97_116_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_115_116_114_101_97_109_95_95_112_117_116_95_52_95_95_91_49_44_32_50_44_32_51_93_95_48_4_0)

static const struct mercury_type_0 mercury_common_0[1] =
{
{
0
},
};

const MR_TypeCtorInfo_Struct mercury_data_bit_buffer__type_ctor_info_bit_buffer_3 = {
	3,
	13,
	-1,
	MR_TYPECTOR_REP_FOREIGN,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___bit_buffer__bit_buffer_3_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___bit_buffer__bit_buffer_3_0)),
	"bit_buffer",
	"bit_buffer",
	{ 0 },
	{ 0 },
	-1,
	0,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_tuple_0;

static const MR_VA_TypeInfo_Struct0 mercury_data___vti_tuple_0 = {
	&mercury_data_builtin__type_ctor_info_tuple_0,
	0,
{	/* Dummy entry, since ISO C forbids zero-sized arrays */
	0
}};

static const MR_FA_PseudoTypeInfo_Struct3 mercury_data_bit_buffer__pti_bit_buffer_3__pseudo_1__pseudo_2__plain___vti_tuple_0 = {
	&mercury_data_bit_buffer__type_ctor_info_bit_buffer_3,
{	(MR_PseudoTypeInfo) 1,
	(MR_PseudoTypeInfo) 2,
	(MR_PseudoTypeInfo) &mercury_data___vti_tuple_0
}};

const MR_TypeCtorInfo_Struct mercury_data_bit_buffer__type_ctor_info_bit_buffer_2 = {
	2,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___bit_buffer__bit_buffer_2_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___bit_buffer__bit_buffer_2_0)),
	"bit_buffer",
	"bit_buffer",
	{ 0 },
	{ (void *)&mercury_data_bit_buffer__pti_bit_buffer_3__pseudo_1__pseudo_2__plain___vti_tuple_0 },
	-1,
	0,
	NULL
};

static const MR_EnumFunctorDesc mercury_data_bit_buffer__enum_functor_desc_error_state_0_0 = {
	"error_state",
	0
};

const MR_EnumFunctorDescPtr mercury_data_bit_buffer__enum_value_ordered_error_state_0[] = {
	&mercury_data_bit_buffer__enum_functor_desc_error_state_0_0
};

const MR_EnumFunctorDescPtr mercury_data_bit_buffer__enum_name_ordered_error_state_0[] = {
	&mercury_data_bit_buffer__enum_functor_desc_error_state_0_0
};

const MR_Integer mercury_data_bit_buffer__functor_number_map_error_state_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_bit_buffer__type_ctor_info_error_state_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_DUMMY,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___bit_buffer__error_state_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___bit_buffer__error_state_0_0)),
	"bit_buffer",
	"error_state",
	{ (void *)mercury_data_bit_buffer__enum_name_ordered_error_state_0 },
	{ (void *)mercury_data_bit_buffer__enum_value_ordered_error_state_0 },
	1,
	4,
	mercury_data_bit_buffer__functor_number_map_error_state_0
};

static const MR_EnumFunctorDesc mercury_data_bit_buffer__enum_functor_desc_error_stream_0_0 = {
	"error_stream",
	0
};

const MR_EnumFunctorDescPtr mercury_data_bit_buffer__enum_value_ordered_error_stream_0[] = {
	&mercury_data_bit_buffer__enum_functor_desc_error_stream_0_0
};

const MR_EnumFunctorDescPtr mercury_data_bit_buffer__enum_name_ordered_error_stream_0[] = {
	&mercury_data_bit_buffer__enum_functor_desc_error_stream_0_0
};

const MR_Integer mercury_data_bit_buffer__functor_number_map_error_stream_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_bit_buffer__type_ctor_info_error_stream_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_DUMMY,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___bit_buffer__error_stream_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___bit_buffer__error_stream_0_0)),
	"bit_buffer",
	"error_stream",
	{ (void *)mercury_data_bit_buffer__enum_name_ordered_error_stream_0 },
	{ (void *)mercury_data_bit_buffer__enum_value_ordered_error_stream_0 },
	1,
	4,
	mercury_data_bit_buffer__functor_number_map_error_stream_0
};

static const MR_EnumFunctorDesc mercury_data_bit_buffer__enum_functor_desc_error_stream_error_0_0 = {
	"error_stream_error",
	0
};

const MR_EnumFunctorDescPtr mercury_data_bit_buffer__enum_value_ordered_error_stream_error_0[] = {
	&mercury_data_bit_buffer__enum_functor_desc_error_stream_error_0_0
};

const MR_EnumFunctorDescPtr mercury_data_bit_buffer__enum_name_ordered_error_stream_error_0[] = {
	&mercury_data_bit_buffer__enum_functor_desc_error_stream_error_0_0
};

const MR_Integer mercury_data_bit_buffer__functor_number_map_error_stream_error_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_bit_buffer__type_ctor_info_error_stream_error_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_DUMMY,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___bit_buffer__error_stream_error_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___bit_buffer__error_stream_error_0_0)),
	"bit_buffer",
	"error_stream_error",
	{ (void *)mercury_data_bit_buffer__enum_name_ordered_error_stream_error_0 },
	{ (void *)mercury_data_bit_buffer__enum_value_ordered_error_stream_error_0 },
	1,
	4,
	mercury_data_bit_buffer__functor_number_map_error_stream_error_0
};

const MR_BaseTypeclassInfo mercury_data_base_typeclass_info_stream__writer__arity3__bit_buffer__error_stream__arity0__bitmap__slice__arity0__bit_buffer__error_state__arity0__[] = {
	(MR_Code *) 0,
	(MR_Code *) 0,
	(MR_Code *) 1,
	(MR_Code *) 3,
	(MR_Code *) 1,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(bit_buffer__ClassMethod_for_stream__writer____bit_buffer__error_stream__arity0__bitmap__slice__arity0__bit_buffer__error_state__arity0______stream__put_4_4_0))
};

const MR_BaseTypeclassInfo mercury_data_base_typeclass_info_stream__stream__arity2__bit_buffer__error_stream__arity0__bit_buffer__error_state__arity0__[] = {
	(MR_Code *) 0,
	(MR_Code *) 0,
	(MR_Code *) 0,
	(MR_Code *) 2,
	(MR_Code *) 1,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(bit_buffer__ClassMethod_for_stream__stream____bit_buffer__error_stream__arity0__bit_buffer__error_state__arity0______stream__name_4_4_0))
};

const MR_BaseTypeclassInfo mercury_data_base_typeclass_info_stream__output__arity2__bit_buffer__error_stream__arity0__bit_buffer__error_state__arity0__[] = {
	(MR_Code *) 0,
	(MR_Code *) 0,
	(MR_Code *) 1,
	(MR_Code *) 2,
	(MR_Code *) 1,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(bit_buffer__ClassMethod_for_stream__output____bit_buffer__error_stream__arity0__bit_buffer__error_state__arity0______stream__flush_3_3_0))
};

const MR_BaseTypeclassInfo mercury_data_base_typeclass_info_stream__input__arity2__bit_buffer__error_stream__arity0__bit_buffer__error_state__arity0__[] = {
	(MR_Code *) 0,
	(MR_Code *) 0,
	(MR_Code *) 1,
	(MR_Code *) 2,
	(MR_Code *) 0,
	
};

const MR_BaseTypeclassInfo mercury_data_base_typeclass_info_stream__error__arity1__bit_buffer__error_stream_error__arity0__[] = {
	(MR_Code *) 0,
	(MR_Code *) 0,
	(MR_Code *) 0,
	(MR_Code *) 1,
	(MR_Code *) 1,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(fn__bit_buffer__ClassMethod_for_stream__error____bit_buffer__error_stream_error__arity0______stream__error_message_1_1_0))
};

const MR_BaseTypeclassInfo mercury_data_base_typeclass_info_stream__bulk_reader__arity5__bit_buffer__error_stream__arity0__int__arity0__bitmap__bitmap__arity0__bit_buffer__error_state__arity0__bit_buffer__error_stream_error__arity0__[] = {
	(MR_Code *) 0,
	(MR_Code *) 0,
	(MR_Code *) 2,
	(MR_Code *) 5,
	(MR_Code *) 1,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(bit_buffer__ClassMethod_for_stream__bulk_reader____bit_buffer__error_stream__arity0__int__arity0__bitmap__bitmap__arity0__bit_buffer__error_state__arity0__bit_buffer__error_stream_error__arity0______stream__bulk_get_9_9_0))
};




MR_BEGIN_MODULE(bit_buffer_module0)
	MR_init_entry1(fn__bit_buffer__new_buffer_2_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__bit_buffer__new_buffer_2_7_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'new_buffer_2'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__bit_buffer__new_buffer_2_7_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_BitmapPtr	BM;
	MR_Integer	Pos;
	MR_Integer	Size;
	MR_Word	UseStream;
	MR_Word	Stream;
	MR_Word	State;
	MR_Word	ReadStatus;
	ML_BitBufferPtr	Buffer;
#define	MR_PROC_LABEL	mercury__fn__bit_buffer__new_buffer_2_7_0
	BM = (MR_BitmapPtr) MR_r4;
	Pos = MR_r5;
	Size = MR_r6;
	UseStream = MR_r7;
	Stream = MR_r8;
	State = MR_r9;
	ReadStatus = MR_r10;
	MR_OBTAIN_GLOBAL_LOCK("new_buffer_2");
{
#line 175 "bit_buffer.m"
{
    MR_incr_hp_type_msg(Buffer, ML_BitBuffer, MR_ALLOC_ID,
        "bit_buffer.bit_buffer/3");
    Buffer->ML_bit_buffer_bitmap = BM;
    Buffer->ML_bit_buffer_pos = Pos;
    Buffer->ML_bit_buffer_size = Size;
    Buffer->ML_bit_buffer_use_stream = UseStream;
    Buffer->ML_bit_buffer_stream = Stream;
    Buffer->ML_bit_buffer_state = State;
    Buffer->ML_bit_buffer_filled_bitmaps = MR_list_empty_msg(MR_ALLOC_ID);
    Buffer->ML_bit_buffer_read_status = ReadStatus;
};}
#line 464 "bit_buffer.c"
	MR_RELEASE_GLOBAL_LOCK("new_buffer_2");
	MR_r1 = (MR_Word) Buffer;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
MR_decl_entry(fn__exception__throw_1_0);

MR_BEGIN_MODULE(bit_buffer_module1)
	MR_init_entry1(fn__bit_buffer__new_buffer_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__bit_buffer__new_buffer_6_0);
	MR_init_label1(fn__bit_buffer__new_buffer_6_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'new_buffer'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__bit_buffer__new_buffer_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_GT(MR_r6,0)) {
		MR_GOTO_LAB(fn__bit_buffer__new_buffer_6_0_i2);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR_ADDR(bit_buffer, bit_buffer, 3);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tfield(0, MR_tempr1, 2) = MR_r2;
	MR_tfield(0, MR_tempr1, 3) = MR_r3;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Word) MR_string_const("bit_buffer: invalid buffer size", 31);
	MR_np_tailcall_ent(fn__exception__throw_1_0);
	}
MR_def_label(fn__bit_buffer__new_buffer_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_BitmapPtr	BM;
	MR_Integer	Pos;
	MR_Integer	Size;
	MR_Word	UseStream;
	MR_Word	Stream;
	MR_Word	State;
	MR_Word	ReadStatus;
	ML_BitBufferPtr	Buffer;
#define	MR_PROC_LABEL	mercury__fn__bit_buffer__new_buffer_6_0
	BM = (MR_BitmapPtr) MR_r4;
	Pos = MR_r5;
	Size = MR_r6;
	UseStream = MR_r7;
	Stream = MR_r8;
	State = MR_r9;
	ReadStatus = (MR_Word) MR_tbmkword(0, 0);
	MR_OBTAIN_GLOBAL_LOCK("new_buffer_2");
{
#line 175 "bit_buffer.m"
{
    MR_incr_hp_type_msg(Buffer, ML_BitBuffer, MR_ALLOC_ID,
        "bit_buffer.bit_buffer/3");
    Buffer->ML_bit_buffer_bitmap = BM;
    Buffer->ML_bit_buffer_pos = Pos;
    Buffer->ML_bit_buffer_size = Size;
    Buffer->ML_bit_buffer_use_stream = UseStream;
    Buffer->ML_bit_buffer_stream = Stream;
    Buffer->ML_bit_buffer_state = State;
    Buffer->ML_bit_buffer_filled_bitmaps = MR_list_empty_msg(MR_ALLOC_ID);
    Buffer->ML_bit_buffer_read_status = ReadStatus;
};}
#line 542 "bit_buffer.c"
	MR_RELEASE_GLOBAL_LOCK("new_buffer_2");
	MR_r1 = (MR_Word) Buffer;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bit_buffer_module2)
	MR_init_entry1(fn__bit_buffer__bitmap_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__bit_buffer__bitmap_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'bitmap'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__bit_buffer__bitmap_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	ML_BitBufferPtr	Buffer;
	MR_BitmapPtr	BM;
#define	MR_PROC_LABEL	mercury__fn__bit_buffer__bitmap_1_0
	Buffer = (ML_BitBufferPtr) MR_r4;
	MR_OBTAIN_GLOBAL_LOCK("bitmap");
{
#line 213 "bit_buffer.m"

    BM = Buffer->ML_bit_buffer_bitmap;
;}
#line 579 "bit_buffer.c"
	MR_RELEASE_GLOBAL_LOCK("bitmap");
	MR_r1 = (MR_Word) BM;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bit_buffer_module3)
	MR_init_entry1(fn__bit_buffer__pos_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__bit_buffer__pos_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'pos'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__bit_buffer__pos_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	ML_BitBufferPtr	Buffer;
	MR_Integer	Pos;
#define	MR_PROC_LABEL	mercury__fn__bit_buffer__pos_1_0
	Buffer = (ML_BitBufferPtr) MR_r4;
	MR_OBTAIN_GLOBAL_LOCK("pos");
{
#line 220 "bit_buffer.m"

    Pos = Buffer->ML_bit_buffer_pos;
;}
#line 616 "bit_buffer.c"
	MR_RELEASE_GLOBAL_LOCK("pos");
	MR_r1 = Pos;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bit_buffer_module4)
	MR_init_entry1(fn__bit_buffer__size_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__bit_buffer__size_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'size'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__bit_buffer__size_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	ML_BitBufferPtr	Buffer;
	MR_Integer	Size;
#define	MR_PROC_LABEL	mercury__fn__bit_buffer__size_1_0
	Buffer = (ML_BitBufferPtr) MR_r4;
	MR_OBTAIN_GLOBAL_LOCK("size");
{
#line 227 "bit_buffer.m"

    Size = Buffer->ML_bit_buffer_size;
;}
#line 653 "bit_buffer.c"
	MR_RELEASE_GLOBAL_LOCK("size");
	MR_r1 = Size;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bit_buffer_module5)
	MR_init_entry1(fn__bit_buffer__use_stream_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__bit_buffer__use_stream_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'use_stream'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__bit_buffer__use_stream_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	ML_BitBufferPtr	Buffer;
	MR_Word	UseStream;
#define	MR_PROC_LABEL	mercury__fn__bit_buffer__use_stream_1_0
	Buffer = (ML_BitBufferPtr) MR_r4;
	MR_OBTAIN_GLOBAL_LOCK("use_stream");
{
#line 234 "bit_buffer.m"

    UseStream = Buffer->ML_bit_buffer_use_stream;
;}
#line 690 "bit_buffer.c"
	MR_RELEASE_GLOBAL_LOCK("use_stream");
	MR_r1 = UseStream;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bit_buffer_module6)
	MR_init_entry1(fn__bit_buffer__stream_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__bit_buffer__stream_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'stream'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__bit_buffer__stream_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	ML_BitBufferPtr	Buffer;
	MR_Word	Stream;
#define	MR_PROC_LABEL	mercury__fn__bit_buffer__stream_1_0
	Buffer = (ML_BitBufferPtr) MR_r4;
	MR_OBTAIN_GLOBAL_LOCK("stream");
{
#line 241 "bit_buffer.m"

    Stream = Buffer->ML_bit_buffer_stream;
;}
#line 727 "bit_buffer.c"
	MR_RELEASE_GLOBAL_LOCK("stream");
	MR_r1 = Stream;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bit_buffer_module7)
	MR_init_entry1(fn__bit_buffer__state_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__bit_buffer__state_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'state'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__bit_buffer__state_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	ML_BitBufferPtr	Buffer;
	MR_Word	State;
#define	MR_PROC_LABEL	mercury__fn__bit_buffer__state_1_0
	Buffer = (ML_BitBufferPtr) MR_r4;
	MR_OBTAIN_GLOBAL_LOCK("state");
{
#line 248 "bit_buffer.m"

    State = Buffer->ML_bit_buffer_state;
;}
#line 764 "bit_buffer.c"
	MR_RELEASE_GLOBAL_LOCK("state");
	MR_r1 = State;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bit_buffer_module8)
	MR_init_entry1(fn__bit_buffer__filled_bitmaps_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__bit_buffer__filled_bitmaps_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'filled_bitmaps'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__bit_buffer__filled_bitmaps_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	ML_BitBufferPtr	Buffer;
	MR_Word	FilledBMs;
#define	MR_PROC_LABEL	mercury__fn__bit_buffer__filled_bitmaps_1_0
	Buffer = (ML_BitBufferPtr) MR_r4;
	MR_OBTAIN_GLOBAL_LOCK("filled_bitmaps");
{
#line 255 "bit_buffer.m"

    FilledBMs = Buffer->ML_bit_buffer_filled_bitmaps;
;}
#line 801 "bit_buffer.c"
	MR_RELEASE_GLOBAL_LOCK("filled_bitmaps");
	MR_r1 = FilledBMs;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bit_buffer_module9)
	MR_init_entry1(fn__bit_buffer__read_status_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__bit_buffer__read_status_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'read_status'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__bit_buffer__read_status_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	ML_BitBufferPtr	Buffer;
	MR_Word	ReadStatus;
#define	MR_PROC_LABEL	mercury__fn__bit_buffer__read_status_1_0
	Buffer = (ML_BitBufferPtr) MR_r4;
	MR_OBTAIN_GLOBAL_LOCK("read_status");
{
#line 262 "bit_buffer.m"

    ReadStatus = Buffer->ML_bit_buffer_read_status;
;}
#line 838 "bit_buffer.c"
	MR_RELEASE_GLOBAL_LOCK("read_status");
	MR_r1 = ReadStatus;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bit_buffer_module10)
	MR_init_entry1(bit_buffer__set_all_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__bit_buffer__set_all_7_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'set_all'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__bit_buffer__set_all_7_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_BitmapPtr	BM;
	MR_Integer	Pos;
	MR_Integer	Size;
	MR_Word	State;
	MR_Word	FilledBMs;
	ML_BitBufferPtr	Buffer0;
	ML_BitBufferPtr	Buffer;
#define	MR_PROC_LABEL	mercury__bit_buffer__set_all_7_0
	BM = (MR_BitmapPtr) MR_r4;
	Pos = MR_r5;
	Size = MR_r6;
	State = MR_r7;
	FilledBMs = MR_r8;
	Buffer0 = (ML_BitBufferPtr) MR_r9;
	MR_OBTAIN_GLOBAL_LOCK("set_all");
{
#line 281 "bit_buffer.m"

    Buffer = Buffer0;
    Buffer->ML_bit_buffer_bitmap = BM;
    Buffer->ML_bit_buffer_pos = Pos;
    Buffer->ML_bit_buffer_size = Size;
    Buffer->ML_bit_buffer_state = State;
    Buffer->ML_bit_buffer_filled_bitmaps = FilledBMs;
;}
#line 890 "bit_buffer.c"
	MR_RELEASE_GLOBAL_LOCK("set_all");
	MR_r1 = (MR_Word) Buffer;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bit_buffer_module11)
	MR_init_entry1(bit_buffer__set_bitmap_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__bit_buffer__set_bitmap_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'set_bitmap'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__bit_buffer__set_bitmap_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_BitmapPtr	BM;
	MR_Integer	Pos;
	ML_BitBufferPtr	Buffer0;
	ML_BitBufferPtr	Buffer;
#define	MR_PROC_LABEL	mercury__bit_buffer__set_bitmap_4_0
	BM = (MR_BitmapPtr) MR_r4;
	Pos = MR_r5;
	Buffer0 = (ML_BitBufferPtr) MR_r6;
	MR_OBTAIN_GLOBAL_LOCK("set_bitmap");
{
#line 302 "bit_buffer.m"

    Buffer = Buffer0;
    Buffer->ML_bit_buffer_bitmap = BM;
    Buffer->ML_bit_buffer_pos = Pos;
;}
#line 933 "bit_buffer.c"
	MR_RELEASE_GLOBAL_LOCK("set_bitmap");
	MR_r1 = (MR_Word) Buffer;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bit_buffer_module12)
	MR_init_entry1(bit_buffer__set_state_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__bit_buffer__set_state_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'set_state'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__bit_buffer__set_state_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	State;
	ML_BitBufferPtr	Buffer0;
	ML_BitBufferPtr	Buffer;
#define	MR_PROC_LABEL	mercury__bit_buffer__set_state_3_0
	State = MR_r4;
	Buffer0 = (ML_BitBufferPtr) MR_r5;
	MR_OBTAIN_GLOBAL_LOCK("set_state");
{
#line 318 "bit_buffer.m"

    Buffer = Buffer0;
    Buffer->ML_bit_buffer_state = State;
;}
#line 973 "bit_buffer.c"
	MR_RELEASE_GLOBAL_LOCK("set_state");
	MR_r1 = (MR_Word) Buffer;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bit_buffer_module13)
	MR_init_entry1(bit_buffer__set_use_stream_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__bit_buffer__set_use_stream_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'set_use_stream'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__bit_buffer__set_use_stream_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	UseStream;
	ML_BitBufferPtr	Buffer0;
	ML_BitBufferPtr	Buffer;
#define	MR_PROC_LABEL	mercury__bit_buffer__set_use_stream_3_0
	UseStream = MR_r4;
	Buffer0 = (ML_BitBufferPtr) MR_r5;
	MR_OBTAIN_GLOBAL_LOCK("set_use_stream");
{
#line 334 "bit_buffer.m"

    Buffer = Buffer0;
    Buffer->ML_bit_buffer_use_stream = UseStream;
;}
#line 1013 "bit_buffer.c"
	MR_RELEASE_GLOBAL_LOCK("set_use_stream");
	MR_r1 = (MR_Word) Buffer;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bit_buffer_module14)
	MR_init_entry1(bit_buffer__set_read_status_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__bit_buffer__set_read_status_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'set_read_status'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__bit_buffer__set_read_status_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	ReadStatus;
	ML_BitBufferPtr	Buffer0;
	ML_BitBufferPtr	Buffer;
#define	MR_PROC_LABEL	mercury__bit_buffer__set_read_status_3_0
	ReadStatus = MR_r4;
	Buffer0 = (ML_BitBufferPtr) MR_r5;
	MR_OBTAIN_GLOBAL_LOCK("set_read_status");
{
#line 350 "bit_buffer.m"

    Buffer = Buffer0;
    Buffer->ML_bit_buffer_read_status = ReadStatus;
;}
#line 1053 "bit_buffer.c"
	MR_RELEASE_GLOBAL_LOCK("set_read_status");
	MR_r1 = (MR_Word) Buffer;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___builtin__c_pointer_0_0);

MR_BEGIN_MODULE(bit_buffer_module15)
	MR_init_entry1(__Unify___bit_buffer__bit_buffer_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___bit_buffer__bit_buffer_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___bit_buffer__bit_buffer_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_r2 = MR_r4;
	MR_np_tailcall_ent(__Unify___builtin__c_pointer_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___builtin__c_pointer_0_0);

MR_BEGIN_MODULE(bit_buffer_module16)
	MR_init_entry1(__Compare___bit_buffer__bit_buffer_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___bit_buffer__bit_buffer_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___bit_buffer__bit_buffer_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_r2 = MR_r4;
	MR_np_tailcall_ent(__Compare___builtin__c_pointer_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bit_buffer_module17)
	MR_init_entry1(__Unify___bit_buffer__bit_buffer_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___bit_buffer__bit_buffer_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___bit_buffer__bit_buffer_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r4;
	MR_r2 = MR_r5;
	MR_np_tailcall_ent(__Unify___builtin__c_pointer_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bit_buffer_module18)
	MR_init_entry1(__Compare___bit_buffer__bit_buffer_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___bit_buffer__bit_buffer_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___bit_buffer__bit_buffer_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r4;
	MR_r2 = MR_r5;
	MR_np_tailcall_ent(__Compare___builtin__c_pointer_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bit_buffer_module19)
	MR_init_entry1(__Unify___bit_buffer__error_state_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___bit_buffer__error_state_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___bit_buffer__error_state_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(f_98_105_116_95_98_117_102_102_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_98_105_116_95_98_117_102_102_101_114_95_95_101_114_114_111_114_95_115_116_97_116_101_95_48_95_95_91_49_44_32_50_93_95_48_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bit_buffer_module20)
	MR_init_entry1(__Compare___bit_buffer__error_state_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___bit_buffer__error_state_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___bit_buffer__error_state_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(f_98_105_116_95_98_117_102_102_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_98_105_116_95_98_117_102_102_101_114_95_95_101_114_114_111_114_95_115_116_97_116_101_95_48_95_95_91_50_44_32_51_93_95_48_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bit_buffer_module21)
	MR_init_entry1(__Unify___bit_buffer__error_stream_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___bit_buffer__error_stream_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___bit_buffer__error_stream_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(f_98_105_116_95_98_117_102_102_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_98_105_116_95_98_117_102_102_101_114_95_95_101_114_114_111_114_95_115_116_114_101_97_109_95_48_95_95_91_49_44_32_50_93_95_48_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bit_buffer_module22)
	MR_init_entry1(__Compare___bit_buffer__error_stream_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___bit_buffer__error_stream_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___bit_buffer__error_stream_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(f_98_105_116_95_98_117_102_102_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_98_105_116_95_98_117_102_102_101_114_95_95_101_114_114_111_114_95_115_116_114_101_97_109_95_48_95_95_91_50_44_32_51_93_95_48_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bit_buffer_module23)
	MR_init_entry1(__Unify___bit_buffer__error_stream_error_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___bit_buffer__error_stream_error_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___bit_buffer__error_stream_error_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(f_98_105_116_95_98_117_102_102_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_98_105_116_95_98_117_102_102_101_114_95_95_101_114_114_111_114_95_115_116_114_101_97_109_95_101_114_114_111_114_95_48_95_95_91_49_44_32_50_93_95_48_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bit_buffer_module24)
	MR_init_entry1(__Compare___bit_buffer__error_stream_error_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___bit_buffer__error_stream_error_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___bit_buffer__error_stream_error_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(f_98_105_116_95_98_117_102_102_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_98_105_116_95_98_117_102_102_101_114_95_95_101_114_114_111_114_95_115_116_114_101_97_109_95_101_114_114_111_114_95_48_95_95_91_50_44_32_51_93_95_48_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bit_buffer_module25)
	MR_init_entry1(bit_buffer__ClassMethod_for_stream__bulk_reader____bit_buffer__error_stream__arity0__int__arity0__bitmap__bitmap__arity0__bit_buffer__error_state__arity0__bit_buffer__error_stream_error__arity0______stream__bulk_get_9_9_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__bit_buffer__ClassMethod_for_stream__bulk_reader____bit_buffer__error_stream__arity0__int__arity0__bitmap__bitmap__arity0__bit_buffer__error_state__arity0__bit_buffer__error_stream_error__arity0______stream__bulk_get_9_9_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ClassMethod_for_stream__bulk_reader____bit_buffer__error_stream__arity0__int__arity0__bitmap__bitmap__arity0__bit_buffer__error_state__arity0__bit_buffer__error_stream_error__arity0______stream__bulk_get_9'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__bit_buffer__ClassMethod_for_stream__bulk_reader____bit_buffer__error_stream__arity0__int__arity0__bitmap__bitmap__arity0__bit_buffer__error_state__arity0__bit_buffer__error_stream_error__arity0______stream__bulk_get_9_9_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r4;
	MR_np_tailcall_ent(f_98_105_116_95_98_117_102_102_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_115_116_114_101_97_109_95_95_98_117_108_107_95_114_101_97_100_101_114_95_95_95_95_98_105_116_95_98_117_102_102_101_114_95_95_101_114_114_111_114_95_115_116_114_101_97_109_95_95_97_114_105_116_121_48_95_95_105_110_116_95_95_97_114_105_116_121_48_95_95_98_105_116_109_97_112_95_95_98_105_116_109_97_112_95_95_97_114_105_116_121_48_95_95_98_105_116_95_98_117_102_102_101_114_95_95_101_114_114_111_114_95_115_116_97_116_101_95_95_97_114_105_116_121_48_95_95_98_105_116_95_98_117_102_102_101_114_95_95_101_114_114_111_114_95_115_116_114_101_97_109_95_101_114_114_111_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_115_116_114_101_97_109_95_95_98_117_108_107_95_103_101_116_95_57_95_95_91_49_44_32_50_44_32_51_93_95_48_9_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bit_buffer_module26)
	MR_init_entry1(fn__bit_buffer__ClassMethod_for_stream__error____bit_buffer__error_stream_error__arity0______stream__error_message_1_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__bit_buffer__ClassMethod_for_stream__error____bit_buffer__error_stream_error__arity0______stream__error_message_1_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ClassMethod_for_stream__error____bit_buffer__error_stream_error__arity0______stream__error_message_1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__bit_buffer__ClassMethod_for_stream__error____bit_buffer__error_stream_error__arity0______stream__error_message_1_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(fn__f_98_105_116_95_98_117_102_102_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_115_116_114_101_97_109_95_95_101_114_114_111_114_95_95_95_95_98_105_116_95_98_117_102_102_101_114_95_95_101_114_114_111_114_95_115_116_114_101_97_109_95_101_114_114_111_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_115_116_114_101_97_109_95_95_101_114_114_111_114_95_109_101_115_115_97_103_101_95_49_95_95_91_49_93_95_48_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bit_buffer_module27)
	MR_init_entry1(bit_buffer__ClassMethod_for_stream__output____bit_buffer__error_stream__arity0__bit_buffer__error_state__arity0______stream__flush_3_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__bit_buffer__ClassMethod_for_stream__output____bit_buffer__error_stream__arity0__bit_buffer__error_state__arity0______stream__flush_3_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ClassMethod_for_stream__output____bit_buffer__error_stream__arity0__bit_buffer__error_state__arity0______stream__flush_3'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__bit_buffer__ClassMethod_for_stream__output____bit_buffer__error_stream__arity0__bit_buffer__error_state__arity0______stream__flush_3_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(f_98_105_116_95_98_117_102_102_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_115_116_114_101_97_109_95_95_111_117_116_112_117_116_95_95_95_95_98_105_116_95_98_117_102_102_101_114_95_95_101_114_114_111_114_95_115_116_114_101_97_109_95_95_97_114_105_116_121_48_95_95_98_105_116_95_98_117_102_102_101_114_95_95_101_114_114_111_114_95_115_116_97_116_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_115_116_114_101_97_109_95_95_102_108_117_115_104_95_51_95_95_91_49_44_32_50_93_95_48_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bit_buffer_module28)
	MR_init_entry1(bit_buffer__ClassMethod_for_stream__stream____bit_buffer__error_stream__arity0__bit_buffer__error_state__arity0______stream__name_4_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__bit_buffer__ClassMethod_for_stream__stream____bit_buffer__error_stream__arity0__bit_buffer__error_state__arity0______stream__name_4_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ClassMethod_for_stream__stream____bit_buffer__error_stream__arity0__bit_buffer__error_state__arity0______stream__name_4'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__bit_buffer__ClassMethod_for_stream__stream____bit_buffer__error_stream__arity0__bit_buffer__error_state__arity0______stream__name_4_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(f_98_105_116_95_98_117_102_102_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_115_116_114_101_97_109_95_95_115_116_114_101_97_109_95_95_95_95_98_105_116_95_98_117_102_102_101_114_95_95_101_114_114_111_114_95_115_116_114_101_97_109_95_95_97_114_105_116_121_48_95_95_98_105_116_95_98_117_102_102_101_114_95_95_101_114_114_111_114_95_115_116_97_116_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_115_116_114_101_97_109_95_95_110_97_109_101_95_52_95_95_91_49_93_95_48_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bit_buffer_module29)
	MR_init_entry1(bit_buffer__ClassMethod_for_stream__writer____bit_buffer__error_stream__arity0__bitmap__slice__arity0__bit_buffer__error_state__arity0______stream__put_4_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__bit_buffer__ClassMethod_for_stream__writer____bit_buffer__error_stream__arity0__bitmap__slice__arity0__bit_buffer__error_state__arity0______stream__put_4_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ClassMethod_for_stream__writer____bit_buffer__error_stream__arity0__bitmap__slice__arity0__bit_buffer__error_state__arity0______stream__put_4'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__bit_buffer__ClassMethod_for_stream__writer____bit_buffer__error_stream__arity0__bitmap__slice__arity0__bit_buffer__error_state__arity0______stream__put_4_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(f_98_105_116_95_98_117_102_102_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_115_116_114_101_97_109_95_95_119_114_105_116_101_114_95_95_95_95_98_105_116_95_98_117_102_102_101_114_95_95_101_114_114_111_114_95_115_116_114_101_97_109_95_95_97_114_105_116_121_48_95_95_98_105_116_109_97_112_95_95_115_108_105_99_101_95_95_97_114_105_116_121_48_95_95_98_105_116_95_98_117_102_102_101_114_95_95_101_114_114_111_114_95_115_116_97_116_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_115_116_114_101_97_109_95_95_112_117_116_95_52_95_95_91_49_44_32_50_44_32_51_93_95_48_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bit_buffer_module30)
	MR_init_entry1(f_98_105_116_95_98_117_102_102_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_98_105_116_95_98_117_102_102_101_114_95_95_101_114_114_111_114_95_115_116_97_116_101_95_48_95_95_91_49_44_32_50_93_95_48_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_98_105_116_95_98_117_102_102_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_98_105_116_95_98_117_102_102_101_114_95_95_101_114_114_111_114_95_115_116_97_116_101_95_48_95_95_91_49_44_32_50_93_95_48_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred____Unify___bit_buffer__error_state_0__[1, 2]_0'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__f_98_105_116_95_98_117_102_102_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_98_105_116_95_98_117_102_102_101_114_95_95_101_114_114_111_114_95_115_116_97_116_101_95_48_95_95_91_49_44_32_50_93_95_48_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bit_buffer_module31)
	MR_init_entry1(f_98_105_116_95_98_117_102_102_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_98_105_116_95_98_117_102_102_101_114_95_95_101_114_114_111_114_95_115_116_97_116_101_95_48_95_95_91_50_44_32_51_93_95_48_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_98_105_116_95_98_117_102_102_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_98_105_116_95_98_117_102_102_101_114_95_95_101_114_114_111_114_95_115_116_97_116_101_95_48_95_95_91_50_44_32_51_93_95_48_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred____Compare___bit_buffer__error_state_0__[2, 3]_0'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__f_98_105_116_95_98_117_102_102_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_98_105_116_95_98_117_102_102_101_114_95_95_101_114_114_111_114_95_115_116_97_116_101_95_48_95_95_91_50_44_32_51_93_95_48_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bit_buffer_module32)
	MR_init_entry1(f_98_105_116_95_98_117_102_102_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_98_105_116_95_98_117_102_102_101_114_95_95_101_114_114_111_114_95_115_116_114_101_97_109_95_48_95_95_91_49_44_32_50_93_95_48_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_98_105_116_95_98_117_102_102_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_98_105_116_95_98_117_102_102_101_114_95_95_101_114_114_111_114_95_115_116_114_101_97_109_95_48_95_95_91_49_44_32_50_93_95_48_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred____Unify___bit_buffer__error_stream_0__[1, 2]_0'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__f_98_105_116_95_98_117_102_102_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_98_105_116_95_98_117_102_102_101_114_95_95_101_114_114_111_114_95_115_116_114_101_97_109_95_48_95_95_91_49_44_32_50_93_95_48_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bit_buffer_module33)
	MR_init_entry1(f_98_105_116_95_98_117_102_102_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_98_105_116_95_98_117_102_102_101_114_95_95_101_114_114_111_114_95_115_116_114_101_97_109_95_48_95_95_91_50_44_32_51_93_95_48_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_98_105_116_95_98_117_102_102_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_98_105_116_95_98_117_102_102_101_114_95_95_101_114_114_111_114_95_115_116_114_101_97_109_95_48_95_95_91_50_44_32_51_93_95_48_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred____Compare___bit_buffer__error_stream_0__[2, 3]_0'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__f_98_105_116_95_98_117_102_102_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_98_105_116_95_98_117_102_102_101_114_95_95_101_114_114_111_114_95_115_116_114_101_97_109_95_48_95_95_91_50_44_32_51_93_95_48_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bit_buffer_module34)
	MR_init_entry1(f_98_105_116_95_98_117_102_102_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_98_105_116_95_98_117_102_102_101_114_95_95_101_114_114_111_114_95_115_116_114_101_97_109_95_101_114_114_111_114_95_48_95_95_91_49_44_32_50_93_95_48_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_98_105_116_95_98_117_102_102_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_98_105_116_95_98_117_102_102_101_114_95_95_101_114_114_111_114_95_115_116_114_101_97_109_95_101_114_114_111_114_95_48_95_95_91_49_44_32_50_93_95_48_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred____Unify___bit_buffer__error_stream_error_0__[1, 2]_0'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__f_98_105_116_95_98_117_102_102_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_98_105_116_95_98_117_102_102_101_114_95_95_101_114_114_111_114_95_115_116_114_101_97_109_95_101_114_114_111_114_95_48_95_95_91_49_44_32_50_93_95_48_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bit_buffer_module35)
	MR_init_entry1(f_98_105_116_95_98_117_102_102_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_98_105_116_95_98_117_102_102_101_114_95_95_101_114_114_111_114_95_115_116_114_101_97_109_95_101_114_114_111_114_95_48_95_95_91_50_44_32_51_93_95_48_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_98_105_116_95_98_117_102_102_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_98_105_116_95_98_117_102_102_101_114_95_95_101_114_114_111_114_95_115_116_114_101_97_109_95_101_114_114_111_114_95_48_95_95_91_50_44_32_51_93_95_48_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred____Compare___bit_buffer__error_stream_error_0__[2, 3]_0'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__f_98_105_116_95_98_117_102_102_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_98_105_116_95_98_117_102_102_101_114_95_95_101_114_114_111_114_95_115_116_114_101_97_109_95_101_114_114_111_114_95_48_95_95_91_50_44_32_51_93_95_48_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bit_buffer_module36)
	MR_init_entry1(fn__f_98_105_116_95_98_117_102_102_101_114_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__f_98_105_116_95_98_117_102_102_101_114_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__func__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__max_priority_1__[1]_0'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__f_98_105_116_95_98_117_102_102_101_114_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1200;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bit_buffer_module37)
	MR_init_entry1(f_98_105_116_95_98_117_102_102_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_115_116_114_101_97_109_95_95_98_117_108_107_95_114_101_97_100_101_114_95_95_95_95_98_105_116_95_98_117_102_102_101_114_95_95_101_114_114_111_114_95_115_116_114_101_97_109_95_95_97_114_105_116_121_48_95_95_105_110_116_95_95_97_114_105_116_121_48_95_95_98_105_116_109_97_112_95_95_98_105_116_109_97_112_95_95_97_114_105_116_121_48_95_95_98_105_116_95_98_117_102_102_101_114_95_95_101_114_114_111_114_95_115_116_97_116_101_95_95_97_114_105_116_121_48_95_95_98_105_116_95_98_117_102_102_101_114_95_95_101_114_114_111_114_95_115_116_114_101_97_109_95_101_114_114_111_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_115_116_114_101_97_109_95_95_98_117_108_107_95_103_101_116_95_57_95_95_91_49_44_32_50_44_32_51_93_95_48_9_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_98_105_116_95_98_117_102_102_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_115_116_114_101_97_109_95_95_98_117_108_107_95_114_101_97_100_101_114_95_95_95_95_98_105_116_95_98_117_102_102_101_114_95_95_101_114_114_111_114_95_115_116_114_101_97_109_95_95_97_114_105_116_121_48_95_95_105_110_116_95_95_97_114_105_116_121_48_95_95_98_105_116_109_97_112_95_95_98_105_116_109_97_112_95_95_97_114_105_116_121_48_95_95_98_105_116_95_98_117_102_102_101_114_95_95_101_114_114_111_114_95_115_116_97_116_101_95_95_97_114_105_116_121_48_95_95_98_105_116_95_98_117_102_102_101_114_95_95_101_114_114_111_114_95_115_116_114_101_97_109_95_101_114_114_111_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_115_116_114_101_97_109_95_95_98_117_108_107_95_103_101_116_95_57_95_95_91_49_44_32_50_44_32_51_93_95_48_9_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__ClassMethod_for_stream__bulk_reader____bit_buffer__error_stream__arity0__int__arity0__bitmap__bitmap__arity0__bit_buffer__error_state__arity0__bit_buffer__error_stream_error__arity0______stream__bulk_get_9__[1, 2, 3]_0'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__f_98_105_116_95_98_117_102_102_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_115_116_114_101_97_109_95_95_98_117_108_107_95_114_101_97_100_101_114_95_95_95_95_98_105_116_95_98_117_102_102_101_114_95_95_101_114_114_111_114_95_115_116_114_101_97_109_95_95_97_114_105_116_121_48_95_95_105_110_116_95_95_97_114_105_116_121_48_95_95_98_105_116_109_97_112_95_95_98_105_116_109_97_112_95_95_97_114_105_116_121_48_95_95_98_105_116_95_98_117_102_102_101_114_95_95_101_114_114_111_114_95_115_116_97_116_101_95_95_97_114_105_116_121_48_95_95_98_105_116_95_98_117_102_102_101_114_95_95_101_114_114_111_114_95_115_116_114_101_97_109_95_101_114_114_111_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_115_116_114_101_97_109_95_95_98_117_108_107_95_103_101_116_95_57_95_95_91_49_44_32_50_44_32_51_93_95_48_9_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 0;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,0,0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bit_buffer_module38)
	MR_init_entry1(fn__f_98_105_116_95_98_117_102_102_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_115_116_114_101_97_109_95_95_101_114_114_111_114_95_95_95_95_98_105_116_95_98_117_102_102_101_114_95_95_101_114_114_111_114_95_115_116_114_101_97_109_95_101_114_114_111_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_115_116_114_101_97_109_95_95_101_114_114_111_114_95_109_101_115_115_97_103_101_95_49_95_95_91_49_93_95_48_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__f_98_105_116_95_98_117_102_102_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_115_116_114_101_97_109_95_95_101_114_114_111_114_95_95_95_95_98_105_116_95_98_117_102_102_101_114_95_95_101_114_114_111_114_95_115_116_114_101_97_109_95_101_114_114_111_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_115_116_114_101_97_109_95_95_101_114_114_111_114_95_109_101_115_115_97_103_101_95_49_95_95_91_49_93_95_48_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__func__ClassMethod_for_stream__error____bit_buffer__error_stream_error__arity0______stream__error_message_1__[1]_0'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__f_98_105_116_95_98_117_102_102_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_115_116_114_101_97_109_95_95_101_114_114_111_114_95_95_95_95_98_105_116_95_98_117_102_102_101_114_95_95_101_114_114_111_114_95_115_116_114_101_97_109_95_101_114_114_111_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_115_116_114_101_97_109_95_95_101_114_114_111_114_95_109_101_115_115_97_103_101_95_49_95_95_91_49_93_95_48_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("method called for error_stream", 30);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(exception__throw_1_0);

MR_BEGIN_MODULE(bit_buffer_module39)
	MR_init_entry1(f_98_105_116_95_98_117_102_102_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_115_116_114_101_97_109_95_95_111_117_116_112_117_116_95_95_95_95_98_105_116_95_98_117_102_102_101_114_95_95_101_114_114_111_114_95_115_116_114_101_97_109_95_95_97_114_105_116_121_48_95_95_98_105_116_95_98_117_102_102_101_114_95_95_101_114_114_111_114_95_115_116_97_116_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_115_116_114_101_97_109_95_95_102_108_117_115_104_95_51_95_95_91_49_44_32_50_93_95_48_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_98_105_116_95_98_117_102_102_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_115_116_114_101_97_109_95_95_111_117_116_112_117_116_95_95_95_95_98_105_116_95_98_117_102_102_101_114_95_95_101_114_114_111_114_95_115_116_114_101_97_109_95_95_97_114_105_116_121_48_95_95_98_105_116_95_98_117_102_102_101_114_95_95_101_114_114_111_114_95_115_116_97_116_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_115_116_114_101_97_109_95_95_102_108_117_115_104_95_51_95_95_91_49_44_32_50_93_95_48_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__ClassMethod_for_stream__output____bit_buffer__error_stream__arity0__bit_buffer__error_state__arity0______stream__flush_3__[1, 2]_0'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__f_98_105_116_95_98_117_102_102_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_115_116_114_101_97_109_95_95_111_117_116_112_117_116_95_95_95_95_98_105_116_95_98_117_102_102_101_114_95_95_101_114_114_111_114_95_115_116_114_101_97_109_95_95_97_114_105_116_121_48_95_95_98_105_116_95_98_117_102_102_101_114_95_95_101_114_114_111_114_95_115_116_97_116_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_115_116_114_101_97_109_95_95_102_108_117_115_104_95_51_95_95_91_49_44_32_50_93_95_48_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(bit_buffer, error_stream_error);
	MR_np_tailcall_ent(exception__throw_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bit_buffer_module40)
	MR_init_entry1(f_98_105_116_95_98_117_102_102_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_115_116_114_101_97_109_95_95_115_116_114_101_97_109_95_95_95_95_98_105_116_95_98_117_102_102_101_114_95_95_101_114_114_111_114_95_115_116_114_101_97_109_95_95_97_114_105_116_121_48_95_95_98_105_116_95_98_117_102_102_101_114_95_95_101_114_114_111_114_95_115_116_97_116_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_115_116_114_101_97_109_95_95_110_97_109_101_95_52_95_95_91_49_93_95_48_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_98_105_116_95_98_117_102_102_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_115_116_114_101_97_109_95_95_115_116_114_101_97_109_95_95_95_95_98_105_116_95_98_117_102_102_101_114_95_95_101_114_114_111_114_95_115_116_114_101_97_109_95_95_97_114_105_116_121_48_95_95_98_105_116_95_98_117_102_102_101_114_95_95_101_114_114_111_114_95_115_116_97_116_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_115_116_114_101_97_109_95_95_110_97_109_101_95_52_95_95_91_49_93_95_48_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__ClassMethod_for_stream__stream____bit_buffer__error_stream__arity0__bit_buffer__error_state__arity0______stream__name_4__[1]_0'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__f_98_105_116_95_98_117_102_102_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_115_116_114_101_97_109_95_95_115_116_114_101_97_109_95_95_95_95_98_105_116_95_98_117_102_102_101_114_95_95_101_114_114_111_114_95_115_116_114_101_97_109_95_95_97_114_105_116_121_48_95_95_98_105_116_95_98_117_102_102_101_114_95_95_101_114_114_111_114_95_115_116_97_116_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_115_116_114_101_97_109_95_95_110_97_109_101_95_52_95_95_91_49_93_95_48_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("error_stream", 12);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bit_buffer_module41)
	MR_init_entry1(f_98_105_116_95_98_117_102_102_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_115_116_114_101_97_109_95_95_119_114_105_116_101_114_95_95_95_95_98_105_116_95_98_117_102_102_101_114_95_95_101_114_114_111_114_95_115_116_114_101_97_109_95_95_97_114_105_116_121_48_95_95_98_105_116_109_97_112_95_95_115_108_105_99_101_95_95_97_114_105_116_121_48_95_95_98_105_116_95_98_117_102_102_101_114_95_95_101_114_114_111_114_95_115_116_97_116_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_115_116_114_101_97_109_95_95_112_117_116_95_52_95_95_91_49_44_32_50_44_32_51_93_95_48_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_98_105_116_95_98_117_102_102_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_115_116_114_101_97_109_95_95_119_114_105_116_101_114_95_95_95_95_98_105_116_95_98_117_102_102_101_114_95_95_101_114_114_111_114_95_115_116_114_101_97_109_95_95_97_114_105_116_121_48_95_95_98_105_116_109_97_112_95_95_115_108_105_99_101_95_95_97_114_105_116_121_48_95_95_98_105_116_95_98_117_102_102_101_114_95_95_101_114_114_111_114_95_115_116_97_116_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_115_116_114_101_97_109_95_95_112_117_116_95_52_95_95_91_49_44_32_50_44_32_51_93_95_48_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__ClassMethod_for_stream__writer____bit_buffer__error_stream__arity0__bitmap__slice__arity0__bit_buffer__error_state__arity0______stream__put_4__[1, 2, 3]_0'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__f_98_105_116_95_98_117_102_102_101_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_115_116_114_101_97_109_95_95_119_114_105_116_101_114_95_95_95_95_98_105_116_95_98_117_102_102_101_114_95_95_101_114_114_111_114_95_115_116_114_101_97_109_95_95_97_114_105_116_121_48_95_95_98_105_116_109_97_112_95_95_115_108_105_99_101_95_95_97_114_105_116_121_48_95_95_98_105_116_95_98_117_102_102_101_114_95_95_101_114_114_111_114_95_115_116_97_116_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_115_116_114_101_97_109_95_95_112_117_116_95_52_95_95_91_49_44_32_50_44_32_51_93_95_48_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(bit_buffer, error_stream_error);
	MR_np_tailcall_ent(exception__throw_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__bit_buffer_maybe_bunch_0(void)
{
	bit_buffer_module0();
	bit_buffer_module1();
	bit_buffer_module2();
	bit_buffer_module3();
	bit_buffer_module4();
	bit_buffer_module5();
	bit_buffer_module6();
	bit_buffer_module7();
	bit_buffer_module8();
	bit_buffer_module9();
	bit_buffer_module10();
	bit_buffer_module11();
	bit_buffer_module12();
	bit_buffer_module13();
	bit_buffer_module14();
	bit_buffer_module15();
	bit_buffer_module16();
	bit_buffer_module17();
	bit_buffer_module18();
	bit_buffer_module19();
	bit_buffer_module20();
	bit_buffer_module21();
	bit_buffer_module22();
	bit_buffer_module23();
	bit_buffer_module24();
	bit_buffer_module25();
	bit_buffer_module26();
	bit_buffer_module27();
	bit_buffer_module28();
	bit_buffer_module29();
	bit_buffer_module30();
	bit_buffer_module31();
	bit_buffer_module32();
	bit_buffer_module33();
	bit_buffer_module34();
	bit_buffer_module35();
	bit_buffer_module36();
	bit_buffer_module37();
	bit_buffer_module38();
	bit_buffer_module39();
}

static void mercury__bit_buffer_maybe_bunch_1(void)
{
	bit_buffer_module40();
	bit_buffer_module41();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__bit_buffer__init(void);
void mercury__bit_buffer__init_type_tables(void);
void mercury__bit_buffer__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__bit_buffer__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__bit_buffer__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__bit_buffer__init_threadscope_string_table(void);
#endif

void mercury__bit_buffer__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__bit_buffer_maybe_bunch_0();
	mercury__bit_buffer_maybe_bunch_1();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_bit_buffer__type_ctor_info_bit_buffer_3,
		bit_buffer__bit_buffer_3_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_bit_buffer__type_ctor_info_bit_buffer_2,
		bit_buffer__bit_buffer_2_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_bit_buffer__type_ctor_info_error_state_0,
		bit_buffer__error_state_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_bit_buffer__type_ctor_info_error_stream_0,
		bit_buffer__error_stream_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_bit_buffer__type_ctor_info_error_stream_error_0,
		bit_buffer__error_stream_error_0_0);
#ifndef MR_STATIC_CODE_ADDRESSES
		MR_field(MR_mktag(0), mercury_data_base_typeclass_info_stream__writer__arity3__bit_buffer__error_stream__arity0__bitmap__slice__arity0__bit_buffer__error_state__arity0__, 5) =
			MR_ENTRY_AP(bit_buffer__ClassMethod_for_stream__writer____bit_buffer__error_stream__arity0__bitmap__slice__arity0__bit_buffer__error_state__arity0______stream__put_4_4_0);
#endif /* MR_STATIC_CODE_ADDRESSES */
#ifndef MR_STATIC_CODE_ADDRESSES
		MR_field(MR_mktag(0), mercury_data_base_typeclass_info_stream__stream__arity2__bit_buffer__error_stream__arity0__bit_buffer__error_state__arity0__, 5) =
			MR_ENTRY_AP(bit_buffer__ClassMethod_for_stream__stream____bit_buffer__error_stream__arity0__bit_buffer__error_state__arity0______stream__name_4_4_0);
#endif /* MR_STATIC_CODE_ADDRESSES */
#ifndef MR_STATIC_CODE_ADDRESSES
		MR_field(MR_mktag(0), mercury_data_base_typeclass_info_stream__output__arity2__bit_buffer__error_stream__arity0__bit_buffer__error_state__arity0__, 5) =
			MR_ENTRY_AP(bit_buffer__ClassMethod_for_stream__output____bit_buffer__error_stream__arity0__bit_buffer__error_state__arity0______stream__flush_3_3_0);
#endif /* MR_STATIC_CODE_ADDRESSES */
#ifndef MR_STATIC_CODE_ADDRESSES
#endif /* MR_STATIC_CODE_ADDRESSES */
#ifndef MR_STATIC_CODE_ADDRESSES
		MR_field(MR_mktag(0), mercury_data_base_typeclass_info_stream__error__arity1__bit_buffer__error_stream_error__arity0__, 5) =
			MR_ENTRY_AP(fn__bit_buffer__ClassMethod_for_stream__error____bit_buffer__error_stream_error__arity0______stream__error_message_1_1_0);
#endif /* MR_STATIC_CODE_ADDRESSES */
#ifndef MR_STATIC_CODE_ADDRESSES
		MR_field(MR_mktag(0), mercury_data_base_typeclass_info_stream__bulk_reader__arity5__bit_buffer__error_stream__arity0__int__arity0__bitmap__bitmap__arity0__bit_buffer__error_state__arity0__bit_buffer__error_stream_error__arity0__, 5) =
			MR_ENTRY_AP(bit_buffer__ClassMethod_for_stream__bulk_reader____bit_buffer__error_stream__arity0__int__arity0__bitmap__bitmap__arity0__bit_buffer__error_state__arity0__bit_buffer__error_stream_error__arity0______stream__bulk_get_9_9_0);
#endif /* MR_STATIC_CODE_ADDRESSES */
	mercury__bit_buffer__init_debugger();
}

void mercury__bit_buffer__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_bit_buffer__type_ctor_info_bit_buffer_3);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_bit_buffer__type_ctor_info_bit_buffer_2);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_bit_buffer__type_ctor_info_error_state_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_bit_buffer__type_ctor_info_error_stream_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_bit_buffer__type_ctor_info_error_stream_error_0);
	}
}


void mercury__bit_buffer__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__bit_buffer__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__bit_buffer);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__bit_buffer__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__bit_buffer__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
