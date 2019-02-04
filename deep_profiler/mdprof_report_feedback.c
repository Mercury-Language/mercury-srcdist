/*
** Automatically generated from `mdprof_report_feedback.m'
** by the Mercury compiler,
** version rotd-2012-06-11, configured for x86_64-unknown-linux-gnu.
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
INIT mercury__mdprof_report_feedback__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 526 "../library/io.int"
#include "io.mh"

#line 28 "mdprof_report_feedback.c"
#line 536 "../library/io.int"
#include "time.mh"

#line 32 "mdprof_report_feedback.c"
#line 537 "../library/io.int"
#include "string.mh"

#line 36 "mdprof_report_feedback.c"
#line 31 "../library/bitmap.int2"
#include "bitmap.mh"

#line 40 "mdprof_report_feedback.c"
#line 33 "../library/array.int2"
#include "array.mh"

#line 44 "mdprof_report_feedback.c"
#line 39 "mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 48 "mdprof_report_feedback.c"
#line 49 "mdprof_report_feedback.c"
#include "mdprof_report_feedback.mh"

#line 52 "mdprof_report_feedback.c"
#line 53 "mdprof_report_feedback.c"
#ifndef MDPROF_REPORT_FEEDBACK_DECL_GUARD
#define MDPROF_REPORT_FEEDBACK_DECL_GUARD

#line 57 "mdprof_report_feedback.c"
#line 58 "mdprof_report_feedback.c"

#endif
#line 61 "mdprof_report_feedback.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_0 {
	MR_Integer f1;
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_0 mercury_common_0[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_1 {
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
	MR_Word * f5;
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_2 {
	MR_Word * f1;
	MR_Code * f2;
	MR_Integer f3;
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_3 {
	MR_Word * f1[3];
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_4 {
	MR_Integer f1;
	MR_Word * f2;
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_vector_common_4_0[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_mdprof_report_feedback__type_ctor_info_option_0;
MR_decl_label3(mdprof_report_feedback__defaults_2_0, 5,6,7)
MR_decl_label3(mdprof_report_feedback__long_2_0, 3,4,1)
MR_decl_label10(main_2_0, 2,3,8,9,12,13,14,15,11,18)
MR_decl_label10(main_2_0, 19,20,23,24,25,26,27,21,29,68)
MR_decl_label9(main_2_0, 33,38,41,42,43,44,40,47,49)
MR_decl_label8(mdprof_report_feedback__post_process_options_5_0, 2,3,5,6,4,10,11,9)
MR_decl_label3(mdprof_report_feedback__short_2_0, 3,4,1)
MR_decl_label2(mdprof_report_feedback__write_help_message_3_0, 2,3)
MR_decl_static(mdprof_report_feedback__write_help_message_3_0)
MR_decl_static(mdprof_report_feedback__post_process_options_5_0)
MR_def_extern_entry(main_2_0)
MR_decl_static(mdprof_report_feedback__short_2_0)
MR_decl_static(mdprof_report_feedback__long_2_0)
MR_decl_static(mdprof_report_feedback__defaults_2_0)
MR_decl_static(__Unify___mdprof_report_feedback__option_0_0)
MR_decl_static(__Compare___mdprof_report_feedback__option_0_0)

static const struct mercury_type_0 mercury_common_0[3] =
{
{
0
},
{
4
},
{
2
},
};

static const MR_UserClosureId
mercury_data__closure_layout__main_2_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_character_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdprof_report_feedback__type_ctor_info_option_0;
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
MR_CTOR0_ADDR(mdprof_report_feedback, option)
},
{
(MR_Word *) &mercury_data__closure_layout__main_2_0_2,
(MR_Word *) (MR_Integer) 0,
2,
MR_STRING_CTOR_ADDR,
MR_CTOR0_ADDR(mdprof_report_feedback, option)
},
{
(MR_Word *) &mercury_data__closure_layout__main_2_0_3,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(mdprof_report_feedback, option),
MR_CTOR0_ADDR(getopt, option_data)
},
};

static const struct mercury_type_2 mercury_common_2[3] =
{
{
MR_COMMON(1,0),
MR_ENTRY_AP(mdprof_report_feedback__short_2_0),
0
},
{
MR_COMMON(1,1),
MR_ENTRY_AP(mdprof_report_feedback__long_2_0),
0
},
{
MR_COMMON(1,2),
MR_ENTRY_AP(mdprof_report_feedback__defaults_2_0),
0
},
};

static const struct mercury_type_3 mercury_common_3[1] =
{
{
{
MR_TAG_COMMON(0,2,0),
MR_TAG_COMMON(0,2,1),
MR_TAG_COMMON(0,2,2)
}
},
};

static const struct mercury_type_4 mercury_vector_common_4_0[3] =
{
{
0,
MR_TAG_COMMON(1,0,0)
},
{
2,
MR_TAG_COMMON(2,0,2)
},
{
1,
MR_TAG_COMMON(1,0,0)
},
};

static const MR_EnumFunctorDesc mercury_data_mdprof_report_feedback__enum_functor_desc_option_0_0 = {
	"help",
	0
};

static const MR_EnumFunctorDesc mercury_data_mdprof_report_feedback__enum_functor_desc_option_0_1 = {
	"version",
	1
};

static const MR_EnumFunctorDesc mercury_data_mdprof_report_feedback__enum_functor_desc_option_0_2 = {
	"verbosity",
	2
};

const MR_EnumFunctorDescPtr mercury_data_mdprof_report_feedback__enum_value_ordered_option_0[] = {
	&mercury_data_mdprof_report_feedback__enum_functor_desc_option_0_0,
	&mercury_data_mdprof_report_feedback__enum_functor_desc_option_0_1,
	&mercury_data_mdprof_report_feedback__enum_functor_desc_option_0_2
};

const MR_EnumFunctorDescPtr mercury_data_mdprof_report_feedback__enum_name_ordered_option_0[] = {
	&mercury_data_mdprof_report_feedback__enum_functor_desc_option_0_0,
	&mercury_data_mdprof_report_feedback__enum_functor_desc_option_0_2,
	&mercury_data_mdprof_report_feedback__enum_functor_desc_option_0_1
};

const MR_Integer mercury_data_mdprof_report_feedback__functor_number_map_option_0[] = {
	0,
	2,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_mdprof_report_feedback__type_ctor_info_option_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdprof_report_feedback__option_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdprof_report_feedback__option_0_0)),
	"mdprof_report_feedback",
	"option",
	{ (void *)mercury_data_mdprof_report_feedback__enum_name_ordered_option_0 },
	{ (void *)mercury_data_mdprof_report_feedback__enum_value_ordered_option_0 },
	3,
	4,
	mercury_data_mdprof_report_feedback__functor_number_map_option_0
};


static const MR_UserClosureId
mercury_data__closure_layout__main_2_0_3 = {
{
MR_PREDICATE,
"mdprof_report_feedback",
"mdprof_report_feedback",
"defaults",
2,
0
},
"mdprof_report_feedback",
"mdprof_report_feedback.m",
52,
"8"
};

static const MR_UserClosureId
mercury_data__closure_layout__main_2_0_2 = {
{
MR_PREDICATE,
"mdprof_report_feedback",
"mdprof_report_feedback",
"long",
2,
0
},
"mdprof_report_feedback",
"mdprof_report_feedback.m",
52,
"6"
};

static const MR_UserClosureId
mercury_data__closure_layout__main_2_0_1 = {
{
MR_PREDICATE,
"mdprof_report_feedback",
"mdprof_report_feedback",
"short",
2,
0
},
"mdprof_report_feedback",
"mdprof_report_feedback.m",
52,
"4"
};


MR_decl_entry(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
MR_decl_entry(io__write_string_3_0);

MR_BEGIN_MODULE(mdprof_report_feedback_module0)
	MR_init_entry1(mdprof_report_feedback__write_help_message_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdprof_report_feedback__write_help_message_3_0);
	MR_init_label2(mdprof_report_feedback__write_help_message_3_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'write_help_message'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdprof_report_feedback__write_help_message_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r2 = (MR_Word) MR_string_const(" [options] <feedbackfile>\n    This command outputs a report that shows the contents of the named\n    feedback file in a human-readable form.\n\n    You may specif" "y the following general options:\n\n    -h --help       Generate this help message.\n    -V --version    Report the program\'s version number.\n    -v --verbosity  <" "0-4>\n                    Generate messages. The higher the argument, the more\n                    verbose the program becomes. 2 is recommended, and\n           " "         is the default.\n", 505);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdprof_report_feedback__write_help_message_3_0_i2);
MR_def_label(mdprof_report_feedback__write_help_message_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("Usage: ", 7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdprof_report_feedback__write_help_message_3_0_i3);
MR_def_label(mdprof_report_feedback__write_help_message_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(getopt__lookup_int_option_3_0);
MR_decl_entry(io__stderr_stream_3_0);
MR_decl_entry(io__write_string_4_0);
extern const MR_TypeCtorInfo_Struct mercury_data_getopt__type_ctor_info_option_data_0;
MR_decl_entry(map__set_4_0);

MR_BEGIN_MODULE(mdprof_report_feedback_module1)
	MR_init_entry1(mdprof_report_feedback__post_process_options_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdprof_report_feedback__post_process_options_5_0);
	MR_init_label8(mdprof_report_feedback__post_process_options_5_0,2,3,5,6,4,10,11,9)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'post_process_options'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdprof_report_feedback__post_process_options_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdprof_report_feedback, option);
	MR_r3 = (MR_Integer) 2;
	MR_np_call_localret_ent(getopt__lookup_int_option_3_0,
		mdprof_report_feedback__post_process_options_5_0_i2);
MR_def_label(mdprof_report_feedback__post_process_options_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(io__stderr_stream_3_0,
		mdprof_report_feedback__post_process_options_5_0_i3);
MR_def_label(mdprof_report_feedback__post_process_options_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_GE(MR_sv(1),0)) {
		MR_GOTO_LAB(mdprof_report_feedback__post_process_options_5_0_i4);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const(": warning: verbosity level should not be negative.\n", 51);
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdprof_report_feedback__post_process_options_5_0_i5);
MR_def_label(mdprof_report_feedback__post_process_options_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(io__write_string_4_0,
		mdprof_report_feedback__post_process_options_5_0_i6);
MR_def_label(mdprof_report_feedback__post_process_options_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdprof_report_feedback, option);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(getopt, option_data);
	MR_r3 = (MR_Integer) 2;
	MR_r4 = (MR_Word) MR_TAG_COMMON(2,0,0);
	MR_r5 = MR_sv(3);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(map__set_4_0);
MR_def_label(mdprof_report_feedback__post_process_options_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_LE(MR_sv(1),4)) {
		MR_GOTO_LAB(mdprof_report_feedback__post_process_options_5_0_i9);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const(": warning: verbosity level should not exceed 4.\n", 48);
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdprof_report_feedback__post_process_options_5_0_i10);
MR_def_label(mdprof_report_feedback__post_process_options_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(io__write_string_4_0,
		mdprof_report_feedback__post_process_options_5_0_i11);
MR_def_label(mdprof_report_feedback__post_process_options_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdprof_report_feedback, option);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(getopt, option_data);
	MR_r3 = (MR_Integer) 2;
	MR_r4 = (MR_Word) MR_TAG_COMMON(2,0,1);
	MR_r5 = MR_sv(3);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(map__set_4_0);
MR_def_label(mdprof_report_feedback__post_process_options_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(io__progname_base_4_0);
MR_decl_entry(io__command_line_arguments_3_0);
MR_decl_entry(getopt__process_options_4_0);
MR_decl_entry(getopt__lookup_bool_option_3_0);
MR_decl_entry(library__version_1_0);
MR_decl_entry(io__nl_2_0);
MR_decl_entry(mdbcomp__feedback__read_feedback_file_4_0);
MR_decl_entry(mdbcomp__feedback__read_error_message_string_3_0);
MR_decl_entry(fn__mdbcomp__feedback__get_feedback_program_name_1_0);
MR_decl_entry(mdprof_fb__automatic_parallelism__autopar_reports__print_feedback_report_4_0);
MR_decl_entry(io__set_exit_status_3_0);

MR_BEGIN_MODULE(mdprof_report_feedback_module2)
	MR_init_entry1(main_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__main_2_0);
	MR_init_label10(main_2_0,2,3,8,9,12,13,14,15,11,18)
	MR_init_label10(main_2_0,19,20,23,24,25,26,27,21,29,68)
	MR_init_label9(main_2_0,33,38,41,42,43,44,40,47,49)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'main'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__main_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_r1 = (MR_Word) MR_string_const("mdprof_report_feedback", 22);
	MR_np_call_localret_ent(io__progname_base_4_0,
		main_2_0_i2);
MR_def_label(main_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(io__command_line_arguments_3_0,
		main_2_0_i3);
MR_def_label(main_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = (MR_Word) MR_CTOR0_ADDR(mdprof_report_feedback, option);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = (MR_Word) MR_TAG_COMMON(2,3,0);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(getopt__process_options_4_0,
		main_2_0_i8);
MR_def_label(main_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(io__stderr_stream_3_0,
		main_2_0_i9);
MR_def_label(main_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(main_2_0_i11);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tfield(1, MR_tempr1, 0);
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		main_2_0_i12);
MR_def_label(main_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(": error parsing options: ", 25);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		main_2_0_i13);
MR_def_label(main_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		main_2_0_i14);
MR_def_label(main_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(io__write_string_4_0,
		main_2_0_i15);
MR_def_label(main_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(mdprof_report_feedback__write_help_message_3_0,
		main_2_0_i49);
MR_def_label(main_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(mdprof_report_feedback__post_process_options_5_0,
		main_2_0_i18);
MR_def_label(main_2_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(3);
	MR_r3 = (MR_Integer) 0;
	MR_np_call_localret_ent(getopt__lookup_bool_option_3_0,
		main_2_0_i19);
MR_def_label(main_2_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Integer) 1;
	}
	MR_np_call_localret_ent(getopt__lookup_bool_option_3_0,
		main_2_0_i20);
MR_def_label(main_2_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(main_2_0_i21);
	}
	MR_np_call_localret_ent(library__version_1_0,
		main_2_0_i23);
MR_def_label(main_2_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		main_2_0_i24);
MR_def_label(main_2_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(": Mercury deep profiler", 23);
	MR_np_call_localret_ent(io__write_string_3_0,
		main_2_0_i25);
MR_def_label(main_2_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		main_2_0_i26);
MR_def_label(main_2_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(io__write_string_3_0,
		main_2_0_i27);
MR_def_label(main_2_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(io__nl_2_0);
MR_def_label(main_2_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(3),1)) {
		MR_GOTO_LAB(main_2_0_i29);
	}
	MR_r1 = MR_sv(4);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(mdprof_report_feedback__write_help_message_3_0);
MR_def_label(main_2_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(main_2_0_i33);
	}
MR_def_label(main_2_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(mdprof_report_feedback__write_help_message_3_0,
		main_2_0_i49);
MR_def_label(main_2_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_sv(1), 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(main_2_0_i68);
	}
	MR_sv(1) = MR_tfield(1, MR_sv(1), 0);
	MR_r1 = MR_sv(1);
	}
	MR_np_call_localret_ent(mdbcomp__feedback__read_feedback_file_4_0,
		main_2_0_i38);
MR_def_label(main_2_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(main_2_0_i40);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(mdbcomp__feedback__read_error_message_string_3_0,
		main_2_0_i41);
MR_def_label(main_2_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		main_2_0_i42);
MR_def_label(main_2_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(": ", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		main_2_0_i43);
MR_def_label(main_2_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		main_2_0_i44);
MR_def_label(main_2_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(io__write_string_4_0,
		main_2_0_i49);
MR_def_label(main_2_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_tfield(0, MR_r1, 0);
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(fn__mdbcomp__feedback__get_feedback_program_name_1_0,
		main_2_0_i47);
MR_def_label(main_2_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(mdprof_fb__automatic_parallelism__autopar_reports__print_feedback_report_4_0);
MR_def_label(main_2_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(io__set_exit_status_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdprof_report_feedback_module3)
	MR_init_entry1(mdprof_report_feedback__short_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdprof_report_feedback__short_2_0);
	MR_init_label3(mdprof_report_feedback__short_2_0,3,4,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'short'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdprof_report_feedback__short_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,86)) {
		MR_GOTO_LAB(mdprof_report_feedback__short_2_0_i3);
	}
	MR_r2 = (MR_Integer) 1;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdprof_report_feedback__short_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,104)) {
		MR_GOTO_LAB(mdprof_report_feedback__short_2_0_i4);
	}
	MR_r2 = (MR_Integer) 0;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdprof_report_feedback__short_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,118)) {
		MR_GOTO_LAB(mdprof_report_feedback__short_2_0_i1);
	}
	MR_r2 = (MR_Integer) 2;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdprof_report_feedback__short_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdprof_report_feedback_module4)
	MR_init_entry1(mdprof_report_feedback__long_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdprof_report_feedback__long_2_0);
	MR_init_label3(mdprof_report_feedback__long_2_0,3,4,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'long'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdprof_report_feedback__long_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("help", 4)) != 0)) {
		MR_GOTO_LAB(mdprof_report_feedback__long_2_0_i3);
	}
	MR_r2 = (MR_Integer) 0;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdprof_report_feedback__long_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("version", 7)) != 0)) {
		MR_GOTO_LAB(mdprof_report_feedback__long_2_0_i4);
	}
	MR_r2 = (MR_Integer) 1;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdprof_report_feedback__long_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("verbosity", 9)) != 0)) {
		MR_GOTO_LAB(mdprof_report_feedback__long_2_0_i1);
	}
	MR_r2 = (MR_Integer) 2;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdprof_report_feedback__long_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(MR_do_fail);

MR_BEGIN_MODULE(mdprof_report_feedback_module5)
	MR_init_entry1(mdprof_report_feedback__defaults_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdprof_report_feedback__defaults_2_0);
	MR_init_label3(mdprof_report_feedback__defaults_2_0,5,6,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'defaults'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdprof_report_feedback__defaults_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_mkframe("pred mdprof_report_feedback.defaults/2-0", 1,
		MR_LABEL_AP(mdprof_report_feedback__defaults_2_0_i5));
	{
	MR_Word MR_tempr1;
	MR_tempr1 = (MR_Word) &MR_tfield(0, (MR_Word *) &mercury_vector_common_4_0, 0);
	MR_fv(1) = (MR_Integer) 2;
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = MR_tfield(0, MR_tempr1, 1);
	MR_succeed();
	}
MR_def_label(mdprof_report_feedback__defaults_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_fv(1);
	if (MR_INT_GE(MR_r3,4)) {
		MR_GOTO_LAB(mdprof_report_feedback__defaults_2_0_i6);
	}
	MR_fv(1) = ((MR_Integer) MR_fv(1) + (MR_Integer) 2);
	MR_GOTO_LAB(mdprof_report_feedback__defaults_2_0_i7);
MR_def_label(mdprof_report_feedback__defaults_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_curfr) = (MR_Word) MR_ENTRY(MR_do_fail);
MR_def_label(mdprof_report_feedback__defaults_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = (MR_Word) &MR_tfield(0, (MR_Word *) &mercury_vector_common_4_0, (MR_Integer) MR_r3);
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = MR_tfield(0, MR_tempr1, 1);
	MR_succeed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdprof_report_feedback_module6)
	MR_init_entry1(__Unify___mdprof_report_feedback__option_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___mdprof_report_feedback__option_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___mdprof_report_feedback__option_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_int_3_0);

MR_BEGIN_MODULE(mdprof_report_feedback_module7)
	MR_init_entry1(__Compare___mdprof_report_feedback__option_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___mdprof_report_feedback__option_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___mdprof_report_feedback__option_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__mdprof_report_feedback_maybe_bunch_0(void)
{
	mdprof_report_feedback_module0();
	mdprof_report_feedback_module1();
	mdprof_report_feedback_module2();
	mdprof_report_feedback_module3();
	mdprof_report_feedback_module4();
	mdprof_report_feedback_module5();
	mdprof_report_feedback_module6();
	mdprof_report_feedback_module7();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__mdprof_report_feedback__init(void);
void mercury__mdprof_report_feedback__init_type_tables(void);
void mercury__mdprof_report_feedback__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__mdprof_report_feedback__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__mdprof_report_feedback__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__mdprof_report_feedback__init_threadscope_string_table(void);
#endif

void mercury__mdprof_report_feedback__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__mdprof_report_feedback_maybe_bunch_0();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdprof_report_feedback__type_ctor_info_option_0,
		mdprof_report_feedback__option_0_0);
	mercury__mdprof_report_feedback__init_debugger();
}

void mercury__mdprof_report_feedback__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_mdprof_report_feedback__type_ctor_info_option_0);
	}
}


void mercury__mdprof_report_feedback__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__mdprof_report_feedback__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__mdprof_report_feedback);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__mdprof_report_feedback__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__mdprof_report_feedback__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
