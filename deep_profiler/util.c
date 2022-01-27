/*
** Automatically generated from `util.m'
** by the Mercury compiler,
** version DEV, configured for x86_64-apple-darwin12.2.1.
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
INIT mercury__util__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 140 "../library/io.int2"
#include "io.mh"

#line 28 "util.c"
#line 150 "../library/io.int2"
#include "time.mh"

#line 32 "util.c"
#line 151 "../library/io.int2"
#include "string.mh"

#line 36 "util.c"
#line 31 "../library/bitmap.int2"
#include "bitmap.mh"

#line 40 "util.c"
#line 41 "util.c"
#include "util.mh"

#line 44 "util.c"
#line 45 "util.c"
#ifndef UTIL_DECL_GUARD
#define UTIL_DECL_GUARD

#line 49 "util.c"
#line 50 "util.c"

#endif
#line 53 "util.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif
MR_decl_label2(util__find_split_char_2_5_0, 3,1)
MR_decl_label1(util__split_3_0, 2)
MR_decl_label6(util__split_2_3_0, 3,5,6,7,2,9)
MR_decl_static(util__find_split_char_2_5_0)
MR_decl_static(util__split_2_3_0)
MR_def_extern_entry(util__split_3_0)




MR_BEGIN_MODULE(util_module0)
	MR_init_entry1(util__find_split_char_2_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__util__find_split_char_2_5_0);
	MR_init_label2(util__find_split_char_2_5_0,3,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'find_split_char_2'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(util__find_split_char_2_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(util__find_split_char_2_5_0_i1);
	}
	MR_r4 = MR_tfield(1, MR_r1, 1);
	MR_r5 = MR_tfield(1, MR_r1, 0);
	if ((MR_r5 != MR_r2)) {
		MR_GOTO_LAB(util__find_split_char_2_5_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = MR_r4;
	MR_r2 = MR_tempr1;
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(util__find_split_char_2_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r5;
	MR_tfield(1, MR_tempr1, 1) = MR_r3;
	MR_r1 = MR_r4;
	MR_r3 = MR_tempr1;
	MR_np_localtailcall(util__find_split_char_2_5_0);
	}
MR_def_label(util__find_split_char_2_5_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_character_0;
MR_decl_entry(list__reverse_2_0);
MR_decl_entry(string__from_char_list_2_0);

MR_BEGIN_MODULE(util_module1)
	MR_init_entry1(util__split_2_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__util__split_2_3_0);
	MR_init_label6(util__split_2_3_0,3,5,6,7,2,9)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'split_2'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(util__split_2_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(3) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(util__find_split_char_2_5_0,
		util__split_2_3_0_i3);
MR_def_label(util__split_2_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(util__split_2_3_0_i2);
	}
	MR_sv(2) = MR_r3;
	MR_r1 = (MR_Word) MR_CHAR_CTOR_ADDR;
	MR_np_call_localret_ent(list__reverse_2_0,
		util__split_2_3_0_i5);
MR_def_label(util__split_2_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(string__from_char_list_2_0,
		util__split_2_3_0_i6);
MR_def_label(util__split_2_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_np_localcall_lab(util__split_2_3_0,
		util__split_2_3_0_i7);
MR_def_label(util__split_2_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(3);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(4);
MR_def_label(util__split_2_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(string__from_char_list_2_0,
		util__split_2_3_0_i9);
MR_def_label(util__split_2_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(string__to_char_list_2_0);

MR_BEGIN_MODULE(util_module2)
	MR_init_entry1(util__split_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__util__split_3_0);
	MR_init_label1(util__split_3_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'split'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__util__split_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(string__to_char_list_2_0,
		util__split_3_0_i2);
MR_def_label(util__split_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(util__split_2_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__util_maybe_bunch_0(void)
{
	util_module0();
	util_module1();
	util_module2();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__util__init(void);
void mercury__util__init_type_tables(void);
void mercury__util__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__util__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__util__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__util__init_threadscope_string_table(void);
#endif

void mercury__util__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__util_maybe_bunch_0();
	mercury__util__init_debugger();
}

void mercury__util__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}


void mercury__util__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__util__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_layout__util);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__util__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__util__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
