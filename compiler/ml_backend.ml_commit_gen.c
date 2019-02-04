/*
** Automatically generated from `ml_commit_gen.m'
** by the Mercury compiler,
** version rotd-2010-03-01, configured for x86_64-unknown-linux-gnu.
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
INIT mercury__ml_backend__ml_commit_gen__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 136 "../library/io.int2"
#include "io.mh"

#line 28 "ml_backend.ml_commit_gen.c"
#line 144 "../library/io.int2"
#include "string.mh"

#line 32 "ml_backend.ml_commit_gen.c"
#line 33 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 36 "ml_backend.ml_commit_gen.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 40 "ml_backend.ml_commit_gen.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 44 "ml_backend.ml_commit_gen.c"
#line 31 "../library/array.int2"
#include "array.mh"

#line 48 "ml_backend.ml_commit_gen.c"
#line 49 "ml_backend.ml_commit_gen.c"
#include "ml_backend.ml_commit_gen.mh"

#line 52 "ml_backend.ml_commit_gen.c"
#line 53 "ml_backend.ml_commit_gen.c"
#ifndef ML_BACKEND__ML_COMMIT_GEN_DECL_GUARD
#define ML_BACKEND__ML_COMMIT_GEN_DECL_GUARD

#line 57 "ml_backend.ml_commit_gen.c"
#line 58 "ml_backend.ml_commit_gen.c"

#endif
#line 61 "ml_backend.ml_commit_gen.c"

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
	MR_Word * f1;
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];
MR_decl_label9(ml_backend__ml_commit_gen__maybe_put_commit_in_own_func_7_0, 2,4,5,6,7,8,11,10,18)
MR_decl_label10(ml_backend__ml_commit_gen__ml_gen_commit_7_0, 2,3,7,8,9,10,11,12,16,17)
MR_decl_label10(ml_backend__ml_commit_gen__ml_gen_commit_7_0, 19,20,21,22,24,26,29,31,32,38)
MR_decl_label10(ml_backend__ml_commit_gen__ml_gen_commit_7_0, 39,4,44,45,46,47,48,49,53,54)
MR_decl_label9(ml_backend__ml_commit_gen__ml_gen_commit_7_0, 56,57,58,59,60,66,67,68,41)
MR_decl_label10(ml_backend__ml_commit_gen__ml_gen_make_locals_for_output_args_6_0, 37,4,5,6,7,9,10,11,12,14)
MR_decl_label7(ml_backend__ml_commit_gen__ml_gen_make_locals_for_output_args_6_0, 15,17,18,19,20,22,23)
MR_decl_label10(ml_backend__ml_commit_gen__ml_gen_maybe_make_locals_for_output_args_6_0, 2,3,4,6,7,8,9,11,12,13)
MR_decl_label1(ml_backend__ml_commit_gen__ml_gen_maybe_make_locals_for_output_args_6_0, 14)
MR_decl_static(ml_backend__ml_commit_gen__maybe_put_commit_in_own_func_7_0)
MR_decl_static(ml_backend__ml_commit_gen__ml_gen_make_locals_for_output_args_6_0)
MR_decl_static(ml_backend__ml_commit_gen__ml_gen_maybe_make_locals_for_output_args_6_0)
MR_decl_static(fn__ml_backend__ml_commit_gen__ml_gen_commit_var_decl_2_0)
MR_def_extern_entry(ml_backend__ml_commit_gen__ml_gen_commit_7_0)

extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
static const struct mercury_type_0 mercury_common_0[4] =
{
{
{
MR_tbmkword(0, 6),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(1,0,0),
MR_tbmkword(0, 0)
}
},
{
{
MR_tbmkword(0, 0),
MR_tbmkword(0, 0)
}
},
{
{
MR_CTOR1_ADDR(term, var),
MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type)
}
},
};

static const struct mercury_type_1 mercury_common_1[2] =
{
{
MR_tbmkword(0, 1)
},
{
MR_tbmkword(0, 0)
},
};



MR_decl_entry(ml_backend__ml_gen_info__ml_gen_info_put_commit_in_own_func_2_0);
MR_decl_entry(ml_backend__ml_code_util__ml_gen_new_func_label_5_0);
MR_decl_entry(fn__ml_backend__ml_code_util__ml_gen_block_3_0);
MR_decl_entry(ml_backend__ml_code_util__ml_gen_nondet_label_func_5_0);
MR_decl_entry(ml_backend__ml_gen_info__ml_gen_info_use_gcc_nested_functions_2_0);
MR_decl_entry(ml_backend__ml_code_util__ml_get_env_ptr_2_0);
MR_decl_entry(fn__ml_backend__mlds__mlds_make_context_1_0);

MR_BEGIN_MODULE(ml_backend__ml_commit_gen_module0)
	MR_init_entry1(ml_backend__ml_commit_gen__maybe_put_commit_in_own_func_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_commit_gen__maybe_put_commit_in_own_func_7_0);
	MR_init_label9(ml_backend__ml_commit_gen__maybe_put_commit_in_own_func_7_0,2,4,5,6,7,8,11,10,18)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'maybe_put_commit_in_own_func'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ml_commit_gen__maybe_put_commit_in_own_func_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(4) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__ml_gen_info__ml_gen_info_put_commit_in_own_func_2_0,
		ml_backend__ml_commit_gen__maybe_put_commit_in_own_func_7_0_i2);
MR_def_label(ml_backend__ml_commit_gen__maybe_put_commit_in_own_func_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ml_backend__ml_commit_gen__maybe_put_commit_in_own_func_7_0_i4);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_decr_sp_and_return(5);
MR_def_label(ml_backend__ml_commit_gen__maybe_put_commit_in_own_func_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_new_func_label_5_0,
		ml_backend__ml_commit_gen__maybe_put_commit_in_own_func_7_0_i5);
MR_def_label(ml_backend__ml_commit_gen__maybe_put_commit_in_own_func_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_r2;
	MR_sv(4) = MR_r3;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(fn__ml_backend__ml_code_util__ml_gen_block_3_0,
		ml_backend__ml_commit_gen__maybe_put_commit_in_own_func_7_0_i6);
MR_def_label(ml_backend__ml_commit_gen__maybe_put_commit_in_own_func_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_nondet_label_func_5_0,
		ml_backend__ml_commit_gen__maybe_put_commit_in_own_func_7_0_i7);
MR_def_label(ml_backend__ml_commit_gen__maybe_put_commit_in_own_func_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(ml_backend__ml_gen_info__ml_gen_info_use_gcc_nested_functions_2_0,
		ml_backend__ml_commit_gen__maybe_put_commit_in_own_func_7_0_i8);
MR_def_label(ml_backend__ml_commit_gen__maybe_put_commit_in_own_func_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ml_backend__ml_commit_gen__maybe_put_commit_in_own_func_7_0_i10);
	}
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_get_env_ptr_2_0,
		ml_backend__ml_commit_gen__maybe_put_commit_in_own_func_7_0_i11);
MR_def_label(ml_backend__ml_commit_gen__maybe_put_commit_in_own_func_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 7);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 3) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_tempr1, 4) = MR_r2;
	MR_tfield(3, MR_tempr1, 5) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_tempr1, 6) = (MR_Integer) 2;
	MR_r1 = MR_sv(3);
	MR_sv(2) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_make_context_1_0,
		ml_backend__ml_commit_gen__maybe_put_commit_in_own_func_7_0_i18);
MR_def_label(ml_backend__ml_commit_gen__maybe_put_commit_in_own_func_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 7);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_r2, 1) = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_tfield(3, MR_r2, 2) = MR_sv(2);
	MR_tfield(3, MR_r2, 3) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_r2, 4) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_r2, 5) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_r2, 6) = (MR_Integer) 2;
	MR_r1 = MR_sv(3);
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_make_context_1_0,
		ml_backend__ml_commit_gen__maybe_put_commit_in_own_func_7_0_i18);
MR_def_label(ml_backend__ml_commit_gen__maybe_put_commit_in_own_func_7_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr1;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_sv(1);
	MR_tfield(1, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_sv(4);
	MR_decr_sp_and_return(5);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_0);
MR_decl_entry(ml_backend__ml_code_util__ml_variable_type_3_0);
MR_decl_entry(fn__check_hlds__type_util__check_dummy_type_2_0);
MR_decl_entry(ml_backend__ml_gen_info__ml_gen_info_get_varset_2_0);
MR_decl_entry(fn__ml_backend__ml_code_util__ml_gen_var_name_2_0);
MR_decl_entry(fn__string__append_2_0);
MR_decl_entry(ml_backend__ml_code_util__ml_gen_type_3_0);
MR_decl_entry(ml_backend__ml_accurate_gc__ml_gen_gc_statement_6_0);
MR_decl_entry(fn__ml_backend__ml_code_util__ml_gen_mlds_var_decl_4_0);
MR_decl_entry(ml_backend__ml_code_util__ml_gen_var_3_0);
MR_decl_entry(ml_backend__ml_code_util__ml_gen_var_lval_4_0);
MR_decl_entry(fn__ml_backend__ml_code_util__ml_gen_assign_3_0);
MR_decl_entry(ml_backend__ml_gen_info__ml_gen_info_set_var_lval_4_0);

MR_BEGIN_MODULE(ml_backend__ml_commit_gen_module1)
	MR_init_entry1(ml_backend__ml_commit_gen__ml_gen_make_locals_for_output_args_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_commit_gen__ml_gen_make_locals_for_output_args_6_0);
	MR_init_label10(ml_backend__ml_commit_gen__ml_gen_make_locals_for_output_args_6_0,37,4,5,6,7,9,10,11,12,14)
	MR_init_label7(ml_backend__ml_commit_gen__ml_gen_make_locals_for_output_args_6_0,15,17,18,19,20,22,23)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ml_gen_make_locals_for_output_args'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ml_commit_gen__ml_gen_make_locals_for_output_args_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ml_backend__ml_commit_gen__ml_gen_make_locals_for_output_args_6_0_i37);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(ml_backend__ml_commit_gen__ml_gen_make_locals_for_output_args_6_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_tfield(1, MR_r1, 1);
	MR_np_localcall_lab(ml_backend__ml_commit_gen__ml_gen_make_locals_for_output_args_6_0,
		ml_backend__ml_commit_gen__ml_gen_make_locals_for_output_args_6_0_i4);
MR_def_label(ml_backend__ml_commit_gen__ml_gen_make_locals_for_output_args_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(6) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_0,
		ml_backend__ml_commit_gen__ml_gen_make_locals_for_output_args_6_0_i5);
MR_def_label(ml_backend__ml_commit_gen__ml_gen_make_locals_for_output_args_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_variable_type_3_0,
		ml_backend__ml_commit_gen__ml_gen_make_locals_for_output_args_6_0_i6);
MR_def_label(ml_backend__ml_commit_gen__ml_gen_make_locals_for_output_args_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(5);
	}
	MR_np_call_localret_ent(fn__check_hlds__type_util__check_dummy_type_2_0,
		ml_backend__ml_commit_gen__ml_gen_make_locals_for_output_args_6_0_i7);
MR_def_label(ml_backend__ml_commit_gen__ml_gen_make_locals_for_output_args_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ml_backend__ml_commit_gen__ml_gen_make_locals_for_output_args_6_0_i9);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(6);
	MR_decr_sp_and_return(10);
MR_def_label(ml_backend__ml_commit_gen__ml_gen_make_locals_for_output_args_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(ml_backend__ml_gen_info__ml_gen_info_get_varset_2_0,
		ml_backend__ml_commit_gen__ml_gen_make_locals_for_output_args_6_0_i10);
MR_def_label(ml_backend__ml_commit_gen__ml_gen_make_locals_for_output_args_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(fn__ml_backend__ml_code_util__ml_gen_var_name_2_0,
		ml_backend__ml_commit_gen__ml_gen_make_locals_for_output_args_6_0_i11);
MR_def_label(ml_backend__ml_commit_gen__ml_gen_make_locals_for_output_args_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_tfield(0, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("local_", 6);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(fn__string__append_2_0,
		ml_backend__ml_commit_gen__ml_gen_make_locals_for_output_args_6_0_i12);
MR_def_label(ml_backend__ml_commit_gen__ml_gen_make_locals_for_output_args_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(7);
	MR_sv(7) = MR_tempr1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(5);
	}
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_type_3_0,
		ml_backend__ml_commit_gen__ml_gen_make_locals_for_output_args_6_0_i14);
MR_def_label(ml_backend__ml_commit_gen__ml_gen_make_locals_for_output_args_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__ml_accurate_gc__ml_gen_gc_statement_6_0,
		ml_backend__ml_commit_gen__ml_gen_make_locals_for_output_args_6_0_i15);
MR_def_label(ml_backend__ml_commit_gen__ml_gen_make_locals_for_output_args_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_sv(9), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(9), 0) = MR_sv(7);
	MR_sv(5) = MR_r1;
	MR_sv(8) = MR_r2;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_make_context_1_0,
		ml_backend__ml_commit_gen__ml_gen_make_locals_for_output_args_6_0_i17);
MR_def_label(ml_backend__ml_commit_gen__ml_gen_make_locals_for_output_args_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__ml_backend__ml_code_util__ml_gen_mlds_var_decl_4_0,
		ml_backend__ml_commit_gen__ml_gen_make_locals_for_output_args_6_0_i18);
MR_def_label(ml_backend__ml_commit_gen__ml_gen_make_locals_for_output_args_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_var_3_0,
		ml_backend__ml_commit_gen__ml_gen_make_locals_for_output_args_6_0_i19);
MR_def_label(ml_backend__ml_commit_gen__ml_gen_make_locals_for_output_args_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_var_lval_4_0,
		ml_backend__ml_commit_gen__ml_gen_make_locals_for_output_args_6_0_i20);
MR_def_label(ml_backend__ml_commit_gen__ml_gen_make_locals_for_output_args_6_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__ml_backend__ml_code_util__ml_gen_assign_3_0,
		ml_backend__ml_commit_gen__ml_gen_make_locals_for_output_args_6_0_i22);
MR_def_label(ml_backend__ml_commit_gen__ml_gen_make_locals_for_output_args_6_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(8);
	}
	MR_np_call_localret_ent(ml_backend__ml_gen_info__ml_gen_info_set_var_lval_4_0,
		ml_backend__ml_commit_gen__ml_gen_make_locals_for_output_args_6_0_i23);
MR_def_label(ml_backend__ml_commit_gen__ml_gen_make_locals_for_output_args_6_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(3);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(1);
	MR_tfield(1, MR_r2, 1) = MR_sv(4);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_decr_sp_and_return(10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(ml_backend__ml_gen_info__ml_gen_info_get_var_lvals_2_0);
MR_decl_entry(ml_backend__ml_gen_info__ml_gen_info_get_globals_2_0);
MR_decl_entry(libs__globals__lookup_bool_option_3_0);
MR_decl_entry(fn__hlds__hlds_goal__goal_info_get_context_1_0);
MR_decl_entry(fn__hlds__hlds_goal__goal_info_get_nonlocals_1_0);
MR_decl_entry(ml_backend__ml_gen_info__ml_gen_info_get_byref_output_vars_2_0);
MR_decl_entry(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_105_115_116_95_116_111_95_115_101_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_1_0);
MR_decl_entry(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_116_101_114_115_101_99_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0);
MR_decl_entry(fn__set__to_sorted_list_1_0);

MR_BEGIN_MODULE(ml_backend__ml_commit_gen_module2)
	MR_init_entry1(ml_backend__ml_commit_gen__ml_gen_maybe_make_locals_for_output_args_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_commit_gen__ml_gen_maybe_make_locals_for_output_args_6_0);
	MR_init_label10(ml_backend__ml_commit_gen__ml_gen_maybe_make_locals_for_output_args_6_0,2,3,4,6,7,8,9,11,12,13)
	MR_init_label1(ml_backend__ml_commit_gen__ml_gen_maybe_make_locals_for_output_args_6_0,14)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ml_gen_maybe_make_locals_for_output_args'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ml_commit_gen__ml_gen_maybe_make_locals_for_output_args_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(ml_backend__ml_gen_info__ml_gen_info_get_var_lvals_2_0,
		ml_backend__ml_commit_gen__ml_gen_maybe_make_locals_for_output_args_6_0_i2);
MR_def_label(ml_backend__ml_commit_gen__ml_gen_maybe_make_locals_for_output_args_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(ml_backend__ml_gen_info__ml_gen_info_get_globals_2_0,
		ml_backend__ml_commit_gen__ml_gen_maybe_make_locals_for_output_args_6_0_i3);
MR_def_label(ml_backend__ml_commit_gen__ml_gen_maybe_make_locals_for_output_args_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 229;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		ml_backend__ml_commit_gen__ml_gen_maybe_make_locals_for_output_args_6_0_i4);
MR_def_label(ml_backend__ml_commit_gen__ml_gen_maybe_make_locals_for_output_args_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ml_backend__ml_commit_gen__ml_gen_maybe_make_locals_for_output_args_6_0_i6);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(4);
	MR_decr_sp_and_return(7);
MR_def_label(ml_backend__ml_commit_gen__ml_gen_maybe_make_locals_for_output_args_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_context_1_0,
		ml_backend__ml_commit_gen__ml_gen_maybe_make_locals_for_output_args_6_0_i7);
MR_def_label(ml_backend__ml_commit_gen__ml_gen_maybe_make_locals_for_output_args_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_nonlocals_1_0,
		ml_backend__ml_commit_gen__ml_gen_maybe_make_locals_for_output_args_6_0_i8);
MR_def_label(ml_backend__ml_commit_gen__ml_gen_maybe_make_locals_for_output_args_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(ml_backend__ml_gen_info__ml_gen_info_get_byref_output_vars_2_0,
		ml_backend__ml_commit_gen__ml_gen_maybe_make_locals_for_output_args_6_0_i9);
MR_def_label(ml_backend__ml_commit_gen__ml_gen_maybe_make_locals_for_output_args_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_sv(6) = (MR_Word) MR_TAG_COMMON(0,0,3);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_105_115_116_95_116_111_95_115_101_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_1_0,
		ml_backend__ml_commit_gen__ml_gen_maybe_make_locals_for_output_args_6_0_i11);
MR_def_label(ml_backend__ml_commit_gen__ml_gen_maybe_make_locals_for_output_args_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(3);
	}
	MR_np_call_localret_ent(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_116_101_114_115_101_99_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		ml_backend__ml_commit_gen__ml_gen_maybe_make_locals_for_output_args_6_0_i12);
MR_def_label(ml_backend__ml_commit_gen__ml_gen_maybe_make_locals_for_output_args_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__set__to_sorted_list_1_0,
		ml_backend__ml_commit_gen__ml_gen_maybe_make_locals_for_output_args_6_0_i13);
MR_def_label(ml_backend__ml_commit_gen__ml_gen_maybe_make_locals_for_output_args_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(ml_backend__ml_commit_gen__ml_gen_make_locals_for_output_args_6_0,
		ml_backend__ml_commit_gen__ml_gen_maybe_make_locals_for_output_args_6_0_i14);
MR_def_label(ml_backend__ml_commit_gen__ml_gen_maybe_make_locals_for_output_args_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_commit_gen_module3)
	MR_init_entry1(fn__ml_backend__ml_commit_gen__ml_gen_commit_var_decl_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ml_backend__ml_commit_gen__ml_gen_commit_var_decl_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ml_gen_commit_var_decl'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ml_backend__ml_commit_gen__ml_gen_commit_var_decl_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tempr2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(fn__ml_backend__ml_code_util__ml_gen_mlds_var_decl_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__hlds__code_model__goal_info_get_code_model_1_0);
MR_decl_entry(ml_backend__ml_gen_info__ml_gen_info_new_aux_var_name_4_0);
MR_decl_entry(ml_backend__ml_gen_info__ml_gen_info_push_success_cont_3_0);
MR_decl_entry(ml_backend__ml_code_gen__ml_gen_goal_6_0);
MR_decl_entry(ml_backend__ml_gen_info__ml_gen_info_pop_success_cont_2_0);
MR_decl_entry(ml_backend__ml_code_util__ml_gen_set_success_4_0);
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_statement_0;
MR_decl_entry(fn__f_108_105_115_116_95_95_43_43_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_defn_0;
MR_decl_entry(ml_backend__ml_gen_info__ml_gen_info_set_var_lvals_3_0);

MR_BEGIN_MODULE(ml_backend__ml_commit_gen_module4)
	MR_init_entry1(ml_backend__ml_commit_gen__ml_gen_commit_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_commit_gen__ml_gen_commit_7_0);
	MR_init_label10(ml_backend__ml_commit_gen__ml_gen_commit_7_0,2,3,7,8,9,10,11,12,16,17)
	MR_init_label10(ml_backend__ml_commit_gen__ml_gen_commit_7_0,19,20,21,22,24,26,29,31,32,38)
	MR_init_label10(ml_backend__ml_commit_gen__ml_gen_commit_7_0,39,4,44,45,46,47,48,49,53,54)
	MR_init_label9(ml_backend__ml_commit_gen__ml_gen_commit_7_0,56,57,58,59,60,66,67,68,41)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ml_gen_commit'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ml_backend__ml_commit_gen__ml_gen_commit_7_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_tfield(0, MR_r1, 1);
	MR_sv(6) = MR_r4;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(fn__hlds__code_model__goal_info_get_code_model_1_0,
		ml_backend__ml_commit_gen__ml_gen_commit_7_0_i2);
MR_def_label(ml_backend__ml_commit_gen__ml_gen_commit_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_context_1_0,
		ml_backend__ml_commit_gen__ml_gen_commit_7_0_i3);
MR_def_label(ml_backend__ml_commit_gen__ml_gen_commit_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(5),2)) {
		MR_GOTO_LAB(ml_backend__ml_commit_gen__ml_gen_commit_7_0_i4);
	}
	if (MR_INT_NE(MR_sv(2),1)) {
		MR_GOTO_LAB(ml_backend__ml_commit_gen__ml_gen_commit_7_0_i4);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(ml_backend__ml_commit_gen__ml_gen_maybe_make_locals_for_output_args_6_0,
		ml_backend__ml_commit_gen__ml_gen_commit_7_0_i7);
MR_def_label(ml_backend__ml_commit_gen__ml_gen_commit_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_sv(6) = MR_r3;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r4;
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_new_func_label_5_0,
		ml_backend__ml_commit_gen__ml_gen_commit_7_0_i8);
MR_def_label(ml_backend__ml_commit_gen__ml_gen_commit_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_sv(8) = MR_r2;
	MR_sv(9) = MR_r3;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_make_context_1_0,
		ml_backend__ml_commit_gen__ml_gen_commit_7_0_i9);
MR_def_label(ml_backend__ml_commit_gen__ml_gen_commit_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(9);
	MR_sv(9) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("commit", 6);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__ml_gen_info__ml_gen_info_new_aux_var_name_4_0,
		ml_backend__ml_commit_gen__ml_gen_commit_7_0_i10);
MR_def_label(ml_backend__ml_commit_gen__ml_gen_commit_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_sv(12) = MR_r2;
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(10);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_var_lval_4_0,
		ml_backend__ml_commit_gen__ml_gen_commit_7_0_i11);
MR_def_label(ml_backend__ml_commit_gen__ml_gen_commit_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(10);
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__ml_backend__ml_commit_gen__ml_gen_commit_var_decl_2_0,
		ml_backend__ml_commit_gen__ml_gen_commit_7_0_i12);
MR_def_label(ml_backend__ml_commit_gen__ml_gen_commit_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(10);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 7;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_r4 = MR_tempr3;
	MR_tfield(0, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(0, MR_tempr3, 1) = MR_sv(9);
	MR_tempr2 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(12);
	MR_r2 = MR_tempr2;
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_nondet_label_func_5_0,
		ml_backend__ml_commit_gen__ml_gen_commit_7_0_i16);
MR_def_label(ml_backend__ml_commit_gen__ml_gen_commit_7_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_r1 = MR_sv(12);
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_get_env_ptr_2_0,
		ml_backend__ml_commit_gen__ml_gen_commit_7_0_i17);
MR_def_label(ml_backend__ml_commit_gen__ml_gen_commit_7_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(8);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tfield(0, MR_tempr1, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 3) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(12);
	}
	MR_np_call_localret_ent(ml_backend__ml_gen_info__ml_gen_info_push_success_cont_3_0,
		ml_backend__ml_commit_gen__ml_gen_commit_7_0_i19);
MR_def_label(ml_backend__ml_commit_gen__ml_gen_commit_7_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 2;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__ml_code_gen__ml_gen_goal_6_0,
		ml_backend__ml_commit_gen__ml_gen_commit_7_0_i20);
MR_def_label(ml_backend__ml_commit_gen__ml_gen_commit_7_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(fn__ml_backend__ml_code_util__ml_gen_block_3_0,
		ml_backend__ml_commit_gen__ml_gen_commit_7_0_i21);
MR_def_label(ml_backend__ml_commit_gen__ml_gen_commit_7_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(ml_backend__ml_gen_info__ml_gen_info_pop_success_cont_2_0,
		ml_backend__ml_commit_gen__ml_gen_commit_7_0_i22);
MR_def_label(ml_backend__ml_commit_gen__ml_gen_commit_7_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r2 = (MR_Word) MR_TAG_COMMON(2,1,0);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_set_success_4_0,
		ml_backend__ml_commit_gen__ml_gen_commit_7_0_i24);
MR_def_label(ml_backend__ml_commit_gen__ml_gen_commit_7_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = (MR_Word) MR_TAG_COMMON(2,1,1);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_set_success_4_0,
		ml_backend__ml_commit_gen__ml_gen_commit_7_0_i26);
MR_def_label(ml_backend__ml_commit_gen__ml_gen_commit_7_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(1);
	MR_tfield(1, MR_r2, 1) = MR_tempr1;
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(fn__ml_backend__ml_code_util__ml_gen_block_3_0,
		ml_backend__ml_commit_gen__ml_gen_commit_7_0_i29);
MR_def_label(ml_backend__ml_commit_gen__ml_gen_commit_7_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, statement);
	MR_r2 = MR_sv(5);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ml_backend__ml_commit_gen__ml_gen_commit_7_0_i31);
MR_def_label(ml_backend__ml_commit_gen__ml_gen_commit_7_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(fn__ml_backend__ml_code_util__ml_gen_block_3_0,
		ml_backend__ml_commit_gen__ml_gen_commit_7_0_i32);
MR_def_label(ml_backend__ml_commit_gen__ml_gen_commit_7_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(10);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 3) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(9);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(11);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_sv(7);
	MR_tfield(1, MR_r1, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr2;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(8);
	}
	MR_np_call_localret_ent(ml_backend__ml_commit_gen__maybe_put_commit_in_own_func_7_0,
		ml_backend__ml_commit_gen__ml_gen_commit_7_0_i38);
MR_def_label(ml_backend__ml_commit_gen__ml_gen_commit_7_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_sv(1) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ml_backend__ml_commit_gen__ml_gen_commit_7_0_i39);
MR_def_label(ml_backend__ml_commit_gen__ml_gen_commit_7_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__ml_gen_info__ml_gen_info_set_var_lvals_3_0,
		ml_backend__ml_commit_gen__ml_gen_commit_7_0_i68);
MR_def_label(ml_backend__ml_commit_gen__ml_gen_commit_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(5),2)) {
		MR_GOTO_LAB(ml_backend__ml_commit_gen__ml_gen_commit_7_0_i41);
	}
	if (MR_INT_NE(MR_sv(2),0)) {
		MR_GOTO_LAB(ml_backend__ml_commit_gen__ml_gen_commit_7_0_i41);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(ml_backend__ml_commit_gen__ml_gen_maybe_make_locals_for_output_args_6_0,
		ml_backend__ml_commit_gen__ml_gen_commit_7_0_i44);
MR_def_label(ml_backend__ml_commit_gen__ml_gen_commit_7_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_sv(7) = MR_r3;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r4;
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_new_func_label_5_0,
		ml_backend__ml_commit_gen__ml_gen_commit_7_0_i45);
MR_def_label(ml_backend__ml_commit_gen__ml_gen_commit_7_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r3;
	MR_sv(8) = MR_r1;
	MR_sv(9) = MR_r2;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_make_context_1_0,
		ml_backend__ml_commit_gen__ml_gen_commit_7_0_i46);
MR_def_label(ml_backend__ml_commit_gen__ml_gen_commit_7_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("commit", 6);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(ml_backend__ml_gen_info__ml_gen_info_new_aux_var_name_4_0,
		ml_backend__ml_commit_gen__ml_gen_commit_7_0_i47);
MR_def_label(ml_backend__ml_commit_gen__ml_gen_commit_7_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r2;
	MR_sv(11) = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(11);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_var_lval_4_0,
		ml_backend__ml_commit_gen__ml_gen_commit_7_0_i48);
MR_def_label(ml_backend__ml_commit_gen__ml_gen_commit_7_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(11);
	MR_sv(11) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__ml_backend__ml_commit_gen__ml_gen_commit_var_decl_2_0,
		ml_backend__ml_commit_gen__ml_gen_commit_7_0_i49);
MR_def_label(ml_backend__ml_commit_gen__ml_gen_commit_7_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(11);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 7;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_r4 = MR_tempr3;
	MR_tfield(0, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(0, MR_tempr3, 1) = MR_sv(10);
	MR_tempr2 = MR_sv(8);
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr2;
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_nondet_label_func_5_0,
		ml_backend__ml_commit_gen__ml_gen_commit_7_0_i53);
MR_def_label(ml_backend__ml_commit_gen__ml_gen_commit_7_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_get_env_ptr_2_0,
		ml_backend__ml_commit_gen__ml_gen_commit_7_0_i54);
MR_def_label(ml_backend__ml_commit_gen__ml_gen_commit_7_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(9);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tfield(0, MR_tempr1, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 3) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(4);
	}
	MR_np_call_localret_ent(ml_backend__ml_gen_info__ml_gen_info_push_success_cont_3_0,
		ml_backend__ml_commit_gen__ml_gen_commit_7_0_i56);
MR_def_label(ml_backend__ml_commit_gen__ml_gen_commit_7_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 2;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__ml_code_gen__ml_gen_goal_6_0,
		ml_backend__ml_commit_gen__ml_gen_commit_7_0_i57);
MR_def_label(ml_backend__ml_commit_gen__ml_gen_commit_7_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(fn__ml_backend__ml_code_util__ml_gen_block_3_0,
		ml_backend__ml_commit_gen__ml_gen_commit_7_0_i58);
MR_def_label(ml_backend__ml_commit_gen__ml_gen_commit_7_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ml_backend__ml_gen_info__ml_gen_info_pop_success_cont_2_0,
		ml_backend__ml_commit_gen__ml_gen_commit_7_0_i59);
MR_def_label(ml_backend__ml_commit_gen__ml_gen_commit_7_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(fn__ml_backend__ml_code_util__ml_gen_block_3_0,
		ml_backend__ml_commit_gen__ml_gen_commit_7_0_i60);
MR_def_label(ml_backend__ml_commit_gen__ml_gen_commit_7_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(11);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 3) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(10);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(12);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_sv(8);
	MR_tfield(1, MR_r1, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr2;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(ml_backend__ml_commit_gen__maybe_put_commit_in_own_func_7_0,
		ml_backend__ml_commit_gen__ml_gen_commit_7_0_i66);
MR_def_label(ml_backend__ml_commit_gen__ml_gen_commit_7_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_sv(1) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ml_backend__ml_commit_gen__ml_gen_commit_7_0_i67);
MR_def_label(ml_backend__ml_commit_gen__ml_gen_commit_7_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__ml_gen_info__ml_gen_info_set_var_lvals_3_0,
		ml_backend__ml_commit_gen__ml_gen_commit_7_0_i68);
MR_def_label(ml_backend__ml_commit_gen__ml_gen_commit_7_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_decr_sp_and_return(13);
	}
MR_def_label(ml_backend__ml_commit_gen__ml_gen_commit_7_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(6);
	MR_succip_word = MR_sv(13);
	MR_decr_sp(13);
	MR_np_tailcall_ent(ml_backend__ml_code_gen__ml_gen_goal_6_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__ml_backend__ml_commit_gen_maybe_bunch_0(void)
{
	ml_backend__ml_commit_gen_module0();
	ml_backend__ml_commit_gen_module1();
	ml_backend__ml_commit_gen_module2();
	ml_backend__ml_commit_gen_module3();
	ml_backend__ml_commit_gen_module4();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__ml_backend__ml_commit_gen__init(void);
void mercury__ml_backend__ml_commit_gen__init_type_tables(void);
void mercury__ml_backend__ml_commit_gen__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__ml_backend__ml_commit_gen__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__ml_backend__ml_commit_gen__init_complexity_procs(void);
#endif

void mercury__ml_backend__ml_commit_gen__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__ml_backend__ml_commit_gen_maybe_bunch_0();
	mercury__ml_backend__ml_commit_gen__init_debugger();
}

void mercury__ml_backend__ml_commit_gen__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}


void mercury__ml_backend__ml_commit_gen__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__ml_backend__ml_commit_gen__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__ml_backend__ml_commit_gen);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__ml_backend__ml_commit_gen__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
