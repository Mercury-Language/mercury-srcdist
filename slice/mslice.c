/*
** Automatically generated from `mslice.m'
** by the Mercury compiler,
** version rotd-2007-08-16, configured for i686-pc-linux-gnu.
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
INIT mercury__mslice__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 530 "../library/io.int"
#include "io.mh"

#line 27 "mslice.c"
#line 538 "../library/io.int"
#include "string.mh"

#line 31 "mslice.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 35 "mslice.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 39 "mslice.c"
#line 17 "mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 43 "mslice.c"
#line 44 "mslice.c"
#include "mslice.mh"

#line 47 "mslice.c"
#line 48 "mslice.c"
#ifndef MSLICE_DECL_GUARD
#define MSLICE_DECL_GUARD

#line 52 "mslice.c"
#line 53 "mslice.c"

#endif
#line 56 "mslice.c"

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
	MR_String f2;
};
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_common_4[];

MR_STATIC_LINKAGE const struct mercury_type_3 mercury_vector_common_3_0[];

struct mercury_type_5 {
	MR_Integer f1;
	MR_Word * f2;
};
MR_STATIC_LINKAGE const struct mercury_type_5 mercury_vector_common_5_0[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_mslice__type_ctor_info_option_table_0,
	mercury_data_mslice__type_ctor_info_option_0;
MR_decl_label6(mslice__long_option_2_0, 3,4,5,6,7,1)
MR_decl_label8(main_2_0, 2,3,38,7,11,12,13,14)
MR_decl_label8(main_2_0, 15,16,17,19,20,22,23,26)
MR_decl_label5(main_2_0, 27,30,31,5,35)
MR_decl_label3(mslice__option_default_2_0, 2,3,4)
MR_decl_label1(mslice__short_option_2_0, 1)
MR_def_extern_entry(main_2_0)
MR_decl_static(mslice__short_option_2_0)
MR_decl_static(mslice__long_option_2_0)
MR_decl_static(mslice__option_default_2_0)
MR_decl_static(__Unify___mslice__option_0_0)
MR_decl_static(__Compare___mslice__option_0_0)
MR_decl_static(__Unify___mslice__option_table_0_0)
MR_decl_static(__Compare___mslice__option_table_0_0)

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
static const struct mercury_type_0 mercury_common_0[3] =
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

static const struct mercury_type_1 mercury_common_1[3] =
{
{
MR_COMMON(0,0),
MR_ENTRY_AP(mslice__short_option_2_0),
0
},
{
MR_COMMON(0,1),
MR_ENTRY_AP(mslice__long_option_2_0),
0
},
{
MR_COMMON(0,2),
MR_ENTRY_AP(mslice__option_default_2_0),
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

static const struct mercury_type_3 mercury_common_3[5] =
{
{
9665
},
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

static const struct mercury_type_4 mercury_common_4[2] =
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

static const struct mercury_type_3 mercury_vector_common_3_0[14] =
{
{
4
},
{
0
},
{
0
},
{
0
},
{
0
},
{
0
},
{
1
},
{
5
},
{
2
},
{
0
},
{
3
},
{
0
},
{
0
},
{
0
},
};

static const struct mercury_type_5 mercury_vector_common_5_0[6] =
{
{
0,
MR_TAG_COMMON(3,4,0)
},
{
1,
MR_TAG_COMMON(2,3,1)
},
{
2,
MR_TAG_COMMON(2,3,2)
},
{
3,
MR_TAG_COMMON(2,3,3)
},
{
4,
MR_TAG_COMMON(2,3,4)
},
{
5,
MR_TAG_COMMON(3,4,1)
},
};
extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;
extern const MR_TypeCtorInfo_Struct mercury_data_getopt__type_ctor_info_option_data_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mslice__type_ctor_info_option_0;
extern const MR_TypeCtorInfo_Struct mercury_data_getopt__type_ctor_info_option_data_0;

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2mslice__type_ctor_info_option_0getopt__type_ctor_info_option_data_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_mslice__type_ctor_info_option_0,
	(MR_TypeInfo) &mercury_data_getopt__type_ctor_info_option_data_0
}};

const MR_TypeCtorInfo_Struct mercury_data_mslice__type_ctor_info_option_table_0 = {
	0,
	13,
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
	13,
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
36,
"d1;c5;"
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
36,
"d1;c6;"
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
36,
"d1;c7;"
};

MR_decl_entry(io__command_line_arguments_3_0);
MR_decl_entry(getopt__process_options_4_0);
MR_decl_entry(io__write_string_3_0);
MR_decl_entry(getopt__lookup_string_option_3_0);
MR_decl_entry(getopt__lookup_int_option_3_0);
MR_decl_entry(mdbcomp__slice_and_dice__read_slice_to_string_11_0);
MR_decl_entry(io__nl_2_0);
MR_decl_entry(io__set_exit_status_3_0);

MR_BEGIN_MODULE(mslice_module0)
	MR_init_entry1(main_2_0);
	MR_init_label8(main_2_0,2,3,38,7,11,12,13,14)
	MR_init_label8(main_2_0,15,16,17,19,20,22,23,26)
	MR_init_label5(main_2_0,27,30,31,5,35)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__main_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(io__command_line_arguments_3_0,
		main_2_0_i2);
MR_def_label(main_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mslice, option);
	MR_r2 = (MR_Word) MR_TAG_COMMON(2,2,0);
	MR_np_call_localret_ent(getopt__process_options_4_0,
		main_2_0_i3);
MR_def_label(main_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,0)) {
		MR_GOTO_LAB(main_2_0_i5);
	}
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(main_2_0_i7);
	}
MR_def_label(main_2_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("Usage: mslice [-s sortspec] [-m module] [-l N] [-n N] [-p N] [-f N] filename\n", 77);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(main_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_r1, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(main_2_0_i38);
	}
	MR_sv(1) = MR_ctfield(0, MR_r2, 0);
	MR_sv(6) = MR_ctfield(1, MR_r1, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mslice, option);
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(getopt__lookup_string_option_3_0,
		main_2_0_i11);
MR_def_label(main_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mslice, option);
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Integer) 1;
	MR_np_call_localret_ent(getopt__lookup_int_option_3_0,
		main_2_0_i12);
MR_def_label(main_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mslice, option);
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Integer) 2;
	MR_np_call_localret_ent(getopt__lookup_int_option_3_0,
		main_2_0_i13);
MR_def_label(main_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mslice, option);
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Integer) 3;
	MR_np_call_localret_ent(getopt__lookup_int_option_3_0,
		main_2_0_i14);
MR_def_label(main_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mslice, option);
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Integer) 4;
	MR_np_call_localret_ent(getopt__lookup_int_option_3_0,
		main_2_0_i15);
MR_def_label(main_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mslice, option);
	MR_r3 = (MR_Integer) 5;
	MR_np_call_localret_ent(getopt__lookup_string_option_3_0,
		main_2_0_i16);
MR_def_label(main_2_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(4),0)) {
		MR_GOTO_LAB(main_2_0_i17);
	}
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r7 = MR_r1;
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_sv(6);
	MR_GOTO_LAB(main_2_0_i19);
MR_def_label(main_2_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r4, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r4, 0) = MR_sv(4);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r7 = MR_r1;
	MR_r1 = MR_sv(6);
MR_def_label(main_2_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(5),0)) {
		MR_GOTO_LAB(main_2_0_i20);
	}
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	MR_GOTO_LAB(main_2_0_i22);
MR_def_label(main_2_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r5, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r5, 0) = MR_sv(5);
MR_def_label(main_2_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),0)) {
		MR_GOTO_LAB(main_2_0_i23);
	}
	MR_r6 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(mdbcomp__slice_and_dice__read_slice_to_string_11_0,
		main_2_0_i26);
MR_def_label(main_2_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r6, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r6, 0) = MR_sv(1);
	MR_np_call_localret_ent(mdbcomp__slice_and_dice__read_slice_to_string_11_0,
		main_2_0_i26);
MR_def_label(main_2_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_r2, (char *)(MR_Word) MR_string_const("", 0)) != 0)) {
		MR_GOTO_LAB(main_2_0_i27);
	}
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(main_2_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(io__write_string_3_0,
		main_2_0_i30);
MR_def_label(main_2_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		main_2_0_i31);
MR_def_label(main_2_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(io__set_exit_status_3_0);
MR_def_label(main_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(1, MR_r2, 0);
	MR_np_call_localret_ent(io__write_string_3_0,
		main_2_0_i35);
MR_def_label(main_2_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(io__nl_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mslice_module1)
	MR_init_entry1(mslice__short_option_2_0);
	MR_init_label1(mslice__short_option_2_0,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mslice__short_option_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(((MR_Unsigned) ((MR_Integer) MR_r1 - (MR_Integer) 102) <= 13))) {
		MR_GOTO_LAB(mslice__short_option_2_0_i1);
	}
	if (!((((MR_Integer) 1 << ((MR_Integer) MR_r1 - (MR_Integer) 102)) & (MR_Integer) 9665))) {
		MR_GOTO_LAB(mslice__short_option_2_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = (MR_Word) &MR_tfield(0, (MR_Word *) &mercury_vector_common_3_0, ((MR_Integer) MR_r1 - (MR_Integer) 102));
	MR_r2 = MR_ctfield(0, MR_tempr1, 0);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
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
	MR_init_label6(mslice__long_option_2_0,3,4,5,6,7,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mslice__long_option_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_r1, (char *)(MR_Word) MR_string_const("limit", 5)) != 0)) {
		MR_GOTO_LAB(mslice__long_option_2_0_i3);
	}
	MR_r2 = (MR_Integer) 1;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mslice__long_option_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_r1, (char *)(MR_Word) MR_string_const("max-file-column", 15)) != 0)) {
		MR_GOTO_LAB(mslice__long_option_2_0_i4);
	}
	MR_r2 = (MR_Integer) 4;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mslice__long_option_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_r1, (char *)(MR_Word) MR_string_const("max-name-column", 15)) != 0)) {
		MR_GOTO_LAB(mslice__long_option_2_0_i5);
	}
	MR_r2 = (MR_Integer) 2;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mslice__long_option_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_r1, (char *)(MR_Word) MR_string_const("max-path-column", 15)) != 0)) {
		MR_GOTO_LAB(mslice__long_option_2_0_i6);
	}
	MR_r2 = (MR_Integer) 3;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mslice__long_option_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_r1, (char *)(MR_Word) MR_string_const("module", 6)) != 0)) {
		MR_GOTO_LAB(mslice__long_option_2_0_i7);
	}
	MR_r2 = (MR_Integer) 5;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mslice__long_option_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_r1, (char *)(MR_Word) MR_string_const("sort", 4)) != 0)) {
		MR_GOTO_LAB(mslice__long_option_2_0_i1);
	}
	MR_r2 = (MR_Integer) 0;
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
	MR_init_label3(mslice__option_default_2_0,2,3,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mslice__option_default_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_mkframe("pred mslice.option_default/2-0", 1,
		MR_LABEL_AP(mslice__option_default_2_0_i2));
	{
	MR_Word MR_tempr1;
	MR_tempr1 = (MR_Word) &MR_tfield(0, (MR_Word *) &mercury_vector_common_5_0, 0);
	MR_fv(1) = (MR_Integer) 2;
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	MR_r2 = MR_ctfield(0, MR_tempr1, 1);
	MR_succeed();
	}
MR_def_label(mslice__option_default_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_fv(1);
	if (MR_INT_GE(MR_r3,10)) {
		MR_GOTO_LAB(mslice__option_default_2_0_i3);
	}
	MR_fv(1) = ((MR_Integer) MR_fv(1) + (MR_Integer) 2);
	MR_GOTO_LAB(mslice__option_default_2_0_i4);
MR_def_label(mslice__option_default_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_curfr) = (MR_Word) MR_ENTRY(MR_do_fail);
MR_def_label(mslice__option_default_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = (MR_Word) &MR_tfield(0, (MR_Word *) &mercury_vector_common_5_0, (MR_Integer) MR_r3);
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	MR_r2 = MR_ctfield(0, MR_tempr1, 1);
	MR_succeed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mslice_module4)
	MR_init_entry1(__Unify___mslice__option_0_0);
MR_BEGIN_CODE

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
MR_BEGIN_CODE

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

MR_decl_entry(__Unify___tree234__tree234_2_0);

MR_BEGIN_MODULE(mslice_module6)
	MR_init_entry1(__Unify___mslice__option_table_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___mslice__option_table_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mslice, option);
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

MR_BEGIN_MODULE(mslice_module7)
	MR_init_entry1(__Compare___mslice__option_table_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___mslice__option_table_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mslice, option);
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
void mercury__mslice__write_out_proc_statics(FILE *fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__mslice__init_complexity_procs(void);
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
		mercury_data_mslice__type_ctor_info_option_table_0,
		mslice__option_table_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mslice__type_ctor_info_option_0,
		mslice__option_0_0);
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
		&mercury_data_mslice__type_ctor_info_option_table_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mslice__type_ctor_info_option_0);
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

void mercury__mslice__write_out_proc_statics(FILE *fp)
{
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__mslice__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
