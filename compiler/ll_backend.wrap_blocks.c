/*
** Automatically generated from `wrap_blocks.m'
** by the Mercury compiler,
** version rotd-2007-06-30, configured for i686-pc-linux-gnu.
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
INIT mercury__ll_backend__wrap_blocks__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 134 "../library/io.int2"
#include "io.mh"

#line 27 "ll_backend.wrap_blocks.c"
#line 142 "../library/io.int2"
#include "string.mh"

#line 31 "ll_backend.wrap_blocks.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 35 "ll_backend.wrap_blocks.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 39 "ll_backend.wrap_blocks.c"
#line 30 "../library/array.int2"
#include "array.mh"

#line 43 "ll_backend.wrap_blocks.c"
#line 44 "ll_backend.wrap_blocks.c"
#include "ll_backend.wrap_blocks.mh"

#line 47 "ll_backend.wrap_blocks.c"
#line 48 "ll_backend.wrap_blocks.c"
#ifndef LL_BACKEND__WRAP_BLOCKS_DECL_GUARD
#define LL_BACKEND__WRAP_BLOCKS_DECL_GUARD

#line 52 "ll_backend.wrap_blocks.c"
#line 53 "ll_backend.wrap_blocks.c"

#endif
#line 56 "ll_backend.wrap_blocks.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif
MR_decl_label8(ll_backend__wrap_blocks__wrap_instrs_5_0, 63,4,8,7,10,13,14,9)
MR_decl_label8(ll_backend__wrap_blocks__wrap_instrs_5_0, 16,18,19,15,6,23,3,25)
MR_decl_label2(ll_backend__wrap_blocks__wrap_instrs_5_0, 29,28)
MR_decl_static(ll_backend__wrap_blocks__wrap_instrs_5_0)
MR_def_extern_entry(ll_backend__wrap_blocks__wrap_blocks_2_0)

MR_decl_entry(ll_backend__opt_util__count_temps_instr_5_0);
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_instruction_0;
MR_decl_entry(list__reverse_2_0);
MR_decl_entry(fn__ll_backend__opt_util__can_instr_fall_through_1_0);
MR_decl_entry(libs__compiler_util__unexpected_2_0);

MR_BEGIN_MODULE(ll_backend__wrap_blocks_module0)
	MR_init_entry1(ll_backend__wrap_blocks__wrap_instrs_5_0);
	MR_init_label8(ll_backend__wrap_blocks__wrap_instrs_5_0,63,4,8,7,10,13,14,9)
	MR_init_label8(ll_backend__wrap_blocks__wrap_instrs_5_0,16,18,19,15,6,23,3,25)
	MR_init_label2(ll_backend__wrap_blocks__wrap_instrs_5_0,29,28)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__wrap_blocks__wrap_instrs_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
MR_def_label(ll_backend__wrap_blocks__wrap_instrs_5_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__wrap_blocks__wrap_instrs_5_0_i3);
	}
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_ctfield(1, MR_r1, 0);
	MR_sv(3) = MR_ctfield(1, MR_r1, 1);
	MR_sv(4) = MR_ctfield(0, MR_sv(2), 0);
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(ll_backend__opt_util__count_temps_instr_5_0,
		ll_backend__wrap_blocks__wrap_instrs_5_0_i4);
MR_def_label(ll_backend__wrap_blocks__wrap_instrs_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_LE(MR_r1,0)) {
		MR_GOTO_LAB(ll_backend__wrap_blocks__wrap_instrs_5_0_i8);
	}
	MR_sv(5) = MR_r2;
	MR_r2 = MR_sv(1);
	MR_GOTO_LAB(ll_backend__wrap_blocks__wrap_instrs_5_0_i7);
MR_def_label(ll_backend__wrap_blocks__wrap_instrs_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_LE(MR_r2,0)) {
		MR_GOTO_LAB(ll_backend__wrap_blocks__wrap_instrs_5_0_i6);
	}
	MR_sv(5) = MR_r2;
	MR_r2 = MR_sv(1);
MR_def_label(ll_backend__wrap_blocks__wrap_instrs_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TEST(MR_sv(4),3,2)) {
		MR_GOTO_LAB(ll_backend__wrap_blocks__wrap_instrs_5_0_i10);
	}
	if (MR_RTAGS_TESTR(MR_sv(4),3,4)) {
		MR_GOTO_LAB(ll_backend__wrap_blocks__wrap_instrs_5_0_i9);
	}
MR_def_label(ll_backend__wrap_blocks__wrap_instrs_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_np_call_localret_ent(list__reverse_2_0,
		ll_backend__wrap_blocks__wrap_instrs_5_0_i13);
MR_def_label(ll_backend__wrap_blocks__wrap_instrs_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Integer) 0;
	MR_r3 = (MR_Integer) 0;
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_localcall_lab(ll_backend__wrap_blocks__wrap_instrs_5_0,
		ll_backend__wrap_blocks__wrap_instrs_5_0_i14);
MR_def_label(ll_backend__wrap_blocks__wrap_instrs_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(4);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(5);
	MR_tfield(3, MR_tempr1, 3) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_string_const("", 0);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_tempr2;
	MR_tfield(1, MR_r1, 1) = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
MR_def_label(ll_backend__wrap_blocks__wrap_instrs_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_sv(4) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__ll_backend__opt_util__can_instr_fall_through_1_0,
		ll_backend__wrap_blocks__wrap_instrs_5_0_i16);
MR_def_label(ll_backend__wrap_blocks__wrap_instrs_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ll_backend__wrap_blocks__wrap_instrs_5_0_i15);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	}
	MR_np_call_localret_ent(list__reverse_2_0,
		ll_backend__wrap_blocks__wrap_instrs_5_0_i18);
MR_def_label(ll_backend__wrap_blocks__wrap_instrs_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Integer) 0;
	MR_r3 = (MR_Integer) 0;
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_localcall_lab(ll_backend__wrap_blocks__wrap_instrs_5_0,
		ll_backend__wrap_blocks__wrap_instrs_5_0_i19);
MR_def_label(ll_backend__wrap_blocks__wrap_instrs_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(4);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(5);
	MR_tfield(3, MR_tempr1, 3) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_string_const("", 0);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
MR_def_label(ll_backend__wrap_blocks__wrap_instrs_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(1);
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(ll_backend__wrap_blocks__wrap_instrs_5_0_i63);
	}
MR_def_label(ll_backend__wrap_blocks__wrap_instrs_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Integer) 0;
	MR_r3 = (MR_Integer) 0;
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_localcall_lab(ll_backend__wrap_blocks__wrap_instrs_5_0,
		ll_backend__wrap_blocks__wrap_instrs_5_0_i23);
MR_def_label(ll_backend__wrap_blocks__wrap_instrs_5_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
MR_def_label(ll_backend__wrap_blocks__wrap_instrs_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r4,0,0)) {
		MR_GOTO_LAB(ll_backend__wrap_blocks__wrap_instrs_5_0_i25);
	}
	MR_r1 = (MR_Word) MR_string_const("wrap_blocks.m", 13);
	MR_r2 = (MR_Word) MR_string_const("procedure ends with fallthrough", 31);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(ll_backend__wrap_blocks__wrap_instrs_5_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_GT(MR_r2,0)) {
		MR_GOTO_LAB(ll_backend__wrap_blocks__wrap_instrs_5_0_i29);
	}
	if (MR_INT_LE(MR_r3,0)) {
		MR_GOTO_LAB(ll_backend__wrap_blocks__wrap_instrs_5_0_i28);
	}
MR_def_label(ll_backend__wrap_blocks__wrap_instrs_5_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("wrap_blocks.m", 13);
	MR_r2 = (MR_Word) MR_string_const("procedure ends without closing block", 36);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(ll_backend__wrap_blocks__wrap_instrs_5_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__wrap_blocks_module1)
	MR_init_entry1(ll_backend__wrap_blocks__wrap_blocks_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__wrap_blocks__wrap_blocks_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 0;
	MR_r3 = (MR_Integer) 0;
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_tailcall_ent(ll_backend__wrap_blocks__wrap_instrs_5_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__ll_backend__wrap_blocks_maybe_bunch_0(void)
{
	ll_backend__wrap_blocks_module0();
	ll_backend__wrap_blocks_module1();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__ll_backend__wrap_blocks__init(void);
void mercury__ll_backend__wrap_blocks__init_type_tables(void);
void mercury__ll_backend__wrap_blocks__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__ll_backend__wrap_blocks__write_out_proc_statics(FILE *fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__ll_backend__wrap_blocks__init_complexity_procs(void);
#endif

void mercury__ll_backend__wrap_blocks__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__ll_backend__wrap_blocks_maybe_bunch_0();
	mercury__ll_backend__wrap_blocks__init_debugger();
}

void mercury__ll_backend__wrap_blocks__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}


void mercury__ll_backend__wrap_blocks__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__ll_backend__wrap_blocks__write_out_proc_statics(FILE *fp)
{
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__ll_backend__wrap_blocks__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
