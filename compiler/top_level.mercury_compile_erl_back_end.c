/*
** Automatically generated from `mercury_compile_erl_back_end.m'
** by the Mercury compiler,
** version 11.07-beta-2011-11-14, configured for x86_64-unknown-linux-gnu.
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
INIT mercury__top_level__mercury_compile_erl_back_end__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 526 "../library/io.int"
#include "io.mh"

#line 28 "top_level.mercury_compile_erl_back_end.c"
#line 536 "../library/io.int"
#include "time.mh"

#line 32 "top_level.mercury_compile_erl_back_end.c"
#line 537 "../library/io.int"
#include "string.mh"

#line 36 "top_level.mercury_compile_erl_back_end.c"
#line 31 "../library/bitmap.int2"
#include "bitmap.mh"

#line 40 "top_level.mercury_compile_erl_back_end.c"
#line 33 "../library/array.int2"
#include "array.mh"

#line 44 "top_level.mercury_compile_erl_back_end.c"
#line 39 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 48 "top_level.mercury_compile_erl_back_end.c"
#line 49 "top_level.mercury_compile_erl_back_end.c"
#include "top_level.mercury_compile_erl_back_end.mh"

#line 52 "top_level.mercury_compile_erl_back_end.c"
#line 53 "top_level.mercury_compile_erl_back_end.c"
#ifndef TOP_LEVEL__MERCURY_COMPILE_ERL_BACK_END_DECL_GUARD
#define TOP_LEVEL__MERCURY_COMPILE_ERL_BACK_END_DECL_GUARD

#line 57 "top_level.mercury_compile_erl_back_end.c"
#line 58 "top_level.mercury_compile_erl_back_end.c"

#endif
#line 61 "top_level.mercury_compile_erl_back_end.c"

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
MR_decl_label6(top_level__mercury_compile_erl_back_end__elds_to_erlang_4_0, 2,3,4,5,6,7)
MR_decl_label10(top_level__mercury_compile_erl_back_end__erlang_backend_6_0, 2,3,4,5,6,7,8,9,10,11)
MR_decl_label10(top_level__mercury_compile_erl_back_end__erlang_backend_6_0, 12,13,14,15,16,18,19,20,22,23)
MR_def_extern_entry(top_level__mercury_compile_erl_back_end__erlang_backend_6_0)
MR_def_extern_entry(top_level__mercury_compile_erl_back_end__elds_to_erlang_4_0)

static const MR_UserClosureId
mercury_data__closure_layout__top_level__mercury_compile_erl_back_end__erlang_backend_6_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_module_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_backend_libs__rtti__type_ctor_info_rtti_data_0;
extern const MR_TypeCtorInfo_Struct mercury_data_backend_libs__erlang_rtti__type_ctor_info_erlang_rtti_data_0;
static const struct mercury_type_0 mercury_common_0[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__top_level__mercury_compile_erl_back_end__erlang_backend_6_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(backend_libs__rtti, rtti_data),
MR_CTOR0_ADDR(backend_libs__erlang_rtti, erlang_rtti_data)
}
},
};


static const MR_UserClosureId
mercury_data__closure_layout__top_level__mercury_compile_erl_back_end__erlang_backend_6_0_1 = {
{
MR_FUNCTION,
"erl_backend.erl_rtti",
"erl_backend.erl_rtti",
"erlang_rtti_data",
3,
0
},
"top_level.mercury_compile_erl_back_end",
"mercury_compile_erl_back_end.m",
81,
"16"
};


MR_decl_entry(hlds__hlds_module__module_info_get_globals_2_0);
MR_decl_entry(libs__globals__lookup_bool_option_3_0);
MR_decl_entry(libs__file_util__maybe_write_string_4_0);
MR_decl_entry(erl_backend__erl_code_gen__erl_code_gen_4_0);
MR_decl_entry(libs__file_util__maybe_report_stats_3_0);
MR_decl_entry(backend_libs__type_ctor_info__generate_rtti_2_0);
MR_decl_entry(backend_libs__base_typeclass_info__generate_base_typeclass_info_rtti_2_0);
MR_decl_entry(backend_libs__type_class_info__generate_type_class_info_rtti_3_0);
extern const MR_TypeCtorInfo_Struct mercury_data_backend_libs__rtti__type_ctor_info_rtti_data_0;
MR_decl_entry(list__append_3_1);
MR_decl_entry(fn__f_108_105_115_116_95_95_43_43_2_0);
MR_decl_entry(fn__erl_backend__erl_rtti__erlang_rtti_data_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_backend_libs__erlang_rtti__type_ctor_info_erlang_rtti_data_0;
MR_decl_entry(fn__list__map_2_0);
MR_decl_entry(erl_backend__erl_rtti__rtti_data_list_to_elds_3_0);
extern const MR_TypeCtorInfo_Struct mercury_data_erl_backend__elds__type_ctor_info_elds_rtti_defn_0;

MR_BEGIN_MODULE(top_level__mercury_compile_erl_back_end_module0)
	MR_init_entry1(top_level__mercury_compile_erl_back_end__erlang_backend_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__top_level__mercury_compile_erl_back_end__erlang_backend_6_0);
	MR_init_label10(top_level__mercury_compile_erl_back_end__erlang_backend_6_0,2,3,4,5,6,7,8,9,10,11)
	MR_init_label10(top_level__mercury_compile_erl_back_end__erlang_backend_6_0,12,13,14,15,16,18,19,20,22,23)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'erlang_backend'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__top_level__mercury_compile_erl_back_end__erlang_backend_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		top_level__mercury_compile_erl_back_end__erlang_backend_6_0_i2);
MR_def_label(top_level__mercury_compile_erl_back_end__erlang_backend_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r2 = (MR_Integer) 44;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		top_level__mercury_compile_erl_back_end__erlang_backend_6_0_i3);
MR_def_label(top_level__mercury_compile_erl_back_end__erlang_backend_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 54;
	}
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		top_level__mercury_compile_erl_back_end__erlang_backend_6_0_i4);
MR_def_label(top_level__mercury_compile_erl_back_end__erlang_backend_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Word) MR_string_const("% Converting HLDS to ELDS...\n", 29);
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		top_level__mercury_compile_erl_back_end__erlang_backend_6_0_i5);
MR_def_label(top_level__mercury_compile_erl_back_end__erlang_backend_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(erl_backend__erl_code_gen__erl_code_gen_4_0,
		top_level__mercury_compile_erl_back_end__erlang_backend_6_0_i6);
MR_def_label(top_level__mercury_compile_erl_back_end__erlang_backend_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Word) MR_string_const("% done.\n", 8);
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		top_level__mercury_compile_erl_back_end__erlang_backend_6_0_i7);
MR_def_label(top_level__mercury_compile_erl_back_end__erlang_backend_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(libs__file_util__maybe_report_stats_3_0,
		top_level__mercury_compile_erl_back_end__erlang_backend_6_0_i8);
MR_def_label(top_level__mercury_compile_erl_back_end__erlang_backend_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Word) MR_string_const("% Generating RTTI data...\n", 26);
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		top_level__mercury_compile_erl_back_end__erlang_backend_6_0_i9);
MR_def_label(top_level__mercury_compile_erl_back_end__erlang_backend_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		top_level__mercury_compile_erl_back_end__erlang_backend_6_0_i10);
MR_def_label(top_level__mercury_compile_erl_back_end__erlang_backend_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(backend_libs__type_ctor_info__generate_rtti_2_0,
		top_level__mercury_compile_erl_back_end__erlang_backend_6_0_i11);
MR_def_label(top_level__mercury_compile_erl_back_end__erlang_backend_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(backend_libs__base_typeclass_info__generate_base_typeclass_info_rtti_2_0,
		top_level__mercury_compile_erl_back_end__erlang_backend_6_0_i12);
MR_def_label(top_level__mercury_compile_erl_back_end__erlang_backend_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 267;
	}
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		top_level__mercury_compile_erl_back_end__erlang_backend_6_0_i13);
MR_def_label(top_level__mercury_compile_erl_back_end__erlang_backend_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(backend_libs__type_class_info__generate_type_class_info_rtti_3_0,
		top_level__mercury_compile_erl_back_end__erlang_backend_6_0_i14);
MR_def_label(top_level__mercury_compile_erl_back_end__erlang_backend_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = (MR_Word) MR_CTOR0_ADDR(backend_libs__rtti, rtti_data);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(list__append_3_1,
		top_level__mercury_compile_erl_back_end__erlang_backend_6_0_i15);
MR_def_label(top_level__mercury_compile_erl_back_end__erlang_backend_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		top_level__mercury_compile_erl_back_end__erlang_backend_6_0_i16);
MR_def_label(top_level__mercury_compile_erl_back_end__erlang_backend_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(0,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__erl_backend__erl_rtti__erlang_rtti_data_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(backend_libs__erlang_rtti, erlang_rtti_data);
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		top_level__mercury_compile_erl_back_end__erlang_backend_6_0_i18);
MR_def_label(top_level__mercury_compile_erl_back_end__erlang_backend_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(0, MR_sv(4), 6);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(erl_backend__erl_rtti__rtti_data_list_to_elds_3_0,
		top_level__mercury_compile_erl_back_end__erlang_backend_6_0_i19);
MR_def_label(top_level__mercury_compile_erl_back_end__erlang_backend_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(erl_backend__elds, elds_rtti_defn);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		top_level__mercury_compile_erl_back_end__erlang_backend_6_0_i20);
MR_def_label(top_level__mercury_compile_erl_back_end__erlang_backend_6_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 9);
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_sv(4);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_tfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_tfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_r1;
	MR_tfield(0, MR_tempr1, 7) = MR_tfield(0, MR_tempr2, 7);
	MR_tfield(0, MR_tempr1, 8) = MR_tfield(0, MR_tempr2, 8);
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Word) MR_string_const("% done.\n", 8);
	}
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		top_level__mercury_compile_erl_back_end__erlang_backend_6_0_i22);
MR_def_label(top_level__mercury_compile_erl_back_end__erlang_backend_6_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(libs__file_util__maybe_report_stats_3_0,
		top_level__mercury_compile_erl_back_end__erlang_backend_6_0_i23);
MR_def_label(top_level__mercury_compile_erl_back_end__erlang_backend_6_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(erl_backend__elds_to_erlang__output_elds_4_0);

MR_BEGIN_MODULE(top_level__mercury_compile_erl_back_end_module1)
	MR_init_entry1(top_level__mercury_compile_erl_back_end__elds_to_erlang_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__top_level__mercury_compile_erl_back_end__elds_to_erlang_4_0);
	MR_init_label6(top_level__mercury_compile_erl_back_end__elds_to_erlang_4_0,2,3,4,5,6,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'elds_to_erlang'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__top_level__mercury_compile_erl_back_end__elds_to_erlang_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		top_level__mercury_compile_erl_back_end__elds_to_erlang_4_0_i2);
MR_def_label(top_level__mercury_compile_erl_back_end__elds_to_erlang_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r2 = (MR_Integer) 44;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		top_level__mercury_compile_erl_back_end__elds_to_erlang_4_0_i3);
MR_def_label(top_level__mercury_compile_erl_back_end__elds_to_erlang_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 54;
	}
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		top_level__mercury_compile_erl_back_end__elds_to_erlang_4_0_i4);
MR_def_label(top_level__mercury_compile_erl_back_end__elds_to_erlang_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Word) MR_string_const("% Converting ELDS to Erlang...\n", 31);
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		top_level__mercury_compile_erl_back_end__elds_to_erlang_4_0_i5);
MR_def_label(top_level__mercury_compile_erl_back_end__elds_to_erlang_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(erl_backend__elds_to_erlang__output_elds_4_0,
		top_level__mercury_compile_erl_back_end__elds_to_erlang_4_0_i6);
MR_def_label(top_level__mercury_compile_erl_back_end__elds_to_erlang_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Word) MR_string_const("% Finished converting ELDS to Erlang.\n", 38);
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		top_level__mercury_compile_erl_back_end__elds_to_erlang_4_0_i7);
MR_def_label(top_level__mercury_compile_erl_back_end__elds_to_erlang_4_0,7)
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

static void mercury__top_level__mercury_compile_erl_back_end_maybe_bunch_0(void)
{
	top_level__mercury_compile_erl_back_end_module0();
	top_level__mercury_compile_erl_back_end_module1();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__top_level__mercury_compile_erl_back_end__init(void);
void mercury__top_level__mercury_compile_erl_back_end__init_type_tables(void);
void mercury__top_level__mercury_compile_erl_back_end__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__top_level__mercury_compile_erl_back_end__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__top_level__mercury_compile_erl_back_end__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__top_level__mercury_compile_erl_back_end__init_threadscope_string_table(void);
#endif

void mercury__top_level__mercury_compile_erl_back_end__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__top_level__mercury_compile_erl_back_end_maybe_bunch_0();
	mercury__top_level__mercury_compile_erl_back_end__init_debugger();
}

void mercury__top_level__mercury_compile_erl_back_end__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}


void mercury__top_level__mercury_compile_erl_back_end__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__top_level__mercury_compile_erl_back_end__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__top_level__mercury_compile_erl_back_end);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__top_level__mercury_compile_erl_back_end__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__top_level__mercury_compile_erl_back_end__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
