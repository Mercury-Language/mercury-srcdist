/*
** Automatically generated from `bit_buffer.write.m'
** by the Mercury compiler,
** version rotd-2011-10-23, configured for x86_64-unknown-linux-gnu.
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
INIT mercury__bit_buffer__write__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 3 "bit_buffer.int0"
#include "bit_buffer.mh"

#line 28 "bit_buffer.write.c"
#line 526 "io.int"
#include "io.mh"

#line 32 "bit_buffer.write.c"
#line 536 "io.int"
#include "time.mh"

#line 36 "bit_buffer.write.c"
#line 537 "io.int"
#include "string.mh"

#line 40 "bit_buffer.write.c"
#line 151 "bitmap.int"
#include "bitmap.mh"

#line 44 "bit_buffer.write.c"
#line 21 "stm_builtin.int2"
#include "stm_builtin.mh"

#line 48 "bit_buffer.write.c"
#line 35 "store.int2"
#include "store.mh"

#line 52 "bit_buffer.write.c"
#line 33 "array.int2"
#include "array.mh"

#line 56 "bit_buffer.write.c"
#line 4 "char.opt"
#include "char.mh"

#line 60 "bit_buffer.write.c"
#line 12 "pretty_printer.opt"
#include "pretty_printer.mh"

#line 64 "bit_buffer.write.c"
#line 39 "pretty_printer.opt"
#include "version_array.mh"

#line 68 "bit_buffer.write.c"
#line 3 "construct.opt"
#include "construct.mh"

#line 72 "bit_buffer.write.c"
#line 130 "rtti_implementation.opt"
#include "rtti_implementation.mh"

#line 76 "bit_buffer.write.c"
#line 3 "float.opt"
#include "float.mh"

#line 80 "bit_buffer.write.c"
#line 3 "math.opt"
#include "math.mh"

#line 84 "bit_buffer.write.c"
#line 6 "type_desc.opt"
#include "type_desc.mh"

#line 88 "bit_buffer.write.c"
#line 4 "builtin.opt"
#include "builtin.mh"

#line 92 "bit_buffer.write.c"
#line 14 "exception.opt"
#include "exception.mh"

#line 96 "bit_buffer.write.c"
#line 4 "int.opt"
#include "int.mh"

#line 100 "bit_buffer.write.c"
#line 157 "io.opt"
#include "dir.mh"

#line 104 "bit_buffer.write.c"
#line 171 "io.opt"
#include "table_builtin.mh"

#line 108 "bit_buffer.write.c"
#line 6 "benchmarking.opt"
#include "benchmarking.mh"

#line 112 "bit_buffer.write.c"
#line 9 "private_builtin.opt"
#include "private_builtin.mh"

#line 116 "bit_buffer.write.c"
#line 117 "bit_buffer.write.c"
#include "bit_buffer.write.mh"

#line 120 "bit_buffer.write.c"
#line 121 "bit_buffer.write.c"
#ifndef BIT_BUFFER__WRITE_DECL_GUARD
#define BIT_BUFFER__WRITE_DECL_GUARD

#line 125 "bit_buffer.write.c"
#line 126 "bit_buffer.write.c"

#endif
#line 129 "bit_buffer.write.c"

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
	mercury_data_bit_buffer__write__type_ctor_info_io_write_buffer_0,
	mercury_data_bit_buffer__write__type_ctor_info_write_buffer_2,
	mercury_data_bit_buffer__write__type_ctor_info_write_buffer_0;
MR_decl_label3(bit_buffer__write__list__foldl2__ho6_6_0, 10,3,4)
MR_decl_label1(bit_buffer__write__list__foldl__ho8_4_0, 3)
MR_decl_label2(bit_buffer__write__copy_out_bitmap_5_0, 3,2)
MR_decl_label3(bit_buffer__write__finalize_3_0, 2,3,4)
MR_decl_label1(bit_buffer__write__flush_2_0, 12)
MR_decl_label4(bit_buffer__write__flush_all_to_stream_2_0, 12,3,4,2)
MR_decl_label8(bit_buffer__write__flush_chunk_to_stream_2_0, 2,3,7,8,12,9,14,4)
MR_decl_label1(bit_buffer__write__make_room_2_0, 14)
MR_decl_label1(bit_buffer__write__maybe_make_room_2_0, 3)
MR_decl_label1(bit_buffer__write__put_bit_3_0, 3)
MR_decl_label6(bit_buffer__write__put_bitmap_2_5_0, 17,2,4,5,6,7)
MR_decl_label1(bit_buffer__write__put_bits_4_0, 2)
MR_decl_label4(bit_buffer__write__store_full_buffer_2_0, 2,3,4,5)
MR_decl_label5(fn__bit_buffer__write__finalize_to_bitmap_1_0, 2,3,4,5,6)
MR_decl_label3(fn__bit_buffer__write__new_3_0, 2,3,4)
MR_decl_label1(fn__bit_buffer__write__new_bitmap_builder_1_0, 2)
MR_decl_label1(fn__bit_buffer__write__num_bits_to_byte_boundary_1_0, 2)
MR_decl_label1(fn__bit_buffer__write__num_buffered_bits_1_0, 2)
MR_decl_label1(__Unify___bit_buffer__write__write_buffer_2_0, 7)
MR_decl_label2(__Compare___bit_buffer__write__write_buffer_2_0, 3,2)
MR_def_extern_entry(fn__bit_buffer__write__new_3_0)
MR_def_extern_entry(fn__bit_buffer__write__new_bitmap_builder_1_0)
MR_def_extern_entry(fn__bit_buffer__write__num_buffered_bits_1_0)
MR_def_extern_entry(fn__bit_buffer__write__num_bits_to_byte_boundary_1_0)
MR_def_extern_entry(bit_buffer__write__flush_chunk_to_stream_2_0)
MR_def_extern_entry(bit_buffer__write__store_full_buffer_2_0)
MR_def_extern_entry(bit_buffer__write__make_room_2_0)
MR_def_extern_entry(bit_buffer__write__maybe_make_room_2_0)
MR_def_extern_entry(bit_buffer__write__put_bits_4_0)
MR_def_extern_entry(bit_buffer__write__put_bit_3_0)
MR_def_extern_entry(bit_buffer__write__put_byte_3_0)
MR_def_extern_entry(bit_buffer__write__put_bitmap_2_5_0)
MR_def_extern_entry(bit_buffer__write__put_bitmap_5_0)
MR_def_extern_entry(bit_buffer__write__put_bitmap_3_0)
MR_decl_static(bit_buffer__write__flush_all_to_stream_2_0)
MR_def_extern_entry(bit_buffer__write__flush_2_0)
MR_def_extern_entry(bit_buffer__write__finalize_3_0)
MR_decl_static(bit_buffer__write__copy_out_bitmap_5_0)
MR_def_extern_entry(fn__bit_buffer__write__finalize_to_bitmap_1_0)
MR_def_extern_entry(__Unify___bit_buffer__write__io_write_buffer_0_0)
MR_def_extern_entry(__Compare___bit_buffer__write__io_write_buffer_0_0)
MR_def_extern_entry(__Unify___bit_buffer__write__write_buffer_0_0)
MR_def_extern_entry(__Compare___bit_buffer__write__write_buffer_0_0)
MR_def_extern_entry(__Unify___bit_buffer__write__write_buffer_2_0)
MR_def_extern_entry(__Compare___bit_buffer__write__write_buffer_2_0)
MR_decl_static(bit_buffer__write__list__foldl2__ho6_6_0)
MR_decl_static(bit_buffer__write__list__foldl__ho8_4_0)
MR_decl_static(fn__f_98_105_116_95_98_117_102_102_101_114_95_95_119_114_105_116_101_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0)

extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_tuple_0;
static const struct mercury_type_0 mercury_common_0[1] =
{
{
MR_CTOR0_ADDR(builtin, tuple),
0
},
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
	15,
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
	15,
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
	15,
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



MR_decl_entry(fn__bitmap__init_2_0);
MR_decl_entry(fn__bit_buffer__new_buffer_6_0);

MR_BEGIN_MODULE(bit_buffer__write_module0)
	MR_init_entry1(fn__bit_buffer__write__new_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__bit_buffer__write__new_3_0);
	MR_init_label3(fn__bit_buffer__write__new_3_0,2,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'new'/4 mode 0 */
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
#line 163 "int.opt"

    Bits = ML_BITS_PER_INT;
;}
#line 327 "bit_buffer.write.c"
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
#line 163 "int.opt"

    Bits = ML_BITS_PER_INT;
;}
#line 362 "bit_buffer.write.c"
	MR_tempr1 = Bits;
#undef	MR_PROC_LABEL
	}
	MR_r1 = ((MR_Integer) MR_sv(3) + (MR_Integer) MR_tempr1);
	MR_r2 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(fn__bitmap__init_2_0,
		fn__bit_buffer__write__new_3_0_i4);
MR_def_label(fn__bit_buffer__write__new_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_Word	TypeClassInfo;
	MR_Integer	Index;
	MR_Word	TypeInfo;
#define	MR_PROC_LABEL	mercury__fn__bit_buffer__write__new_3_0
	TypeClassInfo = MR_sv(4);
	Index = (MR_Integer) 2;
{
#line 133 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);
;}
#line 387 "bit_buffer.write.c"
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
#line 133 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);
;}
#line 403 "bit_buffer.write.c"
	MR_r2 = TypeInfo;
#undef	MR_PROC_LABEL
	}
	MR_tempr2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r4 = MR_tempr2;
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
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__bit_buffer__write__new_bitmap_builder_1_0);
	MR_init_label1(fn__bit_buffer__write__new_bitmap_builder_1_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'new_bitmap_builder'/2 mode 0 */
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
#line 163 "int.opt"

    Bits = ML_BITS_PER_INT;
;}
#line 453 "bit_buffer.write.c"
	MR_tempr1 = Bits;
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = ((MR_Integer) MR_r1 * (MR_Integer) 8);
	MR_r1 = ((MR_Integer) MR_sv(1) + (MR_Integer) MR_tempr1);
	MR_r2 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(fn__bitmap__init_2_0,
		fn__bit_buffer__write__new_bitmap_builder_1_0_i2);
MR_def_label(fn__bit_buffer__write__new_bitmap_builder_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(bit_buffer, error_stream);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(bit_buffer, error_state);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r4 = MR_tempr1;
	MR_r5 = (MR_Integer) 0;
	MR_r6 = MR_sv(1);
	MR_r7 = (MR_Integer) 0;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(fn__bit_buffer__new_buffer_6_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bit_buffer__write_module2)
	MR_init_entry1(fn__bit_buffer__write__num_buffered_bits_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__bit_buffer__write__num_buffered_bits_1_0);
	MR_init_label1(fn__bit_buffer__write__num_buffered_bits_1_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'num_buffered_bits'/2 mode 0 */
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
#line 114 "bit_buffer.opt"

    Pos = Buffer->ML_bit_buffer_pos;
;}
#line 515 "bit_buffer.write.c"
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
#line 129 "bit_buffer.opt"

    FilledBMs = Buffer->ML_bit_buffer_filled_bitmaps;
;}
#line 531 "bit_buffer.write.c"
	MR_RELEASE_GLOBAL_LOCK("filled_bitmaps");
	MR_r1 = FilledBMs;
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_tempr1;
	MR_r2 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(bit_buffer__write__list__foldl__ho8_4_0,
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
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__bit_buffer__write__num_bits_to_byte_boundary_1_0);
	MR_init_label1(fn__bit_buffer__write__num_bits_to_byte_boundary_1_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'num_bits_to_byte_boundary'/2 mode 0 */
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
#line 114 "bit_buffer.opt"

    Pos = Buffer->ML_bit_buffer_pos;
;}
#line 577 "bit_buffer.write.c"
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

MR_decl_entry(fn__bitmap__slice_3_0);
MR_declare_entry(mercury__do_call_class_method_3);
MR_decl_entry(fn__bitmap__bits_3_0);
MR_decl_entry(fn__f_98_105_116_109_97_112_95_95_98_105_116_115_32_58_61_4_0);

MR_BEGIN_MODULE(bit_buffer__write_module4)
	MR_init_entry1(bit_buffer__write__flush_chunk_to_stream_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__bit_buffer__write__flush_chunk_to_stream_2_0);
	MR_init_label8(bit_buffer__write__flush_chunk_to_stream_2_0,2,3,7,8,12,9,14,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'flush_chunk_to_stream'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__bit_buffer__write__flush_chunk_to_stream_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	ML_BitBufferPtr	Buffer;
	MR_Integer	Pos;
#define	MR_PROC_LABEL	mercury__bit_buffer__write__flush_chunk_to_stream_2_0
	Buffer = (ML_BitBufferPtr) MR_r2;
	MR_OBTAIN_GLOBAL_LOCK("pos");
{
#line 114 "bit_buffer.opt"

    Pos = Buffer->ML_bit_buffer_pos;
;}
#line 630 "bit_buffer.write.c"
	MR_RELEASE_GLOBAL_LOCK("pos");
	MR_r4 = Pos;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	{
	ML_BitBufferPtr	Buffer;
	MR_Integer	Size;
#define	MR_PROC_LABEL	mercury__bit_buffer__write__flush_chunk_to_stream_2_0
	Buffer = (ML_BitBufferPtr) MR_r2;
	MR_OBTAIN_GLOBAL_LOCK("size");
{
#line 117 "bit_buffer.opt"

    Size = Buffer->ML_bit_buffer_size;
;}
#line 648 "bit_buffer.write.c"
	MR_RELEASE_GLOBAL_LOCK("size");
	MR_tempr1 = Size;
#undef	MR_PROC_LABEL
	}
	MR_r5 = MR_tempr1;
	if (((MR_Integer) MR_tempr1 >= (MR_Integer) MR_r4)) {
		MR_GOTO_LAB(bit_buffer__write__flush_chunk_to_stream_2_0_i2);
	}
	MR_sv(1) = MR_r4;
	MR_sv(5) = MR_r1;
	MR_r1 = ((MR_Integer) MR_tempr1 / (MR_Integer) 8);
	MR_sv(3) = MR_r2;
	MR_GOTO_LAB(bit_buffer__write__flush_chunk_to_stream_2_0_i3);
	}
MR_def_label(bit_buffer__write__flush_chunk_to_stream_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(1) = MR_tempr1;
	MR_sv(5) = MR_r1;
	MR_r1 = ((MR_Integer) MR_tempr1 / (MR_Integer) 8);
	MR_sv(3) = MR_r2;
	}
MR_def_label(bit_buffer__write__flush_chunk_to_stream_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_r1,0)) {
		MR_GOTO_LAB(bit_buffer__write__flush_chunk_to_stream_2_0_i4);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	{
	ML_BitBufferPtr	Buffer;
	MR_Word	Stream;
#define	MR_PROC_LABEL	mercury__bit_buffer__write__flush_chunk_to_stream_2_0
	Buffer = (ML_BitBufferPtr) MR_sv(3);
	MR_OBTAIN_GLOBAL_LOCK("stream");
{
#line 123 "bit_buffer.opt"

    Stream = Buffer->ML_bit_buffer_stream;
;}
#line 691 "bit_buffer.write.c"
	MR_RELEASE_GLOBAL_LOCK("stream");
	MR_tempr1 = Stream;
#undef	MR_PROC_LABEL
	}
	{
	ML_BitBufferPtr	Buffer;
	MR_BitmapPtr	BM;
#define	MR_PROC_LABEL	mercury__bit_buffer__write__flush_chunk_to_stream_2_0
	Buffer = (ML_BitBufferPtr) MR_sv(3);
	MR_OBTAIN_GLOBAL_LOCK("bitmap");
{
#line 111 "bit_buffer.opt"

    BM = Buffer->ML_bit_buffer_bitmap;
;}
#line 707 "bit_buffer.write.c"
	MR_RELEASE_GLOBAL_LOCK("bitmap");
	MR_tempr2 = (MR_Word) BM;
#undef	MR_PROC_LABEL
	}
	MR_sv(2) = ((MR_Integer) MR_r1 * (MR_Integer) 8);
	MR_sv(4) = MR_tempr1;
	MR_tempr3 = MR_r1;
	MR_r1 = MR_tempr2;
	MR_r2 = (MR_Integer) 0;
	MR_r3 = ((MR_Integer) MR_tempr3 * (MR_Integer) 8);
	}
	MR_np_call_localret_ent(fn__bitmap__slice_3_0,
		bit_buffer__write__flush_chunk_to_stream_2_0_i7);
MR_def_label(bit_buffer__write__flush_chunk_to_stream_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	ML_BitBufferPtr	Buffer;
	MR_Word	State;
#define	MR_PROC_LABEL	mercury__bit_buffer__write__flush_chunk_to_stream_2_0
	Buffer = (ML_BitBufferPtr) MR_sv(3);
	MR_OBTAIN_GLOBAL_LOCK("state");
{
#line 126 "bit_buffer.opt"

    State = Buffer->ML_bit_buffer_state;
;}
#line 736 "bit_buffer.write.c"
	MR_RELEASE_GLOBAL_LOCK("state");
	MR_tempr1 = State;
#undef	MR_PROC_LABEL
	}
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_tempr2;
	MR_r5 = MR_tempr1;
	MR_r2 = (MR_Integer) 1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(bit_buffer__write__flush_chunk_to_stream_2_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_3),
		mercury__bit_buffer__write__flush_chunk_to_stream_2_0_i8);
MR_def_label(bit_buffer__write__flush_chunk_to_stream_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = ((MR_Integer) MR_sv(1) - (MR_Integer) MR_sv(2));
	if (MR_INT_EQ(MR_r2,0)) {
		MR_GOTO_LAB(bit_buffer__write__flush_chunk_to_stream_2_0_i9);
	}
	{
	ML_BitBufferPtr	Buffer;
	MR_BitmapPtr	BM;
#define	MR_PROC_LABEL	mercury__bit_buffer__write__flush_chunk_to_stream_2_0
	Buffer = (ML_BitBufferPtr) MR_sv(3);
	MR_OBTAIN_GLOBAL_LOCK("bitmap");
{
#line 111 "bit_buffer.opt"

    BM = Buffer->ML_bit_buffer_bitmap;
;}
#line 768 "bit_buffer.write.c"
	MR_RELEASE_GLOBAL_LOCK("bitmap");
	MR_r3 = (MR_Word) BM;
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r2;
	MR_sv(4) = MR_r3;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__bitmap__bits_3_0,
		bit_buffer__write__flush_chunk_to_stream_2_0_i12);
MR_def_label(bit_buffer__write__flush_chunk_to_stream_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_98_105_116_109_97_112_95_95_98_105_116_115_32_58_61_4_0,
		bit_buffer__write__flush_chunk_to_stream_2_0_i14);
MR_def_label(bit_buffer__write__flush_chunk_to_stream_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	ML_BitBufferPtr	Buffer;
	MR_BitmapPtr	BM;
#define	MR_PROC_LABEL	mercury__bit_buffer__write__flush_chunk_to_stream_2_0
	Buffer = (ML_BitBufferPtr) MR_sv(3);
	MR_OBTAIN_GLOBAL_LOCK("bitmap");
{
#line 111 "bit_buffer.opt"

    BM = Buffer->ML_bit_buffer_bitmap;
;}
#line 808 "bit_buffer.write.c"
	MR_RELEASE_GLOBAL_LOCK("bitmap");
	MR_r3 = (MR_Word) BM;
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = MR_r3;
MR_def_label(bit_buffer__write__flush_chunk_to_stream_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	ML_BitBufferPtr	Buffer;
	MR_Integer	Size;
#define	MR_PROC_LABEL	mercury__bit_buffer__write__flush_chunk_to_stream_2_0
	Buffer = (ML_BitBufferPtr) MR_sv(3);
	MR_OBTAIN_GLOBAL_LOCK("size");
{
#line 117 "bit_buffer.opt"

    Size = Buffer->ML_bit_buffer_size;
;}
#line 829 "bit_buffer.write.c"
	MR_RELEASE_GLOBAL_LOCK("size");
	MR_r2 = Size;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	{
	ML_BitBufferPtr	Buffer;
	MR_Word	FilledBMs;
#define	MR_PROC_LABEL	mercury__bit_buffer__write__flush_chunk_to_stream_2_0
	Buffer = (ML_BitBufferPtr) MR_sv(3);
	MR_OBTAIN_GLOBAL_LOCK("filled_bitmaps");
{
#line 129 "bit_buffer.opt"

    FilledBMs = Buffer->ML_bit_buffer_filled_bitmaps;
;}
#line 847 "bit_buffer.write.c"
	MR_RELEASE_GLOBAL_LOCK("filled_bitmaps");
	MR_tempr1 = FilledBMs;
#undef	MR_PROC_LABEL
	}
	{
	MR_BitmapPtr	BM;
	MR_Integer	Pos;
	MR_Integer	Size;
	MR_Word	State;
	MR_Word	FilledBMs;
	ML_BitBufferPtr	Buffer0;
	ML_BitBufferPtr	Buffer;
#define	MR_PROC_LABEL	mercury__bit_buffer__write__flush_chunk_to_stream_2_0
	BM = (MR_BitmapPtr) MR_r1;
	Pos = MR_sv(2);
	Size = MR_r2;
	State = MR_sv(1);
	FilledBMs = MR_tempr1;
	Buffer0 = (ML_BitBufferPtr) MR_sv(3);
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
#line 878 "bit_buffer.write.c"
	MR_RELEASE_GLOBAL_LOCK("set_all");
	MR_r1 = (MR_Word) Buffer;
#undef	MR_PROC_LABEL
	}
	MR_decr_sp_and_return(6);
	}
MR_def_label(bit_buffer__write__flush_chunk_to_stream_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__bitmap__shrink_without_copying_2_0);

MR_BEGIN_MODULE(bit_buffer__write_module5)
	MR_init_entry1(bit_buffer__write__store_full_buffer_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__bit_buffer__write__store_full_buffer_2_0);
	MR_init_label4(bit_buffer__write__store_full_buffer_2_0,2,3,4,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'store_full_buffer'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__bit_buffer__write__store_full_buffer_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	{
	ML_BitBufferPtr	Buffer;
	MR_Integer	Pos;
#define	MR_PROC_LABEL	mercury__bit_buffer__write__store_full_buffer_2_0
	Buffer = (ML_BitBufferPtr) MR_r2;
	MR_OBTAIN_GLOBAL_LOCK("pos");
{
#line 114 "bit_buffer.opt"

    Pos = Buffer->ML_bit_buffer_pos;
;}
#line 926 "bit_buffer.write.c"
	MR_RELEASE_GLOBAL_LOCK("pos");
	MR_tempr1 = Pos;
#undef	MR_PROC_LABEL
	}
	{
	ML_BitBufferPtr	Buffer;
	MR_Integer	Size;
#define	MR_PROC_LABEL	mercury__bit_buffer__write__store_full_buffer_2_0
	Buffer = (ML_BitBufferPtr) MR_r2;
	MR_OBTAIN_GLOBAL_LOCK("size");
{
#line 117 "bit_buffer.opt"

    Size = Buffer->ML_bit_buffer_size;
;}
#line 942 "bit_buffer.write.c"
	MR_RELEASE_GLOBAL_LOCK("size");
	MR_tempr2 = Size;
#undef	MR_PROC_LABEL
	}
	{
	ML_BitBufferPtr	Buffer;
	MR_BitmapPtr	BM;
#define	MR_PROC_LABEL	mercury__bit_buffer__write__store_full_buffer_2_0
	Buffer = (ML_BitBufferPtr) MR_r2;
	MR_OBTAIN_GLOBAL_LOCK("bitmap");
{
#line 111 "bit_buffer.opt"

    BM = Buffer->ML_bit_buffer_bitmap;
;}
#line 958 "bit_buffer.write.c"
	MR_RELEASE_GLOBAL_LOCK("bitmap");
	MR_tempr3 = (MR_Word) BM;
#undef	MR_PROC_LABEL
	}
	{
	ML_BitBufferPtr	Buffer;
	MR_Word	State;
#define	MR_PROC_LABEL	mercury__bit_buffer__write__store_full_buffer_2_0
	Buffer = (ML_BitBufferPtr) MR_r2;
	MR_OBTAIN_GLOBAL_LOCK("state");
{
#line 126 "bit_buffer.opt"

    State = Buffer->ML_bit_buffer_state;
;}
#line 974 "bit_buffer.write.c"
	MR_RELEASE_GLOBAL_LOCK("state");
	MR_tempr4 = State;
#undef	MR_PROC_LABEL
	}
	{
	ML_BitBufferPtr	Buffer;
	MR_Integer	Size;
#define	MR_PROC_LABEL	mercury__bit_buffer__write__store_full_buffer_2_0
	Buffer = (ML_BitBufferPtr) MR_r2;
	MR_OBTAIN_GLOBAL_LOCK("size");
{
#line 117 "bit_buffer.opt"

    Size = Buffer->ML_bit_buffer_size;
;}
#line 990 "bit_buffer.write.c"
	MR_RELEASE_GLOBAL_LOCK("size");
	MR_tempr5 = Size;
#undef	MR_PROC_LABEL
	}
	{
	MR_Integer	Bits;
#define	MR_PROC_LABEL	mercury__bit_buffer__write__store_full_buffer_2_0
{
#line 163 "int.opt"

    Bits = ML_BITS_PER_INT;
;}
#line 1003 "bit_buffer.write.c"
	MR_tempr6 = Bits;
#undef	MR_PROC_LABEL
	}
	MR_sv(6) = MR_tempr1;
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = MR_tempr3;
	MR_sv(3) = MR_tempr4;
	MR_sv(4) = ((MR_Integer) MR_tempr5 * (MR_Integer) 2);
	MR_sv(7) = MR_r2;
	MR_r1 = ((MR_Integer) MR_sv(4) + (MR_Integer) MR_tempr6);
	MR_r2 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(fn__bitmap__init_2_0,
		bit_buffer__write__store_full_buffer_2_0_i2);
MR_def_label(bit_buffer__write__store_full_buffer_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_tempr2 = MR_sv(1);
	MR_sv(5) = ((MR_Integer) MR_tempr1 - (MR_Integer) MR_tempr2);
	MR_r1 = MR_tempr2;
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(fn__bitmap__bits_3_0,
		bit_buffer__write__store_full_buffer_2_0_i3);
MR_def_label(bit_buffer__write__store_full_buffer_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_98_105_116_109_97_112_95_95_98_105_116_115_32_58_61_4_0,
		bit_buffer__write__store_full_buffer_2_0_i4);
MR_def_label(bit_buffer__write__store_full_buffer_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(fn__bitmap__shrink_without_copying_2_0,
		bit_buffer__write__store_full_buffer_2_0_i5);
MR_def_label(bit_buffer__write__store_full_buffer_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	ML_BitBufferPtr	Buffer;
	MR_Word	FilledBMs;
#define	MR_PROC_LABEL	mercury__bit_buffer__write__store_full_buffer_2_0
	Buffer = (ML_BitBufferPtr) MR_sv(7);
	MR_OBTAIN_GLOBAL_LOCK("filled_bitmaps");
{
#line 129 "bit_buffer.opt"

    FilledBMs = Buffer->ML_bit_buffer_filled_bitmaps;
;}
#line 1064 "bit_buffer.write.c"
	MR_RELEASE_GLOBAL_LOCK("filled_bitmaps");
	MR_r2 = FilledBMs;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	{
	MR_BitmapPtr	BM;
	MR_Integer	Pos;
	MR_Integer	Size;
	MR_Word	State;
	MR_Word	FilledBMs;
	ML_BitBufferPtr	Buffer0;
	ML_BitBufferPtr	Buffer;
#define	MR_PROC_LABEL	mercury__bit_buffer__write__store_full_buffer_2_0
	BM = (MR_BitmapPtr) MR_sv(6);
	Pos = MR_sv(5);
	Size = MR_sv(4);
	State = MR_sv(3);
	FilledBMs = MR_tempr1;
	Buffer0 = (ML_BitBufferPtr) MR_sv(7);
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
#line 1100 "bit_buffer.write.c"
	MR_RELEASE_GLOBAL_LOCK("set_all");
	MR_r1 = (MR_Word) Buffer;
#undef	MR_PROC_LABEL
	}
	MR_decr_sp_and_return(8);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bit_buffer__write_module6)
	MR_init_entry1(bit_buffer__write__make_room_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__bit_buffer__write__make_room_2_0);
	MR_init_label1(bit_buffer__write__make_room_2_0,14)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'make_room'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__bit_buffer__write__make_room_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	ML_BitBufferPtr	Buffer;
	MR_Word	UseStream;
#define	MR_PROC_LABEL	mercury__bit_buffer__write__make_room_2_0
	Buffer = (ML_BitBufferPtr) MR_r2;
	MR_OBTAIN_GLOBAL_LOCK("use_stream");
{
#line 120 "bit_buffer.opt"

    UseStream = Buffer->ML_bit_buffer_use_stream;
;}
#line 1139 "bit_buffer.write.c"
	MR_RELEASE_GLOBAL_LOCK("use_stream");
	MR_r3 = UseStream;
#undef	MR_PROC_LABEL
	}
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(bit_buffer__write__make_room_2_0_i14);
	}
	MR_np_tailcall_ent(bit_buffer__write__store_full_buffer_2_0);
MR_def_label(bit_buffer__write__make_room_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(bit_buffer__write__flush_chunk_to_stream_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bit_buffer__write_module7)
	MR_init_entry1(bit_buffer__write__maybe_make_room_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__bit_buffer__write__maybe_make_room_2_0);
	MR_init_label1(bit_buffer__write__maybe_make_room_2_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'maybe_make_room'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__bit_buffer__write__maybe_make_room_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	ML_BitBufferPtr	Buffer;
	MR_Integer	Pos;
#define	MR_PROC_LABEL	mercury__bit_buffer__write__maybe_make_room_2_0
	Buffer = (ML_BitBufferPtr) MR_r2;
	MR_OBTAIN_GLOBAL_LOCK("pos");
{
#line 114 "bit_buffer.opt"

    Pos = Buffer->ML_bit_buffer_pos;
;}
#line 1183 "bit_buffer.write.c"
	MR_RELEASE_GLOBAL_LOCK("pos");
	MR_r3 = Pos;
#undef	MR_PROC_LABEL
	}
	{
	ML_BitBufferPtr	Buffer;
	MR_Integer	Size;
#define	MR_PROC_LABEL	mercury__bit_buffer__write__maybe_make_room_2_0
	Buffer = (ML_BitBufferPtr) MR_r2;
	MR_OBTAIN_GLOBAL_LOCK("size");
{
#line 117 "bit_buffer.opt"

    Size = Buffer->ML_bit_buffer_size;
;}
#line 1199 "bit_buffer.write.c"
	MR_RELEASE_GLOBAL_LOCK("size");
	MR_r4 = Size;
#undef	MR_PROC_LABEL
	}
	if (((MR_Integer) MR_r3 < (MR_Integer) MR_r4)) {
		MR_GOTO_LAB(bit_buffer__write__maybe_make_room_2_0_i3);
	}
	MR_np_tailcall_ent(bit_buffer__write__make_room_2_0);
MR_def_label(bit_buffer__write__maybe_make_room_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bit_buffer__write_module8)
	MR_init_entry1(bit_buffer__write__put_bits_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__bit_buffer__write__put_bits_4_0);
	MR_init_label1(bit_buffer__write__put_bits_4_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'put_bits'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__bit_buffer__write__put_bits_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	{
	ML_BitBufferPtr	Buffer;
	MR_BitmapPtr	BM;
#define	MR_PROC_LABEL	mercury__bit_buffer__write__put_bits_4_0
	Buffer = (ML_BitBufferPtr) MR_r4;
	MR_OBTAIN_GLOBAL_LOCK("bitmap");
{
#line 111 "bit_buffer.opt"

    BM = Buffer->ML_bit_buffer_bitmap;
;}
#line 1248 "bit_buffer.write.c"
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
#line 114 "bit_buffer.opt"

    Pos = Buffer->ML_bit_buffer_pos;
;}
#line 1264 "bit_buffer.write.c"
	MR_RELEASE_GLOBAL_LOCK("pos");
	MR_tempr2 = Pos;
#undef	MR_PROC_LABEL
	}
	MR_tempr4 = MR_r3;
	MR_sv(1) = MR_tempr4;
	MR_sv(2) = MR_tempr2;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r1;
	MR_r1 = MR_tempr2;
	MR_tempr3 = MR_r2;
	MR_r2 = MR_tempr4;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr3;
	}
	MR_np_call_localret_ent(fn__f_98_105_116_109_97_112_95_95_98_105_116_115_32_58_61_4_0,
		bit_buffer__write__put_bits_4_0_i2);
MR_def_label(bit_buffer__write__put_bits_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = ((MR_Integer) MR_sv(2) + (MR_Integer) MR_sv(1));
	{
	MR_BitmapPtr	BM;
	MR_Integer	Pos;
	ML_BitBufferPtr	Buffer0;
	ML_BitBufferPtr	Buffer;
#define	MR_PROC_LABEL	mercury__bit_buffer__write__put_bits_4_0
	BM = (MR_BitmapPtr) MR_r1;
	Pos = MR_tempr1;
	Buffer0 = (ML_BitBufferPtr) MR_sv(3);
	MR_OBTAIN_GLOBAL_LOCK("set_bitmap");
{
#line 143 "bit_buffer.opt"

    Buffer = Buffer0;
    Buffer->ML_bit_buffer_bitmap = BM;
    Buffer->ML_bit_buffer_pos = Pos;
;}
#line 1304 "bit_buffer.write.c"
	MR_RELEASE_GLOBAL_LOCK("set_bitmap");
	MR_r2 = (MR_Word) Buffer;
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(bit_buffer__write__maybe_make_room_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bit_buffer__write_module9)
	MR_init_entry1(bit_buffer__write__put_bit_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__bit_buffer__write__put_bit_3_0);
	MR_init_label1(bit_buffer__write__put_bit_3_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'put_bit'/3 mode 0 */
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
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = (MR_Integer) 1;
	MR_r4 = MR_tempr1;
	MR_np_tailcall_ent(bit_buffer__write__put_bits_4_0);
	}
MR_def_label(bit_buffer__write__put_bit_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = (MR_Integer) 1;
	MR_r4 = MR_tempr1;
	MR_np_tailcall_ent(bit_buffer__write__put_bits_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bit_buffer__write_module10)
	MR_init_entry1(bit_buffer__write__put_byte_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__bit_buffer__write__put_byte_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'put_byte'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__bit_buffer__write__put_byte_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = (MR_Integer) 8;
	MR_r4 = MR_tempr1;
	MR_np_tailcall_ent(bit_buffer__write__put_bits_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__bitmap__copy_bits_6_0);

MR_BEGIN_MODULE(bit_buffer__write_module11)
	MR_init_entry1(bit_buffer__write__put_bitmap_2_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__bit_buffer__write__put_bitmap_2_5_0);
	MR_init_label6(bit_buffer__write__put_bitmap_2_5_0,17,2,4,5,6,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'put_bitmap_2'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__bit_buffer__write__put_bitmap_2_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
MR_def_label(bit_buffer__write__put_bitmap_2_5_0,17)
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
#line 111 "bit_buffer.opt"

    BM = Buffer->ML_bit_buffer_bitmap;
;}
#line 1427 "bit_buffer.write.c"
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
#line 114 "bit_buffer.opt"

    Pos = Buffer->ML_bit_buffer_pos;
;}
#line 1443 "bit_buffer.write.c"
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
#line 117 "bit_buffer.opt"

    Size = Buffer->ML_bit_buffer_size;
;}
#line 1459 "bit_buffer.write.c"
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
	{
	MR_Word MR_tempr1;
	MR_tempr1 = ((MR_Integer) MR_sv(4) + (MR_Integer) MR_sv(5));
	{
	MR_BitmapPtr	BM;
	MR_Integer	Pos;
	ML_BitBufferPtr	Buffer0;
	ML_BitBufferPtr	Buffer;
#define	MR_PROC_LABEL	mercury__bit_buffer__write__put_bitmap_2_5_0
	BM = (MR_BitmapPtr) MR_r1;
	Pos = MR_tempr1;
	Buffer0 = (ML_BitBufferPtr) MR_sv(6);
	MR_OBTAIN_GLOBAL_LOCK("set_bitmap");
{
#line 143 "bit_buffer.opt"

    Buffer = Buffer0;
    Buffer->ML_bit_buffer_bitmap = BM;
    Buffer->ML_bit_buffer_pos = Pos;
;}
#line 1518 "bit_buffer.write.c"
	MR_RELEASE_GLOBAL_LOCK("set_bitmap");
	MR_r2 = (MR_Word) Buffer;
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_sv(7);
	}
	MR_np_call_localret_ent(bit_buffer__write__maybe_make_room_2_0,
		bit_buffer__write__put_bitmap_2_5_0_i7);
MR_def_label(bit_buffer__write__put_bitmap_2_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(1);
	MR_tempr2 = MR_sv(5);
	MR_r3 = ((MR_Integer) MR_sv(2) + (MR_Integer) MR_tempr2);
	MR_r4 = ((MR_Integer) MR_sv(3) - (MR_Integer) MR_tempr2);
	MR_r5 = MR_tempr1;
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(bit_buffer__write__put_bitmap_2_5_0_i17);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bit_buffer__write_module12)
	MR_init_entry1(bit_buffer__write__put_bitmap_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__bit_buffer__write__put_bitmap_5_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'put_bitmap'/5 mode 0 */
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


MR_BEGIN_MODULE(bit_buffer__write_module13)
	MR_init_entry1(bit_buffer__write__put_bitmap_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__bit_buffer__write__put_bitmap_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'put_bitmap'/3 mode 0 */
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
#line 118 "bitmap.opt"

    NumBits = BM->num_bits;
;}
#line 1592 "bit_buffer.write.c"
	MR_r4 = NumBits;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = (MR_Integer) 0;
	MR_r5 = MR_tempr1;
	MR_np_tailcall_ent(bit_buffer__write__put_bitmap_2_5_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bit_buffer__write_module14)
	MR_init_entry1(bit_buffer__write__flush_all_to_stream_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__bit_buffer__write__flush_all_to_stream_2_0);
	MR_init_label4(bit_buffer__write__flush_all_to_stream_2_0,12,3,4,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'flush_all_to_stream'/2 mode 0 */
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
#line 133 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);
;}
#line 1642 "bit_buffer.write.c"
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
#line 133 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);
;}
#line 1658 "bit_buffer.write.c"
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
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(bit_buffer__write__flush_all_to_stream_2_0_i12);
	}
MR_def_label(bit_buffer__write__flush_all_to_stream_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bit_buffer__write_module15)
	MR_init_entry1(bit_buffer__write__flush_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__bit_buffer__write__flush_2_0);
	MR_init_label1(bit_buffer__write__flush_2_0,12)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'flush'/2 mode 0 */
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
#line 120 "bit_buffer.opt"

    UseStream = Buffer->ML_bit_buffer_use_stream;
;}
#line 1725 "bit_buffer.write.c"
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


MR_BEGIN_MODULE(bit_buffer__write_module16)
	MR_init_entry1(bit_buffer__write__finalize_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__bit_buffer__write__finalize_3_0);
	MR_init_label3(bit_buffer__write__finalize_3_0,2,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'finalize'/3 mode 0 */
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
#line 133 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);
;}
#line 1775 "bit_buffer.write.c"
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
#line 133 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);
;}
#line 1791 "bit_buffer.write.c"
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
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(bit_buffer__write__put_bits_4_0,
		bit_buffer__write__finalize_3_0_i3);
MR_def_label(bit_buffer__write__finalize_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
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
#line 123 "bit_buffer.opt"

    Stream = Buffer->ML_bit_buffer_stream;
;}
#line 1840 "bit_buffer.write.c"
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
#line 126 "bit_buffer.opt"

    State = Buffer->ML_bit_buffer_state;
;}
#line 1856 "bit_buffer.write.c"
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


MR_BEGIN_MODULE(bit_buffer__write_module17)
	MR_init_entry1(bit_buffer__write__copy_out_bitmap_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__bit_buffer__write__copy_out_bitmap_5_0);
	MR_init_label2(bit_buffer__write__copy_out_bitmap_5_0,3,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'copy_out_bitmap'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(bit_buffer__write__copy_out_bitmap_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_BitmapPtr	BM;
	MR_Integer	NumBits;
#define	MR_PROC_LABEL	mercury__bit_buffer__write__copy_out_bitmap_5_0
	BM = (MR_BitmapPtr) MR_r1;
{
#line 118 "bitmap.opt"

    NumBits = BM->num_bits;
;}
#line 1896 "bit_buffer.write.c"
	MR_r6 = NumBits;
#undef	MR_PROC_LABEL
	}
	if (MR_INT_LE(MR_r6,0)) {
		MR_GOTO_LAB(bit_buffer__write__copy_out_bitmap_5_0_i2);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = ((MR_Integer) MR_r2 - (MR_Integer) MR_r6);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_tempr1;
	MR_tempr2 = MR_r3;
	MR_r3 = (MR_Integer) 0;
	MR_r4 = MR_tempr2;
	MR_r5 = MR_sv(1);
	}
	MR_np_call_localret_ent(fn__bitmap__copy_bits_6_0,
		bit_buffer__write__copy_out_bitmap_5_0_i3);
MR_def_label(bit_buffer__write__copy_out_bitmap_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(2);
	}
MR_def_label(bit_buffer__write__copy_out_bitmap_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bit_buffer__write_module18)
	MR_init_entry1(fn__bit_buffer__write__finalize_to_bitmap_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__bit_buffer__write__finalize_to_bitmap_1_0);
	MR_init_label5(fn__bit_buffer__write__finalize_to_bitmap_1_0,2,3,4,5,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'finalize_to_bitmap'/2 mode 0 */
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
	MR_np_call_localret_ent(fn__bitmap__init_2_0,
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
#line 111 "bit_buffer.opt"

    BM = Buffer->ML_bit_buffer_bitmap;
;}
#line 1982 "bit_buffer.write.c"
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
#line 114 "bit_buffer.opt"

    Pos = Buffer->ML_bit_buffer_pos;
;}
#line 1998 "bit_buffer.write.c"
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
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(bit_buffer__write__copy_out_bitmap_5_0,
		fn__bit_buffer__write__finalize_to_bitmap_1_0_i5);
MR_def_label(fn__bit_buffer__write__finalize_to_bitmap_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	{
	ML_BitBufferPtr	Buffer;
	MR_Word	FilledBMs;
#define	MR_PROC_LABEL	mercury__fn__bit_buffer__write__finalize_to_bitmap_1_0
	Buffer = (ML_BitBufferPtr) MR_sv(1);
	MR_OBTAIN_GLOBAL_LOCK("filled_bitmaps");
{
#line 129 "bit_buffer.opt"

    FilledBMs = Buffer->ML_bit_buffer_filled_bitmaps;
;}
#line 2029 "bit_buffer.write.c"
	MR_RELEASE_GLOBAL_LOCK("filled_bitmaps");
	MR_tempr1 = FilledBMs;
#undef	MR_PROC_LABEL
	}
	MR_tempr2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_tempr3 = MR_r2;
	MR_r2 = MR_tempr2;
	MR_r3 = MR_tempr3;
	}
	MR_np_call_localret_ent(bit_buffer__write__list__foldl2__ho6_6_0,
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


MR_BEGIN_MODULE(bit_buffer__write_module19)
	MR_init_entry1(__Unify___bit_buffer__write__io_write_buffer_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___bit_buffer__write__io_write_buffer_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
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


MR_BEGIN_MODULE(bit_buffer__write_module20)
	MR_init_entry1(__Compare___bit_buffer__write__io_write_buffer_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___bit_buffer__write__io_write_buffer_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
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


MR_BEGIN_MODULE(bit_buffer__write_module21)
	MR_init_entry1(__Unify___bit_buffer__write__write_buffer_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___bit_buffer__write__write_buffer_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
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


MR_BEGIN_MODULE(bit_buffer__write_module22)
	MR_init_entry1(__Compare___bit_buffer__write__write_buffer_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___bit_buffer__write__write_buffer_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
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

MR_BEGIN_MODULE(bit_buffer__write_module23)
	MR_init_entry1(__Unify___bit_buffer__write__write_buffer_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___bit_buffer__write__write_buffer_2_0);
	MR_init_label1(__Unify___bit_buffer__write__write_buffer_2_0,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___bit_buffer__write__write_buffer_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r3 == MR_r4)) {
		MR_GOTO_LAB(__Unify___bit_buffer__write__write_buffer_2_0_i7);
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
MR_def_label(__Unify___bit_buffer__write__write_buffer_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___bit_buffer__bit_buffer_3_0);

MR_BEGIN_MODULE(bit_buffer__write_module24)
	MR_init_entry1(__Compare___bit_buffer__write__write_buffer_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___bit_buffer__write__write_buffer_2_0);
	MR_init_label2(__Compare___bit_buffer__write__write_buffer_2_0,3,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
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


MR_BEGIN_MODULE(bit_buffer__write_module25)
	MR_init_entry1(bit_buffer__write__list__foldl2__ho6_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__bit_buffer__write__list__foldl2__ho6_6_0);
	MR_init_label3(bit_buffer__write__list__foldl2__ho6_6_0,10,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldl2__ho6'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(bit_buffer__write__list__foldl2__ho6_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
MR_def_label(bit_buffer__write__list__foldl2__ho6_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(bit_buffer__write__list__foldl2__ho6_6_0_i3);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_decr_sp_and_return(2);
MR_def_label(bit_buffer__write__list__foldl2__ho6_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_np_call_localret_ent(bit_buffer__write__copy_out_bitmap_5_0,
		bit_buffer__write__list__foldl2__ho6_6_0_i4);
MR_def_label(bit_buffer__write__list__foldl2__ho6_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_succip_word = MR_sv(2);
	MR_GOTO_LAB(bit_buffer__write__list__foldl2__ho6_6_0_i10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bit_buffer__write_module26)
	MR_init_entry1(bit_buffer__write__list__foldl__ho8_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__bit_buffer__write__list__foldl__ho8_4_0);
	MR_init_label1(bit_buffer__write__list__foldl__ho8_4_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldl__ho8'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(bit_buffer__write__list__foldl__ho8_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(bit_buffer__write__list__foldl__ho8_4_0_i3);
	}
	MR_r1 = MR_r2;
	MR_proceed();
MR_def_label(bit_buffer__write__list__foldl__ho8_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	{
	MR_BitmapPtr	BM;
	MR_Integer	NumBits;
#define	MR_PROC_LABEL	mercury__bit_buffer__write__list__foldl__ho8_4_0
	BM = (MR_BitmapPtr) MR_tempr1;
{
#line 118 "bitmap.opt"

    NumBits = BM->num_bits;
;}
#line 2342 "bit_buffer.write.c"
	MR_tempr1 = NumBits;
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_tfield(1, MR_r1, 1);
	MR_r2 = ((MR_Integer) MR_r2 + (MR_Integer) MR_tempr1);
	MR_np_localtailcall(bit_buffer__write__list__foldl__ho8_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bit_buffer__write_module27)
	MR_init_entry1(fn__f_98_105_116_95_98_117_102_102_101_114_95_95_119_114_105_116_101_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__f_98_105_116_95_98_117_102_102_101_114_95_95_119_114_105_116_101_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__func__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__max_priority_1__[1]_0'/2 mode 0 */
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
	bit_buffer__write_module25();
	bit_buffer__write_module26();
	bit_buffer__write_module27();
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
#ifdef MR_THREADSCOPE
void mercury__bit_buffer__write__init_threadscope_string_table(void);
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
		mercury_data_bit_buffer__write__type_ctor_info_io_write_buffer_0,
		bit_buffer__write__io_write_buffer_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_bit_buffer__write__type_ctor_info_write_buffer_2,
		bit_buffer__write__write_buffer_2_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_bit_buffer__write__type_ctor_info_write_buffer_0,
		bit_buffer__write__write_buffer_0_0);
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
		&mercury_data_bit_buffer__write__type_ctor_info_io_write_buffer_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_bit_buffer__write__type_ctor_info_write_buffer_2);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_bit_buffer__write__type_ctor_info_write_buffer_0);
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

#ifdef MR_THREADSCOPE

void mercury__bit_buffer__write__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
