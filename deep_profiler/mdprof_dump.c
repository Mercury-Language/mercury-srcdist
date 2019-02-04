/*
** Automatically generated from `mdprof_dump.m'
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
INIT mercury__mdprof_dump__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 526 "../library/io.int"
#include "io.mh"

#line 28 "mdprof_dump.c"
#line 536 "../library/io.int"
#include "string.mh"

#line 32 "mdprof_dump.c"
#line 9 "read_profile.int"
#include "read_profile.mh"

#line 36 "mdprof_dump.c"
#line 31 "../library/bitmap.int2"
#include "bitmap.mh"

#line 40 "mdprof_dump.c"
#line 30 "../library/time.int2"
#include "time.mh"

#line 44 "mdprof_dump.c"
#line 33 "../library/array.int2"
#include "array.mh"

#line 48 "mdprof_dump.c"
#line 39 "mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 52 "mdprof_dump.c"
#line 53 "mdprof_dump.c"
#include "mdprof_dump.mh"

#line 56 "mdprof_dump.c"
#line 57 "mdprof_dump.c"
#ifndef MDPROF_DUMP_DECL_GUARD
#define MDPROF_DUMP_DECL_GUARD

#line 61 "mdprof_dump.c"
#line 62 "mdprof_dump.c"

#endif
#line 65 "mdprof_dump.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

struct mercury_type_0 {
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
	MR_Word * f5;
};
MR_STATIC_LINKAGE const struct mercury_type_0 mercury_common_0[];

struct mercury_type_1 {
	MR_Word * f1;
	MR_Code * f2;
	MR_Integer f3;
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

struct mercury_type_2 {
	MR_Word * f1[3];
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];

struct mercury_type_3 {
	MR_Integer f1;
};
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];

struct mercury_type_4 {
	MR_Integer f1;
	MR_Word * f2;
};
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_common_4[];

MR_STATIC_LINKAGE const struct mercury_type_4 mercury_vector_common_4_0[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_mdprof_dump__type_ctor_info_option_0,
	mercury_data_mdprof_dump__type_ctor_info_option_table_0;
MR_decl_label3(mdprof_dump__defaults_2_0, 5,6,7)
MR_decl_label3(mdprof_dump__long_option_2_0, 3,4,1)
MR_decl_label10(main_2_0, 2,3,8,11,12,13,14,15,10,17)
MR_decl_label9(main_2_0, 22,23,25,26,30,21,38,51,40)
MR_decl_label6(mdprof_dump__main_2_4_0, 2,5,6,7,8,4)
MR_decl_label6(mdprof_dump__make_dump_options_2_0, 2,3,5,6,9,8)
MR_decl_label3(mdprof_dump__short_option_2_0, 3,4,1)
MR_decl_label4(mdprof_dump__usage_3_0, 2,3,4,5)
MR_decl_static(mdprof_dump__main_2_4_0)
MR_decl_static(mdprof_dump__make_dump_options_2_0)
MR_decl_static(mdprof_dump__usage_3_0)
MR_def_extern_entry(main_2_0)
MR_decl_static(mdprof_dump__short_option_2_0)
MR_decl_static(mdprof_dump__long_option_2_0)
MR_decl_static(mdprof_dump__defaults_2_0)
MR_decl_static(__Unify___mdprof_dump__option_0_0)
MR_decl_static(__Compare___mdprof_dump__option_0_0)
MR_decl_static(__Unify___mdprof_dump__option_table_0_0)
MR_decl_static(__Compare___mdprof_dump__option_table_0_0)

static const MR_UserClosureId
mercury_data__closure_layout__main_2_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_character_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdprof_dump__type_ctor_info_option_0;
static const MR_UserClosureId
mercury_data__closure_layout__main_2_0_2;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
static const MR_UserClosureId
mercury_data__closure_layout__main_2_0_3;
extern const MR_TypeCtorInfo_Struct mercury_data_getopt__type_ctor_info_option_data_0;
static const struct mercury_type_0 mercury_common_0[3] =
{
{
(MR_Word *) &mercury_data__closure_layout__main_2_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CHAR_CTOR_ADDR,
MR_CTOR0_ADDR(mdprof_dump, option)
},
{
(MR_Word *) &mercury_data__closure_layout__main_2_0_2,
(MR_Word *) (MR_Integer) 0,
2,
MR_STRING_CTOR_ADDR,
MR_CTOR0_ADDR(mdprof_dump, option)
},
{
(MR_Word *) &mercury_data__closure_layout__main_2_0_3,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(mdprof_dump, option),
MR_CTOR0_ADDR(getopt, option_data)
},
};

static const struct mercury_type_1 mercury_common_1[3] =
{
{
MR_COMMON(0,0),
MR_ENTRY_AP(mdprof_dump__short_option_2_0),
0
},
{
MR_COMMON(0,1),
MR_ENTRY_AP(mdprof_dump__long_option_2_0),
0
},
{
MR_COMMON(0,2),
MR_ENTRY_AP(mdprof_dump__defaults_2_0),
0
},
};

static const struct mercury_type_2 mercury_common_2[1] =
{
{
{
MR_TAG_COMMON(0,1,0),
MR_TAG_COMMON(0,1,1),
MR_TAG_COMMON(0,1,2)
}
},
};

static const struct mercury_type_3 mercury_common_3[1] =
{
{
0
},
};

static const struct mercury_type_4 mercury_common_4[1] =
{
{
3,
MR_tbmkword(0, 0)
},
};

static const struct mercury_type_4 mercury_vector_common_4_0[3] =
{
{
0,
MR_TAG_COMMON(1,3,0)
},
{
1,
MR_TAG_COMMON(3,4,0)
},
{
2,
MR_TAG_COMMON(1,3,0)
},
};

static const MR_EnumFunctorDesc mercury_data_mdprof_dump__enum_functor_desc_option_0_0 = {
	"help",
	0
};

static const MR_EnumFunctorDesc mercury_data_mdprof_dump__enum_functor_desc_option_0_1 = {
	"dump_options",
	1
};

static const MR_EnumFunctorDesc mercury_data_mdprof_dump__enum_functor_desc_option_0_2 = {
	"option_restrict",
	2
};

const MR_EnumFunctorDescPtr mercury_data_mdprof_dump__enum_value_ordered_option_0[] = {
	&mercury_data_mdprof_dump__enum_functor_desc_option_0_0,
	&mercury_data_mdprof_dump__enum_functor_desc_option_0_1,
	&mercury_data_mdprof_dump__enum_functor_desc_option_0_2
};

const MR_EnumFunctorDescPtr mercury_data_mdprof_dump__enum_name_ordered_option_0[] = {
	&mercury_data_mdprof_dump__enum_functor_desc_option_0_1,
	&mercury_data_mdprof_dump__enum_functor_desc_option_0_0,
	&mercury_data_mdprof_dump__enum_functor_desc_option_0_2
};

const MR_Integer mercury_data_mdprof_dump__functor_number_map_option_0[] = {
	1,
	0,
	2 };
	
const MR_TypeCtorInfo_Struct mercury_data_mdprof_dump__type_ctor_info_option_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdprof_dump__option_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdprof_dump__option_0_0)),
	"mdprof_dump",
	"option",
	{ (void *)mercury_data_mdprof_dump__enum_name_ordered_option_0 },
	{ (void *)mercury_data_mdprof_dump__enum_value_ordered_option_0 },
	3,
	4,
	mercury_data_mdprof_dump__functor_number_map_option_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;
extern const MR_TypeCtorInfo_Struct mercury_data_getopt__type_ctor_info_option_data_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdprof_dump__type_ctor_info_option_0;
extern const MR_TypeCtorInfo_Struct mercury_data_getopt__type_ctor_info_option_data_0;

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2mdprof_dump__type_ctor_info_option_0getopt__type_ctor_info_option_data_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_mdprof_dump__type_ctor_info_option_0,
	(MR_TypeInfo) &mercury_data_getopt__type_ctor_info_option_data_0
}};

const MR_TypeCtorInfo_Struct mercury_data_mdprof_dump__type_ctor_info_option_table_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdprof_dump__option_table_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdprof_dump__option_table_0_0)),
	"mdprof_dump",
	"option_table",
	{ 0 },
	{ (void *)&mercury_data_tree234__ti_tree234_2mdprof_dump__type_ctor_info_option_0getopt__type_ctor_info_option_data_0 },
	-1,
	0,
	NULL
};


static const MR_UserClosureId
mercury_data__closure_layout__main_2_0_3 = {
{
MR_PREDICATE,
"mdprof_dump",
"mdprof_dump",
"defaults",
2,
0
},
"mdprof_dump",
"mdprof_dump.m",
48,
"8"
};

static const MR_UserClosureId
mercury_data__closure_layout__main_2_0_2 = {
{
MR_PREDICATE,
"mdprof_dump",
"mdprof_dump",
"long_option",
2,
0
},
"mdprof_dump",
"mdprof_dump.m",
48,
"6"
};

static const MR_UserClosureId
mercury_data__closure_layout__main_2_0_1 = {
{
MR_PREDICATE,
"mdprof_dump",
"mdprof_dump",
"short_option",
2,
0
},
"mdprof_dump",
"mdprof_dump.m",
48,
"4"
};


MR_decl_entry(read_profile__read_call_graph_4_0);
MR_decl_entry(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
MR_decl_entry(io__write_string_3_0);
MR_decl_entry(dump__dump_initial_deep_4_0);

MR_BEGIN_MODULE(mdprof_dump_module0)
	MR_init_entry1(mdprof_dump__main_2_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdprof_dump__main_2_4_0);
	MR_init_label6(mdprof_dump__main_2_4_0,2,5,6,7,8,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'main_2'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdprof_dump__main_2_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(read_profile__read_call_graph_4_0,
		mdprof_dump__main_2_4_0_i2);
MR_def_label(mdprof_dump__main_2_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(mdprof_dump__main_2_4_0_i4);
	}
	MR_sv(2) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdprof_dump__main_2_4_0_i5);
MR_def_label(mdprof_dump__main_2_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(": ", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdprof_dump__main_2_4_0_i6);
MR_def_label(mdprof_dump__main_2_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdprof_dump__main_2_4_0_i7);
MR_def_label(mdprof_dump__main_2_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("Cannot read ", 12);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdprof_dump__main_2_4_0_i8);
MR_def_label(mdprof_dump__main_2_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(mdprof_dump__main_2_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(dump__dump_initial_deep_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(getopt__lookup_accumulating_option_3_0);
MR_decl_entry(getopt__lookup_bool_option_3_0);
MR_decl_entry(fn__dump__default_dump_options_0_0);
MR_decl_entry(dump__dump_array_options_2_0);

MR_BEGIN_MODULE(mdprof_dump_module1)
	MR_init_entry1(mdprof_dump__make_dump_options_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdprof_dump__make_dump_options_2_0);
	MR_init_label6(mdprof_dump__make_dump_options_2_0,2,3,5,6,9,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'make_dump_options'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdprof_dump__make_dump_options_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = (MR_Word) MR_CTOR0_ADDR(mdprof_dump, option);
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Integer) 1;
	MR_np_call_localret_ent(getopt__lookup_accumulating_option_3_0,
		mdprof_dump__make_dump_options_2_0_i2);
MR_def_label(mdprof_dump__make_dump_options_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Integer) 2;
	}
	MR_np_call_localret_ent(getopt__lookup_bool_option_3_0,
		mdprof_dump__make_dump_options_2_0_i3);
MR_def_label(mdprof_dump__make_dump_options_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(mdprof_dump__make_dump_options_2_0_i5);
	}
	MR_sv(2) = (MR_Integer) 1;
	MR_np_call_localret_ent(fn__dump__default_dump_options_0_0,
		mdprof_dump__make_dump_options_2_0_i6);
MR_def_label(mdprof_dump__make_dump_options_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = (MR_Integer) 0;
	MR_np_call_localret_ent(fn__dump__default_dump_options_0_0,
		mdprof_dump__make_dump_options_2_0_i6);
MR_def_label(mdprof_dump__make_dump_options_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (((MR_Integer) MR_tfield(0, MR_r1, 2) >> (MR_Integer) 3) & (MR_Integer) 1);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = (((MR_Integer) MR_tfield(0, MR_r1, 2) >> (MR_Integer) 2) & (MR_Integer) 1);
	MR_tempr2 = (((MR_Integer) MR_tfield(0, MR_r1, 2) >> (MR_Integer) 1) & (MR_Integer) 1);
	MR_tempr3 = ((MR_Integer) MR_tfield(0, MR_r1, 2) & (MR_Integer) 1);
	MR_tag_alloc_heap(MR_tempr4, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr4, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr4, 1) = MR_tfield(0, MR_r1, 1);
	MR_tfield(0, MR_tempr4, 2) = ((MR_Integer) MR_tempr3 | (((MR_Integer) MR_tempr2 << (MR_Integer) 1) | (((MR_Integer) MR_tempr1 << (MR_Integer) 2) | ((MR_Integer) MR_r2 << (MR_Integer) 3))));
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_tempr4;
	MR_r1 = MR_r2;
	}
	MR_np_call_localret_ent(dump__dump_array_options_2_0,
		mdprof_dump__make_dump_options_2_0_i9);
MR_def_label(mdprof_dump__make_dump_options_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdprof_dump__make_dump_options_2_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr6 = MR_sv(1);
	MR_tempr1 = (((MR_Integer) MR_tfield(0, MR_tempr6, 2) >> (MR_Integer) 3) & (MR_Integer) 1);
	MR_tempr2 = (((MR_Integer) MR_tfield(0, MR_tempr6, 2) >> (MR_Integer) 2) & (MR_Integer) 1);
	MR_tempr3 = (((MR_Integer) MR_tfield(0, MR_tempr6, 2) >> (MR_Integer) 1) & (MR_Integer) 1);
	MR_tempr4 = ((MR_Integer) MR_tfield(0, MR_tempr6, 2) & (MR_Integer) 1);
	MR_tag_alloc_heap(MR_tempr5, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr5, 0) = MR_tfield(0, MR_tempr6, 0);
	MR_tfield(0, MR_tempr5, 1) = MR_r2;
	MR_tfield(0, MR_tempr5, 2) = ((MR_Integer) MR_tempr4 | (((MR_Integer) MR_tempr3 << (MR_Integer) 1) | (((MR_Integer) MR_tempr2 << (MR_Integer) 2) | ((MR_Integer) MR_tempr1 << (MR_Integer) 3))));
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tempr5;
	MR_decr_sp_and_return(3);
	}
MR_def_label(mdprof_dump__make_dump_options_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(io__stderr_stream_3_0);
MR_decl_entry(io__write_string_4_0);

MR_BEGIN_MODULE(mdprof_dump_module2)
	MR_init_entry1(mdprof_dump__usage_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdprof_dump__usage_3_0);
	MR_init_label4(mdprof_dump__usage_3_0,2,3,4,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'usage'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdprof_dump__usage_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(io__stderr_stream_3_0,
		mdprof_dump__usage_3_0_i2);
MR_def_label(mdprof_dump__usage_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const(" [-h] [-D what] [filename]\n", 27);
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdprof_dump__usage_3_0_i3);
MR_def_label(mdprof_dump__usage_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("Usage: ", 7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdprof_dump__usage_3_0_i4);
MR_def_label(mdprof_dump__usage_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(io__write_string_4_0,
		mdprof_dump__usage_3_0_i5);
MR_def_label(mdprof_dump__usage_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_string_const("Options:\n\t-h, --help\n\t\tDisplay this message.\n\t-r, --restrict\n\t\tDo not dump proc and call-site statics that are\n\t\tnot referenced from the proc dynamics\n\t-D all\n\t" "\tDump all arrays, (default).\n\t-D csd\n\t\tDump call-site dynamics.\n\t-D pd\n\t\tDump proc dynamics.\n\t-D css\n\t\tDump call-site statics.\n\t-D ps\n\t\tDump proc statics.\n\nThe " "following options are unimplemented.\n\t-D clique\n\t\tDump information about cliques.\n\t-D rev\n\t\tDump reverse links.\n\t-D prop\n\t\tDump propagated measurement informati" "on.\n", 484);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(io__write_string_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(io__progname_base_4_0);
MR_decl_entry(io__command_line_arguments_3_0);
MR_decl_entry(getopt__process_options_4_0);
MR_decl_entry(io__set_exit_status_3_0);

MR_BEGIN_MODULE(mdprof_dump_module3)
	MR_init_entry1(main_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__main_2_0);
	MR_init_label10(main_2_0,2,3,8,11,12,13,14,15,10,17)
	MR_init_label9(main_2_0,22,23,25,26,30,21,38,51,40)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'main'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__main_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_r1 = (MR_Word) MR_string_const("mdprof_dump", 11);
	MR_np_call_localret_ent(io__progname_base_4_0,
		main_2_0_i2);
MR_def_label(main_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(io__command_line_arguments_3_0,
		main_2_0_i3);
MR_def_label(main_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = (MR_Word) MR_CTOR0_ADDR(mdprof_dump, option);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Word) MR_TAG_COMMON(2,2,0);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(getopt__process_options_4_0,
		main_2_0_i8);
MR_def_label(main_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(main_2_0_i10);
	}
	MR_sv(3) = MR_tfield(1, MR_r2, 0);
	MR_np_call_localret_ent(io__stderr_stream_3_0,
		main_2_0_i11);
MR_def_label(main_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		main_2_0_i12);
MR_def_label(main_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(": ", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		main_2_0_i13);
MR_def_label(main_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		main_2_0_i14);
MR_def_label(main_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(io__write_string_4_0,
		main_2_0_i15);
MR_def_label(main_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(io__set_exit_status_3_0);
MR_def_label(main_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_sv(2) = MR_tfield(0, MR_r2, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdprof_dump, option);
	MR_r2 = MR_sv(2);
	MR_r3 = (MR_Integer) 0;
	MR_np_call_localret_ent(getopt__lookup_bool_option_3_0,
		main_2_0_i17);
MR_def_label(main_2_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(main_2_0_i51);
	}
	if (MR_LTAGS_TESTR(MR_sv(3),0,0)) {
		MR_GOTO_LAB(main_2_0_i21);
	}
	MR_sv(3) = (MR_Word) MR_CTOR0_ADDR(mdprof_dump, option);
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_r3 = (MR_Integer) 1;
	MR_np_call_localret_ent(getopt__lookup_accumulating_option_3_0,
		main_2_0_i22);
MR_def_label(main_2_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdprof_dump, option);
	MR_r2 = MR_sv(2);
	MR_r3 = (MR_Integer) 2;
	MR_np_call_localret_ent(getopt__lookup_bool_option_3_0,
		main_2_0_i23);
MR_def_label(main_2_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(main_2_0_i25);
	}
	MR_sv(2) = (MR_Integer) 1;
	MR_np_call_localret_ent(fn__dump__default_dump_options_0_0,
		main_2_0_i26);
MR_def_label(main_2_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = (MR_Integer) 0;
	MR_np_call_localret_ent(fn__dump__default_dump_options_0_0,
		main_2_0_i26);
MR_def_label(main_2_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (((MR_Integer) MR_tfield(0, MR_r1, 2) >> (MR_Integer) 3) & (MR_Integer) 1);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = (((MR_Integer) MR_tfield(0, MR_r1, 2) >> (MR_Integer) 2) & (MR_Integer) 1);
	MR_tempr2 = (((MR_Integer) MR_tfield(0, MR_r1, 2) >> (MR_Integer) 1) & (MR_Integer) 1);
	MR_tempr3 = ((MR_Integer) MR_tfield(0, MR_r1, 2) & (MR_Integer) 1);
	MR_tag_alloc_heap(MR_tempr4, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr4, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr4, 1) = MR_tfield(0, MR_r1, 1);
	MR_tfield(0, MR_tempr4, 2) = ((MR_Integer) MR_tempr3 | (((MR_Integer) MR_tempr2 << (MR_Integer) 1) | (((MR_Integer) MR_tempr1 << (MR_Integer) 2) | ((MR_Integer) MR_r2 << (MR_Integer) 3))));
	MR_r2 = MR_sv(3);
	MR_sv(3) = MR_tempr4;
	MR_r1 = MR_r2;
	}
	MR_np_call_localret_ent(dump__dump_array_options_2_0,
		main_2_0_i30);
MR_def_label(main_2_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(main_2_0_i51);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr5 = MR_sv(3);
	MR_tempr1 = (((MR_Integer) MR_tfield(0, MR_tempr5, 2) >> (MR_Integer) 3) & (MR_Integer) 1);
	MR_tempr2 = (((MR_Integer) MR_tfield(0, MR_tempr5, 2) >> (MR_Integer) 2) & (MR_Integer) 1);
	MR_tempr3 = (((MR_Integer) MR_tfield(0, MR_tempr5, 2) >> (MR_Integer) 1) & (MR_Integer) 1);
	MR_tempr4 = ((MR_Integer) MR_tfield(0, MR_tempr5, 2) & (MR_Integer) 1);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r1, 0) = MR_tfield(0, MR_tempr5, 0);
	MR_tfield(0, MR_r1, 1) = MR_r2;
	MR_tfield(0, MR_r1, 2) = ((MR_Integer) MR_tempr4 | (((MR_Integer) MR_tempr3 << (MR_Integer) 1) | (((MR_Integer) MR_tempr2 << (MR_Integer) 2) | ((MR_Integer) MR_tempr1 << (MR_Integer) 3))));
	MR_r2 = (MR_Word) MR_string_const("Deep.data", 9);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(mdprof_dump__main_2_4_0);
	}
MR_def_label(main_2_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(1, MR_sv(3), 1);
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(main_2_0_i51);
	}
	MR_sv(3) = MR_tfield(1, MR_sv(3), 0);
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(mdprof_dump__make_dump_options_2_0,
		main_2_0_i38);
MR_def_label(main_2_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(main_2_0_i40);
	}
MR_def_label(main_2_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(mdprof_dump__usage_3_0);
MR_def_label(main_2_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_r2 = MR_sv(3);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(mdprof_dump__main_2_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdprof_dump_module4)
	MR_init_entry1(mdprof_dump__short_option_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdprof_dump__short_option_2_0);
	MR_init_label3(mdprof_dump__short_option_2_0,3,4,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'short_option'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdprof_dump__short_option_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,68)) {
		MR_GOTO_LAB(mdprof_dump__short_option_2_0_i3);
	}
	MR_r2 = (MR_Integer) 1;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdprof_dump__short_option_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,104)) {
		MR_GOTO_LAB(mdprof_dump__short_option_2_0_i4);
	}
	MR_r2 = (MR_Integer) 0;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdprof_dump__short_option_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,114)) {
		MR_GOTO_LAB(mdprof_dump__short_option_2_0_i1);
	}
	MR_r2 = (MR_Integer) 2;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdprof_dump__short_option_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdprof_dump_module5)
	MR_init_entry1(mdprof_dump__long_option_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdprof_dump__long_option_2_0);
	MR_init_label3(mdprof_dump__long_option_2_0,3,4,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'long_option'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdprof_dump__long_option_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("help", 4)) != 0)) {
		MR_GOTO_LAB(mdprof_dump__long_option_2_0_i3);
	}
	MR_r2 = (MR_Integer) 0;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdprof_dump__long_option_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("restrict", 8)) != 0)) {
		MR_GOTO_LAB(mdprof_dump__long_option_2_0_i4);
	}
	MR_r2 = (MR_Integer) 2;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdprof_dump__long_option_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("dump-options", 12)) != 0)) {
		MR_GOTO_LAB(mdprof_dump__long_option_2_0_i1);
	}
	MR_r2 = (MR_Integer) 1;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdprof_dump__long_option_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(MR_do_fail);

MR_BEGIN_MODULE(mdprof_dump_module6)
	MR_init_entry1(mdprof_dump__defaults_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdprof_dump__defaults_2_0);
	MR_init_label3(mdprof_dump__defaults_2_0,5,6,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'defaults'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdprof_dump__defaults_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_mkframe("pred mdprof_dump.defaults/2-0", 1,
		MR_LABEL_AP(mdprof_dump__defaults_2_0_i5));
	{
	MR_Word MR_tempr1;
	MR_tempr1 = (MR_Word) &MR_tfield(0, (MR_Word *) &mercury_vector_common_4_0, 0);
	MR_fv(1) = (MR_Integer) 2;
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = MR_tfield(0, MR_tempr1, 1);
	MR_succeed();
	}
MR_def_label(mdprof_dump__defaults_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_fv(1);
	if (MR_INT_GE(MR_r3,4)) {
		MR_GOTO_LAB(mdprof_dump__defaults_2_0_i6);
	}
	MR_fv(1) = ((MR_Integer) MR_fv(1) + (MR_Integer) 2);
	MR_GOTO_LAB(mdprof_dump__defaults_2_0_i7);
MR_def_label(mdprof_dump__defaults_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_curfr) = (MR_Word) MR_ENTRY(MR_do_fail);
MR_def_label(mdprof_dump__defaults_2_0,7)
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


MR_BEGIN_MODULE(mdprof_dump_module7)
	MR_init_entry1(__Unify___mdprof_dump__option_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___mdprof_dump__option_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___mdprof_dump__option_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_int_3_0);

MR_BEGIN_MODULE(mdprof_dump_module8)
	MR_init_entry1(__Compare___mdprof_dump__option_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___mdprof_dump__option_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___mdprof_dump__option_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___tree234__tree234_2_0);

MR_BEGIN_MODULE(mdprof_dump_module9)
	MR_init_entry1(__Unify___mdprof_dump__option_table_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___mdprof_dump__option_table_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___mdprof_dump__option_table_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdprof_dump, option);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(getopt, option_data);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Unify___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___tree234__tree234_2_0);

MR_BEGIN_MODULE(mdprof_dump_module10)
	MR_init_entry1(__Compare___mdprof_dump__option_table_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___mdprof_dump__option_table_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___mdprof_dump__option_table_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdprof_dump, option);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(getopt, option_data);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Compare___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__mdprof_dump_maybe_bunch_0(void)
{
	mdprof_dump_module0();
	mdprof_dump_module1();
	mdprof_dump_module2();
	mdprof_dump_module3();
	mdprof_dump_module4();
	mdprof_dump_module5();
	mdprof_dump_module6();
	mdprof_dump_module7();
	mdprof_dump_module8();
	mdprof_dump_module9();
	mdprof_dump_module10();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__mdprof_dump__init(void);
void mercury__mdprof_dump__init_type_tables(void);
void mercury__mdprof_dump__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__mdprof_dump__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__mdprof_dump__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__mdprof_dump__init_threadscope_string_table(void);
#endif

void mercury__mdprof_dump__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__mdprof_dump_maybe_bunch_0();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdprof_dump__type_ctor_info_option_0,
		mdprof_dump__option_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdprof_dump__type_ctor_info_option_table_0,
		mdprof_dump__option_table_0_0);
	mercury__mdprof_dump__init_debugger();
}

void mercury__mdprof_dump__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_mdprof_dump__type_ctor_info_option_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdprof_dump__type_ctor_info_option_table_0);
	}
}


void mercury__mdprof_dump__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__mdprof_dump__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__mdprof_dump);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__mdprof_dump__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__mdprof_dump__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
