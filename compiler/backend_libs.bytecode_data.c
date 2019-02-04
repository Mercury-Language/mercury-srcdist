/*
** Automatically generated from `bytecode_data.m'
** by the Mercury compiler,
** version rotd-2007-08-16, configured for i686-pc-linux-gnu.
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
INIT mercury__backend_libs__bytecode_data__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 24 "backend_libs.bytecode_data.c"
#include "backend_libs.bytecode_data.mh"

#line 27 "backend_libs.bytecode_data.c"
#line 530 "../library/io.int"
#include "io.mh"

#line 31 "backend_libs.bytecode_data.c"
#line 538 "../library/io.int"
#include "string.mh"

#line 35 "backend_libs.bytecode_data.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 39 "backend_libs.bytecode_data.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 43 "backend_libs.bytecode_data.c"
#line 31 "../library/array.int2"
#include "array.mh"

#line 47 "backend_libs.bytecode_data.c"
#line 48 "backend_libs.bytecode_data.c"
#ifndef BACKEND_LIBS__BYTECODE_DATA_DECL_GUARD
#define BACKEND_LIBS__BYTECODE_DATA_DECL_GUARD

#line 52 "backend_libs.bytecode_data.c"
#line 53 "backend_libs.bytecode_data.c"

#endif
#line 56 "backend_libs.bytecode_data.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

struct mercury_type_0 {
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
	MR_Word * f5;
};
MR_STATIC_LINKAGE const struct mercury_type_0 mercury_common_0[];

struct mercury_type_1 {
	MR_Word * f1;
	MR_Code * f2;
	MR_Integer f3;
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

struct mercury_type_2 {
	MR_Integer f1;
	MR_Word * f2;
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];

struct mercury_type_3 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[3];
};
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];
MR_decl_label2(backend_libs__bytecode_data__int_to_byte_list_2_0, 2,3)
MR_decl_label8(backend_libs__bytecode_data__int_to_byte_list_3_0, 2,5,6,8,3,4,10,12)
MR_decl_label5(backend_libs__bytecode_data__int_to_byte_list_3_0, 11,13,14,15,16)
MR_decl_label1(backend_libs__bytecode_data__output_byte_3_0, 2)
MR_decl_label8(backend_libs__bytecode_data__output_float_3_0, 3,2,5,7,6,9,11,10)
MR_decl_label8(backend_libs__bytecode_data__output_float_3_0, 13,15,14,17,19,18,21,23)
MR_decl_label3(backend_libs__bytecode_data__output_float_3_0, 22,25,26)
MR_decl_label2(backend_libs__bytecode_data__output_int_3_0, 2,3)
MR_decl_label8(backend_libs__bytecode_data__output_int_4_0, 2,5,6,8,3,4,10,11)
MR_decl_label3(backend_libs__bytecode_data__output_int_4_0, 13,14,15)
MR_decl_label5(backend_libs__bytecode_data__output_int_bytes__ho3_5_0, 13,3,4,5,15)
MR_decl_label5(backend_libs__bytecode_data__output_int_bytes__ho5_5_0, 13,3,4,5,2)
MR_decl_label3(backend_libs__bytecode_data__output_padding_zeros__ho4_4_0, 11,3,13)
MR_decl_label3(backend_libs__bytecode_data__output_padding_zeros__ho6_4_0, 11,3,2)
MR_decl_label2(backend_libs__bytecode_data__output_string_3_0, 2,3)
MR_decl_label2(backend_libs__bytecode_data__string_to_byte_list_2_0, 2,3)
MR_def_extern_entry(backend_libs__bytecode_data__string_to_byte_list_2_0)
MR_def_extern_entry(backend_libs__bytecode_data__output_string_3_0)
MR_def_extern_entry(backend_libs__bytecode_data__output_byte_3_0)
MR_decl_static(backend_libs__bytecode_data__output_int_4_0)
MR_def_extern_entry(backend_libs__bytecode_data__output_int_3_0)
MR_decl_static(backend_libs__bytecode_data__int_to_byte_list_3_0)
MR_def_extern_entry(backend_libs__bytecode_data__int_to_byte_list_2_0)
MR_def_extern_entry(backend_libs__bytecode_data__output_int32_3_0)
MR_def_extern_entry(backend_libs__bytecode_data__int32_to_byte_list_2_0)
MR_def_extern_entry(backend_libs__bytecode_data__output_short_3_0)
MR_def_extern_entry(backend_libs__bytecode_data__short_to_byte_list_2_0)
MR_decl_static(backend_libs__bytecode_data__float_to_float64_bytes_9_0)
MR_def_extern_entry(backend_libs__bytecode_data__output_float_3_0)
MR_def_extern_entry(backend_libs__bytecode_data__float_to_byte_list_2_0)
MR_decl_static(backend_libs__bytecode_data__output_int_bytes__ho3_5_0)
MR_decl_static(backend_libs__bytecode_data__output_padding_zeros__ho4_4_0)
MR_decl_static(backend_libs__bytecode_data__output_int_bytes__ho5_5_0)
MR_decl_static(backend_libs__bytecode_data__output_padding_zeros__ho6_4_0)

static const MR_UserClosureId
mercury_data__closure_layout__backend_libs__bytecode_data__string_to_byte_list_2_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_character_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
static const struct mercury_type_0 mercury_common_0[1] =
{
{
(MR_Word *) &mercury_data__closure_layout__backend_libs__bytecode_data__string_to_byte_list_2_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CHAR_CTOR_ADDR,
MR_INT_CTOR_ADDR
},
};

MR_decl_entry(char__to_int_2_0);
MR_decl_entry(io__write_byte_3_0);
static const struct mercury_type_1 mercury_common_1[2] =
{
{
MR_COMMON(0,0),
MR_ENTRY_AP(char__to_int_2_0),
0
},
{
MR_COMMON(3,0),
MR_ENTRY_AP(io__write_byte_3_0),
0
},
};

static const struct mercury_type_2 mercury_common_2[1] =
{
{
0,
MR_tbmkword(0, 0)
},
};

static const MR_UserClosureId
mercury_data__closure_layout__backend_libs__bytecode_data__output_string_3_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_state_0;
static const struct mercury_type_3 mercury_common_3[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__backend_libs__bytecode_data__output_string_3_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_INT_CTOR_ADDR,
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__backend_libs__bytecode_data__string_to_byte_list_2_0_1 = {
{
MR_PREDICATE,
"char",
"char",
"to_int",
2,
0
},
"backend_libs.bytecode_data",
"bytecode_data.m",
87,
"d1;c4;"
};

static const MR_UserClosureId
mercury_data__closure_layout__backend_libs__bytecode_data__output_string_3_0_1 = {
{
MR_PREDICATE,
"io",
"io",
"write_byte",
3,
0
},
"backend_libs.bytecode_data",
"bytecode_data.m",
76,
"d1;c5;"
};

MR_decl_entry(string__to_char_list_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_character_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
MR_decl_entry(list__map_3_0);
MR_decl_entry(list__append_3_1);

MR_BEGIN_MODULE(backend_libs__bytecode_data_module0)
	MR_init_entry1(backend_libs__bytecode_data__string_to_byte_list_2_0);
	MR_init_label2(backend_libs__bytecode_data__string_to_byte_list_2_0,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__backend_libs__bytecode_data__string_to_byte_list_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(string__to_char_list_2_0,
		backend_libs__bytecode_data__string_to_byte_list_2_0_i2);
MR_def_label(backend_libs__bytecode_data__string_to_byte_list_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_CHAR_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_np_call_localret_ent(list__map_3_0,
		backend_libs__bytecode_data__string_to_byte_list_2_0_i3);
MR_def_label(backend_libs__bytecode_data__string_to_byte_list_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,2,0);
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(list__append_3_1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_state_0;
MR_decl_entry(list__foldl_4_0);

MR_BEGIN_MODULE(backend_libs__bytecode_data_module1)
	MR_init_entry1(backend_libs__bytecode_data__output_string_3_0);
	MR_init_label2(backend_libs__bytecode_data__output_string_3_0,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__backend_libs__bytecode_data__output_string_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(backend_libs__bytecode_data__string_to_byte_list_2_0,
		backend_libs__bytecode_data__output_string_3_0_i2);
MR_def_label(backend_libs__bytecode_data__output_string_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_np_call_localret_ent(list__foldl_4_0,
		backend_libs__bytecode_data__output_string_3_0_i3);
MR_def_label(backend_libs__bytecode_data__output_string_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(io__write_byte_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(libs__compiler_util__unexpected_2_0);

MR_BEGIN_MODULE(backend_libs__bytecode_data_module2)
	MR_init_entry1(backend_libs__bytecode_data__output_byte_3_0);
	MR_init_label1(backend_libs__bytecode_data__output_byte_3_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__backend_libs__bytecode_data__output_byte_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_GE(MR_r1,256)) {
		MR_GOTO_LAB(backend_libs__bytecode_data__output_byte_3_0_i2);
	}
	MR_np_tailcall_ent(io__write_byte_3_0);
MR_def_label(backend_libs__bytecode_data__output_byte_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("bytecode_data.m", 15);
	MR_r2 = (MR_Word) MR_string_const("output_byte: byte does not fit in eight bits", 44);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(int__bits_per_int_1_0);
MR_decl_entry(int__pow_3_0);
MR_decl_entry(string__format_3_0);
MR_decl_entry(fn__f_105_110_116_95_95_47_47_2_0);

MR_BEGIN_MODULE(backend_libs__bytecode_data_module3)
	MR_init_entry1(backend_libs__bytecode_data__output_int_4_0);
	MR_init_label8(backend_libs__bytecode_data__output_int_4_0,2,5,6,8,3,4,10,11)
	MR_init_label3(backend_libs__bytecode_data__output_int_4_0,13,14,15)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(backend_libs__bytecode_data__output_int_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(int__bits_per_int_1_0,
		backend_libs__bytecode_data__output_int_4_0_i2);
MR_def_label(backend_libs__bytecode_data__output_int_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_sv(1) >= (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(backend_libs__bytecode_data__output_int_4_0_i4);
	}
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Integer) 2;
	MR_r2 = ((MR_Integer) MR_sv(1) - (MR_Integer) 1);
	MR_np_call_localret_ent(int__pow_3_0,
		backend_libs__bytecode_data__output_int_4_0_i5);
MR_def_label(backend_libs__bytecode_data__output_int_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_sv(2) >= (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(backend_libs__bytecode_data__output_int_4_0_i6);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = ((MR_Integer) 0 - (MR_Integer) MR_r1);
	if (((MR_Integer) MR_sv(2) >= (MR_Integer) MR_tempr1)) {
		MR_GOTO_LAB(backend_libs__bytecode_data__output_int_4_0_i3);
	}
	}
MR_def_label(backend_libs__bytecode_data__output_int_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr3;
	MR_r1 = (MR_Word) MR_string_const("error: bytecode_data.output_int: %d does not fit in %d bits", 59);
	}
	MR_np_call_localret_ent(string__format_3_0,
		backend_libs__bytecode_data__output_int_4_0_i8);
MR_def_label(backend_libs__bytecode_data__output_int_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("bytecode_data.m", 15);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		backend_libs__bytecode_data__output_int_4_0_i10);
MR_def_label(backend_libs__bytecode_data__output_int_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
MR_def_label(backend_libs__bytecode_data__output_int_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
MR_def_label(backend_libs__bytecode_data__output_int_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_sv(1) <= (MR_Integer) MR_sv(3))) {
		MR_GOTO_LAB(backend_libs__bytecode_data__output_int_4_0_i11);
	}
	MR_r1 = ((MR_Integer) MR_sv(1) - (MR_Integer) MR_sv(3));
	MR_r2 = (MR_Integer) 8;
	MR_np_call_localret_ent(fn__f_105_110_116_95_95_47_47_2_0,
		backend_libs__bytecode_data__output_int_4_0_i13);
MR_def_label(backend_libs__bytecode_data__output_int_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
MR_def_label(backend_libs__bytecode_data__output_int_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(backend_libs__bytecode_data__output_padding_zeros__ho4_4_0,
		backend_libs__bytecode_data__output_int_4_0_i14);
MR_def_label(backend_libs__bytecode_data__output_int_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 8;
	MR_np_call_localret_ent(fn__f_105_110_116_95_95_47_47_2_0,
		backend_libs__bytecode_data__output_int_4_0_i15);
MR_def_label(backend_libs__bytecode_data__output_int_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (((MR_Integer) MR_r1 - (MR_Integer) MR_sv(3)) - (MR_Integer) 1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(backend_libs__bytecode_data__output_int_bytes__ho3_5_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(backend_libs__bytecode_data_module4)
	MR_init_entry1(backend_libs__bytecode_data__output_int_3_0);
	MR_init_label2(backend_libs__bytecode_data__output_int_3_0,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__backend_libs__bytecode_data__output_int_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(int__bits_per_int_1_0,
		backend_libs__bytecode_data__output_int_3_0_i2);
MR_def_label(backend_libs__bytecode_data__output_int_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_LE(MR_r1,64)) {
		MR_GOTO_LAB(backend_libs__bytecode_data__output_int_3_0_i3);
	}
	MR_r1 = (MR_Word) MR_string_const("bytecode_data.m", 15);
	MR_r2 = (MR_Word) MR_string_const("output_int: size of int is larger than size of bytecode integer.", 64);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(backend_libs__bytecode_data__output_int_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 64;
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(backend_libs__bytecode_data__output_int_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__reverse_2_0);

MR_BEGIN_MODULE(backend_libs__bytecode_data_module5)
	MR_init_entry1(backend_libs__bytecode_data__int_to_byte_list_3_0);
	MR_init_label8(backend_libs__bytecode_data__int_to_byte_list_3_0,2,5,6,8,3,4,10,12)
	MR_init_label5(backend_libs__bytecode_data__int_to_byte_list_3_0,11,13,14,15,16)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(backend_libs__bytecode_data__int_to_byte_list_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(int__bits_per_int_1_0,
		backend_libs__bytecode_data__int_to_byte_list_3_0_i2);
MR_def_label(backend_libs__bytecode_data__int_to_byte_list_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_sv(1) >= (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(backend_libs__bytecode_data__int_to_byte_list_3_0_i4);
	}
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Integer) 2;
	MR_r2 = ((MR_Integer) MR_sv(1) - (MR_Integer) 1);
	MR_np_call_localret_ent(int__pow_3_0,
		backend_libs__bytecode_data__int_to_byte_list_3_0_i5);
MR_def_label(backend_libs__bytecode_data__int_to_byte_list_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_sv(2) >= (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(backend_libs__bytecode_data__int_to_byte_list_3_0_i6);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = ((MR_Integer) 0 - (MR_Integer) MR_r1);
	if (((MR_Integer) MR_sv(2) >= (MR_Integer) MR_tempr1)) {
		MR_GOTO_LAB(backend_libs__bytecode_data__int_to_byte_list_3_0_i3);
	}
	}
MR_def_label(backend_libs__bytecode_data__int_to_byte_list_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr3;
	MR_r1 = (MR_Word) MR_string_const("error: bytecode_data.output_int: %d does not fit in %d bits", 59);
	}
	MR_np_call_localret_ent(string__format_3_0,
		backend_libs__bytecode_data__int_to_byte_list_3_0_i8);
MR_def_label(backend_libs__bytecode_data__int_to_byte_list_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("bytecode_data.m", 15);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		backend_libs__bytecode_data__int_to_byte_list_3_0_i10);
MR_def_label(backend_libs__bytecode_data__int_to_byte_list_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
MR_def_label(backend_libs__bytecode_data__int_to_byte_list_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
MR_def_label(backend_libs__bytecode_data__int_to_byte_list_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_sv(1) <= (MR_Integer) MR_sv(3))) {
		MR_GOTO_LAB(backend_libs__bytecode_data__int_to_byte_list_3_0_i11);
	}
	MR_r1 = ((MR_Integer) MR_sv(1) - (MR_Integer) MR_sv(3));
	MR_r2 = (MR_Integer) 8;
	MR_np_call_localret_ent(fn__f_105_110_116_95_95_47_47_2_0,
		backend_libs__bytecode_data__int_to_byte_list_3_0_i12);
MR_def_label(backend_libs__bytecode_data__int_to_byte_list_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_GOTO_LAB(backend_libs__bytecode_data__int_to_byte_list_3_0_i13);
MR_def_label(backend_libs__bytecode_data__int_to_byte_list_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
MR_def_label(backend_libs__bytecode_data__int_to_byte_list_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(backend_libs__bytecode_data__output_padding_zeros__ho6_4_0,
		backend_libs__bytecode_data__int_to_byte_list_3_0_i14);
MR_def_label(backend_libs__bytecode_data__int_to_byte_list_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r2 = (MR_Integer) 8;
	}
	MR_np_call_localret_ent(fn__f_105_110_116_95_95_47_47_2_0,
		backend_libs__bytecode_data__int_to_byte_list_3_0_i15);
MR_def_label(backend_libs__bytecode_data__int_to_byte_list_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (((MR_Integer) MR_r1 - (MR_Integer) MR_sv(3)) - (MR_Integer) 1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(backend_libs__bytecode_data__output_int_bytes__ho5_5_0,
		backend_libs__bytecode_data__int_to_byte_list_3_0_i16);
MR_def_label(backend_libs__bytecode_data__int_to_byte_list_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(list__reverse_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(backend_libs__bytecode_data_module6)
	MR_init_entry1(backend_libs__bytecode_data__int_to_byte_list_2_0);
	MR_init_label2(backend_libs__bytecode_data__int_to_byte_list_2_0,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__backend_libs__bytecode_data__int_to_byte_list_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(int__bits_per_int_1_0,
		backend_libs__bytecode_data__int_to_byte_list_2_0_i2);
MR_def_label(backend_libs__bytecode_data__int_to_byte_list_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_LE(MR_r1,64)) {
		MR_GOTO_LAB(backend_libs__bytecode_data__int_to_byte_list_2_0_i3);
	}
	MR_r1 = (MR_Word) MR_string_const("bytecode_data.m", 15);
	MR_r2 = (MR_Word) MR_string_const("int_to_byte_list: size of int is larger than size of bytecode integer.", 70);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(backend_libs__bytecode_data__int_to_byte_list_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 64;
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(backend_libs__bytecode_data__int_to_byte_list_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(backend_libs__bytecode_data_module7)
	MR_init_entry1(backend_libs__bytecode_data__output_int32_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__backend_libs__bytecode_data__output_int32_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Integer) 32;
	MR_np_tailcall_ent(backend_libs__bytecode_data__output_int_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(backend_libs__bytecode_data_module8)
	MR_init_entry1(backend_libs__bytecode_data__int32_to_byte_list_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__backend_libs__bytecode_data__int32_to_byte_list_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Integer) 32;
	MR_np_tailcall_ent(backend_libs__bytecode_data__int_to_byte_list_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(backend_libs__bytecode_data_module9)
	MR_init_entry1(backend_libs__bytecode_data__output_short_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__backend_libs__bytecode_data__output_short_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Integer) 16;
	MR_np_tailcall_ent(backend_libs__bytecode_data__output_int_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(backend_libs__bytecode_data_module10)
	MR_init_entry1(backend_libs__bytecode_data__short_to_byte_list_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__backend_libs__bytecode_data__short_to_byte_list_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Integer) 16;
	MR_np_tailcall_ent(backend_libs__bytecode_data__int_to_byte_list_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(backend_libs__bytecode_data_module11)
	MR_init_entry1(backend_libs__bytecode_data__float_to_float64_bytes_9_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(backend_libs__bytecode_data__float_to_float64_bytes_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Float	FloatVal;
	MR_Integer	B0;
	MR_Integer	B1;
	MR_Integer	B2;
	MR_Integer	B3;
	MR_Integer	B4;
	MR_Integer	B5;
	MR_Integer	B6;
	MR_Integer	B7;
#define	MR_PROC_LABEL	mercury__backend_libs__bytecode_data__float_to_float64_bytes_9_0
	FloatVal = MR_word_to_float(MR_r1);
	MR_OBTAIN_GLOBAL_LOCK("float_to_float64_bytes");
{
#line 235 "bytecode_data.m"

    {
        MR_Float64  float64;
        unsigned char   *raw_mem_p;

        float64 = (MR_Float64) FloatVal;
        raw_mem_p = (unsigned char *) &float64;

        #if defined(MR_BIG_ENDIAN)
            B0 = raw_mem_p[0];
            B1 = raw_mem_p[1];
            B2 = raw_mem_p[2];
            B3 = raw_mem_p[3];
            B4 = raw_mem_p[4];
            B5 = raw_mem_p[5];
            B6 = raw_mem_p[6];
            B7 = raw_mem_p[7];
        #elif defined(MR_LITTLE_ENDIAN)
            B7 = raw_mem_p[0];
            B6 = raw_mem_p[1];
            B5 = raw_mem_p[2];
            B4 = raw_mem_p[3];
            B3 = raw_mem_p[4];
            B2 = raw_mem_p[5];
            B1 = raw_mem_p[6];
            B0 = raw_mem_p[7];
        #else
            #error  "Weird-endian architecture"
        #endif
    }
;}
#line 781 "backend_libs.bytecode_data.c"
	MR_RELEASE_GLOBAL_LOCK("float_to_float64_bytes");
	MR_r1 = B0;
	MR_r2 = B1;
	MR_r3 = B2;
	MR_r4 = B3;
	MR_r5 = B4;
	MR_r6 = B5;
	MR_r7 = B6;
	MR_r8 = B7;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(backend_libs__bytecode_data_module12)
	MR_init_entry1(backend_libs__bytecode_data__output_float_3_0);
	MR_init_label8(backend_libs__bytecode_data__output_float_3_0,3,2,5,7,6,9,11,10)
	MR_init_label8(backend_libs__bytecode_data__output_float_3_0,13,15,14,17,19,18,21,23)
	MR_init_label3(backend_libs__bytecode_data__output_float_3_0,22,25,26)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__backend_libs__bytecode_data__output_float_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	{
	MR_Float	FloatVal;
	MR_Integer	B0;
	MR_Integer	B1;
	MR_Integer	B2;
	MR_Integer	B3;
	MR_Integer	B4;
	MR_Integer	B5;
	MR_Integer	B6;
	MR_Integer	B7;
#define	MR_PROC_LABEL	mercury__backend_libs__bytecode_data__output_float_3_0
	FloatVal = MR_word_to_float(MR_r1);
	MR_OBTAIN_GLOBAL_LOCK("float_to_float64_bytes");
{
#line 235 "bytecode_data.m"

    {
        MR_Float64  float64;
        unsigned char   *raw_mem_p;

        float64 = (MR_Float64) FloatVal;
        raw_mem_p = (unsigned char *) &float64;

        #if defined(MR_BIG_ENDIAN)
            B0 = raw_mem_p[0];
            B1 = raw_mem_p[1];
            B2 = raw_mem_p[2];
            B3 = raw_mem_p[3];
            B4 = raw_mem_p[4];
            B5 = raw_mem_p[5];
            B6 = raw_mem_p[6];
            B7 = raw_mem_p[7];
        #elif defined(MR_LITTLE_ENDIAN)
            B7 = raw_mem_p[0];
            B6 = raw_mem_p[1];
            B5 = raw_mem_p[2];
            B4 = raw_mem_p[3];
            B3 = raw_mem_p[4];
            B2 = raw_mem_p[5];
            B1 = raw_mem_p[6];
            B0 = raw_mem_p[7];
        #else
            #error  "Weird-endian architecture"
        #endif
    }
;}
#line 862 "backend_libs.bytecode_data.c"
	MR_RELEASE_GLOBAL_LOCK("float_to_float64_bytes");
	MR_r1 = B0;
	MR_r3 = B1;
	MR_r4 = B2;
	MR_r5 = B3;
	MR_r6 = B4;
	MR_r7 = B5;
	MR_r8 = B6;
	MR_r9 = B7;
#undef	MR_PROC_LABEL
	}
	if (MR_INT_GE(MR_r1,256)) {
		MR_GOTO_LAB(backend_libs__bytecode_data__output_float_3_0_i2);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	MR_sv(4) = MR_r6;
	MR_sv(5) = MR_r7;
	MR_sv(6) = MR_r8;
	MR_sv(7) = MR_r9;
	MR_np_call_localret_ent(io__write_byte_3_0,
		backend_libs__bytecode_data__output_float_3_0_i3);
MR_def_label(backend_libs__bytecode_data__output_float_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(backend_libs__bytecode_data__output_float_3_0_i5);
MR_def_label(backend_libs__bytecode_data__output_float_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("bytecode_data.m", 15);
	MR_r2 = (MR_Word) MR_string_const("output_byte: byte does not fit in eight bits", 44);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		backend_libs__bytecode_data__output_float_3_0_i5);
MR_def_label(backend_libs__bytecode_data__output_float_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_GE(MR_r1,256)) {
		MR_GOTO_LAB(backend_libs__bytecode_data__output_float_3_0_i6);
	}
	MR_np_call_localret_ent(io__write_byte_3_0,
		backend_libs__bytecode_data__output_float_3_0_i7);
MR_def_label(backend_libs__bytecode_data__output_float_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_GOTO_LAB(backend_libs__bytecode_data__output_float_3_0_i9);
MR_def_label(backend_libs__bytecode_data__output_float_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("bytecode_data.m", 15);
	MR_r2 = (MR_Word) MR_string_const("output_byte: byte does not fit in eight bits", 44);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		backend_libs__bytecode_data__output_float_3_0_i9);
MR_def_label(backend_libs__bytecode_data__output_float_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_GE(MR_r1,256)) {
		MR_GOTO_LAB(backend_libs__bytecode_data__output_float_3_0_i10);
	}
	MR_np_call_localret_ent(io__write_byte_3_0,
		backend_libs__bytecode_data__output_float_3_0_i11);
MR_def_label(backend_libs__bytecode_data__output_float_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_GOTO_LAB(backend_libs__bytecode_data__output_float_3_0_i13);
MR_def_label(backend_libs__bytecode_data__output_float_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("bytecode_data.m", 15);
	MR_r2 = (MR_Word) MR_string_const("output_byte: byte does not fit in eight bits", 44);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		backend_libs__bytecode_data__output_float_3_0_i13);
MR_def_label(backend_libs__bytecode_data__output_float_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_GE(MR_r1,256)) {
		MR_GOTO_LAB(backend_libs__bytecode_data__output_float_3_0_i14);
	}
	MR_np_call_localret_ent(io__write_byte_3_0,
		backend_libs__bytecode_data__output_float_3_0_i15);
MR_def_label(backend_libs__bytecode_data__output_float_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_GOTO_LAB(backend_libs__bytecode_data__output_float_3_0_i17);
MR_def_label(backend_libs__bytecode_data__output_float_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("bytecode_data.m", 15);
	MR_r2 = (MR_Word) MR_string_const("output_byte: byte does not fit in eight bits", 44);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		backend_libs__bytecode_data__output_float_3_0_i17);
MR_def_label(backend_libs__bytecode_data__output_float_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_GE(MR_r1,256)) {
		MR_GOTO_LAB(backend_libs__bytecode_data__output_float_3_0_i18);
	}
	MR_np_call_localret_ent(io__write_byte_3_0,
		backend_libs__bytecode_data__output_float_3_0_i19);
MR_def_label(backend_libs__bytecode_data__output_float_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_GOTO_LAB(backend_libs__bytecode_data__output_float_3_0_i21);
MR_def_label(backend_libs__bytecode_data__output_float_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("bytecode_data.m", 15);
	MR_r2 = (MR_Word) MR_string_const("output_byte: byte does not fit in eight bits", 44);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		backend_libs__bytecode_data__output_float_3_0_i21);
MR_def_label(backend_libs__bytecode_data__output_float_3_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_GE(MR_r1,256)) {
		MR_GOTO_LAB(backend_libs__bytecode_data__output_float_3_0_i22);
	}
	MR_np_call_localret_ent(io__write_byte_3_0,
		backend_libs__bytecode_data__output_float_3_0_i23);
MR_def_label(backend_libs__bytecode_data__output_float_3_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(backend_libs__bytecode_data__output_byte_3_0,
		backend_libs__bytecode_data__output_float_3_0_i26);
MR_def_label(backend_libs__bytecode_data__output_float_3_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("bytecode_data.m", 15);
	MR_r2 = (MR_Word) MR_string_const("output_byte: byte does not fit in eight bits", 44);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		backend_libs__bytecode_data__output_float_3_0_i25);
MR_def_label(backend_libs__bytecode_data__output_float_3_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(backend_libs__bytecode_data__output_byte_3_0,
		backend_libs__bytecode_data__output_float_3_0_i26);
MR_def_label(backend_libs__bytecode_data__output_float_3_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(backend_libs__bytecode_data__output_byte_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(backend_libs__bytecode_data_module13)
	MR_init_entry1(backend_libs__bytecode_data__float_to_byte_list_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__backend_libs__bytecode_data__float_to_byte_list_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8, MR_tempr9;
	{
	MR_Float	FloatVal;
	MR_Integer	B0;
	MR_Integer	B1;
	MR_Integer	B2;
	MR_Integer	B3;
	MR_Integer	B4;
	MR_Integer	B5;
	MR_Integer	B6;
	MR_Integer	B7;
#define	MR_PROC_LABEL	mercury__backend_libs__bytecode_data__float_to_byte_list_2_0
	FloatVal = MR_word_to_float(MR_r1);
	MR_OBTAIN_GLOBAL_LOCK("float_to_float64_bytes");
{
#line 235 "bytecode_data.m"

    {
        MR_Float64  float64;
        unsigned char   *raw_mem_p;

        float64 = (MR_Float64) FloatVal;
        raw_mem_p = (unsigned char *) &float64;

        #if defined(MR_BIG_ENDIAN)
            B0 = raw_mem_p[0];
            B1 = raw_mem_p[1];
            B2 = raw_mem_p[2];
            B3 = raw_mem_p[3];
            B4 = raw_mem_p[4];
            B5 = raw_mem_p[5];
            B6 = raw_mem_p[6];
            B7 = raw_mem_p[7];
        #elif defined(MR_LITTLE_ENDIAN)
            B7 = raw_mem_p[0];
            B6 = raw_mem_p[1];
            B5 = raw_mem_p[2];
            B4 = raw_mem_p[3];
            B3 = raw_mem_p[4];
            B2 = raw_mem_p[5];
            B1 = raw_mem_p[6];
            B0 = raw_mem_p[7];
        #else
            #error  "Weird-endian architecture"
        #endif
    }
;}
#line 1057 "backend_libs.bytecode_data.c"
	MR_RELEASE_GLOBAL_LOCK("float_to_float64_bytes");
	MR_tempr1 = B0;
	MR_tempr2 = B1;
	MR_tempr3 = B2;
	MR_tempr4 = B3;
	MR_tempr5 = B4;
	MR_tempr6 = B5;
	MR_tempr7 = B6;
	MR_tempr8 = B7;
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_tempr9, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr9, 0) = MR_tempr8;
	MR_tfield(1, MR_tempr9, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr8, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr8, 0) = MR_tempr7;
	MR_tfield(1, MR_tempr8, 1) = MR_tempr9;
	MR_tag_alloc_heap(MR_tempr7, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr7, 0) = MR_tempr6;
	MR_tfield(1, MR_tempr7, 1) = MR_tempr8;
	MR_tag_alloc_heap(MR_tempr6, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr6, 0) = MR_tempr5;
	MR_tfield(1, MR_tempr6, 1) = MR_tempr7;
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr5, 0) = MR_tempr4;
	MR_tfield(1, MR_tempr5, 1) = MR_tempr6;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_tfield(1, MR_r1, 1) = MR_tempr3;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__f_105_110_116_95_95_62_62_2_0);
MR_decl_entry(fn__int__mod_2_0);

MR_BEGIN_MODULE(backend_libs__bytecode_data_module14)
	MR_init_entry1(backend_libs__bytecode_data__output_int_bytes__ho3_5_0);
	MR_init_label5(backend_libs__bytecode_data__output_int_bytes__ho3_5_0,13,3,4,5,15)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(backend_libs__bytecode_data__output_int_bytes__ho3_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(backend_libs__bytecode_data__output_int_bytes__ho3_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_LT(MR_r1,0)) {
		MR_GOTO_LAB(backend_libs__bytecode_data__output_int_bytes__ho3_5_0_i15);
	}
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tempr1;
	MR_r2 = ((MR_Integer) MR_sv(1) * (MR_Integer) 8);
	}
	MR_np_call_localret_ent(fn__f_105_110_116_95_95_62_62_2_0,
		backend_libs__bytecode_data__output_int_bytes__ho3_5_0_i3);
MR_def_label(backend_libs__bytecode_data__output_int_bytes__ho3_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 256;
	MR_np_call_localret_ent(fn__int__mod_2_0,
		backend_libs__bytecode_data__output_int_bytes__ho3_5_0_i4);
MR_def_label(backend_libs__bytecode_data__output_int_bytes__ho3_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = ((MR_Integer) MR_sv(1) - (MR_Integer) 1);
	MR_np_call_localret_ent(io__write_byte_3_0,
		backend_libs__bytecode_data__output_int_bytes__ho3_5_0_i5);
MR_def_label(backend_libs__bytecode_data__output_int_bytes__ho3_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(backend_libs__bytecode_data__output_int_bytes__ho3_5_0_i13);
MR_def_label(backend_libs__bytecode_data__output_int_bytes__ho3_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(backend_libs__bytecode_data_module15)
	MR_init_entry1(backend_libs__bytecode_data__output_padding_zeros__ho4_4_0);
	MR_init_label3(backend_libs__bytecode_data__output_padding_zeros__ho4_4_0,11,3,13)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(backend_libs__bytecode_data__output_padding_zeros__ho4_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
MR_def_label(backend_libs__bytecode_data__output_padding_zeros__ho4_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_LE(MR_r1,0)) {
		MR_GOTO_LAB(backend_libs__bytecode_data__output_padding_zeros__ho4_4_0_i13);
	}
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_np_call_localret_ent(io__write_byte_3_0,
		backend_libs__bytecode_data__output_padding_zeros__ho4_4_0_i3);
MR_def_label(backend_libs__bytecode_data__output_padding_zeros__ho4_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_sv(1) - (MR_Integer) 1);
	MR_succip_word = MR_sv(2);
	MR_GOTO_LAB(backend_libs__bytecode_data__output_padding_zeros__ho4_4_0_i11);
MR_def_label(backend_libs__bytecode_data__output_padding_zeros__ho4_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__cons_3_0);

MR_BEGIN_MODULE(backend_libs__bytecode_data_module16)
	MR_init_entry1(backend_libs__bytecode_data__output_int_bytes__ho5_5_0);
	MR_init_label5(backend_libs__bytecode_data__output_int_bytes__ho5_5_0,13,3,4,5,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(backend_libs__bytecode_data__output_int_bytes__ho5_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(backend_libs__bytecode_data__output_int_bytes__ho5_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_LT(MR_r1,0)) {
		MR_GOTO_LAB(backend_libs__bytecode_data__output_int_bytes__ho5_5_0_i2);
	}
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_r3;
	MR_r1 = MR_tempr1;
	MR_r2 = ((MR_Integer) MR_sv(1) * (MR_Integer) 8);
	}
	MR_np_call_localret_ent(fn__f_105_110_116_95_95_62_62_2_0,
		backend_libs__bytecode_data__output_int_bytes__ho5_5_0_i3);
MR_def_label(backend_libs__bytecode_data__output_int_bytes__ho5_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 256;
	MR_np_call_localret_ent(fn__int__mod_2_0,
		backend_libs__bytecode_data__output_int_bytes__ho5_5_0_i4);
MR_def_label(backend_libs__bytecode_data__output_int_bytes__ho5_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = ((MR_Integer) MR_sv(1) - (MR_Integer) 1);
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(list__cons_3_0,
		backend_libs__bytecode_data__output_int_bytes__ho5_5_0_i5);
MR_def_label(backend_libs__bytecode_data__output_int_bytes__ho5_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(backend_libs__bytecode_data__output_int_bytes__ho5_5_0_i13);
MR_def_label(backend_libs__bytecode_data__output_int_bytes__ho5_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(backend_libs__bytecode_data_module17)
	MR_init_entry1(backend_libs__bytecode_data__output_padding_zeros__ho6_4_0);
	MR_init_label3(backend_libs__bytecode_data__output_padding_zeros__ho6_4_0,11,3,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(backend_libs__bytecode_data__output_padding_zeros__ho6_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
MR_def_label(backend_libs__bytecode_data__output_padding_zeros__ho6_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_LE(MR_r1,0)) {
		MR_GOTO_LAB(backend_libs__bytecode_data__output_padding_zeros__ho6_4_0_i2);
	}
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r3 = MR_r2;
	MR_r2 = (MR_Integer) 0;
	MR_np_call_localret_ent(list__cons_3_0,
		backend_libs__bytecode_data__output_padding_zeros__ho6_4_0_i3);
MR_def_label(backend_libs__bytecode_data__output_padding_zeros__ho6_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = ((MR_Integer) MR_sv(1) - (MR_Integer) 1);
	MR_succip_word = MR_sv(2);
	MR_GOTO_LAB(backend_libs__bytecode_data__output_padding_zeros__ho6_4_0_i11);
MR_def_label(backend_libs__bytecode_data__output_padding_zeros__ho6_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__backend_libs__bytecode_data_maybe_bunch_0(void)
{
	backend_libs__bytecode_data_module0();
	backend_libs__bytecode_data_module1();
	backend_libs__bytecode_data_module2();
	backend_libs__bytecode_data_module3();
	backend_libs__bytecode_data_module4();
	backend_libs__bytecode_data_module5();
	backend_libs__bytecode_data_module6();
	backend_libs__bytecode_data_module7();
	backend_libs__bytecode_data_module8();
	backend_libs__bytecode_data_module9();
	backend_libs__bytecode_data_module10();
	backend_libs__bytecode_data_module11();
	backend_libs__bytecode_data_module12();
	backend_libs__bytecode_data_module13();
	backend_libs__bytecode_data_module14();
	backend_libs__bytecode_data_module15();
	backend_libs__bytecode_data_module16();
	backend_libs__bytecode_data_module17();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__backend_libs__bytecode_data__init(void);
void mercury__backend_libs__bytecode_data__init_type_tables(void);
void mercury__backend_libs__bytecode_data__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__backend_libs__bytecode_data__write_out_proc_statics(FILE *fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__backend_libs__bytecode_data__init_complexity_procs(void);
#endif

void mercury__backend_libs__bytecode_data__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__backend_libs__bytecode_data_maybe_bunch_0();
	mercury__backend_libs__bytecode_data__init_debugger();
}

void mercury__backend_libs__bytecode_data__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}


void mercury__backend_libs__bytecode_data__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__backend_libs__bytecode_data__write_out_proc_statics(FILE *fp)
{
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__backend_libs__bytecode_data__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
