/*
** Automatically generated from `bit_buffer.read.m'
** by the Mercury compiler,
** version rotd-2012-08-08, configured for x86_64-unknown-linux-gnu.
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
INIT mercury__bit_buffer__read__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 3 "bit_buffer.int0"
#include "bit_buffer.mh"

#line 28 "bit_buffer.read.c"
#line 151 "bitmap.int"
#include "bitmap.mh"

#line 32 "bit_buffer.read.c"
#line 526 "io.int"
#include "io.mh"

#line 36 "bit_buffer.read.c"
#line 536 "io.int"
#include "time.mh"

#line 40 "bit_buffer.read.c"
#line 537 "io.int"
#include "string.mh"

#line 44 "bit_buffer.read.c"
#line 21 "stm_builtin.int2"
#include "stm_builtin.mh"

#line 48 "bit_buffer.read.c"
#line 35 "store.int2"
#include "store.mh"

#line 52 "bit_buffer.read.c"
#line 33 "array.int2"
#include "array.mh"

#line 56 "bit_buffer.read.c"
#line 4 "char.opt"
#include "char.mh"

#line 60 "bit_buffer.read.c"
#line 12 "pretty_printer.opt"
#include "pretty_printer.mh"

#line 64 "bit_buffer.read.c"
#line 39 "pretty_printer.opt"
#include "version_array.mh"

#line 68 "bit_buffer.read.c"
#line 3 "construct.opt"
#include "construct.mh"

#line 72 "bit_buffer.read.c"
#line 130 "rtti_implementation.opt"
#include "rtti_implementation.mh"

#line 76 "bit_buffer.read.c"
#line 3 "float.opt"
#include "float.mh"

#line 80 "bit_buffer.read.c"
#line 3 "math.opt"
#include "math.mh"

#line 84 "bit_buffer.read.c"
#line 6 "type_desc.opt"
#include "type_desc.mh"

#line 88 "bit_buffer.read.c"
#line 4 "builtin.opt"
#include "builtin.mh"

#line 92 "bit_buffer.read.c"
#line 14 "exception.opt"
#include "exception.mh"

#line 96 "bit_buffer.read.c"
#line 4 "int.opt"
#include "int.mh"

#line 100 "bit_buffer.read.c"
#line 157 "io.opt"
#include "dir.mh"

#line 104 "bit_buffer.read.c"
#line 171 "io.opt"
#include "table_builtin.mh"

#line 108 "bit_buffer.read.c"
#line 6 "benchmarking.opt"
#include "benchmarking.mh"

#line 112 "bit_buffer.read.c"
#line 9 "private_builtin.opt"
#include "private_builtin.mh"

#line 116 "bit_buffer.read.c"
#line 117 "bit_buffer.read.c"
#include "bit_buffer.read.mh"

#line 120 "bit_buffer.read.c"
#line 121 "bit_buffer.read.c"
#ifndef BIT_BUFFER__READ_DECL_GUARD
#define BIT_BUFFER__READ_DECL_GUARD

#line 125 "bit_buffer.read.c"
#line 126 "bit_buffer.read.c"

#endif
#line 129 "bit_buffer.read.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_0 {
	MR_Word * f1[4];
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_0 mercury_common_0[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_1 {
	MR_Word * f1[3];
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_2 {
	MR_Word * f1[5];
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_3 {
	MR_Integer f1;
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_bit_buffer__read__type_ctor_info_io_read_buffer_0,
	mercury_data_bit_buffer__read__type_ctor_info_read_buffer_3,
	mercury_data_bit_buffer__read__type_ctor_info_read_buffer_0;
MR_decl_label7(bit_buffer__read__buffer_status_3_0, 4,5,6,9,10,8,3)
MR_decl_label3(bit_buffer__read__bulk_get_into_result_bitmap_11_0, 2,4,3)
MR_decl_label4(bit_buffer__read__copy_buffered_bits_to_bitmap_10_0, 2,3,4,5)
MR_decl_label4(bit_buffer__read__do_get_bits_7_0, 2,3,4,5)
MR_decl_label10(bit_buffer__read__do_refill_read_buffer_3_0, 52,5,7,9,10,8,11,12,13,14)
MR_decl_label1(bit_buffer__read__do_refill_read_buffer_3_0, 16)
MR_decl_label1(bit_buffer__read__finalize_6_0, 2)
MR_decl_label4(bit_buffer__read__get_bit_3_0, 2,7,5,4)
MR_decl_label9(bit_buffer__read__get_bitmap_8_0, 8,9,10,7,5,17,15,13,3)
MR_decl_label10(bit_buffer__read__get_bits_8_0, 6,8,10,9,12,15,14,4,17,3)
MR_decl_label10(bit_buffer__read__recursively_get_bitmap_9_0, 77,2,4,5,9,13,16,15,12,11)
MR_decl_label5(bit_buffer__read__recursively_get_bitmap_9_0, 7,18,22,21,20)
MR_decl_label3(fn__bit_buffer__read__new_3_0, 2,3,4)
MR_decl_label1(fn__bit_buffer__read__num_bits_to_byte_boundary_1_0, 2)
MR_decl_label1(fn__bit_buffer__read__num_buffered_bits_1_0, 3)
MR_decl_label1(__Unify___bit_buffer__read__io_read_buffer_0_0, 5)
MR_decl_label1(__Unify___bit_buffer__read__read_buffer_0_0, 5)
MR_decl_label1(__Unify___bit_buffer__read__read_buffer_3_0, 6)
MR_decl_label2(__Compare___bit_buffer__read__read_buffer_3_0, 3,2)
MR_def_extern_entry(fn__bit_buffer__read__new_3_0)
MR_def_extern_entry(fn__bit_buffer__read__new_bitmap_reader_3_0)
MR_def_extern_entry(fn__bit_buffer__read__new_bitmap_reader_1_0)
MR_def_extern_entry(fn__bit_buffer__read__num_buffered_bits_1_0)
MR_def_extern_entry(fn__bit_buffer__read__num_bits_to_byte_boundary_1_0)
MR_decl_static(bit_buffer__read__do_refill_read_buffer_3_0)
MR_def_extern_entry(bit_buffer__read__buffer_status_3_0)
MR_decl_static(bit_buffer__read__do_get_bits_7_0)
MR_def_extern_entry(bit_buffer__read__get_bits_8_0)
MR_def_extern_entry(bit_buffer__read__get_bit_3_0)
MR_decl_static(bit_buffer__read__copy_buffered_bits_to_bitmap_10_0)
MR_decl_static(bit_buffer__read__bulk_get_into_result_bitmap_11_0)
MR_decl_static(bit_buffer__read__recursively_get_bitmap_9_0)
MR_def_extern_entry(bit_buffer__read__get_bitmap_8_0)
MR_def_extern_entry(bit_buffer__read__get_bitmap_6_0)
MR_def_extern_entry(bit_buffer__read__finalize_6_0)
MR_def_extern_entry(__Unify___bit_buffer__read__io_read_buffer_0_0)
MR_def_extern_entry(__Compare___bit_buffer__read__io_read_buffer_0_0)
MR_def_extern_entry(__Unify___bit_buffer__read__read_buffer_0_0)
MR_def_extern_entry(__Compare___bit_buffer__read__read_buffer_0_0)
MR_def_extern_entry(__Unify___bit_buffer__read__read_buffer_3_0)
MR_def_extern_entry(__Compare___bit_buffer__read__read_buffer_3_0)
MR_decl_static(fn__f_98_105_116_95_98_117_102_102_101_114_95_95_114_101_97_100_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0)

extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_binary_input_stream_0;
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_state_0;
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_error_0;
extern const MR_TypeCtorInfo_Struct mercury_data_bit_buffer__type_ctor_info_error_stream_0;
extern const MR_TypeCtorInfo_Struct mercury_data_bit_buffer__type_ctor_info_error_state_0;
extern const MR_TypeCtorInfo_Struct mercury_data_bit_buffer__type_ctor_info_error_stream_error_0;
extern const MR_BaseTypeclassInfo mercury_data_base_typeclass_info_stream__output__arity2__io__output_stream__arity0__io__state__arity0__[];
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_output_stream_0;
static const struct mercury_type_0 mercury_common_0[3] =
{
{
{
MR_CTOR_ADDR(bit_buffer__read, read_buffer, 3),
MR_CTOR0_ADDR(io, binary_input_stream),
MR_IO_CTOR_ADDR,
MR_CTOR0_ADDR(io, error)
}
},
{
{
MR_CTOR_ADDR(bit_buffer__read, read_buffer, 3),
MR_CTOR0_ADDR(bit_buffer, error_stream),
MR_CTOR0_ADDR(bit_buffer, error_state),
MR_CTOR0_ADDR(bit_buffer, error_stream_error)
}
},
{
{
(MR_Word *) &mercury_data_base_typeclass_info_stream__output__arity2__io__output_stream__arity0__io__state__arity0__,
MR_TAG_COMMON(0,1,0),
MR_CTOR0_ADDR(io, output_stream),
MR_IO_CTOR_ADDR
}
},
};

extern const MR_BaseTypeclassInfo mercury_data_base_typeclass_info_stream__stream__arity2__io__output_stream__arity0__io__state__arity0__[];
static const struct mercury_type_1 mercury_common_1[1] =
{
{
{
(MR_Word *) &mercury_data_base_typeclass_info_stream__stream__arity2__io__output_stream__arity0__io__state__arity0__,
MR_CTOR0_ADDR(io, output_stream),
MR_IO_CTOR_ADDR
}
},
};

extern const MR_BaseTypeclassInfo mercury_data_base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__string__arity0__io__state__arity0__[];
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_BaseTypeclassInfo mercury_data_base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__character__arity0__io__state__arity0__[];
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_character_0;
static const struct mercury_type_2 mercury_common_2[2] =
{
{
{
(MR_Word *) &mercury_data_base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__string__arity0__io__state__arity0__,
MR_TAG_COMMON(0,0,2),
MR_CTOR0_ADDR(io, output_stream),
MR_STRING_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data_base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__character__arity0__io__state__arity0__,
MR_TAG_COMMON(0,0,2),
MR_CTOR0_ADDR(io, output_stream),
MR_CHAR_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
};

static const struct mercury_type_3 mercury_common_3[2] =
{
{
0
},
{
1
},
};
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_binary_input_stream_0;
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_state_0;
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_error_0;

static const MR_FA_TypeInfo_Struct3 mercury_data_bit_buffer__read__ti_read_buffer_3io__type_ctor_info_binary_input_stream_0io__type_ctor_info_state_0io__type_ctor_info_error_0 = {
	&mercury_data_bit_buffer__read__type_ctor_info_read_buffer_3,
{	(MR_TypeInfo) &mercury_data_io__type_ctor_info_binary_input_stream_0,
	(MR_TypeInfo) &mercury_data_io__type_ctor_info_state_0,
	(MR_TypeInfo) &mercury_data_io__type_ctor_info_error_0
}};

const MR_TypeCtorInfo_Struct mercury_data_bit_buffer__read__type_ctor_info_io_read_buffer_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___bit_buffer__read__io_read_buffer_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___bit_buffer__read__io_read_buffer_0_0)),
	"bit_buffer.read",
	"io_read_buffer",
	{ 0 },
	{ (void *)&mercury_data_bit_buffer__read__ti_read_buffer_3io__type_ctor_info_binary_input_stream_0io__type_ctor_info_state_0io__type_ctor_info_error_0 },
	-1,
	0,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_bit_buffer__type_ctor_info_bit_buffer_3;

static const MR_FA_PseudoTypeInfo_Struct3 mercury_data_bit_buffer__pti_bit_buffer_3__pseudo_1__pseudo_2__pseudo_3 = {
	&mercury_data_bit_buffer__type_ctor_info_bit_buffer_3,
{	(MR_PseudoTypeInfo) 1,
	(MR_PseudoTypeInfo) 2,
	(MR_PseudoTypeInfo) 3
}};

static const MR_NotagFunctorDesc mercury_data_bit_buffer__read__notag_functor_desc_read_buffer_3 = {
	"read_buffer",
	(MR_PseudoTypeInfo) &mercury_data_bit_buffer__pti_bit_buffer_3__pseudo_1__pseudo_2__pseudo_3,
	"bit_buffer"
};

const MR_Integer mercury_data_bit_buffer__read__functor_number_map_read_buffer_3[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_bit_buffer__read__type_ctor_info_read_buffer_3 = {
	3,
	15,
	-1,
	MR_TYPECTOR_REP_NOTAG,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___bit_buffer__read__read_buffer_3_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___bit_buffer__read__read_buffer_3_0)),
	"bit_buffer.read",
	"read_buffer",
	{ (void *)&mercury_data_bit_buffer__read__notag_functor_desc_read_buffer_3 },
	{ (void *)&mercury_data_bit_buffer__read__notag_functor_desc_read_buffer_3 },
	1,
	4,
	mercury_data_bit_buffer__read__functor_number_map_read_buffer_3
};
extern const MR_TypeCtorInfo_Struct mercury_data_bit_buffer__type_ctor_info_error_stream_0;
extern const MR_TypeCtorInfo_Struct mercury_data_bit_buffer__type_ctor_info_error_state_0;
extern const MR_TypeCtorInfo_Struct mercury_data_bit_buffer__type_ctor_info_error_stream_error_0;

static const MR_FA_TypeInfo_Struct3 mercury_data_bit_buffer__read__ti_read_buffer_3bit_buffer__type_ctor_info_error_stream_0bit_buffer__type_ctor_info_error_state_0bit_buffer__type_ctor_info_error_stream_error_0 = {
	&mercury_data_bit_buffer__read__type_ctor_info_read_buffer_3,
{	(MR_TypeInfo) &mercury_data_bit_buffer__type_ctor_info_error_stream_0,
	(MR_TypeInfo) &mercury_data_bit_buffer__type_ctor_info_error_state_0,
	(MR_TypeInfo) &mercury_data_bit_buffer__type_ctor_info_error_stream_error_0
}};

const MR_TypeCtorInfo_Struct mercury_data_bit_buffer__read__type_ctor_info_read_buffer_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___bit_buffer__read__read_buffer_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___bit_buffer__read__read_buffer_0_0)),
	"bit_buffer.read",
	"read_buffer",
	{ 0 },
	{ (void *)&mercury_data_bit_buffer__read__ti_read_buffer_3bit_buffer__type_ctor_info_error_stream_0bit_buffer__type_ctor_info_error_state_0bit_buffer__type_ctor_info_error_stream_error_0 },
	-1,
	0,
	NULL
};



MR_decl_entry(fn__bitmap__init_2_0);
MR_decl_entry(fn__bit_buffer__new_buffer_6_0);

MR_BEGIN_MODULE(bit_buffer__read_module0)
	MR_init_entry1(fn__bit_buffer__read__new_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__bit_buffer__read__new_3_0);
	MR_init_label3(fn__bit_buffer__read__new_3_0,2,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'new'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__bit_buffer__read__new_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Integer	Bits;
#define	MR_PROC_LABEL	mercury__fn__bit_buffer__read__new_3_0
{
#line 163 "int.opt"

    Bits = ML_BITS_PER_INT;
;}
#line 430 "bit_buffer.read.c"
	MR_r5 = Bits;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = ((MR_Integer) MR_r2 * (MR_Integer) 8);
	MR_r6 = MR_tempr1;
	if (((MR_Integer) MR_tempr1 <= (MR_Integer) MR_r5)) {
		MR_GOTO_LAB(fn__bit_buffer__read__new_3_0_i2);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(4) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_GOTO_LAB(fn__bit_buffer__read__new_3_0_i3);
	}
MR_def_label(fn__bit_buffer__read__new_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(4) = MR_r1;
	MR_r1 = MR_r5;
MR_def_label(fn__bit_buffer__read__new_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	{
	MR_Integer	Bits;
#define	MR_PROC_LABEL	mercury__fn__bit_buffer__read__new_3_0
{
#line 163 "int.opt"

    Bits = ML_BITS_PER_INT;
;}
#line 465 "bit_buffer.read.c"
	MR_tempr1 = Bits;
#undef	MR_PROC_LABEL
	}
	MR_sv(3) = ((MR_Integer) MR_r1 + (MR_Integer) MR_tempr1);
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(fn__bitmap__init_2_0,
		fn__bit_buffer__read__new_3_0_i4);
MR_def_label(fn__bit_buffer__read__new_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_Word	TypeClassInfo;
	MR_Integer	Index;
	MR_Word	TypeInfo;
#define	MR_PROC_LABEL	mercury__fn__bit_buffer__read__new_3_0
	TypeClassInfo = MR_sv(4);
	Index = (MR_Integer) 3;
{
#line 133 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);
;}
#line 491 "bit_buffer.read.c"
	MR_tempr1 = TypeInfo;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	TypeClassInfo;
	MR_Integer	Index;
	MR_Word	TypeInfo;
#define	MR_PROC_LABEL	mercury__fn__bit_buffer__read__new_3_0
	TypeClassInfo = MR_sv(4);
	Index = (MR_Integer) 6;
{
#line 133 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);
;}
#line 507 "bit_buffer.read.c"
	MR_r2 = TypeInfo;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	TypeClassInfo;
	MR_Integer	Index;
	MR_Word	TypeInfo;
#define	MR_PROC_LABEL	mercury__fn__bit_buffer__read__new_3_0
	TypeClassInfo = MR_sv(4);
	Index = (MR_Integer) 7;
{
#line 133 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);
;}
#line 523 "bit_buffer.read.c"
	MR_r3 = TypeInfo;
#undef	MR_PROC_LABEL
	}
	MR_tempr2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_r5 = MR_sv(3);
	MR_r6 = MR_r5;
	MR_r7 = (MR_Integer) 1;
	MR_r8 = MR_sv(1);
	MR_r9 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(fn__bit_buffer__new_buffer_6_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bit_buffer__read_module1)
	MR_init_entry1(fn__bit_buffer__read__new_bitmap_reader_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__bit_buffer__read__new_bitmap_reader_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'new_bitmap_reader'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__bit_buffer__read__new_bitmap_reader_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(bit_buffer, error_stream);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(bit_buffer, error_state);
	MR_tempr3 = MR_r3;
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(bit_buffer, error_stream_error);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_tempr2;
	MR_r6 = MR_tempr3;
	MR_r7 = (MR_Integer) 0;
	MR_np_tailcall_ent(fn__bit_buffer__new_buffer_6_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bit_buffer__read_module2)
	MR_init_entry1(fn__bit_buffer__read__new_bitmap_reader_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__bit_buffer__read__new_bitmap_reader_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'new_bitmap_reader'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__bit_buffer__read__new_bitmap_reader_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_BitmapPtr	BM;
	MR_Integer	NumBits;
#define	MR_PROC_LABEL	mercury__fn__bit_buffer__read__new_bitmap_reader_1_0
	BM = (MR_BitmapPtr) MR_r1;
{
#line 118 "bitmap.opt"

    NumBits = BM->num_bits;
;}
#line 603 "bit_buffer.read.c"
	MR_r3 = NumBits;
#undef	MR_PROC_LABEL
	}
	MR_r2 = (MR_Integer) 0;
	MR_np_tailcall_ent(fn__bit_buffer__read__new_bitmap_reader_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bit_buffer__read_module3)
	MR_init_entry1(fn__bit_buffer__read__num_buffered_bits_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__bit_buffer__read__num_buffered_bits_1_0);
	MR_init_label1(fn__bit_buffer__read__num_buffered_bits_1_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'num_buffered_bits'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__bit_buffer__read__num_buffered_bits_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	ML_BitBufferPtr	Buffer;
	MR_Integer	Size;
#define	MR_PROC_LABEL	mercury__fn__bit_buffer__read__num_buffered_bits_1_0
	Buffer = (ML_BitBufferPtr) MR_r4;
	MR_OBTAIN_GLOBAL_LOCK("size");
{
#line 117 "bit_buffer.opt"

    Size = Buffer->ML_bit_buffer_size;
;}
#line 641 "bit_buffer.read.c"
	MR_RELEASE_GLOBAL_LOCK("size");
	MR_r2 = Size;
#undef	MR_PROC_LABEL
	}
	{
	ML_BitBufferPtr	Buffer;
	MR_Integer	Pos;
#define	MR_PROC_LABEL	mercury__fn__bit_buffer__read__num_buffered_bits_1_0
	Buffer = (ML_BitBufferPtr) MR_r4;
	MR_OBTAIN_GLOBAL_LOCK("pos");
{
#line 114 "bit_buffer.opt"

    Pos = Buffer->ML_bit_buffer_pos;
;}
#line 657 "bit_buffer.read.c"
	MR_RELEASE_GLOBAL_LOCK("pos");
	MR_r3 = Pos;
#undef	MR_PROC_LABEL
	}
	MR_r1 = ((MR_Integer) MR_r2 - (MR_Integer) MR_r3);
	if (MR_INT_GT(MR_r1,0)) {
		MR_GOTO_LAB(fn__bit_buffer__read__num_buffered_bits_1_0_i3);
	}
	MR_r1 = (MR_Integer) 0;
MR_def_label(fn__bit_buffer__read__num_buffered_bits_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bit_buffer__read_module4)
	MR_init_entry1(fn__bit_buffer__read__num_bits_to_byte_boundary_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__bit_buffer__read__num_bits_to_byte_boundary_1_0);
	MR_init_label1(fn__bit_buffer__read__num_bits_to_byte_boundary_1_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'num_bits_to_byte_boundary'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__bit_buffer__read__num_bits_to_byte_boundary_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	ML_BitBufferPtr	Buffer;
	MR_Integer	Pos;
#define	MR_PROC_LABEL	mercury__fn__bit_buffer__read__num_bits_to_byte_boundary_1_0
	Buffer = (ML_BitBufferPtr) MR_r4;
	MR_OBTAIN_GLOBAL_LOCK("pos");
{
#line 114 "bit_buffer.opt"

    Pos = Buffer->ML_bit_buffer_pos;
;}
#line 702 "bit_buffer.read.c"
	MR_RELEASE_GLOBAL_LOCK("pos");
	MR_r2 = Pos;
#undef	MR_PROC_LABEL
	}
	MR_r3 = ((MR_Integer) MR_r2 % (MR_Integer) 8);
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(fn__bit_buffer__read__num_bits_to_byte_boundary_1_0_i2);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__bit_buffer__read__num_bits_to_byte_boundary_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) 8 - (MR_Integer) MR_r3);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(require__error_1_0);
MR_decl_entry(fn__bitmap__bits_3_0);
MR_decl_entry(fn__f_98_105_116_109_97_112_95_95_98_105_116_115_32_58_61_4_0);
MR_declare_entry(mercury__do_call_class_method_5);

MR_BEGIN_MODULE(bit_buffer__read_module5)
	MR_init_entry1(bit_buffer__read__do_refill_read_buffer_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__bit_buffer__read__do_refill_read_buffer_3_0);
	MR_init_label10(bit_buffer__read__do_refill_read_buffer_3_0,52,5,7,9,10,8,11,12,13,14)
	MR_init_label1(bit_buffer__read__do_refill_read_buffer_3_0,16)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'do_refill_read_buffer'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(bit_buffer__read__do_refill_read_buffer_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	ML_BitBufferPtr	Buffer;
	MR_Word	UseStream;
#define	MR_PROC_LABEL	mercury__bit_buffer__read__do_refill_read_buffer_3_0
	Buffer = (ML_BitBufferPtr) MR_r2;
	MR_OBTAIN_GLOBAL_LOCK("use_stream");
{
#line 120 "bit_buffer.opt"

    UseStream = Buffer->ML_bit_buffer_use_stream;
;}
#line 754 "bit_buffer.read.c"
	MR_RELEASE_GLOBAL_LOCK("use_stream");
	MR_r3 = UseStream;
#undef	MR_PROC_LABEL
	}
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(bit_buffer__read__do_refill_read_buffer_3_0_i52);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(bit_buffer__read__do_refill_read_buffer_3_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_Word	TypeClassInfo;
	MR_Integer	Index;
	MR_Word	TypeInfo;
#define	MR_PROC_LABEL	mercury__bit_buffer__read__do_refill_read_buffer_3_0
	TypeClassInfo = MR_r1;
	Index = (MR_Integer) 3;
{
#line 133 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);
;}
#line 782 "bit_buffer.read.c"
	MR_tempr1 = TypeInfo;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	TypeClassInfo;
	MR_Integer	Index;
	MR_Word	TypeInfo;
#define	MR_PROC_LABEL	mercury__bit_buffer__read__do_refill_read_buffer_3_0
	TypeClassInfo = MR_r1;
	Index = (MR_Integer) 6;
{
#line 133 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);
;}
#line 798 "bit_buffer.read.c"
	MR_tempr2 = TypeInfo;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	TypeClassInfo;
	MR_Integer	Index;
	MR_Word	TypeInfo;
#define	MR_PROC_LABEL	mercury__bit_buffer__read__do_refill_read_buffer_3_0
	TypeClassInfo = MR_r1;
	Index = (MR_Integer) 7;
{
#line 133 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);
;}
#line 814 "bit_buffer.read.c"
	MR_r3 = TypeInfo;
#undef	MR_PROC_LABEL
	}
	MR_sv(2) = MR_r2;
	MR_sv(7) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	MR_r4 = MR_sv(2);
	}
	MR_np_call_localret_ent(fn__bit_buffer__read__num_buffered_bits_1_0,
		bit_buffer__read__do_refill_read_buffer_3_0_i5);
MR_def_label(bit_buffer__read__do_refill_read_buffer_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Integer	Bits;
#define	MR_PROC_LABEL	mercury__bit_buffer__read__do_refill_read_buffer_3_0
{
#line 163 "int.opt"

    Bits = ML_BITS_PER_INT;
;}
#line 836 "bit_buffer.read.c"
	MR_r4 = Bits;
#undef	MR_PROC_LABEL
	}
	if (((MR_Integer) MR_r1 <= (MR_Integer) MR_r4)) {
		MR_GOTO_LAB(bit_buffer__read__do_refill_read_buffer_3_0_i7);
	}
	MR_r1 = (MR_Word) MR_string_const("bit_buffer.read.refill_read_buffer: too many bits in buffer", 59);
	MR_np_call_localret_ent(require__error_1_0,
		bit_buffer__read__do_refill_read_buffer_3_0_i7);
MR_def_label(bit_buffer__read__do_refill_read_buffer_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	ML_BitBufferPtr	Buffer;
	MR_BitmapPtr	BM;
#define	MR_PROC_LABEL	mercury__bit_buffer__read__do_refill_read_buffer_3_0
	Buffer = (ML_BitBufferPtr) MR_sv(2);
	MR_OBTAIN_GLOBAL_LOCK("bitmap");
{
#line 111 "bit_buffer.opt"

    BM = Buffer->ML_bit_buffer_bitmap;
;}
#line 859 "bit_buffer.read.c"
	MR_RELEASE_GLOBAL_LOCK("bitmap");
	MR_r3 = (MR_Word) BM;
#undef	MR_PROC_LABEL
	}
	{
	ML_BitBufferPtr	Buffer;
	MR_Integer	Pos;
#define	MR_PROC_LABEL	mercury__bit_buffer__read__do_refill_read_buffer_3_0
	Buffer = (ML_BitBufferPtr) MR_sv(2);
	MR_OBTAIN_GLOBAL_LOCK("pos");
{
#line 114 "bit_buffer.opt"

    Pos = Buffer->ML_bit_buffer_pos;
;}
#line 875 "bit_buffer.read.c"
	MR_RELEASE_GLOBAL_LOCK("pos");
	MR_r1 = Pos;
#undef	MR_PROC_LABEL
	}
	{
	ML_BitBufferPtr	Buffer;
	MR_Integer	Size;
#define	MR_PROC_LABEL	mercury__bit_buffer__read__do_refill_read_buffer_3_0
	Buffer = (ML_BitBufferPtr) MR_sv(2);
	MR_OBTAIN_GLOBAL_LOCK("size");
{
#line 117 "bit_buffer.opt"

    Size = Buffer->ML_bit_buffer_size;
;}
#line 891 "bit_buffer.read.c"
	MR_RELEASE_GLOBAL_LOCK("size");
	MR_r4 = Size;
#undef	MR_PROC_LABEL
	}
	{
	ML_BitBufferPtr	Buffer;
	MR_Word	State;
#define	MR_PROC_LABEL	mercury__bit_buffer__read__do_refill_read_buffer_3_0
	Buffer = (ML_BitBufferPtr) MR_sv(2);
	MR_OBTAIN_GLOBAL_LOCK("state");
{
#line 126 "bit_buffer.opt"

    State = Buffer->ML_bit_buffer_state;
;}
#line 907 "bit_buffer.read.c"
	MR_RELEASE_GLOBAL_LOCK("state");
	MR_r5 = State;
#undef	MR_PROC_LABEL
	}
	{
	MR_Integer	Bits;
#define	MR_PROC_LABEL	mercury__bit_buffer__read__do_refill_read_buffer_3_0
{
#line 163 "int.opt"

    Bits = ML_BITS_PER_INT;
;}
#line 920 "bit_buffer.read.c"
	MR_r6 = Bits;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(6) = ((MR_Integer) MR_r6 - ((MR_Integer) MR_tempr1 - (MR_Integer) MR_r1));
	MR_r2 = ((MR_Integer) MR_tempr1 - (MR_Integer) MR_r1);
	if (MR_INT_LE(MR_r2,0)) {
		MR_GOTO_LAB(bit_buffer__read__do_refill_read_buffer_3_0_i8);
	}
	MR_sv(1) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_tempr1;
	MR_sv(5) = MR_r5;
	}
	MR_np_call_localret_ent(fn__bitmap__bits_3_0,
		bit_buffer__read__do_refill_read_buffer_3_0_i9);
MR_def_label(bit_buffer__read__do_refill_read_buffer_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_98_105_116_109_97_112_95_95_98_105_116_115_32_58_61_4_0,
		bit_buffer__read__do_refill_read_buffer_3_0_i10);
MR_def_label(bit_buffer__read__do_refill_read_buffer_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r7 = MR_sv(5);
	MR_r6 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_GOTO_LAB(bit_buffer__read__do_refill_read_buffer_3_0_i11);
MR_def_label(bit_buffer__read__do_refill_read_buffer_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r4;
	MR_r7 = MR_r5;
	MR_r6 = MR_r3;
	MR_r1 = MR_sv(7);
MR_def_label(bit_buffer__read__do_refill_read_buffer_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_Integer	Bits;
#define	MR_PROC_LABEL	mercury__bit_buffer__read__do_refill_read_buffer_3_0
{
#line 163 "int.opt"

    Bits = ML_BITS_PER_INT;
;}
#line 975 "bit_buffer.read.c"
	MR_tempr1 = Bits;
#undef	MR_PROC_LABEL
	}
	{
	MR_Integer	Bits;
#define	MR_PROC_LABEL	mercury__bit_buffer__read__do_refill_read_buffer_3_0
{
#line 163 "int.opt"

    Bits = ML_BITS_PER_INT;
;}
#line 987 "bit_buffer.read.c"
	MR_tempr2 = Bits;
#undef	MR_PROC_LABEL
	}
	{
	ML_BitBufferPtr	Buffer;
	MR_Word	Stream;
#define	MR_PROC_LABEL	mercury__bit_buffer__read__do_refill_read_buffer_3_0
	Buffer = (ML_BitBufferPtr) MR_sv(2);
	MR_OBTAIN_GLOBAL_LOCK("stream");
{
#line 123 "bit_buffer.opt"

    Stream = Buffer->ML_bit_buffer_stream;
;}
#line 1002 "bit_buffer.read.c"
	MR_RELEASE_GLOBAL_LOCK("stream");
	MR_r3 = Stream;
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = (((MR_Integer) MR_sv(4) - (MR_Integer) MR_tempr1) / (MR_Integer) 8);
	MR_r4 = ((MR_Integer) MR_tempr2 / (MR_Integer) 8);
	MR_r5 = MR_sv(1);
	MR_r2 = (MR_Integer) 1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(bit_buffer__read__do_refill_read_buffer_3_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_5),
		mercury__bit_buffer__read__do_refill_read_buffer_3_0_i12);
MR_def_label(bit_buffer__read__do_refill_read_buffer_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 != MR_sv(1))) {
		MR_GOTO_LAB(bit_buffer__read__do_refill_read_buffer_3_0_i13);
	}
	MR_r6 = MR_r1;
	MR_r1 = MR_r3;
	MR_r2 = MR_r6;
	MR_r3 = MR_r4;
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(2);
	MR_GOTO_LAB(bit_buffer__read__do_refill_read_buffer_3_0_i14);
MR_def_label(bit_buffer__read__do_refill_read_buffer_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Integer	Bits;
#define	MR_PROC_LABEL	mercury__bit_buffer__read__do_refill_read_buffer_3_0
{
#line 163 "int.opt"

    Bits = ML_BITS_PER_INT;
;}
#line 1037 "bit_buffer.read.c"
	MR_r5 = Bits;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	UseStream;
	ML_BitBufferPtr	Buffer0;
	ML_BitBufferPtr	Buffer;
#define	MR_PROC_LABEL	mercury__bit_buffer__read__do_refill_read_buffer_3_0
	UseStream = (MR_Integer) 0;
	Buffer0 = (ML_BitBufferPtr) MR_sv(2);
	MR_OBTAIN_GLOBAL_LOCK("set_use_stream");
{
#line 152 "bit_buffer.opt"

    Buffer = Buffer0;
    Buffer->ML_bit_buffer_use_stream = UseStream;
;}
#line 1055 "bit_buffer.read.c"
	MR_RELEASE_GLOBAL_LOCK("set_use_stream");
	MR_r6 = (MR_Word) Buffer;
#undef	MR_PROC_LABEL
	}
	MR_r7 = MR_r1;
	MR_r1 = MR_r3;
	MR_r8 = MR_r2;
	MR_r2 = MR_r7;
	MR_r3 = MR_r4;
	MR_r4 = (((MR_Integer) MR_r8 * (MR_Integer) 8) + (MR_Integer) MR_r5);
	MR_r5 = MR_r6;
MR_def_label(bit_buffer__read__do_refill_read_buffer_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_BitmapPtr	BM;
	MR_Integer	Pos;
	MR_Integer	Size;
	MR_Word	State;
	MR_Word	FilledBMs;
	ML_BitBufferPtr	Buffer0;
	ML_BitBufferPtr	Buffer;
#define	MR_PROC_LABEL	mercury__bit_buffer__read__do_refill_read_buffer_3_0
	BM = (MR_BitmapPtr) MR_r2;
	Pos = MR_sv(6);
	Size = MR_r4;
	State = MR_r3;
	FilledBMs = (MR_Word) MR_tbmkword(0, 0);
	Buffer0 = (ML_BitBufferPtr) MR_r5;
	MR_OBTAIN_GLOBAL_LOCK("set_all");
{
#line 135 "bit_buffer.opt"

    Buffer = Buffer0;
    Buffer->ML_bit_buffer_bitmap = BM;
    Buffer->ML_bit_buffer_pos = Pos;
    Buffer->ML_bit_buffer_size = Size;
    Buffer->ML_bit_buffer_state = State;
    Buffer->ML_bit_buffer_filled_bitmaps = FilledBMs;
;}
#line 1095 "bit_buffer.read.c"
	MR_RELEASE_GLOBAL_LOCK("set_all");
	MR_r3 = (MR_Word) Buffer;
#undef	MR_PROC_LABEL
	}
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(bit_buffer__read__do_refill_read_buffer_3_0_i16);
	}
	MR_r2 = MR_r3;
	MR_decr_sp_and_return(8);
MR_def_label(bit_buffer__read__do_refill_read_buffer_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	ReadStatus;
	ML_BitBufferPtr	Buffer0;
	ML_BitBufferPtr	Buffer;
#define	MR_PROC_LABEL	mercury__bit_buffer__read__do_refill_read_buffer_3_0
	ReadStatus = MR_r1;
	Buffer0 = (ML_BitBufferPtr) MR_r3;
	MR_OBTAIN_GLOBAL_LOCK("set_read_status");
{
#line 156 "bit_buffer.opt"

    Buffer = Buffer0;
    Buffer->ML_bit_buffer_read_status = ReadStatus;
;}
#line 1121 "bit_buffer.read.c"
	MR_RELEASE_GLOBAL_LOCK("set_read_status");
	MR_r2 = (MR_Word) Buffer;
#undef	MR_PROC_LABEL
	}
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bit_buffer__read_module6)
	MR_init_entry1(bit_buffer__read__buffer_status_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__bit_buffer__read__buffer_status_3_0);
	MR_init_label7(bit_buffer__read__buffer_status_3_0,4,5,6,9,10,8,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'buffer_status'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__bit_buffer__read__buffer_status_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	ML_BitBufferPtr	Buffer;
	MR_Word	ReadStatus;
#define	MR_PROC_LABEL	mercury__bit_buffer__read__buffer_status_3_0
	Buffer = (ML_BitBufferPtr) MR_r2;
	MR_OBTAIN_GLOBAL_LOCK("read_status");
{
#line 132 "bit_buffer.opt"

    ReadStatus = Buffer->ML_bit_buffer_read_status;
;}
#line 1159 "bit_buffer.read.c"
	MR_RELEASE_GLOBAL_LOCK("read_status");
	MR_r3 = ReadStatus;
#undef	MR_PROC_LABEL
	}
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(bit_buffer__read__buffer_status_3_0_i3);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_Word	TypeClassInfo;
	MR_Integer	Index;
	MR_Word	TypeInfo;
#define	MR_PROC_LABEL	mercury__bit_buffer__read__buffer_status_3_0
	TypeClassInfo = MR_r1;
	Index = (MR_Integer) 3;
{
#line 133 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);
;}
#line 1183 "bit_buffer.read.c"
	MR_tempr1 = TypeInfo;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	TypeClassInfo;
	MR_Integer	Index;
	MR_Word	TypeInfo;
#define	MR_PROC_LABEL	mercury__bit_buffer__read__buffer_status_3_0
	TypeClassInfo = MR_r1;
	Index = (MR_Integer) 6;
{
#line 133 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);
;}
#line 1199 "bit_buffer.read.c"
	MR_tempr2 = TypeInfo;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	TypeClassInfo;
	MR_Integer	Index;
	MR_Word	TypeInfo;
#define	MR_PROC_LABEL	mercury__bit_buffer__read__buffer_status_3_0
	TypeClassInfo = MR_r1;
	Index = (MR_Integer) 7;
{
#line 133 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);
;}
#line 1215 "bit_buffer.read.c"
	MR_r3 = TypeInfo;
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r1;
	MR_sv(3) = (MR_Integer) 3;
	MR_sv(4) = (MR_Integer) 6;
	MR_sv(5) = (MR_Integer) 7;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(fn__bit_buffer__read__num_buffered_bits_1_0,
		bit_buffer__read__buffer_status_3_0_i4);
MR_def_label(bit_buffer__read__buffer_status_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_LE(MR_r1,0)) {
		MR_GOTO_LAB(bit_buffer__read__buffer_status_3_0_i5);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(6);
MR_def_label(bit_buffer__read__buffer_status_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(bit_buffer__read__do_refill_read_buffer_3_0,
		bit_buffer__read__buffer_status_3_0_i6);
MR_def_label(bit_buffer__read__buffer_status_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(bit_buffer__read__buffer_status_3_0_i8);
	}
	{
	MR_Word	TypeClassInfo;
	MR_Integer	Index;
	MR_Word	TypeInfo;
#define	MR_PROC_LABEL	mercury__bit_buffer__read__buffer_status_3_0
	TypeClassInfo = MR_sv(2);
	Index = MR_sv(3);
{
#line 133 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);
;}
#line 1261 "bit_buffer.read.c"
	MR_r1 = TypeInfo;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	{
	MR_Word	TypeClassInfo;
	MR_Integer	Index;
	MR_Word	TypeInfo;
#define	MR_PROC_LABEL	mercury__bit_buffer__read__buffer_status_3_0
	TypeClassInfo = MR_sv(2);
	Index = MR_sv(4);
{
#line 133 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);
;}
#line 1279 "bit_buffer.read.c"
	MR_tempr1 = TypeInfo;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	TypeClassInfo;
	MR_Integer	Index;
	MR_Word	TypeInfo;
#define	MR_PROC_LABEL	mercury__bit_buffer__read__buffer_status_3_0
	TypeClassInfo = MR_sv(2);
	Index = MR_sv(5);
{
#line 133 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);
;}
#line 1295 "bit_buffer.read.c"
	MR_r3 = TypeInfo;
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(fn__bit_buffer__read__num_buffered_bits_1_0,
		bit_buffer__read__buffer_status_3_0_i9);
MR_def_label(bit_buffer__read__buffer_status_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_LE(MR_r1,0)) {
		MR_GOTO_LAB(bit_buffer__read__buffer_status_3_0_i10);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(6);
MR_def_label(bit_buffer__read__buffer_status_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 1);
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(6);
MR_def_label(bit_buffer__read__buffer_status_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
MR_def_label(bit_buffer__read__buffer_status_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tfield(1, MR_r3, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bit_buffer__read_module7)
	MR_init_entry1(bit_buffer__read__do_get_bits_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__bit_buffer__read__do_get_bits_7_0);
	MR_init_label4(bit_buffer__read__do_get_bits_7_0,2,3,4,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'do_get_bits'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(bit_buffer__read__do_get_bits_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	{
	MR_Word	TypeClassInfo;
	MR_Integer	Index;
	MR_Word	TypeInfo;
#define	MR_PROC_LABEL	mercury__bit_buffer__read__do_get_bits_7_0
	TypeClassInfo = MR_r1;
	Index = (MR_Integer) 3;
{
#line 133 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);
;}
#line 1369 "bit_buffer.read.c"
	MR_tempr1 = TypeInfo;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	TypeClassInfo;
	MR_Integer	Index;
	MR_Word	TypeInfo;
#define	MR_PROC_LABEL	mercury__bit_buffer__read__do_get_bits_7_0
	TypeClassInfo = MR_r1;
	Index = (MR_Integer) 6;
{
#line 133 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);
;}
#line 1385 "bit_buffer.read.c"
	MR_tempr2 = TypeInfo;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	TypeClassInfo;
	MR_Integer	Index;
	MR_Word	TypeInfo;
#define	MR_PROC_LABEL	mercury__bit_buffer__read__do_get_bits_7_0
	TypeClassInfo = MR_r1;
	Index = (MR_Integer) 7;
{
#line 133 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);
;}
#line 1401 "bit_buffer.read.c"
	MR_tempr3 = TypeInfo;
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(5) = MR_r4;
	MR_tempr4 = MR_r5;
	MR_sv(6) = MR_tempr4;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	MR_r3 = MR_tempr3;
	MR_r4 = MR_tempr4;
	}
	MR_np_call_localret_ent(fn__bit_buffer__read__num_buffered_bits_1_0,
		bit_buffer__read__do_get_bits_7_0_i2);
MR_def_label(bit_buffer__read__do_get_bits_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	ML_BitBufferPtr	Buffer;
	MR_Integer	Pos;
#define	MR_PROC_LABEL	mercury__bit_buffer__read__do_get_bits_7_0
	Buffer = (ML_BitBufferPtr) MR_sv(6);
	MR_OBTAIN_GLOBAL_LOCK("pos");
{
#line 114 "bit_buffer.opt"

    Pos = Buffer->ML_bit_buffer_pos;
;}
#line 1430 "bit_buffer.read.c"
	MR_RELEASE_GLOBAL_LOCK("pos");
	MR_r4 = Pos;
#undef	MR_PROC_LABEL
	}
	if (((MR_Integer) MR_r1 >= (MR_Integer) MR_sv(2))) {
		MR_GOTO_LAB(bit_buffer__read__do_get_bits_7_0_i3);
	}
	MR_r2 = MR_r1;
	MR_r1 = MR_r4;
	MR_GOTO_LAB(bit_buffer__read__do_get_bits_7_0_i4);
MR_def_label(bit_buffer__read__do_get_bits_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r1 = MR_r4;
MR_def_label(bit_buffer__read__do_get_bits_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	ML_BitBufferPtr	Buffer;
	MR_BitmapPtr	BM;
#define	MR_PROC_LABEL	mercury__bit_buffer__read__do_get_bits_7_0
	Buffer = (ML_BitBufferPtr) MR_sv(6);
	MR_OBTAIN_GLOBAL_LOCK("bitmap");
{
#line 111 "bit_buffer.opt"

    BM = Buffer->ML_bit_buffer_bitmap;
;}
#line 1458 "bit_buffer.read.c"
	MR_RELEASE_GLOBAL_LOCK("bitmap");
	MR_r3 = (MR_Word) BM;
#undef	MR_PROC_LABEL
	}
	MR_sv(3) = MR_r2;
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(fn__bitmap__bits_3_0,
		bit_buffer__read__do_get_bits_7_0_i5);
MR_def_label(bit_buffer__read__do_get_bits_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	{
	MR_Integer	Bits;
#define	MR_PROC_LABEL	mercury__bit_buffer__read__do_get_bits_7_0
{
#line 163 "int.opt"

    Bits = ML_BITS_PER_INT;
;}
#line 1479 "bit_buffer.read.c"
	MR_tempr1 = Bits;
#undef	MR_PROC_LABEL
	}
	{
	ML_BitBufferPtr	Buffer;
	MR_BitmapPtr	BM;
#define	MR_PROC_LABEL	mercury__bit_buffer__read__do_get_bits_7_0
	Buffer = (ML_BitBufferPtr) MR_sv(6);
	MR_OBTAIN_GLOBAL_LOCK("bitmap");
{
#line 111 "bit_buffer.opt"

    BM = Buffer->ML_bit_buffer_bitmap;
;}
#line 1494 "bit_buffer.read.c"
	MR_RELEASE_GLOBAL_LOCK("bitmap");
	MR_tempr2 = (MR_Word) BM;
#undef	MR_PROC_LABEL
	}
	MR_tempr3 = ((MR_Integer) MR_sv(4) + (MR_Integer) MR_sv(2));
	{
	MR_BitmapPtr	BM;
	MR_Integer	Pos;
	ML_BitBufferPtr	Buffer0;
	ML_BitBufferPtr	Buffer;
#define	MR_PROC_LABEL	mercury__bit_buffer__read__do_get_bits_7_0
	BM = (MR_BitmapPtr) MR_tempr2;
	Pos = MR_tempr3;
	Buffer0 = (ML_BitBufferPtr) MR_sv(6);
	MR_OBTAIN_GLOBAL_LOCK("set_bitmap");
{
#line 143 "bit_buffer.opt"

    Buffer = Buffer0;
    Buffer->ML_bit_buffer_bitmap = BM;
    Buffer->ML_bit_buffer_pos = Pos;
;}
#line 1517 "bit_buffer.read.c"
	MR_RELEASE_GLOBAL_LOCK("set_bitmap");
	MR_tempr2 = (MR_Word) Buffer;
#undef	MR_PROC_LABEL
	}
	MR_tempr5 = MR_sv(2);
	MR_tempr3 = ((MR_Integer) 1 << ((MR_Integer) MR_tempr5 - (MR_Integer) 1));
	MR_tempr6 = MR_sv(3);
	MR_tempr4 = (((MR_Integer) MR_tempr1 - (MR_Integer) 1) - (((MR_Integer) MR_sv(1) + (MR_Integer) MR_tempr6) - (MR_Integer) 1));
	MR_r1 = (((MR_Integer) MR_sv(5) & ~((((MR_Integer) MR_tempr3 | ((MR_Integer) MR_tempr3 - (MR_Integer) 1)) << (MR_Integer) MR_tempr4))) | (((MR_Integer) MR_r1 << ((MR_Integer) MR_tempr5 - (MR_Integer) MR_tempr6)) << (MR_Integer) MR_tempr4));
	MR_r2 = MR_tempr6;
	MR_r3 = MR_tempr2;
	MR_decr_sp_and_return(7);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bit_buffer__read_module8)
	MR_init_entry1(bit_buffer__read__get_bits_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__bit_buffer__read__get_bits_8_0);
	MR_init_label10(bit_buffer__read__get_bits_8_0,6,8,10,9,12,15,14,4,17,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_bits'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__bit_buffer__read__get_bits_8_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	ML_BitBufferPtr	Buffer;
	MR_Word	ReadStatus;
#define	MR_PROC_LABEL	mercury__bit_buffer__read__get_bits_8_0
	Buffer = (ML_BitBufferPtr) MR_r5;
	MR_OBTAIN_GLOBAL_LOCK("read_status");
{
#line 132 "bit_buffer.opt"

    ReadStatus = Buffer->ML_bit_buffer_read_status;
;}
#line 1563 "bit_buffer.read.c"
	MR_RELEASE_GLOBAL_LOCK("read_status");
	MR_r6 = ReadStatus;
#undef	MR_PROC_LABEL
	}
	if (MR_LTAGS_TESTR(MR_r6,0,0)) {
		MR_GOTO_LAB(bit_buffer__read__get_bits_8_0_i3);
	}
	if (MR_INT_LE(MR_r3,0)) {
		MR_GOTO_LAB(bit_buffer__read__get_bits_8_0_i4);
	}
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(8) = (MR_Integer) 7;
	MR_sv(7) = (MR_Integer) 6;
	MR_sv(6) = (MR_Integer) 3;
	{
	MR_Integer	Bits;
#define	MR_PROC_LABEL	mercury__bit_buffer__read__get_bits_8_0
{
#line 163 "int.opt"

    Bits = ML_BITS_PER_INT;
;}
#line 1587 "bit_buffer.read.c"
	MR_r6 = Bits;
#undef	MR_PROC_LABEL
	}
	if (((MR_Integer) MR_r3 <= (MR_Integer) MR_r6)) {
		MR_GOTO_LAB(bit_buffer__read__get_bits_8_0_i6);
	}
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("bit_buffer.read.get_bits: invalid number of bits", 48);
	MR_np_call_localret_ent(require__error_1_0,
		bit_buffer__read__get_bits_8_0_i8);
MR_def_label(bit_buffer__read__get_bits_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_r4 = MR_r5;
	MR_sv(5) = MR_r1;
MR_def_label(bit_buffer__read__get_bits_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	TypeClassInfo;
	MR_Integer	Index;
	MR_Word	TypeInfo;
#define	MR_PROC_LABEL	mercury__bit_buffer__read__get_bits_8_0
	TypeClassInfo = MR_sv(5);
	Index = MR_sv(6);
{
#line 133 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);
;}
#line 1619 "bit_buffer.read.c"
	MR_r1 = TypeInfo;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	TypeClassInfo;
	MR_Integer	Index;
	MR_Word	TypeInfo;
#define	MR_PROC_LABEL	mercury__bit_buffer__read__get_bits_8_0
	TypeClassInfo = MR_sv(5);
	Index = MR_sv(7);
{
#line 133 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);
;}
#line 1635 "bit_buffer.read.c"
	MR_r2 = TypeInfo;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	TypeClassInfo;
	MR_Integer	Index;
	MR_Word	TypeInfo;
#define	MR_PROC_LABEL	mercury__bit_buffer__read__get_bits_8_0
	TypeClassInfo = MR_sv(5);
	Index = MR_sv(8);
{
#line 133 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);
;}
#line 1651 "bit_buffer.read.c"
	MR_r3 = TypeInfo;
#undef	MR_PROC_LABEL
	}
	MR_sv(4) = MR_r4;
	MR_np_call_localret_ent(fn__bit_buffer__read__num_buffered_bits_1_0,
		bit_buffer__read__get_bits_8_0_i10);
MR_def_label(bit_buffer__read__get_bits_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r1 < (MR_Integer) MR_sv(2))) {
		MR_GOTO_LAB(bit_buffer__read__get_bits_8_0_i9);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_np_call_localret_ent(bit_buffer__read__do_get_bits_7_0,
		bit_buffer__read__get_bits_8_0_i15);
MR_def_label(bit_buffer__read__get_bits_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(bit_buffer__read__do_refill_read_buffer_3_0,
		bit_buffer__read__get_bits_8_0_i12);
MR_def_label(bit_buffer__read__get_bits_8_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(bit_buffer__read__get_bits_8_0_i14);
	}
	MR_r1 = MR_sv(5);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(bit_buffer__read__do_get_bits_7_0,
		bit_buffer__read__get_bits_8_0_i15);
MR_def_label(bit_buffer__read__get_bits_8_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r4 = MR_tempr1;
	MR_decr_sp_and_return(9);
	}
MR_def_label(bit_buffer__read__get_bits_8_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_decr_sp_and_return(9);
	}
MR_def_label(bit_buffer__read__get_bits_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(bit_buffer__read__get_bits_8_0_i17);
	}
	MR_r1 = MR_r4;
	MR_r2 = (MR_Integer) 0;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r4 = MR_r5;
	MR_proceed();
MR_def_label(bit_buffer__read__get_bits_8_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("bit_buffer.read.get_bits: negative number of bits", 49);
	MR_np_tailcall_ent(require__error_1_0);
MR_def_label(bit_buffer__read__get_bits_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r4;
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_r6;
	MR_r4 = MR_r5;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bit_buffer__read_module9)
	MR_init_entry1(bit_buffer__read__get_bit_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__bit_buffer__read__get_bit_3_0);
	MR_init_label4(bit_buffer__read__get_bit_3_0,2,7,5,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_bit'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__bit_buffer__read__get_bit_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Integer) 0;
	MR_r3 = (MR_Integer) 1;
	MR_r4 = (MR_Integer) 0;
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(bit_buffer__read__get_bits_8_0,
		bit_buffer__read__get_bit_3_0_i2);
MR_def_label(bit_buffer__read__get_bit_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(bit_buffer__read__get_bit_3_0_i4);
	}
	if (MR_INT_NE(MR_r2,1)) {
		MR_GOTO_LAB(bit_buffer__read__get_bit_3_0_i5);
	}
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(bit_buffer__read__get_bit_3_0_i7);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,3,0);
	MR_r2 = MR_r4;
	MR_decr_sp_and_return(1);
MR_def_label(bit_buffer__read__get_bit_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,3,1);
	MR_r2 = MR_r4;
	MR_decr_sp_and_return(1);
MR_def_label(bit_buffer__read__get_bit_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r4;
	MR_decr_sp_and_return(1);
MR_def_label(bit_buffer__read__get_bit_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_r1, 0) = MR_tfield(1, MR_r3, 0);
	MR_r2 = MR_r4;
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__bitmap__copy_bits_6_0);

MR_BEGIN_MODULE(bit_buffer__read_module10)
	MR_init_entry1(bit_buffer__read__copy_buffered_bits_to_bitmap_10_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__bit_buffer__read__copy_buffered_bits_to_bitmap_10_0);
	MR_init_label4(bit_buffer__read__copy_buffered_bits_to_bitmap_10_0,2,3,4,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'copy_buffered_bits_to_bitmap'/10 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(bit_buffer__read__copy_buffered_bits_to_bitmap_10_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	MR_sv(4) = MR_r6;
	MR_sv(5) = MR_r7;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r8;
	MR_sv(6) = MR_tempr1;
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__bit_buffer__read__num_buffered_bits_1_0,
		bit_buffer__read__copy_buffered_bits_to_bitmap_10_0_i2);
MR_def_label(bit_buffer__read__copy_buffered_bits_to_bitmap_10_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_sv(3) >= (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(bit_buffer__read__copy_buffered_bits_to_bitmap_10_0_i3);
	}
	MR_r6 = MR_sv(3);
	MR_r5 = MR_sv(2);
	MR_r4 = MR_sv(4);
	MR_GOTO_LAB(bit_buffer__read__copy_buffered_bits_to_bitmap_10_0_i4);
MR_def_label(bit_buffer__read__copy_buffered_bits_to_bitmap_10_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = MR_r1;
	MR_r5 = MR_sv(2);
	MR_r4 = MR_sv(4);
MR_def_label(bit_buffer__read__copy_buffered_bits_to_bitmap_10_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	ML_BitBufferPtr	Buffer;
	MR_Integer	Pos;
#define	MR_PROC_LABEL	mercury__bit_buffer__read__copy_buffered_bits_to_bitmap_10_0
	Buffer = (ML_BitBufferPtr) MR_sv(6);
	MR_OBTAIN_GLOBAL_LOCK("pos");
{
#line 114 "bit_buffer.opt"

    Pos = Buffer->ML_bit_buffer_pos;
;}
#line 1860 "bit_buffer.read.c"
	MR_RELEASE_GLOBAL_LOCK("pos");
	MR_r3 = Pos;
#undef	MR_PROC_LABEL
	}
	{
	ML_BitBufferPtr	Buffer;
	MR_BitmapPtr	BM;
#define	MR_PROC_LABEL	mercury__bit_buffer__read__copy_buffered_bits_to_bitmap_10_0
	Buffer = (ML_BitBufferPtr) MR_sv(6);
	MR_OBTAIN_GLOBAL_LOCK("bitmap");
{
#line 111 "bit_buffer.opt"

    BM = Buffer->ML_bit_buffer_bitmap;
;}
#line 1876 "bit_buffer.read.c"
	MR_RELEASE_GLOBAL_LOCK("bitmap");
	MR_r2 = (MR_Word) BM;
#undef	MR_PROC_LABEL
	}
	MR_sv(4) = MR_r6;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r5;
	MR_r1 = (MR_Integer) 0;
	MR_np_call_localret_ent(fn__bitmap__copy_bits_6_0,
		bit_buffer__read__copy_buffered_bits_to_bitmap_10_0_i5);
MR_def_label(bit_buffer__read__copy_buffered_bits_to_bitmap_10_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	{
	ML_BitBufferPtr	Buffer;
	MR_BitmapPtr	BM;
#define	MR_PROC_LABEL	mercury__bit_buffer__read__copy_buffered_bits_to_bitmap_10_0
	Buffer = (ML_BitBufferPtr) MR_sv(6);
	MR_OBTAIN_GLOBAL_LOCK("bitmap");
{
#line 111 "bit_buffer.opt"

    BM = Buffer->ML_bit_buffer_bitmap;
;}
#line 1902 "bit_buffer.read.c"
	MR_RELEASE_GLOBAL_LOCK("bitmap");
	MR_tempr1 = (MR_Word) BM;
#undef	MR_PROC_LABEL
	}
	MR_tempr2 = ((MR_Integer) MR_sv(1) + (MR_Integer) MR_sv(4));
	{
	MR_BitmapPtr	BM;
	MR_Integer	Pos;
	ML_BitBufferPtr	Buffer0;
	ML_BitBufferPtr	Buffer;
#define	MR_PROC_LABEL	mercury__bit_buffer__read__copy_buffered_bits_to_bitmap_10_0
	BM = (MR_BitmapPtr) MR_tempr1;
	Pos = MR_tempr2;
	Buffer0 = (ML_BitBufferPtr) MR_sv(6);
	MR_OBTAIN_GLOBAL_LOCK("set_bitmap");
{
#line 143 "bit_buffer.opt"

    Buffer = Buffer0;
    Buffer->ML_bit_buffer_bitmap = BM;
    Buffer->ML_bit_buffer_pos = Pos;
;}
#line 1925 "bit_buffer.read.c"
	MR_RELEASE_GLOBAL_LOCK("set_bitmap");
	MR_r5 = (MR_Word) Buffer;
#undef	MR_PROC_LABEL
	}
	MR_tempr1 = MR_r1;
	MR_tempr3 = MR_sv(4);
	MR_r1 = ((MR_Integer) MR_sv(2) + (MR_Integer) MR_tempr3);
	MR_r2 = ((MR_Integer) MR_sv(3) - (MR_Integer) MR_tempr3);
	MR_r3 = MR_tempr1;
	MR_r4 = ((MR_Integer) MR_sv(5) + (MR_Integer) MR_tempr3);
	MR_decr_sp_and_return(7);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bit_buffer__read_module11)
	MR_init_entry1(bit_buffer__read__bulk_get_into_result_bitmap_11_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__bit_buffer__read__bulk_get_into_result_bitmap_11_0);
	MR_init_label3(bit_buffer__read__bulk_get_into_result_bitmap_11_0,2,4,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'bulk_get_into_result_bitmap'/11 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(bit_buffer__read__bulk_get_into_result_bitmap_11_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	ML_BitBufferPtr	Buffer;
	MR_Word	Stream;
#define	MR_PROC_LABEL	mercury__bit_buffer__read__bulk_get_into_result_bitmap_11_0
	Buffer = (ML_BitBufferPtr) MR_r6;
	MR_OBTAIN_GLOBAL_LOCK("stream");
{
#line 123 "bit_buffer.opt"

    Stream = Buffer->ML_bit_buffer_stream;
;}
#line 1974 "bit_buffer.read.c"
	MR_RELEASE_GLOBAL_LOCK("stream");
	MR_tempr1 = Stream;
#undef	MR_PROC_LABEL
	}
	{
	ML_BitBufferPtr	Buffer;
	MR_Word	State;
#define	MR_PROC_LABEL	mercury__bit_buffer__read__bulk_get_into_result_bitmap_11_0
	Buffer = (ML_BitBufferPtr) MR_r6;
	MR_OBTAIN_GLOBAL_LOCK("state");
{
#line 126 "bit_buffer.opt"

    State = Buffer->ML_bit_buffer_state;
;}
#line 1990 "bit_buffer.read.c"
	MR_RELEASE_GLOBAL_LOCK("state");
	MR_r7 = State;
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r5;
	MR_sv(4) = MR_r6;
	MR_r3 = MR_tempr1;
	MR_tempr2 = MR_r4;
	MR_r4 = ((MR_Integer) MR_r2 / (MR_Integer) 8);
	MR_r5 = ((MR_Integer) MR_sv(2) / (MR_Integer) 8);
	MR_r6 = MR_tempr2;
	MR_r2 = (MR_Integer) 1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(bit_buffer__read__bulk_get_into_result_bitmap_11_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_5),
		mercury__bit_buffer__read__bulk_get_into_result_bitmap_11_0_i2);
MR_def_label(bit_buffer__read__bulk_get_into_result_bitmap_11_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(bit_buffer__read__bulk_get_into_result_bitmap_11_0_i4);
	}
	MR_r5 = MR_r3;
	MR_r6 = MR_r4;
	MR_r8 = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = ((MR_Integer) MR_r2 * (MR_Integer) 8);
	MR_r9 = MR_tempr1;
	MR_r1 = ((MR_Integer) MR_sv(1) + (MR_Integer) MR_tempr1);
	MR_r2 = ((MR_Integer) MR_sv(2) - (MR_Integer) MR_tempr1);
	MR_r3 = MR_r8;
	MR_r4 = ((MR_Integer) MR_sv(3) + (MR_Integer) MR_tempr1);
	MR_r7 = MR_sv(4);
	MR_GOTO_LAB(bit_buffer__read__bulk_get_into_result_bitmap_11_0_i3);
	}
MR_def_label(bit_buffer__read__bulk_get_into_result_bitmap_11_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	ReadStatus;
	ML_BitBufferPtr	Buffer0;
	ML_BitBufferPtr	Buffer;
#define	MR_PROC_LABEL	mercury__bit_buffer__read__bulk_get_into_result_bitmap_11_0
	ReadStatus = MR_r3;
	Buffer0 = (ML_BitBufferPtr) MR_sv(4);
	MR_OBTAIN_GLOBAL_LOCK("set_read_status");
{
#line 156 "bit_buffer.opt"

    Buffer = Buffer0;
    Buffer->ML_bit_buffer_read_status = ReadStatus;
;}
#line 2044 "bit_buffer.read.c"
	MR_RELEASE_GLOBAL_LOCK("set_read_status");
	MR_r7 = (MR_Word) Buffer;
#undef	MR_PROC_LABEL
	}
	MR_r5 = MR_r3;
	MR_r6 = MR_r4;
	MR_r8 = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = ((MR_Integer) MR_r2 * (MR_Integer) 8);
	MR_r9 = MR_tempr1;
	MR_r1 = ((MR_Integer) MR_sv(1) + (MR_Integer) MR_tempr1);
	MR_r2 = ((MR_Integer) MR_sv(2) - (MR_Integer) MR_tempr1);
	MR_r3 = MR_r8;
	MR_r4 = ((MR_Integer) MR_sv(3) + (MR_Integer) MR_tempr1);
	}
MR_def_label(bit_buffer__read__bulk_get_into_result_bitmap_11_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	State;
	ML_BitBufferPtr	Buffer0;
	ML_BitBufferPtr	Buffer;
#define	MR_PROC_LABEL	mercury__bit_buffer__read__bulk_get_into_result_bitmap_11_0
	State = MR_r6;
	Buffer0 = (ML_BitBufferPtr) MR_r7;
	MR_OBTAIN_GLOBAL_LOCK("set_state");
{
#line 148 "bit_buffer.opt"

    Buffer = Buffer0;
    Buffer->ML_bit_buffer_state = State;
;}
#line 2077 "bit_buffer.read.c"
	MR_RELEASE_GLOBAL_LOCK("set_state");
	MR_r6 = (MR_Word) Buffer;
#undef	MR_PROC_LABEL
	}
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bit_buffer__read_module12)
	MR_init_entry1(bit_buffer__read__recursively_get_bitmap_9_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__bit_buffer__read__recursively_get_bitmap_9_0);
	MR_init_label10(bit_buffer__read__recursively_get_bitmap_9_0,77,2,4,5,9,13,16,15,12,11)
	MR_init_label5(bit_buffer__read__recursively_get_bitmap_9_0,7,18,22,21,20)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'recursively_get_bitmap'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(bit_buffer__read__recursively_get_bitmap_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
MR_def_label(bit_buffer__read__recursively_get_bitmap_9_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(bit_buffer__read__recursively_get_bitmap_9_0_i2);
	}
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_r4;
	MR_r2 = MR_r5;
	MR_r4 = MR_r6;
	MR_decr_sp_and_return(9);
MR_def_label(bit_buffer__read__recursively_get_bitmap_9_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8;
	{
	MR_Word	TypeClassInfo;
	MR_Integer	Index;
	MR_Word	TypeInfo;
#define	MR_PROC_LABEL	mercury__bit_buffer__read__recursively_get_bitmap_9_0
	TypeClassInfo = MR_r1;
	Index = (MR_Integer) 3;
{
#line 133 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);
;}
#line 2133 "bit_buffer.read.c"
	MR_tempr1 = TypeInfo;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	TypeClassInfo;
	MR_Integer	Index;
	MR_Word	TypeInfo;
#define	MR_PROC_LABEL	mercury__bit_buffer__read__recursively_get_bitmap_9_0
	TypeClassInfo = MR_r1;
	Index = (MR_Integer) 6;
{
#line 133 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);
;}
#line 2149 "bit_buffer.read.c"
	MR_tempr2 = TypeInfo;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	TypeClassInfo;
	MR_Integer	Index;
	MR_Word	TypeInfo;
#define	MR_PROC_LABEL	mercury__bit_buffer__read__recursively_get_bitmap_9_0
	TypeClassInfo = MR_r1;
	Index = (MR_Integer) 7;
{
#line 133 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);
;}
#line 2165 "bit_buffer.read.c"
	MR_tempr3 = TypeInfo;
#undef	MR_PROC_LABEL
	}
	MR_sv(6) = MR_r1;
	MR_sv(5) = (MR_Integer) 3;
	MR_sv(7) = (MR_Integer) 6;
	MR_sv(8) = (MR_Integer) 7;
	MR_r1 = MR_tempr1;
	MR_tempr4 = MR_r2;
	MR_r2 = MR_tempr2;
	MR_tempr5 = MR_r3;
	MR_r3 = MR_tempr3;
	MR_tempr6 = MR_r4;
	MR_r4 = MR_tempr4;
	MR_tempr7 = MR_r5;
	MR_r5 = MR_tempr5;
	MR_tempr8 = MR_r6;
	MR_r6 = MR_tempr6;
	MR_r7 = MR_tempr7;
	MR_r8 = MR_tempr8;
	}
	MR_np_call_localret_ent(bit_buffer__read__copy_buffered_bits_to_bitmap_10_0,
		bit_buffer__read__recursively_get_bitmap_9_0_i4);
MR_def_label(bit_buffer__read__recursively_get_bitmap_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(bit_buffer__read__recursively_get_bitmap_9_0_i5);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_r4;
	MR_r4 = MR_r5;
	MR_decr_sp_and_return(9);
	}
MR_def_label(bit_buffer__read__recursively_get_bitmap_9_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr1 = ((MR_Integer) MR_r1 % (MR_Integer) 8);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(bit_buffer__read__recursively_get_bitmap_9_0_i7);
	}
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_tempr3 = MR_r3;
	MR_r3 = MR_tempr2;
	MR_tempr4 = MR_r4;
	MR_r4 = MR_tempr3;
	MR_tempr5 = MR_r5;
	MR_r5 = MR_tempr4;
	MR_r6 = MR_tempr5;
	}
	MR_np_call_localret_ent(bit_buffer__read__bulk_get_into_result_bitmap_11_0,
		bit_buffer__read__recursively_get_bitmap_9_0_i9);
MR_def_label(bit_buffer__read__recursively_get_bitmap_9_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r5,0,0)) {
		MR_GOTO_LAB(bit_buffer__read__recursively_get_bitmap_9_0_i11);
	}
	if (MR_INT_LE(MR_r2,0)) {
		MR_GOTO_LAB(bit_buffer__read__recursively_get_bitmap_9_0_i12);
	}
	{
	MR_Word MR_tempr1;
	{
	MR_Integer	Bits;
#define	MR_PROC_LABEL	mercury__bit_buffer__read__recursively_get_bitmap_9_0
{
#line 163 "int.opt"

    Bits = ML_BITS_PER_INT;
;}
#line 2243 "bit_buffer.read.c"
	MR_tempr1 = Bits;
#undef	MR_PROC_LABEL
	}
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = MR_sv(6);
	MR_r2 = ((MR_Integer) MR_tempr1 - (MR_Integer) MR_r2);
	MR_r3 = MR_sv(2);
	MR_r4 = (MR_Integer) 0;
	MR_r5 = MR_r6;
	}
	MR_np_call_localret_ent(bit_buffer__read__get_bits_8_0,
		bit_buffer__read__recursively_get_bitmap_9_0_i13);
MR_def_label(bit_buffer__read__recursively_get_bitmap_9_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(bit_buffer__read__recursively_get_bitmap_9_0_i15);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r2;
	MR_tempr2 = MR_sv(1);
	MR_sv(1) = MR_r4;
	MR_tempr3 = MR_r1;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr3;
	}
	MR_np_call_localret_ent(fn__f_98_105_116_109_97_112_95_95_98_105_116_115_32_58_61_4_0,
		bit_buffer__read__recursively_get_bitmap_9_0_i16);
MR_def_label(bit_buffer__read__recursively_get_bitmap_9_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = ((MR_Integer) MR_sv(4) + (MR_Integer) MR_sv(3));
	MR_r4 = MR_sv(1);
	MR_decr_sp_and_return(9);
MR_def_label(bit_buffer__read__recursively_get_bitmap_9_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = ((MR_Integer) MR_sv(4) + (MR_Integer) MR_r2);
	MR_decr_sp_and_return(9);
MR_def_label(bit_buffer__read__recursively_get_bitmap_9_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_r4;
	MR_r4 = MR_r6;
	MR_decr_sp_and_return(9);
	}
MR_def_label(bit_buffer__read__recursively_get_bitmap_9_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = MR_r5;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_r4;
	MR_r4 = MR_r6;
	MR_decr_sp_and_return(9);
	}
MR_def_label(bit_buffer__read__recursively_get_bitmap_9_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_sv(4) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_r5;
	MR_np_call_localret_ent(bit_buffer__read__do_refill_read_buffer_3_0,
		bit_buffer__read__recursively_get_bitmap_9_0_i18);
MR_def_label(bit_buffer__read__recursively_get_bitmap_9_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(bit_buffer__read__recursively_get_bitmap_9_0_i20);
	}
	{
	MR_Word	TypeClassInfo;
	MR_Integer	Index;
	MR_Word	TypeInfo;
#define	MR_PROC_LABEL	mercury__bit_buffer__read__recursively_get_bitmap_9_0
	TypeClassInfo = MR_sv(6);
	Index = MR_sv(5);
{
#line 133 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);
;}
#line 2338 "bit_buffer.read.c"
	MR_r1 = TypeInfo;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	{
	MR_Word	TypeClassInfo;
	MR_Integer	Index;
	MR_Word	TypeInfo;
#define	MR_PROC_LABEL	mercury__bit_buffer__read__recursively_get_bitmap_9_0
	TypeClassInfo = MR_sv(6);
	Index = MR_sv(7);
{
#line 133 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);
;}
#line 2356 "bit_buffer.read.c"
	MR_tempr1 = TypeInfo;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	TypeClassInfo;
	MR_Integer	Index;
	MR_Word	TypeInfo;
#define	MR_PROC_LABEL	mercury__bit_buffer__read__recursively_get_bitmap_9_0
	TypeClassInfo = MR_sv(6);
	Index = MR_sv(8);
{
#line 133 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);
;}
#line 2372 "bit_buffer.read.c"
	MR_r3 = TypeInfo;
#undef	MR_PROC_LABEL
	}
	MR_sv(5) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r4 = MR_sv(5);
	}
	MR_np_call_localret_ent(fn__bit_buffer__read__num_buffered_bits_1_0,
		bit_buffer__read__recursively_get_bitmap_9_0_i22);
MR_def_label(bit_buffer__read__recursively_get_bitmap_9_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_LE(MR_r1,0)) {
		MR_GOTO_LAB(bit_buffer__read__recursively_get_bitmap_9_0_i21);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(2);
	MR_r6 = MR_sv(5);
	MR_succip_word = MR_sv(9);
	MR_GOTO_LAB(bit_buffer__read__recursively_get_bitmap_9_0_i77);
MR_def_label(bit_buffer__read__recursively_get_bitmap_9_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(2);
	MR_r4 = MR_sv(5);
	MR_decr_sp_and_return(9);
MR_def_label(bit_buffer__read__recursively_get_bitmap_9_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(4);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r4 = MR_tempr1;
	MR_decr_sp_and_return(9);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(bitmap__throw_bounds_error_4_0);

MR_BEGIN_MODULE(bit_buffer__read_module13)
	MR_init_entry1(bit_buffer__read__get_bitmap_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__bit_buffer__read__get_bitmap_8_0);
	MR_init_label9(bit_buffer__read__get_bitmap_8_0,8,9,10,7,5,17,15,13,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_bitmap'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__bit_buffer__read__get_bitmap_8_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	ML_BitBufferPtr	Buffer;
	MR_Word	ReadStatus;
#define	MR_PROC_LABEL	mercury__bit_buffer__read__get_bitmap_8_0
	Buffer = (ML_BitBufferPtr) MR_r5;
	MR_OBTAIN_GLOBAL_LOCK("read_status");
{
#line 132 "bit_buffer.opt"

    ReadStatus = Buffer->ML_bit_buffer_read_status;
;}
#line 2446 "bit_buffer.read.c"
	MR_RELEASE_GLOBAL_LOCK("read_status");
	MR_r6 = ReadStatus;
#undef	MR_PROC_LABEL
	}
	if (MR_LTAGS_TESTR(MR_r6,0,0)) {
		MR_GOTO_LAB(bit_buffer__read__get_bitmap_8_0_i3);
	}
	if (MR_INT_LE(MR_r3,0)) {
		MR_GOTO_LAB(bit_buffer__read__get_bitmap_8_0_i5);
	}
	if (((MR_Integer) 0 > (MR_Integer) MR_r2)) {
		MR_GOTO_LAB(bit_buffer__read__get_bitmap_8_0_i5);
	}
	{
	MR_BitmapPtr	BM;
	MR_Integer	NumBits;
#define	MR_PROC_LABEL	mercury__bit_buffer__read__get_bitmap_8_0
	BM = (MR_BitmapPtr) MR_r4;
{
#line 118 "bitmap.opt"

    NumBits = BM->num_bits;
;}
#line 2470 "bit_buffer.read.c"
	MR_r7 = NumBits;
#undef	MR_PROC_LABEL
	}
	if (((MR_Integer) MR_r2 >= (MR_Integer) MR_r7)) {
		MR_GOTO_LAB(bit_buffer__read__get_bitmap_8_0_i5);
	}
	MR_r7 = (((MR_Integer) MR_r2 + (MR_Integer) MR_r3) - (MR_Integer) 1);
	if (((MR_Integer) 0 > (MR_Integer) MR_r7)) {
		MR_GOTO_LAB(bit_buffer__read__get_bitmap_8_0_i5);
	}
	{
	MR_BitmapPtr	BM;
	MR_Integer	NumBits;
#define	MR_PROC_LABEL	mercury__bit_buffer__read__get_bitmap_8_0
	BM = (MR_BitmapPtr) MR_r4;
{
#line 118 "bitmap.opt"

    NumBits = BM->num_bits;
;}
#line 2491 "bit_buffer.read.c"
	MR_r8 = NumBits;
#undef	MR_PROC_LABEL
	}
	if (((MR_Integer) MR_r7 >= (MR_Integer) MR_r8)) {
		MR_GOTO_LAB(bit_buffer__read__get_bitmap_8_0_i5);
	}
	{
	ML_BitBufferPtr	Buffer;
	MR_Word	UseStream;
#define	MR_PROC_LABEL	mercury__bit_buffer__read__get_bitmap_8_0
	Buffer = (ML_BitBufferPtr) MR_r5;
	MR_OBTAIN_GLOBAL_LOCK("use_stream");
{
#line 120 "bit_buffer.opt"

    UseStream = Buffer->ML_bit_buffer_use_stream;
;}
#line 2509 "bit_buffer.read.c"
	MR_RELEASE_GLOBAL_LOCK("use_stream");
	MR_r7 = UseStream;
#undef	MR_PROC_LABEL
	}
	if (MR_INT_NE(MR_r7,0)) {
		MR_GOTO_LAB(bit_buffer__read__get_bitmap_8_0_i7);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	ML_BitBufferPtr	Buffer;
	MR_Integer	Pos;
#define	MR_PROC_LABEL	mercury__bit_buffer__read__get_bitmap_8_0
	Buffer = (ML_BitBufferPtr) MR_r5;
	MR_OBTAIN_GLOBAL_LOCK("pos");
{
#line 114 "bit_buffer.opt"

    Pos = Buffer->ML_bit_buffer_pos;
;}
#line 2530 "bit_buffer.read.c"
	MR_RELEASE_GLOBAL_LOCK("pos");
	MR_r7 = Pos;
#undef	MR_PROC_LABEL
	}
	{
	ML_BitBufferPtr	Buffer;
	MR_Integer	Size;
#define	MR_PROC_LABEL	mercury__bit_buffer__read__get_bitmap_8_0
	Buffer = (ML_BitBufferPtr) MR_r5;
	MR_OBTAIN_GLOBAL_LOCK("size");
{
#line 117 "bit_buffer.opt"

    Size = Buffer->ML_bit_buffer_size;
;}
#line 2546 "bit_buffer.read.c"
	MR_RELEASE_GLOBAL_LOCK("size");
	MR_r8 = Size;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r7;
	MR_r6 = ((MR_Integer) MR_r8 - (MR_Integer) MR_tempr1);
	if (((MR_Integer) MR_r6 >= (MR_Integer) MR_r3)) {
		MR_GOTO_LAB(bit_buffer__read__get_bitmap_8_0_i8);
	}
	MR_sv(4) = MR_r5;
	MR_r5 = MR_r2;
	MR_sv(1) = MR_r3;
	MR_r3 = MR_tempr1;
	MR_GOTO_LAB(bit_buffer__read__get_bitmap_8_0_i9);
	}
MR_def_label(bit_buffer__read__get_bitmap_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r5;
	MR_r5 = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(1) = MR_tempr1;
	MR_r6 = MR_tempr1;
	MR_r3 = MR_r7;
	}
MR_def_label(bit_buffer__read__get_bitmap_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	ML_BitBufferPtr	Buffer;
	MR_BitmapPtr	BM;
#define	MR_PROC_LABEL	mercury__bit_buffer__read__get_bitmap_8_0
	Buffer = (ML_BitBufferPtr) MR_sv(4);
	MR_OBTAIN_GLOBAL_LOCK("bitmap");
{
#line 111 "bit_buffer.opt"

    BM = Buffer->ML_bit_buffer_bitmap;
;}
#line 2588 "bit_buffer.read.c"
	MR_RELEASE_GLOBAL_LOCK("bitmap");
	MR_r2 = (MR_Word) BM;
#undef	MR_PROC_LABEL
	}
	MR_sv(2) = MR_r6;
	MR_sv(3) = MR_r3;
	MR_r1 = (MR_Integer) 0;
	MR_np_call_localret_ent(fn__bitmap__copy_bits_6_0,
		bit_buffer__read__get_bitmap_8_0_i10);
MR_def_label(bit_buffer__read__get_bitmap_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	ML_BitBufferPtr	Buffer;
	MR_BitmapPtr	BM;
#define	MR_PROC_LABEL	mercury__bit_buffer__read__get_bitmap_8_0
	Buffer = (ML_BitBufferPtr) MR_sv(4);
	MR_OBTAIN_GLOBAL_LOCK("bitmap");
{
#line 111 "bit_buffer.opt"

    BM = Buffer->ML_bit_buffer_bitmap;
;}
#line 2613 "bit_buffer.read.c"
	MR_RELEASE_GLOBAL_LOCK("bitmap");
	MR_tempr1 = (MR_Word) BM;
#undef	MR_PROC_LABEL
	}
	MR_tempr2 = ((MR_Integer) MR_sv(3) + (MR_Integer) MR_sv(1));
	{
	MR_BitmapPtr	BM;
	MR_Integer	Pos;
	ML_BitBufferPtr	Buffer0;
	ML_BitBufferPtr	Buffer;
#define	MR_PROC_LABEL	mercury__bit_buffer__read__get_bitmap_8_0
	BM = (MR_BitmapPtr) MR_tempr1;
	Pos = MR_tempr2;
	Buffer0 = (ML_BitBufferPtr) MR_sv(4);
	MR_OBTAIN_GLOBAL_LOCK("set_bitmap");
{
#line 143 "bit_buffer.opt"

    Buffer = Buffer0;
    Buffer->ML_bit_buffer_bitmap = BM;
    Buffer->ML_bit_buffer_pos = Pos;
;}
#line 2636 "bit_buffer.read.c"
	MR_RELEASE_GLOBAL_LOCK("set_bitmap");
	MR_tempr1 = (MR_Word) Buffer;
#undef	MR_PROC_LABEL
	}
	MR_r4 = MR_tempr1;
	MR_r2 = MR_sv(2);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(5);
	}
MR_def_label(bit_buffer__read__get_bitmap_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_r5 = (MR_Integer) 0;
	MR_r6 = MR_tempr1;
	MR_np_tailcall_ent(bit_buffer__read__recursively_get_bitmap_9_0);
	}
MR_def_label(bit_buffer__read__get_bitmap_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(bit_buffer__read__get_bitmap_8_0_i13);
	}
	if (((MR_Integer) 0 > (MR_Integer) MR_r2)) {
		MR_GOTO_LAB(bit_buffer__read__get_bitmap_8_0_i17);
	}
	{
	MR_BitmapPtr	BM;
	MR_Integer	NumBits;
#define	MR_PROC_LABEL	mercury__bit_buffer__read__get_bitmap_8_0
	BM = (MR_BitmapPtr) MR_r4;
{
#line 118 "bitmap.opt"

    NumBits = BM->num_bits;
;}
#line 2673 "bit_buffer.read.c"
	MR_r6 = NumBits;
#undef	MR_PROC_LABEL
	}
	if (((MR_Integer) MR_r2 >= (MR_Integer) MR_r6)) {
		MR_GOTO_LAB(bit_buffer__read__get_bitmap_8_0_i17);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_r6 = MR_r4;
	MR_r4 = MR_r5;
	MR_sv(3) = MR_r2;
	MR_sv(1) = MR_r3;
	MR_r1 = MR_r6;
	MR_GOTO_LAB(bit_buffer__read__get_bitmap_8_0_i15);
MR_def_label(bit_buffer__read__get_bitmap_8_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(bit_buffer__read__get_bitmap_8_0_i13);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_r6 = MR_r4;
	MR_r4 = MR_r5;
	MR_sv(3) = MR_r2;
	MR_sv(1) = MR_r3;
	MR_r1 = MR_r6;
MR_def_label(bit_buffer__read__get_bitmap_8_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 0;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(5);
MR_def_label(bit_buffer__read__get_bitmap_8_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r4;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Word) MR_string_const("bit_buffer.read.get_bitmap", 26);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(bitmap__throw_bounds_error_4_0);
	}
MR_def_label(bit_buffer__read__get_bitmap_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_r4 = MR_r5;
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_r6;
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bit_buffer__read_module14)
	MR_init_entry1(bit_buffer__read__get_bitmap_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__bit_buffer__read__get_bitmap_6_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_bitmap'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__bit_buffer__read__get_bitmap_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	{
	MR_BitmapPtr	BM;
	MR_Integer	NumBits;
#define	MR_PROC_LABEL	mercury__bit_buffer__read__get_bitmap_6_0
	BM = (MR_BitmapPtr) MR_r2;
{
#line 118 "bitmap.opt"

    NumBits = BM->num_bits;
;}
#line 2760 "bit_buffer.read.c"
	MR_tempr1 = NumBits;
#undef	MR_PROC_LABEL
	}
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Integer) 0;
	MR_tempr3 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_r5 = MR_tempr3;
	MR_np_tailcall_ent(bit_buffer__read__get_bitmap_8_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bit_buffer__read_module15)
	MR_init_entry1(bit_buffer__read__finalize_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__bit_buffer__read__finalize_6_0);
	MR_init_label1(bit_buffer__read__finalize_6_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'finalize'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__bit_buffer__read__finalize_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7;
	{
	ML_BitBufferPtr	Buffer;
	MR_Word	Stream;
#define	MR_PROC_LABEL	mercury__bit_buffer__read__finalize_6_0
	Buffer = (ML_BitBufferPtr) MR_r2;
	MR_OBTAIN_GLOBAL_LOCK("stream");
{
#line 123 "bit_buffer.opt"

    Stream = Buffer->ML_bit_buffer_stream;
;}
#line 2808 "bit_buffer.read.c"
	MR_RELEASE_GLOBAL_LOCK("stream");
	MR_tempr1 = Stream;
#undef	MR_PROC_LABEL
	}
	{
	ML_BitBufferPtr	Buffer;
	MR_Word	State;
#define	MR_PROC_LABEL	mercury__bit_buffer__read__finalize_6_0
	Buffer = (ML_BitBufferPtr) MR_r2;
	MR_OBTAIN_GLOBAL_LOCK("state");
{
#line 126 "bit_buffer.opt"

    State = Buffer->ML_bit_buffer_state;
;}
#line 2824 "bit_buffer.read.c"
	MR_RELEASE_GLOBAL_LOCK("state");
	MR_tempr2 = State;
#undef	MR_PROC_LABEL
	}
	{
	ML_BitBufferPtr	Buffer;
	MR_BitmapPtr	BM;
#define	MR_PROC_LABEL	mercury__bit_buffer__read__finalize_6_0
	Buffer = (ML_BitBufferPtr) MR_r2;
	MR_OBTAIN_GLOBAL_LOCK("bitmap");
{
#line 111 "bit_buffer.opt"

    BM = Buffer->ML_bit_buffer_bitmap;
;}
#line 2840 "bit_buffer.read.c"
	MR_RELEASE_GLOBAL_LOCK("bitmap");
	MR_tempr3 = (MR_Word) BM;
#undef	MR_PROC_LABEL
	}
	{
	ML_BitBufferPtr	Buffer;
	MR_Integer	Pos;
#define	MR_PROC_LABEL	mercury__bit_buffer__read__finalize_6_0
	Buffer = (ML_BitBufferPtr) MR_r2;
	MR_OBTAIN_GLOBAL_LOCK("pos");
{
#line 114 "bit_buffer.opt"

    Pos = Buffer->ML_bit_buffer_pos;
;}
#line 2856 "bit_buffer.read.c"
	MR_RELEASE_GLOBAL_LOCK("pos");
	MR_tempr4 = Pos;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	TypeClassInfo;
	MR_Integer	Index;
	MR_Word	TypeInfo;
#define	MR_PROC_LABEL	mercury__bit_buffer__read__finalize_6_0
	TypeClassInfo = MR_r1;
	Index = (MR_Integer) 3;
{
#line 133 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);
;}
#line 2873 "bit_buffer.read.c"
	MR_tempr5 = TypeInfo;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	TypeClassInfo;
	MR_Integer	Index;
	MR_Word	TypeInfo;
#define	MR_PROC_LABEL	mercury__bit_buffer__read__finalize_6_0
	TypeClassInfo = MR_r1;
	Index = (MR_Integer) 6;
{
#line 133 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);
;}
#line 2889 "bit_buffer.read.c"
	MR_tempr6 = TypeInfo;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	TypeClassInfo;
	MR_Integer	Index;
	MR_Word	TypeInfo;
#define	MR_PROC_LABEL	mercury__bit_buffer__read__finalize_6_0
	TypeClassInfo = MR_r1;
	Index = (MR_Integer) 7;
{
#line 133 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);
;}
#line 2905 "bit_buffer.read.c"
	MR_r3 = TypeInfo;
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_tempr2;
	MR_sv(3) = MR_tempr3;
	MR_sv(4) = MR_tempr4;
	MR_r1 = MR_tempr5;
	MR_tempr7 = MR_r2;
	MR_r2 = MR_tempr6;
	MR_r4 = MR_tempr7;
	}
	MR_np_call_localret_ent(fn__bit_buffer__read__num_buffered_bits_1_0,
		bit_buffer__read__finalize_6_0_i2);
MR_def_label(bit_buffer__read__finalize_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___bit_buffer__bit_buffer_3_0);

MR_BEGIN_MODULE(bit_buffer__read_module16)
	MR_init_entry1(__Unify___bit_buffer__read__io_read_buffer_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___bit_buffer__read__io_read_buffer_0_0);
	MR_init_label1(__Unify___bit_buffer__read__io_read_buffer_0_0,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___bit_buffer__read__io_read_buffer_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_tempr1;
	MR_tempr2 = MR_r1;
	MR_sv(1) = MR_tempr2;
	if ((MR_tempr2 == MR_tempr1)) {
		MR_GOTO_LAB(__Unify___bit_buffer__read__io_read_buffer_0_0_i5);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(io, binary_input_stream);
	MR_r2 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(io, error);
	MR_r4 = MR_tempr2;
	MR_r5 = MR_tempr1;
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___bit_buffer__bit_buffer_3_0);
	}
MR_def_label(__Unify___bit_buffer__read__io_read_buffer_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_r1 = MR_TRUE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(builtin__compare_3_0);

MR_BEGIN_MODULE(bit_buffer__read_module17)
	MR_init_entry1(__Compare___bit_buffer__read__io_read_buffer_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___bit_buffer__read__io_read_buffer_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___bit_buffer__read__io_read_buffer_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(builtin__compare_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bit_buffer__read_module18)
	MR_init_entry1(__Unify___bit_buffer__read__read_buffer_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___bit_buffer__read__read_buffer_0_0);
	MR_init_label1(__Unify___bit_buffer__read__read_buffer_0_0,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___bit_buffer__read__read_buffer_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_tempr1;
	MR_tempr2 = MR_r1;
	MR_sv(1) = MR_tempr2;
	if ((MR_tempr2 == MR_tempr1)) {
		MR_GOTO_LAB(__Unify___bit_buffer__read__read_buffer_0_0_i5);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(bit_buffer, error_stream);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(bit_buffer, error_state);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(bit_buffer, error_stream_error);
	MR_r4 = MR_tempr2;
	MR_r5 = MR_tempr1;
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___bit_buffer__bit_buffer_3_0);
	}
MR_def_label(__Unify___bit_buffer__read__read_buffer_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_r1 = MR_TRUE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bit_buffer__read_module19)
	MR_init_entry1(__Compare___bit_buffer__read__read_buffer_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___bit_buffer__read__read_buffer_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___bit_buffer__read__read_buffer_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(builtin__compare_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bit_buffer__read_module20)
	MR_init_entry1(__Unify___bit_buffer__read__read_buffer_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___bit_buffer__read__read_buffer_3_0);
	MR_init_label1(__Unify___bit_buffer__read__read_buffer_3_0,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___bit_buffer__read__read_buffer_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r4 == MR_r5)) {
		MR_GOTO_LAB(__Unify___bit_buffer__read__read_buffer_3_0_i6);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_r5;
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_sv(5) = MR_r3;
	MR_decr_sp(6);
	MR_np_tailcall_ent(__Unify___bit_buffer__bit_buffer_3_0);
MR_def_label(__Unify___bit_buffer__read__read_buffer_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___bit_buffer__bit_buffer_3_0);

MR_BEGIN_MODULE(bit_buffer__read_module21)
	MR_init_entry1(__Compare___bit_buffer__read__read_buffer_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___bit_buffer__read__read_buffer_3_0);
	MR_init_label2(__Compare___bit_buffer__read__read_buffer_3_0,3,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___bit_buffer__read__read_buffer_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r4 == MR_r5)) {
		MR_GOTO_LAB(__Compare___bit_buffer__read__read_buffer_3_0_i3);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_r5;
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_sv(5) = MR_r3;
	MR_GOTO_LAB(__Compare___bit_buffer__read__read_buffer_3_0_i2);
MR_def_label(__Compare___bit_buffer__read__read_buffer_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___bit_buffer__read__read_buffer_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(2);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(__Compare___bit_buffer__bit_buffer_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bit_buffer__read_module22)
	MR_init_entry1(fn__f_98_105_116_95_98_117_102_102_101_114_95_95_114_101_97_100_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__f_98_105_116_95_98_117_102_102_101_114_95_95_114_101_97_100_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__func__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__max_priority_1__[1]_0'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__f_98_105_116_95_98_117_102_102_101_114_95_95_114_101_97_100_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1200;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__bit_buffer__read_maybe_bunch_0(void)
{
	bit_buffer__read_module0();
	bit_buffer__read_module1();
	bit_buffer__read_module2();
	bit_buffer__read_module3();
	bit_buffer__read_module4();
	bit_buffer__read_module5();
	bit_buffer__read_module6();
	bit_buffer__read_module7();
	bit_buffer__read_module8();
	bit_buffer__read_module9();
	bit_buffer__read_module10();
	bit_buffer__read_module11();
	bit_buffer__read_module12();
	bit_buffer__read_module13();
	bit_buffer__read_module14();
	bit_buffer__read_module15();
	bit_buffer__read_module16();
	bit_buffer__read_module17();
	bit_buffer__read_module18();
	bit_buffer__read_module19();
	bit_buffer__read_module20();
	bit_buffer__read_module21();
	bit_buffer__read_module22();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__bit_buffer__read__init(void);
void mercury__bit_buffer__read__init_type_tables(void);
void mercury__bit_buffer__read__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__bit_buffer__read__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__bit_buffer__read__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__bit_buffer__read__init_threadscope_string_table(void);
#endif

void mercury__bit_buffer__read__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__bit_buffer__read_maybe_bunch_0();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_bit_buffer__read__type_ctor_info_io_read_buffer_0,
		bit_buffer__read__io_read_buffer_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_bit_buffer__read__type_ctor_info_read_buffer_3,
		bit_buffer__read__read_buffer_3_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_bit_buffer__read__type_ctor_info_read_buffer_0,
		bit_buffer__read__read_buffer_0_0);
	mercury__bit_buffer__read__init_debugger();
}

void mercury__bit_buffer__read__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_bit_buffer__read__type_ctor_info_io_read_buffer_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_bit_buffer__read__type_ctor_info_read_buffer_3);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_bit_buffer__read__type_ctor_info_read_buffer_0);
	}
}


void mercury__bit_buffer__read__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__bit_buffer__read__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__bit_buffer__read);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__bit_buffer__read__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__bit_buffer__read__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
