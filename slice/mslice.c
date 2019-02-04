/*
** Automatically generated from `mslice.m'
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
INIT mercury__mslice__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 526 "../library/io.int"
#include "io.mh"

#line 28 "mslice.c"
#line 536 "../library/io.int"
#include "time.mh"

#line 32 "mslice.c"
#line 537 "../library/io.int"
#include "string.mh"

#line 36 "mslice.c"
#line 31 "../library/bitmap.int2"
#include "bitmap.mh"

#line 40 "mslice.c"
#line 33 "../library/array.int2"
#include "array.mh"

#line 44 "mslice.c"
#line 45 "mslice.c"
#include "mslice.mh"

#line 48 "mslice.c"
#line 49 "mslice.c"
#ifndef MSLICE_DECL_GUARD
#define MSLICE_DECL_GUARD

#line 53 "mslice.c"
#line 54 "mslice.c"

#endif
#line 57 "mslice.c"

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
	MR_Integer f1;
	MR_String f2;
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
	MR_Word * f2;
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_5 mercury_vector_common_5_0[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_mslice__type_ctor_info_option_0,
	mercury_data_mslice__type_ctor_info_option_table_0;
MR_decl_label6(mslice__long_option_2_0, 3,4,5,6,7,1)
MR_decl_label10(main_2_0, 2,3,8,11,10,53,14,18,19,20)
MR_decl_label10(main_2_0, 21,22,23,24,27,28,31,32,36,37)
MR_decl_label2(main_2_0, 40,41)
MR_decl_label3(mslice__option_default_2_0, 8,9,10)
MR_decl_label6(mslice__short_option_2_0, 3,4,5,6,7,1)
MR_def_extern_entry(main_2_0)
MR_decl_static(mslice__short_option_2_0)
MR_decl_static(mslice__long_option_2_0)
MR_decl_static(mslice__option_default_2_0)
MR_decl_static(__Unify___mslice__option_0_0)
MR_decl_static(__Compare___mslice__option_0_0)
MR_decl_static(__Unify___mslice__option_table_0_0)
MR_decl_static(__Compare___mslice__option_table_0_0)

extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;
extern const MR_TypeCtorInfo_Struct mercury_data_getopt__type_ctor_info_option_data_0;
static const struct mercury_type_0 mercury_common_0[2] =
{
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(mslice, option),
MR_CTOR0_ADDR(getopt, option_data)
}
},
{
{
MR_TAG_COMMON(0,2,0),
MR_TAG_COMMON(0,2,1),
MR_TAG_COMMON(0,2,2)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__main_2_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_character_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mslice__type_ctor_info_option_0;
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
MR_CTOR0_ADDR(mslice, option)
},
{
(MR_Word *) &mercury_data__closure_layout__main_2_0_2,
(MR_Word *) (MR_Integer) 0,
2,
MR_STRING_CTOR_ADDR,
MR_CTOR0_ADDR(mslice, option)
},
{
(MR_Word *) &mercury_data__closure_layout__main_2_0_3,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(mslice, option),
MR_CTOR0_ADDR(getopt, option_data)
},
};

static const struct mercury_type_2 mercury_common_2[3] =
{
{
MR_COMMON(1,0),
MR_ENTRY_AP(mslice__short_option_2_0),
0
},
{
MR_COMMON(1,1),
MR_ENTRY_AP(mslice__long_option_2_0),
0
},
{
MR_COMMON(1,2),
MR_ENTRY_AP(mslice__option_default_2_0),
0
},
};

static const struct mercury_type_3 mercury_common_3[2] =
{
{
0,
MR_string_const("C", 1)
},
{
0,
MR_string_const("", 0)
},
};

static const struct mercury_type_4 mercury_common_4[4] =
{
{
100
},
{
35
},
{
12
},
{
20
},
};

static const struct mercury_type_5 mercury_vector_common_5_0[6] =
{
{
0,
MR_TAG_COMMON(3,3,0)
},
{
1,
MR_TAG_COMMON(2,4,0)
},
{
2,
MR_TAG_COMMON(2,4,1)
},
{
3,
MR_TAG_COMMON(2,4,2)
},
{
4,
MR_TAG_COMMON(2,4,3)
},
{
5,
MR_TAG_COMMON(3,3,1)
},
};

static const MR_EnumFunctorDesc mercury_data_mslice__enum_functor_desc_option_0_0 = {
	"sort",
	0
};

static const MR_EnumFunctorDesc mercury_data_mslice__enum_functor_desc_option_0_1 = {
	"max_row",
	1
};

static const MR_EnumFunctorDesc mercury_data_mslice__enum_functor_desc_option_0_2 = {
	"max_pred_column",
	2
};

static const MR_EnumFunctorDesc mercury_data_mslice__enum_functor_desc_option_0_3 = {
	"max_path_column",
	3
};

static const MR_EnumFunctorDesc mercury_data_mslice__enum_functor_desc_option_0_4 = {
	"max_file_column",
	4
};

static const MR_EnumFunctorDesc mercury_data_mslice__enum_functor_desc_option_0_5 = {
	"modulename",
	5
};

const MR_EnumFunctorDescPtr mercury_data_mslice__enum_value_ordered_option_0[] = {
	&mercury_data_mslice__enum_functor_desc_option_0_0,
	&mercury_data_mslice__enum_functor_desc_option_0_1,
	&mercury_data_mslice__enum_functor_desc_option_0_2,
	&mercury_data_mslice__enum_functor_desc_option_0_3,
	&mercury_data_mslice__enum_functor_desc_option_0_4,
	&mercury_data_mslice__enum_functor_desc_option_0_5
};

const MR_EnumFunctorDescPtr mercury_data_mslice__enum_name_ordered_option_0[] = {
	&mercury_data_mslice__enum_functor_desc_option_0_4,
	&mercury_data_mslice__enum_functor_desc_option_0_3,
	&mercury_data_mslice__enum_functor_desc_option_0_2,
	&mercury_data_mslice__enum_functor_desc_option_0_1,
	&mercury_data_mslice__enum_functor_desc_option_0_5,
	&mercury_data_mslice__enum_functor_desc_option_0_0
};

const MR_Integer mercury_data_mslice__functor_number_map_option_0[] = {
	5,
	3,
	2,
	1,
	0,
	4 };
	
const MR_TypeCtorInfo_Struct mercury_data_mslice__type_ctor_info_option_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mslice__option_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mslice__option_0_0)),
	"mslice",
	"option",
	{ (void *)mercury_data_mslice__enum_name_ordered_option_0 },
	{ (void *)mercury_data_mslice__enum_value_ordered_option_0 },
	6,
	4,
	mercury_data_mslice__functor_number_map_option_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_mslice__type_ctor_info_option_0;
extern const MR_TypeCtorInfo_Struct mercury_data_getopt__type_ctor_info_option_data_0;

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2mslice__type_ctor_info_option_0getopt__type_ctor_info_option_data_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_mslice__type_ctor_info_option_0,
	(MR_TypeInfo) &mercury_data_getopt__type_ctor_info_option_data_0
}};

const MR_TypeCtorInfo_Struct mercury_data_mslice__type_ctor_info_option_table_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mslice__option_table_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mslice__option_table_0_0)),
	"mslice",
	"option_table",
	{ 0 },
	{ (void *)&mercury_data_tree234__ti_tree234_2mslice__type_ctor_info_option_0getopt__type_ctor_info_option_data_0 },
	-1,
	0,
	NULL
};


static const MR_UserClosureId
mercury_data__closure_layout__main_2_0_3 = {
{
MR_PREDICATE,
"mslice",
"mslice",
"option_default",
2,
0
},
"mslice",
"mslice.m",
38,
"9"
};

static const MR_UserClosureId
mercury_data__closure_layout__main_2_0_2 = {
{
MR_PREDICATE,
"mslice",
"mslice",
"long_option",
2,
0
},
"mslice",
"mslice.m",
38,
"8"
};

static const MR_UserClosureId
mercury_data__closure_layout__main_2_0_1 = {
{
MR_PREDICATE,
"mslice",
"mslice",
"short_option",
2,
0
},
"mslice",
"mslice.m",
38,
"7"
};


MR_decl_entry(mdbcomp__shared_utilities__unlimit_stack_2_0);
MR_decl_entry(io__command_line_arguments_3_0);
MR_decl_entry(getopt__process_options_4_0);
MR_decl_entry(io__write_string_3_0);
MR_decl_entry(io__nl_2_0);
MR_decl_entry(getopt__lookup_string_option_3_0);
MR_decl_entry(getopt__lookup_int_option_3_0);
MR_decl_entry(mdbcomp__slice_and_dice__read_slice_to_string_11_0);
MR_decl_entry(io__set_exit_status_3_0);

MR_BEGIN_MODULE(mslice_module0)
	MR_init_entry1(main_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__main_2_0);
	MR_init_label10(main_2_0,2,3,8,11,10,53,14,18,19,20)
	MR_init_label10(main_2_0,21,22,23,24,27,28,31,32,36,37)
	MR_init_label2(main_2_0,40,41)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'main'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__main_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(mdbcomp__shared_utilities__unlimit_stack_2_0,
		main_2_0_i2);
MR_def_label(main_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__command_line_arguments_3_0,
		main_2_0_i3);
MR_def_label(main_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = (MR_Word) MR_CTOR0_ADDR(mslice, option);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
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
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(io__nl_2_0);
MR_def_label(main_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(main_2_0_i14);
	}
MR_def_label(main_2_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("Usage: mslice [-s sortspec] [-m module] [-l N] [-n N] [-p N] [-f N] filename\n", 77);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(main_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r1, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(main_2_0_i53);
	}
	MR_sv(5) = MR_tfield(0, MR_r2, 0);
	MR_sv(7) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(5);
	MR_r3 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(getopt__lookup_string_option_3_0,
		main_2_0_i18);
MR_def_label(main_2_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(5);
	MR_r3 = (MR_Integer) 1;
	MR_np_call_localret_ent(getopt__lookup_int_option_3_0,
		main_2_0_i19);
MR_def_label(main_2_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(5);
	MR_r3 = (MR_Integer) 2;
	MR_np_call_localret_ent(getopt__lookup_int_option_3_0,
		main_2_0_i20);
MR_def_label(main_2_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(5);
	MR_r3 = (MR_Integer) 3;
	MR_np_call_localret_ent(getopt__lookup_int_option_3_0,
		main_2_0_i21);
MR_def_label(main_2_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(5);
	MR_r3 = (MR_Integer) 4;
	MR_np_call_localret_ent(getopt__lookup_int_option_3_0,
		main_2_0_i22);
MR_def_label(main_2_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Integer) 5;
	}
	MR_np_call_localret_ent(getopt__lookup_string_option_3_0,
		main_2_0_i23);
MR_def_label(main_2_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(3),0)) {
		MR_GOTO_LAB(main_2_0_i24);
	}
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r7 = MR_r1;
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_sv(7);
	MR_GOTO_LAB(main_2_0_i27);
MR_def_label(main_2_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r4, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r4, 0) = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r7 = MR_r1;
	MR_r1 = MR_sv(7);
MR_def_label(main_2_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(4),0)) {
		MR_GOTO_LAB(main_2_0_i28);
	}
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	MR_GOTO_LAB(main_2_0_i31);
MR_def_label(main_2_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r5, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r5, 0) = MR_sv(4);
MR_def_label(main_2_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(5),0)) {
		MR_GOTO_LAB(main_2_0_i32);
	}
	MR_r6 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(mdbcomp__slice_and_dice__read_slice_to_string_11_0,
		main_2_0_i36);
MR_def_label(main_2_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r6, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r6, 0) = MR_sv(5);
	MR_np_call_localret_ent(mdbcomp__slice_and_dice__read_slice_to_string_11_0,
		main_2_0_i36);
MR_def_label(main_2_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r2, MR_string_const("", 0)) != 0)) {
		MR_GOTO_LAB(main_2_0_i37);
	}
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(main_2_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(io__write_string_3_0,
		main_2_0_i40);
MR_def_label(main_2_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		main_2_0_i41);
MR_def_label(main_2_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(io__set_exit_status_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mslice_module1)
	MR_init_entry1(mslice__short_option_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mslice__short_option_2_0);
	MR_init_label6(mslice__short_option_2_0,3,4,5,6,7,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'short_option'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mslice__short_option_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,102)) {
		MR_GOTO_LAB(mslice__short_option_2_0_i3);
	}
	MR_r2 = (MR_Integer) 4;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mslice__short_option_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,108)) {
		MR_GOTO_LAB(mslice__short_option_2_0_i4);
	}
	MR_r2 = (MR_Integer) 1;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mslice__short_option_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,109)) {
		MR_GOTO_LAB(mslice__short_option_2_0_i5);
	}
	MR_r2 = (MR_Integer) 5;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mslice__short_option_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,110)) {
		MR_GOTO_LAB(mslice__short_option_2_0_i6);
	}
	MR_r2 = (MR_Integer) 2;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mslice__short_option_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,112)) {
		MR_GOTO_LAB(mslice__short_option_2_0_i7);
	}
	MR_r2 = (MR_Integer) 3;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mslice__short_option_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,115)) {
		MR_GOTO_LAB(mslice__short_option_2_0_i1);
	}
	MR_r2 = (MR_Integer) 0;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mslice__short_option_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mslice_module2)
	MR_init_entry1(mslice__long_option_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mslice__long_option_2_0);
	MR_init_label6(mslice__long_option_2_0,3,4,5,6,7,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'long_option'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mslice__long_option_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("sort", 4)) != 0)) {
		MR_GOTO_LAB(mslice__long_option_2_0_i3);
	}
	MR_r2 = (MR_Integer) 0;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mslice__long_option_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("limit", 5)) != 0)) {
		MR_GOTO_LAB(mslice__long_option_2_0_i4);
	}
	MR_r2 = (MR_Integer) 1;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mslice__long_option_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("module", 6)) != 0)) {
		MR_GOTO_LAB(mslice__long_option_2_0_i5);
	}
	MR_r2 = (MR_Integer) 5;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mslice__long_option_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("max-file-column", 15)) != 0)) {
		MR_GOTO_LAB(mslice__long_option_2_0_i6);
	}
	MR_r2 = (MR_Integer) 4;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mslice__long_option_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("max-name-column", 15)) != 0)) {
		MR_GOTO_LAB(mslice__long_option_2_0_i7);
	}
	MR_r2 = (MR_Integer) 2;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mslice__long_option_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("max-path-column", 15)) != 0)) {
		MR_GOTO_LAB(mslice__long_option_2_0_i1);
	}
	MR_r2 = (MR_Integer) 3;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mslice__long_option_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(MR_do_fail);

MR_BEGIN_MODULE(mslice_module3)
	MR_init_entry1(mslice__option_default_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mslice__option_default_2_0);
	MR_init_label3(mslice__option_default_2_0,8,9,10)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'option_default'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mslice__option_default_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_mkframe("pred mslice.option_default/2-0", 1,
		MR_LABEL_AP(mslice__option_default_2_0_i8));
	{
	MR_Word MR_tempr1;
	MR_tempr1 = (MR_Word) &MR_tfield(0, (MR_Word *) &mercury_vector_common_5_0, 0);
	MR_fv(1) = (MR_Integer) 2;
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = MR_tfield(0, MR_tempr1, 1);
	MR_succeed();
	}
MR_def_label(mslice__option_default_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_fv(1);
	if (MR_INT_GE(MR_r3,10)) {
		MR_GOTO_LAB(mslice__option_default_2_0_i9);
	}
	MR_fv(1) = ((MR_Integer) MR_fv(1) + (MR_Integer) 2);
	MR_GOTO_LAB(mslice__option_default_2_0_i10);
MR_def_label(mslice__option_default_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_curfr) = (MR_Word) MR_ENTRY(MR_do_fail);
MR_def_label(mslice__option_default_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = (MR_Word) &MR_tfield(0, (MR_Word *) &mercury_vector_common_5_0, (MR_Integer) MR_r3);
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = MR_tfield(0, MR_tempr1, 1);
	MR_succeed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mslice_module4)
	MR_init_entry1(__Unify___mslice__option_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___mslice__option_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___mslice__option_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_int_3_0);

MR_BEGIN_MODULE(mslice_module5)
	MR_init_entry1(__Compare___mslice__option_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___mslice__option_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___mslice__option_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(builtin__unify_2_0);

MR_BEGIN_MODULE(mslice_module6)
	MR_init_entry1(__Unify___mslice__option_table_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___mslice__option_table_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___mslice__option_table_0_0)
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

MR_BEGIN_MODULE(mslice_module7)
	MR_init_entry1(__Compare___mslice__option_table_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___mslice__option_table_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___mslice__option_table_0_0)
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

static void mercury__mslice_maybe_bunch_0(void)
{
	mslice_module0();
	mslice_module1();
	mslice_module2();
	mslice_module3();
	mslice_module4();
	mslice_module5();
	mslice_module6();
	mslice_module7();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__mslice__init(void);
void mercury__mslice__init_type_tables(void);
void mercury__mslice__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__mslice__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__mslice__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__mslice__init_threadscope_string_table(void);
#endif

void mercury__mslice__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__mslice_maybe_bunch_0();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mslice__type_ctor_info_option_0,
		mslice__option_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mslice__type_ctor_info_option_table_0,
		mslice__option_table_0_0);
	mercury__mslice__init_debugger();
}

void mercury__mslice__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_mslice__type_ctor_info_option_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mslice__type_ctor_info_option_table_0);
	}
}


void mercury__mslice__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__mslice__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__mslice);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__mslice__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__mslice__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
