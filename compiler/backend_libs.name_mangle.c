/*
** Automatically generated from `name_mangle.m'
** by the Mercury compiler,
** version rotd-2007-12-21, configured for i686-pc-linux-gnu.
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
INIT mercury__backend_libs__name_mangle__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 532 "../library/io.int"
#include "io.mh"

#line 27 "backend_libs.name_mangle.c"
#line 540 "../library/io.int"
#include "string.mh"

#line 31 "backend_libs.name_mangle.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 35 "backend_libs.name_mangle.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 39 "backend_libs.name_mangle.c"
#line 87 "../library/table_builtin.int2"
#include "table_builtin.mh"

#line 43 "backend_libs.name_mangle.c"
#line 33 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 47 "backend_libs.name_mangle.c"
#line 31 "../library/array.int2"
#include "array.mh"

#line 51 "backend_libs.name_mangle.c"
#line 52 "backend_libs.name_mangle.c"
#include "backend_libs.name_mangle.mh"

#line 55 "backend_libs.name_mangle.c"
#line 56 "backend_libs.name_mangle.c"
#ifndef BACKEND_LIBS__NAME_MANGLE_DECL_GUARD
#define BACKEND_LIBS__NAME_MANGLE_DECL_GUARD

#line 60 "backend_libs.name_mangle.c"
#line 61 "backend_libs.name_mangle.c"

#endif
#line 64 "backend_libs.name_mangle.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

struct mercury_type_0 {
	MR_String f1;
};
MR_STATIC_LINKAGE const struct mercury_type_0 mercury_common_0[];
MR_decl_label3(backend_libs__name_mangle__name_doesnt_need_mangling_1_0, 2,5,1)
MR_decl_label3(backend_libs__name_mangle__output_base_typeclass_info_name_4_0, 2,3,4)
MR_decl_label1(backend_libs__name_mangle__output_init_name_3_0, 2)
MR_decl_label1(backend_libs__name_mangle__output_proc_label_3_0, 2)
MR_decl_label1(backend_libs__name_mangle__output_proc_label_maybe_prefix_4_0, 2)
MR_decl_label1(backend_libs__name_mangle__output_proc_label_no_prefix_3_0, 2)
MR_decl_label7(backend_libs__name_mangle__sym_name_doesnt_need_mangling_1_0, 4,7,3,9,11,14,1)
MR_decl_label3(fn__backend_libs__name_mangle__make_base_typeclass_info_name_2_0, 2,3,4)
MR_decl_label8(fn__backend_libs__name_mangle__make_pred_or_func_name_6_0, 2,3,7,10,6,4,12,18)
MR_decl_label6(fn__backend_libs__name_mangle__make_pred_or_func_name_6_0, 20,15,22,23,24,27)
MR_decl_label8(fn__backend_libs__name_mangle__proc_label_to_c_string_2_0, 4,5,9,12,8,6,14,20)
MR_decl_label8(fn__backend_libs__name_mangle__proc_label_to_c_string_2_0, 22,17,24,25,27,28,26,30)
MR_decl_label8(fn__backend_libs__name_mangle__proc_label_to_c_string_2_0, 31,32,33,3,35,36,37,38)
MR_decl_label8(fn__backend_libs__name_mangle__proc_label_to_c_string_2_0, 39,40,41,42,43,46,44,48)
MR_def_extern_entry(fn__backend_libs__name_mangle__mercury_label_prefix_0_0)
MR_decl_static(fn__backend_libs__name_mangle__make_pred_or_func_name_6_0)
MR_def_extern_entry(fn__backend_libs__name_mangle__proc_label_to_c_string_2_0)
MR_def_extern_entry(backend_libs__name_mangle__output_proc_label_maybe_prefix_4_0)
MR_def_extern_entry(backend_libs__name_mangle__output_proc_label_3_0)
MR_def_extern_entry(backend_libs__name_mangle__output_proc_label_no_prefix_3_0)
MR_def_extern_entry(backend_libs__name_mangle__name_doesnt_need_mangling_1_0)
MR_def_extern_entry(backend_libs__name_mangle__sym_name_doesnt_need_mangling_1_0)
MR_def_extern_entry(fn__backend_libs__name_mangle__make_base_typeclass_info_name_2_0)
MR_def_extern_entry(fn__backend_libs__name_mangle__mercury_data_prefix_0_0)
MR_def_extern_entry(backend_libs__name_mangle__output_base_typeclass_info_name_4_0)
MR_def_extern_entry(backend_libs__name_mangle__output_init_name_3_0)
MR_def_extern_entry(fn__backend_libs__name_mangle__mercury_var_prefix_0_0)
MR_def_extern_entry(fn__backend_libs__name_mangle__mercury_scalar_common_array_prefix_0_0)
MR_def_extern_entry(fn__backend_libs__name_mangle__mercury_vector_common_array_prefix_0_0)
MR_def_extern_entry(fn__backend_libs__name_mangle__mercury_common_type_prefix_0_0)

static const struct mercury_type_0 mercury_common_0[1] =
{
{
MR_string_const("", 0)
},
};


MR_BEGIN_MODULE(backend_libs__name_mangle_module0)
	MR_init_entry1(fn__backend_libs__name_mangle__mercury_label_prefix_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__backend_libs__name_mangle__mercury_label_prefix_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mercury__", 9);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__parse_tree__prog_foreign__sym_name_mangle_1_0);
MR_decl_entry(string__prefix_2_0);
MR_decl_entry(__Unify___mdbcomp__prim_data__sym_name_0_0);
MR_decl_entry(fn__parse_tree__prog_foreign__qualify_name_2_0);
MR_decl_entry(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
MR_decl_entry(fn__parse_tree__prog_foreign__name_mangle_1_0);

MR_BEGIN_MODULE(backend_libs__name_mangle_module1)
	MR_init_entry1(fn__backend_libs__name_mangle__make_pred_or_func_name_6_0);
	MR_init_label8(fn__backend_libs__name_mangle__make_pred_or_func_name_6_0,2,3,7,10,6,4,12,18)
	MR_init_label6(fn__backend_libs__name_mangle__make_pred_or_func_name_6_0,20,15,22,23,24,27)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__backend_libs__name_mangle__make_pred_or_func_name_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r6;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__parse_tree__prog_foreign__sym_name_mangle_1_0,
		fn__backend_libs__name_mangle__make_pred_or_func_name_6_0_i2);
MR_def_label(fn__backend_libs__name_mangle__make_pred_or_func_name_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__parse_tree__prog_foreign__sym_name_mangle_1_0,
		fn__backend_libs__name_mangle__make_pred_or_func_name_6_0_i3);
MR_def_label(fn__backend_libs__name_mangle__make_pred_or_func_name_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_sv(4), (char *)(MR_Word) MR_string_const("main", 4)) != 0)) {
		MR_GOTO_LAB(fn__backend_libs__name_mangle__make_pred_or_func_name_6_0_i7);
	}
	if (MR_INT_NE(MR_sv(5),2)) {
		MR_GOTO_LAB(fn__backend_libs__name_mangle__make_pred_or_func_name_6_0_i7);
	}
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_GOTO_LAB(fn__backend_libs__name_mangle__make_pred_or_func_name_6_0_i6);
MR_def_label(fn__backend_libs__name_mangle__make_pred_or_func_name_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Word) MR_string_const("__", 2);
	MR_np_call_localret_ent(string__prefix_2_0,
		fn__backend_libs__name_mangle__make_pred_or_func_name_6_0_i10);
MR_def_label(fn__backend_libs__name_mangle__make_pred_or_func_name_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__backend_libs__name_mangle__make_pred_or_func_name_6_0_i4);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
MR_def_label(fn__backend_libs__name_mangle__make_pred_or_func_name_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_sv(4);
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		fn__backend_libs__name_mangle__make_pred_or_func_name_6_0_i18);
MR_def_label(fn__backend_libs__name_mangle__make_pred_or_func_name_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(fn__parse_tree__prog_foreign__qualify_name_2_0,
		fn__backend_libs__name_mangle__make_pred_or_func_name_6_0_i12);
MR_def_label(fn__backend_libs__name_mangle__make_pred_or_func_name_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		fn__backend_libs__name_mangle__make_pred_or_func_name_6_0_i18);
MR_def_label(fn__backend_libs__name_mangle__make_pred_or_func_name_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(fn__backend_libs__name_mangle__make_pred_or_func_name_6_0_i15);
	}
	MR_r1 = (MR_Word) MR_string_const("__", 2);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__backend_libs__name_mangle__make_pred_or_func_name_6_0_i20);
MR_def_label(fn__backend_libs__name_mangle__make_pred_or_func_name_6_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__backend_libs__name_mangle__make_pred_or_func_name_6_0_i22);
MR_def_label(fn__backend_libs__name_mangle__make_pred_or_func_name_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
MR_def_label(fn__backend_libs__name_mangle__make_pred_or_func_name_6_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__parse_tree__prog_foreign__name_mangle_1_0,
		fn__backend_libs__name_mangle__make_pred_or_func_name_6_0_i23);
MR_def_label(fn__backend_libs__name_mangle__make_pred_or_func_name_6_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_sv(2),0)) {
		MR_GOTO_LAB(fn__backend_libs__name_mangle__make_pred_or_func_name_6_0_i24);
	}
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("fn__", 4);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__backend_libs__name_mangle__make_pred_or_func_name_6_0_i24);
MR_def_label(fn__backend_libs__name_mangle__make_pred_or_func_name_6_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_sv(6),0)) {
		MR_GOTO_LAB(fn__backend_libs__name_mangle__make_pred_or_func_name_6_0_i27);
	}
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("mercury__", 9);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
MR_def_label(fn__backend_libs__name_mangle__make_pred_or_func_name_6_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(string__int_to_string_2_0);
MR_decl_entry(string__append_list_2_0);
MR_decl_entry(fn__hlds__special_pred__special_pred_name_2_0);
MR_decl_entry(string__append_3_2);
MR_decl_entry(string__append_3_1);

MR_BEGIN_MODULE(backend_libs__name_mangle_module2)
	MR_init_entry1(fn__backend_libs__name_mangle__proc_label_to_c_string_2_0);
	MR_init_label8(fn__backend_libs__name_mangle__proc_label_to_c_string_2_0,4,5,9,12,8,6,14,20)
	MR_init_label8(fn__backend_libs__name_mangle__proc_label_to_c_string_2_0,22,17,24,25,27,28,26,30)
	MR_init_label8(fn__backend_libs__name_mangle__proc_label_to_c_string_2_0,31,32,33,3,35,36,37,38)
	MR_init_label8(fn__backend_libs__name_mangle__proc_label_to_c_string_2_0,39,40,41,42,43,46,44,48)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__backend_libs__name_mangle__proc_label_to_c_string_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(fn__backend_libs__name_mangle__proc_label_to_c_string_2_0_i3);
	}
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 2);
	MR_sv(5) = MR_ctfield(0, MR_tempr1, 3);
	MR_sv(6) = MR_ctfield(0, MR_tempr1, 4);
	MR_sv(7) = MR_ctfield(0, MR_tempr1, 5);
	MR_r1 = MR_sv(4);
	}
	MR_np_call_localret_ent(fn__parse_tree__prog_foreign__sym_name_mangle_1_0,
		fn__backend_libs__name_mangle__proc_label_to_c_string_2_0_i4);
MR_def_label(fn__backend_libs__name_mangle__proc_label_to_c_string_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__parse_tree__prog_foreign__sym_name_mangle_1_0,
		fn__backend_libs__name_mangle__proc_label_to_c_string_2_0_i5);
MR_def_label(fn__backend_libs__name_mangle__proc_label_to_c_string_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_sv(5), (char *)(MR_Word) MR_string_const("main", 4)) != 0)) {
		MR_GOTO_LAB(fn__backend_libs__name_mangle__proc_label_to_c_string_2_0_i9);
	}
	if (MR_INT_NE(MR_sv(6),2)) {
		MR_GOTO_LAB(fn__backend_libs__name_mangle__proc_label_to_c_string_2_0_i9);
	}
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_GOTO_LAB(fn__backend_libs__name_mangle__proc_label_to_c_string_2_0_i8);
MR_def_label(fn__backend_libs__name_mangle__proc_label_to_c_string_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = (MR_Word) MR_string_const("__", 2);
	MR_np_call_localret_ent(string__prefix_2_0,
		fn__backend_libs__name_mangle__proc_label_to_c_string_2_0_i12);
MR_def_label(fn__backend_libs__name_mangle__proc_label_to_c_string_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__backend_libs__name_mangle__proc_label_to_c_string_2_0_i6);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
MR_def_label(fn__backend_libs__name_mangle__proc_label_to_c_string_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_sv(5);
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		fn__backend_libs__name_mangle__proc_label_to_c_string_2_0_i20);
MR_def_label(fn__backend_libs__name_mangle__proc_label_to_c_string_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(9);
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(fn__parse_tree__prog_foreign__qualify_name_2_0,
		fn__backend_libs__name_mangle__proc_label_to_c_string_2_0_i14);
MR_def_label(fn__backend_libs__name_mangle__proc_label_to_c_string_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_sv(2) = MR_tempr1;
	}
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		fn__backend_libs__name_mangle__proc_label_to_c_string_2_0_i20);
MR_def_label(fn__backend_libs__name_mangle__proc_label_to_c_string_2_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(fn__backend_libs__name_mangle__proc_label_to_c_string_2_0_i17);
	}
	MR_r1 = (MR_Word) MR_string_const("__", 2);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__backend_libs__name_mangle__proc_label_to_c_string_2_0_i22);
MR_def_label(fn__backend_libs__name_mangle__proc_label_to_c_string_2_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__backend_libs__name_mangle__proc_label_to_c_string_2_0_i24);
MR_def_label(fn__backend_libs__name_mangle__proc_label_to_c_string_2_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
MR_def_label(fn__backend_libs__name_mangle__proc_label_to_c_string_2_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__parse_tree__prog_foreign__name_mangle_1_0,
		fn__backend_libs__name_mangle__proc_label_to_c_string_2_0_i25);
MR_def_label(fn__backend_libs__name_mangle__proc_label_to_c_string_2_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(3),0)) {
		MR_GOTO_LAB(fn__backend_libs__name_mangle__proc_label_to_c_string_2_0_i27);
	}
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_GOTO_LAB(fn__backend_libs__name_mangle__proc_label_to_c_string_2_0_i26);
MR_def_label(fn__backend_libs__name_mangle__proc_label_to_c_string_2_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("fn__", 4);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__backend_libs__name_mangle__proc_label_to_c_string_2_0_i28);
MR_def_label(fn__backend_libs__name_mangle__proc_label_to_c_string_2_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = ((MR_Integer) MR_sv(6) - (MR_Integer) 1);
MR_def_label(fn__backend_libs__name_mangle__proc_label_to_c_string_2_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),0)) {
		MR_GOTO_LAB(fn__backend_libs__name_mangle__proc_label_to_c_string_2_0_i30);
	}
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(string__int_to_string_2_0,
		fn__backend_libs__name_mangle__proc_label_to_c_string_2_0_i32);
MR_def_label(fn__backend_libs__name_mangle__proc_label_to_c_string_2_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("mercury__", 9);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__backend_libs__name_mangle__proc_label_to_c_string_2_0_i31);
MR_def_label(fn__backend_libs__name_mangle__proc_label_to_c_string_2_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(string__int_to_string_2_0,
		fn__backend_libs__name_mangle__proc_label_to_c_string_2_0_i32);
MR_def_label(fn__backend_libs__name_mangle__proc_label_to_c_string_2_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(string__int_to_string_2_0,
		fn__backend_libs__name_mangle__proc_label_to_c_string_2_0_i33);
MR_def_label(fn__backend_libs__name_mangle__proc_label_to_c_string_2_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_string_const("_", 1);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_string_const("_", 1);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r1 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(string__append_list_2_0);
	}
MR_def_label(fn__backend_libs__name_mangle__proc_label_to_c_string_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tempr3 = MR_r1;
	MR_tfield(1, MR_tempr1, 0) = MR_ctfield(1, MR_tempr3, 2);
	MR_tfield(1, MR_tempr1, 1) = MR_ctfield(1, MR_tempr3, 3);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_ctfield(1, MR_tempr3, 4);
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_ctfield(1, MR_tempr3, 0);
	MR_sv(3) = MR_ctfield(1, MR_tempr1, 0);
	MR_sv(4) = MR_ctfield(1, MR_tempr1, 1);
	MR_sv(5) = MR_ctfield(0, MR_tempr2, 1);
	MR_sv(6) = MR_ctfield(1, MR_tempr3, 5);
	MR_r1 = MR_ctfield(1, MR_r1, 1);
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__hlds__special_pred__special_pred_name_2_0,
		fn__backend_libs__name_mangle__proc_label_to_c_string_2_0_i35);
MR_def_label(fn__backend_libs__name_mangle__proc_label_to_c_string_2_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_r1;
	MR_r5 = (MR_Integer) -1;
	MR_r6 = MR_sv(1);
	MR_np_call_localret_ent(fn__backend_libs__name_mangle__make_pred_or_func_name_6_0,
		fn__backend_libs__name_mangle__proc_label_to_c_string_2_0_i36);
MR_def_label(fn__backend_libs__name_mangle__proc_label_to_c_string_2_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_sv(5) = MR_tempr1;
	}
	MR_np_call_localret_ent(string__int_to_string_2_0,
		fn__backend_libs__name_mangle__proc_label_to_c_string_2_0_i37);
MR_def_label(fn__backend_libs__name_mangle__proc_label_to_c_string_2_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(string__int_to_string_2_0,
		fn__backend_libs__name_mangle__proc_label_to_c_string_2_0_i38);
MR_def_label(fn__backend_libs__name_mangle__proc_label_to_c_string_2_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__parse_tree__prog_foreign__sym_name_mangle_1_0,
		fn__backend_libs__name_mangle__proc_label_to_c_string_2_0_i39);
MR_def_label(fn__backend_libs__name_mangle__proc_label_to_c_string_2_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__parse_tree__prog_foreign__sym_name_mangle_1_0,
		fn__backend_libs__name_mangle__proc_label_to_c_string_2_0_i40);
MR_def_label(fn__backend_libs__name_mangle__proc_label_to_c_string_2_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(fn__parse_tree__prog_foreign__name_mangle_1_0,
		fn__backend_libs__name_mangle__proc_label_to_c_string_2_0_i41);
MR_def_label(fn__backend_libs__name_mangle__proc_label_to_c_string_2_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__parse_tree__prog_foreign__qualify_name_2_0,
		fn__backend_libs__name_mangle__proc_label_to_c_string_2_0_i42);
MR_def_label(fn__backend_libs__name_mangle__proc_label_to_c_string_2_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("__", 2);
	}
	MR_np_call_localret_ent(string__append_3_2,
		fn__backend_libs__name_mangle__proc_label_to_c_string_2_0_i43);
MR_def_label(fn__backend_libs__name_mangle__proc_label_to_c_string_2_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(string__append_3_1,
		fn__backend_libs__name_mangle__proc_label_to_c_string_2_0_i46);
MR_def_label(fn__backend_libs__name_mangle__proc_label_to_c_string_2_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__backend_libs__name_mangle__proc_label_to_c_string_2_0_i44);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_string_const("_", 1);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_string_const("_", 1);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_string_const("_", 1);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r1 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(string__append_list_2_0);
	}
MR_def_label(fn__backend_libs__name_mangle__proc_label_to_c_string_2_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(string__append_3_2,
		fn__backend_libs__name_mangle__proc_label_to_c_string_2_0_i48);
MR_def_label(fn__backend_libs__name_mangle__proc_label_to_c_string_2_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_string_const("_", 1);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_string_const("_", 1);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_string_const("_", 1);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r1 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(string__append_list_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(io__write_string_3_0);

MR_BEGIN_MODULE(backend_libs__name_mangle_module3)
	MR_init_entry1(backend_libs__name_mangle__output_proc_label_maybe_prefix_4_0);
	MR_init_label1(backend_libs__name_mangle__output_proc_label_maybe_prefix_4_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__backend_libs__name_mangle__output_proc_label_maybe_prefix_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__backend_libs__name_mangle__proc_label_to_c_string_2_0,
		backend_libs__name_mangle__output_proc_label_maybe_prefix_4_0_i2);
MR_def_label(backend_libs__name_mangle__output_proc_label_maybe_prefix_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(backend_libs__name_mangle_module4)
	MR_init_entry1(backend_libs__name_mangle__output_proc_label_3_0);
	MR_init_label1(backend_libs__name_mangle__output_proc_label_3_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__backend_libs__name_mangle__output_proc_label_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r2 = (MR_Integer) 1;
	MR_np_call_localret_ent(fn__backend_libs__name_mangle__proc_label_to_c_string_2_0,
		backend_libs__name_mangle__output_proc_label_3_0_i2);
MR_def_label(backend_libs__name_mangle__output_proc_label_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(backend_libs__name_mangle_module5)
	MR_init_entry1(backend_libs__name_mangle__output_proc_label_no_prefix_3_0);
	MR_init_label1(backend_libs__name_mangle__output_proc_label_no_prefix_3_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__backend_libs__name_mangle__output_proc_label_no_prefix_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r2 = (MR_Integer) 0;
	MR_np_call_localret_ent(fn__backend_libs__name_mangle__proc_label_to_c_string_2_0,
		backend_libs__name_mangle__output_proc_label_no_prefix_3_0_i2);
MR_def_label(backend_libs__name_mangle__output_proc_label_no_prefix_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(string__is_all_alnum_or_underscore_1_0);

MR_BEGIN_MODULE(backend_libs__name_mangle_module6)
	MR_init_entry1(backend_libs__name_mangle__name_doesnt_need_mangling_1_0);
	MR_init_label3(backend_libs__name_mangle__name_doesnt_need_mangling_1_0,2,5,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__backend_libs__name_mangle__name_doesnt_need_mangling_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(string__is_all_alnum_or_underscore_1_0,
		backend_libs__name_mangle__name_doesnt_need_mangling_1_0_i2);
MR_def_label(backend_libs__name_mangle__name_doesnt_need_mangling_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(backend_libs__name_mangle__name_doesnt_need_mangling_1_0_i1);
	}
	MR_r1 = (MR_Word) MR_string_const("f_", 2);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(string__append_3_1,
		backend_libs__name_mangle__name_doesnt_need_mangling_1_0_i5);
MR_def_label(backend_libs__name_mangle__name_doesnt_need_mangling_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(backend_libs__name_mangle__name_doesnt_need_mangling_1_0_i1);
	}
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(backend_libs__name_mangle__name_doesnt_need_mangling_1_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(backend_libs__name_mangle_module7)
	MR_init_entry1(backend_libs__name_mangle__sym_name_doesnt_need_mangling_1_0);
	MR_init_label7(backend_libs__name_mangle__sym_name_doesnt_need_mangling_1_0,4,7,3,9,11,14,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__backend_libs__name_mangle__sym_name_doesnt_need_mangling_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(backend_libs__name_mangle__sym_name_doesnt_need_mangling_1_0_i3);
	}
	MR_sv(1) = MR_ctfield(0, MR_r1, 0);
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(string__is_all_alnum_or_underscore_1_0,
		backend_libs__name_mangle__sym_name_doesnt_need_mangling_1_0_i4);
MR_def_label(backend_libs__name_mangle__sym_name_doesnt_need_mangling_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(backend_libs__name_mangle__sym_name_doesnt_need_mangling_1_0_i1);
	}
	MR_r1 = (MR_Word) MR_string_const("f_", 2);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(string__append_3_1,
		backend_libs__name_mangle__sym_name_doesnt_need_mangling_1_0_i7);
MR_def_label(backend_libs__name_mangle__sym_name_doesnt_need_mangling_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(backend_libs__name_mangle__sym_name_doesnt_need_mangling_1_0_i1);
	}
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(backend_libs__name_mangle__sym_name_doesnt_need_mangling_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_np_localcall_lab(backend_libs__name_mangle__sym_name_doesnt_need_mangling_1_0,
		backend_libs__name_mangle__sym_name_doesnt_need_mangling_1_0_i9);
MR_def_label(backend_libs__name_mangle__sym_name_doesnt_need_mangling_1_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(backend_libs__name_mangle__sym_name_doesnt_need_mangling_1_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(string__is_all_alnum_or_underscore_1_0,
		backend_libs__name_mangle__sym_name_doesnt_need_mangling_1_0_i11);
MR_def_label(backend_libs__name_mangle__sym_name_doesnt_need_mangling_1_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(backend_libs__name_mangle__sym_name_doesnt_need_mangling_1_0_i1);
	}
	MR_r1 = (MR_Word) MR_string_const("f_", 2);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(string__append_3_1,
		backend_libs__name_mangle__sym_name_doesnt_need_mangling_1_0_i14);
MR_def_label(backend_libs__name_mangle__sym_name_doesnt_need_mangling_1_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(backend_libs__name_mangle__sym_name_doesnt_need_mangling_1_0_i1);
	}
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(backend_libs__name_mangle__sym_name_doesnt_need_mangling_1_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(backend_libs__name_mangle_module8)
	MR_init_entry1(fn__backend_libs__name_mangle__make_base_typeclass_info_name_2_0);
	MR_init_label3(fn__backend_libs__name_mangle__make_base_typeclass_info_name_2_0,2,3,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__backend_libs__name_mangle__make_base_typeclass_info_name_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tempr2 = MR_r1;
	MR_tfield(1, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(1, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_ctfield(0, MR_tempr2, 2);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__parse_tree__prog_foreign__sym_name_mangle_1_0,
		fn__backend_libs__name_mangle__make_base_typeclass_info_name_2_0_i2);
MR_def_label(fn__backend_libs__name_mangle__make_base_typeclass_info_name_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	}
	MR_np_call_localret_ent(string__int_to_string_2_0,
		fn__backend_libs__name_mangle__make_base_typeclass_info_name_2_0_i3);
MR_def_label(fn__backend_libs__name_mangle__make_base_typeclass_info_name_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__parse_tree__prog_foreign__name_mangle_1_0,
		fn__backend_libs__name_mangle__make_base_typeclass_info_name_2_0_i4);
MR_def_label(fn__backend_libs__name_mangle__make_base_typeclass_info_name_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_string_const("__", 2);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_string_const("__arity", 7);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r1 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = (MR_Word) MR_string_const("base_typeclass_info_", 20);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(string__append_list_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(backend_libs__name_mangle_module9)
	MR_init_entry1(fn__backend_libs__name_mangle__mercury_data_prefix_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__backend_libs__name_mangle__mercury_data_prefix_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mercury_data_", 13);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(backend_libs__name_mangle_module10)
	MR_init_entry1(backend_libs__name_mangle__output_base_typeclass_info_name_4_0);
	MR_init_label3(backend_libs__name_mangle__output_base_typeclass_info_name_4_0,2,3,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__backend_libs__name_mangle__output_base_typeclass_info_name_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__backend_libs__name_mangle__make_base_typeclass_info_name_2_0,
		backend_libs__name_mangle__output_base_typeclass_info_name_4_0_i2);
MR_def_label(backend_libs__name_mangle__output_base_typeclass_info_name_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("mercury_data_", 13);
	MR_np_call_localret_ent(io__write_string_3_0,
		backend_libs__name_mangle__output_base_typeclass_info_name_4_0_i3);
MR_def_label(backend_libs__name_mangle__output_base_typeclass_info_name_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("__", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		backend_libs__name_mangle__output_base_typeclass_info_name_4_0_i4);
MR_def_label(backend_libs__name_mangle__output_base_typeclass_info_name_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__parse_tree__prog_foreign__make_init_name_1_0);

MR_BEGIN_MODULE(backend_libs__name_mangle_module11)
	MR_init_entry1(backend_libs__name_mangle__output_init_name_3_0);
	MR_init_label1(backend_libs__name_mangle__output_init_name_3_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__backend_libs__name_mangle__output_init_name_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__parse_tree__prog_foreign__make_init_name_1_0,
		backend_libs__name_mangle__output_init_name_3_0_i2);
MR_def_label(backend_libs__name_mangle__output_init_name_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(backend_libs__name_mangle_module12)
	MR_init_entry1(fn__backend_libs__name_mangle__mercury_var_prefix_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__backend_libs__name_mangle__mercury_var_prefix_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mercury_var_", 12);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(backend_libs__name_mangle_module13)
	MR_init_entry1(fn__backend_libs__name_mangle__mercury_scalar_common_array_prefix_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__backend_libs__name_mangle__mercury_scalar_common_array_prefix_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mercury_common_", 15);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(backend_libs__name_mangle_module14)
	MR_init_entry1(fn__backend_libs__name_mangle__mercury_vector_common_array_prefix_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__backend_libs__name_mangle__mercury_vector_common_array_prefix_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mercury_vector_common_", 22);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(backend_libs__name_mangle_module15)
	MR_init_entry1(fn__backend_libs__name_mangle__mercury_common_type_prefix_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__backend_libs__name_mangle__mercury_common_type_prefix_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mercury_type_", 13);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__backend_libs__name_mangle_maybe_bunch_0(void)
{
	backend_libs__name_mangle_module0();
	backend_libs__name_mangle_module1();
	backend_libs__name_mangle_module2();
	backend_libs__name_mangle_module3();
	backend_libs__name_mangle_module4();
	backend_libs__name_mangle_module5();
	backend_libs__name_mangle_module6();
	backend_libs__name_mangle_module7();
	backend_libs__name_mangle_module8();
	backend_libs__name_mangle_module9();
	backend_libs__name_mangle_module10();
	backend_libs__name_mangle_module11();
	backend_libs__name_mangle_module12();
	backend_libs__name_mangle_module13();
	backend_libs__name_mangle_module14();
	backend_libs__name_mangle_module15();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__backend_libs__name_mangle__init(void);
void mercury__backend_libs__name_mangle__init_type_tables(void);
void mercury__backend_libs__name_mangle__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__backend_libs__name_mangle__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__backend_libs__name_mangle__init_complexity_procs(void);
#endif

void mercury__backend_libs__name_mangle__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__backend_libs__name_mangle_maybe_bunch_0();
	mercury__backend_libs__name_mangle__init_debugger();
}

void mercury__backend_libs__name_mangle__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}


void mercury__backend_libs__name_mangle__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__backend_libs__name_mangle__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__backend_libs__name_mangle);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__backend_libs__name_mangle__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
