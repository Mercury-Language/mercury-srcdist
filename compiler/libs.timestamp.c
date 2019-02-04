/*
** Automatically generated from `timestamp.m'
** by the Mercury compiler,
** version rotd-2008-08-03, configured for i686-pc-linux-gnu.
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
INIT mercury__libs__timestamp__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 24 "libs.timestamp.c"
#include "libs.timestamp.mh"

#line 27 "libs.timestamp.c"
#line 43 "../library/time.int"
#include "time.mh"

#line 31 "libs.timestamp.c"
#line 136 "../library/io.int2"
#include "io.mh"

#line 35 "libs.timestamp.c"
#line 144 "../library/io.int2"
#include "string.mh"

#line 39 "libs.timestamp.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 43 "libs.timestamp.c"
#line 31 "../library/array.int2"
#include "array.mh"

#line 47 "libs.timestamp.c"
#line 48 "libs.timestamp.c"
#ifndef LIBS__TIMESTAMP_DECL_GUARD
#define LIBS__TIMESTAMP_DECL_GUARD

#line 52 "libs.timestamp.c"
#line 85 "timestamp.m"

    #include "mercury_string.h"
    #include <time.h>

#line 58 "libs.timestamp.c"
#line 59 "libs.timestamp.c"

#endif
#line 62 "libs.timestamp.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

extern const MR_TypeCtorInfo_Struct
	mercury_data_libs__timestamp__type_ctor_info_timestamp_0;
MR_decl_label8(fn__libs__timestamp__string_to_timestamp_1_0, 2,3,4,5,7,8,9,11)
MR_decl_label8(fn__libs__timestamp__string_to_timestamp_1_0, 12,13,15,16,17,19,20,21)
MR_decl_label4(fn__libs__timestamp__string_to_timestamp_1_0, 23,24,25,1)
MR_decl_label4(fn__libs__timestamp__time_t_to_timestamp_1_0, 2,4,6,3)
MR_decl_label1(__Unify___libs__timestamp__timestamp_0_0, 4)
MR_decl_label2(__Compare___libs__timestamp__timestamp_0_0, 3,2)
MR_decl_static(fn__libs__timestamp__gmtime_to_timestamp_2_9_0)
MR_def_extern_entry(fn__libs__timestamp__time_t_to_timestamp_1_0)
MR_def_extern_entry(fn__libs__timestamp__timestamp_to_string_1_0)
MR_def_extern_entry(fn__libs__timestamp__string_to_timestamp_1_0)
MR_def_extern_entry(fn__libs__timestamp__oldest_timestamp_0_0)
MR_def_extern_entry(fn__libs__timestamp__newest_timestamp_0_0)
MR_def_extern_entry(__Unify___libs__timestamp__timestamp_0_0)
MR_def_extern_entry(__Compare___libs__timestamp__timestamp_0_0)
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;

static const MR_NotagFunctorDesc mercury_data_libs__timestamp__notag_functor_desc_timestamp_0 = {
	"timestamp",
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	NULL
};

const MR_Integer mercury_data_libs__timestamp__functor_number_map_timestamp_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_libs__timestamp__type_ctor_info_timestamp_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_NOTAG_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___libs__timestamp__timestamp_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___libs__timestamp__timestamp_0_0)),
	"libs.timestamp",
	"timestamp",
	{ (void *)&mercury_data_libs__timestamp__notag_functor_desc_timestamp_0 },
	{ (void *)&mercury_data_libs__timestamp__notag_functor_desc_timestamp_0 },
	1,
	4,
	mercury_data_libs__timestamp__functor_number_map_timestamp_0
};


MR_BEGIN_MODULE(libs__timestamp_module0)
	MR_init_entry1(fn__libs__timestamp__gmtime_to_timestamp_2_9_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__libs__timestamp__gmtime_to_timestamp_2_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Integer	Yr;
	MR_Integer	Mnt;
	MR_Integer	MD;
	MR_Integer	Hrs;
	MR_Integer	Min;
	MR_Integer	Sec;
	MR_Integer	YD;
	MR_Integer	WD;
	MR_Integer	N;
	MR_String	Result;
#define	MR_PROC_LABEL	mercury__fn__libs__timestamp__gmtime_to_timestamp_2_9_0
	Yr = MR_r1;
	Mnt = MR_r2;
	MD = MR_r3;
	Hrs = MR_r4;
	Min = MR_r5;
	Sec = MR_r6;
	YD = MR_r7;
	WD = MR_r8;
	N = MR_r9;
	MR_OBTAIN_GLOBAL_LOCK("gmtime_to_timestamp_2");
{
#line 93 "timestamp.m"
{
    int size;
    struct tm t;

    t.tm_sec = Sec;
    t.tm_min = Min;
    t.tm_hour = Hrs;
    t.tm_mon = Mnt;
    t.tm_year = Yr;
    t.tm_wday = WD;
    t.tm_mday = MD;
    t.tm_yday = YD;
    t.tm_isdst = N;

    size = sizeof "yyyy-mm-dd hh:mm:ss";
    MR_allocate_aligned_string_msg(Result, size - 1, MR_PROC_LABEL);

    strftime(Result, size, "%Y-%m-%d %H:%M:%S", &t);
};}
#line 168 "libs.timestamp.c"
	MR_RELEASE_GLOBAL_LOCK("gmtime_to_timestamp_2");
	MR_r1 = (MR_Word) Result;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__time__gmtime_1_0);

MR_BEGIN_MODULE(libs__timestamp_module1)
	MR_init_entry1(fn__libs__timestamp__time_t_to_timestamp_1_0);
	MR_init_label4(fn__libs__timestamp__time_t_to_timestamp_1_0,2,4,6,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__libs__timestamp__time_t_to_timestamp_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__time__gmtime_1_0,
		fn__libs__timestamp__time_t_to_timestamp_1_0_i2);
MR_def_label(fn__libs__timestamp__time_t_to_timestamp_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r1;
	MR_r2 = MR_ctfield(0, MR_tempr2, 8);
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(fn__libs__timestamp__time_t_to_timestamp_1_0_i4);
	}
	MR_tempr1 = MR_tempr2;
	MR_r10 = MR_tempr1;
	MR_r1 = MR_ctfield(0, MR_r1, 0);
	MR_r2 = MR_ctfield(0, MR_tempr1, 1);
	MR_r3 = MR_ctfield(0, MR_tempr1, 2);
	MR_r4 = MR_ctfield(0, MR_tempr1, 3);
	MR_r5 = MR_ctfield(0, MR_tempr1, 4);
	MR_r6 = MR_ctfield(0, MR_tempr1, 5);
	MR_r7 = MR_ctfield(0, MR_tempr1, 6);
	MR_r8 = MR_ctfield(0, MR_tempr1, 7);
	MR_r9 = (MR_Integer) -1;
	MR_GOTO_LAB(fn__libs__timestamp__time_t_to_timestamp_1_0_i3);
	}
MR_def_label(fn__libs__timestamp__time_t_to_timestamp_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_ctfield(1, MR_r2, 0);
	if (MR_INT_NE(MR_r3,1)) {
		MR_GOTO_LAB(fn__libs__timestamp__time_t_to_timestamp_1_0_i6);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r10 = MR_tempr1;
	MR_r1 = MR_ctfield(0, MR_r1, 0);
	MR_r2 = MR_ctfield(0, MR_tempr1, 1);
	MR_r3 = MR_ctfield(0, MR_tempr1, 2);
	MR_r4 = MR_ctfield(0, MR_tempr1, 3);
	MR_r5 = MR_ctfield(0, MR_tempr1, 4);
	MR_r6 = MR_ctfield(0, MR_tempr1, 5);
	MR_r7 = MR_ctfield(0, MR_tempr1, 6);
	MR_r8 = MR_ctfield(0, MR_tempr1, 7);
	MR_r9 = (MR_Integer) 1;
	MR_GOTO_LAB(fn__libs__timestamp__time_t_to_timestamp_1_0_i3);
	}
MR_def_label(fn__libs__timestamp__time_t_to_timestamp_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r10 = MR_tempr1;
	MR_r1 = MR_ctfield(0, MR_r1, 0);
	MR_r2 = MR_ctfield(0, MR_tempr1, 1);
	MR_r3 = MR_ctfield(0, MR_tempr1, 2);
	MR_r4 = MR_ctfield(0, MR_tempr1, 3);
	MR_r5 = MR_ctfield(0, MR_tempr1, 4);
	MR_r6 = MR_ctfield(0, MR_tempr1, 5);
	MR_r7 = MR_ctfield(0, MR_tempr1, 6);
	MR_r8 = MR_ctfield(0, MR_tempr1, 7);
	MR_r9 = (MR_Integer) 0;
	}
MR_def_label(fn__libs__timestamp__time_t_to_timestamp_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	{
	MR_Integer	Yr;
	MR_Integer	Mnt;
	MR_Integer	MD;
	MR_Integer	Hrs;
	MR_Integer	Min;
	MR_Integer	Sec;
	MR_Integer	YD;
	MR_Integer	WD;
	MR_Integer	N;
	MR_String	Result;
#define	MR_PROC_LABEL	mercury__fn__libs__timestamp__time_t_to_timestamp_1_0
	Yr = MR_r1;
	Mnt = MR_r2;
	MD = MR_r3;
	Hrs = MR_r4;
	Min = MR_r5;
	Sec = MR_r6;
	YD = MR_r7;
	WD = MR_r8;
	N = MR_r9;
	MR_OBTAIN_GLOBAL_LOCK("gmtime_to_timestamp_2");
{
#line 93 "timestamp.m"
{
    int size;
    struct tm t;

    t.tm_sec = Sec;
    t.tm_min = Min;
    t.tm_hour = Hrs;
    t.tm_mon = Mnt;
    t.tm_year = Yr;
    t.tm_wday = WD;
    t.tm_mday = MD;
    t.tm_yday = YD;
    t.tm_isdst = N;

    size = sizeof "yyyy-mm-dd hh:mm:ss";
    MR_allocate_aligned_string_msg(Result, size - 1, MR_PROC_LABEL);

    strftime(Result, size, "%Y-%m-%d %H:%M:%S", &t);
};}
#line 303 "libs.timestamp.c"
	MR_RELEASE_GLOBAL_LOCK("gmtime_to_timestamp_2");
	MR_tempr1 = (MR_Word) Result;
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(1);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__timestamp_module2)
	MR_init_entry1(fn__libs__timestamp__timestamp_to_string_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__libs__timestamp__timestamp_to_string_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__string__length_1_0);
MR_decl_entry(fn__string__unsafe_substring_3_0);
MR_decl_entry(string__to_int_2_0);
MR_decl_entry(string__unsafe_index_3_0);

MR_BEGIN_MODULE(libs__timestamp_module3)
	MR_init_entry1(fn__libs__timestamp__string_to_timestamp_1_0);
	MR_init_label8(fn__libs__timestamp__string_to_timestamp_1_0,2,3,4,5,7,8,9,11)
	MR_init_label8(fn__libs__timestamp__string_to_timestamp_1_0,12,13,15,16,17,19,20,21)
	MR_init_label4(fn__libs__timestamp__string_to_timestamp_1_0,23,24,25,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__libs__timestamp__string_to_timestamp_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__string__length_1_0,
		fn__libs__timestamp__string_to_timestamp_1_0_i2);
MR_def_label(fn__libs__timestamp__string_to_timestamp_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("yyyy-mm-dd hh:mm:ss", 19);
	MR_np_call_localret_ent(fn__string__length_1_0,
		fn__libs__timestamp__string_to_timestamp_1_0_i3);
MR_def_label(fn__libs__timestamp__string_to_timestamp_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_sv(3) != MR_r1)) {
		MR_GOTO_LAB(fn__libs__timestamp__string_to_timestamp_1_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 0;
	MR_r3 = (MR_Integer) 4;
	MR_np_call_localret_ent(fn__string__unsafe_substring_3_0,
		fn__libs__timestamp__string_to_timestamp_1_0_i4);
MR_def_label(fn__libs__timestamp__string_to_timestamp_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(string__to_int_2_0,
		fn__libs__timestamp__string_to_timestamp_1_0_i5);
MR_def_label(fn__libs__timestamp__string_to_timestamp_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__libs__timestamp__string_to_timestamp_1_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 4;
	MR_np_call_localret_ent(string__unsafe_index_3_0,
		fn__libs__timestamp__string_to_timestamp_1_0_i7);
MR_def_label(fn__libs__timestamp__string_to_timestamp_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 45 != (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(fn__libs__timestamp__string_to_timestamp_1_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 5;
	MR_r3 = (MR_Integer) 2;
	MR_np_call_localret_ent(fn__string__unsafe_substring_3_0,
		fn__libs__timestamp__string_to_timestamp_1_0_i8);
MR_def_label(fn__libs__timestamp__string_to_timestamp_1_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(string__to_int_2_0,
		fn__libs__timestamp__string_to_timestamp_1_0_i9);
MR_def_label(fn__libs__timestamp__string_to_timestamp_1_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__libs__timestamp__string_to_timestamp_1_0_i1);
	}
	if (MR_INT_LT(MR_r2,1)) {
		MR_GOTO_LAB(fn__libs__timestamp__string_to_timestamp_1_0_i1);
	}
	if (MR_INT_GT(MR_r2,12)) {
		MR_GOTO_LAB(fn__libs__timestamp__string_to_timestamp_1_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 7;
	MR_np_call_localret_ent(string__unsafe_index_3_0,
		fn__libs__timestamp__string_to_timestamp_1_0_i11);
MR_def_label(fn__libs__timestamp__string_to_timestamp_1_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 45 != (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(fn__libs__timestamp__string_to_timestamp_1_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 8;
	MR_r3 = (MR_Integer) 2;
	MR_np_call_localret_ent(fn__string__unsafe_substring_3_0,
		fn__libs__timestamp__string_to_timestamp_1_0_i12);
MR_def_label(fn__libs__timestamp__string_to_timestamp_1_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(string__to_int_2_0,
		fn__libs__timestamp__string_to_timestamp_1_0_i13);
MR_def_label(fn__libs__timestamp__string_to_timestamp_1_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__libs__timestamp__string_to_timestamp_1_0_i1);
	}
	if (MR_INT_LT(MR_r2,1)) {
		MR_GOTO_LAB(fn__libs__timestamp__string_to_timestamp_1_0_i1);
	}
	if (MR_INT_GT(MR_r2,31)) {
		MR_GOTO_LAB(fn__libs__timestamp__string_to_timestamp_1_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 10;
	MR_np_call_localret_ent(string__unsafe_index_3_0,
		fn__libs__timestamp__string_to_timestamp_1_0_i15);
MR_def_label(fn__libs__timestamp__string_to_timestamp_1_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 32 != (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(fn__libs__timestamp__string_to_timestamp_1_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 11;
	MR_r3 = (MR_Integer) 2;
	MR_np_call_localret_ent(fn__string__unsafe_substring_3_0,
		fn__libs__timestamp__string_to_timestamp_1_0_i16);
MR_def_label(fn__libs__timestamp__string_to_timestamp_1_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(string__to_int_2_0,
		fn__libs__timestamp__string_to_timestamp_1_0_i17);
MR_def_label(fn__libs__timestamp__string_to_timestamp_1_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__libs__timestamp__string_to_timestamp_1_0_i1);
	}
	if (MR_INT_LT(MR_r2,0)) {
		MR_GOTO_LAB(fn__libs__timestamp__string_to_timestamp_1_0_i1);
	}
	if (MR_INT_GT(MR_r2,23)) {
		MR_GOTO_LAB(fn__libs__timestamp__string_to_timestamp_1_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 13;
	MR_np_call_localret_ent(string__unsafe_index_3_0,
		fn__libs__timestamp__string_to_timestamp_1_0_i19);
MR_def_label(fn__libs__timestamp__string_to_timestamp_1_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 58 != (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(fn__libs__timestamp__string_to_timestamp_1_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 14;
	MR_r3 = (MR_Integer) 2;
	MR_np_call_localret_ent(fn__string__unsafe_substring_3_0,
		fn__libs__timestamp__string_to_timestamp_1_0_i20);
MR_def_label(fn__libs__timestamp__string_to_timestamp_1_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(string__to_int_2_0,
		fn__libs__timestamp__string_to_timestamp_1_0_i21);
MR_def_label(fn__libs__timestamp__string_to_timestamp_1_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__libs__timestamp__string_to_timestamp_1_0_i1);
	}
	if (MR_INT_LT(MR_r2,0)) {
		MR_GOTO_LAB(fn__libs__timestamp__string_to_timestamp_1_0_i1);
	}
	if (MR_INT_GT(MR_r2,59)) {
		MR_GOTO_LAB(fn__libs__timestamp__string_to_timestamp_1_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 16;
	MR_np_call_localret_ent(string__unsafe_index_3_0,
		fn__libs__timestamp__string_to_timestamp_1_0_i23);
MR_def_label(fn__libs__timestamp__string_to_timestamp_1_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 58 != (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(fn__libs__timestamp__string_to_timestamp_1_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 17;
	MR_r3 = (MR_Integer) 2;
	MR_np_call_localret_ent(fn__string__unsafe_substring_3_0,
		fn__libs__timestamp__string_to_timestamp_1_0_i24);
MR_def_label(fn__libs__timestamp__string_to_timestamp_1_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(string__to_int_2_0,
		fn__libs__timestamp__string_to_timestamp_1_0_i25);
MR_def_label(fn__libs__timestamp__string_to_timestamp_1_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__libs__timestamp__string_to_timestamp_1_0_i1);
	}
	if (MR_INT_LT(MR_r2,0)) {
		MR_GOTO_LAB(fn__libs__timestamp__string_to_timestamp_1_0_i1);
	}
	if (MR_INT_GT(MR_r2,61)) {
		MR_GOTO_LAB(fn__libs__timestamp__string_to_timestamp_1_0_i1);
	}
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(fn__libs__timestamp__string_to_timestamp_1_0,1)
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


MR_BEGIN_MODULE(libs__timestamp_module4)
	MR_init_entry1(fn__libs__timestamp__oldest_timestamp_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__libs__timestamp__oldest_timestamp_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("0000-00-00 00:00:00", 19);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__timestamp_module5)
	MR_init_entry1(fn__libs__timestamp__newest_timestamp_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__libs__timestamp__newest_timestamp_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("9999-99-99 99:99:99", 19);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__timestamp_module6)
	MR_init_entry1(__Unify___libs__timestamp__timestamp_0_0);
	MR_init_label1(__Unify___libs__timestamp__timestamp_0_0,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___libs__timestamp__timestamp_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___libs__timestamp__timestamp_0_0_i4);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (strcmp((char *) (MR_Word *) MR_sv(1), (char *) (MR_Word *) MR_sv(2)) == 0);
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Unify___libs__timestamp__timestamp_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_string_3_0);

MR_BEGIN_MODULE(libs__timestamp_module7)
	MR_init_entry1(__Compare___libs__timestamp__timestamp_0_0);
	MR_init_label2(__Compare___libs__timestamp__timestamp_0_0,3,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___libs__timestamp__timestamp_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___libs__timestamp__timestamp_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___libs__timestamp__timestamp_0_0_i2);
MR_def_label(__Compare___libs__timestamp__timestamp_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___libs__timestamp__timestamp_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__libs__timestamp_maybe_bunch_0(void)
{
	libs__timestamp_module0();
	libs__timestamp_module1();
	libs__timestamp_module2();
	libs__timestamp_module3();
	libs__timestamp_module4();
	libs__timestamp_module5();
	libs__timestamp_module6();
	libs__timestamp_module7();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__libs__timestamp__init(void);
void mercury__libs__timestamp__init_type_tables(void);
void mercury__libs__timestamp__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__libs__timestamp__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__libs__timestamp__init_complexity_procs(void);
#endif

void mercury__libs__timestamp__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__libs__timestamp_maybe_bunch_0();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_libs__timestamp__type_ctor_info_timestamp_0,
		libs__timestamp__timestamp_0_0);
	mercury__libs__timestamp__init_debugger();
}

void mercury__libs__timestamp__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_libs__timestamp__type_ctor_info_timestamp_0);
	}
}


void mercury__libs__timestamp__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__libs__timestamp__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__libs__timestamp);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__libs__timestamp__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
