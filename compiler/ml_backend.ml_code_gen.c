/*
** Automatically generated from `ml_code_gen.m'
** by the Mercury compiler,
** version rotd-2011-03-13, configured for x86_64-unknown-linux-gnu.
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
INIT mercury__ml_backend__ml_code_gen__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 140 "../library/io.int2"
#include "io.mh"

#line 28 "ml_backend.ml_code_gen.c"
#line 150 "../library/io.int2"
#include "string.mh"

#line 32 "ml_backend.ml_code_gen.c"
#line 33 "../library/array.int2"
#include "array.mh"

#line 36 "ml_backend.ml_code_gen.c"
#line 31 "../library/bitmap.int2"
#include "bitmap.mh"

#line 40 "ml_backend.ml_code_gen.c"
#line 30 "../library/time.int2"
#include "time.mh"

#line 44 "ml_backend.ml_code_gen.c"
#line 39 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 48 "ml_backend.ml_code_gen.c"
#line 49 "ml_backend.ml_code_gen.c"
#include "ml_backend.ml_code_gen.mh"

#line 52 "ml_backend.ml_code_gen.c"
#line 53 "ml_backend.ml_code_gen.c"
#ifndef ML_BACKEND__ML_CODE_GEN_DECL_GUARD
#define ML_BACKEND__ML_CODE_GEN_DECL_GUARD

#line 57 "ml_backend.ml_code_gen.c"
#line 58 "ml_backend.ml_code_gen.c"

#endif
#line 61 "ml_backend.ml_code_gen.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

struct mercury_type_0 {
	MR_Word * f1;
};
MR_STATIC_LINKAGE const struct mercury_type_0 mercury_common_0[];

struct mercury_type_1 {
	MR_Word * f1[2];
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

struct mercury_type_2 {
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
	MR_Word * f5;
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];

struct mercury_type_3 {
	MR_Word * f1;
	MR_Code * f2;
	MR_Integer f3;
};
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];

struct mercury_type_4 {
	MR_Integer f1;
};
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_common_4[];

struct mercury_type_5 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[6];
};
MR_STATIC_LINKAGE const struct mercury_type_5 mercury_common_5[];

struct mercury_type_6 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[7];
};
MR_STATIC_LINKAGE const struct mercury_type_6 mercury_common_6[];
MR_decl_label4(ml_backend__ml_code_gen__cases_find_subgoal_nonlocals_3_0, 15,3,4,6)
MR_decl_label10(ml_backend__ml_code_gen__goal_expr_find_subgoal_nonlocals_2_0, 6,8,9,3,11,17,15,21,103,24)
MR_decl_label10(ml_backend__ml_code_gen__goal_expr_find_subgoal_nonlocals_2_0, 19,39,40,41,42,43,44,34,46,48)
MR_decl_label10(ml_backend__ml_code_gen__goal_expr_find_subgoal_nonlocals_2_0, 51,55,53,59,64,68,212,77,208,79)
MR_decl_label4(ml_backend__ml_code_gen__goals_find_subgoal_nonlocals_3_0, 15,3,4,6)
MR_decl_label8(ml_backend__ml_code_gen__ml_gen_conj_7_0, 36,4,3,42,8,10,9,12)
MR_decl_label10(ml_backend__ml_code_gen__ml_gen_goal_6_0, 2,3,4,5,7,8,10,21,12,9)
MR_decl_label6(ml_backend__ml_code_gen__ml_gen_goal_6_0, 14,15,16,17,18,19)
MR_decl_label3(ml_backend__ml_code_gen__ml_gen_goal_as_block_5_0, 2,3,4)
MR_decl_label3(ml_backend__ml_code_gen__ml_gen_goal_as_branch_6_0, 2,3,4)
MR_decl_label5(ml_backend__ml_code_gen__ml_gen_goal_as_branch_block_5_0, 2,3,4,5,6)
MR_decl_label10(ml_backend__ml_code_gen__ml_gen_goal_expr_8_0, 5,4,7,3,10,12,15,17,14,19)
MR_decl_label10(ml_backend__ml_code_gen__ml_gen_goal_expr_8_0, 21,26,27,28,29,25,23,33,32,39)
MR_decl_label2(ml_backend__ml_code_gen__ml_gen_goal_expr_8_0, 42,41)
MR_decl_label10(ml_backend__ml_code_gen__ml_gen_ite_9_0, 2,5,6,4,10,11,12,13,15,16)
MR_decl_label10(ml_backend__ml_code_gen__ml_gen_ite_9_0, 17,19,20,21,22,24,25,29,31,32)
MR_decl_label10(ml_backend__ml_code_gen__ml_gen_ite_9_0, 33,34,35,42,9,46,47,48,49,50)
MR_decl_label4(ml_backend__ml_code_gen__ml_gen_ite_9_0, 51,52,55,58)
MR_decl_label9(ml_backend__ml_code_gen__ml_gen_local_var_decls_7_0, 28,3,5,6,7,9,11,12,13)
MR_decl_label10(ml_backend__ml_code_gen__ml_gen_maybe_convert_goal_code_model_7_0, 5,6,3,12,11,92,16,17,19,9)
MR_decl_label4(ml_backend__ml_code_gen__ml_gen_maybe_convert_goal_code_model_7_0, 26,28,24,29)
MR_decl_label10(ml_backend__ml_code_gen__ml_gen_negation_7_0, 2,5,6,7,4,11,12,13,15,10)
MR_decl_label8(ml_backend__ml_code_gen__ml_gen_negation_7_0, 19,20,21,22,25,27,18,8)
MR_decl_static(fn__ml_backend__ml_code_gen__this_file_0_0)
MR_def_extern_entry(ml_backend__ml_code_gen__ml_gen_maybe_convert_goal_code_model_7_0)
MR_def_extern_entry(ml_backend__ml_code_gen__ml_gen_local_var_decls_7_0)
MR_decl_static(ml_backend__ml_code_gen__goals_find_subgoal_nonlocals_3_0)
MR_decl_static(ml_backend__ml_code_gen__cases_find_subgoal_nonlocals_3_0)
MR_decl_static(ml_backend__ml_code_gen__goal_expr_find_subgoal_nonlocals_2_0)
MR_def_extern_entry(ml_backend__ml_code_gen__ml_gen_goal_as_block_5_0)
MR_def_extern_entry(ml_backend__ml_code_gen__ml_gen_goal_6_0)
MR_def_extern_entry(ml_backend__ml_code_gen__ml_gen_goal_as_branch_6_0)
MR_decl_static(ml_backend__ml_code_gen__ml_gen_goal_expr_8_0)
MR_decl_static(ml_backend__ml_code_gen__ml_gen_ite_9_0)
MR_decl_static(ml_backend__ml_code_gen__ml_gen_negation_7_0)
MR_decl_static(ml_backend__ml_code_gen__ml_gen_conj_7_0)
MR_def_extern_entry(ml_backend__ml_code_gen__ml_gen_goal_as_branch_block_5_0)
MR_decl_static(ml_backend__ml_code_gen__IntroducedFrom__pred__ml_gen_goal_expr__622__1_2_0)

static const struct mercury_type_0 mercury_common_0[2] =
{
{
MR_tbmkword(0, 0)
},
{
MR_tbmkword(0, 1)
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_defn_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_statement_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0;
static const struct mercury_type_1 mercury_common_1[5] =
{
{
{
MR_CTOR1_ADDR(term, var),
MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type)
}
},
{
{
MR_CTOR1_ADDR(term, var),
MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(ml_backend__mlds, statement)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ml_code_gen__goal_expr_find_subgoal_nonlocals_2_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_foreign_arg_0;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ml_code_gen__goal_expr_find_subgoal_nonlocals_2_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ml_code_gen__ml_gen_goal_expr_8_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__code_model__type_ctor_info_code_model_0;
static const struct mercury_type_2 mercury_common_2[3] =
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__ml_code_gen__goal_expr_find_subgoal_nonlocals_2_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(hlds__hlds_goal, foreign_arg),
MR_COMMON(1,1)
},
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__ml_code_gen__goal_expr_find_subgoal_nonlocals_2_0_2,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(hlds__hlds_goal, foreign_arg),
MR_COMMON(1,1)
},
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__ml_code_gen__ml_gen_goal_expr_8_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(hlds__code_model, code_model),
MR_CTOR0_ADDR(hlds__code_model, code_model)
},
};

MR_decl_entry(fn__hlds__hlds_goal__foreign_arg_var_1_0);
static const struct mercury_type_3 mercury_common_3[2] =
{
{
MR_COMMON(2,0),
MR_ENTRY_AP(fn__hlds__hlds_goal__foreign_arg_var_1_0),
0
},
{
MR_COMMON(2,1),
MR_ENTRY_AP(fn__hlds__hlds_goal__foreign_arg_var_1_0),
0
},
};

static const struct mercury_type_4 mercury_common_4[1] =
{
{
7
},
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ml_code_gen__ml_gen_conj_7_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ml_gen_info__type_ctor_info_ml_gen_info_0;
static const struct mercury_type_5 mercury_common_5[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__ml_code_gen__ml_gen_conj_7_0_1,
(MR_Word *) (MR_Integer) 0
},
6,
{
MR_CTOR0_ADDR(hlds__code_model, code_model),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_COMMON(1,2),
MR_COMMON(1,3),
MR_CTOR0_ADDR(ml_backend__ml_gen_info, ml_gen_info),
MR_CTOR0_ADDR(ml_backend__ml_gen_info, ml_gen_info)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ml_code_gen__ml_gen_conj_7_0_2;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_context_0;
static const struct mercury_type_6 mercury_common_6[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__ml_code_gen__ml_gen_conj_7_0_2,
(MR_Word *) (MR_Integer) 0
},
7,
{
MR_COMMON(1,4),
MR_CTOR0_ADDR(hlds__code_model, code_model),
MR_CTOR0_ADDR(term, context),
MR_COMMON(1,2),
MR_COMMON(1,3),
MR_CTOR0_ADDR(ml_backend__ml_gen_info, ml_gen_info),
MR_CTOR0_ADDR(ml_backend__ml_gen_info, ml_gen_info)
}
},
};


static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ml_code_gen__ml_gen_conj_7_0_2 = {
{
MR_PREDICATE,
"ml_backend.ml_code_gen",
"ml_backend.ml_code_gen",
"ml_gen_conj",
7,
0
},
"ml_backend.ml_code_gen",
"ml_code_gen.m",
1167,
"31"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ml_code_gen__ml_gen_conj_7_0_1 = {
{
MR_PREDICATE,
"ml_backend.ml_code_gen",
"ml_backend.ml_code_gen",
"ml_gen_goal",
6,
0
},
"ml_backend.ml_code_gen",
"ml_code_gen.m",
1166,
"30"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ml_code_gen__ml_gen_goal_expr_8_0_1 = {
{
MR_PREDICATE,
"ml_backend.ml_code_gen",
"ml_backend.ml_code_gen",
"lambda_ml_code_gen_m_622",
2,
0
},
"ml_backend.ml_code_gen",
"ml_code_gen.m",
622,
"34"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ml_code_gen__goal_expr_find_subgoal_nonlocals_2_0_2 = {
{
MR_FUNCTION,
"hlds.hlds_goal",
"hlds.hlds_goal",
"foreign_arg_var",
2,
0
},
"ml_backend.ml_code_gen",
"ml_code_gen.m",
792,
"58"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ml_code_gen__goal_expr_find_subgoal_nonlocals_2_0_1 = {
{
MR_FUNCTION,
"hlds.hlds_goal",
"hlds.hlds_goal",
"foreign_arg_var",
2,
0
},
"ml_backend.ml_code_gen",
"ml_code_gen.m",
791,
"56"
};



MR_BEGIN_MODULE(ml_backend__ml_code_gen_module0)
	MR_init_entry1(fn__ml_backend__ml_code_gen__this_file_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ml_backend__ml_code_gen__this_file_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'this_file'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ml_backend__ml_code_gen__this_file_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ml_code_gen.m", 13);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(require__unexpected_2_0);
MR_decl_entry(ml_backend__ml_code_util__ml_gen_call_current_success_cont_4_0);
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_statement_0;
MR_decl_entry(fn__f_108_105_115_116_95_95_43_43_2_0);
MR_decl_entry(ml_backend__ml_code_util__ml_gen_test_success_2_0);
MR_decl_entry(fn__ml_backend__mlds__mlds_make_context_1_0);
MR_decl_entry(ml_backend__ml_code_util__ml_gen_set_success_4_0);

MR_BEGIN_MODULE(ml_backend__ml_code_gen_module1)
	MR_init_entry1(ml_backend__ml_code_gen__ml_gen_maybe_convert_goal_code_model_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_code_gen__ml_gen_maybe_convert_goal_code_model_7_0);
	MR_init_label10(ml_backend__ml_code_gen__ml_gen_maybe_convert_goal_code_model_7_0,5,6,3,12,11,92,16,17,19,9)
	MR_init_label4(ml_backend__ml_code_gen__ml_gen_maybe_convert_goal_code_model_7_0,26,28,24,29)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ml_gen_maybe_convert_goal_code_model'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ml_backend__ml_code_gen__ml_gen_maybe_convert_goal_code_model_7_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ml_backend__ml_code_gen__ml_gen_maybe_convert_goal_code_model_7_0_i3);
	}
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(ml_backend__ml_code_gen__ml_gen_maybe_convert_goal_code_model_7_0_i5);
	}
	MR_r1 = MR_r4;
	MR_r2 = MR_r5;
	MR_proceed();
MR_def_label(ml_backend__ml_code_gen__ml_gen_maybe_convert_goal_code_model_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,2)) {
		MR_GOTO_LAB(ml_backend__ml_code_gen__ml_gen_maybe_convert_goal_code_model_7_0_i6);
	}
	MR_r1 = (MR_Word) MR_string_const("ml_code_gen.m", 13);
	MR_r2 = (MR_Word) MR_string_const("ml_gen_maybe_convert_goal_code_model: nondet in det", 51);
	MR_np_tailcall_ent(require__unexpected_2_0);
MR_def_label(ml_backend__ml_code_gen__ml_gen_maybe_convert_goal_code_model_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ml_code_gen.m", 13);
	MR_r2 = (MR_Word) MR_string_const("ml_gen_maybe_convert_goal_code_model: semi in det", 49);
	MR_np_tailcall_ent(require__unexpected_2_0);
MR_def_label(ml_backend__ml_code_gen__ml_gen_maybe_convert_goal_code_model_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,2)) {
		MR_GOTO_LAB(ml_backend__ml_code_gen__ml_gen_maybe_convert_goal_code_model_7_0_i9);
	}
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(ml_backend__ml_code_gen__ml_gen_maybe_convert_goal_code_model_7_0_i11);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(3) = MR_r4;
	MR_r1 = MR_r3;
	MR_r2 = MR_r5;
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_call_current_success_cont_4_0,
		ml_backend__ml_code_gen__ml_gen_maybe_convert_goal_code_model_7_0_i12);
MR_def_label(ml_backend__ml_code_gen__ml_gen_maybe_convert_goal_code_model_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, statement);
	MR_r2 = MR_sv(3);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ml_backend__ml_code_gen__ml_gen_maybe_convert_goal_code_model_7_0_i28);
MR_def_label(ml_backend__ml_code_gen__ml_gen_maybe_convert_goal_code_model_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,2)) {
		MR_GOTO_LAB(ml_backend__ml_code_gen__ml_gen_maybe_convert_goal_code_model_7_0_i92);
	}
	MR_r1 = MR_r4;
	MR_r2 = MR_r5;
	MR_proceed();
MR_def_label(ml_backend__ml_code_gen__ml_gen_maybe_convert_goal_code_model_7_0,92)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_sv(3) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_test_success_2_0,
		ml_backend__ml_code_gen__ml_gen_maybe_convert_goal_code_model_7_0_i16);
MR_def_label(ml_backend__ml_code_gen__ml_gen_maybe_convert_goal_code_model_7_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_call_current_success_cont_4_0,
		ml_backend__ml_code_gen__ml_gen_maybe_convert_goal_code_model_7_0_i17);
MR_def_label(ml_backend__ml_code_gen__ml_gen_maybe_convert_goal_code_model_7_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 3);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(2, MR_tempr1, 1) = MR_r1;
	MR_tfield(2, MR_tempr1, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_tempr2 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r2;
	MR_r1 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_make_context_1_0,
		ml_backend__ml_code_gen__ml_gen_maybe_convert_goal_code_model_7_0_i19);
MR_def_label(ml_backend__ml_code_gen__ml_gen_maybe_convert_goal_code_model_7_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, statement);
	MR_r2 = MR_sv(3);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ml_backend__ml_code_gen__ml_gen_maybe_convert_goal_code_model_7_0_i28);
MR_def_label(ml_backend__ml_code_gen__ml_gen_maybe_convert_goal_code_model_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(ml_backend__ml_code_gen__ml_gen_maybe_convert_goal_code_model_7_0_i24);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(3) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_TAG_COMMON(2,0,0);
	}
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_set_success_4_0,
		ml_backend__ml_code_gen__ml_gen_maybe_convert_goal_code_model_7_0_i26);
MR_def_label(ml_backend__ml_code_gen__ml_gen_maybe_convert_goal_code_model_7_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, statement);
	MR_r2 = MR_sv(3);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ml_backend__ml_code_gen__ml_gen_maybe_convert_goal_code_model_7_0_i28);
MR_def_label(ml_backend__ml_code_gen__ml_gen_maybe_convert_goal_code_model_7_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_decr_sp_and_return(4);
MR_def_label(ml_backend__ml_code_gen__ml_gen_maybe_convert_goal_code_model_7_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,1)) {
		MR_GOTO_LAB(ml_backend__ml_code_gen__ml_gen_maybe_convert_goal_code_model_7_0_i29);
	}
	MR_r1 = MR_r4;
	MR_r2 = MR_r5;
	MR_proceed();
MR_def_label(ml_backend__ml_code_gen__ml_gen_maybe_convert_goal_code_model_7_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ml_code_gen.m", 13);
	MR_r2 = (MR_Word) MR_string_const("ml_gen_maybe_convert_goal_code_model: nondet in semi", 52);
	MR_np_tailcall_ent(require__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;
MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);
MR_decl_entry(ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_0);
MR_decl_entry(fn__check_hlds__type_util__check_dummy_type_2_0);
MR_decl_entry(fn__ml_backend__ml_code_util__ml_gen_var_name_2_0);
MR_decl_entry(ml_backend__ml_code_util__ml_gen_var_decl_6_0);

MR_BEGIN_MODULE(ml_backend__ml_code_gen_module2)
	MR_init_entry1(ml_backend__ml_code_gen__ml_gen_local_var_decls_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_code_gen__ml_gen_local_var_decls_7_0);
	MR_init_label9(ml_backend__ml_code_gen__ml_gen_local_var_decls_7_0,28,3,5,6,7,9,11,12,13)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ml_gen_local_var_decls'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ml_backend__ml_code_gen__ml_gen_local_var_decls_7_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
MR_def_label(ml_backend__ml_code_gen__ml_gen_local_var_decls_7_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(ml_backend__ml_code_gen__ml_gen_local_var_decls_7_0_i3);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r5;
	MR_decr_sp_and_return(8);
MR_def_label(ml_backend__ml_code_gen__ml_gen_local_var_decls_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r5;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(5) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(6) = MR_tfield(1, MR_tempr1, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(5);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		ml_backend__ml_code_gen__ml_gen_local_var_decls_7_0_i5);
MR_def_label(ml_backend__ml_code_gen__ml_gen_local_var_decls_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_0,
		ml_backend__ml_code_gen__ml_gen_local_var_decls_7_0_i6);
MR_def_label(ml_backend__ml_code_gen__ml_gen_local_var_decls_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(fn__check_hlds__type_util__check_dummy_type_2_0,
		ml_backend__ml_code_gen__ml_gen_local_var_decls_7_0_i7);
MR_def_label(ml_backend__ml_code_gen__ml_gen_local_var_decls_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ml_backend__ml_code_gen__ml_gen_local_var_decls_7_0_i9);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(4);
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(ml_backend__ml_code_gen__ml_gen_local_var_decls_7_0_i28);
MR_def_label(ml_backend__ml_code_gen__ml_gen_local_var_decls_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(fn__ml_backend__ml_code_util__ml_gen_var_name_2_0,
		ml_backend__ml_code_gen__ml_gen_local_var_decls_7_0_i11);
MR_def_label(ml_backend__ml_code_gen__ml_gen_local_var_decls_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_var_decl_6_0,
		ml_backend__ml_code_gen__ml_gen_local_var_decls_7_0_i12);
MR_def_label(ml_backend__ml_code_gen__ml_gen_local_var_decls_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_tempr2;
	}
	MR_np_localcall_lab(ml_backend__ml_code_gen__ml_gen_local_var_decls_7_0,
		ml_backend__ml_code_gen__ml_gen_local_var_decls_7_0_i13);
MR_def_label(ml_backend__ml_code_gen__ml_gen_local_var_decls_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(8);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__hlds__hlds_goal__goal_get_nonlocals_1_0);
MR_decl_entry(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);

MR_BEGIN_MODULE(ml_backend__ml_code_gen_module3)
	MR_init_entry1(ml_backend__ml_code_gen__goals_find_subgoal_nonlocals_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_code_gen__goals_find_subgoal_nonlocals_3_0);
	MR_init_label4(ml_backend__ml_code_gen__goals_find_subgoal_nonlocals_3_0,15,3,4,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'goals_find_subgoal_nonlocals'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ml_code_gen__goals_find_subgoal_nonlocals_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(ml_backend__ml_code_gen__goals_find_subgoal_nonlocals_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ml_backend__ml_code_gen__goals_find_subgoal_nonlocals_3_0_i3);
	}
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(3);
MR_def_label(ml_backend__ml_code_gen__goals_find_subgoal_nonlocals_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_get_nonlocals_1_0,
		ml_backend__ml_code_gen__goals_find_subgoal_nonlocals_3_0_i4);
MR_def_label(ml_backend__ml_code_gen__goals_find_subgoal_nonlocals_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		ml_backend__ml_code_gen__goals_find_subgoal_nonlocals_3_0_i6);
MR_def_label(ml_backend__ml_code_gen__goals_find_subgoal_nonlocals_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(ml_backend__ml_code_gen__goals_find_subgoal_nonlocals_3_0_i15);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_code_gen_module4)
	MR_init_entry1(ml_backend__ml_code_gen__cases_find_subgoal_nonlocals_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_code_gen__cases_find_subgoal_nonlocals_3_0);
	MR_init_label4(ml_backend__ml_code_gen__cases_find_subgoal_nonlocals_3_0,15,3,4,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'cases_find_subgoal_nonlocals'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ml_code_gen__cases_find_subgoal_nonlocals_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(ml_backend__ml_code_gen__cases_find_subgoal_nonlocals_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ml_backend__ml_code_gen__cases_find_subgoal_nonlocals_3_0_i3);
	}
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(3);
MR_def_label(ml_backend__ml_code_gen__cases_find_subgoal_nonlocals_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_tfield(0, MR_tfield(1, MR_r1, 0), 2);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_get_nonlocals_1_0,
		ml_backend__ml_code_gen__cases_find_subgoal_nonlocals_3_0_i4);
MR_def_label(ml_backend__ml_code_gen__cases_find_subgoal_nonlocals_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		ml_backend__ml_code_gen__cases_find_subgoal_nonlocals_3_0_i6);
MR_def_label(ml_backend__ml_code_gen__cases_find_subgoal_nonlocals_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(ml_backend__ml_code_gen__cases_find_subgoal_nonlocals_3_0_i15);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_foreign_arg_0;
MR_decl_entry(fn__list__map_2_0);
MR_decl_entry(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_105_115_116_95_116_111_95_115_101_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_1_0);
MR_decl_entry(fn__set__init_0_0);

MR_BEGIN_MODULE(ml_backend__ml_code_gen_module5)
	MR_init_entry1(ml_backend__ml_code_gen__goal_expr_find_subgoal_nonlocals_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_code_gen__goal_expr_find_subgoal_nonlocals_2_0);
	MR_init_label10(ml_backend__ml_code_gen__goal_expr_find_subgoal_nonlocals_2_0,6,8,9,3,11,17,15,21,103,24)
	MR_init_label10(ml_backend__ml_code_gen__goal_expr_find_subgoal_nonlocals_2_0,19,39,40,41,42,43,44,34,46,48)
	MR_init_label10(ml_backend__ml_code_gen__goal_expr_find_subgoal_nonlocals_2_0,51,55,53,59,64,68,212,77,208,79)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'goal_expr_find_subgoal_nonlocals'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ml_code_gen__goal_expr_find_subgoal_nonlocals_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,0)) {
		MR_GOTO_LAB(ml_backend__ml_code_gen__goal_expr_find_subgoal_nonlocals_2_0_i3);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(3, MR_r1, 5);
	MR_sv(2) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(0,1,0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, foreign_arg);
	MR_r2 = MR_sv(3);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_r4 = MR_tfield(3, MR_tempr1, 4);
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		ml_backend__ml_code_gen__goal_expr_find_subgoal_nonlocals_2_0_i6);
MR_def_label(ml_backend__ml_code_gen__goal_expr_find_subgoal_nonlocals_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, foreign_arg);
	MR_r2 = MR_sv(3);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,3,1);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		ml_backend__ml_code_gen__goal_expr_find_subgoal_nonlocals_2_0_i8);
MR_def_label(ml_backend__ml_code_gen__goal_expr_find_subgoal_nonlocals_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ml_backend__ml_code_gen__goal_expr_find_subgoal_nonlocals_2_0_i9);
MR_def_label(ml_backend__ml_code_gen__goal_expr_find_subgoal_nonlocals_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_105_115_116_95_116_111_95_115_101_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_1_0);
	}
MR_def_label(ml_backend__ml_code_gen__goal_expr_find_subgoal_nonlocals_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,1)) {
		MR_GOTO_LAB(ml_backend__ml_code_gen__goal_expr_find_subgoal_nonlocals_2_0_i11);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(3, MR_r1, 2);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_np_call_localret_ent(fn__set__init_0_0,
		ml_backend__ml_code_gen__goal_expr_find_subgoal_nonlocals_2_0_i17);
MR_def_label(ml_backend__ml_code_gen__goal_expr_find_subgoal_nonlocals_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,2)) {
		MR_GOTO_LAB(ml_backend__ml_code_gen__goal_expr_find_subgoal_nonlocals_2_0_i15);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(3, MR_r1, 1);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_np_call_localret_ent(fn__set__init_0_0,
		ml_backend__ml_code_gen__goal_expr_find_subgoal_nonlocals_2_0_i17);
MR_def_label(ml_backend__ml_code_gen__goal_expr_find_subgoal_nonlocals_2_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(ml_backend__ml_code_gen__goals_find_subgoal_nonlocals_3_0);
	}
MR_def_label(ml_backend__ml_code_gen__goal_expr_find_subgoal_nonlocals_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(ml_backend__ml_code_gen__goal_expr_find_subgoal_nonlocals_2_0_i19);
	}
	MR_r4 = MR_tfield(2, MR_r1, 0);
	if (MR_PTAG_TESTR(MR_r4,3)) {
		MR_GOTO_LAB(ml_backend__ml_code_gen__goal_expr_find_subgoal_nonlocals_2_0_i21);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r3 = MR_tfield(2, MR_tempr1, 1);
	MR_np_tailcall_ent(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_105_115_116_95_116_111_95_115_101_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_1_0);
	}
MR_def_label(ml_backend__ml_code_gen__goal_expr_find_subgoal_nonlocals_2_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r4,1)) {
		MR_GOTO_LAB(ml_backend__ml_code_gen__goal_expr_find_subgoal_nonlocals_2_0_i24);
	}
MR_def_label(ml_backend__ml_code_gen__goal_expr_find_subgoal_nonlocals_2_0,103)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_mask_field(MR_r4, 0);
	MR_tfield(1, MR_tempr1, 1) = MR_tfield(2, MR_r1, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_np_tailcall_ent(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_105_115_116_95_116_111_95_115_101_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_1_0);
	}
MR_def_label(ml_backend__ml_code_gen__goal_expr_find_subgoal_nonlocals_2_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r4,2)) {
		MR_GOTO_LAB(ml_backend__ml_code_gen__goal_expr_find_subgoal_nonlocals_2_0_i103);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r3 = MR_tfield(2, MR_tempr1, 1);
	MR_np_tailcall_ent(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_105_115_116_95_116_111_95_115_101_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_1_0);
	}
MR_def_label(ml_backend__ml_code_gen__goal_expr_find_subgoal_nonlocals_2_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,6)) {
		MR_GOTO_LAB(ml_backend__ml_code_gen__goal_expr_find_subgoal_nonlocals_2_0_i34);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tfield(3, MR_r1, 4);
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(3, MR_r1, 3);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_sv(1) = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tfield(3, MR_r1, 2);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r1 = MR_sv(3);
	}
	MR_np_call_localret_ent(fn__set__init_0_0,
		ml_backend__ml_code_gen__goal_expr_find_subgoal_nonlocals_2_0_i39);
MR_def_label(ml_backend__ml_code_gen__goal_expr_find_subgoal_nonlocals_2_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(1, MR_r2, 1);
	MR_r1 = MR_tfield(1, MR_r2, 0);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_get_nonlocals_1_0,
		ml_backend__ml_code_gen__goal_expr_find_subgoal_nonlocals_2_0_i40);
MR_def_label(ml_backend__ml_code_gen__goal_expr_find_subgoal_nonlocals_2_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		ml_backend__ml_code_gen__goal_expr_find_subgoal_nonlocals_2_0_i41);
MR_def_label(ml_backend__ml_code_gen__goal_expr_find_subgoal_nonlocals_2_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_tfield(1, MR_r2, 1);
	MR_r1 = MR_tfield(1, MR_r2, 0);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_get_nonlocals_1_0,
		ml_backend__ml_code_gen__goal_expr_find_subgoal_nonlocals_2_0_i42);
MR_def_label(ml_backend__ml_code_gen__goal_expr_find_subgoal_nonlocals_2_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		ml_backend__ml_code_gen__goal_expr_find_subgoal_nonlocals_2_0_i43);
MR_def_label(ml_backend__ml_code_gen__goal_expr_find_subgoal_nonlocals_2_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tfield(1, MR_sv(2), 0);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_get_nonlocals_1_0,
		ml_backend__ml_code_gen__goal_expr_find_subgoal_nonlocals_2_0_i44);
MR_def_label(ml_backend__ml_code_gen__goal_expr_find_subgoal_nonlocals_2_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr1;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);
	}
MR_def_label(ml_backend__ml_code_gen__goal_expr_find_subgoal_nonlocals_2_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,4)) {
		MR_GOTO_LAB(ml_backend__ml_code_gen__goal_expr_find_subgoal_nonlocals_2_0_i46);
	}
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_tailcall_ent(fn__hlds__hlds_goal__goal_get_nonlocals_1_0);
MR_def_label(ml_backend__ml_code_gen__goal_expr_find_subgoal_nonlocals_2_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(ml_backend__ml_code_gen__goal_expr_find_subgoal_nonlocals_2_0_i48);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r3 = MR_tfield(1, MR_tempr1, 2);
	MR_np_tailcall_ent(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_105_115_116_95_116_111_95_115_101_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_1_0);
	}
MR_def_label(ml_backend__ml_code_gen__goal_expr_find_subgoal_nonlocals_2_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,5)) {
		MR_GOTO_LAB(ml_backend__ml_code_gen__goal_expr_find_subgoal_nonlocals_2_0_i51);
	}
	MR_r1 = MR_tfield(3, MR_r1, 2);
	MR_np_tailcall_ent(fn__hlds__hlds_goal__goal_get_nonlocals_1_0);
MR_def_label(ml_backend__ml_code_gen__goal_expr_find_subgoal_nonlocals_2_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,3)) {
		MR_GOTO_LAB(ml_backend__ml_code_gen__goal_expr_find_subgoal_nonlocals_2_0_i53);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(3, MR_r1, 3);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_np_call_localret_ent(fn__set__init_0_0,
		ml_backend__ml_code_gen__goal_expr_find_subgoal_nonlocals_2_0_i55);
MR_def_label(ml_backend__ml_code_gen__goal_expr_find_subgoal_nonlocals_2_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(ml_backend__ml_code_gen__cases_find_subgoal_nonlocals_3_0);
	}
MR_def_label(ml_backend__ml_code_gen__goal_expr_find_subgoal_nonlocals_2_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(ml_backend__ml_code_gen__goal_expr_find_subgoal_nonlocals_2_0_i208);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_tfield(0, MR_r1, 3);
	MR_r4 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,2)) {
		MR_GOTO_LAB(ml_backend__ml_code_gen__goal_expr_find_subgoal_nonlocals_2_0_i59);
	}
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tfield(2, MR_tempr1, 1);
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_tfield(2, MR_tempr1, 0);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_np_tailcall_ent(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_105_115_116_95_116_111_95_115_101_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_1_0);
	}
MR_def_label(ml_backend__ml_code_gen__goal_expr_find_subgoal_nonlocals_2_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r4,0)) {
		MR_GOTO_LAB(ml_backend__ml_code_gen__goal_expr_find_subgoal_nonlocals_2_0_i64);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tempr2 = MR_r4;
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(0, MR_tempr2, 0);
	MR_tfield(1, MR_tempr1, 1) = MR_tfield(0, MR_tempr2, 2);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_np_tailcall_ent(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_105_115_116_95_116_111_95_115_101_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_1_0);
	}
MR_def_label(ml_backend__ml_code_gen__goal_expr_find_subgoal_nonlocals_2_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r4,1)) {
		MR_GOTO_LAB(ml_backend__ml_code_gen__goal_expr_find_subgoal_nonlocals_2_0_i68);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tempr2 = MR_r4;
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(1, MR_tempr2, 0);
	MR_tfield(1, MR_tempr1, 1) = MR_tfield(1, MR_tempr2, 2);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_np_tailcall_ent(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_105_115_116_95_116_111_95_115_101_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_1_0);
	}
MR_def_label(ml_backend__ml_code_gen__goal_expr_find_subgoal_nonlocals_2_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r4,3,0)) {
		MR_GOTO_LAB(ml_backend__ml_code_gen__goal_expr_find_subgoal_nonlocals_2_0_i212);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tempr3 = MR_r4;
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(3, MR_tempr3, 2);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tfield(3, MR_tempr3, 1);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_np_tailcall_ent(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_105_115_116_95_116_111_95_115_101_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_1_0);
	}
MR_def_label(ml_backend__ml_code_gen__goal_expr_find_subgoal_nonlocals_2_0,212)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__ml_backend__ml_code_gen__this_file_0_0,
		ml_backend__ml_code_gen__goal_expr_find_subgoal_nonlocals_2_0_i77);
MR_def_label(ml_backend__ml_code_gen__goal_expr_find_subgoal_nonlocals_2_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("goal_expr_find_subgoal_nonlocals", 32);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(require__unexpected_2_0);
MR_def_label(ml_backend__ml_code_gen__goal_expr_find_subgoal_nonlocals_2_0,208)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__ml_backend__ml_code_gen__this_file_0_0,
		ml_backend__ml_code_gen__goal_expr_find_subgoal_nonlocals_2_0_i79);
MR_def_label(ml_backend__ml_code_gen__goal_expr_find_subgoal_nonlocals_2_0,79)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("goal_expr_find_subgoal_nonlocals: shorthand", 43);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(require__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__hlds__hlds_goal__goal_info_get_context_1_0);
MR_decl_entry(fn__ml_backend__ml_code_util__ml_gen_block_3_0);

MR_BEGIN_MODULE(ml_backend__ml_code_gen_module6)
	MR_init_entry1(ml_backend__ml_code_gen__ml_gen_goal_as_block_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_code_gen__ml_gen_goal_as_block_5_0);
	MR_init_label3(ml_backend__ml_code_gen__ml_gen_goal_as_block_5_0,2,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ml_gen_goal_as_block'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ml_backend__ml_code_gen__ml_gen_goal_as_block_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(ml_backend__ml_code_gen__ml_gen_goal_6_0,
		ml_backend__ml_code_gen__ml_gen_goal_as_block_5_0_i2);
MR_def_label(ml_backend__ml_code_gen__ml_gen_goal_as_block_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r1 = MR_tfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_context_1_0,
		ml_backend__ml_code_gen__ml_gen_goal_as_block_5_0_i3);
MR_def_label(ml_backend__ml_code_gen__ml_gen_goal_as_block_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__ml_backend__ml_code_util__ml_gen_block_3_0,
		ml_backend__ml_code_gen__ml_gen_goal_as_block_5_0_i4);
MR_def_label(ml_backend__ml_code_gen__ml_gen_goal_as_block_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(ml_backend__ml_gen_info__ml_gen_info_get_var_types_2_0);
MR_decl_entry(fn__hlds__hlds_goal__goal_info_get_nonlocals_1_0);
MR_decl_entry(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_105_102_102_101_114_101_110_99_101_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);
MR_decl_entry(set__to_sorted_list_2_0);
MR_decl_entry(fn__parse_tree__prog_type__put_typeinfo_vars_first_2_0);
MR_decl_entry(ml_backend__ml_gen_info__ml_gen_info_get_varset_2_0);
MR_decl_entry(fn__hlds__code_model__goal_info_get_code_model_1_0);
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_defn_0;

MR_BEGIN_MODULE(ml_backend__ml_code_gen_module7)
	MR_init_entry1(ml_backend__ml_code_gen__ml_gen_goal_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_code_gen__ml_gen_goal_6_0);
	MR_init_label10(ml_backend__ml_code_gen__ml_gen_goal_6_0,2,3,4,5,7,8,10,21,12,9)
	MR_init_label6(ml_backend__ml_code_gen__ml_gen_goal_6_0,14,15,16,17,18,19)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ml_gen_goal'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ml_backend__ml_code_gen__ml_gen_goal_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(0, MR_r2, 0);
	MR_sv(3) = MR_tfield(0, MR_r2, 1);
	MR_sv(7) = MR_r3;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_context_1_0,
		ml_backend__ml_code_gen__ml_gen_goal_6_0_i2);
MR_def_label(ml_backend__ml_code_gen__ml_gen_goal_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(ml_backend__ml_gen_info__ml_gen_info_get_var_types_2_0,
		ml_backend__ml_code_gen__ml_gen_goal_6_0_i3);
MR_def_label(ml_backend__ml_code_gen__ml_gen_goal_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ml_backend__ml_code_gen__goal_expr_find_subgoal_nonlocals_2_0,
		ml_backend__ml_code_gen__ml_gen_goal_6_0_i4);
MR_def_label(ml_backend__ml_code_gen__ml_gen_goal_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_nonlocals_1_0,
		ml_backend__ml_code_gen__ml_gen_goal_6_0_i5);
MR_def_label(ml_backend__ml_code_gen__ml_gen_goal_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_105_102_102_101_114_101_110_99_101_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		ml_backend__ml_code_gen__ml_gen_goal_6_0_i7);
MR_def_label(ml_backend__ml_code_gen__ml_gen_goal_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(set__to_sorted_list_2_0,
		ml_backend__ml_code_gen__ml_gen_goal_6_0_i8);
MR_def_label(ml_backend__ml_code_gen__ml_gen_goal_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ml_backend__ml_code_gen__ml_gen_goal_6_0_i10);
	}
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_GOTO_LAB(ml_backend__ml_code_gen__ml_gen_goal_6_0_i9);
MR_def_label(ml_backend__ml_code_gen__ml_gen_goal_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(1, MR_r1, 1);
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(ml_backend__ml_code_gen__ml_gen_goal_6_0_i12);
	}
MR_def_label(ml_backend__ml_code_gen__ml_gen_goal_6_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_GOTO_LAB(ml_backend__ml_code_gen__ml_gen_goal_6_0_i9);
MR_def_label(ml_backend__ml_code_gen__ml_gen_goal_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(fn__parse_tree__prog_type__put_typeinfo_vars_first_2_0,
		ml_backend__ml_code_gen__ml_gen_goal_6_0_i21);
MR_def_label(ml_backend__ml_code_gen__ml_gen_goal_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_np_call_localret_ent(ml_backend__ml_gen_info__ml_gen_info_get_varset_2_0,
		ml_backend__ml_code_gen__ml_gen_goal_6_0_i14);
MR_def_label(ml_backend__ml_code_gen__ml_gen_goal_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(7);
	MR_np_call_localret_ent(ml_backend__ml_code_gen__ml_gen_local_var_decls_7_0,
		ml_backend__ml_code_gen__ml_gen_goal_6_0_i15);
MR_def_label(ml_backend__ml_code_gen__ml_gen_goal_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__hlds__code_model__goal_info_get_code_model_1_0,
		ml_backend__ml_code_gen__ml_gen_goal_6_0_i16);
MR_def_label(ml_backend__ml_code_gen__ml_gen_goal_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(6);
	}
	MR_np_call_localret_ent(ml_backend__ml_code_gen__ml_gen_goal_expr_8_0,
		ml_backend__ml_code_gen__ml_gen_goal_6_0_i17);
MR_def_label(ml_backend__ml_code_gen__ml_gen_goal_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_sv(4);
	MR_r4 = MR_tempr2;
	MR_r5 = MR_tempr3;
	}
	MR_np_call_localret_ent(ml_backend__ml_code_gen__ml_gen_maybe_convert_goal_code_model_7_0,
		ml_backend__ml_code_gen__ml_gen_goal_6_0_i18);
MR_def_label(ml_backend__ml_code_gen__ml_gen_goal_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ml_backend__ml_code_gen__ml_gen_goal_6_0_i19);
MR_def_label(ml_backend__ml_code_gen__ml_gen_goal_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(ml_backend__ml_gen_info__ml_gen_info_get_const_var_map_2_0);
MR_decl_entry(ml_backend__ml_gen_info__ml_gen_info_set_const_var_map_3_0);

MR_BEGIN_MODULE(ml_backend__ml_code_gen_module8)
	MR_init_entry1(ml_backend__ml_code_gen__ml_gen_goal_as_branch_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_code_gen__ml_gen_goal_as_branch_6_0);
	MR_init_label3(ml_backend__ml_code_gen__ml_gen_goal_as_branch_6_0,2,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ml_gen_goal_as_branch'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ml_backend__ml_code_gen__ml_gen_goal_as_branch_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__ml_gen_info__ml_gen_info_get_const_var_map_2_0,
		ml_backend__ml_code_gen__ml_gen_goal_as_branch_6_0_i2);
MR_def_label(ml_backend__ml_code_gen__ml_gen_goal_as_branch_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(ml_backend__ml_code_gen__ml_gen_goal_6_0,
		ml_backend__ml_code_gen__ml_gen_goal_as_branch_6_0_i3);
MR_def_label(ml_backend__ml_code_gen__ml_gen_goal_as_branch_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_r3;
	}
	MR_np_call_localret_ent(ml_backend__ml_gen_info__ml_gen_info_set_const_var_map_3_0,
		ml_backend__ml_code_gen__ml_gen_goal_as_branch_6_0_i4);
MR_def_label(ml_backend__ml_code_gen__ml_gen_goal_as_branch_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(ml_backend__ml_foreign_proc_gen__ml_gen_ordinary_pragma_foreign_proc_12_0);
MR_decl_entry(ml_backend__ml_foreign_proc_gen__ml_gen_trace_runtime_cond_6_0);
MR_decl_entry(ml_backend__ml_disj_gen__ml_gen_disj_7_0);
MR_decl_entry(hlds__code_model__determinism_to_code_model_2_0);
MR_decl_entry(require__expect_3_0);
MR_decl_entry(ml_backend__ml_call_gen__ml_gen_generic_call_9_0);
MR_decl_entry(ml_backend__ml_code_util__ml_gen_var_list_3_0);
MR_decl_entry(fn__ml_backend__ml_code_util__ml_gen_var_names_2_0);
MR_decl_entry(ml_backend__ml_code_util__ml_variable_types_3_0);
MR_decl_entry(ml_backend__ml_call_gen__ml_gen_call_12_0);
MR_decl_entry(ml_backend__ml_call_gen__ml_gen_builtin_9_0);
MR_decl_entry(ml_backend__ml_unify_gen__ml_gen_ground_term_5_0);
MR_decl_entry(ml_backend__ml_commit_gen__ml_gen_commit_7_0);
MR_decl_entry(ml_backend__ml_switch_gen__ml_gen_switch_10_0);
MR_decl_entry(ml_backend__ml_unify_gen__ml_gen_unification_6_0);

MR_BEGIN_MODULE(ml_backend__ml_code_gen_module9)
	MR_init_entry1(ml_backend__ml_code_gen__ml_gen_goal_expr_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_code_gen__ml_gen_goal_expr_8_0);
	MR_init_label10(ml_backend__ml_code_gen__ml_gen_goal_expr_8_0,5,4,7,3,10,12,15,17,14,19)
	MR_init_label10(ml_backend__ml_code_gen__ml_gen_goal_expr_8_0,21,26,27,28,29,25,23,33,32,39)
	MR_init_label2(ml_backend__ml_code_gen__ml_gen_goal_expr_8_0,42,41)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ml_gen_goal_expr'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ml_code_gen__ml_gen_goal_expr_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,0)) {
		MR_GOTO_LAB(ml_backend__ml_code_gen__ml_gen_goal_expr_8_0_i3);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(3, MR_r1, 7);
	MR_r11 = MR_tempr1;
	MR_r10 = MR_tfield(0, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_r10,0,0)) {
		MR_GOTO_LAB(ml_backend__ml_code_gen__ml_gen_goal_expr_8_0_i5);
	}
	MR_tempr2 = MR_r1;
	MR_r12 = MR_tempr2;
	MR_r1 = MR_r2;
	MR_r2 = MR_tfield(3, MR_tempr2, 1);
	MR_r13 = MR_r5;
	MR_r5 = MR_tfield(3, MR_tempr2, 4);
	MR_r6 = MR_tfield(3, MR_tempr2, 5);
	MR_r10 = MR_tfield(3, MR_tempr2, 6);
	MR_r7 = MR_tfield(0, MR_tempr1, 0);
	MR_r8 = MR_r3;
	MR_r9 = MR_r13;
	MR_r3 = MR_tfield(3, MR_tempr2, 2);
	MR_r4 = MR_tfield(3, MR_tempr2, 3);
	MR_GOTO_LAB(ml_backend__ml_code_gen__ml_gen_goal_expr_8_0_i4);
	}
MR_def_label(ml_backend__ml_code_gen__ml_gen_goal_expr_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_tfield(3, MR_tempr1, 1);
	MR_tempr2 = MR_r5;
	MR_r5 = MR_tfield(3, MR_tempr1, 4);
	MR_r6 = MR_tfield(3, MR_tempr1, 5);
	MR_tempr3 = MR_r10;
	MR_r10 = MR_tfield(3, MR_tempr1, 6);
	MR_r7 = MR_tfield(0, MR_r11, 0);
	MR_r8 = MR_tfield(1, MR_tempr3, 0);
	MR_r9 = MR_tempr2;
	MR_r3 = MR_tfield(3, MR_tempr1, 2);
	MR_r4 = MR_tfield(3, MR_tempr1, 3);
	}
MR_def_label(ml_backend__ml_code_gen__ml_gen_goal_expr_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r10,0,0)) {
		MR_GOTO_LAB(ml_backend__ml_code_gen__ml_gen_goal_expr_8_0_i7);
	}
	MR_np_tailcall_ent(ml_backend__ml_foreign_proc_gen__ml_gen_ordinary_pragma_foreign_proc_12_0);
MR_def_label(ml_backend__ml_code_gen__ml_gen_goal_expr_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(1, MR_r10, 0);
	MR_r2 = MR_r8;
	MR_r3 = MR_r9;
	MR_np_tailcall_ent(ml_backend__ml_foreign_proc_gen__ml_gen_trace_runtime_cond_6_0);
MR_def_label(ml_backend__ml_code_gen__ml_gen_goal_expr_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,1)) {
		MR_GOTO_LAB(ml_backend__ml_code_gen__ml_gen_goal_expr_8_0_i10);
	}
	MR_r1 = MR_tfield(3, MR_r1, 2);
	MR_r4 = MR_r5;
	MR_np_tailcall_ent(ml_backend__ml_code_gen__ml_gen_conj_7_0);
MR_def_label(ml_backend__ml_code_gen__ml_gen_goal_expr_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,2)) {
		MR_GOTO_LAB(ml_backend__ml_code_gen__ml_gen_goal_expr_8_0_i12);
	}
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_r1 = MR_tfield(3, MR_r1, 1);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r4;
	MR_tempr2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(ml_backend__ml_disj_gen__ml_gen_disj_7_0,
		ml_backend__ml_code_gen__ml_gen_goal_expr_8_0_i42);
MR_def_label(ml_backend__ml_code_gen__ml_gen_goal_expr_8_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(ml_backend__ml_code_gen__ml_gen_goal_expr_8_0_i14);
	}
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_tfield(2, MR_r1, 0);
	MR_sv(4) = MR_tfield(2, MR_r1, 1);
	MR_sv(5) = MR_tfield(2, MR_r1, 2);
	MR_sv(6) = MR_tfield(2, MR_r1, 3);
	MR_sv(7) = MR_r5;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(hlds__code_model__determinism_to_code_model_2_0,
		ml_backend__ml_code_gen__ml_gen_goal_expr_8_0_i15);
MR_def_label(ml_backend__ml_code_gen__ml_gen_goal_expr_8_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(2,2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__ml_code_gen__IntroducedFrom__pred__ml_gen_goal_expr__622__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("ml_code_gen.m", 13);
	MR_r3 = (MR_Word) MR_string_const("ml_gen_generic_call: code model mismatch", 40);
	}
	MR_np_call_localret_ent(require__expect_3_0,
		ml_backend__ml_code_gen__ml_gen_goal_expr_8_0_i17);
MR_def_label(ml_backend__ml_code_gen__ml_gen_goal_expr_8_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(2);
	MR_r6 = MR_sv(7);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(ml_backend__ml_call_gen__ml_gen_generic_call_9_0);
MR_def_label(ml_backend__ml_code_gen__ml_gen_goal_expr_8_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,6)) {
		MR_GOTO_LAB(ml_backend__ml_code_gen__ml_gen_goal_expr_8_0_i19);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_tfield(3, MR_tempr1, 2);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_tfield(3, MR_tempr1, 3);
	MR_r4 = MR_tfield(3, MR_tempr1, 4);
	MR_tempr1 = MR_r5;
	MR_r5 = MR_tempr2;
	MR_r6 = MR_tempr1;
	MR_np_tailcall_ent(ml_backend__ml_code_gen__ml_gen_ite_9_0);
	}
MR_def_label(ml_backend__ml_code_gen__ml_gen_goal_expr_8_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,4)) {
		MR_GOTO_LAB(ml_backend__ml_code_gen__ml_gen_goal_expr_8_0_i21);
	}
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_r4 = MR_r5;
	MR_np_tailcall_ent(ml_backend__ml_code_gen__ml_gen_negation_7_0);
MR_def_label(ml_backend__ml_code_gen__ml_gen_goal_expr_8_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(ml_backend__ml_code_gen__ml_gen_goal_expr_8_0_i23);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(1, MR_r1, 3);
	if (MR_INT_NE(MR_tempr1,2)) {
		MR_GOTO_LAB(ml_backend__ml_code_gen__ml_gen_goal_expr_8_0_i25);
	}
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_tfield(1, MR_r1, 0);
	MR_sv(4) = MR_tfield(1, MR_r1, 1);
	MR_sv(5) = MR_tfield(1, MR_r1, 2);
	MR_tempr2 = MR_r5;
	MR_sv(7) = MR_tempr2;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_sv(5);
	}
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_var_list_3_0,
		ml_backend__ml_code_gen__ml_gen_goal_expr_8_0_i26);
MR_def_label(ml_backend__ml_code_gen__ml_gen_goal_expr_8_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(ml_backend__ml_gen_info__ml_gen_info_get_varset_2_0,
		ml_backend__ml_code_gen__ml_gen_goal_expr_8_0_i27);
MR_def_label(ml_backend__ml_code_gen__ml_gen_goal_expr_8_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(fn__ml_backend__ml_code_util__ml_gen_var_names_2_0,
		ml_backend__ml_code_gen__ml_gen_goal_expr_8_0_i28);
MR_def_label(ml_backend__ml_code_gen__ml_gen_goal_expr_8_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_variable_types_3_0,
		ml_backend__ml_code_gen__ml_gen_goal_expr_8_0_i29);
MR_def_label(ml_backend__ml_code_gen__ml_gen_goal_expr_8_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_tempr1;
	MR_r6 = MR_sv(1);
	MR_r7 = MR_sv(2);
	MR_r8 = (MR_Integer) 0;
	MR_r9 = MR_sv(7);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(ml_backend__ml_call_gen__ml_gen_call_12_0);
	}
MR_def_label(ml_backend__ml_code_gen__ml_gen_goal_expr_8_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tfield(1, MR_tempr1, 1);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_tfield(1, MR_tempr1, 2);
	MR_r4 = MR_tempr2;
	MR_tempr1 = MR_r5;
	MR_r5 = MR_tempr3;
	MR_r6 = MR_tempr1;
	MR_np_tailcall_ent(ml_backend__ml_call_gen__ml_gen_builtin_9_0);
	}
MR_def_label(ml_backend__ml_code_gen__ml_gen_goal_expr_8_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,5)) {
		MR_GOTO_LAB(ml_backend__ml_code_gen__ml_gen_goal_expr_8_0_i32);
	}
	MR_r4 = MR_tfield(3, MR_r1, 2);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(3, MR_r1, 1);
	if (MR_RTAGS_TESTR(MR_tempr1,3,4)) {
		MR_GOTO_LAB(ml_backend__ml_code_gen__ml_gen_goal_expr_8_0_i33);
	}
	MR_tempr2 = MR_tfield(3, MR_tempr1, 2);
	if (MR_INT_NE(MR_tempr2,0)) {
		MR_GOTO_LAB(ml_backend__ml_code_gen__ml_gen_goal_expr_8_0_i33);
	}
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_r1 = MR_tfield(3, MR_tempr1, 1);
	MR_r2 = MR_r4;
	MR_r3 = MR_r5;
	}
	MR_np_call_localret_ent(ml_backend__ml_unify_gen__ml_gen_ground_term_5_0,
		ml_backend__ml_code_gen__ml_gen_goal_expr_8_0_i42);
MR_def_label(ml_backend__ml_code_gen__ml_gen_goal_expr_8_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r4;
	MR_r4 = MR_r5;
	MR_np_tailcall_ent(ml_backend__ml_commit_gen__ml_gen_commit_7_0);
MR_def_label(ml_backend__ml_code_gen__ml_gen_goal_expr_8_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,3)) {
		MR_GOTO_LAB(ml_backend__ml_code_gen__ml_gen_goal_expr_8_0_i39);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tfield(3, MR_tempr1, 2);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_tfield(3, MR_tempr1, 3);
	MR_tempr1 = MR_r4;
	MR_r4 = MR_tempr2;
	MR_tempr4 = MR_r5;
	MR_r5 = MR_tempr3;
	MR_r6 = MR_tempr1;
	MR_r7 = MR_tempr4;
	MR_np_tailcall_ent(ml_backend__ml_switch_gen__ml_gen_switch_10_0);
	}
MR_def_label(ml_backend__ml_code_gen__ml_gen_goal_expr_8_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(ml_backend__ml_code_gen__ml_gen_goal_expr_8_0_i41);
	}
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_r1 = MR_tfield(0, MR_r1, 3);
	MR_r4 = MR_r5;
	MR_np_call_localret_ent(ml_backend__ml_unify_gen__ml_gen_unification_6_0,
		ml_backend__ml_code_gen__ml_gen_goal_expr_8_0_i42);
MR_def_label(ml_backend__ml_code_gen__ml_gen_goal_expr_8_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_decr_sp_and_return(8);
	}
MR_def_label(ml_backend__ml_code_gen__ml_gen_goal_expr_8_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ml_code_gen.m", 13);
	MR_r2 = (MR_Word) MR_string_const("ml_gen_goal_expr: unexpected shorthand", 38);
	MR_np_tailcall_ent(require__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(ml_backend__ml_gen_info__ml_gen_info_new_cond_var_3_0);
MR_decl_entry(fn__ml_backend__ml_code_util__ml_gen_cond_var_decl_2_0);
MR_decl_entry(ml_backend__ml_code_util__ml_gen_set_cond_var_5_0);
MR_decl_entry(ml_backend__ml_code_util__ml_gen_new_func_label_5_0);
MR_decl_entry(ml_backend__ml_code_util__ml_get_env_ptr_2_0);
MR_decl_entry(ml_backend__ml_gen_info__ml_gen_info_push_success_cont_3_0);
MR_decl_entry(ml_backend__ml_gen_info__ml_gen_info_pop_success_cont_2_0);
MR_decl_entry(ml_backend__ml_code_util__ml_gen_nondet_label_func_5_0);
MR_decl_entry(ml_backend__ml_code_util__ml_gen_test_cond_var_3_0);

MR_BEGIN_MODULE(ml_backend__ml_code_gen_module10)
	MR_init_entry1(ml_backend__ml_code_gen__ml_gen_ite_9_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_code_gen__ml_gen_ite_9_0);
	MR_init_label10(ml_backend__ml_code_gen__ml_gen_ite_9_0,2,5,6,4,10,11,12,13,15,16)
	MR_init_label10(ml_backend__ml_code_gen__ml_gen_ite_9_0,17,19,20,21,22,24,25,29,31,32)
	MR_init_label10(ml_backend__ml_code_gen__ml_gen_ite_9_0,33,34,35,42,9,46,47,48,49,50)
	MR_init_label4(ml_backend__ml_code_gen__ml_gen_ite_9_0,51,52,55,58)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ml_gen_ite'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ml_code_gen__ml_gen_ite_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(14);
	MR_sv(14) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r6;
	MR_r1 = MR_tfield(0, MR_r2, 1);
	MR_np_call_localret_ent(fn__hlds__code_model__goal_info_get_code_model_1_0,
		ml_backend__ml_code_gen__ml_gen_ite_9_0_i2);
MR_def_label(ml_backend__ml_code_gen__ml_gen_ite_9_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ml_backend__ml_code_gen__ml_gen_ite_9_0_i4);
	}
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(ml_backend__ml_code_gen__ml_gen_goal_as_block_5_0,
		ml_backend__ml_code_gen__ml_gen_ite_9_0_i5);
MR_def_label(ml_backend__ml_code_gen__ml_gen_ite_9_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(ml_backend__ml_code_gen__ml_gen_goal_as_block_5_0,
		ml_backend__ml_code_gen__ml_gen_ite_9_0_i6);
MR_def_label(ml_backend__ml_code_gen__ml_gen_ite_9_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_tempr1 = MR_r2;
	MR_r2 = MR_tempr2;
	MR_r3 = MR_tempr1;
	MR_decr_sp_and_return(14);
	}
MR_def_label(ml_backend__ml_code_gen__ml_gen_ite_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,2)) {
		MR_GOTO_LAB(ml_backend__ml_code_gen__ml_gen_ite_9_0_i9);
	}
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(ml_backend__ml_gen_info__ml_gen_info_get_const_var_map_2_0,
		ml_backend__ml_code_gen__ml_gen_ite_9_0_i10);
MR_def_label(ml_backend__ml_code_gen__ml_gen_ite_9_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(ml_backend__ml_gen_info__ml_gen_info_new_cond_var_3_0,
		ml_backend__ml_code_gen__ml_gen_ite_9_0_i11);
MR_def_label(ml_backend__ml_code_gen__ml_gen_ite_9_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_sv(8) = MR_r2;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_make_context_1_0,
		ml_backend__ml_code_gen__ml_gen_ite_9_0_i12);
MR_def_label(ml_backend__ml_code_gen__ml_gen_ite_9_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(fn__ml_backend__ml_code_util__ml_gen_cond_var_decl_2_0,
		ml_backend__ml_code_gen__ml_gen_ite_9_0_i13);
MR_def_label(ml_backend__ml_code_gen__ml_gen_ite_9_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(6);
	MR_r3 = (MR_Word) MR_TAG_COMMON(2,0,1);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_set_cond_var_5_0,
		ml_backend__ml_code_gen__ml_gen_ite_9_0_i15);
MR_def_label(ml_backend__ml_code_gen__ml_gen_ite_9_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(8);
	MR_sv(8) = MR_r1;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_new_func_label_5_0,
		ml_backend__ml_code_gen__ml_gen_ite_9_0_i16);
MR_def_label(ml_backend__ml_code_gen__ml_gen_ite_9_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_sv(10) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(11) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_get_env_ptr_2_0,
		ml_backend__ml_code_gen__ml_gen_ite_9_0_i17);
MR_def_label(ml_backend__ml_code_gen__ml_gen_ite_9_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(10);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tfield(0, MR_tempr1, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 3) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(11);
	}
	MR_np_call_localret_ent(ml_backend__ml_gen_info__ml_gen_info_push_success_cont_3_0,
		ml_backend__ml_code_gen__ml_gen_ite_9_0_i19);
MR_def_label(ml_backend__ml_code_gen__ml_gen_ite_9_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__ml_code_gen__ml_gen_goal_6_0,
		ml_backend__ml_code_gen__ml_gen_ite_9_0_i20);
MR_def_label(ml_backend__ml_code_gen__ml_gen_ite_9_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_sv(13) = MR_r2;
	MR_r1 = MR_r3;
	MR_np_call_localret_ent(ml_backend__ml_gen_info__ml_gen_info_pop_success_cont_2_0,
		ml_backend__ml_code_gen__ml_gen_ite_9_0_i21);
MR_def_label(ml_backend__ml_code_gen__ml_gen_ite_9_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = MR_tfield(0, MR_sv(3), 1);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_context_1_0,
		ml_backend__ml_code_gen__ml_gen_ite_9_0_i22);
MR_def_label(ml_backend__ml_code_gen__ml_gen_ite_9_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(6);
	MR_r3 = (MR_Word) MR_TAG_COMMON(2,0,0);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_set_cond_var_5_0,
		ml_backend__ml_code_gen__ml_gen_ite_9_0_i24);
MR_def_label(ml_backend__ml_code_gen__ml_gen_ite_9_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(10);
	}
	MR_np_call_localret_ent(ml_backend__ml_code_gen__ml_gen_goal_as_block_5_0,
		ml_backend__ml_code_gen__ml_gen_ite_9_0_i25);
MR_def_label(ml_backend__ml_code_gen__ml_gen_ite_9_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_sv(10) = MR_tempr3;
	MR_tfield(0, MR_tempr3, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr3, 1) = MR_tempr2;
	MR_sv(3) = MR_r2;
	MR_r1 = MR_sv(2);
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_make_context_1_0,
		ml_backend__ml_code_gen__ml_gen_ite_9_0_i29);
MR_def_label(ml_backend__ml_code_gen__ml_gen_ite_9_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(10);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_nondet_label_func_5_0,
		ml_backend__ml_code_gen__ml_gen_ite_9_0_i31);
MR_def_label(ml_backend__ml_code_gen__ml_gen_ite_9_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_test_cond_var_3_0,
		ml_backend__ml_code_gen__ml_gen_ite_9_0_i32);
MR_def_label(ml_backend__ml_code_gen__ml_gen_ite_9_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(12);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__ml_gen_info__ml_gen_info_set_const_var_map_3_0,
		ml_backend__ml_code_gen__ml_gen_ite_9_0_i33);
MR_def_label(ml_backend__ml_code_gen__ml_gen_ite_9_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__ml_code_gen__ml_gen_goal_as_block_5_0,
		ml_backend__ml_code_gen__ml_gen_ite_9_0_i34);
MR_def_label(ml_backend__ml_code_gen__ml_gen_ite_9_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(12);
	MR_np_call_localret_ent(ml_backend__ml_gen_info__ml_gen_info_set_const_var_map_3_0,
		ml_backend__ml_code_gen__ml_gen_ite_9_0_i35);
MR_def_label(ml_backend__ml_code_gen__ml_gen_ite_9_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(3,4,0);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 3);
	MR_tfield(2, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(2, MR_tempr2, 1) = MR_sv(1);
	MR_tfield(2, MR_tempr2, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_sv(1) = MR_tempr3;
	MR_tfield(0, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(0, MR_tempr3, 1) = MR_sv(7);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(5);
	MR_tfield(1, MR_r2, 1) = MR_sv(11);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr4, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ml_backend__ml_code_gen__ml_gen_ite_9_0_i42);
MR_def_label(ml_backend__ml_code_gen__ml_gen_ite_9_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(8);
	MR_tfield(1, MR_r2, 1) = MR_sv(13);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, statement);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ml_backend__ml_code_gen__ml_gen_ite_9_0_i58);
MR_def_label(ml_backend__ml_code_gen__ml_gen_ite_9_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(ml_backend__ml_gen_info__ml_gen_info_get_const_var_map_2_0,
		ml_backend__ml_code_gen__ml_gen_ite_9_0_i46);
MR_def_label(ml_backend__ml_code_gen__ml_gen_ite_9_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__ml_code_gen__ml_gen_goal_6_0,
		ml_backend__ml_code_gen__ml_gen_ite_9_0_i47);
MR_def_label(ml_backend__ml_code_gen__ml_gen_ite_9_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_sv(7) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(8) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_test_success_2_0,
		ml_backend__ml_code_gen__ml_gen_ite_9_0_i48);
MR_def_label(ml_backend__ml_code_gen__ml_gen_ite_9_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(8);
	}
	MR_np_call_localret_ent(ml_backend__ml_code_gen__ml_gen_goal_as_block_5_0,
		ml_backend__ml_code_gen__ml_gen_ite_9_0_i49);
MR_def_label(ml_backend__ml_code_gen__ml_gen_ite_9_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(ml_backend__ml_gen_info__ml_gen_info_set_const_var_map_3_0,
		ml_backend__ml_code_gen__ml_gen_ite_9_0_i50);
MR_def_label(ml_backend__ml_code_gen__ml_gen_ite_9_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__ml_code_gen__ml_gen_goal_as_block_5_0,
		ml_backend__ml_code_gen__ml_gen_ite_9_0_i51);
MR_def_label(ml_backend__ml_code_gen__ml_gen_ite_9_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(ml_backend__ml_gen_info__ml_gen_info_set_const_var_map_3_0,
		ml_backend__ml_code_gen__ml_gen_ite_9_0_i52);
MR_def_label(ml_backend__ml_code_gen__ml_gen_ite_9_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 3);
	MR_sv(1) = MR_tempr1;
	MR_tfield(2, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(2, MR_tempr1, 1) = MR_sv(8);
	MR_tfield(2, MR_tempr1, 2) = MR_r2;
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(5);
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_make_context_1_0,
		ml_backend__ml_code_gen__ml_gen_ite_9_0_i55);
MR_def_label(ml_backend__ml_code_gen__ml_gen_ite_9_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, statement);
	MR_r2 = MR_sv(7);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ml_backend__ml_code_gen__ml_gen_ite_9_0_i58);
MR_def_label(ml_backend__ml_code_gen__ml_gen_ite_9_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(3);
	MR_decr_sp_and_return(14);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_code_gen_module11)
	MR_init_entry1(ml_backend__ml_code_gen__ml_gen_negation_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_code_gen__ml_gen_negation_7_0);
	MR_init_label10(ml_backend__ml_code_gen__ml_gen_negation_7_0,2,5,6,7,4,11,12,13,15,10)
	MR_init_label8(ml_backend__ml_code_gen__ml_gen_negation_7_0,19,20,21,22,25,27,18,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ml_gen_negation'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ml_code_gen__ml_gen_negation_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_r1 = MR_tfield(0, MR_r1, 1);
	MR_np_call_localret_ent(fn__hlds__code_model__goal_info_get_code_model_1_0,
		ml_backend__ml_code_gen__ml_gen_negation_7_0_i2);
MR_def_label(ml_backend__ml_code_gen__ml_gen_negation_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(2),0)) {
		MR_GOTO_LAB(ml_backend__ml_code_gen__ml_gen_negation_7_0_i4);
	}
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(ml_backend__ml_gen_info__ml_gen_info_get_const_var_map_2_0,
		ml_backend__ml_code_gen__ml_gen_negation_7_0_i5);
MR_def_label(ml_backend__ml_code_gen__ml_gen_negation_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(4);
	}
	MR_np_call_localret_ent(ml_backend__ml_code_gen__ml_gen_goal_6_0,
		ml_backend__ml_code_gen__ml_gen_negation_7_0_i6);
MR_def_label(ml_backend__ml_code_gen__ml_gen_negation_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_r3;
	}
	MR_np_call_localret_ent(ml_backend__ml_gen_info__ml_gen_info_set_const_var_map_3_0,
		ml_backend__ml_code_gen__ml_gen_negation_7_0_i7);
MR_def_label(ml_backend__ml_code_gen__ml_gen_negation_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
MR_def_label(ml_backend__ml_code_gen__ml_gen_negation_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(2),1)) {
		MR_GOTO_LAB(ml_backend__ml_code_gen__ml_gen_negation_7_0_i8);
	}
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ml_backend__ml_code_gen__ml_gen_negation_7_0_i10);
	}
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(ml_backend__ml_gen_info__ml_gen_info_get_const_var_map_2_0,
		ml_backend__ml_code_gen__ml_gen_negation_7_0_i11);
MR_def_label(ml_backend__ml_code_gen__ml_gen_negation_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(4);
	}
	MR_np_call_localret_ent(ml_backend__ml_code_gen__ml_gen_goal_6_0,
		ml_backend__ml_code_gen__ml_gen_negation_7_0_i12);
MR_def_label(ml_backend__ml_code_gen__ml_gen_negation_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_r3;
	}
	MR_np_call_localret_ent(ml_backend__ml_gen_info__ml_gen_info_set_const_var_map_3_0,
		ml_backend__ml_code_gen__ml_gen_negation_7_0_i13);
MR_def_label(ml_backend__ml_code_gen__ml_gen_negation_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r2 = (MR_Word) MR_TAG_COMMON(2,0,1);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_set_success_4_0,
		ml_backend__ml_code_gen__ml_gen_negation_7_0_i15);
MR_def_label(ml_backend__ml_code_gen__ml_gen_negation_7_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, statement);
	MR_r2 = MR_sv(2);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ml_backend__ml_code_gen__ml_gen_negation_7_0_i27);
MR_def_label(ml_backend__ml_code_gen__ml_gen_negation_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(ml_backend__ml_code_gen__ml_gen_negation_7_0_i18);
	}
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(ml_backend__ml_gen_info__ml_gen_info_get_const_var_map_2_0,
		ml_backend__ml_code_gen__ml_gen_negation_7_0_i19);
MR_def_label(ml_backend__ml_code_gen__ml_gen_negation_7_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(4);
	}
	MR_np_call_localret_ent(ml_backend__ml_code_gen__ml_gen_goal_6_0,
		ml_backend__ml_code_gen__ml_gen_negation_7_0_i20);
MR_def_label(ml_backend__ml_code_gen__ml_gen_negation_7_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_r3;
	}
	MR_np_call_localret_ent(ml_backend__ml_gen_info__ml_gen_info_set_const_var_map_3_0,
		ml_backend__ml_code_gen__ml_gen_negation_7_0_i21);
MR_def_label(ml_backend__ml_code_gen__ml_gen_negation_7_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_test_success_2_0,
		ml_backend__ml_code_gen__ml_gen_negation_7_0_i22);
MR_def_label(ml_backend__ml_code_gen__ml_gen_negation_7_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 3);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_r2, 1) = (MR_Word) MR_TAG_COMMON(3,4,0);
	MR_tfield(3, MR_r2, 2) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_set_success_4_0,
		ml_backend__ml_code_gen__ml_gen_negation_7_0_i25);
MR_def_label(ml_backend__ml_code_gen__ml_gen_negation_7_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, statement);
	MR_r2 = MR_sv(2);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ml_backend__ml_code_gen__ml_gen_negation_7_0_i27);
MR_def_label(ml_backend__ml_code_gen__ml_gen_negation_7_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(4);
	MR_decr_sp_and_return(5);
	}
MR_def_label(ml_backend__ml_code_gen__ml_gen_negation_7_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ml_code_gen.m", 13);
	MR_r2 = (MR_Word) MR_string_const("ml_gen_negation: nondet cond", 28);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(require__unexpected_2_0);
MR_def_label(ml_backend__ml_code_gen__ml_gen_negation_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ml_code_gen.m", 13);
	MR_r2 = (MR_Word) MR_string_const("ml_gen_negation: nondet negation", 32);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(require__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(ml_backend__ml_code_util__ml_gen_success_5_0);
MR_decl_entry(fn__hlds__hlds_goal__goal_info_get_determinism_1_0);
MR_decl_entry(parse_tree__prog_data__determinism_components_3_0);
MR_decl_entry(ml_backend__ml_code_util__ml_combine_conj_8_0);

MR_BEGIN_MODULE(ml_backend__ml_code_gen_module12)
	MR_init_entry1(ml_backend__ml_code_gen__ml_gen_conj_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_code_gen__ml_gen_conj_7_0);
	MR_init_label8(ml_backend__ml_code_gen__ml_gen_conj_7_0,36,4,3,42,8,10,9,12)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ml_gen_conj'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ml_code_gen__ml_gen_conj_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
MR_def_label(ml_backend__ml_code_gen__ml_gen_conj_7_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ml_backend__ml_code_gen__ml_gen_conj_7_0_i3);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_success_5_0,
		ml_backend__ml_code_gen__ml_gen_conj_7_0_i4);
MR_def_label(ml_backend__ml_code_gen__ml_gen_conj_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_decr_sp_and_return(7);
	}
MR_def_label(ml_backend__ml_code_gen__ml_gen_conj_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_tfield(1, MR_r1, 1);
	if (MR_LTAGS_TESTR(MR_r5,0,0)) {
		MR_GOTO_LAB(ml_backend__ml_code_gen__ml_gen_conj_7_0_i42);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_tfield(1, MR_tempr1, 0);
	MR_r3 = MR_r4;
	MR_np_tailcall_ent(ml_backend__ml_code_gen__ml_gen_goal_6_0);
	}
MR_def_label(ml_backend__ml_code_gen__ml_gen_conj_7_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_tfield(0, MR_sv(6), 1);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_determinism_1_0,
		ml_backend__ml_code_gen__ml_gen_conj_7_0_i8);
MR_def_label(ml_backend__ml_code_gen__ml_gen_conj_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(parse_tree__prog_data__determinism_components_3_0,
		ml_backend__ml_code_gen__ml_gen_conj_7_0_i10);
MR_def_label(ml_backend__ml_code_gen__ml_gen_conj_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 0 != (MR_Integer) MR_r2)) {
		MR_GOTO_LAB(ml_backend__ml_code_gen__ml_gen_conj_7_0_i9);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(4);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(ml_backend__ml_code_gen__ml_gen_goal_6_0);
MR_def_label(ml_backend__ml_code_gen__ml_gen_conj_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(hlds__code_model__determinism_to_code_model_2_0,
		ml_backend__ml_code_gen__ml_gen_conj_7_0_i12);
MR_def_label(ml_backend__ml_code_gen__ml_gen_conj_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(5,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__ml_code_gen__ml_gen_goal_6_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tfield(0, MR_tempr1, 4) = MR_sv(6);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 6);
	MR_r4 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_COMMON(6,0);
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_LABEL_AP(ml_backend__ml_code_gen__ml_gen_conj_7_0_i36);
	MR_tfield(0, MR_tempr2, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr2, 3) = MR_sv(5);
	MR_tfield(0, MR_tempr2, 4) = MR_sv(1);
	MR_tempr3 = MR_sv(2);
	MR_tfield(0, MR_tempr2, 5) = MR_tempr3;
	MR_r2 = MR_tempr3;
	MR_r5 = MR_sv(4);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(ml_backend__ml_code_util__ml_combine_conj_8_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_code_gen_module13)
	MR_init_entry1(ml_backend__ml_code_gen__ml_gen_goal_as_branch_block_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_code_gen__ml_gen_goal_as_branch_block_5_0);
	MR_init_label5(ml_backend__ml_code_gen__ml_gen_goal_as_branch_block_5_0,2,3,4,5,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ml_gen_goal_as_branch_block'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ml_backend__ml_code_gen__ml_gen_goal_as_branch_block_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__ml_gen_info__ml_gen_info_get_const_var_map_2_0,
		ml_backend__ml_code_gen__ml_gen_goal_as_branch_block_5_0_i2);
MR_def_label(ml_backend__ml_code_gen__ml_gen_goal_as_branch_block_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(ml_backend__ml_code_gen__ml_gen_goal_6_0,
		ml_backend__ml_code_gen__ml_gen_goal_as_branch_block_5_0_i3);
MR_def_label(ml_backend__ml_code_gen__ml_gen_goal_as_branch_block_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_r1 = MR_tfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_context_1_0,
		ml_backend__ml_code_gen__ml_gen_goal_as_branch_block_5_0_i4);
MR_def_label(ml_backend__ml_code_gen__ml_gen_goal_as_branch_block_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__ml_backend__ml_code_util__ml_gen_block_3_0,
		ml_backend__ml_code_gen__ml_gen_goal_as_branch_block_5_0_i5);
MR_def_label(ml_backend__ml_code_gen__ml_gen_goal_as_branch_block_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	}
	MR_np_call_localret_ent(ml_backend__ml_gen_info__ml_gen_info_set_const_var_map_3_0,
		ml_backend__ml_code_gen__ml_gen_goal_as_branch_block_5_0_i6);
MR_def_label(ml_backend__ml_code_gen__ml_gen_goal_as_branch_block_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_code_gen_module14)
	MR_init_entry1(ml_backend__ml_code_gen__IntroducedFrom__pred__ml_gen_goal_expr__622__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_code_gen__IntroducedFrom__pred__ml_gen_goal_expr__622__1_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__ml_gen_goal_expr__622__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ml_code_gen__IntroducedFrom__pred__ml_gen_goal_expr__622__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__ml_backend__ml_code_gen_maybe_bunch_0(void)
{
	ml_backend__ml_code_gen_module0();
	ml_backend__ml_code_gen_module1();
	ml_backend__ml_code_gen_module2();
	ml_backend__ml_code_gen_module3();
	ml_backend__ml_code_gen_module4();
	ml_backend__ml_code_gen_module5();
	ml_backend__ml_code_gen_module6();
	ml_backend__ml_code_gen_module7();
	ml_backend__ml_code_gen_module8();
	ml_backend__ml_code_gen_module9();
	ml_backend__ml_code_gen_module10();
	ml_backend__ml_code_gen_module11();
	ml_backend__ml_code_gen_module12();
	ml_backend__ml_code_gen_module13();
	ml_backend__ml_code_gen_module14();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__ml_backend__ml_code_gen__init(void);
void mercury__ml_backend__ml_code_gen__init_type_tables(void);
void mercury__ml_backend__ml_code_gen__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__ml_backend__ml_code_gen__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__ml_backend__ml_code_gen__init_complexity_procs(void);
#endif

void mercury__ml_backend__ml_code_gen__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__ml_backend__ml_code_gen_maybe_bunch_0();
	mercury__ml_backend__ml_code_gen__init_debugger();
}

void mercury__ml_backend__ml_code_gen__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}


void mercury__ml_backend__ml_code_gen__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__ml_backend__ml_code_gen__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__ml_backend__ml_code_gen);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__ml_backend__ml_code_gen__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
