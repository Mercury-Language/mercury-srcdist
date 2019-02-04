/*
** Automatically generated from `delay_slot.m'
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
INIT mercury__ll_backend__delay_slot__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 140 "../library/io.int2"
#include "io.mh"

#line 28 "ll_backend.delay_slot.c"
#line 150 "../library/io.int2"
#include "time.mh"

#line 32 "ll_backend.delay_slot.c"
#line 151 "../library/io.int2"
#include "string.mh"

#line 36 "ll_backend.delay_slot.c"
#line 33 "../library/array.int2"
#include "array.mh"

#line 40 "ll_backend.delay_slot.c"
#line 39 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 44 "ll_backend.delay_slot.c"
#line 31 "../library/bitmap.int2"
#include "bitmap.mh"

#line 48 "ll_backend.delay_slot.c"
#line 49 "ll_backend.delay_slot.c"
#include "ll_backend.delay_slot.mh"

#line 52 "ll_backend.delay_slot.c"
#line 53 "ll_backend.delay_slot.c"
#ifndef LL_BACKEND__DELAY_SLOT_DECL_GUARD
#define LL_BACKEND__DELAY_SLOT_DECL_GUARD

#line 57 "ll_backend.delay_slot.c"
#line 58 "ll_backend.delay_slot.c"

#endif
#line 61 "ll_backend.delay_slot.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_0 {
	MR_Word * f1;
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_0 mercury_common_0[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_1 {
	MR_Integer f1[2];
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_2 {
	MR_Integer f1;
	MR_Word * f2;
	MR_Word * f3;
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];
MR_decl_label5(ll_backend__delay_slot__fill_branch_delay_slot_2_0, 102,15,16,4,22)
MR_def_extern_entry(ll_backend__delay_slot__fill_branch_delay_slot_2_0)

static const struct mercury_type_0 mercury_common_0[1] =
{
{
MR_tbmkword(0, 0)
},
};

static const struct mercury_type_1 mercury_common_1[1] =
{
{
{
0,
0
}
},
};

static const struct mercury_type_2 mercury_common_2[1] =
{
{
1,
MR_TAG_COMMON(3,1,0),
MR_TAG_COMMON(0,0,0)
},
};



MR_decl_entry(string__append_3_2);

MR_BEGIN_MODULE(ll_backend__delay_slot_module0)
	MR_init_entry1(ll_backend__delay_slot__fill_branch_delay_slot_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__delay_slot__fill_branch_delay_slot_2_0);
	MR_init_label5(ll_backend__delay_slot__fill_branch_delay_slot_2_0,102,15,16,4,22)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fill_branch_delay_slot'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__delay_slot__fill_branch_delay_slot_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__delay_slot__fill_branch_delay_slot_2_0_i102);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(ll_backend__delay_slot__fill_branch_delay_slot_2_0,102)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_r2 = MR_tfield(1, MR_r1, 1);
	MR_sv(1) = MR_tfield(1, MR_r1, 0);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7;
	MR_tempr1 = MR_tfield(0, MR_sv(1), 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,5)) {
		MR_GOTO_LAB(ll_backend__delay_slot__fill_branch_delay_slot_2_0_i4);
	}
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(ll_backend__delay_slot__fill_branch_delay_slot_2_0_i4);
	}
	MR_tempr1 = MR_tfield(1, MR_r2, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(ll_backend__delay_slot__fill_branch_delay_slot_2_0_i4);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TEST(MR_tempr2,0,0)) {
		MR_GOTO_LAB(ll_backend__delay_slot__fill_branch_delay_slot_2_0_i4);
	}
	MR_tempr3 = MR_tfield(0, MR_tfield(1, MR_r2, 0), 0);
	if (MR_RTAGS_TESTR(MR_tempr3,3,9)) {
		MR_GOTO_LAB(ll_backend__delay_slot__fill_branch_delay_slot_2_0_i4);
	}
	MR_tempr3 = MR_tfield(0, MR_tfield(1, MR_tempr1, 0), 0);
	if (MR_RTAGS_TESTR(MR_tempr3,3,24)) {
		MR_GOTO_LAB(ll_backend__delay_slot__fill_branch_delay_slot_2_0_i4);
	}
	MR_tempr4 = MR_tfield(1, MR_tempr2, 0);
	MR_tempr5 = MR_tfield(0, MR_tempr4, 0);
	if (MR_RTAGS_TESTR(MR_tempr5,3,1)) {
		MR_GOTO_LAB(ll_backend__delay_slot__fill_branch_delay_slot_2_0_i4);
	}
	MR_tempr6 = MR_tfield(3, MR_tempr5, 1);
	if (MR_RTAGS_TESTR(MR_tempr6,3,0)) {
		MR_GOTO_LAB(ll_backend__delay_slot__fill_branch_delay_slot_2_0_i4);
	}
	MR_tempr7 = MR_tfield(3, MR_tempr3, 1);
	MR_tempr3 = MR_tfield(3, MR_tempr6, 1);
	if ((MR_tempr7 != MR_tempr3)) {
		MR_GOTO_LAB(ll_backend__delay_slot__fill_branch_delay_slot_2_0_i4);
	}
	MR_tempr3 = MR_tfield(3, MR_tempr5, 2);
	if (MR_PTAG_TESTR(MR_tempr3,0)) {
		MR_GOTO_LAB(ll_backend__delay_slot__fill_branch_delay_slot_2_0_i4);
	}
	MR_tempr5 = MR_tfield(0, MR_tempr3, 0);
	if (MR_LTAGS_TESTR(MR_tempr5,0,0)) {
		MR_GOTO_LAB(ll_backend__delay_slot__fill_branch_delay_slot_2_0_i4);
	}
	MR_sv(2) = MR_tfield(1, MR_r2, 0);
	MR_sv(3) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(4) = MR_tfield(0, MR_tempr4, 1);
	MR_r1 = MR_tfield(1, MR_tempr2, 1);
	}
	MR_np_localcall_lab(ll_backend__delay_slot__fill_branch_delay_slot_2_0,
		ll_backend__delay_slot__fill_branch_delay_slot_2_0_i15);
MR_def_label(ll_backend__delay_slot__fill_branch_delay_slot_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const(" (early save in delay slot)", 27);
	}
	MR_np_call_localret_ent(string__append_3_2,
		ll_backend__delay_slot__fill_branch_delay_slot_2_0_i16);
MR_def_label(ll_backend__delay_slot__fill_branch_delay_slot_2_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_TAG_COMMON(3,2,0);
	MR_tfield(0, MR_r2, 1) = MR_r1;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(4);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_sv(1);
	MR_tfield(1, MR_r1, 1) = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
MR_def_label(ll_backend__delay_slot__fill_branch_delay_slot_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_np_localcall_lab(ll_backend__delay_slot__fill_branch_delay_slot_2_0,
		ll_backend__delay_slot__fill_branch_delay_slot_2_0_i22);
MR_def_label(ll_backend__delay_slot__fill_branch_delay_slot_2_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(1);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__ll_backend__delay_slot_maybe_bunch_0(void)
{
	ll_backend__delay_slot_module0();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__ll_backend__delay_slot__init(void);
void mercury__ll_backend__delay_slot__init_type_tables(void);
void mercury__ll_backend__delay_slot__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__ll_backend__delay_slot__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__ll_backend__delay_slot__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__ll_backend__delay_slot__init_threadscope_string_table(void);
#endif

void mercury__ll_backend__delay_slot__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__ll_backend__delay_slot_maybe_bunch_0();
	mercury__ll_backend__delay_slot__init_debugger();
}

void mercury__ll_backend__delay_slot__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}


void mercury__ll_backend__delay_slot__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__ll_backend__delay_slot__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__ll_backend__delay_slot);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__ll_backend__delay_slot__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__ll_backend__delay_slot__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
