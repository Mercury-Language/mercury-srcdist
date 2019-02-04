/*
** Automatically generated from `mercury_compile_mlds_back_end.m'
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
INIT mercury__top_level__mercury_compile_mlds_back_end__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 526 "../library/io.int"
#include "io.mh"

#line 28 "top_level.mercury_compile_mlds_back_end.c"
#line 536 "../library/io.int"
#include "string.mh"

#line 32 "top_level.mercury_compile_mlds_back_end.c"
#line 31 "../library/bitmap.int2"
#include "bitmap.mh"

#line 36 "top_level.mercury_compile_mlds_back_end.c"
#line 30 "../library/time.int2"
#include "time.mh"

#line 40 "top_level.mercury_compile_mlds_back_end.c"
#line 33 "../library/array.int2"
#include "array.mh"

#line 44 "top_level.mercury_compile_mlds_back_end.c"
#line 39 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 48 "top_level.mercury_compile_mlds_back_end.c"
#line 49 "top_level.mercury_compile_mlds_back_end.c"
#include "top_level.mercury_compile_mlds_back_end.mh"

#line 52 "top_level.mercury_compile_mlds_back_end.c"
#line 53 "top_level.mercury_compile_mlds_back_end.c"
#ifndef TOP_LEVEL__MERCURY_COMPILE_MLDS_BACK_END_DECL_GUARD
#define TOP_LEVEL__MERCURY_COMPILE_MLDS_BACK_END_DECL_GUARD

#line 57 "top_level.mercury_compile_mlds_back_end.c"
#line 58 "top_level.mercury_compile_mlds_back_end.c"

#endif
#line 61 "top_level.mercury_compile_mlds_back_end.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

struct mercury_type_0 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[3];
};
MR_STATIC_LINKAGE const struct mercury_type_0 mercury_common_0[];

struct mercury_type_1 {
	MR_Word * f1;
	MR_Code * f2;
	MR_Integer f3;
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

struct mercury_type_2 {
	MR_Word * f1;
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];

struct mercury_type_3 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[5];
};
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];

struct mercury_type_4 {
	MR_Integer f1;
	MR_String f2;
};
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_common_4[];

struct mercury_type_5 {
	MR_Word * f1[2];
};
MR_STATIC_LINKAGE const struct mercury_type_5 mercury_common_5[];

struct mercury_type_6 {
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
	MR_Word * f5;
};
MR_STATIC_LINKAGE const struct mercury_type_6 mercury_common_6[];

struct mercury_type_7 {
	MR_Integer f1;
};
MR_STATIC_LINKAGE const struct mercury_type_7 mercury_common_7[];
MR_decl_label10(top_level__mercury_compile_mlds_back_end__maybe_add_heap_ops_6_0, 2,3,4,5,7,6,31,9,15,16)
MR_decl_label5(top_level__mercury_compile_mlds_back_end__maybe_add_heap_ops_6_0, 19,20,21,12,24)
MR_decl_label10(top_level__mercury_compile_mlds_back_end__maybe_add_trail_ops_6_0, 2,3,21,5,6,9,10,13,12,11)
MR_decl_label5(top_level__mercury_compile_mlds_back_end__maybe_add_trail_ops_6_0, 14,15,18,19,20)
MR_decl_label10(top_level__mercury_compile_mlds_back_end__maybe_dump_mlds_6_0, 2,3,4,5,8,10,11,12,13,14)
MR_decl_label10(top_level__mercury_compile_mlds_back_end__maybe_dump_mlds_6_0, 15,16,6,17,20,22,23,24,25,26)
MR_decl_label10(top_level__mercury_compile_mlds_back_end__maybe_dump_mlds_6_0, 27,28,29,30,31,32,33,34,35,38)
MR_decl_label10(top_level__mercury_compile_mlds_back_end__maybe_dump_mlds_6_0, 39,40,41,42,37,44,45,47,48,49)
MR_decl_label4(top_level__mercury_compile_mlds_back_end__maybe_dump_mlds_6_0, 50,51,52,54)
MR_decl_label8(top_level__mercury_compile_mlds_back_end__maybe_mark_static_terms_6_0, 2,3,5,6,7,10,11,12)
MR_decl_label6(top_level__mercury_compile_mlds_back_end__maybe_mlds_to_gcc_5_0, 2,3,4,5,6,7)
MR_decl_label10(top_level__mercury_compile_mlds_back_end__mlds_backend_7_0, 2,3,4,5,6,8,9,10,11,12)
MR_decl_label10(top_level__mercury_compile_mlds_back_end__mlds_backend_7_0, 13,14,15,16,17,18,19,20,21,22)
MR_decl_label10(top_level__mercury_compile_mlds_back_end__mlds_backend_7_0, 23,24,25,26,27,28,29,31,32,33)
MR_decl_label10(top_level__mercury_compile_mlds_back_end__mlds_backend_7_0, 34,30,35,36,37,41,42,38,45,46)
MR_decl_label10(top_level__mercury_compile_mlds_back_end__mlds_backend_7_0, 48,50,51,52,53,47,54,55,56,59)
MR_decl_label10(top_level__mercury_compile_mlds_back_end__mlds_backend_7_0, 60,58,62,63,136,57,67,68,69,72)
MR_decl_label10(top_level__mercury_compile_mlds_back_end__mlds_backend_7_0, 73,71,75,76,78,79,80,81,82,83)
MR_decl_label1(top_level__mercury_compile_mlds_back_end__mlds_backend_7_0, 84)
MR_decl_label8(top_level__mercury_compile_mlds_back_end__mlds_gen_rtti_data_3_0, 2,3,4,5,6,7,8,9)
MR_decl_label6(top_level__mercury_compile_mlds_back_end__mlds_to_csharp_4_0, 2,3,4,5,6,7)
MR_decl_label5(top_level__mercury_compile_mlds_back_end__mlds_to_high_level_c_4_0, 2,3,4,5,6)
MR_decl_label5(top_level__mercury_compile_mlds_back_end__mlds_to_il_assembler_4_0, 2,3,4,5,6)
MR_decl_label6(top_level__mercury_compile_mlds_back_end__mlds_to_java_4_0, 2,3,4,5,6,7)
MR_decl_label2(fn__top_level__mercury_compile_mlds_back_end__mlds_has_main_1_0, 3,2)
MR_def_extern_entry(fn__top_level__mercury_compile_mlds_back_end__mlds_has_main_1_0)
MR_def_extern_entry(top_level__mercury_compile_mlds_back_end__maybe_mark_static_terms_6_0)
MR_decl_static(top_level__mercury_compile_mlds_back_end__maybe_add_trail_ops_6_0)
MR_decl_static(top_level__mercury_compile_mlds_back_end__maybe_add_heap_ops_6_0)
MR_decl_static(top_level__mercury_compile_mlds_back_end__mlds_gen_rtti_data_3_0)
MR_decl_static(top_level__mercury_compile_mlds_back_end__maybe_dump_mlds_6_0)
MR_def_extern_entry(top_level__mercury_compile_mlds_back_end__mlds_backend_7_0)
MR_def_extern_entry(top_level__mercury_compile_mlds_back_end__mlds_to_high_level_c_4_0)
MR_def_extern_entry(top_level__mercury_compile_mlds_back_end__mlds_to_java_4_0)
MR_def_extern_entry(top_level__mercury_compile_mlds_back_end__mlds_to_csharp_4_0)
MR_def_extern_entry(top_level__mercury_compile_mlds_back_end__maybe_mlds_to_gcc_5_0)
MR_def_extern_entry(top_level__mercury_compile_mlds_back_end__mlds_to_il_assembler_4_0)
MR_decl_static(top_level__mercury_compile_mlds_back_end__IntroducedFrom__pred__mlds_backend__111__1_2_0)

static const MR_UserClosureId
mercury_data__closure_layout__top_level__mercury_compile_mlds_back_end__maybe_mark_static_terms_6_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_module_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_proc_info_0;
static const MR_UserClosureId
mercury_data__closure_layout__top_level__mercury_compile_mlds_back_end__maybe_add_heap_ops_6_0_1;
static const struct mercury_type_0 mercury_common_0[2] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__top_level__mercury_compile_mlds_back_end__maybe_mark_static_terms_6_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(hlds__hlds_pred, proc_info),
MR_CTOR0_ADDR(hlds__hlds_pred, proc_info)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__top_level__mercury_compile_mlds_back_end__maybe_add_heap_ops_6_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(hlds__hlds_pred, proc_info),
MR_CTOR0_ADDR(hlds__hlds_pred, proc_info)
}
},
};

MR_decl_entry(hlds__mark_static_terms__mark_static_terms_3_0);
MR_decl_entry(ml_backend__add_heap_ops__add_heap_ops_3_0);
static const struct mercury_type_1 mercury_common_1[2] =
{
{
MR_COMMON(0,0),
MR_ENTRY_AP(hlds__mark_static_terms__mark_static_terms_3_0),
0
},
{
MR_COMMON(0,1),
MR_ENTRY_AP(ml_backend__add_heap_ops__add_heap_ops_3_0),
0
},
};

static const struct mercury_type_2 mercury_common_2[2] =
{
{
MR_TAG_COMMON(0,1,0)
},
{
MR_TAG_COMMON(0,1,1)
},
};

static const MR_UserClosureId
mercury_data__closure_layout__top_level__mercury_compile_mlds_back_end__maybe_add_trail_ops_6_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;
static const struct mercury_type_3 mercury_common_3[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__top_level__mercury_compile_mlds_back_end__maybe_add_trail_ops_6_0_1,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_BOOL_CTOR_ADDR,
MR_BOOL_CTOR_ADDR,
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(hlds__hlds_pred, proc_info),
MR_CTOR0_ADDR(hlds__hlds_pred, proc_info)
}
},
};

static const struct mercury_type_4 mercury_common_4[1] =
{
{
4,
MR_string_const("Sorry, not implemented: \140--high-level-code\' and just one of \140--reclaim-heap-on-semidet-failure\' and \140--reclaim-heap-on-nondet-failure\'. Use \140--(no-)reclaim-heap" "-on-failure\' instead.", 181)
},
};

extern const MR_BaseTypeclassInfo mercury_data_base_typeclass_info_pprint__doc__arity1__pprint__doc__arity0__[];
extern const MR_TypeCtorInfo_Struct mercury_data_pprint__type_ctor_info_doc_0;
static const struct mercury_type_5 mercury_common_5[2] =
{
{
{
MR_TAG_COMMON(3,4,0),
MR_tbmkword(0, 0)
}
},
{
{
(MR_Word *) &mercury_data_base_typeclass_info_pprint__doc__arity1__pprint__doc__arity0__,
MR_CTOR0_ADDR(pprint, doc)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__top_level__mercury_compile_mlds_back_end__mlds_backend_7_0_1;
static const struct mercury_type_6 mercury_common_6[1] =
{
{
(MR_Word *) &mercury_data__closure_layout__top_level__mercury_compile_mlds_back_end__mlds_backend_7_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_BOOL_CTOR_ADDR,
MR_BOOL_CTOR_ADDR
},
};

static const struct mercury_type_7 mercury_common_7[1] =
{
{
0
},
};


static const MR_UserClosureId
mercury_data__closure_layout__top_level__mercury_compile_mlds_back_end__mlds_backend_7_0_1 = {
{
MR_PREDICATE,
"top_level.mercury_compile_mlds_back_end",
"top_level.mercury_compile_mlds_back_end",
"lambda_mercury_compile_mlds_back_end_m_111",
2,
0
},
"top_level.mercury_compile_mlds_back_end",
"mercury_compile_mlds_back_end.m",
111,
"18"
};

static const MR_UserClosureId
mercury_data__closure_layout__top_level__mercury_compile_mlds_back_end__maybe_add_heap_ops_6_0_1 = {
{
MR_PREDICATE,
"ml_backend.add_heap_ops",
"ml_backend.add_heap_ops",
"add_heap_ops",
3,
0
},
"top_level.mercury_compile_mlds_back_end",
"mercury_compile_mlds_back_end.m",
350,
"37"
};

static const MR_UserClosureId
mercury_data__closure_layout__top_level__mercury_compile_mlds_back_end__maybe_add_trail_ops_6_0_1 = {
{
MR_PREDICATE,
"ml_backend.add_trail_ops",
"ml_backend.add_trail_ops",
"add_trail_ops",
5,
0
},
"top_level.mercury_compile_mlds_back_end",
"mercury_compile_mlds_back_end.m",
316,
"50"
};

static const MR_UserClosureId
mercury_data__closure_layout__top_level__mercury_compile_mlds_back_end__maybe_mark_static_terms_6_0_1 = {
{
MR_PREDICATE,
"hlds.mark_static_terms",
"hlds.mark_static_terms",
"mark_static_terms",
3,
0
},
"top_level.mercury_compile_mlds_back_end",
"mercury_compile_mlds_back_end.m",
264,
"18"
};


MR_decl_entry(ml_backend__ml_util__defns_contain_main_1_0);

MR_BEGIN_MODULE(top_level__mercury_compile_mlds_back_end_module0)
	MR_init_entry1(fn__top_level__mercury_compile_mlds_back_end__mlds_has_main_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__top_level__mercury_compile_mlds_back_end__mlds_has_main_1_0);
	MR_init_label2(fn__top_level__mercury_compile_mlds_back_end__mlds_has_main_1_0,3,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mlds_has_main'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__top_level__mercury_compile_mlds_back_end__mlds_has_main_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r1 = MR_tfield(0, MR_r1, 4);
	MR_np_call_localret_ent(ml_backend__ml_util__defns_contain_main_1_0,
		fn__top_level__mercury_compile_mlds_back_end__mlds_has_main_1_0_i3);
MR_def_label(fn__top_level__mercury_compile_mlds_back_end__mlds_has_main_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__top_level__mercury_compile_mlds_back_end__mlds_has_main_1_0_i2);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(1);
MR_def_label(fn__top_level__mercury_compile_mlds_back_end__mlds_has_main_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_module__module_info_get_globals_2_0);
MR_decl_entry(libs__globals__lookup_bool_option_3_0);
MR_decl_entry(libs__file_util__maybe_write_string_4_0);
MR_decl_entry(libs__file_util__maybe_flush_output_3_0);
MR_decl_entry(hlds__passes_aux__process_all_nonimported_procs_3_0);
MR_decl_entry(libs__file_util__maybe_report_stats_3_0);

MR_BEGIN_MODULE(top_level__mercury_compile_mlds_back_end_module1)
	MR_init_entry1(top_level__mercury_compile_mlds_back_end__maybe_mark_static_terms_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__top_level__mercury_compile_mlds_back_end__maybe_mark_static_terms_6_0);
	MR_init_label8(top_level__mercury_compile_mlds_back_end__maybe_mark_static_terms_6_0,2,3,5,6,7,10,11,12)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'maybe_mark_static_terms'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__top_level__mercury_compile_mlds_back_end__maybe_mark_static_terms_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(3) = MR_r1;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		top_level__mercury_compile_mlds_back_end__maybe_mark_static_terms_6_0_i2);
MR_def_label(top_level__mercury_compile_mlds_back_end__maybe_mark_static_terms_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 429;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		top_level__mercury_compile_mlds_back_end__maybe_mark_static_terms_6_0_i3);
MR_def_label(top_level__mercury_compile_mlds_back_end__maybe_mark_static_terms_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(top_level__mercury_compile_mlds_back_end__maybe_mark_static_terms_6_0_i5);
	}
	MR_r1 = MR_sv(2);
	MR_decr_sp_and_return(4);
MR_def_label(top_level__mercury_compile_mlds_back_end__maybe_mark_static_terms_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Word) MR_string_const("% Marking static ground terms...\n", 33);
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		top_level__mercury_compile_mlds_back_end__maybe_mark_static_terms_6_0_i6);
MR_def_label(top_level__mercury_compile_mlds_back_end__maybe_mark_static_terms_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(libs__file_util__maybe_flush_output_3_0,
		top_level__mercury_compile_mlds_back_end__maybe_mark_static_terms_6_0_i7);
MR_def_label(top_level__mercury_compile_mlds_back_end__maybe_mark_static_terms_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(hlds__passes_aux__process_all_nonimported_procs_3_0,
		top_level__mercury_compile_mlds_back_end__maybe_mark_static_terms_6_0_i10);
MR_def_label(top_level__mercury_compile_mlds_back_end__maybe_mark_static_terms_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("% done.\n", 8);
	}
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		top_level__mercury_compile_mlds_back_end__maybe_mark_static_terms_6_0_i11);
MR_def_label(top_level__mercury_compile_mlds_back_end__maybe_mark_static_terms_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(libs__file_util__maybe_report_stats_3_0,
		top_level__mercury_compile_mlds_back_end__maybe_mark_static_terms_6_0_i12);
MR_def_label(top_level__mercury_compile_mlds_back_end__maybe_mark_static_terms_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(libs__globals__get_target_2_0);
MR_decl_entry(ml_backend__add_trail_ops__add_trail_ops_5_0);

MR_BEGIN_MODULE(top_level__mercury_compile_mlds_back_end_module2)
	MR_init_entry1(top_level__mercury_compile_mlds_back_end__maybe_add_trail_ops_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__top_level__mercury_compile_mlds_back_end__maybe_add_trail_ops_6_0);
	MR_init_label10(top_level__mercury_compile_mlds_back_end__maybe_add_trail_ops_6_0,2,3,21,5,6,9,10,13,12,11)
	MR_init_label5(top_level__mercury_compile_mlds_back_end__maybe_add_trail_ops_6_0,14,15,18,19,20)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'maybe_add_trail_ops'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(top_level__mercury_compile_mlds_back_end__maybe_add_trail_ops_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(5) = MR_r1;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(4) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		top_level__mercury_compile_mlds_back_end__maybe_add_trail_ops_6_0_i2);
MR_def_label(top_level__mercury_compile_mlds_back_end__maybe_add_trail_ops_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r2 = (MR_Integer) 205;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		top_level__mercury_compile_mlds_back_end__maybe_add_trail_ops_6_0_i3);
MR_def_label(top_level__mercury_compile_mlds_back_end__maybe_add_trail_ops_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(top_level__mercury_compile_mlds_back_end__maybe_add_trail_ops_6_0_i5);
	}
MR_def_label(top_level__mercury_compile_mlds_back_end__maybe_add_trail_ops_6_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_decr_sp_and_return(6);
MR_def_label(top_level__mercury_compile_mlds_back_end__maybe_add_trail_ops_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Integer) 270;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		top_level__mercury_compile_mlds_back_end__maybe_add_trail_ops_6_0_i6);
MR_def_label(top_level__mercury_compile_mlds_back_end__maybe_add_trail_ops_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(top_level__mercury_compile_mlds_back_end__maybe_add_trail_ops_6_0_i21);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Integer) 380;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		top_level__mercury_compile_mlds_back_end__maybe_add_trail_ops_6_0_i9);
MR_def_label(top_level__mercury_compile_mlds_back_end__maybe_add_trail_ops_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(libs__globals__get_target_2_0,
		top_level__mercury_compile_mlds_back_end__maybe_add_trail_ops_6_0_i10);
MR_def_label(top_level__mercury_compile_mlds_back_end__maybe_add_trail_ops_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(top_level__mercury_compile_mlds_back_end__maybe_add_trail_ops_6_0_i12);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Integer) 439;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		top_level__mercury_compile_mlds_back_end__maybe_add_trail_ops_6_0_i13);
MR_def_label(top_level__mercury_compile_mlds_back_end__maybe_add_trail_ops_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = (MR_Word) MR_string_const("% Adding trailing operations...\n", 32);
	MR_GOTO_LAB(top_level__mercury_compile_mlds_back_end__maybe_add_trail_ops_6_0_i11);
MR_def_label(top_level__mercury_compile_mlds_back_end__maybe_add_trail_ops_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_sv(3) = (MR_Integer) 0;
	MR_r2 = (MR_Word) MR_string_const("% Adding trailing operations...\n", 32);
MR_def_label(top_level__mercury_compile_mlds_back_end__maybe_add_trail_ops_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		top_level__mercury_compile_mlds_back_end__maybe_add_trail_ops_6_0_i14);
MR_def_label(top_level__mercury_compile_mlds_back_end__maybe_add_trail_ops_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(libs__file_util__maybe_flush_output_3_0,
		top_level__mercury_compile_mlds_back_end__maybe_add_trail_ops_6_0_i15);
MR_def_label(top_level__mercury_compile_mlds_back_end__maybe_add_trail_ops_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(3,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__add_trail_ops__add_trail_ops_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_sv(4);
	}
	MR_np_call_localret_ent(hlds__passes_aux__process_all_nonimported_procs_3_0,
		top_level__mercury_compile_mlds_back_end__maybe_add_trail_ops_6_0_i18);
MR_def_label(top_level__mercury_compile_mlds_back_end__maybe_add_trail_ops_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("% done.\n", 8);
	}
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		top_level__mercury_compile_mlds_back_end__maybe_add_trail_ops_6_0_i19);
MR_def_label(top_level__mercury_compile_mlds_back_end__maybe_add_trail_ops_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(libs__file_util__maybe_report_stats_3_0,
		top_level__mercury_compile_mlds_back_end__maybe_add_trail_ops_6_0_i20);
MR_def_label(top_level__mercury_compile_mlds_back_end__maybe_add_trail_ops_6_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(libs__globals__get_gc_method_2_0);
MR_decl_entry(fn__libs__globals__gc_is_conservative_1_0);
MR_decl_entry(parse_tree__error_util__write_error_pieces_plain_4_0);
MR_decl_entry(io__set_exit_status_3_0);

MR_BEGIN_MODULE(top_level__mercury_compile_mlds_back_end_module3)
	MR_init_entry1(top_level__mercury_compile_mlds_back_end__maybe_add_heap_ops_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__top_level__mercury_compile_mlds_back_end__maybe_add_heap_ops_6_0);
	MR_init_label10(top_level__mercury_compile_mlds_back_end__maybe_add_heap_ops_6_0,2,3,4,5,7,6,31,9,15,16)
	MR_init_label5(top_level__mercury_compile_mlds_back_end__maybe_add_heap_ops_6_0,19,20,21,12,24)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'maybe_add_heap_ops'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(top_level__mercury_compile_mlds_back_end__maybe_add_heap_ops_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(6) = MR_r1;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(5) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		top_level__mercury_compile_mlds_back_end__maybe_add_heap_ops_6_0_i2);
MR_def_label(top_level__mercury_compile_mlds_back_end__maybe_add_heap_ops_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(libs__globals__get_gc_method_2_0,
		top_level__mercury_compile_mlds_back_end__maybe_add_heap_ops_6_0_i3);
MR_def_label(top_level__mercury_compile_mlds_back_end__maybe_add_heap_ops_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Integer) 291;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		top_level__mercury_compile_mlds_back_end__maybe_add_heap_ops_6_0_i4);
MR_def_label(top_level__mercury_compile_mlds_back_end__maybe_add_heap_ops_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Integer) 292;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		top_level__mercury_compile_mlds_back_end__maybe_add_heap_ops_6_0_i5);
MR_def_label(top_level__mercury_compile_mlds_back_end__maybe_add_heap_ops_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__libs__globals__gc_is_conservative_1_0,
		top_level__mercury_compile_mlds_back_end__maybe_add_heap_ops_6_0_i7);
MR_def_label(top_level__mercury_compile_mlds_back_end__maybe_add_heap_ops_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(top_level__mercury_compile_mlds_back_end__maybe_add_heap_ops_6_0_i6);
	}
	MR_r1 = MR_sv(5);
	MR_decr_sp_and_return(7);
MR_def_label(top_level__mercury_compile_mlds_back_end__maybe_add_heap_ops_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(3),0)) {
		MR_GOTO_LAB(top_level__mercury_compile_mlds_back_end__maybe_add_heap_ops_6_0_i9);
	}
	if (MR_INT_NE(MR_sv(4),0)) {
		MR_GOTO_LAB(top_level__mercury_compile_mlds_back_end__maybe_add_heap_ops_6_0_i9);
	}
MR_def_label(top_level__mercury_compile_mlds_back_end__maybe_add_heap_ops_6_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_decr_sp_and_return(7);
MR_def_label(top_level__mercury_compile_mlds_back_end__maybe_add_heap_ops_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(3),1)) {
		MR_GOTO_LAB(top_level__mercury_compile_mlds_back_end__maybe_add_heap_ops_6_0_i12);
	}
	if (MR_INT_NE(MR_sv(4),1)) {
		MR_GOTO_LAB(top_level__mercury_compile_mlds_back_end__maybe_add_heap_ops_6_0_i12);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = (MR_Word) MR_string_const("% Adding heap reclamation operations...\n", 40);
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		top_level__mercury_compile_mlds_back_end__maybe_add_heap_ops_6_0_i15);
MR_def_label(top_level__mercury_compile_mlds_back_end__maybe_add_heap_ops_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(libs__file_util__maybe_flush_output_3_0,
		top_level__mercury_compile_mlds_back_end__maybe_add_heap_ops_6_0_i16);
MR_def_label(top_level__mercury_compile_mlds_back_end__maybe_add_heap_ops_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,1);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(hlds__passes_aux__process_all_nonimported_procs_3_0,
		top_level__mercury_compile_mlds_back_end__maybe_add_heap_ops_6_0_i19);
MR_def_label(top_level__mercury_compile_mlds_back_end__maybe_add_heap_ops_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("% done.\n", 8);
	}
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		top_level__mercury_compile_mlds_back_end__maybe_add_heap_ops_6_0_i20);
MR_def_label(top_level__mercury_compile_mlds_back_end__maybe_add_heap_ops_6_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(libs__file_util__maybe_report_stats_3_0,
		top_level__mercury_compile_mlds_back_end__maybe_add_heap_ops_6_0_i21);
MR_def_label(top_level__mercury_compile_mlds_back_end__maybe_add_heap_ops_6_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_decr_sp_and_return(7);
MR_def_label(top_level__mercury_compile_mlds_back_end__maybe_add_heap_ops_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,5,0);
	MR_np_call_localret_ent(parse_tree__error_util__write_error_pieces_plain_4_0,
		top_level__mercury_compile_mlds_back_end__maybe_add_heap_ops_6_0_i24);
MR_def_label(top_level__mercury_compile_mlds_back_end__maybe_add_heap_ops_6_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_np_call_localret_ent(io__set_exit_status_3_0,
		top_level__mercury_compile_mlds_back_end__maybe_add_heap_ops_6_0_i31);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(backend_libs__type_ctor_info__generate_rtti_2_0);
MR_decl_entry(backend_libs__base_typeclass_info__generate_base_typeclass_info_rtti_2_0);
MR_decl_entry(backend_libs__type_class_info__generate_type_class_info_rtti_3_0);
extern const MR_TypeCtorInfo_Struct mercury_data_backend_libs__rtti__type_ctor_info_rtti_data_0;
MR_decl_entry(fn__f_108_105_115_116_95_95_43_43_2_0);
MR_decl_entry(ml_backend__rtti_to_mlds__add_rtti_datas_to_mlds_4_0);

MR_BEGIN_MODULE(top_level__mercury_compile_mlds_back_end_module4)
	MR_init_entry1(top_level__mercury_compile_mlds_back_end__mlds_gen_rtti_data_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__top_level__mercury_compile_mlds_back_end__mlds_gen_rtti_data_3_0);
	MR_init_label8(top_level__mercury_compile_mlds_back_end__mlds_gen_rtti_data_3_0,2,3,4,5,6,7,8,9)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mlds_gen_rtti_data'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(top_level__mercury_compile_mlds_back_end__mlds_gen_rtti_data_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_np_call_localret_ent(backend_libs__type_ctor_info__generate_rtti_2_0,
		top_level__mercury_compile_mlds_back_end__mlds_gen_rtti_data_3_0_i2);
MR_def_label(top_level__mercury_compile_mlds_back_end__mlds_gen_rtti_data_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(backend_libs__base_typeclass_info__generate_base_typeclass_info_rtti_2_0,
		top_level__mercury_compile_mlds_back_end__mlds_gen_rtti_data_3_0_i3);
MR_def_label(top_level__mercury_compile_mlds_back_end__mlds_gen_rtti_data_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		top_level__mercury_compile_mlds_back_end__mlds_gen_rtti_data_3_0_i4);
MR_def_label(top_level__mercury_compile_mlds_back_end__mlds_gen_rtti_data_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 264;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		top_level__mercury_compile_mlds_back_end__mlds_gen_rtti_data_3_0_i5);
MR_def_label(top_level__mercury_compile_mlds_back_end__mlds_gen_rtti_data_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(backend_libs__type_class_info__generate_type_class_info_rtti_3_0,
		top_level__mercury_compile_mlds_back_end__mlds_gen_rtti_data_3_0_i6);
MR_def_label(top_level__mercury_compile_mlds_back_end__mlds_gen_rtti_data_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = (MR_Word) MR_CTOR0_ADDR(backend_libs__rtti, rtti_data);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		top_level__mercury_compile_mlds_back_end__mlds_gen_rtti_data_3_0_i7);
MR_def_label(top_level__mercury_compile_mlds_back_end__mlds_gen_rtti_data_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		top_level__mercury_compile_mlds_back_end__mlds_gen_rtti_data_3_0_i8);
MR_def_label(top_level__mercury_compile_mlds_back_end__mlds_gen_rtti_data_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_sv(1);
	MR_tempr4 = MR_sv(6);
	MR_sv(1) = MR_tfield(0, MR_tempr4, 0);
	MR_sv(2) = MR_tfield(0, MR_tempr4, 1);
	MR_sv(7) = MR_tfield(0, MR_tempr4, 2);
	MR_tempr2 = MR_tempr4;
	MR_sv(6) = MR_tfield(0, MR_tempr2, 4);
	MR_sv(3) = MR_tfield(0, MR_tempr2, 5);
	MR_sv(4) = MR_tfield(0, MR_tempr2, 6);
	MR_sv(5) = MR_tfield(0, MR_tempr2, 7);
	MR_tempr3 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr3;
	MR_r3 = MR_tfield(0, MR_tempr2, 3);
	}
	MR_np_call_localret_ent(ml_backend__rtti_to_mlds__add_rtti_datas_to_mlds_4_0,
		top_level__mercury_compile_mlds_back_end__mlds_gen_rtti_data_3_0_i9);
MR_def_label(top_level__mercury_compile_mlds_back_end__mlds_gen_rtti_data_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 8);
	MR_tfield(0, MR_r2, 0) = MR_sv(1);
	MR_tfield(0, MR_r2, 1) = MR_sv(2);
	MR_tfield(0, MR_r2, 2) = MR_sv(7);
	MR_tfield(0, MR_r2, 3) = MR_r1;
	MR_tfield(0, MR_r2, 4) = MR_sv(6);
	MR_tfield(0, MR_r2, 5) = MR_sv(3);
	MR_tfield(0, MR_r2, 6) = MR_sv(4);
	MR_tfield(0, MR_r2, 7) = MR_sv(5);
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(libs__globals__lookup_accumulating_option_3_0);
MR_decl_entry(fn__hlds__passes_aux__stage_num_str_1_0);
MR_decl_entry(hlds__passes_aux__should_dump_stage_4_0);
MR_decl_entry(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
MR_decl_entry(ml_backend__mlds_to_c__output_c_mlds_5_0);
MR_decl_entry(fn__ml_backend__mlds__mlds_get_module_name_1_0);
MR_decl_entry(parse_tree__file_names__module_name_to_file_name_7_0);
MR_decl_entry(io__open_output_4_0);
MR_decl_entry(fn__io__error_message_1_0);
MR_decl_entry(libs__file_util__report_error_3_0);
MR_decl_entry(io__set_output_stream_4_0);
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_0;
MR_decl_entry(fn__pprint__to_doc_1_0);
MR_decl_entry(pprint__write_4_0);
MR_decl_entry(io__nl_2_0);
MR_decl_entry(io__close_output_3_0);

MR_BEGIN_MODULE(top_level__mercury_compile_mlds_back_end_module5)
	MR_init_entry1(top_level__mercury_compile_mlds_back_end__maybe_dump_mlds_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__top_level__mercury_compile_mlds_back_end__maybe_dump_mlds_6_0);
	MR_init_label10(top_level__mercury_compile_mlds_back_end__maybe_dump_mlds_6_0,2,3,4,5,8,10,11,12,13,14)
	MR_init_label10(top_level__mercury_compile_mlds_back_end__maybe_dump_mlds_6_0,15,16,6,17,20,22,23,24,25,26)
	MR_init_label10(top_level__mercury_compile_mlds_back_end__maybe_dump_mlds_6_0,27,28,29,30,31,32,33,34,35,38)
	MR_init_label10(top_level__mercury_compile_mlds_back_end__maybe_dump_mlds_6_0,39,40,41,42,37,44,45,47,48,49)
	MR_init_label4(top_level__mercury_compile_mlds_back_end__maybe_dump_mlds_6_0,50,51,52,54)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'maybe_dump_mlds'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(top_level__mercury_compile_mlds_back_end__maybe_dump_mlds_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(7) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_sv(5) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_r2 = (MR_Integer) 41;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		top_level__mercury_compile_mlds_back_end__maybe_dump_mlds_6_0_i2);
MR_def_label(top_level__mercury_compile_mlds_back_end__maybe_dump_mlds_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = (MR_Integer) 139;
	MR_np_call_localret_ent(libs__globals__lookup_accumulating_option_3_0,
		top_level__mercury_compile_mlds_back_end__maybe_dump_mlds_6_0_i3);
MR_def_label(top_level__mercury_compile_mlds_back_end__maybe_dump_mlds_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = (MR_Integer) 140;
	MR_np_call_localret_ent(libs__globals__lookup_accumulating_option_3_0,
		top_level__mercury_compile_mlds_back_end__maybe_dump_mlds_6_0_i4);
MR_def_label(top_level__mercury_compile_mlds_back_end__maybe_dump_mlds_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(fn__hlds__passes_aux__stage_num_str_1_0,
		top_level__mercury_compile_mlds_back_end__maybe_dump_mlds_6_0_i5);
MR_def_label(top_level__mercury_compile_mlds_back_end__maybe_dump_mlds_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__passes_aux__should_dump_stage_4_0,
		top_level__mercury_compile_mlds_back_end__maybe_dump_mlds_6_0_i8);
MR_def_label(top_level__mercury_compile_mlds_back_end__maybe_dump_mlds_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(top_level__mercury_compile_mlds_back_end__maybe_dump_mlds_6_0_i6);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_string_const("% Dumping out MLDS as C...\n", 27);
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		top_level__mercury_compile_mlds_back_end__maybe_dump_mlds_6_0_i10);
MR_def_label(top_level__mercury_compile_mlds_back_end__maybe_dump_mlds_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(libs__file_util__maybe_flush_output_3_0,
		top_level__mercury_compile_mlds_back_end__maybe_dump_mlds_6_0_i11);
MR_def_label(top_level__mercury_compile_mlds_back_end__maybe_dump_mlds_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("-", 1);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		top_level__mercury_compile_mlds_back_end__maybe_dump_mlds_6_0_i12);
MR_def_label(top_level__mercury_compile_mlds_back_end__maybe_dump_mlds_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		top_level__mercury_compile_mlds_back_end__maybe_dump_mlds_6_0_i13);
MR_def_label(top_level__mercury_compile_mlds_back_end__maybe_dump_mlds_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("_dump.", 6);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		top_level__mercury_compile_mlds_back_end__maybe_dump_mlds_6_0_i14);
MR_def_label(top_level__mercury_compile_mlds_back_end__maybe_dump_mlds_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_c__output_c_mlds_5_0,
		top_level__mercury_compile_mlds_back_end__maybe_dump_mlds_6_0_i15);
MR_def_label(top_level__mercury_compile_mlds_back_end__maybe_dump_mlds_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_string_const("% done.\n", 8);
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		top_level__mercury_compile_mlds_back_end__maybe_dump_mlds_6_0_i16);
MR_def_label(top_level__mercury_compile_mlds_back_end__maybe_dump_mlds_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_GOTO_LAB(top_level__mercury_compile_mlds_back_end__maybe_dump_mlds_6_0_i17);
MR_def_label(top_level__mercury_compile_mlds_back_end__maybe_dump_mlds_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
MR_def_label(top_level__mercury_compile_mlds_back_end__maybe_dump_mlds_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r3;
	MR_sv(3) = MR_r2;
	MR_np_call_localret_ent(hlds__passes_aux__should_dump_stage_4_0,
		top_level__mercury_compile_mlds_back_end__maybe_dump_mlds_6_0_i20);
MR_def_label(top_level__mercury_compile_mlds_back_end__maybe_dump_mlds_6_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(top_level__mercury_compile_mlds_back_end__maybe_dump_mlds_6_0_i54);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_string_const("% Dumping out raw MLDS...\n", 26);
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		top_level__mercury_compile_mlds_back_end__maybe_dump_mlds_6_0_i22);
MR_def_label(top_level__mercury_compile_mlds_back_end__maybe_dump_mlds_6_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_get_module_name_1_0,
		top_level__mercury_compile_mlds_back_end__maybe_dump_mlds_6_0_i23);
MR_def_label(top_level__mercury_compile_mlds_back_end__maybe_dump_mlds_6_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Word) MR_string_const(".mlds_dump", 10);
	MR_r4 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(parse_tree__file_names__module_name_to_file_name_7_0,
		top_level__mercury_compile_mlds_back_end__maybe_dump_mlds_6_0_i24);
MR_def_label(top_level__mercury_compile_mlds_back_end__maybe_dump_mlds_6_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("-", 1);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		top_level__mercury_compile_mlds_back_end__maybe_dump_mlds_6_0_i25);
MR_def_label(top_level__mercury_compile_mlds_back_end__maybe_dump_mlds_6_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		top_level__mercury_compile_mlds_back_end__maybe_dump_mlds_6_0_i26);
MR_def_label(top_level__mercury_compile_mlds_back_end__maybe_dump_mlds_6_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(".", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		top_level__mercury_compile_mlds_back_end__maybe_dump_mlds_6_0_i27);
MR_def_label(top_level__mercury_compile_mlds_back_end__maybe_dump_mlds_6_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		top_level__mercury_compile_mlds_back_end__maybe_dump_mlds_6_0_i28);
MR_def_label(top_level__mercury_compile_mlds_back_end__maybe_dump_mlds_6_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = (MR_Integer) 41;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		top_level__mercury_compile_mlds_back_end__maybe_dump_mlds_6_0_i29);
MR_def_label(top_level__mercury_compile_mlds_back_end__maybe_dump_mlds_6_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 51;
	}
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		top_level__mercury_compile_mlds_back_end__maybe_dump_mlds_6_0_i30);
MR_def_label(top_level__mercury_compile_mlds_back_end__maybe_dump_mlds_6_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = (MR_Word) MR_string_const("% Dumping out MLDS to \140", 23);
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		top_level__mercury_compile_mlds_back_end__maybe_dump_mlds_6_0_i31);
MR_def_label(top_level__mercury_compile_mlds_back_end__maybe_dump_mlds_6_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		top_level__mercury_compile_mlds_back_end__maybe_dump_mlds_6_0_i32);
MR_def_label(top_level__mercury_compile_mlds_back_end__maybe_dump_mlds_6_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_r2 = (MR_Word) MR_string_const("\'...", 4);
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		top_level__mercury_compile_mlds_back_end__maybe_dump_mlds_6_0_i33);
MR_def_label(top_level__mercury_compile_mlds_back_end__maybe_dump_mlds_6_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(libs__file_util__maybe_flush_output_3_0,
		top_level__mercury_compile_mlds_back_end__maybe_dump_mlds_6_0_i34);
MR_def_label(top_level__mercury_compile_mlds_back_end__maybe_dump_mlds_6_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(io__open_output_4_0,
		top_level__mercury_compile_mlds_back_end__maybe_dump_mlds_6_0_i35);
MR_def_label(top_level__mercury_compile_mlds_back_end__maybe_dump_mlds_6_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(top_level__mercury_compile_mlds_back_end__maybe_dump_mlds_6_0_i37);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	}
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		top_level__mercury_compile_mlds_back_end__maybe_dump_mlds_6_0_i38);
MR_def_label(top_level__mercury_compile_mlds_back_end__maybe_dump_mlds_6_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(fn__io__error_message_1_0,
		top_level__mercury_compile_mlds_back_end__maybe_dump_mlds_6_0_i39);
MR_def_label(top_level__mercury_compile_mlds_back_end__maybe_dump_mlds_6_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\' for output: ", 14);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		top_level__mercury_compile_mlds_back_end__maybe_dump_mlds_6_0_i40);
MR_def_label(top_level__mercury_compile_mlds_back_end__maybe_dump_mlds_6_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		top_level__mercury_compile_mlds_back_end__maybe_dump_mlds_6_0_i41);
MR_def_label(top_level__mercury_compile_mlds_back_end__maybe_dump_mlds_6_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("can\'t open file \140", 17);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		top_level__mercury_compile_mlds_back_end__maybe_dump_mlds_6_0_i42);
MR_def_label(top_level__mercury_compile_mlds_back_end__maybe_dump_mlds_6_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(libs__file_util__report_error_3_0,
		top_level__mercury_compile_mlds_back_end__maybe_dump_mlds_6_0_i52);
MR_def_label(top_level__mercury_compile_mlds_back_end__maybe_dump_mlds_6_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_tfield(0, MR_r1, 0);
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(io__set_output_stream_4_0,
		top_level__mercury_compile_mlds_back_end__maybe_dump_mlds_6_0_i44);
MR_def_label(top_level__mercury_compile_mlds_back_end__maybe_dump_mlds_6_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__pprint__to_doc_1_0,
		top_level__mercury_compile_mlds_back_end__maybe_dump_mlds_6_0_i45);
MR_def_label(top_level__mercury_compile_mlds_back_end__maybe_dump_mlds_6_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,5,1);
	MR_r2 = (MR_Integer) 80;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(pprint__write_4_0,
		top_level__mercury_compile_mlds_back_end__maybe_dump_mlds_6_0_i47);
MR_def_label(top_level__mercury_compile_mlds_back_end__maybe_dump_mlds_6_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		top_level__mercury_compile_mlds_back_end__maybe_dump_mlds_6_0_i48);
MR_def_label(top_level__mercury_compile_mlds_back_end__maybe_dump_mlds_6_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(io__set_output_stream_4_0,
		top_level__mercury_compile_mlds_back_end__maybe_dump_mlds_6_0_i49);
MR_def_label(top_level__mercury_compile_mlds_back_end__maybe_dump_mlds_6_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(io__close_output_3_0,
		top_level__mercury_compile_mlds_back_end__maybe_dump_mlds_6_0_i50);
MR_def_label(top_level__mercury_compile_mlds_back_end__maybe_dump_mlds_6_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_r2 = (MR_Word) MR_string_const(" done.\n", 7);
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		top_level__mercury_compile_mlds_back_end__maybe_dump_mlds_6_0_i51);
MR_def_label(top_level__mercury_compile_mlds_back_end__maybe_dump_mlds_6_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(libs__file_util__maybe_report_stats_3_0,
		top_level__mercury_compile_mlds_back_end__maybe_dump_mlds_6_0_i52);
MR_def_label(top_level__mercury_compile_mlds_back_end__maybe_dump_mlds_6_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_string_const("% done.\n", 8);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(libs__file_util__maybe_write_string_4_0);
MR_def_label(top_level__mercury_compile_mlds_back_end__maybe_dump_mlds_6_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(top_level__mercury_compile_front_end__maybe_simplify_10_0);
MR_decl_entry(fn__parse_tree__error_util__contains_errors_2_0);
MR_decl_entry(require__expect_4_0);
MR_decl_entry(hlds__passes_aux__maybe_dump_hlds_7_0);
MR_decl_entry(top_level__mercury_compile_llds_back_end__map_args_to_regs_6_0);
MR_decl_entry(ml_backend__ml_proc_gen__ml_code_gen_3_0);
MR_decl_entry(ml_backend__ml_tailcall__ml_mark_tailcalls_4_0);
MR_decl_entry(ml_backend__ml_tailcall__ml_warn_tailcalls_4_0);
MR_decl_entry(libs__globals__set_option_4_0);
MR_decl_entry(ml_backend__ml_optimize__mlds_optimize_3_0);
MR_decl_entry(ml_backend__ml_elim_nested__ml_elim_nested_4_1);
MR_decl_entry(ml_backend__ml_elim_nested__ml_elim_nested_4_0);

MR_BEGIN_MODULE(top_level__mercury_compile_mlds_back_end_module6)
	MR_init_entry1(top_level__mercury_compile_mlds_back_end__mlds_backend_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__top_level__mercury_compile_mlds_back_end__mlds_backend_7_0);
	MR_init_label10(top_level__mercury_compile_mlds_back_end__mlds_backend_7_0,2,3,4,5,6,8,9,10,11,12)
	MR_init_label10(top_level__mercury_compile_mlds_back_end__mlds_backend_7_0,13,14,15,16,17,18,19,20,21,22)
	MR_init_label10(top_level__mercury_compile_mlds_back_end__mlds_backend_7_0,23,24,25,26,27,28,29,31,32,33)
	MR_init_label10(top_level__mercury_compile_mlds_back_end__mlds_backend_7_0,34,30,35,36,37,41,42,38,45,46)
	MR_init_label10(top_level__mercury_compile_mlds_back_end__mlds_backend_7_0,48,50,51,52,53,47,54,55,56,59)
	MR_init_label10(top_level__mercury_compile_mlds_back_end__mlds_backend_7_0,60,58,62,63,136,57,67,68,69,72)
	MR_init_label10(top_level__mercury_compile_mlds_back_end__mlds_backend_7_0,73,71,75,76,78,79,80,81,82,83)
	MR_init_label1(top_level__mercury_compile_mlds_back_end__mlds_backend_7_0,84)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mlds_backend'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__top_level__mercury_compile_mlds_back_end__mlds_backend_7_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r1;
	MR_sv(7) = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		top_level__mercury_compile_mlds_back_end__mlds_backend_7_0_i2);
MR_def_label(top_level__mercury_compile_mlds_back_end__mlds_backend_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r2 = (MR_Integer) 41;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		top_level__mercury_compile_mlds_back_end__mlds_backend_7_0_i3);
MR_def_label(top_level__mercury_compile_mlds_back_end__mlds_backend_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 51;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		top_level__mercury_compile_mlds_back_end__mlds_backend_7_0_i4);
MR_def_label(top_level__mercury_compile_mlds_back_end__mlds_backend_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = (MR_Integer) 4;
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_tempr1;
	MR_r6 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(top_level__mercury_compile_front_end__maybe_simplify_10_0,
		top_level__mercury_compile_mlds_back_end__mlds_backend_7_0_i5);
MR_def_label(top_level__mercury_compile_mlds_back_end__mlds_backend_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__parse_tree__error_util__contains_errors_2_0,
		top_level__mercury_compile_mlds_back_end__mlds_backend_7_0_i6);
MR_def_label(top_level__mercury_compile_mlds_back_end__mlds_backend_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(6,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(top_level__mercury_compile_mlds_back_end__IntroducedFrom__pred__mlds_backend__111__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tfield(0, MR_tempr1, 4) = (MR_Integer) 0;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("top_level.mercury_compile_mlds_back_end", 39);
	MR_r3 = (MR_Word) MR_string_const("predicate \140top_level.mercury_compile_mlds_back_end.mlds_backend\'/7", 66);
	MR_r4 = (MR_Word) MR_string_const("simplify has errors", 19);
	}
	MR_np_call_localret_ent(require__expect_4_0,
		top_level__mercury_compile_mlds_back_end__mlds_backend_7_0_i8);
MR_def_label(top_level__mercury_compile_mlds_back_end__mlds_backend_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_r2 = (MR_Integer) 405;
	MR_r3 = (MR_Word) MR_string_const("ml_backend_simplify", 19);
	MR_r4 = MR_sv(7);
	MR_np_call_localret_ent(hlds__passes_aux__maybe_dump_hlds_7_0,
		top_level__mercury_compile_mlds_back_end__mlds_backend_7_0_i9);
MR_def_label(top_level__mercury_compile_mlds_back_end__mlds_backend_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(top_level__mercury_compile_mlds_back_end__maybe_add_trail_ops_6_0,
		top_level__mercury_compile_mlds_back_end__mlds_backend_7_0_i10);
MR_def_label(top_level__mercury_compile_mlds_back_end__mlds_backend_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r2 = (MR_Integer) 410;
	MR_r3 = (MR_Word) MR_string_const("add_trail_ops", 13);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__passes_aux__maybe_dump_hlds_7_0,
		top_level__mercury_compile_mlds_back_end__mlds_backend_7_0_i11);
MR_def_label(top_level__mercury_compile_mlds_back_end__mlds_backend_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(top_level__mercury_compile_mlds_back_end__maybe_add_heap_ops_6_0,
		top_level__mercury_compile_mlds_back_end__mlds_backend_7_0_i12);
MR_def_label(top_level__mercury_compile_mlds_back_end__mlds_backend_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r2 = (MR_Integer) 415;
	MR_r3 = (MR_Word) MR_string_const("add_heap_ops", 12);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__passes_aux__maybe_dump_hlds_7_0,
		top_level__mercury_compile_mlds_back_end__mlds_backend_7_0_i13);
MR_def_label(top_level__mercury_compile_mlds_back_end__mlds_backend_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(top_level__mercury_compile_mlds_back_end__maybe_mark_static_terms_6_0,
		top_level__mercury_compile_mlds_back_end__mlds_backend_7_0_i14);
MR_def_label(top_level__mercury_compile_mlds_back_end__mlds_backend_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r2 = (MR_Integer) 420;
	MR_r3 = (MR_Word) MR_string_const("mark_static", 11);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__passes_aux__maybe_dump_hlds_7_0,
		top_level__mercury_compile_mlds_back_end__mlds_backend_7_0_i15);
MR_def_label(top_level__mercury_compile_mlds_back_end__mlds_backend_7_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(top_level__mercury_compile_llds_back_end__map_args_to_regs_6_0,
		top_level__mercury_compile_mlds_back_end__mlds_backend_7_0_i16);
MR_def_label(top_level__mercury_compile_mlds_back_end__mlds_backend_7_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r2 = (MR_Integer) 425;
	MR_r3 = (MR_Word) MR_string_const("args_to_regs", 12);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__passes_aux__maybe_dump_hlds_7_0,
		top_level__mercury_compile_mlds_back_end__mlds_backend_7_0_i17);
MR_def_label(top_level__mercury_compile_mlds_back_end__mlds_backend_7_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Word) MR_string_const("% Converting HLDS to MLDS...\n", 29);
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		top_level__mercury_compile_mlds_back_end__mlds_backend_7_0_i18);
MR_def_label(top_level__mercury_compile_mlds_back_end__mlds_backend_7_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(ml_backend__ml_proc_gen__ml_code_gen_3_0,
		top_level__mercury_compile_mlds_back_end__mlds_backend_7_0_i19);
MR_def_label(top_level__mercury_compile_mlds_back_end__mlds_backend_7_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_sv(7) = MR_r2;
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Word) MR_string_const("% done.\n", 8);
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		top_level__mercury_compile_mlds_back_end__mlds_backend_7_0_i20);
MR_def_label(top_level__mercury_compile_mlds_back_end__mlds_backend_7_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(libs__file_util__maybe_report_stats_3_0,
		top_level__mercury_compile_mlds_back_end__mlds_backend_7_0_i21);
MR_def_label(top_level__mercury_compile_mlds_back_end__mlds_backend_7_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Integer) 499;
	MR_r3 = (MR_Word) MR_string_const("final", 5);
	MR_r4 = MR_sv(6);
	MR_np_call_localret_ent(hlds__passes_aux__maybe_dump_hlds_7_0,
		top_level__mercury_compile_mlds_back_end__mlds_backend_7_0_i22);
MR_def_label(top_level__mercury_compile_mlds_back_end__mlds_backend_7_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(7);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = (MR_Word) MR_string_const("initial", 7);
	MR_np_call_localret_ent(top_level__mercury_compile_mlds_back_end__maybe_dump_mlds_6_0,
		top_level__mercury_compile_mlds_back_end__mlds_backend_7_0_i23);
MR_def_label(top_level__mercury_compile_mlds_back_end__mlds_backend_7_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Word) MR_string_const("% Generating RTTI data...\n", 26);
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		top_level__mercury_compile_mlds_back_end__mlds_backend_7_0_i24);
MR_def_label(top_level__mercury_compile_mlds_back_end__mlds_backend_7_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(top_level__mercury_compile_mlds_back_end__mlds_gen_rtti_data_3_0,
		top_level__mercury_compile_mlds_back_end__mlds_backend_7_0_i25);
MR_def_label(top_level__mercury_compile_mlds_back_end__mlds_backend_7_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Word) MR_string_const("% done.\n", 8);
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		top_level__mercury_compile_mlds_back_end__mlds_backend_7_0_i26);
MR_def_label(top_level__mercury_compile_mlds_back_end__mlds_backend_7_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(libs__file_util__maybe_report_stats_3_0,
		top_level__mercury_compile_mlds_back_end__mlds_backend_7_0_i27);
MR_def_label(top_level__mercury_compile_mlds_back_end__mlds_backend_7_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(6);
	MR_r3 = (MR_Integer) 10;
	MR_r4 = (MR_Word) MR_string_const("rtti", 4);
	MR_np_call_localret_ent(top_level__mercury_compile_mlds_back_end__maybe_dump_mlds_6_0,
		top_level__mercury_compile_mlds_back_end__mlds_backend_7_0_i28);
MR_def_label(top_level__mercury_compile_mlds_back_end__mlds_backend_7_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 436;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		top_level__mercury_compile_mlds_back_end__mlds_backend_7_0_i29);
MR_def_label(top_level__mercury_compile_mlds_back_end__mlds_backend_7_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(top_level__mercury_compile_mlds_back_end__mlds_backend_7_0_i31);
	}
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(8) = MR_sv(6);
	MR_GOTO_LAB(top_level__mercury_compile_mlds_back_end__mlds_backend_7_0_i30);
MR_def_label(top_level__mercury_compile_mlds_back_end__mlds_backend_7_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Word) MR_string_const("% Detecting tail calls...\n", 26);
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		top_level__mercury_compile_mlds_back_end__mlds_backend_7_0_i32);
MR_def_label(top_level__mercury_compile_mlds_back_end__mlds_backend_7_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(ml_backend__ml_tailcall__ml_mark_tailcalls_4_0,
		top_level__mercury_compile_mlds_back_end__mlds_backend_7_0_i33);
MR_def_label(top_level__mercury_compile_mlds_back_end__mlds_backend_7_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Word) MR_string_const("% done.\n", 8);
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		top_level__mercury_compile_mlds_back_end__mlds_backend_7_0_i34);
MR_def_label(top_level__mercury_compile_mlds_back_end__mlds_backend_7_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
MR_def_label(top_level__mercury_compile_mlds_back_end__mlds_backend_7_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(libs__file_util__maybe_report_stats_3_0,
		top_level__mercury_compile_mlds_back_end__mlds_backend_7_0_i35);
MR_def_label(top_level__mercury_compile_mlds_back_end__mlds_backend_7_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(8);
	MR_r3 = (MR_Integer) 20;
	MR_r4 = (MR_Word) MR_string_const("tailcalls", 9);
	MR_np_call_localret_ent(top_level__mercury_compile_mlds_back_end__maybe_dump_mlds_6_0,
		top_level__mercury_compile_mlds_back_end__mlds_backend_7_0_i36);
MR_def_label(top_level__mercury_compile_mlds_back_end__mlds_backend_7_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 25;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		top_level__mercury_compile_mlds_back_end__mlds_backend_7_0_i37);
MR_def_label(top_level__mercury_compile_mlds_back_end__mlds_backend_7_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(7),1)) {
		MR_GOTO_LAB(top_level__mercury_compile_mlds_back_end__mlds_backend_7_0_i38);
	}
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(top_level__mercury_compile_mlds_back_end__mlds_backend_7_0_i38);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Word) MR_string_const("% Warning about non-tail recursive calls...\n", 44);
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		top_level__mercury_compile_mlds_back_end__mlds_backend_7_0_i41);
MR_def_label(top_level__mercury_compile_mlds_back_end__mlds_backend_7_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(ml_backend__ml_tailcall__ml_warn_tailcalls_4_0,
		top_level__mercury_compile_mlds_back_end__mlds_backend_7_0_i42);
MR_def_label(top_level__mercury_compile_mlds_back_end__mlds_backend_7_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Word) MR_string_const("% done.\n", 8);
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		top_level__mercury_compile_mlds_back_end__mlds_backend_7_0_i38);
MR_def_label(top_level__mercury_compile_mlds_back_end__mlds_backend_7_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(libs__file_util__maybe_report_stats_3_0,
		top_level__mercury_compile_mlds_back_end__mlds_backend_7_0_i45);
MR_def_label(top_level__mercury_compile_mlds_back_end__mlds_backend_7_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 442;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		top_level__mercury_compile_mlds_back_end__mlds_backend_7_0_i46);
MR_def_label(top_level__mercury_compile_mlds_back_end__mlds_backend_7_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(top_level__mercury_compile_mlds_back_end__mlds_backend_7_0_i48);
	}
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(6) = MR_sv(8);
	MR_GOTO_LAB(top_level__mercury_compile_mlds_back_end__mlds_backend_7_0_i47);
MR_def_label(top_level__mercury_compile_mlds_back_end__mlds_backend_7_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = (MR_Integer) 437;
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,7,0);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		top_level__mercury_compile_mlds_back_end__mlds_backend_7_0_i50);
MR_def_label(top_level__mercury_compile_mlds_back_end__mlds_backend_7_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Word) MR_string_const("% Optimizing MLDS...\n", 21);
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		top_level__mercury_compile_mlds_back_end__mlds_backend_7_0_i51);
MR_def_label(top_level__mercury_compile_mlds_back_end__mlds_backend_7_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(ml_backend__ml_optimize__mlds_optimize_3_0,
		top_level__mercury_compile_mlds_back_end__mlds_backend_7_0_i52);
MR_def_label(top_level__mercury_compile_mlds_back_end__mlds_backend_7_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Word) MR_string_const("% done.\n", 8);
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		top_level__mercury_compile_mlds_back_end__mlds_backend_7_0_i53);
MR_def_label(top_level__mercury_compile_mlds_back_end__mlds_backend_7_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
MR_def_label(top_level__mercury_compile_mlds_back_end__mlds_backend_7_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(libs__file_util__maybe_report_stats_3_0,
		top_level__mercury_compile_mlds_back_end__mlds_backend_7_0_i54);
MR_def_label(top_level__mercury_compile_mlds_back_end__mlds_backend_7_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(6);
	MR_r3 = (MR_Integer) 25;
	MR_r4 = (MR_Word) MR_string_const("optimize1", 9);
	MR_np_call_localret_ent(top_level__mercury_compile_mlds_back_end__maybe_dump_mlds_6_0,
		top_level__mercury_compile_mlds_back_end__mlds_backend_7_0_i55);
MR_def_label(top_level__mercury_compile_mlds_back_end__mlds_backend_7_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(libs__globals__get_gc_method_2_0,
		top_level__mercury_compile_mlds_back_end__mlds_backend_7_0_i56);
MR_def_label(top_level__mercury_compile_mlds_back_end__mlds_backend_7_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,6)) {
		MR_GOTO_LAB(top_level__mercury_compile_mlds_back_end__mlds_backend_7_0_i58);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Word) MR_string_const("% Threading GC stack frames...\n", 31);
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		top_level__mercury_compile_mlds_back_end__mlds_backend_7_0_i59);
MR_def_label(top_level__mercury_compile_mlds_back_end__mlds_backend_7_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(ml_backend__ml_elim_nested__ml_elim_nested_4_1,
		top_level__mercury_compile_mlds_back_end__mlds_backend_7_0_i60);
MR_def_label(top_level__mercury_compile_mlds_back_end__mlds_backend_7_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Word) MR_string_const("% done.\n", 8);
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		top_level__mercury_compile_mlds_back_end__mlds_backend_7_0_i136);
MR_def_label(top_level__mercury_compile_mlds_back_end__mlds_backend_7_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(top_level__mercury_compile_mlds_back_end__mlds_backend_7_0_i62);
	}
	MR_r1 = MR_sv(2);
	MR_GOTO_LAB(top_level__mercury_compile_mlds_back_end__mlds_backend_7_0_i57);
MR_def_label(top_level__mercury_compile_mlds_back_end__mlds_backend_7_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,2)) {
		MR_GOTO_LAB(top_level__mercury_compile_mlds_back_end__mlds_backend_7_0_i63);
	}
	MR_r1 = MR_sv(2);
	MR_GOTO_LAB(top_level__mercury_compile_mlds_back_end__mlds_backend_7_0_i57);
MR_def_label(top_level__mercury_compile_mlds_back_end__mlds_backend_7_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,3)) {
		MR_GOTO_LAB(top_level__mercury_compile_mlds_back_end__mlds_backend_7_0_i136);
	}
MR_def_label(top_level__mercury_compile_mlds_back_end__mlds_backend_7_0,136)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_GOTO_LAB(top_level__mercury_compile_mlds_back_end__mlds_backend_7_0_i57);
MR_def_label(top_level__mercury_compile_mlds_back_end__mlds_backend_7_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(libs__file_util__maybe_report_stats_3_0,
		top_level__mercury_compile_mlds_back_end__mlds_backend_7_0_i67);
MR_def_label(top_level__mercury_compile_mlds_back_end__mlds_backend_7_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(6);
	MR_r3 = (MR_Integer) 30;
	MR_r4 = (MR_Word) MR_string_const("gc_frames", 9);
	MR_np_call_localret_ent(top_level__mercury_compile_mlds_back_end__maybe_dump_mlds_6_0,
		top_level__mercury_compile_mlds_back_end__mlds_backend_7_0_i68);
MR_def_label(top_level__mercury_compile_mlds_back_end__mlds_backend_7_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 237;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		top_level__mercury_compile_mlds_back_end__mlds_backend_7_0_i69);
MR_def_label(top_level__mercury_compile_mlds_back_end__mlds_backend_7_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(top_level__mercury_compile_mlds_back_end__mlds_backend_7_0_i71);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Word) MR_string_const("% Flattening nested functions...\n", 33);
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		top_level__mercury_compile_mlds_back_end__mlds_backend_7_0_i72);
MR_def_label(top_level__mercury_compile_mlds_back_end__mlds_backend_7_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(ml_backend__ml_elim_nested__ml_elim_nested_4_0,
		top_level__mercury_compile_mlds_back_end__mlds_backend_7_0_i73);
MR_def_label(top_level__mercury_compile_mlds_back_end__mlds_backend_7_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Word) MR_string_const("% done.\n", 8);
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		top_level__mercury_compile_mlds_back_end__mlds_backend_7_0_i71);
MR_def_label(top_level__mercury_compile_mlds_back_end__mlds_backend_7_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(libs__file_util__maybe_report_stats_3_0,
		top_level__mercury_compile_mlds_back_end__mlds_backend_7_0_i75);
MR_def_label(top_level__mercury_compile_mlds_back_end__mlds_backend_7_0,75)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(6);
	MR_r3 = (MR_Integer) 35;
	MR_r4 = (MR_Word) MR_string_const("nested_funcs", 12);
	MR_np_call_localret_ent(top_level__mercury_compile_mlds_back_end__maybe_dump_mlds_6_0,
		top_level__mercury_compile_mlds_back_end__mlds_backend_7_0_i76);
MR_def_label(top_level__mercury_compile_mlds_back_end__mlds_backend_7_0,76)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(7),0)) {
		MR_GOTO_LAB(top_level__mercury_compile_mlds_back_end__mlds_backend_7_0_i78);
	}
	MR_r1 = MR_sv(2);
	MR_sv(4) = MR_sv(6);
	MR_np_call_localret_ent(libs__file_util__maybe_report_stats_3_0,
		top_level__mercury_compile_mlds_back_end__mlds_backend_7_0_i82);
MR_def_label(top_level__mercury_compile_mlds_back_end__mlds_backend_7_0,78)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Word) MR_string_const("% Optimizing MLDS again...\n", 27);
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		top_level__mercury_compile_mlds_back_end__mlds_backend_7_0_i79);
MR_def_label(top_level__mercury_compile_mlds_back_end__mlds_backend_7_0,79)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(ml_backend__ml_optimize__mlds_optimize_3_0,
		top_level__mercury_compile_mlds_back_end__mlds_backend_7_0_i80);
MR_def_label(top_level__mercury_compile_mlds_back_end__mlds_backend_7_0,80)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("% done.\n", 8);
	}
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		top_level__mercury_compile_mlds_back_end__mlds_backend_7_0_i81);
MR_def_label(top_level__mercury_compile_mlds_back_end__mlds_backend_7_0,81)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(libs__file_util__maybe_report_stats_3_0,
		top_level__mercury_compile_mlds_back_end__mlds_backend_7_0_i82);
MR_def_label(top_level__mercury_compile_mlds_back_end__mlds_backend_7_0,82)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_r3 = (MR_Integer) 40;
	MR_r4 = (MR_Word) MR_string_const("optimize2", 9);
	MR_np_call_localret_ent(top_level__mercury_compile_mlds_back_end__maybe_dump_mlds_6_0,
		top_level__mercury_compile_mlds_back_end__mlds_backend_7_0_i83);
MR_def_label(top_level__mercury_compile_mlds_back_end__mlds_backend_7_0,83)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_r3 = (MR_Integer) 99;
	MR_r4 = (MR_Word) MR_string_const("final", 5);
	MR_np_call_localret_ent(top_level__mercury_compile_mlds_back_end__maybe_dump_mlds_6_0,
		top_level__mercury_compile_mlds_back_end__mlds_backend_7_0_i84);
MR_def_label(top_level__mercury_compile_mlds_back_end__mlds_backend_7_0,84)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(top_level__mercury_compile_mlds_back_end_module7)
	MR_init_entry1(top_level__mercury_compile_mlds_back_end__mlds_to_high_level_c_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__top_level__mercury_compile_mlds_back_end__mlds_to_high_level_c_4_0);
	MR_init_label5(top_level__mercury_compile_mlds_back_end__mlds_to_high_level_c_4_0,2,3,4,5,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mlds_to_high_level_c'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__top_level__mercury_compile_mlds_back_end__mlds_to_high_level_c_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r2 = (MR_Integer) 41;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		top_level__mercury_compile_mlds_back_end__mlds_to_high_level_c_4_0_i2);
MR_def_label(top_level__mercury_compile_mlds_back_end__mlds_to_high_level_c_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 51;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		top_level__mercury_compile_mlds_back_end__mlds_to_high_level_c_4_0_i3);
MR_def_label(top_level__mercury_compile_mlds_back_end__mlds_to_high_level_c_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Word) MR_string_const("% Converting MLDS to C...\n", 26);
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		top_level__mercury_compile_mlds_back_end__mlds_to_high_level_c_4_0_i4);
MR_def_label(top_level__mercury_compile_mlds_back_end__mlds_to_high_level_c_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Word) MR_string_const("", 0);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__output_c_mlds_5_0,
		top_level__mercury_compile_mlds_back_end__mlds_to_high_level_c_4_0_i5);
MR_def_label(top_level__mercury_compile_mlds_back_end__mlds_to_high_level_c_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Word) MR_string_const("% Finished converting MLDS to C.\n", 33);
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		top_level__mercury_compile_mlds_back_end__mlds_to_high_level_c_4_0_i6);
MR_def_label(top_level__mercury_compile_mlds_back_end__mlds_to_high_level_c_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(libs__file_util__maybe_report_stats_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(ml_backend__mlds_to_java__output_java_mlds_4_0);

MR_BEGIN_MODULE(top_level__mercury_compile_mlds_back_end_module8)
	MR_init_entry1(top_level__mercury_compile_mlds_back_end__mlds_to_java_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__top_level__mercury_compile_mlds_back_end__mlds_to_java_4_0);
	MR_init_label6(top_level__mercury_compile_mlds_back_end__mlds_to_java_4_0,2,3,4,5,6,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mlds_to_java'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__top_level__mercury_compile_mlds_back_end__mlds_to_java_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		top_level__mercury_compile_mlds_back_end__mlds_to_java_4_0_i2);
MR_def_label(top_level__mercury_compile_mlds_back_end__mlds_to_java_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r2 = (MR_Integer) 41;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		top_level__mercury_compile_mlds_back_end__mlds_to_java_4_0_i3);
MR_def_label(top_level__mercury_compile_mlds_back_end__mlds_to_java_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 51;
	}
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		top_level__mercury_compile_mlds_back_end__mlds_to_java_4_0_i4);
MR_def_label(top_level__mercury_compile_mlds_back_end__mlds_to_java_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Word) MR_string_const("% Converting MLDS to Java...\n", 29);
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		top_level__mercury_compile_mlds_back_end__mlds_to_java_4_0_i5);
MR_def_label(top_level__mercury_compile_mlds_back_end__mlds_to_java_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(ml_backend__mlds_to_java__output_java_mlds_4_0,
		top_level__mercury_compile_mlds_back_end__mlds_to_java_4_0_i6);
MR_def_label(top_level__mercury_compile_mlds_back_end__mlds_to_java_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Word) MR_string_const("% Finished converting MLDS to Java.\n", 36);
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		top_level__mercury_compile_mlds_back_end__mlds_to_java_4_0_i7);
MR_def_label(top_level__mercury_compile_mlds_back_end__mlds_to_java_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(libs__file_util__maybe_report_stats_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(ml_backend__mlds_to_cs__output_csharp_mlds_4_0);

MR_BEGIN_MODULE(top_level__mercury_compile_mlds_back_end_module9)
	MR_init_entry1(top_level__mercury_compile_mlds_back_end__mlds_to_csharp_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__top_level__mercury_compile_mlds_back_end__mlds_to_csharp_4_0);
	MR_init_label6(top_level__mercury_compile_mlds_back_end__mlds_to_csharp_4_0,2,3,4,5,6,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mlds_to_csharp'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__top_level__mercury_compile_mlds_back_end__mlds_to_csharp_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		top_level__mercury_compile_mlds_back_end__mlds_to_csharp_4_0_i2);
MR_def_label(top_level__mercury_compile_mlds_back_end__mlds_to_csharp_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r2 = (MR_Integer) 41;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		top_level__mercury_compile_mlds_back_end__mlds_to_csharp_4_0_i3);
MR_def_label(top_level__mercury_compile_mlds_back_end__mlds_to_csharp_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 51;
	}
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		top_level__mercury_compile_mlds_back_end__mlds_to_csharp_4_0_i4);
MR_def_label(top_level__mercury_compile_mlds_back_end__mlds_to_csharp_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Word) MR_string_const("% Converting MLDS to C#...\n", 27);
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		top_level__mercury_compile_mlds_back_end__mlds_to_csharp_4_0_i5);
MR_def_label(top_level__mercury_compile_mlds_back_end__mlds_to_csharp_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(ml_backend__mlds_to_cs__output_csharp_mlds_4_0,
		top_level__mercury_compile_mlds_back_end__mlds_to_csharp_4_0_i6);
MR_def_label(top_level__mercury_compile_mlds_back_end__mlds_to_csharp_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Word) MR_string_const("% Finished converting MLDS to C#.\n", 34);
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		top_level__mercury_compile_mlds_back_end__mlds_to_csharp_4_0_i7);
MR_def_label(top_level__mercury_compile_mlds_back_end__mlds_to_csharp_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(libs__file_util__maybe_report_stats_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(ml_backend__maybe_mlds_to_gcc__maybe_compile_to_asm_4_0);

MR_BEGIN_MODULE(top_level__mercury_compile_mlds_back_end_module10)
	MR_init_entry1(top_level__mercury_compile_mlds_back_end__maybe_mlds_to_gcc_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__top_level__mercury_compile_mlds_back_end__maybe_mlds_to_gcc_5_0);
	MR_init_label6(top_level__mercury_compile_mlds_back_end__maybe_mlds_to_gcc_5_0,2,3,4,5,6,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'maybe_mlds_to_gcc'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__top_level__mercury_compile_mlds_back_end__maybe_mlds_to_gcc_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_r2 = (MR_Integer) 41;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		top_level__mercury_compile_mlds_back_end__maybe_mlds_to_gcc_5_0_i2);
MR_def_label(top_level__mercury_compile_mlds_back_end__maybe_mlds_to_gcc_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 51;
	}
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		top_level__mercury_compile_mlds_back_end__maybe_mlds_to_gcc_5_0_i3);
MR_def_label(top_level__mercury_compile_mlds_back_end__maybe_mlds_to_gcc_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Word) MR_string_const("% Passing MLDS to GCC and compiling to assembler...\n", 52);
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		top_level__mercury_compile_mlds_back_end__maybe_mlds_to_gcc_5_0_i4);
MR_def_label(top_level__mercury_compile_mlds_back_end__maybe_mlds_to_gcc_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ml_backend__maybe_mlds_to_gcc__maybe_compile_to_asm_4_0,
		top_level__mercury_compile_mlds_back_end__maybe_mlds_to_gcc_5_0_i5);
MR_def_label(top_level__mercury_compile_mlds_back_end__maybe_mlds_to_gcc_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("% Finished compiling to assembler.\n", 35);
	}
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		top_level__mercury_compile_mlds_back_end__maybe_mlds_to_gcc_5_0_i6);
MR_def_label(top_level__mercury_compile_mlds_back_end__maybe_mlds_to_gcc_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(libs__file_util__maybe_report_stats_3_0,
		top_level__mercury_compile_mlds_back_end__maybe_mlds_to_gcc_5_0_i7);
MR_def_label(top_level__mercury_compile_mlds_back_end__maybe_mlds_to_gcc_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(ml_backend__mlds_to_ilasm__output_mlds_via_ilasm_4_0);

MR_BEGIN_MODULE(top_level__mercury_compile_mlds_back_end_module11)
	MR_init_entry1(top_level__mercury_compile_mlds_back_end__mlds_to_il_assembler_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__top_level__mercury_compile_mlds_back_end__mlds_to_il_assembler_4_0);
	MR_init_label5(top_level__mercury_compile_mlds_back_end__mlds_to_il_assembler_4_0,2,3,4,5,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mlds_to_il_assembler'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__top_level__mercury_compile_mlds_back_end__mlds_to_il_assembler_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r2 = (MR_Integer) 41;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		top_level__mercury_compile_mlds_back_end__mlds_to_il_assembler_4_0_i2);
MR_def_label(top_level__mercury_compile_mlds_back_end__mlds_to_il_assembler_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 51;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		top_level__mercury_compile_mlds_back_end__mlds_to_il_assembler_4_0_i3);
MR_def_label(top_level__mercury_compile_mlds_back_end__mlds_to_il_assembler_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Word) MR_string_const("% Converting MLDS to IL...\n", 27);
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		top_level__mercury_compile_mlds_back_end__mlds_to_il_assembler_4_0_i4);
MR_def_label(top_level__mercury_compile_mlds_back_end__mlds_to_il_assembler_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(ml_backend__mlds_to_ilasm__output_mlds_via_ilasm_4_0,
		top_level__mercury_compile_mlds_back_end__mlds_to_il_assembler_4_0_i5);
MR_def_label(top_level__mercury_compile_mlds_back_end__mlds_to_il_assembler_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Word) MR_string_const("% Finished converting MLDS to IL.\n", 34);
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		top_level__mercury_compile_mlds_back_end__mlds_to_il_assembler_4_0_i6);
MR_def_label(top_level__mercury_compile_mlds_back_end__mlds_to_il_assembler_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(libs__file_util__maybe_report_stats_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(top_level__mercury_compile_mlds_back_end_module12)
	MR_init_entry1(top_level__mercury_compile_mlds_back_end__IntroducedFrom__pred__mlds_backend__111__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__top_level__mercury_compile_mlds_back_end__IntroducedFrom__pred__mlds_backend__111__1_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__mlds_backend__111__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(top_level__mercury_compile_mlds_back_end__IntroducedFrom__pred__mlds_backend__111__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__top_level__mercury_compile_mlds_back_end_maybe_bunch_0(void)
{
	top_level__mercury_compile_mlds_back_end_module0();
	top_level__mercury_compile_mlds_back_end_module1();
	top_level__mercury_compile_mlds_back_end_module2();
	top_level__mercury_compile_mlds_back_end_module3();
	top_level__mercury_compile_mlds_back_end_module4();
	top_level__mercury_compile_mlds_back_end_module5();
	top_level__mercury_compile_mlds_back_end_module6();
	top_level__mercury_compile_mlds_back_end_module7();
	top_level__mercury_compile_mlds_back_end_module8();
	top_level__mercury_compile_mlds_back_end_module9();
	top_level__mercury_compile_mlds_back_end_module10();
	top_level__mercury_compile_mlds_back_end_module11();
	top_level__mercury_compile_mlds_back_end_module12();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__top_level__mercury_compile_mlds_back_end__init(void);
void mercury__top_level__mercury_compile_mlds_back_end__init_type_tables(void);
void mercury__top_level__mercury_compile_mlds_back_end__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__top_level__mercury_compile_mlds_back_end__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__top_level__mercury_compile_mlds_back_end__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__top_level__mercury_compile_mlds_back_end__init_threadscope_string_table(void);
#endif

void mercury__top_level__mercury_compile_mlds_back_end__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__top_level__mercury_compile_mlds_back_end_maybe_bunch_0();
	mercury__top_level__mercury_compile_mlds_back_end__init_debugger();
}

void mercury__top_level__mercury_compile_mlds_back_end__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}


void mercury__top_level__mercury_compile_mlds_back_end__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__top_level__mercury_compile_mlds_back_end__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__top_level__mercury_compile_mlds_back_end);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__top_level__mercury_compile_mlds_back_end__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__top_level__mercury_compile_mlds_back_end__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
