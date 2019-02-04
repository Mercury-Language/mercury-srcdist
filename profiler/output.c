/*
** Automatically generated from `output.m'
** by the Mercury compiler,
** version rotd-2008-08-03, configured for i686-pc-linux-gnu.
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
INIT mercury__output__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 534 "../library/io.int"
#include "io.mh"

#line 27 "output.c"
#line 542 "../library/io.int"
#include "string.mh"

#line 31 "output.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 35 "output.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 39 "output.c"
#line 31 "../library/array.int2"
#include "array.mh"

#line 43 "output.c"
#line 44 "output.c"
#include "output.mh"

#line 47 "output.c"
#line 48 "output.c"
#ifndef OUTPUT_DECL_GUARD
#define OUTPUT_DECL_GUARD

#line 52 "output.c"
#line 53 "output.c"

#endif
#line 56 "output.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

struct mercury_type_1 {
	MR_Word * f1[3];
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

struct mercury_type_2 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[4];
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];

struct mercury_type_3 {
	MR_String f1;
	MR_Word * f2;
};
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];

struct mercury_type_4 {
	MR_String f1;
};
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_common_4[];

struct mercury_type_5 {
	MR_Word * f1[2];
};
MR_STATIC_LINKAGE const struct mercury_type_5 mercury_common_5[];

struct mercury_type_0 {
	MR_Integer f1;
};
MR_STATIC_LINKAGE const struct mercury_type_0 mercury_vector_common_0_0[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_output__type_ctor_info_header_category_0;
MR_decl_label5(output__IntroducedFrom__pred__output_formatted_child_list__329__1_4_0, 2,4,9,11,24)
MR_decl_label4(output__IntroducedFrom__pred__output_formatted_cycle_parent_list__281__1_4_0, 2,4,9,11)
MR_decl_label8(output__call_graph_headers_2_0, 2,3,4,5,6,9,10,11)
MR_decl_label8(output__call_graph_headers_2_0, 12,16,19,20,23,24,25,26)
MR_decl_label8(output__call_graph_headers_2_0, 27,28,29,30,31,32,34,37)
MR_decl_label8(output__call_graph_headers_2_0, 38,39,40,41,42,43,44,45)
MR_decl_label8(output__call_graph_headers_2_0, 47,48,49,50,51,52,53,54)
MR_decl_label7(output__call_graph_headers_2_0, 55,56,57,58,61,62,63)
MR_decl_label8(output__flat_headers_2_0, 2,3,4,5,6,9,12,15)
MR_decl_label8(output__flat_headers_2_0, 18,19,20,21,26,29,30,31)
MR_decl_label3(output__flat_headers_2_0, 32,33,34)
MR_decl_label8(output__flat_profile_6_0, 44,4,5,7,6,9,10,11)
MR_decl_label6(output__flat_profile_6_0, 12,13,14,18,35,46)
MR_decl_label3(output__output_alphabet_listing_2_3_0, 16,3,9)
MR_decl_label6(output__output_call_graph_5_0, 13,4,5,6,7,15)
MR_decl_label8(output__output_formatted_cycle_child_list_4_0, 29,4,6,11,12,13,20,31)
MR_decl_label8(output__output_formatted_parent_list_5_0, 35,4,6,11,12,13,26,37)
MR_decl_label8(output__output_formatted_prof_node_5_0, 3,2,5,6,10,17,28,29)
MR_decl_label8(output__output_formatted_prof_node_5_0, 33,34,40,41,42,43,45,46)
MR_decl_label8(output__output_formatted_prof_node_5_0, 50,52,53,54,55,56,57,58)
MR_decl_label2(output__output_formatted_prof_node_5_0, 59,64)
MR_decl_label8(output__output_profile_4_0, 2,3,4,7,8,11,9,13)
MR_decl_label3(output__output_profile_4_0, 14,15,16)
MR_decl_label2(output__units_9_0, 3,4)
MR_decl_label2(fn__output__construct_name_2_0, 4,18)
MR_decl_static(fn__output__classify_profile_1_0)
MR_decl_static(output__units_9_0)
MR_decl_static(output__call_graph_headers_2_0)
MR_decl_static(output__output_formatted_cycle_parent_list_4_0)
MR_decl_static(fn__output__construct_name_2_0)
MR_decl_static(output__output_formatted_parent_list_5_0)
MR_decl_static(output__output_formatted_cycle_child_list_4_0)
MR_decl_static(output__output_formatted_child_list_4_0)
MR_decl_static(output__output_formatted_prof_node_5_0)
MR_decl_static(output__output_call_graph_5_0)
MR_decl_static(output__flat_headers_2_0)
MR_decl_static(output__flat_profile_6_0)
MR_decl_static(output__output_alphabet_listing_2_3_0)
MR_def_extern_entry(output__output_profile_4_0)
MR_decl_static(__Unify___output__header_category_0_0)
MR_decl_static(__Compare___output__header_category_0_0)
MR_decl_static(output__IntroducedFrom__pred__output_formatted_cycle_parent_list__281__1_4_0)
MR_decl_static(output__IntroducedFrom__pred__output_formatted_child_list__329__1_4_0)

extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
static const struct mercury_type_1 mercury_common_1[1] =
{
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_STRING_CTOR_ADDR,
MR_INT_CTOR_ADDR
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__output__output_formatted_cycle_parent_list_4_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_output_prof_info__type_ctor_info_parent_0;
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_state_0;
static const MR_UserClosureId
mercury_data__closure_layout__output__output_formatted_child_list_4_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_output_prof_info__type_ctor_info_child_0;
static const struct mercury_type_2 mercury_common_2[2] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__output__output_formatted_cycle_parent_list_4_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_COMMON(1,0),
MR_CTOR0_ADDR(output_prof_info, parent),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__output__output_formatted_child_list_4_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_COMMON(1,0),
MR_CTOR0_ADDR(output_prof_info, child),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
};

static const struct mercury_type_3 mercury_common_3[2] =
{
{
MR_string_const(">", 1),
MR_tbmkword(0, 0)
},
{
MR_string_const("] ", 2),
MR_tbmkword(0, 0)
},
};

static const struct mercury_type_4 mercury_common_4[1] =
{
{
MR_string_const("<spontaneous>\n", 14)
},
};

static const struct mercury_type_5 mercury_common_5[1] =
{
{
{
MR_TAG_COMMON(2,4,0),
MR_tbmkword(0, 0)
}
},
};

static const struct mercury_type_0 mercury_vector_common_0_0[5] =
{
{
1
},
{
2
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

static const MR_EnumFunctorDesc mercury_data_output__enum_functor_desc_header_category_0_0 = {
	"time_headers",
	0
};

static const MR_EnumFunctorDesc mercury_data_output__enum_functor_desc_header_category_0_1 = {
	"memory_words_headers",
	1
};

static const MR_EnumFunctorDesc mercury_data_output__enum_functor_desc_header_category_0_2 = {
	"memory_cells_headers",
	2
};

const MR_EnumFunctorDescPtr mercury_data_output__enum_value_ordered_header_category_0[] = {
	&mercury_data_output__enum_functor_desc_header_category_0_0,
	&mercury_data_output__enum_functor_desc_header_category_0_1,
	&mercury_data_output__enum_functor_desc_header_category_0_2
};

const MR_EnumFunctorDescPtr mercury_data_output__enum_name_ordered_header_category_0[] = {
	&mercury_data_output__enum_functor_desc_header_category_0_2,
	&mercury_data_output__enum_functor_desc_header_category_0_1,
	&mercury_data_output__enum_functor_desc_header_category_0_0
};

const MR_Integer mercury_data_output__functor_number_map_header_category_0[] = {
	2,
	1,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_output__type_ctor_info_header_category_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___output__header_category_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___output__header_category_0_0)),
	"output",
	"header_category",
	{ (void *)mercury_data_output__enum_name_ordered_header_category_0 },
	{ (void *)mercury_data_output__enum_value_ordered_header_category_0 },
	3,
	4,
	mercury_data_output__functor_number_map_header_category_0
};

static const MR_UserClosureId
mercury_data__closure_layout__output__output_formatted_cycle_parent_list_4_0_1 = {
{
MR_PREDICATE,
"output",
"output",
"lambda_output_m_281",
4,
0
},
"output",
"output.m",
281,
"d1;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__output__output_formatted_child_list_4_0_1 = {
{
MR_PREDICATE,
"output",
"output",
"lambda_output_m_329",
4,
0
},
"output",
"output.m",
329,
"d1;c5;"
};


MR_BEGIN_MODULE(output_module0)
	MR_init_entry1(fn__output__classify_profile_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__output__classify_profile_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r1;
	MR_tempr1 = (MR_Word) &MR_tfield(0, (MR_Word *) &mercury_vector_common_0_0, (MR_Integer) MR_tempr3);
	MR_tempr2 = MR_tempr3;
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(output_module1)
	MR_init_entry1(output__units_9_0);
	MR_init_label2(output__units_9_0,3,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(output__units_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,2)) {
		MR_GOTO_LAB(output__units_9_0_i3);
	}
	MR_r1 = (MR_Word) MR_string_const("cells", 5);
	MR_r2 = (MR_Word) MR_string_const("allocations", 11);
	MR_r3 = (MR_Word) MR_string_const("number of memory allocations", 28);
	MR_r4 = (MR_Word) MR_string_const("k-cells", 7);
	MR_r5 = (MR_Word) MR_string_const("kilocells", 9);
	MR_r6 = (MR_Word) MR_string_const("cells", 5);
	MR_r7 = (MR_Word) MR_string_const("cls/call", 8);
	MR_r8 = (MR_Word) MR_string_const("occurring in", 12);
	MR_proceed();
MR_def_label(output__units_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(output__units_9_0_i4);
	}
	MR_r1 = (MR_Word) MR_string_const("mem", 3);
	MR_r2 = (MR_Word) MR_string_const("memory", 6);
	MR_r3 = (MR_Word) MR_string_const("allocated memory", 16);
	MR_r4 = (MR_Word) MR_string_const("k-words", 7);
	MR_r5 = (MR_Word) MR_string_const("kilowords", 9);
	MR_r6 = (MR_Word) MR_string_const("words", 5);
	MR_r7 = (MR_Word) MR_string_const("wds/call", 8);
	MR_r8 = (MR_Word) MR_string_const("allocated by", 12);
	MR_proceed();
MR_def_label(output__units_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("time", 4);
	MR_r2 = (MR_Word) MR_string_const("time", 4);
	MR_r3 = (MR_Word) MR_string_const("running time", 12);
	MR_r4 = (MR_Word) MR_string_const("seconds", 7);
	MR_r5 = (MR_Word) MR_string_const("seconds", 7);
	MR_r6 = (MR_Word) MR_string_const("milliseconds", 12);
	MR_r7 = (MR_Word) MR_string_const("ms/call", 7);
	MR_r8 = (MR_Word) MR_string_const("spent executing", 15);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(globals__io_get_globals_3_0);
MR_decl_entry(globals__get_what_to_profile_2_0);
MR_decl_entry(io__write_string_3_0);
MR_decl_entry(io__format_4_0);
MR_decl_entry(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);

MR_BEGIN_MODULE(output_module2)
	MR_init_entry1(output__call_graph_headers_2_0);
	MR_init_label8(output__call_graph_headers_2_0,2,3,4,5,6,9,10,11)
	MR_init_label8(output__call_graph_headers_2_0,12,16,19,20,23,24,25,26)
	MR_init_label8(output__call_graph_headers_2_0,27,28,29,30,31,32,34,37)
	MR_init_label8(output__call_graph_headers_2_0,38,39,40,41,42,43,44,45)
	MR_init_label8(output__call_graph_headers_2_0,47,48,49,50,51,52,53,54)
	MR_init_label7(output__call_graph_headers_2_0,55,56,57,58,61,62,63)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(output__call_graph_headers_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(globals__io_get_globals_3_0,
		output__call_graph_headers_2_0_i2);
MR_def_label(output__call_graph_headers_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(globals__get_what_to_profile_2_0,
		output__call_graph_headers_2_0_i3);
MR_def_label(output__call_graph_headers_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__output__classify_profile_1_0,
		output__call_graph_headers_2_0_i4);
MR_def_label(output__call_graph_headers_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(output__units_9_0,
		output__call_graph_headers_2_0_i5);
MR_def_label(output__call_graph_headers_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r8;
	MR_r1 = (MR_Word) MR_string_const("call graph profile:\n", 20);
	MR_np_call_localret_ent(io__write_string_3_0,
		output__call_graph_headers_2_0_i6);
MR_def_label(output__call_graph_headers_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_sv(6) = MR_tempr1;
	MR_tfield(2, MR_tempr1, 0) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_string_const("\tSorted on the %%%s field.\n\n", 28);
	}
	MR_np_call_localret_ent(io__format_4_0,
		output__call_graph_headers_2_0_i9);
MR_def_label(output__call_graph_headers_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\tprocedure entries:\n\n", 21);
	MR_np_call_localret_ent(io__write_string_3_0,
		output__call_graph_headers_2_0_i10);
MR_def_label(output__call_graph_headers_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("index\t\tthe index number of the procedure in the call graph\n", 59);
	MR_np_call_localret_ent(io__write_string_3_0,
		output__call_graph_headers_2_0_i11);
MR_def_label(output__call_graph_headers_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\t\tlisting.\n\n", 12);
	MR_np_call_localret_ent(io__write_string_3_0,
		output__call_graph_headers_2_0_i12);
MR_def_label(output__call_graph_headers_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_sv(6);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_r1 = (MR_Word) MR_string_const("%%%s\t\tthe percentage of the total %s of\n", 40);
	}
	MR_np_call_localret_ent(io__format_4_0,
		output__call_graph_headers_2_0_i16);
MR_def_label(output__call_graph_headers_2_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(5);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(3) = MR_tempr2;
	MR_r1 = (MR_Word) MR_string_const("\t\tthe program %s this procedure and its\n", 40);
	}
	MR_np_call_localret_ent(io__format_4_0,
		output__call_graph_headers_2_0_i19);
MR_def_label(output__call_graph_headers_2_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\t\tdescendents.\n\n", 16);
	MR_np_call_localret_ent(io__write_string_3_0,
		output__call_graph_headers_2_0_i20);
MR_def_label(output__call_graph_headers_2_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(4);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_sv(3);
	MR_sv(3) = MR_tempr2;
	MR_sv(4) = MR_tempr1;
	MR_r1 = (MR_Word) MR_string_const("self\t\tthe number of %s actually %s\n", 35);
	}
	MR_np_call_localret_ent(io__format_4_0,
		output__call_graph_headers_2_0_i23);
MR_def_label(output__call_graph_headers_2_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\t\tthe procedure\'s own code.\n\n", 29);
	MR_np_call_localret_ent(io__write_string_3_0,
		output__call_graph_headers_2_0_i24);
MR_def_label(output__call_graph_headers_2_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("descendents\tthe number of %s %s the\n", 36);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(io__format_4_0,
		output__call_graph_headers_2_0_i25);
MR_def_label(output__call_graph_headers_2_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\t\tdescendents of the current procedure.\n\n", 41);
	MR_np_call_localret_ent(io__write_string_3_0,
		output__call_graph_headers_2_0_i26);
MR_def_label(output__call_graph_headers_2_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("called\t\tthe number of times the current procedure is\n", 53);
	MR_np_call_localret_ent(io__write_string_3_0,
		output__call_graph_headers_2_0_i27);
MR_def_label(output__call_graph_headers_2_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\t\tcalled (not counting self recursive calls).\n\n", 47);
	MR_np_call_localret_ent(io__write_string_3_0,
		output__call_graph_headers_2_0_i28);
MR_def_label(output__call_graph_headers_2_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("self\t\tthe number of self recursive calls.\n\n", 43);
	MR_np_call_localret_ent(io__write_string_3_0,
		output__call_graph_headers_2_0_i29);
MR_def_label(output__call_graph_headers_2_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("name\t\tthe name of the current procedure.\n\n", 42);
	MR_np_call_localret_ent(io__write_string_3_0,
		output__call_graph_headers_2_0_i30);
MR_def_label(output__call_graph_headers_2_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("index\t\tan index number to locate the function easily.\n\n\n\n", 57);
	MR_np_call_localret_ent(io__write_string_3_0,
		output__call_graph_headers_2_0_i31);
MR_def_label(output__call_graph_headers_2_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\tparent listings:\n\n", 19);
	MR_np_call_localret_ent(io__write_string_3_0,
		output__call_graph_headers_2_0_i32);
MR_def_label(output__call_graph_headers_2_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(3) = MR_tempr1;
	MR_r1 = (MR_Word) MR_string_const("self*\t\tthe number of %s of the current procedure\'s self\n", 56);
	}
	MR_np_call_localret_ent(io__format_4_0,
		output__call_graph_headers_2_0_i34);
MR_def_label(output__call_graph_headers_2_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(2) = MR_tempr2;
	MR_r1 = (MR_Word) MR_string_const("\t\t%s due to calls from this parent.\n\n", 37);
	}
	MR_np_call_localret_ent(io__format_4_0,
		output__call_graph_headers_2_0_i37);
MR_def_label(output__call_graph_headers_2_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("descendents*\tthe number of %s of the current procedure\'s descendent\n", 68);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(io__format_4_0,
		output__call_graph_headers_2_0_i38);
MR_def_label(output__call_graph_headers_2_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\t\t%s which is due to calls from this parent.\n\n", 46);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(io__format_4_0,
		output__call_graph_headers_2_0_i39);
MR_def_label(output__call_graph_headers_2_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("called*\t\tthe number of times the current procedure is called\n", 61);
	MR_np_call_localret_ent(io__write_string_3_0,
		output__call_graph_headers_2_0_i40);
MR_def_label(output__call_graph_headers_2_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\t\tby this parent.\n\n", 19);
	MR_np_call_localret_ent(io__write_string_3_0,
		output__call_graph_headers_2_0_i41);
MR_def_label(output__call_graph_headers_2_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("total\t\tthe number of times this procedure is called by its parents.\n\n", 69);
	MR_np_call_localret_ent(io__write_string_3_0,
		output__call_graph_headers_2_0_i42);
MR_def_label(output__call_graph_headers_2_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("parents\t\tthe name of this parent.\n\n", 35);
	MR_np_call_localret_ent(io__write_string_3_0,
		output__call_graph_headers_2_0_i43);
MR_def_label(output__call_graph_headers_2_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("index\t\tthe index number of the parent procedure\n\n\n\n", 51);
	MR_np_call_localret_ent(io__write_string_3_0,
		output__call_graph_headers_2_0_i44);
MR_def_label(output__call_graph_headers_2_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("children listings:\n\n", 20);
	MR_np_call_localret_ent(io__write_string_3_0,
		output__call_graph_headers_2_0_i45);
MR_def_label(output__call_graph_headers_2_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	MR_r1 = (MR_Word) MR_string_const("self*\t\tthe number of %s of this child\'s self %s which is\n", 57);
	}
	MR_np_call_localret_ent(io__format_4_0,
		output__call_graph_headers_2_0_i47);
MR_def_label(output__call_graph_headers_2_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\t\tdue to being called by the current procedure.\n\n", 49);
	MR_np_call_localret_ent(io__write_string_3_0,
		output__call_graph_headers_2_0_i48);
MR_def_label(output__call_graph_headers_2_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("descendent*\tthe number of %s of this child\'s descendent %s which\n", 65);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(io__format_4_0,
		output__call_graph_headers_2_0_i49);
MR_def_label(output__call_graph_headers_2_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\t\tis due to the current procedure.\n\n", 36);
	MR_np_call_localret_ent(io__write_string_3_0,
		output__call_graph_headers_2_0_i50);
MR_def_label(output__call_graph_headers_2_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("called*\t\tthe number of times this child is called by the current\n", 65);
	MR_np_call_localret_ent(io__write_string_3_0,
		output__call_graph_headers_2_0_i51);
MR_def_label(output__call_graph_headers_2_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\t\tprocedure.\n\n", 14);
	MR_np_call_localret_ent(io__write_string_3_0,
		output__call_graph_headers_2_0_i52);
MR_def_label(output__call_graph_headers_2_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("total*\t\tthe number of times this child is called by all procedures.\n\n", 69);
	MR_np_call_localret_ent(io__write_string_3_0,
		output__call_graph_headers_2_0_i53);
MR_def_label(output__call_graph_headers_2_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("children\tthe name of this child.\n\n", 34);
	MR_np_call_localret_ent(io__write_string_3_0,
		output__call_graph_headers_2_0_i54);
MR_def_label(output__call_graph_headers_2_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("index\t\tthe index number of the child.\n\n\n\n", 41);
	MR_np_call_localret_ent(io__write_string_3_0,
		output__call_graph_headers_2_0_i55);
MR_def_label(output__call_graph_headers_2_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("                                  called/total", 46);
	MR_np_call_localret_ent(io__write_string_3_0,
		output__call_graph_headers_2_0_i56);
MR_def_label(output__call_graph_headers_2_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("       parents\n", 15);
	MR_np_call_localret_ent(io__write_string_3_0,
		output__call_graph_headers_2_0_i57);
MR_def_label(output__call_graph_headers_2_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("%", 1);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		output__call_graph_headers_2_0_i58);
MR_def_label(output__call_graph_headers_2_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_string_const("index %6s    self descendents  called+self", 42);
	}
	MR_np_call_localret_ent(io__format_4_0,
		output__call_graph_headers_2_0_i61);
MR_def_label(output__call_graph_headers_2_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("    name           index\n", 25);
	MR_np_call_localret_ent(io__write_string_3_0,
		output__call_graph_headers_2_0_i62);
MR_def_label(output__call_graph_headers_2_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("                                  called/total", 46);
	MR_np_call_localret_ent(io__write_string_3_0,
		output__call_graph_headers_2_0_i63);
MR_def_label(output__call_graph_headers_2_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("       children\n\n", 17);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_output_prof_info__type_ctor_info_parent_0;
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_state_0;
MR_decl_entry(list__foldl_4_0);

MR_BEGIN_MODULE(output_module3)
	MR_init_entry1(output__output_formatted_cycle_parent_list_4_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(output__output_formatted_cycle_parent_list_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(2,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(output__IntroducedFrom__pred__output_formatted_cycle_parent_list__281__1_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r2;
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(output_prof_info, parent);
	MR_r2 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(list__foldl_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(string__int_to_string_2_0);
MR_decl_entry(string__append_list_2_0);

MR_BEGIN_MODULE(output_module4)
	MR_init_entry1(fn__output__construct_name_2_0);
	MR_init_label2(fn__output__construct_name_2_0,4,18)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__output__construct_name_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_r2,0)) {
		MR_GOTO_LAB(fn__output__construct_name_2_0_i18);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(string__int_to_string_2_0,
		fn__output__construct_name_2_0_i4);
MR_def_label(fn__output__construct_name_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,3,0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_string_const("  <cycle ", 9);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r1 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(string__append_list_2_0);
	}
MR_def_label(fn__output__construct_name_2_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
MR_decl_entry(fn__map__det_elem_2_0);

MR_BEGIN_MODULE(output_module5)
	MR_init_entry1(output__output_formatted_parent_list_5_0);
	MR_init_label8(output__output_formatted_parent_list_5_0,35,4,6,11,12,13,26,37)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(output__output_formatted_parent_list_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
MR_def_label(output__output_formatted_parent_list_5_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(output__output_formatted_parent_list_5_0_i37);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r1;
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 0);
	MR_r5 = MR_tempr1;
	MR_sv(7) = MR_ctfield(0, MR_tempr1, 4);
	MR_sv(6) = MR_ctfield(0, MR_tempr1, 3);
	MR_sv(5) = MR_ctfield(0, MR_tempr1, 2);
	MR_r6 = MR_ctfield(0, MR_tempr1, 1);
	MR_r7 = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(3) = MR_ctfield(1, MR_tempr2, 1);
	if (MR_INT_NE(MR_r6,0)) {
		MR_GOTO_LAB(output__output_formatted_parent_list_5_0_i4);
	}
	MR_r4 = MR_r2;
	MR_sv(2) = MR_r3;
	MR_r3 = MR_r7;
	MR_sv(4) = MR_r3;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_GOTO_LAB(output__output_formatted_parent_list_5_0_i12);
	}
MR_def_label(output__output_formatted_parent_list_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(4) = MR_r7;
	MR_r1 = MR_r6;
	MR_np_call_localret_ent(string__int_to_string_2_0,
		output__output_formatted_parent_list_5_0_i6);
MR_def_label(output__output_formatted_parent_list_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,3,0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_string_const("  <cycle ", 9);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r1 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	}
	MR_np_call_localret_ent(string__append_list_2_0,
		output__output_formatted_parent_list_5_0_i11);
MR_def_label(output__output_formatted_parent_list_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_INT_CTOR_ADDR;
MR_def_label(output__output_formatted_parent_list_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r4;
	MR_np_call_localret_ent(fn__map__det_elem_2_0,
		output__output_formatted_parent_list_5_0_i13);
MR_def_label(output__output_formatted_parent_list_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(5);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr2, 0) = MR_sv(6);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr3, 0) = MR_sv(7);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr4, 0) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr5, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr5, 0) = MR_sv(4);
	MR_tag_alloc_heap(MR_tempr6, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr6, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr7, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr7, 0) = MR_tempr6;
	MR_tfield(1, MR_tempr7, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr6, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr6, 0) = MR_tempr5;
	MR_tfield(1, MR_tempr6, 1) = MR_tempr7;
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr5, 0) = MR_tempr4;
	MR_tfield(1, MR_tempr5, 1) = MR_tempr6;
	MR_tag_alloc_heap(MR_tempr6, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr6, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr6, 1) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = MR_tempr6;
	MR_tag_alloc_heap(MR_tempr8, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr8;
	MR_tfield(1, MR_tempr8, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr8, 1) = MR_tempr3;
	MR_r1 = (MR_Word) MR_string_const("%20.2f %11.2f %7d/%-11d %s [%d]\n", 32);
	}
	MR_np_call_localret_ent(io__format_4_0,
		output__output_formatted_parent_list_5_0_i26);
MR_def_label(output__output_formatted_parent_list_5_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(output__output_formatted_parent_list_5_0_i35);
MR_def_label(output__output_formatted_parent_list_5_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(output_module6)
	MR_init_entry1(output__output_formatted_cycle_child_list_4_0);
	MR_init_label8(output__output_formatted_cycle_child_list_4_0,29,4,6,11,12,13,20,31)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(output__output_formatted_cycle_child_list_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(output__output_formatted_cycle_child_list_4_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(output__output_formatted_cycle_child_list_4_0_i31);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r1;
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 0);
	MR_r5 = MR_tempr1;
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 4);
	MR_r6 = MR_ctfield(0, MR_tempr1, 1);
	MR_r7 = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(2) = MR_ctfield(1, MR_tempr2, 1);
	if (MR_INT_NE(MR_r6,0)) {
		MR_GOTO_LAB(output__output_formatted_cycle_child_list_4_0_i4);
	}
	MR_r4 = MR_r2;
	MR_r3 = MR_r7;
	MR_sv(3) = MR_r3;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_GOTO_LAB(output__output_formatted_cycle_child_list_4_0_i12);
	}
MR_def_label(output__output_formatted_cycle_child_list_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(3) = MR_r7;
	MR_r1 = MR_r6;
	MR_np_call_localret_ent(string__int_to_string_2_0,
		output__output_formatted_cycle_child_list_4_0_i6);
MR_def_label(output__output_formatted_cycle_child_list_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,3,0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_string_const("  <cycle ", 9);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r1 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	}
	MR_np_call_localret_ent(string__append_list_2_0,
		output__output_formatted_cycle_child_list_4_0_i11);
MR_def_label(output__output_formatted_cycle_child_list_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_INT_CTOR_ADDR;
MR_def_label(output__output_formatted_cycle_child_list_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r4;
	MR_np_call_localret_ent(fn__map__det_elem_2_0,
		output__output_formatted_cycle_child_list_4_0_i13);
MR_def_label(output__output_formatted_cycle_child_list_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(4);
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr2, 0) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr3, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr4, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr5;
	MR_tfield(1, MR_tempr5, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr5, 1) = MR_tempr3;
	MR_r1 = (MR_Word) MR_string_const("%40d             %s [%d]\n", 25);
	}
	MR_np_call_localret_ent(io__format_4_0,
		output__output_formatted_cycle_child_list_4_0_i20);
MR_def_label(output__output_formatted_cycle_child_list_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(output__output_formatted_cycle_child_list_4_0_i29);
MR_def_label(output__output_formatted_cycle_child_list_4_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_output_prof_info__type_ctor_info_child_0;

MR_BEGIN_MODULE(output_module7)
	MR_init_entry1(output__output_formatted_child_list_4_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(output__output_formatted_child_list_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(2,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(output__IntroducedFrom__pred__output_formatted_child_list__329__1_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r2;
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(output_prof_info, child);
	MR_r2 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(list__foldl_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(require__error_1_0);
MR_decl_entry(string__format_3_0);
MR_decl_entry(list__sort_2_0);

MR_BEGIN_MODULE(output_module8)
	MR_init_entry1(output__output_formatted_prof_node_5_0);
	MR_init_label8(output__output_formatted_prof_node_5_0,3,2,5,6,10,17,28,29)
	MR_init_label8(output__output_formatted_prof_node_5_0,33,34,40,41,42,43,45,46)
	MR_init_label8(output__output_formatted_prof_node_5_0,50,52,53,54,55,56,57,58)
	MR_init_label2(output__output_formatted_prof_node_5_0,59,64)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(output__output_formatted_prof_node_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(14);
	MR_sv(14) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(output__output_formatted_prof_node_5_0_i3);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_ctfield(0, MR_r1, 0);
	MR_r2 = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 2);
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 4);
	MR_sv(5) = MR_ctfield(0, MR_tempr1, 5);
	MR_sv(6) = MR_ctfield(0, MR_tempr1, 6);
	MR_sv(7) = MR_ctfield(0, MR_tempr1, 7);
	MR_sv(8) = MR_ctfield(0, MR_tempr1, 8);
	MR_sv(9) = MR_ctfield(0, MR_tempr1, 9);
	MR_sv(10) = MR_ctfield(0, MR_tempr1, 10);
	MR_sv(11) = MR_ctfield(0, MR_tempr1, 11);
	}
	MR_np_call_localret_ent(fn__output__construct_name_2_0,
		output__output_formatted_prof_node_5_0_i5);
MR_def_label(output__output_formatted_prof_node_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("output_formatted_prof_node: Cannot have output_cycle_prof\n", 58);
	MR_np_call_localret_ent(require__error_1_0,
		output__output_formatted_prof_node_5_0_i2);
MR_def_label(output__output_formatted_prof_node_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__output__construct_name_2_0,
		output__output_formatted_prof_node_5_0_i5);
MR_def_label(output__output_formatted_prof_node_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(string__int_to_string_2_0,
		output__output_formatted_prof_node_5_0_i6);
MR_def_label(output__output_formatted_prof_node_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,3,1);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r1 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_string_const("[", 1);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	}
	MR_np_call_localret_ent(string__append_list_2_0,
		output__output_formatted_prof_node_5_0_i10);
MR_def_label(output__output_formatted_prof_node_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_sv(13) = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(7);
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr2, 0) = MR_sv(12);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr3, 0) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr4, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr5;
	MR_tfield(1, MR_tempr5, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr5, 1) = MR_tempr3;
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("%40d             %s [%d]\n", 25);
	}
	MR_np_call_localret_ent(string__format_3_0,
		output__output_formatted_prof_node_5_0_i17);
MR_def_label(output__output_formatted_prof_node_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr2, 0) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr3, 0) = MR_sv(4);
	MR_tag_alloc_heap(MR_tempr4, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr4, 0) = MR_sv(5);
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr5, 0) = MR_sv(6);
	MR_tag_alloc_heap(MR_tempr6, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr6, 0) = MR_tempr5;
	MR_tfield(1, MR_tempr6, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr7, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr7, 0) = MR_tempr4;
	MR_tfield(1, MR_tempr7, 1) = MR_tempr6;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr7;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr8, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr8;
	MR_tfield(1, MR_tempr8, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr8, 1) = MR_tempr3;
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("%-6s %5.1f %7.2f %11.2f %7d", 27);
	}
	MR_np_call_localret_ent(string__format_3_0,
		output__output_formatted_prof_node_5_0_i28);
MR_def_label(output__output_formatted_prof_node_5_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_sv(7),0)) {
		MR_GOTO_LAB(output__output_formatted_prof_node_5_0_i29);
	}
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(io__write_string_3_0,
		output__output_formatted_prof_node_5_0_i33);
MR_def_label(output__output_formatted_prof_node_5_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
MR_def_label(output__output_formatted_prof_node_5_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(10),0,0)) {
		MR_GOTO_LAB(output__output_formatted_prof_node_5_0_i34);
	}
	if (MR_LTAGS_TESTR(MR_sv(8),0,0)) {
		MR_GOTO_LAB(output__output_formatted_prof_node_5_0_i34);
	}
	MR_r1 = (MR_Word) MR_string_const("%67s", 4);
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,5,0);
	MR_np_call_localret_ent(io__format_4_0,
		output__output_formatted_prof_node_5_0_i43);
MR_def_label(output__output_formatted_prof_node_5_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(output_prof_info, parent);
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(list__sort_2_0,
		output__output_formatted_prof_node_5_0_i40);
MR_def_label(output__output_formatted_prof_node_5_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(output__output_formatted_cycle_parent_list_4_0,
		output__output_formatted_prof_node_5_0_i41);
MR_def_label(output__output_formatted_prof_node_5_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(output_prof_info, parent);
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(list__sort_2_0,
		output__output_formatted_prof_node_5_0_i42);
MR_def_label(output__output_formatted_prof_node_5_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(output__output_formatted_parent_list_5_0,
		output__output_formatted_prof_node_5_0_i43);
MR_def_label(output__output_formatted_prof_node_5_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(io__write_string_3_0,
		output__output_formatted_prof_node_5_0_i45);
MR_def_label(output__output_formatted_prof_node_5_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(7),0)) {
		MR_GOTO_LAB(output__output_formatted_prof_node_5_0_i46);
	}
	MR_r1 = (MR_Word) MR_string_const("         ", 9);
	MR_np_call_localret_ent(io__write_string_3_0,
		output__output_formatted_prof_node_5_0_i50);
MR_def_label(output__output_formatted_prof_node_5_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(13);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_string_const("+%-7d", 5);
	}
	MR_np_call_localret_ent(io__format_4_0,
		output__output_formatted_prof_node_5_0_i50);
MR_def_label(output__output_formatted_prof_node_5_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		output__output_formatted_prof_node_5_0_i52);
MR_def_label(output__output_formatted_prof_node_5_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(" ", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		output__output_formatted_prof_node_5_0_i53);
MR_def_label(output__output_formatted_prof_node_5_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(12);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		output__output_formatted_prof_node_5_0_i54);
MR_def_label(output__output_formatted_prof_node_5_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		output__output_formatted_prof_node_5_0_i55);
MR_def_label(output__output_formatted_prof_node_5_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(output_prof_info, child);
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(list__sort_2_0,
		output__output_formatted_prof_node_5_0_i56);
MR_def_label(output__output_formatted_prof_node_5_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(output__output_formatted_child_list_4_0,
		output__output_formatted_prof_node_5_0_i57);
MR_def_label(output__output_formatted_prof_node_5_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(output_prof_info, child);
	MR_r2 = MR_sv(11);
	MR_np_call_localret_ent(list__sort_2_0,
		output__output_formatted_prof_node_5_0_i58);
MR_def_label(output__output_formatted_prof_node_5_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(output__output_formatted_cycle_child_list_4_0,
		output__output_formatted_prof_node_5_0_i59);
MR_def_label(output__output_formatted_prof_node_5_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_sv(7),0)) {
		MR_GOTO_LAB(output__output_formatted_prof_node_5_0_i64);
	}
	MR_r1 = MR_sv(3);
	MR_succip_word = MR_sv(14);
	MR_decr_sp(14);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(output__output_formatted_prof_node_5_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(14);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_output_prof_info__type_ctor_info_output_prof_0;
MR_decl_entry(map__lookup_3_0);

MR_BEGIN_MODULE(output_module9)
	MR_init_entry1(output__output_call_graph_5_0);
	MR_init_label6(output__output_call_graph_5_0,13,4,5,6,7,15)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(output__output_call_graph_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(output__output_call_graph_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(output__output_call_graph_5_0_i15);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(3) = MR_ctfield(1, MR_tempr1, 0);
	MR_sv(4) = MR_ctfield(1, MR_tempr1, 1);
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(output_prof_info, output_prof);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(3);
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		output__output_call_graph_5_0_i4);
MR_def_label(output__output_call_graph_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		output__output_call_graph_5_0_i5);
MR_def_label(output__output_call_graph_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(output__output_formatted_prof_node_5_0,
		output__output_call_graph_5_0_i6);
MR_def_label(output__output_call_graph_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n-----------------------------------------------\n\n", 50);
	MR_np_call_localret_ent(io__write_string_3_0,
		output__output_call_graph_5_0_i7);
MR_def_label(output__output_call_graph_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(output__output_call_graph_5_0_i13);
MR_def_label(output__output_call_graph_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(output_module10)
	MR_init_entry1(output__flat_headers_2_0);
	MR_init_label8(output__flat_headers_2_0,2,3,4,5,6,9,12,15)
	MR_init_label8(output__flat_headers_2_0,18,19,20,21,26,29,30,31)
	MR_init_label3(output__flat_headers_2_0,32,33,34)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(output__flat_headers_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(globals__io_get_globals_3_0,
		output__flat_headers_2_0_i2);
MR_def_label(output__flat_headers_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(globals__get_what_to_profile_2_0,
		output__flat_headers_2_0_i3);
MR_def_label(output__flat_headers_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__output__classify_profile_1_0,
		output__flat_headers_2_0_i4);
MR_def_label(output__flat_headers_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(output__units_9_0,
		output__flat_headers_2_0_i5);
MR_def_label(output__flat_headers_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_r7;
	MR_sv(7) = MR_r8;
	MR_r1 = (MR_Word) MR_string_const("\nflat profile:\n\n", 16);
	MR_np_call_localret_ent(io__write_string_3_0,
		output__flat_headers_2_0_i6);
MR_def_label(output__flat_headers_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_string_const("%%\t\tthe percentage of total %s of the program\n", 46);
	}
	MR_np_call_localret_ent(io__format_4_0,
		output__flat_headers_2_0_i9);
MR_def_label(output__flat_headers_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(1) = MR_tempr1;
	MR_r1 = (MR_Word) MR_string_const("%s\t\tused by this procedure.\n\n", 29);
	}
	MR_np_call_localret_ent(io__format_4_0,
		output__flat_headers_2_0_i12);
MR_def_label(output__flat_headers_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(4);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(2) = MR_tempr2;
	MR_r1 = (MR_Word) MR_string_const("cumulative\tthe total number of %s for the current procedure and\n", 64);
	}
	MR_np_call_localret_ent(io__format_4_0,
		output__flat_headers_2_0_i15);
MR_def_label(output__flat_headers_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_sv(4) = MR_tempr1;
	MR_tfield(2, MR_tempr1, 0) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(3) = MR_tempr2;
	MR_r1 = (MR_Word) MR_string_const("%s\t\tthe ones listed above it.\n\n", 31);
	}
	MR_np_call_localret_ent(io__format_4_0,
		output__flat_headers_2_0_i18);
MR_def_label(output__flat_headers_2_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("self\t\tthe number of %s accounted for by this procedure alone.\n", 62);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(io__format_4_0,
		output__flat_headers_2_0_i19);
MR_def_label(output__flat_headers_2_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("%s\t\tThe listing is sorted on this row.\n\n", 40);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(io__format_4_0,
		output__flat_headers_2_0_i20);
MR_def_label(output__flat_headers_2_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("calls\t\tthe number of times this procedure was called.\n\n", 55);
	MR_np_call_localret_ent(io__write_string_3_0,
		output__flat_headers_2_0_i21);
MR_def_label(output__flat_headers_2_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(5);
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr2, 0) = MR_sv(7);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr3;
	MR_sv(2) = MR_tempr4;
	MR_r1 = (MR_Word) MR_string_const("self\t\tthe average number of %s %s\n", 34);
	}
	MR_np_call_localret_ent(io__format_4_0,
		output__flat_headers_2_0_i26);
MR_def_label(output__flat_headers_2_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_sv(5) = MR_tempr1;
	MR_tfield(2, MR_tempr1, 0) = MR_sv(6);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(3) = MR_tempr2;
	MR_r1 = (MR_Word) MR_string_const("%s  \tthis procedure per call.\n\n", 31);
	}
	MR_np_call_localret_ent(io__format_4_0,
		output__flat_headers_2_0_i29);
MR_def_label(output__flat_headers_2_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("total\t\tthe average number of %s %s this procedure and its\n", 58);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(io__format_4_0,
		output__flat_headers_2_0_i30);
MR_def_label(output__flat_headers_2_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("%s  \tdescendents per call.\n\n", 28);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(io__format_4_0,
		output__flat_headers_2_0_i31);
MR_def_label(output__flat_headers_2_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("name\t\tthe name of the procedure followed by its index number.\n\n", 63);
	MR_np_call_localret_ent(io__write_string_3_0,
		output__flat_headers_2_0_i32);
MR_def_label(output__flat_headers_2_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("   %  cumulative    self              self", 42);
	MR_np_call_localret_ent(io__write_string_3_0,
		output__flat_headers_2_0_i33);
MR_def_label(output__flat_headers_2_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("    total\n", 10);
	MR_np_call_localret_ent(io__write_string_3_0,
		output__flat_headers_2_0_i34);
MR_def_label(output__flat_headers_2_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tempr4 = MR_sv(4);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr4;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr4;
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr1;
	MR_r1 = (MR_Word) MR_string_const(" %4s    %7s  %7s    calls %8s %8s name\n", 39);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(io__format_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__float__float_1_0);
MR_decl_entry(fn__generate_output__checked_float_divide_2_0);
static const MR_Float mercury_float_const_1000pt0000000000000 = 1000.0000000000000;

MR_BEGIN_MODULE(output_module11)
	MR_init_entry1(output__flat_profile_6_0);
	MR_init_label8(output__flat_profile_6_0,44,4,5,7,6,9,10,11)
	MR_init_label6(output__flat_profile_6_0,12,13,14,18,35,46)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(output__flat_profile_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(14);
	MR_sv(14) = (MR_Word) MR_succip;
MR_def_label(output__flat_profile_6_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(output__flat_profile_6_0_i46);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(4) = MR_ctfield(1, MR_tempr1, 0);
	MR_sv(5) = MR_ctfield(1, MR_tempr1, 1);
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(output_prof_info, output_prof);
	MR_r4 = MR_sv(4);
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		output__flat_profile_6_0_i4);
MR_def_label(output__flat_profile_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r3 = MR_sv(3);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		output__flat_profile_6_0_i5);
MR_def_label(output__flat_profile_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(4),0)) {
		MR_GOTO_LAB(output__flat_profile_6_0_i7);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	MR_sv(4) = MR_r1;
	MR_sv(6) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(7) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(8) = MR_ctfield(0, MR_tempr1, 3);
	MR_sv(9) = MR_ctfield(0, MR_tempr1, 4);
	MR_sv(10) = MR_ctfield(0, MR_tempr1, 5);
	MR_r1 = MR_ctfield(0, MR_tempr1, 6);
	MR_sv(12) = MR_ctfield(0, MR_tempr1, 7);
	MR_GOTO_LAB(output__flat_profile_6_0_i6);
	}
MR_def_label(output__flat_profile_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("output_flat_profile: Cannot have output_cycle_prof\n", 51);
	MR_np_call_localret_ent(require__error_1_0,
		output__flat_profile_6_0_i6);
MR_def_label(output__flat_profile_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_np_call_localret_ent(fn__float__float_1_0,
		output__flat_profile_6_0_i9);
MR_def_label(output__flat_profile_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(13) = MR_r1;
	MR_r1 = MR_sv(12);
	MR_np_call_localret_ent(fn__float__float_1_0,
		output__flat_profile_6_0_i10);
MR_def_label(output__flat_profile_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_float_to_word((MR_word_to_float(MR_sv(13)) + MR_word_to_float(MR_r1)));
	MR_sv(11) = ((MR_Integer) MR_sv(12) + (MR_Integer) MR_sv(11));
	MR_tempr2 = MR_sv(9);
	MR_sv(12) = MR_float_to_word((MR_word_to_float(MR_tempr1) + MR_word_to_float(MR_tempr2)));
	MR_r1 = MR_tempr2;
	MR_r2 = MR_sv(1);
	}
	MR_np_call_localret_ent(fn__generate_output__checked_float_divide_2_0,
		output__flat_profile_6_0_i11);
MR_def_label(output__flat_profile_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__generate_output__checked_float_divide_2_0,
		output__flat_profile_6_0_i12);
MR_def_label(output__flat_profile_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_float_to_word(((MR_Float) 1000.0000000000000 * MR_word_to_float(MR_sv(1))));
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_float_to_word(((MR_Float) 1000.0000000000000 * MR_word_to_float(MR_r1)));
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(7);
	}
	MR_np_call_localret_ent(fn__output__construct_name_2_0,
		output__flat_profile_6_0_i13);
MR_def_label(output__flat_profile_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(string__int_to_string_2_0,
		output__flat_profile_6_0_i14);
MR_def_label(output__flat_profile_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,3,1);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r1 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_string_const("[", 1);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	}
	MR_np_call_localret_ent(string__append_list_2_0,
		output__flat_profile_6_0_i18);
MR_def_label(output__flat_profile_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8, MR_tempr9, MR_tempr10;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(8);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr2, 0) = MR_sv(12);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr3, 0) = MR_sv(9);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr4, 0) = MR_sv(11);
	MR_tag_alloc_heap(MR_tempr5, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr5, 0) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr6, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr6, 0) = MR_sv(6);
	MR_tag_alloc_heap(MR_tempr7, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr7, 0) = MR_sv(4);
	MR_tag_alloc_heap(MR_tempr8, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr8, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr9, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr9, 0) = MR_tempr8;
	MR_tfield(1, MR_tempr9, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr8, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr8, 0) = MR_tempr7;
	MR_tfield(1, MR_tempr8, 1) = MR_tempr9;
	MR_tag_alloc_heap(MR_tempr7, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr7, 0) = MR_tempr6;
	MR_tfield(1, MR_tempr7, 1) = MR_tempr8;
	MR_tag_alloc_heap(MR_tempr6, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr6, 0) = MR_tempr5;
	MR_tfield(1, MR_tempr6, 1) = MR_tempr7;
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr5, 0) = MR_tempr4;
	MR_tfield(1, MR_tempr5, 1) = MR_tempr6;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr10, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr10;
	MR_tfield(1, MR_tempr10, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr10, 1) = MR_tempr3;
	MR_r1 = (MR_Word) MR_string_const("%5.1f %10.2f %8.2f %8d %8.2f %8.2f %s %s\n", 41);
	}
	MR_np_call_localret_ent(io__format_4_0,
		output__flat_profile_6_0_i35);
MR_def_label(output__flat_profile_6_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(12);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_succip_word = MR_sv(14);
	MR_GOTO_LAB(output__flat_profile_6_0_i44);
MR_def_label(output__flat_profile_6_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(14);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(io__nl_2_0);

MR_BEGIN_MODULE(output_module12)
	MR_init_entry1(output__output_alphabet_listing_2_3_0);
	MR_init_label3(output__output_alphabet_listing_2_3_0,16,3,9)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(output__output_alphabet_listing_2_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
MR_def_label(output__output_alphabet_listing_2_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(output__output_alphabet_listing_2_3_0_i3);
	}
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(io__nl_2_0);
MR_def_label(output__output_alphabet_listing_2_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tempr4 = MR_r1;
	MR_tempr2 = MR_ctfield(1, MR_tempr4, 0);
	MR_tfield(1, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 1);
	MR_tag_alloc_heap(MR_tempr3, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr3, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_sv(1) = MR_ctfield(1, MR_tempr4, 1);
	MR_r1 = (MR_Word) MR_string_const("[%d]\t%-30s\n", 11);
	MR_r2 = MR_tempr3;
	}
	MR_np_call_localret_ent(io__format_4_0,
		output__output_alphabet_listing_2_3_0_i9);
MR_def_label(output__output_alphabet_listing_2_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_GOTO_LAB(output__output_alphabet_listing_2_3_0_i16);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(globals__what_to_profile_2_1);
MR_decl_entry(globals__io_lookup_bool_option_4_0);
static const MR_Float mercury_float_const_0pt0000000000000000 = 0.0000000000000000;
MR_decl_entry(fn__map__to_assoc_list_1_0);

MR_BEGIN_MODULE(output_module13)
	MR_init_entry1(output__output_profile_4_0);
	MR_init_label8(output__output_profile_4_0,2,3,4,7,8,11,9,13)
	MR_init_label3(output__output_profile_4_0,14,15,16)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__output__output_profile_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(globals__io_get_globals_3_0,
		output__output_profile_4_0_i2);
MR_def_label(output__output_profile_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(globals__get_what_to_profile_2_0,
		output__output_profile_4_0_i3);
MR_def_label(output__output_profile_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(globals__what_to_profile_2_1,
		output__output_profile_4_0_i4);
MR_def_label(output__output_profile_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_string_const("*** profiling %s ***\n\n", 22);
	}
	MR_np_call_localret_ent(io__format_4_0,
		output__output_profile_4_0_i7);
MR_def_label(output__output_profile_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 2);
	MR_r1 = (MR_Integer) 3;
	}
	MR_np_call_localret_ent(globals__io_lookup_bool_option_4_0,
		output__output_profile_4_0_i8);
MR_def_label(output__output_profile_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_r1,0)) {
		MR_GOTO_LAB(output__output_profile_4_0_i9);
	}
	MR_np_call_localret_ent(output__call_graph_headers_2_0,
		output__output_profile_4_0_i11);
MR_def_label(output__output_profile_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(output__output_call_graph_5_0,
		output__output_profile_4_0_i9);
MR_def_label(output__output_profile_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(output__flat_headers_2_0,
		output__output_profile_4_0_i13);
MR_def_label(output__output_profile_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Word) &mercury_float_const_0pt0000000000000000;
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(output__flat_profile_6_0,
		output__output_profile_4_0_i14);
MR_def_label(output__output_profile_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n\n\nalphabetic listing:\n\n", 24);
	MR_np_call_localret_ent(io__write_string_3_0,
		output__output_profile_4_0_i15);
MR_def_label(output__output_profile_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(fn__map__to_assoc_list_1_0,
		output__output_profile_4_0_i16);
MR_def_label(output__output_profile_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(output__output_alphabet_listing_2_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(output_module14)
	MR_init_entry1(__Unify___output__header_category_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___output__header_category_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_int_3_0);

MR_BEGIN_MODULE(output_module15)
	MR_init_entry1(__Compare___output__header_category_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___output__header_category_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(output_module16)
	MR_init_entry1(output__IntroducedFrom__pred__output_formatted_cycle_parent_list__281__1_4_0);
	MR_init_label4(output__IntroducedFrom__pred__output_formatted_cycle_parent_list__281__1_4_0,2,4,9,11)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(output__IntroducedFrom__pred__output_formatted_cycle_parent_list__281__1_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 4);
	MR_r5 = MR_ctfield(0, MR_tempr1, 1);
	MR_r6 = MR_ctfield(0, MR_tempr1, 0);
	if (MR_INT_NE(MR_r5,0)) {
		MR_GOTO_LAB(output__IntroducedFrom__pred__output_formatted_cycle_parent_list__281__1_4_0_i2);
	}
	MR_r4 = MR_r1;
	MR_r3 = MR_r6;
	MR_sv(1) = MR_r3;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_INT_CTOR_ADDR;
	}
	MR_np_call_localret_ent(fn__map__det_elem_2_0,
		output__IntroducedFrom__pred__output_formatted_cycle_parent_list__281__1_4_0_i11);
MR_def_label(output__IntroducedFrom__pred__output_formatted_cycle_parent_list__281__1_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r6;
	MR_r1 = MR_r5;
	MR_np_call_localret_ent(string__int_to_string_2_0,
		output__IntroducedFrom__pred__output_formatted_cycle_parent_list__281__1_4_0_i4);
MR_def_label(output__IntroducedFrom__pred__output_formatted_cycle_parent_list__281__1_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,3,0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_string_const("  <cycle ", 9);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r1 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	}
	MR_np_call_localret_ent(string__append_list_2_0,
		output__IntroducedFrom__pred__output_formatted_cycle_parent_list__281__1_4_0_i9);
MR_def_label(output__IntroducedFrom__pred__output_formatted_cycle_parent_list__281__1_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_np_call_localret_ent(fn__map__det_elem_2_0,
		output__IntroducedFrom__pred__output_formatted_cycle_parent_list__281__1_4_0_i11);
MR_def_label(output__IntroducedFrom__pred__output_formatted_cycle_parent_list__281__1_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr2, 0) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr3, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr4, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr5;
	MR_tfield(1, MR_tempr5, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr5, 1) = MR_tempr3;
	MR_r1 = (MR_Word) MR_string_const("%40d             %s [%d]\n", 25);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(io__format_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__string__format_2_0);

MR_BEGIN_MODULE(output_module17)
	MR_init_entry1(output__IntroducedFrom__pred__output_formatted_child_list__329__1_4_0);
	MR_init_label5(output__IntroducedFrom__pred__output_formatted_child_list__329__1_4_0,2,4,9,11,24)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(output__IntroducedFrom__pred__output_formatted_child_list__329__1_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(6) = MR_ctfield(0, MR_tempr1, 5);
	MR_sv(5) = MR_ctfield(0, MR_tempr1, 4);
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 3);
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 2);
	MR_r5 = MR_ctfield(0, MR_tempr1, 1);
	MR_r6 = MR_ctfield(0, MR_tempr1, 0);
	if (MR_INT_NE(MR_r5,0)) {
		MR_GOTO_LAB(output__IntroducedFrom__pred__output_formatted_child_list__329__1_4_0_i2);
	}
	MR_r4 = MR_r1;
	MR_r3 = MR_r6;
	MR_sv(1) = MR_r3;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_INT_CTOR_ADDR;
	}
	MR_np_call_localret_ent(fn__map__det_elem_2_0,
		output__IntroducedFrom__pred__output_formatted_child_list__329__1_4_0_i11);
MR_def_label(output__IntroducedFrom__pred__output_formatted_child_list__329__1_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r6;
	MR_r1 = MR_r5;
	MR_np_call_localret_ent(string__int_to_string_2_0,
		output__IntroducedFrom__pred__output_formatted_child_list__329__1_4_0_i4);
MR_def_label(output__IntroducedFrom__pred__output_formatted_child_list__329__1_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,3,0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_string_const("  <cycle ", 9);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r1 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	}
	MR_np_call_localret_ent(string__append_list_2_0,
		output__IntroducedFrom__pred__output_formatted_child_list__329__1_4_0_i9);
MR_def_label(output__IntroducedFrom__pred__output_formatted_child_list__329__1_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_np_call_localret_ent(fn__map__det_elem_2_0,
		output__IntroducedFrom__pred__output_formatted_child_list__329__1_4_0_i11);
MR_def_label(output__IntroducedFrom__pred__output_formatted_child_list__329__1_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr2, 0) = MR_sv(4);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr3, 0) = MR_sv(5);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr4, 0) = MR_sv(6);
	MR_tag_alloc_heap(MR_tempr5, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr5, 0) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr6, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr6, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr7, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr7, 0) = MR_tempr6;
	MR_tfield(1, MR_tempr7, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr6, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr6, 0) = MR_tempr5;
	MR_tfield(1, MR_tempr6, 1) = MR_tempr7;
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr5, 0) = MR_tempr4;
	MR_tfield(1, MR_tempr5, 1) = MR_tempr6;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr8, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr8;
	MR_tfield(1, MR_tempr8, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr8, 1) = MR_tempr3;
	MR_r1 = (MR_Word) MR_string_const("%20.2f %11.2f %7d/%-11d %s [%d]\n", 32);
	}
	MR_np_call_localret_ent(fn__string__format_2_0,
		output__IntroducedFrom__pred__output_formatted_child_list__329__1_4_0_i24);
MR_def_label(output__IntroducedFrom__pred__output_formatted_child_list__329__1_4_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__output_maybe_bunch_0(void)
{
	output_module0();
	output_module1();
	output_module2();
	output_module3();
	output_module4();
	output_module5();
	output_module6();
	output_module7();
	output_module8();
	output_module9();
	output_module10();
	output_module11();
	output_module12();
	output_module13();
	output_module14();
	output_module15();
	output_module16();
	output_module17();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__output__init(void);
void mercury__output__init_type_tables(void);
void mercury__output__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__output__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__output__init_complexity_procs(void);
#endif

void mercury__output__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__output_maybe_bunch_0();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_output__type_ctor_info_header_category_0,
		output__header_category_0_0);
	mercury__output__init_debugger();
}

void mercury__output__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_output__type_ctor_info_header_category_0);
	}
}


void mercury__output__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__output__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__output);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__output__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
