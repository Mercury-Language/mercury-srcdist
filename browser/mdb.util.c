/*
** Automatically generated from `util.m'
** by the Mercury compiler,
** version rotd-2007-08-01, configured for i686-pc-linux-gnu.
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
INIT mercury__mdb__util__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 24 "mdb.util.c"
#include "mdb.util.mh"

#line 27 "mdb.util.c"
#line 3 "mdb.int0"
#include "mdb.mh"

#line 31 "mdb.util.c"
#line 530 "../library/io.int"
#include "io.mh"

#line 35 "mdb.util.c"
#line 538 "../library/io.int"
#include "string.mh"

#line 39 "mdb.util.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 43 "mdb.util.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 47 "mdb.util.c"
#line 48 "mdb.util.c"
#ifndef MDB__UTIL_DECL_GUARD
#define MDB__UTIL_DECL_GUARD

#line 52 "mdb.util.c"
#line 85 "util.m"

    #include "mercury_wrapper.h"
    #include "mercury_string.h"
    #include "mercury_trace_base.h"
    #include "mercury_library_types.h"

#line 60 "mdb.util.c"
#line 61 "mdb.util.c"

#endif
#line 64 "mdb.util.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

extern const MR_TypeCtorInfo_Struct
	mercury_data_mdb__util__type_ctor_info_unbound_0,
	mercury_data_mdb__util__type_ctor_info_line_number_0;
MR_decl_label4(mdb__util__limit_3_0, 13,2,5,3)
MR_decl_label2(mdb__util__trace_get_command_4_0, 2,3)
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
MR_def_extern_entry(__Unify___mdb__util__line_number_0_0)
MR_def_extern_entry(__Compare___mdb__util__line_number_0_0)
MR_def_extern_entry(__Unify___mdb__util__unbound_0_0)
MR_def_extern_entry(__Compare___mdb__util__unbound_0_0)
MR_def_extern_entry(f_109_100_98_95_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_109_100_98_95_95_117_116_105_108_95_95_117_110_98_111_117_110_100_95_48_95_95_91_49_44_32_50_93_95_48_2_0)
MR_def_extern_entry(f_109_100_98_95_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_109_100_98_95_95_117_116_105_108_95_95_117_110_98_111_117_110_100_95_48_95_95_91_50_44_32_51_93_95_48_3_0)

static const MR_EnumFunctorDesc mercury_data_mdb__util__enum_functor_desc_unbound_0_0 = {
	"_",
	0
};

const MR_EnumFunctorDescPtr mercury_data_mdb__util__enum_value_ordered_unbound_0[] = {
	&mercury_data_mdb__util__enum_functor_desc_unbound_0_0
};

const MR_EnumFunctorDescPtr mercury_data_mdb__util__enum_name_ordered_unbound_0[] = {
	&mercury_data_mdb__util__enum_functor_desc_unbound_0_0
};

const MR_Integer mercury_data_mdb__util__functor_number_map_unbound_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_mdb__util__type_ctor_info_unbound_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_DUMMY,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdb__util__unbound_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdb__util__unbound_0_0)),
	"mdb.util",
	"unbound",
	{ (void *)mercury_data_mdb__util__enum_name_ordered_unbound_0 },
	{ (void *)mercury_data_mdb__util__enum_value_ordered_unbound_0 },
	1,
	4,
	mercury_data_mdb__util__functor_number_map_unbound_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;

const MR_TypeCtorInfo_Struct mercury_data_mdb__util__type_ctor_info_line_number_0 = {
	0,
	13,
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
	MR_init_label1(fn__mdb__util__is_predicate_1_0,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__mdb__util__is_predicate_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(fn__mdb__util__is_predicate_1_0_i3);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(fn__mdb__util__is_predicate_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__util_module1)
	MR_init_entry1(fn__mdb__util__is_function_1_0);
	MR_init_label1(fn__mdb__util__is_function_1_0,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__mdb__util__is_function_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(fn__mdb__util__is_function_1_0_i3);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__mdb__util__is_function_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__util_module2)
	MR_init_entry1(mdb__util__call_trace_getline_7_0);
MR_BEGIN_CODE

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
#line 99 "util.m"

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
#line 253 "mdb.util.c"
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
	MR_init_label1(mdb__util__trace_getline_6_0,2)
MR_BEGIN_CODE

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
#line 99 "util.m"

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
#line 318 "mdb.util.c"
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
	MR_init_label3(mdb__util__trace_getline_4_0,2,3,4)
MR_BEGIN_CODE

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
#line 99 "util.m"

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
#line 406 "mdb.util.c"
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
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdb__util__trace_get_command_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
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
	MR_OBTAIN_GLOBAL_LOCK("trace_get_command");
{
#line 137 "util.m"

    char        *line;
    MercuryFile *mdb_in = (MercuryFile *) MdbIn;
    MercuryFile *mdb_out = (MercuryFile *) MdbOut;

    if (MR_address_of_trace_getline != NULL) {
        line = (*MR_address_of_trace_get_command)(
                (char *) Prompt,
                MR_file(*mdb_in), MR_file(*mdb_out));
    } else {
        MR_tracing_not_enabled();
        /* not reached */
    }

    MR_make_aligned_string_copy(Line, line);
    MR_free(line);

    State = State0;
;}
#line 472 "mdb.util.c"
	MR_RELEASE_GLOBAL_LOCK("trace_get_command");
	MR_r1 = (MR_Word) Line;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__util_module6)
	MR_init_entry1(mdb__util__trace_get_command_4_0);
	MR_init_label2(mdb__util__trace_get_command_4_0,2,3)
MR_BEGIN_CODE

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
	MR_OBTAIN_GLOBAL_LOCK("trace_get_command");
{
#line 137 "util.m"

    char        *line;
    MercuryFile *mdb_in = (MercuryFile *) MdbIn;
    MercuryFile *mdb_out = (MercuryFile *) MdbOut;

    if (MR_address_of_trace_getline != NULL) {
        line = (*MR_address_of_trace_get_command)(
                (char *) Prompt,
                MR_file(*mdb_in), MR_file(*mdb_out));
    } else {
        MR_tracing_not_enabled();
        /* not reached */
    }

    MR_make_aligned_string_copy(Line, line);
    MR_free(line);

    State = State0;
;}
#line 541 "mdb.util.c"
	MR_RELEASE_GLOBAL_LOCK("trace_get_command");
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
	MR_init_label4(mdb__util__zip_with_4_0,2,8,9,5)
MR_BEGIN_CODE

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
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r5;
	MR_sv(2) = MR_ctfield(1, MR_tempr2, 1);
	MR_tempr3 = MR_r6;
	MR_sv(3) = MR_ctfield(1, MR_tempr3, 1);
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_sv(6) = MR_r3;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_ctfield(1, MR_tempr2, 0);
	MR_r3 = MR_ctfield(1, MR_tempr3, 0);
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(mdb__util__zip_with_4_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__mdb__util__zip_with_4_0_i8);
MR_def_label(mdb__util__zip_with_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(6);
	MR_r5 = MR_sv(2);
	MR_r6 = MR_sv(3);
	MR_np_localcall_lab(mdb__util__zip_with_4_0,
		mdb__util__zip_with_4_0_i9);
MR_def_label(mdb__util__zip_with_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
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
	MR_init_label4(mdb__util__limit_3_0,13,2,5,3)
MR_BEGIN_CODE

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
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r3;
	MR_sv(2) = MR_tempr2;
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(mdb__util__limit_3_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__mdb__util__limit_3_0_i2);
MR_def_label(mdb__util__limit_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r3 = MR_sv(2);
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
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(mdb__util__limit_3_0_i13);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__util_module9)
	MR_init_entry1(__Unify___mdb__util__line_number_0_0);
MR_BEGIN_CODE

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

MR_BEGIN_MODULE(mdb__util_module10)
	MR_init_entry1(__Compare___mdb__util__line_number_0_0);
MR_BEGIN_CODE

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


MR_BEGIN_MODULE(mdb__util_module11)
	MR_init_entry1(__Unify___mdb__util__unbound_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___mdb__util__unbound_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(f_109_100_98_95_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_109_100_98_95_95_117_116_105_108_95_95_117_110_98_111_117_110_100_95_48_95_95_91_49_44_32_50_93_95_48_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__util_module12)
	MR_init_entry1(__Compare___mdb__util__unbound_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___mdb__util__unbound_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(f_109_100_98_95_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_109_100_98_95_95_117_116_105_108_95_95_117_110_98_111_117_110_100_95_48_95_95_91_50_44_32_51_93_95_48_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__util_module13)
	MR_init_entry1(f_109_100_98_95_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_109_100_98_95_95_117_116_105_108_95_95_117_110_98_111_117_110_100_95_48_95_95_91_49_44_32_50_93_95_48_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__f_109_100_98_95_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_109_100_98_95_95_117_116_105_108_95_95_117_110_98_111_117_110_100_95_48_95_95_91_49_44_32_50_93_95_48_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__util_module14)
	MR_init_entry1(f_109_100_98_95_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_109_100_98_95_95_117_116_105_108_95_95_117_110_98_111_117_110_100_95_48_95_95_91_50_44_32_51_93_95_48_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__f_109_100_98_95_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_109_100_98_95_95_117_116_105_108_95_95_117_110_98_111_117_110_100_95_48_95_95_91_50_44_32_51_93_95_48_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

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
	mdb__util_module12();
	mdb__util_module13();
	mdb__util_module14();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__mdb__util__init(void);
void mercury__mdb__util__init_type_tables(void);
void mercury__mdb__util__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__mdb__util__write_out_proc_statics(FILE *fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__mdb__util__init_complexity_procs(void);
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
		mercury_data_mdb__util__type_ctor_info_unbound_0,
		mdb__util__unbound_0_0);
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
		&mercury_data_mdb__util__type_ctor_info_unbound_0);
	}
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

void mercury__mdb__util__write_out_proc_statics(FILE *fp)
{
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__mdb__util__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
