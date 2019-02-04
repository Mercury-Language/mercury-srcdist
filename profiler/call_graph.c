/*
** Automatically generated from `call_graph.m'
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
INIT mercury__call_graph__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 532 "../library/io.int"
#include "io.mh"

#line 27 "call_graph.c"
#line 540 "../library/io.int"
#include "string.mh"

#line 31 "call_graph.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 35 "call_graph.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 39 "call_graph.c"
#line 40 "call_graph.c"
#include "call_graph.mh"

#line 43 "call_graph.c"
#line 44 "call_graph.c"
#ifndef CALL_GRAPH_DECL_GUARD
#define CALL_GRAPH_DECL_GUARD

#line 48 "call_graph.c"
#line 49 "call_graph.c"

#endif
#line 52 "call_graph.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

struct mercury_type_0 {
	MR_Word * f1[2];
};
MR_STATIC_LINKAGE const struct mercury_type_0 mercury_common_0[];

struct mercury_type_1 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[6];
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

struct mercury_type_2 {
	MR_String f1;
	MR_Word * f2;
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];
MR_decl_label3(call_graph__build_call_graph_5_0, 2,3,5)
MR_decl_label8(call_graph__process_prof_file_6_0, 2,3,4,5,8,9,7,10)
MR_decl_label3(call_graph__process_prof_file_6_0, 11,12,13)
MR_decl_label7(call_graph__process_prof_file_2_4_0, 16,2,5,6,7,17,3)
MR_def_extern_entry(call_graph__build_call_graph_5_0)
MR_decl_static(call_graph__process_prof_file_2_4_0)
MR_decl_static(call_graph__process_prof_file_6_0)

extern const MR_TypeCtorInfo_Struct mercury_data_digraph__type_ctor_info_digraph_1;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
static const struct mercury_type_0 mercury_common_0[2] =
{
{
{
MR_CTOR1_ADDR(digraph, digraph),
MR_STRING_CTOR_ADDR
}
},
{
{
MR_CTOR1_ADDR(digraph, digraph),
MR_STRING_CTOR_ADDR
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__call_graph__build_call_graph_5_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_state_0;
static const struct mercury_type_1 mercury_common_1[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__call_graph__build_call_graph_5_0_1,
(MR_Word *) (MR_Integer) 0
},
6,
{
MR_BOOL_CTOR_ADDR,
MR_STRING_CTOR_ADDR,
MR_COMMON(0,0),
MR_COMMON(0,0),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
};

static const struct mercury_type_2 mercury_common_2[1] =
{
{
MR_string_const("\n", 1),
MR_tbmkword(0, 0)
},
};

static const MR_UserClosureId
mercury_data__closure_layout__call_graph__build_call_graph_5_0_1 = {
{
MR_PREDICATE,
"call_graph",
"call_graph",
"process_prof_file",
6,
0
},
"call_graph",
"call_graph.m",
68,
"d1;c7;"
};

MR_decl_entry(globals__io_lookup_bool_option_4_0);
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_state_0;
MR_decl_entry(list__foldl2_6_5);

MR_BEGIN_MODULE(call_graph_module0)
	MR_init_entry1(call_graph__build_call_graph_5_0);
	MR_init_label3(call_graph__build_call_graph_5_0,2,3,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__call_graph__build_call_graph_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_r1 = (MR_Integer) 2;
	MR_np_call_localret_ent(globals__io_lookup_bool_option_4_0,
		call_graph__build_call_graph_5_0_i2);
MR_def_label(call_graph__build_call_graph_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_np_call_localret_ent(globals__io_lookup_bool_option_4_0,
		call_graph__build_call_graph_5_0_i3);
MR_def_label(call_graph__build_call_graph_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(2),0)) {
		MR_GOTO_LAB(call_graph__build_call_graph_5_0_i5);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(1,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(call_graph__process_prof_file_6_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r3 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r5 = MR_sv(1);
	MR_r6 = MR_sv(3);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(list__foldl2_6_5);
	}
MR_def_label(call_graph__build_call_graph_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(read__maybe_read_label_name_3_0);
MR_decl_entry(read__read_label_name_3_0);
MR_decl_entry(digraph__lookup_key_3_0);
MR_decl_entry(digraph__add_edge_4_0);

MR_BEGIN_MODULE(call_graph_module1)
	MR_init_entry1(call_graph__process_prof_file_2_4_0);
	MR_init_label7(call_graph__process_prof_file_2_4_0,16,2,5,6,7,17,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(call_graph__process_prof_file_2_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(call_graph__process_prof_file_2_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(read__maybe_read_label_name_3_0,
		call_graph__process_prof_file_2_4_0_i2);
MR_def_label(call_graph__process_prof_file_2_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(call_graph__process_prof_file_2_4_0_i3);
	}
	MR_sv(1) = MR_ctfield(1, MR_r1, 0);
	MR_np_call_localret_ent(read__read_label_name_3_0,
		call_graph__process_prof_file_2_4_0_i5);
MR_def_label(call_graph__process_prof_file_2_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(digraph__lookup_key_3_0,
		call_graph__process_prof_file_2_4_0_i6);
MR_def_label(call_graph__process_prof_file_2_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(digraph__lookup_key_3_0,
		call_graph__process_prof_file_2_4_0_i7);
MR_def_label(call_graph__process_prof_file_2_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(digraph__add_edge_4_0,
		call_graph__process_prof_file_2_4_0_i17);
MR_def_label(call_graph__process_prof_file_2_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(call_graph__process_prof_file_2_4_0_i16);
MR_def_label(call_graph__process_prof_file_2_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(options__maybe_write_string_4_0);
MR_decl_entry(io__see_4_0);
MR_decl_entry(io__seen_2_0);
MR_decl_entry(io__error_message_2_0);
MR_decl_entry(io__stderr_stream_3_0);
MR_decl_entry(io__write_strings_4_0);

MR_BEGIN_MODULE(call_graph_module2)
	MR_init_entry1(call_graph__process_prof_file_6_0);
	MR_init_label8(call_graph__process_prof_file_6_0,2,3,4,5,8,9,7,10)
	MR_init_label3(call_graph__process_prof_file_6_0,11,12,13)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(call_graph__process_prof_file_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(4) = MR_r3;
	MR_r2 = (MR_Word) MR_string_const("\n\tProcessing ", 13);
	MR_np_call_localret_ent(options__maybe_write_string_4_0,
		call_graph__process_prof_file_6_0_i2);
MR_def_label(call_graph__process_prof_file_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(options__maybe_write_string_4_0,
		call_graph__process_prof_file_6_0_i3);
MR_def_label(call_graph__process_prof_file_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_string_const("...", 3);
	MR_np_call_localret_ent(options__maybe_write_string_4_0,
		call_graph__process_prof_file_6_0_i4);
MR_def_label(call_graph__process_prof_file_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(io__see_4_0,
		call_graph__process_prof_file_6_0_i5);
MR_def_label(call_graph__process_prof_file_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(call_graph__process_prof_file_6_0_i7);
	}
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(call_graph__process_prof_file_2_4_0,
		call_graph__process_prof_file_6_0_i8);
MR_def_label(call_graph__process_prof_file_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(io__seen_2_0,
		call_graph__process_prof_file_6_0_i9);
MR_def_label(call_graph__process_prof_file_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_string_const(" done", 5);
	MR_np_call_localret_ent(options__maybe_write_string_4_0,
		call_graph__process_prof_file_6_0_i13);
MR_def_label(call_graph__process_prof_file_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_np_call_localret_ent(io__error_message_2_0,
		call_graph__process_prof_file_6_0_i10);
MR_def_label(call_graph__process_prof_file_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(io__stderr_stream_3_0,
		call_graph__process_prof_file_6_0_i11);
MR_def_label(call_graph__process_prof_file_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,2,0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_string_const("\': ", 3);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_string_const("mprof: error opening file \140", 27);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(io__write_strings_4_0,
		call_graph__process_prof_file_6_0_i12);
MR_def_label(call_graph__process_prof_file_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_sv(2) = MR_sv(4);
	MR_r2 = (MR_Word) MR_string_const(" done", 5);
	MR_np_call_localret_ent(options__maybe_write_string_4_0,
		call_graph__process_prof_file_6_0_i13);
MR_def_label(call_graph__process_prof_file_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__call_graph_maybe_bunch_0(void)
{
	call_graph_module0();
	call_graph_module1();
	call_graph_module2();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__call_graph__init(void);
void mercury__call_graph__init_type_tables(void);
void mercury__call_graph__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__call_graph__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__call_graph__init_complexity_procs(void);
#endif

void mercury__call_graph__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__call_graph_maybe_bunch_0();
	mercury__call_graph__init_debugger();
}

void mercury__call_graph__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}


void mercury__call_graph__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__call_graph__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__call_graph);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__call_graph__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
