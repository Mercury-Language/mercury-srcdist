/*
** Automatically generated from `proc_label.m'
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
INIT mercury__backend_libs__proc_label__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 87 "../library/table_builtin.int2"
#include "table_builtin.mh"

#line 27 "backend_libs.proc_label.c"
#line 134 "../library/io.int2"
#include "io.mh"

#line 31 "backend_libs.proc_label.c"
#line 142 "../library/io.int2"
#include "string.mh"

#line 35 "backend_libs.proc_label.c"
#line 17 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 39 "backend_libs.proc_label.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 43 "backend_libs.proc_label.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 47 "backend_libs.proc_label.c"
#line 48 "backend_libs.proc_label.c"
#include "backend_libs.proc_label.mh"

#line 51 "backend_libs.proc_label.c"
#line 52 "backend_libs.proc_label.c"
#ifndef BACKEND_LIBS__PROC_LABEL_DECL_GUARD
#define BACKEND_LIBS__PROC_LABEL_DECL_GUARD

#line 56 "backend_libs.proc_label.c"
#line 57 "backend_libs.proc_label.c"

#endif
#line 60 "backend_libs.proc_label.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

struct mercury_type_0 {
	MR_String f1;
	MR_Word * f2;
};
MR_STATIC_LINKAGE const struct mercury_type_0 mercury_common_0[];
MR_decl_label1(fn__backend_libs__proc_label__make_proc_label_3_0, 2)
MR_decl_label8(fn__backend_libs__proc_label__make_proc_label_from_rtti_1_0, 8,10,7,6,15,19,11,12)
MR_decl_label4(fn__backend_libs__proc_label__make_proc_label_from_rtti_1_0, 21,5,22,2)
MR_decl_label5(fn__backend_libs__proc_label__make_uni_label_3_0, 2,6,5,8,3)
MR_decl_label4(fn__backend_libs__proc_label__make_user_proc_label_7_0, 6,2,3,10)
MR_def_extern_entry(fn__backend_libs__proc_label__make_user_proc_label_7_0)
MR_def_extern_entry(fn__backend_libs__proc_label__make_proc_label_from_rtti_1_0)
MR_def_extern_entry(fn__backend_libs__proc_label__make_proc_label_3_0)
MR_def_extern_entry(fn__backend_libs__proc_label__make_uni_label_3_0)

static const struct mercury_type_0 mercury_common_0[1] =
{
{
MR_string_const("\'", 1),
MR_tbmkword(0, 0)
},
};

MR_decl_entry(__Unify___mdbcomp__prim_data__sym_name_0_0);
MR_decl_entry(hlds__hlds_pred__proc_id_to_int_2_0);

MR_BEGIN_MODULE(backend_libs__proc_label_module0)
	MR_init_entry1(fn__backend_libs__proc_label__make_user_proc_label_7_0);
	MR_init_label4(fn__backend_libs__proc_label__make_user_proc_label_7_0,6,2,3,10)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__backend_libs__proc_label__make_user_proc_label_7_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(4) = MR_tempr1;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r6;
	MR_sv(7) = MR_r7;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		fn__backend_libs__proc_label__make_user_proc_label_7_0_i6);
MR_def_label(fn__backend_libs__proc_label__make_user_proc_label_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(fn__backend_libs__proc_label__make_user_proc_label_7_0_i2);
	}
	MR_r1 = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(6);
	MR_r7 = MR_sv(7);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(fn__backend_libs__proc_label__make_user_proc_label_7_0_i3);
	}
	MR_r1 = MR_r7;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_id_to_int_2_0,
		fn__backend_libs__proc_label__make_user_proc_label_7_0_i10);
MR_def_label(fn__backend_libs__proc_label__make_user_proc_label_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(6);
	MR_r7 = MR_sv(7);
MR_def_label(fn__backend_libs__proc_label__make_user_proc_label_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(4) = MR_tempr1;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r6;
	MR_r1 = MR_r7;
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_id_to_int_2_0,
		fn__backend_libs__proc_label__make_user_proc_label_7_0_i10);
MR_def_label(fn__backend_libs__proc_label__make_user_proc_label_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 3) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 5) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(8);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(parse_tree__prog_type__type_ctor_is_tuple_1_0);
MR_decl_entry(fn__mdbcomp__prim_data__mercury_public_builtin_module_0_0);
MR_decl_entry(hlds__hlds_pred__in_in_unification_proc_id_1_0);
MR_decl_entry(string__append_list_2_0);
MR_decl_entry(libs__compiler_util__unexpected_2_0);

MR_BEGIN_MODULE(backend_libs__proc_label_module1)
	MR_init_entry1(fn__backend_libs__proc_label__make_proc_label_from_rtti_1_0);
	MR_init_label8(fn__backend_libs__proc_label__make_proc_label_from_rtti_1_0,8,10,7,6,15,19,11,12)
	MR_init_label4(fn__backend_libs__proc_label__make_proc_label_from_rtti_1_0,21,5,22,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__backend_libs__proc_label__make_proc_label_from_rtti_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_r3 = MR_ctfield(0, MR_r1, 11);
	MR_sv(3) = MR_ctfield(0, MR_r1, 7);
	MR_r4 = MR_ctfield(0, MR_r1, 4);
	MR_sv(2) = MR_ctfield(0, MR_r1, 3);
	MR_r5 = MR_ctfield(0, MR_r1, 2);
	MR_r6 = MR_ctfield(0, MR_r1, 1);
	MR_r7 = MR_ctfield(0, MR_r1, 0);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_ctfield(0, MR_r1, 13);
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(fn__backend_libs__proc_label__make_proc_label_from_rtti_1_0_i2);
	}
	MR_tempr2 = MR_ctfield(0, MR_tempr1, 0);
	MR_r4 = MR_tempr2;
	MR_tempr3 = MR_ctfield(0, MR_tempr2, 1);
	MR_r5 = MR_tempr3;
	MR_tempr4 = MR_ctfield(0, MR_tempr3, 0);
	MR_r3 = MR_tempr4;
	if (MR_PTAG_TESTR(MR_tempr4,0)) {
		MR_GOTO_LAB(fn__backend_libs__proc_label__make_proc_label_from_rtti_1_0_i7);
	}
	MR_sv(1) = MR_r6;
	MR_sv(4) = MR_ctfield(0, MR_tempr2, 0);
	MR_sv(5) = MR_ctfield(0, MR_tempr3, 1);
	MR_sv(6) = MR_ctfield(0, MR_tempr4, 0);
	MR_r1 = MR_tempr3;
	}
	MR_np_call_localret_ent(parse_tree__prog_type__type_ctor_is_tuple_1_0,
		fn__backend_libs__proc_label__make_proc_label_from_rtti_1_0_i8);
MR_def_label(fn__backend_libs__proc_label__make_proc_label_from_rtti_1_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__backend_libs__proc_label__make_proc_label_from_rtti_1_0_i5);
	}
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_public_builtin_module_0_0,
		fn__backend_libs__proc_label__make_proc_label_from_rtti_1_0_i10);
MR_def_label(fn__backend_libs__proc_label__make_proc_label_from_rtti_1_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(fn__backend_libs__proc_label__make_proc_label_from_rtti_1_0_i6);
MR_def_label(fn__backend_libs__proc_label__make_proc_label_from_rtti_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r6;
	MR_sv(4) = MR_ctfield(0, MR_r4, 0);
	MR_sv(5) = MR_ctfield(0, MR_r5, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(6) = MR_ctfield(1, MR_tempr1, 1);
	MR_r2 = MR_ctfield(1, MR_tempr1, 0);
	}
MR_def_label(fn__backend_libs__proc_label__make_proc_label_from_rtti_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		fn__backend_libs__proc_label__make_proc_label_from_rtti_1_0_i15);
MR_def_label(fn__backend_libs__proc_label__make_proc_label_from_rtti_1_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(fn__backend_libs__proc_label__make_proc_label_from_rtti_1_0_i11);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	if (MR_INT_NE(MR_sv(4),0)) {
		MR_GOTO_LAB(fn__backend_libs__proc_label__make_proc_label_from_rtti_1_0_i12);
	}
	MR_np_call_localret_ent(hlds__hlds_pred__in_in_unification_proc_id_1_0,
		fn__backend_libs__proc_label__make_proc_label_from_rtti_1_0_i19);
MR_def_label(fn__backend_libs__proc_label__make_proc_label_from_rtti_1_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_sv(3) == MR_r1)) {
		MR_GOTO_LAB(fn__backend_libs__proc_label__make_proc_label_from_rtti_1_0_i11);
	}
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_id_to_int_2_0,
		fn__backend_libs__proc_label__make_proc_label_from_rtti_1_0_i21);
MR_def_label(fn__backend_libs__proc_label__make_proc_label_from_rtti_1_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
MR_def_label(fn__backend_libs__proc_label__make_proc_label_from_rtti_1_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_tempr1;
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_id_to_int_2_0,
		fn__backend_libs__proc_label__make_proc_label_from_rtti_1_0_i21);
MR_def_label(fn__backend_libs__proc_label__make_proc_label_from_rtti_1_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 6);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 2) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 3) = MR_sv(6);
	MR_tfield(1, MR_tempr1, 4) = MR_sv(5);
	MR_tfield(1, MR_tempr1, 5) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
MR_def_label(fn__backend_libs__proc_label__make_proc_label_from_rtti_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,0,0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_string_const("cannot make label for special pred \140", 36);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = (MR_Word) MR_string_const("make_proc_label:\n", 17);
	MR_tfield(1, MR_r1, 1) = MR_tempr2;
	}
	MR_np_call_localret_ent(string__append_list_2_0,
		fn__backend_libs__proc_label__make_proc_label_from_rtti_1_0_i22);
MR_def_label(fn__backend_libs__proc_label__make_proc_label_from_rtti_1_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("proc_label.m", 12);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(fn__backend_libs__proc_label__make_proc_label_from_rtti_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r6;
	MR_r2 = MR_r3;
	MR_r3 = MR_r7;
	MR_r6 = MR_r4;
	MR_r4 = MR_r5;
	MR_r5 = MR_sv(2);
	MR_r7 = MR_sv(3);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(fn__backend_libs__proc_label__make_user_proc_label_7_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__hlds__hlds_rtti__make_rtti_proc_label_3_0);

MR_BEGIN_MODULE(backend_libs__proc_label_module2)
	MR_init_entry1(fn__backend_libs__proc_label__make_proc_label_3_0);
	MR_init_label1(fn__backend_libs__proc_label__make_proc_label_3_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__backend_libs__proc_label__make_proc_label_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__hlds__hlds_rtti__make_rtti_proc_label_3_0,
		fn__backend_libs__proc_label__make_proc_label_3_0_i2);
MR_def_label(fn__backend_libs__proc_label__make_proc_label_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(fn__backend_libs__proc_label__make_proc_label_from_rtti_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_module__module_info_get_name_2_0);

MR_BEGIN_MODULE(backend_libs__proc_label_module3)
	MR_init_entry1(fn__backend_libs__proc_label__make_uni_label_3_0);
	MR_init_label5(fn__backend_libs__proc_label__make_uni_label_3_0,2,6,5,8,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__backend_libs__proc_label__make_uni_label_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_name_2_0,
		fn__backend_libs__proc_label__make_uni_label_3_0_i2);
MR_def_label(fn__backend_libs__proc_label__make_uni_label_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(1);
	MR_tempr1 = MR_ctfield(0, MR_tempr2, 0);
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(fn__backend_libs__proc_label__make_uni_label_3_0_i3);
	}
	MR_sv(5) = MR_ctfield(0, MR_tempr2, 1);
	MR_sv(4) = MR_ctfield(1, MR_tempr1, 1);
	MR_sv(3) = MR_ctfield(1, MR_tempr1, 0);
	MR_sv(1) = MR_r1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__in_in_unification_proc_id_1_0,
		fn__backend_libs__proc_label__make_uni_label_3_0_i6);
MR_def_label(fn__backend_libs__proc_label__make_uni_label_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_sv(2) != MR_r1)) {
		MR_GOTO_LAB(fn__backend_libs__proc_label__make_uni_label_3_0_i5);
	}
	MR_r1 = MR_sv(2);
	MR_sv(1) = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_id_to_int_2_0,
		fn__backend_libs__proc_label__make_uni_label_3_0_i8);
MR_def_label(fn__backend_libs__proc_label__make_uni_label_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_id_to_int_2_0,
		fn__backend_libs__proc_label__make_uni_label_3_0_i8);
MR_def_label(fn__backend_libs__proc_label__make_uni_label_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 6);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = (MR_Integer) 0;
	MR_tfield(1, MR_tempr1, 2) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 3) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 4) = MR_sv(5);
	MR_tfield(1, MR_tempr1, 5) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
MR_def_label(fn__backend_libs__proc_label__make_uni_label_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("proc_label.m", 12);
	MR_r2 = (MR_Word) MR_string_const("make_uni_label: unqualified type_ctor", 37);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__backend_libs__proc_label_maybe_bunch_0(void)
{
	backend_libs__proc_label_module0();
	backend_libs__proc_label_module1();
	backend_libs__proc_label_module2();
	backend_libs__proc_label_module3();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__backend_libs__proc_label__init(void);
void mercury__backend_libs__proc_label__init_type_tables(void);
void mercury__backend_libs__proc_label__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__backend_libs__proc_label__write_out_proc_statics(FILE *fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__backend_libs__proc_label__init_complexity_procs(void);
#endif

void mercury__backend_libs__proc_label__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__backend_libs__proc_label_maybe_bunch_0();
	mercury__backend_libs__proc_label__init_debugger();
}

void mercury__backend_libs__proc_label__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}


void mercury__backend_libs__proc_label__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__backend_libs__proc_label__write_out_proc_statics(FILE *fp)
{
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__backend_libs__proc_label__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
