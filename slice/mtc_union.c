/*
** Automatically generated from `mtc_union.m'
** by the Mercury compiler,
** version rotd-2013-03-18, configured for x86_64-apple-darwin12.2.1.
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
INIT mercury__mtc_union__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 526 "../library/io.int"
#include "io.mh"

#line 28 "mtc_union.c"
#line 536 "../library/io.int"
#include "time.mh"

#line 32 "mtc_union.c"
#line 537 "../library/io.int"
#include "string.mh"

#line 36 "mtc_union.c"
#line 31 "../library/bitmap.int2"
#include "bitmap.mh"

#line 40 "mtc_union.c"
#line 33 "../library/array.int2"
#include "array.mh"

#line 44 "mtc_union.c"
#line 45 "mtc_union.c"
#include "mtc_union.mh"

#line 48 "mtc_union.c"
#line 49 "mtc_union.c"
#ifndef MTC_UNION_DECL_GUARD
#define MTC_UNION_DECL_GUARD

#line 53 "mtc_union.c"
#line 54 "mtc_union.c"

#endif
#line 57 "mtc_union.c"

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
	MR_String f1;
	MR_Word * f2;
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
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
	MR_Word * f5;
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_3 {
	MR_Word * f1;
	MR_Code * f2;
	MR_Integer f3;
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
	MR_String f2;
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_common_4[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_5 {
	MR_Integer f1;
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_5 mercury_common_5[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_mtc_union__type_ctor_info_option_0,
	mercury_data_mtc_union__type_ctor_info_option_table_0;
MR_decl_label2(mtc_union__long_option_2_0, 3,1)
MR_decl_label10(main_2_0, 2,3,8,11,10,13,18,19,20,23)
MR_decl_label10(main_2_0, 25,28,29,30,31,32,33,22,36,14)
MR_decl_label1(main_2_0, 9)
MR_decl_label1(mtc_union__option_default_2_0, 2)
MR_decl_label2(mtc_union__short_option_2_0, 3,1)
MR_def_extern_entry(main_2_0)
MR_decl_static(mtc_union__short_option_2_0)
MR_decl_static(mtc_union__long_option_2_0)
MR_decl_static(mtc_union__option_default_2_0)
MR_decl_static(__Unify___mtc_union__option_0_0)
MR_decl_static(__Compare___mtc_union__option_0_0)
MR_decl_static(__Unify___mtc_union__option_table_0_0)
MR_decl_static(__Compare___mtc_union__option_table_0_0)

extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;
extern const MR_TypeCtorInfo_Struct mercury_data_getopt__type_ctor_info_option_data_0;
static const struct mercury_type_0 mercury_common_0[2] =
{
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(mtc_union, option),
MR_CTOR0_ADDR(getopt, option_data)
}
},
{
{
MR_TAG_COMMON(0,3,0),
MR_TAG_COMMON(0,3,1),
MR_TAG_COMMON(0,3,2)
}
},
};

static const struct mercury_type_1 mercury_common_1[4] =
{
{
MR_string_const("file1, file2, etc should be trace count files.\n", 47),
MR_tbmkword(0, 0)
},
{
MR_string_const("to be printed as it is added to the union.\n", 43),
MR_TAG_COMMON(1,1,0)
},
{
MR_string_const("The -v or --verbose option causes each trace count file name\n", 61),
MR_TAG_COMMON(1,1,1)
},
{
MR_string_const("Usage: mtc_union [-v] -o output_file file1 file2 ...\n", 53),
MR_TAG_COMMON(1,1,2)
},
};

static const MR_UserClosureId
mercury_data__closure_layout__main_2_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_character_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mtc_union__type_ctor_info_option_0;
static const MR_UserClosureId
mercury_data__closure_layout__main_2_0_2;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
static const MR_UserClosureId
mercury_data__closure_layout__main_2_0_3;
extern const MR_TypeCtorInfo_Struct mercury_data_getopt__type_ctor_info_option_data_0;
static const struct mercury_type_2 mercury_common_2[3] =
{
{
(MR_Word *) &mercury_data__closure_layout__main_2_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CHAR_CTOR_ADDR,
MR_CTOR0_ADDR(mtc_union, option)
},
{
(MR_Word *) &mercury_data__closure_layout__main_2_0_2,
(MR_Word *) (MR_Integer) 0,
2,
MR_STRING_CTOR_ADDR,
MR_CTOR0_ADDR(mtc_union, option)
},
{
(MR_Word *) &mercury_data__closure_layout__main_2_0_3,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(mtc_union, option),
MR_CTOR0_ADDR(getopt, option_data)
},
};

static const struct mercury_type_3 mercury_common_3[3] =
{
{
MR_COMMON(2,0),
MR_ENTRY_AP(mtc_union__short_option_2_0),
0
},
{
MR_COMMON(2,1),
MR_ENTRY_AP(mtc_union__long_option_2_0),
0
},
{
MR_COMMON(2,2),
MR_ENTRY_AP(mtc_union__option_default_2_0),
0
},
};

static const struct mercury_type_4 mercury_common_4[1] =
{
{
0,
MR_string_const("", 0)
},
};

static const struct mercury_type_5 mercury_common_5[1] =
{
{
0
},
};

static const MR_EnumFunctorDesc mercury_data_mtc_union__enum_functor_desc_option_0_0 = {
	"output_filename",
	0
};

static const MR_EnumFunctorDesc mercury_data_mtc_union__enum_functor_desc_option_0_1 = {
	"verbose",
	1
};

const MR_EnumFunctorDescPtr mercury_data_mtc_union__enum_value_ordered_option_0[] = {
	&mercury_data_mtc_union__enum_functor_desc_option_0_0,
	&mercury_data_mtc_union__enum_functor_desc_option_0_1
};

const MR_EnumFunctorDescPtr mercury_data_mtc_union__enum_name_ordered_option_0[] = {
	&mercury_data_mtc_union__enum_functor_desc_option_0_0,
	&mercury_data_mtc_union__enum_functor_desc_option_0_1
};

const MR_Integer mercury_data_mtc_union__functor_number_map_option_0[] = {
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_mtc_union__type_ctor_info_option_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mtc_union__option_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mtc_union__option_0_0)),
	"mtc_union",
	"option",
	{ (void *)mercury_data_mtc_union__enum_name_ordered_option_0 },
	{ (void *)mercury_data_mtc_union__enum_value_ordered_option_0 },
	2,
	4,
	mercury_data_mtc_union__functor_number_map_option_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_mtc_union__type_ctor_info_option_0;
extern const MR_TypeCtorInfo_Struct mercury_data_getopt__type_ctor_info_option_data_0;

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2mtc_union__type_ctor_info_option_0getopt__type_ctor_info_option_data_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_mtc_union__type_ctor_info_option_0,
	(MR_TypeInfo) &mercury_data_getopt__type_ctor_info_option_data_0
}};

const MR_TypeCtorInfo_Struct mercury_data_mtc_union__type_ctor_info_option_table_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mtc_union__option_table_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mtc_union__option_table_0_0)),
	"mtc_union",
	"option_table",
	{ 0 },
	{ (void *)&mercury_data_tree234__ti_tree234_2mtc_union__type_ctor_info_option_0getopt__type_ctor_info_option_data_0 },
	-1,
	0,
	NULL
};


static const MR_UserClosureId
mercury_data__closure_layout__main_2_0_3 = {
{
MR_PREDICATE,
"mtc_union",
"mtc_union",
"option_default",
2,
0
},
"mtc_union",
"mtc_union.m",
45,
"9"
};

static const MR_UserClosureId
mercury_data__closure_layout__main_2_0_2 = {
{
MR_PREDICATE,
"mtc_union",
"mtc_union",
"long_option",
2,
0
},
"mtc_union",
"mtc_union.m",
45,
"8"
};

static const MR_UserClosureId
mercury_data__closure_layout__main_2_0_1 = {
{
MR_PREDICATE,
"mtc_union",
"mtc_union",
"short_option",
2,
0
},
"mtc_union",
"mtc_union.m",
45,
"7"
};


MR_decl_entry(mdbcomp__shared_utilities__unlimit_stack_2_0);
MR_decl_entry(io__command_line_arguments_3_0);
MR_decl_entry(getopt__process_options_4_0);
MR_decl_entry(io__write_string_3_0);
MR_decl_entry(io__nl_2_0);
MR_decl_entry(getopt__lookup_string_option_3_0);
MR_decl_entry(getopt__lookup_bool_option_3_0);
MR_decl_entry(mdbcomp__trace_counts__read_and_union_trace_counts_8_0);
MR_decl_entry(io__stderr_stream_3_0);
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__trace_counts__type_ctor_info_trace_count_file_type_0;
MR_decl_entry(fn__set__to_sorted_list_1_0);
MR_decl_entry(mdbcomp__trace_counts__write_trace_counts_to_file_6_0);
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_error_0;
MR_decl_entry(fn__string__string_1_0);
MR_decl_entry(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
MR_decl_entry(io__write_string_4_0);
MR_decl_entry(io__nl_3_0);
MR_decl_entry(io__write_strings_3_0);

MR_BEGIN_MODULE(mtc_union_module0)
	MR_init_entry1(main_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__main_2_0);
	MR_init_label10(main_2_0,2,3,8,11,10,13,18,19,20,23)
	MR_init_label10(main_2_0,25,28,29,30,31,32,33,22,36,14)
	MR_init_label1(main_2_0,9)
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
	MR_np_call_localret_ent(mdbcomp__shared_utilities__unlimit_stack_2_0,
		main_2_0_i2);
MR_def_label(main_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__command_line_arguments_3_0,
		main_2_0_i3);
MR_def_label(main_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = (MR_Word) MR_CTOR0_ADDR(mtc_union, option);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = (MR_Word) MR_TAG_COMMON(2,0,1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(getopt__process_options_4_0,
		main_2_0_i8);
MR_def_label(main_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(main_2_0_i10);
	}
	MR_r1 = MR_tfield(1, MR_r2, 0);
	MR_np_call_localret_ent(io__write_string_3_0,
		main_2_0_i11);
MR_def_label(main_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(io__nl_2_0);
MR_def_label(main_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_sv(1) = MR_tfield(0, MR_r2, 0);
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Integer) 0;
	MR_np_call_localret_ent(getopt__lookup_string_option_3_0,
		main_2_0_i13);
MR_def_label(main_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(2),0,0)) {
		MR_GOTO_LAB(main_2_0_i14);
	}
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("", 0)) == 0)) {
		MR_GOTO_LAB(main_2_0_i14);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Integer) 1;
	}
	MR_np_call_localret_ent(getopt__lookup_bool_option_3_0,
		main_2_0_i18);
MR_def_label(main_2_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(mdbcomp__trace_counts__read_and_union_trace_counts_8_0,
		main_2_0_i19);
MR_def_label(main_2_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_np_call_localret_ent(io__stderr_stream_3_0,
		main_2_0_i20);
MR_def_label(main_2_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(4),0,0)) {
		MR_GOTO_LAB(main_2_0_i22);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__trace_counts, trace_count_file_type);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__set__to_sorted_list_1_0,
		main_2_0_i23);
MR_def_label(main_2_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(1);
	}
	MR_np_call_localret_ent(mdbcomp__trace_counts__write_trace_counts_to_file_6_0,
		main_2_0_i25);
MR_def_label(main_2_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(main_2_0_i9);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(io, error);
	MR_r2 = MR_tfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(fn__string__string_1_0,
		main_2_0_i28);
MR_def_label(main_2_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(": ", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		main_2_0_i29);
MR_def_label(main_2_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\'", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		main_2_0_i30);
MR_def_label(main_2_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		main_2_0_i31);
MR_def_label(main_2_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("file \140", 6);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		main_2_0_i32);
MR_def_label(main_2_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("Error writing to ", 17);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		main_2_0_i33);
MR_def_label(main_2_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(io__write_string_4_0,
		main_2_0_i36);
MR_def_label(main_2_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r2 = MR_tfield(1, MR_sv(4), 0);
	MR_np_call_localret_ent(io__write_string_4_0,
		main_2_0_i36);
MR_def_label(main_2_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(io__nl_3_0);
MR_def_label(main_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,1,3);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(io__write_strings_3_0);
MR_def_label(main_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mtc_union_module1)
	MR_init_entry1(mtc_union__short_option_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mtc_union__short_option_2_0);
	MR_init_label2(mtc_union__short_option_2_0,3,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'short_option'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mtc_union__short_option_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,111)) {
		MR_GOTO_LAB(mtc_union__short_option_2_0_i3);
	}
	MR_r2 = (MR_Integer) 0;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mtc_union__short_option_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,118)) {
		MR_GOTO_LAB(mtc_union__short_option_2_0_i1);
	}
	MR_r2 = (MR_Integer) 1;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mtc_union__short_option_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mtc_union_module2)
	MR_init_entry1(mtc_union__long_option_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mtc_union__long_option_2_0);
	MR_init_label2(mtc_union__long_option_2_0,3,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'long_option'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mtc_union__long_option_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("out", 3)) != 0)) {
		MR_GOTO_LAB(mtc_union__long_option_2_0_i3);
	}
	MR_r2 = (MR_Integer) 0;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mtc_union__long_option_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("verbose", 7)) != 0)) {
		MR_GOTO_LAB(mtc_union__long_option_2_0_i1);
	}
	MR_r2 = (MR_Integer) 1;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mtc_union__long_option_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mtc_union_module3)
	MR_init_entry1(mtc_union__option_default_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mtc_union__option_default_2_0);
	MR_init_label1(mtc_union__option_default_2_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'option_default'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mtc_union__option_default_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_mkframe("pred mtc_union.option_default/2-0", 0,
		MR_LABEL_AP(mtc_union__option_default_2_0_i2));
	MR_r1 = (MR_Integer) 0;
	MR_r2 = (MR_Word) MR_TAG_COMMON(3,4,0);
	MR_succeed();
MR_def_label(mtc_union__option_default_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,5,0);
	MR_succeed_discard();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mtc_union_module4)
	MR_init_entry1(__Unify___mtc_union__option_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___mtc_union__option_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___mtc_union__option_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_int_3_0);

MR_BEGIN_MODULE(mtc_union_module5)
	MR_init_entry1(__Compare___mtc_union__option_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___mtc_union__option_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___mtc_union__option_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(builtin__unify_2_0);

MR_BEGIN_MODULE(mtc_union_module6)
	MR_init_entry1(__Unify___mtc_union__option_table_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___mtc_union__option_table_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___mtc_union__option_table_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(builtin__unify_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(builtin__compare_3_0);

MR_BEGIN_MODULE(mtc_union_module7)
	MR_init_entry1(__Compare___mtc_union__option_table_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___mtc_union__option_table_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___mtc_union__option_table_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(builtin__compare_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__mtc_union_maybe_bunch_0(void)
{
	mtc_union_module0();
	mtc_union_module1();
	mtc_union_module2();
	mtc_union_module3();
	mtc_union_module4();
	mtc_union_module5();
	mtc_union_module6();
	mtc_union_module7();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__mtc_union__init(void);
void mercury__mtc_union__init_type_tables(void);
void mercury__mtc_union__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__mtc_union__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__mtc_union__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__mtc_union__init_threadscope_string_table(void);
#endif

void mercury__mtc_union__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__mtc_union_maybe_bunch_0();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mtc_union__type_ctor_info_option_0,
		mtc_union__option_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mtc_union__type_ctor_info_option_table_0,
		mtc_union__option_table_0_0);
	mercury__mtc_union__init_debugger();
}

void mercury__mtc_union__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_mtc_union__type_ctor_info_option_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mtc_union__type_ctor_info_option_table_0);
	}
}


void mercury__mtc_union__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__mtc_union__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_layout__mtc_union);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__mtc_union__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__mtc_union__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
