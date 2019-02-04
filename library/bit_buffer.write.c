/*
** Automatically generated from `bit_buffer.write.m'
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
INIT mercury__bit_buffer__write__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 3 "bit_buffer.int0"
#include "bit_buffer.mh"

#line 27 "bit_buffer.write.c"
#line 532 "io.int"
#include "io.mh"

#line 31 "bit_buffer.write.c"
#line 540 "io.int"
#include "string.mh"

#line 35 "bit_buffer.write.c"
#line 149 "bitmap.int"
#include "bitmap.mh"

#line 39 "bit_buffer.write.c"
#line 28 "time.int2"
#include "time.mh"

#line 43 "bit_buffer.write.c"
#line 21 "stm_builtin.int2"
#include "stm_builtin.mh"

#line 47 "bit_buffer.write.c"
#line 31 "array.int2"
#include "array.mh"

#line 51 "bit_buffer.write.c"
#line 4 "char.opt"
#include "char.mh"

#line 55 "bit_buffer.write.c"
#line 12 "pretty_printer.opt"
#include "pretty_printer.mh"

#line 59 "bit_buffer.write.c"
#line 3 "construct.opt"
#include "construct.mh"

#line 63 "bit_buffer.write.c"
#line 109 "rtti_implementation.opt"
#include "rtti_implementation.mh"

#line 67 "bit_buffer.write.c"
#line 3 "float.opt"
#include "float.mh"

#line 71 "bit_buffer.write.c"
#line 3 "math.opt"
#include "math.mh"

#line 75 "bit_buffer.write.c"
#line 6 "type_desc.opt"
#include "type_desc.mh"

#line 79 "bit_buffer.write.c"
#line 4 "builtin.opt"
#include "builtin.mh"

#line 83 "bit_buffer.write.c"
#line 14 "exception.opt"
#include "exception.mh"

#line 87 "bit_buffer.write.c"
#line 23 "store.opt"
#include "store.mh"

#line 91 "bit_buffer.write.c"
#line 4 "int.opt"
#include "int.mh"

#line 95 "bit_buffer.write.c"
#line 150 "io.opt"
#include "dir.mh"

#line 99 "bit_buffer.write.c"
#line 160 "io.opt"
#include "table_builtin.mh"

#line 103 "bit_buffer.write.c"
#line 3 "list.opt"
#include "list.mh"

#line 107 "bit_buffer.write.c"
#line 9 "private_builtin.opt"
#include "private_builtin.mh"

#line 111 "bit_buffer.write.c"
#line 112 "bit_buffer.write.c"
#include "bit_buffer.write.mh"

#line 115 "bit_buffer.write.c"
#line 116 "bit_buffer.write.c"
#ifndef BIT_BUFFER__WRITE_DECL_GUARD
#define BIT_BUFFER__WRITE_DECL_GUARD

#line 120 "bit_buffer.write.c"
#line 121 "bit_buffer.write.c"

#endif
#line 124 "bit_buffer.write.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

struct mercury_type_0 {
	MR_Word * f1;
	MR_Integer f2;
};
MR_STATIC_LINKAGE const struct mercury_type_0 mercury_common_0[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_bit_buffer__write__type_ctor_info_write_buffer_2,
	mercury_data_bit_buffer__write__type_ctor_info_write_buffer_0,
	mercury_data_bit_buffer__write__type_ctor_info_io_write_buffer_0;
MR_decl_label3(bit_buffer__write__list__foldl2__ho2_6_0, 10,3,4)
MR_decl_label1(bit_buffer__write__list__foldl__ho4_4_0, 3)
MR_decl_label3(bit_buffer__write__finalize_3_0, 2,3,4)
MR_decl_label1(bit_buffer__write__flush_2_0, 12)
MR_decl_label4(bit_buffer__write__flush_all_to_stream_2_0, 12,3,4,2)
MR_decl_label8(bit_buffer__write__flush_chunk_to_stream_2_0, 2,3,4,5,6,7,8,12)
MR_decl_label8(bit_buffer__write__flush_chunk_to_stream_2_0, 13,14,15,16,17,18,19,20)
MR_decl_label8(bit_buffer__write__flush_chunk_to_stream_2_0, 21,22,26,27,28,29,23,31)
MR_decl_label8(bit_buffer__write__flush_chunk_to_stream_2_0, 32,33,35,36,37,38,39,40)
MR_decl_label3(bit_buffer__write__flush_chunk_to_stream_2_0, 41,42,9)
MR_decl_label5(bit_buffer__write__make_room_2_0, 4,5,6,7,16)
MR_decl_label1(bit_buffer__write__put_bit_3_0, 3)
MR_decl_label7(bit_buffer__write__put_bitmap_2_5_0, 26,2,4,5,6,9,8)
MR_decl_label2(bit_buffer__write__put_bits_4_0, 2,4)
MR_decl_label5(fn__bit_buffer__write__finalize_to_bitmap_1_0, 2,3,4,5,6)
MR_decl_label3(fn__bit_buffer__write__new_3_0, 2,3,4)
MR_decl_label1(fn__bit_buffer__write__new_bitmap_builder_1_0, 2)
MR_decl_label1(fn__bit_buffer__write__num_bits_to_byte_boundary_1_0, 2)
MR_decl_label1(fn__bit_buffer__write__num_buffered_bits_1_0, 2)
MR_decl_label1(__Unify___bit_buffer__write__write_buffer_2_0, 6)
MR_decl_label2(__Compare___bit_buffer__write__write_buffer_2_0, 3,2)
MR_def_extern_entry(fn__bit_buffer__write__new_3_0)
MR_def_extern_entry(fn__bit_buffer__write__new_bitmap_builder_1_0)
MR_def_extern_entry(fn__bit_buffer__write__num_buffered_bits_1_0)
MR_def_extern_entry(fn__bit_buffer__write__num_bits_to_byte_boundary_1_0)
MR_decl_static(bit_buffer__write__flush_chunk_to_stream_2_0)
MR_decl_static(bit_buffer__write__make_room_2_0)
MR_def_extern_entry(bit_buffer__write__put_bits_4_0)
MR_def_extern_entry(bit_buffer__write__put_bit_3_0)
MR_def_extern_entry(bit_buffer__write__put_byte_3_0)
MR_def_extern_entry(bit_buffer__write__put_bitmap_2_5_0)
MR_def_extern_entry(bit_buffer__write__put_bitmap_5_0)
MR_def_extern_entry(bit_buffer__write__put_bitmap_3_0)
MR_decl_static(bit_buffer__write__flush_all_to_stream_2_0)
MR_def_extern_entry(bit_buffer__write__flush_2_0)
MR_def_extern_entry(bit_buffer__write__finalize_3_0)
MR_def_extern_entry(fn__bit_buffer__write__finalize_to_bitmap_1_0)
MR_def_extern_entry(__Unify___bit_buffer__write__io_write_buffer_0_0)
MR_def_extern_entry(__Compare___bit_buffer__write__io_write_buffer_0_0)
MR_def_extern_entry(__Unify___bit_buffer__write__write_buffer_0_0)
MR_def_extern_entry(__Compare___bit_buffer__write__write_buffer_0_0)
MR_def_extern_entry(__Unify___bit_buffer__write__write_buffer_2_0)
MR_def_extern_entry(__Compare___bit_buffer__write__write_buffer_2_0)
MR_decl_static(bit_buffer__write__list__foldl2__ho2_6_0)
MR_decl_static(bit_buffer__write__list__foldl__ho4_4_0)
MR_decl_static(fn__f_98_105_116_95_98_117_102_102_101_114_95_95_119_114_105_116_101_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0)

extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_tuple_0;
static const struct mercury_type_0 mercury_common_0[1] =
{
{
MR_CTOR0_ADDR(builtin, tuple),
0
},
};
extern const MR_TypeCtorInfo_Struct mercury_data_bit_buffer__type_ctor_info_bit_buffer_3;
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

static const MR_NotagFunctorDesc mercury_data_bit_buffer__write__notag_functor_desc_write_buffer_2 = {
	"write_buffer",
	(MR_PseudoTypeInfo) &mercury_data_bit_buffer__pti_bit_buffer_3__pseudo_1__pseudo_2__plain___vti_tuple_0,
	"bit_buffer"
};

const MR_Integer mercury_data_bit_buffer__write__functor_number_map_write_buffer_2[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_bit_buffer__write__type_ctor_info_write_buffer_2 = {
	2,
	13,
	-1,
	MR_TYPECTOR_REP_NOTAG,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___bit_buffer__write__write_buffer_2_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___bit_buffer__write__write_buffer_2_0)),
	"bit_buffer.write",
	"write_buffer",
	{ (void *)&mercury_data_bit_buffer__write__notag_functor_desc_write_buffer_2 },
	{ (void *)&mercury_data_bit_buffer__write__notag_functor_desc_write_buffer_2 },
	1,
	4,
	mercury_data_bit_buffer__write__functor_number_map_write_buffer_2
};
extern const MR_TypeCtorInfo_Struct mercury_data_bit_buffer__type_ctor_info_error_stream_0;
extern const MR_TypeCtorInfo_Struct mercury_data_bit_buffer__type_ctor_info_error_state_0;
extern const MR_TypeCtorInfo_Struct mercury_data_bit_buffer__type_ctor_info_error_stream_0;
extern const MR_TypeCtorInfo_Struct mercury_data_bit_buffer__type_ctor_info_error_state_0;

static const MR_FA_TypeInfo_Struct2 mercury_data_bit_buffer__write__ti_write_buffer_2bit_buffer__type_ctor_info_error_stream_0bit_buffer__type_ctor_info_error_state_0 = {
	&mercury_data_bit_buffer__write__type_ctor_info_write_buffer_2,
{	(MR_TypeInfo) &mercury_data_bit_buffer__type_ctor_info_error_stream_0,
	(MR_TypeInfo) &mercury_data_bit_buffer__type_ctor_info_error_state_0
}};

const MR_TypeCtorInfo_Struct mercury_data_bit_buffer__write__type_ctor_info_write_buffer_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___bit_buffer__write__write_buffer_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___bit_buffer__write__write_buffer_0_0)),
	"bit_buffer.write",
	"write_buffer",
	{ 0 },
	{ (void *)&mercury_data_bit_buffer__write__ti_write_buffer_2bit_buffer__type_ctor_info_error_stream_0bit_buffer__type_ctor_info_error_state_0 },
	-1,
	0,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_binary_output_stream_0;
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_state_0;
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_binary_output_stream_0;
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_state_0;

static const MR_FA_TypeInfo_Struct2 mercury_data_bit_buffer__write__ti_write_buffer_2io__type_ctor_info_binary_output_stream_0io__type_ctor_info_state_0 = {
	&mercury_data_bit_buffer__write__type_ctor_info_write_buffer_2,
{	(MR_TypeInfo) &mercury_data_io__type_ctor_info_binary_output_stream_0,
	(MR_TypeInfo) &mercury_data_io__type_ctor_info_state_0
}};

const MR_TypeCtorInfo_Struct mercury_data_bit_buffer__write__type_ctor_info_io_write_buffer_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___bit_buffer__write__io_write_buffer_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___bit_buffer__write__io_write_buffer_0_0)),
	"bit_buffer.write",
	"io_write_buffer",
	{ 0 },
	{ (void *)&mercury_data_bit_buffer__write__ti_write_buffer_2io__type_ctor_info_binary_output_stream_0io__type_ctor_info_state_0 },
	-1,
	0,
	NULL
};

MR_decl_entry(fn__bitmap__new_2_0);
MR_decl_entry(fn__bit_buffer__new_buffer_6_0);

MR_BEGIN_MODULE(bit_buffer__write_module0)
	MR_init_entry1(fn__bit_buffer__write__new_3_0);
	MR_init_label3(fn__bit_buffer__write__new_3_0,2,3,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__bit_buffer__write__new_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Integer	Bits;
#define	MR_PROC_LABEL	mercury__fn__bit_buffer__write__new_3_0
{
#line 144 "int.opt"

    Bits = ML_BITS_PER_INT;
;}
#line 315 "bit_buffer.write.c"
	MR_r5 = Bits;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = ((MR_Integer) MR_r2 * (MR_Integer) 8);
	MR_r6 = MR_tempr1;
	if (((MR_Integer) MR_tempr1 <= (MR_Integer) MR_r5)) {
		MR_GOTO_LAB(fn__bit_buffer__write__new_3_0_i2);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_r1;
	MR_GOTO_LAB(fn__bit_buffer__write__new_3_0_i3);
	}
MR_def_label(fn__bit_buffer__write__new_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	MR_sv(4) = MR_r1;
MR_def_label(fn__bit_buffer__write__new_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	{
	MR_Integer	Bits;
#define	MR_PROC_LABEL	mercury__fn__bit_buffer__write__new_3_0
{
#line 144 "int.opt"

    Bits = ML_BITS_PER_INT;
;}
#line 350 "bit_buffer.write.c"
	MR_tempr1 = Bits;
#undef	MR_PROC_LABEL
	}
	MR_r1 = ((MR_Integer) MR_sv(3) + (MR_Integer) MR_tempr1);
	MR_r2 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(fn__bitmap__new_2_0,
		fn__bit_buffer__write__new_3_0_i4);
MR_def_label(fn__bit_buffer__write__new_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	{
	MR_Word	TypeClassInfo;
	MR_Integer	Index;
	MR_Word	TypeInfo;
#define	MR_PROC_LABEL	mercury__fn__bit_buffer__write__new_3_0
	TypeClassInfo = MR_sv(4);
	Index = (MR_Integer) 2;
{
#line 140 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);
;}
#line 375 "bit_buffer.write.c"
	MR_tempr1 = TypeInfo;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	TypeClassInfo;
	MR_Integer	Index;
	MR_Word	TypeInfo;
#define	MR_PROC_LABEL	mercury__fn__bit_buffer__write__new_3_0
	TypeClassInfo = MR_sv(4);
	Index = (MR_Integer) 4;
{
#line 140 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);
;}
#line 391 "bit_buffer.write.c"
	MR_r2 = TypeInfo;
#undef	MR_PROC_LABEL
	}
	MR_r4 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r5 = (MR_Integer) 0;
	MR_r6 = MR_sv(3);
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


MR_BEGIN_MODULE(bit_buffer__write_module1)
	MR_init_entry1(fn__bit_buffer__write__new_bitmap_builder_1_0);
	MR_init_label1(fn__bit_buffer__write__new_bitmap_builder_1_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__bit_buffer__write__new_bitmap_builder_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	{
	MR_Integer	Bits;
#define	MR_PROC_LABEL	mercury__fn__bit_buffer__write__new_bitmap_builder_1_0
{
#line 144 "int.opt"

    Bits = ML_BITS_PER_INT;
;}
#line 437 "bit_buffer.write.c"
	MR_tempr1 = Bits;
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = ((MR_Integer) MR_r1 * (MR_Integer) 8);
	MR_r1 = ((MR_Integer) MR_sv(1) + (MR_Integer) MR_tempr1);
	MR_r2 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(fn__bitmap__new_2_0,
		fn__bit_buffer__write__new_bitmap_builder_1_0_i2);
MR_def_label(fn__bit_buffer__write__new_bitmap_builder_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(bit_buffer, error_stream);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(bit_buffer, error_state);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r5 = (MR_Integer) 0;
	MR_r6 = MR_sv(1);
	MR_r7 = (MR_Integer) 0;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(fn__bit_buffer__new_buffer_6_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bit_buffer__write_module2)
	MR_init_entry1(fn__bit_buffer__write__num_buffered_bits_1_0);
	MR_init_label1(fn__bit_buffer__write__num_buffered_bits_1_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__bit_buffer__write__num_buffered_bits_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	{
	ML_BitBufferPtr	Buffer;
	MR_Integer	Pos;
#define	MR_PROC_LABEL	mercury__fn__bit_buffer__write__num_buffered_bits_1_0
	Buffer = (ML_BitBufferPtr) MR_r3;
	MR_OBTAIN_GLOBAL_LOCK("pos");
{
#line 92 "bit_buffer.opt"
Pos = Buffer->ML_bit_buffer_pos;;}
#line 490 "bit_buffer.write.c"
	MR_RELEASE_GLOBAL_LOCK("pos");
	MR_tempr1 = Pos;
#undef	MR_PROC_LABEL
	}
	{
	ML_BitBufferPtr	Buffer;
	MR_Word	FilledBMs;
#define	MR_PROC_LABEL	mercury__fn__bit_buffer__write__num_buffered_bits_1_0
	Buffer = (ML_BitBufferPtr) MR_r3;
	MR_OBTAIN_GLOBAL_LOCK("filled_bitmaps");
{
#line 97 "bit_buffer.opt"
FilledBMs = Buffer->ML_bit_buffer_filled_bitmaps;;}
#line 504 "bit_buffer.write.c"
	MR_RELEASE_GLOBAL_LOCK("filled_bitmaps");
	MR_r1 = FilledBMs;
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_tempr1;
	MR_r2 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(bit_buffer__write__list__foldl__ho4_4_0,
		fn__bit_buffer__write__num_buffered_bits_1_0_i2);
MR_def_label(fn__bit_buffer__write__num_buffered_bits_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_sv(1) + (MR_Integer) MR_r1);
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bit_buffer__write_module3)
	MR_init_entry1(fn__bit_buffer__write__num_bits_to_byte_boundary_1_0);
	MR_init_label1(fn__bit_buffer__write__num_bits_to_byte_boundary_1_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__bit_buffer__write__num_bits_to_byte_boundary_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	ML_BitBufferPtr	Buffer;
	MR_Integer	Pos;
#define	MR_PROC_LABEL	mercury__fn__bit_buffer__write__num_bits_to_byte_boundary_1_0
	Buffer = (ML_BitBufferPtr) MR_r3;
	MR_OBTAIN_GLOBAL_LOCK("pos");
{
#line 92 "bit_buffer.opt"
Pos = Buffer->ML_bit_buffer_pos;;}
#line 545 "bit_buffer.write.c"
	MR_RELEASE_GLOBAL_LOCK("pos");
	MR_r2 = Pos;
#undef	MR_PROC_LABEL
	}
	MR_r3 = ((MR_Integer) MR_r2 % (MR_Integer) 8);
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(fn__bit_buffer__write__num_bits_to_byte_boundary_1_0_i2);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__bit_buffer__write__num_bits_to_byte_boundary_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) 8 - (MR_Integer) MR_r3);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__type_info_from_typeclass_info_3_0);
MR_decl_entry(fn__bit_buffer__pos_1_0);
MR_decl_entry(fn__bit_buffer__size_1_0);
MR_decl_entry(fn__int__min_2_0);
MR_decl_entry(fn__bit_buffer__stream_1_0);
MR_decl_entry(fn__bit_buffer__bitmap_1_0);
MR_decl_entry(fn__bitmap__byte_slice_3_0);
MR_decl_entry(fn__bit_buffer__state_1_0);
MR_decl_entry(stream__put_4_0);
MR_decl_entry(fn__bitmap__bits_3_0);
MR_decl_entry(fn__f_98_105_116_109_97_112_95_95_98_105_116_115_32_58_61_4_0);
MR_decl_entry(fn__bit_buffer__filled_bitmaps_1_0);
MR_decl_entry(bit_buffer__set_all_7_0);

MR_BEGIN_MODULE(bit_buffer__write_module4)
	MR_init_entry1(bit_buffer__write__flush_chunk_to_stream_2_0);
	MR_init_label8(bit_buffer__write__flush_chunk_to_stream_2_0,2,3,4,5,6,7,8,12)
	MR_init_label8(bit_buffer__write__flush_chunk_to_stream_2_0,13,14,15,16,17,18,19,20)
	MR_init_label8(bit_buffer__write__flush_chunk_to_stream_2_0,21,22,26,27,28,29,23,31)
	MR_init_label8(bit_buffer__write__flush_chunk_to_stream_2_0,32,33,35,36,37,38,39,40)
	MR_init_label3(bit_buffer__write__flush_chunk_to_stream_2_0,41,42,9)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(bit_buffer__write__flush_chunk_to_stream_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(4) = MR_r2;
	MR_sv(7) = MR_r1;
	MR_r2 = (MR_Integer) 2;
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		bit_buffer__write__flush_chunk_to_stream_2_0_i2);
MR_def_label(bit_buffer__write__flush_chunk_to_stream_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = (MR_Integer) 4;
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		bit_buffer__write__flush_chunk_to_stream_2_0_i3);
MR_def_label(bit_buffer__write__flush_chunk_to_stream_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_sv(4);
	MR_np_call_localret_ent(fn__bit_buffer__pos_1_0,
		bit_buffer__write__flush_chunk_to_stream_2_0_i4);
MR_def_label(bit_buffer__write__flush_chunk_to_stream_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = (MR_Integer) 2;
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		bit_buffer__write__flush_chunk_to_stream_2_0_i5);
MR_def_label(bit_buffer__write__flush_chunk_to_stream_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = (MR_Integer) 4;
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		bit_buffer__write__flush_chunk_to_stream_2_0_i6);
MR_def_label(bit_buffer__write__flush_chunk_to_stream_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_sv(4);
	MR_np_call_localret_ent(fn__bit_buffer__size_1_0,
		bit_buffer__write__flush_chunk_to_stream_2_0_i7);
MR_def_label(bit_buffer__write__flush_chunk_to_stream_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(fn__int__min_2_0,
		bit_buffer__write__flush_chunk_to_stream_2_0_i8);
MR_def_label(bit_buffer__write__flush_chunk_to_stream_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = ((MR_Integer) MR_r1 / (MR_Integer) 8);
	MR_sv(2) = MR_tempr1;
	if (MR_INT_EQ(MR_tempr1,0)) {
		MR_GOTO_LAB(bit_buffer__write__flush_chunk_to_stream_2_0_i9);
	}
	MR_sv(3) = ((MR_Integer) MR_tempr1 * (MR_Integer) 8);
	MR_r1 = MR_sv(7);
	MR_r2 = (MR_Integer) 2;
	}
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		bit_buffer__write__flush_chunk_to_stream_2_0_i12);
MR_def_label(bit_buffer__write__flush_chunk_to_stream_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = (MR_Integer) 4;
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		bit_buffer__write__flush_chunk_to_stream_2_0_i13);
MR_def_label(bit_buffer__write__flush_chunk_to_stream_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_sv(4);
	MR_np_call_localret_ent(fn__bit_buffer__stream_1_0,
		bit_buffer__write__flush_chunk_to_stream_2_0_i14);
MR_def_label(bit_buffer__write__flush_chunk_to_stream_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = (MR_Integer) 2;
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		bit_buffer__write__flush_chunk_to_stream_2_0_i15);
MR_def_label(bit_buffer__write__flush_chunk_to_stream_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = (MR_Integer) 4;
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		bit_buffer__write__flush_chunk_to_stream_2_0_i16);
MR_def_label(bit_buffer__write__flush_chunk_to_stream_2_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_sv(4);
	MR_np_call_localret_ent(fn__bit_buffer__bitmap_1_0,
		bit_buffer__write__flush_chunk_to_stream_2_0_i17);
MR_def_label(bit_buffer__write__flush_chunk_to_stream_2_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(fn__bitmap__byte_slice_3_0,
		bit_buffer__write__flush_chunk_to_stream_2_0_i18);
MR_def_label(bit_buffer__write__flush_chunk_to_stream_2_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = (MR_Integer) 2;
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		bit_buffer__write__flush_chunk_to_stream_2_0_i19);
MR_def_label(bit_buffer__write__flush_chunk_to_stream_2_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = (MR_Integer) 4;
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		bit_buffer__write__flush_chunk_to_stream_2_0_i20);
MR_def_label(bit_buffer__write__flush_chunk_to_stream_2_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_sv(4);
	MR_np_call_localret_ent(fn__bit_buffer__state_1_0,
		bit_buffer__write__flush_chunk_to_stream_2_0_i21);
MR_def_label(bit_buffer__write__flush_chunk_to_stream_2_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(stream__put_4_0,
		bit_buffer__write__flush_chunk_to_stream_2_0_i22);
MR_def_label(bit_buffer__write__flush_chunk_to_stream_2_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = ((MR_Integer) MR_sv(1) - (MR_Integer) MR_sv(3));
	if (MR_INT_EQ(MR_sv(2),0)) {
		MR_GOTO_LAB(bit_buffer__write__flush_chunk_to_stream_2_0_i23);
	}
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = (MR_Integer) 2;
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		bit_buffer__write__flush_chunk_to_stream_2_0_i26);
MR_def_label(bit_buffer__write__flush_chunk_to_stream_2_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = (MR_Integer) 4;
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		bit_buffer__write__flush_chunk_to_stream_2_0_i27);
MR_def_label(bit_buffer__write__flush_chunk_to_stream_2_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_sv(4);
	MR_np_call_localret_ent(fn__bit_buffer__bitmap_1_0,
		bit_buffer__write__flush_chunk_to_stream_2_0_i28);
MR_def_label(bit_buffer__write__flush_chunk_to_stream_2_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_sv(3) = MR_r3;
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(fn__bitmap__bits_3_0,
		bit_buffer__write__flush_chunk_to_stream_2_0_i29);
MR_def_label(bit_buffer__write__flush_chunk_to_stream_2_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(fn__f_98_105_116_109_97_112_95_95_98_105_116_115_32_58_61_4_0,
		bit_buffer__write__flush_chunk_to_stream_2_0_i33);
MR_def_label(bit_buffer__write__flush_chunk_to_stream_2_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = (MR_Integer) 2;
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		bit_buffer__write__flush_chunk_to_stream_2_0_i31);
MR_def_label(bit_buffer__write__flush_chunk_to_stream_2_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = (MR_Integer) 4;
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		bit_buffer__write__flush_chunk_to_stream_2_0_i32);
MR_def_label(bit_buffer__write__flush_chunk_to_stream_2_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_sv(4);
	MR_np_call_localret_ent(fn__bit_buffer__bitmap_1_0,
		bit_buffer__write__flush_chunk_to_stream_2_0_i33);
MR_def_label(bit_buffer__write__flush_chunk_to_stream_2_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = (MR_Integer) 2;
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		bit_buffer__write__flush_chunk_to_stream_2_0_i35);
MR_def_label(bit_buffer__write__flush_chunk_to_stream_2_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = (MR_Integer) 4;
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		bit_buffer__write__flush_chunk_to_stream_2_0_i36);
MR_def_label(bit_buffer__write__flush_chunk_to_stream_2_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_sv(4);
	MR_np_call_localret_ent(fn__bit_buffer__size_1_0,
		bit_buffer__write__flush_chunk_to_stream_2_0_i37);
MR_def_label(bit_buffer__write__flush_chunk_to_stream_2_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = (MR_Integer) 2;
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		bit_buffer__write__flush_chunk_to_stream_2_0_i38);
MR_def_label(bit_buffer__write__flush_chunk_to_stream_2_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = (MR_Integer) 4;
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		bit_buffer__write__flush_chunk_to_stream_2_0_i39);
MR_def_label(bit_buffer__write__flush_chunk_to_stream_2_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_sv(4);
	MR_np_call_localret_ent(fn__bit_buffer__filled_bitmaps_1_0,
		bit_buffer__write__flush_chunk_to_stream_2_0_i40);
MR_def_label(bit_buffer__write__flush_chunk_to_stream_2_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = (MR_Integer) 4;
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		bit_buffer__write__flush_chunk_to_stream_2_0_i41);
MR_def_label(bit_buffer__write__flush_chunk_to_stream_2_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_sv(7) = MR_tempr1;
	MR_r2 = (MR_Integer) 2;
	}
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		bit_buffer__write__flush_chunk_to_stream_2_0_i42);
MR_def_label(bit_buffer__write__flush_chunk_to_stream_2_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(2);
	MR_r6 = MR_sv(5);
	MR_r7 = MR_sv(1);
	MR_r8 = MR_sv(6);
	MR_r9 = MR_sv(4);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(bit_buffer__set_all_7_0);
MR_def_label(bit_buffer__write__flush_chunk_to_stream_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__bitmap__shrink_without_copying_2_0);

MR_BEGIN_MODULE(bit_buffer__write_module5)
	MR_init_entry1(bit_buffer__write__make_room_2_0);
	MR_init_label5(bit_buffer__write__make_room_2_0,4,5,6,7,16)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(bit_buffer__write__make_room_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	ML_BitBufferPtr	Buffer;
	MR_Word	UseStream;
#define	MR_PROC_LABEL	mercury__bit_buffer__write__make_room_2_0
	Buffer = (ML_BitBufferPtr) MR_r2;
	MR_OBTAIN_GLOBAL_LOCK("use_stream");
{
#line 94 "bit_buffer.opt"
UseStream = Buffer->ML_bit_buffer_use_stream;;}
#line 909 "bit_buffer.write.c"
	MR_RELEASE_GLOBAL_LOCK("use_stream");
	MR_r3 = UseStream;
#undef	MR_PROC_LABEL
	}
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(bit_buffer__write__make_room_2_0_i16);
	}
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	{
	ML_BitBufferPtr	Buffer;
	MR_Integer	Pos;
#define	MR_PROC_LABEL	mercury__bit_buffer__write__make_room_2_0
	Buffer = (ML_BitBufferPtr) MR_r2;
	MR_OBTAIN_GLOBAL_LOCK("pos");
{
#line 92 "bit_buffer.opt"
Pos = Buffer->ML_bit_buffer_pos;;}
#line 930 "bit_buffer.write.c"
	MR_RELEASE_GLOBAL_LOCK("pos");
	MR_tempr1 = Pos;
#undef	MR_PROC_LABEL
	}
	{
	ML_BitBufferPtr	Buffer;
	MR_Integer	Size;
#define	MR_PROC_LABEL	mercury__bit_buffer__write__make_room_2_0
	Buffer = (ML_BitBufferPtr) MR_r2;
	MR_OBTAIN_GLOBAL_LOCK("size");
{
#line 93 "bit_buffer.opt"
Size = Buffer->ML_bit_buffer_size;;}
#line 944 "bit_buffer.write.c"
	MR_RELEASE_GLOBAL_LOCK("size");
	MR_tempr2 = Size;
#undef	MR_PROC_LABEL
	}
	{
	ML_BitBufferPtr	Buffer;
	MR_BitmapPtr	BM;
#define	MR_PROC_LABEL	mercury__bit_buffer__write__make_room_2_0
	Buffer = (ML_BitBufferPtr) MR_r2;
	MR_OBTAIN_GLOBAL_LOCK("bitmap");
{
#line 91 "bit_buffer.opt"
BM = Buffer->ML_bit_buffer_bitmap;;}
#line 958 "bit_buffer.write.c"
	MR_RELEASE_GLOBAL_LOCK("bitmap");
	MR_tempr3 = (MR_Word) BM;
#undef	MR_PROC_LABEL
	}
	{
	ML_BitBufferPtr	Buffer;
	MR_Word	State;
#define	MR_PROC_LABEL	mercury__bit_buffer__write__make_room_2_0
	Buffer = (ML_BitBufferPtr) MR_r2;
	MR_OBTAIN_GLOBAL_LOCK("state");
{
#line 96 "bit_buffer.opt"
State = Buffer->ML_bit_buffer_state;;}
#line 972 "bit_buffer.write.c"
	MR_RELEASE_GLOBAL_LOCK("state");
	MR_tempr4 = State;
#undef	MR_PROC_LABEL
	}
	{
	ML_BitBufferPtr	Buffer;
	MR_Integer	Size;
#define	MR_PROC_LABEL	mercury__bit_buffer__write__make_room_2_0
	Buffer = (ML_BitBufferPtr) MR_r2;
	MR_OBTAIN_GLOBAL_LOCK("size");
{
#line 93 "bit_buffer.opt"
Size = Buffer->ML_bit_buffer_size;;}
#line 986 "bit_buffer.write.c"
	MR_RELEASE_GLOBAL_LOCK("size");
	MR_tempr5 = Size;
#undef	MR_PROC_LABEL
	}
	{
	MR_Integer	Bits;
#define	MR_PROC_LABEL	mercury__bit_buffer__write__make_room_2_0
{
#line 144 "int.opt"

    Bits = ML_BITS_PER_INT;
;}
#line 999 "bit_buffer.write.c"
	MR_tempr6 = Bits;
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_tempr2;
	MR_sv(4) = MR_tempr3;
	MR_sv(5) = MR_tempr4;
	MR_sv(6) = ((MR_Integer) MR_tempr5 * (MR_Integer) 2);
	MR_r1 = ((MR_Integer) MR_sv(6) + (MR_Integer) MR_tempr6);
	MR_r2 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(fn__bitmap__new_2_0,
		bit_buffer__write__make_room_2_0_i4);
MR_def_label(bit_buffer__write__make_room_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_tempr2 = MR_sv(3);
	MR_sv(7) = ((MR_Integer) MR_tempr1 - (MR_Integer) MR_tempr2);
	MR_r1 = MR_tempr2;
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(4);
	}
	MR_np_call_localret_ent(fn__bitmap__bits_3_0,
		bit_buffer__write__make_room_2_0_i5);
MR_def_label(bit_buffer__write__make_room_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(fn__f_98_105_116_109_97_112_95_95_98_105_116_115_32_58_61_4_0,
		bit_buffer__write__make_room_2_0_i6);
MR_def_label(bit_buffer__write__make_room_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(fn__bitmap__shrink_without_copying_2_0,
		bit_buffer__write__make_room_2_0_i7);
MR_def_label(bit_buffer__write__make_room_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	ML_BitBufferPtr	Buffer;
	MR_Word	FilledBMs;
#define	MR_PROC_LABEL	mercury__bit_buffer__write__make_room_2_0
	Buffer = (ML_BitBufferPtr) MR_sv(1);
	MR_OBTAIN_GLOBAL_LOCK("filled_bitmaps");
{
#line 97 "bit_buffer.opt"
FilledBMs = Buffer->ML_bit_buffer_filled_bitmaps;;}
#line 1056 "bit_buffer.write.c"
	MR_RELEASE_GLOBAL_LOCK("filled_bitmaps");
	MR_tempr1 = FilledBMs;
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_r1;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	{
	MR_BitmapPtr	BM;
	MR_Integer	Pos;
	MR_Integer	Size;
	MR_Word	State;
	MR_Word	FilledBMs;
	ML_BitBufferPtr	Buffer0;
	ML_BitBufferPtr	Buffer;
#define	MR_PROC_LABEL	mercury__bit_buffer__write__make_room_2_0
	BM = (MR_BitmapPtr) MR_sv(2);
	Pos = MR_sv(7);
	Size = MR_sv(6);
	State = MR_sv(5);
	FilledBMs = MR_tempr2;
	Buffer0 = (ML_BitBufferPtr) MR_sv(1);
	MR_OBTAIN_GLOBAL_LOCK("set_all");
{
#line 99 "bit_buffer.opt"

    Buffer = Buffer0;
    Buffer->ML_bit_buffer_bitmap = BM;
    Buffer->ML_bit_buffer_pos = Pos;
    Buffer->ML_bit_buffer_size = Size;
    Buffer->ML_bit_buffer_state = State;
    Buffer->ML_bit_buffer_filled_bitmaps = FilledBMs;
;}
#line 1090 "bit_buffer.write.c"
	MR_RELEASE_GLOBAL_LOCK("set_all");
	MR_r1 = (MR_Word) Buffer;
#undef	MR_PROC_LABEL
	}
	MR_decr_sp_and_return(8);
	}
MR_def_label(bit_buffer__write__make_room_2_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(bit_buffer__write__flush_chunk_to_stream_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bit_buffer__write_module6)
	MR_init_entry1(bit_buffer__write__put_bits_4_0);
	MR_init_label2(bit_buffer__write__put_bits_4_0,2,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__bit_buffer__write__put_bits_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	{
	ML_BitBufferPtr	Buffer;
	MR_BitmapPtr	BM;
#define	MR_PROC_LABEL	mercury__bit_buffer__write__put_bits_4_0
	Buffer = (ML_BitBufferPtr) MR_r4;
	MR_OBTAIN_GLOBAL_LOCK("bitmap");
{
#line 91 "bit_buffer.opt"
BM = Buffer->ML_bit_buffer_bitmap;;}
#line 1131 "bit_buffer.write.c"
	MR_RELEASE_GLOBAL_LOCK("bitmap");
	MR_tempr1 = (MR_Word) BM;
#undef	MR_PROC_LABEL
	}
	{
	ML_BitBufferPtr	Buffer;
	MR_Integer	Pos;
#define	MR_PROC_LABEL	mercury__bit_buffer__write__put_bits_4_0
	Buffer = (ML_BitBufferPtr) MR_r4;
	MR_OBTAIN_GLOBAL_LOCK("pos");
{
#line 92 "bit_buffer.opt"
Pos = Buffer->ML_bit_buffer_pos;;}
#line 1145 "bit_buffer.write.c"
	MR_RELEASE_GLOBAL_LOCK("pos");
	MR_tempr2 = Pos;
#undef	MR_PROC_LABEL
	}
	MR_tempr3 = MR_r3;
	MR_sv(1) = MR_tempr3;
	MR_sv(2) = MR_tempr2;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r1;
	MR_r1 = MR_tempr2;
	MR_r4 = MR_r2;
	MR_r2 = MR_tempr3;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_98_105_116_109_97_112_95_95_98_105_116_115_32_58_61_4_0,
		bit_buffer__write__put_bits_4_0_i2);
MR_def_label(bit_buffer__write__put_bits_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = ((MR_Integer) MR_sv(2) + (MR_Integer) MR_sv(1));
	{
	MR_BitmapPtr	BM;
	MR_Integer	Pos;
	ML_BitBufferPtr	Buffer0;
	ML_BitBufferPtr	Buffer;
#define	MR_PROC_LABEL	mercury__bit_buffer__write__put_bits_4_0
	BM = (MR_BitmapPtr) MR_r1;
	Pos = MR_r3;
	Buffer0 = (ML_BitBufferPtr) MR_sv(3);
	MR_OBTAIN_GLOBAL_LOCK("set_bitmap");
{
#line 107 "bit_buffer.opt"

    Buffer = Buffer0;
    Buffer->ML_bit_buffer_bitmap = BM;
    Buffer->ML_bit_buffer_pos = Pos;
;}
#line 1182 "bit_buffer.write.c"
	MR_RELEASE_GLOBAL_LOCK("set_bitmap");
	MR_r2 = (MR_Word) Buffer;
#undef	MR_PROC_LABEL
	}
	{
	ML_BitBufferPtr	Buffer;
	MR_Integer	Pos;
#define	MR_PROC_LABEL	mercury__bit_buffer__write__put_bits_4_0
	Buffer = (ML_BitBufferPtr) MR_r2;
	MR_OBTAIN_GLOBAL_LOCK("pos");
{
#line 92 "bit_buffer.opt"
Pos = Buffer->ML_bit_buffer_pos;;}
#line 1196 "bit_buffer.write.c"
	MR_RELEASE_GLOBAL_LOCK("pos");
	MR_r3 = Pos;
#undef	MR_PROC_LABEL
	}
	{
	ML_BitBufferPtr	Buffer;
	MR_Integer	Size;
#define	MR_PROC_LABEL	mercury__bit_buffer__write__put_bits_4_0
	Buffer = (ML_BitBufferPtr) MR_r2;
	MR_OBTAIN_GLOBAL_LOCK("size");
{
#line 93 "bit_buffer.opt"
Size = Buffer->ML_bit_buffer_size;;}
#line 1210 "bit_buffer.write.c"
	MR_RELEASE_GLOBAL_LOCK("size");
	MR_r4 = Size;
#undef	MR_PROC_LABEL
	}
	if (((MR_Integer) MR_r3 < (MR_Integer) MR_r4)) {
		MR_GOTO_LAB(bit_buffer__write__put_bits_4_0_i4);
	}
	MR_r1 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(bit_buffer__write__make_room_2_0);
MR_def_label(bit_buffer__write__put_bits_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bit_buffer__write_module7)
	MR_init_entry1(bit_buffer__write__put_bit_3_0);
	MR_init_label1(bit_buffer__write__put_bit_3_0,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__bit_buffer__write__put_bit_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(bit_buffer__write__put_bit_3_0_i3);
	}
	MR_r2 = (MR_Integer) 0;
	MR_r4 = MR_r3;
	MR_r3 = (MR_Integer) 1;
	MR_np_tailcall_ent(bit_buffer__write__put_bits_4_0);
MR_def_label(bit_buffer__write__put_bit_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 1;
	MR_r4 = MR_r3;
	MR_r3 = (MR_Integer) 1;
	MR_np_tailcall_ent(bit_buffer__write__put_bits_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bit_buffer__write_module8)
	MR_init_entry1(bit_buffer__write__put_byte_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__bit_buffer__write__put_byte_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r3;
	MR_r3 = (MR_Integer) 8;
	MR_np_tailcall_ent(bit_buffer__write__put_bits_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__bitmap__copy_bits_6_0);

MR_BEGIN_MODULE(bit_buffer__write_module9)
	MR_init_entry1(bit_buffer__write__put_bitmap_2_5_0);
	MR_init_label7(bit_buffer__write__put_bitmap_2_5_0,26,2,4,5,6,9,8)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__bit_buffer__write__put_bitmap_2_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
MR_def_label(bit_buffer__write__put_bitmap_2_5_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,0)) {
		MR_GOTO_LAB(bit_buffer__write__put_bitmap_2_5_0_i2);
	}
	MR_r1 = MR_r5;
	MR_decr_sp_and_return(8);
MR_def_label(bit_buffer__write__put_bitmap_2_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	ML_BitBufferPtr	Buffer;
	MR_BitmapPtr	BM;
#define	MR_PROC_LABEL	mercury__bit_buffer__write__put_bitmap_2_5_0
	Buffer = (ML_BitBufferPtr) MR_r5;
	MR_OBTAIN_GLOBAL_LOCK("bitmap");
{
#line 91 "bit_buffer.opt"
BM = Buffer->ML_bit_buffer_bitmap;;}
#line 1316 "bit_buffer.write.c"
	MR_RELEASE_GLOBAL_LOCK("bitmap");
	MR_r7 = (MR_Word) BM;
#undef	MR_PROC_LABEL
	}
	{
	ML_BitBufferPtr	Buffer;
	MR_Integer	Pos;
#define	MR_PROC_LABEL	mercury__bit_buffer__write__put_bitmap_2_5_0
	Buffer = (ML_BitBufferPtr) MR_r5;
	MR_OBTAIN_GLOBAL_LOCK("pos");
{
#line 92 "bit_buffer.opt"
Pos = Buffer->ML_bit_buffer_pos;;}
#line 1330 "bit_buffer.write.c"
	MR_RELEASE_GLOBAL_LOCK("pos");
	MR_r8 = Pos;
#undef	MR_PROC_LABEL
	}
	{
	ML_BitBufferPtr	Buffer;
	MR_Integer	Size;
#define	MR_PROC_LABEL	mercury__bit_buffer__write__put_bitmap_2_5_0
	Buffer = (ML_BitBufferPtr) MR_r5;
	MR_OBTAIN_GLOBAL_LOCK("size");
{
#line 93 "bit_buffer.opt"
Size = Buffer->ML_bit_buffer_size;;}
#line 1344 "bit_buffer.write.c"
	MR_RELEASE_GLOBAL_LOCK("size");
	MR_r9 = Size;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r8;
	MR_r6 = ((MR_Integer) MR_r9 - (MR_Integer) MR_tempr1);
	if (((MR_Integer) MR_r6 >= (MR_Integer) MR_r4)) {
		MR_GOTO_LAB(bit_buffer__write__put_bitmap_2_5_0_i4);
	}
	MR_sv(3) = MR_r4;
	MR_r4 = MR_r7;
	MR_sv(6) = MR_r5;
	MR_r5 = MR_tempr1;
	MR_sv(7) = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_GOTO_LAB(bit_buffer__write__put_bitmap_2_5_0_i5);
	}
MR_def_label(bit_buffer__write__put_bitmap_2_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r4;
	MR_r4 = MR_r7;
	MR_sv(6) = MR_r5;
	MR_r5 = MR_r8;
	MR_r6 = MR_sv(3);
	MR_sv(7) = MR_r1;
	MR_r1 = (MR_Integer) 0;
MR_def_label(bit_buffer__write__put_bitmap_2_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_np_call_localret_ent(fn__bitmap__copy_bits_6_0,
		bit_buffer__write__put_bitmap_2_5_0_i6);
MR_def_label(bit_buffer__write__put_bitmap_2_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = ((MR_Integer) MR_sv(4) + (MR_Integer) MR_sv(5));
	{
	MR_BitmapPtr	BM;
	MR_Integer	Pos;
	ML_BitBufferPtr	Buffer0;
	ML_BitBufferPtr	Buffer;
#define	MR_PROC_LABEL	mercury__bit_buffer__write__put_bitmap_2_5_0
	BM = (MR_BitmapPtr) MR_r1;
	Pos = MR_r3;
	Buffer0 = (ML_BitBufferPtr) MR_sv(6);
	MR_OBTAIN_GLOBAL_LOCK("set_bitmap");
{
#line 107 "bit_buffer.opt"

    Buffer = Buffer0;
    Buffer->ML_bit_buffer_bitmap = BM;
    Buffer->ML_bit_buffer_pos = Pos;
;}
#line 1401 "bit_buffer.write.c"
	MR_RELEASE_GLOBAL_LOCK("set_bitmap");
	MR_r2 = (MR_Word) Buffer;
#undef	MR_PROC_LABEL
	}
	{
	ML_BitBufferPtr	Buffer;
	MR_Integer	Pos;
#define	MR_PROC_LABEL	mercury__bit_buffer__write__put_bitmap_2_5_0
	Buffer = (ML_BitBufferPtr) MR_r2;
	MR_OBTAIN_GLOBAL_LOCK("pos");
{
#line 92 "bit_buffer.opt"
Pos = Buffer->ML_bit_buffer_pos;;}
#line 1415 "bit_buffer.write.c"
	MR_RELEASE_GLOBAL_LOCK("pos");
	MR_r3 = Pos;
#undef	MR_PROC_LABEL
	}
	{
	ML_BitBufferPtr	Buffer;
	MR_Integer	Size;
#define	MR_PROC_LABEL	mercury__bit_buffer__write__put_bitmap_2_5_0
	Buffer = (ML_BitBufferPtr) MR_r2;
	MR_OBTAIN_GLOBAL_LOCK("size");
{
#line 93 "bit_buffer.opt"
Size = Buffer->ML_bit_buffer_size;;}
#line 1429 "bit_buffer.write.c"
	MR_RELEASE_GLOBAL_LOCK("size");
	MR_r4 = Size;
#undef	MR_PROC_LABEL
	}
	if (((MR_Integer) MR_r3 < (MR_Integer) MR_r4)) {
		MR_GOTO_LAB(bit_buffer__write__put_bitmap_2_5_0_i8);
	}
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(bit_buffer__write__make_room_2_0,
		bit_buffer__write__put_bitmap_2_5_0_i9);
MR_def_label(bit_buffer__write__put_bitmap_2_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r5 = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_r3 = ((MR_Integer) MR_sv(2) + (MR_Integer) MR_tempr1);
	MR_r4 = ((MR_Integer) MR_sv(3) - (MR_Integer) MR_tempr1);
	MR_r1 = MR_sv(7);
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(bit_buffer__write__put_bitmap_2_5_0_i26);
	}
MR_def_label(bit_buffer__write__put_bitmap_2_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r2;
	MR_r2 = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_r3 = ((MR_Integer) MR_sv(2) + (MR_Integer) MR_tempr1);
	MR_r4 = ((MR_Integer) MR_sv(3) - (MR_Integer) MR_tempr1);
	MR_r1 = MR_sv(7);
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(bit_buffer__write__put_bitmap_2_5_0_i26);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bit_buffer__write_module10)
	MR_init_entry1(bit_buffer__write__put_bitmap_5_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__bit_buffer__write__put_bitmap_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(bit_buffer__write__put_bitmap_2_5_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bit_buffer__write_module11)
	MR_init_entry1(bit_buffer__write__put_bitmap_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__bit_buffer__write__put_bitmap_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_BitmapPtr	BM;
	MR_Integer	NumBits;
#define	MR_PROC_LABEL	mercury__bit_buffer__write__put_bitmap_3_0
	BM = (MR_BitmapPtr) MR_r2;
{
#line 95 "bitmap.opt"

    NumBits = BM->num_bits;
;}
#line 1511 "bit_buffer.write.c"
	MR_r4 = NumBits;
#undef	MR_PROC_LABEL
	}
	MR_r5 = MR_r3;
	MR_r3 = (MR_Integer) 0;
	MR_np_tailcall_ent(bit_buffer__write__put_bitmap_2_5_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bit_buffer__write_module12)
	MR_init_entry1(bit_buffer__write__flush_all_to_stream_2_0);
	MR_init_label4(bit_buffer__write__flush_all_to_stream_2_0,12,3,4,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(bit_buffer__write__flush_all_to_stream_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(bit_buffer__write__flush_all_to_stream_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_Word	TypeClassInfo;
	MR_Integer	Index;
	MR_Word	TypeInfo;
#define	MR_PROC_LABEL	mercury__bit_buffer__write__flush_all_to_stream_2_0
	TypeClassInfo = MR_r1;
	Index = (MR_Integer) 2;
{
#line 140 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);
;}
#line 1554 "bit_buffer.write.c"
	MR_tempr1 = TypeInfo;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	TypeClassInfo;
	MR_Integer	Index;
	MR_Word	TypeInfo;
#define	MR_PROC_LABEL	mercury__bit_buffer__write__flush_all_to_stream_2_0
	TypeClassInfo = MR_r1;
	Index = (MR_Integer) 4;
{
#line 140 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);
;}
#line 1570 "bit_buffer.write.c"
	MR_tempr2 = TypeInfo;
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	MR_r3 = MR_sv(1);
	}
	MR_np_call_localret_ent(fn__bit_buffer__write__num_buffered_bits_1_0,
		bit_buffer__write__flush_all_to_stream_2_0_i3);
MR_def_label(bit_buffer__write__flush_all_to_stream_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_LT(MR_r1,8)) {
		MR_GOTO_LAB(bit_buffer__write__flush_all_to_stream_2_0_i2);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(bit_buffer__write__flush_chunk_to_stream_2_0,
		bit_buffer__write__flush_all_to_stream_2_0_i4);
MR_def_label(bit_buffer__write__flush_all_to_stream_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(bit_buffer__write__flush_all_to_stream_2_0_i12);
MR_def_label(bit_buffer__write__flush_all_to_stream_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bit_buffer__write_module13)
	MR_init_entry1(bit_buffer__write__flush_2_0);
	MR_init_label1(bit_buffer__write__flush_2_0,12)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__bit_buffer__write__flush_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	ML_BitBufferPtr	Buffer;
	MR_Word	UseStream;
#define	MR_PROC_LABEL	mercury__bit_buffer__write__flush_2_0
	Buffer = (ML_BitBufferPtr) MR_r2;
	MR_OBTAIN_GLOBAL_LOCK("use_stream");
{
#line 94 "bit_buffer.opt"
UseStream = Buffer->ML_bit_buffer_use_stream;;}
#line 1628 "bit_buffer.write.c"
	MR_RELEASE_GLOBAL_LOCK("use_stream");
	MR_r3 = UseStream;
#undef	MR_PROC_LABEL
	}
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(bit_buffer__write__flush_2_0_i12);
	}
	MR_r1 = MR_r2;
	MR_proceed();
MR_def_label(bit_buffer__write__flush_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(bit_buffer__write__flush_all_to_stream_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bit_buffer__write_module14)
	MR_init_entry1(bit_buffer__write__finalize_3_0);
	MR_init_label3(bit_buffer__write__finalize_3_0,2,3,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__bit_buffer__write__finalize_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_Word	TypeClassInfo;
	MR_Integer	Index;
	MR_Word	TypeInfo;
#define	MR_PROC_LABEL	mercury__bit_buffer__write__finalize_3_0
	TypeClassInfo = MR_r1;
	Index = (MR_Integer) 2;
{
#line 140 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);
;}
#line 1675 "bit_buffer.write.c"
	MR_tempr1 = TypeInfo;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	TypeClassInfo;
	MR_Integer	Index;
	MR_Word	TypeInfo;
#define	MR_PROC_LABEL	mercury__bit_buffer__write__finalize_3_0
	TypeClassInfo = MR_r1;
	Index = (MR_Integer) 4;
{
#line 140 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);
;}
#line 1691 "bit_buffer.write.c"
	MR_tempr2 = TypeInfo;
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	MR_r3 = MR_sv(1);
	}
	MR_np_call_localret_ent(fn__bit_buffer__write__num_bits_to_byte_boundary_1_0,
		bit_buffer__write__finalize_3_0_i2);
MR_def_label(bit_buffer__write__finalize_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Integer) 0;
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(bit_buffer__write__put_bits_4_0,
		bit_buffer__write__finalize_3_0_i3);
MR_def_label(bit_buffer__write__finalize_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(bit_buffer__write__flush_2_0,
		bit_buffer__write__finalize_3_0_i4);
MR_def_label(bit_buffer__write__finalize_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	ML_BitBufferPtr	Buffer;
	MR_Word	Stream;
#define	MR_PROC_LABEL	mercury__bit_buffer__write__finalize_3_0
	Buffer = (ML_BitBufferPtr) MR_r1;
	MR_OBTAIN_GLOBAL_LOCK("stream");
{
#line 95 "bit_buffer.opt"
Stream = Buffer->ML_bit_buffer_stream;;}
#line 1730 "bit_buffer.write.c"
	MR_RELEASE_GLOBAL_LOCK("stream");
	MR_tempr1 = Stream;
#undef	MR_PROC_LABEL
	}
	{
	ML_BitBufferPtr	Buffer;
	MR_Word	State;
#define	MR_PROC_LABEL	mercury__bit_buffer__write__finalize_3_0
	Buffer = (ML_BitBufferPtr) MR_r1;
	MR_OBTAIN_GLOBAL_LOCK("state");
{
#line 96 "bit_buffer.opt"
State = Buffer->ML_bit_buffer_state;;}
#line 1744 "bit_buffer.write.c"
	MR_RELEASE_GLOBAL_LOCK("state");
	MR_tempr2 = State;
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	MR_decr_sp_and_return(3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bit_buffer__write_module15)
	MR_init_entry1(fn__bit_buffer__write__finalize_to_bitmap_1_0);
	MR_init_label5(fn__bit_buffer__write__finalize_to_bitmap_1_0,2,3,4,5,6)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__bit_buffer__write__finalize_to_bitmap_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(bit_buffer, error_stream);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(bit_buffer, error_state);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(fn__bit_buffer__write__num_buffered_bits_1_0,
		fn__bit_buffer__write__finalize_to_bitmap_1_0_i2);
MR_def_label(fn__bit_buffer__write__finalize_to_bitmap_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r2 = (MR_Integer) 0;
	MR_np_call_localret_ent(fn__bitmap__new_2_0,
		fn__bit_buffer__write__finalize_to_bitmap_1_0_i3);
MR_def_label(fn__bit_buffer__write__finalize_to_bitmap_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	{
	ML_BitBufferPtr	Buffer;
	MR_BitmapPtr	BM;
#define	MR_PROC_LABEL	mercury__fn__bit_buffer__write__finalize_to_bitmap_1_0
	Buffer = (ML_BitBufferPtr) MR_sv(1);
	MR_OBTAIN_GLOBAL_LOCK("bitmap");
{
#line 91 "bit_buffer.opt"
BM = Buffer->ML_bit_buffer_bitmap;;}
#line 1798 "bit_buffer.write.c"
	MR_RELEASE_GLOBAL_LOCK("bitmap");
	MR_tempr1 = (MR_Word) BM;
#undef	MR_PROC_LABEL
	}
	{
	ML_BitBufferPtr	Buffer;
	MR_Integer	Pos;
#define	MR_PROC_LABEL	mercury__fn__bit_buffer__write__finalize_to_bitmap_1_0
	Buffer = (ML_BitBufferPtr) MR_sv(1);
	MR_OBTAIN_GLOBAL_LOCK("pos");
{
#line 92 "bit_buffer.opt"
Pos = Buffer->ML_bit_buffer_pos;;}
#line 1812 "bit_buffer.write.c"
	MR_RELEASE_GLOBAL_LOCK("pos");
	MR_r2 = Pos;
#undef	MR_PROC_LABEL
	}
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__bitmap__shrink_without_copying_2_0,
		fn__bit_buffer__write__finalize_to_bitmap_1_0_i4);
MR_def_label(fn__bit_buffer__write__finalize_to_bitmap_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_BitmapPtr	BM;
	MR_Integer	NumBits;
#define	MR_PROC_LABEL	mercury__fn__bit_buffer__write__finalize_to_bitmap_1_0
	BM = (MR_BitmapPtr) MR_r1;
{
#line 95 "bitmap.opt"

    NumBits = BM->num_bits;
;}
#line 1834 "bit_buffer.write.c"
	MR_r6 = NumBits;
#undef	MR_PROC_LABEL
	}
	MR_sv(2) = ((MR_Integer) MR_sv(2) - (MR_Integer) MR_r6);
	MR_r2 = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_r3 = (MR_Integer) 0;
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(2);
	MR_np_call_localret_ent(fn__bitmap__copy_bits_6_0,
		fn__bit_buffer__write__finalize_to_bitmap_1_0_i5);
MR_def_label(fn__bit_buffer__write__finalize_to_bitmap_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	{
	ML_BitBufferPtr	Buffer;
	MR_Word	FilledBMs;
#define	MR_PROC_LABEL	mercury__fn__bit_buffer__write__finalize_to_bitmap_1_0
	Buffer = (ML_BitBufferPtr) MR_sv(1);
	MR_OBTAIN_GLOBAL_LOCK("filled_bitmaps");
{
#line 97 "bit_buffer.opt"
FilledBMs = Buffer->ML_bit_buffer_filled_bitmaps;;}
#line 1859 "bit_buffer.write.c"
	MR_RELEASE_GLOBAL_LOCK("filled_bitmaps");
	MR_tempr1 = FilledBMs;
#undef	MR_PROC_LABEL
	}
	MR_r3 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	}
	MR_np_call_localret_ent(bit_buffer__write__list__foldl2__ho2_6_0,
		fn__bit_buffer__write__finalize_to_bitmap_1_0_i6);
MR_def_label(fn__bit_buffer__write__finalize_to_bitmap_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bit_buffer__write_module16)
	MR_init_entry1(__Unify___bit_buffer__write__io_write_buffer_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___bit_buffer__write__io_write_buffer_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(io, binary_output_stream);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Unify___bit_buffer__write__write_buffer_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bit_buffer__write_module17)
	MR_init_entry1(__Compare___bit_buffer__write__io_write_buffer_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___bit_buffer__write__io_write_buffer_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(io, binary_output_stream);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Compare___bit_buffer__write__write_buffer_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bit_buffer__write_module18)
	MR_init_entry1(__Unify___bit_buffer__write__write_buffer_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___bit_buffer__write__write_buffer_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(bit_buffer, error_stream);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(bit_buffer, error_state);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Unify___bit_buffer__write__write_buffer_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bit_buffer__write_module19)
	MR_init_entry1(__Compare___bit_buffer__write__write_buffer_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___bit_buffer__write__write_buffer_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(bit_buffer, error_stream);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(bit_buffer, error_state);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Compare___bit_buffer__write__write_buffer_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___bit_buffer__bit_buffer_3_0);

MR_BEGIN_MODULE(bit_buffer__write_module20)
	MR_init_entry1(__Unify___bit_buffer__write__write_buffer_2_0);
	MR_init_label1(__Unify___bit_buffer__write__write_buffer_2_0,6)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___bit_buffer__write__write_buffer_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r3 == MR_r4)) {
		MR_GOTO_LAB(__Unify___bit_buffer__write__write_buffer_2_0_i6);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(2);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___bit_buffer__bit_buffer_3_0);
MR_def_label(__Unify___bit_buffer__write__write_buffer_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___bit_buffer__bit_buffer_3_0);

MR_BEGIN_MODULE(bit_buffer__write_module21)
	MR_init_entry1(__Compare___bit_buffer__write__write_buffer_2_0);
	MR_init_label2(__Compare___bit_buffer__write__write_buffer_2_0,3,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___bit_buffer__write__write_buffer_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r3 == MR_r4)) {
		MR_GOTO_LAB(__Compare___bit_buffer__write__write_buffer_2_0_i3);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_GOTO_LAB(__Compare___bit_buffer__write__write_buffer_2_0_i2);
MR_def_label(__Compare___bit_buffer__write__write_buffer_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___bit_buffer__write__write_buffer_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___bit_buffer__bit_buffer_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bit_buffer__write_module22)
	MR_init_entry1(bit_buffer__write__list__foldl2__ho2_6_0);
	MR_init_label3(bit_buffer__write__list__foldl2__ho2_6_0,10,3,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(bit_buffer__write__list__foldl2__ho2_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(bit_buffer__write__list__foldl2__ho2_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(bit_buffer__write__list__foldl2__ho2_6_0_i3);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_decr_sp_and_return(3);
MR_def_label(bit_buffer__write__list__foldl2__ho2_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	{
	MR_BitmapPtr	BM;
	MR_Integer	NumBits;
#define	MR_PROC_LABEL	mercury__bit_buffer__write__list__foldl2__ho2_6_0
	BM = (MR_BitmapPtr) MR_tempr1;
{
#line 95 "bitmap.opt"

    NumBits = BM->num_bits;
;}
#line 2105 "bit_buffer.write.c"
	MR_r6 = NumBits;
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_ctfield(1, MR_r1, 1);
	MR_sv(2) = ((MR_Integer) MR_r2 - (MR_Integer) MR_r6);
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_tempr1;
	MR_r4 = MR_r3;
	MR_r3 = (MR_Integer) 0;
	MR_r5 = MR_sv(2);
	}
	MR_np_call_localret_ent(fn__bitmap__copy_bits_6_0,
		bit_buffer__write__list__foldl2__ho2_6_0_i4);
MR_def_label(bit_buffer__write__list__foldl2__ho2_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(bit_buffer__write__list__foldl2__ho2_6_0_i10);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bit_buffer__write_module23)
	MR_init_entry1(bit_buffer__write__list__foldl__ho4_4_0);
	MR_init_label1(bit_buffer__write__list__foldl__ho4_4_0,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(bit_buffer__write__list__foldl__ho4_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(bit_buffer__write__list__foldl__ho4_4_0_i3);
	}
	MR_r1 = MR_r2;
	MR_proceed();
MR_def_label(bit_buffer__write__list__foldl__ho4_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	{
	MR_BitmapPtr	BM;
	MR_Integer	NumBits;
#define	MR_PROC_LABEL	mercury__bit_buffer__write__list__foldl__ho4_4_0
	BM = (MR_BitmapPtr) MR_tempr1;
{
#line 95 "bitmap.opt"

    NumBits = BM->num_bits;
;}
#line 2164 "bit_buffer.write.c"
	MR_tempr1 = NumBits;
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_ctfield(1, MR_r1, 1);
	MR_r2 = ((MR_Integer) MR_r2 + (MR_Integer) MR_tempr1);
	MR_np_localtailcall(bit_buffer__write__list__foldl__ho4_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bit_buffer__write_module24)
	MR_init_entry1(fn__f_98_105_116_95_98_117_102_102_101_114_95_95_119_114_105_116_101_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__f_98_105_116_95_98_117_102_102_101_114_95_95_119_114_105_116_101_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1200;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__bit_buffer__write_maybe_bunch_0(void)
{
	bit_buffer__write_module0();
	bit_buffer__write_module1();
	bit_buffer__write_module2();
	bit_buffer__write_module3();
	bit_buffer__write_module4();
	bit_buffer__write_module5();
	bit_buffer__write_module6();
	bit_buffer__write_module7();
	bit_buffer__write_module8();
	bit_buffer__write_module9();
	bit_buffer__write_module10();
	bit_buffer__write_module11();
	bit_buffer__write_module12();
	bit_buffer__write_module13();
	bit_buffer__write_module14();
	bit_buffer__write_module15();
	bit_buffer__write_module16();
	bit_buffer__write_module17();
	bit_buffer__write_module18();
	bit_buffer__write_module19();
	bit_buffer__write_module20();
	bit_buffer__write_module21();
	bit_buffer__write_module22();
	bit_buffer__write_module23();
	bit_buffer__write_module24();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__bit_buffer__write__init(void);
void mercury__bit_buffer__write__init_type_tables(void);
void mercury__bit_buffer__write__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__bit_buffer__write__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__bit_buffer__write__init_complexity_procs(void);
#endif

void mercury__bit_buffer__write__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__bit_buffer__write_maybe_bunch_0();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_bit_buffer__write__type_ctor_info_write_buffer_2,
		bit_buffer__write__write_buffer_2_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_bit_buffer__write__type_ctor_info_write_buffer_0,
		bit_buffer__write__write_buffer_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_bit_buffer__write__type_ctor_info_io_write_buffer_0,
		bit_buffer__write__io_write_buffer_0_0);
	mercury__bit_buffer__write__init_debugger();
}

void mercury__bit_buffer__write__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_bit_buffer__write__type_ctor_info_write_buffer_2);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_bit_buffer__write__type_ctor_info_write_buffer_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_bit_buffer__write__type_ctor_info_io_write_buffer_0);
	}
}


void mercury__bit_buffer__write__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__bit_buffer__write__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__bit_buffer__write);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__bit_buffer__write__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
