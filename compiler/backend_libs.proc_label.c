/*
** Automatically generated from `proc_label.m'
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
INIT mercury__backend_libs__proc_label__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 33 "../library/array.int2"
#include "array.mh"

#line 28 "backend_libs.proc_label.c"
#line 140 "../library/io.int2"
#include "io.mh"

#line 32 "backend_libs.proc_label.c"
#line 150 "../library/io.int2"
#include "time.mh"

#line 36 "backend_libs.proc_label.c"
#line 151 "../library/io.int2"
#include "string.mh"

#line 40 "backend_libs.proc_label.c"
#line 39 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 44 "backend_libs.proc_label.c"
#line 31 "../library/bitmap.int2"
#include "bitmap.mh"

#line 48 "backend_libs.proc_label.c"
#line 49 "backend_libs.proc_label.c"
#include "backend_libs.proc_label.mh"

#line 52 "backend_libs.proc_label.c"
#line 53 "backend_libs.proc_label.c"
#ifndef BACKEND_LIBS__PROC_LABEL_DECL_GUARD
#define BACKEND_LIBS__PROC_LABEL_DECL_GUARD

#line 57 "backend_libs.proc_label.c"
#line 58 "backend_libs.proc_label.c"

#endif
#line 61 "backend_libs.proc_label.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif
MR_decl_label10(fn__backend_libs__proc_label__make_proc_label_3_0, 2,3,4,5,6,7,10,8,13,19)
MR_decl_label10(fn__backend_libs__proc_label__make_proc_label_3_0, 20,22,18,27,31,23,24,33,17,35)
MR_decl_label5(fn__backend_libs__proc_label__make_proc_label_3_0, 36,14,43,40,47)
MR_decl_label10(fn__backend_libs__proc_label__make_proc_label_from_rtti_1_0, 7,8,10,6,15,19,11,12,21,5)
MR_decl_label6(fn__backend_libs__proc_label__make_proc_label_from_rtti_1_0, 23,24,2,31,28,35)
MR_decl_label5(fn__backend_libs__proc_label__make_uni_label_3_0, 2,6,5,8,3)
MR_def_extern_entry(fn__backend_libs__proc_label__make_proc_label_from_rtti_1_0)
MR_def_extern_entry(fn__backend_libs__proc_label__make_proc_label_3_0)
MR_def_extern_entry(fn__backend_libs__proc_label__make_uni_label_3_0)



MR_decl_entry(parse_tree__prog_type__type_ctor_is_tuple_1_0);
MR_decl_entry(fn__mdbcomp__prim_data__mercury_public_builtin_module_0_0);
MR_decl_entry(__Unify___mdbcomp__prim_data__sym_name_0_0);
MR_decl_entry(hlds__hlds_pred__in_in_unification_proc_id_1_0);
MR_decl_entry(hlds__hlds_pred__proc_id_to_int_2_0);
MR_decl_entry(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
MR_decl_entry(require__unexpected_3_0);

MR_BEGIN_MODULE(backend_libs__proc_label_module0)
	MR_init_entry1(fn__backend_libs__proc_label__make_proc_label_from_rtti_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__backend_libs__proc_label__make_proc_label_from_rtti_1_0);
	MR_init_label10(fn__backend_libs__proc_label__make_proc_label_from_rtti_1_0,7,8,10,6,15,19,11,12,21,5)
	MR_init_label6(fn__backend_libs__proc_label__make_proc_label_from_rtti_1_0,23,24,2,31,28,35)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'make_proc_label_from_rtti'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__backend_libs__proc_label__make_proc_label_from_rtti_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(2) = (((MR_Integer) MR_tfield(0, MR_r1, 10) >> (MR_Integer) 3) & (MR_Integer) 1);
	MR_sv(1) = MR_tfield(0, MR_r1, 7);
	MR_sv(5) = MR_tfield(0, MR_r1, 4);
	MR_sv(6) = MR_tfield(0, MR_r1, 3);
	MR_sv(4) = MR_tfield(0, MR_r1, 2);
	MR_r3 = MR_tfield(0, MR_r1, 1);
	MR_sv(3) = MR_tfield(0, MR_r1, 0);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_tfield(0, MR_r1, 11);
	MR_r4 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(fn__backend_libs__proc_label__make_proc_label_from_rtti_1_0_i2);
	}
	MR_tempr2 = MR_tfield(0, MR_tempr1, 0);
	MR_r6 = MR_tempr2;
	MR_tempr3 = MR_tfield(0, MR_tempr2, 1);
	MR_r4 = MR_tempr3;
	MR_tempr4 = MR_tfield(0, MR_tempr3, 0);
	MR_r5 = MR_tempr4;
	if (MR_PTAG_TESTR(MR_tempr4,1)) {
		MR_GOTO_LAB(fn__backend_libs__proc_label__make_proc_label_from_rtti_1_0_i7);
	}
	MR_r1 = MR_r3;
	MR_sv(3) = MR_tfield(0, MR_tempr2, 0);
	MR_sv(4) = MR_tfield(0, MR_tempr3, 1);
	MR_sv(5) = MR_tfield(1, MR_tempr4, 1);
	MR_r2 = MR_tfield(1, MR_tempr4, 0);
	MR_GOTO_LAB(fn__backend_libs__proc_label__make_proc_label_from_rtti_1_0_i6);
	}
MR_def_label(fn__backend_libs__proc_label__make_proc_label_from_rtti_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r3;
	MR_sv(3) = MR_tfield(0, MR_r6, 0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(4) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(5) = MR_tfield(0, MR_r5, 0);
	MR_r1 = MR_tempr1;
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
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	}
MR_def_label(fn__backend_libs__proc_label__make_proc_label_from_rtti_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		fn__backend_libs__proc_label__make_proc_label_from_rtti_1_0_i15);
MR_def_label(fn__backend_libs__proc_label__make_proc_label_from_rtti_1_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(fn__backend_libs__proc_label__make_proc_label_from_rtti_1_0_i11);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(6);
	if (MR_INT_NE(MR_sv(3),0)) {
		MR_GOTO_LAB(fn__backend_libs__proc_label__make_proc_label_from_rtti_1_0_i12);
	}
	MR_np_call_localret_ent(hlds__hlds_pred__in_in_unification_proc_id_1_0,
		fn__backend_libs__proc_label__make_proc_label_from_rtti_1_0_i19);
MR_def_label(fn__backend_libs__proc_label__make_proc_label_from_rtti_1_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_sv(1) == MR_r1)) {
		MR_GOTO_LAB(fn__backend_libs__proc_label__make_proc_label_from_rtti_1_0_i11);
	}
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_id_to_int_2_0,
		fn__backend_libs__proc_label__make_proc_label_from_rtti_1_0_i21);
MR_def_label(fn__backend_libs__proc_label__make_proc_label_from_rtti_1_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(6);
MR_def_label(fn__backend_libs__proc_label__make_proc_label_from_rtti_1_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_sv(6) = MR_r2;
	MR_sv(7) = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_id_to_int_2_0,
		fn__backend_libs__proc_label__make_proc_label_from_rtti_1_0_i21);
MR_def_label(fn__backend_libs__proc_label__make_proc_label_from_rtti_1_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 6);
	MR_tfield(1, MR_r2, 0) = MR_sv(7);
	MR_tfield(1, MR_r2, 1) = MR_sv(3);
	MR_tfield(1, MR_r2, 2) = MR_sv(6);
	MR_tfield(1, MR_r2, 3) = MR_sv(5);
	MR_tfield(1, MR_r2, 4) = MR_sv(4);
	MR_tfield(1, MR_r2, 5) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(8);
MR_def_label(fn__backend_libs__proc_label__make_proc_label_from_rtti_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_r2 = (MR_Word) MR_string_const("\'", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__backend_libs__proc_label__make_proc_label_from_rtti_1_0_i23);
MR_def_label(fn__backend_libs__proc_label__make_proc_label_from_rtti_1_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("cannot make label for special pred \140", 36);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__backend_libs__proc_label__make_proc_label_from_rtti_1_0_i24);
MR_def_label(fn__backend_libs__proc_label__make_proc_label_from_rtti_1_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("backend_libs.proc_label", 23);
	MR_r2 = (MR_Word) MR_string_const("function \140backend_libs.proc_label.do_make_proc_label\'/8", 55);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(require__unexpected_3_0);
	}
MR_def_label(fn__backend_libs__proc_label__make_proc_label_from_rtti_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(7) = MR_tempr1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(4);
	}
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		fn__backend_libs__proc_label__make_proc_label_from_rtti_1_0_i31);
MR_def_label(fn__backend_libs__proc_label__make_proc_label_from_rtti_1_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(fn__backend_libs__proc_label__make_proc_label_from_rtti_1_0_i28);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	if (MR_INT_NE(MR_sv(2),0)) {
		MR_GOTO_LAB(fn__backend_libs__proc_label__make_proc_label_from_rtti_1_0_i28);
	}
	MR_r1 = MR_sv(1);
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_id_to_int_2_0,
		fn__backend_libs__proc_label__make_proc_label_from_rtti_1_0_i35);
MR_def_label(fn__backend_libs__proc_label__make_proc_label_from_rtti_1_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_sv(7) = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_id_to_int_2_0,
		fn__backend_libs__proc_label__make_proc_label_from_rtti_1_0_i35);
MR_def_label(fn__backend_libs__proc_label__make_proc_label_from_rtti_1_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 6);
	MR_tfield(0, MR_r2, 0) = MR_sv(7);
	MR_tfield(0, MR_r2, 1) = MR_sv(3);
	MR_tfield(0, MR_r2, 2) = MR_sv(4);
	MR_tfield(0, MR_r2, 3) = MR_sv(6);
	MR_tfield(0, MR_r2, 4) = MR_sv(5);
	MR_tfield(0, MR_r2, 5) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_module__module_info_get_name_2_0);
MR_decl_entry(hlds__hlds_module__module_info_pred_proc_info_5_0);
MR_decl_entry(fn__hlds__hlds_pred__pred_info_is_pred_or_func_1_0);
MR_decl_entry(fn__hlds__hlds_pred__pred_info_module_1_0);
MR_decl_entry(fn__hlds__hlds_pred__pred_info_name_1_0);
MR_decl_entry(fn__hlds__hlds_pred__pred_info_orig_arity_1_0);
MR_decl_entry(hlds__hlds_pred__pred_info_is_imported_1_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_origin_2_0);

MR_BEGIN_MODULE(backend_libs__proc_label_module1)
	MR_init_entry1(fn__backend_libs__proc_label__make_proc_label_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__backend_libs__proc_label__make_proc_label_3_0);
	MR_init_label10(fn__backend_libs__proc_label__make_proc_label_3_0,2,3,4,5,6,7,10,8,13,19)
	MR_init_label10(fn__backend_libs__proc_label__make_proc_label_3_0,20,22,18,27,31,23,24,33,17,35)
	MR_init_label5(fn__backend_libs__proc_label__make_proc_label_3_0,36,14,43,40,47)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'make_proc_label'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__backend_libs__proc_label__make_proc_label_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(7) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_sv(1) = MR_r3;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_name_2_0,
		fn__backend_libs__proc_label__make_proc_label_3_0_i2);
MR_def_label(fn__backend_libs__proc_label__make_proc_label_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(1);
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_proc_info_5_0,
		fn__backend_libs__proc_label__make_proc_label_3_0_i3);
MR_def_label(fn__backend_libs__proc_label__make_proc_label_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_is_pred_or_func_1_0,
		fn__backend_libs__proc_label__make_proc_label_3_0_i4);
MR_def_label(fn__backend_libs__proc_label__make_proc_label_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_module_1_0,
		fn__backend_libs__proc_label__make_proc_label_3_0_i5);
MR_def_label(fn__backend_libs__proc_label__make_proc_label_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_name_1_0,
		fn__backend_libs__proc_label__make_proc_label_3_0_i6);
MR_def_label(fn__backend_libs__proc_label__make_proc_label_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_orig_arity_1_0,
		fn__backend_libs__proc_label__make_proc_label_3_0_i7);
MR_def_label(fn__backend_libs__proc_label__make_proc_label_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_is_imported_1_0,
		fn__backend_libs__proc_label__make_proc_label_3_0_i10);
MR_def_label(fn__backend_libs__proc_label__make_proc_label_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__backend_libs__proc_label__make_proc_label_3_0_i8);
	}
	MR_r1 = MR_sv(3);
	MR_sv(3) = (MR_Integer) 1;
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_origin_2_0,
		fn__backend_libs__proc_label__make_proc_label_3_0_i13);
MR_def_label(fn__backend_libs__proc_label__make_proc_label_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r1 = MR_sv(3);
	MR_sv(3) = (MR_Integer) 0;
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_origin_2_0,
		fn__backend_libs__proc_label__make_proc_label_3_0_i13);
MR_def_label(fn__backend_libs__proc_label__make_proc_label_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(fn__backend_libs__proc_label__make_proc_label_3_0_i14);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_tfield(0, MR_r1, 0);
	MR_r4 = MR_tempr1;
	MR_tempr2 = MR_tfield(0, MR_tempr1, 1);
	MR_r5 = MR_tempr2;
	MR_tempr3 = MR_tfield(0, MR_tempr2, 0);
	MR_r3 = MR_tempr3;
	if (MR_PTAG_TESTR(MR_tempr3,1)) {
		MR_GOTO_LAB(fn__backend_libs__proc_label__make_proc_label_3_0_i19);
	}
	MR_r1 = MR_sv(7);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(4) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(5) = MR_tfield(1, MR_tempr3, 1);
	MR_r2 = MR_tfield(1, MR_tempr3, 0);
	MR_GOTO_LAB(fn__backend_libs__proc_label__make_proc_label_3_0_i18);
	}
MR_def_label(fn__backend_libs__proc_label__make_proc_label_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_tfield(0, MR_r4, 0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(4) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(5) = MR_tfield(0, MR_r3, 0);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_type__type_ctor_is_tuple_1_0,
		fn__backend_libs__proc_label__make_proc_label_3_0_i20);
MR_def_label(fn__backend_libs__proc_label__make_proc_label_3_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__backend_libs__proc_label__make_proc_label_3_0_i17);
	}
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_public_builtin_module_0_0,
		fn__backend_libs__proc_label__make_proc_label_3_0_i22);
MR_def_label(fn__backend_libs__proc_label__make_proc_label_3_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	}
MR_def_label(fn__backend_libs__proc_label__make_proc_label_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		fn__backend_libs__proc_label__make_proc_label_3_0_i27);
MR_def_label(fn__backend_libs__proc_label__make_proc_label_3_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(fn__backend_libs__proc_label__make_proc_label_3_0_i23);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(6);
	if (MR_INT_NE(MR_sv(3),0)) {
		MR_GOTO_LAB(fn__backend_libs__proc_label__make_proc_label_3_0_i24);
	}
	MR_np_call_localret_ent(hlds__hlds_pred__in_in_unification_proc_id_1_0,
		fn__backend_libs__proc_label__make_proc_label_3_0_i31);
MR_def_label(fn__backend_libs__proc_label__make_proc_label_3_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_sv(1) == MR_r1)) {
		MR_GOTO_LAB(fn__backend_libs__proc_label__make_proc_label_3_0_i23);
	}
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_id_to_int_2_0,
		fn__backend_libs__proc_label__make_proc_label_3_0_i33);
MR_def_label(fn__backend_libs__proc_label__make_proc_label_3_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(6);
MR_def_label(fn__backend_libs__proc_label__make_proc_label_3_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_sv(6) = MR_r2;
	MR_sv(7) = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_id_to_int_2_0,
		fn__backend_libs__proc_label__make_proc_label_3_0_i33);
MR_def_label(fn__backend_libs__proc_label__make_proc_label_3_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 6);
	MR_tfield(1, MR_r2, 0) = MR_sv(7);
	MR_tfield(1, MR_r2, 1) = MR_sv(3);
	MR_tfield(1, MR_r2, 2) = MR_sv(6);
	MR_tfield(1, MR_r2, 3) = MR_sv(5);
	MR_tfield(1, MR_r2, 4) = MR_sv(4);
	MR_tfield(1, MR_r2, 5) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(8);
MR_def_label(fn__backend_libs__proc_label__make_proc_label_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_r2 = (MR_Word) MR_string_const("\'", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__backend_libs__proc_label__make_proc_label_3_0_i35);
MR_def_label(fn__backend_libs__proc_label__make_proc_label_3_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("cannot make label for special pred \140", 36);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__backend_libs__proc_label__make_proc_label_3_0_i36);
MR_def_label(fn__backend_libs__proc_label__make_proc_label_3_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("backend_libs.proc_label", 23);
	MR_r2 = (MR_Word) MR_string_const("function \140backend_libs.proc_label.do_make_proc_label\'/8", 55);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(require__unexpected_3_0);
	}
MR_def_label(fn__backend_libs__proc_label__make_proc_label_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		fn__backend_libs__proc_label__make_proc_label_3_0_i43);
MR_def_label(fn__backend_libs__proc_label__make_proc_label_3_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(fn__backend_libs__proc_label__make_proc_label_3_0_i40);
	}
	if (MR_INT_NE(MR_sv(3),0)) {
		MR_GOTO_LAB(fn__backend_libs__proc_label__make_proc_label_3_0_i40);
	}
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_id_to_int_2_0,
		fn__backend_libs__proc_label__make_proc_label_3_0_i47);
MR_def_label(fn__backend_libs__proc_label__make_proc_label_3_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_sv(7) = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_id_to_int_2_0,
		fn__backend_libs__proc_label__make_proc_label_3_0_i47);
MR_def_label(fn__backend_libs__proc_label__make_proc_label_3_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 6);
	MR_tfield(0, MR_r2, 0) = MR_sv(7);
	MR_tfield(0, MR_r2, 1) = MR_sv(4);
	MR_tfield(0, MR_r2, 2) = MR_sv(5);
	MR_tfield(0, MR_r2, 3) = MR_sv(6);
	MR_tfield(0, MR_r2, 4) = MR_sv(2);
	MR_tfield(0, MR_r2, 5) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(backend_libs__proc_label_module2)
	MR_init_entry1(fn__backend_libs__proc_label__make_uni_label_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__backend_libs__proc_label__make_uni_label_3_0);
	MR_init_label5(fn__backend_libs__proc_label__make_uni_label_3_0,2,6,5,8,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'make_uni_label'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__backend_libs__proc_label__make_uni_label_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(5) = MR_r2;
	MR_sv(1) = MR_r3;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_name_2_0,
		fn__backend_libs__proc_label__make_uni_label_3_0_i2);
MR_def_label(fn__backend_libs__proc_label__make_uni_label_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(fn__backend_libs__proc_label__make_uni_label_3_0_i3);
	}
	MR_sv(4) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(3) = MR_tfield(1, MR_r2, 1);
	MR_sv(2) = MR_tfield(1, MR_r2, 0);
	MR_sv(5) = MR_r1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__in_in_unification_proc_id_1_0,
		fn__backend_libs__proc_label__make_uni_label_3_0_i6);
MR_def_label(fn__backend_libs__proc_label__make_uni_label_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_sv(1) != MR_r1)) {
		MR_GOTO_LAB(fn__backend_libs__proc_label__make_uni_label_3_0_i5);
	}
	MR_r1 = MR_sv(1);
	MR_sv(5) = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_id_to_int_2_0,
		fn__backend_libs__proc_label__make_uni_label_3_0_i8);
MR_def_label(fn__backend_libs__proc_label__make_uni_label_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_id_to_int_2_0,
		fn__backend_libs__proc_label__make_uni_label_3_0_i8);
MR_def_label(fn__backend_libs__proc_label__make_uni_label_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 6);
	MR_tfield(1, MR_r2, 0) = MR_sv(5);
	MR_tfield(1, MR_r2, 1) = (MR_Integer) 0;
	MR_tfield(1, MR_r2, 2) = MR_sv(2);
	MR_tfield(1, MR_r2, 3) = MR_sv(3);
	MR_tfield(1, MR_r2, 4) = MR_sv(4);
	MR_tfield(1, MR_r2, 5) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(6);
MR_def_label(fn__backend_libs__proc_label__make_uni_label_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("backend_libs.proc_label", 23);
	MR_r2 = (MR_Word) MR_string_const("function \140backend_libs.proc_label.make_uni_label\'/3", 51);
	MR_r3 = (MR_Word) MR_string_const("unqualified type_ctor", 21);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(require__unexpected_3_0);
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
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__backend_libs__proc_label__init(void);
void mercury__backend_libs__proc_label__init_type_tables(void);
void mercury__backend_libs__proc_label__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__backend_libs__proc_label__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__backend_libs__proc_label__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__backend_libs__proc_label__init_threadscope_string_table(void);
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

void mercury__backend_libs__proc_label__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_layout__backend_libs__proc_label);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__backend_libs__proc_label__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__backend_libs__proc_label__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
