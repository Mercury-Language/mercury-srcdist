/*
** Automatically generated from `util.m'
** by the Mercury compiler,
** version rotd-2011-09-09, configured for x86_64-unknown-linux-gnu.
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
INIT mercury__mdb__util__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 25 "mdb.util.c"
#include "mdb.util.mh"

#line 28 "mdb.util.c"
#line 3 "mdb.int0"
#include "mdb.mh"

#line 32 "mdb.util.c"
#line 526 "../library/io.int"
#include "io.mh"

#line 36 "mdb.util.c"
#line 536 "../library/io.int"
#include "string.mh"

#line 40 "mdb.util.c"
#line 31 "../library/bitmap.int2"
#include "bitmap.mh"

#line 44 "mdb.util.c"
#line 30 "../library/time.int2"
#include "time.mh"

#line 48 "mdb.util.c"
#line 49 "mdb.util.c"
#ifndef MDB__UTIL_DECL_GUARD
#define MDB__UTIL_DECL_GUARD

#line 53 "mdb.util.c"
#line 84 "util.m"

    #include "mercury_wrapper.h"
    #include "mercury_string.h"
    #include "mercury_trace_base.h"
    #include "mercury_library_types.h"

#line 61 "mdb.util.c"
#line 62 "mdb.util.c"

#endif
#line 65 "mdb.util.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

extern const MR_TypeCtorInfo_Struct
	mercury_data_mdb__util__type_ctor_info_line_number_0;
MR_decl_label4(mdb__util__limit_3_0, 13,2,5,3)
MR_decl_label2(mdb__util__trace_get_command_4_0, 2,3)
MR_decl_label7(mdb__util__trace_get_command_fallback_6_0, 2,3,4,6,7,8,9)
MR_decl_label3(mdb__util__trace_getline_4_0, 2,3,4)
MR_decl_label1(mdb__util__trace_getline_6_0, 2)
MR_decl_label4(mdb__util__zip_with_4_0, 2,8,9,5)
MR_decl_label1(fn__mdb__util__is_function_1_0, 3)
MR_decl_label1(fn__mdb__util__is_predicate_1_0, 3)
MR_def_extern_entry(fn__mdb__util__is_predicate_1_0)
MR_def_extern_entry(fn__mdb__util__is_function_1_0)
MR_decl_static(mdb__util__call_trace_getline_7_0)
MR_def_extern_entry(mdb__util__trace_getline_6_0)
MR_def_extern_entry(mdb__util__trace_getline_4_0)
MR_def_extern_entry(mdb__util__trace_get_command_6_0)
MR_def_extern_entry(mdb__util__trace_get_command_4_0)
MR_def_extern_entry(mdb__util__zip_with_4_0)
MR_def_extern_entry(mdb__util__limit_3_0)
MR_decl_static(mdb__util__trace_get_command_fallback_6_0)
MR_def_extern_entry(__Unify___mdb__util__line_number_0_0)
MR_def_extern_entry(__Compare___mdb__util__line_number_0_0)
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;

const MR_TypeCtorInfo_Struct mercury_data_mdb__util__type_ctor_info_line_number_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdb__util__line_number_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdb__util__line_number_0_0)),
	"mdb.util",
	"line_number",
	{ 0 },
	{ (void *)&mercury_data_builtin__type_ctor_info_int_0 },
	-1,
	0,
	NULL
};




MR_BEGIN_MODULE(mdb__util_module0)
	MR_init_entry1(fn__mdb__util__is_predicate_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__mdb__util__is_predicate_1_0);
	MR_init_label1(fn__mdb__util__is_predicate_1_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'is_predicate'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__mdb__util__is_predicate_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(fn__mdb__util__is_predicate_1_0_i3);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__mdb__util__is_predicate_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__util_module1)
	MR_init_entry1(fn__mdb__util__is_function_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__mdb__util__is_function_1_0);
	MR_init_label1(fn__mdb__util__is_function_1_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'is_function'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__mdb__util__is_function_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(fn__mdb__util__is_function_1_0_i3);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(fn__mdb__util__is_function_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__util_module2)
	MR_init_entry1(mdb__util__call_trace_getline_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__util__call_trace_getline_7_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'call_trace_getline'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__util__call_trace_getline_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	MdbIn;
	MR_Word	MdbOut;
	MR_String	Prompt;
	MR_String	Line;
	MR_Integer	Success;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__mdb__util__call_trace_getline_7_0
	MdbIn = MR_r1;
	MdbOut = MR_r2;
	Prompt = (MR_String) MR_r3;
	MR_OBTAIN_GLOBAL_LOCK("call_trace_getline");
{
#line 98 "util.m"

    char        *line;
    MercuryFile *mdb_in = (MercuryFile *) MdbIn;
    MercuryFile *mdb_out = (MercuryFile *) MdbOut;

    if (MR_address_of_trace_getline != NULL) {
        line = (*MR_address_of_trace_getline)((char *) Prompt,
                MR_file(*mdb_in), MR_file(*mdb_out));
    } else {
        MR_tracing_not_enabled();
        /* not reached */
    }

    if (line == NULL) {
        /* we copy the null string to avoid warnings about const */
        MR_make_aligned_string_copy(Line, "");
        Success = 0;
    } else {
        MR_make_aligned_string_copy(Line, line);
        MR_free(line);
        Success = 1;
    }

    IO = IO0;
;}
#line 230 "mdb.util.c"
	MR_RELEASE_GLOBAL_LOCK("call_trace_getline");
	MR_r1 = (MR_Word) Line;
	MR_r2 = Success;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__util_module3)
	MR_init_entry1(mdb__util__trace_getline_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__util__trace_getline_6_0);
	MR_init_label1(mdb__util__trace_getline_6_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'trace_getline'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdb__util__trace_getline_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	MdbIn;
	MR_Word	MdbOut;
	MR_String	Prompt;
	MR_String	Line;
	MR_Integer	Success;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__mdb__util__trace_getline_6_0
	MdbIn = MR_r2;
	MdbOut = MR_r3;
	Prompt = (MR_String) MR_r1;
	MR_OBTAIN_GLOBAL_LOCK("call_trace_getline");
{
#line 98 "util.m"

    char        *line;
    MercuryFile *mdb_in = (MercuryFile *) MdbIn;
    MercuryFile *mdb_out = (MercuryFile *) MdbOut;

    if (MR_address_of_trace_getline != NULL) {
        line = (*MR_address_of_trace_getline)((char *) Prompt,
                MR_file(*mdb_in), MR_file(*mdb_out));
    } else {
        MR_tracing_not_enabled();
        /* not reached */
    }

    if (line == NULL) {
        /* we copy the null string to avoid warnings about const */
        MR_make_aligned_string_copy(Line, "");
        Success = 0;
    } else {
        MR_make_aligned_string_copy(Line, line);
        MR_free(line);
        Success = 1;
    }

    IO = IO0;
;}
#line 298 "mdb.util.c"
	MR_RELEASE_GLOBAL_LOCK("call_trace_getline");
	MR_r3 = (MR_Word) Line;
	MR_r4 = Success;
#undef	MR_PROC_LABEL
	}
	if (MR_INT_EQ(MR_r4,0)) {
		MR_GOTO_LAB(mdb__util__trace_getline_6_0_i2);
	}
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_r3;
	MR_proceed();
MR_def_label(mdb__util__trace_getline_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(io__input_stream_3_0);
MR_decl_entry(io__output_stream_3_0);

MR_BEGIN_MODULE(mdb__util_module4)
	MR_init_entry1(mdb__util__trace_getline_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__util__trace_getline_4_0);
	MR_init_label3(mdb__util__trace_getline_4_0,2,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'trace_getline'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdb__util__trace_getline_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(io__input_stream_3_0,
		mdb__util__trace_getline_4_0_i2);
MR_def_label(mdb__util__trace_getline_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(io__output_stream_3_0,
		mdb__util__trace_getline_4_0_i3);
MR_def_label(mdb__util__trace_getline_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	MdbIn;
	MR_Word	MdbOut;
	MR_String	Prompt;
	MR_String	Line;
	MR_Integer	Success;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__mdb__util__trace_getline_4_0
	MdbIn = MR_sv(2);
	MdbOut = MR_r1;
	Prompt = (MR_String) MR_sv(1);
	MR_OBTAIN_GLOBAL_LOCK("call_trace_getline");
{
#line 98 "util.m"

    char        *line;
    MercuryFile *mdb_in = (MercuryFile *) MdbIn;
    MercuryFile *mdb_out = (MercuryFile *) MdbOut;

    if (MR_address_of_trace_getline != NULL) {
        line = (*MR_address_of_trace_getline)((char *) Prompt,
                MR_file(*mdb_in), MR_file(*mdb_out));
    } else {
        MR_tracing_not_enabled();
        /* not reached */
    }

    if (line == NULL) {
        /* we copy the null string to avoid warnings about const */
        MR_make_aligned_string_copy(Line, "");
        Success = 0;
    } else {
        MR_make_aligned_string_copy(Line, line);
        MR_free(line);
        Success = 1;
    }

    IO = IO0;
;}
#line 389 "mdb.util.c"
	MR_RELEASE_GLOBAL_LOCK("call_trace_getline");
	MR_r3 = (MR_Word) Line;
	MR_r4 = Success;
#undef	MR_PROC_LABEL
	}
	if (MR_INT_EQ(MR_r4,0)) {
		MR_GOTO_LAB(mdb__util__trace_getline_4_0_i4);
	}
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_r3;
	MR_decr_sp_and_return(3);
MR_def_label(mdb__util__trace_getline_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__util_module5)
	MR_init_entry1(mdb__util__trace_get_command_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__util__trace_get_command_6_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'trace_get_command'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdb__util__trace_get_command_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_String	Prompt;
	MR_String	Line;
	MR_Word	MdbIn;
	MR_Word	MdbOut;
	MR_Word	State0;
	MR_Word	State;
#define	MR_PROC_LABEL	mercury__mdb__util__trace_get_command_6_0
	Prompt = (MR_String) MR_r1;
	MdbIn = MR_r2;
	MdbOut = MR_r3;
	MR_save_registers();
	MR_OBTAIN_GLOBAL_LOCK("trace_get_command");
{
#line 149 "util.m"

    char        *line;
    MercuryFile *mdb_in = (MercuryFile *) MdbIn;
    MercuryFile *mdb_out = (MercuryFile *) MdbOut;

    if (MR_address_of_trace_getline != NULL) {
        line = (*MR_address_of_trace_get_command)(
                (char *) Prompt,
                MR_file(*mdb_in), MR_file(*mdb_out));

        MR_make_aligned_string_copy(Line, line);
        MR_free(line);

    } else {
        ML_BROWSER_trace_get_command_fallback(Prompt, &Line, MdbIn, MdbOut);
    }

    State = State0;
;}
#line 461 "mdb.util.c"
	MR_RELEASE_GLOBAL_LOCK("trace_get_command");
#ifndef MR_CONSERVATIVE_GC
	MR_restore_registers();
#endif
	MR_r1 = (MR_Word) Line;
#undef	MR_PROC_LABEL
	}
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__util_module6)
	MR_init_entry1(mdb__util__trace_get_command_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__util__trace_get_command_4_0);
	MR_init_label2(mdb__util__trace_get_command_4_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'trace_get_command'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdb__util__trace_get_command_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(io__input_stream_3_0,
		mdb__util__trace_get_command_4_0_i2);
MR_def_label(mdb__util__trace_get_command_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(io__output_stream_3_0,
		mdb__util__trace_get_command_4_0_i3);
MR_def_label(mdb__util__trace_get_command_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_String	Prompt;
	MR_String	Line;
	MR_Word	MdbIn;
	MR_Word	MdbOut;
	MR_Word	State0;
	MR_Word	State;
#define	MR_PROC_LABEL	mercury__mdb__util__trace_get_command_4_0
	Prompt = (MR_String) MR_sv(1);
	MdbIn = MR_sv(2);
	MdbOut = MR_r1;
	MR_save_registers();
	MR_OBTAIN_GLOBAL_LOCK("trace_get_command");
{
#line 149 "util.m"

    char        *line;
    MercuryFile *mdb_in = (MercuryFile *) MdbIn;
    MercuryFile *mdb_out = (MercuryFile *) MdbOut;

    if (MR_address_of_trace_getline != NULL) {
        line = (*MR_address_of_trace_get_command)(
                (char *) Prompt,
                MR_file(*mdb_in), MR_file(*mdb_out));

        MR_make_aligned_string_copy(Line, line);
        MR_free(line);

    } else {
        ML_BROWSER_trace_get_command_fallback(Prompt, &Line, MdbIn, MdbOut);
    }

    State = State0;
;}
#line 537 "mdb.util.c"
	MR_RELEASE_GLOBAL_LOCK("trace_get_command");
#ifndef MR_CONSERVATIVE_GC
	MR_restore_registers();
#endif
	MR_r1 = (MR_Word) Line;
#undef	MR_PROC_LABEL
	}
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(mercury__do_call_closure_2);
MR_decl_entry(require__error_1_0);

MR_BEGIN_MODULE(mdb__util_module7)
	MR_init_entry1(mdb__util__zip_with_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__util__zip_with_4_0);
	MR_init_label4(mdb__util__zip_with_4_0,2,8,9,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'zip_with'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdb__util__zip_with_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r5,0,0)) {
		MR_GOTO_LAB(mdb__util__zip_with_4_0_i2);
	}
	if (MR_LTAGS_TESTR(MR_r6,0,0)) {
		MR_GOTO_LAB(mdb__util__zip_with_4_0_i2);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(mdb__util__zip_with_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r5,0,0)) {
		MR_GOTO_LAB(mdb__util__zip_with_4_0_i5);
	}
	if (MR_LTAGS_TEST(MR_r6,0,0)) {
		MR_GOTO_LAB(mdb__util__zip_with_4_0_i5);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r4;
	MR_sv(3) = MR_tempr1;
	MR_tempr2 = MR_r5;
	MR_sv(1) = MR_tfield(1, MR_tempr2, 1);
	MR_tempr3 = MR_r6;
	MR_sv(2) = MR_tfield(1, MR_tempr3, 1);
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_sv(6) = MR_r3;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tfield(1, MR_tempr2, 0);
	MR_r3 = MR_tfield(1, MR_tempr3, 0);
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(mdb__util__zip_with_4_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__mdb__util__zip_with_4_0_i8);
MR_def_label(mdb__util__zip_with_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(1);
	MR_r6 = MR_sv(2);
	}
	MR_np_localcall_lab(mdb__util__zip_with_4_0,
		mdb__util__zip_with_4_0_i9);
MR_def_label(mdb__util__zip_with_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(3);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(7);
MR_def_label(mdb__util__zip_with_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("zip_with: list arguments are of unequal length", 46);
	MR_np_tailcall_ent(require__error_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(mercury__do_call_closure_1);
MR_decl_entry(__Unify___list__list_1_0);

MR_BEGIN_MODULE(mdb__util_module8)
	MR_init_entry1(mdb__util__limit_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__util__limit_3_0);
	MR_init_label4(mdb__util__limit_3_0,13,2,5,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'limit'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdb__util__limit_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(mdb__util__limit_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(mdb__util__limit_3_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__mdb__util__limit_3_0_i2);
MR_def_label(mdb__util__limit_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		mdb__util__limit_3_0_i5);
MR_def_label(mdb__util__limit_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdb__util__limit_3_0_i3);
	}
	MR_r1 = MR_sv(2);
	MR_decr_sp_and_return(4);
MR_def_label(mdb__util__limit_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(mdb__util__limit_3_0_i13);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(io__write_string_4_0);
MR_decl_entry(io__flush_output_3_0);
MR_decl_entry(io__read_line_as_string_4_0);
MR_decl_entry(fn__io__error_message_1_0);
MR_decl_entry(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);

MR_BEGIN_MODULE(mdb__util_module9)
	MR_init_entry1(mdb__util__trace_get_command_fallback_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__util__trace_get_command_fallback_6_0);
	MR_init_label7(mdb__util__trace_get_command_fallback_6_0,2,3,4,6,7,8,9)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'trace_get_command_fallback'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__util__trace_get_command_fallback_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_sv(2) = MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(io__write_string_4_0,
		mdb__util__trace_get_command_fallback_6_0_i2);
MR_def_label(mdb__util__trace_get_command_fallback_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(io__flush_output_3_0,
		mdb__util__trace_get_command_fallback_6_0_i3);
MR_def_label(mdb__util__trace_get_command_fallback_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__read_line_as_string_4_0,
		mdb__util__trace_get_command_fallback_6_0_i4);
MR_def_label(mdb__util__trace_get_command_fallback_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(mdb__util__trace_get_command_fallback_6_0_i6);
	}
	MR_r1 = (MR_Word) MR_string_const("quit", 4);
	MR_decr_sp_and_return(3);
MR_def_label(mdb__util__trace_get_command_fallback_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(mdb__util__trace_get_command_fallback_6_0_i7);
	}
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_decr_sp_and_return(3);
MR_def_label(mdb__util__trace_get_command_fallback_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(2, MR_r1, 0);
	MR_np_call_localret_ent(fn__io__error_message_1_0,
		mdb__util__trace_get_command_fallback_6_0_i8);
MR_def_label(mdb__util__trace_get_command_fallback_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("trace_get_command_fallback: ", 28);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdb__util__trace_get_command_fallback_6_0_i9);
MR_def_label(mdb__util__trace_get_command_fallback_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(require__error_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__util_module10)
	MR_init_entry1(__Unify___mdb__util__line_number_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___mdb__util__line_number_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___mdb__util__line_number_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_int_3_0);

MR_BEGIN_MODULE(mdb__util_module11)
	MR_init_entry1(__Compare___mdb__util__line_number_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___mdb__util__line_number_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___mdb__util__line_number_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_static(mercury__mdb__util__trace_get_command_fallback_6_0);

void
ML_BROWSER_trace_get_command_fallback(MR_String Mercury__argument1, MR_String * Mercury__argument2, MR_Word Mercury__argument3, MR_Word Mercury__argument4);

void
ML_BROWSER_trace_get_command_fallback(MR_String Mercury__argument1, MR_String * Mercury__argument2, MR_Word Mercury__argument3, MR_Word Mercury__argument4)
{
#if MR_NUM_REAL_REGS > 0
	MR_Word c_regs[MR_NUM_REAL_REGS];
#endif
#if MR_THREAD_SAFE
	MR_bool must_finalize_engine;
#endif
#if MR_DEEP_PROFILING
	MR_CallSiteDynList **saved_cur_callback;
	MR_CallSiteDynamic *saved_cur_csd;
#endif

	MR_save_regs_to_mem(c_regs);
#if MR_THREAD_SAFE
	must_finalize_engine = MR_init_thread(MR_use_now);
#endif
#if MR_DEEP_PROFILING
	saved_cur_callback = MR_current_callback_site;
	saved_cur_csd = MR_current_call_site_dynamic;
	MR_setup_callback(MR_ENTRY(mercury__mdb__util__trace_get_command_fallback_6_0));
#endif
	MR_restore_registers();
	MR_r1 = (MR_Word) Mercury__argument1;
	MR_r2 = Mercury__argument3;
	MR_r3 = Mercury__argument4;
	MR_save_transient_registers();
	(void) MR_call_engine(MR_ENTRY(mercury__mdb__util__trace_get_command_fallback_6_0), MR_FALSE);
	MR_restore_transient_registers();
#if MR_DEEP_PROFILING
	MR_current_call_site_dynamic = saved_cur_csd;
	MR_current_callback_site = saved_cur_callback;
#endif
	*Mercury__argument2 = (MR_String) MR_r1;
#if MR_THREAD_SAFE
	if (must_finalize_engine) {
		 MR_finalize_thread_engine();
	}
#endif
	MR_restore_regs_from_mem(c_regs);
}


static void mercury__mdb__util_maybe_bunch_0(void)
{
	mdb__util_module0();
	mdb__util_module1();
	mdb__util_module2();
	mdb__util_module3();
	mdb__util_module4();
	mdb__util_module5();
	mdb__util_module6();
	mdb__util_module7();
	mdb__util_module8();
	mdb__util_module9();
	mdb__util_module10();
	mdb__util_module11();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__mdb__util__init(void);
void mercury__mdb__util__init_type_tables(void);
void mercury__mdb__util__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__mdb__util__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__mdb__util__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__mdb__util__init_threadscope_string_table(void);
#endif

void mercury__mdb__util__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__mdb__util_maybe_bunch_0();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdb__util__type_ctor_info_line_number_0,
		mdb__util__line_number_0_0);
	mercury__mdb__util__init_debugger();
}

void mercury__mdb__util__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_mdb__util__type_ctor_info_line_number_0);
	}
}


void mercury__mdb__util__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__mdb__util__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__mdb__util);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__mdb__util__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__mdb__util__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
