/*
** Automatically generated from `version_bitmap.m'
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
INIT mercury__version_bitmap__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 33 "version_array.int"
#include "version_array.mh"

#line 27 "version_bitmap.c"
#line 136 "io.int2"
#include "io.mh"

#line 31 "version_bitmap.c"
#line 144 "io.int2"
#include "string.mh"

#line 35 "version_bitmap.c"
#line 29 "bitmap.int2"
#include "bitmap.mh"

#line 39 "version_bitmap.c"
#line 28 "time.int2"
#include "time.mh"

#line 43 "version_bitmap.c"
#line 21 "stm_builtin.int2"
#include "stm_builtin.mh"

#line 47 "version_bitmap.c"
#line 31 "array.int2"
#include "array.mh"

#line 51 "version_bitmap.c"
#line 3 "list.opt"
#include "list.mh"

#line 55 "version_bitmap.c"
#line 12 "pretty_printer.opt"
#include "pretty_printer.mh"

#line 59 "version_bitmap.c"
#line 4 "char.opt"
#include "char.mh"

#line 63 "version_bitmap.c"
#line 3 "construct.opt"
#include "construct.mh"

#line 67 "version_bitmap.c"
#line 109 "rtti_implementation.opt"
#include "rtti_implementation.mh"

#line 71 "version_bitmap.c"
#line 3 "float.opt"
#include "float.mh"

#line 75 "version_bitmap.c"
#line 3 "math.opt"
#include "math.mh"

#line 79 "version_bitmap.c"
#line 150 "io.opt"
#include "dir.mh"

#line 83 "version_bitmap.c"
#line 160 "io.opt"
#include "table_builtin.mh"

#line 87 "version_bitmap.c"
#line 6 "type_desc.opt"
#include "type_desc.mh"

#line 91 "version_bitmap.c"
#line 4 "builtin.opt"
#include "builtin.mh"

#line 95 "version_bitmap.c"
#line 14 "exception.opt"
#include "exception.mh"

#line 99 "version_bitmap.c"
#line 23 "store.opt"
#include "store.mh"

#line 103 "version_bitmap.c"
#line 4 "int.opt"
#include "int.mh"

#line 107 "version_bitmap.c"
#line 9 "private_builtin.opt"
#include "private_builtin.mh"

#line 111 "version_bitmap.c"
#line 112 "version_bitmap.c"
#include "version_bitmap.mh"

#line 115 "version_bitmap.c"
#line 116 "version_bitmap.c"
#ifndef VERSION_BITMAP_DECL_GUARD
#define VERSION_BITMAP_DECL_GUARD

#line 120 "version_bitmap.c"
#line 121 "version_bitmap.c"

#endif
#line 124 "version_bitmap.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

struct mercury_type_0 {
	MR_Word * f1[2];
};
MR_STATIC_LINKAGE const struct mercury_type_0 mercury_common_0[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_version_bitmap__type_ctor_info_version_bitmap_0;
MR_decl_label6(version_bitmap__is_clear_2_0, 4,8,10,14,22,2)
MR_decl_label6(version_bitmap__is_set_2_0, 4,8,12,16,24,2)
MR_decl_label2(fn__version_bitmap__bit_2_0, 3,2)
MR_decl_label1(fn__f_118_101_114_115_105_111_110_95_98_105_116_109_97_112_95_95_98_105_116_32_58_61_3_0, 3)
MR_decl_label6(fn__version_bitmap__clear_2_0, 4,8,10,14,15,2)
MR_decl_label6(fn__version_bitmap__clear_filler_bits_1_0, 3,7,10,14,15,8)
MR_decl_label3(fn__version_bitmap__complement_1_0, 3,7,8)
MR_decl_label6(fn__version_bitmap__complement_2_2_0, 32,2,4,8,34,10)
MR_decl_label7(fn__version_bitmap__difference_2_0, 4,8,10,14,16,20,2)
MR_decl_label6(fn__version_bitmap__flip_2_0, 4,8,10,14,15,2)
MR_decl_label2(fn__version_bitmap__get_2_0, 3,2)
MR_decl_label7(fn__version_bitmap__intersect_2_0, 4,8,10,14,16,20,2)
MR_decl_label7(fn__version_bitmap__new_2_0, 39,5,4,6,7,38,8)
MR_decl_label1(fn__version_bitmap__num_bits_1_0, 2)
MR_decl_label8(fn__version_bitmap__resize_3_0, 83,5,4,6,7,9,13,14)
MR_decl_label7(fn__version_bitmap__resize_3_0, 15,17,21,23,27,82,28)
MR_decl_label6(fn__version_bitmap__set_2_0, 4,8,10,14,15,2)
MR_decl_label7(fn__version_bitmap__union_2_0, 4,8,10,14,16,20,2)
MR_decl_label7(fn__version_bitmap__xor_2_0, 4,8,10,14,16,20,2)
MR_decl_label8(fn__version_bitmap__zip__ho1_4_0, 44,4,8,10,14,45,16,2)
MR_decl_label8(fn__version_bitmap__zip__ho2_4_0, 44,4,8,10,14,45,16,2)
MR_decl_label8(fn__version_bitmap__zip__ho3_4_0, 44,4,8,10,14,45,16,2)
MR_decl_label8(fn__version_bitmap__zip__ho4_4_0, 44,4,8,10,14,45,16,2)
MR_def_extern_entry(fn__version_bitmap__num_bits_1_0)
MR_def_extern_entry(fn__version_bitmap__clear_filler_bits_1_0)
MR_def_extern_entry(fn__version_bitmap__new_2_0)
MR_def_extern_entry(fn__version_bitmap__set_2_0)
MR_def_extern_entry(version_bitmap__set_3_0)
MR_def_extern_entry(fn__version_bitmap__clear_2_0)
MR_def_extern_entry(version_bitmap__clear_3_0)
MR_def_extern_entry(fn__version_bitmap__flip_2_0)
MR_def_extern_entry(version_bitmap__flip_3_0)
MR_def_extern_entry(version_bitmap__is_set_2_0)
MR_def_extern_entry(version_bitmap__is_clear_2_0)
MR_def_extern_entry(fn__version_bitmap__bit_2_0)
MR_def_extern_entry(fn__f_118_101_114_115_105_111_110_95_98_105_116_109_97_112_95_95_98_105_116_32_58_61_3_0)
MR_def_extern_entry(fn__version_bitmap__copy_1_0)
MR_def_extern_entry(fn__version_bitmap__complement_2_2_0)
MR_def_extern_entry(fn__version_bitmap__complement_1_0)
MR_def_extern_entry(fn__version_bitmap__union_2_0)
MR_def_extern_entry(fn__version_bitmap__intersect_2_0)
MR_def_extern_entry(fn__version_bitmap__difference_2_0)
MR_def_extern_entry(fn__version_bitmap__xor_2_0)
MR_def_extern_entry(fn__version_bitmap__resize_3_0)
MR_def_extern_entry(version_bitmap__resize_4_0)
MR_def_extern_entry(fn__version_bitmap__unsafe_rewind_1_0)
MR_def_extern_entry(version_bitmap__unsafe_rewind_2_0)
MR_def_extern_entry(fn__version_bitmap__get_2_0)
MR_def_extern_entry(__Unify___version_bitmap__version_bitmap_0_0)
MR_def_extern_entry(__Compare___version_bitmap__version_bitmap_0_0)
MR_decl_static(fn__version_bitmap__zip__ho1_4_0)
MR_decl_static(fn__version_bitmap__zip__ho2_4_0)
MR_decl_static(fn__version_bitmap__zip__ho3_4_0)
MR_decl_static(fn__version_bitmap__zip__ho4_4_0)
MR_decl_static(fn__f_118_101_114_115_105_111_110_95_98_105_116_109_97_112_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0)

extern const MR_TypeCtorInfo_Struct mercury_data_version_array__type_ctor_info_version_array_1;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
static const struct mercury_type_0 mercury_common_0[1] =
{
{
{
MR_CTOR1_ADDR(version_array, version_array),
MR_INT_CTOR_ADDR
}
},
};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_version_array__ti_version_array_1builtin__type_ctor_info_int_0 = {
	&mercury_data_version_array__type_ctor_info_version_array_1,
{	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_int_0
}};

const MR_TypeCtorInfo_Struct mercury_data_version_bitmap__type_ctor_info_version_bitmap_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___version_bitmap__version_bitmap_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___version_bitmap__version_bitmap_0_0)),
	"version_bitmap",
	"version_bitmap",
	{ 0 },
	{ (void *)&mercury_data_version_array__ti_version_array_1builtin__type_ctor_info_int_0 },
	-1,
	0,
	NULL
};

MR_decl_entry(fn__require__func_error_1_0);

MR_BEGIN_MODULE(version_bitmap_module0)
	MR_init_entry1(fn__version_bitmap__num_bits_1_0);
	MR_init_label1(fn__version_bitmap__num_bits_1_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__version_bitmap__num_bits_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	struct ML_va *	VA;
	MR_Integer	I;
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__fn__version_bitmap__num_bits_1_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_r1, VA);
	I = (MR_Integer) 0;
	MR_OBTAIN_GLOBAL_LOCK("get_if_in_range");
{
#line 179 "version_array.opt"

    SUCCESS_INDICATOR = ML_va_get(VA, I, &X);
;}
#line 259 "version_bitmap.c"
	MR_RELEASE_GLOBAL_LOCK("get_if_in_range");
if (!MercurySuccessIndicator) MR_GOTO_LAB(fn__version_bitmap__num_bits_1_0_i2);
	MR_r1 = X;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_proceed();
MR_def_label(fn__version_bitmap__num_bits_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_string_const("version_array.elem: index out of range", 38);
	MR_np_tailcall_ent(fn__require__func_error_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_bitmap_module1)
	MR_init_entry1(fn__version_bitmap__clear_filler_bits_1_0);
	MR_init_label6(fn__version_bitmap__clear_filler_bits_1_0,3,7,10,14,15,8)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__version_bitmap__clear_filler_bits_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	struct ML_va *	VA;
	MR_Integer	I;
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__fn__version_bitmap__clear_filler_bits_1_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_r1, VA);
	I = (MR_Integer) 0;
	MR_OBTAIN_GLOBAL_LOCK("get_if_in_range");
{
#line 179 "version_array.opt"

    SUCCESS_INDICATOR = ML_va_get(VA, I, &X);
;}
#line 309 "version_bitmap.c"
	MR_RELEASE_GLOBAL_LOCK("get_if_in_range");
if (!MercurySuccessIndicator) MR_GOTO_LAB(fn__version_bitmap__clear_filler_bits_1_0_i3);
	MR_r2 = X;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_GOTO_LAB(fn__version_bitmap__clear_filler_bits_1_0_i7);
MR_def_label(fn__version_bitmap__clear_filler_bits_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_string_const("version_array.elem: index out of range", 38);
	MR_np_call_localret_ent(fn__require__func_error_1_0,
		fn__version_bitmap__clear_filler_bits_1_0_i7);
MR_def_label(fn__version_bitmap__clear_filler_bits_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_LE(MR_r1,0)) {
		MR_GOTO_LAB(fn__version_bitmap__clear_filler_bits_1_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r1;
	MR_r2 = ((MR_Integer) MR_tempr2 - (MR_Integer) 1);
	{
	MR_Integer	Int;
	MR_Integer	Div;
#define	MR_PROC_LABEL	mercury__fn__version_bitmap__clear_filler_bits_1_0
	Int = MR_r2;
{
#line 235 "int.opt"

    Div = Int / ML_BITS_PER_INT;
;}
#line 346 "version_bitmap.c"
	MR_r2 = Div;
#undef	MR_PROC_LABEL
	}
	MR_r3 = ((MR_Integer) MR_tempr2 - (MR_Integer) 1);
	{
	MR_Integer	Int;
	MR_Integer	Rem;
#define	MR_PROC_LABEL	mercury__fn__version_bitmap__clear_filler_bits_1_0
	Int = MR_r3;
{
#line 241 "int.opt"

    Rem = Int % ML_BITS_PER_INT;
;}
#line 361 "version_bitmap.c"
	MR_r3 = Rem;
#undef	MR_PROC_LABEL
	}
	MR_sv(2) = ((MR_Integer) 1 + (MR_Integer) MR_r2);
	{
	struct ML_va *	VA;
	MR_Integer	I;
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__fn__version_bitmap__clear_filler_bits_1_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_sv(1), VA);
	I = MR_sv(2);
	MR_OBTAIN_GLOBAL_LOCK("get_if_in_range");
{
#line 179 "version_array.opt"

    SUCCESS_INDICATOR = ML_va_get(VA, I, &X);
;}
#line 382 "version_bitmap.c"
	MR_RELEASE_GLOBAL_LOCK("get_if_in_range");
if (!MercurySuccessIndicator) MR_GOTO_LAB(fn__version_bitmap__clear_filler_bits_1_0_i10);
	MR_r2 = X;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_tempr1 = ((MR_Integer) 1 << (MR_Integer) MR_r3);
	MR_r4 = MR_tempr1;
	MR_r1 = ((MR_Integer) MR_r2 & ((MR_Integer) MR_tempr1 | ((MR_Integer) MR_tempr1 - (MR_Integer) 1)));
	MR_GOTO_LAB(fn__version_bitmap__clear_filler_bits_1_0_i14);
	}
MR_def_label(fn__version_bitmap__clear_filler_bits_1_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_string_const("version_array.elem: index out of range", 38);
	MR_np_call_localret_ent(fn__require__func_error_1_0,
		fn__version_bitmap__clear_filler_bits_1_0_i14);
MR_def_label(fn__version_bitmap__clear_filler_bits_1_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	struct ML_va *	VA0;
	MR_Integer	I;
	MR_Word	X;
	struct ML_va *	VA;
#define	MR_PROC_LABEL	mercury__fn__version_bitmap__clear_filler_bits_1_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_sv(1), VA0);
	I = MR_sv(2);
	X = MR_r1;
	MR_OBTAIN_GLOBAL_LOCK("set_if_in_range");
{
#line 182 "version_array.opt"

    SUCCESS_INDICATOR = ML_va_set(VA0, I, X, &VA);
;}
#line 421 "version_bitmap.c"
	MR_RELEASE_GLOBAL_LOCK("set_if_in_range");
if (!MercurySuccessIndicator) MR_GOTO_LAB(fn__version_bitmap__clear_filler_bits_1_0_i15);
	MR_MAYBE_BOX_FOREIGN_TYPE(struct ML_va *, VA, MR_r1);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_decr_sp_and_return(3);
MR_def_label(fn__version_bitmap__clear_filler_bits_1_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = (MR_Word) MR_string_const("version_array.\'elem :=\': index out of range", 43);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(fn__require__func_error_1_0);
MR_def_label(fn__version_bitmap__clear_filler_bits_1_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_exception__type_ctor_info_software_error_0;
MR_decl_entry(exception__throw_1_0);

MR_BEGIN_MODULE(version_bitmap_module2)
	MR_init_entry1(fn__version_bitmap__new_2_0);
	MR_init_label7(fn__version_bitmap__new_2_0,39,5,4,6,7,38,8)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__version_bitmap__new_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_GE(MR_r1,0)) {
		MR_GOTO_LAB(fn__version_bitmap__new_2_0_i39);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(exception, software_error);
	MR_r2 = (MR_Word) MR_string_const("version_bitmap.new: negative size", 33);
	MR_np_tailcall_ent(exception__throw_1_0);
MR_def_label(fn__version_bitmap__new_2_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(fn__version_bitmap__new_2_0_i5);
	}
	MR_r2 = (MR_Integer) 0;
	MR_GOTO_LAB(fn__version_bitmap__new_2_0_i4);
MR_def_label(fn__version_bitmap__new_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) -1;
MR_def_label(fn__version_bitmap__new_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_LE(MR_r1,0)) {
		MR_GOTO_LAB(fn__version_bitmap__new_2_0_i6);
	}
	{
	MR_Integer	Int;
	MR_Integer	Div;
#define	MR_PROC_LABEL	mercury__fn__version_bitmap__new_2_0
	Int = MR_r1;
{
#line 235 "int.opt"

    Div = Int / ML_BITS_PER_INT;
;}
#line 494 "version_bitmap.c"
	MR_r3 = Div;
#undef	MR_PROC_LABEL
	}
	MR_r3 = ((MR_Integer) 1 + ((MR_Integer) 1 + (MR_Integer) MR_r3));
	MR_GOTO_LAB(fn__version_bitmap__new_2_0_i7);
MR_def_label(fn__version_bitmap__new_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = (MR_Integer) 1;
MR_def_label(fn__version_bitmap__new_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	{
	MR_Integer	N;
	MR_Word	X;
	struct ML_va *	VA;
#define	MR_PROC_LABEL	mercury__fn__version_bitmap__new_2_0
	N = MR_r3;
	X = MR_r2;
	MR_OBTAIN_GLOBAL_LOCK("new");
{
#line 64 "version_array.opt"

    MR_Integer  i;

    VA = MR_GC_NEW(struct ML_va);
    VA->index            = -1;
    VA->value            = (MR_Word) NULL;
    VA->rest.array       = (MR_ArrayPtr) MR_GC_NEW_ARRAY(MR_Word, N + 1);
    VA->rest.array->size = N;

    for (i = 0; i < N; i++) {
        VA->rest.array->elements[i] = X;
    }
;}
#line 530 "version_bitmap.c"
	MR_RELEASE_GLOBAL_LOCK("new");
	MR_MAYBE_BOX_FOREIGN_TYPE(struct ML_va *, VA, MR_tempr1);
#undef	MR_PROC_LABEL
	}
	{
	struct ML_va *	VA0;
	MR_Integer	I;
	MR_Word	X;
	struct ML_va *	VA;
#define	MR_PROC_LABEL	mercury__fn__version_bitmap__new_2_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_tempr1, VA0);
	I = (MR_Integer) 0;
	X = MR_r1;
	MR_OBTAIN_GLOBAL_LOCK("set_if_in_range");
{
#line 182 "version_array.opt"

    SUCCESS_INDICATOR = ML_va_set(VA0, I, X, &VA);
;}
#line 553 "version_bitmap.c"
	MR_RELEASE_GLOBAL_LOCK("set_if_in_range");
if (!MercurySuccessIndicator) MR_GOTO_LAB(fn__version_bitmap__new_2_0_i8);
	MR_MAYBE_BOX_FOREIGN_TYPE(struct ML_va *, VA, MR_r1);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	}
MR_def_label(fn__version_bitmap__new_2_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(fn__version_bitmap__clear_filler_bits_1_0);
MR_def_label(fn__version_bitmap__new_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = (MR_Word) MR_string_const("version_array.\'elem :=\': index out of range", 43);
	MR_np_call_localret_ent(fn__require__func_error_1_0,
		fn__version_bitmap__new_2_0_i38);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__exception__throw_1_0);

MR_BEGIN_MODULE(version_bitmap_module3)
	MR_init_entry1(fn__version_bitmap__set_2_0);
	MR_init_label6(fn__version_bitmap__set_2_0,4,8,10,14,15,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__version_bitmap__set_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if (((MR_Integer) 0 > (MR_Integer) MR_r2)) {
		MR_GOTO_LAB(fn__version_bitmap__set_2_0_i2);
	}
	{
	struct ML_va *	VA;
	MR_Integer	I;
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__fn__version_bitmap__set_2_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_r1, VA);
	I = (MR_Integer) 0;
	MR_OBTAIN_GLOBAL_LOCK("get_if_in_range");
{
#line 179 "version_array.opt"

    SUCCESS_INDICATOR = ML_va_get(VA, I, &X);
;}
#line 613 "version_bitmap.c"
	MR_RELEASE_GLOBAL_LOCK("get_if_in_range");
if (!MercurySuccessIndicator) MR_GOTO_LAB(fn__version_bitmap__set_2_0_i4);
	MR_r3 = X;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = MR_r3;
	MR_GOTO_LAB(fn__version_bitmap__set_2_0_i8);
MR_def_label(fn__version_bitmap__set_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_sv(2) = MR_r2;
	MR_r2 = (MR_Word) MR_string_const("version_array.elem: index out of range", 38);
	MR_np_call_localret_ent(fn__require__func_error_1_0,
		fn__version_bitmap__set_2_0_i8);
MR_def_label(fn__version_bitmap__set_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_sv(2) >= (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(fn__version_bitmap__set_2_0_i2);
	}
	{
	MR_Integer	Int;
	MR_Integer	Div;
#define	MR_PROC_LABEL	mercury__fn__version_bitmap__set_2_0
	Int = MR_sv(2);
{
#line 235 "int.opt"

    Div = Int / ML_BITS_PER_INT;
;}
#line 648 "version_bitmap.c"
	MR_r2 = Div;
#undef	MR_PROC_LABEL
	}
	MR_r3 = ((MR_Integer) 1 + (MR_Integer) MR_r2);
	{
	struct ML_va *	VA;
	MR_Integer	I;
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__fn__version_bitmap__set_2_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_sv(1), VA);
	I = MR_r3;
	MR_OBTAIN_GLOBAL_LOCK("get_if_in_range");
{
#line 179 "version_array.opt"

    SUCCESS_INDICATOR = ML_va_get(VA, I, &X);
;}
#line 669 "version_bitmap.c"
	MR_RELEASE_GLOBAL_LOCK("get_if_in_range");
if (!MercurySuccessIndicator) MR_GOTO_LAB(fn__version_bitmap__set_2_0_i10);
	MR_r2 = X;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_r2;
	MR_GOTO_LAB(fn__version_bitmap__set_2_0_i14);
MR_def_label(fn__version_bitmap__set_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_string_const("version_array.elem: index out of range", 38);
	MR_np_call_localret_ent(fn__require__func_error_1_0,
		fn__version_bitmap__set_2_0_i14);
MR_def_label(fn__version_bitmap__set_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	{
	MR_Integer	Int;
	MR_Integer	Rem;
#define	MR_PROC_LABEL	mercury__fn__version_bitmap__set_2_0
	Int = MR_sv(2);
{
#line 241 "int.opt"

    Rem = Int % ML_BITS_PER_INT;
;}
#line 699 "version_bitmap.c"
	MR_tempr1 = Rem;
#undef	MR_PROC_LABEL
	}
	{
	MR_Integer	Int;
	MR_Integer	Div;
#define	MR_PROC_LABEL	mercury__fn__version_bitmap__set_2_0
	Int = MR_sv(2);
{
#line 235 "int.opt"

    Div = Int / ML_BITS_PER_INT;
;}
#line 713 "version_bitmap.c"
	MR_tempr2 = Div;
#undef	MR_PROC_LABEL
	}
	MR_tempr3 = ((MR_Integer) 1 + (MR_Integer) MR_tempr2);
	MR_tempr2 = ((MR_Integer) MR_r1 | ((MR_Integer) 1 << (MR_Integer) MR_tempr1));
	{
	struct ML_va *	VA0;
	MR_Integer	I;
	MR_Word	X;
	struct ML_va *	VA;
#define	MR_PROC_LABEL	mercury__fn__version_bitmap__set_2_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_sv(1), VA0);
	I = MR_tempr3;
	X = MR_tempr2;
	MR_OBTAIN_GLOBAL_LOCK("set_if_in_range");
{
#line 182 "version_array.opt"

    SUCCESS_INDICATOR = ML_va_set(VA0, I, X, &VA);
;}
#line 737 "version_bitmap.c"
	MR_RELEASE_GLOBAL_LOCK("set_if_in_range");
if (!MercurySuccessIndicator) MR_GOTO_LAB(fn__version_bitmap__set_2_0_i15);
	MR_MAYBE_BOX_FOREIGN_TYPE(struct ML_va *, VA, MR_r1);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_decr_sp_and_return(3);
	}
MR_def_label(fn__version_bitmap__set_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = (MR_Word) MR_string_const("version_array.\'elem :=\': index out of range", 43);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(fn__require__func_error_1_0);
MR_def_label(fn__version_bitmap__set_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(exception, software_error);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = (MR_Word) MR_string_const("version_bitmap.set: out of range", 32);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(fn__exception__throw_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_bitmap_module4)
	MR_init_entry1(version_bitmap__set_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__version_bitmap__set_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_np_tailcall_ent(fn__version_bitmap__set_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_bitmap_module5)
	MR_init_entry1(fn__version_bitmap__clear_2_0);
	MR_init_label6(fn__version_bitmap__clear_2_0,4,8,10,14,15,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__version_bitmap__clear_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if (((MR_Integer) 0 > (MR_Integer) MR_r2)) {
		MR_GOTO_LAB(fn__version_bitmap__clear_2_0_i2);
	}
	{
	struct ML_va *	VA;
	MR_Integer	I;
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__fn__version_bitmap__clear_2_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_r1, VA);
	I = (MR_Integer) 0;
	MR_OBTAIN_GLOBAL_LOCK("get_if_in_range");
{
#line 179 "version_array.opt"

    SUCCESS_INDICATOR = ML_va_get(VA, I, &X);
;}
#line 825 "version_bitmap.c"
	MR_RELEASE_GLOBAL_LOCK("get_if_in_range");
if (!MercurySuccessIndicator) MR_GOTO_LAB(fn__version_bitmap__clear_2_0_i4);
	MR_r3 = X;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = MR_r3;
	MR_GOTO_LAB(fn__version_bitmap__clear_2_0_i8);
MR_def_label(fn__version_bitmap__clear_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_sv(2) = MR_r2;
	MR_r2 = (MR_Word) MR_string_const("version_array.elem: index out of range", 38);
	MR_np_call_localret_ent(fn__require__func_error_1_0,
		fn__version_bitmap__clear_2_0_i8);
MR_def_label(fn__version_bitmap__clear_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_sv(2) >= (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(fn__version_bitmap__clear_2_0_i2);
	}
	{
	MR_Integer	Int;
	MR_Integer	Div;
#define	MR_PROC_LABEL	mercury__fn__version_bitmap__clear_2_0
	Int = MR_sv(2);
{
#line 235 "int.opt"

    Div = Int / ML_BITS_PER_INT;
;}
#line 860 "version_bitmap.c"
	MR_r2 = Div;
#undef	MR_PROC_LABEL
	}
	MR_r3 = ((MR_Integer) 1 + (MR_Integer) MR_r2);
	{
	struct ML_va *	VA;
	MR_Integer	I;
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__fn__version_bitmap__clear_2_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_sv(1), VA);
	I = MR_r3;
	MR_OBTAIN_GLOBAL_LOCK("get_if_in_range");
{
#line 179 "version_array.opt"

    SUCCESS_INDICATOR = ML_va_get(VA, I, &X);
;}
#line 881 "version_bitmap.c"
	MR_RELEASE_GLOBAL_LOCK("get_if_in_range");
if (!MercurySuccessIndicator) MR_GOTO_LAB(fn__version_bitmap__clear_2_0_i10);
	MR_r2 = X;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_r2;
	MR_GOTO_LAB(fn__version_bitmap__clear_2_0_i14);
MR_def_label(fn__version_bitmap__clear_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_string_const("version_array.elem: index out of range", 38);
	MR_np_call_localret_ent(fn__require__func_error_1_0,
		fn__version_bitmap__clear_2_0_i14);
MR_def_label(fn__version_bitmap__clear_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	{
	MR_Integer	Int;
	MR_Integer	Rem;
#define	MR_PROC_LABEL	mercury__fn__version_bitmap__clear_2_0
	Int = MR_sv(2);
{
#line 241 "int.opt"

    Rem = Int % ML_BITS_PER_INT;
;}
#line 911 "version_bitmap.c"
	MR_tempr1 = Rem;
#undef	MR_PROC_LABEL
	}
	{
	MR_Integer	Int;
	MR_Integer	Div;
#define	MR_PROC_LABEL	mercury__fn__version_bitmap__clear_2_0
	Int = MR_sv(2);
{
#line 235 "int.opt"

    Div = Int / ML_BITS_PER_INT;
;}
#line 925 "version_bitmap.c"
	MR_tempr2 = Div;
#undef	MR_PROC_LABEL
	}
	MR_tempr3 = ((MR_Integer) 1 + (MR_Integer) MR_tempr2);
	MR_tempr2 = ((MR_Integer) MR_r1 & ~(((MR_Integer) 1 << (MR_Integer) MR_tempr1)));
	{
	struct ML_va *	VA0;
	MR_Integer	I;
	MR_Word	X;
	struct ML_va *	VA;
#define	MR_PROC_LABEL	mercury__fn__version_bitmap__clear_2_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_sv(1), VA0);
	I = MR_tempr3;
	X = MR_tempr2;
	MR_OBTAIN_GLOBAL_LOCK("set_if_in_range");
{
#line 182 "version_array.opt"

    SUCCESS_INDICATOR = ML_va_set(VA0, I, X, &VA);
;}
#line 949 "version_bitmap.c"
	MR_RELEASE_GLOBAL_LOCK("set_if_in_range");
if (!MercurySuccessIndicator) MR_GOTO_LAB(fn__version_bitmap__clear_2_0_i15);
	MR_MAYBE_BOX_FOREIGN_TYPE(struct ML_va *, VA, MR_r1);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_decr_sp_and_return(3);
	}
MR_def_label(fn__version_bitmap__clear_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = (MR_Word) MR_string_const("version_array.\'elem :=\': index out of range", 43);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(fn__require__func_error_1_0);
MR_def_label(fn__version_bitmap__clear_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(exception, software_error);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = (MR_Word) MR_string_const("version_bitmap.clear: out of range", 34);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(fn__exception__throw_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_bitmap_module6)
	MR_init_entry1(version_bitmap__clear_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__version_bitmap__clear_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_np_tailcall_ent(fn__version_bitmap__clear_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_bitmap_module7)
	MR_init_entry1(fn__version_bitmap__flip_2_0);
	MR_init_label6(fn__version_bitmap__flip_2_0,4,8,10,14,15,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__version_bitmap__flip_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if (((MR_Integer) 0 > (MR_Integer) MR_r2)) {
		MR_GOTO_LAB(fn__version_bitmap__flip_2_0_i2);
	}
	{
	struct ML_va *	VA;
	MR_Integer	I;
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__fn__version_bitmap__flip_2_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_r1, VA);
	I = (MR_Integer) 0;
	MR_OBTAIN_GLOBAL_LOCK("get_if_in_range");
{
#line 179 "version_array.opt"

    SUCCESS_INDICATOR = ML_va_get(VA, I, &X);
;}
#line 1037 "version_bitmap.c"
	MR_RELEASE_GLOBAL_LOCK("get_if_in_range");
if (!MercurySuccessIndicator) MR_GOTO_LAB(fn__version_bitmap__flip_2_0_i4);
	MR_r3 = X;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = MR_r3;
	MR_GOTO_LAB(fn__version_bitmap__flip_2_0_i8);
MR_def_label(fn__version_bitmap__flip_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_sv(2) = MR_r2;
	MR_r2 = (MR_Word) MR_string_const("version_array.elem: index out of range", 38);
	MR_np_call_localret_ent(fn__require__func_error_1_0,
		fn__version_bitmap__flip_2_0_i8);
MR_def_label(fn__version_bitmap__flip_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_sv(2) >= (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(fn__version_bitmap__flip_2_0_i2);
	}
	{
	MR_Integer	Int;
	MR_Integer	Div;
#define	MR_PROC_LABEL	mercury__fn__version_bitmap__flip_2_0
	Int = MR_sv(2);
{
#line 235 "int.opt"

    Div = Int / ML_BITS_PER_INT;
;}
#line 1072 "version_bitmap.c"
	MR_r2 = Div;
#undef	MR_PROC_LABEL
	}
	MR_r3 = ((MR_Integer) 1 + (MR_Integer) MR_r2);
	{
	struct ML_va *	VA;
	MR_Integer	I;
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__fn__version_bitmap__flip_2_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_sv(1), VA);
	I = MR_r3;
	MR_OBTAIN_GLOBAL_LOCK("get_if_in_range");
{
#line 179 "version_array.opt"

    SUCCESS_INDICATOR = ML_va_get(VA, I, &X);
;}
#line 1093 "version_bitmap.c"
	MR_RELEASE_GLOBAL_LOCK("get_if_in_range");
if (!MercurySuccessIndicator) MR_GOTO_LAB(fn__version_bitmap__flip_2_0_i10);
	MR_r2 = X;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_r2;
	MR_GOTO_LAB(fn__version_bitmap__flip_2_0_i14);
MR_def_label(fn__version_bitmap__flip_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_string_const("version_array.elem: index out of range", 38);
	MR_np_call_localret_ent(fn__require__func_error_1_0,
		fn__version_bitmap__flip_2_0_i14);
MR_def_label(fn__version_bitmap__flip_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	{
	MR_Integer	Int;
	MR_Integer	Rem;
#define	MR_PROC_LABEL	mercury__fn__version_bitmap__flip_2_0
	Int = MR_sv(2);
{
#line 241 "int.opt"

    Rem = Int % ML_BITS_PER_INT;
;}
#line 1123 "version_bitmap.c"
	MR_tempr1 = Rem;
#undef	MR_PROC_LABEL
	}
	{
	MR_Integer	Int;
	MR_Integer	Div;
#define	MR_PROC_LABEL	mercury__fn__version_bitmap__flip_2_0
	Int = MR_sv(2);
{
#line 235 "int.opt"

    Div = Int / ML_BITS_PER_INT;
;}
#line 1137 "version_bitmap.c"
	MR_tempr2 = Div;
#undef	MR_PROC_LABEL
	}
	MR_tempr3 = ((MR_Integer) 1 + (MR_Integer) MR_tempr2);
	MR_tempr2 = ((MR_Integer) MR_r1 ^ ((MR_Integer) 1 << (MR_Integer) MR_tempr1));
	{
	struct ML_va *	VA0;
	MR_Integer	I;
	MR_Word	X;
	struct ML_va *	VA;
#define	MR_PROC_LABEL	mercury__fn__version_bitmap__flip_2_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_sv(1), VA0);
	I = MR_tempr3;
	X = MR_tempr2;
	MR_OBTAIN_GLOBAL_LOCK("set_if_in_range");
{
#line 182 "version_array.opt"

    SUCCESS_INDICATOR = ML_va_set(VA0, I, X, &VA);
;}
#line 1161 "version_bitmap.c"
	MR_RELEASE_GLOBAL_LOCK("set_if_in_range");
if (!MercurySuccessIndicator) MR_GOTO_LAB(fn__version_bitmap__flip_2_0_i15);
	MR_MAYBE_BOX_FOREIGN_TYPE(struct ML_va *, VA, MR_r1);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_decr_sp_and_return(3);
	}
MR_def_label(fn__version_bitmap__flip_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = (MR_Word) MR_string_const("version_array.\'elem :=\': index out of range", 43);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(fn__require__func_error_1_0);
MR_def_label(fn__version_bitmap__flip_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(exception, software_error);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = (MR_Word) MR_string_const("version_bitmap.flip: out of range", 33);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(fn__exception__throw_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_bitmap_module8)
	MR_init_entry1(version_bitmap__flip_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__version_bitmap__flip_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_np_tailcall_ent(fn__version_bitmap__flip_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_bitmap_module9)
	MR_init_entry1(version_bitmap__is_set_2_0);
	MR_init_label6(version_bitmap__is_set_2_0,4,8,12,16,24,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__version_bitmap__is_set_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if (((MR_Integer) 0 > (MR_Integer) MR_r2)) {
		MR_GOTO_LAB(version_bitmap__is_set_2_0_i2);
	}
	{
	struct ML_va *	VA;
	MR_Integer	I;
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__version_bitmap__is_set_2_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_r1, VA);
	I = (MR_Integer) 0;
	MR_OBTAIN_GLOBAL_LOCK("get_if_in_range");
{
#line 179 "version_array.opt"

    SUCCESS_INDICATOR = ML_va_get(VA, I, &X);
;}
#line 1249 "version_bitmap.c"
	MR_RELEASE_GLOBAL_LOCK("get_if_in_range");
if (!MercurySuccessIndicator) MR_GOTO_LAB(version_bitmap__is_set_2_0_i4);
	MR_r3 = X;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = MR_r3;
	MR_GOTO_LAB(version_bitmap__is_set_2_0_i8);
MR_def_label(version_bitmap__is_set_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_sv(2) = MR_r2;
	MR_r2 = (MR_Word) MR_string_const("version_array.elem: index out of range", 38);
	MR_np_call_localret_ent(fn__require__func_error_1_0,
		version_bitmap__is_set_2_0_i8);
MR_def_label(version_bitmap__is_set_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_sv(2) >= (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(version_bitmap__is_set_2_0_i2);
	}
	{
	MR_Integer	Int;
	MR_Integer	Div;
#define	MR_PROC_LABEL	mercury__version_bitmap__is_set_2_0
	Int = MR_sv(2);
{
#line 235 "int.opt"

    Div = Int / ML_BITS_PER_INT;
;}
#line 1284 "version_bitmap.c"
	MR_r1 = Div;
#undef	MR_PROC_LABEL
	}
	MR_r2 = ((MR_Integer) 1 + (MR_Integer) MR_r1);
	{
	struct ML_va *	VA;
	MR_Integer	I;
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__version_bitmap__is_set_2_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_sv(1), VA);
	I = MR_r2;
	MR_OBTAIN_GLOBAL_LOCK("get_if_in_range");
{
#line 179 "version_array.opt"

    SUCCESS_INDICATOR = ML_va_get(VA, I, &X);
;}
#line 1305 "version_bitmap.c"
	MR_RELEASE_GLOBAL_LOCK("get_if_in_range");
if (!MercurySuccessIndicator) MR_GOTO_LAB(version_bitmap__is_set_2_0_i12);
	MR_r1 = X;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_GOTO_LAB(version_bitmap__is_set_2_0_i16);
MR_def_label(version_bitmap__is_set_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_string_const("version_array.elem: index out of range", 38);
	MR_np_call_localret_ent(fn__require__func_error_1_0,
		version_bitmap__is_set_2_0_i16);
MR_def_label(version_bitmap__is_set_2_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_Integer	Int;
	MR_Integer	Rem;
#define	MR_PROC_LABEL	mercury__version_bitmap__is_set_2_0
	Int = MR_sv(2);
{
#line 241 "int.opt"

    Rem = Int % ML_BITS_PER_INT;
;}
#line 1334 "version_bitmap.c"
	MR_tempr1 = Rem;
#undef	MR_PROC_LABEL
	}
	MR_tempr2 = ((MR_Integer) MR_r1 & ((MR_Integer) 1 << (MR_Integer) MR_tempr1));
	MR_r1 = ((MR_Integer) MR_tempr2 != (MR_Integer) 0);
	MR_decr_sp_and_return(3);
	}
MR_def_label(version_bitmap__is_set_2_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(version_bitmap__is_set_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(exception, software_error);
	MR_r2 = (MR_Word) MR_string_const("version_bitmap.is_set: out of range", 35);
	MR_np_call_localret_ent(exception__throw_1_0,
		version_bitmap__is_set_2_0_i24);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_bitmap_module10)
	MR_init_entry1(version_bitmap__is_clear_2_0);
	MR_init_label6(version_bitmap__is_clear_2_0,4,8,10,14,22,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__version_bitmap__is_clear_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if (((MR_Integer) 0 > (MR_Integer) MR_r2)) {
		MR_GOTO_LAB(version_bitmap__is_clear_2_0_i2);
	}
	{
	struct ML_va *	VA;
	MR_Integer	I;
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__version_bitmap__is_clear_2_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_r1, VA);
	I = (MR_Integer) 0;
	MR_OBTAIN_GLOBAL_LOCK("get_if_in_range");
{
#line 179 "version_array.opt"

    SUCCESS_INDICATOR = ML_va_get(VA, I, &X);
;}
#line 1393 "version_bitmap.c"
	MR_RELEASE_GLOBAL_LOCK("get_if_in_range");
if (!MercurySuccessIndicator) MR_GOTO_LAB(version_bitmap__is_clear_2_0_i4);
	MR_r3 = X;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = MR_r3;
	MR_GOTO_LAB(version_bitmap__is_clear_2_0_i8);
MR_def_label(version_bitmap__is_clear_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_sv(2) = MR_r2;
	MR_r2 = (MR_Word) MR_string_const("version_array.elem: index out of range", 38);
	MR_np_call_localret_ent(fn__require__func_error_1_0,
		version_bitmap__is_clear_2_0_i8);
MR_def_label(version_bitmap__is_clear_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_sv(2) >= (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(version_bitmap__is_clear_2_0_i2);
	}
	{
	MR_Integer	Int;
	MR_Integer	Div;
#define	MR_PROC_LABEL	mercury__version_bitmap__is_clear_2_0
	Int = MR_sv(2);
{
#line 235 "int.opt"

    Div = Int / ML_BITS_PER_INT;
;}
#line 1428 "version_bitmap.c"
	MR_r1 = Div;
#undef	MR_PROC_LABEL
	}
	MR_r2 = ((MR_Integer) 1 + (MR_Integer) MR_r1);
	{
	struct ML_va *	VA;
	MR_Integer	I;
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__version_bitmap__is_clear_2_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_sv(1), VA);
	I = MR_r2;
	MR_OBTAIN_GLOBAL_LOCK("get_if_in_range");
{
#line 179 "version_array.opt"

    SUCCESS_INDICATOR = ML_va_get(VA, I, &X);
;}
#line 1449 "version_bitmap.c"
	MR_RELEASE_GLOBAL_LOCK("get_if_in_range");
if (!MercurySuccessIndicator) MR_GOTO_LAB(version_bitmap__is_clear_2_0_i10);
	MR_r1 = X;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_GOTO_LAB(version_bitmap__is_clear_2_0_i14);
MR_def_label(version_bitmap__is_clear_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_string_const("version_array.elem: index out of range", 38);
	MR_np_call_localret_ent(fn__require__func_error_1_0,
		version_bitmap__is_clear_2_0_i14);
MR_def_label(version_bitmap__is_clear_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_Integer	Int;
	MR_Integer	Rem;
#define	MR_PROC_LABEL	mercury__version_bitmap__is_clear_2_0
	Int = MR_sv(2);
{
#line 241 "int.opt"

    Rem = Int % ML_BITS_PER_INT;
;}
#line 1478 "version_bitmap.c"
	MR_tempr1 = Rem;
#undef	MR_PROC_LABEL
	}
	MR_tempr2 = ((MR_Integer) MR_r1 & ((MR_Integer) 1 << (MR_Integer) MR_tempr1));
	MR_r1 = ((MR_Integer) MR_tempr2 == (MR_Integer) 0);
	MR_decr_sp_and_return(3);
	}
MR_def_label(version_bitmap__is_clear_2_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(version_bitmap__is_clear_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(exception, software_error);
	MR_r2 = (MR_Word) MR_string_const("version_bitmap.is_clear: out of range", 37);
	MR_np_call_localret_ent(exception__throw_1_0,
		version_bitmap__is_clear_2_0_i22);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_bitmap_module11)
	MR_init_entry1(fn__version_bitmap__bit_2_0);
	MR_init_label2(fn__version_bitmap__bit_2_0,3,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__version_bitmap__bit_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(version_bitmap__is_set_2_0,
		fn__version_bitmap__bit_2_0_i3);
MR_def_label(fn__version_bitmap__bit_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__version_bitmap__bit_2_0_i2);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(1);
MR_def_label(fn__version_bitmap__bit_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_bitmap_module12)
	MR_init_entry1(fn__f_118_101_114_115_105_111_110_95_98_105_116_109_97_112_95_95_98_105_116_32_58_61_3_0);
	MR_init_label1(fn__f_118_101_114_115_105_111_110_95_98_105_116_109_97_112_95_95_98_105_116_32_58_61_3_0,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__f_118_101_114_115_105_111_110_95_98_105_116_109_97_112_95_95_98_105_116_32_58_61_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(fn__f_118_101_114_115_105_111_110_95_98_105_116_109_97_112_95_95_98_105_116_32_58_61_3_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_np_tailcall_ent(fn__version_bitmap__clear_2_0);
	}
MR_def_label(fn__f_118_101_114_115_105_111_110_95_98_105_116_109_97_112_95_95_98_105_116_32_58_61_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_np_tailcall_ent(fn__version_bitmap__set_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__version_array__copy_1_0);

MR_BEGIN_MODULE(version_bitmap_module13)
	MR_init_entry1(fn__version_bitmap__copy_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__version_bitmap__copy_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_np_tailcall_ent(fn__version_array__copy_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_bitmap_module14)
	MR_init_entry1(fn__version_bitmap__complement_2_2_0);
	MR_init_label6(fn__version_bitmap__complement_2_2_0,32,2,4,8,34,10)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__version_bitmap__complement_2_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(fn__version_bitmap__complement_2_2_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_GT(MR_r1,0)) {
		MR_GOTO_LAB(fn__version_bitmap__complement_2_2_0_i2);
	}
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(4);
MR_def_label(fn__version_bitmap__complement_2_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r3 = ((MR_Integer) MR_tempr1 - (MR_Integer) 1);
	{
	struct ML_va *	VA;
	MR_Integer	I;
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__fn__version_bitmap__complement_2_2_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_r2, VA);
	I = MR_tempr1;
	MR_OBTAIN_GLOBAL_LOCK("get_if_in_range");
{
#line 179 "version_array.opt"

    SUCCESS_INDICATOR = ML_va_get(VA, I, &X);
;}
#line 1644 "version_bitmap.c"
	MR_RELEASE_GLOBAL_LOCK("get_if_in_range");
if (!MercurySuccessIndicator) MR_GOTO_LAB(fn__version_bitmap__complement_2_2_0_i4);
	MR_r4 = X;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r2;
	MR_r1 = MR_r3;
	MR_r2 = ~((MR_Integer) MR_r4);
	MR_GOTO_LAB(fn__version_bitmap__complement_2_2_0_i8);
	}
MR_def_label(fn__version_bitmap__complement_2_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_sv(2) = MR_r2;
	MR_r2 = (MR_Word) MR_string_const("version_array.elem: index out of range", 38);
	MR_np_call_localret_ent(fn__require__func_error_1_0,
		fn__version_bitmap__complement_2_2_0_i8);
MR_def_label(fn__version_bitmap__complement_2_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	struct ML_va *	VA0;
	MR_Integer	I;
	MR_Word	X;
	struct ML_va *	VA;
#define	MR_PROC_LABEL	mercury__fn__version_bitmap__complement_2_2_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_sv(2), VA0);
	I = MR_sv(1);
	X = MR_r2;
	MR_OBTAIN_GLOBAL_LOCK("set_if_in_range");
{
#line 182 "version_array.opt"

    SUCCESS_INDICATOR = ML_va_set(VA0, I, X, &VA);
;}
#line 1686 "version_bitmap.c"
	MR_RELEASE_GLOBAL_LOCK("set_if_in_range");
if (!MercurySuccessIndicator) MR_GOTO_LAB(fn__version_bitmap__complement_2_2_0_i10);
	MR_MAYBE_BOX_FOREIGN_TYPE(struct ML_va *, VA, MR_r2);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
MR_def_label(fn__version_bitmap__complement_2_2_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(fn__version_bitmap__complement_2_2_0_i32);
MR_def_label(fn__version_bitmap__complement_2_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = (MR_Word) MR_string_const("version_array.\'elem :=\': index out of range", 43);
	MR_np_call_localret_ent(fn__require__func_error_1_0,
		fn__version_bitmap__complement_2_2_0_i34);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_bitmap_module15)
	MR_init_entry1(fn__version_bitmap__complement_1_0);
	MR_init_label3(fn__version_bitmap__complement_1_0,3,7,8)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__version_bitmap__complement_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	{
	struct ML_va *	VA;
	MR_Integer	I;
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__fn__version_bitmap__complement_1_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_r1, VA);
	I = (MR_Integer) 0;
	MR_OBTAIN_GLOBAL_LOCK("get_if_in_range");
{
#line 179 "version_array.opt"

    SUCCESS_INDICATOR = ML_va_get(VA, I, &X);
;}
#line 1743 "version_bitmap.c"
	MR_RELEASE_GLOBAL_LOCK("get_if_in_range");
if (!MercurySuccessIndicator) MR_GOTO_LAB(fn__version_bitmap__complement_1_0_i3);
	MR_tempr1 = X;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r2 = MR_r1;
	MR_r1 = ((MR_Integer) MR_tempr1 - (MR_Integer) 1);
	}
	MR_np_call_localret_ent(fn__version_bitmap__complement_2_2_0,
		fn__version_bitmap__complement_1_0_i8);
MR_def_label(fn__version_bitmap__complement_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_string_const("version_array.elem: index out of range", 38);
	MR_np_call_localret_ent(fn__require__func_error_1_0,
		fn__version_bitmap__complement_1_0_i7);
MR_def_label(fn__version_bitmap__complement_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__version_bitmap__complement_2_2_0,
		fn__version_bitmap__complement_1_0_i8);
MR_def_label(fn__version_bitmap__complement_1_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(fn__version_bitmap__clear_filler_bits_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_bitmap_module16)
	MR_init_entry1(fn__version_bitmap__union_2_0);
	MR_init_label7(fn__version_bitmap__union_2_0,4,8,10,14,16,20,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__version_bitmap__union_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	struct ML_va *	VA;
	MR_Integer	I;
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__fn__version_bitmap__union_2_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_r1, VA);
	I = (MR_Integer) 0;
	MR_OBTAIN_GLOBAL_LOCK("get_if_in_range");
{
#line 179 "version_array.opt"

    SUCCESS_INDICATOR = ML_va_get(VA, I, &X);
;}
#line 1808 "version_bitmap.c"
	MR_RELEASE_GLOBAL_LOCK("get_if_in_range");
if (!MercurySuccessIndicator) MR_GOTO_LAB(fn__version_bitmap__union_2_0_i4);
	MR_r4 = X;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r3 = MR_r2;
	MR_r2 = MR_r1;
	MR_sv(3) = MR_r4;
	MR_GOTO_LAB(fn__version_bitmap__union_2_0_i8);
MR_def_label(fn__version_bitmap__union_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_sv(2) = MR_r2;
	MR_r2 = (MR_Word) MR_string_const("version_array.elem: index out of range", 38);
	MR_np_call_localret_ent(fn__require__func_error_1_0,
		fn__version_bitmap__union_2_0_i8);
MR_def_label(fn__version_bitmap__union_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	struct ML_va *	VA;
	MR_Integer	I;
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__fn__version_bitmap__union_2_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_r3, VA);
	I = (MR_Integer) 0;
	MR_OBTAIN_GLOBAL_LOCK("get_if_in_range");
{
#line 179 "version_array.opt"

    SUCCESS_INDICATOR = ML_va_get(VA, I, &X);
;}
#line 1846 "version_bitmap.c"
	MR_RELEASE_GLOBAL_LOCK("get_if_in_range");
if (!MercurySuccessIndicator) MR_GOTO_LAB(fn__version_bitmap__union_2_0_i10);
	MR_r4 = X;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_r4;
	MR_GOTO_LAB(fn__version_bitmap__union_2_0_i14);
MR_def_label(fn__version_bitmap__union_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_sv(1) = MR_r2;
	MR_r2 = (MR_Word) MR_string_const("version_array.elem: index out of range", 38);
	MR_np_call_localret_ent(fn__require__func_error_1_0,
		fn__version_bitmap__union_2_0_i14);
MR_def_label(fn__version_bitmap__union_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_sv(3) != MR_r1)) {
		MR_GOTO_LAB(fn__version_bitmap__union_2_0_i2);
	}
	{
	struct ML_va *	VA;
	MR_Integer	I;
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__fn__version_bitmap__union_2_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_r3, VA);
	I = (MR_Integer) 0;
	MR_OBTAIN_GLOBAL_LOCK("get_if_in_range");
{
#line 179 "version_array.opt"

    SUCCESS_INDICATOR = ML_va_get(VA, I, &X);
;}
#line 1884 "version_bitmap.c"
	MR_RELEASE_GLOBAL_LOCK("get_if_in_range");
if (!MercurySuccessIndicator) MR_GOTO_LAB(fn__version_bitmap__union_2_0_i16);
	MR_r4 = X;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r1 = ((MR_Integer) MR_r4 - (MR_Integer) 1);
	MR_GOTO_LAB(fn__version_bitmap__union_2_0_i20);
MR_def_label(fn__version_bitmap__union_2_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_sv(1) = MR_r2;
	MR_r2 = (MR_Word) MR_string_const("version_array.elem: index out of range", 38);
	MR_np_call_localret_ent(fn__require__func_error_1_0,
		fn__version_bitmap__union_2_0_i20);
MR_def_label(fn__version_bitmap__union_2_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	{
	MR_Integer	Int;
	MR_Integer	Div;
#define	MR_PROC_LABEL	mercury__fn__version_bitmap__union_2_0
	Int = MR_r1;
{
#line 235 "int.opt"

    Div = Int / ML_BITS_PER_INT;
;}
#line 1915 "version_bitmap.c"
	MR_tempr1 = Div;
#undef	MR_PROC_LABEL
	}
	MR_r1 = ((MR_Integer) 1 + (MR_Integer) MR_tempr1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(fn__version_bitmap__zip__ho4_4_0);
	}
MR_def_label(fn__version_bitmap__union_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(exception, software_error);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = (MR_Word) MR_string_const("version_bitmap.union: version_bitmaps not the same size", 55);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(fn__exception__throw_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_bitmap_module17)
	MR_init_entry1(fn__version_bitmap__intersect_2_0);
	MR_init_label7(fn__version_bitmap__intersect_2_0,4,8,10,14,16,20,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__version_bitmap__intersect_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	struct ML_va *	VA;
	MR_Integer	I;
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__fn__version_bitmap__intersect_2_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_r1, VA);
	I = (MR_Integer) 0;
	MR_OBTAIN_GLOBAL_LOCK("get_if_in_range");
{
#line 179 "version_array.opt"

    SUCCESS_INDICATOR = ML_va_get(VA, I, &X);
;}
#line 1968 "version_bitmap.c"
	MR_RELEASE_GLOBAL_LOCK("get_if_in_range");
if (!MercurySuccessIndicator) MR_GOTO_LAB(fn__version_bitmap__intersect_2_0_i4);
	MR_r4 = X;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r3 = MR_r2;
	MR_r2 = MR_r1;
	MR_sv(3) = MR_r4;
	MR_GOTO_LAB(fn__version_bitmap__intersect_2_0_i8);
MR_def_label(fn__version_bitmap__intersect_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_sv(2) = MR_r2;
	MR_r2 = (MR_Word) MR_string_const("version_array.elem: index out of range", 38);
	MR_np_call_localret_ent(fn__require__func_error_1_0,
		fn__version_bitmap__intersect_2_0_i8);
MR_def_label(fn__version_bitmap__intersect_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	struct ML_va *	VA;
	MR_Integer	I;
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__fn__version_bitmap__intersect_2_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_r3, VA);
	I = (MR_Integer) 0;
	MR_OBTAIN_GLOBAL_LOCK("get_if_in_range");
{
#line 179 "version_array.opt"

    SUCCESS_INDICATOR = ML_va_get(VA, I, &X);
;}
#line 2006 "version_bitmap.c"
	MR_RELEASE_GLOBAL_LOCK("get_if_in_range");
if (!MercurySuccessIndicator) MR_GOTO_LAB(fn__version_bitmap__intersect_2_0_i10);
	MR_r4 = X;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_r4;
	MR_GOTO_LAB(fn__version_bitmap__intersect_2_0_i14);
MR_def_label(fn__version_bitmap__intersect_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_sv(1) = MR_r2;
	MR_r2 = (MR_Word) MR_string_const("version_array.elem: index out of range", 38);
	MR_np_call_localret_ent(fn__require__func_error_1_0,
		fn__version_bitmap__intersect_2_0_i14);
MR_def_label(fn__version_bitmap__intersect_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_sv(3) != MR_r1)) {
		MR_GOTO_LAB(fn__version_bitmap__intersect_2_0_i2);
	}
	{
	struct ML_va *	VA;
	MR_Integer	I;
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__fn__version_bitmap__intersect_2_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_r3, VA);
	I = (MR_Integer) 0;
	MR_OBTAIN_GLOBAL_LOCK("get_if_in_range");
{
#line 179 "version_array.opt"

    SUCCESS_INDICATOR = ML_va_get(VA, I, &X);
;}
#line 2044 "version_bitmap.c"
	MR_RELEASE_GLOBAL_LOCK("get_if_in_range");
if (!MercurySuccessIndicator) MR_GOTO_LAB(fn__version_bitmap__intersect_2_0_i16);
	MR_r4 = X;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r1 = ((MR_Integer) MR_r4 - (MR_Integer) 1);
	MR_GOTO_LAB(fn__version_bitmap__intersect_2_0_i20);
MR_def_label(fn__version_bitmap__intersect_2_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_sv(1) = MR_r2;
	MR_r2 = (MR_Word) MR_string_const("version_array.elem: index out of range", 38);
	MR_np_call_localret_ent(fn__require__func_error_1_0,
		fn__version_bitmap__intersect_2_0_i20);
MR_def_label(fn__version_bitmap__intersect_2_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	{
	MR_Integer	Int;
	MR_Integer	Div;
#define	MR_PROC_LABEL	mercury__fn__version_bitmap__intersect_2_0
	Int = MR_r1;
{
#line 235 "int.opt"

    Div = Int / ML_BITS_PER_INT;
;}
#line 2075 "version_bitmap.c"
	MR_tempr1 = Div;
#undef	MR_PROC_LABEL
	}
	MR_r1 = ((MR_Integer) 1 + (MR_Integer) MR_tempr1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(fn__version_bitmap__zip__ho3_4_0);
	}
MR_def_label(fn__version_bitmap__intersect_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(exception, software_error);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = (MR_Word) MR_string_const("version_bitmap.intersect: version_bitmaps not the same size", 59);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(fn__exception__throw_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_bitmap_module18)
	MR_init_entry1(fn__version_bitmap__difference_2_0);
	MR_init_label7(fn__version_bitmap__difference_2_0,4,8,10,14,16,20,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__version_bitmap__difference_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	struct ML_va *	VA;
	MR_Integer	I;
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__fn__version_bitmap__difference_2_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_r1, VA);
	I = (MR_Integer) 0;
	MR_OBTAIN_GLOBAL_LOCK("get_if_in_range");
{
#line 179 "version_array.opt"

    SUCCESS_INDICATOR = ML_va_get(VA, I, &X);
;}
#line 2128 "version_bitmap.c"
	MR_RELEASE_GLOBAL_LOCK("get_if_in_range");
if (!MercurySuccessIndicator) MR_GOTO_LAB(fn__version_bitmap__difference_2_0_i4);
	MR_r4 = X;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r3 = MR_r2;
	MR_r2 = MR_r1;
	MR_sv(3) = MR_r4;
	MR_GOTO_LAB(fn__version_bitmap__difference_2_0_i8);
MR_def_label(fn__version_bitmap__difference_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_sv(2) = MR_r2;
	MR_r2 = (MR_Word) MR_string_const("version_array.elem: index out of range", 38);
	MR_np_call_localret_ent(fn__require__func_error_1_0,
		fn__version_bitmap__difference_2_0_i8);
MR_def_label(fn__version_bitmap__difference_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	struct ML_va *	VA;
	MR_Integer	I;
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__fn__version_bitmap__difference_2_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_r3, VA);
	I = (MR_Integer) 0;
	MR_OBTAIN_GLOBAL_LOCK("get_if_in_range");
{
#line 179 "version_array.opt"

    SUCCESS_INDICATOR = ML_va_get(VA, I, &X);
;}
#line 2166 "version_bitmap.c"
	MR_RELEASE_GLOBAL_LOCK("get_if_in_range");
if (!MercurySuccessIndicator) MR_GOTO_LAB(fn__version_bitmap__difference_2_0_i10);
	MR_r4 = X;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_r4;
	MR_GOTO_LAB(fn__version_bitmap__difference_2_0_i14);
MR_def_label(fn__version_bitmap__difference_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_sv(1) = MR_r2;
	MR_r2 = (MR_Word) MR_string_const("version_array.elem: index out of range", 38);
	MR_np_call_localret_ent(fn__require__func_error_1_0,
		fn__version_bitmap__difference_2_0_i14);
MR_def_label(fn__version_bitmap__difference_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_sv(3) != MR_r1)) {
		MR_GOTO_LAB(fn__version_bitmap__difference_2_0_i2);
	}
	{
	struct ML_va *	VA;
	MR_Integer	I;
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__fn__version_bitmap__difference_2_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_r3, VA);
	I = (MR_Integer) 0;
	MR_OBTAIN_GLOBAL_LOCK("get_if_in_range");
{
#line 179 "version_array.opt"

    SUCCESS_INDICATOR = ML_va_get(VA, I, &X);
;}
#line 2204 "version_bitmap.c"
	MR_RELEASE_GLOBAL_LOCK("get_if_in_range");
if (!MercurySuccessIndicator) MR_GOTO_LAB(fn__version_bitmap__difference_2_0_i16);
	MR_r4 = X;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r1 = ((MR_Integer) MR_r4 - (MR_Integer) 1);
	MR_GOTO_LAB(fn__version_bitmap__difference_2_0_i20);
MR_def_label(fn__version_bitmap__difference_2_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_sv(1) = MR_r2;
	MR_r2 = (MR_Word) MR_string_const("version_array.elem: index out of range", 38);
	MR_np_call_localret_ent(fn__require__func_error_1_0,
		fn__version_bitmap__difference_2_0_i20);
MR_def_label(fn__version_bitmap__difference_2_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	{
	MR_Integer	Int;
	MR_Integer	Div;
#define	MR_PROC_LABEL	mercury__fn__version_bitmap__difference_2_0
	Int = MR_r1;
{
#line 235 "int.opt"

    Div = Int / ML_BITS_PER_INT;
;}
#line 2235 "version_bitmap.c"
	MR_tempr1 = Div;
#undef	MR_PROC_LABEL
	}
	MR_r1 = ((MR_Integer) 1 + (MR_Integer) MR_tempr1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(fn__version_bitmap__zip__ho2_4_0);
	}
MR_def_label(fn__version_bitmap__difference_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(exception, software_error);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = (MR_Word) MR_string_const("version_bitmap.difference: version_bitmaps not the same size", 60);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(fn__exception__throw_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_bitmap_module19)
	MR_init_entry1(fn__version_bitmap__xor_2_0);
	MR_init_label7(fn__version_bitmap__xor_2_0,4,8,10,14,16,20,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__version_bitmap__xor_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	struct ML_va *	VA;
	MR_Integer	I;
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__fn__version_bitmap__xor_2_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_r1, VA);
	I = (MR_Integer) 0;
	MR_OBTAIN_GLOBAL_LOCK("get_if_in_range");
{
#line 179 "version_array.opt"

    SUCCESS_INDICATOR = ML_va_get(VA, I, &X);
;}
#line 2288 "version_bitmap.c"
	MR_RELEASE_GLOBAL_LOCK("get_if_in_range");
if (!MercurySuccessIndicator) MR_GOTO_LAB(fn__version_bitmap__xor_2_0_i4);
	MR_r4 = X;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r3 = MR_r2;
	MR_r2 = MR_r1;
	MR_sv(3) = MR_r4;
	MR_GOTO_LAB(fn__version_bitmap__xor_2_0_i8);
MR_def_label(fn__version_bitmap__xor_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_sv(2) = MR_r2;
	MR_r2 = (MR_Word) MR_string_const("version_array.elem: index out of range", 38);
	MR_np_call_localret_ent(fn__require__func_error_1_0,
		fn__version_bitmap__xor_2_0_i8);
MR_def_label(fn__version_bitmap__xor_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	struct ML_va *	VA;
	MR_Integer	I;
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__fn__version_bitmap__xor_2_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_r3, VA);
	I = (MR_Integer) 0;
	MR_OBTAIN_GLOBAL_LOCK("get_if_in_range");
{
#line 179 "version_array.opt"

    SUCCESS_INDICATOR = ML_va_get(VA, I, &X);
;}
#line 2326 "version_bitmap.c"
	MR_RELEASE_GLOBAL_LOCK("get_if_in_range");
if (!MercurySuccessIndicator) MR_GOTO_LAB(fn__version_bitmap__xor_2_0_i10);
	MR_r4 = X;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_r4;
	MR_GOTO_LAB(fn__version_bitmap__xor_2_0_i14);
MR_def_label(fn__version_bitmap__xor_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_sv(1) = MR_r2;
	MR_r2 = (MR_Word) MR_string_const("version_array.elem: index out of range", 38);
	MR_np_call_localret_ent(fn__require__func_error_1_0,
		fn__version_bitmap__xor_2_0_i14);
MR_def_label(fn__version_bitmap__xor_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_sv(3) != MR_r1)) {
		MR_GOTO_LAB(fn__version_bitmap__xor_2_0_i2);
	}
	{
	struct ML_va *	VA;
	MR_Integer	I;
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__fn__version_bitmap__xor_2_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_r3, VA);
	I = (MR_Integer) 0;
	MR_OBTAIN_GLOBAL_LOCK("get_if_in_range");
{
#line 179 "version_array.opt"

    SUCCESS_INDICATOR = ML_va_get(VA, I, &X);
;}
#line 2364 "version_bitmap.c"
	MR_RELEASE_GLOBAL_LOCK("get_if_in_range");
if (!MercurySuccessIndicator) MR_GOTO_LAB(fn__version_bitmap__xor_2_0_i16);
	MR_r4 = X;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r1 = ((MR_Integer) MR_r4 - (MR_Integer) 1);
	MR_GOTO_LAB(fn__version_bitmap__xor_2_0_i20);
MR_def_label(fn__version_bitmap__xor_2_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_sv(1) = MR_r2;
	MR_r2 = (MR_Word) MR_string_const("version_array.elem: index out of range", 38);
	MR_np_call_localret_ent(fn__require__func_error_1_0,
		fn__version_bitmap__xor_2_0_i20);
MR_def_label(fn__version_bitmap__xor_2_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	{
	MR_Integer	Int;
	MR_Integer	Div;
#define	MR_PROC_LABEL	mercury__fn__version_bitmap__xor_2_0
	Int = MR_r1;
{
#line 235 "int.opt"

    Div = Int / ML_BITS_PER_INT;
;}
#line 2395 "version_bitmap.c"
	MR_tempr1 = Div;
#undef	MR_PROC_LABEL
	}
	MR_r1 = ((MR_Integer) 1 + (MR_Integer) MR_tempr1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(fn__version_bitmap__zip__ho1_4_0);
	}
MR_def_label(fn__version_bitmap__xor_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(exception, software_error);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = (MR_Word) MR_string_const("version_bitmap.xor: version_bitmaps not the same size", 53);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(fn__exception__throw_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_bitmap_module20)
	MR_init_entry1(fn__version_bitmap__resize_3_0);
	MR_init_label8(fn__version_bitmap__resize_3_0,83,5,4,6,7,9,13,14)
	MR_init_label7(fn__version_bitmap__resize_3_0,15,17,21,23,27,82,28)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__version_bitmap__resize_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_GT(MR_r2,0)) {
		MR_GOTO_LAB(fn__version_bitmap__resize_3_0_i83);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_np_tailcall_ent(fn__version_bitmap__new_2_0);
MR_def_label(fn__version_bitmap__resize_3_0,83)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(fn__version_bitmap__resize_3_0_i5);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = (MR_Integer) 0;
	MR_GOTO_LAB(fn__version_bitmap__resize_3_0_i4);
MR_def_label(fn__version_bitmap__resize_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = (MR_Integer) -1;
MR_def_label(fn__version_bitmap__resize_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_LE(MR_sv(1),0)) {
		MR_GOTO_LAB(fn__version_bitmap__resize_3_0_i6);
	}
	{
	MR_Integer	Int;
	MR_Integer	Div;
#define	MR_PROC_LABEL	mercury__fn__version_bitmap__resize_3_0
	Int = MR_sv(1);
{
#line 235 "int.opt"

    Div = Int / ML_BITS_PER_INT;
;}
#line 2466 "version_bitmap.c"
	MR_r2 = Div;
#undef	MR_PROC_LABEL
	}
	MR_r2 = ((MR_Integer) 1 + ((MR_Integer) 1 + (MR_Integer) MR_r2));
	MR_GOTO_LAB(fn__version_bitmap__resize_3_0_i7);
MR_def_label(fn__version_bitmap__resize_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 1;
MR_def_label(fn__version_bitmap__resize_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	struct ML_va *	VA0;
	MR_Integer	N;
	MR_Word	X;
	struct ML_va *	VA;
#define	MR_PROC_LABEL	mercury__fn__version_bitmap__resize_3_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_r1, VA0);
	N = MR_r2;
	X = MR_sv(2);
	MR_OBTAIN_GLOBAL_LOCK("resize");
{
#line 110 "version_array.opt"

    MR_Integer  i;
    MR_Integer  size_VA0;
    MR_Integer  min;

    size_VA0 = ML_va_size(VA0);
    min      = (N <= size_VA0 ? N : size_VA0);
    VA       = MR_GC_NEW(struct ML_va);

    VA->index            = -1;
    VA->value            = (MR_Word) NULL;
    VA->rest.array       = (MR_ArrayPtr) MR_GC_NEW_ARRAY(MR_Word, N + 1);
    VA->rest.array->size = N;

    for (i = 0; i < min; i++) {
        (void) ML_va_get(VA0, i, &VA->rest.array->elements[i]);
    }

    for (i = min; i < N; i++) {
        VA->rest.array->elements[i] = X;
    }
;}
#line 2511 "version_bitmap.c"
	MR_RELEASE_GLOBAL_LOCK("resize");
	MR_MAYBE_BOX_FOREIGN_TYPE(struct ML_va *, VA, MR_r2);
#undef	MR_PROC_LABEL
	}
	{
	struct ML_va *	VA;
	MR_Integer	I;
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__fn__version_bitmap__resize_3_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_r1, VA);
	I = (MR_Integer) 0;
	MR_OBTAIN_GLOBAL_LOCK("get_if_in_range");
{
#line 179 "version_array.opt"

    SUCCESS_INDICATOR = ML_va_get(VA, I, &X);
;}
#line 2532 "version_bitmap.c"
	MR_RELEASE_GLOBAL_LOCK("get_if_in_range");
if (!MercurySuccessIndicator) MR_GOTO_LAB(fn__version_bitmap__resize_3_0_i9);
	MR_r3 = X;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_sv(3) = MR_r2;
	MR_r1 = MR_r3;
	MR_GOTO_LAB(fn__version_bitmap__resize_3_0_i13);
MR_def_label(fn__version_bitmap__resize_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_sv(3) = MR_r2;
	MR_r2 = (MR_Word) MR_string_const("version_array.elem: index out of range", 38);
	MR_np_call_localret_ent(fn__require__func_error_1_0,
		fn__version_bitmap__resize_3_0_i13);
MR_def_label(fn__version_bitmap__resize_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r1 >= (MR_Integer) MR_sv(1))) {
		MR_GOTO_LAB(fn__version_bitmap__resize_3_0_i14);
	}
	MR_r2 = ((MR_Integer) MR_r1 - (MR_Integer) 1);
	MR_GOTO_LAB(fn__version_bitmap__resize_3_0_i15);
MR_def_label(fn__version_bitmap__resize_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = ((MR_Integer) MR_r1 - (MR_Integer) 1);
MR_def_label(fn__version_bitmap__resize_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Integer	Int;
	MR_Integer	Div;
#define	MR_PROC_LABEL	mercury__fn__version_bitmap__resize_3_0
	Int = MR_r2;
{
#line 235 "int.opt"

    Div = Int / ML_BITS_PER_INT;
;}
#line 2573 "version_bitmap.c"
	MR_r2 = Div;
#undef	MR_PROC_LABEL
	}
	MR_r3 = ((MR_Integer) MR_r1 - (MR_Integer) 1);
	{
	MR_Integer	Int;
	MR_Integer	Rem;
#define	MR_PROC_LABEL	mercury__fn__version_bitmap__resize_3_0
	Int = MR_r3;
{
#line 241 "int.opt"

    Rem = Int % ML_BITS_PER_INT;
;}
#line 2588 "version_bitmap.c"
	MR_r3 = Rem;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = ((MR_Integer) 1 << (MR_Integer) MR_r3);
	MR_r4 = MR_tempr1;
	MR_sv(4) = (~(((MR_Integer) MR_tempr1 | ((MR_Integer) MR_tempr1 - (MR_Integer) 1))) & (MR_Integer) MR_sv(2));
	MR_sv(2) = ((MR_Integer) MR_tempr1 | ((MR_Integer) MR_tempr1 - (MR_Integer) 1));
	MR_r3 = ((MR_Integer) 1 + (MR_Integer) MR_r2);
	{
	struct ML_va *	VA0;
	MR_Integer	I;
	MR_Word	X;
	struct ML_va *	VA;
#define	MR_PROC_LABEL	mercury__fn__version_bitmap__resize_3_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_sv(3), VA0);
	I = (MR_Integer) 0;
	X = MR_sv(1);
	MR_OBTAIN_GLOBAL_LOCK("set_if_in_range");
{
#line 182 "version_array.opt"

    SUCCESS_INDICATOR = ML_va_set(VA0, I, X, &VA);
;}
#line 2617 "version_bitmap.c"
	MR_RELEASE_GLOBAL_LOCK("set_if_in_range");
if (!MercurySuccessIndicator) MR_GOTO_LAB(fn__version_bitmap__resize_3_0_i17);
	MR_MAYBE_BOX_FOREIGN_TYPE(struct ML_va *, VA, MR_r2);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r3;
	MR_r1 = MR_r2;
	MR_GOTO_LAB(fn__version_bitmap__resize_3_0_i21);
	}
MR_def_label(fn__version_bitmap__resize_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = (MR_Word) MR_string_const("version_array.\'elem :=\': index out of range", 43);
	MR_np_call_localret_ent(fn__require__func_error_1_0,
		fn__version_bitmap__resize_3_0_i21);
MR_def_label(fn__version_bitmap__resize_3_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	struct ML_va *	VA;
	MR_Integer	I;
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__fn__version_bitmap__resize_3_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_sv(3), VA);
	I = MR_sv(1);
	MR_OBTAIN_GLOBAL_LOCK("get_if_in_range");
{
#line 179 "version_array.opt"

    SUCCESS_INDICATOR = ML_va_get(VA, I, &X);
;}
#line 2653 "version_bitmap.c"
	MR_RELEASE_GLOBAL_LOCK("get_if_in_range");
if (!MercurySuccessIndicator) MR_GOTO_LAB(fn__version_bitmap__resize_3_0_i23);
	MR_r2 = X;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r3 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = (((MR_Integer) MR_r2 & (MR_Integer) MR_r3) | (MR_Integer) MR_sv(4));
	MR_GOTO_LAB(fn__version_bitmap__resize_3_0_i27);
MR_def_label(fn__version_bitmap__resize_3_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_string_const("version_array.elem: index out of range", 38);
	MR_np_call_localret_ent(fn__require__func_error_1_0,
		fn__version_bitmap__resize_3_0_i27);
MR_def_label(fn__version_bitmap__resize_3_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	struct ML_va *	VA0;
	MR_Integer	I;
	MR_Word	X;
	struct ML_va *	VA;
#define	MR_PROC_LABEL	mercury__fn__version_bitmap__resize_3_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_sv(2), VA0);
	I = MR_sv(1);
	X = MR_r1;
	MR_OBTAIN_GLOBAL_LOCK("set_if_in_range");
{
#line 182 "version_array.opt"

    SUCCESS_INDICATOR = ML_va_set(VA0, I, X, &VA);
;}
#line 2692 "version_bitmap.c"
	MR_RELEASE_GLOBAL_LOCK("set_if_in_range");
if (!MercurySuccessIndicator) MR_GOTO_LAB(fn__version_bitmap__resize_3_0_i28);
	MR_MAYBE_BOX_FOREIGN_TYPE(struct ML_va *, VA, MR_r1);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
MR_def_label(fn__version_bitmap__resize_3_0,82)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(fn__version_bitmap__clear_filler_bits_1_0);
MR_def_label(fn__version_bitmap__resize_3_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = (MR_Word) MR_string_const("version_array.\'elem :=\': index out of range", 43);
	MR_np_call_localret_ent(fn__require__func_error_1_0,
		fn__version_bitmap__resize_3_0_i82);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_bitmap_module21)
	MR_init_entry1(version_bitmap__resize_4_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__version_bitmap__resize_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_np_tailcall_ent(fn__version_bitmap__resize_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_bitmap_module22)
	MR_init_entry1(fn__version_bitmap__unsafe_rewind_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__version_bitmap__unsafe_rewind_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	struct ML_va *	VA0;
	struct ML_va *	VA;
#define	MR_PROC_LABEL	mercury__fn__version_bitmap__unsafe_rewind_1_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_r1, VA0);
	MR_OBTAIN_GLOBAL_LOCK("unsafe_rewind");
{
#line 149 "version_array.opt"

    VA = ML_va_rewind(VA0);
;}
#line 2764 "version_bitmap.c"
	MR_RELEASE_GLOBAL_LOCK("unsafe_rewind");
	MR_MAYBE_BOX_FOREIGN_TYPE(struct ML_va *, VA, MR_r1);
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_bitmap_module23)
	MR_init_entry1(version_bitmap__unsafe_rewind_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__version_bitmap__unsafe_rewind_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	struct ML_va *	VA0;
	struct ML_va *	VA;
#define	MR_PROC_LABEL	mercury__version_bitmap__unsafe_rewind_2_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_r1, VA0);
	MR_OBTAIN_GLOBAL_LOCK("unsafe_rewind");
{
#line 149 "version_array.opt"

    VA = ML_va_rewind(VA0);
;}
#line 2798 "version_bitmap.c"
	MR_RELEASE_GLOBAL_LOCK("unsafe_rewind");
	MR_MAYBE_BOX_FOREIGN_TYPE(struct ML_va *, VA, MR_r1);
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_bitmap_module24)
	MR_init_entry1(fn__version_bitmap__get_2_0);
	MR_init_label2(fn__version_bitmap__get_2_0,3,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__version_bitmap__get_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(version_bitmap__is_clear_2_0,
		fn__version_bitmap__get_2_0_i3);
MR_def_label(fn__version_bitmap__get_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__version_bitmap__get_2_0_i2);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(1);
MR_def_label(fn__version_bitmap__get_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___version_array__version_array_1_0);

MR_BEGIN_MODULE(version_bitmap_module25)
	MR_init_entry1(__Unify___version_bitmap__version_bitmap_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___version_bitmap__version_bitmap_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(__Unify___version_array__version_array_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___version_array__version_array_1_0);

MR_BEGIN_MODULE(version_bitmap_module26)
	MR_init_entry1(__Compare___version_bitmap__version_bitmap_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___version_bitmap__version_bitmap_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(__Compare___version_array__version_array_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_bitmap_module27)
	MR_init_entry1(fn__version_bitmap__zip__ho1_4_0);
	MR_init_label8(fn__version_bitmap__zip__ho1_4_0,44,4,8,10,14,45,16,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__version_bitmap__zip__ho1_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(fn__version_bitmap__zip__ho1_4_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_LE(MR_r1,0)) {
		MR_GOTO_LAB(fn__version_bitmap__zip__ho1_4_0_i2);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r4 = ((MR_Integer) MR_tempr1 - (MR_Integer) 1);
	{
	struct ML_va *	VA;
	MR_Integer	I;
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__fn__version_bitmap__zip__ho1_4_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_r3, VA);
	I = MR_tempr1;
	MR_OBTAIN_GLOBAL_LOCK("get_if_in_range");
{
#line 179 "version_array.opt"

    SUCCESS_INDICATOR = ML_va_get(VA, I, &X);
;}
#line 2936 "version_bitmap.c"
	MR_RELEASE_GLOBAL_LOCK("get_if_in_range");
if (!MercurySuccessIndicator) MR_GOTO_LAB(fn__version_bitmap__zip__ho1_4_0_i4);
	MR_r5 = X;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_tempr1;
	MR_sv(3) = MR_r3;
	MR_r1 = MR_r4;
	MR_r3 = MR_r5;
	MR_GOTO_LAB(fn__version_bitmap__zip__ho1_4_0_i8);
	}
MR_def_label(fn__version_bitmap__zip__ho1_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_sv(2) = MR_r2;
	MR_r2 = (MR_Word) MR_string_const("version_array.elem: index out of range", 38);
	MR_np_call_localret_ent(fn__require__func_error_1_0,
		fn__version_bitmap__zip__ho1_4_0_i8);
MR_def_label(fn__version_bitmap__zip__ho1_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	struct ML_va *	VA;
	MR_Integer	I;
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__fn__version_bitmap__zip__ho1_4_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_r2, VA);
	I = MR_sv(1);
	MR_OBTAIN_GLOBAL_LOCK("get_if_in_range");
{
#line 179 "version_array.opt"

    SUCCESS_INDICATOR = ML_va_get(VA, I, &X);
;}
#line 2976 "version_bitmap.c"
	MR_RELEASE_GLOBAL_LOCK("get_if_in_range");
if (!MercurySuccessIndicator) MR_GOTO_LAB(fn__version_bitmap__zip__ho1_4_0_i10);
	MR_r4 = X;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r3 = ((MR_Integer) MR_r3 ^ (MR_Integer) MR_r4);
	MR_GOTO_LAB(fn__version_bitmap__zip__ho1_4_0_i14);
MR_def_label(fn__version_bitmap__zip__ho1_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_sv(2) = MR_r2;
	MR_r2 = (MR_Word) MR_string_const("version_array.elem: index out of range", 38);
	MR_np_call_localret_ent(fn__require__func_error_1_0,
		fn__version_bitmap__zip__ho1_4_0_i14);
MR_def_label(fn__version_bitmap__zip__ho1_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	struct ML_va *	VA0;
	MR_Integer	I;
	MR_Word	X;
	struct ML_va *	VA;
#define	MR_PROC_LABEL	mercury__fn__version_bitmap__zip__ho1_4_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_sv(3), VA0);
	I = MR_sv(1);
	X = MR_r3;
	MR_OBTAIN_GLOBAL_LOCK("set_if_in_range");
{
#line 182 "version_array.opt"

    SUCCESS_INDICATOR = ML_va_set(VA0, I, X, &VA);
;}
#line 3014 "version_bitmap.c"
	MR_RELEASE_GLOBAL_LOCK("set_if_in_range");
if (!MercurySuccessIndicator) MR_GOTO_LAB(fn__version_bitmap__zip__ho1_4_0_i16);
	MR_MAYBE_BOX_FOREIGN_TYPE(struct ML_va *, VA, MR_r3);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
MR_def_label(fn__version_bitmap__zip__ho1_4_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(fn__version_bitmap__zip__ho1_4_0_i44);
MR_def_label(fn__version_bitmap__zip__ho1_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_sv(2) = MR_r2;
	MR_r2 = (MR_Word) MR_string_const("version_array.\'elem :=\': index out of range", 43);
	MR_np_call_localret_ent(fn__require__func_error_1_0,
		fn__version_bitmap__zip__ho1_4_0_i45);
MR_def_label(fn__version_bitmap__zip__ho1_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_bitmap_module28)
	MR_init_entry1(fn__version_bitmap__zip__ho2_4_0);
	MR_init_label8(fn__version_bitmap__zip__ho2_4_0,44,4,8,10,14,45,16,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__version_bitmap__zip__ho2_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(fn__version_bitmap__zip__ho2_4_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_LE(MR_r1,0)) {
		MR_GOTO_LAB(fn__version_bitmap__zip__ho2_4_0_i2);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r4 = ((MR_Integer) MR_tempr1 - (MR_Integer) 1);
	{
	struct ML_va *	VA;
	MR_Integer	I;
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__fn__version_bitmap__zip__ho2_4_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_r3, VA);
	I = MR_tempr1;
	MR_OBTAIN_GLOBAL_LOCK("get_if_in_range");
{
#line 179 "version_array.opt"

    SUCCESS_INDICATOR = ML_va_get(VA, I, &X);
;}
#line 3083 "version_bitmap.c"
	MR_RELEASE_GLOBAL_LOCK("get_if_in_range");
if (!MercurySuccessIndicator) MR_GOTO_LAB(fn__version_bitmap__zip__ho2_4_0_i4);
	MR_r5 = X;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_tempr1;
	MR_sv(3) = MR_r3;
	MR_r1 = MR_r4;
	MR_r3 = MR_r5;
	MR_GOTO_LAB(fn__version_bitmap__zip__ho2_4_0_i8);
	}
MR_def_label(fn__version_bitmap__zip__ho2_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_sv(2) = MR_r2;
	MR_r2 = (MR_Word) MR_string_const("version_array.elem: index out of range", 38);
	MR_np_call_localret_ent(fn__require__func_error_1_0,
		fn__version_bitmap__zip__ho2_4_0_i8);
MR_def_label(fn__version_bitmap__zip__ho2_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	struct ML_va *	VA;
	MR_Integer	I;
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__fn__version_bitmap__zip__ho2_4_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_r2, VA);
	I = MR_sv(1);
	MR_OBTAIN_GLOBAL_LOCK("get_if_in_range");
{
#line 179 "version_array.opt"

    SUCCESS_INDICATOR = ML_va_get(VA, I, &X);
;}
#line 3123 "version_bitmap.c"
	MR_RELEASE_GLOBAL_LOCK("get_if_in_range");
if (!MercurySuccessIndicator) MR_GOTO_LAB(fn__version_bitmap__zip__ho2_4_0_i10);
	MR_r4 = X;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r3 = ((MR_Integer) MR_r3 & ~((MR_Integer) MR_r4));
	MR_GOTO_LAB(fn__version_bitmap__zip__ho2_4_0_i14);
MR_def_label(fn__version_bitmap__zip__ho2_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_sv(2) = MR_r2;
	MR_r2 = (MR_Word) MR_string_const("version_array.elem: index out of range", 38);
	MR_np_call_localret_ent(fn__require__func_error_1_0,
		fn__version_bitmap__zip__ho2_4_0_i14);
MR_def_label(fn__version_bitmap__zip__ho2_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	struct ML_va *	VA0;
	MR_Integer	I;
	MR_Word	X;
	struct ML_va *	VA;
#define	MR_PROC_LABEL	mercury__fn__version_bitmap__zip__ho2_4_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_sv(3), VA0);
	I = MR_sv(1);
	X = MR_r3;
	MR_OBTAIN_GLOBAL_LOCK("set_if_in_range");
{
#line 182 "version_array.opt"

    SUCCESS_INDICATOR = ML_va_set(VA0, I, X, &VA);
;}
#line 3161 "version_bitmap.c"
	MR_RELEASE_GLOBAL_LOCK("set_if_in_range");
if (!MercurySuccessIndicator) MR_GOTO_LAB(fn__version_bitmap__zip__ho2_4_0_i16);
	MR_MAYBE_BOX_FOREIGN_TYPE(struct ML_va *, VA, MR_r3);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
MR_def_label(fn__version_bitmap__zip__ho2_4_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(fn__version_bitmap__zip__ho2_4_0_i44);
MR_def_label(fn__version_bitmap__zip__ho2_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_sv(2) = MR_r2;
	MR_r2 = (MR_Word) MR_string_const("version_array.\'elem :=\': index out of range", 43);
	MR_np_call_localret_ent(fn__require__func_error_1_0,
		fn__version_bitmap__zip__ho2_4_0_i45);
MR_def_label(fn__version_bitmap__zip__ho2_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_bitmap_module29)
	MR_init_entry1(fn__version_bitmap__zip__ho3_4_0);
	MR_init_label8(fn__version_bitmap__zip__ho3_4_0,44,4,8,10,14,45,16,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__version_bitmap__zip__ho3_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(fn__version_bitmap__zip__ho3_4_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_LE(MR_r1,0)) {
		MR_GOTO_LAB(fn__version_bitmap__zip__ho3_4_0_i2);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r4 = ((MR_Integer) MR_tempr1 - (MR_Integer) 1);
	{
	struct ML_va *	VA;
	MR_Integer	I;
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__fn__version_bitmap__zip__ho3_4_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_r3, VA);
	I = MR_tempr1;
	MR_OBTAIN_GLOBAL_LOCK("get_if_in_range");
{
#line 179 "version_array.opt"

    SUCCESS_INDICATOR = ML_va_get(VA, I, &X);
;}
#line 3230 "version_bitmap.c"
	MR_RELEASE_GLOBAL_LOCK("get_if_in_range");
if (!MercurySuccessIndicator) MR_GOTO_LAB(fn__version_bitmap__zip__ho3_4_0_i4);
	MR_r5 = X;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_tempr1;
	MR_sv(3) = MR_r3;
	MR_r1 = MR_r4;
	MR_r3 = MR_r5;
	MR_GOTO_LAB(fn__version_bitmap__zip__ho3_4_0_i8);
	}
MR_def_label(fn__version_bitmap__zip__ho3_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_sv(2) = MR_r2;
	MR_r2 = (MR_Word) MR_string_const("version_array.elem: index out of range", 38);
	MR_np_call_localret_ent(fn__require__func_error_1_0,
		fn__version_bitmap__zip__ho3_4_0_i8);
MR_def_label(fn__version_bitmap__zip__ho3_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	struct ML_va *	VA;
	MR_Integer	I;
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__fn__version_bitmap__zip__ho3_4_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_r2, VA);
	I = MR_sv(1);
	MR_OBTAIN_GLOBAL_LOCK("get_if_in_range");
{
#line 179 "version_array.opt"

    SUCCESS_INDICATOR = ML_va_get(VA, I, &X);
;}
#line 3270 "version_bitmap.c"
	MR_RELEASE_GLOBAL_LOCK("get_if_in_range");
if (!MercurySuccessIndicator) MR_GOTO_LAB(fn__version_bitmap__zip__ho3_4_0_i10);
	MR_r4 = X;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r3 = ((MR_Integer) MR_r3 & (MR_Integer) MR_r4);
	MR_GOTO_LAB(fn__version_bitmap__zip__ho3_4_0_i14);
MR_def_label(fn__version_bitmap__zip__ho3_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_sv(2) = MR_r2;
	MR_r2 = (MR_Word) MR_string_const("version_array.elem: index out of range", 38);
	MR_np_call_localret_ent(fn__require__func_error_1_0,
		fn__version_bitmap__zip__ho3_4_0_i14);
MR_def_label(fn__version_bitmap__zip__ho3_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	struct ML_va *	VA0;
	MR_Integer	I;
	MR_Word	X;
	struct ML_va *	VA;
#define	MR_PROC_LABEL	mercury__fn__version_bitmap__zip__ho3_4_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_sv(3), VA0);
	I = MR_sv(1);
	X = MR_r3;
	MR_OBTAIN_GLOBAL_LOCK("set_if_in_range");
{
#line 182 "version_array.opt"

    SUCCESS_INDICATOR = ML_va_set(VA0, I, X, &VA);
;}
#line 3308 "version_bitmap.c"
	MR_RELEASE_GLOBAL_LOCK("set_if_in_range");
if (!MercurySuccessIndicator) MR_GOTO_LAB(fn__version_bitmap__zip__ho3_4_0_i16);
	MR_MAYBE_BOX_FOREIGN_TYPE(struct ML_va *, VA, MR_r3);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
MR_def_label(fn__version_bitmap__zip__ho3_4_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(fn__version_bitmap__zip__ho3_4_0_i44);
MR_def_label(fn__version_bitmap__zip__ho3_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_sv(2) = MR_r2;
	MR_r2 = (MR_Word) MR_string_const("version_array.\'elem :=\': index out of range", 43);
	MR_np_call_localret_ent(fn__require__func_error_1_0,
		fn__version_bitmap__zip__ho3_4_0_i45);
MR_def_label(fn__version_bitmap__zip__ho3_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_bitmap_module30)
	MR_init_entry1(fn__version_bitmap__zip__ho4_4_0);
	MR_init_label8(fn__version_bitmap__zip__ho4_4_0,44,4,8,10,14,45,16,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__version_bitmap__zip__ho4_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(fn__version_bitmap__zip__ho4_4_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_LE(MR_r1,0)) {
		MR_GOTO_LAB(fn__version_bitmap__zip__ho4_4_0_i2);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r4 = ((MR_Integer) MR_tempr1 - (MR_Integer) 1);
	{
	struct ML_va *	VA;
	MR_Integer	I;
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__fn__version_bitmap__zip__ho4_4_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_r3, VA);
	I = MR_tempr1;
	MR_OBTAIN_GLOBAL_LOCK("get_if_in_range");
{
#line 179 "version_array.opt"

    SUCCESS_INDICATOR = ML_va_get(VA, I, &X);
;}
#line 3377 "version_bitmap.c"
	MR_RELEASE_GLOBAL_LOCK("get_if_in_range");
if (!MercurySuccessIndicator) MR_GOTO_LAB(fn__version_bitmap__zip__ho4_4_0_i4);
	MR_r5 = X;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_tempr1;
	MR_sv(3) = MR_r3;
	MR_r1 = MR_r4;
	MR_r3 = MR_r5;
	MR_GOTO_LAB(fn__version_bitmap__zip__ho4_4_0_i8);
	}
MR_def_label(fn__version_bitmap__zip__ho4_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_sv(2) = MR_r2;
	MR_r2 = (MR_Word) MR_string_const("version_array.elem: index out of range", 38);
	MR_np_call_localret_ent(fn__require__func_error_1_0,
		fn__version_bitmap__zip__ho4_4_0_i8);
MR_def_label(fn__version_bitmap__zip__ho4_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	struct ML_va *	VA;
	MR_Integer	I;
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__fn__version_bitmap__zip__ho4_4_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_r2, VA);
	I = MR_sv(1);
	MR_OBTAIN_GLOBAL_LOCK("get_if_in_range");
{
#line 179 "version_array.opt"

    SUCCESS_INDICATOR = ML_va_get(VA, I, &X);
;}
#line 3417 "version_bitmap.c"
	MR_RELEASE_GLOBAL_LOCK("get_if_in_range");
if (!MercurySuccessIndicator) MR_GOTO_LAB(fn__version_bitmap__zip__ho4_4_0_i10);
	MR_r4 = X;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r3 = ((MR_Integer) MR_r3 | (MR_Integer) MR_r4);
	MR_GOTO_LAB(fn__version_bitmap__zip__ho4_4_0_i14);
MR_def_label(fn__version_bitmap__zip__ho4_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_sv(2) = MR_r2;
	MR_r2 = (MR_Word) MR_string_const("version_array.elem: index out of range", 38);
	MR_np_call_localret_ent(fn__require__func_error_1_0,
		fn__version_bitmap__zip__ho4_4_0_i14);
MR_def_label(fn__version_bitmap__zip__ho4_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	struct ML_va *	VA0;
	MR_Integer	I;
	MR_Word	X;
	struct ML_va *	VA;
#define	MR_PROC_LABEL	mercury__fn__version_bitmap__zip__ho4_4_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_sv(3), VA0);
	I = MR_sv(1);
	X = MR_r3;
	MR_OBTAIN_GLOBAL_LOCK("set_if_in_range");
{
#line 182 "version_array.opt"

    SUCCESS_INDICATOR = ML_va_set(VA0, I, X, &VA);
;}
#line 3455 "version_bitmap.c"
	MR_RELEASE_GLOBAL_LOCK("set_if_in_range");
if (!MercurySuccessIndicator) MR_GOTO_LAB(fn__version_bitmap__zip__ho4_4_0_i16);
	MR_MAYBE_BOX_FOREIGN_TYPE(struct ML_va *, VA, MR_r3);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
MR_def_label(fn__version_bitmap__zip__ho4_4_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(fn__version_bitmap__zip__ho4_4_0_i44);
MR_def_label(fn__version_bitmap__zip__ho4_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_sv(2) = MR_r2;
	MR_r2 = (MR_Word) MR_string_const("version_array.\'elem :=\': index out of range", 43);
	MR_np_call_localret_ent(fn__require__func_error_1_0,
		fn__version_bitmap__zip__ho4_4_0_i45);
MR_def_label(fn__version_bitmap__zip__ho4_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_bitmap_module31)
	MR_init_entry1(fn__f_118_101_114_115_105_111_110_95_98_105_116_109_97_112_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__f_118_101_114_115_105_111_110_95_98_105_116_109_97_112_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1200;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__version_bitmap_maybe_bunch_0(void)
{
	version_bitmap_module0();
	version_bitmap_module1();
	version_bitmap_module2();
	version_bitmap_module3();
	version_bitmap_module4();
	version_bitmap_module5();
	version_bitmap_module6();
	version_bitmap_module7();
	version_bitmap_module8();
	version_bitmap_module9();
	version_bitmap_module10();
	version_bitmap_module11();
	version_bitmap_module12();
	version_bitmap_module13();
	version_bitmap_module14();
	version_bitmap_module15();
	version_bitmap_module16();
	version_bitmap_module17();
	version_bitmap_module18();
	version_bitmap_module19();
	version_bitmap_module20();
	version_bitmap_module21();
	version_bitmap_module22();
	version_bitmap_module23();
	version_bitmap_module24();
	version_bitmap_module25();
	version_bitmap_module26();
	version_bitmap_module27();
	version_bitmap_module28();
	version_bitmap_module29();
	version_bitmap_module30();
	version_bitmap_module31();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__version_bitmap__init(void);
void mercury__version_bitmap__init_type_tables(void);
void mercury__version_bitmap__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__version_bitmap__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__version_bitmap__init_complexity_procs(void);
#endif

void mercury__version_bitmap__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__version_bitmap_maybe_bunch_0();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_version_bitmap__type_ctor_info_version_bitmap_0,
		version_bitmap__version_bitmap_0_0);
	mercury__version_bitmap__init_debugger();
}

void mercury__version_bitmap__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_version_bitmap__type_ctor_info_version_bitmap_0);
	}
}


void mercury__version_bitmap__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__version_bitmap__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__version_bitmap);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__version_bitmap__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
