/*
** Automatically generated from `mercury_profile.m'
** by the Mercury compiler,
** version rotd-2011-07-19, configured for x86_64-unknown-linux-gnu.
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
INIT mercury__mercury_profile__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 526 "../library/io.int"
#include "io.mh"

#line 28 "mercury_profile.c"
#line 536 "../library/io.int"
#include "string.mh"

#line 32 "mercury_profile.c"
#line 31 "../library/bitmap.int2"
#include "bitmap.mh"

#line 36 "mercury_profile.c"
#line 30 "../library/time.int2"
#include "time.mh"

#line 40 "mercury_profile.c"
#line 41 "mercury_profile.c"
#include "mercury_profile.mh"

#line 44 "mercury_profile.c"
#line 45 "mercury_profile.c"
#ifndef MERCURY_PROFILE_DECL_GUARD
#define MERCURY_PROFILE_DECL_GUARD

#line 49 "mercury_profile.c"
#line 50 "mercury_profile.c"

#endif
#line 53 "mercury_profile.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

struct mercury_type_0 {
	MR_String f1;
	MR_Word * f2;
};
MR_STATIC_LINKAGE const struct mercury_type_0 mercury_common_0[];

struct mercury_type_1 {
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
	MR_Word * f5;
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

struct mercury_type_2 {
	MR_Word * f1;
	MR_Code * f2;
	MR_Integer f3;
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];

struct mercury_type_3 {
	MR_Word * f1[3];
};
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];

struct mercury_type_4 {
	MR_Word * f1[2];
};
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_common_4[];

struct mercury_type_5 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[4];
};
MR_STATIC_LINKAGE const struct mercury_type_5 mercury_common_5[];

struct mercury_type_6 {
	MR_Word * f1[4];
};
MR_STATIC_LINKAGE const struct mercury_type_6 mercury_common_6[];

struct mercury_type_7 {
	MR_Integer f1;
};
MR_STATIC_LINKAGE const struct mercury_type_7 mercury_common_7[];
MR_decl_label3(mercury_profile__long_usage_2_0, 2,3,27)
MR_decl_label9(main_2_0, 2,8,10,12,13,18,20,9,24)
MR_decl_label10(mercury_profile__main_2_3_0, 2,3,6,9,10,11,12,13,14,15)
MR_decl_label10(mercury_profile__main_2_3_0, 17,18,19,20,21,22,23,16,24,25)
MR_decl_label5(mercury_profile__main_2_3_0, 26,27,28,8,5)
MR_decl_label7(mercury_profile__usage_error_3_0, 2,3,8,9,10,11,12)
MR_decl_static(mercury_profile__usage_error_3_0)
MR_decl_static(mercury_profile__long_usage_2_0)
MR_decl_static(mercury_profile__main_2_3_0)
MR_def_extern_entry(main_2_0)

static const struct mercury_type_0 mercury_common_0[19] =
{
{
MR_string_const("\n", 1),
MR_tbmkword(0, 0)
},
{
MR_string_const(" --help\' for more information.\n", 31),
MR_tbmkword(0, 0)
},
{
MR_string_const("Options:\n", 9),
MR_tbmkword(0, 0)
},
{
MR_string_const("\n", 1),
MR_TAG_COMMON(1,0,2)
},
{
MR_string_const("\tprogram\'s static call graph.\n", 30),
MR_TAG_COMMON(1,0,3)
},
{
MR_string_const("\tgenerated automatically by the Mercury compiler, contain the\n", 62),
MR_TAG_COMMON(1,0,4)
},
{
MR_string_const("\tfor every module in the program.  The \140.prof\' files, which are\n", 64),
MR_TAG_COMMON(1,0,5)
},
{
MR_string_const("\tOtherwise, the <files> specified should be the \140.prof\' file\n", 61),
MR_TAG_COMMON(1,0,6)
},
{
MR_string_const("\tis implied: the call graph will be built dynamically.\n", 55),
MR_TAG_COMMON(1,0,7)
},
{
MR_string_const("\tIf no <files> are specified, then the \140--use-dynamic\' option\n", 62),
MR_TAG_COMMON(1,0,8)
},
{
MR_string_const("Arguments:\n", 11),
MR_TAG_COMMON(1,0,9)
},
{
MR_string_const("\n", 1),
MR_TAG_COMMON(1,0,10)
},
{
MR_string_const("\texecution.\n", 12),
MR_TAG_COMMON(1,0,11)
},
{
MR_string_const("\t(call graph based) profile based on data collected during program\n", 67),
MR_TAG_COMMON(1,0,12)
},
{
MR_string_const("\tIt outputs a flat profile and optionally also a hierarchical\n", 62),
MR_TAG_COMMON(1,0,13)
},
{
MR_string_const("\t\140mprof\' produces execution profiles for Mercury programs.\n", 59),
MR_TAG_COMMON(1,0,14)
},
{
MR_string_const("Description:\n", 13),
MR_TAG_COMMON(1,0,15)
},
{
MR_string_const("\n", 1),
MR_TAG_COMMON(1,0,16)
},
{
MR_string_const("[<options>] [<files>]\n", 22),
MR_TAG_COMMON(1,0,17)
},
};

static const MR_UserClosureId
mercury_data__closure_layout__main_2_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_character_0;
extern const MR_TypeCtorInfo_Struct mercury_data_options__type_ctor_info_option_0;
static const MR_UserClosureId
mercury_data__closure_layout__main_2_0_2;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
static const MR_UserClosureId
mercury_data__closure_layout__main_2_0_3;
extern const MR_TypeCtorInfo_Struct mercury_data_getopt__type_ctor_info_option_data_0;
static const struct mercury_type_1 mercury_common_1[3] =
{
{
(MR_Word *) &mercury_data__closure_layout__main_2_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CHAR_CTOR_ADDR,
MR_CTOR0_ADDR(options, option)
},
{
(MR_Word *) &mercury_data__closure_layout__main_2_0_2,
(MR_Word *) (MR_Integer) 0,
2,
MR_STRING_CTOR_ADDR,
MR_CTOR0_ADDR(options, option)
},
{
(MR_Word *) &mercury_data__closure_layout__main_2_0_3,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(options, option),
MR_CTOR0_ADDR(getopt, option_data)
},
};

MR_decl_entry(options__short_option_2_0);
MR_decl_entry(options__long_option_2_0);
MR_decl_entry(options__option_default_2_0);
MR_decl_entry(options__special_handler_4_0);
static const struct mercury_type_2 mercury_common_2[4] =
{
{
MR_COMMON(1,0),
MR_ENTRY_AP(options__short_option_2_0),
0
},
{
MR_COMMON(1,1),
MR_ENTRY_AP(options__long_option_2_0),
0
},
{
MR_COMMON(1,2),
MR_ENTRY_AP(options__option_default_2_0),
0
},
{
MR_COMMON(5,0),
MR_ENTRY_AP(options__special_handler_4_0),
0
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;
extern const MR_TypeCtorInfo_Struct mercury_data_options__type_ctor_info_option_0;
extern const MR_TypeCtorInfo_Struct mercury_data_getopt__type_ctor_info_option_data_0;
static const struct mercury_type_3 mercury_common_3[1] =
{
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(options, option),
MR_CTOR0_ADDR(getopt, option_data)
}
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_getopt__type_ctor_info_maybe_option_table_1;
static const struct mercury_type_4 mercury_common_4[1] =
{
{
{
MR_CTOR1_ADDR(getopt, maybe_option_table),
MR_CTOR0_ADDR(options, option)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__main_2_0_4;
extern const MR_TypeCtorInfo_Struct mercury_data_getopt__type_ctor_info_special_data_0;
static const struct mercury_type_5 mercury_common_5[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__main_2_0_4,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(options, option),
MR_CTOR0_ADDR(getopt, special_data),
MR_COMMON(3,0),
MR_COMMON(4,0)
}
},
};

static const struct mercury_type_6 mercury_common_6[1] =
{
{
{
MR_TAG_COMMON(0,2,0),
MR_TAG_COMMON(0,2,1),
MR_TAG_COMMON(0,2,2),
MR_TAG_COMMON(0,2,3)
}
},
};

static const struct mercury_type_7 mercury_common_7[1] =
{
{
1
},
};


static const MR_UserClosureId
mercury_data__closure_layout__main_2_0_4 = {
{
MR_PREDICATE,
"options",
"options",
"special_handler",
4,
0
},
"mercury_profile",
"mercury_profile.m",
53,
"9"
};

static const MR_UserClosureId
mercury_data__closure_layout__main_2_0_3 = {
{
MR_PREDICATE,
"options",
"options",
"option_default",
2,
0
},
"mercury_profile",
"mercury_profile.m",
53,
"8"
};

static const MR_UserClosureId
mercury_data__closure_layout__main_2_0_2 = {
{
MR_PREDICATE,
"options",
"options",
"long_option",
2,
0
},
"mercury_profile",
"mercury_profile.m",
53,
"7"
};

static const MR_UserClosureId
mercury_data__closure_layout__main_2_0_1 = {
{
MR_PREDICATE,
"options",
"options",
"short_option",
2,
0
},
"mercury_profile",
"mercury_profile.m",
53,
"6"
};


MR_decl_entry(io__progname_base_4_0);
MR_decl_entry(io__stderr_stream_3_0);
MR_decl_entry(io__write_strings_4_0);
MR_decl_entry(io__set_exit_status_3_0);
MR_decl_entry(library__version_1_0);

MR_BEGIN_MODULE(mercury_profile_module0)
	MR_init_entry1(mercury_profile__usage_error_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mercury_profile__usage_error_3_0);
	MR_init_label7(mercury_profile__usage_error_3_0,2,3,8,9,10,11,12)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'usage_error'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mercury_profile__usage_error_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("mercury_profile", 15);
	MR_np_call_localret_ent(io__progname_base_4_0,
		mercury_profile__usage_error_3_0_i2);
MR_def_label(mercury_profile__usage_error_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(io__stderr_stream_3_0,
		mercury_profile__usage_error_3_0_i3);
MR_def_label(mercury_profile__usage_error_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,0,0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_string_const(": ", 2);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(io__write_strings_4_0,
		mercury_profile__usage_error_3_0_i8);
MR_def_label(mercury_profile__usage_error_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_np_call_localret_ent(io__set_exit_status_3_0,
		mercury_profile__usage_error_3_0_i9);
MR_def_label(mercury_profile__usage_error_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mprof", 5);
	MR_np_call_localret_ent(io__progname_base_4_0,
		mercury_profile__usage_error_3_0_i10);
MR_def_label(mercury_profile__usage_error_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(io__stderr_stream_3_0,
		mercury_profile__usage_error_3_0_i11);
MR_def_label(mercury_profile__usage_error_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(library__version_1_0,
		mercury_profile__usage_error_3_0_i12);
MR_def_label(mercury_profile__usage_error_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tempr4 = MR_sv(1);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr4;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,0,1);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_string_const("Use \140", 5);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = (MR_Word) MR_string_const(" [<options>] [<files>]\n", 23);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr4;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_string_const("Usage: ", 7);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_string_const("Copyright (C) 1995-2011 The University of Melbourne\n", 52);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_string_const("\n", 1);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_r1;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = (MR_Word) MR_string_const("Mercury Profiler, version ", 26);
	MR_tfield(1, MR_r2, 1) = MR_tempr2;
	MR_r1 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(io__write_strings_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(io__write_strings_3_0);
MR_decl_entry(options__options_help_2_0);

MR_BEGIN_MODULE(mercury_profile_module1)
	MR_init_entry1(mercury_profile__long_usage_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mercury_profile__long_usage_2_0);
	MR_init_label3(mercury_profile__long_usage_2_0,2,3,27)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'long_usage'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mercury_profile__long_usage_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_r1 = (MR_Word) MR_string_const("mprof", 5);
	MR_np_call_localret_ent(io__progname_base_4_0,
		mercury_profile__long_usage_2_0_i2);
MR_def_label(mercury_profile__long_usage_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(library__version_1_0,
		mercury_profile__long_usage_2_0_i3);
MR_def_label(mercury_profile__long_usage_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,0,18);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_string_const("Usage: ", 7);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_string_const("Copyright (C) 1995-2011 The University of Melbourne\n\n", 53);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_string_const("\n", 1);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = (MR_Word) MR_string_const("Mercury Profiler, version ", 26);
	MR_tfield(1, MR_r1, 1) = MR_tempr1;
	}
	MR_np_call_localret_ent(io__write_strings_3_0,
		mercury_profile__long_usage_2_0_i27);
MR_def_label(mercury_profile__long_usage_2_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(options__options_help_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(globals__io_get_globals_3_0);
MR_decl_entry(globals__lookup_bool_option_3_0);
MR_decl_entry(io__set_output_stream_4_0);
MR_decl_entry(globals__io_lookup_bool_option_4_0);
MR_decl_entry(options__maybe_write_string_4_0);
MR_decl_entry(process_file__process_profiling_data_files_4_0);
MR_decl_entry(call_graph__build_call_graph_5_0);
MR_decl_entry(propagate__propagate_counts_5_0);
MR_decl_entry(generate_output__generate_prof_output_5_0);
MR_decl_entry(output__output_profile_4_0);
MR_decl_entry(io__nl_2_0);
MR_decl_entry(snapshots__show_snapshots_2_0);

MR_BEGIN_MODULE(mercury_profile_module2)
	MR_init_entry1(mercury_profile__main_2_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mercury_profile__main_2_3_0);
	MR_init_label10(mercury_profile__main_2_3_0,2,3,6,9,10,11,12,13,14,15)
	MR_init_label10(mercury_profile__main_2_3_0,17,18,19,20,21,22,23,16,24,25)
	MR_init_label5(mercury_profile__main_2_3_0,26,27,28,8,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'main_2'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mercury_profile__main_2_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(globals__io_get_globals_3_0,
		mercury_profile__main_2_3_0_i2);
MR_def_label(mercury_profile__main_2_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r2 = (MR_Integer) 19;
	MR_np_call_localret_ent(globals__lookup_bool_option_3_0,
		mercury_profile__main_2_3_0_i3);
MR_def_label(mercury_profile__main_2_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(mercury_profile__main_2_3_0_i5);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Integer) 13;
	MR_np_call_localret_ent(globals__lookup_bool_option_3_0,
		mercury_profile__main_2_3_0_i6);
MR_def_label(mercury_profile__main_2_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(mercury_profile__main_2_3_0_i8);
	}
	MR_np_call_localret_ent(io__stderr_stream_3_0,
		mercury_profile__main_2_3_0_i9);
MR_def_label(mercury_profile__main_2_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__set_output_stream_4_0,
		mercury_profile__main_2_3_0_i10);
MR_def_label(mercury_profile__main_2_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_np_call_localret_ent(globals__io_lookup_bool_option_4_0,
		mercury_profile__main_2_3_0_i11);
MR_def_label(mercury_profile__main_2_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r2 = (MR_Word) MR_string_const("% Processing input files...", 27);
	MR_np_call_localret_ent(options__maybe_write_string_4_0,
		mercury_profile__main_2_3_0_i12);
MR_def_label(mercury_profile__main_2_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(process_file__process_profiling_data_files_4_0,
		mercury_profile__main_2_3_0_i13);
MR_def_label(mercury_profile__main_2_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Word) MR_string_const(" done\n", 6);
	MR_np_call_localret_ent(options__maybe_write_string_4_0,
		mercury_profile__main_2_3_0_i14);
MR_def_label(mercury_profile__main_2_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 3;
	MR_np_call_localret_ent(globals__io_lookup_bool_option_4_0,
		mercury_profile__main_2_3_0_i15);
MR_def_label(mercury_profile__main_2_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(mercury_profile__main_2_3_0_i17);
	}
	MR_r1 = MR_sv(3);
	MR_sv(1) = MR_sv(4);
	MR_r2 = (MR_Word) MR_string_const("% Generating output...", 22);
	MR_GOTO_LAB(mercury_profile__main_2_3_0_i16);
MR_def_label(mercury_profile__main_2_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Word) MR_string_const("% Building call graph...", 24);
	MR_np_call_localret_ent(options__maybe_write_string_4_0,
		mercury_profile__main_2_3_0_i18);
MR_def_label(mercury_profile__main_2_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(call_graph__build_call_graph_5_0,
		mercury_profile__main_2_3_0_i19);
MR_def_label(mercury_profile__main_2_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Word) MR_string_const(" done\n", 6);
	MR_np_call_localret_ent(options__maybe_write_string_4_0,
		mercury_profile__main_2_3_0_i20);
MR_def_label(mercury_profile__main_2_3_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Word) MR_string_const("% Propagating counts...", 23);
	MR_np_call_localret_ent(options__maybe_write_string_4_0,
		mercury_profile__main_2_3_0_i21);
MR_def_label(mercury_profile__main_2_3_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(propagate__propagate_counts_5_0,
		mercury_profile__main_2_3_0_i22);
MR_def_label(mercury_profile__main_2_3_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Word) MR_string_const(" done\n", 6);
	MR_np_call_localret_ent(options__maybe_write_string_4_0,
		mercury_profile__main_2_3_0_i23);
MR_def_label(mercury_profile__main_2_3_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Word) MR_string_const("% Generating output...", 22);
MR_def_label(mercury_profile__main_2_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(options__maybe_write_string_4_0,
		mercury_profile__main_2_3_0_i24);
MR_def_label(mercury_profile__main_2_3_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(generate_output__generate_prof_output_5_0,
		mercury_profile__main_2_3_0_i25);
MR_def_label(mercury_profile__main_2_3_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const(" done\n", 6);
	}
	MR_np_call_localret_ent(options__maybe_write_string_4_0,
		mercury_profile__main_2_3_0_i26);
MR_def_label(mercury_profile__main_2_3_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(io__set_output_stream_4_0,
		mercury_profile__main_2_3_0_i27);
MR_def_label(mercury_profile__main_2_3_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(output__output_profile_4_0,
		mercury_profile__main_2_3_0_i28);
MR_def_label(mercury_profile__main_2_3_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(io__nl_2_0);
MR_def_label(mercury_profile__main_2_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(snapshots__show_snapshots_2_0);
MR_def_label(mercury_profile__main_2_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(mercury_profile__long_usage_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(io__command_line_arguments_3_0);
extern const MR_TypeCtorInfo_Struct mercury_data_options__type_ctor_info_option_0;
MR_decl_entry(getopt__process_options_4_0);
MR_decl_entry(globals__io_init_3_0);
MR_decl_entry(globals__io_set_option_4_0);

MR_BEGIN_MODULE(mercury_profile_module3)
	MR_init_entry1(main_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__main_2_0);
	MR_init_label9(main_2_0,2,8,10,12,13,18,20,9,24)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'main'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__main_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(io__command_line_arguments_3_0,
		main_2_0_i2);
MR_def_label(main_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(options, option);
	MR_r2 = (MR_Word) MR_TAG_COMMON(3,6,0);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(getopt__process_options_4_0,
		main_2_0_i8);
MR_def_label(main_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(main_2_0_i10);
	}
	MR_tag_alloc_heap(MR_r3, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r3, 0) = MR_tfield(1, MR_r2, 0);
	MR_GOTO_LAB(main_2_0_i9);
MR_def_label(main_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tfield(0, MR_r2, 0);
	MR_np_call_localret_ent(globals__io_init_3_0,
		main_2_0_i12);
MR_def_label(main_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_np_call_localret_ent(globals__io_lookup_bool_option_4_0,
		main_2_0_i13);
MR_def_label(main_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(main_2_0_i18);
	}
	MR_r1 = (MR_Integer) 0;
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,7,0);
	MR_np_call_localret_ent(globals__io_set_option_4_0,
		main_2_0_i18);
MR_def_label(main_2_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(main_2_0_i20);
	}
	MR_r1 = (MR_Integer) 2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,7,0);
	MR_np_call_localret_ent(globals__io_set_option_4_0,
		main_2_0_i20);
MR_def_label(main_2_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
MR_def_label(main_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(main_2_0_i24);
	}
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(mercury_profile__main_2_3_0);
MR_def_label(main_2_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(1, MR_r3, 0);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(mercury_profile__usage_error_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__mercury_profile_maybe_bunch_0(void)
{
	mercury_profile_module0();
	mercury_profile_module1();
	mercury_profile_module2();
	mercury_profile_module3();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__mercury_profile__init(void);
void mercury__mercury_profile__init_type_tables(void);
void mercury__mercury_profile__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__mercury_profile__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__mercury_profile__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__mercury_profile__init_threadscope_string_table(void);
#endif

void mercury__mercury_profile__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__mercury_profile_maybe_bunch_0();
	mercury__mercury_profile__init_debugger();
}

void mercury__mercury_profile__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}


void mercury__mercury_profile__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__mercury_profile__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__mercury_profile);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__mercury_profile__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__mercury_profile__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
