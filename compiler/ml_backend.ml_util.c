/*
** Automatically generated from `ml_util.m'
** by the Mercury compiler,
** version 11.07.2, configured for x86_64-unknown-linux-gnu.
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
INIT mercury__ml_backend__ml_util__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 140 "../library/io.int2"
#include "io.mh"

#line 28 "ml_backend.ml_util.c"
#line 150 "../library/io.int2"
#include "time.mh"

#line 32 "ml_backend.ml_util.c"
#line 151 "../library/io.int2"
#include "string.mh"

#line 36 "ml_backend.ml_util.c"
#line 33 "../library/array.int2"
#include "array.mh"

#line 40 "ml_backend.ml_util.c"
#line 31 "../library/bitmap.int2"
#include "bitmap.mh"

#line 44 "ml_backend.ml_util.c"
#line 39 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 48 "ml_backend.ml_util.c"
#line 49 "ml_backend.ml_util.c"
#include "ml_backend.ml_util.mh"

#line 52 "ml_backend.ml_util.c"
#line 53 "ml_backend.ml_util.c"
#ifndef ML_BACKEND__ML_UTIL_DECL_GUARD
#define ML_BACKEND__ML_UTIL_DECL_GUARD

#line 57 "ml_backend.ml_util.c"
#line 58 "ml_backend.ml_util.c"

#endif
#line 61 "ml_backend.ml_util.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

struct mercury_type_0 {
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
	MR_Word * f5;
};
MR_STATIC_LINKAGE const struct mercury_type_0 mercury_common_0[];

struct mercury_type_1 {
	MR_String f1;
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

struct mercury_type_2 {
	MR_Word * f1;
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];
MR_decl_label2(ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__596__1_2_0, 2,1)
MR_decl_label8(ml_backend__ml_util__can_optimize_tailcall_2_0, 4,3,9,8,12,16,18,1)
MR_decl_label3(ml_backend__ml_util__cases_contains_statement_2_0, 1,3,2)
MR_decl_label1(ml_backend__ml_util__default_contains_statement_2_0, 3)
MR_decl_label5(ml_backend__ml_util__defn_contains_foreign_code_2_0, 6,5,10,9,2)
MR_decl_label3(ml_backend__ml_util__defn_contains_outline_foreign_proc_2_0, 6,5,2)
MR_decl_label1(ml_backend__ml_util__defn_is_commit_type_var_1_0, 1)
MR_decl_label2(ml_backend__ml_util__defn_is_public_1_0, 2,1)
MR_decl_label1(ml_backend__ml_util__defn_is_type_ctor_info_1_0, 1)
MR_decl_label3(ml_backend__ml_util__defns_contain_main_1_0, 4,3,1)
MR_decl_label1(ml_backend__ml_util__maybe_statement_contains_statement_2_0, 3)
MR_decl_label1(ml_backend__ml_util__statement_contains_statement_2_0, 2)
MR_decl_label3(ml_backend__ml_util__statements_contains_statement_2_0, 1,3,2)
MR_decl_label10(ml_backend__ml_util__stmt_contains_statement_2_0, 61,8,6,4,11,18,15,25,23,28)
MR_decl_label2(ml_backend__ml_util__stmt_contains_statement_2_0, 21,60)
MR_decl_label10(ml_backend__ml_util__type_ctor_needs_lowlevel_rep_2_0, 3,4,15,14,18,17,21,20,24,23)
MR_decl_label10(ml_backend__ml_util__type_ctor_needs_lowlevel_rep_2_0, 27,26,30,29,33,32,36,35,39,38)
MR_decl_label10(ml_backend__ml_util__type_ctor_needs_lowlevel_rep_2_0, 42,41,45,44,48,108,47,51,11,12)
MR_decl_label1(ml_backend__ml_util__type_ctor_needs_lowlevel_rep_2_0, 1)
MR_decl_label2(ml_backend__ml_util__type_needs_lowlevel_rep_2_0, 2,1)
MR_decl_label4(fn__ml_backend__ml_util__cases_contains_var_2_0, 16,3,5,4)
MR_decl_label1(fn__ml_backend__ml_util__default_contains_var_2_0, 3)
MR_decl_label4(fn__ml_backend__ml_util__defn_body_contains_var_2_0, 5,4,3,9)
MR_decl_label4(fn__ml_backend__ml_util__defns_contains_var_2_0, 16,3,5,4)
MR_decl_label1(fn__ml_backend__ml_util__function_body_contains_var_2_0, 3)
MR_decl_label1(fn__ml_backend__ml_util__gen_init_array_2_0, 2)
MR_decl_label1(fn__ml_backend__ml_util__gen_init_bool_1_0, 3)
MR_decl_label2(fn__ml_backend__ml_util__gen_init_builtin_const_1_0, 2,3)
MR_decl_label1(fn__ml_backend__ml_util__gen_init_maybe_3_0, 3)
MR_decl_label1(fn__ml_backend__ml_util__gen_init_reserved_address_2_0, 2)
MR_decl_label3(fn__ml_backend__ml_util__initializer_contains_var_2_0, 3,4,6)
MR_decl_label4(fn__ml_backend__ml_util__initializers_contains_var_2_0, 16,3,5,4)
MR_decl_label6(fn__ml_backend__ml_util__lval_contains_var_2_0, 3,23,5,55,9,12)
MR_decl_label4(fn__ml_backend__ml_util__lvals_contains_var_2_0, 16,3,5,4)
MR_decl_label1(fn__ml_backend__ml_util__maybe_rval_contains_var_2_0, 3)
MR_decl_label1(fn__ml_backend__ml_util__maybe_statement_contains_var_2_0, 3)
MR_decl_label8(fn__ml_backend__ml_util__outline_args_contains_var_2_0, 33,3,8,7,11,6,4,5)
MR_decl_label10(fn__ml_backend__ml_util__rval_contains_var_2_0, 83,7,9,3,12,14,18,17,16,22)
MR_decl_label3(fn__ml_backend__ml_util__rval_contains_var_2_0, 24,39,25)
MR_decl_label4(fn__ml_backend__ml_util__rvals_contains_var_2_0, 16,3,5,4)
MR_decl_label4(fn__ml_backend__ml_util__statements_contains_var_2_0, 16,3,5,4)
MR_decl_label10(fn__ml_backend__ml_util__stmt_contains_var_2_0, 5,4,3,11,10,14,13,9,21,19)
MR_decl_label10(fn__ml_backend__ml_util__stmt_contains_var_2_0, 27,30,28,34,37,36,35,41,43,45)
MR_decl_label10(fn__ml_backend__ml_util__stmt_contains_var_2_0, 49,48,47,55,54,53,59,134,62,63)
MR_decl_label10(fn__ml_backend__ml_util__stmt_contains_var_2_0, 65,67,25,72,71,77,75,80,79,70)
MR_decl_label10(fn__ml_backend__ml_util__stmt_contains_var_2_0, 86,88,90,94,93,97,96,92,104,103)
MR_decl_label2(fn__ml_backend__ml_util__stmt_contains_var_2_0, 107,106)
MR_decl_label10(fn__ml_backend__ml_util__target_code_components_contains_var_2_0, 59,3,8,7,12,14,10,17,6,4)
MR_decl_label1(fn__ml_backend__ml_util__target_code_components_contains_var_2_0, 5)
MR_def_extern_entry(ml_backend__ml_util__defns_contain_main_1_0)
MR_def_extern_entry(ml_backend__ml_util__can_optimize_tailcall_2_0)
MR_def_extern_entry(ml_backend__ml_util__statement_contains_statement_2_0)
MR_def_extern_entry(ml_backend__ml_util__stmt_contains_statement_2_0)
MR_decl_static(ml_backend__ml_util__statements_contains_statement_2_0)
MR_decl_static(ml_backend__ml_util__maybe_statement_contains_statement_2_0)
MR_decl_static(ml_backend__ml_util__cases_contains_statement_2_0)
MR_decl_static(ml_backend__ml_util__default_contains_statement_2_0)
MR_def_extern_entry(fn__ml_backend__ml_util__rval_contains_var_2_0)
MR_def_extern_entry(fn__ml_backend__ml_util__lval_contains_var_2_0)
MR_def_extern_entry(fn__ml_backend__ml_util__initializer_contains_var_2_0)
MR_decl_static(fn__ml_backend__ml_util__initializers_contains_var_2_0)
MR_def_extern_entry(fn__ml_backend__ml_util__rvals_contains_var_2_0)
MR_def_extern_entry(fn__ml_backend__ml_util__maybe_rval_contains_var_2_0)
MR_def_extern_entry(fn__ml_backend__ml_util__lvals_contains_var_2_0)
MR_decl_static(fn__ml_backend__ml_util__target_code_components_contains_var_2_0)
MR_decl_static(fn__ml_backend__ml_util__outline_args_contains_var_2_0)
MR_def_extern_entry(fn__ml_backend__ml_util__statement_contains_var_2_0)
MR_def_extern_entry(fn__ml_backend__ml_util__defns_contains_var_2_0)
MR_def_extern_entry(fn__ml_backend__ml_util__defn_contains_var_2_0)
MR_decl_static(fn__ml_backend__ml_util__statements_contains_var_2_0)
MR_decl_static(fn__ml_backend__ml_util__maybe_statement_contains_var_2_0)
MR_decl_static(fn__ml_backend__ml_util__stmt_contains_var_2_0)
MR_decl_static(fn__ml_backend__ml_util__cases_contains_var_2_0)
MR_decl_static(fn__ml_backend__ml_util__default_contains_var_2_0)
MR_decl_static(fn__ml_backend__ml_util__defn_body_contains_var_2_0)
MR_decl_static(fn__ml_backend__ml_util__function_body_contains_var_2_0)
MR_def_extern_entry(ml_backend__ml_util__has_foreign_languages_2_0)
MR_def_extern_entry(ml_backend__ml_util__defn_contains_foreign_code_2_0)
MR_def_extern_entry(ml_backend__ml_util__defn_contains_outline_foreign_proc_2_0)
MR_def_extern_entry(ml_backend__ml_util__defn_is_type_1_0)
MR_def_extern_entry(ml_backend__ml_util__defn_is_function_1_0)
MR_def_extern_entry(ml_backend__ml_util__defn_is_type_ctor_info_1_0)
MR_def_extern_entry(ml_backend__ml_util__defn_is_commit_type_var_1_0)
MR_def_extern_entry(ml_backend__ml_util__defn_is_public_1_0)
MR_def_extern_entry(ml_backend__ml_util__type_ctor_needs_lowlevel_rep_2_0)
MR_def_extern_entry(ml_backend__ml_util__type_needs_lowlevel_rep_2_0)
MR_def_extern_entry(fn__ml_backend__ml_util__gen_init_builtin_const_1_0)
MR_def_extern_entry(fn__ml_backend__ml_util__gen_init_array_2_0)
MR_def_extern_entry(fn__ml_backend__ml_util__gen_init_null_pointer_1_0)
MR_def_extern_entry(fn__ml_backend__ml_util__gen_init_maybe_3_0)
MR_def_extern_entry(fn__ml_backend__ml_util__gen_init_string_1_0)
MR_def_extern_entry(fn__ml_backend__ml_util__gen_init_foreign_2_0)
MR_def_extern_entry(fn__ml_backend__ml_util__gen_init_int_1_0)
MR_def_extern_entry(fn__ml_backend__ml_util__gen_init_bool_1_0)
MR_def_extern_entry(fn__ml_backend__ml_util__gen_init_boxed_int_1_0)
MR_def_extern_entry(fn__ml_backend__ml_util__gen_init_reserved_address_2_0)
MR_def_extern_entry(fn__ml_backend__ml_util__wrap_init_obj_1_0)
MR_decl_static(ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__596__1_2_0)

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ml_util__has_foreign_languages_2_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_statement_0;
extern const MR_TypeCtorInfo_Struct mercury_data_libs__globals__type_ctor_info_foreign_language_0;
static const struct mercury_type_0 mercury_common_0[1] =
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__ml_util__has_foreign_languages_2_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(ml_backend__mlds, statement),
MR_CTOR0_ADDR(libs__globals, foreign_language)
},
};

static const struct mercury_type_1 mercury_common_1[4] =
{
{
MR_string_const("rtti_implementation", 19)
},
{
MR_string_const("univ", 4)
},
{
MR_string_const("mutvar", 6)
},
{
MR_string_const("type_desc", 9)
},
};

static const struct mercury_type_2 mercury_common_2[5] =
{
{
MR_tbmkword(0, 1)
},
{
MR_TAG_COMMON(2,2,0)
},
{
MR_tbmkword(0, 0)
},
{
MR_TAG_COMMON(2,2,2)
},
{
MR_tbmkword(0, 2)
},
};


static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ml_util__has_foreign_languages_2_0_1 = {
{
MR_PREDICATE,
"ml_backend.ml_util",
"ml_backend.ml_util",
"lambda_ml_util_m_596",
2,
0
},
"ml_backend.ml_util",
"ml_util.m",
596,
"4"
};



MR_BEGIN_MODULE(ml_backend__ml_util_module0)
	MR_init_entry1(ml_backend__ml_util__defns_contain_main_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_util__defns_contain_main_1_0);
	MR_init_label3(ml_backend__ml_util__defns_contain_main_1_0,4,3,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'defns_contain_main'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ml_backend__ml_util__defns_contain_main_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ml_backend__ml_util__defns_contain_main_1_0_i1);
	}
	MR_r2 = MR_tfield(1, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_tfield(1, MR_r1, 0), 0);
	if (MR_PTAG_TESTR(MR_tempr1,2)) {
		MR_GOTO_LAB(ml_backend__ml_util__defns_contain_main_1_0_i4);
	}
	MR_r1 = MR_tfield(2, MR_tempr1, 0);
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(ml_backend__ml_util__defns_contain_main_1_0_i4);
	}
	MR_tempr1 = MR_tfield(0, MR_r1, 0);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(ml_backend__ml_util__defns_contain_main_1_0_i4);
	}
	MR_tempr1 = MR_tfield(0, MR_r1, 2);
	if ((strcmp((char *) (MR_Word *) MR_tempr1, MR_string_const("main", 4)) != 0)) {
		MR_GOTO_LAB(ml_backend__ml_util__defns_contain_main_1_0_i4);
	}
	MR_tempr1 = MR_tfield(0, MR_r1, 3);
	if (MR_INT_EQ(MR_tempr1,2)) {
		MR_GOTO_LAB(ml_backend__ml_util__defns_contain_main_1_0_i3);
	}
	}
MR_def_label(ml_backend__ml_util__defns_contain_main_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_np_localtailcall(ml_backend__ml_util__defns_contain_main_1_0);
MR_def_label(ml_backend__ml_util__defns_contain_main_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ml_backend__ml_util__defns_contain_main_1_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___ml_backend__mlds__mlds_module_name_0_0);
MR_decl_entry(__Unify___ml_backend__mlds__mlds_pred_label_0_0);
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
MR_decl_entry(__Unify___maybe__maybe_1_0);

MR_BEGIN_MODULE(ml_backend__ml_util_module1)
	MR_init_entry1(ml_backend__ml_util__can_optimize_tailcall_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_util__can_optimize_tailcall_2_0);
	MR_init_label8(ml_backend__ml_util__can_optimize_tailcall_2_0,4,3,9,8,12,16,18,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'can_optimize_tailcall'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ml_backend__ml_util__can_optimize_tailcall_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	if (MR_RTAGS_TESTR(MR_r2,3,4)) {
		MR_GOTO_LAB(ml_backend__ml_util__can_optimize_tailcall_2_0_i1);
	}
	MR_r3 = MR_tfield(3, MR_r2, 6);
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(ml_backend__ml_util__can_optimize_tailcall_2_0_i4);
	}
	MR_r3 = MR_r2;
	MR_r2 = MR_tfield(3, MR_r2, 2);
	MR_sv(1) = MR_tfield(3, MR_r3, 3);
	MR_GOTO_LAB(ml_backend__ml_util__can_optimize_tailcall_2_0_i3);
MR_def_label(ml_backend__ml_util__can_optimize_tailcall_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,1)) {
		MR_GOTO_LAB(ml_backend__ml_util__can_optimize_tailcall_2_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_tfield(3, MR_r2, 2);
	MR_sv(1) = MR_tfield(3, MR_tempr1, 3);
	}
MR_def_label(ml_backend__ml_util__can_optimize_tailcall_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,2)) {
		MR_GOTO_LAB(ml_backend__ml_util__can_optimize_tailcall_2_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(2, MR_r2, 0);
	MR_r3 = MR_tempr1;
	if (MR_RTAGS_TESTR(MR_tempr1,3,6)) {
		MR_GOTO_LAB(ml_backend__ml_util__can_optimize_tailcall_2_0_i1);
	}
	MR_tempr2 = MR_tfield(3, MR_tempr1, 1);
	MR_r4 = MR_tempr2;
	if (MR_PTAG_TESTR(MR_tempr2,1)) {
		MR_GOTO_LAB(ml_backend__ml_util__can_optimize_tailcall_2_0_i9);
	}
	MR_tag_alloc_heap(MR_sv(2), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(2), 0) = MR_tfield(1, MR_tempr2, 1);
	MR_r2 = MR_tfield(1, MR_tempr2, 0);
	MR_GOTO_LAB(ml_backend__ml_util__can_optimize_tailcall_2_0_i8);
	}
MR_def_label(ml_backend__ml_util__can_optimize_tailcall_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(0, MR_r4, 0);
	MR_sv(2) = (MR_Word) MR_tbmkword(0, 0);
MR_def_label(ml_backend__ml_util__can_optimize_tailcall_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r2, 1);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(ml_backend__ml_util__can_optimize_tailcall_2_0_i1);
	}
	MR_tempr1 = MR_tfield(0, MR_r2, 2);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(4) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(5) = MR_tfield(0, MR_r1, 2);
	MR_sv(6) = MR_tfield(0, MR_r1, 1);
	MR_tempr1 = MR_r1;
	MR_r1 = MR_tfield(0, MR_r2, 0);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(__Unify___ml_backend__mlds__mlds_module_name_0_0,
		ml_backend__ml_util__can_optimize_tailcall_2_0_i12);
MR_def_label(ml_backend__ml_util__can_optimize_tailcall_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ml_backend__ml_util__can_optimize_tailcall_2_0_i1);
	}
	if (MR_INT_NE(MR_sv(6),0)) {
		MR_GOTO_LAB(ml_backend__ml_util__can_optimize_tailcall_2_0_i1);
	}
	if (MR_PTAG_TESTR(MR_sv(5),2)) {
		MR_GOTO_LAB(ml_backend__ml_util__can_optimize_tailcall_2_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_sv(3);
	MR_tempr3 = MR_sv(5);
	MR_sv(3) = MR_tfield(2, MR_tempr3, 1);
	MR_tempr2 = MR_tempr3;
	MR_sv(5) = MR_tfield(2, MR_tempr2, 2);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tfield(2, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___ml_backend__mlds__mlds_pred_label_0_0,
		ml_backend__ml_util__can_optimize_tailcall_2_0_i16);
MR_def_label(ml_backend__ml_util__can_optimize_tailcall_2_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ml_backend__ml_util__can_optimize_tailcall_2_0_i1);
	}
	if ((MR_sv(4) != MR_sv(3))) {
		MR_GOTO_LAB(ml_backend__ml_util__can_optimize_tailcall_2_0_i1);
	}
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(__Unify___maybe__maybe_1_0,
		ml_backend__ml_util__can_optimize_tailcall_2_0_i18);
MR_def_label(ml_backend__ml_util__can_optimize_tailcall_2_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ml_backend__ml_util__can_optimize_tailcall_2_0_i1);
	}
	MR_r1 = ((MR_Integer) MR_sv(1) == (MR_Integer) MR_tbmkword(0, 0));
	MR_decr_sp_and_return(7);
MR_def_label(ml_backend__ml_util__can_optimize_tailcall_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(MR_do_fail);

MR_BEGIN_MODULE(ml_backend__ml_util_module2)
	MR_init_entry1(ml_backend__ml_util__statement_contains_statement_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_util__statement_contains_statement_2_0);
	MR_init_label1(ml_backend__ml_util__statement_contains_statement_2_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'statement_contains_statement'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ml_backend__ml_util__statement_contains_statement_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_mkframe("pred ml_backend.ml_util.statement_contains_statement/2-0", 1,
		MR_LABEL_AP(ml_backend__ml_util__statement_contains_statement_2_0_i2));
	MR_fv(1) = MR_r1;
	MR_succeed();
MR_def_label(ml_backend__ml_util__statement_contains_statement_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_curfr) = (MR_Word) MR_ENTRY(MR_do_fail);
	MR_r1 = MR_tfield(0, MR_fv(1), 0);
	MR_maxfr_word = (MR_Word) MR_prevfr_slot(MR_curfr);
	MR_succip_word = (MR_Word) MR_succip_slot(MR_curfr);
	MR_curfr_word = (MR_Word) MR_succfr_slot(MR_curfr);
	MR_np_tailcall_ent(ml_backend__ml_util__stmt_contains_statement_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_util_module3)
	MR_init_entry1(ml_backend__ml_util__stmt_contains_statement_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_util__stmt_contains_statement_2_0);
	MR_init_label10(ml_backend__ml_util__stmt_contains_statement_2_0,61,8,6,4,11,18,15,25,23,28)
	MR_init_label2(ml_backend__ml_util__stmt_contains_statement_2_0,21,60)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'stmt_contains_statement'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ml_backend__ml_util__stmt_contains_statement_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(ml_backend__ml_util__stmt_contains_statement_2_0_i61);
	}
	MR_r1 = MR_tfield(0, MR_r1, 1);
	MR_np_tailcall_ent(ml_backend__ml_util__statements_contains_statement_2_0);
MR_def_label(ml_backend__ml_util__stmt_contains_statement_2_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_mkframe("pred ml_backend.ml_util.stmt_contains_statement/2-0", 2,
		MR_ENTRY(MR_do_fail));
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(ml_backend__ml_util__stmt_contains_statement_2_0_i4);
	}
	MR_fv(2) = MR_tfield(2, MR_r1, 2);
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(ml_backend__ml_util__stmt_contains_statement_2_0_i8);
	MR_r2 = MR_tfield(2, MR_r1, 1);
	MR_fv(1) = MR_r2;
	MR_r1 = MR_r2;
	MR_succeed();
MR_def_label(ml_backend__ml_util__stmt_contains_statement_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_curfr) = (MR_Word) MR_LABEL_AP(ml_backend__ml_util__stmt_contains_statement_2_0_i6);
	MR_r1 = MR_tfield(0, MR_fv(1), 0);
	MR_np_localcall_lab(ml_backend__ml_util__stmt_contains_statement_2_0,
		ml_backend__ml_util__stmt_contains_statement_2_0_i60);
MR_def_label(ml_backend__ml_util__stmt_contains_statement_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_curfr) = (MR_Word) MR_ENTRY(MR_do_fail);
	MR_r1 = MR_fv(2);
	MR_succip_word = (MR_Word) MR_succip_slot(MR_curfr);
	MR_maxfr_word = (MR_Word) MR_prevfr_slot(MR_curfr);
	MR_curfr_word = (MR_Word) MR_succfr_slot(MR_curfr);
	MR_np_tailcall_ent(ml_backend__ml_util__maybe_statement_contains_statement_2_0);
MR_def_label(ml_backend__ml_util__stmt_contains_statement_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(ml_backend__ml_util__stmt_contains_statement_2_0_i11);
	}
	MR_r2 = MR_tfield(1, MR_r1, 2);
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(ml_backend__ml_util__stmt_contains_statement_2_0_i28);
	MR_fv(1) = MR_r2;
	MR_r1 = MR_r2;
	MR_succeed();
MR_def_label(ml_backend__ml_util__stmt_contains_statement_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,0)) {
		MR_GOTO_LAB(ml_backend__ml_util__stmt_contains_statement_2_0_i15);
	}
	MR_fv(1) = MR_tfield(3, MR_r1, 5);
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(ml_backend__ml_util__stmt_contains_statement_2_0_i18);
	MR_r1 = MR_tfield(3, MR_r1, 4);
	MR_np_call_localret_ent(ml_backend__ml_util__cases_contains_statement_2_0,
		ml_backend__ml_util__stmt_contains_statement_2_0_i60);
MR_def_label(ml_backend__ml_util__stmt_contains_statement_2_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_curfr) = (MR_Word) MR_ENTRY(MR_do_fail);
	MR_r1 = MR_fv(1);
	MR_succip_word = (MR_Word) MR_succip_slot(MR_curfr);
	MR_maxfr_word = (MR_Word) MR_prevfr_slot(MR_curfr);
	MR_curfr_word = (MR_Word) MR_succfr_slot(MR_curfr);
	MR_np_tailcall_ent(ml_backend__ml_util__default_contains_statement_2_0);
MR_def_label(ml_backend__ml_util__stmt_contains_statement_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,6)) {
		MR_GOTO_LAB(ml_backend__ml_util__stmt_contains_statement_2_0_i21);
	}
	MR_fv(1) = MR_tfield(3, MR_r1, 3);
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(ml_backend__ml_util__stmt_contains_statement_2_0_i25);
	MR_r2 = MR_tfield(3, MR_r1, 2);
	MR_fv(2) = MR_r2;
	MR_r1 = MR_r2;
	MR_succeed();
MR_def_label(ml_backend__ml_util__stmt_contains_statement_2_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_curfr) = (MR_Word) MR_LABEL_AP(ml_backend__ml_util__stmt_contains_statement_2_0_i23);
	MR_r1 = MR_tfield(0, MR_fv(2), 0);
	MR_np_localcall_lab(ml_backend__ml_util__stmt_contains_statement_2_0,
		ml_backend__ml_util__stmt_contains_statement_2_0_i60);
MR_def_label(ml_backend__ml_util__stmt_contains_statement_2_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_curfr) = (MR_Word) MR_ENTRY(MR_do_fail);
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(ml_backend__ml_util__stmt_contains_statement_2_0_i28);
	MR_r1 = MR_fv(1);
	MR_succeed();
MR_def_label(ml_backend__ml_util__stmt_contains_statement_2_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_curfr) = (MR_Word) MR_ENTRY(MR_do_fail);
	MR_r1 = MR_tfield(0, MR_fv(1), 0);
	MR_succip_word = (MR_Word) MR_succip_slot(MR_curfr);
	MR_maxfr_word = (MR_Word) MR_prevfr_slot(MR_curfr);
	MR_curfr_word = (MR_Word) MR_succfr_slot(MR_curfr);
	MR_np_localtailcall(ml_backend__ml_util__stmt_contains_statement_2_0);
MR_def_label(ml_backend__ml_util__stmt_contains_statement_2_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_GOTO(MR_ENTRY(MR_do_fail));
MR_def_label(ml_backend__ml_util__stmt_contains_statement_2_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succeed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_statement_0;
MR_decl_entry(list__member_2_1);

MR_BEGIN_MODULE(ml_backend__ml_util_module4)
	MR_init_entry1(ml_backend__ml_util__statements_contains_statement_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_util__statements_contains_statement_2_0);
	MR_init_label3(ml_backend__ml_util__statements_contains_statement_2_0,1,3,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'statements_contains_statement'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ml_util__statements_contains_statement_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_mkframe("pred ml_backend.ml_util.statements_contains_statement/2-0", 3,
		MR_ENTRY(MR_do_fail));
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, statement);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__member_2_1,
		ml_backend__ml_util__statements_contains_statement_2_0_i1);
MR_def_label(ml_backend__ml_util__statements_contains_statement_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_fv(2) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_fv(3) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(ml_backend__ml_util__statements_contains_statement_2_0_i3);
	MR_fv(1) = MR_r1;
	MR_succeed();
MR_def_label(ml_backend__ml_util__statements_contains_statement_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = MR_fv(2);
	MR_redofr_slot_word(MR_maxfr) = MR_fv(3);
	MR_r1 = MR_tfield(0, MR_fv(1), 0);
	MR_np_call_localret_ent(ml_backend__ml_util__stmt_contains_statement_2_0,
		ml_backend__ml_util__statements_contains_statement_2_0_i2);
MR_def_label(ml_backend__ml_util__statements_contains_statement_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succeed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(MR_do_redo);

MR_BEGIN_MODULE(ml_backend__ml_util_module5)
	MR_init_entry1(ml_backend__ml_util__maybe_statement_contains_statement_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_util__maybe_statement_contains_statement_2_0);
	MR_init_label1(ml_backend__ml_util__maybe_statement_contains_statement_2_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'maybe_statement_contains_statement'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ml_util__maybe_statement_contains_statement_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_mkframe("pred ml_backend.ml_util.maybe_statement_contains_statement/2-0", 1,
		MR_LABEL_AP(ml_backend__ml_util__maybe_statement_contains_statement_2_0_i3));
	MR_r2 = MR_tfield(1, MR_r1, 0);
	MR_fv(1) = MR_r2;
	MR_r1 = MR_r2;
	MR_succeed();
MR_def_label(ml_backend__ml_util__maybe_statement_contains_statement_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_curfr) = (MR_Word) MR_ENTRY(MR_do_fail);
	MR_r1 = MR_tfield(0, MR_fv(1), 0);
	MR_maxfr_word = (MR_Word) MR_prevfr_slot(MR_curfr);
	MR_succip_word = (MR_Word) MR_succip_slot(MR_curfr);
	MR_curfr_word = (MR_Word) MR_succfr_slot(MR_curfr);
	MR_np_tailcall_ent(ml_backend__ml_util__stmt_contains_statement_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_switch_case_0;

MR_BEGIN_MODULE(ml_backend__ml_util_module6)
	MR_init_entry1(ml_backend__ml_util__cases_contains_statement_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_util__cases_contains_statement_2_0);
	MR_init_label3(ml_backend__ml_util__cases_contains_statement_2_0,1,3,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'cases_contains_statement'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ml_util__cases_contains_statement_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_mkframe("pred ml_backend.ml_util.cases_contains_statement/2-0", 3,
		MR_ENTRY(MR_do_fail));
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_switch_case);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__member_2_1,
		ml_backend__ml_util__cases_contains_statement_2_0_i1);
MR_def_label(ml_backend__ml_util__cases_contains_statement_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(0, MR_r1, 2);
	MR_fv(2) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_fv(3) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(ml_backend__ml_util__cases_contains_statement_2_0_i3);
	MR_fv(1) = MR_r2;
	MR_r1 = MR_r2;
	MR_succeed();
MR_def_label(ml_backend__ml_util__cases_contains_statement_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = MR_fv(2);
	MR_redofr_slot_word(MR_maxfr) = MR_fv(3);
	MR_r1 = MR_tfield(0, MR_fv(1), 0);
	MR_np_call_localret_ent(ml_backend__ml_util__stmt_contains_statement_2_0,
		ml_backend__ml_util__cases_contains_statement_2_0_i2);
MR_def_label(ml_backend__ml_util__cases_contains_statement_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succeed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_util_module7)
	MR_init_entry1(ml_backend__ml_util__default_contains_statement_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_util__default_contains_statement_2_0);
	MR_init_label1(ml_backend__ml_util__default_contains_statement_2_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'default_contains_statement'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ml_util__default_contains_statement_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_mkframe("pred ml_backend.ml_util.default_contains_statement/2-0", 1,
		MR_LABEL_AP(ml_backend__ml_util__default_contains_statement_2_0_i3));
	MR_r2 = MR_tfield(1, MR_r1, 0);
	MR_fv(1) = MR_r2;
	MR_r1 = MR_r2;
	MR_succeed();
MR_def_label(ml_backend__ml_util__default_contains_statement_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_curfr) = (MR_Word) MR_ENTRY(MR_do_fail);
	MR_r1 = MR_tfield(0, MR_fv(1), 0);
	MR_maxfr_word = (MR_Word) MR_prevfr_slot(MR_curfr);
	MR_succip_word = (MR_Word) MR_succip_slot(MR_curfr);
	MR_curfr_word = (MR_Word) MR_succfr_slot(MR_curfr);
	MR_np_tailcall_ent(ml_backend__ml_util__stmt_contains_statement_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___ml_backend__mlds__mlds_data_name_0_0);

MR_BEGIN_MODULE(ml_backend__ml_util_module8)
	MR_init_entry1(fn__ml_backend__ml_util__rval_contains_var_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ml_backend__ml_util__rval_contains_var_2_0);
	MR_init_label10(fn__ml_backend__ml_util__rval_contains_var_2_0,83,7,9,3,12,14,18,17,16,22)
	MR_init_label3(fn__ml_backend__ml_util__rval_contains_var_2_0,24,39,25)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'rval_contains_var'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__ml_backend__ml_util__rval_contains_var_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(fn__ml_backend__ml_util__rval_contains_var_2_0,83)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(fn__ml_backend__ml_util__rval_contains_var_2_0_i3);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(2, MR_r1, 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,7)) {
		MR_GOTO_LAB(fn__ml_backend__ml_util__rval_contains_var_2_0_i39);
	}
	MR_tempr2 = MR_tfield(3, MR_tempr1, 1);
	MR_sv(1) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(2) = MR_tfield(0, MR_r2, 2);
	MR_r1 = MR_tfield(0, MR_tempr2, 0);
	MR_r2 = MR_tfield(0, MR_r2, 0);
	}
	MR_np_call_localret_ent(__Unify___ml_backend__mlds__mlds_module_name_0_0,
		fn__ml_backend__ml_util__rval_contains_var_2_0_i7);
MR_def_label(fn__ml_backend__ml_util__rval_contains_var_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__ml_backend__ml_util__rval_contains_var_2_0_i39);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(__Unify___ml_backend__mlds__mlds_data_name_0_0,
		fn__ml_backend__ml_util__rval_contains_var_2_0_i9);
MR_def_label(fn__ml_backend__ml_util__rval_contains_var_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__ml_backend__ml_util__rval_contains_var_2_0_i39);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(fn__ml_backend__ml_util__rval_contains_var_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(fn__ml_backend__ml_util__rval_contains_var_2_0_i12);
	}
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(fn__ml_backend__ml_util__lval_contains_var_2_0);
MR_def_label(fn__ml_backend__ml_util__rval_contains_var_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(fn__ml_backend__ml_util__rval_contains_var_2_0_i14);
	}
	MR_r1 = MR_tfield(1, MR_r1, 1);
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(fn__ml_backend__ml_util__rval_contains_var_2_0_i83);
MR_def_label(fn__ml_backend__ml_util__rval_contains_var_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,1)) {
		MR_GOTO_LAB(fn__ml_backend__ml_util__rval_contains_var_2_0_i16);
	}
	MR_sv(2) = MR_tfield(3, MR_r1, 3);
	MR_sv(1) = MR_r2;
	MR_r1 = MR_tfield(3, MR_r1, 2);
	MR_np_localcall_lab(fn__ml_backend__ml_util__rval_contains_var_2_0,
		fn__ml_backend__ml_util__rval_contains_var_2_0_i18);
MR_def_label(fn__ml_backend__ml_util__rval_contains_var_2_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(fn__ml_backend__ml_util__rval_contains_var_2_0_i17);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(fn__ml_backend__ml_util__rval_contains_var_2_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(fn__ml_backend__ml_util__rval_contains_var_2_0_i83);
MR_def_label(fn__ml_backend__ml_util__rval_contains_var_2_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,2)) {
		MR_GOTO_LAB(fn__ml_backend__ml_util__rval_contains_var_2_0_i22);
	}
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(fn__ml_backend__ml_util__lval_contains_var_2_0);
MR_def_label(fn__ml_backend__ml_util__rval_contains_var_2_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,3)) {
		MR_GOTO_LAB(fn__ml_backend__ml_util__rval_contains_var_2_0_i24);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(fn__ml_backend__ml_util__rval_contains_var_2_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,5)) {
		MR_GOTO_LAB(fn__ml_backend__ml_util__rval_contains_var_2_0_i25);
	}
MR_def_label(fn__ml_backend__ml_util__rval_contains_var_2_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(fn__ml_backend__ml_util__rval_contains_var_2_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(3, MR_r1, 2);
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(fn__ml_backend__ml_util__rval_contains_var_2_0_i83);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___ml_backend__mlds__mlds_var_name_0_0);

MR_BEGIN_MODULE(ml_backend__ml_util_module9)
	MR_init_entry1(fn__ml_backend__ml_util__lval_contains_var_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ml_backend__ml_util__lval_contains_var_2_0);
	MR_init_label6(fn__ml_backend__ml_util__lval_contains_var_2_0,3,23,5,55,9,12)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'lval_contains_var'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__ml_backend__ml_util__lval_contains_var_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(fn__ml_backend__ml_util__lval_contains_var_2_0_i3);
	}
	MR_r1 = MR_tfield(0, MR_r1, 1);
	MR_np_tailcall_ent(fn__ml_backend__ml_util__rval_contains_var_2_0);
MR_def_label(fn__ml_backend__ml_util__lval_contains_var_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(fn__ml_backend__ml_util__lval_contains_var_2_0_i5);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(fn__ml_backend__ml_util__lval_contains_var_2_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(5);
MR_def_label(fn__ml_backend__ml_util__lval_contains_var_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(fn__ml_backend__ml_util__lval_contains_var_2_0_i55);
	}
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_np_tailcall_ent(fn__ml_backend__ml_util__rval_contains_var_2_0);
MR_def_label(fn__ml_backend__ml_util__lval_contains_var_2_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(3, MR_r1, 0);
	MR_sv(1) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(2) = MR_tfield(0, MR_tempr1, 2);
	MR_sv(3) = MR_tfield(0, MR_r2, 2);
	MR_sv(4) = MR_tfield(0, MR_r2, 1);
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = MR_tfield(0, MR_r2, 0);
	}
	MR_np_call_localret_ent(__Unify___ml_backend__mlds__mlds_module_name_0_0,
		fn__ml_backend__ml_util__lval_contains_var_2_0_i9);
MR_def_label(fn__ml_backend__ml_util__lval_contains_var_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__ml_backend__ml_util__lval_contains_var_2_0_i23);
	}
	if ((MR_sv(1) != MR_sv(4))) {
		MR_GOTO_LAB(fn__ml_backend__ml_util__lval_contains_var_2_0_i23);
	}
	if (MR_PTAG_TESTR(MR_sv(3),1)) {
		MR_GOTO_LAB(fn__ml_backend__ml_util__lval_contains_var_2_0_i23);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tfield(1, MR_sv(3), 0);
	MR_np_call_localret_ent(__Unify___ml_backend__mlds__mlds_var_name_0_0,
		fn__ml_backend__ml_util__lval_contains_var_2_0_i12);
MR_def_label(fn__ml_backend__ml_util__lval_contains_var_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__ml_backend__ml_util__lval_contains_var_2_0_i23);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_util_module10)
	MR_init_entry1(fn__ml_backend__ml_util__initializer_contains_var_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ml_backend__ml_util__initializer_contains_var_2_0);
	MR_init_label3(fn__ml_backend__ml_util__initializer_contains_var_2_0,3,4,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'initializer_contains_var'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__ml_backend__ml_util__initializer_contains_var_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__ml_backend__ml_util__initializer_contains_var_2_0_i3);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__ml_util__initializer_contains_var_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,3)) {
		MR_GOTO_LAB(fn__ml_backend__ml_util__initializer_contains_var_2_0_i4);
	}
	MR_r1 = MR_tfield(3, MR_r1, 0);
	MR_np_tailcall_ent(fn__ml_backend__ml_util__initializers_contains_var_2_0);
MR_def_label(fn__ml_backend__ml_util__initializer_contains_var_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(fn__ml_backend__ml_util__initializer_contains_var_2_0_i6);
	}
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_np_tailcall_ent(fn__ml_backend__ml_util__rval_contains_var_2_0);
MR_def_label(fn__ml_backend__ml_util__initializer_contains_var_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(2, MR_r1, 1);
	MR_np_tailcall_ent(fn__ml_backend__ml_util__initializers_contains_var_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_util_module11)
	MR_init_entry1(fn__ml_backend__ml_util__initializers_contains_var_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ml_backend__ml_util__initializers_contains_var_2_0);
	MR_init_label4(fn__ml_backend__ml_util__initializers_contains_var_2_0,16,3,5,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'initializers_contains_var'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ml_backend__ml_util__initializers_contains_var_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(fn__ml_backend__ml_util__initializers_contains_var_2_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__ml_backend__ml_util__initializers_contains_var_2_0_i3);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(fn__ml_backend__ml_util__initializers_contains_var_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_sv(1) = MR_r2;
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_np_call_localret_ent(fn__ml_backend__ml_util__initializer_contains_var_2_0,
		fn__ml_backend__ml_util__initializers_contains_var_2_0_i5);
MR_def_label(fn__ml_backend__ml_util__initializers_contains_var_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(fn__ml_backend__ml_util__initializers_contains_var_2_0_i4);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(fn__ml_backend__ml_util__initializers_contains_var_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(fn__ml_backend__ml_util__initializers_contains_var_2_0_i16);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_util_module12)
	MR_init_entry1(fn__ml_backend__ml_util__rvals_contains_var_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ml_backend__ml_util__rvals_contains_var_2_0);
	MR_init_label4(fn__ml_backend__ml_util__rvals_contains_var_2_0,16,3,5,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'rvals_contains_var'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__ml_backend__ml_util__rvals_contains_var_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(fn__ml_backend__ml_util__rvals_contains_var_2_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__ml_backend__ml_util__rvals_contains_var_2_0_i3);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(fn__ml_backend__ml_util__rvals_contains_var_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_sv(1) = MR_r2;
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_np_call_localret_ent(fn__ml_backend__ml_util__rval_contains_var_2_0,
		fn__ml_backend__ml_util__rvals_contains_var_2_0_i5);
MR_def_label(fn__ml_backend__ml_util__rvals_contains_var_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(fn__ml_backend__ml_util__rvals_contains_var_2_0_i4);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(fn__ml_backend__ml_util__rvals_contains_var_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(fn__ml_backend__ml_util__rvals_contains_var_2_0_i16);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_util_module13)
	MR_init_entry1(fn__ml_backend__ml_util__maybe_rval_contains_var_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ml_backend__ml_util__maybe_rval_contains_var_2_0);
	MR_init_label1(fn__ml_backend__ml_util__maybe_rval_contains_var_2_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'maybe_rval_contains_var'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__ml_backend__ml_util__maybe_rval_contains_var_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__ml_backend__ml_util__maybe_rval_contains_var_2_0_i3);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__ml_util__maybe_rval_contains_var_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_np_tailcall_ent(fn__ml_backend__ml_util__rval_contains_var_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_util_module14)
	MR_init_entry1(fn__ml_backend__ml_util__lvals_contains_var_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ml_backend__ml_util__lvals_contains_var_2_0);
	MR_init_label4(fn__ml_backend__ml_util__lvals_contains_var_2_0,16,3,5,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'lvals_contains_var'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__ml_backend__ml_util__lvals_contains_var_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(fn__ml_backend__ml_util__lvals_contains_var_2_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__ml_backend__ml_util__lvals_contains_var_2_0_i3);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(fn__ml_backend__ml_util__lvals_contains_var_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_sv(1) = MR_r2;
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_np_call_localret_ent(fn__ml_backend__ml_util__lval_contains_var_2_0,
		fn__ml_backend__ml_util__lvals_contains_var_2_0_i5);
MR_def_label(fn__ml_backend__ml_util__lvals_contains_var_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(fn__ml_backend__ml_util__lvals_contains_var_2_0_i4);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(fn__ml_backend__ml_util__lvals_contains_var_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(fn__ml_backend__ml_util__lvals_contains_var_2_0_i16);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_util_module15)
	MR_init_entry1(fn__ml_backend__ml_util__target_code_components_contains_var_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ml_backend__ml_util__target_code_components_contains_var_2_0);
	MR_init_label10(fn__ml_backend__ml_util__target_code_components_contains_var_2_0,59,3,8,7,12,14,10,17,6,4)
	MR_init_label1(fn__ml_backend__ml_util__target_code_components_contains_var_2_0,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'target_code_components_contains_var'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ml_backend__ml_util__target_code_components_contains_var_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
MR_def_label(fn__ml_backend__ml_util__target_code_components_contains_var_2_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__ml_backend__ml_util__target_code_components_contains_var_2_0_i3);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(7);
MR_def_label(fn__ml_backend__ml_util__target_code_components_contains_var_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	MR_r3 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,2)) {
		MR_GOTO_LAB(fn__ml_backend__ml_util__target_code_components_contains_var_2_0_i7);
	}
	MR_sv(1) = MR_r2;
	MR_r1 = MR_tfield(2, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(fn__ml_backend__ml_util__rval_contains_var_2_0,
		fn__ml_backend__ml_util__target_code_components_contains_var_2_0_i8);
MR_def_label(fn__ml_backend__ml_util__target_code_components_contains_var_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(fn__ml_backend__ml_util__target_code_components_contains_var_2_0_i4);
	}
	MR_GOTO_LAB(fn__ml_backend__ml_util__target_code_components_contains_var_2_0_i6);
MR_def_label(fn__ml_backend__ml_util__target_code_components_contains_var_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,2)) {
		MR_GOTO_LAB(fn__ml_backend__ml_util__target_code_components_contains_var_2_0_i10);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(3, MR_r3, 1);
	MR_tempr2 = MR_tfield(0, MR_tempr1, 2);
	if (MR_PTAG_TESTR(MR_tempr2,1)) {
		MR_GOTO_LAB(fn__ml_backend__ml_util__target_code_components_contains_var_2_0_i5);
	}
	MR_sv(1) = MR_r2;
	MR_sv(3) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(4) = MR_tfield(1, MR_tempr2, 0);
	MR_sv(5) = MR_tfield(0, MR_r2, 1);
	MR_sv(6) = MR_tfield(0, MR_r2, 2);
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = MR_tfield(0, MR_r2, 0);
	}
	MR_np_call_localret_ent(__Unify___ml_backend__mlds__mlds_module_name_0_0,
		fn__ml_backend__ml_util__target_code_components_contains_var_2_0_i12);
MR_def_label(fn__ml_backend__ml_util__target_code_components_contains_var_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__ml_backend__ml_util__target_code_components_contains_var_2_0_i4);
	}
	if ((MR_sv(3) != MR_sv(5))) {
		MR_GOTO_LAB(fn__ml_backend__ml_util__target_code_components_contains_var_2_0_i4);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(__Unify___ml_backend__mlds__mlds_data_name_0_0,
		fn__ml_backend__ml_util__target_code_components_contains_var_2_0_i14);
MR_def_label(fn__ml_backend__ml_util__target_code_components_contains_var_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__ml_backend__ml_util__target_code_components_contains_var_2_0_i4);
	}
	MR_GOTO_LAB(fn__ml_backend__ml_util__target_code_components_contains_var_2_0_i6);
MR_def_label(fn__ml_backend__ml_util__target_code_components_contains_var_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,0)) {
		MR_GOTO_LAB(fn__ml_backend__ml_util__target_code_components_contains_var_2_0_i5);
	}
	MR_sv(1) = MR_r2;
	MR_r1 = MR_tfield(3, MR_r3, 1);
	MR_np_call_localret_ent(fn__ml_backend__ml_util__lval_contains_var_2_0,
		fn__ml_backend__ml_util__target_code_components_contains_var_2_0_i17);
MR_def_label(fn__ml_backend__ml_util__target_code_components_contains_var_2_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(fn__ml_backend__ml_util__target_code_components_contains_var_2_0_i4);
	}
MR_def_label(fn__ml_backend__ml_util__target_code_components_contains_var_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(7);
MR_def_label(fn__ml_backend__ml_util__target_code_components_contains_var_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
MR_def_label(fn__ml_backend__ml_util__target_code_components_contains_var_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(fn__ml_backend__ml_util__target_code_components_contains_var_2_0_i59);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_util_module16)
	MR_init_entry1(fn__ml_backend__ml_util__outline_args_contains_var_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ml_backend__ml_util__outline_args_contains_var_2_0);
	MR_init_label8(fn__ml_backend__ml_util__outline_args_contains_var_2_0,33,3,8,7,11,6,4,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'outline_args_contains_var'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ml_backend__ml_util__outline_args_contains_var_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(fn__ml_backend__ml_util__outline_args_contains_var_2_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__ml_backend__ml_util__outline_args_contains_var_2_0_i3);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(fn__ml_backend__ml_util__outline_args_contains_var_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	MR_r3 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(fn__ml_backend__ml_util__outline_args_contains_var_2_0_i7);
	}
	MR_sv(1) = MR_r2;
	MR_r1 = MR_tfield(1, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(fn__ml_backend__ml_util__rval_contains_var_2_0,
		fn__ml_backend__ml_util__outline_args_contains_var_2_0_i8);
MR_def_label(fn__ml_backend__ml_util__outline_args_contains_var_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(fn__ml_backend__ml_util__outline_args_contains_var_2_0_i4);
	}
	MR_GOTO_LAB(fn__ml_backend__ml_util__outline_args_contains_var_2_0_i6);
MR_def_label(fn__ml_backend__ml_util__outline_args_contains_var_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r3,2)) {
		MR_GOTO_LAB(fn__ml_backend__ml_util__outline_args_contains_var_2_0_i5);
	}
	MR_sv(1) = MR_r2;
	MR_r1 = MR_tfield(2, MR_r3, 2);
	MR_np_call_localret_ent(fn__ml_backend__ml_util__lval_contains_var_2_0,
		fn__ml_backend__ml_util__outline_args_contains_var_2_0_i11);
MR_def_label(fn__ml_backend__ml_util__outline_args_contains_var_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(fn__ml_backend__ml_util__outline_args_contains_var_2_0_i4);
	}
MR_def_label(fn__ml_backend__ml_util__outline_args_contains_var_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(fn__ml_backend__ml_util__outline_args_contains_var_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
MR_def_label(fn__ml_backend__ml_util__outline_args_contains_var_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(fn__ml_backend__ml_util__outline_args_contains_var_2_0_i33);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_util_module17)
	MR_init_entry1(fn__ml_backend__ml_util__statement_contains_var_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ml_backend__ml_util__statement_contains_var_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'statement_contains_var'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__ml_backend__ml_util__statement_contains_var_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_np_tailcall_ent(fn__ml_backend__ml_util__stmt_contains_var_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_util_module18)
	MR_init_entry1(fn__ml_backend__ml_util__defns_contains_var_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ml_backend__ml_util__defns_contains_var_2_0);
	MR_init_label4(fn__ml_backend__ml_util__defns_contains_var_2_0,16,3,5,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'defns_contains_var'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__ml_backend__ml_util__defns_contains_var_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(fn__ml_backend__ml_util__defns_contains_var_2_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__ml_backend__ml_util__defns_contains_var_2_0_i3);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(fn__ml_backend__ml_util__defns_contains_var_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_sv(1) = MR_r2;
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_np_call_localret_ent(fn__ml_backend__ml_util__defn_contains_var_2_0,
		fn__ml_backend__ml_util__defns_contains_var_2_0_i5);
MR_def_label(fn__ml_backend__ml_util__defns_contains_var_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(fn__ml_backend__ml_util__defns_contains_var_2_0_i4);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(fn__ml_backend__ml_util__defns_contains_var_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(fn__ml_backend__ml_util__defns_contains_var_2_0_i16);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_util_module19)
	MR_init_entry1(fn__ml_backend__ml_util__defn_contains_var_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ml_backend__ml_util__defn_contains_var_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'defn_contains_var'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__ml_backend__ml_util__defn_contains_var_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 3);
	MR_np_tailcall_ent(fn__ml_backend__ml_util__defn_body_contains_var_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_util_module20)
	MR_init_entry1(fn__ml_backend__ml_util__statements_contains_var_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ml_backend__ml_util__statements_contains_var_2_0);
	MR_init_label4(fn__ml_backend__ml_util__statements_contains_var_2_0,16,3,5,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'statements_contains_var'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ml_backend__ml_util__statements_contains_var_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(fn__ml_backend__ml_util__statements_contains_var_2_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__ml_backend__ml_util__statements_contains_var_2_0_i3);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(fn__ml_backend__ml_util__statements_contains_var_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_sv(1) = MR_r2;
	MR_r1 = MR_tfield(0, MR_tfield(1, MR_r1, 0), 0);
	MR_np_call_localret_ent(fn__ml_backend__ml_util__stmt_contains_var_2_0,
		fn__ml_backend__ml_util__statements_contains_var_2_0_i5);
MR_def_label(fn__ml_backend__ml_util__statements_contains_var_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(fn__ml_backend__ml_util__statements_contains_var_2_0_i4);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(fn__ml_backend__ml_util__statements_contains_var_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(fn__ml_backend__ml_util__statements_contains_var_2_0_i16);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_util_module21)
	MR_init_entry1(fn__ml_backend__ml_util__maybe_statement_contains_var_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ml_backend__ml_util__maybe_statement_contains_var_2_0);
	MR_init_label1(fn__ml_backend__ml_util__maybe_statement_contains_var_2_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'maybe_statement_contains_var'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ml_backend__ml_util__maybe_statement_contains_var_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__ml_backend__ml_util__maybe_statement_contains_var_2_0_i3);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__ml_util__maybe_statement_contains_var_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_tfield(1, MR_r1, 0), 0);
	MR_np_tailcall_ent(fn__ml_backend__ml_util__stmt_contains_var_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_util_module22)
	MR_init_entry1(fn__ml_backend__ml_util__stmt_contains_var_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ml_backend__ml_util__stmt_contains_var_2_0);
	MR_init_label10(fn__ml_backend__ml_util__stmt_contains_var_2_0,5,4,3,11,10,14,13,9,21,19)
	MR_init_label10(fn__ml_backend__ml_util__stmt_contains_var_2_0,27,30,28,34,37,36,35,41,43,45)
	MR_init_label10(fn__ml_backend__ml_util__stmt_contains_var_2_0,49,48,47,55,54,53,59,134,62,63)
	MR_init_label10(fn__ml_backend__ml_util__stmt_contains_var_2_0,65,67,25,72,71,77,75,80,79,70)
	MR_init_label10(fn__ml_backend__ml_util__stmt_contains_var_2_0,86,88,90,94,93,97,96,92,104,103)
	MR_init_label2(fn__ml_backend__ml_util__stmt_contains_var_2_0,107,106)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'stmt_contains_var'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ml_backend__ml_util__stmt_contains_var_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(fn__ml_backend__ml_util__stmt_contains_var_2_0_i3);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(2) = MR_tfield(0, MR_r1, 1);
	MR_sv(1) = MR_r2;
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_np_call_localret_ent(fn__ml_backend__ml_util__defns_contains_var_2_0,
		fn__ml_backend__ml_util__stmt_contains_var_2_0_i5);
MR_def_label(fn__ml_backend__ml_util__stmt_contains_var_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(fn__ml_backend__ml_util__stmt_contains_var_2_0_i4);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(5);
MR_def_label(fn__ml_backend__ml_util__stmt_contains_var_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(fn__ml_backend__ml_util__statements_contains_var_2_0);
MR_def_label(fn__ml_backend__ml_util__stmt_contains_var_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(fn__ml_backend__ml_util__stmt_contains_var_2_0_i9);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(3) = MR_tfield(2, MR_r1, 2);
	MR_sv(2) = MR_tfield(2, MR_r1, 1);
	MR_sv(1) = MR_r2;
	MR_r1 = MR_tfield(2, MR_r1, 0);
	MR_np_call_localret_ent(fn__ml_backend__ml_util__rval_contains_var_2_0,
		fn__ml_backend__ml_util__stmt_contains_var_2_0_i11);
MR_def_label(fn__ml_backend__ml_util__stmt_contains_var_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(fn__ml_backend__ml_util__stmt_contains_var_2_0_i10);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(5);
MR_def_label(fn__ml_backend__ml_util__stmt_contains_var_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_sv(2), 0);
	MR_r2 = MR_sv(1);
	MR_np_localcall_lab(fn__ml_backend__ml_util__stmt_contains_var_2_0,
		fn__ml_backend__ml_util__stmt_contains_var_2_0_i14);
MR_def_label(fn__ml_backend__ml_util__stmt_contains_var_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(fn__ml_backend__ml_util__stmt_contains_var_2_0_i13);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(5);
MR_def_label(fn__ml_backend__ml_util__stmt_contains_var_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(fn__ml_backend__ml_util__maybe_statement_contains_var_2_0);
MR_def_label(fn__ml_backend__ml_util__stmt_contains_var_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(fn__ml_backend__ml_util__stmt_contains_var_2_0_i19);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(2) = MR_tfield(1, MR_r1, 2);
	MR_sv(1) = MR_r2;
	MR_r1 = MR_tfield(1, MR_r1, 1);
	MR_np_call_localret_ent(fn__ml_backend__ml_util__rval_contains_var_2_0,
		fn__ml_backend__ml_util__stmt_contains_var_2_0_i21);
MR_def_label(fn__ml_backend__ml_util__stmt_contains_var_2_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(fn__ml_backend__ml_util__stmt_contains_var_2_0_i106);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(5);
MR_def_label(fn__ml_backend__ml_util__stmt_contains_var_2_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,8)) {
		MR_GOTO_LAB(fn__ml_backend__ml_util__stmt_contains_var_2_0_i25);
	}
	MR_r3 = MR_tfield(3, MR_r1, 1);
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(fn__ml_backend__ml_util__stmt_contains_var_2_0_i27);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__ml_util__stmt_contains_var_2_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r3,2)) {
		MR_GOTO_LAB(fn__ml_backend__ml_util__stmt_contains_var_2_0_i28);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tfield(2, MR_tempr1, 1);
	MR_sv(1) = MR_r2;
	MR_r1 = MR_tfield(2, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(fn__ml_backend__ml_util__lval_contains_var_2_0,
		fn__ml_backend__ml_util__stmt_contains_var_2_0_i30);
MR_def_label(fn__ml_backend__ml_util__stmt_contains_var_2_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(fn__ml_backend__ml_util__stmt_contains_var_2_0_i36);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(5);
MR_def_label(fn__ml_backend__ml_util__stmt_contains_var_2_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r3,1)) {
		MR_GOTO_LAB(fn__ml_backend__ml_util__stmt_contains_var_2_0_i34);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__ml_util__stmt_contains_var_2_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,0)) {
		MR_GOTO_LAB(fn__ml_backend__ml_util__stmt_contains_var_2_0_i35);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tfield(3, MR_tempr1, 2);
	MR_sv(1) = MR_r2;
	MR_r1 = MR_tfield(3, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(fn__ml_backend__ml_util__lval_contains_var_2_0,
		fn__ml_backend__ml_util__stmt_contains_var_2_0_i37);
MR_def_label(fn__ml_backend__ml_util__stmt_contains_var_2_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(fn__ml_backend__ml_util__stmt_contains_var_2_0_i36);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(5);
MR_def_label(fn__ml_backend__ml_util__stmt_contains_var_2_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(fn__ml_backend__ml_util__rval_contains_var_2_0);
MR_def_label(fn__ml_backend__ml_util__stmt_contains_var_2_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,1)) {
		MR_GOTO_LAB(fn__ml_backend__ml_util__stmt_contains_var_2_0_i41);
	}
	MR_r1 = MR_tfield(3, MR_r3, 1);
	MR_np_tailcall_ent(fn__ml_backend__ml_util__rval_contains_var_2_0);
MR_def_label(fn__ml_backend__ml_util__stmt_contains_var_2_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,6)) {
		MR_GOTO_LAB(fn__ml_backend__ml_util__stmt_contains_var_2_0_i43);
	}
	MR_r1 = MR_tfield(3, MR_r3, 2);
	MR_np_tailcall_ent(fn__ml_backend__ml_util__target_code_components_contains_var_2_0);
MR_def_label(fn__ml_backend__ml_util__stmt_contains_var_2_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,3)) {
		MR_GOTO_LAB(fn__ml_backend__ml_util__stmt_contains_var_2_0_i45);
	}
	MR_r1 = MR_tfield(3, MR_r3, 1);
	MR_np_tailcall_ent(fn__ml_backend__ml_util__lval_contains_var_2_0);
MR_def_label(fn__ml_backend__ml_util__stmt_contains_var_2_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,2)) {
		MR_GOTO_LAB(fn__ml_backend__ml_util__stmt_contains_var_2_0_i47);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tfield(3, MR_tempr1, 7);
	MR_sv(1) = MR_r2;
	MR_r1 = MR_tfield(3, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(fn__ml_backend__ml_util__lval_contains_var_2_0,
		fn__ml_backend__ml_util__stmt_contains_var_2_0_i49);
MR_def_label(fn__ml_backend__ml_util__stmt_contains_var_2_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(fn__ml_backend__ml_util__stmt_contains_var_2_0_i48);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(5);
MR_def_label(fn__ml_backend__ml_util__stmt_contains_var_2_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(fn__ml_backend__ml_util__rvals_contains_var_2_0);
MR_def_label(fn__ml_backend__ml_util__stmt_contains_var_2_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,7)) {
		MR_GOTO_LAB(fn__ml_backend__ml_util__stmt_contains_var_2_0_i53);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tfield(3, MR_tempr1, 3);
	MR_sv(1) = MR_r2;
	MR_r1 = MR_tfield(3, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(fn__ml_backend__ml_util__outline_args_contains_var_2_0,
		fn__ml_backend__ml_util__stmt_contains_var_2_0_i55);
MR_def_label(fn__ml_backend__ml_util__stmt_contains_var_2_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(fn__ml_backend__ml_util__stmt_contains_var_2_0_i54);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(5);
MR_def_label(fn__ml_backend__ml_util__stmt_contains_var_2_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(fn__ml_backend__ml_util__lvals_contains_var_2_0);
MR_def_label(fn__ml_backend__ml_util__stmt_contains_var_2_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,4)) {
		MR_GOTO_LAB(fn__ml_backend__ml_util__stmt_contains_var_2_0_i59);
	}
	MR_r1 = MR_tfield(3, MR_r3, 1);
	MR_np_tailcall_ent(fn__ml_backend__ml_util__rval_contains_var_2_0);
MR_def_label(fn__ml_backend__ml_util__stmt_contains_var_2_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(3, MR_r3, 1);
	MR_r4 = MR_tempr1;
	if (!((((MR_Integer) MR_tempr1 == (MR_Integer) MR_tbmkword(0, 0)) || ((MR_Integer) MR_tempr1 == (MR_Integer) MR_tbmkword(0, 1))))) {
		MR_GOTO_LAB(fn__ml_backend__ml_util__stmt_contains_var_2_0_i62);
	}
	}
MR_def_label(fn__ml_backend__ml_util__stmt_contains_var_2_0,134)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__ml_util__stmt_contains_var_2_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r4,2)) {
		MR_GOTO_LAB(fn__ml_backend__ml_util__stmt_contains_var_2_0_i63);
	}
	MR_r1 = MR_tfield(2, MR_r4, 0);
	MR_np_tailcall_ent(fn__ml_backend__ml_util__rval_contains_var_2_0);
MR_def_label(fn__ml_backend__ml_util__stmt_contains_var_2_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r4,1)) {
		MR_GOTO_LAB(fn__ml_backend__ml_util__stmt_contains_var_2_0_i65);
	}
	MR_r1 = MR_tfield(1, MR_r4, 0);
	MR_np_tailcall_ent(fn__ml_backend__ml_util__lval_contains_var_2_0);
MR_def_label(fn__ml_backend__ml_util__stmt_contains_var_2_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r4,3,0)) {
		MR_GOTO_LAB(fn__ml_backend__ml_util__stmt_contains_var_2_0_i67);
	}
	MR_r1 = MR_tfield(3, MR_r4, 1);
	MR_np_tailcall_ent(fn__ml_backend__ml_util__lval_contains_var_2_0);
MR_def_label(fn__ml_backend__ml_util__stmt_contains_var_2_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(3, MR_r4, 1);
	MR_np_tailcall_ent(fn__ml_backend__ml_util__rval_contains_var_2_0);
MR_def_label(fn__ml_backend__ml_util__stmt_contains_var_2_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,4)) {
		MR_GOTO_LAB(fn__ml_backend__ml_util__stmt_contains_var_2_0_i70);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(4) = MR_tfield(3, MR_r1, 5);
	MR_sv(3) = MR_tfield(3, MR_r1, 4);
	MR_sv(2) = MR_tfield(3, MR_r1, 3);
	MR_sv(1) = MR_r2;
	MR_r1 = MR_tfield(3, MR_r1, 2);
	MR_np_call_localret_ent(fn__ml_backend__ml_util__rval_contains_var_2_0,
		fn__ml_backend__ml_util__stmt_contains_var_2_0_i72);
MR_def_label(fn__ml_backend__ml_util__stmt_contains_var_2_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(fn__ml_backend__ml_util__stmt_contains_var_2_0_i71);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(5);
MR_def_label(fn__ml_backend__ml_util__stmt_contains_var_2_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(2),0,0)) {
		MR_GOTO_LAB(fn__ml_backend__ml_util__stmt_contains_var_2_0_i75);
	}
	MR_r1 = MR_tfield(1, MR_sv(2), 0);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(fn__ml_backend__ml_util__rval_contains_var_2_0,
		fn__ml_backend__ml_util__stmt_contains_var_2_0_i77);
MR_def_label(fn__ml_backend__ml_util__stmt_contains_var_2_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(fn__ml_backend__ml_util__stmt_contains_var_2_0_i75);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(5);
MR_def_label(fn__ml_backend__ml_util__stmt_contains_var_2_0,75)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(fn__ml_backend__ml_util__rvals_contains_var_2_0,
		fn__ml_backend__ml_util__stmt_contains_var_2_0_i80);
MR_def_label(fn__ml_backend__ml_util__stmt_contains_var_2_0,80)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(fn__ml_backend__ml_util__stmt_contains_var_2_0_i79);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(5);
MR_def_label(fn__ml_backend__ml_util__stmt_contains_var_2_0,79)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(fn__ml_backend__ml_util__lvals_contains_var_2_0);
MR_def_label(fn__ml_backend__ml_util__stmt_contains_var_2_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,3)) {
		MR_GOTO_LAB(fn__ml_backend__ml_util__stmt_contains_var_2_0_i86);
	}
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_tailcall_ent(fn__ml_backend__ml_util__rval_contains_var_2_0);
MR_def_label(fn__ml_backend__ml_util__stmt_contains_var_2_0,86)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,7)) {
		MR_GOTO_LAB(fn__ml_backend__ml_util__stmt_contains_var_2_0_i88);
	}
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_tailcall_ent(fn__ml_backend__ml_util__rval_contains_var_2_0);
MR_def_label(fn__ml_backend__ml_util__stmt_contains_var_2_0,88)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,5)) {
		MR_GOTO_LAB(fn__ml_backend__ml_util__stmt_contains_var_2_0_i90);
	}
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_tailcall_ent(fn__ml_backend__ml_util__rvals_contains_var_2_0);
MR_def_label(fn__ml_backend__ml_util__stmt_contains_var_2_0,90)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,0)) {
		MR_GOTO_LAB(fn__ml_backend__ml_util__stmt_contains_var_2_0_i92);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(3) = MR_tfield(3, MR_r1, 5);
	MR_sv(2) = MR_tfield(3, MR_r1, 4);
	MR_sv(1) = MR_r2;
	MR_r1 = MR_tfield(3, MR_r1, 2);
	MR_np_call_localret_ent(fn__ml_backend__ml_util__rval_contains_var_2_0,
		fn__ml_backend__ml_util__stmt_contains_var_2_0_i94);
MR_def_label(fn__ml_backend__ml_util__stmt_contains_var_2_0,94)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(fn__ml_backend__ml_util__stmt_contains_var_2_0_i93);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(5);
MR_def_label(fn__ml_backend__ml_util__stmt_contains_var_2_0,93)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(fn__ml_backend__ml_util__cases_contains_var_2_0,
		fn__ml_backend__ml_util__stmt_contains_var_2_0_i97);
MR_def_label(fn__ml_backend__ml_util__stmt_contains_var_2_0,97)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(fn__ml_backend__ml_util__stmt_contains_var_2_0_i96);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(5);
MR_def_label(fn__ml_backend__ml_util__stmt_contains_var_2_0,96)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(fn__ml_backend__ml_util__default_contains_var_2_0);
MR_def_label(fn__ml_backend__ml_util__stmt_contains_var_2_0,92)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,6)) {
		MR_GOTO_LAB(fn__ml_backend__ml_util__stmt_contains_var_2_0_i134);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(3) = MR_tfield(3, MR_r1, 2);
	MR_sv(2) = MR_tfield(3, MR_r1, 3);
	MR_sv(1) = MR_r2;
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_call_localret_ent(fn__ml_backend__ml_util__lval_contains_var_2_0,
		fn__ml_backend__ml_util__stmt_contains_var_2_0_i104);
MR_def_label(fn__ml_backend__ml_util__stmt_contains_var_2_0,104)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(fn__ml_backend__ml_util__stmt_contains_var_2_0_i103);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(5);
MR_def_label(fn__ml_backend__ml_util__stmt_contains_var_2_0,103)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(fn__ml_backend__ml_util__statement_contains_var_2_0,
		fn__ml_backend__ml_util__stmt_contains_var_2_0_i107);
MR_def_label(fn__ml_backend__ml_util__stmt_contains_var_2_0,107)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(fn__ml_backend__ml_util__stmt_contains_var_2_0_i106);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(5);
MR_def_label(fn__ml_backend__ml_util__stmt_contains_var_2_0,106)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(fn__ml_backend__ml_util__statement_contains_var_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_util_module23)
	MR_init_entry1(fn__ml_backend__ml_util__cases_contains_var_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ml_backend__ml_util__cases_contains_var_2_0);
	MR_init_label4(fn__ml_backend__ml_util__cases_contains_var_2_0,16,3,5,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'cases_contains_var'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ml_backend__ml_util__cases_contains_var_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(fn__ml_backend__ml_util__cases_contains_var_2_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__ml_backend__ml_util__cases_contains_var_2_0_i3);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(fn__ml_backend__ml_util__cases_contains_var_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_sv(1) = MR_r2;
	MR_r1 = MR_tfield(0, MR_tfield(0, MR_tfield(1, MR_r1, 0), 2), 0);
	MR_np_call_localret_ent(fn__ml_backend__ml_util__stmt_contains_var_2_0,
		fn__ml_backend__ml_util__cases_contains_var_2_0_i5);
MR_def_label(fn__ml_backend__ml_util__cases_contains_var_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(fn__ml_backend__ml_util__cases_contains_var_2_0_i4);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(fn__ml_backend__ml_util__cases_contains_var_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(fn__ml_backend__ml_util__cases_contains_var_2_0_i16);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_util_module24)
	MR_init_entry1(fn__ml_backend__ml_util__default_contains_var_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ml_backend__ml_util__default_contains_var_2_0);
	MR_init_label1(fn__ml_backend__ml_util__default_contains_var_2_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'default_contains_var'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ml_backend__ml_util__default_contains_var_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(fn__ml_backend__ml_util__default_contains_var_2_0_i3);
	}
	MR_r1 = MR_tfield(0, MR_tfield(1, MR_r1, 0), 0);
	MR_np_tailcall_ent(fn__ml_backend__ml_util__stmt_contains_var_2_0);
MR_def_label(fn__ml_backend__ml_util__default_contains_var_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_util_module25)
	MR_init_entry1(fn__ml_backend__ml_util__defn_body_contains_var_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ml_backend__ml_util__defn_body_contains_var_2_0);
	MR_init_label4(fn__ml_backend__ml_util__defn_body_contains_var_2_0,5,4,3,9)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'defn_body_contains_var'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ml_backend__ml_util__defn_body_contains_var_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(fn__ml_backend__ml_util__defn_body_contains_var_2_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(2, MR_r1, 0);
	MR_sv(2) = MR_tfield(0, MR_tempr1, 5);
	MR_sv(1) = MR_r2;
	MR_r1 = MR_tfield(0, MR_tempr1, 6);
	}
	MR_np_call_localret_ent(fn__ml_backend__ml_util__defns_contains_var_2_0,
		fn__ml_backend__ml_util__defn_body_contains_var_2_0_i5);
MR_def_label(fn__ml_backend__ml_util__defn_body_contains_var_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(fn__ml_backend__ml_util__defn_body_contains_var_2_0_i4);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(fn__ml_backend__ml_util__defn_body_contains_var_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(fn__ml_backend__ml_util__defns_contains_var_2_0);
MR_def_label(fn__ml_backend__ml_util__defn_body_contains_var_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(fn__ml_backend__ml_util__defn_body_contains_var_2_0_i9);
	}
	MR_r1 = MR_tfield(0, MR_r1, 1);
	MR_np_tailcall_ent(fn__ml_backend__ml_util__initializer_contains_var_2_0);
MR_def_label(fn__ml_backend__ml_util__defn_body_contains_var_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(1, MR_r1, 2);
	MR_np_tailcall_ent(fn__ml_backend__ml_util__function_body_contains_var_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_util_module26)
	MR_init_entry1(fn__ml_backend__ml_util__function_body_contains_var_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ml_backend__ml_util__function_body_contains_var_2_0);
	MR_init_label1(fn__ml_backend__ml_util__function_body_contains_var_2_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'function_body_contains_var'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ml_backend__ml_util__function_body_contains_var_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__ml_backend__ml_util__function_body_contains_var_2_0_i3);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__ml_util__function_body_contains_var_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_tfield(1, MR_r1, 0), 0);
	MR_np_tailcall_ent(fn__ml_backend__ml_util__stmt_contains_var_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_libs__globals__type_ctor_info_foreign_language_0;
MR_decl_entry(solutions__solutions_2_1);

MR_BEGIN_MODULE(ml_backend__ml_util_module27)
	MR_init_entry1(ml_backend__ml_util__has_foreign_languages_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_util__has_foreign_languages_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'has_foreign_languages'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ml_backend__ml_util__has_foreign_languages_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 4);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_COMMON(0,0);
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__596__1_2_0);
	MR_tfield(0, MR_r2, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_r2, 3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__globals, foreign_language);
	MR_np_tailcall_ent(solutions__solutions_2_1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_util_module28)
	MR_init_entry1(ml_backend__ml_util__defn_contains_foreign_code_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_util__defn_contains_foreign_code_2_0);
	MR_init_label5(ml_backend__ml_util__defn_contains_foreign_code_2_0,6,5,10,9,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'defn_contains_foreign_code'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ml_backend__ml_util__defn_contains_foreign_code_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(3) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(4) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(5));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(ml_backend__ml_util__defn_contains_foreign_code_2_0_i2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r2, 3);
	MR_r3 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(ml_backend__ml_util__defn_contains_foreign_code_2_0_i2);
	}
	MR_r2 = MR_tfield(1, MR_tempr1, 2);
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(ml_backend__ml_util__defn_contains_foreign_code_2_0_i2);
	}
	MR_sv(2) = MR_tfield(1, MR_r2, 0);
	MR_sv(6) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(7) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(ml_backend__ml_util__defn_contains_foreign_code_2_0_i6);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_GOTO_LAB(ml_backend__ml_util__defn_contains_foreign_code_2_0_i5);
	}
MR_def_label(ml_backend__ml_util__defn_contains_foreign_code_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = MR_sv(6);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(7);
	MR_r1 = MR_tfield(0, MR_sv(2), 0);
	MR_np_call_localret_ent(ml_backend__ml_util__stmt_contains_statement_2_0,
		ml_backend__ml_util__defn_contains_foreign_code_2_0_i5);
MR_def_label(ml_backend__ml_util__defn_contains_foreign_code_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(0, MR_r1, 0);
	if (MR_RTAGS_TESTR(MR_r2,3,8)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_r1 = MR_tfield(3, MR_r2, 1);
	if (MR_RTAGS_TESTR(MR_r1,3,6)) {
		MR_GOTO_LAB(ml_backend__ml_util__defn_contains_foreign_code_2_0_i10);
	}
	MR_r2 = MR_tfield(3, MR_r1, 1);
	if ((MR_r2 == MR_sv(1))) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_GOTO_LAB(ml_backend__ml_util__defn_contains_foreign_code_2_0_i9);
MR_def_label(ml_backend__ml_util__defn_contains_foreign_code_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,7)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
MR_def_label(ml_backend__ml_util__defn_contains_foreign_code_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_restore_maxfr(MR_sv(5));
	MR_redoip_slot_word(MR_maxfr) = MR_sv(3);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(4);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ml_backend__ml_util__defn_contains_foreign_code_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = MR_sv(3);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(4);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_util_module29)
	MR_init_entry1(ml_backend__ml_util__defn_contains_outline_foreign_proc_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_util__defn_contains_outline_foreign_proc_2_0);
	MR_init_label3(ml_backend__ml_util__defn_contains_outline_foreign_proc_2_0,6,5,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'defn_contains_outline_foreign_proc'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ml_backend__ml_util__defn_contains_outline_foreign_proc_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(3) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(4) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(5));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(ml_backend__ml_util__defn_contains_outline_foreign_proc_2_0_i2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r2, 3);
	MR_r3 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(ml_backend__ml_util__defn_contains_outline_foreign_proc_2_0_i2);
	}
	MR_r2 = MR_tfield(1, MR_tempr1, 2);
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(ml_backend__ml_util__defn_contains_outline_foreign_proc_2_0_i2);
	}
	MR_sv(2) = MR_tfield(1, MR_r2, 0);
	MR_sv(6) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(7) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(ml_backend__ml_util__defn_contains_outline_foreign_proc_2_0_i6);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_GOTO_LAB(ml_backend__ml_util__defn_contains_outline_foreign_proc_2_0_i5);
	}
MR_def_label(ml_backend__ml_util__defn_contains_outline_foreign_proc_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = MR_sv(6);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(7);
	MR_r1 = MR_tfield(0, MR_sv(2), 0);
	MR_np_call_localret_ent(ml_backend__ml_util__stmt_contains_statement_2_0,
		ml_backend__ml_util__defn_contains_outline_foreign_proc_2_0_i5);
MR_def_label(ml_backend__ml_util__defn_contains_outline_foreign_proc_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(0, MR_r1, 0);
	if (MR_RTAGS_TESTR(MR_r2,3,8)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_r1 = MR_tfield(3, MR_r2, 1);
	if (MR_RTAGS_TESTR(MR_r1,3,7)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_r2 = MR_tfield(3, MR_r1, 1);
	if ((MR_sv(1) != MR_r2)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_restore_maxfr(MR_sv(5));
	MR_redoip_slot_word(MR_maxfr) = MR_sv(3);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(4);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ml_backend__ml_util__defn_contains_outline_foreign_proc_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = MR_sv(3);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(4);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_util_module30)
	MR_init_entry1(ml_backend__ml_util__defn_is_type_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_util__defn_is_type_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'defn_is_type'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ml_backend__ml_util__defn_is_type_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(0, MR_r1, 0);
	MR_r1 = (MR_tag(MR_r2) == MR_mktag((MR_Integer) 0));
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_util_module31)
	MR_init_entry1(ml_backend__ml_util__defn_is_function_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_util__defn_is_function_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'defn_is_function'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ml_backend__ml_util__defn_is_function_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(0, MR_r1, 0);
	MR_r1 = (MR_tag(MR_r2) == MR_mktag((MR_Integer) 2));
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_util_module32)
	MR_init_entry1(ml_backend__ml_util__defn_is_type_ctor_info_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_util__defn_is_type_ctor_info_1_0);
	MR_init_label1(ml_backend__ml_util__defn_is_type_ctor_info_1_0,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'defn_is_type_ctor_info'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ml_backend__ml_util__defn_is_type_ctor_info_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(0, MR_r1, 3);
	if (MR_PTAG_TESTR(MR_r2,0)) {
		MR_GOTO_LAB(ml_backend__ml_util__defn_is_type_ctor_info_1_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_r2, 0);
	if (MR_RTAGS_TESTR(MR_r1,3,6)) {
		MR_GOTO_LAB(ml_backend__ml_util__defn_is_type_ctor_info_1_0_i1);
	}
	MR_r2 = MR_tfield(3, MR_r1, 1);
	if (MR_PTAG_TESTR(MR_r2,0)) {
		MR_GOTO_LAB(ml_backend__ml_util__defn_is_type_ctor_info_1_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_r2, 0);
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(ml_backend__ml_util__defn_is_type_ctor_info_1_0_i1);
	}
	MR_r2 = MR_tfield(0, MR_r1, 1);
	MR_r1 = ((MR_Integer) MR_r2 == (MR_Integer) MR_tbmkword(0, 16));
	MR_proceed();
MR_def_label(ml_backend__ml_util__defn_is_type_ctor_info_1_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_util_module33)
	MR_init_entry1(ml_backend__ml_util__defn_is_commit_type_var_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_util__defn_is_commit_type_var_1_0);
	MR_init_label1(ml_backend__ml_util__defn_is_commit_type_var_1_0,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'defn_is_commit_type_var'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ml_backend__ml_util__defn_is_commit_type_var_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(0, MR_r1, 3);
	if (MR_PTAG_TESTR(MR_r2,0)) {
		MR_GOTO_LAB(ml_backend__ml_util__defn_is_commit_type_var_1_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_r2, 0);
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ml_backend__ml_util__defn_is_commit_type_var_1_0_i1);
	}
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ml_backend__ml_util__defn_is_commit_type_var_1_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__ml_backend__mlds__access_1_0);

MR_BEGIN_MODULE(ml_backend__ml_util_module34)
	MR_init_entry1(ml_backend__ml_util__defn_is_public_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_util__defn_is_public_1_0);
	MR_init_label2(ml_backend__ml_util__defn_is_public_1_0,2,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'defn_is_public'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ml_backend__ml_util__defn_is_public_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r1 = MR_tfield(0, MR_r1, 2);
	MR_np_call_localret_ent(fn__ml_backend__mlds__access_1_0,
		ml_backend__ml_util__defn_is_public_1_0_i2);
MR_def_label(ml_backend__ml_util__defn_is_public_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ml_backend__ml_util__defn_is_public_1_0_i1);
	}
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ml_backend__ml_util__defn_is_public_1_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__mdbcomp__prim_data__mercury_public_builtin_module_0_0);
MR_decl_entry(fn__mdbcomp__prim_data__mercury_private_builtin_module_0_0);
MR_decl_entry(__Unify___mdbcomp__prim_data__sym_name_0_0);

MR_BEGIN_MODULE(ml_backend__ml_util_module35)
	MR_init_entry1(ml_backend__ml_util__type_ctor_needs_lowlevel_rep_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_util__type_ctor_needs_lowlevel_rep_2_0);
	MR_init_label10(ml_backend__ml_util__type_ctor_needs_lowlevel_rep_2_0,3,4,15,14,18,17,21,20,24,23)
	MR_init_label10(ml_backend__ml_util__type_ctor_needs_lowlevel_rep_2_0,27,26,30,29,33,32,36,35,39,38)
	MR_init_label10(ml_backend__ml_util__type_ctor_needs_lowlevel_rep_2_0,42,41,45,44,48,108,47,51,11,12)
	MR_init_label1(ml_backend__ml_util__type_ctor_needs_lowlevel_rep_2_0,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'type_ctor_needs_lowlevel_rep'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ml_backend__ml_util__type_ctor_needs_lowlevel_rep_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(ml_backend__ml_util__type_ctor_needs_lowlevel_rep_2_0_i1);
	}
	MR_sv(1) = MR_tfield(0, MR_r2, 0);
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_public_builtin_module_0_0,
		ml_backend__ml_util__type_ctor_needs_lowlevel_rep_2_0_i3);
MR_def_label(ml_backend__ml_util__type_ctor_needs_lowlevel_rep_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_private_builtin_module_0_0,
		ml_backend__ml_util__type_ctor_needs_lowlevel_rep_2_0_i4);
MR_def_label(ml_backend__ml_util__type_ctor_needs_lowlevel_rep_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(ml_backend__ml_util__type_ctor_needs_lowlevel_rep_2_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_r2 = MR_tfield(1, MR_tempr1, 0);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r4 = MR_tfield(1, MR_tempr1, 1);
	if ((strcmp((char *) (MR_Word *) MR_r4, MR_string_const("ref", 3)) != 0)) {
		MR_GOTO_LAB(ml_backend__ml_util__type_ctor_needs_lowlevel_rep_2_0_i14);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r2;
	}
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		ml_backend__ml_util__type_ctor_needs_lowlevel_rep_2_0_i15);
MR_def_label(ml_backend__ml_util__type_ctor_needs_lowlevel_rep_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ml_backend__ml_util__type_ctor_needs_lowlevel_rep_2_0_i11);
	}
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ml_backend__ml_util__type_ctor_needs_lowlevel_rep_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r4, MR_string_const("univ", 4)) != 0)) {
		MR_GOTO_LAB(ml_backend__ml_util__type_ctor_needs_lowlevel_rep_2_0_i17);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		ml_backend__ml_util__type_ctor_needs_lowlevel_rep_2_0_i18);
MR_def_label(ml_backend__ml_util__type_ctor_needs_lowlevel_rep_2_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ml_backend__ml_util__type_ctor_needs_lowlevel_rep_2_0_i11);
	}
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ml_backend__ml_util__type_ctor_needs_lowlevel_rep_2_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r4, MR_string_const("mutvar", 6)) != 0)) {
		MR_GOTO_LAB(ml_backend__ml_util__type_ctor_needs_lowlevel_rep_2_0_i20);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,2);
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		ml_backend__ml_util__type_ctor_needs_lowlevel_rep_2_0_i21);
MR_def_label(ml_backend__ml_util__type_ctor_needs_lowlevel_rep_2_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ml_backend__ml_util__type_ctor_needs_lowlevel_rep_2_0_i11);
	}
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ml_backend__ml_util__type_ctor_needs_lowlevel_rep_2_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r4, MR_string_const("c_pointer", 9)) != 0)) {
		MR_GOTO_LAB(ml_backend__ml_util__type_ctor_needs_lowlevel_rep_2_0_i23);
	}
	MR_sv(1) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r2;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		ml_backend__ml_util__type_ctor_needs_lowlevel_rep_2_0_i24);
MR_def_label(ml_backend__ml_util__type_ctor_needs_lowlevel_rep_2_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ml_backend__ml_util__type_ctor_needs_lowlevel_rep_2_0_i11);
	}
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ml_backend__ml_util__type_ctor_needs_lowlevel_rep_2_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r4, MR_string_const("type_desc", 9)) != 0)) {
		MR_GOTO_LAB(ml_backend__ml_util__type_ctor_needs_lowlevel_rep_2_0_i26);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,3);
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		ml_backend__ml_util__type_ctor_needs_lowlevel_rep_2_0_i27);
MR_def_label(ml_backend__ml_util__type_ctor_needs_lowlevel_rep_2_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ml_backend__ml_util__type_ctor_needs_lowlevel_rep_2_0_i11);
	}
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ml_backend__ml_util__type_ctor_needs_lowlevel_rep_2_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r4, MR_string_const("type_info", 9)) != 0)) {
		MR_GOTO_LAB(ml_backend__ml_util__type_ctor_needs_lowlevel_rep_2_0_i29);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		ml_backend__ml_util__type_ctor_needs_lowlevel_rep_2_0_i30);
MR_def_label(ml_backend__ml_util__type_ctor_needs_lowlevel_rep_2_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ml_backend__ml_util__type_ctor_needs_lowlevel_rep_2_0_i11);
	}
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ml_backend__ml_util__type_ctor_needs_lowlevel_rep_2_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r4, MR_string_const("heap_pointer", 12)) != 0)) {
		MR_GOTO_LAB(ml_backend__ml_util__type_ctor_needs_lowlevel_rep_2_0_i32);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		ml_backend__ml_util__type_ctor_needs_lowlevel_rep_2_0_i33);
MR_def_label(ml_backend__ml_util__type_ctor_needs_lowlevel_rep_2_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ml_backend__ml_util__type_ctor_needs_lowlevel_rep_2_0_i11);
	}
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ml_backend__ml_util__type_ctor_needs_lowlevel_rep_2_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r4, MR_string_const("type_ctor_desc", 14)) != 0)) {
		MR_GOTO_LAB(ml_backend__ml_util__type_ctor_needs_lowlevel_rep_2_0_i35);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,3);
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		ml_backend__ml_util__type_ctor_needs_lowlevel_rep_2_0_i36);
MR_def_label(ml_backend__ml_util__type_ctor_needs_lowlevel_rep_2_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ml_backend__ml_util__type_ctor_needs_lowlevel_rep_2_0_i11);
	}
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ml_backend__ml_util__type_ctor_needs_lowlevel_rep_2_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r4, MR_string_const("type_ctor_info", 14)) != 0)) {
		MR_GOTO_LAB(ml_backend__ml_util__type_ctor_needs_lowlevel_rep_2_0_i38);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		ml_backend__ml_util__type_ctor_needs_lowlevel_rep_2_0_i39);
MR_def_label(ml_backend__ml_util__type_ctor_needs_lowlevel_rep_2_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ml_backend__ml_util__type_ctor_needs_lowlevel_rep_2_0_i11);
	}
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ml_backend__ml_util__type_ctor_needs_lowlevel_rep_2_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r4, MR_string_const("typeclass_info", 14)) != 0)) {
		MR_GOTO_LAB(ml_backend__ml_util__type_ctor_needs_lowlevel_rep_2_0_i41);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		ml_backend__ml_util__type_ctor_needs_lowlevel_rep_2_0_i42);
MR_def_label(ml_backend__ml_util__type_ctor_needs_lowlevel_rep_2_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ml_backend__ml_util__type_ctor_needs_lowlevel_rep_2_0_i11);
	}
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ml_backend__ml_util__type_ctor_needs_lowlevel_rep_2_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r4, MR_string_const("pseudo_type_desc", 16)) != 0)) {
		MR_GOTO_LAB(ml_backend__ml_util__type_ctor_needs_lowlevel_rep_2_0_i44);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,3);
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		ml_backend__ml_util__type_ctor_needs_lowlevel_rep_2_0_i45);
MR_def_label(ml_backend__ml_util__type_ctor_needs_lowlevel_rep_2_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ml_backend__ml_util__type_ctor_needs_lowlevel_rep_2_0_i11);
	}
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ml_backend__ml_util__type_ctor_needs_lowlevel_rep_2_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r4, MR_string_const("comparison_result", 17)) != 0)) {
		MR_GOTO_LAB(ml_backend__ml_util__type_ctor_needs_lowlevel_rep_2_0_i47);
	}
	MR_sv(1) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r2;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		ml_backend__ml_util__type_ctor_needs_lowlevel_rep_2_0_i48);
MR_def_label(ml_backend__ml_util__type_ctor_needs_lowlevel_rep_2_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ml_backend__ml_util__type_ctor_needs_lowlevel_rep_2_0_i11);
	}
MR_def_label(ml_backend__ml_util__type_ctor_needs_lowlevel_rep_2_0,108)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ml_backend__ml_util__type_ctor_needs_lowlevel_rep_2_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r4, MR_string_const("base_typeclass_info", 19)) != 0)) {
		MR_GOTO_LAB(ml_backend__ml_util__type_ctor_needs_lowlevel_rep_2_0_i12);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		ml_backend__ml_util__type_ctor_needs_lowlevel_rep_2_0_i51);
MR_def_label(ml_backend__ml_util__type_ctor_needs_lowlevel_rep_2_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(ml_backend__ml_util__type_ctor_needs_lowlevel_rep_2_0_i108);
	}
MR_def_label(ml_backend__ml_util__type_ctor_needs_lowlevel_rep_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_r2 = MR_sv(2);
MR_def_label(ml_backend__ml_util__type_ctor_needs_lowlevel_rep_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___mdbcomp__prim_data__sym_name_0_0);
MR_def_label(ml_backend__ml_util__type_ctor_needs_lowlevel_rep_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(parse_tree__prog_type__type_to_ctor_and_args_3_0);

MR_BEGIN_MODULE(ml_backend__ml_util_module36)
	MR_init_entry1(ml_backend__ml_util__type_needs_lowlevel_rep_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_util__type_needs_lowlevel_rep_2_0);
	MR_init_label2(ml_backend__ml_util__type_needs_lowlevel_rep_2_0,2,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'type_needs_lowlevel_rep'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ml_backend__ml_util__type_needs_lowlevel_rep_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(parse_tree__prog_type__type_to_ctor_and_args_3_0,
		ml_backend__ml_util__type_needs_lowlevel_rep_2_0_i2);
MR_def_label(ml_backend__ml_util__type_needs_lowlevel_rep_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ml_backend__ml_util__type_needs_lowlevel_rep_2_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(ml_backend__ml_util__type_ctor_needs_lowlevel_rep_2_0);
MR_def_label(ml_backend__ml_util__type_needs_lowlevel_rep_2_0,1)
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

MR_decl_entry(fn__ml_backend__mlds__mercury_module_name_to_mlds_1_0);

MR_BEGIN_MODULE(ml_backend__ml_util_module37)
	MR_init_entry1(fn__ml_backend__ml_util__gen_init_builtin_const_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ml_backend__ml_util__gen_init_builtin_const_1_0);
	MR_init_label2(fn__ml_backend__ml_util__gen_init_builtin_const_1_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'gen_init_builtin_const'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__ml_backend__ml_util__gen_init_builtin_const_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_private_builtin_module_0_0,
		fn__ml_backend__ml_util__gen_init_builtin_const_1_0_i2);
MR_def_label(fn__ml_backend__ml_util__gen_init_builtin_const_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__ml_backend__mlds__mercury_module_name_to_mlds_1_0,
		fn__ml_backend__ml_util__gen_init_builtin_const_1_0_i3);
MR_def_label(fn__ml_backend__ml_util__gen_init_builtin_const_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(1);
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = (MR_Integer) 0;
	MR_tfield(0, MR_tempr1, 2) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r2, 0) = MR_tempr1;
	MR_tfield(3, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 2);
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_r2;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_initializer_0;
MR_decl_entry(fn__list__map_2_0);

MR_BEGIN_MODULE(ml_backend__ml_util_module38)
	MR_init_entry1(fn__ml_backend__ml_util__gen_init_array_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ml_backend__ml_util__gen_init_array_2_0);
	MR_init_label1(fn__ml_backend__ml_util__gen_init_array_2_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'gen_init_array'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__ml_backend__ml_util__gen_init_array_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_initializer);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		fn__ml_backend__ml_util__gen_init_array_2_0_i2);
MR_def_label(fn__ml_backend__ml_util__gen_init_array_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 1);
	MR_tfield(3, MR_r2, 0) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_util_module39)
	MR_init_entry1(fn__ml_backend__ml_util__gen_init_null_pointer_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ml_backend__ml_util__gen_init_null_pointer_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'gen_init_null_pointer'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__ml_backend__ml_util__gen_init_null_pointer_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 8;
	MR_tfield(3, MR_r2, 1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r2;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(mercury__do_call_closure_1);

MR_BEGIN_MODULE(ml_backend__ml_util_module40)
	MR_init_entry1(fn__ml_backend__ml_util__gen_init_maybe_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ml_backend__ml_util__gen_init_maybe_3_0);
	MR_init_label1(fn__ml_backend__ml_util__gen_init_maybe_3_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'gen_init_maybe'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__ml_backend__ml_util__gen_init_maybe_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(fn__ml_backend__ml_util__gen_init_maybe_3_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 8;
	MR_tfield(3, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_r2, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_r2;
	MR_proceed();
	}
MR_def_label(fn__ml_backend__ml_util__gen_init_maybe_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_r2 = MR_tfield(1, MR_r4, 0);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(fn__ml_backend__ml_util__gen_init_maybe_3_0));
	MR_np_tailcall_ent(do_call_closure_1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_util_module41)
	MR_init_entry1(fn__ml_backend__ml_util__gen_init_string_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ml_backend__ml_util__gen_init_string_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'gen_init_string'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__ml_backend__ml_util__gen_init_string_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_r2, 1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r2;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_util_module42)
	MR_init_entry1(fn__ml_backend__ml_util__gen_init_foreign_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ml_backend__ml_util__gen_init_foreign_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'gen_init_foreign'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__ml_backend__ml_util__gen_init_foreign_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tfield(3, MR_tempr1, 2) = MR_r2;
	MR_tfield(3, MR_tempr1, 3) = (MR_Word) MR_tbmkword(0, 2);
	MR_tag_alloc_heap(MR_r2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_r2, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_r2;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_util_module43)
	MR_init_entry1(fn__ml_backend__ml_util__gen_init_int_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ml_backend__ml_util__gen_init_int_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'gen_init_int'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__ml_backend__ml_util__gen_init_int_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r2;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_util_module44)
	MR_init_entry1(fn__ml_backend__ml_util__gen_init_bool_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ml_backend__ml_util__gen_init_bool_1_0);
	MR_init_label1(fn__ml_backend__ml_util__gen_init_bool_1_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'gen_init_bool'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__ml_backend__ml_util__gen_init_bool_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(fn__ml_backend__ml_util__gen_init_bool_1_0_i3);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,2,1);
	MR_proceed();
MR_def_label(fn__ml_backend__ml_util__gen_init_bool_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,2,3);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_util_module45)
	MR_init_entry1(fn__ml_backend__ml_util__gen_init_boxed_int_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ml_backend__ml_util__gen_init_boxed_int_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'gen_init_boxed_int'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__ml_backend__ml_util__gen_init_boxed_int_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 3);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_r2, 1) = (MR_Word) MR_TAG_COMMON(0,2,4);
	MR_tfield(3, MR_r2, 2) = MR_tempr1;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_r2;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__ml_backend__ml_unify_gen__ml_gen_reserved_address_3_0);

MR_BEGIN_MODULE(ml_backend__ml_util_module46)
	MR_init_entry1(fn__ml_backend__ml_util__gen_init_reserved_address_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ml_backend__ml_util__gen_init_reserved_address_2_0);
	MR_init_label1(fn__ml_backend__ml_util__gen_init_reserved_address_2_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'gen_init_reserved_address'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__ml_backend__ml_util__gen_init_reserved_address_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r3 = (MR_Word) MR_tbmkword(0, 5);
	MR_np_call_localret_ent(fn__ml_backend__ml_unify_gen__ml_gen_reserved_address_3_0,
		fn__ml_backend__ml_util__gen_init_reserved_address_2_0_i2);
MR_def_label(fn__ml_backend__ml_util__gen_init_reserved_address_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_util_module47)
	MR_init_entry1(fn__ml_backend__ml_util__wrap_init_obj_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ml_backend__ml_util__wrap_init_obj_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'wrap_init_obj'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__ml_backend__ml_util__wrap_init_obj_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_r1 = MR_r2;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_util_module48)
	MR_init_entry1(ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__596__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__596__1_2_0);
	MR_init_label2(ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__596__1_2_0,2,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__has_foreign_languages__596__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__596__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_mkframe("pred ml_backend.ml_util.IntroducedFrom__pred__has_foreign_languages__596__1/2-0", 1,
		MR_LABEL_AP(ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__596__1_2_0_i2));
	MR_fv(1) = MR_r1;
	MR_GOTO_LAB(ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__596__1_2_0_i1);
MR_def_label(ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__596__1_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_curfr) = (MR_Word) MR_ENTRY(MR_do_fail);
	MR_r1 = MR_tfield(0, MR_fv(1), 0);
	MR_np_call_localret_ent(ml_backend__ml_util__stmt_contains_statement_2_0,
		ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__596__1_2_0_i1);
MR_def_label(ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__596__1_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(0, MR_r1, 0);
	if (MR_RTAGS_TESTR(MR_r2,3,8)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(3, MR_r2, 1);
	MR_r3 = MR_tempr1;
	if (MR_RTAGS_TESTR(MR_tempr1,3,7)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_r1 = MR_tfield(3, MR_tempr1, 1);
	MR_succeed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__ml_backend__ml_util_maybe_bunch_0(void)
{
	ml_backend__ml_util_module0();
	ml_backend__ml_util_module1();
	ml_backend__ml_util_module2();
	ml_backend__ml_util_module3();
	ml_backend__ml_util_module4();
	ml_backend__ml_util_module5();
	ml_backend__ml_util_module6();
	ml_backend__ml_util_module7();
	ml_backend__ml_util_module8();
	ml_backend__ml_util_module9();
	ml_backend__ml_util_module10();
	ml_backend__ml_util_module11();
	ml_backend__ml_util_module12();
	ml_backend__ml_util_module13();
	ml_backend__ml_util_module14();
	ml_backend__ml_util_module15();
	ml_backend__ml_util_module16();
	ml_backend__ml_util_module17();
	ml_backend__ml_util_module18();
	ml_backend__ml_util_module19();
	ml_backend__ml_util_module20();
	ml_backend__ml_util_module21();
	ml_backend__ml_util_module22();
	ml_backend__ml_util_module23();
	ml_backend__ml_util_module24();
	ml_backend__ml_util_module25();
	ml_backend__ml_util_module26();
	ml_backend__ml_util_module27();
	ml_backend__ml_util_module28();
	ml_backend__ml_util_module29();
	ml_backend__ml_util_module30();
	ml_backend__ml_util_module31();
	ml_backend__ml_util_module32();
	ml_backend__ml_util_module33();
	ml_backend__ml_util_module34();
	ml_backend__ml_util_module35();
	ml_backend__ml_util_module36();
	ml_backend__ml_util_module37();
	ml_backend__ml_util_module38();
	ml_backend__ml_util_module39();
}

static void mercury__ml_backend__ml_util_maybe_bunch_1(void)
{
	ml_backend__ml_util_module40();
	ml_backend__ml_util_module41();
	ml_backend__ml_util_module42();
	ml_backend__ml_util_module43();
	ml_backend__ml_util_module44();
	ml_backend__ml_util_module45();
	ml_backend__ml_util_module46();
	ml_backend__ml_util_module47();
	ml_backend__ml_util_module48();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__ml_backend__ml_util__init(void);
void mercury__ml_backend__ml_util__init_type_tables(void);
void mercury__ml_backend__ml_util__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__ml_backend__ml_util__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__ml_backend__ml_util__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__ml_backend__ml_util__init_threadscope_string_table(void);
#endif

void mercury__ml_backend__ml_util__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__ml_backend__ml_util_maybe_bunch_0();
	mercury__ml_backend__ml_util_maybe_bunch_1();
	mercury__ml_backend__ml_util__init_debugger();
}

void mercury__ml_backend__ml_util__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}


void mercury__ml_backend__ml_util__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__ml_backend__ml_util__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__ml_backend__ml_util);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__ml_backend__ml_util__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__ml_backend__ml_util__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
