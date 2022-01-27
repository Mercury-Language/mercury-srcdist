/*
** Automatically generated from `llds_to_x86_64_out.m'
** by the Mercury compiler,
** version rotd-2013-02-19, configured for x86_64-apple-darwin12.2.1.
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
INIT mercury__ll_backend__llds_to_x86_64_out__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 526 "../library/io.int"
#include "io.mh"

#line 28 "ll_backend.llds_to_x86_64_out.c"
#line 536 "../library/io.int"
#include "time.mh"

#line 32 "ll_backend.llds_to_x86_64_out.c"
#line 537 "../library/io.int"
#include "string.mh"

#line 36 "ll_backend.llds_to_x86_64_out.c"
#line 31 "../library/bitmap.int2"
#include "bitmap.mh"

#line 40 "ll_backend.llds_to_x86_64_out.c"
#line 33 "../library/array.int2"
#include "array.mh"

#line 44 "ll_backend.llds_to_x86_64_out.c"
#line 39 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 48 "ll_backend.llds_to_x86_64_out.c"
#line 49 "ll_backend.llds_to_x86_64_out.c"
#include "ll_backend.llds_to_x86_64_out.mh"

#line 52 "ll_backend.llds_to_x86_64_out.c"
#line 53 "ll_backend.llds_to_x86_64_out.c"
#ifndef LL_BACKEND__LLDS_TO_X86_64_OUT_DECL_GUARD
#define LL_BACKEND__LLDS_TO_X86_64_OUT_DECL_GUARD

#line 57 "ll_backend.llds_to_x86_64_out.c"
#line 58 "ll_backend.llds_to_x86_64_out.c"

#endif
#line 61 "ll_backend.llds_to_x86_64_out.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_0 {
	MR_Word * f1[3];
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_0 mercury_common_0[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_1 {
	MR_Word * f1[4];
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
MR_decl_label3(ll_backend__llds_to_x86_64_out__output_asm_instr_list_4_0, 13,4,15)
MR_decl_label3(ll_backend__llds_to_x86_64_out__output_asm_proc_list_4_0, 10,4,12)
MR_decl_static(ll_backend__llds_to_x86_64_out__output_asm_instr_list_4_0)
MR_decl_static(ll_backend__llds_to_x86_64_out__output_asm_proc_list_4_0)
MR_def_extern_entry(ll_backend__llds_to_x86_64_out__output_x86_64_asm_4_0)

extern const MR_BaseTypeclassInfo mercury_data_base_typeclass_info_stream__stream__arity2__io__output_stream__arity0__io__state__arity0__[];
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_output_stream_0;
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_state_0;
static const struct mercury_type_0 mercury_common_0[1] =
{
{
{
(MR_Word *) &mercury_data_base_typeclass_info_stream__stream__arity2__io__output_stream__arity0__io__state__arity0__,
MR_CTOR0_ADDR(io, output_stream),
MR_IO_CTOR_ADDR
}
},
};

extern const MR_BaseTypeclassInfo mercury_data_base_typeclass_info_stream__output__arity2__io__output_stream__arity0__io__state__arity0__[];
static const struct mercury_type_1 mercury_common_1[1] =
{
{
{
(MR_Word *) &mercury_data_base_typeclass_info_stream__output__arity2__io__output_stream__arity0__io__state__arity0__,
MR_TAG_COMMON(0,0,0),
MR_CTOR0_ADDR(io, output_stream),
MR_IO_CTOR_ADDR
}
},
};

extern const MR_BaseTypeclassInfo mercury_data_base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__string__arity0__io__state__arity0__[];
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
static const struct mercury_type_2 mercury_common_2[1] =
{
{
{
(MR_Word *) &mercury_data_base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__string__arity0__io__state__arity0__,
MR_TAG_COMMON(0,1,0),
MR_CTOR0_ADDR(io, output_stream),
MR_STRING_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
};



MR_decl_entry(ll_backend__x86_64_out__output_x86_64_instruction_4_0);

MR_BEGIN_MODULE(ll_backend__llds_to_x86_64_out_module0)
	MR_init_entry1(ll_backend__llds_to_x86_64_out__output_asm_instr_list_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__llds_to_x86_64_out__output_asm_instr_list_4_0);
	MR_init_label3(ll_backend__llds_to_x86_64_out__output_asm_instr_list_4_0,13,4,15)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_asm_instr_list'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__llds_to_x86_64_out__output_asm_instr_list_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(ll_backend__llds_to_x86_64_out__output_asm_instr_list_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64_out__output_asm_instr_list_4_0_i15);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(1, MR_r2, 1);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(ll_backend__x86_64_out__output_x86_64_instruction_4_0,
		ll_backend__llds_to_x86_64_out__output_asm_instr_list_4_0_i4);
MR_def_label(ll_backend__llds_to_x86_64_out__output_asm_instr_list_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(ll_backend__llds_to_x86_64_out__output_asm_instr_list_4_0_i13);
MR_def_label(ll_backend__llds_to_x86_64_out__output_asm_instr_list_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__llds_to_x86_64_out_module1)
	MR_init_entry1(ll_backend__llds_to_x86_64_out__output_asm_proc_list_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__llds_to_x86_64_out__output_asm_proc_list_4_0);
	MR_init_label3(ll_backend__llds_to_x86_64_out__output_asm_proc_list_4_0,10,4,12)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_asm_proc_list'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__llds_to_x86_64_out__output_asm_proc_list_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(ll_backend__llds_to_x86_64_out__output_asm_proc_list_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(ll_backend__llds_to_x86_64_out__output_asm_proc_list_4_0_i12);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(1, MR_r2, 1);
	MR_r2 = MR_tfield(0, MR_tfield(1, MR_r2, 0), 4);
	MR_np_call_localret_ent(ll_backend__llds_to_x86_64_out__output_asm_instr_list_4_0,
		ll_backend__llds_to_x86_64_out__output_asm_proc_list_4_0_i4);
MR_def_label(ll_backend__llds_to_x86_64_out__output_asm_proc_list_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(ll_backend__llds_to_x86_64_out__output_asm_proc_list_4_0_i10);
MR_def_label(ll_backend__llds_to_x86_64_out__output_asm_proc_list_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__llds_to_x86_64_out_module2)
	MR_init_entry1(ll_backend__llds_to_x86_64_out__output_x86_64_asm_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__llds_to_x86_64_out__output_x86_64_asm_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_x86_64_asm'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__llds_to_x86_64_out__output_x86_64_asm_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(ll_backend__llds_to_x86_64_out__output_asm_proc_list_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__ll_backend__llds_to_x86_64_out_maybe_bunch_0(void)
{
	ll_backend__llds_to_x86_64_out_module0();
	ll_backend__llds_to_x86_64_out_module1();
	ll_backend__llds_to_x86_64_out_module2();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__ll_backend__llds_to_x86_64_out__init(void);
void mercury__ll_backend__llds_to_x86_64_out__init_type_tables(void);
void mercury__ll_backend__llds_to_x86_64_out__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__ll_backend__llds_to_x86_64_out__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__ll_backend__llds_to_x86_64_out__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__ll_backend__llds_to_x86_64_out__init_threadscope_string_table(void);
#endif

void mercury__ll_backend__llds_to_x86_64_out__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__ll_backend__llds_to_x86_64_out_maybe_bunch_0();
	mercury__ll_backend__llds_to_x86_64_out__init_debugger();
}

void mercury__ll_backend__llds_to_x86_64_out__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}


void mercury__ll_backend__llds_to_x86_64_out__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__ll_backend__llds_to_x86_64_out__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_layout__ll_backend__llds_to_x86_64_out);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__ll_backend__llds_to_x86_64_out__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__ll_backend__llds_to_x86_64_out__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
