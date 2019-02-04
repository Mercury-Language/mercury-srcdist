/*
** Automatically generated from `ml_switch_gen.m'
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
INIT mercury__ml_backend__ml_switch_gen__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 136 "../library/io.int2"
#include "io.mh"

#line 27 "ml_backend.ml_switch_gen.c"
#line 144 "../library/io.int2"
#include "string.mh"

#line 31 "ml_backend.ml_switch_gen.c"
#line 33 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 35 "ml_backend.ml_switch_gen.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 39 "ml_backend.ml_switch_gen.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 43 "ml_backend.ml_switch_gen.c"
#line 31 "../library/array.int2"
#include "array.mh"

#line 47 "ml_backend.ml_switch_gen.c"
#line 48 "ml_backend.ml_switch_gen.c"
#include "ml_backend.ml_switch_gen.mh"

#line 51 "ml_backend.ml_switch_gen.c"
#line 52 "ml_backend.ml_switch_gen.c"
#ifndef ML_BACKEND__ML_SWITCH_GEN_DECL_GUARD
#define ML_BACKEND__ML_SWITCH_GEN_DECL_GUARD

#line 56 "ml_backend.ml_switch_gen.c"
#line 57 "ml_backend.ml_switch_gen.c"

#endif
#line 60 "ml_backend.ml_switch_gen.c"

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
	MR_Word * f3[5];
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

struct mercury_type_2 {
	MR_Word * f1[3];
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];

struct mercury_type_3 {
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
	MR_Word * f5;
};
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];

struct mercury_type_4 {
	MR_Word * f1;
	MR_Code * f2;
	MR_Integer f3;
};
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_common_4[];

struct mercury_type_5 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[3];
};
MR_STATIC_LINKAGE const struct mercury_type_5 mercury_common_5[];
MR_decl_label2(ml_backend__ml_switch_gen__chain_ors_3_0, 5,2)
MR_decl_label1(ml_backend__ml_switch_gen__estimate_cons_id_tag_test_cost_3_0, 2)
MR_decl_label2(ml_backend__ml_switch_gen__mark_tag_test_cost_2_0, 2,4)
MR_decl_label8(ml_backend__ml_switch_gen__ml_gen_switch_9_0, 2,3,4,5,6,7,8,9)
MR_decl_label8(ml_backend__ml_switch_gen__ml_gen_switch_9_0, 13,15,16,18,12,23,24,25)
MR_decl_label8(ml_backend__ml_switch_gen__ml_gen_switch_9_0, 28,27,11,31,38,36,41,46)
MR_decl_label8(ml_backend__ml_switch_gen__ml_gen_switch_9_0, 47,48,54,53,56,51,58,61)
MR_decl_label7(ml_backend__ml_switch_gen__ml_gen_switch_9_0, 63,60,68,69,70,73,72)
MR_decl_label5(ml_backend__ml_switch_gen__ml_switch_generate_default_6_0, 4,6,5,8,3)
MR_decl_label5(ml_backend__ml_switch_gen__ml_switch_generate_if_then_else_chain_9_0, 4,5,6,9,8)
MR_decl_label8(ml_backend__ml_switch_gen__ml_switch_generate_if_then_else_chain_ites_9_0, 6,8,9,10,11,12,15,5)
MR_decl_label7(ml_backend__ml_switch_gen__ml_switch_generate_if_then_else_chain_ites_9_0, 18,3,20,21,22,23,26)
MR_decl_label3(ml_backend__ml_switch_gen__ml_switch_generate_if_then_else_cond_5_0, 2,4,5)
MR_decl_label5(ml_backend__ml_switch_gen__ml_switch_generate_mlds_cases_5_0, 18,4,6,7,9)
MR_decl_label8(ml_backend__ml_switch_gen__ml_switch_generate_mlds_switch_9_0, 2,3,4,7,9,10,12,6)
MR_decl_label5(ml_backend__ml_switch_gen__ml_switch_generate_mlds_switch_9_0, 15,16,17,19,20)
MR_decl_label5(ml_backend__ml_switch_gen__ml_tagged_cons_id_to_match_cond_2_0, 3,13,21,5,9)
MR_decl_label5(ml_backend__ml_switch_gen__target_supports_computed_goto_1_0, 2,5,8,3,1)
MR_decl_label5(ml_backend__ml_switch_gen__target_supports_goto_1_0, 2,6,9,3,1)
MR_decl_label5(ml_backend__ml_switch_gen__target_supports_int_switch_1_0, 2,6,9,3,1)
MR_decl_label4(ml_backend__ml_switch_gen__target_supports_string_switch_1_0, 2,6,10,1)
MR_def_extern_entry(ml_backend__ml_switch_gen__target_supports_int_switch_1_0)
MR_def_extern_entry(ml_backend__ml_switch_gen__target_supports_string_switch_1_0)
MR_def_extern_entry(ml_backend__ml_switch_gen__target_supports_goto_1_0)
MR_def_extern_entry(ml_backend__ml_switch_gen__target_supports_computed_goto_1_0)
MR_decl_static(ml_backend__ml_switch_gen__chain_ors_3_0)
MR_decl_static(ml_backend__ml_switch_gen__ml_switch_generate_if_then_else_cond_5_0)
MR_decl_static(ml_backend__ml_switch_gen__ml_switch_generate_if_then_else_chain_ites_9_0)
MR_decl_static(ml_backend__ml_switch_gen__ml_switch_generate_if_then_else_chain_9_0)
MR_def_extern_entry(ml_backend__ml_switch_gen__ml_switch_generate_default_6_0)
MR_decl_static(ml_backend__ml_switch_gen__ml_tagged_cons_id_to_match_cond_2_0)
MR_decl_static(ml_backend__ml_switch_gen__ml_switch_generate_mlds_cases_5_0)
MR_decl_static(ml_backend__ml_switch_gen__ml_switch_generate_mlds_switch_9_0)
MR_def_extern_entry(ml_backend__ml_switch_gen__ml_gen_switch_9_0)
MR_decl_static(ml_backend__ml_switch_gen__estimate_cons_id_tag_test_cost_3_0)
MR_decl_static(ml_backend__ml_switch_gen__mark_tag_test_cost_2_0)

extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
static const struct mercury_type_0 mercury_common_0[1] =
{
{
{
MR_CTOR1_ADDR(term, var),
MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ml_switch_gen__ml_switch_generate_if_then_else_cond_5_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_data__type_ctor_info_tagged_cons_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_rval_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ml_code_util__type_ctor_info_ml_gen_info_0;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ml_switch_gen__ml_switch_generate_if_then_else_chain_ites_9_0_1;
static const struct mercury_type_1 mercury_common_1[2] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__ml_switch_gen__ml_switch_generate_if_then_else_cond_5_0_1,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_COMMON(0,0),
MR_CTOR0_ADDR(hlds__hlds_data, tagged_cons_id),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_rval),
MR_CTOR0_ADDR(ml_backend__ml_code_util, ml_gen_info),
MR_CTOR0_ADDR(ml_backend__ml_code_util, ml_gen_info)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__ml_switch_gen__ml_switch_generate_if_then_else_chain_ites_9_0_1,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_COMMON(0,0),
MR_CTOR0_ADDR(hlds__hlds_data, tagged_cons_id),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_rval),
MR_CTOR0_ADDR(ml_backend__ml_code_util, ml_gen_info),
MR_CTOR0_ADDR(ml_backend__ml_code_util, ml_gen_info)
}
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_pair__type_ctor_info_pair_2;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_tagged_case_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_tagged_case_0;
static const struct mercury_type_2 mercury_common_2[2] =
{
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(hlds__hlds_goal, tagged_case)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(hlds__hlds_goal, tagged_case)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ml_switch_gen__ml_switch_generate_if_then_else_chain_9_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_tagged_case_0;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ml_switch_gen__ml_switch_generate_mlds_cases_5_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_case_match_cond_0;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ml_switch_gen__ml_gen_switch_9_0_1;
static const struct mercury_type_3 mercury_common_3[3] =
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__ml_switch_gen__ml_switch_generate_if_then_else_chain_9_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(hlds__hlds_goal, tagged_case),
MR_COMMON(2,1)
},
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__ml_switch_gen__ml_switch_generate_mlds_cases_5_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(hlds__hlds_data, tagged_cons_id),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_case_match_cond)
},
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__ml_switch_gen__ml_gen_switch_9_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(hlds__hlds_goal, tagged_case),
MR_COMMON(2,1)
},
};

static const struct mercury_type_4 mercury_common_4[4] =
{
{
MR_COMMON(3,0),
MR_ENTRY_AP(ml_backend__ml_switch_gen__mark_tag_test_cost_2_0),
0
},
{
MR_COMMON(3,1),
MR_ENTRY_AP(ml_backend__ml_switch_gen__ml_tagged_cons_id_to_match_cond_2_0),
0
},
{
MR_COMMON(3,2),
MR_ENTRY_AP(ml_backend__ml_switch_gen__mark_tag_test_cost_2_0),
0
},
{
MR_COMMON(5,0),
MR_ENTRY_AP(ml_backend__ml_switch_gen__estimate_cons_id_tag_test_cost_3_0),
0
},
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ml_switch_gen__mark_tag_test_cost_2_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
static const struct mercury_type_5 mercury_common_5[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__ml_switch_gen__mark_tag_test_cost_2_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(hlds__hlds_data, tagged_cons_id),
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ml_switch_gen__ml_switch_generate_if_then_else_cond_5_0_1 = {
{
MR_PREDICATE,
"ml_backend.ml_unify_gen",
"ml_backend.ml_unify_gen",
"ml_gen_known_tag_test",
5,
0
},
"ml_backend.ml_switch_gen",
"ml_switch_gen.m",
438,
"d1;c8;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ml_switch_gen__ml_switch_generate_if_then_else_chain_ites_9_0_1 = {
{
MR_PREDICATE,
"ml_backend.ml_unify_gen",
"ml_backend.ml_unify_gen",
"ml_gen_known_tag_test",
5,
0
},
"ml_backend.ml_switch_gen",
"ml_switch_gen.m",
438,
"d1;c8;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ml_switch_gen__ml_switch_generate_if_then_else_chain_9_0_1 = {
{
MR_PREDICATE,
"ml_backend.ml_switch_gen",
"ml_backend.ml_switch_gen",
"mark_tag_test_cost",
2,
0
},
"ml_backend.ml_switch_gen",
"ml_switch_gen.m",
355,
"d1;c10;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ml_switch_gen__ml_switch_generate_mlds_cases_5_0_1 = {
{
MR_PREDICATE,
"ml_backend.ml_switch_gen",
"ml_backend.ml_switch_gen",
"ml_tagged_cons_id_to_match_cond",
2,
0
},
"ml_backend.ml_switch_gen",
"ml_switch_gen.m",
517,
"d1;c8;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ml_switch_gen__ml_gen_switch_9_0_1 = {
{
MR_PREDICATE,
"ml_backend.ml_switch_gen",
"ml_backend.ml_switch_gen",
"mark_tag_test_cost",
2,
0
},
"ml_backend.ml_switch_gen",
"ml_switch_gen.m",
355,
"d1;c10;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ml_switch_gen__mark_tag_test_cost_2_0_1 = {
{
MR_PREDICATE,
"ml_backend.ml_switch_gen",
"ml_backend.ml_switch_gen",
"estimate_cons_id_tag_test_cost",
3,
0
},
"ml_backend.ml_switch_gen",
"ml_switch_gen.m",
332,
"d1;c6;"
};

MR_decl_entry(libs__globals__get_target_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;
MR_decl_entry(fn__libs__compiler_util__unexpected_2_0);

MR_BEGIN_MODULE(ml_backend__ml_switch_gen_module0)
	MR_init_entry1(ml_backend__ml_switch_gen__target_supports_int_switch_1_0);
	MR_init_label5(ml_backend__ml_switch_gen__target_supports_int_switch_1_0,2,6,9,3,1)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'target_supports_int_switch'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ml_backend__ml_switch_gen__target_supports_int_switch_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(libs__globals__get_target_2_0,
		ml_backend__ml_switch_gen__target_supports_int_switch_1_0_i2);
MR_def_label(ml_backend__ml_switch_gen__target_supports_int_switch_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_r1,
		MR_LABEL_AP(ml_backend__ml_switch_gen__target_supports_int_switch_1_0_i3) MR_AND
		MR_LABEL_AP(ml_backend__ml_switch_gen__target_supports_int_switch_1_0_i1) MR_AND
		MR_LABEL_AP(ml_backend__ml_switch_gen__target_supports_int_switch_1_0_i3) MR_AND
		MR_LABEL_AP(ml_backend__ml_switch_gen__target_supports_int_switch_1_0_i3) MR_AND
		MR_LABEL_AP(ml_backend__ml_switch_gen__target_supports_int_switch_1_0_i9) MR_AND
		MR_LABEL_AP(ml_backend__ml_switch_gen__target_supports_int_switch_1_0_i6));
MR_def_label(ml_backend__ml_switch_gen__target_supports_int_switch_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_BOOL_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_string_const("ml_switch_gen.m", 15);
	MR_r3 = (MR_Word) MR_string_const("target erlang", 13);
	MR_np_call_localret_ent(fn__libs__compiler_util__unexpected_2_0,
		ml_backend__ml_switch_gen__target_supports_int_switch_1_0_i3);
MR_def_label(ml_backend__ml_switch_gen__target_supports_int_switch_1_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_BOOL_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_string_const("ml_switch_gen.m", 15);
	MR_r3 = (MR_Word) MR_string_const("target x86_64 with --high-level code", 36);
	MR_np_call_localret_ent(fn__libs__compiler_util__unexpected_2_0,
		ml_backend__ml_switch_gen__target_supports_int_switch_1_0_i3);
MR_def_label(ml_backend__ml_switch_gen__target_supports_int_switch_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ml_backend__ml_switch_gen__target_supports_int_switch_1_0,1)
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


MR_BEGIN_MODULE(ml_backend__ml_switch_gen_module1)
	MR_init_entry1(ml_backend__ml_switch_gen__target_supports_string_switch_1_0);
	MR_init_label4(ml_backend__ml_switch_gen__target_supports_string_switch_1_0,2,6,10,1)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'target_supports_string_switch'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ml_backend__ml_switch_gen__target_supports_string_switch_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(libs__globals__get_target_2_0,
		ml_backend__ml_switch_gen__target_supports_string_switch_1_0_i2);
MR_def_label(ml_backend__ml_switch_gen__target_supports_string_switch_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_r1,
		MR_LABEL_AP(ml_backend__ml_switch_gen__target_supports_string_switch_1_0_i1) MR_AND
		MR_LABEL_AP(ml_backend__ml_switch_gen__target_supports_string_switch_1_0_i1) MR_AND
		MR_LABEL_AP(ml_backend__ml_switch_gen__target_supports_string_switch_1_0_i1) MR_AND
		MR_LABEL_AP(ml_backend__ml_switch_gen__target_supports_string_switch_1_0_i1) MR_AND
		MR_LABEL_AP(ml_backend__ml_switch_gen__target_supports_string_switch_1_0_i10) MR_AND
		MR_LABEL_AP(ml_backend__ml_switch_gen__target_supports_string_switch_1_0_i6));
MR_def_label(ml_backend__ml_switch_gen__target_supports_string_switch_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_BOOL_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_string_const("ml_switch_gen.m", 15);
	MR_r3 = (MR_Word) MR_string_const("target erlang", 13);
	MR_np_call_localret_ent(fn__libs__compiler_util__unexpected_2_0,
		ml_backend__ml_switch_gen__target_supports_string_switch_1_0_i1);
MR_def_label(ml_backend__ml_switch_gen__target_supports_string_switch_1_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_BOOL_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_string_const("ml_switch_gen.m", 15);
	MR_r3 = (MR_Word) MR_string_const("target x86_64 with --high-level code", 36);
	MR_np_call_localret_ent(fn__libs__compiler_util__unexpected_2_0,
		ml_backend__ml_switch_gen__target_supports_string_switch_1_0_i1);
MR_def_label(ml_backend__ml_switch_gen__target_supports_string_switch_1_0,1)
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


MR_BEGIN_MODULE(ml_backend__ml_switch_gen_module2)
	MR_init_entry1(ml_backend__ml_switch_gen__target_supports_goto_1_0);
	MR_init_label5(ml_backend__ml_switch_gen__target_supports_goto_1_0,2,6,9,3,1)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'target_supports_goto'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ml_backend__ml_switch_gen__target_supports_goto_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(libs__globals__get_target_2_0,
		ml_backend__ml_switch_gen__target_supports_goto_1_0_i2);
MR_def_label(ml_backend__ml_switch_gen__target_supports_goto_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_r1,
		MR_LABEL_AP(ml_backend__ml_switch_gen__target_supports_goto_1_0_i3) MR_AND
		MR_LABEL_AP(ml_backend__ml_switch_gen__target_supports_goto_1_0_i3) MR_AND
		MR_LABEL_AP(ml_backend__ml_switch_gen__target_supports_goto_1_0_i1) MR_AND
		MR_LABEL_AP(ml_backend__ml_switch_gen__target_supports_goto_1_0_i3) MR_AND
		MR_LABEL_AP(ml_backend__ml_switch_gen__target_supports_goto_1_0_i9) MR_AND
		MR_LABEL_AP(ml_backend__ml_switch_gen__target_supports_goto_1_0_i6));
MR_def_label(ml_backend__ml_switch_gen__target_supports_goto_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_BOOL_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_string_const("ml_switch_gen.m", 15);
	MR_r3 = (MR_Word) MR_string_const("target erlang", 13);
	MR_np_call_localret_ent(fn__libs__compiler_util__unexpected_2_0,
		ml_backend__ml_switch_gen__target_supports_goto_1_0_i3);
MR_def_label(ml_backend__ml_switch_gen__target_supports_goto_1_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_BOOL_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_string_const("ml_switch_gen.m", 15);
	MR_r3 = (MR_Word) MR_string_const("target x86_64 with --high-level code", 36);
	MR_np_call_localret_ent(fn__libs__compiler_util__unexpected_2_0,
		ml_backend__ml_switch_gen__target_supports_goto_1_0_i3);
MR_def_label(ml_backend__ml_switch_gen__target_supports_goto_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ml_backend__ml_switch_gen__target_supports_goto_1_0,1)
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


MR_BEGIN_MODULE(ml_backend__ml_switch_gen_module3)
	MR_init_entry1(ml_backend__ml_switch_gen__target_supports_computed_goto_1_0);
	MR_init_label5(ml_backend__ml_switch_gen__target_supports_computed_goto_1_0,2,5,8,3,1)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'target_supports_computed_goto'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ml_backend__ml_switch_gen__target_supports_computed_goto_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(libs__globals__get_target_2_0,
		ml_backend__ml_switch_gen__target_supports_computed_goto_1_0_i2);
MR_def_label(ml_backend__ml_switch_gen__target_supports_computed_goto_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_r1,
		MR_LABEL_AP(ml_backend__ml_switch_gen__target_supports_computed_goto_1_0_i3) MR_AND
		MR_LABEL_AP(ml_backend__ml_switch_gen__target_supports_computed_goto_1_0_i3) MR_AND
		MR_LABEL_AP(ml_backend__ml_switch_gen__target_supports_computed_goto_1_0_i1) MR_AND
		MR_LABEL_AP(ml_backend__ml_switch_gen__target_supports_computed_goto_1_0_i1) MR_AND
		MR_LABEL_AP(ml_backend__ml_switch_gen__target_supports_computed_goto_1_0_i8) MR_AND
		MR_LABEL_AP(ml_backend__ml_switch_gen__target_supports_computed_goto_1_0_i5));
MR_def_label(ml_backend__ml_switch_gen__target_supports_computed_goto_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_BOOL_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_string_const("ml_switch_gen.m", 15);
	MR_r3 = (MR_Word) MR_string_const("target erlang", 13);
	MR_np_call_localret_ent(fn__libs__compiler_util__unexpected_2_0,
		ml_backend__ml_switch_gen__target_supports_computed_goto_1_0_i3);
MR_def_label(ml_backend__ml_switch_gen__target_supports_computed_goto_1_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_BOOL_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_string_const("ml_switch_gen.m", 15);
	MR_r3 = (MR_Word) MR_string_const("target x86_64 with --high-level code", 36);
	MR_np_call_localret_ent(fn__libs__compiler_util__unexpected_2_0,
		ml_backend__ml_switch_gen__target_supports_computed_goto_1_0_i3);
MR_def_label(ml_backend__ml_switch_gen__target_supports_computed_goto_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ml_backend__ml_switch_gen__target_supports_computed_goto_1_0,1)
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


MR_BEGIN_MODULE(ml_backend__ml_switch_gen_module4)
	MR_init_entry1(ml_backend__ml_switch_gen__chain_ors_3_0);
	MR_init_label2(ml_backend__ml_switch_gen__chain_ors_3_0,5,2)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'chain_ors'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ml_switch_gen__chain_ors_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(ml_backend__ml_switch_gen__chain_ors_3_0_i2);
	}
MR_def_label(ml_backend__ml_switch_gen__chain_ors_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	while (1) {
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 11);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_tfield(3, MR_tempr1, 3) = MR_ctfield(1, MR_r2, 0);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_ctfield(1, MR_r2, 1);
	if (MR_LTAGS_TESTR(MR_r2,0,0))
		continue;
	}
	break; } /* end while */
MR_def_label(ml_backend__ml_switch_gen__chain_ors_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(ml_backend__ml_unify_gen__ml_gen_known_tag_test_5_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_data__type_ctor_info_tagged_cons_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_rval_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ml_code_util__type_ctor_info_ml_gen_info_0;
MR_decl_entry(list__map_foldl_5_1);

MR_BEGIN_MODULE(ml_backend__ml_switch_gen_module5)
	MR_init_entry1(ml_backend__ml_switch_gen__ml_switch_generate_if_then_else_cond_5_0);
	MR_init_label3(ml_backend__ml_switch_gen__ml_switch_generate_if_then_else_cond_5_0,2,4,5)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'ml_switch_generate_if_then_else_cond'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ml_switch_gen__ml_switch_generate_if_then_else_cond_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr2 = MR_r2;
	MR_sv(1) = MR_tempr2;
	MR_tempr3 = MR_r1;
	MR_sv(2) = MR_ctfield(0, MR_tempr3, 1);
	MR_tempr1 = MR_tempr3;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_ctfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(ml_backend__ml_unify_gen__ml_gen_known_tag_test_5_0,
		ml_backend__ml_switch_gen__ml_switch_generate_if_then_else_cond_5_0_i2);
MR_def_label(ml_backend__ml_switch_gen__ml_switch_generate_if_then_else_cond_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(1,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__ml_unify_gen__ml_gen_known_tag_test_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, tagged_cons_id);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_rval);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ml_code_util, ml_gen_info);
	MR_r5 = MR_sv(2);
	MR_r6 = MR_tempr2;
	}
	MR_np_call_localret_ent(list__map_foldl_5_1,
		ml_backend__ml_switch_gen__ml_switch_generate_if_then_else_cond_5_0_i4);
MR_def_label(ml_backend__ml_switch_gen__ml_switch_generate_if_then_else_cond_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_tempr2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(ml_backend__ml_switch_gen__chain_ors_3_0,
		ml_backend__ml_switch_gen__ml_switch_generate_if_then_else_cond_5_0_i5);
MR_def_label(ml_backend__ml_switch_gen__ml_switch_generate_if_then_else_cond_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(ml_backend__ml_code_gen__ml_gen_goal_as_branch_block_5_0);
MR_decl_entry(ml_backend__ml_code_util__ml_gen_failure_5_0);
MR_decl_entry(fn__ml_backend__ml_code_util__ml_gen_block_3_0);
MR_decl_entry(fn__ml_backend__mlds__mlds_make_context_1_0);

MR_BEGIN_MODULE(ml_backend__ml_switch_gen_module6)
	MR_init_entry1(ml_backend__ml_switch_gen__ml_switch_generate_if_then_else_chain_ites_9_0);
	MR_init_label8(ml_backend__ml_switch_gen__ml_switch_generate_if_then_else_chain_ites_9_0,6,8,9,10,11,12,15,5)
	MR_init_label7(ml_backend__ml_switch_gen__ml_switch_generate_if_then_else_chain_ites_9_0,18,3,20,21,22,23,26)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'ml_switch_generate_if_then_else_chain_ites'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ml_switch_gen__ml_switch_generate_if_then_else_chain_ites_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(ml_backend__ml_switch_gen__ml_switch_generate_if_then_else_chain_ites_9_0_i3);
	}
	if (MR_INT_NE(MR_r5,0)) {
		MR_GOTO_LAB(ml_backend__ml_switch_gen__ml_switch_generate_if_then_else_chain_ites_9_0_i5);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr2 = MR_r3;
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = MR_r4;
	MR_sv(4) = MR_r6;
	MR_tempr3 = MR_r1;
	MR_sv(3) = MR_ctfield(0, MR_tempr3, 1);
	MR_sv(5) = MR_ctfield(0, MR_tempr3, 3);
	MR_tempr1 = MR_tempr3;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_ctfield(0, MR_tempr1, 0);
	MR_r3 = MR_r7;
	}
	MR_np_call_localret_ent(ml_backend__ml_unify_gen__ml_gen_known_tag_test_5_0,
		ml_backend__ml_switch_gen__ml_switch_generate_if_then_else_chain_ites_9_0_i6);
MR_def_label(ml_backend__ml_switch_gen__ml_switch_generate_if_then_else_chain_ites_9_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(1,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__ml_unify_gen__ml_gen_known_tag_test_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, tagged_cons_id);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_rval);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ml_code_util, ml_gen_info);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_tempr2;
	}
	MR_np_call_localret_ent(list__map_foldl_5_1,
		ml_backend__ml_switch_gen__ml_switch_generate_if_then_else_chain_ites_9_0_i8);
MR_def_label(ml_backend__ml_switch_gen__ml_switch_generate_if_then_else_chain_ites_9_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_tempr2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(ml_backend__ml_switch_gen__chain_ors_3_0,
		ml_backend__ml_switch_gen__ml_switch_generate_if_then_else_chain_ites_9_0_i9);
MR_def_label(ml_backend__ml_switch_gen__ml_switch_generate_if_then_else_chain_ites_9_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__ml_code_gen__ml_gen_goal_as_branch_block_5_0,
		ml_backend__ml_switch_gen__ml_switch_generate_if_then_else_chain_ites_9_0_i10);
MR_def_label(ml_backend__ml_switch_gen__ml_switch_generate_if_then_else_chain_ites_9_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_failure_5_0,
		ml_backend__ml_switch_gen__ml_switch_generate_if_then_else_chain_ites_9_0_i11);
MR_def_label(ml_backend__ml_switch_gen__ml_switch_generate_if_then_else_chain_ites_9_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(4);
	}
	MR_np_call_localret_ent(fn__ml_backend__ml_code_util__ml_gen_block_3_0,
		ml_backend__ml_switch_gen__ml_switch_generate_if_then_else_chain_ites_9_0_i12);
MR_def_label(ml_backend__ml_switch_gen__ml_switch_generate_if_then_else_chain_ites_9_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 3);
	MR_tfield(2, MR_tempr2, 0) = MR_sv(1);
	MR_tfield(2, MR_tempr2, 1) = MR_sv(2);
	MR_tfield(2, MR_tempr2, 2) = MR_tempr1;
	MR_sv(1) = MR_tempr2;
	MR_r1 = MR_sv(4);
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_make_context_1_0,
		ml_backend__ml_switch_gen__ml_switch_generate_if_then_else_chain_ites_9_0_i15);
MR_def_label(ml_backend__ml_switch_gen__ml_switch_generate_if_then_else_chain_ites_9_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r1 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_sv(3);
	MR_decr_sp_and_return(8);
	}
MR_def_label(ml_backend__ml_switch_gen__ml_switch_generate_if_then_else_chain_ites_9_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_r4;
	MR_r2 = MR_ctfield(0, MR_tempr1, 3);
	MR_r3 = MR_r7;
	}
	MR_np_call_localret_ent(ml_backend__ml_code_gen__ml_gen_goal_as_branch_block_5_0,
		ml_backend__ml_switch_gen__ml_switch_generate_if_then_else_chain_ites_9_0_i18);
MR_def_label(ml_backend__ml_switch_gen__ml_switch_generate_if_then_else_chain_ites_9_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(8);
	}
MR_def_label(ml_backend__ml_switch_gen__ml_switch_generate_if_then_else_chain_ites_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r3;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	MR_sv(4) = MR_r6;
	MR_sv(5) = MR_ctfield(0, MR_r1, 3);
	MR_tempr2 = MR_r2;
	MR_sv(6) = MR_ctfield(1, MR_tempr2, 0);
	MR_sv(7) = MR_ctfield(1, MR_tempr2, 1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_r7;
	}
	MR_np_call_localret_ent(ml_backend__ml_switch_gen__ml_switch_generate_if_then_else_cond_5_0,
		ml_backend__ml_switch_gen__ml_switch_generate_if_then_else_chain_ites_9_0_i20);
MR_def_label(ml_backend__ml_switch_gen__ml_switch_generate_if_then_else_chain_ites_9_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(ml_backend__ml_code_gen__ml_gen_goal_as_branch_block_5_0,
		ml_backend__ml_switch_gen__ml_switch_generate_if_then_else_chain_ites_9_0_i21);
MR_def_label(ml_backend__ml_switch_gen__ml_switch_generate_if_then_else_chain_ites_9_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(7);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_sv(4);
	MR_r7 = MR_tempr2;
	}
	MR_np_localcall_lab(ml_backend__ml_switch_gen__ml_switch_generate_if_then_else_chain_ites_9_0,
		ml_backend__ml_switch_gen__ml_switch_generate_if_then_else_chain_ites_9_0_i22);
MR_def_label(ml_backend__ml_switch_gen__ml_switch_generate_if_then_else_chain_ites_9_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(4);
	}
	MR_np_call_localret_ent(fn__ml_backend__ml_code_util__ml_gen_block_3_0,
		ml_backend__ml_switch_gen__ml_switch_generate_if_then_else_chain_ites_9_0_i23);
MR_def_label(ml_backend__ml_switch_gen__ml_switch_generate_if_then_else_chain_ites_9_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 3);
	MR_tfield(2, MR_tempr2, 0) = MR_sv(5);
	MR_tfield(2, MR_tempr2, 1) = MR_sv(1);
	MR_tfield(2, MR_tempr2, 2) = MR_tempr1;
	MR_sv(1) = MR_tempr2;
	MR_r1 = MR_sv(4);
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_make_context_1_0,
		ml_backend__ml_switch_gen__ml_switch_generate_if_then_else_chain_ites_9_0_i26);
MR_def_label(ml_backend__ml_switch_gen__ml_switch_generate_if_then_else_chain_ites_9_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r1 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_sv(3);
	MR_decr_sp_and_return(8);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__map_3_0);
MR_decl_entry(list__sort_2_0);
MR_decl_entry(assoc_list__values_2_0);
MR_decl_entry(libs__compiler_util__unexpected_2_0);

MR_BEGIN_MODULE(ml_backend__ml_switch_gen_module7)
	MR_init_entry1(ml_backend__ml_switch_gen__ml_switch_generate_if_then_else_chain_9_0);
	MR_init_label5(ml_backend__ml_switch_gen__ml_switch_generate_if_then_else_chain_9_0,4,5,6,9,8)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'ml_switch_generate_if_then_else_chain'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ml_switch_gen__ml_switch_generate_if_then_else_chain_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_sv(6) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, tagged_case);
	MR_sv(7) = (MR_Word) MR_INT_CTOR_ADDR;
	MR_sv(8) = (MR_Word) MR_TAG_COMMON(0,2,0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(8);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,4,0);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__map_3_0,
		ml_backend__ml_switch_gen__ml_switch_generate_if_then_else_chain_9_0_i4);
MR_def_label(ml_backend__ml_switch_gen__ml_switch_generate_if_then_else_chain_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__sort_2_0,
		ml_backend__ml_switch_gen__ml_switch_generate_if_then_else_chain_9_0_i5);
MR_def_label(ml_backend__ml_switch_gen__ml_switch_generate_if_then_else_chain_9_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(assoc_list__values_2_0,
		ml_backend__ml_switch_gen__ml_switch_generate_if_then_else_chain_9_0_i6);
MR_def_label(ml_backend__ml_switch_gen__ml_switch_generate_if_then_else_chain_9_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ml_backend__ml_switch_gen__ml_switch_generate_if_then_else_chain_9_0_i8);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_r2 = MR_ctfield(1, MR_tempr1, 1);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_sv(4);
	MR_r7 = MR_sv(5);
	}
	MR_np_call_localret_ent(ml_backend__ml_switch_gen__ml_switch_generate_if_then_else_chain_ites_9_0,
		ml_backend__ml_switch_gen__ml_switch_generate_if_then_else_chain_9_0_i9);
MR_def_label(ml_backend__ml_switch_gen__ml_switch_generate_if_then_else_chain_9_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_decr_sp_and_return(9);
	}
MR_def_label(ml_backend__ml_switch_gen__ml_switch_generate_if_then_else_chain_9_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ml_switch_gen.m", 15);
	MR_r2 = (MR_Word) MR_string_const("ml_switch_generate_if_then_else_chain: empty switch", 51);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_statement_0;
MR_decl_entry(list__is_empty_1_0);

MR_BEGIN_MODULE(ml_backend__ml_switch_gen_module8)
	MR_init_entry1(ml_backend__ml_switch_gen__ml_switch_generate_default_6_0);
	MR_init_label5(ml_backend__ml_switch_gen__ml_switch_generate_default_6_0,4,6,5,8,3)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'ml_switch_generate_default'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ml_backend__ml_switch_gen__ml_switch_generate_default_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ml_backend__ml_switch_gen__ml_switch_generate_default_6_0_i3);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_r4;
	}
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_failure_5_0,
		ml_backend__ml_switch_gen__ml_switch_generate_default_6_0_i4);
MR_def_label(ml_backend__ml_switch_gen__ml_switch_generate_default_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, statement);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(list__is_empty_1_0,
		ml_backend__ml_switch_gen__ml_switch_generate_default_6_0_i6);
MR_def_label(ml_backend__ml_switch_gen__ml_switch_generate_default_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ml_backend__ml_switch_gen__ml_switch_generate_default_6_0_i5);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 1);
	MR_r2 = MR_sv(3);
	MR_decr_sp_and_return(4);
MR_def_label(ml_backend__ml_switch_gen__ml_switch_generate_default_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(fn__ml_backend__ml_code_util__ml_gen_block_3_0,
		ml_backend__ml_switch_gen__ml_switch_generate_default_6_0_i8);
MR_def_label(ml_backend__ml_switch_gen__ml_switch_generate_default_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(3);
	MR_decr_sp_and_return(4);
	}
MR_def_label(ml_backend__ml_switch_gen__ml_switch_generate_default_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r4;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_switch_gen_module9)
	MR_init_entry1(ml_backend__ml_switch_gen__ml_tagged_cons_id_to_match_cond_2_0);
	MR_init_label5(ml_backend__ml_switch_gen__ml_tagged_cons_id_to_match_cond_2_0,3,13,21,5,9)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'ml_tagged_cons_id_to_match_cond'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ml_switch_gen__ml_tagged_cons_id_to_match_cond_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_ctfield(0, MR_r1, 1);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r3),
		MR_LABEL_AP(ml_backend__ml_switch_gen__ml_tagged_cons_id_to_match_cond_2_0_i3) MR_AND
		MR_LABEL_AP(ml_backend__ml_switch_gen__ml_tagged_cons_id_to_match_cond_2_0_i13) MR_AND
		MR_LABEL_AP(ml_backend__ml_switch_gen__ml_tagged_cons_id_to_match_cond_2_0_i3) MR_AND
		MR_LABEL_AP(ml_backend__ml_switch_gen__ml_tagged_cons_id_to_match_cond_2_0_i21));
MR_def_label(ml_backend__ml_switch_gen__ml_tagged_cons_id_to_match_cond_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ml_switch_gen.m", 15);
	MR_r2 = (MR_Word) MR_string_const("ml_tagged_cons_id_to_match_cond: invalid tag type", 49);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(ml_backend__ml_switch_gen__ml_tagged_cons_id_to_match_cond_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_ctfield(1, MR_r3, 0);
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr2, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r1, 0) = MR_tempr2;
	MR_proceed();
	}
MR_def_label(ml_backend__ml_switch_gen__ml_tagged_cons_id_to_match_cond_2_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r3, 0),
		MR_LABEL_AP(ml_backend__ml_switch_gen__ml_tagged_cons_id_to_match_cond_2_0_i9) MR_AND
		MR_LABEL_AP(ml_backend__ml_switch_gen__ml_tagged_cons_id_to_match_cond_2_0_i5) MR_AND
		MR_LABEL_AP(ml_backend__ml_switch_gen__ml_tagged_cons_id_to_match_cond_2_0_i3) MR_AND
		MR_LABEL_AP(ml_backend__ml_switch_gen__ml_tagged_cons_id_to_match_cond_2_0_i3) MR_AND
		MR_LABEL_AP(ml_backend__ml_switch_gen__ml_tagged_cons_id_to_match_cond_2_0_i3) MR_AND
		MR_LABEL_AP(ml_backend__ml_switch_gen__ml_tagged_cons_id_to_match_cond_2_0_i3) MR_AND
		MR_LABEL_AP(ml_backend__ml_switch_gen__ml_tagged_cons_id_to_match_cond_2_0_i3) MR_AND
		MR_LABEL_AP(ml_backend__ml_switch_gen__ml_tagged_cons_id_to_match_cond_2_0_i3) MR_AND
		MR_LABEL_AP(ml_backend__ml_switch_gen__ml_tagged_cons_id_to_match_cond_2_0_i3) MR_AND
		MR_LABEL_AP(ml_backend__ml_switch_gen__ml_tagged_cons_id_to_match_cond_2_0_i3) MR_AND
		MR_LABEL_AP(ml_backend__ml_switch_gen__ml_tagged_cons_id_to_match_cond_2_0_i3) MR_AND
		MR_LABEL_AP(ml_backend__ml_switch_gen__ml_tagged_cons_id_to_match_cond_2_0_i3) MR_AND
		MR_LABEL_AP(ml_backend__ml_switch_gen__ml_tagged_cons_id_to_match_cond_2_0_i3));
MR_def_label(ml_backend__ml_switch_gen__ml_tagged_cons_id_to_match_cond_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 3);
	MR_tempr3 = MR_r3;
	MR_tfield(2, MR_tempr1, 0) = MR_ctfield(3, MR_tempr3, 1);
	MR_tfield(2, MR_tempr1, 1) = MR_ctfield(3, MR_tempr3, 2);
	MR_tfield(2, MR_tempr1, 2) = (MR_Word) MR_tbmkword(0, 2);
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr2, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r1, 0) = MR_tempr2;
	MR_proceed();
	}
MR_def_label(ml_backend__ml_switch_gen__ml_tagged_cons_id_to_match_cond_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_ctfield(3, MR_r3, 1);
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr2, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r1, 0) = MR_tempr2;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_case_match_cond_0;

MR_BEGIN_MODULE(ml_backend__ml_switch_gen_module10)
	MR_init_entry1(ml_backend__ml_switch_gen__ml_switch_generate_mlds_cases_5_0);
	MR_init_label5(ml_backend__ml_switch_gen__ml_switch_generate_mlds_cases_5_0,18,4,6,7,9)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'ml_switch_generate_mlds_cases'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ml_switch_gen__ml_switch_generate_mlds_cases_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ml_backend__ml_switch_gen__ml_switch_generate_mlds_cases_5_0_i18);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r3;
	MR_proceed();
MR_def_label(ml_backend__ml_switch_gen__ml_switch_generate_mlds_cases_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r1;
	MR_sv(3) = MR_ctfield(1, MR_tempr2, 1);
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 0);
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(5) = MR_ctfield(0, MR_tempr1, 3);
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(ml_backend__ml_switch_gen__ml_tagged_cons_id_to_match_cond_2_0,
		ml_backend__ml_switch_gen__ml_switch_generate_mlds_cases_5_0_i4);
MR_def_label(ml_backend__ml_switch_gen__ml_switch_generate_mlds_cases_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, tagged_cons_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_case_match_cond);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,4,1);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__map_3_0,
		ml_backend__ml_switch_gen__ml_switch_generate_mlds_cases_5_0_i6);
MR_def_label(ml_backend__ml_switch_gen__ml_switch_generate_mlds_cases_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__ml_code_gen__ml_gen_goal_as_branch_block_5_0,
		ml_backend__ml_switch_gen__ml_switch_generate_mlds_cases_5_0_i7);
MR_def_label(ml_backend__ml_switch_gen__ml_switch_generate_mlds_cases_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_tempr2 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_sv(3);
	MR_tempr3 = MR_r2;
	MR_r2 = MR_tempr2;
	MR_r3 = MR_tempr3;
	}
	MR_np_localcall_lab(ml_backend__ml_switch_gen__ml_switch_generate_mlds_cases_5_0,
		ml_backend__ml_switch_gen__ml_switch_generate_mlds_cases_5_0_i9);
MR_def_label(ml_backend__ml_switch_gen__ml_switch_generate_mlds_cases_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(ml_backend__ml_code_util__ml_variable_type_3_0);
MR_decl_entry(ml_backend__ml_code_util__ml_gen_type_3_0);
MR_decl_entry(ml_backend__ml_code_util__ml_gen_var_3_0);
MR_decl_entry(ml_backend__ml_code_util__ml_gen_info_get_module_info_2_0);
MR_decl_entry(fn__backend_libs__foreign__to_exported_type_2_0);
MR_decl_entry(__Unify___backend_libs__foreign__exported_type_0_0);
MR_decl_entry(backend_libs__switch_util__type_range_6_0);
MR_decl_entry(ml_backend__ml_simplify_switch__ml_simplify_switch_5_0);

MR_BEGIN_MODULE(ml_backend__ml_switch_gen_module11)
	MR_init_entry1(ml_backend__ml_switch_gen__ml_switch_generate_mlds_switch_9_0);
	MR_init_label8(ml_backend__ml_switch_gen__ml_switch_generate_mlds_switch_9_0,2,3,4,7,9,10,12,6)
	MR_init_label5(ml_backend__ml_switch_gen__ml_switch_generate_mlds_switch_9_0,15,16,17,19,20)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'ml_switch_generate_mlds_switch'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ml_switch_gen__ml_switch_generate_mlds_switch_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r6;
	MR_sv(7) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_variable_type_3_0,
		ml_backend__ml_switch_gen__ml_switch_generate_mlds_switch_9_0_i2);
MR_def_label(ml_backend__ml_switch_gen__ml_switch_generate_mlds_switch_9_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_type_3_0,
		ml_backend__ml_switch_gen__ml_switch_generate_mlds_switch_9_0_i3);
MR_def_label(ml_backend__ml_switch_gen__ml_switch_generate_mlds_switch_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_var_3_0,
		ml_backend__ml_switch_gen__ml_switch_generate_mlds_switch_9_0_i4);
MR_def_label(ml_backend__ml_switch_gen__ml_switch_generate_mlds_switch_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_sv(6), 0, (MR_Integer) 1);
	MR_tfield(0, MR_sv(6), 0) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_info_get_module_info_2_0,
		ml_backend__ml_switch_gen__ml_switch_generate_mlds_switch_9_0_i7);
MR_def_label(ml_backend__ml_switch_gen__ml_switch_generate_mlds_switch_9_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(ml_backend__ml_switch_gen__ml_switch_generate_mlds_switch_9_0_i6);
	}
	MR_sv(8) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(9) = MR_ctfield(1, MR_tempr1, 2);
	MR_sv(10) = MR_ctfield(1, MR_tempr1, 0);
	MR_sv(11) = MR_ctfield(1, MR_tempr1, 1);
	MR_r2 = MR_sv(10);
	}
	MR_np_call_localret_ent(fn__backend_libs__foreign__to_exported_type_2_0,
		ml_backend__ml_switch_gen__ml_switch_generate_mlds_switch_9_0_i9);
MR_def_label(ml_backend__ml_switch_gen__ml_switch_generate_mlds_switch_9_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(__Unify___backend_libs__foreign__exported_type_0_0,
		ml_backend__ml_switch_gen__ml_switch_generate_mlds_switch_9_0_i10);
MR_def_label(ml_backend__ml_switch_gen__ml_switch_generate_mlds_switch_9_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ml_backend__ml_switch_gen__ml_switch_generate_mlds_switch_9_0_i6);
	}
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(11);
	MR_r3 = MR_sv(10);
	MR_np_call_localret_ent(backend_libs__switch_util__type_range_6_0,
		ml_backend__ml_switch_gen__ml_switch_generate_mlds_switch_9_0_i12);
MR_def_label(ml_backend__ml_switch_gen__ml_switch_generate_mlds_switch_9_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ml_backend__ml_switch_gen__ml_switch_generate_mlds_switch_9_0_i6);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = MR_r3;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_sv(1) = MR_tempr1;
	MR_r3 = MR_sv(7);
	MR_GOTO_LAB(ml_backend__ml_switch_gen__ml_switch_generate_mlds_switch_9_0_i15);
	}
MR_def_label(ml_backend__ml_switch_gen__ml_switch_generate_mlds_switch_9_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_sv(1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_sv(7);
MR_def_label(ml_backend__ml_switch_gen__ml_switch_generate_mlds_switch_9_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r2;
	MR_np_call_localret_ent(ml_backend__ml_switch_gen__ml_switch_generate_mlds_cases_5_0,
		ml_backend__ml_switch_gen__ml_switch_generate_mlds_switch_9_0_i16);
MR_def_label(ml_backend__ml_switch_gen__ml_switch_generate_mlds_switch_9_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(5);
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(ml_backend__ml_switch_gen__ml_switch_generate_default_6_0,
		ml_backend__ml_switch_gen__ml_switch_generate_mlds_switch_9_0_i17);
MR_def_label(ml_backend__ml_switch_gen__ml_switch_generate_mlds_switch_9_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 6);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(6);
	MR_tfield(3, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 4) = MR_sv(3);
	MR_tfield(3, MR_tempr1, 5) = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r2;
	MR_r1 = MR_sv(5);
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_make_context_1_0,
		ml_backend__ml_switch_gen__ml_switch_generate_mlds_switch_9_0_i19);
MR_def_label(ml_backend__ml_switch_gen__ml_switch_generate_mlds_switch_9_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(ml_backend__ml_simplify_switch__ml_simplify_switch_5_0,
		ml_backend__ml_switch_gen__ml_switch_generate_mlds_switch_9_0_i20);
MR_def_label(ml_backend__ml_switch_gen__ml_switch_generate_mlds_switch_9_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_decr_sp_and_return(12);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(parse_tree__prog_type__type_to_ctor_det_2_0);
MR_decl_entry(backend_libs__switch_util__tag_cases_5_0);
MR_decl_entry(fn__check_hlds__type_util__classify_type_2_0);
MR_decl_entry(fn__backend_libs__switch_util__type_ctor_cat_to_switch_cat_1_0);
MR_decl_entry(ml_backend__ml_code_util__ml_gen_info_get_globals_2_0);
MR_decl_entry(libs__globals__lookup_bool_option_3_0);
MR_decl_entry(hlds__hlds_module__module_info_get_type_table_2_0);
MR_decl_entry(hlds__hlds_data__search_type_ctor_defn_3_0);
MR_decl_entry(hlds__hlds_data__get_type_defn_body_2_0);
MR_decl_entry(backend_libs__switch_util__num_cons_ids_in_tagged_cases_3_0);
MR_decl_entry(libs__globals__lookup_int_option_3_0);
MR_decl_entry(libs__globals__lookup_bool_option_3_1);
MR_decl_entry(ml_backend__ml_string_switch__ml_generate_string_switch_9_0);
MR_decl_entry(ml_backend__ml_tag_switch__ml_generate_tag_switch_9_0);

MR_BEGIN_MODULE(ml_backend__ml_switch_gen_module12)
	MR_init_entry1(ml_backend__ml_switch_gen__ml_gen_switch_9_0);
	MR_init_label8(ml_backend__ml_switch_gen__ml_gen_switch_9_0,2,3,4,5,6,7,8,9)
	MR_init_label8(ml_backend__ml_switch_gen__ml_gen_switch_9_0,13,15,16,18,12,23,24,25)
	MR_init_label8(ml_backend__ml_switch_gen__ml_gen_switch_9_0,28,27,11,31,38,36,41,46)
	MR_init_label8(ml_backend__ml_switch_gen__ml_gen_switch_9_0,47,48,54,53,56,51,58,61)
	MR_init_label7(ml_backend__ml_switch_gen__ml_gen_switch_9_0,63,60,68,69,70,73,72)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'ml_gen_switch'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ml_backend__ml_switch_gen__ml_gen_switch_9_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r6;
	MR_sv(10) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_info_get_module_info_2_0,
		ml_backend__ml_switch_gen__ml_gen_switch_9_0_i2);
MR_def_label(ml_backend__ml_switch_gen__ml_gen_switch_9_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_variable_type_3_0,
		ml_backend__ml_switch_gen__ml_gen_switch_9_0_i3);
MR_def_label(ml_backend__ml_switch_gen__ml_gen_switch_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_np_call_localret_ent(parse_tree__prog_type__type_to_ctor_det_2_0,
		ml_backend__ml_switch_gen__ml_gen_switch_9_0_i4);
MR_def_label(ml_backend__ml_switch_gen__ml_gen_switch_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(backend_libs__switch_util__tag_cases_5_0,
		ml_backend__ml_switch_gen__ml_gen_switch_9_0_i5);
MR_def_label(ml_backend__ml_switch_gen__ml_gen_switch_9_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__check_hlds__type_util__classify_type_2_0,
		ml_backend__ml_switch_gen__ml_gen_switch_9_0_i6);
MR_def_label(ml_backend__ml_switch_gen__ml_gen_switch_9_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__backend_libs__switch_util__type_ctor_cat_to_switch_cat_1_0,
		ml_backend__ml_switch_gen__ml_gen_switch_9_0_i7);
MR_def_label(ml_backend__ml_switch_gen__ml_gen_switch_9_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_info_get_globals_2_0,
		ml_backend__ml_switch_gen__ml_gen_switch_9_0_i8);
MR_def_label(ml_backend__ml_switch_gen__ml_gen_switch_9_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r2 = (MR_Integer) 405;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		ml_backend__ml_switch_gen__ml_gen_switch_9_0_i9);
MR_def_label(ml_backend__ml_switch_gen__ml_gen_switch_9_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ml_backend__ml_switch_gen__ml_gen_switch_9_0_i13);
	}
	MR_r4 = MR_sv(7);
	MR_GOTO_LAB(ml_backend__ml_switch_gen__ml_gen_switch_9_0_i12);
MR_def_label(ml_backend__ml_switch_gen__ml_gen_switch_9_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_type_table_2_0,
		ml_backend__ml_switch_gen__ml_gen_switch_9_0_i15);
MR_def_label(ml_backend__ml_switch_gen__ml_gen_switch_9_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_data__search_type_ctor_defn_3_0,
		ml_backend__ml_switch_gen__ml_gen_switch_9_0_i16);
MR_def_label(ml_backend__ml_switch_gen__ml_gen_switch_9_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ml_backend__ml_switch_gen__ml_gen_switch_9_0_i11);
	}
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_data__get_type_defn_body_2_0,
		ml_backend__ml_switch_gen__ml_gen_switch_9_0_i18);
MR_def_label(ml_backend__ml_switch_gen__ml_gen_switch_9_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(ml_backend__ml_switch_gen__ml_gen_switch_9_0_i11);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_r1, 6);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(ml_backend__ml_switch_gen__ml_gen_switch_9_0_i11);
	}
	MR_r4 = MR_sv(7);
	}
MR_def_label(ml_backend__ml_switch_gen__ml_gen_switch_9_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, tagged_case);
	MR_sv(6) = (MR_Word) MR_INT_CTOR_ADDR;
	MR_sv(7) = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(7);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,4,2);
	MR_np_call_localret_ent(list__map_3_0,
		ml_backend__ml_switch_gen__ml_gen_switch_9_0_i23);
MR_def_label(ml_backend__ml_switch_gen__ml_gen_switch_9_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__sort_2_0,
		ml_backend__ml_switch_gen__ml_gen_switch_9_0_i24);
MR_def_label(ml_backend__ml_switch_gen__ml_gen_switch_9_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(assoc_list__values_2_0,
		ml_backend__ml_switch_gen__ml_gen_switch_9_0_i25);
MR_def_label(ml_backend__ml_switch_gen__ml_gen_switch_9_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ml_backend__ml_switch_gen__ml_gen_switch_9_0_i27);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_r2 = MR_ctfield(1, MR_tempr1, 1);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(2);
	MR_r6 = MR_sv(5);
	MR_r7 = MR_sv(10);
	}
	MR_np_call_localret_ent(ml_backend__ml_switch_gen__ml_switch_generate_if_then_else_chain_ites_9_0,
		ml_backend__ml_switch_gen__ml_gen_switch_9_0_i28);
MR_def_label(ml_backend__ml_switch_gen__ml_gen_switch_9_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_decr_sp_and_return(11);
	}
MR_def_label(ml_backend__ml_switch_gen__ml_gen_switch_9_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ml_switch_gen.m", 15);
	MR_r2 = (MR_Word) MR_string_const("ml_switch_generate_if_then_else_chain: empty switch", 51);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(ml_backend__ml_switch_gen__ml_gen_switch_9_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_sv(8),
		MR_LABEL_AP(ml_backend__ml_switch_gen__ml_gen_switch_9_0_i31) MR_AND
		MR_LABEL_AP(ml_backend__ml_switch_gen__ml_gen_switch_9_0_i46) MR_AND
		MR_LABEL_AP(ml_backend__ml_switch_gen__ml_gen_switch_9_0_i68) MR_AND
		MR_LABEL_AP(ml_backend__ml_switch_gen__ml_gen_switch_9_0_i31));
MR_def_label(ml_backend__ml_switch_gen__ml_gen_switch_9_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(8),0)) {
		MR_GOTO_LAB(ml_backend__ml_switch_gen__ml_gen_switch_9_0_i36);
	}
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(ml_backend__ml_switch_gen__target_supports_int_switch_1_0,
		ml_backend__ml_switch_gen__ml_gen_switch_9_0_i38);
MR_def_label(ml_backend__ml_switch_gen__ml_gen_switch_9_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ml_backend__ml_switch_gen__ml_gen_switch_9_0_i36);
	}
	MR_r2 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_r1 = MR_sv(7);
	MR_r6 = MR_sv(10);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(ml_backend__ml_switch_gen__ml_switch_generate_mlds_switch_9_0);
MR_def_label(ml_backend__ml_switch_gen__ml_gen_switch_9_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(8),0)) {
		MR_GOTO_LAB(ml_backend__ml_switch_gen__ml_gen_switch_9_0_i72);
	}
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(ml_backend__ml_switch_gen__target_supports_computed_goto_1_0,
		ml_backend__ml_switch_gen__ml_gen_switch_9_0_i41);
MR_def_label(ml_backend__ml_switch_gen__ml_gen_switch_9_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ml_backend__ml_switch_gen__ml_gen_switch_9_0_i72);
	}
	MR_r2 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_r1 = MR_sv(7);
	MR_r6 = MR_sv(10);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(ml_backend__ml_switch_gen__ml_switch_generate_mlds_switch_9_0);
MR_def_label(ml_backend__ml_switch_gen__ml_gen_switch_9_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(backend_libs__switch_util__num_cons_ids_in_tagged_cases_3_0,
		ml_backend__ml_switch_gen__ml_gen_switch_9_0_i47);
MR_def_label(ml_backend__ml_switch_gen__ml_gen_switch_9_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_r1 = MR_sv(9);
	MR_r2 = (MR_Integer) 410;
	MR_np_call_localret_ent(libs__globals__lookup_int_option_3_0,
		ml_backend__ml_switch_gen__ml_gen_switch_9_0_i48);
MR_def_label(ml_backend__ml_switch_gen__ml_gen_switch_9_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_sv(3) < (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(ml_backend__ml_switch_gen__ml_gen_switch_9_0_i72);
	}
	if (MR_INT_LE(MR_sv(6),1)) {
		MR_GOTO_LAB(ml_backend__ml_switch_gen__ml_gen_switch_9_0_i72);
	}
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(ml_backend__ml_switch_gen__target_supports_computed_goto_1_0,
		ml_backend__ml_switch_gen__ml_gen_switch_9_0_i54);
MR_def_label(ml_backend__ml_switch_gen__ml_gen_switch_9_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ml_backend__ml_switch_gen__ml_gen_switch_9_0_i53);
	}
	MR_r1 = MR_sv(9);
	MR_GOTO_LAB(ml_backend__ml_switch_gen__ml_gen_switch_9_0_i51);
MR_def_label(ml_backend__ml_switch_gen__ml_gen_switch_9_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(ml_backend__ml_switch_gen__target_supports_int_switch_1_0,
		ml_backend__ml_switch_gen__ml_gen_switch_9_0_i56);
MR_def_label(ml_backend__ml_switch_gen__ml_gen_switch_9_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ml_backend__ml_switch_gen__ml_gen_switch_9_0_i72);
	}
	MR_r1 = MR_sv(9);
MR_def_label(ml_backend__ml_switch_gen__ml_gen_switch_9_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_np_call_localret_ent(ml_backend__ml_switch_gen__target_supports_goto_1_0,
		ml_backend__ml_switch_gen__ml_gen_switch_9_0_i58);
MR_def_label(ml_backend__ml_switch_gen__ml_gen_switch_9_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ml_backend__ml_switch_gen__ml_gen_switch_9_0_i72);
	}
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(ml_backend__ml_switch_gen__target_supports_string_switch_1_0,
		ml_backend__ml_switch_gen__ml_gen_switch_9_0_i61);
MR_def_label(ml_backend__ml_switch_gen__ml_gen_switch_9_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ml_backend__ml_switch_gen__ml_gen_switch_9_0_i60);
	}
	MR_r1 = MR_sv(9);
	MR_r2 = (MR_Integer) 290;
	MR_r3 = (MR_Integer) 1;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_1,
		ml_backend__ml_switch_gen__ml_gen_switch_9_0_i63);
MR_def_label(ml_backend__ml_switch_gen__ml_gen_switch_9_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(ml_backend__ml_switch_gen__ml_gen_switch_9_0_i72);
	}
MR_def_label(ml_backend__ml_switch_gen__ml_gen_switch_9_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(10);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(ml_backend__ml_string_switch__ml_generate_string_switch_9_0);
MR_def_label(ml_backend__ml_switch_gen__ml_gen_switch_9_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(backend_libs__switch_util__num_cons_ids_in_tagged_cases_3_0,
		ml_backend__ml_switch_gen__ml_gen_switch_9_0_i69);
MR_def_label(ml_backend__ml_switch_gen__ml_gen_switch_9_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_r1 = MR_sv(9);
	MR_r2 = (MR_Integer) 411;
	MR_np_call_localret_ent(libs__globals__lookup_int_option_3_0,
		ml_backend__ml_switch_gen__ml_gen_switch_9_0_i70);
MR_def_label(ml_backend__ml_switch_gen__ml_gen_switch_9_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_sv(3) < (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(ml_backend__ml_switch_gen__ml_gen_switch_9_0_i72);
	}
	if (MR_INT_LE(MR_sv(6),1)) {
		MR_GOTO_LAB(ml_backend__ml_switch_gen__ml_gen_switch_9_0_i72);
	}
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(ml_backend__ml_switch_gen__target_supports_int_switch_1_0,
		ml_backend__ml_switch_gen__ml_gen_switch_9_0_i73);
MR_def_label(ml_backend__ml_switch_gen__ml_gen_switch_9_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ml_backend__ml_switch_gen__ml_gen_switch_9_0_i72);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(10);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(ml_backend__ml_tag_switch__ml_generate_tag_switch_9_0);
MR_def_label(ml_backend__ml_switch_gen__ml_gen_switch_9_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(10);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(ml_backend__ml_switch_gen__ml_switch_generate_if_then_else_chain_9_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__backend_libs__switch_util__estimate_switch_tag_test_cost_1_0);

MR_BEGIN_MODULE(ml_backend__ml_switch_gen_module13)
	MR_init_entry1(ml_backend__ml_switch_gen__estimate_cons_id_tag_test_cost_3_0);
	MR_init_label1(ml_backend__ml_switch_gen__estimate_cons_id_tag_test_cost_3_0,2)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'estimate_cons_id_tag_test_cost'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ml_switch_gen__estimate_cons_id_tag_test_cost_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_r1 = MR_ctfield(0, MR_r1, 1);
	MR_np_call_localret_ent(fn__backend_libs__switch_util__estimate_switch_tag_test_cost_1_0,
		ml_backend__ml_switch_gen__estimate_cons_id_tag_test_cost_3_0_i2);
MR_def_label(ml_backend__ml_switch_gen__estimate_cons_id_tag_test_cost_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_sv(1) + (MR_Integer) MR_r1);
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__foldl_4_0);

MR_BEGIN_MODULE(ml_backend__ml_switch_gen_module14)
	MR_init_entry1(ml_backend__ml_switch_gen__mark_tag_test_cost_2_0);
	MR_init_label2(ml_backend__ml_switch_gen__mark_tag_test_cost_2_0,2,4)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'mark_tag_test_cost'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ml_switch_gen__mark_tag_test_cost_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 1);
	MR_r1 = MR_ctfield(0, MR_ctfield(0, MR_r1, 0), 1);
	}
	MR_np_call_localret_ent(fn__backend_libs__switch_util__estimate_switch_tag_test_cost_1_0,
		ml_backend__ml_switch_gen__mark_tag_test_cost_2_0_i2);
MR_def_label(ml_backend__ml_switch_gen__mark_tag_test_cost_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, tagged_cons_id);
	MR_r2 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,4,3);
	MR_r4 = MR_sv(2);
	MR_r5 = ((MR_Integer) 0 + (MR_Integer) MR_tempr1);
	}
	MR_np_call_localret_ent(list__foldl_4_0,
		ml_backend__ml_switch_gen__mark_tag_test_cost_2_0_i4);
MR_def_label(ml_backend__ml_switch_gen__mark_tag_test_cost_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(1);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__ml_backend__ml_switch_gen_maybe_bunch_0(void)
{
	ml_backend__ml_switch_gen_module0();
	ml_backend__ml_switch_gen_module1();
	ml_backend__ml_switch_gen_module2();
	ml_backend__ml_switch_gen_module3();
	ml_backend__ml_switch_gen_module4();
	ml_backend__ml_switch_gen_module5();
	ml_backend__ml_switch_gen_module6();
	ml_backend__ml_switch_gen_module7();
	ml_backend__ml_switch_gen_module8();
	ml_backend__ml_switch_gen_module9();
	ml_backend__ml_switch_gen_module10();
	ml_backend__ml_switch_gen_module11();
	ml_backend__ml_switch_gen_module12();
	ml_backend__ml_switch_gen_module13();
	ml_backend__ml_switch_gen_module14();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__ml_backend__ml_switch_gen__init(void);
void mercury__ml_backend__ml_switch_gen__init_type_tables(void);
void mercury__ml_backend__ml_switch_gen__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__ml_backend__ml_switch_gen__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__ml_backend__ml_switch_gen__init_complexity_procs(void);
#endif

void mercury__ml_backend__ml_switch_gen__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__ml_backend__ml_switch_gen_maybe_bunch_0();
	mercury__ml_backend__ml_switch_gen__init_debugger();
}

void mercury__ml_backend__ml_switch_gen__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}


void mercury__ml_backend__ml_switch_gen__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__ml_backend__ml_switch_gen__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__ml_backend__ml_switch_gen);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__ml_backend__ml_switch_gen__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
