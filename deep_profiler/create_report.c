/*
** Automatically generated from `create_report.m'
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
INIT mercury__create_report__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 256 "profile.int"
#include "profile.mh"

#line 27 "create_report.c"
#line 132 "../library/array.int"
#include "array.mh"

#line 31 "create_report.c"
#line 136 "../library/io.int2"
#include "io.mh"

#line 35 "create_report.c"
#line 144 "../library/io.int2"
#include "string.mh"

#line 39 "create_report.c"
#line 33 "mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 43 "create_report.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 47 "create_report.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 51 "create_report.c"
#line 21 "../library/stm_builtin.int2"
#include "stm_builtin.mh"

#line 55 "create_report.c"
#line 56 "create_report.c"
#include "create_report.mh"

#line 59 "create_report.c"
#line 60 "create_report.c"
#ifndef CREATE_REPORT_DECL_GUARD
#define CREATE_REPORT_DECL_GUARD

#line 64 "create_report.c"
#line 65 "create_report.c"

#endif
#line 68 "create_report.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

struct mercury_type_0 {
	MR_Word * f1[2];
};
MR_STATIC_LINKAGE const struct mercury_type_0 mercury_common_0[];

struct mercury_type_1 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[3];
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];
MR_decl_label8(create_report__create_report_3_0, 65,95,77,94,68,15,17,96)
MR_decl_label5(create_report__create_report_3_0, 46,49,50,52,63)
MR_decl_label6(create_report__create_top_procs_report_6_0, 3,2,4,7,6,12)
MR_decl_label4(create_report__error_2_0, 2,3,4,5)
MR_decl_label8(create_report__psi_to_row_data_3_0, 2,3,4,5,6,8,9,10)
MR_decl_label8(create_report__psi_to_row_data_3_0, 11,12,13,14,15,16,17,18)
MR_decl_label8(create_report__psi_to_row_data_3_0, 19,20,21,22,23,24,25,26)
MR_decl_label8(create_report__psi_to_row_data_3_0, 27,28,29,30,31,32,33,34)
MR_decl_label8(create_report__psi_to_row_data_3_0, 35,36,37,38,39,40,41,42)
MR_decl_label4(create_report__psi_to_row_data_3_0, 43,44,45,46)
MR_decl_label3(create_report__psptr_to_report_proc_3_0, 4,6,2)
MR_decl_label2(fn__create_report__divide_ints_2_0, 2,3)
MR_decl_label3(fn__create_report__percent_from_ints_2_0, 2,3,4)
MR_decl_static(create_report__create_top_procs_report_6_0)
MR_decl_static(create_report__error_2_0)
MR_def_extern_entry(create_report__create_report_3_0)
MR_decl_static(fn__create_report__divide_ints_2_0)
MR_decl_static(fn__create_report__percent_from_ints_2_0)
MR_decl_static(create_report__psptr_to_report_proc_3_0)
MR_decl_static(create_report__psi_to_row_data_3_0)

extern const MR_TypeCtorInfo_Struct mercury_data_report__type_ctor_info_row_data_1;
extern const MR_TypeCtorInfo_Struct mercury_data_report__type_ctor_info_report_proc_0;
extern const MR_TypeCtorInfo_Struct mercury_data_report__type_ctor_info_report_proc_0;
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_proc_dynamic_ptr_0;
static const struct mercury_type_0 mercury_common_0[3] =
{
{
{
MR_CTOR1_ADDR(report, row_data),
MR_CTOR0_ADDR(report, report_proc)
}
},
{
{
MR_CTOR1_ADDR(report, row_data),
MR_CTOR0_ADDR(report, report_proc)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(profile, proc_dynamic_ptr)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__create_report__create_top_procs_report_6_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_deep_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
static const struct mercury_type_1 mercury_common_1[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__create_report__create_top_procs_report_6_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(profile, deep),
MR_INT_CTOR_ADDR,
MR_COMMON(0,0)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__create_report__create_top_procs_report_6_0_1 = {
{
MR_PREDICATE,
"create_report",
"create_report",
"psi_to_row_data",
3,
0
},
"create_report",
"create_report.m",
118,
"d1;c9;d2;c3;"
};

MR_decl_entry(fn__top_procs__find_top_procs_5_0);
MR_decl_entry(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
MR_decl_entry(list__map_3_0);

MR_BEGIN_MODULE(create_report_module0)
	MR_init_entry1(create_report__create_top_procs_report_6_0);
	MR_init_label6(create_report__create_top_procs_report_6_0,3,2,4,7,6,12)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(create_report__create_top_procs_report_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(create_report__create_top_procs_report_6_0_i3);
	}
	MR_r5 = MR_r1;
	MR_r4 = MR_r2;
	MR_r1 = MR_r3;
	MR_r2 = (MR_Integer) 0;
	MR_r3 = (MR_Integer) 1;
	MR_GOTO_LAB(create_report__create_top_procs_report_6_0_i2);
MR_def_label(create_report__create_top_procs_report_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r5;
	MR_r5 = MR_r1;
	MR_tempr2 = MR_r4;
	MR_r4 = MR_r2;
	MR_r1 = MR_r3;
	MR_r2 = MR_tempr2;
	MR_r3 = MR_tempr1;
	}
MR_def_label(create_report__create_top_procs_report_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r5;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_sv(5) = MR_r3;
	MR_np_call_localret_ent(fn__top_procs__find_top_procs_5_0,
		create_report__create_top_procs_report_6_0_i4);
MR_def_label(create_report__create_top_procs_report_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(create_report__create_top_procs_report_6_0_i6);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("Internal error: ", 16);
	MR_r2 = MR_ctfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		create_report__create_top_procs_report_6_0_i7);
MR_def_label(create_report__create_top_procs_report_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
MR_def_label(create_report__create_top_procs_report_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 3) = MR_sv(5);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_COMMON(1,0);
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_ENTRY_AP(create_report__psi_to_row_data_3_0);
	MR_tfield(0, MR_tempr2, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr2, 3) = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_tempr3 = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r4 = MR_ctfield(0, MR_tempr3, 0);
	}
	MR_np_call_localret_ent(list__map_3_0,
		create_report__create_top_procs_report_6_0_i12);
MR_def_label(create_report__create_top_procs_report_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 2);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(2, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_exception__type_ctor_info_software_error_0;
MR_decl_entry(exception__throw_1_0);

MR_BEGIN_MODULE(create_report_module1)
	MR_init_entry1(create_report__error_2_0);
	MR_init_label4(create_report__error_2_0,2,3,4,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(create_report__error_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(": ", 2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		create_report__error_2_0_i2);
MR_def_label(create_report__error_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		create_report__error_2_0_i3);
MR_def_label(create_report__error_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(": ", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		create_report__error_2_0_i4);
MR_def_label(create_report__error_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("create_report.m", 15);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		create_report__error_2_0_i5);
MR_def_label(create_report__error_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(exception, software_error);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(exception__throw_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_query__type_ctor_info_cmd_0;
MR_decl_entry(fn__string__string_1_0);
MR_decl_entry(fn__string__format_2_0);
MR_decl_entry(fn__array__max_1_0);

MR_BEGIN_MODULE(create_report_module2)
	MR_init_entry1(create_report__create_report_3_0);
	MR_init_label8(create_report__create_report_3_0,65,95,77,94,68,15,17,96)
	MR_init_label5(create_report__create_report_3_0,46,49,50,52,63)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__create_report__create_report_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(create_report__create_report_3_0_i65) MR_AND
		MR_LABEL_AP(create_report__create_report_3_0_i94) MR_AND
		MR_LABEL_AP(create_report__create_report_3_0_i95) MR_AND
		MR_LABEL_AP(create_report__create_report_3_0_i68));
MR_def_label(create_report__create_report_3_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_unmkbody(MR_r1);
	MR_r4 = MR_tempr1;
	if (MR_INT_EQ(MR_tempr1,0)) {
		MR_GOTO_LAB(create_report__create_report_3_0_i96);
	}
	if (MR_INT_EQ(MR_tempr1,1)) {
		MR_GOTO_LAB(create_report__create_report_3_0_i52);
	}
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	if (MR_INT_EQ(MR_r4,2)) {
		MR_GOTO_LAB(create_report__create_report_3_0_i15);
	}
	MR_GOTO_LAB(create_report__create_report_3_0_i77);
	}
MR_def_label(create_report__create_report_3_0,95)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
MR_def_label(create_report__create_report_3_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(query, cmd);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__string__string_1_0,
		create_report__create_report_3_0_i49);
MR_def_label(create_report__create_report_3_0,94)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_ctfield(1, MR_r1, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_string_const("Timeout set to %d minutes.", 26);
	}
	MR_np_call_localret_ent(fn__string__format_2_0,
		create_report__create_report_3_0_i46);
MR_def_label(create_report__create_report_3_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_ctfield(3, MR_r1, 0),4)) {
		MR_GOTO_LAB(create_report__create_report_3_0_i63);
	}
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_GOTO_LAB(create_report__create_report_3_0_i77);
MR_def_label(create_report__create_report_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_r2, 0);
	MR_sv(1) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 2);
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 3);
	MR_sv(5) = MR_ctfield(0, MR_tempr1, 4);
	MR_sv(6) = MR_ctfield(0, MR_tempr1, 5);
	MR_sv(7) = MR_ctfield(0, MR_tempr1, 6);
	MR_sv(8) = MR_ctfield(0, MR_tempr1, 7);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r2 = MR_ctfield(0, MR_r2, 10);
	}
	MR_np_call_localret_ent(fn__array__max_1_0,
		create_report__create_report_3_0_i17);
MR_def_label(create_report__create_report_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 9);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(7);
	MR_tfield(1, MR_tempr1, 2) = MR_sv(6);
	MR_tfield(1, MR_tempr1, 3) = MR_sv(8);
	MR_tfield(1, MR_tempr1, 4) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 5) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 6) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 7) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 8) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(9);
	}
MR_def_label(create_report__create_report_3_0,96)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_ctfield(0, MR_r2, 3);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_string_const("Shutting down deep profile server for %s.", 41);
	}
	MR_np_call_localret_ent(fn__string__format_2_0,
		create_report__create_report_3_0_i46);
MR_def_label(create_report__create_report_3_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(9);
	}
MR_def_label(create_report__create_report_3_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("Command not supported: ", 23);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		create_report__create_report_3_0_i50);
MR_def_label(create_report__create_report_3_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("create_report/3", 15);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(create_report__error_2_0);
	}
MR_def_label(create_report__create_report_3_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("create_report/3", 15);
	MR_r2 = (MR_Word) MR_string_const("unexpected restart command", 26);
	MR_np_tailcall_ent(create_report__error_2_0);
MR_def_label(create_report__create_report_3_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_ctfield(3, MR_tempr1, 1);
	MR_r3 = MR_ctfield(3, MR_tempr1, 2);
	MR_r4 = MR_ctfield(3, MR_tempr1, 3);
	MR_r5 = MR_ctfield(3, MR_tempr1, 4);
	MR_np_tailcall_ent(create_report__create_top_procs_report_6_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__float__float_1_0);
MR_decl_entry(fn__f_102_108_111_97_116_95_95_47_2_0);

MR_BEGIN_MODULE(create_report_module3)
	MR_init_entry1(fn__create_report__divide_ints_2_0);
	MR_init_label2(fn__create_report__divide_ints_2_0,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__create_report__divide_ints_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(fn__float__float_1_0,
		fn__create_report__divide_ints_2_0_i2);
MR_def_label(fn__create_report__divide_ints_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__float__float_1_0,
		fn__create_report__divide_ints_2_0_i3);
MR_def_label(fn__create_report__divide_ints_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(fn__f_102_108_111_97_116_95_95_47_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__measurement_units__percent_1_0);

MR_BEGIN_MODULE(create_report_module4)
	MR_init_entry1(fn__create_report__percent_from_ints_2_0);
	MR_init_label3(fn__create_report__percent_from_ints_2_0,2,3,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__create_report__percent_from_ints_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(fn__float__float_1_0,
		fn__create_report__percent_from_ints_2_0_i2);
MR_def_label(fn__create_report__percent_from_ints_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__float__float_1_0,
		fn__create_report__percent_from_ints_2_0_i3);
MR_def_label(fn__create_report__percent_from_ints_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_102_108_111_97_116_95_95_47_2_0,
		fn__create_report__percent_from_ints_2_0_i4);
MR_def_label(fn__create_report__percent_from_ints_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(fn__measurement_units__percent_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(profile__valid_proc_static_ptr_2_0);
MR_decl_entry(profile__deep_lookup_proc_statics_3_0);

MR_BEGIN_MODULE(create_report_module5)
	MR_init_entry1(create_report__psptr_to_report_proc_3_0);
	MR_init_label3(create_report__psptr_to_report_proc_3_0,4,6,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(create_report__psptr_to_report_proc_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(profile__valid_proc_static_ptr_2_0,
		create_report__psptr_to_report_proc_3_0_i4);
MR_def_label(create_report__psptr_to_report_proc_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(create_report__psptr_to_report_proc_3_0_i2);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(profile__deep_lookup_proc_statics_3_0,
		create_report__psptr_to_report_proc_3_0_i6);
MR_def_label(create_report__psptr_to_report_proc_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tempr2 = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr2, 2);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
MR_def_label(create_report__psptr_to_report_proc_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 4);
	MR_r1 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_string_const("", 0);
	MR_tfield(0, MR_tempr2, 2) = (MR_Integer) 0;
	MR_tfield(0, MR_tempr2, 3) = (MR_Word) MR_string_const("mercury_runtime", 15);
	MR_decr_sp_and_return(3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__profile__root_total_info_1_0);
MR_decl_entry(fn__profile__wrap_proc_static_ptr_1_0);
MR_decl_entry(profile__deep_lookup_ps_own_3_0);
MR_decl_entry(profile__deep_lookup_ps_desc_3_0);
MR_decl_entry(fn__measurements__calls_1_0);
MR_decl_entry(fn__measurements__exits_1_0);
MR_decl_entry(fn__measurements__fails_1_0);
MR_decl_entry(fn__measurements__redos_1_0);
MR_decl_entry(fn__measurements__excps_1_0);
MR_decl_entry(fn__measurements__inherit_quanta_1_0);
MR_decl_entry(fn__measurements__quanta_1_0);
MR_decl_entry(measurement_units__ticks_to_time_3_0);
MR_decl_entry(measurement_units__time_percall_3_0);
MR_decl_entry(fn__measurements__inherit_callseqs_1_0);
MR_decl_entry(fn__measurements__callseqs_1_0);
MR_decl_entry(fn__measurements__inherit_allocs_1_0);
MR_decl_entry(fn__measurements__allocs_1_0);
MR_decl_entry(fn__measurements__inherit_words_1_0);
MR_decl_entry(fn__measurements__words_1_0);
MR_decl_entry(fn__measurement_units__memory_words_2_0);
MR_decl_entry(fn__f_109_101_97_115_117_114_101_109_101_110_116_95_117_110_105_116_115_95_95_47_2_0);

MR_BEGIN_MODULE(create_report_module6)
	MR_init_entry1(create_report__psi_to_row_data_3_0);
	MR_init_label8(create_report__psi_to_row_data_3_0,2,3,4,5,6,8,9,10)
	MR_init_label8(create_report__psi_to_row_data_3_0,11,12,13,14,15,16,17,18)
	MR_init_label8(create_report__psi_to_row_data_3_0,19,20,21,22,23,24,25,26)
	MR_init_label8(create_report__psi_to_row_data_3_0,27,28,29,30,31,32,33,34)
	MR_init_label8(create_report__psi_to_row_data_3_0,35,36,37,38,39,40,41,42)
	MR_init_label4(create_report__psi_to_row_data_3_0,43,44,45,46)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(create_report__psi_to_row_data_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r1;
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = MR_r2;
	MR_tempr1 = MR_ctfield(0, MR_tempr2, 0);
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 4);
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 8);
	}
	MR_np_call_localret_ent(fn__profile__root_total_info_1_0,
		create_report__psi_to_row_data_3_0_i2);
MR_def_label(create_report__psi_to_row_data_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__profile__wrap_proc_static_ptr_1_0,
		create_report__psi_to_row_data_3_0_i3);
MR_def_label(create_report__psi_to_row_data_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(profile__deep_lookup_ps_own_3_0,
		create_report__psi_to_row_data_3_0_i4);
MR_def_label(create_report__psi_to_row_data_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(profile__deep_lookup_ps_desc_3_0,
		create_report__psi_to_row_data_3_0_i5);
MR_def_label(create_report__psi_to_row_data_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(create_report__psptr_to_report_proc_3_0,
		create_report__psi_to_row_data_3_0_i6);
MR_def_label(create_report__psi_to_row_data_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_sv(1), 0, (MR_Integer) 33);
	MR_tfield(0, MR_sv(1), 0) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(fn__measurements__calls_1_0,
		create_report__psi_to_row_data_3_0_i8);
MR_def_label(create_report__psi_to_row_data_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_tfield(0, MR_sv(1), 1) = MR_tempr1;
	MR_sv(7) = MR_tempr1;
	MR_r1 = MR_sv(6);
	}
	MR_np_call_localret_ent(fn__measurements__exits_1_0,
		create_report__psi_to_row_data_3_0_i9);
MR_def_label(create_report__psi_to_row_data_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tfield(0, MR_sv(1), 2) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(fn__measurements__fails_1_0,
		create_report__psi_to_row_data_3_0_i10);
MR_def_label(create_report__psi_to_row_data_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tfield(0, MR_sv(1), 3) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(fn__measurements__redos_1_0,
		create_report__psi_to_row_data_3_0_i11);
MR_def_label(create_report__psi_to_row_data_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tfield(0, MR_sv(1), 4) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(fn__measurements__excps_1_0,
		create_report__psi_to_row_data_3_0_i12);
MR_def_label(create_report__psi_to_row_data_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tfield(0, MR_sv(1), 5) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__measurements__inherit_quanta_1_0,
		create_report__psi_to_row_data_3_0_i13);
MR_def_label(create_report__psi_to_row_data_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(fn__measurements__quanta_1_0,
		create_report__psi_to_row_data_3_0_i14);
MR_def_label(create_report__psi_to_row_data_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(measurement_units__ticks_to_time_3_0,
		create_report__psi_to_row_data_3_0_i15);
MR_def_label(create_report__psi_to_row_data_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(measurement_units__time_percall_3_0,
		create_report__psi_to_row_data_3_0_i16);
MR_def_label(create_report__psi_to_row_data_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(fn__create_report__percent_from_ints_2_0,
		create_report__psi_to_row_data_3_0_i17);
MR_def_label(create_report__psi_to_row_data_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(fn__measurements__quanta_1_0,
		create_report__psi_to_row_data_3_0_i18);
MR_def_label(create_report__psi_to_row_data_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_tfield(0, MR_tempr1, 6) = MR_r1;
	MR_tfield(0, MR_tempr1, 7) = MR_sv(10);
	MR_tfield(0, MR_tempr1, 8) = MR_sv(12);
	MR_tfield(0, MR_tempr1, 9) = MR_sv(11);
	MR_r1 = MR_sv(5);
	}
	MR_np_call_localret_ent(fn__measurements__inherit_quanta_1_0,
		create_report__psi_to_row_data_3_0_i19);
MR_def_label(create_report__psi_to_row_data_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = ((MR_Integer) MR_sv(9) + (MR_Integer) MR_r1);
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(measurement_units__ticks_to_time_3_0,
		create_report__psi_to_row_data_3_0_i20);
MR_def_label(create_report__psi_to_row_data_3_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(measurement_units__time_percall_3_0,
		create_report__psi_to_row_data_3_0_i21);
MR_def_label(create_report__psi_to_row_data_3_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(8);
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__create_report__percent_from_ints_2_0,
		create_report__psi_to_row_data_3_0_i22);
MR_def_label(create_report__psi_to_row_data_3_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_tfield(0, MR_tempr1, 10) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 11) = MR_sv(9);
	MR_tfield(0, MR_tempr1, 12) = MR_r1;
	MR_tfield(0, MR_tempr1, 13) = MR_sv(8);
	MR_r1 = MR_sv(2);
	}
	MR_np_call_localret_ent(fn__measurements__inherit_callseqs_1_0,
		create_report__psi_to_row_data_3_0_i23);
MR_def_label(create_report__psi_to_row_data_3_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(fn__measurements__callseqs_1_0,
		create_report__psi_to_row_data_3_0_i24);
MR_def_label(create_report__psi_to_row_data_3_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_tfield(0, MR_sv(1), 14) = MR_tempr1;
	MR_sv(8) = MR_tempr1;
	MR_r2 = MR_sv(3);
	}
	MR_np_call_localret_ent(fn__create_report__percent_from_ints_2_0,
		create_report__psi_to_row_data_3_0_i25);
MR_def_label(create_report__psi_to_row_data_3_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tfield(0, MR_sv(1), 15) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(fn__create_report__divide_ints_2_0,
		create_report__psi_to_row_data_3_0_i26);
MR_def_label(create_report__psi_to_row_data_3_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tfield(0, MR_sv(1), 16) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(fn__measurements__callseqs_1_0,
		create_report__psi_to_row_data_3_0_i27);
MR_def_label(create_report__psi_to_row_data_3_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(fn__measurements__inherit_callseqs_1_0,
		create_report__psi_to_row_data_3_0_i28);
MR_def_label(create_report__psi_to_row_data_3_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = ((MR_Integer) MR_sv(8) + (MR_Integer) MR_r1);
	MR_tfield(0, MR_sv(1), 17) = MR_tempr1;
	MR_tempr2 = MR_sv(3);
	MR_sv(3) = MR_tempr1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__create_report__percent_from_ints_2_0,
		create_report__psi_to_row_data_3_0_i29);
MR_def_label(create_report__psi_to_row_data_3_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tfield(0, MR_sv(1), 18) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(fn__create_report__divide_ints_2_0,
		create_report__psi_to_row_data_3_0_i30);
MR_def_label(create_report__psi_to_row_data_3_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tfield(0, MR_sv(1), 19) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__measurements__inherit_allocs_1_0,
		create_report__psi_to_row_data_3_0_i31);
MR_def_label(create_report__psi_to_row_data_3_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(fn__measurements__allocs_1_0,
		create_report__psi_to_row_data_3_0_i32);
MR_def_label(create_report__psi_to_row_data_3_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(fn__measurements__inherit_allocs_1_0,
		create_report__psi_to_row_data_3_0_i33);
MR_def_label(create_report__psi_to_row_data_3_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(8);
	MR_tfield(0, MR_sv(1), 20) = MR_tempr1;
	MR_sv(9) = ((MR_Integer) MR_tempr1 + (MR_Integer) MR_r1);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(3);
	}
	MR_np_call_localret_ent(fn__create_report__percent_from_ints_2_0,
		create_report__psi_to_row_data_3_0_i34);
MR_def_label(create_report__psi_to_row_data_3_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tfield(0, MR_sv(1), 21) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(fn__create_report__divide_ints_2_0,
		create_report__psi_to_row_data_3_0_i35);
MR_def_label(create_report__psi_to_row_data_3_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_tfield(0, MR_tempr1, 22) = MR_r1;
	MR_tempr2 = MR_sv(9);
	MR_tfield(0, MR_tempr1, 23) = MR_tempr2;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_sv(3);
	}
	MR_np_call_localret_ent(fn__create_report__percent_from_ints_2_0,
		create_report__psi_to_row_data_3_0_i36);
MR_def_label(create_report__psi_to_row_data_3_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tfield(0, MR_sv(1), 24) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(fn__create_report__divide_ints_2_0,
		create_report__psi_to_row_data_3_0_i37);
MR_def_label(create_report__psi_to_row_data_3_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tfield(0, MR_sv(1), 25) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__measurements__inherit_words_1_0,
		create_report__psi_to_row_data_3_0_i38);
MR_def_label(create_report__psi_to_row_data_3_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(fn__measurements__words_1_0,
		create_report__psi_to_row_data_3_0_i39);
MR_def_label(create_report__psi_to_row_data_3_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(fn__measurement_units__memory_words_2_0,
		create_report__psi_to_row_data_3_0_i40);
MR_def_label(create_report__psi_to_row_data_3_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_tfield(0, MR_tempr1, 26) = MR_sv(4);
	MR_tempr2 = MR_r1;
	MR_tfield(0, MR_tempr1, 27) = MR_tempr2;
	MR_sv(6) = MR_tempr2;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	}
	MR_np_call_localret_ent(fn__create_report__percent_from_ints_2_0,
		create_report__psi_to_row_data_3_0_i41);
MR_def_label(create_report__psi_to_row_data_3_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tfield(0, MR_sv(1), 28) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(fn__f_109_101_97_115_117_114_101_109_101_110_116_95_117_110_105_116_115_95_95_47_2_0,
		create_report__psi_to_row_data_3_0_i42);
MR_def_label(create_report__psi_to_row_data_3_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tfield(0, MR_sv(1), 29) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(fn__measurements__inherit_words_1_0,
		create_report__psi_to_row_data_3_0_i43);
MR_def_label(create_report__psi_to_row_data_3_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = ((MR_Integer) MR_sv(3) + (MR_Integer) MR_r1);
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(fn__measurement_units__memory_words_2_0,
		create_report__psi_to_row_data_3_0_i44);
MR_def_label(create_report__psi_to_row_data_3_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r1;
	MR_tfield(0, MR_sv(1), 30) = MR_tempr2;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_tempr2;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__create_report__percent_from_ints_2_0,
		create_report__psi_to_row_data_3_0_i45);
MR_def_label(create_report__psi_to_row_data_3_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tfield(0, MR_sv(1), 31) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(fn__f_109_101_97_115_117_114_101_109_101_110_116_95_117_110_105_116_115_95_95_47_2_0,
		create_report__psi_to_row_data_3_0_i46);
MR_def_label(create_report__psi_to_row_data_3_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_tfield(0, MR_tempr1, 32) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(13);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__create_report_maybe_bunch_0(void)
{
	create_report_module0();
	create_report_module1();
	create_report_module2();
	create_report_module3();
	create_report_module4();
	create_report_module5();
	create_report_module6();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__create_report__init(void);
void mercury__create_report__init_type_tables(void);
void mercury__create_report__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__create_report__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__create_report__init_complexity_procs(void);
#endif

void mercury__create_report__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__create_report_maybe_bunch_0();
	mercury__create_report__init_debugger();
}

void mercury__create_report__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}


void mercury__create_report__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__create_report__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__create_report);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__create_report__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
