/*
** Automatically generated from `llds_out_code_addr.m'
** by the Mercury compiler,
** version rotd-2011-07-01, configured for x86_64-unknown-linux-gnu.
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
INIT mercury__ll_backend__llds_out__llds_out_code_addr__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 526 "../library/io.int"
#include "io.mh"

#line 28 "ll_backend.llds_out.llds_out_code_addr.c"
#line 536 "../library/io.int"
#include "string.mh"

#line 32 "ll_backend.llds_out.llds_out_code_addr.c"
#line 31 "../library/bitmap.int2"
#include "bitmap.mh"

#line 36 "ll_backend.llds_out.llds_out_code_addr.c"
#line 30 "../library/time.int2"
#include "time.mh"

#line 40 "ll_backend.llds_out.llds_out_code_addr.c"
#line 33 "../library/array.int2"
#include "array.mh"

#line 44 "ll_backend.llds_out.llds_out_code_addr.c"
#line 39 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 48 "ll_backend.llds_out.llds_out_code_addr.c"
#line 49 "ll_backend.llds_out.llds_out_code_addr.c"
#include "ll_backend.llds_out.llds_out_code_addr.mh"

#line 52 "ll_backend.llds_out.llds_out_code_addr.c"
#line 53 "ll_backend.llds_out.llds_out_code_addr.c"
#ifndef LL_BACKEND__LLDS_OUT__LLDS_OUT_CODE_ADDR_DECL_GUARD
#define LL_BACKEND__LLDS_OUT__LLDS_OUT_CODE_ADDR_DECL_GUARD

#line 57 "ll_backend.llds_out.llds_out_code_addr.c"
#line 58 "ll_backend.llds_out.llds_out_code_addr.c"

#endif
#line 61 "ll_backend.llds_out.llds_out_code_addr.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

extern const MR_TypeCtorInfo_Struct
	mercury_data_ll_backend__llds_out__llds_out_code_addr__type_ctor_info_wrapper_0;
MR_decl_label10(ll_backend__llds_out__llds_out_code_addr__code_addr_to_string_base_4_0, 3,4,5,6,7,8,9,12,55,16)
MR_decl_label9(ll_backend__llds_out__llds_out_code_addr__code_addr_to_string_base_4_0, 11,20,21,18,25,26,27,23,29)
MR_decl_label1(ll_backend__llds_out__llds_out_code_addr__output_code_addr_3_0, 2)
MR_decl_label10(ll_backend__llds_out__llds_out_code_addr__output_code_addr_decls_4_0, 4,8,10,14,16,19,18,22,25,27)
MR_decl_label7(ll_backend__llds_out__llds_out_code_addr__output_code_addr_decls_4_0, 26,24,32,34,33,36,118)
MR_decl_label10(ll_backend__llds_out__llds_out_code_addr__output_code_addr_from_pieces_5_0, 6,5,10,58,56,16,15,20,21,19)
MR_decl_label2(ll_backend__llds_out__llds_out_code_addr__output_code_addr_from_pieces_5_0, 23,24)
MR_decl_label1(ll_backend__llds_out__llds_out_code_addr__output_label_3_0, 2)
MR_decl_label6(ll_backend__llds_out__llds_out_code_addr__output_label_as_code_addr_3_0, 2,21,6,12,14,3)
MR_decl_label4(ll_backend__llds_out__llds_out_code_addr__output_label_as_code_addr_decls_3_0, 7,8,9,27)
MR_decl_label1(ll_backend__llds_out__llds_out_code_addr__output_label_maybe_prefix_4_0, 2)
MR_decl_label1(ll_backend__llds_out__llds_out_code_addr__output_label_no_prefix_3_0, 2)
MR_decl_label1(ll_backend__llds_out__llds_out_code_addr__output_record_code_addr_decls_6_0, 2)
MR_decl_label10(ll_backend__llds_out__llds_out_code_addr__output_record_code_addr_decls_format_10_0, 4,2,7,13,9,49,19,35,25,26)
MR_decl_label1(fn__ll_backend__llds_out__llds_out_code_addr__ho_call_variant_to_string_1_0, 3)
MR_decl_label2(fn__ll_backend__llds_out__llds_out_code_addr__label_is_external_to_c_module_1_0, 8,5)
MR_decl_label4(fn__ll_backend__llds_out__llds_out_code_addr__label_to_c_string_2_0, 17,5,6,7)
MR_def_extern_entry(fn__ll_backend__llds_out__llds_out_code_addr__ho_call_variant_to_string_1_0)
MR_def_extern_entry(fn__ll_backend__llds_out__llds_out_code_addr__label_to_c_string_2_0)
MR_def_extern_entry(ll_backend__llds_out__llds_out_code_addr__output_label_no_prefix_3_0)
MR_decl_static(ll_backend__llds_out__llds_out_code_addr__output_label_as_code_addr_decls_3_0)
MR_decl_static(ll_backend__llds_out__llds_out_code_addr__output_code_addr_decls_4_0)
MR_def_extern_entry(ll_backend__llds_out__llds_out_code_addr__output_record_code_addr_decls_format_10_0)
MR_def_extern_entry(ll_backend__llds_out__llds_out_code_addr__output_record_code_addr_decls_6_0)
MR_def_extern_entry(ll_backend__llds_out__llds_out_code_addr__output_label_3_0)
MR_def_extern_entry(ll_backend__llds_out__llds_out_code_addr__output_label_maybe_prefix_4_0)
MR_def_extern_entry(ll_backend__llds_out__llds_out_code_addr__output_code_addr_from_pieces_5_0)
MR_def_extern_entry(fn__ll_backend__llds_out__llds_out_code_addr__label_is_external_to_c_module_1_0)
MR_def_extern_entry(ll_backend__llds_out__llds_out_code_addr__code_addr_to_string_base_4_0)
MR_def_extern_entry(ll_backend__llds_out__llds_out_code_addr__output_code_addr_3_0)
MR_def_extern_entry(ll_backend__llds_out__llds_out_code_addr__output_label_as_code_addr_3_0)
MR_def_extern_entry(__Unify___ll_backend__llds_out__llds_out_code_addr__wrapper_0_0)
MR_def_extern_entry(__Compare___ll_backend__llds_out__llds_out_code_addr__wrapper_0_0)

static const MR_EnumFunctorDesc mercury_data_ll_backend__llds_out__llds_out_code_addr__enum_functor_desc_wrapper_0_0 = {
	"wrapper_entry",
	0
};

static const MR_EnumFunctorDesc mercury_data_ll_backend__llds_out__llds_out_code_addr__enum_functor_desc_wrapper_0_1 = {
	"wrapper_label",
	1
};

static const MR_EnumFunctorDesc mercury_data_ll_backend__llds_out__llds_out_code_addr__enum_functor_desc_wrapper_0_2 = {
	"wrapper_none",
	2
};

const MR_EnumFunctorDescPtr mercury_data_ll_backend__llds_out__llds_out_code_addr__enum_value_ordered_wrapper_0[] = {
	&mercury_data_ll_backend__llds_out__llds_out_code_addr__enum_functor_desc_wrapper_0_0,
	&mercury_data_ll_backend__llds_out__llds_out_code_addr__enum_functor_desc_wrapper_0_1,
	&mercury_data_ll_backend__llds_out__llds_out_code_addr__enum_functor_desc_wrapper_0_2
};

const MR_EnumFunctorDescPtr mercury_data_ll_backend__llds_out__llds_out_code_addr__enum_name_ordered_wrapper_0[] = {
	&mercury_data_ll_backend__llds_out__llds_out_code_addr__enum_functor_desc_wrapper_0_0,
	&mercury_data_ll_backend__llds_out__llds_out_code_addr__enum_functor_desc_wrapper_0_1,
	&mercury_data_ll_backend__llds_out__llds_out_code_addr__enum_functor_desc_wrapper_0_2
};

const MR_Integer mercury_data_ll_backend__llds_out__llds_out_code_addr__functor_number_map_wrapper_0[] = {
	0,
	1,
	2 };
	
const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds_out__llds_out_code_addr__type_ctor_info_wrapper_0 = {
	0,
	14,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__llds_out__llds_out_code_addr__wrapper_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__llds_out__llds_out_code_addr__wrapper_0_0)),
	"ll_backend.llds_out.llds_out_code_addr",
	"wrapper",
	{ (void *)mercury_data_ll_backend__llds_out__llds_out_code_addr__enum_name_ordered_wrapper_0 },
	{ (void *)mercury_data_ll_backend__llds_out__llds_out_code_addr__enum_value_ordered_wrapper_0 },
	3,
	4,
	mercury_data_ll_backend__llds_out__llds_out_code_addr__functor_number_map_wrapper_0
};



MR_decl_entry(fn__string__int_to_string_1_0);

MR_BEGIN_MODULE(ll_backend__llds_out__llds_out_code_addr_module0)
	MR_init_entry1(fn__ll_backend__llds_out__llds_out_code_addr__ho_call_variant_to_string_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ll_backend__llds_out__llds_out_code_addr__ho_call_variant_to_string_1_0);
	MR_init_label1(fn__ll_backend__llds_out__llds_out_code_addr__ho_call_variant_to_string_1_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ho_call_variant_to_string'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__ll_backend__llds_out__llds_out_code_addr__ho_call_variant_to_string_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__ll_backend__llds_out__llds_out_code_addr__ho_call_variant_to_string_1_0_i3);
	}
	MR_r1 = (MR_Word) MR_string_const("compact", 7);
	MR_proceed();
MR_def_label(fn__ll_backend__llds_out__llds_out_code_addr__ho_call_variant_to_string_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_np_tailcall_ent(fn__string__int_to_string_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__backend_libs__name_mangle__proc_label_to_c_string_2_0);
MR_decl_entry(string__int_to_string_2_0);
MR_decl_entry(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);

MR_BEGIN_MODULE(ll_backend__llds_out__llds_out_code_addr_module1)
	MR_init_entry1(fn__ll_backend__llds_out__llds_out_code_addr__label_to_c_string_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ll_backend__llds_out__llds_out_code_addr__label_to_c_string_2_0);
	MR_init_label4(fn__ll_backend__llds_out__llds_out_code_addr__label_to_c_string_2_0,17,5,6,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'label_to_c_string'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__ll_backend__llds_out__llds_out_code_addr__label_to_c_string_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(fn__ll_backend__llds_out__llds_out_code_addr__label_to_c_string_2_0_i17);
	}
	MR_r1 = MR_tfield(1, MR_r1, 1);
	MR_np_tailcall_ent(fn__backend_libs__name_mangle__proc_label_to_c_string_2_0);
MR_def_label(fn__ll_backend__llds_out__llds_out_code_addr__label_to_c_string_2_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(0, MR_r1, 0);
	MR_r1 = MR_tfield(0, MR_r1, 1);
	MR_np_call_localret_ent(fn__backend_libs__name_mangle__proc_label_to_c_string_2_0,
		fn__ll_backend__llds_out__llds_out_code_addr__label_to_c_string_2_0_i5);
MR_def_label(fn__ll_backend__llds_out__llds_out_code_addr__label_to_c_string_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(string__int_to_string_2_0,
		fn__ll_backend__llds_out__llds_out_code_addr__label_to_c_string_2_0_i6);
MR_def_label(fn__ll_backend__llds_out__llds_out_code_addr__label_to_c_string_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("_i", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__llds_out__llds_out_code_addr__label_to_c_string_2_0_i7);
MR_def_label(fn__ll_backend__llds_out__llds_out_code_addr__label_to_c_string_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(io__write_string_3_0);

MR_BEGIN_MODULE(ll_backend__llds_out__llds_out_code_addr_module2)
	MR_init_entry1(ll_backend__llds_out__llds_out_code_addr__output_label_no_prefix_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__llds_out__llds_out_code_addr__output_label_no_prefix_3_0);
	MR_init_label1(ll_backend__llds_out__llds_out_code_addr__output_label_no_prefix_3_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_label_no_prefix'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__llds_out__llds_out_code_addr__output_label_no_prefix_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r2 = (MR_Integer) 0;
	MR_np_call_localret_ent(fn__ll_backend__llds_out__llds_out_code_addr__label_to_c_string_2_0,
		ll_backend__llds_out__llds_out_code_addr__output_label_no_prefix_3_0_i2);
MR_def_label(ll_backend__llds_out__llds_out_code_addr__output_label_no_prefix_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__llds_out__llds_out_code_addr_module3)
	MR_init_entry1(ll_backend__llds_out__llds_out_code_addr__output_label_as_code_addr_decls_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__llds_out__llds_out_code_addr__output_label_as_code_addr_decls_3_0);
	MR_init_label4(ll_backend__llds_out__llds_out_code_addr__output_label_as_code_addr_decls_3_0,7,8,9,27)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_label_as_code_addr_decls'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__llds_out__llds_out_code_addr__output_label_as_code_addr_decls_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_code_addr__output_label_as_code_addr_decls_3_0_i27);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	if (MR_INT_EQ(MR_tempr1,0)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_code_addr__output_label_as_code_addr_decls_3_0_i27);
	}
	if (MR_INT_NE(MR_tempr1,2)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_code_addr__output_label_as_code_addr_decls_3_0_i27);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(1, MR_r1, 1);
	MR_r1 = (MR_Word) MR_string_const("MR_decl_entry(", 14);
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_code_addr__output_label_as_code_addr_decls_3_0_i7);
MR_def_label(ll_backend__llds_out__llds_out_code_addr__output_label_as_code_addr_decls_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 0;
	MR_np_call_localret_ent(fn__backend_libs__name_mangle__proc_label_to_c_string_2_0,
		ll_backend__llds_out__llds_out_code_addr__output_label_as_code_addr_decls_3_0_i8);
MR_def_label(ll_backend__llds_out__llds_out_code_addr__output_label_as_code_addr_decls_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_code_addr__output_label_as_code_addr_decls_3_0_i9);
MR_def_label(ll_backend__llds_out__llds_out_code_addr__output_label_as_code_addr_decls_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(");\n", 3);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ll_backend__llds_out__llds_out_code_addr__output_label_as_code_addr_decls_3_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(backend_libs__name_mangle__output_proc_label_no_prefix_3_0);

MR_BEGIN_MODULE(ll_backend__llds_out__llds_out_code_addr_module4)
	MR_init_entry1(ll_backend__llds_out__llds_out_code_addr__output_code_addr_decls_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__llds_out__llds_out_code_addr__output_code_addr_decls_4_0);
	MR_init_label10(ll_backend__llds_out__llds_out_code_addr__output_code_addr_decls_4_0,4,8,10,14,16,19,18,22,25,27)
	MR_init_label7(ll_backend__llds_out__llds_out_code_addr__output_code_addr_decls_4_0,26,24,32,34,33,36,118)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_code_addr_decls'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__llds_out__llds_out_code_addr__output_code_addr_decls_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_code_addr__output_code_addr_decls_4_0_i118);
	}
	if (MR_LTAGS_TESTR(MR_r2,0,2)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_code_addr__output_code_addr_decls_4_0_i4);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r1, 17);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_code_addr__output_code_addr_decls_4_0_i118);
	}
	MR_r1 = (MR_Word) MR_string_const("MR_declare_entry(MR_do_fail);\n", 30);
	MR_np_tailcall_ent(io__write_string_3_0);
	}
MR_def_label(ll_backend__llds_out__llds_out_code_addr__output_code_addr_decls_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,5)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_code_addr__output_code_addr_decls_4_0_i8);
	}
	MR_r1 = (MR_Word) MR_string_const("MR_declare_entry(MR_do_not_reached);\n", 37);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ll_backend__llds_out__llds_out_code_addr__output_code_addr_decls_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,1)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_code_addr__output_code_addr_decls_4_0_i10);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r1, 17);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_code_addr__output_code_addr_decls_4_0_i118);
	}
	MR_r1 = (MR_Word) MR_string_const("MR_declare_entry(MR_do_redo);\n", 30);
	MR_np_tailcall_ent(io__write_string_3_0);
	}
MR_def_label(ll_backend__llds_out__llds_out_code_addr__output_code_addr_decls_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,4)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_code_addr__output_code_addr_decls_4_0_i14);
	}
	MR_r1 = (MR_Word) MR_string_const("MR_declare_entry(MR_do_trace_redo_fail_deep);\n", 46);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ll_backend__llds_out__llds_out_code_addr__output_code_addr_decls_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,3)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_code_addr__output_code_addr_decls_4_0_i16);
	}
	MR_r1 = (MR_Word) MR_string_const("MR_declare_entry(MR_do_trace_redo_fail_shallow);\n", 49);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ll_backend__llds_out__llds_out_code_addr__output_code_addr_decls_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,2)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_code_addr__output_code_addr_decls_4_0_i18);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(2, MR_r2, 0);
	MR_r1 = (MR_Word) MR_string_const("MR_decl_entry(", 14);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_code_addr__output_code_addr_decls_4_0_i19);
MR_def_label(ll_backend__llds_out__llds_out_code_addr__output_code_addr_decls_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(backend_libs__name_mangle__output_proc_label_no_prefix_3_0,
		ll_backend__llds_out__llds_out_code_addr__output_code_addr_decls_4_0_i36);
MR_def_label(ll_backend__llds_out__llds_out_code_addr__output_code_addr_decls_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_code_addr__output_code_addr_decls_4_0_i22);
	}
	MR_r1 = MR_tfield(1, MR_r2, 0);
	MR_np_tailcall_ent(ll_backend__llds_out__llds_out_code_addr__output_label_as_code_addr_decls_3_0);
MR_def_label(ll_backend__llds_out__llds_out_code_addr__output_code_addr_decls_4_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,2)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_code_addr__output_code_addr_decls_4_0_i24);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(3, MR_r2, 1);
	MR_r1 = (MR_Word) MR_string_const("MR_declare_entry(mercury__do_call_class_method_", 47);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_code_addr__output_code_addr_decls_4_0_i25);
MR_def_label(ll_backend__llds_out__llds_out_code_addr__output_code_addr_decls_4_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_code_addr__output_code_addr_decls_4_0_i27);
	}
	MR_r1 = (MR_Word) MR_string_const("compact", 7);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_code_addr__output_code_addr_decls_4_0_i36);
MR_def_label(ll_backend__llds_out__llds_out_code_addr__output_code_addr_decls_4_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(1, MR_sv(1), 0);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		ll_backend__llds_out__llds_out_code_addr__output_code_addr_decls_4_0_i26);
MR_def_label(ll_backend__llds_out__llds_out_code_addr__output_code_addr_decls_4_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_code_addr__output_code_addr_decls_4_0_i36);
MR_def_label(ll_backend__llds_out__llds_out_code_addr__output_code_addr_decls_4_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,1)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_code_addr__output_code_addr_decls_4_0_i118);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(3, MR_r2, 1);
	MR_r1 = (MR_Word) MR_string_const("MR_declare_entry(mercury__do_call_closure_", 42);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_code_addr__output_code_addr_decls_4_0_i32);
MR_def_label(ll_backend__llds_out__llds_out_code_addr__output_code_addr_decls_4_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_code_addr__output_code_addr_decls_4_0_i34);
	}
	MR_r1 = (MR_Word) MR_string_const("compact", 7);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_code_addr__output_code_addr_decls_4_0_i36);
MR_def_label(ll_backend__llds_out__llds_out_code_addr__output_code_addr_decls_4_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(1, MR_sv(1), 0);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		ll_backend__llds_out__llds_out_code_addr__output_code_addr_decls_4_0_i33);
MR_def_label(ll_backend__llds_out__llds_out_code_addr__output_code_addr_decls_4_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_code_addr__output_code_addr_decls_4_0_i36);
MR_def_label(ll_backend__llds_out__llds_out_code_addr__output_code_addr_decls_4_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(");\n", 3);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ll_backend__llds_out__llds_out_code_addr__output_code_addr_decls_4_0,118)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(ll_backend__llds_out__llds_out_util__decl_set_is_member_2_0);
MR_decl_entry(ll_backend__llds_out__llds_out_util__decl_set_insert_3_0);
MR_decl_entry(ll_backend__llds_out__llds_out_util__output_indent_5_0);

MR_BEGIN_MODULE(ll_backend__llds_out__llds_out_code_addr_module5)
	MR_init_entry1(ll_backend__llds_out__llds_out_code_addr__output_record_code_addr_decls_format_10_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__llds_out__llds_out_code_addr__output_record_code_addr_decls_format_10_0);
	MR_init_label10(ll_backend__llds_out__llds_out_code_addr__output_record_code_addr_decls_format_10_0,4,2,7,13,9,49,19,35,25,26)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_record_code_addr_decls_format'/10 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__llds_out__llds_out_code_addr__output_record_code_addr_decls_format_10_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r2;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_tempr2 = MR_r6;
	MR_sv(6) = MR_tempr2;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(ll_backend__llds_out__llds_out_util__decl_set_is_member_2_0,
		ll_backend__llds_out__llds_out_code_addr__output_record_code_addr_decls_format_10_0_i4);
MR_def_label(ll_backend__llds_out__llds_out_code_addr__output_record_code_addr_decls_format_10_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_code_addr__output_record_code_addr_decls_format_10_0_i2);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(6);
	MR_decr_sp_and_return(7);
MR_def_label(ll_backend__llds_out__llds_out_code_addr__output_record_code_addr_decls_format_10_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_r1, 0) = MR_sv(2);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(ll_backend__llds_out__llds_out_util__decl_set_insert_3_0,
		ll_backend__llds_out__llds_out_code_addr__output_record_code_addr_decls_format_10_0_i7);
MR_def_label(ll_backend__llds_out__llds_out_code_addr__output_record_code_addr_decls_format_10_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_code_addr__output_record_code_addr_decls_format_10_0_i9);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(1, MR_sv(2), 0);
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_code_addr__output_record_code_addr_decls_format_10_0_i35);
	}
	MR_r6 = MR_tfield(1, MR_tempr1, 0);
	if (MR_INT_NE(MR_r6,0)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_code_addr__output_record_code_addr_decls_format_10_0_i13);
	}
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr2;
	MR_decr_sp_and_return(7);
	}
MR_def_label(ll_backend__llds_out__llds_out_code_addr__output_record_code_addr_decls_format_10_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r6,2)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_code_addr__output_record_code_addr_decls_format_10_0_i49);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(5);
	}
	MR_np_call_localret_ent(ll_backend__llds_out__llds_out_util__output_indent_5_0,
		ll_backend__llds_out__llds_out_code_addr__output_record_code_addr_decls_format_10_0_i25);
MR_def_label(ll_backend__llds_out__llds_out_code_addr__output_record_code_addr_decls_format_10_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!((((MR_Integer) MR_sv(2) == (MR_Integer) MR_tbmkword(0, 2)) || ((MR_Integer) MR_sv(2) == (MR_Integer) MR_tbmkword(0, 1))))) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_code_addr__output_record_code_addr_decls_format_10_0_i19);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_sv(1), 17);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_code_addr__output_record_code_addr_decls_format_10_0_i35);
	}
	}
MR_def_label(ll_backend__llds_out__llds_out_code_addr__output_record_code_addr_decls_format_10_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(5);
	}
	MR_np_call_localret_ent(ll_backend__llds_out__llds_out_util__output_indent_5_0,
		ll_backend__llds_out__llds_out_code_addr__output_record_code_addr_decls_format_10_0_i25);
MR_def_label(ll_backend__llds_out__llds_out_code_addr__output_record_code_addr_decls_format_10_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!((((MR_Integer) MR_sv(2) == (MR_Integer) MR_tbmkword(0, 0)) || ((MR_tag(MR_sv(2)) == MR_mktag((MR_Integer) 3)) && ((MR_Integer) MR_tfield(3, MR_sv(2), 0) == (MR_Integer) 0))))) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_code_addr__output_record_code_addr_decls_format_10_0_i49);
	}
MR_def_label(ll_backend__llds_out__llds_out_code_addr__output_record_code_addr_decls_format_10_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
MR_def_label(ll_backend__llds_out__llds_out_code_addr__output_record_code_addr_decls_format_10_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = ((MR_Integer) MR_sv(5) + (MR_Integer) 1);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	}
	MR_np_call_localret_ent(ll_backend__llds_out__llds_out_code_addr__output_code_addr_decls_4_0,
		ll_backend__llds_out__llds_out_code_addr__output_record_code_addr_decls_format_10_0_i26);
MR_def_label(ll_backend__llds_out__llds_out_code_addr__output_record_code_addr_decls_format_10_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__llds_out__llds_out_code_addr_module6)
	MR_init_entry1(ll_backend__llds_out__llds_out_code_addr__output_record_code_addr_decls_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__llds_out__llds_out_code_addr__output_record_code_addr_decls_6_0);
	MR_init_label1(ll_backend__llds_out__llds_out_code_addr__output_record_code_addr_decls_6_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_record_code_addr_decls'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__llds_out__llds_out_code_addr__output_record_code_addr_decls_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = (MR_Word) MR_string_const("", 0);
	MR_r4 = (MR_Word) MR_string_const("", 0);
	MR_r5 = (MR_Integer) 0;
	MR_r6 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__llds_out__llds_out_code_addr__output_record_code_addr_decls_format_10_0,
		ll_backend__llds_out__llds_out_code_addr__output_record_code_addr_decls_6_0_i2);
MR_def_label(ll_backend__llds_out__llds_out_code_addr__output_record_code_addr_decls_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__llds_out__llds_out_code_addr_module7)
	MR_init_entry1(ll_backend__llds_out__llds_out_code_addr__output_label_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__llds_out__llds_out_code_addr__output_label_3_0);
	MR_init_label1(ll_backend__llds_out__llds_out_code_addr__output_label_3_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_label'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__llds_out__llds_out_code_addr__output_label_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r2 = (MR_Integer) 1;
	MR_np_call_localret_ent(fn__ll_backend__llds_out__llds_out_code_addr__label_to_c_string_2_0,
		ll_backend__llds_out__llds_out_code_addr__output_label_3_0_i2);
MR_def_label(ll_backend__llds_out__llds_out_code_addr__output_label_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__llds_out__llds_out_code_addr_module8)
	MR_init_entry1(ll_backend__llds_out__llds_out_code_addr__output_label_maybe_prefix_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__llds_out__llds_out_code_addr__output_label_maybe_prefix_4_0);
	MR_init_label1(ll_backend__llds_out__llds_out_code_addr__output_label_maybe_prefix_4_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_label_maybe_prefix'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__llds_out__llds_out_code_addr__output_label_maybe_prefix_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__ll_backend__llds_out__llds_out_code_addr__label_to_c_string_2_0,
		ll_backend__llds_out__llds_out_code_addr__output_label_maybe_prefix_4_0_i2);
MR_def_label(ll_backend__llds_out__llds_out_code_addr__output_label_maybe_prefix_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__backend_libs__name_mangle__mercury_label_prefix_0_0);

MR_BEGIN_MODULE(ll_backend__llds_out__llds_out_code_addr_module9)
	MR_init_entry1(ll_backend__llds_out__llds_out_code_addr__output_code_addr_from_pieces_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__llds_out__llds_out_code_addr__output_code_addr_from_pieces_5_0);
	MR_init_label10(ll_backend__llds_out__llds_out_code_addr__output_code_addr_from_pieces_5_0,6,5,10,58,56,16,15,20,21,19)
	MR_init_label2(ll_backend__llds_out__llds_out_code_addr__output_code_addr_from_pieces_5_0,23,24)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_code_addr_from_pieces'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__llds_out__llds_out_code_addr__output_code_addr_from_pieces_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_code_addr__output_code_addr_from_pieces_5_0_i56);
	}
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_code_addr__output_code_addr_from_pieces_5_0_i5);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("MR_ENTRY(", 9);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_code_addr__output_code_addr_from_pieces_5_0_i6);
MR_def_label(ll_backend__llds_out__llds_out_code_addr__output_code_addr_from_pieces_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_code_addr__output_code_addr_from_pieces_5_0_i21);
MR_def_label(ll_backend__llds_out__llds_out_code_addr__output_code_addr_from_pieces_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,1)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_code_addr__output_code_addr_from_pieces_5_0_i58);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("MR_LABEL(", 9);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_code_addr__output_code_addr_from_pieces_5_0_i10);
MR_def_label(ll_backend__llds_out__llds_out_code_addr__output_code_addr_from_pieces_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_code_addr__output_code_addr_from_pieces_5_0_i21);
MR_def_label(ll_backend__llds_out__llds_out_code_addr__output_code_addr_from_pieces_5_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ll_backend__llds_out__llds_out_code_addr__output_code_addr_from_pieces_5_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_code_addr__output_code_addr_from_pieces_5_0_i15);
	}
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("MR_ENTRY_AP(", 12);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_code_addr__output_code_addr_from_pieces_5_0_i16);
MR_def_label(ll_backend__llds_out__llds_out_code_addr__output_code_addr_from_pieces_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_code_addr__output_code_addr_from_pieces_5_0_i21);
MR_def_label(ll_backend__llds_out__llds_out_code_addr__output_code_addr_from_pieces_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,1)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_code_addr__output_code_addr_from_pieces_5_0_i19);
	}
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("MR_LABEL_AP(", 12);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_code_addr__output_code_addr_from_pieces_5_0_i20);
MR_def_label(ll_backend__llds_out__llds_out_code_addr__output_code_addr_from_pieces_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_code_addr__output_code_addr_from_pieces_5_0_i21);
MR_def_label(ll_backend__llds_out__llds_out_code_addr__output_code_addr_from_pieces_5_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(")", 1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ll_backend__llds_out__llds_out_code_addr__output_code_addr_from_pieces_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__backend_libs__name_mangle__mercury_label_prefix_0_0,
		ll_backend__llds_out__llds_out_code_addr__output_code_addr_from_pieces_5_0_i23);
MR_def_label(ll_backend__llds_out__llds_out_code_addr__output_code_addr_from_pieces_5_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__llds_out__llds_out_code_addr__output_code_addr_from_pieces_5_0_i24);
MR_def_label(ll_backend__llds_out__llds_out_code_addr__output_code_addr_from_pieces_5_0,24)
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


MR_BEGIN_MODULE(ll_backend__llds_out__llds_out_code_addr_module10)
	MR_init_entry1(fn__ll_backend__llds_out__llds_out_code_addr__label_is_external_to_c_module_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ll_backend__llds_out__llds_out_code_addr__label_is_external_to_c_module_1_0);
	MR_init_label2(fn__ll_backend__llds_out__llds_out_code_addr__label_is_external_to_c_module_1_0,8,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'label_is_external_to_c_module'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__ll_backend__llds_out__llds_out_code_addr__label_is_external_to_c_module_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(fn__ll_backend__llds_out__llds_out_code_addr__label_is_external_to_c_module_1_0_i8);
	}
	MR_r2 = MR_tfield(1, MR_r1, 0);
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(fn__ll_backend__llds_out__llds_out_code_addr__label_is_external_to_c_module_1_0_i5);
	}
MR_def_label(fn__ll_backend__llds_out__llds_out_code_addr__label_is_external_to_c_module_1_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ll_backend__llds_out__llds_out_code_addr__label_is_external_to_c_module_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__llds_out__llds_out_code_addr_module11)
	MR_init_entry1(ll_backend__llds_out__llds_out_code_addr__code_addr_to_string_base_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__llds_out__llds_out_code_addr__code_addr_to_string_base_4_0);
	MR_init_label10(ll_backend__llds_out__llds_out_code_addr__code_addr_to_string_base_4_0,3,4,5,6,7,8,9,12,55,16)
	MR_init_label9(ll_backend__llds_out__llds_out_code_addr__code_addr_to_string_base_4_0,11,20,21,18,25,26,27,23,29)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'code_addr_to_string_base'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__llds_out__llds_out_code_addr__code_addr_to_string_base_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_code_addr__code_addr_to_string_base_4_0_i3);
	}
	MR_r1 = (MR_Word) MR_string_const("MR_succip", 9);
	MR_r2 = (MR_Integer) 0;
	MR_r3 = (MR_Integer) 2;
	MR_proceed();
MR_def_label(ll_backend__llds_out__llds_out_code_addr__code_addr_to_string_base_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,2)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_code_addr__code_addr_to_string_base_4_0_i4);
	}
	MR_r1 = (MR_Word) MR_string_const("MR_do_fail", 10);
	MR_r2 = (MR_Integer) 0;
	MR_r3 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(ll_backend__llds_out__llds_out_code_addr__code_addr_to_string_base_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,5)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_code_addr__code_addr_to_string_base_4_0_i5);
	}
	MR_r1 = (MR_Word) MR_string_const("MR_do_not_reached", 17);
	MR_r2 = (MR_Integer) 0;
	MR_r3 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(ll_backend__llds_out__llds_out_code_addr__code_addr_to_string_base_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,1)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_code_addr__code_addr_to_string_base_4_0_i6);
	}
	MR_r1 = (MR_Word) MR_string_const("MR_do_redo", 10);
	MR_r2 = (MR_Integer) 0;
	MR_r3 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(ll_backend__llds_out__llds_out_code_addr__code_addr_to_string_base_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,4)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_code_addr__code_addr_to_string_base_4_0_i7);
	}
	MR_r1 = (MR_Word) MR_string_const("MR_do_trace_redo_fail_deep", 26);
	MR_r2 = (MR_Integer) 0;
	MR_r3 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(ll_backend__llds_out__llds_out_code_addr__code_addr_to_string_base_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,3)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_code_addr__code_addr_to_string_base_4_0_i8);
	}
	MR_r1 = (MR_Word) MR_string_const("MR_do_trace_redo_fail_shallow", 29);
	MR_r2 = (MR_Integer) 0;
	MR_r3 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(ll_backend__llds_out__llds_out_code_addr__code_addr_to_string_base_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_code_addr__code_addr_to_string_base_4_0_i9);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_r1 = MR_tfield(2, MR_r1, 0);
	MR_r2 = (MR_Integer) 0;
	MR_np_call_localret_ent(fn__backend_libs__name_mangle__proc_label_to_c_string_2_0,
		ll_backend__llds_out__llds_out_code_addr__code_addr_to_string_base_4_0_i16);
MR_def_label(ll_backend__llds_out__llds_out_code_addr__code_addr_to_string_base_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_code_addr__code_addr_to_string_base_4_0_i11);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 0;
	MR_np_call_localret_ent(fn__ll_backend__llds_out__llds_out_code_addr__label_to_c_string_2_0,
		ll_backend__llds_out__llds_out_code_addr__code_addr_to_string_base_4_0_i12);
MR_def_label(ll_backend__llds_out__llds_out_code_addr__code_addr_to_string_base_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_code_addr__code_addr_to_string_base_4_0_i55);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_sv(1), 0);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_code_addr__code_addr_to_string_base_4_0_i16);
	}
	}
MR_def_label(ll_backend__llds_out__llds_out_code_addr__code_addr_to_string_base_4_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 1;
	MR_r3 = (MR_Integer) 1;
	MR_decr_sp_and_return(2);
MR_def_label(ll_backend__llds_out__llds_out_code_addr__code_addr_to_string_base_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 1;
	MR_r3 = (MR_Integer) 0;
	MR_decr_sp_and_return(2);
MR_def_label(ll_backend__llds_out__llds_out_code_addr__code_addr_to_string_base_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,2)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_code_addr__code_addr_to_string_base_4_0_i18);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_r3 = MR_tfield(3, MR_r1, 1);
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_code_addr__code_addr_to_string_base_4_0_i20);
	}
	MR_r2 = (MR_Word) MR_string_const("compact", 7);
	MR_r1 = (MR_Word) MR_string_const("mercury__do_call_class_method_", 30);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__llds_out__llds_out_code_addr__code_addr_to_string_base_4_0_i27);
MR_def_label(ll_backend__llds_out__llds_out_code_addr__code_addr_to_string_base_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(1, MR_r3, 0);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		ll_backend__llds_out__llds_out_code_addr__code_addr_to_string_base_4_0_i21);
MR_def_label(ll_backend__llds_out__llds_out_code_addr__code_addr_to_string_base_4_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("mercury__do_call_class_method_", 30);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__llds_out__llds_out_code_addr__code_addr_to_string_base_4_0_i27);
MR_def_label(ll_backend__llds_out__llds_out_code_addr__code_addr_to_string_base_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,1)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_code_addr__code_addr_to_string_base_4_0_i23);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_r3 = MR_tfield(3, MR_r1, 1);
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_code_addr__code_addr_to_string_base_4_0_i25);
	}
	MR_r2 = (MR_Word) MR_string_const("compact", 7);
	MR_r1 = (MR_Word) MR_string_const("mercury__do_call_closure_", 25);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__llds_out__llds_out_code_addr__code_addr_to_string_base_4_0_i27);
MR_def_label(ll_backend__llds_out__llds_out_code_addr__code_addr_to_string_base_4_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(1, MR_r3, 0);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		ll_backend__llds_out__llds_out_code_addr__code_addr_to_string_base_4_0_i26);
MR_def_label(ll_backend__llds_out__llds_out_code_addr__code_addr_to_string_base_4_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("mercury__do_call_closure_", 25);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__llds_out__llds_out_code_addr__code_addr_to_string_base_4_0_i27);
MR_def_label(ll_backend__llds_out__llds_out_code_addr__code_addr_to_string_base_4_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 0;
	MR_r3 = (MR_Integer) 0;
	MR_decr_sp_and_return(2);
MR_def_label(ll_backend__llds_out__llds_out_code_addr__code_addr_to_string_base_4_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_tfield(3, MR_r1, 1);
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_code_addr__code_addr_to_string_base_4_0_i29);
	}
	MR_r1 = (MR_Word) MR_string_const("MR_do_succeed", 13);
	MR_r2 = (MR_Integer) 0;
	MR_r3 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(ll_backend__llds_out__llds_out_code_addr__code_addr_to_string_base_4_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("MR_do_last_succeed", 18);
	MR_r2 = (MR_Integer) 0;
	MR_r3 = (MR_Integer) 0;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__llds_out__llds_out_code_addr_module12)
	MR_init_entry1(ll_backend__llds_out__llds_out_code_addr__output_code_addr_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__llds_out__llds_out_code_addr__output_code_addr_3_0);
	MR_init_label1(ll_backend__llds_out__llds_out_code_addr__output_code_addr_3_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_code_addr'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__llds_out__llds_out_code_addr__output_code_addr_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(ll_backend__llds_out__llds_out_code_addr__code_addr_to_string_base_4_0,
		ll_backend__llds_out__llds_out_code_addr__output_code_addr_3_0_i2);
MR_def_label(ll_backend__llds_out__llds_out_code_addr__output_code_addr_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(ll_backend__llds_out__llds_out_code_addr__output_code_addr_from_pieces_5_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__llds_out__llds_out_code_addr_module13)
	MR_init_entry1(ll_backend__llds_out__llds_out_code_addr__output_label_as_code_addr_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__llds_out__llds_out_code_addr__output_label_as_code_addr_3_0);
	MR_init_label6(ll_backend__llds_out__llds_out_code_addr__output_label_as_code_addr_3_0,2,21,6,12,14,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_label_as_code_addr'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__llds_out__llds_out_code_addr__output_label_as_code_addr_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r2 = (MR_Integer) 0;
	MR_np_call_localret_ent(fn__ll_backend__llds_out__llds_out_code_addr__label_to_c_string_2_0,
		ll_backend__llds_out__llds_out_code_addr__output_label_as_code_addr_3_0_i2);
MR_def_label(ll_backend__llds_out__llds_out_code_addr__output_label_as_code_addr_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_code_addr__output_label_as_code_addr_3_0_i21);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_sv(1), 0);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_code_addr__output_label_as_code_addr_3_0_i6);
	}
	}
MR_def_label(ll_backend__llds_out__llds_out_code_addr__output_label_as_code_addr_3_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(")", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__llds_out__llds_out_code_addr__output_label_as_code_addr_3_0_i14);
MR_def_label(ll_backend__llds_out__llds_out_code_addr__output_label_as_code_addr_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(")", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__llds_out__llds_out_code_addr__output_label_as_code_addr_3_0_i12);
MR_def_label(ll_backend__llds_out__llds_out_code_addr__output_label_as_code_addr_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("MR_ENTRY_AP(", 12);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__llds_out__llds_out_code_addr__output_label_as_code_addr_3_0_i3);
MR_def_label(ll_backend__llds_out__llds_out_code_addr__output_label_as_code_addr_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("MR_LABEL_AP(", 12);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__llds_out__llds_out_code_addr__output_label_as_code_addr_3_0_i3);
MR_def_label(ll_backend__llds_out__llds_out_code_addr__output_label_as_code_addr_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__llds_out__llds_out_code_addr_module14)
	MR_init_entry1(__Unify___ll_backend__llds_out__llds_out_code_addr__wrapper_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ll_backend__llds_out__llds_out_code_addr__wrapper_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ll_backend__llds_out__llds_out_code_addr__wrapper_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_int_3_0);

MR_BEGIN_MODULE(ll_backend__llds_out__llds_out_code_addr_module15)
	MR_init_entry1(__Compare___ll_backend__llds_out__llds_out_code_addr__wrapper_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ll_backend__llds_out__llds_out_code_addr__wrapper_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ll_backend__llds_out__llds_out_code_addr__wrapper_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__ll_backend__llds_out__llds_out_code_addr_maybe_bunch_0(void)
{
	ll_backend__llds_out__llds_out_code_addr_module0();
	ll_backend__llds_out__llds_out_code_addr_module1();
	ll_backend__llds_out__llds_out_code_addr_module2();
	ll_backend__llds_out__llds_out_code_addr_module3();
	ll_backend__llds_out__llds_out_code_addr_module4();
	ll_backend__llds_out__llds_out_code_addr_module5();
	ll_backend__llds_out__llds_out_code_addr_module6();
	ll_backend__llds_out__llds_out_code_addr_module7();
	ll_backend__llds_out__llds_out_code_addr_module8();
	ll_backend__llds_out__llds_out_code_addr_module9();
	ll_backend__llds_out__llds_out_code_addr_module10();
	ll_backend__llds_out__llds_out_code_addr_module11();
	ll_backend__llds_out__llds_out_code_addr_module12();
	ll_backend__llds_out__llds_out_code_addr_module13();
	ll_backend__llds_out__llds_out_code_addr_module14();
	ll_backend__llds_out__llds_out_code_addr_module15();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__ll_backend__llds_out__llds_out_code_addr__init(void);
void mercury__ll_backend__llds_out__llds_out_code_addr__init_type_tables(void);
void mercury__ll_backend__llds_out__llds_out_code_addr__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__ll_backend__llds_out__llds_out_code_addr__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__ll_backend__llds_out__llds_out_code_addr__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__ll_backend__llds_out__llds_out_code_addr__init_threadscope_string_table(void);
#endif

void mercury__ll_backend__llds_out__llds_out_code_addr__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__ll_backend__llds_out__llds_out_code_addr_maybe_bunch_0();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__llds_out__llds_out_code_addr__type_ctor_info_wrapper_0,
		ll_backend__llds_out__llds_out_code_addr__wrapper_0_0);
	mercury__ll_backend__llds_out__llds_out_code_addr__init_debugger();
}

void mercury__ll_backend__llds_out__llds_out_code_addr__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__llds_out__llds_out_code_addr__type_ctor_info_wrapper_0);
	}
}


void mercury__ll_backend__llds_out__llds_out_code_addr__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__ll_backend__llds_out__llds_out_code_addr__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__ll_backend__llds_out__llds_out_code_addr);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__ll_backend__llds_out__llds_out_code_addr__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__ll_backend__llds_out__llds_out_code_addr__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
