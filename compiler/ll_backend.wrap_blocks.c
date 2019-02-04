/*
** Automatically generated from `wrap_blocks.m'
** by the Mercury compiler,
** version rotd-2010-06-17, configured for x86_64-unknown-linux-gnu.
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
INIT mercury__ll_backend__wrap_blocks__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 136 "../library/io.int2"
#include "io.mh"

#line 28 "ll_backend.wrap_blocks.c"
#line 144 "../library/io.int2"
#include "string.mh"

#line 32 "ll_backend.wrap_blocks.c"
#line 33 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 36 "ll_backend.wrap_blocks.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 40 "ll_backend.wrap_blocks.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 44 "ll_backend.wrap_blocks.c"
#line 31 "../library/array.int2"
#include "array.mh"

#line 48 "ll_backend.wrap_blocks.c"
#line 49 "ll_backend.wrap_blocks.c"
#include "ll_backend.wrap_blocks.mh"

#line 52 "ll_backend.wrap_blocks.c"
#line 53 "ll_backend.wrap_blocks.c"
#ifndef LL_BACKEND__WRAP_BLOCKS_DECL_GUARD
#define LL_BACKEND__WRAP_BLOCKS_DECL_GUARD

#line 57 "ll_backend.wrap_blocks.c"
#line 58 "ll_backend.wrap_blocks.c"

#endif
#line 61 "ll_backend.wrap_blocks.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif
MR_decl_label10(ll_backend__wrap_blocks__wrap_instrs_5_0, 72,7,6,5,3,12,16,15,18,21)
MR_decl_label8(ll_backend__wrap_blocks__wrap_instrs_5_0, 22,17,28,31,32,27,14,40)
MR_decl_static(ll_backend__wrap_blocks__wrap_instrs_5_0)
MR_def_extern_entry(ll_backend__wrap_blocks__wrap_blocks_2_0)



MR_decl_entry(libs__compiler_util__unexpected_2_0);
MR_decl_entry(ll_backend__opt_util__count_temps_instr_5_0);
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_instruction_0;
MR_decl_entry(list__reverse_2_0);
MR_decl_entry(fn__ll_backend__opt_util__can_instr_fall_through_1_0);

MR_BEGIN_MODULE(ll_backend__wrap_blocks_module0)
	MR_init_entry1(ll_backend__wrap_blocks__wrap_instrs_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__wrap_blocks__wrap_instrs_5_0);
	MR_init_label10(ll_backend__wrap_blocks__wrap_instrs_5_0,72,7,6,5,3,12,16,15,18,21)
	MR_init_label8(ll_backend__wrap_blocks__wrap_instrs_5_0,22,17,28,31,32,27,14,40)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'wrap_instrs'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__wrap_blocks__wrap_instrs_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
MR_def_label(ll_backend__wrap_blocks__wrap_instrs_5_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__wrap_blocks__wrap_instrs_5_0_i3);
	}
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(ll_backend__wrap_blocks__wrap_instrs_5_0_i5);
	}
	if (MR_INT_GT(MR_r2,0)) {
		MR_GOTO_LAB(ll_backend__wrap_blocks__wrap_instrs_5_0_i7);
	}
	if (MR_INT_LE(MR_r3,0)) {
		MR_GOTO_LAB(ll_backend__wrap_blocks__wrap_instrs_5_0_i6);
	}
MR_def_label(ll_backend__wrap_blocks__wrap_instrs_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("wrap_blocks.m", 13);
	MR_r2 = (MR_Word) MR_string_const("procedure ends without closing block", 36);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(ll_backend__wrap_blocks__wrap_instrs_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(6);
MR_def_label(ll_backend__wrap_blocks__wrap_instrs_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("wrap_blocks.m", 13);
	MR_r2 = (MR_Word) MR_string_const("procedure ends with fallthrough", 31);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(ll_backend__wrap_blocks__wrap_instrs_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_tfield(1, MR_r1, 0);
	MR_sv(3) = MR_tfield(1, MR_r1, 1);
	MR_sv(4) = MR_tfield(0, MR_sv(2), 0);
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(ll_backend__opt_util__count_temps_instr_5_0,
		ll_backend__wrap_blocks__wrap_instrs_5_0_i12);
MR_def_label(ll_backend__wrap_blocks__wrap_instrs_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_LE(MR_r1,0)) {
		MR_GOTO_LAB(ll_backend__wrap_blocks__wrap_instrs_5_0_i16);
	}
	MR_sv(5) = MR_r2;
	MR_r2 = MR_sv(1);
	MR_GOTO_LAB(ll_backend__wrap_blocks__wrap_instrs_5_0_i15);
MR_def_label(ll_backend__wrap_blocks__wrap_instrs_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_LE(MR_r2,0)) {
		MR_GOTO_LAB(ll_backend__wrap_blocks__wrap_instrs_5_0_i14);
	}
	MR_sv(5) = MR_r2;
	MR_r2 = MR_sv(1);
MR_def_label(ll_backend__wrap_blocks__wrap_instrs_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TEST(MR_sv(4),3,5)) {
		MR_GOTO_LAB(ll_backend__wrap_blocks__wrap_instrs_5_0_i18);
	}
	if (MR_RTAGS_TESTR(MR_sv(4),3,3)) {
		MR_GOTO_LAB(ll_backend__wrap_blocks__wrap_instrs_5_0_i17);
	}
MR_def_label(ll_backend__wrap_blocks__wrap_instrs_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_np_call_localret_ent(list__reverse_2_0,
		ll_backend__wrap_blocks__wrap_instrs_5_0_i21);
MR_def_label(ll_backend__wrap_blocks__wrap_instrs_5_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Integer) 0;
	MR_r3 = (MR_Integer) 0;
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_localcall_lab(ll_backend__wrap_blocks__wrap_instrs_5_0,
		ll_backend__wrap_blocks__wrap_instrs_5_0_i22);
MR_def_label(ll_backend__wrap_blocks__wrap_instrs_5_0,22)
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
MR_def_label(ll_backend__wrap_blocks__wrap_instrs_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__ll_backend__opt_util__can_instr_fall_through_1_0,
		ll_backend__wrap_blocks__wrap_instrs_5_0_i28);
MR_def_label(ll_backend__wrap_blocks__wrap_instrs_5_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ll_backend__wrap_blocks__wrap_instrs_5_0_i27);
	}
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(2);
	MR_tfield(1, MR_r2, 1) = MR_sv(1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_np_call_localret_ent(list__reverse_2_0,
		ll_backend__wrap_blocks__wrap_instrs_5_0_i31);
MR_def_label(ll_backend__wrap_blocks__wrap_instrs_5_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Integer) 0;
	MR_r3 = (MR_Integer) 0;
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_localcall_lab(ll_backend__wrap_blocks__wrap_instrs_5_0,
		ll_backend__wrap_blocks__wrap_instrs_5_0_i32);
MR_def_label(ll_backend__wrap_blocks__wrap_instrs_5_0,32)
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
MR_def_label(ll_backend__wrap_blocks__wrap_instrs_5_0,27)
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
	MR_GOTO_LAB(ll_backend__wrap_blocks__wrap_instrs_5_0_i72);
	}
MR_def_label(ll_backend__wrap_blocks__wrap_instrs_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Integer) 0;
	MR_r3 = (MR_Integer) 0;
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_localcall_lab(ll_backend__wrap_blocks__wrap_instrs_5_0,
		ll_backend__wrap_blocks__wrap_instrs_5_0_i40);
MR_def_label(ll_backend__wrap_blocks__wrap_instrs_5_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__wrap_blocks_module1)
	MR_init_entry1(ll_backend__wrap_blocks__wrap_blocks_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__wrap_blocks__wrap_blocks_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'wrap_blocks'/2 mode 0 */
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
void mercury__ll_backend__wrap_blocks__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
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

void mercury__ll_backend__wrap_blocks__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__ll_backend__wrap_blocks);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__ll_backend__wrap_blocks__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
