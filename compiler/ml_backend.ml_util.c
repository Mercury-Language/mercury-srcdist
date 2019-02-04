/*
** Automatically generated from `ml_util.m'
** by the Mercury compiler,
** version rotd-2009-09-19, configured for i686-pc-linux-gnu.
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
INIT mercury__ml_backend__ml_util__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 136 "../library/io.int2"
#include "io.mh"

#line 27 "ml_backend.ml_util.c"
#line 144 "../library/io.int2"
#include "string.mh"

#line 31 "ml_backend.ml_util.c"
#line 33 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 35 "ml_backend.ml_util.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 39 "ml_backend.ml_util.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 43 "ml_backend.ml_util.c"
#line 31 "../library/array.int2"
#include "array.mh"

#line 47 "ml_backend.ml_util.c"
#line 48 "ml_backend.ml_util.c"
#include "ml_backend.ml_util.mh"

#line 51 "ml_backend.ml_util.c"
#line 52 "ml_backend.ml_util.c"
#ifndef ML_BACKEND__ML_UTIL_DECL_GUARD
#define ML_BACKEND__ML_UTIL_DECL_GUARD

#line 56 "ml_backend.ml_util.c"
#line 57 "ml_backend.ml_util.c"

#endif
#line 60 "ml_backend.ml_util.c"

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
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
	MR_Word * f5;
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

struct mercury_type_2 {
	MR_String f1;
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];

struct mercury_type_3 {
	MR_Integer f1[32];
};
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];

struct mercury_type_4 {
	MR_String f1[5];
	MR_Integer f2[4];
	MR_String f3;
	MR_Integer f4[3];
	MR_String f5[3];
	MR_Integer f6[2];
	MR_String f7;
	MR_Integer f8;
	MR_String f9;
	MR_Integer f10[9];
	MR_String f11[2];
};
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_common_4[];

struct mercury_type_5 {
	MR_Word * f1;
};
MR_STATIC_LINKAGE const struct mercury_type_5 mercury_common_5[];
MR_decl_label2(ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__491__1_2_0, 2,1)
MR_decl_label8(ml_backend__ml_util__can_optimize_tailcall_2_0, 4,3,9,8,12,16,18,1)
MR_decl_label3(ml_backend__ml_util__cases_contains_statement_2_0, 1,3,2)
MR_decl_label3(ml_backend__ml_util__cases_contains_var_2_0, 3,4,2)
MR_decl_label1(ml_backend__ml_util__default_contains_statement_2_0, 3)
MR_decl_label1(ml_backend__ml_util__default_contains_var_2_0, 1)
MR_decl_label8(ml_backend__ml_util__defn_body_contains_var_2_0, 9,10,7,14,15,13,18,21)
MR_decl_label5(ml_backend__ml_util__defn_contains_foreign_code_2_0, 6,5,10,9,2)
MR_decl_label3(ml_backend__ml_util__defn_contains_outline_foreign_proc_2_0, 6,5,2)
MR_decl_label1(ml_backend__ml_util__defn_is_commit_type_var_1_0, 1)
MR_decl_label2(ml_backend__ml_util__defn_is_public_1_0, 2,1)
MR_decl_label1(ml_backend__ml_util__defn_is_type_ctor_info_1_0, 1)
MR_decl_label3(ml_backend__ml_util__defns_contain_main_1_0, 4,3,1)
MR_decl_label3(ml_backend__ml_util__defns_contains_var_2_0, 3,4,2)
MR_decl_label1(ml_backend__ml_util__function_body_contains_var_2_0, 1)
MR_decl_label8(ml_backend__ml_util__initializer_contains_var_2_0, 51,14,15,50,5,6,4,1)
MR_decl_label5(ml_backend__ml_util__lval_contains_var_2_0, 6,52,10,53,1)
MR_decl_label3(ml_backend__ml_util__lvals_contains_var_2_0, 3,4,2)
MR_decl_label1(ml_backend__ml_util__maybe_rval_contains_var_2_0, 1)
MR_decl_label1(ml_backend__ml_util__maybe_statement_contains_statement_2_0, 3)
MR_decl_label1(ml_backend__ml_util__maybe_statement_contains_var_2_0, 1)
MR_decl_label8(ml_backend__ml_util__rval_contains_var_2_0, 17,23,11,13,33,50,3,7)
MR_decl_label3(ml_backend__ml_util__rval_contains_var_2_0, 20,26,45)
MR_decl_label3(ml_backend__ml_util__rvals_contains_var_2_0, 3,4,2)
MR_decl_label1(ml_backend__ml_util__statement_contains_statement_2_0, 2)
MR_decl_label3(ml_backend__ml_util__statements_contains_statement_2_0, 1,3,2)
MR_decl_label3(ml_backend__ml_util__statements_contains_var_2_0, 3,4,2)
MR_decl_label8(ml_backend__ml_util__stmt_contains_statement_2_0, 2,46,47,8,6,48,11,14)
MR_decl_label6(ml_backend__ml_util__stmt_contains_statement_2_0, 17,21,19,24,30,45)
MR_decl_label8(ml_backend__ml_util__stmt_contains_var_2_0, 353,82,83,80,354,153,355,114)
MR_decl_label8(ml_backend__ml_util__stmt_contains_var_2_0, 118,161,3,74,9,360,15,29)
MR_decl_label8(ml_backend__ml_util__stmt_contains_var_2_0, 33,23,25,32,19,31,37,359)
MR_decl_label8(ml_backend__ml_util__stmt_contains_var_2_0, 44,47,48,185,46,51,54,62)
MR_decl_label8(ml_backend__ml_util__stmt_contains_var_2_0, 69,59,236,357,92,96,100,107)
MR_decl_label8(ml_backend__ml_util__stmt_contains_var_2_0, 122,356,129,133,358,141,145,1)
MR_decl_label8(ml_backend__ml_util__type_ctor_needs_lowlevel_rep_2_0, 3,4,14,16,17,18,20,21)
MR_decl_label8(ml_backend__ml_util__type_ctor_needs_lowlevel_rep_2_0, 23,24,26,27,29,30,32,33)
MR_decl_label8(ml_backend__ml_util__type_ctor_needs_lowlevel_rep_2_0, 35,36,38,39,41,42,44,45)
MR_decl_label8(ml_backend__ml_util__type_ctor_needs_lowlevel_rep_2_0, 47,48,50,51,53,54,11,12)
MR_decl_label1(ml_backend__ml_util__type_ctor_needs_lowlevel_rep_2_0, 1)
MR_decl_label2(ml_backend__ml_util__type_needs_lowlevel_rep_2_0, 2,1)
MR_decl_label1(fn__ml_backend__ml_util__gen_init_array_2_0, 2)
MR_decl_label1(fn__ml_backend__ml_util__gen_init_bool_1_0, 3)
MR_decl_label2(fn__ml_backend__ml_util__gen_init_builtin_const_1_0, 2,3)
MR_decl_label1(fn__ml_backend__ml_util__gen_init_maybe_3_0, 3)
MR_decl_label1(fn__ml_backend__ml_util__gen_init_reserved_address_2_0, 2)
MR_def_extern_entry(ml_backend__ml_util__defns_contain_main_1_0)
MR_def_extern_entry(ml_backend__ml_util__can_optimize_tailcall_2_0)
MR_def_extern_entry(ml_backend__ml_util__statement_contains_statement_2_0)
MR_def_extern_entry(ml_backend__ml_util__stmt_contains_statement_2_0)
MR_decl_static(ml_backend__ml_util__statements_contains_statement_2_0)
MR_decl_static(ml_backend__ml_util__maybe_statement_contains_statement_2_0)
MR_decl_static(ml_backend__ml_util__cases_contains_statement_2_0)
MR_decl_static(ml_backend__ml_util__default_contains_statement_2_0)
MR_def_extern_entry(ml_backend__ml_util__rval_contains_var_2_0)
MR_def_extern_entry(ml_backend__ml_util__lval_contains_var_2_0)
MR_def_extern_entry(ml_backend__ml_util__initializer_contains_var_2_0)
MR_def_extern_entry(ml_backend__ml_util__rvals_contains_var_2_0)
MR_def_extern_entry(ml_backend__ml_util__maybe_rval_contains_var_2_0)
MR_def_extern_entry(ml_backend__ml_util__lvals_contains_var_2_0)
MR_def_extern_entry(ml_backend__ml_util__statement_contains_var_2_0)
MR_def_extern_entry(ml_backend__ml_util__defns_contains_var_2_0)
MR_def_extern_entry(ml_backend__ml_util__defn_contains_var_2_0)
MR_decl_static(ml_backend__ml_util__statements_contains_var_2_0)
MR_decl_static(ml_backend__ml_util__maybe_statement_contains_var_2_0)
MR_decl_static(ml_backend__ml_util__stmt_contains_var_2_0)
MR_decl_static(ml_backend__ml_util__cases_contains_var_2_0)
MR_decl_static(ml_backend__ml_util__default_contains_var_2_0)
MR_decl_static(ml_backend__ml_util__defn_body_contains_var_2_0)
MR_decl_static(ml_backend__ml_util__function_body_contains_var_2_0)
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
MR_decl_static(ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__491__1_2_0)

extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_fully_qualified_name_1;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_data_name_0;
static const struct mercury_type_0 mercury_common_0[1] =
{
{
{
MR_CTOR1_ADDR(ml_backend__mlds, mlds_fully_qualified_name),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_data_name)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ml_util__stmt_contains_var_2_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_rval_0;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ml_util__stmt_contains_var_2_0_2;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_lval_0;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ml_util__has_foreign_languages_2_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_statement_0;
extern const MR_TypeCtorInfo_Struct mercury_data_libs__globals__type_ctor_info_foreign_language_0;
static const struct mercury_type_1 mercury_common_1[3] =
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__ml_util__stmt_contains_var_2_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(ml_backend__mlds, mlds_rval),
MR_COMMON(0,0)
},
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__ml_util__stmt_contains_var_2_0_2,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(ml_backend__mlds, mlds_lval),
MR_COMMON(0,0)
},
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__ml_util__has_foreign_languages_2_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(ml_backend__mlds, statement),
MR_CTOR0_ADDR(libs__globals, foreign_language)
},
};

static const struct mercury_type_2 mercury_common_2[4] =
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

static const struct mercury_type_3 mercury_common_3[1] =
{
{
{
2,
-1,
-1,
-1,
-1,
-2,
-2,
-2,
-2,
-1,
-2,
-2,
-2,
-1,
-1,
-1,
-2,
-2,
3,
-2,
-1,
-2,
-2,
-2,
-2,
-2,
-2,
-2,
-2,
-2,
4,
-1
}
},
};

static const struct mercury_type_4 mercury_common_4[1] =
{
{
{
MR_string_const("univ", 4),
MR_string_const("pseudo_type_desc", 16),
MR_string_const("type_info", 9),
MR_string_const("ref", 3),
MR_string_const("base_typeclass_info", 19)
},
{
0,
0,
0,
0
},
MR_string_const("typeclass_info", 14),
{
0,
0,
0
},
{
MR_string_const("type_ctor_desc", 14),
MR_string_const("c_pointer", 9),
MR_string_const("mutvar", 6)
},
{
0,
0
},
MR_string_const("type_ctor_info", 14),
0,
MR_string_const("heap_pointer", 12),
{
0,
0,
0,
0,
0,
0,
0,
0,
0
},
{
MR_string_const("comparison_result", 17),
MR_string_const("type_desc", 9)
}
},
};

static const struct mercury_type_5 mercury_common_5[5] =
{
{
MR_tbmkword(0, 1)
},
{
MR_TAG_COMMON(2,5,0)
},
{
MR_tbmkword(0, 0)
},
{
MR_TAG_COMMON(2,5,2)
},
{
MR_tbmkword(0, 2)
},
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ml_util__stmt_contains_var_2_0_1 = {
{
MR_PREDICATE,
"ml_backend.ml_util",
"ml_backend.ml_util",
"rval_contains_var",
2,
0
},
"ml_backend.ml_util",
"ml_util.m",
473,
"d1;c4;d2;c3;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ml_util__stmt_contains_var_2_0_2 = {
{
MR_PREDICATE,
"ml_backend.ml_util",
"ml_backend.ml_util",
"lval_contains_var",
2,
0
},
"ml_backend.ml_util",
"ml_util.m",
476,
"d1;c4;d3;c3;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ml_util__has_foreign_languages_2_0_1 = {
{
MR_PREDICATE,
"ml_backend.ml_util",
"ml_backend.ml_util",
"lambda_ml_util_m_491",
2,
0
},
"ml_backend.ml_util",
"ml_util.m",
491,
"d1;c3;"
};


MR_BEGIN_MODULE(ml_backend__ml_util_module0)
	MR_init_entry1(ml_backend__ml_util__defns_contain_main_1_0);
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
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r1;
	MR_r2 = MR_ctfield(1, MR_tempr3, 1);
	MR_tempr1 = MR_ctfield(0, MR_ctfield(1, MR_tempr3, 0), 0);
	if (MR_PTAG_TESTR(MR_tempr1,2)) {
		MR_GOTO_LAB(ml_backend__ml_util__defns_contain_main_1_0_i4);
	}
	MR_tempr2 = MR_ctfield(2, MR_tempr1, 0);
	if (MR_PTAG_TESTR(MR_tempr2,0)) {
		MR_GOTO_LAB(ml_backend__ml_util__defns_contain_main_1_0_i4);
	}
	MR_tempr1 = MR_ctfield(0, MR_tempr2, 0);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(ml_backend__ml_util__defns_contain_main_1_0_i4);
	}
	MR_tempr1 = MR_ctfield(0, MR_tempr2, 2);
	if ((strcmp((char *) (MR_Word *) MR_tempr1, MR_string_const("main", 4)) != 0)) {
		MR_GOTO_LAB(ml_backend__ml_util__defns_contain_main_1_0_i4);
	}
	MR_tempr1 = MR_ctfield(0, MR_tempr2, 3);
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
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r3 = MR_ctfield(3, MR_tempr1, 6);
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(ml_backend__ml_util__can_optimize_tailcall_2_0_i4);
	}
	MR_r3 = MR_tempr1;
	MR_r2 = MR_ctfield(3, MR_r2, 2);
	MR_sv(1) = MR_ctfield(3, MR_r3, 3);
	MR_GOTO_LAB(ml_backend__ml_util__can_optimize_tailcall_2_0_i3);
	}
MR_def_label(ml_backend__ml_util__can_optimize_tailcall_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,1)) {
		MR_GOTO_LAB(ml_backend__ml_util__can_optimize_tailcall_2_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_ctfield(3, MR_r2, 2);
	MR_sv(1) = MR_ctfield(3, MR_tempr1, 3);
	}
MR_def_label(ml_backend__ml_util__can_optimize_tailcall_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,2)) {
		MR_GOTO_LAB(ml_backend__ml_util__can_optimize_tailcall_2_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(2, MR_r2, 0);
	MR_r3 = MR_tempr1;
	if (MR_RTAGS_TESTR(MR_tempr1,3,4)) {
		MR_GOTO_LAB(ml_backend__ml_util__can_optimize_tailcall_2_0_i1);
	}
	MR_tempr2 = MR_ctfield(3, MR_tempr1, 1);
	MR_r4 = MR_tempr2;
	if (MR_PTAG_TESTR(MR_tempr2,1)) {
		MR_GOTO_LAB(ml_backend__ml_util__can_optimize_tailcall_2_0_i9);
	}
	MR_tag_alloc_heap(MR_sv(2), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(2), 0) = MR_ctfield(1, MR_tempr2, 1);
	MR_r2 = MR_ctfield(1, MR_tempr2, 0);
	MR_GOTO_LAB(ml_backend__ml_util__can_optimize_tailcall_2_0_i8);
	}
MR_def_label(ml_backend__ml_util__can_optimize_tailcall_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_ctfield(0, MR_r4, 0);
	MR_sv(2) = (MR_Word) MR_tbmkword(0, 0);
MR_def_label(ml_backend__ml_util__can_optimize_tailcall_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr2 = MR_r2;
	MR_tempr1 = MR_ctfield(0, MR_tempr2, 1);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(ml_backend__ml_util__can_optimize_tailcall_2_0_i1);
	}
	MR_tempr1 = MR_ctfield(0, MR_tempr2, 2);
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 1);
	MR_tempr3 = MR_r1;
	MR_sv(5) = MR_ctfield(0, MR_tempr3, 2);
	MR_sv(6) = MR_ctfield(0, MR_tempr3, 1);
	MR_tempr1 = MR_tempr3;
	MR_r1 = MR_ctfield(0, MR_tempr2, 0);
	MR_r2 = MR_ctfield(0, MR_tempr1, 0);
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
	MR_sv(3) = MR_ctfield(2, MR_tempr3, 1);
	MR_tempr2 = MR_tempr3;
	MR_sv(5) = MR_ctfield(2, MR_tempr2, 2);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_ctfield(2, MR_tempr2, 0);
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
	MR_r1 = MR_ctfield(0, MR_fv(1), 0);
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
	MR_init_label8(ml_backend__ml_util__stmt_contains_statement_2_0,2,46,47,8,6,48,11,14)
	MR_init_label6(ml_backend__ml_util__stmt_contains_statement_2_0,17,21,19,24,30,45)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'stmt_contains_statement'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ml_backend__ml_util__stmt_contains_statement_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(ml_backend__ml_util__stmt_contains_statement_2_0_i2) MR_AND
		MR_LABEL_AP(ml_backend__ml_util__stmt_contains_statement_2_0_i46) MR_AND
		MR_LABEL_AP(ml_backend__ml_util__stmt_contains_statement_2_0_i47) MR_AND
		MR_LABEL_AP(ml_backend__ml_util__stmt_contains_statement_2_0_i48));
MR_def_label(ml_backend__ml_util__stmt_contains_statement_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r1, 1);
	MR_np_tailcall_ent(ml_backend__ml_util__statements_contains_statement_2_0);
MR_def_label(ml_backend__ml_util__stmt_contains_statement_2_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_mkframe("pred ml_backend.ml_util.stmt_contains_statement/2-0", 2,
		MR_LABEL_AP(ml_backend__ml_util__stmt_contains_statement_2_0_i24));
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_r1, 1);
	MR_fv(1) = MR_tempr1;
	MR_r1 = MR_tempr1;
	MR_succeed();
	}
MR_def_label(ml_backend__ml_util__stmt_contains_statement_2_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_mkframe("pred ml_backend.ml_util.stmt_contains_statement/2-0", 2,
		MR_LABEL_AP(ml_backend__ml_util__stmt_contains_statement_2_0_i8));
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r1;
	MR_fv(2) = MR_ctfield(2, MR_tempr2, 2);
	MR_tempr1 = MR_ctfield(2, MR_tempr2, 1);
	MR_fv(1) = MR_tempr1;
	MR_r1 = MR_tempr1;
	MR_succeed();
	}
MR_def_label(ml_backend__ml_util__stmt_contains_statement_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_curfr) = (MR_Word) MR_LABEL_AP(ml_backend__ml_util__stmt_contains_statement_2_0_i6);
	MR_r1 = MR_ctfield(0, MR_fv(1), 0);
	MR_np_localcall_lab(ml_backend__ml_util__stmt_contains_statement_2_0,
		ml_backend__ml_util__stmt_contains_statement_2_0_i45);
MR_def_label(ml_backend__ml_util__stmt_contains_statement_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_curfr) = (MR_Word) MR_ENTRY(MR_do_fail);
	MR_r1 = MR_fv(2);
	MR_succip_word = (MR_Word) MR_succip_slot(MR_curfr);
	MR_maxfr_word = (MR_Word) MR_prevfr_slot(MR_curfr);
	MR_curfr_word = (MR_Word) MR_succfr_slot(MR_curfr);
	MR_np_tailcall_ent(ml_backend__ml_util__maybe_statement_contains_statement_2_0);
MR_def_label(ml_backend__ml_util__stmt_contains_statement_2_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_mkframe("pred ml_backend.ml_util.stmt_contains_statement/2-0", 2,
		MR_ENTRY(MR_do_fail));
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r1, 0),
		MR_LABEL_AP(ml_backend__ml_util__stmt_contains_statement_2_0_i11) MR_AND
		MR_LABEL_AP(ml_backend__ml_util__stmt_contains_statement_2_0_i30) MR_AND
		MR_LABEL_AP(ml_backend__ml_util__stmt_contains_statement_2_0_i30) MR_AND
		MR_LABEL_AP(ml_backend__ml_util__stmt_contains_statement_2_0_i30) MR_AND
		MR_LABEL_AP(ml_backend__ml_util__stmt_contains_statement_2_0_i30) MR_AND
		MR_LABEL_AP(ml_backend__ml_util__stmt_contains_statement_2_0_i30) MR_AND
		MR_LABEL_AP(ml_backend__ml_util__stmt_contains_statement_2_0_i17) MR_AND
		MR_LABEL_AP(ml_backend__ml_util__stmt_contains_statement_2_0_i30) MR_AND
		MR_LABEL_AP(ml_backend__ml_util__stmt_contains_statement_2_0_i30));
MR_def_label(ml_backend__ml_util__stmt_contains_statement_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_fv(1) = MR_ctfield(3, MR_r1, 5);
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(ml_backend__ml_util__stmt_contains_statement_2_0_i14);
	MR_r1 = MR_ctfield(3, MR_r1, 4);
	MR_np_call_localret_ent(ml_backend__ml_util__cases_contains_statement_2_0,
		ml_backend__ml_util__stmt_contains_statement_2_0_i45);
MR_def_label(ml_backend__ml_util__stmt_contains_statement_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_curfr) = (MR_Word) MR_ENTRY(MR_do_fail);
	MR_r1 = MR_fv(1);
	MR_succip_word = (MR_Word) MR_succip_slot(MR_curfr);
	MR_maxfr_word = (MR_Word) MR_prevfr_slot(MR_curfr);
	MR_curfr_word = (MR_Word) MR_succfr_slot(MR_curfr);
	MR_np_tailcall_ent(ml_backend__ml_util__default_contains_statement_2_0);
MR_def_label(ml_backend__ml_util__stmt_contains_statement_2_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r1;
	MR_fv(1) = MR_ctfield(3, MR_tempr2, 3);
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(ml_backend__ml_util__stmt_contains_statement_2_0_i21);
	MR_tempr1 = MR_ctfield(3, MR_tempr2, 2);
	MR_fv(2) = MR_tempr1;
	MR_r1 = MR_tempr1;
	MR_succeed();
	}
MR_def_label(ml_backend__ml_util__stmt_contains_statement_2_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_curfr) = (MR_Word) MR_LABEL_AP(ml_backend__ml_util__stmt_contains_statement_2_0_i19);
	MR_r1 = MR_ctfield(0, MR_fv(2), 0);
	MR_np_localcall_lab(ml_backend__ml_util__stmt_contains_statement_2_0,
		ml_backend__ml_util__stmt_contains_statement_2_0_i45);
MR_def_label(ml_backend__ml_util__stmt_contains_statement_2_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_curfr) = (MR_Word) MR_ENTRY(MR_do_fail);
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(ml_backend__ml_util__stmt_contains_statement_2_0_i24);
	MR_r1 = MR_fv(1);
	MR_succeed();
MR_def_label(ml_backend__ml_util__stmt_contains_statement_2_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_curfr) = (MR_Word) MR_ENTRY(MR_do_fail);
	MR_r1 = MR_ctfield(0, MR_fv(1), 0);
	MR_succip_word = (MR_Word) MR_succip_slot(MR_curfr);
	MR_maxfr_word = (MR_Word) MR_prevfr_slot(MR_curfr);
	MR_curfr_word = (MR_Word) MR_succfr_slot(MR_curfr);
	MR_np_localtailcall(ml_backend__ml_util__stmt_contains_statement_2_0);
MR_def_label(ml_backend__ml_util__stmt_contains_statement_2_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_GOTO(MR_ENTRY(MR_do_fail));
MR_def_label(ml_backend__ml_util__stmt_contains_statement_2_0,45)
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
	MR_r1 = MR_ctfield(0, MR_fv(1), 0);
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
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	MR_fv(1) = MR_tempr1;
	MR_r1 = MR_tempr1;
	MR_succeed();
	}
MR_def_label(ml_backend__ml_util__maybe_statement_contains_statement_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_curfr) = (MR_Word) MR_ENTRY(MR_do_fail);
	MR_r1 = MR_ctfield(0, MR_fv(1), 0);
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
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_r1, 2);
	MR_fv(2) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_fv(3) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(ml_backend__ml_util__cases_contains_statement_2_0_i3);
	MR_fv(1) = MR_tempr1;
	MR_r1 = MR_tempr1;
	MR_succeed();
	}
MR_def_label(ml_backend__ml_util__cases_contains_statement_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = MR_fv(2);
	MR_redofr_slot_word(MR_maxfr) = MR_fv(3);
	MR_r1 = MR_ctfield(0, MR_fv(1), 0);
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
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	MR_fv(1) = MR_tempr1;
	MR_r1 = MR_tempr1;
	MR_succeed();
	}
MR_def_label(ml_backend__ml_util__default_contains_statement_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_curfr) = (MR_Word) MR_ENTRY(MR_do_fail);
	MR_r1 = MR_ctfield(0, MR_fv(1), 0);
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
	MR_init_entry1(ml_backend__ml_util__rval_contains_var_2_0);
	MR_init_label8(ml_backend__ml_util__rval_contains_var_2_0,17,23,11,13,33,50,3,7)
	MR_init_label3(ml_backend__ml_util__rval_contains_var_2_0,20,26,45)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'rval_contains_var'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ml_backend__ml_util__rval_contains_var_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(ml_backend__ml_util__rval_contains_var_2_0_i17) MR_AND
		MR_LABEL_AP(ml_backend__ml_util__rval_contains_var_2_0_i23) MR_AND
		MR_LABEL_AP(ml_backend__ml_util__rval_contains_var_2_0_i11) MR_AND
		MR_LABEL_AP(ml_backend__ml_util__rval_contains_var_2_0_i33));
MR_def_label(ml_backend__ml_util__rval_contains_var_2_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r1, 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(ml_backend__ml_util__lval_contains_var_2_0);
MR_def_label(ml_backend__ml_util__rval_contains_var_2_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(1, MR_r1, 1);
	MR_succip_word = MR_sv(3);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(ml_backend__ml_util__rval_contains_var_2_0_i17) MR_AND
		MR_LABEL_AP(ml_backend__ml_util__rval_contains_var_2_0_i23) MR_AND
		MR_LABEL_AP(ml_backend__ml_util__rval_contains_var_2_0_i11) MR_AND
		MR_LABEL_AP(ml_backend__ml_util__rval_contains_var_2_0_i33));
MR_def_label(ml_backend__ml_util__rval_contains_var_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(2, MR_r1, 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,5)) {
		MR_GOTO_LAB(ml_backend__ml_util__rval_contains_var_2_0_i50);
	}
	MR_tempr2 = MR_ctfield(3, MR_tempr1, 1);
	MR_sv(1) = MR_ctfield(0, MR_tempr2, 1);
	MR_sv(2) = MR_ctfield(0, MR_r2, 2);
	MR_r1 = MR_ctfield(0, MR_tempr2, 0);
	MR_r2 = MR_ctfield(0, MR_r2, 0);
	}
	MR_np_call_localret_ent(__Unify___ml_backend__mlds__mlds_module_name_0_0,
		ml_backend__ml_util__rval_contains_var_2_0_i13);
MR_def_label(ml_backend__ml_util__rval_contains_var_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ml_backend__ml_util__rval_contains_var_2_0_i50);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___ml_backend__mlds__mlds_data_name_0_0);
MR_def_label(ml_backend__ml_util__rval_contains_var_2_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(3, MR_r1, 0);
	if (MR_INT_EQ(MR_tempr1,0)) {
		MR_GOTO_LAB(ml_backend__ml_util__rval_contains_var_2_0_i26);
	}
	if (MR_INT_EQ(MR_tempr1,1)) {
		MR_GOTO_LAB(ml_backend__ml_util__rval_contains_var_2_0_i3);
	}
	if (MR_INT_EQ(MR_tempr1,2)) {
		MR_GOTO_LAB(ml_backend__ml_util__rval_contains_var_2_0_i20);
	}
	}
MR_def_label(ml_backend__ml_util__rval_contains_var_2_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
MR_def_label(ml_backend__ml_util__rval_contains_var_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_ctfield(3, MR_r1, 3);
	MR_sv(1) = MR_r2;
	MR_r1 = MR_ctfield(3, MR_r1, 2);
	MR_np_localcall_lab(ml_backend__ml_util__rval_contains_var_2_0,
		ml_backend__ml_util__rval_contains_var_2_0_i7);
MR_def_label(ml_backend__ml_util__rval_contains_var_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(ml_backend__ml_util__rval_contains_var_2_0_i45);
	}
	MR_r2 = MR_sv(1);
	MR_r1 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(ml_backend__ml_util__rval_contains_var_2_0_i17) MR_AND
		MR_LABEL_AP(ml_backend__ml_util__rval_contains_var_2_0_i23) MR_AND
		MR_LABEL_AP(ml_backend__ml_util__rval_contains_var_2_0_i11) MR_AND
		MR_LABEL_AP(ml_backend__ml_util__rval_contains_var_2_0_i33));
MR_def_label(ml_backend__ml_util__rval_contains_var_2_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(ml_backend__ml_util__lval_contains_var_2_0);
MR_def_label(ml_backend__ml_util__rval_contains_var_2_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(3, MR_r1, 2);
	MR_succip_word = MR_sv(3);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(ml_backend__ml_util__rval_contains_var_2_0_i17) MR_AND
		MR_LABEL_AP(ml_backend__ml_util__rval_contains_var_2_0_i23) MR_AND
		MR_LABEL_AP(ml_backend__ml_util__rval_contains_var_2_0_i11) MR_AND
		MR_LABEL_AP(ml_backend__ml_util__rval_contains_var_2_0_i33));
MR_def_label(ml_backend__ml_util__rval_contains_var_2_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___ml_backend__mlds__mlds_var_name_0_0);

MR_BEGIN_MODULE(ml_backend__ml_util_module9)
	MR_init_entry1(ml_backend__ml_util__lval_contains_var_2_0);
	MR_init_label5(ml_backend__ml_util__lval_contains_var_2_0,6,52,10,53,1)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'lval_contains_var'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ml_backend__ml_util__lval_contains_var_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tag(MR_r1);
	if ((MR_tempr1 == MR_mktag((MR_Integer) 3))) {
		MR_GOTO_LAB(ml_backend__ml_util__lval_contains_var_2_0_i52);
	}
	if ((MR_tempr1 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(ml_backend__ml_util__lval_contains_var_2_0_i6);
	}
	if ((MR_tempr1 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(ml_backend__ml_util__lval_contains_var_2_0_i53);
	}
	MR_r1 = MR_ctfield(0, MR_r1, 1);
	MR_np_tailcall_ent(ml_backend__ml_util__rval_contains_var_2_0);
	}
MR_def_label(ml_backend__ml_util__lval_contains_var_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_np_tailcall_ent(ml_backend__ml_util__rval_contains_var_2_0);
MR_def_label(ml_backend__ml_util__lval_contains_var_2_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(3, MR_r1, 0);
	MR_sv(1) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 2);
	MR_tempr2 = MR_r2;
	MR_sv(3) = MR_ctfield(0, MR_tempr2, 2);
	MR_sv(4) = MR_ctfield(0, MR_tempr2, 1);
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	MR_r2 = MR_ctfield(0, MR_r2, 0);
	}
	MR_np_call_localret_ent(__Unify___ml_backend__mlds__mlds_module_name_0_0,
		ml_backend__ml_util__lval_contains_var_2_0_i10);
MR_def_label(ml_backend__ml_util__lval_contains_var_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ml_backend__ml_util__lval_contains_var_2_0_i1);
	}
	if ((MR_sv(1) != MR_sv(4))) {
		MR_GOTO_LAB(ml_backend__ml_util__lval_contains_var_2_0_i1);
	}
	if (MR_PTAG_TESTR(MR_sv(3),1)) {
		MR_GOTO_LAB(ml_backend__ml_util__lval_contains_var_2_0_i1);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_ctfield(1, MR_sv(3), 0);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___ml_backend__mlds__mlds_var_name_0_0);
MR_def_label(ml_backend__ml_util__lval_contains_var_2_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(ml_backend__ml_util__lval_contains_var_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_initializer_0;

MR_BEGIN_MODULE(ml_backend__ml_util_module10)
	MR_init_entry1(ml_backend__ml_util__initializer_contains_var_2_0);
	MR_init_label8(ml_backend__ml_util__initializer_contains_var_2_0,51,14,15,50,5,6,4,1)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'initializer_contains_var'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ml_backend__ml_util__initializer_contains_var_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tag(MR_r1);
	if ((MR_tempr1 == MR_mktag((MR_Integer) 3))) {
		MR_GOTO_LAB(ml_backend__ml_util__initializer_contains_var_2_0_i50);
	}
	if ((MR_tempr1 == MR_mktag((MR_Integer) 2))) {
		MR_GOTO_LAB(ml_backend__ml_util__initializer_contains_var_2_0_i51);
	}
	if ((MR_tempr1 != MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(ml_backend__ml_util__initializer_contains_var_2_0_i1);
	}
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_np_tailcall_ent(ml_backend__ml_util__rval_contains_var_2_0);
	}
MR_def_label(ml_backend__ml_util__initializer_contains_var_2_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(2) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(3) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(4));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(ml_backend__ml_util__initializer_contains_var_2_0_i4);
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_initializer);
	MR_r2 = MR_ctfield(2, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(list__member_2_1,
		ml_backend__ml_util__initializer_contains_var_2_0_i14);
MR_def_label(ml_backend__ml_util__initializer_contains_var_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_np_localcall_lab(ml_backend__ml_util__initializer_contains_var_2_0,
		ml_backend__ml_util__initializer_contains_var_2_0_i15);
MR_def_label(ml_backend__ml_util__initializer_contains_var_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_restore_maxfr(MR_sv(4));
	MR_redoip_slot_word(MR_maxfr) = MR_sv(2);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(3);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(5);
MR_def_label(ml_backend__ml_util__initializer_contains_var_2_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(2) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(3) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(4));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(ml_backend__ml_util__initializer_contains_var_2_0_i4);
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_initializer);
	MR_r2 = MR_ctfield(3, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(list__member_2_1,
		ml_backend__ml_util__initializer_contains_var_2_0_i5);
MR_def_label(ml_backend__ml_util__initializer_contains_var_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_np_localcall_lab(ml_backend__ml_util__initializer_contains_var_2_0,
		ml_backend__ml_util__initializer_contains_var_2_0_i6);
MR_def_label(ml_backend__ml_util__initializer_contains_var_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_restore_maxfr(MR_sv(4));
	MR_redoip_slot_word(MR_maxfr) = MR_sv(2);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(3);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(5);
MR_def_label(ml_backend__ml_util__initializer_contains_var_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = MR_sv(2);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(3);
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(5);
MR_def_label(ml_backend__ml_util__initializer_contains_var_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_rval_0;

MR_BEGIN_MODULE(ml_backend__ml_util_module11)
	MR_init_entry1(ml_backend__ml_util__rvals_contains_var_2_0);
	MR_init_label3(ml_backend__ml_util__rvals_contains_var_2_0,3,4,2)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'rvals_contains_var'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ml_backend__ml_util__rvals_contains_var_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(2) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(3) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(4));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(ml_backend__ml_util__rvals_contains_var_2_0_i2);
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_rval);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__member_2_1,
		ml_backend__ml_util__rvals_contains_var_2_0_i3);
MR_def_label(ml_backend__ml_util__rvals_contains_var_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(ml_backend__ml_util__rval_contains_var_2_0,
		ml_backend__ml_util__rvals_contains_var_2_0_i4);
MR_def_label(ml_backend__ml_util__rvals_contains_var_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_restore_maxfr(MR_sv(4));
	MR_redoip_slot_word(MR_maxfr) = MR_sv(2);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(3);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ml_backend__ml_util__rvals_contains_var_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = MR_sv(2);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(3);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_util_module12)
	MR_init_entry1(ml_backend__ml_util__maybe_rval_contains_var_2_0);
	MR_init_label1(ml_backend__ml_util__maybe_rval_contains_var_2_0,1)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'maybe_rval_contains_var'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ml_backend__ml_util__maybe_rval_contains_var_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ml_backend__ml_util__maybe_rval_contains_var_2_0_i1);
	}
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_np_tailcall_ent(ml_backend__ml_util__rval_contains_var_2_0);
MR_def_label(ml_backend__ml_util__maybe_rval_contains_var_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_lval_0;

MR_BEGIN_MODULE(ml_backend__ml_util_module13)
	MR_init_entry1(ml_backend__ml_util__lvals_contains_var_2_0);
	MR_init_label3(ml_backend__ml_util__lvals_contains_var_2_0,3,4,2)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'lvals_contains_var'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ml_backend__ml_util__lvals_contains_var_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(2) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(3) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(4));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(ml_backend__ml_util__lvals_contains_var_2_0_i2);
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_lval);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__member_2_1,
		ml_backend__ml_util__lvals_contains_var_2_0_i3);
MR_def_label(ml_backend__ml_util__lvals_contains_var_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(ml_backend__ml_util__lval_contains_var_2_0,
		ml_backend__ml_util__lvals_contains_var_2_0_i4);
MR_def_label(ml_backend__ml_util__lvals_contains_var_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_restore_maxfr(MR_sv(4));
	MR_redoip_slot_word(MR_maxfr) = MR_sv(2);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(3);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ml_backend__ml_util__lvals_contains_var_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = MR_sv(2);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(3);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_util_module14)
	MR_init_entry1(ml_backend__ml_util__statement_contains_var_2_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'statement_contains_var'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ml_backend__ml_util__statement_contains_var_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r1, 0);
	MR_np_tailcall_ent(ml_backend__ml_util__stmt_contains_var_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_defn_0;

MR_BEGIN_MODULE(ml_backend__ml_util_module15)
	MR_init_entry1(ml_backend__ml_util__defns_contains_var_2_0);
	MR_init_label3(ml_backend__ml_util__defns_contains_var_2_0,3,4,2)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'defns_contains_var'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ml_backend__ml_util__defns_contains_var_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(2) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(3) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(4));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(ml_backend__ml_util__defns_contains_var_2_0_i2);
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__member_2_1,
		ml_backend__ml_util__defns_contains_var_2_0_i3);
MR_def_label(ml_backend__ml_util__defns_contains_var_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(ml_backend__ml_util__defn_contains_var_2_0,
		ml_backend__ml_util__defns_contains_var_2_0_i4);
MR_def_label(ml_backend__ml_util__defns_contains_var_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_restore_maxfr(MR_sv(4));
	MR_redoip_slot_word(MR_maxfr) = MR_sv(2);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(3);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ml_backend__ml_util__defns_contains_var_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = MR_sv(2);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(3);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_util_module16)
	MR_init_entry1(ml_backend__ml_util__defn_contains_var_2_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'defn_contains_var'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ml_backend__ml_util__defn_contains_var_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r1, 3);
	MR_np_tailcall_ent(ml_backend__ml_util__defn_body_contains_var_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_util_module17)
	MR_init_entry1(ml_backend__ml_util__statements_contains_var_2_0);
	MR_init_label3(ml_backend__ml_util__statements_contains_var_2_0,3,4,2)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'statements_contains_var'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ml_util__statements_contains_var_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(2) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(3) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(4));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(ml_backend__ml_util__statements_contains_var_2_0_i2);
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, statement);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__member_2_1,
		ml_backend__ml_util__statements_contains_var_2_0_i3);
MR_def_label(ml_backend__ml_util__statements_contains_var_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r1, 0);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(ml_backend__ml_util__stmt_contains_var_2_0,
		ml_backend__ml_util__statements_contains_var_2_0_i4);
MR_def_label(ml_backend__ml_util__statements_contains_var_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_restore_maxfr(MR_sv(4));
	MR_redoip_slot_word(MR_maxfr) = MR_sv(2);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(3);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ml_backend__ml_util__statements_contains_var_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = MR_sv(2);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(3);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_util_module18)
	MR_init_entry1(ml_backend__ml_util__maybe_statement_contains_var_2_0);
	MR_init_label1(ml_backend__ml_util__maybe_statement_contains_var_2_0,1)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'maybe_statement_contains_var'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ml_util__maybe_statement_contains_var_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ml_backend__ml_util__maybe_statement_contains_var_2_0_i1);
	}
	MR_r1 = MR_ctfield(0, MR_ctfield(1, MR_r1, 0), 0);
	MR_np_tailcall_ent(ml_backend__ml_util__stmt_contains_var_2_0);
MR_def_label(ml_backend__ml_util__maybe_statement_contains_var_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_target_code_component_0;
MR_decl_entry(fn__bool__pred_to_bool_1_0);

MR_BEGIN_MODULE(ml_backend__ml_util_module19)
	MR_init_entry1(ml_backend__ml_util__stmt_contains_var_2_0);
	MR_init_label8(ml_backend__ml_util__stmt_contains_var_2_0,353,82,83,80,354,153,355,114)
	MR_init_label8(ml_backend__ml_util__stmt_contains_var_2_0,118,161,3,74,9,360,15,29)
	MR_init_label8(ml_backend__ml_util__stmt_contains_var_2_0,33,23,25,32,19,31,37,359)
	MR_init_label8(ml_backend__ml_util__stmt_contains_var_2_0,44,47,48,185,46,51,54,62)
	MR_init_label8(ml_backend__ml_util__stmt_contains_var_2_0,69,59,236,357,92,96,100,107)
	MR_init_label8(ml_backend__ml_util__stmt_contains_var_2_0,122,356,129,133,358,141,145,1)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'stmt_contains_var'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ml_util__stmt_contains_var_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(ml_backend__ml_util__stmt_contains_var_2_0_i353) MR_AND
		MR_LABEL_AP(ml_backend__ml_util__stmt_contains_var_2_0_i354) MR_AND
		MR_LABEL_AP(ml_backend__ml_util__stmt_contains_var_2_0_i355) MR_AND
		MR_LABEL_AP(ml_backend__ml_util__stmt_contains_var_2_0_i161));
MR_def_label(ml_backend__ml_util__stmt_contains_var_2_0,353)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r1;
	MR_sv(2) = MR_ctfield(0, MR_tempr2, 1);
	MR_sv(6) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(7) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(8));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(ml_backend__ml_util__stmt_contains_var_2_0_i80);
	MR_sv(1) = MR_r2;
	MR_tempr1 = MR_tempr2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn);
	MR_r2 = MR_ctfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(list__member_2_1,
		ml_backend__ml_util__stmt_contains_var_2_0_i82);
MR_def_label(ml_backend__ml_util__stmt_contains_var_2_0,82)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(ml_backend__ml_util__defn_contains_var_2_0,
		ml_backend__ml_util__stmt_contains_var_2_0_i83);
MR_def_label(ml_backend__ml_util__stmt_contains_var_2_0,83)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_restore_maxfr(MR_sv(8));
	MR_redoip_slot_word(MR_maxfr) = MR_sv(6);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(7);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(9);
MR_def_label(ml_backend__ml_util__stmt_contains_var_2_0,80)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_redoip_slot_word(MR_maxfr) = MR_sv(6);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(7);
	MR_r1 = MR_sv(2);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(ml_backend__ml_util__statements_contains_var_2_0);
MR_def_label(ml_backend__ml_util__stmt_contains_var_2_0,354)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(2) = MR_ctfield(1, MR_r1, 1);
	MR_sv(1) = MR_r2;
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_np_call_localret_ent(ml_backend__ml_util__rval_contains_var_2_0,
		ml_backend__ml_util__stmt_contains_var_2_0_i153);
MR_def_label(ml_backend__ml_util__stmt_contains_var_2_0,153)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(ml_backend__ml_util__stmt_contains_var_2_0_i236);
	}
	MR_r2 = MR_sv(1);
	MR_r1 = MR_sv(2);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(ml_backend__ml_util__statement_contains_var_2_0);
MR_def_label(ml_backend__ml_util__stmt_contains_var_2_0,355)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(3) = MR_ctfield(2, MR_tempr1, 2);
	MR_sv(2) = MR_ctfield(2, MR_tempr1, 1);
	MR_sv(1) = MR_r2;
	MR_r1 = MR_ctfield(2, MR_r1, 0);
	}
	MR_np_call_localret_ent(ml_backend__ml_util__rval_contains_var_2_0,
		ml_backend__ml_util__stmt_contains_var_2_0_i114);
MR_def_label(ml_backend__ml_util__stmt_contains_var_2_0,114)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(ml_backend__ml_util__stmt_contains_var_2_0_i236);
	}
	MR_r2 = MR_sv(1);
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ml_backend__ml_util__statement_contains_var_2_0,
		ml_backend__ml_util__stmt_contains_var_2_0_i118);
MR_def_label(ml_backend__ml_util__stmt_contains_var_2_0,118)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(ml_backend__ml_util__stmt_contains_var_2_0_i236);
	}
	MR_r2 = MR_sv(1);
	MR_r1 = MR_sv(3);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(ml_backend__ml_util__maybe_statement_contains_var_2_0);
MR_def_label(ml_backend__ml_util__stmt_contains_var_2_0,161)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r1, 0),
		MR_LABEL_AP(ml_backend__ml_util__stmt_contains_var_2_0_i356) MR_AND
		MR_LABEL_AP(ml_backend__ml_util__stmt_contains_var_2_0_i1) MR_AND
		MR_LABEL_AP(ml_backend__ml_util__stmt_contains_var_2_0_i1) MR_AND
		MR_LABEL_AP(ml_backend__ml_util__stmt_contains_var_2_0_i107) MR_AND
		MR_LABEL_AP(ml_backend__ml_util__stmt_contains_var_2_0_i357) MR_AND
		MR_LABEL_AP(ml_backend__ml_util__stmt_contains_var_2_0_i122) MR_AND
		MR_LABEL_AP(ml_backend__ml_util__stmt_contains_var_2_0_i358) MR_AND
		MR_LABEL_AP(ml_backend__ml_util__stmt_contains_var_2_0_i107) MR_AND
		MR_LABEL_AP(ml_backend__ml_util__stmt_contains_var_2_0_i3));
MR_def_label(ml_backend__ml_util__stmt_contains_var_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(3, MR_r1, 1);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tag(MR_tempr1);
	if ((MR_r4 != MR_mktag((MR_Integer) 3))) {
		MR_GOTO_LAB(ml_backend__ml_util__stmt_contains_var_2_0_i74);
	}
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_tempr1, 0),
		MR_LABEL_AP(ml_backend__ml_util__stmt_contains_var_2_0_i1) MR_AND
		MR_LABEL_AP(ml_backend__ml_util__stmt_contains_var_2_0_i1) MR_AND
		MR_LABEL_AP(ml_backend__ml_util__stmt_contains_var_2_0_i359) MR_AND
		MR_LABEL_AP(ml_backend__ml_util__stmt_contains_var_2_0_i37) MR_AND
		MR_LABEL_AP(ml_backend__ml_util__stmt_contains_var_2_0_i51) MR_AND
		MR_LABEL_AP(ml_backend__ml_util__stmt_contains_var_2_0_i54) MR_AND
		MR_LABEL_AP(ml_backend__ml_util__stmt_contains_var_2_0_i360) MR_AND
		MR_LABEL_AP(ml_backend__ml_util__stmt_contains_var_2_0_i1));
	}
MR_def_label(ml_backend__ml_util__stmt_contains_var_2_0,74)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r4 != MR_mktag((MR_Integer) 2))) {
		MR_GOTO_LAB(ml_backend__ml_util__stmt_contains_var_2_0_i1);
	}
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_ctfield(2, MR_tempr1, 1);
	MR_sv(1) = MR_r2;
	MR_r1 = MR_ctfield(2, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(ml_backend__ml_util__lval_contains_var_2_0,
		ml_backend__ml_util__stmt_contains_var_2_0_i9);
MR_def_label(ml_backend__ml_util__stmt_contains_var_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(ml_backend__ml_util__stmt_contains_var_2_0_i236);
	}
	MR_r2 = MR_sv(1);
	MR_r1 = MR_sv(2);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(ml_backend__ml_util__rval_contains_var_2_0);
MR_def_label(ml_backend__ml_util__stmt_contains_var_2_0,360)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(6) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(7) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(8));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(ml_backend__ml_util__stmt_contains_var_2_0_i46);
	MR_sv(1) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, target_code_component);
	MR_r2 = MR_ctfield(3, MR_r3, 2);
	MR_np_call_localret_ent(list__member_2_1,
		ml_backend__ml_util__stmt_contains_var_2_0_i15);
MR_def_label(ml_backend__ml_util__stmt_contains_var_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r1;
	MR_r2 = MR_tag(MR_tempr2);
	if ((MR_r2 != MR_mktag((MR_Integer) 3))) {
		MR_GOTO_LAB(ml_backend__ml_util__stmt_contains_var_2_0_i32);
	}
	MR_r3 = MR_ctfield(3, MR_tempr2, 0);
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(ml_backend__ml_util__stmt_contains_var_2_0_i33);
	}
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(1,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__ml_util__lval_contains_var_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(3, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(1);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__bool__pred_to_bool_1_0,
		ml_backend__ml_util__stmt_contains_var_2_0_i29);
MR_def_label(ml_backend__ml_util__stmt_contains_var_2_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_GOTO_LAB(ml_backend__ml_util__stmt_contains_var_2_0_i185);
MR_def_label(ml_backend__ml_util__stmt_contains_var_2_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,2)) {
		MR_GOTO_LAB(ml_backend__ml_util__stmt_contains_var_2_0_i31);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_ctfield(3, MR_r1, 1);
	MR_r4 = MR_tempr1;
	MR_tempr2 = MR_ctfield(0, MR_tempr1, 2);
	MR_r3 = MR_tempr2;
	if (MR_PTAG_TESTR(MR_tempr2,1)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(3) = MR_ctfield(1, MR_tempr2, 0);
	MR_tempr3 = MR_sv(1);
	MR_sv(4) = MR_ctfield(0, MR_tempr3, 1);
	MR_sv(5) = MR_ctfield(0, MR_tempr3, 2);
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	MR_r2 = MR_ctfield(0, MR_tempr3, 0);
	}
	MR_np_call_localret_ent(__Unify___ml_backend__mlds__mlds_module_name_0_0,
		ml_backend__ml_util__stmt_contains_var_2_0_i23);
MR_def_label(ml_backend__ml_util__stmt_contains_var_2_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	if ((MR_sv(2) != MR_sv(4))) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(__Unify___ml_backend__mlds__mlds_data_name_0_0,
		ml_backend__ml_util__stmt_contains_var_2_0_i25);
MR_def_label(ml_backend__ml_util__stmt_contains_var_2_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_GOTO_LAB(ml_backend__ml_util__stmt_contains_var_2_0_i185);
MR_def_label(ml_backend__ml_util__stmt_contains_var_2_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 != MR_mktag((MR_Integer) 2))) {
		MR_GOTO_LAB(ml_backend__ml_util__stmt_contains_var_2_0_i31);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(1,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__ml_util__rval_contains_var_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(2, MR_r1, 0);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(1);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__bool__pred_to_bool_1_0,
		ml_backend__ml_util__stmt_contains_var_2_0_i19);
MR_def_label(ml_backend__ml_util__stmt_contains_var_2_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_GOTO_LAB(ml_backend__ml_util__stmt_contains_var_2_0_i185);
MR_def_label(ml_backend__ml_util__stmt_contains_var_2_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_GOTO(MR_ENTRY(MR_do_redo));
MR_def_label(ml_backend__ml_util__stmt_contains_var_2_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(3, MR_r3, 1);
	MR_np_tailcall_ent(ml_backend__ml_util__lval_contains_var_2_0);
MR_def_label(ml_backend__ml_util__stmt_contains_var_2_0,359)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_ctfield(3, MR_tempr1, 7);
	MR_sv(1) = MR_r2;
	MR_r1 = MR_ctfield(3, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(ml_backend__ml_util__lval_contains_var_2_0,
		ml_backend__ml_util__stmt_contains_var_2_0_i44);
MR_def_label(ml_backend__ml_util__stmt_contains_var_2_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(ml_backend__ml_util__stmt_contains_var_2_0_i236);
	}
	MR_r2 = MR_sv(1);
	MR_sv(6) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(7) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(8));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(ml_backend__ml_util__stmt_contains_var_2_0_i46);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_rval);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(list__member_2_1,
		ml_backend__ml_util__stmt_contains_var_2_0_i47);
MR_def_label(ml_backend__ml_util__stmt_contains_var_2_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(ml_backend__ml_util__rval_contains_var_2_0,
		ml_backend__ml_util__stmt_contains_var_2_0_i48);
MR_def_label(ml_backend__ml_util__stmt_contains_var_2_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
MR_def_label(ml_backend__ml_util__stmt_contains_var_2_0,185)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_restore_maxfr(MR_sv(8));
	MR_redoip_slot_word(MR_maxfr) = MR_sv(6);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(7);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(9);
MR_def_label(ml_backend__ml_util__stmt_contains_var_2_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = MR_sv(6);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(7);
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(9);
MR_def_label(ml_backend__ml_util__stmt_contains_var_2_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(3, MR_r3, 1);
	MR_np_tailcall_ent(ml_backend__ml_util__rval_contains_var_2_0);
MR_def_label(ml_backend__ml_util__stmt_contains_var_2_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(3, MR_r3, 1);
	MR_r4 = MR_tempr1;
	MR_tempr2 = MR_tag(MR_tempr1);
	if ((MR_tempr2 == MR_mktag((MR_Integer) 3))) {
		MR_GOTO_LAB(ml_backend__ml_util__stmt_contains_var_2_0_i69);
	}
	if ((MR_tempr2 == MR_mktag((MR_Integer) 2))) {
		MR_GOTO_LAB(ml_backend__ml_util__stmt_contains_var_2_0_i62);
	}
	if ((MR_tempr2 != MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(ml_backend__ml_util__stmt_contains_var_2_0_i1);
	}
	MR_r1 = MR_ctfield(1, MR_tempr1, 0);
	MR_np_tailcall_ent(ml_backend__ml_util__lval_contains_var_2_0);
	}
MR_def_label(ml_backend__ml_util__stmt_contains_var_2_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(2, MR_r4, 0);
	MR_np_tailcall_ent(ml_backend__ml_util__rval_contains_var_2_0);
MR_def_label(ml_backend__ml_util__stmt_contains_var_2_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_ctfield(3, MR_r4, 0),0)) {
		MR_GOTO_LAB(ml_backend__ml_util__stmt_contains_var_2_0_i59);
	}
	MR_r1 = MR_ctfield(3, MR_r4, 1);
	MR_np_tailcall_ent(ml_backend__ml_util__lval_contains_var_2_0);
MR_def_label(ml_backend__ml_util__stmt_contains_var_2_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(3, MR_r4, 1);
	MR_np_tailcall_ent(ml_backend__ml_util__rval_contains_var_2_0);
MR_def_label(ml_backend__ml_util__stmt_contains_var_2_0,236)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(9);
MR_def_label(ml_backend__ml_util__stmt_contains_var_2_0,357)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(4) = MR_ctfield(3, MR_tempr1, 5);
	MR_sv(3) = MR_ctfield(3, MR_tempr1, 4);
	MR_sv(2) = MR_ctfield(3, MR_tempr1, 3);
	MR_sv(1) = MR_r2;
	MR_r1 = MR_ctfield(3, MR_r1, 2);
	}
	MR_np_call_localret_ent(ml_backend__ml_util__rval_contains_var_2_0,
		ml_backend__ml_util__stmt_contains_var_2_0_i92);
MR_def_label(ml_backend__ml_util__stmt_contains_var_2_0,92)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(ml_backend__ml_util__stmt_contains_var_2_0_i236);
	}
	MR_r2 = MR_sv(1);
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ml_backend__ml_util__maybe_rval_contains_var_2_0,
		ml_backend__ml_util__stmt_contains_var_2_0_i96);
MR_def_label(ml_backend__ml_util__stmt_contains_var_2_0,96)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(ml_backend__ml_util__stmt_contains_var_2_0_i236);
	}
	MR_r2 = MR_sv(1);
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(ml_backend__ml_util__rvals_contains_var_2_0,
		ml_backend__ml_util__stmt_contains_var_2_0_i100);
MR_def_label(ml_backend__ml_util__stmt_contains_var_2_0,100)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(ml_backend__ml_util__stmt_contains_var_2_0_i236);
	}
	MR_r2 = MR_sv(1);
	MR_r1 = MR_sv(4);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(ml_backend__ml_util__lvals_contains_var_2_0);
MR_def_label(ml_backend__ml_util__stmt_contains_var_2_0,107)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_np_tailcall_ent(ml_backend__ml_util__rval_contains_var_2_0);
MR_def_label(ml_backend__ml_util__stmt_contains_var_2_0,122)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_np_tailcall_ent(ml_backend__ml_util__rvals_contains_var_2_0);
MR_def_label(ml_backend__ml_util__stmt_contains_var_2_0,356)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(3) = MR_ctfield(3, MR_tempr1, 5);
	MR_sv(2) = MR_ctfield(3, MR_tempr1, 4);
	MR_sv(1) = MR_r2;
	MR_r1 = MR_ctfield(3, MR_r1, 2);
	}
	MR_np_call_localret_ent(ml_backend__ml_util__rval_contains_var_2_0,
		ml_backend__ml_util__stmt_contains_var_2_0_i129);
MR_def_label(ml_backend__ml_util__stmt_contains_var_2_0,129)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(ml_backend__ml_util__stmt_contains_var_2_0_i236);
	}
	MR_r2 = MR_sv(1);
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ml_backend__ml_util__cases_contains_var_2_0,
		ml_backend__ml_util__stmt_contains_var_2_0_i133);
MR_def_label(ml_backend__ml_util__stmt_contains_var_2_0,133)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(ml_backend__ml_util__stmt_contains_var_2_0_i236);
	}
	MR_r2 = MR_sv(1);
	MR_r1 = MR_sv(3);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(ml_backend__ml_util__default_contains_var_2_0);
MR_def_label(ml_backend__ml_util__stmt_contains_var_2_0,358)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(3) = MR_ctfield(3, MR_tempr1, 2);
	MR_sv(2) = MR_ctfield(3, MR_tempr1, 3);
	MR_sv(1) = MR_r2;
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	}
	MR_np_call_localret_ent(ml_backend__ml_util__lval_contains_var_2_0,
		ml_backend__ml_util__stmt_contains_var_2_0_i141);
MR_def_label(ml_backend__ml_util__stmt_contains_var_2_0,141)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(ml_backend__ml_util__stmt_contains_var_2_0_i236);
	}
	MR_r2 = MR_sv(1);
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(ml_backend__ml_util__statement_contains_var_2_0,
		ml_backend__ml_util__stmt_contains_var_2_0_i145);
MR_def_label(ml_backend__ml_util__stmt_contains_var_2_0,145)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(ml_backend__ml_util__stmt_contains_var_2_0_i236);
	}
	MR_r2 = MR_sv(1);
	MR_r1 = MR_sv(2);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(ml_backend__ml_util__statement_contains_var_2_0);
MR_def_label(ml_backend__ml_util__stmt_contains_var_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_util_module20)
	MR_init_entry1(ml_backend__ml_util__cases_contains_var_2_0);
	MR_init_label3(ml_backend__ml_util__cases_contains_var_2_0,3,4,2)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'cases_contains_var'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ml_util__cases_contains_var_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(2) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(3) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(4));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(ml_backend__ml_util__cases_contains_var_2_0_i2);
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_switch_case);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__member_2_1,
		ml_backend__ml_util__cases_contains_var_2_0_i3);
MR_def_label(ml_backend__ml_util__cases_contains_var_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_ctfield(0, MR_r1, 2), 0);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(ml_backend__ml_util__stmt_contains_var_2_0,
		ml_backend__ml_util__cases_contains_var_2_0_i4);
MR_def_label(ml_backend__ml_util__cases_contains_var_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_restore_maxfr(MR_sv(4));
	MR_redoip_slot_word(MR_maxfr) = MR_sv(2);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(3);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ml_backend__ml_util__cases_contains_var_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = MR_sv(2);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(3);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_util_module21)
	MR_init_entry1(ml_backend__ml_util__default_contains_var_2_0);
	MR_init_label1(ml_backend__ml_util__default_contains_var_2_0,1)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'default_contains_var'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ml_util__default_contains_var_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(ml_backend__ml_util__default_contains_var_2_0_i1);
	}
	MR_r1 = MR_ctfield(0, MR_ctfield(1, MR_r1, 0), 0);
	MR_np_tailcall_ent(ml_backend__ml_util__stmt_contains_var_2_0);
MR_def_label(ml_backend__ml_util__default_contains_var_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_util_module22)
	MR_init_entry1(ml_backend__ml_util__defn_body_contains_var_2_0);
	MR_init_label8(ml_backend__ml_util__defn_body_contains_var_2_0,9,10,7,14,15,13,18,21)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'defn_body_contains_var'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ml_util__defn_body_contains_var_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tag(MR_r1);
	if ((MR_tempr1 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(ml_backend__ml_util__defn_body_contains_var_2_0_i21);
	}
	if ((MR_tempr1 == MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(ml_backend__ml_util__defn_body_contains_var_2_0_i18);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_tempr1 = MR_ctfield(2, MR_r1, 0);
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 4);
	MR_sv(3) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(4) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(5));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(ml_backend__ml_util__defn_body_contains_var_2_0_i7);
	MR_sv(1) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn);
	MR_r2 = MR_ctfield(0, MR_tempr1, 5);
	}
	MR_np_call_localret_ent(list__member_2_1,
		ml_backend__ml_util__defn_body_contains_var_2_0_i9);
MR_def_label(ml_backend__ml_util__defn_body_contains_var_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(ml_backend__ml_util__defn_contains_var_2_0,
		ml_backend__ml_util__defn_body_contains_var_2_0_i10);
MR_def_label(ml_backend__ml_util__defn_body_contains_var_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_restore_maxfr(MR_sv(5));
	MR_redoip_slot_word(MR_maxfr) = MR_sv(3);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(4);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(6);
MR_def_label(ml_backend__ml_util__defn_body_contains_var_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_redoip_slot_word(MR_maxfr) = MR_sv(3);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(4);
	MR_sv(3) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(4) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(5));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(ml_backend__ml_util__defn_body_contains_var_2_0_i13);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(list__member_2_1,
		ml_backend__ml_util__defn_body_contains_var_2_0_i14);
MR_def_label(ml_backend__ml_util__defn_body_contains_var_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(ml_backend__ml_util__defn_contains_var_2_0,
		ml_backend__ml_util__defn_body_contains_var_2_0_i15);
MR_def_label(ml_backend__ml_util__defn_body_contains_var_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_restore_maxfr(MR_sv(5));
	MR_redoip_slot_word(MR_maxfr) = MR_sv(3);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(4);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(6);
MR_def_label(ml_backend__ml_util__defn_body_contains_var_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = MR_sv(3);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(4);
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(6);
MR_def_label(ml_backend__ml_util__defn_body_contains_var_2_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r1, 1);
	MR_np_tailcall_ent(ml_backend__ml_util__initializer_contains_var_2_0);
MR_def_label(ml_backend__ml_util__defn_body_contains_var_2_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(1, MR_r1, 2);
	MR_np_tailcall_ent(ml_backend__ml_util__function_body_contains_var_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_util_module23)
	MR_init_entry1(ml_backend__ml_util__function_body_contains_var_2_0);
	MR_init_label1(ml_backend__ml_util__function_body_contains_var_2_0,1)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'function_body_contains_var'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ml_util__function_body_contains_var_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ml_backend__ml_util__function_body_contains_var_2_0_i1);
	}
	MR_r1 = MR_ctfield(0, MR_ctfield(1, MR_r1, 0), 0);
	MR_np_tailcall_ent(ml_backend__ml_util__stmt_contains_var_2_0);
MR_def_label(ml_backend__ml_util__function_body_contains_var_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_libs__globals__type_ctor_info_foreign_language_0;
MR_decl_entry(solutions__solutions_2_1);

MR_BEGIN_MODULE(ml_backend__ml_util_module24)
	MR_init_entry1(ml_backend__ml_util__has_foreign_languages_2_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'has_foreign_languages'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ml_backend__ml_util__has_foreign_languages_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(1,2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__491__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__globals, foreign_language);
	MR_np_tailcall_ent(solutions__solutions_2_1);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_util_module25)
	MR_init_entry1(ml_backend__ml_util__defn_contains_foreign_code_2_0);
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
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(0, MR_r2, 3);
	MR_r3 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(ml_backend__ml_util__defn_contains_foreign_code_2_0_i2);
	}
	MR_tempr2 = MR_ctfield(1, MR_tempr1, 2);
	MR_r2 = MR_tempr2;
	if (MR_LTAGS_TEST(MR_tempr2,0,0)) {
		MR_GOTO_LAB(ml_backend__ml_util__defn_contains_foreign_code_2_0_i2);
	}
	MR_sv(2) = MR_ctfield(1, MR_tempr2, 0);
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
	MR_r1 = MR_ctfield(0, MR_sv(2), 0);
	MR_np_call_localret_ent(ml_backend__ml_util__stmt_contains_statement_2_0,
		ml_backend__ml_util__defn_contains_foreign_code_2_0_i5);
MR_def_label(ml_backend__ml_util__defn_contains_foreign_code_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(0, MR_r1, 0);
	MR_r2 = MR_tempr1;
	if (MR_RTAGS_TESTR(MR_tempr1,3,8)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_tempr2 = MR_ctfield(3, MR_tempr1, 1);
	MR_r1 = MR_tempr2;
	if (MR_RTAGS_TESTR(MR_tempr2,3,6)) {
		MR_GOTO_LAB(ml_backend__ml_util__defn_contains_foreign_code_2_0_i10);
	}
	MR_r2 = MR_ctfield(3, MR_tempr2, 1);
	if ((MR_r2 == MR_sv(1))) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_GOTO_LAB(ml_backend__ml_util__defn_contains_foreign_code_2_0_i9);
	}
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


MR_BEGIN_MODULE(ml_backend__ml_util_module26)
	MR_init_entry1(ml_backend__ml_util__defn_contains_outline_foreign_proc_2_0);
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
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(0, MR_r2, 3);
	MR_r3 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(ml_backend__ml_util__defn_contains_outline_foreign_proc_2_0_i2);
	}
	MR_tempr2 = MR_ctfield(1, MR_tempr1, 2);
	MR_r2 = MR_tempr2;
	if (MR_LTAGS_TEST(MR_tempr2,0,0)) {
		MR_GOTO_LAB(ml_backend__ml_util__defn_contains_outline_foreign_proc_2_0_i2);
	}
	MR_sv(2) = MR_ctfield(1, MR_tempr2, 0);
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
	MR_r1 = MR_ctfield(0, MR_sv(2), 0);
	MR_np_call_localret_ent(ml_backend__ml_util__stmt_contains_statement_2_0,
		ml_backend__ml_util__defn_contains_outline_foreign_proc_2_0_i5);
MR_def_label(ml_backend__ml_util__defn_contains_outline_foreign_proc_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(0, MR_r1, 0);
	MR_r2 = MR_tempr1;
	if (MR_RTAGS_TESTR(MR_tempr1,3,8)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_tempr2 = MR_ctfield(3, MR_tempr1, 1);
	MR_r1 = MR_tempr2;
	if (MR_RTAGS_TESTR(MR_tempr2,3,7)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_r2 = MR_ctfield(3, MR_tempr2, 1);
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
	}
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


MR_BEGIN_MODULE(ml_backend__ml_util_module27)
	MR_init_entry1(ml_backend__ml_util__defn_is_type_1_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'defn_is_type'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ml_backend__ml_util__defn_is_type_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_r1, 0);
	MR_r1 = (MR_tag(MR_tempr1) == MR_mktag((MR_Integer) 0));
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_util_module28)
	MR_init_entry1(ml_backend__ml_util__defn_is_function_1_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'defn_is_function'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ml_backend__ml_util__defn_is_function_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_r1, 0);
	MR_r1 = (MR_tag(MR_tempr1) == MR_mktag((MR_Integer) 2));
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_util_module29)
	MR_init_entry1(ml_backend__ml_util__defn_is_type_ctor_info_1_0);
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
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_ctfield(0, MR_r1, 3);
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(ml_backend__ml_util__defn_is_type_ctor_info_1_0_i1);
	}
	MR_tempr2 = MR_ctfield(0, MR_tempr1, 0);
	MR_r1 = MR_tempr2;
	if (MR_RTAGS_TESTR(MR_tempr2,3,6)) {
		MR_GOTO_LAB(ml_backend__ml_util__defn_is_type_ctor_info_1_0_i1);
	}
	MR_tempr1 = MR_ctfield(3, MR_tempr2, 1);
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(ml_backend__ml_util__defn_is_type_ctor_info_1_0_i1);
	}
	MR_tempr3 = MR_ctfield(0, MR_tempr1, 0);
	MR_r1 = MR_tempr3;
	if (MR_PTAG_TESTR(MR_tempr3,0)) {
		MR_GOTO_LAB(ml_backend__ml_util__defn_is_type_ctor_info_1_0_i1);
	}
	MR_tempr1 = MR_ctfield(0, MR_tempr3, 1);
	MR_r1 = ((MR_Integer) MR_tempr1 == (MR_Integer) MR_tbmkword(0, 16));
	MR_proceed();
	}
MR_def_label(ml_backend__ml_util__defn_is_type_ctor_info_1_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_util_module30)
	MR_init_entry1(ml_backend__ml_util__defn_is_commit_type_var_1_0);
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
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_r1, 3);
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(ml_backend__ml_util__defn_is_commit_type_var_1_0_i1);
	}
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ml_backend__ml_util__defn_is_commit_type_var_1_0_i1);
	}
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
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

MR_BEGIN_MODULE(ml_backend__ml_util_module31)
	MR_init_entry1(ml_backend__ml_util__defn_is_public_1_0);
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
	MR_r1 = MR_ctfield(0, MR_r1, 2);
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

MR_BEGIN_MODULE(ml_backend__ml_util_module32)
	MR_init_entry1(ml_backend__ml_util__type_ctor_needs_lowlevel_rep_2_0);
	MR_init_label8(ml_backend__ml_util__type_ctor_needs_lowlevel_rep_2_0,3,4,14,16,17,18,20,21)
	MR_init_label8(ml_backend__ml_util__type_ctor_needs_lowlevel_rep_2_0,23,24,26,27,29,30,32,33)
	MR_init_label8(ml_backend__ml_util__type_ctor_needs_lowlevel_rep_2_0,35,36,38,39,41,42,44,45)
	MR_init_label8(ml_backend__ml_util__type_ctor_needs_lowlevel_rep_2_0,47,48,50,51,53,54,11,12)
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
	MR_sv(1) = MR_ctfield(0, MR_r2, 0);
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
	MR_r2 = MR_ctfield(1, MR_tempr1, 0);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_r4 = MR_ctfield(1, MR_tempr1, 1);
	MR_r5 = (MR_hash_string((MR_String) MR_r4) & (MR_Integer) 31);
	}
MR_def_label(ml_backend__ml_util__type_ctor_needs_lowlevel_rep_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	while (1) {
	{
	MR_Word MR_tempr1;
	MR_tempr1 = (MR_COMMON(4,0))[(MR_Integer) MR_r5];
	MR_r6 = MR_tempr1;
	if (((MR_Integer) MR_tempr1 && (strcmp((char *) (MR_Word *) MR_tempr1, (char *) (MR_Word *) MR_r4) == 0))) {
		MR_GOTO_LAB(ml_backend__ml_util__type_ctor_needs_lowlevel_rep_2_0_i16);
	}
	MR_r5 = (MR_COMMON(3,0))[(MR_Integer) MR_r5];
	if (MR_INT_GE(MR_r5,0))
		continue;
	MR_GOTO_LAB(ml_backend__ml_util__type_ctor_needs_lowlevel_rep_2_0_i12);
	}
	break; } /* end while */
MR_def_label(ml_backend__ml_util__type_ctor_needs_lowlevel_rep_2_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_r5,
		MR_LABEL_AP(ml_backend__ml_util__type_ctor_needs_lowlevel_rep_2_0_i17) MR_AND
		MR_LABEL_AP(ml_backend__ml_util__type_ctor_needs_lowlevel_rep_2_0_i38) MR_AND
		MR_LABEL_AP(ml_backend__ml_util__type_ctor_needs_lowlevel_rep_2_0_i23) MR_AND
		MR_LABEL_AP(ml_backend__ml_util__type_ctor_needs_lowlevel_rep_2_0_i35) MR_AND
		MR_LABEL_AP(ml_backend__ml_util__type_ctor_needs_lowlevel_rep_2_0_i53) MR_AND
		MR_LABEL_AP(ml_backend__ml_util__type_ctor_needs_lowlevel_rep_2_0_i12) MR_AND
		MR_LABEL_AP(ml_backend__ml_util__type_ctor_needs_lowlevel_rep_2_0_i12) MR_AND
		MR_LABEL_AP(ml_backend__ml_util__type_ctor_needs_lowlevel_rep_2_0_i12) MR_AND
		MR_LABEL_AP(ml_backend__ml_util__type_ctor_needs_lowlevel_rep_2_0_i12) MR_AND
		MR_LABEL_AP(ml_backend__ml_util__type_ctor_needs_lowlevel_rep_2_0_i20) MR_AND
		MR_LABEL_AP(ml_backend__ml_util__type_ctor_needs_lowlevel_rep_2_0_i12) MR_AND
		MR_LABEL_AP(ml_backend__ml_util__type_ctor_needs_lowlevel_rep_2_0_i12) MR_AND
		MR_LABEL_AP(ml_backend__ml_util__type_ctor_needs_lowlevel_rep_2_0_i12) MR_AND
		MR_LABEL_AP(ml_backend__ml_util__type_ctor_needs_lowlevel_rep_2_0_i32) MR_AND
		MR_LABEL_AP(ml_backend__ml_util__type_ctor_needs_lowlevel_rep_2_0_i50) MR_AND
		MR_LABEL_AP(ml_backend__ml_util__type_ctor_needs_lowlevel_rep_2_0_i41) MR_AND
		MR_LABEL_AP(ml_backend__ml_util__type_ctor_needs_lowlevel_rep_2_0_i12) MR_AND
		MR_LABEL_AP(ml_backend__ml_util__type_ctor_needs_lowlevel_rep_2_0_i12) MR_AND
		MR_LABEL_AP(ml_backend__ml_util__type_ctor_needs_lowlevel_rep_2_0_i29) MR_AND
		MR_LABEL_AP(ml_backend__ml_util__type_ctor_needs_lowlevel_rep_2_0_i12) MR_AND
		MR_LABEL_AP(ml_backend__ml_util__type_ctor_needs_lowlevel_rep_2_0_i44) MR_AND
		MR_LABEL_AP(ml_backend__ml_util__type_ctor_needs_lowlevel_rep_2_0_i12) MR_AND
		MR_LABEL_AP(ml_backend__ml_util__type_ctor_needs_lowlevel_rep_2_0_i12) MR_AND
		MR_LABEL_AP(ml_backend__ml_util__type_ctor_needs_lowlevel_rep_2_0_i12) MR_AND
		MR_LABEL_AP(ml_backend__ml_util__type_ctor_needs_lowlevel_rep_2_0_i12) MR_AND
		MR_LABEL_AP(ml_backend__ml_util__type_ctor_needs_lowlevel_rep_2_0_i12) MR_AND
		MR_LABEL_AP(ml_backend__ml_util__type_ctor_needs_lowlevel_rep_2_0_i12) MR_AND
		MR_LABEL_AP(ml_backend__ml_util__type_ctor_needs_lowlevel_rep_2_0_i12) MR_AND
		MR_LABEL_AP(ml_backend__ml_util__type_ctor_needs_lowlevel_rep_2_0_i12) MR_AND
		MR_LABEL_AP(ml_backend__ml_util__type_ctor_needs_lowlevel_rep_2_0_i12) MR_AND
		MR_LABEL_AP(ml_backend__ml_util__type_ctor_needs_lowlevel_rep_2_0_i47) MR_AND
		MR_LABEL_AP(ml_backend__ml_util__type_ctor_needs_lowlevel_rep_2_0_i26));
MR_def_label(ml_backend__ml_util__type_ctor_needs_lowlevel_rep_2_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,1);
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
MR_def_label(ml_backend__ml_util__type_ctor_needs_lowlevel_rep_2_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r2;
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
MR_def_label(ml_backend__ml_util__type_ctor_needs_lowlevel_rep_2_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r2;
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
MR_def_label(ml_backend__ml_util__type_ctor_needs_lowlevel_rep_2_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,3);
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
MR_def_label(ml_backend__ml_util__type_ctor_needs_lowlevel_rep_2_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
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
MR_def_label(ml_backend__ml_util__type_ctor_needs_lowlevel_rep_2_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,3);
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
MR_def_label(ml_backend__ml_util__type_ctor_needs_lowlevel_rep_2_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r2;
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
MR_def_label(ml_backend__ml_util__type_ctor_needs_lowlevel_rep_2_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,3);
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
MR_def_label(ml_backend__ml_util__type_ctor_needs_lowlevel_rep_2_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,2);
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
MR_def_label(ml_backend__ml_util__type_ctor_needs_lowlevel_rep_2_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r2;
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
MR_def_label(ml_backend__ml_util__type_ctor_needs_lowlevel_rep_2_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
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
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ml_backend__ml_util__type_ctor_needs_lowlevel_rep_2_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r2;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		ml_backend__ml_util__type_ctor_needs_lowlevel_rep_2_0_i51);
MR_def_label(ml_backend__ml_util__type_ctor_needs_lowlevel_rep_2_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ml_backend__ml_util__type_ctor_needs_lowlevel_rep_2_0_i11);
	}
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ml_backend__ml_util__type_ctor_needs_lowlevel_rep_2_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		ml_backend__ml_util__type_ctor_needs_lowlevel_rep_2_0_i54);
MR_def_label(ml_backend__ml_util__type_ctor_needs_lowlevel_rep_2_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ml_backend__ml_util__type_ctor_needs_lowlevel_rep_2_0_i11);
	}
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_r1 = MR_TRUE;
	MR_proceed();
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

MR_BEGIN_MODULE(ml_backend__ml_util_module33)
	MR_init_entry1(ml_backend__ml_util__type_needs_lowlevel_rep_2_0);
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

MR_BEGIN_MODULE(ml_backend__ml_util_module34)
	MR_init_entry1(fn__ml_backend__ml_util__gen_init_builtin_const_1_0);
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
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr2, 0) = MR_r1;
	MR_tfield(0, MR_tempr2, 1) = (MR_Integer) 0;
	MR_tfield(0, MR_tempr2, 2) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(3, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 2);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tempr2;
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__list__map_2_0);

MR_BEGIN_MODULE(ml_backend__ml_util_module35)
	MR_init_entry1(fn__ml_backend__ml_util__gen_init_array_2_0);
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
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 1);
	MR_tfield(3, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(1);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_util_module36)
	MR_init_entry1(fn__ml_backend__ml_util__gen_init_null_pointer_1_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'gen_init_null_pointer'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__ml_backend__ml_util__gen_init_null_pointer_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr2, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tempr2;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(mercury__do_call_closure_1);

MR_BEGIN_MODULE(ml_backend__ml_util_module37)
	MR_init_entry1(fn__ml_backend__ml_util__gen_init_maybe_3_0);
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
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr2, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tempr2;
	MR_proceed();
	}
MR_def_label(fn__ml_backend__ml_util__gen_init_maybe_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_r2 = MR_ctfield(1, MR_r4, 0);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(fn__ml_backend__ml_util__gen_init_maybe_3_0));
	MR_np_tailcall_ent(do_call_closure_1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_util_module38)
	MR_init_entry1(fn__ml_backend__ml_util__gen_init_string_1_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'gen_init_string'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__ml_backend__ml_util__gen_init_string_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr2, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tempr2;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_util_module39)
	MR_init_entry1(fn__ml_backend__ml_util__gen_init_foreign_2_0);
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
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 3);
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_tfield(2, MR_tempr1, 1) = MR_r2;
	MR_tfield(2, MR_tempr1, 2) = (MR_Word) MR_tbmkword(0, 2);
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr2, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tempr2;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_util_module40)
	MR_init_entry1(fn__ml_backend__ml_util__gen_init_int_1_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'gen_init_int'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__ml_backend__ml_util__gen_init_int_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr2, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tempr2;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_util_module41)
	MR_init_entry1(fn__ml_backend__ml_util__gen_init_bool_1_0);
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
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,5,1);
	MR_proceed();
MR_def_label(fn__ml_backend__ml_util__gen_init_bool_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,5,3);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_util_module42)
	MR_init_entry1(fn__ml_backend__ml_util__gen_init_boxed_int_1_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'gen_init_boxed_int'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__ml_backend__ml_util__gen_init_boxed_int_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr2, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(0,5,4);
	MR_tfield(3, MR_tempr1, 2) = MR_tempr2;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__ml_backend__ml_unify_gen__ml_gen_reserved_address_3_0);

MR_BEGIN_MODULE(ml_backend__ml_util_module43)
	MR_init_entry1(fn__ml_backend__ml_util__gen_init_reserved_address_2_0);
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
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(1);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_util_module44)
	MR_init_entry1(ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__491__1_2_0);
	MR_init_label2(ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__491__1_2_0,2,1)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__has_foreign_languages__491__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__491__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_mkframe("pred ml_backend.ml_util.IntroducedFrom__pred__has_foreign_languages__491__1/2-0", 1,
		MR_LABEL_AP(ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__491__1_2_0_i2));
	MR_fv(1) = MR_r1;
	MR_GOTO_LAB(ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__491__1_2_0_i1);
MR_def_label(ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__491__1_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_curfr) = (MR_Word) MR_ENTRY(MR_do_fail);
	MR_r1 = MR_ctfield(0, MR_fv(1), 0);
	MR_np_call_localret_ent(ml_backend__ml_util__stmt_contains_statement_2_0,
		ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__491__1_2_0_i1);
MR_def_label(ml_backend__ml_util__IntroducedFrom__pred__has_foreign_languages__491__1_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(0, MR_r1, 0);
	MR_r2 = MR_tempr1;
	if (MR_RTAGS_TESTR(MR_tempr1,3,8)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_tempr2 = MR_ctfield(3, MR_tempr1, 1);
	MR_r3 = MR_tempr2;
	if (MR_RTAGS_TESTR(MR_tempr2,3,7)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_r1 = MR_ctfield(3, MR_tempr2, 1);
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

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
