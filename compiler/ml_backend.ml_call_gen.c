/*
** Automatically generated from `ml_call_gen.m'
** by the Mercury compiler,
** version rotd-2012-03-21, configured for x86_64-unknown-linux-gnu.
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
INIT mercury__ml_backend__ml_call_gen__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 140 "../library/io.int2"
#include "io.mh"

#line 28 "ml_backend.ml_call_gen.c"
#line 150 "../library/io.int2"
#include "time.mh"

#line 32 "ml_backend.ml_call_gen.c"
#line 151 "../library/io.int2"
#include "string.mh"

#line 36 "ml_backend.ml_call_gen.c"
#line 33 "../library/array.int2"
#include "array.mh"

#line 40 "ml_backend.ml_call_gen.c"
#line 39 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 44 "ml_backend.ml_call_gen.c"
#line 31 "../library/bitmap.int2"
#include "bitmap.mh"

#line 48 "ml_backend.ml_call_gen.c"
#line 49 "ml_backend.ml_call_gen.c"
#include "ml_backend.ml_call_gen.mh"

#line 52 "ml_backend.ml_call_gen.c"
#line 53 "ml_backend.ml_call_gen.c"
#ifndef ML_BACKEND__ML_CALL_GEN_DECL_GUARD
#define ML_BACKEND__ML_CALL_GEN_DECL_GUARD

#line 57 "ml_backend.ml_call_gen.c"
#line 58 "ml_backend.ml_call_gen.c"

#endif
#line 61 "ml_backend.ml_call_gen.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_0 {
	MR_Integer f1;
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_0 mercury_common_0[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_1 {
	MR_Integer f1;
	MR_Word * f2;
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_2 {
	MR_Word * f1[2];
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_3 {
	MR_String f1;
	MR_Word * f2;
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_4 {
	MR_Word * f1;
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_common_4[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_5 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[12];
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_5 mercury_common_5[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_6 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[7];
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_6 mercury_common_6[];
MR_decl_label2(ml_backend__ml_call_gen__IntroducedFrom__pred__ml_gen_call__394__1_7_0, 2,3)
MR_decl_label2(ml_backend__ml_call_gen__IntroducedFrom__pred__ml_gen_main_generic_call__261__1_7_0, 2,3)
MR_decl_label10(ml_backend__ml_call_gen__ml_gen_arg_list_17_0, 2,14,15,16,17,19,22,24,28,21)
MR_decl_label10(ml_backend__ml_call_gen__ml_gen_arg_list_17_0, 31,32,33,34,35,39,38,45,37,47)
MR_decl_label2(ml_backend__ml_call_gen__ml_gen_arg_list_17_0, 30,8)
MR_decl_label10(ml_backend__ml_call_gen__ml_gen_builtin_9_0, 2,3,4,5,7,6,10,19,16,21)
MR_decl_label9(ml_backend__ml_call_gen__ml_gen_builtin_9_0, 14,25,27,26,12,40,41,39,37)
MR_decl_label10(ml_backend__ml_call_gen__ml_gen_call_12_0, 2,3,4,5,6,7,8,9,10,11)
MR_decl_label3(ml_backend__ml_call_gen__ml_gen_call_12_0, 12,18,19)
MR_decl_label10(ml_backend__ml_call_gen__ml_gen_cast_6_0, 2,3,14,15,17,19,20,16,24,26)
MR_decl_label2(ml_backend__ml_call_gen__ml_gen_cast_6_0, 22,4)
MR_decl_label5(ml_backend__ml_call_gen__ml_gen_cont_params_4_0, 2,3,6,8,5)
MR_decl_label4(ml_backend__ml_call_gen__ml_gen_cont_params_2_3_0, 21,4,5,9)
MR_decl_label7(ml_backend__ml_call_gen__ml_gen_copy_args_to_locals_2_6_0, 3,9,10,12,14,15,8)
MR_decl_label3(ml_backend__ml_call_gen__ml_gen_generic_call_9_0, 3,29,5)
MR_decl_label10(ml_backend__ml_call_gen__ml_gen_main_generic_call_9_0, 3,4,5,6,7,8,9,10,16,19)
MR_decl_label10(ml_backend__ml_call_gen__ml_gen_main_generic_call_9_0, 26,18,35,45,46,47,49,50,51,52)
MR_decl_label7(ml_backend__ml_call_gen__ml_gen_main_generic_call_9_0, 54,55,56,64,60,70,71)
MR_decl_label10(ml_backend__ml_call_gen__ml_gen_mlds_call_12_0, 2,4,6,7,9,14,15,16,18,5)
MR_decl_label5(ml_backend__ml_call_gen__ml_gen_mlds_call_12_0, 19,21,3,22,27)
MR_decl_label4(ml_backend__ml_call_gen__ml_gen_proc_addr_rval_5_0, 2,3,4,5)
MR_decl_label10(ml_backend__ml_call_gen__ml_gen_success_cont_7_0, 2,4,6,3,8,10,11,12,14,15)
MR_decl_label2(ml_backend__ml_call_gen__ml_gen_success_cont_7_0, 16,18)
MR_decl_label7(fn__ml_backend__ml_call_gen__ml_gen_simple_expr_1_0, 3,6,39,12,13,11,16)
MR_def_extern_entry(ml_backend__ml_call_gen__ml_gen_cast_6_0)
MR_decl_static(ml_backend__ml_call_gen__ml_gen_cont_params_2_3_0)
MR_def_extern_entry(ml_backend__ml_call_gen__ml_gen_cont_params_4_0)
MR_decl_static(ml_backend__ml_call_gen__ml_gen_copy_args_to_locals_2_6_0)
MR_decl_static(ml_backend__ml_call_gen__ml_gen_success_cont_7_0)
MR_decl_static(ml_backend__ml_call_gen__ml_gen_mlds_call_12_0)
MR_decl_static(ml_backend__ml_call_gen__ml_gen_arg_list_17_0)
MR_decl_static(ml_backend__ml_call_gen__ml_gen_main_generic_call_9_0)
MR_def_extern_entry(ml_backend__ml_call_gen__ml_gen_generic_call_9_0)
MR_def_extern_entry(ml_backend__ml_call_gen__ml_gen_proc_addr_rval_5_0)
MR_def_extern_entry(ml_backend__ml_call_gen__ml_gen_call_12_0)
MR_decl_static(fn__ml_backend__ml_call_gen__ml_gen_simple_expr_1_0)
MR_def_extern_entry(ml_backend__ml_call_gen__ml_gen_builtin_9_0)
MR_decl_static(ml_backend__ml_call_gen__IntroducedFrom__pred__ml_gen_call__394__1_7_0)
MR_decl_static(ml_backend__ml_call_gen__IntroducedFrom__pred__ml_gen_main_generic_call__261__1_7_0)

static const struct mercury_type_0 mercury_common_0[2] =
{
{
0
},
{
1
},
};

static const struct mercury_type_1 mercury_common_1[2] =
{
{
0,
MR_TAG_COMMON(2,0,0)
},
{
0,
MR_TAG_COMMON(2,0,1)
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_maybe__type_ctor_info_maybe_1;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_rval_0;
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_lval_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_defn_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_statement_0;
static const struct mercury_type_2 mercury_common_2[7] =
{
{
{
MR_CTOR1_ADDR(term, var),
MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type)
}
},
{
{
MR_CTOR1_ADDR(maybe, maybe),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_rval)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(ml_backend__mlds, mlds_rval)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(ml_backend__mlds, mlds_lval)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(ml_backend__mlds, mlds_type)
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
};

static const struct mercury_type_3 mercury_common_3[1] =
{
{
MR_string_const("closure_arg", 11),
MR_tbmkword(0, 0)
},
};

static const struct mercury_type_4 mercury_common_4[3] =
{
{
MR_TAG_COMMON(3,1,0)
},
{
MR_TAG_COMMON(3,1,1)
},
{
MR_tbmkword(0, 5)
},
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ml_call_gen__ml_gen_main_generic_call_9_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_func_signature_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_rval_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_determinism_0;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_context_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ml_gen_info__type_ctor_info_ml_gen_info_0;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ml_call_gen__ml_gen_call_12_0_1;
static const struct mercury_type_5 mercury_common_5[2] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__ml_call_gen__ml_gen_main_generic_call_9_0_1,
(MR_Word *) (MR_Integer) 0
},
12,
{
MR_CTOR0_ADDR(ml_backend__mlds, mlds_func_signature),
MR_COMMON(2,1),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_rval),
MR_COMMON(2,2),
MR_COMMON(2,3),
MR_COMMON(2,4),
MR_CTOR0_ADDR(parse_tree__prog_data, determinism),
MR_CTOR0_ADDR(term, context),
MR_COMMON(2,5),
MR_COMMON(2,6),
MR_CTOR0_ADDR(ml_backend__ml_gen_info, ml_gen_info),
MR_CTOR0_ADDR(ml_backend__ml_gen_info, ml_gen_info)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__ml_call_gen__ml_gen_call_12_0_1,
(MR_Word *) (MR_Integer) 0
},
12,
{
MR_CTOR0_ADDR(ml_backend__mlds, mlds_func_signature),
MR_COMMON(2,1),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_rval),
MR_COMMON(2,2),
MR_COMMON(2,3),
MR_COMMON(2,4),
MR_CTOR0_ADDR(parse_tree__prog_data, determinism),
MR_CTOR0_ADDR(term, context),
MR_COMMON(2,5),
MR_COMMON(2,6),
MR_CTOR0_ADDR(ml_backend__ml_gen_info, ml_gen_info),
MR_CTOR0_ADDR(ml_backend__ml_gen_info, ml_gen_info)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ml_call_gen__ml_gen_main_generic_call_9_0_2;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__code_model__type_ctor_info_code_model_0;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ml_call_gen__ml_gen_call_12_0_2;
static const struct mercury_type_6 mercury_common_6[2] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__ml_call_gen__ml_gen_main_generic_call_9_0_2,
(MR_Word *) (MR_Integer) 0
},
7,
{
MR_CTOR0_ADDR(term, context),
MR_CTOR0_ADDR(hlds__code_model, code_model),
MR_COMMON(2,6),
MR_COMMON(2,5),
MR_COMMON(2,6),
MR_CTOR0_ADDR(ml_backend__ml_gen_info, ml_gen_info),
MR_CTOR0_ADDR(ml_backend__ml_gen_info, ml_gen_info)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__ml_call_gen__ml_gen_call_12_0_2,
(MR_Word *) (MR_Integer) 0
},
7,
{
MR_CTOR0_ADDR(hlds__code_model, code_model),
MR_CTOR0_ADDR(term, context),
MR_COMMON(2,6),
MR_COMMON(2,5),
MR_COMMON(2,6),
MR_CTOR0_ADDR(ml_backend__ml_gen_info, ml_gen_info),
MR_CTOR0_ADDR(ml_backend__ml_gen_info, ml_gen_info)
}
},
};


static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ml_call_gen__ml_gen_call_12_0_2 = {
{
MR_PREDICATE,
"ml_backend.ml_call_gen",
"ml_backend.ml_call_gen",
"lambda_ml_call_gen_m_394",
7,
0
},
"ml_backend.ml_call_gen",
"ml_call_gen.m",
394,
"33"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ml_call_gen__ml_gen_call_12_0_1 = {
{
MR_PREDICATE,
"ml_backend.ml_call_gen",
"ml_backend.ml_call_gen",
"ml_gen_mlds_call",
12,
0
},
"ml_backend.ml_call_gen",
"ml_call_gen.m",
389,
"32"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ml_call_gen__ml_gen_main_generic_call_9_0_2 = {
{
MR_PREDICATE,
"ml_backend.ml_call_gen",
"ml_backend.ml_call_gen",
"lambda_ml_call_gen_m_261",
7,
0
},
"ml_backend.ml_call_gen",
"ml_call_gen.m",
261,
"105"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ml_call_gen__ml_gen_main_generic_call_9_0_1 = {
{
MR_PREDICATE,
"ml_backend.ml_call_gen",
"ml_backend.ml_call_gen",
"ml_gen_mlds_call",
12,
0
},
"ml_backend.ml_call_gen",
"ml_call_gen.m",
255,
"103"
};


MR_decl_entry(ml_backend__ml_code_util__ml_gen_var_list_3_0);
MR_decl_entry(ml_backend__ml_code_util__ml_variable_types_3_0);
MR_decl_entry(ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_0);
MR_decl_entry(fn__check_hlds__type_util__check_dummy_type_2_0);
MR_decl_entry(ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_0);
MR_decl_entry(fn__ml_backend__ml_code_util__ml_gen_assign_3_0);
MR_decl_entry(ml_backend__ml_gen_info__ml_gen_info_search_const_var_3_0);
MR_decl_entry(ml_backend__ml_gen_info__ml_gen_info_set_const_var_4_0);
MR_decl_entry(require__unexpected_3_0);

MR_BEGIN_MODULE(ml_backend__ml_call_gen_module0)
	MR_init_entry1(ml_backend__ml_call_gen__ml_gen_cast_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_call_gen__ml_gen_cast_6_0);
	MR_init_label10(ml_backend__ml_call_gen__ml_gen_cast_6_0,2,3,14,15,17,19,20,16,24,26)
	MR_init_label2(ml_backend__ml_call_gen__ml_gen_cast_6_0,22,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ml_gen_cast'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ml_backend__ml_call_gen__ml_gen_cast_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(9) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_var_list_3_0,
		ml_backend__ml_call_gen__ml_gen_cast_6_0_i2);
MR_def_label(ml_backend__ml_call_gen__ml_gen_cast_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_variable_types_3_0,
		ml_backend__ml_call_gen__ml_gen_cast_6_0_i3);
MR_def_label(ml_backend__ml_call_gen__ml_gen_cast_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(2),0,0)) {
		MR_GOTO_LAB(ml_backend__ml_call_gen__ml_gen_cast_6_0_i4);
	}
	MR_r2 = MR_tfield(1, MR_sv(2), 1);
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(ml_backend__ml_call_gen__ml_gen_cast_6_0_i4);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_tfield(1, MR_r2, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(ml_backend__ml_call_gen__ml_gen_cast_6_0_i4);
	}
	if (MR_LTAGS_TEST(MR_sv(3),0,0)) {
		MR_GOTO_LAB(ml_backend__ml_call_gen__ml_gen_cast_6_0_i4);
	}
	MR_tempr4 = MR_sv(3);
	MR_tempr1 = MR_tfield(1, MR_tempr4, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(ml_backend__ml_call_gen__ml_gen_cast_6_0_i4);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_tempr2,0,0)) {
		MR_GOTO_LAB(ml_backend__ml_call_gen__ml_gen_cast_6_0_i4);
	}
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ml_backend__ml_call_gen__ml_gen_cast_6_0_i4);
	}
	MR_tempr2 = MR_tfield(1, MR_r1, 1);
	if (MR_LTAGS_TEST(MR_tempr2,0,0)) {
		MR_GOTO_LAB(ml_backend__ml_call_gen__ml_gen_cast_6_0_i4);
	}
	MR_tempr3 = MR_tfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_tempr3,0,0)) {
		MR_GOTO_LAB(ml_backend__ml_call_gen__ml_gen_cast_6_0_i4);
	}
	MR_sv(2) = MR_tfield(1, MR_sv(2), 0);
	MR_tempr3 = MR_tempr4;
	MR_sv(3) = MR_tfield(1, MR_r2, 0);
	MR_sv(4) = MR_tfield(1, MR_tempr3, 0);
	MR_sv(5) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(6) = MR_tfield(1, MR_r1, 0);
	MR_sv(7) = MR_tfield(1, MR_tempr2, 0);
	MR_r1 = MR_sv(9);
	}
	MR_np_call_localret_ent(ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_0,
		ml_backend__ml_call_gen__ml_gen_cast_6_0_i14);
MR_def_label(ml_backend__ml_call_gen__ml_gen_cast_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(fn__check_hlds__type_util__check_dummy_type_2_0,
		ml_backend__ml_call_gen__ml_gen_cast_6_0_i15);
MR_def_label(ml_backend__ml_call_gen__ml_gen_cast_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ml_backend__ml_call_gen__ml_gen_cast_6_0_i17);
	}
	MR_sv(1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_sv(2);
	MR_r1 = MR_sv(9);
	MR_GOTO_LAB(ml_backend__ml_call_gen__ml_gen_cast_6_0_i16);
MR_def_label(ml_backend__ml_call_gen__ml_gen_cast_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r5, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r5, 0) = MR_sv(4);
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(7);
	MR_r4 = (MR_Integer) 0;
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_0,
		ml_backend__ml_call_gen__ml_gen_cast_6_0_i19);
MR_def_label(ml_backend__ml_call_gen__ml_gen_cast_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	}
	MR_np_call_localret_ent(fn__ml_backend__ml_code_util__ml_gen_assign_3_0,
		ml_backend__ml_call_gen__ml_gen_cast_6_0_i20);
MR_def_label(ml_backend__ml_call_gen__ml_gen_cast_6_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_sv(1) = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_sv(2);
	MR_r1 = MR_sv(9);
	}
MR_def_label(ml_backend__ml_call_gen__ml_gen_cast_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_np_call_localret_ent(ml_backend__ml_gen_info__ml_gen_info_search_const_var_3_0,
		ml_backend__ml_call_gen__ml_gen_cast_6_0_i24);
MR_def_label(ml_backend__ml_call_gen__ml_gen_cast_6_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ml_backend__ml_call_gen__ml_gen_cast_6_0_i22);
	}
	MR_r1 = MR_sv(3);
	MR_r3 = MR_sv(9);
	MR_np_call_localret_ent(ml_backend__ml_gen_info__ml_gen_info_set_const_var_4_0,
		ml_backend__ml_call_gen__ml_gen_cast_6_0_i26);
MR_def_label(ml_backend__ml_call_gen__ml_gen_cast_6_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_decr_sp_and_return(10);
	}
MR_def_label(ml_backend__ml_call_gen__ml_gen_cast_6_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(9);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_decr_sp_and_return(10);
	}
MR_def_label(ml_backend__ml_call_gen__ml_gen_cast_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ml_backend.ml_call_gen", 22);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ml_backend.ml_call_gen.ml_gen_cast\'/6", 48);
	MR_r3 = (MR_Word) MR_string_const("wrong number of args for cast", 29);
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__string__int_to_string_1_0);
MR_decl_entry(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);

MR_BEGIN_MODULE(ml_backend__ml_call_gen_module1)
	MR_init_entry1(ml_backend__ml_call_gen__ml_gen_cont_params_2_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_call_gen__ml_gen_cont_params_2_3_0);
	MR_init_label4(ml_backend__ml_call_gen__ml_gen_cont_params_2_3_0,21,4,5,9)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ml_gen_cont_params_2'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ml_call_gen__ml_gen_cont_params_2_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ml_backend__ml_call_gen__ml_gen_cont_params_2_3_0_i21);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(ml_backend__ml_call_gen__ml_gen_cont_params_2_3_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(3) = MR_r2;
	MR_sv(1) = MR_tfield(1, MR_r1, 0);
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		ml_backend__ml_call_gen__ml_gen_cont_params_2_3_0_i4);
MR_def_label(ml_backend__ml_call_gen__ml_gen_cont_params_2_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("arg", 3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ml_backend__ml_call_gen__ml_gen_cont_params_2_3_0_i5);
MR_def_label(ml_backend__ml_call_gen__ml_gen_cont_params_2_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_tmkword(1, (MR_Word *) MR_tempr1);
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_tempr2 = MR_sv(3);
	MR_sv(3) = MR_tempr1;
	MR_r1 = MR_sv(2);
	MR_r2 = ((MR_Integer) MR_tempr2 + (MR_Integer) 1);
	}
	MR_np_localcall_lab(ml_backend__ml_call_gen__ml_gen_cont_params_2_3_0,
		ml_backend__ml_call_gen__ml_gen_cont_params_2_3_0_i9);
MR_def_label(ml_backend__ml_call_gen__ml_gen_cont_params_2_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(3);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(ml_backend__ml_gen_info__ml_gen_info_use_gcc_nested_functions_2_0);
MR_decl_entry(ml_backend__ml_code_util__ml_declare_env_ptr_arg_1_0);
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_argument_0;
MR_decl_entry(fn__list__append_2_0);

MR_BEGIN_MODULE(ml_backend__ml_call_gen_module2)
	MR_init_entry1(ml_backend__ml_call_gen__ml_gen_cont_params_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_call_gen__ml_gen_cont_params_4_0);
	MR_init_label5(ml_backend__ml_call_gen__ml_gen_cont_params_4_0,2,3,6,8,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ml_gen_cont_params'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ml_backend__ml_call_gen__ml_gen_cont_params_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r2;
	MR_r2 = (MR_Integer) 1;
	MR_np_call_localret_ent(ml_backend__ml_call_gen__ml_gen_cont_params_2_3_0,
		ml_backend__ml_call_gen__ml_gen_cont_params_4_0_i2);
MR_def_label(ml_backend__ml_call_gen__ml_gen_cont_params_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ml_backend__ml_gen_info__ml_gen_info_use_gcc_nested_functions_2_0,
		ml_backend__ml_call_gen__ml_gen_cont_params_4_0_i3);
MR_def_label(ml_backend__ml_call_gen__ml_gen_cont_params_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ml_backend__ml_call_gen__ml_gen_cont_params_4_0_i5);
	}
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_declare_env_ptr_arg_1_0,
		ml_backend__ml_call_gen__ml_gen_cont_params_4_0_i6);
MR_def_label(ml_backend__ml_call_gen__ml_gen_cont_params_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_argument);
	MR_r2 = MR_sv(1);
	}
	MR_np_call_localret_ent(fn__list__append_2_0,
		ml_backend__ml_call_gen__ml_gen_cont_params_4_0_i8);
MR_def_label(ml_backend__ml_call_gen__ml_gen_cont_params_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	MR_decr_sp_and_return(3);
	}
MR_def_label(ml_backend__ml_call_gen__ml_gen_cont_params_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_sv(1);
	MR_tfield(0, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_sv(2);
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(ml_backend__ml_code_util__ml_gen_var_lval_4_0);

MR_BEGIN_MODULE(ml_backend__ml_call_gen_module3)
	MR_init_entry1(ml_backend__ml_call_gen__ml_gen_copy_args_to_locals_2_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_call_gen__ml_gen_copy_args_to_locals_2_6_0);
	MR_init_label7(ml_backend__ml_call_gen__ml_gen_copy_args_to_locals_2_6_0,3,9,10,12,14,15,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ml_gen_copy_args_to_locals_2'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ml_call_gen__ml_gen_copy_args_to_locals_2_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(ml_backend__ml_call_gen__ml_gen_copy_args_to_locals_2_6_0_i3);
	}
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(ml_backend__ml_call_gen__ml_gen_copy_args_to_locals_2_6_0_i8);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(ml_backend__ml_call_gen__ml_gen_copy_args_to_locals_2_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO_LAB(ml_backend__ml_call_gen__ml_gen_copy_args_to_locals_2_6_0_i8);
	}
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(5) = MR_r1;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r4;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r5;
	MR_tempr2 = MR_r3;
	MR_sv(3) = MR_tfield(1, MR_tempr2, 0);
	MR_sv(4) = MR_tfield(1, MR_tempr2, 1);
	MR_sv(6) = MR_tfield(1, MR_r2, 1);
	MR_sv(7) = MR_tfield(1, MR_r2, 0);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		ml_backend__ml_call_gen__ml_gen_copy_args_to_locals_2_6_0_i9);
MR_def_label(ml_backend__ml_call_gen__ml_gen_copy_args_to_locals_2_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("arg", 3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ml_backend__ml_call_gen__ml_gen_copy_args_to_locals_2_6_0_i10);
MR_def_label(ml_backend__ml_call_gen__ml_gen_copy_args_to_locals_2_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_sv(5);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_var_lval_4_0,
		ml_backend__ml_call_gen__ml_gen_copy_args_to_locals_2_6_0_i12);
MR_def_label(ml_backend__ml_call_gen__ml_gen_copy_args_to_locals_2_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(fn__ml_backend__ml_code_util__ml_gen_assign_3_0,
		ml_backend__ml_call_gen__ml_gen_copy_args_to_locals_2_6_0_i14);
MR_def_label(ml_backend__ml_call_gen__ml_gen_copy_args_to_locals_2_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(4);
	MR_r4 = ((MR_Integer) MR_sv(1) + (MR_Integer) 1);
	MR_r5 = MR_sv(2);
	}
	MR_np_localcall_lab(ml_backend__ml_call_gen__ml_gen_copy_args_to_locals_2_6_0,
		ml_backend__ml_call_gen__ml_gen_copy_args_to_locals_2_6_0_i15);
MR_def_label(ml_backend__ml_call_gen__ml_gen_copy_args_to_locals_2_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(8);
	}
MR_def_label(ml_backend__ml_call_gen__ml_gen_copy_args_to_locals_2_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ml_backend.ml_call_gen", 22);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ml_backend.ml_call_gen.ml_gen_copy_args_to_locals_2\'/6", 65);
	MR_r3 = (MR_Word) MR_string_const("length mismatch", 15);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(ml_backend__ml_gen_info__ml_gen_info_current_success_cont_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_type_0;
MR_decl_entry(__Unify___list__list_1_0);
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_lval_0;
MR_decl_entry(ml_backend__ml_code_util__ml_gen_new_func_label_5_0);
MR_decl_entry(ml_backend__ml_code_util__ml_gen_call_current_success_cont_4_0);
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_statement_0;
MR_decl_entry(fn__f_108_105_115_116_95_95_43_43_2_0);
MR_decl_entry(fn__ml_backend__ml_code_util__ml_gen_block_3_0);
MR_decl_entry(ml_backend__ml_code_util__ml_gen_label_func_6_0);
MR_decl_entry(ml_backend__ml_code_util__ml_get_env_ptr_2_0);

MR_BEGIN_MODULE(ml_backend__ml_call_gen_module4)
	MR_init_entry1(ml_backend__ml_call_gen__ml_gen_success_cont_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_call_gen__ml_gen_success_cont_7_0);
	MR_init_label10(ml_backend__ml_call_gen__ml_gen_success_cont_7_0,2,4,6,3,8,10,11,12,14,15)
	MR_init_label2(ml_backend__ml_call_gen__ml_gen_success_cont_7_0,16,18)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ml_gen_success_cont'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ml_call_gen__ml_gen_success_cont_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(6) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__ml_gen_info__ml_gen_info_current_success_cont_2_0,
		ml_backend__ml_call_gen__ml_gen_success_cont_7_0_i2);
MR_def_label(ml_backend__ml_call_gen__ml_gen_success_cont_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_tfield(0, MR_r1, 3);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_type);
	MR_r2 = MR_tfield(0, MR_sv(4), 2);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		ml_backend__ml_call_gen__ml_gen_success_cont_7_0_i4);
MR_def_label(ml_backend__ml_call_gen__ml_gen_success_cont_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ml_backend__ml_call_gen__ml_gen_success_cont_7_0_i3);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_lval);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		ml_backend__ml_call_gen__ml_gen_success_cont_7_0_i6);
MR_def_label(ml_backend__ml_call_gen__ml_gen_success_cont_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ml_backend__ml_call_gen__ml_gen_success_cont_7_0_i3);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_sv(6);
	MR_decr_sp_and_return(8);
MR_def_label(ml_backend__ml_call_gen__ml_gen_success_cont_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(ml_backend__ml_call_gen__ml_gen_cont_params_4_0,
		ml_backend__ml_call_gen__ml_gen_success_cont_7_0_i8);
MR_def_label(ml_backend__ml_call_gen__ml_gen_success_cont_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_sv(4) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_new_func_label_5_0,
		ml_backend__ml_call_gen__ml_gen_success_cont_7_0_i10);
MR_def_label(ml_backend__ml_call_gen__ml_gen_success_cont_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(7) = MR_tempr1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_r4 = (MR_Integer) 1;
	MR_r5 = MR_sv(3);
	}
	MR_np_call_localret_ent(ml_backend__ml_call_gen__ml_gen_copy_args_to_locals_2_6_0,
		ml_backend__ml_call_gen__ml_gen_success_cont_7_0_i11);
MR_def_label(ml_backend__ml_call_gen__ml_gen_success_cont_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_call_current_success_cont_4_0,
		ml_backend__ml_call_gen__ml_gen_success_cont_7_0_i12);
MR_def_label(ml_backend__ml_call_gen__ml_gen_success_cont_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tempr2 = MR_sv(7);
	MR_sv(7) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, statement);
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ml_backend__ml_call_gen__ml_gen_success_cont_7_0_i14);
MR_def_label(ml_backend__ml_call_gen__ml_gen_success_cont_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(fn__ml_backend__ml_code_util__ml_gen_block_3_0,
		ml_backend__ml_call_gen__ml_gen_success_cont_7_0_i15);
MR_def_label(ml_backend__ml_call_gen__ml_gen_success_cont_7_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_label_func_6_0,
		ml_backend__ml_call_gen__ml_gen_success_cont_7_0_i16);
MR_def_label(ml_backend__ml_call_gen__ml_gen_success_cont_7_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_sv(3) = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_sv(7);
	}
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_get_env_ptr_2_0,
		ml_backend__ml_call_gen__ml_gen_success_cont_7_0_i18);
MR_def_label(ml_backend__ml_call_gen__ml_gen_success_cont_7_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tfield(0, MR_tempr1, 2) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 3) = MR_sv(2);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(7);
	MR_decr_sp_and_return(8);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__code_model__determinism_to_code_model_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_rval_0;
MR_decl_entry(ml_backend__ml_gen_info__ml_gen_info_get_globals_2_0);
MR_decl_entry(libs__globals__lookup_bool_option_3_0);
MR_decl_entry(ml_backend__ml_code_util__ml_success_lval_2_0);
MR_decl_entry(fn__ml_backend__mlds__mlds_make_context_1_0);

MR_BEGIN_MODULE(ml_backend__ml_call_gen_module5)
	MR_init_entry1(ml_backend__ml_call_gen__ml_gen_mlds_call_12_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_call_gen__ml_gen_mlds_call_12_0);
	MR_init_label10(ml_backend__ml_call_gen__ml_gen_mlds_call_12_0,2,4,6,7,9,14,15,16,18,5)
	MR_init_label5(ml_backend__ml_call_gen__ml_gen_mlds_call_12_0,19,21,3,22,27)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ml_gen_mlds_call'/12 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ml_call_gen__ml_gen_mlds_call_12_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
	MR_sv(9) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(8) = MR_r4;
	MR_sv(3) = MR_r5;
	MR_sv(6) = MR_r6;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r7;
	MR_sv(4) = MR_tempr1;
	MR_sv(5) = MR_r8;
	MR_sv(10) = MR_r9;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__code_model__determinism_to_code_model_2_0,
		ml_backend__ml_call_gen__ml_gen_mlds_call_12_0_i2);
MR_def_label(ml_backend__ml_call_gen__ml_gen_mlds_call_12_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ml_backend__ml_call_gen__ml_gen_mlds_call_12_0_i4);
	}
	MR_r1 = MR_sv(5);
	MR_sv(6) = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_sv(3);
	MR_sv(11) = MR_sv(10);
	MR_GOTO_LAB(ml_backend__ml_call_gen__ml_gen_mlds_call_12_0_i3);
MR_def_label(ml_backend__ml_call_gen__ml_gen_mlds_call_12_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,2)) {
		MR_GOTO_LAB(ml_backend__ml_call_gen__ml_gen_mlds_call_12_0_i5);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(10);
	MR_np_call_localret_ent(ml_backend__ml_call_gen__ml_gen_success_cont_7_0,
		ml_backend__ml_call_gen__ml_gen_mlds_call_12_0_i6);
MR_def_label(ml_backend__ml_call_gen__ml_gen_mlds_call_12_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r2;
	MR_sv(10) = MR_tfield(0, MR_r1, 0);
	MR_sv(7) = MR_tfield(0, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(11) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__ml_gen_info__ml_gen_info_use_gcc_nested_functions_2_0,
		ml_backend__ml_call_gen__ml_gen_mlds_call_12_0_i7);
MR_def_label(ml_backend__ml_call_gen__ml_gen_mlds_call_12_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ml_backend__ml_call_gen__ml_gen_mlds_call_12_0_i9);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(7);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_sv(10);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_rval);
	MR_r2 = MR_sv(8);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ml_backend__ml_call_gen__ml_gen_mlds_call_12_0_i14);
MR_def_label(ml_backend__ml_call_gen__ml_gen_mlds_call_12_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(10);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_rval);
	MR_r2 = MR_sv(8);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ml_backend__ml_call_gen__ml_gen_mlds_call_12_0_i14);
MR_def_label(ml_backend__ml_call_gen__ml_gen_mlds_call_12_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(11);
	MR_np_call_localret_ent(ml_backend__ml_gen_info__ml_gen_info_get_globals_2_0,
		ml_backend__ml_call_gen__ml_gen_mlds_call_12_0_i15);
MR_def_label(ml_backend__ml_call_gen__ml_gen_mlds_call_12_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 248;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		ml_backend__ml_call_gen__ml_gen_mlds_call_12_0_i16);
MR_def_label(ml_backend__ml_call_gen__ml_gen_mlds_call_12_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ml_backend__ml_call_gen__ml_gen_mlds_call_12_0_i18);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(3);
	MR_GOTO_LAB(ml_backend__ml_call_gen__ml_gen_mlds_call_12_0_i3);
MR_def_label(ml_backend__ml_call_gen__ml_gen_mlds_call_12_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_GOTO_LAB(ml_backend__ml_call_gen__ml_gen_mlds_call_12_0_i3);
MR_def_label(ml_backend__ml_call_gen__ml_gen_mlds_call_12_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(10);
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_success_lval_2_0,
		ml_backend__ml_call_gen__ml_gen_mlds_call_12_0_i19);
MR_def_label(ml_backend__ml_call_gen__ml_gen_mlds_call_12_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_lval);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(fn__list__append_2_0,
		ml_backend__ml_call_gen__ml_gen_mlds_call_12_0_i21);
MR_def_label(ml_backend__ml_call_gen__ml_gen_mlds_call_12_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_sv(6) = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_tempr1;
	MR_sv(11) = MR_sv(10);
	}
MR_def_label(ml_backend__ml_call_gen__ml_gen_mlds_call_12_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(4),6)) {
		MR_GOTO_LAB(ml_backend__ml_call_gen__ml_gen_mlds_call_12_0_i22);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 7);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(9);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 4) = MR_sv(8);
	MR_tfield(3, MR_tempr1, 5) = MR_r2;
	MR_tfield(3, MR_tempr1, 6) = (MR_Integer) 0;
	MR_sv(9) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_make_context_1_0,
		ml_backend__ml_call_gen__ml_gen_mlds_call_12_0_i27);
MR_def_label(ml_backend__ml_call_gen__ml_gen_mlds_call_12_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 7);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(9);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 4) = MR_sv(8);
	MR_tfield(3, MR_tempr1, 5) = MR_r2;
	MR_tfield(3, MR_tempr1, 6) = (MR_Integer) 2;
	MR_sv(9) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_make_context_1_0,
		ml_backend__ml_call_gen__ml_gen_mlds_call_12_0_i27);
MR_def_label(ml_backend__ml_call_gen__ml_gen_mlds_call_12_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(9);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr1;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_sv(6);
	MR_r3 = MR_sv(11);
	MR_decr_sp_and_return(12);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(check_hlds__mode_util__mode_to_arg_mode_4_0);
MR_decl_entry(ml_backend__ml_code_util__ml_gen_box_or_unbox_lval_14_0);
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_defn_0;
MR_decl_entry(fn__ml_backend__ml_code_util__get_copy_out_option_2_0);
MR_decl_entry(ml_backend__ml_code_util__ml_gen_type_3_0);

MR_BEGIN_MODULE(ml_backend__ml_call_gen_module6)
	MR_init_entry1(ml_backend__ml_call_gen__ml_gen_arg_list_17_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_call_gen__ml_gen_arg_list_17_0);
	MR_init_label10(ml_backend__ml_call_gen__ml_gen_arg_list_17_0,2,14,15,16,17,19,22,24,28,21)
	MR_init_label10(ml_backend__ml_call_gen__ml_gen_arg_list_17_0,31,32,33,34,35,39,38,45,37,47)
	MR_init_label2(ml_backend__ml_call_gen__ml_gen_arg_list_17_0,30,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ml_gen_arg_list'/17 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ml_call_gen__ml_gen_arg_list_17_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ml_backend__ml_call_gen__ml_gen_arg_list_17_0_i2);
	}
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(ml_backend__ml_call_gen__ml_gen_arg_list_17_0_i2);
	}
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(ml_backend__ml_call_gen__ml_gen_arg_list_17_0_i2);
	}
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(ml_backend__ml_call_gen__ml_gen_arg_list_17_0_i2);
	}
	if (MR_LTAGS_TESTR(MR_r5,0,0)) {
		MR_GOTO_LAB(ml_backend__ml_call_gen__ml_gen_arg_list_17_0_i2);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	MR_r6 = MR_r11;
	MR_proceed();
MR_def_label(ml_backend__ml_call_gen__ml_gen_arg_list_17_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ml_backend__ml_call_gen__ml_gen_arg_list_17_0_i8);
	}
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(ml_backend__ml_call_gen__ml_gen_arg_list_17_0_i8);
	}
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO_LAB(ml_backend__ml_call_gen__ml_gen_arg_list_17_0_i8);
	}
	if (MR_LTAGS_TEST(MR_r4,0,0)) {
		MR_GOTO_LAB(ml_backend__ml_call_gen__ml_gen_arg_list_17_0_i8);
	}
	if (MR_LTAGS_TEST(MR_r5,0,0)) {
		MR_GOTO_LAB(ml_backend__ml_call_gen__ml_gen_arg_list_17_0_i8);
	}
	MR_incr_sp(19);
	MR_sv(19) = (MR_Word) MR_succip;
	MR_sv(10) = MR_r6;
	MR_sv(2) = MR_r7;
	MR_sv(9) = MR_r8;
	MR_sv(11) = MR_r9;
	MR_sv(12) = MR_r10;
	MR_sv(1) = MR_tfield(1, MR_r1, 0);
	MR_sv(3) = MR_tfield(1, MR_r1, 1);
	MR_sv(4) = MR_tfield(1, MR_r2, 0);
	MR_sv(5) = MR_tfield(1, MR_r3, 0);
	MR_sv(6) = MR_tfield(1, MR_r4, 0);
	MR_sv(7) = MR_tfield(1, MR_r5, 0);
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tfield(1, MR_r2, 1);
	MR_r3 = MR_tfield(1, MR_r3, 1);
	MR_r4 = MR_tfield(1, MR_r4, 1);
	MR_r5 = MR_tfield(1, MR_r5, 1);
	MR_r10 = ((MR_Integer) MR_r10 + (MR_Integer) 1);
	MR_np_localcall_lab(ml_backend__ml_call_gen__ml_gen_arg_list_17_0,
		ml_backend__ml_call_gen__ml_gen_arg_list_17_0_i14);
MR_def_label(ml_backend__ml_call_gen__ml_gen_arg_list_17_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(13) = MR_r1;
	MR_sv(14) = MR_r2;
	MR_sv(15) = MR_r3;
	MR_sv(16) = MR_r4;
	MR_sv(17) = MR_r5;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r6;
	MR_sv(18) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_0,
		ml_backend__ml_call_gen__ml_gen_arg_list_17_0_i15);
MR_def_label(ml_backend__ml_call_gen__ml_gen_arg_list_17_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(6);
	}
	MR_np_call_localret_ent(check_hlds__mode_util__mode_to_arg_mode_4_0,
		ml_backend__ml_call_gen__ml_gen_arg_list_17_0_i16);
MR_def_label(ml_backend__ml_call_gen__ml_gen_arg_list_17_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(fn__check_hlds__type_util__check_dummy_type_2_0,
		ml_backend__ml_call_gen__ml_gen_arg_list_17_0_i17);
MR_def_label(ml_backend__ml_call_gen__ml_gen_arg_list_17_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ml_backend__ml_call_gen__ml_gen_arg_list_17_0_i19);
	}
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(14);
	MR_r3 = MR_sv(15);
	MR_r4 = MR_sv(16);
	MR_r5 = MR_sv(17);
	MR_r6 = MR_sv(18);
	MR_decr_sp_and_return(19);
MR_def_label(ml_backend__ml_call_gen__ml_gen_arg_list_17_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(8),0)) {
		MR_GOTO_LAB(ml_backend__ml_call_gen__ml_gen_arg_list_17_0_i21);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(fn__check_hlds__type_util__check_dummy_type_2_0,
		ml_backend__ml_call_gen__ml_gen_arg_list_17_0_i22);
MR_def_label(ml_backend__ml_call_gen__ml_gen_arg_list_17_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ml_backend__ml_call_gen__ml_gen_arg_list_17_0_i24);
	}
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(6);
	MR_r1 = MR_sv(7);
	MR_r5 = (MR_Word) MR_TAG_COMMON(3,1,0);
	MR_r4 = (MR_Integer) 0;
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_0,
		ml_backend__ml_call_gen__ml_gen_arg_list_17_0_i28);
MR_def_label(ml_backend__ml_call_gen__ml_gen_arg_list_17_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r5, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r5, 0) = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(6);
	MR_r1 = MR_sv(7);
	MR_r4 = (MR_Integer) 0;
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_0,
		ml_backend__ml_call_gen__ml_gen_arg_list_17_0_i28);
MR_def_label(ml_backend__ml_call_gen__ml_gen_arg_list_17_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(13);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(14);
	MR_r3 = MR_sv(15);
	MR_r4 = MR_sv(16);
	MR_r5 = MR_sv(17);
	MR_r6 = MR_sv(18);
	MR_decr_sp_and_return(19);
	}
MR_def_label(ml_backend__ml_call_gen__ml_gen_arg_list_17_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(8),1)) {
		MR_GOTO_LAB(ml_backend__ml_call_gen__ml_gen_arg_list_17_0_i30);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(6);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(1);
	MR_r6 = MR_sv(9);
	MR_r7 = MR_sv(11);
	MR_r8 = MR_sv(12);
	MR_r9 = MR_sv(18);
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_box_or_unbox_lval_14_0,
		ml_backend__ml_call_gen__ml_gen_arg_list_17_0_i31);
MR_def_label(ml_backend__ml_call_gen__ml_gen_arg_list_17_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_sv(11) = MR_r4;
	MR_sv(1) = MR_r5;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn);
	MR_r3 = MR_sv(16);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ml_backend__ml_call_gen__ml_gen_arg_list_17_0_i32);
MR_def_label(ml_backend__ml_call_gen__ml_gen_arg_list_17_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(11);
	MR_sv(11) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, statement);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(17);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ml_backend__ml_call_gen__ml_gen_arg_list_17_0_i33);
MR_def_label(ml_backend__ml_call_gen__ml_gen_arg_list_17_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ml_backend__ml_gen_info__ml_gen_info_get_globals_2_0,
		ml_backend__ml_call_gen__ml_gen_arg_list_17_0_i34);
MR_def_label(ml_backend__ml_call_gen__ml_gen_arg_list_17_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(fn__ml_backend__ml_code_util__get_copy_out_option_2_0,
		ml_backend__ml_call_gen__ml_gen_arg_list_17_0_i35);
MR_def_label(ml_backend__ml_call_gen__ml_gen_arg_list_17_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(ml_backend__ml_call_gen__ml_gen_arg_list_17_0_i39);
	}
	MR_r2 = MR_sv(6);
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(ml_backend__ml_call_gen__ml_gen_arg_list_17_0_i38);
MR_def_label(ml_backend__ml_call_gen__ml_gen_arg_list_17_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(3),0,0)) {
		MR_GOTO_LAB(ml_backend__ml_call_gen__ml_gen_arg_list_17_0_i37);
	}
	if (MR_INT_NE(MR_sv(2),0)) {
		MR_GOTO_LAB(ml_backend__ml_call_gen__ml_gen_arg_list_17_0_i37);
	}
	if (MR_INT_NE(MR_sv(10),1)) {
		MR_GOTO_LAB(ml_backend__ml_call_gen__ml_gen_arg_list_17_0_i37);
	}
	MR_r2 = MR_sv(6);
	MR_r1 = MR_sv(1);
MR_def_label(ml_backend__ml_call_gen__ml_gen_arg_list_17_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_sv(10) = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(9);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(14);
	MR_sv(1) = MR_r1;
	}
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_type_3_0,
		ml_backend__ml_call_gen__ml_gen_arg_list_17_0_i45);
MR_def_label(ml_backend__ml_call_gen__ml_gen_arg_list_17_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(15);
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(10);
	MR_r4 = MR_sv(11);
	MR_r5 = MR_sv(12);
	MR_r6 = MR_sv(1);
	MR_decr_sp_and_return(19);
	}
MR_def_label(ml_backend__ml_call_gen__ml_gen_arg_list_17_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(9),1)) {
		MR_GOTO_LAB(ml_backend__ml_call_gen__ml_gen_arg_list_17_0_i47);
	}
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_tfield(1, MR_sv(9), 0);
	MR_tfield(1, MR_r1, 1) = MR_sv(13);
	MR_r2 = MR_sv(14);
	MR_r3 = MR_sv(15);
	MR_r4 = MR_sv(11);
	MR_r5 = MR_sv(12);
	MR_r6 = MR_sv(1);
	MR_decr_sp_and_return(19);
MR_def_label(ml_backend__ml_call_gen__ml_gen_arg_list_17_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(9);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_tfield(1, MR_r1, 1) = MR_sv(13);
	MR_r2 = MR_sv(14);
	MR_r3 = MR_sv(15);
	MR_r4 = MR_sv(11);
	MR_r5 = MR_sv(12);
	MR_r6 = MR_sv(1);
	MR_decr_sp_and_return(19);
	}
MR_def_label(ml_backend__ml_call_gen__ml_gen_arg_list_17_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(14);
	MR_r3 = MR_sv(15);
	MR_r4 = MR_sv(16);
	MR_r5 = MR_sv(17);
	MR_r6 = MR_sv(18);
	MR_decr_sp_and_return(19);
MR_def_label(ml_backend__ml_call_gen__ml_gen_arg_list_17_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ml_backend.ml_call_gen", 22);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ml_backend.ml_call_gen.ml_gen_arg_list\'/17", 53);
	MR_r3 = (MR_Word) MR_string_const("length mismatch", 15);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__list__length_1_0);
MR_decl_entry(fn__ml_backend__ml_code_util__ml_make_boxed_types_1_0);
MR_decl_entry(ml_backend__ml_gen_info__ml_gen_info_get_varset_2_0);
MR_decl_entry(fn__ml_backend__ml_code_util__ml_gen_var_names_2_0);
MR_decl_entry(fn__hlds__hlds_goal__generic_call_pred_or_func_1_0);
MR_decl_entry(fn__ml_backend__ml_code_util__ml_gen_params_6_0);
MR_decl_entry(fn__ml_backend__mlds__mlds_get_func_signature_1_0);
MR_decl_entry(ml_backend__ml_code_util__ml_gen_var_3_0);
MR_decl_entry(fn__ml_backend__ml_code_util__ml_base_typeclass_info_method_offset_0_0);
MR_decl_entry(ml_backend__ml_gen_info__ml_gen_info_new_conv_var_3_0);
MR_decl_entry(fn__ml_backend__ml_code_util__ml_gen_mlds_var_decl_4_0);
MR_decl_entry(ml_backend__ml_code_util__ml_combine_conj_8_0);

MR_BEGIN_MODULE(ml_backend__ml_call_gen_module7)
	MR_init_entry1(ml_backend__ml_call_gen__ml_gen_main_generic_call_9_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_call_gen__ml_gen_main_generic_call_9_0);
	MR_init_label10(ml_backend__ml_call_gen__ml_gen_main_generic_call_9_0,3,4,5,6,7,8,9,10,16,19)
	MR_init_label10(ml_backend__ml_call_gen__ml_gen_main_generic_call_9_0,26,18,35,45,46,47,49,50,51,52)
	MR_init_label7(ml_backend__ml_call_gen__ml_gen_main_generic_call_9_0,54,55,56,64,60,70,71)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ml_gen_main_generic_call'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ml_call_gen__ml_gen_main_generic_call_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(16);
	MR_sv(16) = (MR_Word) MR_succip;
	MR_sv(8) = MR_r1;
	MR_sv(13) = MR_r2;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	MR_sv(14) = MR_r6;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_np_call_localret_ent(fn__list__length_1_0,
		ml_backend__ml_call_gen__ml_gen_main_generic_call_9_0_i3);
MR_def_label(ml_backend__ml_call_gen__ml_gen_main_generic_call_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__ml_backend__ml_code_util__ml_make_boxed_types_1_0,
		ml_backend__ml_call_gen__ml_gen_main_generic_call_9_0_i4);
MR_def_label(ml_backend__ml_call_gen__ml_gen_main_generic_call_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(14);
	MR_np_call_localret_ent(ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_0,
		ml_backend__ml_call_gen__ml_gen_main_generic_call_9_0_i5);
MR_def_label(ml_backend__ml_call_gen__ml_gen_main_generic_call_9_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(14);
	MR_np_call_localret_ent(ml_backend__ml_gen_info__ml_gen_info_get_varset_2_0,
		ml_backend__ml_call_gen__ml_gen_main_generic_call_9_0_i6);
MR_def_label(ml_backend__ml_call_gen__ml_gen_main_generic_call_9_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(13);
	MR_np_call_localret_ent(fn__ml_backend__ml_code_util__ml_gen_var_names_2_0,
		ml_backend__ml_call_gen__ml_gen_main_generic_call_9_0_i7);
MR_def_label(ml_backend__ml_call_gen__ml_gen_main_generic_call_9_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__generic_call_pred_or_func_1_0,
		ml_backend__ml_call_gen__ml_gen_main_generic_call_9_0_i8);
MR_def_label(ml_backend__ml_call_gen__ml_gen_main_generic_call_9_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__code_model__determinism_to_code_model_2_0,
		ml_backend__ml_call_gen__ml_gen_main_generic_call_9_0_i9);
MR_def_label(ml_backend__ml_call_gen__ml_gen_main_generic_call_9_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(6);
	MR_r6 = MR_sv(7);
	}
	MR_np_call_localret_ent(fn__ml_backend__ml_code_util__ml_gen_params_6_0,
		ml_backend__ml_call_gen__ml_gen_main_generic_call_9_0_i10);
MR_def_label(ml_backend__ml_call_gen__ml_gen_main_generic_call_9_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = (MR_Word) MR_tmkword(1, MR_TAG_COMMON(0,3,0));
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_r2;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 5);
	MR_tfield(0, MR_tempr1, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr1;
	MR_tfield(1, MR_r2, 1) = MR_tfield(0, MR_r1, 0);
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r2;
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_r1, 1);
	MR_sv(10) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_get_func_signature_1_0,
		ml_backend__ml_call_gen__ml_gen_main_generic_call_9_0_i16);
MR_def_label(ml_backend__ml_call_gen__ml_gen_main_generic_call_9_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(8),1)) {
		MR_GOTO_LAB(ml_backend__ml_call_gen__ml_gen_main_generic_call_9_0_i18);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(8);
	MR_sv(8) = MR_r1;
	MR_sv(11) = MR_tfield(1, MR_tempr1, 1);
	MR_r1 = MR_sv(14);
	MR_r2 = MR_tfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_var_3_0,
		ml_backend__ml_call_gen__ml_gen_main_generic_call_9_0_i19);
MR_def_label(ml_backend__ml_call_gen__ml_gen_main_generic_call_9_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_sv(12) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(1,0,0);
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_tfield(0, MR_tempr1, 2) = (MR_Word) MR_TAG_COMMON(0,4,0);
	MR_tfield(0, MR_tempr1, 3) = (MR_Word) MR_tbmkword(0, 5);
	MR_tfield(0, MR_tempr1, 4) = (MR_Word) MR_tbmkword(0, 5);
	MR_sv(9) = MR_r1;
	MR_sv(15) = (MR_Word) MR_TAG_COMMON(1,0,0);
	}
	MR_np_call_localret_ent(fn__ml_backend__ml_code_util__ml_base_typeclass_info_method_offset_0_0,
		ml_backend__ml_call_gen__ml_gen_main_generic_call_9_0_i26);
MR_def_label(ml_backend__ml_call_gen__ml_gen_main_generic_call_9_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_r2, 0) = ((MR_Integer) MR_sv(11) + (MR_Integer) MR_r1);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r2, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(12);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr2, 0) = MR_sv(15);
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 2) = MR_r2;
	MR_tfield(0, MR_tempr2, 3) = (MR_Word) MR_tbmkword(0, 5);
	MR_tfield(0, MR_tempr2, 4) = (MR_Word) MR_tbmkword(0, 5);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = (MR_Word) MR_tmkword(1, (MR_Word *) MR_sv(10));
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 3);
	MR_sv(11) = MR_tempr3;
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr3, 1) = MR_r2;
	MR_tfield(3, MR_tempr3, 2) = MR_tempr1;
	MR_sv(10) = MR_tfield(1, MR_r2, 0);
	MR_r1 = MR_sv(14);
	}
	MR_np_call_localret_ent(ml_backend__ml_gen_info__ml_gen_info_new_conv_var_3_0,
		ml_backend__ml_call_gen__ml_gen_main_generic_call_9_0_i45);
MR_def_label(ml_backend__ml_call_gen__ml_gen_main_generic_call_9_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(8);
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(14);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_var_3_0,
		ml_backend__ml_call_gen__ml_gen_main_generic_call_9_0_i35);
MR_def_label(ml_backend__ml_call_gen__ml_gen_main_generic_call_9_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_TAG_COMMON(1,0,0);
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 2) = (MR_Word) MR_TAG_COMMON(0,4,1);
	MR_tfield(0, MR_tempr2, 3) = (MR_Word) MR_tbmkword(0, 5);
	MR_tfield(0, MR_tempr2, 4) = (MR_Word) MR_tbmkword(0, 5);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr3, 0) = (MR_Word) MR_tmkword(1, (MR_Word *) MR_sv(10));
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr4, 0) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr5, 3, (MR_Integer) 3);
	MR_sv(11) = MR_tempr5;
	MR_tfield(3, MR_tempr5, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr5, 1) = MR_tempr3;
	MR_tfield(3, MR_tempr5, 2) = MR_tempr4;
	MR_sv(9) = MR_r1;
	MR_sv(10) = MR_tfield(1, MR_tempr3, 0);
	MR_r1 = MR_sv(14);
	}
	MR_np_call_localret_ent(ml_backend__ml_gen_info__ml_gen_info_new_conv_var_3_0,
		ml_backend__ml_call_gen__ml_gen_main_generic_call_9_0_i45);
MR_def_label(ml_backend__ml_call_gen__ml_gen_main_generic_call_9_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(14) = MR_r2;
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		ml_backend__ml_call_gen__ml_gen_main_generic_call_9_0_i46);
MR_def_label(ml_backend__ml_call_gen__ml_gen_main_generic_call_9_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("func_", 5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ml_backend__ml_call_gen__ml_gen_main_generic_call_9_0_i47);
MR_def_label(ml_backend__ml_call_gen__ml_gen_main_generic_call_9_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_sv(12) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(15) = (MR_Word) MR_tmkword(1, (MR_Word *) MR_tempr1);
	MR_r1 = MR_sv(3);
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_make_context_1_0,
		ml_backend__ml_call_gen__ml_gen_main_generic_call_9_0_i49);
MR_def_label(ml_backend__ml_call_gen__ml_gen_main_generic_call_9_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(15);
	MR_r2 = MR_sv(10);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__ml_backend__ml_code_util__ml_gen_mlds_var_decl_4_0,
		ml_backend__ml_call_gen__ml_gen_main_generic_call_9_0_i50);
MR_def_label(ml_backend__ml_call_gen__ml_gen_main_generic_call_9_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(10);
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(14);
	MR_r2 = MR_sv(12);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_var_lval_4_0,
		ml_backend__ml_call_gen__ml_gen_main_generic_call_9_0_i51);
MR_def_label(ml_backend__ml_call_gen__ml_gen_main_generic_call_9_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(11);
	MR_sv(11) = MR_r1;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(fn__ml_backend__ml_code_util__ml_gen_assign_3_0,
		ml_backend__ml_call_gen__ml_gen_main_generic_call_9_0_i52);
MR_def_label(ml_backend__ml_call_gen__ml_gen_main_generic_call_9_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_sv(12), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(12), 0) = MR_sv(11);
	MR_sv(11) = MR_r1;
	MR_r1 = MR_sv(14);
	MR_r2 = MR_sv(13);
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_var_list_3_0,
		ml_backend__ml_call_gen__ml_gen_main_generic_call_9_0_i54);
MR_def_label(ml_backend__ml_call_gen__ml_gen_main_generic_call_9_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(13);
	MR_sv(13) = MR_r1;
	MR_r1 = MR_sv(14);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_variable_types_3_0,
		ml_backend__ml_call_gen__ml_gen_main_generic_call_9_0_i55);
MR_def_label(ml_backend__ml_call_gen__ml_gen_main_generic_call_9_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(13);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(1);
	MR_r6 = MR_sv(6);
	MR_r7 = MR_sv(7);
	MR_r8 = MR_sv(3);
	MR_r9 = (MR_Integer) 0;
	MR_r10 = (MR_Integer) 1;
	MR_r11 = MR_sv(14);
	}
	MR_np_call_localret_ent(ml_backend__ml_call_gen__ml_gen_arg_list_17_0,
		ml_backend__ml_call_gen__ml_gen_main_generic_call_9_0_i56);
MR_def_label(ml_backend__ml_call_gen__ml_gen_main_generic_call_9_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(9);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 3);
	MR_r11 = MR_tempr2;
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,4,2);
	MR_tfield(3, MR_tempr2, 2) = MR_tempr1;
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(ml_backend__ml_call_gen__ml_gen_main_generic_call_9_0_i60);
	}
	if (MR_LTAGS_TESTR(MR_r5,0,0)) {
		MR_GOTO_LAB(ml_backend__ml_call_gen__ml_gen_main_generic_call_9_0_i60);
	}
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_tempr4 = MR_r3;
	MR_r3 = MR_sv(12);
	MR_r5 = MR_tempr1;
	MR_tempr5 = MR_r6;
	MR_r6 = MR_tempr4;
	MR_r7 = MR_sv(2);
	MR_r8 = MR_sv(3);
	MR_r9 = MR_tempr5;
	}
	MR_np_call_localret_ent(ml_backend__ml_call_gen__ml_gen_mlds_call_12_0,
		ml_backend__ml_call_gen__ml_gen_main_generic_call_9_0_i64);
MR_def_label(ml_backend__ml_call_gen__ml_gen_main_generic_call_9_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(10);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(11);
	MR_tfield(1, MR_tempr2, 1) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	MR_decr_sp_and_return(16);
	}
MR_def_label(ml_backend__ml_call_gen__ml_gen_main_generic_call_9_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r11;
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 11);
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_COMMON(5,0);
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__ml_call_gen__ml_gen_mlds_call_12_0);
	MR_tfield(0, MR_tempr2, 2) = (MR_Integer) 8;
	MR_tfield(0, MR_tempr2, 3) = MR_sv(8);
	MR_tfield(0, MR_tempr2, 4) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr2, 5) = MR_sv(12);
	MR_tfield(0, MR_tempr2, 6) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 7) = MR_r2;
	MR_tfield(0, MR_tempr2, 8) = MR_r3;
	MR_tfield(0, MR_tempr2, 9) = MR_sv(2);
	MR_tempr3 = MR_sv(3);
	MR_tfield(0, MR_tempr2, 10) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(6,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__ml_call_gen__IntroducedFrom__pred__ml_gen_main_generic_call__261__1_7_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr1, 3) = MR_tempr3;
	MR_tempr4 = MR_sv(7);
	MR_tfield(0, MR_tempr1, 4) = MR_tempr4;
	MR_tfield(0, MR_tempr1, 5) = MR_r5;
	MR_sv(8) = MR_r4;
	MR_r1 = MR_tempr4;
	MR_r2 = MR_tempr3;
	MR_r3 = MR_tempr2;
	MR_r4 = MR_tempr1;
	MR_r5 = MR_r6;
	}
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_combine_conj_8_0,
		ml_backend__ml_call_gen__ml_gen_main_generic_call_9_0_i70);
MR_def_label(ml_backend__ml_call_gen__ml_gen_main_generic_call_9_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(8);
	MR_sv(8) = MR_r3;
	MR_sv(13) = MR_r2;
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ml_backend__ml_call_gen__ml_gen_main_generic_call_9_0_i71);
MR_def_label(ml_backend__ml_call_gen__ml_gen_main_generic_call_9_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(10);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(11);
	MR_tfield(1, MR_r2, 1) = MR_sv(13);
	MR_r1 = MR_tempr1;
	MR_r3 = MR_sv(8);
	MR_decr_sp_and_return(16);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_call_gen_module8)
	MR_init_entry1(ml_backend__ml_call_gen__ml_gen_generic_call_9_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_call_gen__ml_gen_generic_call_9_0);
	MR_init_label3(ml_backend__ml_call_gen__ml_gen_generic_call_9_0,3,29,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ml_gen_generic_call'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ml_backend__ml_call_gen__ml_gen_generic_call_9_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,3)) {
		MR_GOTO_LAB(ml_backend__ml_call_gen__ml_gen_generic_call_9_0_i3);
	}
	MR_r1 = MR_r5;
	MR_r3 = MR_r6;
	MR_np_tailcall_ent(ml_backend__ml_call_gen__ml_gen_cast_6_0);
MR_def_label(ml_backend__ml_call_gen__ml_gen_generic_call_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(ml_backend__ml_call_gen__ml_gen_generic_call_9_0_i5);
	}
MR_def_label(ml_backend__ml_call_gen__ml_gen_generic_call_9_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(ml_backend__ml_call_gen__ml_gen_main_generic_call_9_0);
MR_def_label(ml_backend__ml_call_gen__ml_gen_generic_call_9_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(ml_backend__ml_call_gen__ml_gen_generic_call_9_0_i29);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_r6;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(ml_backend__ml_code_util__ml_gen_pred_label_5_0);
MR_decl_entry(ml_backend__ml_code_util__ml_gen_proc_params_5_0);

MR_BEGIN_MODULE(ml_backend__ml_call_gen_module9)
	MR_init_entry1(ml_backend__ml_call_gen__ml_gen_proc_addr_rval_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_call_gen__ml_gen_proc_addr_rval_5_0);
	MR_init_label4(ml_backend__ml_call_gen__ml_gen_proc_addr_rval_5_0,2,3,4,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ml_gen_proc_addr_rval'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ml_backend__ml_call_gen__ml_gen_proc_addr_rval_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r1;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_0,
		ml_backend__ml_call_gen__ml_gen_proc_addr_rval_5_0_i2);
MR_def_label(ml_backend__ml_call_gen__ml_gen_proc_addr_rval_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_pred_label_5_0,
		ml_backend__ml_call_gen__ml_gen_proc_addr_rval_5_0_i3);
MR_def_label(ml_backend__ml_call_gen__ml_gen_proc_addr_rval_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_tempr2 = MR_sv(3);
	MR_sv(3) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_proc_params_5_0,
		ml_backend__ml_call_gen__ml_gen_proc_addr_rval_5_0_i4);
MR_def_label(ml_backend__ml_call_gen__ml_gen_proc_addr_rval_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r2;
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_get_func_signature_1_0,
		ml_backend__ml_call_gen__ml_gen_proc_addr_rval_5_0_i5);
MR_def_label(ml_backend__ml_call_gen__ml_gen_proc_addr_rval_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr2, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr2, 1) = (MR_Integer) 0;
	MR_tfield(0, MR_tempr2, 2) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 7;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_r1, 1) = MR_tempr2;
	MR_r2 = MR_sv(4);
	MR_decr_sp_and_return(5);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__ml_backend__ml_code_util__ml_gen_proc_params_3_0);
MR_decl_entry(hlds__hlds_module__module_info_pred_proc_info_5_0);
MR_decl_entry(fn__hlds__hlds_pred__pred_info_is_pred_or_func_1_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_arg_types_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_argmodes_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_interface_determinism_2_0);

MR_BEGIN_MODULE(ml_backend__ml_call_gen_module10)
	MR_init_entry1(ml_backend__ml_call_gen__ml_gen_call_12_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_call_gen__ml_gen_call_12_0);
	MR_init_label10(ml_backend__ml_call_gen__ml_gen_call_12_0,2,3,4,5,6,7,8,9,10,11)
	MR_init_label3(ml_backend__ml_call_gen__ml_gen_call_12_0,12,18,19)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ml_gen_call'/12 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ml_backend__ml_call_gen__ml_gen_call_12_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
	MR_sv(3) = MR_r1;
	MR_sv(10) = MR_r2;
	MR_sv(5) = MR_r3;
	MR_sv(6) = MR_r4;
	MR_sv(7) = MR_r5;
	MR_sv(1) = MR_r6;
	MR_sv(2) = MR_r7;
	MR_sv(8) = MR_r8;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r9;
	MR_sv(9) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_0,
		ml_backend__ml_call_gen__ml_gen_call_12_0_i2);
MR_def_label(ml_backend__ml_call_gen__ml_gen_call_12_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(10);
	MR_np_call_localret_ent(fn__ml_backend__ml_code_util__ml_gen_proc_params_3_0,
		ml_backend__ml_call_gen__ml_gen_call_12_0_i3);
MR_def_label(ml_backend__ml_call_gen__ml_gen_call_12_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_get_func_signature_1_0,
		ml_backend__ml_call_gen__ml_gen_call_12_0_i4);
MR_def_label(ml_backend__ml_call_gen__ml_gen_call_12_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(9);
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__ml_call_gen__ml_gen_proc_addr_rval_5_0,
		ml_backend__ml_call_gen__ml_gen_call_12_0_i5);
MR_def_label(ml_backend__ml_call_gen__ml_gen_call_12_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_sv(11) = MR_r2;
	MR_r1 = MR_sv(12);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(10);
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_proc_info_5_0,
		ml_backend__ml_call_gen__ml_gen_call_12_0_i6);
MR_def_label(ml_backend__ml_call_gen__ml_gen_call_12_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_sv(12) = MR_r2;
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_is_pred_or_func_1_0,
		ml_backend__ml_call_gen__ml_gen_call_12_0_i7);
MR_def_label(ml_backend__ml_call_gen__ml_gen_call_12_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(10);
	MR_sv(10) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_arg_types_2_0,
		ml_backend__ml_call_gen__ml_gen_call_12_0_i8);
MR_def_label(ml_backend__ml_call_gen__ml_gen_call_12_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(12);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_argmodes_2_0,
		ml_backend__ml_call_gen__ml_gen_call_12_0_i9);
MR_def_label(ml_backend__ml_call_gen__ml_gen_call_12_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_tempr1;
	MR_r6 = MR_sv(10);
	MR_r7 = MR_sv(1);
	MR_r8 = MR_sv(2);
	MR_r9 = MR_sv(8);
	MR_r10 = (MR_Integer) 1;
	MR_r11 = MR_sv(11);
	}
	MR_np_call_localret_ent(ml_backend__ml_call_gen__ml_gen_arg_list_17_0,
		ml_backend__ml_call_gen__ml_gen_call_12_0_i10);
MR_def_label(ml_backend__ml_call_gen__ml_gen_call_12_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_sv(6) = MR_r3;
	MR_sv(7) = MR_r4;
	MR_sv(8) = MR_r5;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(12);
	MR_sv(12) = MR_r6;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_interface_determinism_2_0,
		ml_backend__ml_call_gen__ml_gen_call_12_0_i11);
MR_def_label(ml_backend__ml_call_gen__ml_gen_call_12_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(7),0,0)) {
		MR_GOTO_LAB(ml_backend__ml_call_gen__ml_gen_call_12_0_i12);
	}
	if (MR_LTAGS_TESTR(MR_sv(8),0,0)) {
		MR_GOTO_LAB(ml_backend__ml_call_gen__ml_gen_call_12_0_i12);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(10);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(6);
	MR_r7 = MR_tempr1;
	MR_r8 = MR_sv(2);
	MR_r9 = MR_sv(12);
	MR_succip_word = MR_sv(13);
	MR_decr_sp(13);
	MR_np_tailcall_ent(ml_backend__ml_call_gen__ml_gen_mlds_call_12_0);
	}
MR_def_label(ml_backend__ml_call_gen__ml_gen_call_12_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 11);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(5,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__ml_call_gen__ml_gen_mlds_call_12_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 8;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(9);
	MR_tfield(0, MR_tempr1, 4) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 6) = MR_sv(10);
	MR_tfield(0, MR_tempr1, 7) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 8) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 9) = MR_r1;
	MR_tempr3 = MR_sv(2);
	MR_tfield(0, MR_tempr1, 10) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 6);
	MR_r4 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_COMMON(6,1);
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__ml_call_gen__IntroducedFrom__pred__ml_gen_call__394__1_7_0);
	MR_tfield(0, MR_tempr2, 2) = (MR_Integer) 3;
	MR_tempr4 = MR_sv(1);
	MR_tfield(0, MR_tempr2, 3) = MR_tempr4;
	MR_tfield(0, MR_tempr2, 4) = MR_tempr3;
	MR_tfield(0, MR_tempr2, 5) = MR_sv(8);
	MR_r1 = MR_tempr4;
	MR_r2 = MR_tempr3;
	MR_r5 = MR_sv(12);
	}
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_combine_conj_8_0,
		ml_backend__ml_call_gen__ml_gen_call_12_0_i18);
MR_def_label(ml_backend__ml_call_gen__ml_gen_call_12_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r2;
	MR_sv(10) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ml_backend__ml_call_gen__ml_gen_call_12_0_i19);
MR_def_label(ml_backend__ml_call_gen__ml_gen_call_12_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(10);
	MR_decr_sp_and_return(13);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_call_gen_module11)
	MR_init_entry1(fn__ml_backend__ml_call_gen__ml_gen_simple_expr_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ml_backend__ml_call_gen__ml_gen_simple_expr_1_0);
	MR_init_label7(fn__ml_backend__ml_call_gen__ml_gen_simple_expr_1_0,3,6,39,12,13,11,16)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ml_gen_simple_expr'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ml_backend__ml_call_gen__ml_gen_simple_expr_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(fn__ml_backend__ml_call_gen__ml_gen_simple_expr_1_0_i3);
	}
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 3);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 2;
	* (MR_Float *) &(MR_tfield(3, MR_r2, 1)) = MR_float_from_dword_ptr(&MR_tfield(2, MR_r1, 0));
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_r1, 1) = MR_r2;
	MR_proceed();
MR_def_label(fn__ml_backend__ml_call_gen__ml_gen_simple_expr_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(fn__ml_backend__ml_call_gen__ml_gen_simple_expr_1_0_i6);
	}
	MR_tag_alloc_heap(MR_r2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_r2, 0) = MR_tfield(1, MR_r1, 0);
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_r1, 1) = MR_r2;
	MR_proceed();
MR_def_label(fn__ml_backend__ml_call_gen__ml_gen_simple_expr_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(fn__ml_backend__ml_call_gen__ml_gen_simple_expr_1_0_i39);
	}
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_tfield(0, MR_r1, 0);
	MR_r1 = MR_r2;
	MR_proceed();
MR_def_label(fn__ml_backend__ml_call_gen__ml_gen_simple_expr_1_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if (MR_RTAGS_TESTR(MR_r1,3,1)) {
		MR_GOTO_LAB(fn__ml_backend__ml_call_gen__ml_gen_simple_expr_1_0_i11);
	}
	MR_sv(1) = MR_tfield(3, MR_r1, 1);
	MR_sv(2) = MR_tfield(3, MR_r1, 3);
	MR_r1 = MR_tfield(3, MR_r1, 2);
	MR_np_localcall_lab(fn__ml_backend__ml_call_gen__ml_gen_simple_expr_1_0,
		fn__ml_backend__ml_call_gen__ml_gen_simple_expr_1_0_i12);
MR_def_label(fn__ml_backend__ml_call_gen__ml_gen_simple_expr_1_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_localcall_lab(fn__ml_backend__ml_call_gen__ml_gen_simple_expr_1_0,
		fn__ml_backend__ml_call_gen__ml_gen_simple_expr_1_0_i13);
MR_def_label(fn__ml_backend__ml_call_gen__ml_gen_simple_expr_1_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 4);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_r2, 1) = MR_sv(1);
	MR_tfield(3, MR_r2, 2) = MR_sv(2);
	MR_tfield(3, MR_r2, 3) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(3);
MR_def_label(fn__ml_backend__ml_call_gen__ml_gen_simple_expr_1_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_sv(1), 3, (MR_Integer) 1);
	MR_tfield(3, MR_sv(1), 0) = MR_tfield(3, MR_r1, 1);
	MR_r1 = MR_tfield(3, MR_r1, 2);
	MR_np_localcall_lab(fn__ml_backend__ml_call_gen__ml_gen_simple_expr_1_0,
		fn__ml_backend__ml_call_gen__ml_gen_simple_expr_1_0_i16);
MR_def_label(fn__ml_backend__ml_call_gen__ml_gen_simple_expr_1_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 3);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_r2, 1) = MR_sv(1);
	MR_tfield(3, MR_r2, 2) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__hlds__hlds_module__predicate_module_2_0);
MR_decl_entry(fn__hlds__hlds_module__predicate_name_2_0);
MR_decl_entry(backend_libs__builtin_ops__translate_builtin_5_0);
MR_decl_entry(ml_backend__ml_code_util__ml_gen_set_success_4_0);

MR_BEGIN_MODULE(ml_backend__ml_call_gen_module12)
	MR_init_entry1(ml_backend__ml_call_gen__ml_gen_builtin_9_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_call_gen__ml_gen_builtin_9_0);
	MR_init_label10(ml_backend__ml_call_gen__ml_gen_builtin_9_0,2,3,4,5,7,6,10,19,16,21)
	MR_init_label9(ml_backend__ml_call_gen__ml_gen_builtin_9_0,14,25,27,26,12,40,41,39,37)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ml_gen_builtin'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ml_backend__ml_call_gen__ml_gen_builtin_9_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_r5;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r6;
	MR_sv(7) = MR_tempr1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_r3;
	}
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_var_list_3_0,
		ml_backend__ml_call_gen__ml_gen_builtin_9_0_i2);
MR_def_label(ml_backend__ml_call_gen__ml_gen_builtin_9_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_0,
		ml_backend__ml_call_gen__ml_gen_builtin_9_0_i3);
MR_def_label(ml_backend__ml_call_gen__ml_gen_builtin_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(fn__hlds__hlds_module__predicate_module_2_0,
		ml_backend__ml_call_gen__ml_gen_builtin_9_0_i4);
MR_def_label(ml_backend__ml_call_gen__ml_gen_builtin_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_module__predicate_name_2_0,
		ml_backend__ml_call_gen__ml_gen_builtin_9_0_i5);
MR_def_label(ml_backend__ml_call_gen__ml_gen_builtin_9_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_lval);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(3);
	}
	MR_np_call_localret_ent(backend_libs__builtin_ops__translate_builtin_5_0,
		ml_backend__ml_call_gen__ml_gen_builtin_9_0_i7);
MR_def_label(ml_backend__ml_call_gen__ml_gen_builtin_9_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ml_backend__ml_call_gen__ml_gen_builtin_9_0_i6);
	}
	MR_r1 = MR_sv(4);
	MR_GOTO_LAB(ml_backend__ml_call_gen__ml_gen_builtin_9_0_i10);
MR_def_label(ml_backend__ml_call_gen__ml_gen_builtin_9_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ml_backend.ml_call_gen", 22);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ml_backend.ml_call_gen.ml_gen_builtin\'/9", 51);
	MR_r3 = (MR_Word) MR_string_const("unknown builtin predicate", 25);
	MR_np_call_localret_ent(require__unexpected_3_0,
		ml_backend__ml_call_gen__ml_gen_builtin_9_0_i10);
MR_def_label(ml_backend__ml_call_gen__ml_gen_builtin_9_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),0)) {
		MR_GOTO_LAB(ml_backend__ml_call_gen__ml_gen_builtin_9_0_i12);
	}
	if (MR_PTAG_TESTR(MR_r2,0)) {
		MR_GOTO_LAB(ml_backend__ml_call_gen__ml_gen_builtin_9_0_i14);
	}
	MR_sv(6) = MR_tfield(0, MR_r2, 1);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(0, MR_r2, 0);
	MR_sv(5) = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,3)) {
		MR_GOTO_LAB(ml_backend__ml_call_gen__ml_gen_builtin_9_0_i16);
	}
	MR_tempr2 = MR_tfield(3, MR_tempr1, 1);
	if (MR_PTAG_TESTR(MR_tempr2,2)) {
		MR_GOTO_LAB(ml_backend__ml_call_gen__ml_gen_builtin_9_0_i16);
	}
	MR_r2 = MR_tfield(2, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(fn__check_hlds__type_util__check_dummy_type_2_0,
		ml_backend__ml_call_gen__ml_gen_builtin_9_0_i19);
MR_def_label(ml_backend__ml_call_gen__ml_gen_builtin_9_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ml_backend__ml_call_gen__ml_gen_builtin_9_0_i16);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_sv(7);
	MR_decr_sp_and_return(8);
MR_def_label(ml_backend__ml_call_gen__ml_gen_builtin_9_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(fn__ml_backend__ml_call_gen__ml_gen_simple_expr_1_0,
		ml_backend__ml_call_gen__ml_gen_builtin_9_0_i21);
MR_def_label(ml_backend__ml_call_gen__ml_gen_builtin_9_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(fn__ml_backend__ml_code_util__ml_gen_assign_3_0,
		ml_backend__ml_call_gen__ml_gen_builtin_9_0_i41);
MR_def_label(ml_backend__ml_call_gen__ml_gen_builtin_9_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,3)) {
		MR_GOTO_LAB(ml_backend__ml_call_gen__ml_gen_builtin_9_0_i25);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_sv(7);
	MR_decr_sp_and_return(8);
MR_def_label(ml_backend__ml_call_gen__ml_gen_builtin_9_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(ml_backend__ml_call_gen__ml_gen_builtin_9_0_i26);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(1, MR_r2, 1);
	if (MR_PTAG_TESTR(MR_tempr1,3)) {
		MR_GOTO_LAB(ml_backend__ml_call_gen__ml_gen_builtin_9_0_i27);
	}
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_tfield(1, MR_r2, 0);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_tempr2;
	MR_tfield(1, MR_r1, 1) = MR_tfield(3, MR_tempr1, 1);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_tempr1;
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(fn__ml_backend__ml_code_util__ml_gen_assign_3_0,
		ml_backend__ml_call_gen__ml_gen_builtin_9_0_i41);
MR_def_label(ml_backend__ml_call_gen__ml_gen_builtin_9_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ml_backend.ml_call_gen", 22);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ml_backend.ml_call_gen.ml_gen_builtin\'/9", 51);
	MR_r3 = (MR_Word) MR_string_const("malformed ref_assign", 20);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(ml_backend__ml_call_gen__ml_gen_builtin_9_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ml_backend.ml_call_gen", 22);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ml_backend.ml_call_gen.ml_gen_builtin\'/9", 51);
	MR_r3 = (MR_Word) MR_string_const("malformed model_det builtin predicate", 37);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(ml_backend__ml_call_gen__ml_gen_builtin_9_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),1)) {
		MR_GOTO_LAB(ml_backend__ml_call_gen__ml_gen_builtin_9_0_i37);
	}
	if (MR_PTAG_TESTR(MR_r2,2)) {
		MR_GOTO_LAB(ml_backend__ml_call_gen__ml_gen_builtin_9_0_i39);
	}
	MR_r1 = MR_tfield(2, MR_r2, 0);
	MR_np_call_localret_ent(fn__ml_backend__ml_call_gen__ml_gen_simple_expr_1_0,
		ml_backend__ml_call_gen__ml_gen_builtin_9_0_i40);
MR_def_label(ml_backend__ml_call_gen__ml_gen_builtin_9_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_set_success_4_0,
		ml_backend__ml_call_gen__ml_gen_builtin_9_0_i41);
MR_def_label(ml_backend__ml_call_gen__ml_gen_builtin_9_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_sv(7);
	MR_decr_sp_and_return(8);
MR_def_label(ml_backend__ml_call_gen__ml_gen_builtin_9_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ml_backend.ml_call_gen", 22);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ml_backend.ml_call_gen.ml_gen_builtin\'/9", 51);
	MR_r3 = (MR_Word) MR_string_const("malformed model_semi builtin predicate", 38);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(ml_backend__ml_call_gen__ml_gen_builtin_9_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ml_backend.ml_call_gen", 22);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ml_backend.ml_call_gen.ml_gen_builtin\'/9", 51);
	MR_r3 = (MR_Word) MR_string_const("model_non builtin predicate", 27);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(ml_backend__ml_code_util__ml_gen_success_5_0);

MR_BEGIN_MODULE(ml_backend__ml_call_gen_module13)
	MR_init_entry1(ml_backend__ml_call_gen__IntroducedFrom__pred__ml_gen_call__394__1_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_call_gen__IntroducedFrom__pred__ml_gen_call__394__1_7_0);
	MR_init_label2(ml_backend__ml_call_gen__IntroducedFrom__pred__ml_gen_call__394__1_7_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__ml_gen_call__394__1'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ml_call_gen__IntroducedFrom__pred__ml_gen_call__394__1_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_r3 = MR_r4;
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_success_5_0,
		ml_backend__ml_call_gen__IntroducedFrom__pred__ml_gen_call__394__1_7_0_i2);
MR_def_label(ml_backend__ml_call_gen__IntroducedFrom__pred__ml_gen_call__394__1_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, statement);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ml_backend__ml_call_gen__IntroducedFrom__pred__ml_gen_call__394__1_7_0_i3);
MR_def_label(ml_backend__ml_call_gen__IntroducedFrom__pred__ml_gen_call__394__1_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_call_gen_module14)
	MR_init_entry1(ml_backend__ml_call_gen__IntroducedFrom__pred__ml_gen_main_generic_call__261__1_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_call_gen__IntroducedFrom__pred__ml_gen_main_generic_call__261__1_7_0);
	MR_init_label2(ml_backend__ml_call_gen__IntroducedFrom__pred__ml_gen_main_generic_call__261__1_7_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__ml_gen_main_generic_call__261__1'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ml_call_gen__IntroducedFrom__pred__ml_gen_main_generic_call__261__1_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_r4;
	}
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_success_5_0,
		ml_backend__ml_call_gen__IntroducedFrom__pred__ml_gen_main_generic_call__261__1_7_0_i2);
MR_def_label(ml_backend__ml_call_gen__IntroducedFrom__pred__ml_gen_main_generic_call__261__1_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, statement);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ml_backend__ml_call_gen__IntroducedFrom__pred__ml_gen_main_generic_call__261__1_7_0_i3);
MR_def_label(ml_backend__ml_call_gen__IntroducedFrom__pred__ml_gen_main_generic_call__261__1_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__ml_backend__ml_call_gen_maybe_bunch_0(void)
{
	ml_backend__ml_call_gen_module0();
	ml_backend__ml_call_gen_module1();
	ml_backend__ml_call_gen_module2();
	ml_backend__ml_call_gen_module3();
	ml_backend__ml_call_gen_module4();
	ml_backend__ml_call_gen_module5();
	ml_backend__ml_call_gen_module6();
	ml_backend__ml_call_gen_module7();
	ml_backend__ml_call_gen_module8();
	ml_backend__ml_call_gen_module9();
	ml_backend__ml_call_gen_module10();
	ml_backend__ml_call_gen_module11();
	ml_backend__ml_call_gen_module12();
	ml_backend__ml_call_gen_module13();
	ml_backend__ml_call_gen_module14();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__ml_backend__ml_call_gen__init(void);
void mercury__ml_backend__ml_call_gen__init_type_tables(void);
void mercury__ml_backend__ml_call_gen__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__ml_backend__ml_call_gen__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__ml_backend__ml_call_gen__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__ml_backend__ml_call_gen__init_threadscope_string_table(void);
#endif

void mercury__ml_backend__ml_call_gen__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__ml_backend__ml_call_gen_maybe_bunch_0();
	mercury__ml_backend__ml_call_gen__init_debugger();
}

void mercury__ml_backend__ml_call_gen__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}


void mercury__ml_backend__ml_call_gen__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__ml_backend__ml_call_gen__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__ml_backend__ml_call_gen);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__ml_backend__ml_call_gen__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__ml_backend__ml_call_gen__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
