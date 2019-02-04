/*
** Automatically generated from `options.m'
** by the Mercury compiler,
** version rotd-2007-09-21, configured for i686-pc-linux-gnu.
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
INIT mercury__options__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 530 "../library/io.int"
#include "io.mh"

#line 27 "options.c"
#line 538 "../library/io.int"
#include "string.mh"

#line 31 "options.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 35 "options.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 39 "options.c"
#line 40 "options.c"
#include "options.mh"

#line 43 "options.c"
#line 44 "options.c"
#ifndef OPTIONS_DECL_GUARD
#define OPTIONS_DECL_GUARD

#line 48 "options.c"
#line 49 "options.c"

#endif
#line 52 "options.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

struct mercury_type_0 {
	MR_Integer f1[32];
};
MR_STATIC_LINKAGE const struct mercury_type_0 mercury_common_0[];

struct mercury_type_1 {
	MR_String f1;
	MR_String f2;
	MR_String f3;
	MR_String f4;
	MR_Integer f5;
	MR_String f6;
	MR_Integer f7;
	MR_Integer f8;
	MR_Integer f9;
	MR_String f10;
	MR_Integer f11;
	MR_String f12;
	MR_String f13;
	MR_String f14;
	MR_Integer f15;
	MR_Integer f16;
	MR_String f17;
	MR_Integer f18;
	MR_Integer f19;
	MR_Integer f20;
	MR_Integer f21;
	MR_String f22;
	MR_Integer f23;
	MR_Integer f24;
	MR_Integer f25;
	MR_Integer f26;
	MR_Integer f27;
	MR_String f28;
	MR_Integer f29;
	MR_String f30;
	MR_Integer f31;
	MR_String f32;
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

struct mercury_type_2 {
	MR_Integer f1;
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];

struct mercury_type_3 {
	MR_Integer f1;
	MR_String f2;
};
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];

struct mercury_type_5 {
	MR_String f1;
};
MR_STATIC_LINKAGE const struct mercury_type_5 mercury_common_5[];

struct mercury_type_4 {
	MR_Integer f1;
	MR_Word * f2;
};
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_vector_common_4_0[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_options__type_ctor_info_option_table_0,
	mercury_data_options__type_ctor_info_option_0;
MR_decl_label8(options__long_option_2_0, 3,21,5,6,7,8,9,10)
MR_decl_label8(options__long_option_2_0, 11,12,13,15,16,17,18,19)
MR_decl_label1(options__maybe_flush_output_3_0, 12)
MR_decl_label1(options__maybe_write_string_4_0, 12)
MR_decl_label3(options__option_default_2_0, 2,3,4)
MR_decl_label8(options__options_help_2_0, 2,3,4,5,6,7,8,9)
MR_decl_label8(options__options_help_2_0, 10,11,12,13,14,15,16,17)
MR_decl_label8(options__options_help_2_0, 18,19,20,21,22,23,24,25)
MR_decl_label8(options__options_help_2_0, 26,27,28,29,30,31,32,33)
MR_decl_label1(options__options_help_2_0, 34)
MR_decl_label8(options__short_option_2_0, 3,4,5,6,7,8,9,10)
MR_decl_label5(options__short_option_2_0, 11,12,13,14,1)
MR_decl_label8(options__special_handler_4_0, 7,11,12,10,9,53,54,55)
MR_decl_label2(options__special_handler_4_0, 21,1)
MR_def_extern_entry(options__short_option_2_0)
MR_def_extern_entry(options__long_option_2_0)
MR_def_extern_entry(options__option_default_2_0)
MR_def_extern_entry(options__special_handler_4_0)
MR_def_extern_entry(options__options_help_2_0)
MR_def_extern_entry(options__maybe_write_string_4_0)
MR_def_extern_entry(options__maybe_flush_output_3_0)
MR_def_extern_entry(__Unify___options__option_0_0)
MR_def_extern_entry(__Compare___options__option_0_0)
MR_def_extern_entry(__Unify___options__option_table_0_0)
MR_def_extern_entry(__Compare___options__option_table_0_0)

static const struct mercury_type_0 mercury_common_0[1] =
{
{
{
-1,
-1,
-1,
1,
-2,
-1,
-2,
-2,
-2,
-1,
-2,
-1,
-1,
-1,
-2,
-2,
-1,
-2,
-2,
-2,
-2,
-1,
-2,
-2,
-2,
-2,
-2,
-1,
-2,
-1,
-2,
-1
}
},
};

static const struct mercury_type_1 mercury_common_1[1] =
{
{
MR_string_const("call-pair-file", 14),
MR_string_const("profile-memory-words", 20),
MR_string_const("count-file", 10),
MR_string_const("very-verbose", 12),
0,
MR_string_const("demangle", 8),
0,
0,
0,
MR_string_const("call-graph", 10),
0,
MR_string_const("profile-memory-cells", 20),
MR_string_const("profile", 7),
MR_string_const("library-callgraph", 17),
0,
0,
MR_string_const("use-dynamic", 11),
0,
0,
0,
0,
MR_string_const("help", 4),
0,
0,
0,
0,
0,
MR_string_const("declaration-file", 16),
0,
MR_string_const("verbose", 7),
0,
MR_string_const("profile-time", 12)
},
};

static const struct mercury_type_2 mercury_common_2[2] =
{
{
0
},
{
1
},
};

static const struct mercury_type_3 mercury_common_3[6] =
{
{
0,
MR_string_const("Prof.Counts", 11)
},
{
0,
MR_string_const("Prof.CallPair", 13)
},
{
0,
MR_string_const("Prof.Decl", 9)
},
{
0,
MR_string_const("", 0)
},
{
0,
MR_string_const("Prof.MemoryWords", 16)
},
{
0,
MR_string_const("Prof.MemoryCells", 16)
},
};

static const struct mercury_type_5 mercury_common_5[1] =
{
{
MR_string_const("Invalid argument to \140--profile\' or \140-p\' option", 46)
},
};

static const struct mercury_type_4 mercury_vector_common_4_0[14] =
{
{
0,
MR_TAG_COMMON(1,2,0)
},
{
1,
MR_TAG_COMMON(1,2,0)
},
{
2,
MR_TAG_COMMON(1,2,0)
},
{
3,
MR_TAG_COMMON(1,2,0)
},
{
4,
MR_tbmkword(0, 3)
},
{
5,
MR_tbmkword(0, 0)
},
{
6,
MR_tbmkword(0, 0)
},
{
7,
MR_tbmkword(0, 0)
},
{
9,
MR_TAG_COMMON(3,3,0)
},
{
10,
MR_TAG_COMMON(3,3,1)
},
{
11,
MR_TAG_COMMON(3,3,2)
},
{
12,
MR_TAG_COMMON(3,3,3)
},
{
8,
MR_TAG_COMMON(1,2,1)
},
{
13,
MR_TAG_COMMON(1,2,0)
},
};
extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;
extern const MR_TypeCtorInfo_Struct mercury_data_getopt__type_ctor_info_option_data_0;
extern const MR_TypeCtorInfo_Struct mercury_data_options__type_ctor_info_option_0;
extern const MR_TypeCtorInfo_Struct mercury_data_getopt__type_ctor_info_option_data_0;

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2options__type_ctor_info_option_0getopt__type_ctor_info_option_data_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_options__type_ctor_info_option_0,
	(MR_TypeInfo) &mercury_data_getopt__type_ctor_info_option_data_0
}};

const MR_TypeCtorInfo_Struct mercury_data_options__type_ctor_info_option_table_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___options__option_table_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___options__option_table_0_0)),
	"options",
	"option_table",
	{ 0 },
	{ (void *)&mercury_data_tree234__ti_tree234_2options__type_ctor_info_option_0getopt__type_ctor_info_option_data_0 },
	-1,
	0,
	NULL
};

static const MR_EnumFunctorDesc mercury_data_options__enum_functor_desc_option_0_0 = {
	"verbose",
	0
};

static const MR_EnumFunctorDesc mercury_data_options__enum_functor_desc_option_0_1 = {
	"very_verbose",
	1
};

static const MR_EnumFunctorDesc mercury_data_options__enum_functor_desc_option_0_2 = {
	"dynamic_cg",
	2
};

static const MR_EnumFunctorDesc mercury_data_options__enum_functor_desc_option_0_3 = {
	"call_graph",
	3
};

static const MR_EnumFunctorDesc mercury_data_options__enum_functor_desc_option_0_4 = {
	"profile",
	4
};

static const MR_EnumFunctorDesc mercury_data_options__enum_functor_desc_option_0_5 = {
	"profile_time",
	5
};

static const MR_EnumFunctorDesc mercury_data_options__enum_functor_desc_option_0_6 = {
	"profile_memory_words",
	6
};

static const MR_EnumFunctorDesc mercury_data_options__enum_functor_desc_option_0_7 = {
	"profile_memory_cells",
	7
};

static const MR_EnumFunctorDesc mercury_data_options__enum_functor_desc_option_0_8 = {
	"demangle",
	8
};

static const MR_EnumFunctorDesc mercury_data_options__enum_functor_desc_option_0_9 = {
	"countfile",
	9
};

static const MR_EnumFunctorDesc mercury_data_options__enum_functor_desc_option_0_10 = {
	"pairfile",
	10
};

static const MR_EnumFunctorDesc mercury_data_options__enum_functor_desc_option_0_11 = {
	"declfile",
	11
};

static const MR_EnumFunctorDesc mercury_data_options__enum_functor_desc_option_0_12 = {
	"libraryfile",
	12
};

static const MR_EnumFunctorDesc mercury_data_options__enum_functor_desc_option_0_13 = {
	"help",
	13
};

const MR_EnumFunctorDescPtr mercury_data_options__enum_value_ordered_option_0[] = {
	&mercury_data_options__enum_functor_desc_option_0_0,
	&mercury_data_options__enum_functor_desc_option_0_1,
	&mercury_data_options__enum_functor_desc_option_0_2,
	&mercury_data_options__enum_functor_desc_option_0_3,
	&mercury_data_options__enum_functor_desc_option_0_4,
	&mercury_data_options__enum_functor_desc_option_0_5,
	&mercury_data_options__enum_functor_desc_option_0_6,
	&mercury_data_options__enum_functor_desc_option_0_7,
	&mercury_data_options__enum_functor_desc_option_0_8,
	&mercury_data_options__enum_functor_desc_option_0_9,
	&mercury_data_options__enum_functor_desc_option_0_10,
	&mercury_data_options__enum_functor_desc_option_0_11,
	&mercury_data_options__enum_functor_desc_option_0_12,
	&mercury_data_options__enum_functor_desc_option_0_13
};

const MR_EnumFunctorDescPtr mercury_data_options__enum_name_ordered_option_0[] = {
	&mercury_data_options__enum_functor_desc_option_0_3,
	&mercury_data_options__enum_functor_desc_option_0_9,
	&mercury_data_options__enum_functor_desc_option_0_11,
	&mercury_data_options__enum_functor_desc_option_0_8,
	&mercury_data_options__enum_functor_desc_option_0_2,
	&mercury_data_options__enum_functor_desc_option_0_13,
	&mercury_data_options__enum_functor_desc_option_0_12,
	&mercury_data_options__enum_functor_desc_option_0_10,
	&mercury_data_options__enum_functor_desc_option_0_4,
	&mercury_data_options__enum_functor_desc_option_0_7,
	&mercury_data_options__enum_functor_desc_option_0_6,
	&mercury_data_options__enum_functor_desc_option_0_5,
	&mercury_data_options__enum_functor_desc_option_0_0,
	&mercury_data_options__enum_functor_desc_option_0_1
};

const MR_Integer mercury_data_options__functor_number_map_option_0[] = {
	12,
	13,
	4,
	0,
	8,
	11,
	10,
	9,
	3,
	1,
	7,
	2,
	6,
	5 };
	
const MR_TypeCtorInfo_Struct mercury_data_options__type_ctor_info_option_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___options__option_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___options__option_0_0)),
	"options",
	"option",
	{ (void *)mercury_data_options__enum_name_ordered_option_0 },
	{ (void *)mercury_data_options__enum_value_ordered_option_0 },
	14,
	4,
	mercury_data_options__functor_number_map_option_0
};


MR_BEGIN_MODULE(options_module0)
	MR_init_entry1(options__short_option_2_0);
	MR_init_label8(options__short_option_2_0,3,4,5,6,7,8,9,10)
	MR_init_label5(options__short_option_2_0,11,12,13,14,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__options__short_option_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,67)) {
		MR_GOTO_LAB(options__short_option_2_0_i3);
	}
	MR_r2 = (MR_Integer) 9;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(options__short_option_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,68)) {
		MR_GOTO_LAB(options__short_option_2_0_i4);
	}
	MR_r2 = (MR_Integer) 11;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(options__short_option_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,76)) {
		MR_GOTO_LAB(options__short_option_2_0_i5);
	}
	MR_r2 = (MR_Integer) 12;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(options__short_option_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,77)) {
		MR_GOTO_LAB(options__short_option_2_0_i6);
	}
	MR_r2 = (MR_Integer) 7;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(options__short_option_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,80)) {
		MR_GOTO_LAB(options__short_option_2_0_i7);
	}
	MR_r2 = (MR_Integer) 10;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(options__short_option_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,86)) {
		MR_GOTO_LAB(options__short_option_2_0_i8);
	}
	MR_r2 = (MR_Integer) 1;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(options__short_option_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,99)) {
		MR_GOTO_LAB(options__short_option_2_0_i9);
	}
	MR_r2 = (MR_Integer) 3;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(options__short_option_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,100)) {
		MR_GOTO_LAB(options__short_option_2_0_i10);
	}
	MR_r2 = (MR_Integer) 2;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(options__short_option_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,104)) {
		MR_GOTO_LAB(options__short_option_2_0_i11);
	}
	MR_r2 = (MR_Integer) 13;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(options__short_option_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,109)) {
		MR_GOTO_LAB(options__short_option_2_0_i12);
	}
	MR_r2 = (MR_Integer) 6;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(options__short_option_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,112)) {
		MR_GOTO_LAB(options__short_option_2_0_i13);
	}
	MR_r2 = (MR_Integer) 4;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(options__short_option_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,116)) {
		MR_GOTO_LAB(options__short_option_2_0_i14);
	}
	MR_r2 = (MR_Integer) 5;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(options__short_option_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,118)) {
		MR_GOTO_LAB(options__short_option_2_0_i1);
	}
	MR_r2 = (MR_Integer) 0;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(options__short_option_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(options_module1)
	MR_init_entry1(options__long_option_2_0);
	MR_init_label8(options__long_option_2_0,3,21,5,6,7,8,9,10)
	MR_init_label8(options__long_option_2_0,11,12,13,15,16,17,18,19)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__options__long_option_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = (MR_hash_string((MR_String) MR_r1) & (MR_Integer) 31);
MR_def_label(options__long_option_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	while (1) {
	{
	MR_Word MR_tempr1;
	MR_tempr1 = (MR_COMMON(1,0))[(MR_Integer) MR_r3];
	if (((MR_Integer) MR_tempr1 && (strcmp((char *)MR_tempr1, (char *)MR_r1) == 0))) {
		MR_GOTO_LAB(options__long_option_2_0_i5);
	}
	MR_r3 = (MR_COMMON(0,0))[(MR_Integer) MR_r3];
	if (MR_INT_GE(MR_r3,0))
		continue;
	}
	break; } /* end while */
MR_def_label(options__long_option_2_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
MR_def_label(options__long_option_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_r3,
		MR_LABEL_AP(options__long_option_2_0_i6) MR_AND
		MR_LABEL_AP(options__long_option_2_0_i7) MR_AND
		MR_LABEL_AP(options__long_option_2_0_i8) MR_AND
		MR_LABEL_AP(options__long_option_2_0_i9) MR_AND
		MR_LABEL_AP(options__long_option_2_0_i21) MR_AND
		MR_LABEL_AP(options__long_option_2_0_i10) MR_AND
		MR_LABEL_AP(options__long_option_2_0_i21) MR_AND
		MR_LABEL_AP(options__long_option_2_0_i21) MR_AND
		MR_LABEL_AP(options__long_option_2_0_i21) MR_AND
		MR_LABEL_AP(options__long_option_2_0_i11) MR_AND
		MR_LABEL_AP(options__long_option_2_0_i21) MR_AND
		MR_LABEL_AP(options__long_option_2_0_i12) MR_AND
		MR_LABEL_AP(options__long_option_2_0_i13) MR_AND
		MR_LABEL_AP(options__long_option_2_0_i16) MR_AND
		MR_LABEL_AP(options__long_option_2_0_i21) MR_AND
		MR_LABEL_AP(options__long_option_2_0_i21) MR_AND
		MR_LABEL_AP(options__long_option_2_0_i15) MR_AND
		MR_LABEL_AP(options__long_option_2_0_i21) MR_AND
		MR_LABEL_AP(options__long_option_2_0_i21) MR_AND
		MR_LABEL_AP(options__long_option_2_0_i21) MR_AND
		MR_LABEL_AP(options__long_option_2_0_i21) MR_AND
		MR_LABEL_AP(options__long_option_2_0_i16) MR_AND
		MR_LABEL_AP(options__long_option_2_0_i21) MR_AND
		MR_LABEL_AP(options__long_option_2_0_i21) MR_AND
		MR_LABEL_AP(options__long_option_2_0_i21) MR_AND
		MR_LABEL_AP(options__long_option_2_0_i21) MR_AND
		MR_LABEL_AP(options__long_option_2_0_i21) MR_AND
		MR_LABEL_AP(options__long_option_2_0_i17) MR_AND
		MR_LABEL_AP(options__long_option_2_0_i21) MR_AND
		MR_LABEL_AP(options__long_option_2_0_i18) MR_AND
		MR_LABEL_AP(options__long_option_2_0_i21) MR_AND
		MR_LABEL_AP(options__long_option_2_0_i19));
MR_def_label(options__long_option_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 10;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(options__long_option_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 6;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(options__long_option_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 9;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(options__long_option_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 1;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(options__long_option_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 8;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(options__long_option_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 3;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(options__long_option_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 7;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(options__long_option_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 4;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(options__long_option_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 2;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(options__long_option_2_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 13;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(options__long_option_2_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 11;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(options__long_option_2_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 0;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(options__long_option_2_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 5;
	MR_r1 = MR_TRUE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(MR_do_fail);

MR_BEGIN_MODULE(options_module2)
	MR_init_entry1(options__option_default_2_0);
	MR_init_label3(options__option_default_2_0,2,3,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__options__option_default_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_mkframe("pred options.option_default/2-0", 1,
		MR_LABEL_AP(options__option_default_2_0_i2));
	{
	MR_Word MR_tempr1;
	MR_tempr1 = (MR_Word) &MR_tfield(0, (MR_Word *) &mercury_vector_common_4_0, 0);
	MR_fv(1) = (MR_Integer) 2;
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	MR_r2 = MR_ctfield(0, MR_tempr1, 1);
	MR_succeed();
	}
MR_def_label(options__option_default_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_fv(1);
	if (MR_INT_GE(MR_r3,26)) {
		MR_GOTO_LAB(options__option_default_2_0_i3);
	}
	MR_fv(1) = ((MR_Integer) MR_fv(1) + (MR_Integer) 2);
	MR_GOTO_LAB(options__option_default_2_0_i4);
MR_def_label(options__option_default_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_curfr) = (MR_Word) MR_ENTRY(MR_do_fail);
MR_def_label(options__option_default_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = (MR_Word) &MR_tfield(0, (MR_Word *) &mercury_vector_common_4_0, (MR_Integer) MR_r3);
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	MR_r2 = MR_ctfield(0, MR_tempr1, 1);
	MR_succeed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__set_4_0);

MR_BEGIN_MODULE(options_module3)
	MR_init_entry1(options__special_handler_4_0);
	MR_init_label8(options__special_handler_4_0,7,11,12,10,9,53,54,55)
	MR_init_label2(options__special_handler_4_0,21,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__options__special_handler_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_r1,
		MR_LABEL_AP(options__special_handler_4_0_i1) MR_AND
		MR_LABEL_AP(options__special_handler_4_0_i1) MR_AND
		MR_LABEL_AP(options__special_handler_4_0_i1) MR_AND
		MR_LABEL_AP(options__special_handler_4_0_i1) MR_AND
		MR_LABEL_AP(options__special_handler_4_0_i7) MR_AND
		MR_LABEL_AP(options__special_handler_4_0_i53) MR_AND
		MR_LABEL_AP(options__special_handler_4_0_i54) MR_AND
		MR_LABEL_AP(options__special_handler_4_0_i55) MR_AND
		MR_LABEL_AP(options__special_handler_4_0_i1) MR_AND
		MR_LABEL_AP(options__special_handler_4_0_i1) MR_AND
		MR_LABEL_AP(options__special_handler_4_0_i1) MR_AND
		MR_LABEL_AP(options__special_handler_4_0_i1) MR_AND
		MR_LABEL_AP(options__special_handler_4_0_i1) MR_AND
		MR_LABEL_AP(options__special_handler_4_0_i1));
MR_def_label(options__special_handler_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,0)) {
		MR_GOTO_LAB(options__special_handler_4_0_i1);
	}
	MR_r6 = MR_ctfield(3, MR_r2, 1);
	if ((strcmp((char *)MR_r6, (char *)(MR_Word) MR_string_const("memory-cells", 12)) != 0)) {
		MR_GOTO_LAB(options__special_handler_4_0_i11);
	}
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r1 = (MR_Word) MR_string_const("Prof.MemoryCells", 16);
	MR_GOTO_LAB(options__special_handler_4_0_i10);
MR_def_label(options__special_handler_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_r6, (char *)(MR_Word) MR_string_const("memory-words", 12)) != 0)) {
		MR_GOTO_LAB(options__special_handler_4_0_i12);
	}
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r1 = (MR_Word) MR_string_const("Prof.MemoryWords", 16);
	MR_GOTO_LAB(options__special_handler_4_0_i10);
MR_def_label(options__special_handler_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_r6, (char *)(MR_Word) MR_string_const("time", 4)) != 0)) {
		MR_GOTO_LAB(options__special_handler_4_0_i9);
	}
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r1 = (MR_Word) MR_string_const("Prof.Counts", 11);
MR_def_label(options__special_handler_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_r5 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(options, option);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(getopt, option_data);
	MR_r4 = (MR_Integer) 9;
	}
	MR_np_call_localret_ent(map__set_4_0,
		options__special_handler_4_0_i21);
MR_def_label(options__special_handler_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,5,0);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(options__special_handler_4_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(options, option);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(getopt, option_data);
	MR_r4 = (MR_Integer) 9;
	MR_r5 = (MR_Word) MR_TAG_COMMON(3,3,0);
	MR_np_call_localret_ent(map__set_4_0,
		options__special_handler_4_0_i21);
MR_def_label(options__special_handler_4_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(options, option);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(getopt, option_data);
	MR_r4 = (MR_Integer) 9;
	MR_r5 = (MR_Word) MR_TAG_COMMON(3,3,4);
	MR_np_call_localret_ent(map__set_4_0,
		options__special_handler_4_0_i21);
MR_def_label(options__special_handler_4_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(options, option);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(getopt, option_data);
	MR_r4 = (MR_Integer) 9;
	MR_r5 = (MR_Word) MR_TAG_COMMON(3,3,5);
	MR_np_call_localret_ent(map__set_4_0,
		options__special_handler_4_0_i21);
MR_def_label(options__special_handler_4_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(1);
MR_def_label(options__special_handler_4_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(io__write_string_3_0);

MR_BEGIN_MODULE(options_module4)
	MR_init_entry1(options__options_help_2_0);
	MR_init_label8(options__options_help_2_0,2,3,4,5,6,7,8,9)
	MR_init_label8(options__options_help_2_0,10,11,12,13,14,15,16,17)
	MR_init_label8(options__options_help_2_0,18,19,20,21,22,23,24,25)
	MR_init_label8(options__options_help_2_0,26,27,28,29,30,31,32,33)
	MR_init_label1(options__options_help_2_0,34)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__options__options_help_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r1 = (MR_Word) MR_string_const("\t-h, --help\n", 12);
	MR_np_call_localret_ent(io__write_string_3_0,
		options__options_help_2_0_i2);
MR_def_label(options__options_help_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\t\tPrint this usage message.\n", 28);
	MR_np_call_localret_ent(io__write_string_3_0,
		options__options_help_2_0_i3);
MR_def_label(options__options_help_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\nProfiler Options:\n", 19);
	MR_np_call_localret_ent(io__write_string_3_0,
		options__options_help_2_0_i4);
MR_def_label(options__options_help_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\t-c, --call-graph\n", 18);
	MR_np_call_localret_ent(io__write_string_3_0,
		options__options_help_2_0_i5);
MR_def_label(options__options_help_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\t\tInclude the call graph profile.\n", 34);
	MR_np_call_localret_ent(io__write_string_3_0,
		options__options_help_2_0_i6);
MR_def_label(options__options_help_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\t-d, --use-dynamic\n", 19);
	MR_np_call_localret_ent(io__write_string_3_0,
		options__options_help_2_0_i7);
MR_def_label(options__options_help_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\t\tBuild the call graph dynamically.\n", 36);
	MR_np_call_localret_ent(io__write_string_3_0,
		options__options_help_2_0_i8);
MR_def_label(options__options_help_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\t-p, --profile {time, memory-words, memory-cells}\n", 50);
	MR_np_call_localret_ent(io__write_string_3_0,
		options__options_help_2_0_i9);
MR_def_label(options__options_help_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\t\tSelect what to profile: time, amount of memory allocated, or\n", 63);
	MR_np_call_localret_ent(io__write_string_3_0,
		options__options_help_2_0_i10);
MR_def_label(options__options_help_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\t\tnumber of memory allocations (regardless of size).\n", 53);
	MR_np_call_localret_ent(io__write_string_3_0,
		options__options_help_2_0_i11);
MR_def_label(options__options_help_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\t-m\n", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		options__options_help_2_0_i12);
MR_def_label(options__options_help_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\t\tSame as \140--profile memory-words\'\n", 35);
	MR_np_call_localret_ent(io__write_string_3_0,
		options__options_help_2_0_i13);
MR_def_label(options__options_help_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\t-M\n", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		options__options_help_2_0_i14);
MR_def_label(options__options_help_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\t\tSame as \140--profile memory-cells\'.\n", 36);
	MR_np_call_localret_ent(io__write_string_3_0,
		options__options_help_2_0_i15);
MR_def_label(options__options_help_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\t-t\n", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		options__options_help_2_0_i16);
MR_def_label(options__options_help_2_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\t\tSame as \140--profile time\'.\n", 28);
	MR_np_call_localret_ent(io__write_string_3_0,
		options__options_help_2_0_i17);
MR_def_label(options__options_help_2_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\t--no-demangle\n", 15);
	MR_np_call_localret_ent(io__write_string_3_0,
		options__options_help_2_0_i18);
MR_def_label(options__options_help_2_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\t\tOutput the mangled predicate and function names.\n", 51);
	MR_np_call_localret_ent(io__write_string_3_0,
		options__options_help_2_0_i19);
MR_def_label(options__options_help_2_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\nFilename Options:\n", 19);
	MR_np_call_localret_ent(io__write_string_3_0,
		options__options_help_2_0_i20);
MR_def_label(options__options_help_2_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\t-C <file>, --count-file <file>\n", 32);
	MR_np_call_localret_ent(io__write_string_3_0,
		options__options_help_2_0_i21);
MR_def_label(options__options_help_2_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\t\tName of the count file. Usually \140Prof.Counts\',\n", 49);
	MR_np_call_localret_ent(io__write_string_3_0,
		options__options_help_2_0_i22);
MR_def_label(options__options_help_2_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\t\t\140Prof.MemoryWords\', or \140Prof.MemoryCells\'.\n", 45);
	MR_np_call_localret_ent(io__write_string_3_0,
		options__options_help_2_0_i23);
MR_def_label(options__options_help_2_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\t-D <file>, --declaration-file <file>\n", 38);
	MR_np_call_localret_ent(io__write_string_3_0,
		options__options_help_2_0_i24);
MR_def_label(options__options_help_2_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\t\tName of the declaration file. Usually \140Prof.Decl\'.\n", 53);
	MR_np_call_localret_ent(io__write_string_3_0,
		options__options_help_2_0_i25);
MR_def_label(options__options_help_2_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\t-P <file>, --call-pair-file <file>\n", 36);
	MR_np_call_localret_ent(io__write_string_3_0,
		options__options_help_2_0_i26);
MR_def_label(options__options_help_2_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\t\tName of the call-pair file. Usually \140Prof.CallPair\'.\n", 55);
	MR_np_call_localret_ent(io__write_string_3_0,
		options__options_help_2_0_i27);
MR_def_label(options__options_help_2_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\t-L <file>, --library-callgraph <file>\n", 39);
	MR_np_call_localret_ent(io__write_string_3_0,
		options__options_help_2_0_i28);
MR_def_label(options__options_help_2_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\t\tName of the file which contains the call graph for\n", 53);
	MR_np_call_localret_ent(io__write_string_3_0,
		options__options_help_2_0_i29);
MR_def_label(options__options_help_2_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\t\tthe library modules.\n", 23);
	MR_np_call_localret_ent(io__write_string_3_0,
		options__options_help_2_0_i30);
MR_def_label(options__options_help_2_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\nVerbosity Options:\n", 20);
	MR_np_call_localret_ent(io__write_string_3_0,
		options__options_help_2_0_i31);
MR_def_label(options__options_help_2_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\t-v, --verbose\n", 15);
	MR_np_call_localret_ent(io__write_string_3_0,
		options__options_help_2_0_i32);
MR_def_label(options__options_help_2_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\t\tOutput progress messages at each stage.\n", 42);
	MR_np_call_localret_ent(io__write_string_3_0,
		options__options_help_2_0_i33);
MR_def_label(options__options_help_2_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\t-V, --very_verbose\n", 20);
	MR_np_call_localret_ent(io__write_string_3_0,
		options__options_help_2_0_i34);
MR_def_label(options__options_help_2_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\t\tOutput very verbose progress messages.\n", 41);
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(options_module5)
	MR_init_entry1(options__maybe_write_string_4_0);
	MR_init_label1(options__maybe_write_string_4_0,12)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__options__maybe_write_string_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_r1,0)) {
		MR_GOTO_LAB(options__maybe_write_string_4_0_i12);
	}
	MR_r1 = MR_r2;
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(options__maybe_write_string_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(io__flush_output_2_0);

MR_BEGIN_MODULE(options_module6)
	MR_init_entry1(options__maybe_flush_output_3_0);
	MR_init_label1(options__maybe_flush_output_3_0,12)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__options__maybe_flush_output_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_r1,0)) {
		MR_GOTO_LAB(options__maybe_flush_output_3_0_i12);
	}
	MR_np_tailcall_ent(io__flush_output_2_0);
MR_def_label(options__maybe_flush_output_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(options_module7)
	MR_init_entry1(__Unify___options__option_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___options__option_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_int_3_0);

MR_BEGIN_MODULE(options_module8)
	MR_init_entry1(__Compare___options__option_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___options__option_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___tree234__tree234_2_0);

MR_BEGIN_MODULE(options_module9)
	MR_init_entry1(__Unify___options__option_table_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___options__option_table_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(options, option);
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

MR_BEGIN_MODULE(options_module10)
	MR_init_entry1(__Compare___options__option_table_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___options__option_table_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(options, option);
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

static void mercury__options_maybe_bunch_0(void)
{
	options_module0();
	options_module1();
	options_module2();
	options_module3();
	options_module4();
	options_module5();
	options_module6();
	options_module7();
	options_module8();
	options_module9();
	options_module10();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__options__init(void);
void mercury__options__init_type_tables(void);
void mercury__options__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__options__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__options__init_complexity_procs(void);
#endif

void mercury__options__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__options_maybe_bunch_0();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_options__type_ctor_info_option_table_0,
		options__option_table_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_options__type_ctor_info_option_0,
		options__option_0_0);
	mercury__options__init_debugger();
}

void mercury__options__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_options__type_ctor_info_option_table_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_options__type_ctor_info_option_0);
	}
}


void mercury__options__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__options__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__options);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__options__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
