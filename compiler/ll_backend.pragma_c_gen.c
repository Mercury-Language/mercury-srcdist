/*
** Automatically generated from `pragma_c_gen.m'
** by the Mercury compiler,
** version rotd-2011-08-03, configured for x86_64-unknown-linux-gnu.
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
INIT mercury__ll_backend__pragma_c_gen__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 140 "../library/io.int2"
#include "io.mh"

#line 28 "ll_backend.pragma_c_gen.c"
#line 150 "../library/io.int2"
#include "string.mh"

#line 32 "ll_backend.pragma_c_gen.c"
#line 33 "../library/array.int2"
#include "array.mh"

#line 36 "ll_backend.pragma_c_gen.c"
#line 39 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 40 "ll_backend.pragma_c_gen.c"
#line 31 "../library/bitmap.int2"
#include "bitmap.mh"

#line 44 "ll_backend.pragma_c_gen.c"
#line 30 "../library/time.int2"
#include "time.mh"

#line 48 "ll_backend.pragma_c_gen.c"
#line 49 "ll_backend.pragma_c_gen.c"
#include "ll_backend.pragma_c_gen.mh"

#line 52 "ll_backend.pragma_c_gen.c"
#line 53 "ll_backend.pragma_c_gen.c"
#ifndef LL_BACKEND__PRAGMA_C_GEN_DECL_GUARD
#define LL_BACKEND__PRAGMA_C_GEN_DECL_GUARD

#line 57 "ll_backend.pragma_c_gen.c"
#line 58 "ll_backend.pragma_c_gen.c"

#endif
#line 61 "ll_backend.pragma_c_gen.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

struct mercury_type_0 {
	MR_Integer f1;
};
MR_STATIC_LINKAGE const struct mercury_type_0 mercury_common_0[];

struct mercury_type_1 {
	MR_Integer f1;
	MR_Word * f2;
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

struct mercury_type_2 {
	MR_Word * f1[2];
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

extern const MR_TypeCtorInfo_Struct
	mercury_data_ll_backend__pragma_c_gen__type_ctor_info_c_arg_0;
MR_decl_label5(ll_backend__pragma_c_gen__find_dead_input_vars_4_0, 19,3,5,7,4)
MR_decl_label3(ll_backend__pragma_c_gen__foreign_proc_acquire_regs_4_0, 17,4,5)
MR_decl_label4(ll_backend__pragma_c_gen__foreign_proc_select_in_args_2_0, 7,8,4,2)
MR_decl_label4(ll_backend__pragma_c_gen__foreign_proc_select_out_args_2_0, 7,8,4,2)
MR_decl_label10(ll_backend__pragma_c_gen__generate_foreign_proc_code_12_0, 33,6,8,10,11,12,13,17,20,21)
MR_decl_label1(ll_backend__pragma_c_gen__generate_foreign_proc_code_12_0, 22)
MR_decl_label10(ll_backend__pragma_c_gen__generate_ordinary_foreign_proc_code_13_0, 2,3,4,5,6,7,8,9,10,11)
MR_decl_label10(ll_backend__pragma_c_gen__generate_ordinary_foreign_proc_code_13_0, 12,13,16,17,19,20,15,21,14,22)
MR_decl_label10(ll_backend__pragma_c_gen__generate_ordinary_foreign_proc_code_13_0, 23,24,25,26,27,28,32,33,34,35)
MR_decl_label10(ll_backend__pragma_c_gen__generate_ordinary_foreign_proc_code_13_0, 36,37,40,41,42,31,46,49,45,30)
MR_decl_label10(ll_backend__pragma_c_gen__generate_ordinary_foreign_proc_code_13_0, 53,55,58,60,64,65,66,67,68,69)
MR_decl_label10(ll_backend__pragma_c_gen__generate_ordinary_foreign_proc_code_13_0, 70,71,72,75,56,78,81,84,87,90)
MR_decl_label10(ll_backend__pragma_c_gen__generate_ordinary_foreign_proc_code_13_0, 93,96,95,99,86,100,85,103,104,118)
MR_decl_label10(ll_backend__pragma_c_gen__generate_ordinary_foreign_proc_code_13_0, 119,123,121,124,126,125,133,138,136,139)
MR_decl_label10(ll_backend__pragma_c_gen__generate_ordinary_foreign_proc_code_13_0, 135,141,142,146,149,152,153,154,155,156)
MR_decl_label2(ll_backend__pragma_c_gen__generate_ordinary_foreign_proc_code_13_0, 157,158)
MR_decl_label9(ll_backend__pragma_c_gen__generate_runtime_cond_code_4_0, 4,5,6,3,13,12,15,16,18)
MR_decl_label3(ll_backend__pragma_c_gen__get_c_arg_list_vars_2_0, 5,6,2)
MR_decl_label10(ll_backend__pragma_c_gen__get_foreign_proc_input_vars_6_0, 137,4,3,9,11,12,13,14,16,18)
MR_decl_label10(ll_backend__pragma_c_gen__get_foreign_proc_input_vars_6_0, 20,23,15,27,28,29,31,5,6,36)
MR_decl_label10(ll_backend__pragma_c_gen__get_foreign_proc_input_vars_6_0, 37,38,39,40,41,42,44,46,48,51)
MR_decl_label7(ll_backend__pragma_c_gen__get_foreign_proc_input_vars_6_0, 43,55,56,57,59,61,35)
MR_decl_label3(ll_backend__pragma_c_gen__get_highest_arg_num_3_0, 10,3,4)
MR_decl_label10(ll_backend__pragma_c_gen__make_alloc_id_hash_define_6_0, 2,3,7,11,10,12,13,17,23,5)
MR_decl_label4(ll_backend__pragma_c_gen__make_c_arg_list_3_0, 3,10,14,8)
MR_decl_label1(ll_backend__pragma_c_gen__make_extra_c_arg_list_4_0, 2)
MR_decl_label5(ll_backend__pragma_c_gen__make_extra_c_arg_list_seq_4_0, 29,6,5,4,11)
MR_decl_label10(ll_backend__pragma_c_gen__make_foreign_proc_decls_4_0, 74,4,9,12,15,5,6,20,21,22)
MR_decl_label3(ll_backend__pragma_c_gen__make_foreign_proc_decls_4_0, 24,27,73)
MR_decl_label9(ll_backend__pragma_c_gen__make_proc_label_hash_define_5_0, 2,3,8,6,11,12,13,14,17)
MR_decl_label10(ll_backend__pragma_c_gen__place_foreign_proc_output_args_in_regs_6_0, 3,9,10,13,15,16,17,19,21,23)
MR_decl_label10(ll_backend__pragma_c_gen__place_foreign_proc_output_args_in_regs_6_0, 26,18,30,35,37,38,39,31,32,44)
MR_decl_label8(ll_backend__pragma_c_gen__place_foreign_proc_output_args_in_regs_6_0, 45,46,47,48,49,43,11,8)
MR_decl_label10(fn__ll_backend__pragma_c_gen__foreign_proc_struct_name_4_0, 2,3,4,5,6,7,8,9,10,11)
MR_decl_label1(fn__ll_backend__pragma_c_gen__foreign_proc_struct_name_4_0, 12)
MR_decl_label5(__Unify___ll_backend__pragma_c_gen__c_arg_0_0, 4,6,8,12,1)
MR_decl_label7(__Compare___ll_backend__pragma_c_gen__c_arg_0_0, 3,2,5,9,13,17,45)
MR_decl_static(ll_backend__pragma_c_gen__generate_runtime_cond_code_4_0)
MR_def_extern_entry(fn__ll_backend__pragma_c_gen__foreign_proc_succ_ind_name_0_0)
MR_decl_static(ll_backend__pragma_c_gen__make_proc_label_hash_define_5_0)
MR_decl_static(ll_backend__pragma_c_gen__make_alloc_id_hash_define_6_0)
MR_decl_static(ll_backend__pragma_c_gen__make_c_arg_list_3_0)
MR_decl_static(ll_backend__pragma_c_gen__get_highest_arg_num_3_0)
MR_decl_static(ll_backend__pragma_c_gen__make_extra_c_arg_list_seq_4_0)
MR_decl_static(ll_backend__pragma_c_gen__make_extra_c_arg_list_4_0)
MR_decl_static(ll_backend__pragma_c_gen__get_c_arg_list_vars_2_0)
MR_decl_static(ll_backend__pragma_c_gen__foreign_proc_select_out_args_2_0)
MR_decl_static(ll_backend__pragma_c_gen__foreign_proc_select_in_args_2_0)
MR_decl_static(ll_backend__pragma_c_gen__make_foreign_proc_decls_4_0)
MR_decl_static(ll_backend__pragma_c_gen__find_dead_input_vars_4_0)
MR_decl_static(ll_backend__pragma_c_gen__get_foreign_proc_input_vars_6_0)
MR_decl_static(ll_backend__pragma_c_gen__foreign_proc_acquire_regs_4_0)
MR_decl_static(ll_backend__pragma_c_gen__place_foreign_proc_output_args_in_regs_6_0)
MR_decl_static(ll_backend__pragma_c_gen__generate_ordinary_foreign_proc_code_13_0)
MR_def_extern_entry(ll_backend__pragma_c_gen__generate_foreign_proc_code_12_0)
MR_def_extern_entry(fn__ll_backend__pragma_c_gen__foreign_proc_struct_name_4_0)
MR_decl_static(__Unify___ll_backend__pragma_c_gen__c_arg_0_0)
MR_decl_static(__Compare___ll_backend__pragma_c_gen__c_arg_0_0)
MR_decl_static(ll_backend__pragma_c_gen__IntroducedFrom__pred__generate_foreign_proc_code__373__1_2_0)
MR_decl_static(ll_backend__pragma_c_gen__IntroducedFrom__pred__generate_foreign_proc_code__375__1_2_0)
MR_decl_static(ll_backend__pragma_c_gen__IntroducedFrom__pred__generate_foreign_proc_code__377__1_2_0)

static const struct mercury_type_0 mercury_common_0[1] =
{
{
0
},
};

static const struct mercury_type_1 mercury_common_1[1] =
{
{
0,
MR_TAG_COMMON(1,0,0)
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_foreign_arg_0;
static const struct mercury_type_2 mercury_common_2[2] =
{
{
{
MR_CTOR1_ADDR(term, var),
MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(hlds__hlds_goal, foreign_arg)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__pragma_c_gen__generate_foreign_proc_code_12_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__pragma_c_gen__generate_foreign_proc_code_12_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__pragma_c_gen__generate_foreign_proc_code_12_0_3;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__code_model__type_ctor_info_code_model_0;
static const struct mercury_type_3 mercury_common_3[3] =
{
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__pragma_c_gen__generate_foreign_proc_code_12_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(2,1),
MR_COMMON(2,1)
},
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__pragma_c_gen__generate_foreign_proc_code_12_0_2,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(2,1),
MR_COMMON(2,1)
},
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__pragma_c_gen__generate_foreign_proc_code_12_0_3,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(hlds__code_model, code_model),
MR_CTOR0_ADDR(hlds__code_model, code_model)
},
};
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
	&mercury_data_term__type_ctor_info_var_1,
{	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_maybe__type_ctor_info_maybe_1;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_maybe__ti_maybe_1builtin__type_ctor_info_string_0 = {
	&mercury_data_maybe__type_ctor_info_maybe_1,
{	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_string_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_box_policy_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_arg_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_box_policy_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_arg_info_0;

const MR_PseudoTypeInfo mercury_data_ll_backend__pragma_c_gen__field_types_c_arg_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_1builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0,
	(MR_PseudoTypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_box_policy_0,
	(MR_PseudoTypeInfo) &mercury_data_hlds__hlds_pred__type_ctor_info_arg_info_0
};

static const MR_DuFunctorDesc mercury_data_ll_backend__pragma_c_gen__du_functor_desc_c_arg_0_0 = {
	"c_arg",
	5,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__pragma_c_gen__field_types_c_arg_0_0,
	NULL,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_ll_backend__pragma_c_gen__du_stag_ordered_c_arg_0_0[] = {
	&mercury_data_ll_backend__pragma_c_gen__du_functor_desc_c_arg_0_0

};

const MR_DuPtagLayout mercury_data_ll_backend__pragma_c_gen__du_ptag_ordered_c_arg_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_ll_backend__pragma_c_gen__du_stag_ordered_c_arg_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__pragma_c_gen__du_name_ordered_c_arg_0[] = {
	&mercury_data_ll_backend__pragma_c_gen__du_functor_desc_c_arg_0_0
};

const MR_Integer mercury_data_ll_backend__pragma_c_gen__functor_number_map_c_arg_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_ll_backend__pragma_c_gen__type_ctor_info_c_arg_0 = {
	0,
	15,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__pragma_c_gen__c_arg_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__pragma_c_gen__c_arg_0_0)),
	"ll_backend.pragma_c_gen",
	"c_arg",
	{ (void *)mercury_data_ll_backend__pragma_c_gen__du_name_ordered_c_arg_0 },
	{ (void *)mercury_data_ll_backend__pragma_c_gen__du_ptag_ordered_c_arg_0 },
	1,
	4,
	mercury_data_ll_backend__pragma_c_gen__functor_number_map_c_arg_0
};


static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__pragma_c_gen__generate_foreign_proc_code_12_0_3 = {
{
MR_PREDICATE,
"ll_backend.pragma_c_gen",
"ll_backend.pragma_c_gen",
"lambda_pragma_c_gen_m_377",
2,
0
},
"ll_backend.pragma_c_gen",
"pragma_c_gen.m",
377,
"34"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__pragma_c_gen__generate_foreign_proc_code_12_0_2 = {
{
MR_PREDICATE,
"ll_backend.pragma_c_gen",
"ll_backend.pragma_c_gen",
"lambda_pragma_c_gen_m_375",
2,
0
},
"ll_backend.pragma_c_gen",
"pragma_c_gen.m",
375,
"28"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__pragma_c_gen__generate_foreign_proc_code_12_0_1 = {
{
MR_PREDICATE,
"ll_backend.pragma_c_gen",
"ll_backend.pragma_c_gen",
"lambda_pragma_c_gen_m_373",
2,
0
},
"ll_backend.pragma_c_gen",
"pragma_c_gen.m",
373,
"22"
};


MR_decl_entry(ll_backend__code_info__get_used_env_vars_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
MR_decl_entry(set__insert_3_0);
MR_decl_entry(ll_backend__code_info__set_used_env_vars_3_0);

MR_BEGIN_MODULE(ll_backend__pragma_c_gen_module0)
	MR_init_entry1(ll_backend__pragma_c_gen__generate_runtime_cond_code_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__pragma_c_gen__generate_runtime_cond_code_4_0);
	MR_init_label9(ll_backend__pragma_c_gen__generate_runtime_cond_code_4_0,4,5,6,3,13,12,15,16,18)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'generate_runtime_cond_code'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__pragma_c_gen__generate_runtime_cond_code_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(ll_backend__pragma_c_gen__generate_runtime_cond_code_4_0_i3);
	}
	MR_sv(1) = MR_tfield(0, MR_r1, 0);
	MR_sv(2) = MR_r2;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(ll_backend__code_info__get_used_env_vars_2_0,
		ll_backend__pragma_c_gen__generate_runtime_cond_code_4_0_i4);
MR_def_label(ll_backend__pragma_c_gen__generate_runtime_cond_code_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(set__insert_3_0,
		ll_backend__pragma_c_gen__generate_runtime_cond_code_4_0_i5);
MR_def_label(ll_backend__pragma_c_gen__generate_runtime_cond_code_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(ll_backend__code_info__set_used_env_vars_3_0,
		ll_backend__pragma_c_gen__generate_runtime_cond_code_4_0_i6);
MR_def_label(ll_backend__pragma_c_gen__generate_runtime_cond_code_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 10;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 13);
	MR_tfield(3, MR_tempr1, 2) = MR_tempr2;
	MR_tfield(3, MR_tempr1, 3) = (MR_Word) MR_TAG_COMMON(3,1,0);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	MR_decr_sp_and_return(3);
	}
MR_def_label(ll_backend__pragma_c_gen__generate_runtime_cond_code_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(ll_backend__pragma_c_gen__generate_runtime_cond_code_4_0_i12);
	}
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_np_localcall_lab(ll_backend__pragma_c_gen__generate_runtime_cond_code_4_0,
		ll_backend__pragma_c_gen__generate_runtime_cond_code_4_0_i13);
MR_def_label(ll_backend__pragma_c_gen__generate_runtime_cond_code_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = (MR_Integer) 7;
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
MR_def_label(ll_backend__pragma_c_gen__generate_runtime_cond_code_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(2, MR_r1, 0);
	MR_sv(2) = MR_tfield(2, MR_r1, 2);
	MR_r1 = MR_tfield(2, MR_r1, 1);
	MR_np_localcall_lab(ll_backend__pragma_c_gen__generate_runtime_cond_code_4_0,
		ll_backend__pragma_c_gen__generate_runtime_cond_code_4_0_i15);
MR_def_label(ll_backend__pragma_c_gen__generate_runtime_cond_code_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_localcall_lab(ll_backend__pragma_c_gen__generate_runtime_cond_code_4_0,
		ll_backend__pragma_c_gen__generate_runtime_cond_code_4_0_i16);
MR_def_label(ll_backend__pragma_c_gen__generate_runtime_cond_code_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),1)) {
		MR_GOTO_LAB(ll_backend__pragma_c_gen__generate_runtime_cond_code_4_0_i18);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 10);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
MR_def_label(ll_backend__pragma_c_gen__generate_runtime_cond_code_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 11);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__pragma_c_gen_module1)
	MR_init_entry1(fn__ll_backend__pragma_c_gen__foreign_proc_succ_ind_name_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ll_backend__pragma_c_gen__foreign_proc_succ_ind_name_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foreign_proc_succ_ind_name'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__ll_backend__pragma_c_gen__foreign_proc_succ_ind_name_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("MercurySuccessIndicator", 23);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__ll_backend__code_util__make_entry_label_4_0);
MR_decl_entry(fn__backend_libs__name_mangle__proc_label_to_c_string_2_0);
MR_decl_entry(fn__ll_backend__llds_out__llds_out_code_addr__label_to_c_string_2_0);
MR_decl_entry(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
MR_decl_entry(require__unexpected_3_0);
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_lval_0;
MR_decl_entry(fn__set__init_0_0);

MR_BEGIN_MODULE(ll_backend__pragma_c_gen_module2)
	MR_init_entry1(ll_backend__pragma_c_gen__make_proc_label_hash_define_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__pragma_c_gen__make_proc_label_hash_define_5_0);
	MR_init_label9(ll_backend__pragma_c_gen__make_proc_label_hash_define_5_0,2,3,8,6,11,12,13,14,17)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'make_proc_label_hash_define'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__pragma_c_gen__make_proc_label_hash_define_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(fn__ll_backend__code_util__make_entry_label_4_0,
		ll_backend__pragma_c_gen__make_proc_label_hash_define_5_0_i2);
MR_def_label(ll_backend__pragma_c_gen__make_proc_label_hash_define_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(ll_backend__pragma_c_gen__make_proc_label_hash_define_5_0_i3);
	}
	MR_r1 = MR_tfield(2, MR_r1, 0);
	MR_r2 = (MR_Integer) 1;
	MR_np_call_localret_ent(fn__backend_libs__name_mangle__proc_label_to_c_string_2_0,
		ll_backend__pragma_c_gen__make_proc_label_hash_define_5_0_i8);
MR_def_label(ll_backend__pragma_c_gen__make_proc_label_hash_define_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(ll_backend__pragma_c_gen__make_proc_label_hash_define_5_0_i6);
	}
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_r2 = (MR_Integer) 1;
	MR_np_call_localret_ent(fn__ll_backend__llds_out__llds_out_code_addr__label_to_c_string_2_0,
		ll_backend__pragma_c_gen__make_proc_label_hash_define_5_0_i8);
MR_def_label(ll_backend__pragma_c_gen__make_proc_label_hash_define_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__pragma_c_gen__make_proc_label_hash_define_5_0_i12);
MR_def_label(ll_backend__pragma_c_gen__make_proc_label_hash_define_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ll_backend.pragma_c_gen", 23);
	MR_r2 = (MR_Word) MR_string_const("function \140ll_backend.pragma_c_gen.make_proc_label_string\'/3", 59);
	MR_r3 = (MR_Word) MR_string_const("code_addr", 9);
	MR_np_call_localret_ent(require__unexpected_3_0,
		ll_backend__pragma_c_gen__make_proc_label_hash_define_5_0_i11);
MR_def_label(ll_backend__pragma_c_gen__make_proc_label_hash_define_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__pragma_c_gen__make_proc_label_hash_define_5_0_i12);
MR_def_label(ll_backend__pragma_c_gen__make_proc_label_hash_define_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("#define\tMR_PROC_LABEL\t", 22);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__pragma_c_gen__make_proc_label_hash_define_5_0_i13);
MR_def_label(ll_backend__pragma_c_gen__make_proc_label_hash_define_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_np_call_localret_ent(fn__set__init_0_0,
		ll_backend__pragma_c_gen__make_proc_label_hash_define_5_0_i14);
MR_def_label(ll_backend__pragma_c_gen__make_proc_label_hash_define_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 5);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 3) = MR_r2;
	MR_tfield(3, MR_tempr1, 4) = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	}
	MR_np_call_localret_ent(fn__set__init_0_0,
		ll_backend__pragma_c_gen__make_proc_label_hash_define_5_0_i17);
MR_def_label(ll_backend__pragma_c_gen__make_proc_label_hash_define_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 5);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_r2, 1) = (MR_Integer) 1;
	MR_tfield(3, MR_r2, 2) = (MR_Integer) 1;
	MR_tfield(3, MR_r2, 3) = MR_tempr1;
	MR_tfield(3, MR_r2, 4) = (MR_Word) MR_string_const("#undef\tMR_PROC_LABEL\n", 21);
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(ll_backend__code_info__get_globals_2_0);
MR_decl_entry(libs__globals__lookup_bool_option_3_0);
MR_decl_entry(string__sub_string_search_3_0);
MR_decl_entry(fn__term__context_init_0_0);
MR_decl_entry(ll_backend__code_info__add_alloc_site_info_6_0);

MR_BEGIN_MODULE(ll_backend__pragma_c_gen_module3)
	MR_init_entry1(ll_backend__pragma_c_gen__make_alloc_id_hash_define_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__pragma_c_gen__make_alloc_id_hash_define_6_0);
	MR_init_label10(ll_backend__pragma_c_gen__make_alloc_id_hash_define_6_0,2,3,7,11,10,12,13,17,23,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'make_alloc_id_hash_define'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__pragma_c_gen__make_alloc_id_hash_define_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r1;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__code_info__get_globals_2_0,
		ll_backend__pragma_c_gen__make_alloc_id_hash_define_6_0_i2);
MR_def_label(ll_backend__pragma_c_gen__make_alloc_id_hash_define_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 181;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		ll_backend__pragma_c_gen__make_alloc_id_hash_define_6_0_i3);
MR_def_label(ll_backend__pragma_c_gen__make_alloc_id_hash_define_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(ll_backend__pragma_c_gen__make_alloc_id_hash_define_6_0_i5);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Word) MR_string_const("MR_ALLOC_ID", 11);
	MR_np_call_localret_ent(string__sub_string_search_3_0,
		ll_backend__pragma_c_gen__make_alloc_id_hash_define_6_0_i7);
MR_def_label(ll_backend__pragma_c_gen__make_alloc_id_hash_define_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__pragma_c_gen__make_alloc_id_hash_define_6_0_i5);
	}
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(ll_backend__pragma_c_gen__make_alloc_id_hash_define_6_0_i10);
	}
	MR_np_call_localret_ent(fn__term__context_init_0_0,
		ll_backend__pragma_c_gen__make_alloc_id_hash_define_6_0_i11);
MR_def_label(ll_backend__pragma_c_gen__make_alloc_id_hash_define_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(3);
	MR_r2 = (MR_Word) MR_string_const("unknown", 7);
	MR_r3 = (MR_Integer) 0;
	MR_np_call_localret_ent(ll_backend__code_info__add_alloc_site_info_6_0,
		ll_backend__pragma_c_gen__make_alloc_id_hash_define_6_0_i12);
MR_def_label(ll_backend__pragma_c_gen__make_alloc_id_hash_define_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(1, MR_sv(1), 0);
	MR_r4 = MR_sv(3);
	MR_r2 = (MR_Word) MR_string_const("unknown", 7);
	MR_r3 = (MR_Integer) 0;
	MR_np_call_localret_ent(ll_backend__code_info__add_alloc_site_info_6_0,
		ll_backend__pragma_c_gen__make_alloc_id_hash_define_6_0_i12);
MR_def_label(ll_backend__pragma_c_gen__make_alloc_id_hash_define_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_np_call_localret_ent(fn__set__init_0_0,
		ll_backend__pragma_c_gen__make_alloc_id_hash_define_6_0_i13);
MR_def_label(ll_backend__pragma_c_gen__make_alloc_id_hash_define_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 5);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 3) = MR_r2;
	MR_tfield(3, MR_tempr1, 4) = (MR_Word) MR_string_const("#define\tMR_ALLOC_ID\t", 20);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_sv(3) = MR_tempr2;
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr2, 1) = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	}
	MR_np_call_localret_ent(fn__set__init_0_0,
		ll_backend__pragma_c_gen__make_alloc_id_hash_define_6_0_i17);
MR_def_label(ll_backend__pragma_c_gen__make_alloc_id_hash_define_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 5);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 3) = MR_r2;
	MR_tfield(3, MR_tempr1, 4) = (MR_Word) MR_string_const("\n", 1);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr1;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(2);
	MR_tfield(1, MR_r2, 1) = MR_tempr1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	}
	MR_np_call_localret_ent(fn__set__init_0_0,
		ll_backend__pragma_c_gen__make_alloc_id_hash_define_6_0_i23);
MR_def_label(ll_backend__pragma_c_gen__make_alloc_id_hash_define_6_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 5);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr2, 1) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr2, 2) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr2, 3) = MR_tempr1;
	MR_tfield(3, MR_tempr2, 4) = (MR_Word) MR_string_const("#undef\tMR_ALLOC_ID\n", 19);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr2;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_decr_sp_and_return(4);
	}
MR_def_label(ll_backend__pragma_c_gen__make_alloc_id_hash_define_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_sv(3);
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__pragma_c_gen_module4)
	MR_init_entry1(ll_backend__pragma_c_gen__make_c_arg_list_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__pragma_c_gen__make_c_arg_list_3_0);
	MR_init_label4(ll_backend__pragma_c_gen__make_c_arg_list_3_0,3,10,14,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'make_c_arg_list'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__pragma_c_gen__make_c_arg_list_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__pragma_c_gen__make_c_arg_list_3_0_i3);
	}
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(ll_backend__pragma_c_gen__make_c_arg_list_3_0_i8);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(ll_backend__pragma_c_gen__make_c_arg_list_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(ll_backend__pragma_c_gen__make_c_arg_list_3_0_i8);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	MR_r4 = MR_tempr1;
	MR_r3 = MR_tfield(0, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(ll_backend__pragma_c_gen__make_c_arg_list_3_0_i10);
	}
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 5);
	MR_sv(1) = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_tfield(0, MR_tempr1, 0);
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr2, 2) = MR_tfield(0, MR_tempr1, 2);
	MR_tfield(0, MR_tempr2, 3) = MR_tfield(0, MR_tempr1, 3);
	MR_tfield(0, MR_tempr2, 4) = MR_tfield(1, MR_r2, 0);
	MR_r2 = MR_tfield(1, MR_r2, 1);
	MR_r1 = MR_tfield(1, MR_r1, 1);
	}
	MR_np_localcall_lab(ll_backend__pragma_c_gen__make_c_arg_list_3_0,
		ll_backend__pragma_c_gen__make_c_arg_list_3_0_i14);
MR_def_label(ll_backend__pragma_c_gen__make_c_arg_list_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(0, MR_tfield(1, MR_r3, 0), 0);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 5);
	MR_sv(1) = MR_tempr2;
	MR_tempr3 = MR_r4;
	MR_tfield(0, MR_tempr2, 0) = MR_tfield(0, MR_tempr3, 0);
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 2) = MR_tfield(0, MR_tempr3, 2);
	MR_tfield(0, MR_tempr2, 3) = MR_tfield(0, MR_tempr3, 3);
	MR_tfield(0, MR_tempr2, 4) = MR_tfield(1, MR_r2, 0);
	MR_r2 = MR_tfield(1, MR_r2, 1);
	MR_r1 = MR_tfield(1, MR_r1, 1);
	}
	MR_np_localcall_lab(ll_backend__pragma_c_gen__make_c_arg_list_3_0,
		ll_backend__pragma_c_gen__make_c_arg_list_3_0_i14);
MR_def_label(ll_backend__pragma_c_gen__make_c_arg_list_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(2);
	}
MR_def_label(ll_backend__pragma_c_gen__make_c_arg_list_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ll_backend.pragma_c_gen", 23);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ll_backend.pragma_c_gen.make_c_arg_list\'/3", 53);
	MR_r3 = (MR_Word) MR_string_const("length mismatch", 15);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(int__max_3_0);

MR_BEGIN_MODULE(ll_backend__pragma_c_gen_module5)
	MR_init_entry1(ll_backend__pragma_c_gen__get_highest_arg_num_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__pragma_c_gen__get_highest_arg_num_3_0);
	MR_init_label3(ll_backend__pragma_c_gen__get_highest_arg_num_3_0,10,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_highest_arg_num'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__pragma_c_gen__get_highest_arg_num_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
MR_def_label(ll_backend__pragma_c_gen__get_highest_arg_num_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__pragma_c_gen__get_highest_arg_num_3_0_i3);
	}
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(2);
MR_def_label(ll_backend__pragma_c_gen__get_highest_arg_num_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_tfield(0, MR_tfield(1, MR_r1, 0), 0);
	MR_np_call_localret_ent(int__max_3_0,
		ll_backend__pragma_c_gen__get_highest_arg_num_3_0_i4);
MR_def_label(ll_backend__pragma_c_gen__get_highest_arg_num_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(2);
	MR_GOTO_LAB(ll_backend__pragma_c_gen__get_highest_arg_num_3_0_i10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(check_hlds__mode_util__mode_to_arg_mode_4_0);

MR_BEGIN_MODULE(ll_backend__pragma_c_gen_module6)
	MR_init_entry1(ll_backend__pragma_c_gen__make_extra_c_arg_list_seq_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__pragma_c_gen__make_extra_c_arg_list_seq_4_0);
	MR_init_label5(ll_backend__pragma_c_gen__make_extra_c_arg_list_seq_4_0,29,6,5,4,11)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'make_extra_c_arg_list_seq'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__pragma_c_gen__make_extra_c_arg_list_seq_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__pragma_c_gen__make_extra_c_arg_list_seq_4_0_i29);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(ll_backend__pragma_c_gen__make_extra_c_arg_list_seq_4_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	MR_tempr2 = MR_tfield(0, MR_tempr1, 1);
	if (MR_LTAGS_TEST(MR_tempr2,0,0)) {
		MR_GOTO_LAB(ll_backend__pragma_c_gen__make_extra_c_arg_list_seq_4_0_i5);
	}
	MR_sv(3) = MR_r2;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_sv(4) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(5) = MR_tfield(0, MR_tempr1, 2);
	MR_sv(6) = MR_tfield(0, MR_tempr1, 3);
	MR_tempr1 = MR_tfield(1, MR_tempr2, 0);
	MR_sv(7) = MR_tfield(0, MR_tempr1, 0);
	MR_r1 = MR_r2;
	MR_r2 = MR_tfield(0, MR_tempr1, 1);
	MR_r3 = MR_sv(5);
	}
	MR_np_call_localret_ent(check_hlds__mode_util__mode_to_arg_mode_4_0,
		ll_backend__pragma_c_gen__make_extra_c_arg_list_seq_4_0_i6);
MR_def_label(ll_backend__pragma_c_gen__make_extra_c_arg_list_seq_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = ((MR_Integer) MR_sv(1) + (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(7);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr3, 0) = MR_sv(4);
	MR_tfield(0, MR_tempr3, 1) = MR_tempr2;
	MR_tfield(0, MR_tempr3, 2) = MR_sv(5);
	MR_tfield(0, MR_tempr3, 3) = MR_sv(6);
	MR_tfield(0, MR_tempr3, 4) = MR_tempr1;
	MR_r2 = MR_sv(3);
	MR_r1 = MR_sv(2);
	MR_sv(3) = MR_tempr3;
	MR_r3 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_localcall_lab(ll_backend__pragma_c_gen__make_extra_c_arg_list_seq_4_0,
		ll_backend__pragma_c_gen__make_extra_c_arg_list_seq_4_0_i11);
MR_def_label(ll_backend__pragma_c_gen__make_extra_c_arg_list_seq_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("ll_backend.pragma_c_gen", 23);
	MR_sv(3) = MR_r2;
	MR_r2 = (MR_Word) MR_string_const("predicate \140ll_backend.pragma_c_gen.make_extra_c_arg_list_seq\'/4", 63);
	MR_r3 = (MR_Word) MR_string_const("no name", 7);
	}
	MR_np_call_localret_ent(require__unexpected_3_0,
		ll_backend__pragma_c_gen__make_extra_c_arg_list_seq_4_0_i4);
MR_def_label(ll_backend__pragma_c_gen__make_extra_c_arg_list_seq_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_localcall_lab(ll_backend__pragma_c_gen__make_extra_c_arg_list_seq_4_0,
		ll_backend__pragma_c_gen__make_extra_c_arg_list_seq_4_0_i11);
MR_def_label(ll_backend__pragma_c_gen__make_extra_c_arg_list_seq_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(3);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__pragma_c_gen_module7)
	MR_init_entry1(ll_backend__pragma_c_gen__make_extra_c_arg_list_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__pragma_c_gen__make_extra_c_arg_list_4_0);
	MR_init_label1(ll_backend__pragma_c_gen__make_extra_c_arg_list_4_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'make_extra_c_arg_list'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__pragma_c_gen__make_extra_c_arg_list_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = MR_r3;
	MR_r2 = (MR_Integer) 0;
	MR_np_call_localret_ent(ll_backend__pragma_c_gen__get_highest_arg_num_3_0,
		ll_backend__pragma_c_gen__make_extra_c_arg_list_4_0_i2);
MR_def_label(ll_backend__pragma_c_gen__make_extra_c_arg_list_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(ll_backend__pragma_c_gen__make_extra_c_arg_list_seq_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__pragma_c_gen_module8)
	MR_init_entry1(ll_backend__pragma_c_gen__get_c_arg_list_vars_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__pragma_c_gen__get_c_arg_list_vars_2_0);
	MR_init_label3(ll_backend__pragma_c_gen__get_c_arg_list_vars_2_0,5,6,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_c_arg_list_vars'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__pragma_c_gen__get_c_arg_list_vars_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__pragma_c_gen__get_c_arg_list_vars_2_0_i2);
	}
	MR_r3 = (MR_Word) MR_sp;
MR_def_label(ll_backend__pragma_c_gen__get_c_arg_list_vars_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	while (1) {
	MR_incr_sp(1);
	MR_sv(1) = MR_tfield(0, MR_tfield(1, MR_r1, 0), 0);
	MR_r1 = MR_tfield(1, MR_r1, 1);
	if (MR_LTAGS_TESTR(MR_r1,0,0))
		continue;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	break;
	} /* end while */
MR_def_label(ll_backend__pragma_c_gen__get_c_arg_list_vars_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	while (1) {
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(1);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp(1);
	if (((MR_Integer) MR_sp > (MR_Integer) MR_r3))
		continue;
	MR_proceed();
	break;
	} /* end while */
MR_def_label(ll_backend__pragma_c_gen__get_c_arg_list_vars_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__pragma_c_gen_module9)
	MR_init_entry1(ll_backend__pragma_c_gen__foreign_proc_select_out_args_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__pragma_c_gen__foreign_proc_select_out_args_2_0);
	MR_init_label4(ll_backend__pragma_c_gen__foreign_proc_select_out_args_2_0,7,8,4,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foreign_proc_select_out_args'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__pragma_c_gen__foreign_proc_select_out_args_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__pragma_c_gen__foreign_proc_select_out_args_2_0_i2);
	}
	MR_r3 = (MR_Word) MR_sp;
MR_def_label(ll_backend__pragma_c_gen__foreign_proc_select_out_args_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	while (1) {
	MR_incr_sp(1);
	MR_sv(1) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_tfield(1, MR_r1, 1);
	if (MR_LTAGS_TESTR(MR_r1,0,0))
		continue;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	break;
	} /* end while */
MR_def_label(ll_backend__pragma_c_gen__foreign_proc_select_out_args_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_r2 = MR_tfield(0, MR_tfield(0, MR_tempr1, 4), 1);
	if (MR_INT_NE(MR_r2,1)) {
		MR_GOTO_LAB(ll_backend__pragma_c_gen__foreign_proc_select_out_args_2_0_i4);
	}
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr1;
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	}
MR_def_label(ll_backend__pragma_c_gen__foreign_proc_select_out_args_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(1);
	if (((MR_Integer) MR_sp > (MR_Integer) MR_r3)) {
		MR_GOTO_LAB(ll_backend__pragma_c_gen__foreign_proc_select_out_args_2_0_i8);
	}
	MR_proceed();
MR_def_label(ll_backend__pragma_c_gen__foreign_proc_select_out_args_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__pragma_c_gen_module10)
	MR_init_entry1(ll_backend__pragma_c_gen__foreign_proc_select_in_args_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__pragma_c_gen__foreign_proc_select_in_args_2_0);
	MR_init_label4(ll_backend__pragma_c_gen__foreign_proc_select_in_args_2_0,7,8,4,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foreign_proc_select_in_args'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__pragma_c_gen__foreign_proc_select_in_args_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__pragma_c_gen__foreign_proc_select_in_args_2_0_i2);
	}
	MR_r3 = (MR_Word) MR_sp;
MR_def_label(ll_backend__pragma_c_gen__foreign_proc_select_in_args_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	while (1) {
	MR_incr_sp(1);
	MR_sv(1) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_tfield(1, MR_r1, 1);
	if (MR_LTAGS_TESTR(MR_r1,0,0))
		continue;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	break;
	} /* end while */
MR_def_label(ll_backend__pragma_c_gen__foreign_proc_select_in_args_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_r2 = MR_tfield(0, MR_tfield(0, MR_tempr1, 4), 1);
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(ll_backend__pragma_c_gen__foreign_proc_select_in_args_2_0_i4);
	}
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr1;
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	}
MR_def_label(ll_backend__pragma_c_gen__foreign_proc_select_in_args_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(1);
	if (((MR_Integer) MR_sp > (MR_Integer) MR_r3)) {
		MR_GOTO_LAB(ll_backend__pragma_c_gen__foreign_proc_select_in_args_2_0_i8);
	}
	MR_proceed();
MR_def_label(ll_backend__pragma_c_gen__foreign_proc_select_in_args_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(string__first_char_3_2);
MR_decl_entry(fn__backend_libs__foreign__mercury_exported_type_to_string_3_0);
MR_decl_entry(fn__term__var_to_int_1_0);
MR_decl_entry(fn__string__int_to_string_1_0);

MR_BEGIN_MODULE(ll_backend__pragma_c_gen_module11)
	MR_init_entry1(ll_backend__pragma_c_gen__make_foreign_proc_decls_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__pragma_c_gen__make_foreign_proc_decls_4_0);
	MR_init_label10(ll_backend__pragma_c_gen__make_foreign_proc_decls_4_0,74,4,9,12,15,5,6,20,21,22)
	MR_init_label3(ll_backend__pragma_c_gen__make_foreign_proc_decls_4_0,24,27,73)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'make_foreign_proc_decls'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__pragma_c_gen__make_foreign_proc_decls_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__pragma_c_gen__make_foreign_proc_decls_4_0_i74);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(ll_backend__pragma_c_gen__make_foreign_proc_decls_4_0,74)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(7) = MR_r2;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_tfield(1, MR_r1, 1);
	MR_np_localcall_lab(ll_backend__pragma_c_gen__make_foreign_proc_decls_4_0,
		ll_backend__pragma_c_gen__make_foreign_proc_decls_4_0_i4);
MR_def_label(ll_backend__pragma_c_gen__make_foreign_proc_decls_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_sv(2);
	MR_sv(5) = MR_tfield(0, MR_tempr3, 3);
	MR_sv(4) = MR_tfield(0, MR_tempr3, 2);
	MR_sv(3) = MR_tfield(0, MR_tempr3, 0);
	MR_tempr1 = MR_tfield(0, MR_tempr3, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(ll_backend__pragma_c_gen__make_foreign_proc_decls_4_0_i6);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr1, 0);
	MR_sv(2) = MR_r1;
	MR_sv(6) = MR_tempr2;
	MR_r1 = MR_tempr2;
	MR_r2 = (MR_Integer) 95;
	}
	MR_np_call_localret_ent(string__first_char_3_2,
		ll_backend__pragma_c_gen__make_foreign_proc_decls_4_0_i9);
MR_def_label(ll_backend__pragma_c_gen__make_foreign_proc_decls_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(ll_backend__pragma_c_gen__make_foreign_proc_decls_4_0_i5);
	}
	if (MR_INT_NE(MR_sv(5),1)) {
		MR_GOTO_LAB(ll_backend__pragma_c_gen__make_foreign_proc_decls_4_0_i12);
	}
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r2, 0) = MR_sv(4);
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_string_const("MR_Word", 7);
	MR_tfield(0, MR_r2, 2) = MR_sv(6);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_r2;
	MR_tfield(1, MR_r1, 1) = MR_sv(2);
	MR_decr_sp_and_return(8);
MR_def_label(ll_backend__pragma_c_gen__make_foreign_proc_decls_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(fn__backend_libs__foreign__mercury_exported_type_to_string_3_0,
		ll_backend__pragma_c_gen__make_foreign_proc_decls_4_0_i15);
MR_def_label(ll_backend__pragma_c_gen__make_foreign_proc_decls_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r2, 0) = MR_sv(4);
	MR_tfield(0, MR_r2, 1) = MR_r1;
	MR_tfield(0, MR_r2, 2) = MR_sv(6);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_r2;
	MR_tfield(1, MR_r1, 1) = MR_sv(2);
	MR_decr_sp_and_return(8);
MR_def_label(ll_backend__pragma_c_gen__make_foreign_proc_decls_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
MR_def_label(ll_backend__pragma_c_gen__make_foreign_proc_decls_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),0)) {
		MR_GOTO_LAB(ll_backend__pragma_c_gen__make_foreign_proc_decls_4_0_i73);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(fn__term__var_to_int_1_0,
		ll_backend__pragma_c_gen__make_foreign_proc_decls_4_0_i20);
MR_def_label(ll_backend__pragma_c_gen__make_foreign_proc_decls_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		ll_backend__pragma_c_gen__make_foreign_proc_decls_4_0_i21);
MR_def_label(ll_backend__pragma_c_gen__make_foreign_proc_decls_4_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("UnnamedArg", 10);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__pragma_c_gen__make_foreign_proc_decls_4_0_i22);
MR_def_label(ll_backend__pragma_c_gen__make_foreign_proc_decls_4_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(5),1)) {
		MR_GOTO_LAB(ll_backend__pragma_c_gen__make_foreign_proc_decls_4_0_i24);
	}
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r2, 0) = MR_sv(4);
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_string_const("MR_Word", 7);
	MR_tfield(0, MR_r2, 2) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_r2;
	MR_tfield(1, MR_r1, 1) = MR_sv(2);
	MR_decr_sp_and_return(8);
MR_def_label(ll_backend__pragma_c_gen__make_foreign_proc_decls_4_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_sv(4);
	}
	MR_np_call_localret_ent(fn__backend_libs__foreign__mercury_exported_type_to_string_3_0,
		ll_backend__pragma_c_gen__make_foreign_proc_decls_4_0_i27);
MR_def_label(ll_backend__pragma_c_gen__make_foreign_proc_decls_4_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r2, 0) = MR_sv(4);
	MR_tfield(0, MR_r2, 1) = MR_r1;
	MR_tfield(0, MR_r2, 2) = MR_sv(7);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_r2;
	MR_tfield(1, MR_r1, 1) = MR_sv(2);
MR_def_label(ll_backend__pragma_c_gen__make_foreign_proc_decls_4_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(parse_tree__set_of_var__member_2_0);
MR_decl_entry(parse_tree__set_of_var__insert_3_0);

MR_BEGIN_MODULE(ll_backend__pragma_c_gen_module12)
	MR_init_entry1(ll_backend__pragma_c_gen__find_dead_input_vars_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__pragma_c_gen__find_dead_input_vars_4_0);
	MR_init_label5(ll_backend__pragma_c_gen__find_dead_input_vars_4_0,19,3,5,7,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'find_dead_input_vars'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__pragma_c_gen__find_dead_input_vars_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(ll_backend__pragma_c_gen__find_dead_input_vars_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__pragma_c_gen__find_dead_input_vars_4_0_i3);
	}
	MR_r1 = MR_r3;
	MR_decr_sp_and_return(5);
MR_def_label(ll_backend__pragma_c_gen__find_dead_input_vars_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_tfield(1, MR_r1, 1);
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(4) = MR_tfield(0, MR_tfield(1, MR_r1, 0), 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(parse_tree__set_of_var__member_2_0,
		ll_backend__pragma_c_gen__find_dead_input_vars_4_0_i5);
MR_def_label(ll_backend__pragma_c_gen__find_dead_input_vars_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__pragma_c_gen__find_dead_input_vars_4_0_i4);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(parse_tree__set_of_var__insert_3_0,
		ll_backend__pragma_c_gen__find_dead_input_vars_4_0_i7);
MR_def_label(ll_backend__pragma_c_gen__find_dead_input_vars_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(ll_backend__pragma_c_gen__find_dead_input_vars_4_0_i19);
	}
MR_def_label(ll_backend__pragma_c_gen__find_dead_input_vars_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r1 = MR_sv(3);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(ll_backend__pragma_c_gen__find_dead_input_vars_4_0_i19);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_instruction_0;
MR_decl_entry(fn__cord__empty_0_0);
MR_decl_entry(fn__ll_backend__code_info__variable_type_2_0);
MR_decl_entry(ll_backend__code_info__produce_variable_5_0);
MR_decl_entry(ll_backend__code_info__get_module_info_2_0);
MR_decl_entry(hlds__hlds_module__module_info_get_type_table_2_0);
MR_decl_entry(parse_tree__prog_type__type_to_ctor_2_0);
MR_decl_entry(hlds__hlds_data__search_type_ctor_defn_3_0);
MR_decl_entry(hlds__hlds_data__get_type_defn_body_2_0);
MR_decl_entry(fn__check_hlds__type_util__check_dummy_type_2_0);
MR_decl_entry(fn__f_99_111_114_100_95_95_43_43_2_0);

MR_BEGIN_MODULE(ll_backend__pragma_c_gen_module13)
	MR_init_entry1(ll_backend__pragma_c_gen__get_foreign_proc_input_vars_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__pragma_c_gen__get_foreign_proc_input_vars_6_0);
	MR_init_label10(ll_backend__pragma_c_gen__get_foreign_proc_input_vars_6_0,137,4,3,9,11,12,13,14,16,18)
	MR_init_label10(ll_backend__pragma_c_gen__get_foreign_proc_input_vars_6_0,20,23,15,27,28,29,31,5,6,36)
	MR_init_label10(ll_backend__pragma_c_gen__get_foreign_proc_input_vars_6_0,37,38,39,40,41,42,44,46,48,51)
	MR_init_label7(ll_backend__pragma_c_gen__get_foreign_proc_input_vars_6_0,43,55,56,57,59,61,35)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_foreign_proc_input_vars'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__pragma_c_gen__get_foreign_proc_input_vars_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
MR_def_label(ll_backend__pragma_c_gen__get_foreign_proc_input_vars_6_0,137)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__pragma_c_gen__get_foreign_proc_input_vars_6_0_i3);
	}
	MR_sv(4) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_np_call_localret_ent(fn__cord__empty_0_0,
		ll_backend__pragma_c_gen__get_foreign_proc_input_vars_6_0_i4);
MR_def_label(ll_backend__pragma_c_gen__get_foreign_proc_input_vars_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(4);
	MR_decr_sp_and_return(11);
	}
MR_def_label(ll_backend__pragma_c_gen__get_foreign_proc_input_vars_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 3);
	MR_sv(2) = MR_tfield(0, MR_tempr1, 2);
	MR_sv(5) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(1) = MR_tfield(1, MR_r1, 1);
	MR_tempr2 = MR_tfield(0, MR_tempr1, 1);
	if (MR_LTAGS_TEST(MR_tempr2,0,0)) {
		MR_GOTO_LAB(ll_backend__pragma_c_gen__get_foreign_proc_input_vars_6_0_i6);
	}
	MR_r1 = MR_tfield(1, MR_tempr2, 0);
	MR_sv(7) = MR_r2;
	MR_sv(4) = MR_r3;
	MR_sv(9) = MR_r1;
	MR_r2 = (MR_Integer) 95;
	}
	MR_np_call_localret_ent(string__first_char_3_2,
		ll_backend__pragma_c_gen__get_foreign_proc_input_vars_6_0_i9);
MR_def_label(ll_backend__pragma_c_gen__get_foreign_proc_input_vars_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(ll_backend__pragma_c_gen__get_foreign_proc_input_vars_6_0_i5);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(fn__ll_backend__code_info__variable_type_2_0,
		ll_backend__pragma_c_gen__get_foreign_proc_input_vars_6_0_i11);
MR_def_label(ll_backend__pragma_c_gen__get_foreign_proc_input_vars_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__code_info__produce_variable_5_0,
		ll_backend__pragma_c_gen__get_foreign_proc_input_vars_6_0_i12);
MR_def_label(ll_backend__pragma_c_gen__get_foreign_proc_input_vars_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(8) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__code_info__get_module_info_2_0,
		ll_backend__pragma_c_gen__get_foreign_proc_input_vars_6_0_i13);
MR_def_label(ll_backend__pragma_c_gen__get_foreign_proc_input_vars_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_type_table_2_0,
		ll_backend__pragma_c_gen__get_foreign_proc_input_vars_6_0_i14);
MR_def_label(ll_backend__pragma_c_gen__get_foreign_proc_input_vars_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(parse_tree__prog_type__type_to_ctor_2_0,
		ll_backend__pragma_c_gen__get_foreign_proc_input_vars_6_0_i16);
MR_def_label(ll_backend__pragma_c_gen__get_foreign_proc_input_vars_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__pragma_c_gen__get_foreign_proc_input_vars_6_0_i15);
	}
	MR_r1 = MR_sv(10);
	MR_np_call_localret_ent(hlds__hlds_data__search_type_ctor_defn_3_0,
		ll_backend__pragma_c_gen__get_foreign_proc_input_vars_6_0_i18);
MR_def_label(ll_backend__pragma_c_gen__get_foreign_proc_input_vars_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__pragma_c_gen__get_foreign_proc_input_vars_6_0_i15);
	}
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_data__get_type_defn_body_2_0,
		ll_backend__pragma_c_gen__get_foreign_proc_input_vars_6_0_i20);
MR_def_label(ll_backend__pragma_c_gen__get_foreign_proc_input_vars_6_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(ll_backend__pragma_c_gen__get_foreign_proc_input_vars_6_0_i15);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_tfield(0, MR_body((MR_Integer) MR_r1, (MR_Integer) 0), 1);
	MR_r4 = MR_tempr1;
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(ll_backend__pragma_c_gen__get_foreign_proc_input_vars_6_0_i23);
	}
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_r5 = MR_tempr2;
	MR_tempr3 = MR_tfield(1, MR_tempr1, 0);
	MR_r6 = MR_tempr3;
	MR_tfield(0, MR_tempr2, 0) = MR_tfield(0, MR_tempr3, 0);
	MR_tfield(0, MR_tempr2, 1) = MR_tfield(0, MR_tempr3, 2);
	MR_tag_alloc_heap(MR_sv(10), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(10), 0) = MR_tempr2;
	MR_r1 = MR_sv(8);
	MR_GOTO_LAB(ll_backend__pragma_c_gen__get_foreign_proc_input_vars_6_0_i27);
	}
MR_def_label(ll_backend__pragma_c_gen__get_foreign_proc_input_vars_6_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ll_backend.pragma_c_gen", 23);
	MR_r2 = (MR_Word) MR_string_const("function \140ll_backend.pragma_c_gen.get_maybe_foreign_type_info\'/2", 64);
	MR_r3 = (MR_Word) MR_string_const("no c foreign type", 17);
	MR_np_call_localret_ent(require__unexpected_3_0,
		ll_backend__pragma_c_gen__get_foreign_proc_input_vars_6_0_i27);
MR_def_label(ll_backend__pragma_c_gen__get_foreign_proc_input_vars_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_sv(8);
MR_def_label(ll_backend__pragma_c_gen__get_foreign_proc_input_vars_6_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_np_call_localret_ent(ll_backend__code_info__get_module_info_2_0,
		ll_backend__pragma_c_gen__get_foreign_proc_input_vars_6_0_i28);
MR_def_label(ll_backend__pragma_c_gen__get_foreign_proc_input_vars_6_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(fn__check_hlds__type_util__check_dummy_type_2_0,
		ll_backend__pragma_c_gen__get_foreign_proc_input_vars_6_0_i29);
MR_def_label(ll_backend__pragma_c_gen__get_foreign_proc_input_vars_6_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 7);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(9);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(10);
	MR_tfield(0, MR_tempr1, 6) = MR_sv(3);
	MR_tempr2 = MR_sv(7);
	MR_sv(7) = MR_tempr1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr2;
	MR_r3 = MR_sv(8);
	}
	MR_np_localcall_lab(ll_backend__pragma_c_gen__get_foreign_proc_input_vars_6_0,
		ll_backend__pragma_c_gen__get_foreign_proc_input_vars_6_0_i31);
MR_def_label(ll_backend__pragma_c_gen__get_foreign_proc_input_vars_6_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(7);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_sv(7) = MR_tempr1;
	MR_sv(4) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ll_backend__pragma_c_gen__get_foreign_proc_input_vars_6_0_i61);
MR_def_label(ll_backend__pragma_c_gen__get_foreign_proc_input_vars_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(4);
MR_def_label(ll_backend__pragma_c_gen__get_foreign_proc_input_vars_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(ll_backend__pragma_c_gen__get_foreign_proc_input_vars_6_0_i35);
	}
	MR_sv(7) = MR_r2;
	MR_sv(4) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(fn__term__var_to_int_1_0,
		ll_backend__pragma_c_gen__get_foreign_proc_input_vars_6_0_i36);
MR_def_label(ll_backend__pragma_c_gen__get_foreign_proc_input_vars_6_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		ll_backend__pragma_c_gen__get_foreign_proc_input_vars_6_0_i37);
MR_def_label(ll_backend__pragma_c_gen__get_foreign_proc_input_vars_6_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("UnnamedArg", 10);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__pragma_c_gen__get_foreign_proc_input_vars_6_0_i38);
MR_def_label(ll_backend__pragma_c_gen__get_foreign_proc_input_vars_6_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(fn__ll_backend__code_info__variable_type_2_0,
		ll_backend__pragma_c_gen__get_foreign_proc_input_vars_6_0_i39);
MR_def_label(ll_backend__pragma_c_gen__get_foreign_proc_input_vars_6_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__code_info__produce_variable_5_0,
		ll_backend__pragma_c_gen__get_foreign_proc_input_vars_6_0_i40);
MR_def_label(ll_backend__pragma_c_gen__get_foreign_proc_input_vars_6_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_sv(10) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(9) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__code_info__get_module_info_2_0,
		ll_backend__pragma_c_gen__get_foreign_proc_input_vars_6_0_i41);
MR_def_label(ll_backend__pragma_c_gen__get_foreign_proc_input_vars_6_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_type_table_2_0,
		ll_backend__pragma_c_gen__get_foreign_proc_input_vars_6_0_i42);
MR_def_label(ll_backend__pragma_c_gen__get_foreign_proc_input_vars_6_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(parse_tree__prog_type__type_to_ctor_2_0,
		ll_backend__pragma_c_gen__get_foreign_proc_input_vars_6_0_i44);
MR_def_label(ll_backend__pragma_c_gen__get_foreign_proc_input_vars_6_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__pragma_c_gen__get_foreign_proc_input_vars_6_0_i43);
	}
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(hlds__hlds_data__search_type_ctor_defn_3_0,
		ll_backend__pragma_c_gen__get_foreign_proc_input_vars_6_0_i46);
MR_def_label(ll_backend__pragma_c_gen__get_foreign_proc_input_vars_6_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__pragma_c_gen__get_foreign_proc_input_vars_6_0_i43);
	}
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_data__get_type_defn_body_2_0,
		ll_backend__pragma_c_gen__get_foreign_proc_input_vars_6_0_i48);
MR_def_label(ll_backend__pragma_c_gen__get_foreign_proc_input_vars_6_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(ll_backend__pragma_c_gen__get_foreign_proc_input_vars_6_0_i43);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_tfield(0, MR_body((MR_Integer) MR_r1, (MR_Integer) 0), 1);
	MR_r4 = MR_tempr1;
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(ll_backend__pragma_c_gen__get_foreign_proc_input_vars_6_0_i51);
	}
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_r5 = MR_tempr2;
	MR_tempr3 = MR_tfield(1, MR_tempr1, 0);
	MR_r6 = MR_tempr3;
	MR_tfield(0, MR_tempr2, 0) = MR_tfield(0, MR_tempr3, 0);
	MR_tfield(0, MR_tempr2, 1) = MR_tfield(0, MR_tempr3, 2);
	MR_tag_alloc_heap(MR_sv(8), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(8), 0) = MR_tempr2;
	MR_r1 = MR_sv(9);
	MR_GOTO_LAB(ll_backend__pragma_c_gen__get_foreign_proc_input_vars_6_0_i55);
	}
MR_def_label(ll_backend__pragma_c_gen__get_foreign_proc_input_vars_6_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ll_backend.pragma_c_gen", 23);
	MR_r2 = (MR_Word) MR_string_const("function \140ll_backend.pragma_c_gen.get_maybe_foreign_type_info\'/2", 64);
	MR_r3 = (MR_Word) MR_string_const("no c foreign type", 17);
	MR_np_call_localret_ent(require__unexpected_3_0,
		ll_backend__pragma_c_gen__get_foreign_proc_input_vars_6_0_i55);
MR_def_label(ll_backend__pragma_c_gen__get_foreign_proc_input_vars_6_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_sv(9);
MR_def_label(ll_backend__pragma_c_gen__get_foreign_proc_input_vars_6_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_np_call_localret_ent(ll_backend__code_info__get_module_info_2_0,
		ll_backend__pragma_c_gen__get_foreign_proc_input_vars_6_0_i56);
MR_def_label(ll_backend__pragma_c_gen__get_foreign_proc_input_vars_6_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(fn__check_hlds__type_util__check_dummy_type_2_0,
		ll_backend__pragma_c_gen__get_foreign_proc_input_vars_6_0_i57);
MR_def_label(ll_backend__pragma_c_gen__get_foreign_proc_input_vars_6_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 7);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(10);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(8);
	MR_tfield(0, MR_tempr1, 6) = MR_sv(3);
	MR_tempr2 = MR_sv(7);
	MR_sv(7) = MR_tempr1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr2;
	MR_r3 = MR_sv(9);
	}
	MR_np_localcall_lab(ll_backend__pragma_c_gen__get_foreign_proc_input_vars_6_0,
		ll_backend__pragma_c_gen__get_foreign_proc_input_vars_6_0_i59);
MR_def_label(ll_backend__pragma_c_gen__get_foreign_proc_input_vars_6_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(7);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_sv(7) = MR_tempr1;
	MR_sv(4) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ll_backend__pragma_c_gen__get_foreign_proc_input_vars_6_0_i61);
MR_def_label(ll_backend__pragma_c_gen__get_foreign_proc_input_vars_6_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(4);
	MR_decr_sp_and_return(11);
	}
MR_def_label(ll_backend__pragma_c_gen__get_foreign_proc_input_vars_6_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(11);
	MR_GOTO_LAB(ll_backend__pragma_c_gen__get_foreign_proc_input_vars_6_0_i137);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(ll_backend__code_info__acquire_reg_for_var_4_0);

MR_BEGIN_MODULE(ll_backend__pragma_c_gen_module14)
	MR_init_entry1(ll_backend__pragma_c_gen__foreign_proc_acquire_regs_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__pragma_c_gen__foreign_proc_acquire_regs_4_0);
	MR_init_label3(ll_backend__pragma_c_gen__foreign_proc_acquire_regs_4_0,17,4,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foreign_proc_acquire_regs'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__pragma_c_gen__foreign_proc_acquire_regs_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__pragma_c_gen__foreign_proc_acquire_regs_4_0_i17);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(ll_backend__pragma_c_gen__foreign_proc_acquire_regs_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_tfield(0, MR_tfield(1, MR_r1, 0), 0);
	MR_np_call_localret_ent(ll_backend__code_info__acquire_reg_for_var_4_0,
		ll_backend__pragma_c_gen__foreign_proc_acquire_regs_4_0_i4);
MR_def_label(ll_backend__pragma_c_gen__foreign_proc_acquire_regs_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_localcall_lab(ll_backend__pragma_c_gen__foreign_proc_acquire_regs_4_0,
		ll_backend__pragma_c_gen__foreign_proc_acquire_regs_4_0_i5);
MR_def_label(ll_backend__pragma_c_gen__foreign_proc_acquire_regs_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(ll_backend__code_info__release_reg_3_0);
MR_decl_entry(ll_backend__code_info__variable_is_forward_live_2_0);
MR_decl_entry(ll_backend__code_info__set_var_location_4_0);

MR_BEGIN_MODULE(ll_backend__pragma_c_gen_module15)
	MR_init_entry1(ll_backend__pragma_c_gen__place_foreign_proc_output_args_in_regs_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__pragma_c_gen__place_foreign_proc_output_args_in_regs_6_0);
	MR_init_label10(ll_backend__pragma_c_gen__place_foreign_proc_output_args_in_regs_6_0,3,9,10,13,15,16,17,19,21,23)
	MR_init_label10(ll_backend__pragma_c_gen__place_foreign_proc_output_args_in_regs_6_0,26,18,30,35,37,38,39,31,32,44)
	MR_init_label8(ll_backend__pragma_c_gen__place_foreign_proc_output_args_in_regs_6_0,45,46,47,48,49,43,11,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'place_foreign_proc_output_args_in_regs'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__pragma_c_gen__place_foreign_proc_output_args_in_regs_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__pragma_c_gen__place_foreign_proc_output_args_in_regs_6_0_i3);
	}
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(ll_backend__pragma_c_gen__place_foreign_proc_output_args_in_regs_6_0_i8);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r4;
	MR_proceed();
MR_def_label(ll_backend__pragma_c_gen__place_foreign_proc_output_args_in_regs_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(ll_backend__pragma_c_gen__place_foreign_proc_output_args_in_regs_6_0_i8);
	}
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(7) = MR_r3;
	MR_sv(1) = MR_tfield(1, MR_r2, 0);
	MR_sv(8) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_tfield(1, MR_r1, 1);
	MR_r2 = MR_tfield(1, MR_r2, 1);
	MR_np_localcall_lab(ll_backend__pragma_c_gen__place_foreign_proc_output_args_in_regs_6_0,
		ll_backend__pragma_c_gen__place_foreign_proc_output_args_in_regs_6_0_i9);
MR_def_label(ll_backend__pragma_c_gen__place_foreign_proc_output_args_in_regs_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(8);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(6) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(4) = MR_tfield(0, MR_tempr1, 2);
	MR_sv(5) = MR_tfield(0, MR_tempr1, 3);
	MR_r1 = MR_sv(1);
	}
	MR_np_call_localret_ent(ll_backend__code_info__release_reg_3_0,
		ll_backend__pragma_c_gen__place_foreign_proc_output_args_in_regs_6_0_i10);
MR_def_label(ll_backend__pragma_c_gen__place_foreign_proc_output_args_in_regs_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(ll_backend__code_info__variable_is_forward_live_2_0,
		ll_backend__pragma_c_gen__place_foreign_proc_output_args_in_regs_6_0_i13);
MR_def_label(ll_backend__pragma_c_gen__place_foreign_proc_output_args_in_regs_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__pragma_c_gen__place_foreign_proc_output_args_in_regs_6_0_i11);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(8);
	MR_np_call_localret_ent(ll_backend__code_info__set_var_location_4_0,
		ll_backend__pragma_c_gen__place_foreign_proc_output_args_in_regs_6_0_i15);
MR_def_label(ll_backend__pragma_c_gen__place_foreign_proc_output_args_in_regs_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_np_call_localret_ent(ll_backend__code_info__get_module_info_2_0,
		ll_backend__pragma_c_gen__place_foreign_proc_output_args_in_regs_6_0_i16);
MR_def_label(ll_backend__pragma_c_gen__place_foreign_proc_output_args_in_regs_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_type_table_2_0,
		ll_backend__pragma_c_gen__place_foreign_proc_output_args_in_regs_6_0_i17);
MR_def_label(ll_backend__pragma_c_gen__place_foreign_proc_output_args_in_regs_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(parse_tree__prog_type__type_to_ctor_2_0,
		ll_backend__pragma_c_gen__place_foreign_proc_output_args_in_regs_6_0_i19);
MR_def_label(ll_backend__pragma_c_gen__place_foreign_proc_output_args_in_regs_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__pragma_c_gen__place_foreign_proc_output_args_in_regs_6_0_i18);
	}
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(hlds__hlds_data__search_type_ctor_defn_3_0,
		ll_backend__pragma_c_gen__place_foreign_proc_output_args_in_regs_6_0_i21);
MR_def_label(ll_backend__pragma_c_gen__place_foreign_proc_output_args_in_regs_6_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__pragma_c_gen__place_foreign_proc_output_args_in_regs_6_0_i18);
	}
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_data__get_type_defn_body_2_0,
		ll_backend__pragma_c_gen__place_foreign_proc_output_args_in_regs_6_0_i23);
MR_def_label(ll_backend__pragma_c_gen__place_foreign_proc_output_args_in_regs_6_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(ll_backend__pragma_c_gen__place_foreign_proc_output_args_in_regs_6_0_i18);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_tfield(0, MR_body((MR_Integer) MR_r1, (MR_Integer) 0), 1);
	MR_r4 = MR_tempr1;
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(ll_backend__pragma_c_gen__place_foreign_proc_output_args_in_regs_6_0_i26);
	}
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_r5 = MR_tempr2;
	MR_tempr3 = MR_tfield(1, MR_tempr1, 0);
	MR_r6 = MR_tempr3;
	MR_tfield(0, MR_tempr2, 0) = MR_tfield(0, MR_tempr3, 0);
	MR_tfield(0, MR_tempr2, 1) = MR_tfield(0, MR_tempr3, 2);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 1);
	MR_r4 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_tempr2;
	MR_r1 = MR_tempr4;
	MR_GOTO_LAB(ll_backend__pragma_c_gen__place_foreign_proc_output_args_in_regs_6_0_i30);
	}
MR_def_label(ll_backend__pragma_c_gen__place_foreign_proc_output_args_in_regs_6_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ll_backend.pragma_c_gen", 23);
	MR_r2 = (MR_Word) MR_string_const("function \140ll_backend.pragma_c_gen.get_maybe_foreign_type_info\'/2", 64);
	MR_r3 = (MR_Word) MR_string_const("no c foreign type", 17);
	MR_np_call_localret_ent(require__unexpected_3_0,
		ll_backend__pragma_c_gen__place_foreign_proc_output_args_in_regs_6_0_i30);
MR_def_label(ll_backend__pragma_c_gen__place_foreign_proc_output_args_in_regs_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
MR_def_label(ll_backend__pragma_c_gen__place_foreign_proc_output_args_in_regs_6_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(6),0,0)) {
		MR_GOTO_LAB(ll_backend__pragma_c_gen__place_foreign_proc_output_args_in_regs_6_0_i32);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_sv(6), 0);
	MR_sv(6) = MR_r1;
	MR_sv(9) = MR_tempr1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 95;
	}
	MR_np_call_localret_ent(string__first_char_3_2,
		ll_backend__pragma_c_gen__place_foreign_proc_output_args_in_regs_6_0_i35);
MR_def_label(ll_backend__pragma_c_gen__place_foreign_proc_output_args_in_regs_6_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(ll_backend__pragma_c_gen__place_foreign_proc_output_args_in_regs_6_0_i31);
	}
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(ll_backend__code_info__get_module_info_2_0,
		ll_backend__pragma_c_gen__place_foreign_proc_output_args_in_regs_6_0_i37);
MR_def_label(ll_backend__pragma_c_gen__place_foreign_proc_output_args_in_regs_6_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(fn__ll_backend__code_info__variable_type_2_0,
		ll_backend__pragma_c_gen__place_foreign_proc_output_args_in_regs_6_0_i38);
MR_def_label(ll_backend__pragma_c_gen__place_foreign_proc_output_args_in_regs_6_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(7);
	}
	MR_np_call_localret_ent(fn__check_hlds__type_util__check_dummy_type_2_0,
		ll_backend__pragma_c_gen__place_foreign_proc_output_args_in_regs_6_0_i39);
MR_def_label(ll_backend__pragma_c_gen__place_foreign_proc_output_args_in_regs_6_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 7);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(7);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(9);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 6) = MR_sv(5);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_tfield(1, MR_r1, 1) = MR_sv(2);
	MR_r2 = MR_sv(8);
	MR_decr_sp_and_return(10);
	}
MR_def_label(ll_backend__pragma_c_gen__place_foreign_proc_output_args_in_regs_6_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
MR_def_label(ll_backend__pragma_c_gen__place_foreign_proc_output_args_in_regs_6_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(7),0)) {
		MR_GOTO_LAB(ll_backend__pragma_c_gen__place_foreign_proc_output_args_in_regs_6_0_i43);
	}
	MR_sv(6) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(fn__term__var_to_int_1_0,
		ll_backend__pragma_c_gen__place_foreign_proc_output_args_in_regs_6_0_i44);
MR_def_label(ll_backend__pragma_c_gen__place_foreign_proc_output_args_in_regs_6_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		ll_backend__pragma_c_gen__place_foreign_proc_output_args_in_regs_6_0_i45);
MR_def_label(ll_backend__pragma_c_gen__place_foreign_proc_output_args_in_regs_6_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("UnnamedArg", 10);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__pragma_c_gen__place_foreign_proc_output_args_in_regs_6_0_i46);
MR_def_label(ll_backend__pragma_c_gen__place_foreign_proc_output_args_in_regs_6_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(ll_backend__code_info__get_module_info_2_0,
		ll_backend__pragma_c_gen__place_foreign_proc_output_args_in_regs_6_0_i47);
MR_def_label(ll_backend__pragma_c_gen__place_foreign_proc_output_args_in_regs_6_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__ll_backend__code_info__variable_type_2_0,
		ll_backend__pragma_c_gen__place_foreign_proc_output_args_in_regs_6_0_i48);
MR_def_label(ll_backend__pragma_c_gen__place_foreign_proc_output_args_in_regs_6_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(3);
	}
	MR_np_call_localret_ent(fn__check_hlds__type_util__check_dummy_type_2_0,
		ll_backend__pragma_c_gen__place_foreign_proc_output_args_in_regs_6_0_i49);
MR_def_label(ll_backend__pragma_c_gen__place_foreign_proc_output_args_in_regs_6_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 7);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(7);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 6) = MR_sv(5);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_tfield(1, MR_r1, 1) = MR_sv(2);
	MR_r2 = MR_sv(8);
	MR_decr_sp_and_return(10);
	}
MR_def_label(ll_backend__pragma_c_gen__place_foreign_proc_output_args_in_regs_6_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(8);
	MR_decr_sp_and_return(10);
MR_def_label(ll_backend__pragma_c_gen__place_foreign_proc_output_args_in_regs_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(8);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(10);
	}
MR_def_label(ll_backend__pragma_c_gen__place_foreign_proc_output_args_in_regs_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ll_backend.pragma_c_gen", 23);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ll_backend.pragma_c_gen.place_foreign_proc_output_args_in_regs\'/6", 76);
	MR_r3 = (MR_Word) MR_string_const("length mismatch", 15);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__parse_tree__prog_data__get_may_call_mercury_1_0);
MR_decl_entry(fn__parse_tree__prog_data__get_thread_safe_1_0);
MR_decl_entry(fn__ll_backend__code_info__get_pred_proc_arginfo_3_0);
MR_decl_entry(list__append_3_1);
MR_decl_entry(hlds__hlds_llds__goal_info_get_post_deaths_2_0);
MR_decl_entry(fn__parse_tree__set_of_var__init_0_0);
MR_decl_entry(ll_backend__code_info__succip_is_used_2_0);
MR_decl_entry(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_105_115_116_95_116_111_95_115_101_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0);
MR_decl_entry(ll_backend__code_info__save_variables_5_0);
MR_decl_entry(ll_backend__code_info__make_vars_forward_dead_3_0);
MR_decl_entry(ll_backend__code_info__get_pred_id_2_0);
MR_decl_entry(ll_backend__code_info__get_proc_id_2_0);
MR_decl_entry(hlds__hlds_module__module_info_pred_info_3_0);
MR_decl_entry(fn__hlds__hlds_pred__pred_info_name_1_0);
MR_decl_entry(fn__backend_libs__c_util__quote_string_1_0);
MR_decl_entry(fn__parse_tree__prog_data__get_affects_liveness_1_0);
MR_decl_entry(fn__hlds__hlds_goal__goal_info_get_determinism_1_0);
MR_decl_entry(ll_backend__code_info__get_next_label_3_0);
MR_decl_entry(fn__hlds__hlds_goal__goal_info_get_instmap_delta_1_0);
MR_decl_entry(hlds__instmap__instmap_delta_is_reachable_1_0);
MR_decl_entry(ll_backend__code_info__clear_all_registers_3_0);
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_foreign_proc_component_0;
MR_decl_entry(fn__f_108_105_115_116_95_95_43_43_2_0);
MR_decl_entry(fn__parse_tree__prog_data__get_may_duplicate_1_0);
MR_decl_entry(fn__parse_tree__prog_data__get_extra_attributes_1_0);
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_pragma_foreign_proc_extra_attribute_0;
MR_decl_entry(list__member_2_0);
MR_decl_entry(fn__cord__singleton_1_0);
MR_decl_entry(ll_backend__code_info__generate_failure_3_0);

MR_BEGIN_MODULE(ll_backend__pragma_c_gen_module16)
	MR_init_entry1(ll_backend__pragma_c_gen__generate_ordinary_foreign_proc_code_13_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__pragma_c_gen__generate_ordinary_foreign_proc_code_13_0);
	MR_init_label10(ll_backend__pragma_c_gen__generate_ordinary_foreign_proc_code_13_0,2,3,4,5,6,7,8,9,10,11)
	MR_init_label10(ll_backend__pragma_c_gen__generate_ordinary_foreign_proc_code_13_0,12,13,16,17,19,20,15,21,14,22)
	MR_init_label10(ll_backend__pragma_c_gen__generate_ordinary_foreign_proc_code_13_0,23,24,25,26,27,28,32,33,34,35)
	MR_init_label10(ll_backend__pragma_c_gen__generate_ordinary_foreign_proc_code_13_0,36,37,40,41,42,31,46,49,45,30)
	MR_init_label10(ll_backend__pragma_c_gen__generate_ordinary_foreign_proc_code_13_0,53,55,58,60,64,65,66,67,68,69)
	MR_init_label10(ll_backend__pragma_c_gen__generate_ordinary_foreign_proc_code_13_0,70,71,72,75,56,78,81,84,87,90)
	MR_init_label10(ll_backend__pragma_c_gen__generate_ordinary_foreign_proc_code_13_0,93,96,95,99,86,100,85,103,104,118)
	MR_init_label10(ll_backend__pragma_c_gen__generate_ordinary_foreign_proc_code_13_0,119,123,121,124,126,125,133,138,136,139)
	MR_init_label10(ll_backend__pragma_c_gen__generate_ordinary_foreign_proc_code_13_0,135,141,142,146,149,152,153,154,155,156)
	MR_init_label2(ll_backend__pragma_c_gen__generate_ordinary_foreign_proc_code_13_0,157,158)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'generate_ordinary_foreign_proc_code'/13 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__pragma_c_gen__generate_ordinary_foreign_proc_code_13_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(25);
	MR_sv(25) = (MR_Word) MR_succip;
	MR_sv(16) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(13) = MR_r3;
	MR_sv(14) = MR_r4;
	MR_sv(15) = MR_r5;
	MR_sv(3) = MR_r6;
	MR_sv(19) = MR_r7;
	MR_sv(20) = MR_r8;
	MR_sv(4) = MR_r9;
	MR_sv(5) = MR_r10;
	MR_sv(9) = MR_r11;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__parse_tree__prog_data__get_may_call_mercury_1_0,
		ll_backend__pragma_c_gen__generate_ordinary_foreign_proc_code_13_0_i2);
MR_def_label(ll_backend__pragma_c_gen__generate_ordinary_foreign_proc_code_13_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__parse_tree__prog_data__get_thread_safe_1_0,
		ll_backend__pragma_c_gen__generate_ordinary_foreign_proc_code_13_0_i3);
MR_def_label(ll_backend__pragma_c_gen__generate_ordinary_foreign_proc_code_13_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(14);
	MR_sv(14) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(13);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__ll_backend__code_info__get_pred_proc_arginfo_3_0,
		ll_backend__pragma_c_gen__generate_ordinary_foreign_proc_code_13_0_i4);
MR_def_label(ll_backend__pragma_c_gen__generate_ordinary_foreign_proc_code_13_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(15);
	MR_sv(15) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(15);
	}
	MR_np_call_localret_ent(ll_backend__pragma_c_gen__make_c_arg_list_3_0,
		ll_backend__pragma_c_gen__generate_ordinary_foreign_proc_code_13_0_i5);
MR_def_label(ll_backend__pragma_c_gen__generate_ordinary_foreign_proc_code_13_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(ll_backend__code_info__get_module_info_2_0,
		ll_backend__pragma_c_gen__generate_ordinary_foreign_proc_code_13_0_i6);
MR_def_label(ll_backend__pragma_c_gen__generate_ordinary_foreign_proc_code_13_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(15);
	MR_sv(15) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(15);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__pragma_c_gen__make_extra_c_arg_list_4_0,
		ll_backend__pragma_c_gen__generate_ordinary_foreign_proc_code_13_0_i7);
MR_def_label(ll_backend__pragma_c_gen__generate_ordinary_foreign_proc_code_13_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__pragma_c_gen, c_arg);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__append_3_1,
		ll_backend__pragma_c_gen__generate_ordinary_foreign_proc_code_13_0_i8);
MR_def_label(ll_backend__pragma_c_gen__generate_ordinary_foreign_proc_code_13_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_np_call_localret_ent(ll_backend__pragma_c_gen__foreign_proc_select_in_args_2_0,
		ll_backend__pragma_c_gen__generate_ordinary_foreign_proc_code_13_0_i9);
MR_def_label(ll_backend__pragma_c_gen__generate_ordinary_foreign_proc_code_13_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_np_call_localret_ent(ll_backend__pragma_c_gen__foreign_proc_select_out_args_2_0,
		ll_backend__pragma_c_gen__generate_ordinary_foreign_proc_code_13_0_i10);
MR_def_label(ll_backend__pragma_c_gen__generate_ordinary_foreign_proc_code_13_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_llds__goal_info_get_post_deaths_2_0,
		ll_backend__pragma_c_gen__generate_ordinary_foreign_proc_code_13_0_i11);
MR_def_label(ll_backend__pragma_c_gen__generate_ordinary_foreign_proc_code_13_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(17) = MR_r1;
	MR_sv(11) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r1 = MR_sv(11);
	MR_np_call_localret_ent(fn__parse_tree__set_of_var__init_0_0,
		ll_backend__pragma_c_gen__generate_ordinary_foreign_proc_code_13_0_i12);
MR_def_label(ll_backend__pragma_c_gen__generate_ordinary_foreign_proc_code_13_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(17);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__pragma_c_gen__find_dead_input_vars_4_0,
		ll_backend__pragma_c_gen__generate_ordinary_foreign_proc_code_13_0_i13);
MR_def_label(ll_backend__pragma_c_gen__generate_ordinary_foreign_proc_code_13_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(6),0)) {
		MR_GOTO_LAB(ll_backend__pragma_c_gen__generate_ordinary_foreign_proc_code_13_0_i15);
	}
	MR_sv(17) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(ll_backend__code_info__succip_is_used_2_0,
		ll_backend__pragma_c_gen__generate_ordinary_foreign_proc_code_13_0_i16);
MR_def_label(ll_backend__pragma_c_gen__generate_ordinary_foreign_proc_code_13_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(ll_backend__pragma_c_gen__get_c_arg_list_vars_2_0,
		ll_backend__pragma_c_gen__generate_ordinary_foreign_proc_code_13_0_i17);
MR_def_label(ll_backend__pragma_c_gen__generate_ordinary_foreign_proc_code_13_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_105_115_116_95_116_111_95_115_101_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		ll_backend__pragma_c_gen__generate_ordinary_foreign_proc_code_13_0_i19);
MR_def_label(ll_backend__pragma_c_gen__generate_ordinary_foreign_proc_code_13_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(ll_backend__code_info__save_variables_5_0,
		ll_backend__pragma_c_gen__generate_ordinary_foreign_proc_code_13_0_i20);
MR_def_label(ll_backend__pragma_c_gen__generate_ordinary_foreign_proc_code_13_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r2;
	MR_r2 = MR_sv(5);
	MR_r1 = MR_sv(8);
	MR_sv(8) = MR_r4;
	MR_GOTO_LAB(ll_backend__pragma_c_gen__generate_ordinary_foreign_proc_code_13_0_i14);
MR_def_label(ll_backend__pragma_c_gen__generate_ordinary_foreign_proc_code_13_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(17) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_np_call_localret_ent(fn__cord__empty_0_0,
		ll_backend__pragma_c_gen__generate_ordinary_foreign_proc_code_13_0_i21);
MR_def_label(ll_backend__pragma_c_gen__generate_ordinary_foreign_proc_code_13_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_sv(8) = MR_tempr1;
	MR_r3 = MR_sv(9);
	}
MR_def_label(ll_backend__pragma_c_gen__generate_ordinary_foreign_proc_code_13_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r2;
	MR_np_call_localret_ent(ll_backend__pragma_c_gen__get_foreign_proc_input_vars_6_0,
		ll_backend__pragma_c_gen__generate_ordinary_foreign_proc_code_13_0_i22);
MR_def_label(ll_backend__pragma_c_gen__generate_ordinary_foreign_proc_code_13_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(17);
	MR_sv(17) = MR_r1;
	MR_sv(9) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_r3;
	}
	MR_np_call_localret_ent(ll_backend__code_info__make_vars_forward_dead_3_0,
		ll_backend__pragma_c_gen__generate_ordinary_foreign_proc_code_13_0_i23);
MR_def_label(ll_backend__pragma_c_gen__generate_ordinary_foreign_proc_code_13_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(10);
	MR_sv(10) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(15);
	MR_r3 = MR_sv(5);
	}
	MR_np_call_localret_ent(ll_backend__pragma_c_gen__make_foreign_proc_decls_4_0,
		ll_backend__pragma_c_gen__generate_ordinary_foreign_proc_code_13_0_i24);
MR_def_label(ll_backend__pragma_c_gen__generate_ordinary_foreign_proc_code_13_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(10);
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(19);
	MR_r2 = MR_sv(20);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__pragma_c_gen__make_alloc_id_hash_define_6_0,
		ll_backend__pragma_c_gen__generate_ordinary_foreign_proc_code_13_0_i25);
MR_def_label(ll_backend__pragma_c_gen__generate_ordinary_foreign_proc_code_13_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_sv(12) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__code_info__get_pred_id_2_0,
		ll_backend__pragma_c_gen__generate_ordinary_foreign_proc_code_13_0_i26);
MR_def_label(ll_backend__pragma_c_gen__generate_ordinary_foreign_proc_code_13_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(18) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ll_backend__code_info__get_proc_id_2_0,
		ll_backend__pragma_c_gen__generate_ordinary_foreign_proc_code_13_0_i27);
MR_def_label(ll_backend__pragma_c_gen__generate_ordinary_foreign_proc_code_13_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(15);
	MR_r2 = MR_sv(18);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__pragma_c_gen__make_proc_label_hash_define_5_0,
		ll_backend__pragma_c_gen__generate_ordinary_foreign_proc_code_13_0_i28);
MR_def_label(ll_backend__pragma_c_gen__generate_ordinary_foreign_proc_code_13_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_r4 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(17);
	if (MR_INT_NE(MR_sv(14),0)) {
		MR_GOTO_LAB(ll_backend__pragma_c_gen__generate_ordinary_foreign_proc_code_13_0_i31);
	}
	MR_tempr2 = MR_sv(13);
	MR_sv(13) = MR_r1;
	MR_sv(14) = MR_r2;
	MR_tempr3 = MR_sv(15);
	MR_sv(15) = MR_tempr1;
	MR_r1 = MR_tempr3;
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_info_3_0,
		ll_backend__pragma_c_gen__generate_ordinary_foreign_proc_code_13_0_i32);
MR_def_label(ll_backend__pragma_c_gen__generate_ordinary_foreign_proc_code_13_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_name_1_0,
		ll_backend__pragma_c_gen__generate_ordinary_foreign_proc_code_13_0_i33);
MR_def_label(ll_backend__pragma_c_gen__generate_ordinary_foreign_proc_code_13_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__backend_libs__c_util__quote_string_1_0,
		ll_backend__pragma_c_gen__generate_ordinary_foreign_proc_code_13_0_i34);
MR_def_label(ll_backend__pragma_c_gen__generate_ordinary_foreign_proc_code_13_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(17) = MR_r1;
	MR_r2 = (MR_Word) MR_string_const("\");\n", 4);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__pragma_c_gen__generate_ordinary_foreign_proc_code_13_0_i35);
MR_def_label(ll_backend__pragma_c_gen__generate_ordinary_foreign_proc_code_13_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\tMR_OBTAIN_GLOBAL_LOCK(\"", 24);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__pragma_c_gen__generate_ordinary_foreign_proc_code_13_0_i36);
MR_def_label(ll_backend__pragma_c_gen__generate_ordinary_foreign_proc_code_13_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(18) = MR_r1;
	MR_sv(21) = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_r1 = MR_sv(21);
	MR_np_call_localret_ent(fn__set__init_0_0,
		ll_backend__pragma_c_gen__generate_ordinary_foreign_proc_code_13_0_i37);
MR_def_label(ll_backend__pragma_c_gen__generate_ordinary_foreign_proc_code_13_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 5);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr2, 1) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr2, 2) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr2, 3) = MR_tempr1;
	MR_tfield(3, MR_tempr2, 4) = MR_sv(18);
	MR_tempr1 = MR_sv(17);
	MR_sv(17) = MR_tempr2;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("\");\n", 4);
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__pragma_c_gen__generate_ordinary_foreign_proc_code_13_0_i40);
MR_def_label(ll_backend__pragma_c_gen__generate_ordinary_foreign_proc_code_13_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\tMR_RELEASE_GLOBAL_LOCK(\"", 25);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__pragma_c_gen__generate_ordinary_foreign_proc_code_13_0_i41);
MR_def_label(ll_backend__pragma_c_gen__generate_ordinary_foreign_proc_code_13_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(18) = MR_r1;
	MR_r1 = MR_sv(21);
	MR_np_call_localret_ent(fn__set__init_0_0,
		ll_backend__pragma_c_gen__generate_ordinary_foreign_proc_code_13_0_i42);
MR_def_label(ll_backend__pragma_c_gen__generate_ordinary_foreign_proc_code_13_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_r4 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 5);
	MR_r5 = MR_tempr2;
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr2, 1) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr2, 2) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr2, 3) = MR_tempr1;
	MR_tfield(3, MR_tempr2, 4) = MR_sv(18);
	MR_r1 = MR_sv(2);
	MR_sv(18) = MR_tempr2;
	MR_GOTO_LAB(ll_backend__pragma_c_gen__generate_ordinary_foreign_proc_code_13_0_i30);
	}
MR_def_label(ll_backend__pragma_c_gen__generate_ordinary_foreign_proc_code_13_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(14),1)) {
		MR_GOTO_LAB(ll_backend__pragma_c_gen__generate_ordinary_foreign_proc_code_13_0_i45);
	}
	MR_sv(13) = MR_r1;
	MR_sv(14) = MR_r2;
	MR_sv(15) = MR_r4;
	MR_sv(17) = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_r1 = MR_sv(17);
	MR_np_call_localret_ent(fn__set__init_0_0,
		ll_backend__pragma_c_gen__generate_ordinary_foreign_proc_code_13_0_i46);
MR_def_label(ll_backend__pragma_c_gen__generate_ordinary_foreign_proc_code_13_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 5);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 3) = MR_r2;
	MR_tfield(3, MR_tempr1, 4) = (MR_Word) MR_string_const("", 0);
	MR_sv(17) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	}
	MR_np_call_localret_ent(fn__set__init_0_0,
		ll_backend__pragma_c_gen__generate_ordinary_foreign_proc_code_13_0_i49);
MR_def_label(ll_backend__pragma_c_gen__generate_ordinary_foreign_proc_code_13_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 5);
	MR_sv(18) = MR_tempr2;
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr2, 1) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr2, 2) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr2, 3) = MR_tempr1;
	MR_tfield(3, MR_tempr2, 4) = (MR_Word) MR_string_const("", 0);
	MR_r1 = MR_sv(2);
	MR_GOTO_LAB(ll_backend__pragma_c_gen__generate_ordinary_foreign_proc_code_13_0_i30);
	}
MR_def_label(ll_backend__pragma_c_gen__generate_ordinary_foreign_proc_code_13_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(13) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("ll_backend.pragma_c_gen", 23);
	MR_sv(14) = MR_r2;
	MR_r2 = (MR_Word) MR_string_const("predicate \140ll_backend.pragma_c_gen.generate_ordinary_foreign_proc_code\'/13", 74);
	MR_r3 = (MR_Word) MR_string_const("maybe_thread_safe", 17);
	MR_np_call_localret_ent(require__unexpected_3_0,
		ll_backend__pragma_c_gen__generate_ordinary_foreign_proc_code_13_0_i30);
MR_def_label(ll_backend__pragma_c_gen__generate_ordinary_foreign_proc_code_13_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(fn__parse_tree__prog_data__get_affects_liveness_1_0,
		ll_backend__pragma_c_gen__generate_ordinary_foreign_proc_code_13_0_i53);
MR_def_label(ll_backend__pragma_c_gen__generate_ordinary_foreign_proc_code_13_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 4);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_r2, 1) = MR_sv(20);
	MR_tfield(3, MR_r2, 2) = MR_r1;
	MR_tfield(3, MR_r2, 3) = MR_sv(19);
	MR_sv(19) = MR_r2;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_determinism_1_0,
		ll_backend__pragma_c_gen__generate_ordinary_foreign_proc_code_13_0_i55);
MR_def_label(ll_backend__pragma_c_gen__generate_ordinary_foreign_proc_code_13_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(16),1)) {
		MR_GOTO_LAB(ll_backend__pragma_c_gen__generate_ordinary_foreign_proc_code_13_0_i56);
	}
	if (MR_INT_NE(MR_r1,7)) {
		MR_GOTO_LAB(ll_backend__pragma_c_gen__generate_ordinary_foreign_proc_code_13_0_i58);
	}
	MR_sv(20) = MR_r1;
	MR_sv(24) = MR_sv(1);
	MR_sv(1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(21) = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(fn__ll_backend__pragma_c_gen__foreign_proc_succ_ind_name_0_0,
		ll_backend__pragma_c_gen__generate_ordinary_foreign_proc_code_13_0_i64);
MR_def_label(ll_backend__pragma_c_gen__generate_ordinary_foreign_proc_code_13_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(20) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ll_backend__code_info__get_next_label_3_0,
		ll_backend__pragma_c_gen__generate_ordinary_foreign_proc_code_13_0_i60);
MR_def_label(ll_backend__pragma_c_gen__generate_ordinary_foreign_proc_code_13_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_sv(1) = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_sv(21), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(21), 0) = MR_r1;
	MR_sv(24) = MR_r2;
	}
	MR_np_call_localret_ent(fn__ll_backend__pragma_c_gen__foreign_proc_succ_ind_name_0_0,
		ll_backend__pragma_c_gen__generate_ordinary_foreign_proc_code_13_0_i64);
MR_def_label(ll_backend__pragma_c_gen__generate_ordinary_foreign_proc_code_13_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__pragma_c_gen__generate_ordinary_foreign_proc_code_13_0_i65);
MR_def_label(ll_backend__pragma_c_gen__generate_ordinary_foreign_proc_code_13_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("#define SUCCESS_INDICATOR ", 26);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__pragma_c_gen__generate_ordinary_foreign_proc_code_13_0_i66);
MR_def_label(ll_backend__pragma_c_gen__generate_ordinary_foreign_proc_code_13_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("#undef SUCCESS_INDICATOR\n", 25);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__pragma_c_gen__generate_ordinary_foreign_proc_code_13_0_i67);
MR_def_label(ll_backend__pragma_c_gen__generate_ordinary_foreign_proc_code_13_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(";\n", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__pragma_c_gen__generate_ordinary_foreign_proc_code_13_0_i68);
MR_def_label(ll_backend__pragma_c_gen__generate_ordinary_foreign_proc_code_13_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(16) = MR_r1;
	MR_np_call_localret_ent(fn__ll_backend__pragma_c_gen__foreign_proc_succ_ind_name_0_0,
		ll_backend__pragma_c_gen__generate_ordinary_foreign_proc_code_13_0_i69);
MR_def_label(ll_backend__pragma_c_gen__generate_ordinary_foreign_proc_code_13_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(16);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__pragma_c_gen__generate_ordinary_foreign_proc_code_13_0_i70);
MR_def_label(ll_backend__pragma_c_gen__generate_ordinary_foreign_proc_code_13_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\tMR_bool ", 9);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__pragma_c_gen__generate_ordinary_foreign_proc_code_13_0_i71);
MR_def_label(ll_backend__pragma_c_gen__generate_ordinary_foreign_proc_code_13_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(16) = MR_r1;
	MR_sv(22) = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_r1 = MR_sv(22);
	MR_np_call_localret_ent(fn__set__init_0_0,
		ll_backend__pragma_c_gen__generate_ordinary_foreign_proc_code_13_0_i72);
MR_def_label(ll_backend__pragma_c_gen__generate_ordinary_foreign_proc_code_13_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 5);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 3) = MR_r2;
	MR_tfield(3, MR_tempr1, 4) = MR_sv(16);
	MR_sv(22) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	}
	MR_np_call_localret_ent(fn__set__init_0_0,
		ll_backend__pragma_c_gen__generate_ordinary_foreign_proc_code_13_0_i75);
MR_def_label(ll_backend__pragma_c_gen__generate_ordinary_foreign_proc_code_13_0,75)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 5);
	MR_sv(23) = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 3) = MR_r2;
	MR_tfield(3, MR_tempr1, 4) = (MR_Word) MR_string_const("#undef SUCCESS_INDICATOR\n#define SUCCESS_INDICATOR MR_r1\n", 57);
	MR_GOTO_LAB(ll_backend__pragma_c_gen__generate_ordinary_foreign_proc_code_13_0_i84);
	}
MR_def_label(ll_backend__pragma_c_gen__generate_ordinary_foreign_proc_code_13_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(20) = MR_r1;
	MR_sv(16) = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_r1 = MR_sv(16);
	MR_np_call_localret_ent(fn__set__init_0_0,
		ll_backend__pragma_c_gen__generate_ordinary_foreign_proc_code_13_0_i78);
MR_def_label(ll_backend__pragma_c_gen__generate_ordinary_foreign_proc_code_13_0,78)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 5);
	MR_sv(22) = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 3) = MR_r2;
	MR_tfield(3, MR_tempr1, 4) = (MR_Word) MR_string_const("", 0);
	MR_r1 = MR_sv(16);
	}
	MR_np_call_localret_ent(fn__set__init_0_0,
		ll_backend__pragma_c_gen__generate_ordinary_foreign_proc_code_13_0_i81);
MR_def_label(ll_backend__pragma_c_gen__generate_ordinary_foreign_proc_code_13_0,81)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 5);
	MR_sv(23) = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 3) = MR_r2;
	MR_tfield(3, MR_tempr1, 4) = (MR_Word) MR_string_const("", 0);
	MR_sv(24) = MR_sv(1);
	MR_sv(1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(21) = (MR_Word) MR_tbmkword(0, 0);
	}
MR_def_label(ll_backend__pragma_c_gen__generate_ordinary_foreign_proc_code_13_0,84)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(6),0)) {
		MR_GOTO_LAB(ll_backend__pragma_c_gen__generate_ordinary_foreign_proc_code_13_0_i86);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_np_call_localret_ent(fn__set__init_0_0,
		ll_backend__pragma_c_gen__generate_ordinary_foreign_proc_code_13_0_i87);
MR_def_label(ll_backend__pragma_c_gen__generate_ordinary_foreign_proc_code_13_0,87)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 5);
	MR_sv(16) = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 2) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 3) = MR_r2;
	MR_tfield(3, MR_tempr1, 4) = (MR_Word) MR_string_const("\tMR_save_registers();\n", 22);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	}
	MR_np_call_localret_ent(fn__set__init_0_0,
		ll_backend__pragma_c_gen__generate_ordinary_foreign_proc_code_13_0_i90);
MR_def_label(ll_backend__pragma_c_gen__generate_ordinary_foreign_proc_code_13_0,90)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 5);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 3) = MR_r2;
	MR_tfield(3, MR_tempr1, 4) = (MR_Word) MR_string_const("#ifndef MR_CONSERVATIVE_GC\n\tMR_restore_registers();\n#endif\n", 59);
	MR_r2 = MR_sv(4);
	MR_sv(4) = MR_tempr1;
	MR_r1 = MR_r2;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_instmap_delta_1_0,
		ll_backend__pragma_c_gen__generate_ordinary_foreign_proc_code_13_0_i93);
MR_def_label(ll_backend__pragma_c_gen__generate_ordinary_foreign_proc_code_13_0,93)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__instmap__instmap_delta_is_reachable_1_0,
		ll_backend__pragma_c_gen__generate_ordinary_foreign_proc_code_13_0_i96);
MR_def_label(ll_backend__pragma_c_gen__generate_ordinary_foreign_proc_code_13_0,96)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__pragma_c_gen__generate_ordinary_foreign_proc_code_13_0_i95);
	}
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_sv(24);
	MR_np_call_localret_ent(ll_backend__code_info__clear_all_registers_3_0,
		ll_backend__pragma_c_gen__generate_ordinary_foreign_proc_code_13_0_i99);
MR_def_label(ll_backend__pragma_c_gen__generate_ordinary_foreign_proc_code_13_0,95)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_sv(24);
	MR_np_call_localret_ent(ll_backend__code_info__clear_all_registers_3_0,
		ll_backend__pragma_c_gen__generate_ordinary_foreign_proc_code_13_0_i99);
MR_def_label(ll_backend__pragma_c_gen__generate_ordinary_foreign_proc_code_13_0,99)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_r3;
	MR_GOTO_LAB(ll_backend__pragma_c_gen__generate_ordinary_foreign_proc_code_13_0_i85);
MR_def_label(ll_backend__pragma_c_gen__generate_ordinary_foreign_proc_code_13_0,86)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_np_call_localret_ent(fn__set__init_0_0,
		ll_backend__pragma_c_gen__generate_ordinary_foreign_proc_code_13_0_i100);
MR_def_label(ll_backend__pragma_c_gen__generate_ordinary_foreign_proc_code_13_0,100)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 5);
	MR_sv(16) = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 3) = MR_r2;
	MR_tfield(3, MR_tempr1, 4) = (MR_Word) MR_string_const("", 0);
	MR_r1 = MR_sv(7);
	MR_sv(4) = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_sv(24);
	}
MR_def_label(ll_backend__pragma_c_gen__generate_ordinary_foreign_proc_code_13_0,85)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_np_call_localret_ent(ll_backend__pragma_c_gen__foreign_proc_acquire_regs_4_0,
		ll_backend__pragma_c_gen__generate_ordinary_foreign_proc_code_13_0_i103);
MR_def_label(ll_backend__pragma_c_gen__generate_ordinary_foreign_proc_code_13_0,103)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(5);
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(ll_backend__pragma_c_gen__place_foreign_proc_output_args_in_regs_6_0,
		ll_backend__pragma_c_gen__generate_ordinary_foreign_proc_code_13_0_i104);
MR_def_label(ll_backend__pragma_c_gen__generate_ordinary_foreign_proc_code_13_0,104)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(13);
	MR_tfield(1, MR_tempr2, 1) = MR_sv(11);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_sv(14);
	MR_tfield(1, MR_tempr3, 1) = MR_sv(12);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_sv(23);
	MR_tfield(1, MR_tempr4, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr3, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(18);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_sv(19);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(17);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_sv(16);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(15);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr5;
	MR_tfield(1, MR_tempr5, 0) = MR_sv(22);
	MR_tfield(1, MR_tempr5, 1) = MR_tempr1;
	MR_sv(13) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, foreign_proc_component);
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__pragma_c_gen__generate_ordinary_foreign_proc_code_13_0_i118);
MR_def_label(ll_backend__pragma_c_gen__generate_ordinary_foreign_proc_code_13_0,118)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(16) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__parse_tree__prog_data__get_may_duplicate_1_0,
		ll_backend__pragma_c_gen__generate_ordinary_foreign_proc_code_13_0_i119);
MR_def_label(ll_backend__pragma_c_gen__generate_ordinary_foreign_proc_code_13_0,119)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__pragma_c_gen__generate_ordinary_foreign_proc_code_13_0_i121);
	}
	if (MR_LTAGS_TESTR(MR_sv(3),0,0)) {
		MR_GOTO_LAB(ll_backend__pragma_c_gen__generate_ordinary_foreign_proc_code_13_0_i123);
	}
	MR_r1 = MR_sv(2);
	MR_sv(2) = (MR_Integer) 0;
	MR_np_call_localret_ent(fn__parse_tree__prog_data__get_extra_attributes_1_0,
		ll_backend__pragma_c_gen__generate_ordinary_foreign_proc_code_13_0_i124);
MR_def_label(ll_backend__pragma_c_gen__generate_ordinary_foreign_proc_code_13_0,123)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_sv(2) = (MR_Integer) 1;
	MR_np_call_localret_ent(fn__parse_tree__prog_data__get_extra_attributes_1_0,
		ll_backend__pragma_c_gen__generate_ordinary_foreign_proc_code_13_0_i124);
MR_def_label(ll_backend__pragma_c_gen__generate_ordinary_foreign_proc_code_13_0,121)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_tfield(1, MR_r2, 0);
	MR_np_call_localret_ent(fn__parse_tree__prog_data__get_extra_attributes_1_0,
		ll_backend__pragma_c_gen__generate_ordinary_foreign_proc_code_13_0_i124);
MR_def_label(ll_backend__pragma_c_gen__generate_ordinary_foreign_proc_code_13_0,124)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, pragma_foreign_proc_extra_attribute);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__member_2_0,
		ll_backend__pragma_c_gen__generate_ordinary_foreign_proc_code_13_0_i126);
MR_def_label(ll_backend__pragma_c_gen__generate_ordinary_foreign_proc_code_13_0,126)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__pragma_c_gen__generate_ordinary_foreign_proc_code_13_0_i125);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 11);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 27;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(10);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(16);
	MR_tfield(3, MR_tempr1, 3) = MR_sv(6);
	MR_tfield(3, MR_tempr1, 4) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_tempr1, 5) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_tempr1, 6) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_tempr1, 7) = MR_sv(21);
	MR_tfield(3, MR_tempr1, 8) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_tempr1, 9) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 10) = MR_sv(2);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_tempr1;
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_string_const("foreign_proc inclusion", 22);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	}
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		ll_backend__pragma_c_gen__generate_ordinary_foreign_proc_code_13_0_i133);
MR_def_label(ll_backend__pragma_c_gen__generate_ordinary_foreign_proc_code_13_0,125)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 11);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 27;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(10);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(16);
	MR_tfield(3, MR_tempr1, 3) = MR_sv(6);
	MR_tfield(3, MR_tempr1, 4) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_tempr1, 5) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_tempr1, 6) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_tempr1, 7) = MR_sv(21);
	MR_tfield(3, MR_tempr1, 8) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_tempr1, 9) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 10) = MR_sv(2);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_tempr1;
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_string_const("foreign_proc inclusion", 22);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	}
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		ll_backend__pragma_c_gen__generate_ordinary_foreign_proc_code_13_0_i133);
MR_def_label(ll_backend__pragma_c_gen__generate_ordinary_foreign_proc_code_13_0,133)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(21),0,0)) {
		MR_GOTO_LAB(ll_backend__pragma_c_gen__generate_ordinary_foreign_proc_code_13_0_i135);
	}
	if (MR_INT_NE(MR_sv(20),7)) {
		MR_GOTO_LAB(ll_backend__pragma_c_gen__generate_ordinary_foreign_proc_code_13_0_i136);
	}
	MR_sv(16) = MR_r1;
	MR_r1 = MR_sv(13);
	MR_np_call_localret_ent(ll_backend__code_info__generate_failure_3_0,
		ll_backend__pragma_c_gen__generate_ordinary_foreign_proc_code_13_0_i138);
MR_def_label(ll_backend__pragma_c_gen__generate_ordinary_foreign_proc_code_13_0,138)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(15) = MR_r2;
	MR_r2 = MR_sv(16);
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ll_backend__pragma_c_gen__generate_ordinary_foreign_proc_code_13_0_i156);
MR_def_label(ll_backend__pragma_c_gen__generate_ordinary_foreign_proc_code_13_0,136)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(16) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_np_call_localret_ent(fn__cord__empty_0_0,
		ll_backend__pragma_c_gen__generate_ordinary_foreign_proc_code_13_0_i139);
MR_def_label(ll_backend__pragma_c_gen__generate_ordinary_foreign_proc_code_13_0,139)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(16);
	MR_r3 = MR_r1;
	MR_sv(15) = MR_sv(13);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ll_backend__pragma_c_gen__generate_ordinary_foreign_proc_code_13_0_i156);
MR_def_label(ll_backend__pragma_c_gen__generate_ordinary_foreign_proc_code_13_0,135)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(16) = MR_r1;
	MR_sv(2) = MR_tfield(1, MR_sv(21), 0);
	MR_r1 = MR_sv(13);
	MR_np_call_localret_ent(ll_backend__code_info__get_next_label_3_0,
		ll_backend__pragma_c_gen__generate_ordinary_foreign_proc_code_13_0_i141);
MR_def_label(ll_backend__pragma_c_gen__generate_ordinary_foreign_proc_code_13_0,141)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(13) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(ll_backend__code_info__generate_failure_3_0,
		ll_backend__pragma_c_gen__generate_ordinary_foreign_proc_code_13_0_i142);
MR_def_label(ll_backend__pragma_c_gen__generate_ordinary_foreign_proc_code_13_0,142)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(13);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(0, MR_tempr3, 1) = (MR_Word) MR_string_const("Skip past failure code", 22);
	MR_sv(14) = MR_r1;
	MR_sv(15) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_tempr3;
	}
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		ll_backend__pragma_c_gen__generate_ordinary_foreign_proc_code_13_0_i146);
MR_def_label(ll_backend__pragma_c_gen__generate_ordinary_foreign_proc_code_13_0,146)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(13);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_tempr1;
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_string_const("", 0);
	MR_sv(13) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	}
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		ll_backend__pragma_c_gen__generate_ordinary_foreign_proc_code_13_0_i149);
MR_def_label(ll_backend__pragma_c_gen__generate_ordinary_foreign_proc_code_13_0,149)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(2);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_tempr1;
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_string_const("", 0);
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	}
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		ll_backend__pragma_c_gen__generate_ordinary_foreign_proc_code_13_0_i152);
MR_def_label(ll_backend__pragma_c_gen__generate_ordinary_foreign_proc_code_13_0,152)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_sv(14);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ll_backend__pragma_c_gen__generate_ordinary_foreign_proc_code_13_0_i153);
MR_def_label(ll_backend__pragma_c_gen__generate_ordinary_foreign_proc_code_13_0,153)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ll_backend__pragma_c_gen__generate_ordinary_foreign_proc_code_13_0_i154);
MR_def_label(ll_backend__pragma_c_gen__generate_ordinary_foreign_proc_code_13_0,154)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_sv(13);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ll_backend__pragma_c_gen__generate_ordinary_foreign_proc_code_13_0_i155);
MR_def_label(ll_backend__pragma_c_gen__generate_ordinary_foreign_proc_code_13_0,155)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(16);
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ll_backend__pragma_c_gen__generate_ordinary_foreign_proc_code_13_0_i156);
MR_def_label(ll_backend__pragma_c_gen__generate_ordinary_foreign_proc_code_13_0,156)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ll_backend__pragma_c_gen__generate_ordinary_foreign_proc_code_13_0_i157);
MR_def_label(ll_backend__pragma_c_gen__generate_ordinary_foreign_proc_code_13_0,157)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ll_backend__pragma_c_gen__generate_ordinary_foreign_proc_code_13_0_i158);
MR_def_label(ll_backend__pragma_c_gen__generate_ordinary_foreign_proc_code_13_0,158)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(15);
	MR_decr_sp_and_return(25);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(require__expect_4_0);

MR_BEGIN_MODULE(ll_backend__pragma_c_gen_module17)
	MR_init_entry1(ll_backend__pragma_c_gen__generate_foreign_proc_code_12_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__pragma_c_gen__generate_foreign_proc_code_12_0);
	MR_init_label10(ll_backend__pragma_c_gen__generate_foreign_proc_code_12_0,33,6,8,10,11,12,13,17,20,21)
	MR_init_label1(ll_backend__pragma_c_gen__generate_foreign_proc_code_12_0,22)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'generate_foreign_proc_code'/12 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__pragma_c_gen__generate_foreign_proc_code_12_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r7,0,0)) {
		MR_GOTO_LAB(ll_backend__pragma_c_gen__generate_foreign_proc_code_12_0_i33);
	}
	MR_r7 = MR_tfield(0, MR_r8, 0);
	MR_r8 = MR_tfield(0, MR_r8, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r10;
	MR_r10 = (MR_Integer) 1;
	MR_r11 = MR_tempr1;
	MR_np_tailcall_ent(ll_backend__pragma_c_gen__generate_ordinary_foreign_proc_code_13_0);
	}
MR_def_label(ll_backend__pragma_c_gen__generate_foreign_proc_code_12_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(3,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ll_backend__pragma_c_gen__IntroducedFrom__pred__generate_foreign_proc_code__373__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_r5;
	MR_tfield(0, MR_tempr1, 4) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(2) = MR_r1;
	MR_sv(4) = MR_r6;
	MR_sv(3) = MR_tfield(1, MR_r7, 0);
	MR_sv(1) = MR_r10;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("ll_backend.pragma_c_gen", 23);
	MR_r3 = (MR_Word) MR_string_const("predicate \140ll_backend.pragma_c_gen.generate_foreign_proc_code\'/12", 65);
	MR_r4 = (MR_Word) MR_string_const("args runtime cond", 17);
	}
	MR_np_call_localret_ent(require__expect_4_0,
		ll_backend__pragma_c_gen__generate_foreign_proc_code_12_0_i6);
MR_def_label(ll_backend__pragma_c_gen__generate_foreign_proc_code_12_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_COMMON(3,1);
	MR_tfield(0, MR_r1, 1) = (MR_Word) MR_ENTRY_AP(ll_backend__pragma_c_gen__IntroducedFrom__pred__generate_foreign_proc_code__375__1_2_0);
	MR_tfield(0, MR_r1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_r1, 3) = MR_sv(4);
	MR_tfield(0, MR_r1, 4) = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Word) MR_string_const("ll_backend.pragma_c_gen", 23);
	MR_r3 = (MR_Word) MR_string_const("predicate \140ll_backend.pragma_c_gen.generate_foreign_proc_code\'/12", 65);
	MR_r4 = (MR_Word) MR_string_const("extra args runtime cond", 23);
	MR_np_call_localret_ent(require__expect_4_0,
		ll_backend__pragma_c_gen__generate_foreign_proc_code_12_0_i8);
MR_def_label(ll_backend__pragma_c_gen__generate_foreign_proc_code_12_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_COMMON(3,2);
	MR_tfield(0, MR_r1, 1) = (MR_Word) MR_ENTRY_AP(ll_backend__pragma_c_gen__IntroducedFrom__pred__generate_foreign_proc_code__377__1_2_0);
	MR_tfield(0, MR_r1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_r1, 3) = MR_sv(2);
	MR_tfield(0, MR_r1, 4) = (MR_Integer) 1;
	MR_r2 = (MR_Word) MR_string_const("ll_backend.pragma_c_gen", 23);
	MR_r3 = (MR_Word) MR_string_const("predicate \140ll_backend.pragma_c_gen.generate_foreign_proc_code\'/12", 65);
	MR_r4 = (MR_Word) MR_string_const("non-semi runtime cond", 21);
	MR_np_call_localret_ent(require__expect_4_0,
		ll_backend__pragma_c_gen__generate_foreign_proc_code_12_0_i10);
MR_def_label(ll_backend__pragma_c_gen__generate_foreign_proc_code_12_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(ll_backend__pragma_c_gen__generate_runtime_cond_code_4_0,
		ll_backend__pragma_c_gen__generate_foreign_proc_code_12_0_i11);
MR_def_label(ll_backend__pragma_c_gen__generate_foreign_proc_code_12_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(ll_backend__code_info__get_next_label_3_0,
		ll_backend__pragma_c_gen__generate_foreign_proc_code_12_0_i12);
MR_def_label(ll_backend__pragma_c_gen__generate_foreign_proc_code_12_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(ll_backend__code_info__generate_failure_3_0,
		ll_backend__pragma_c_gen__generate_foreign_proc_code_12_0_i13);
MR_def_label(ll_backend__pragma_c_gen__generate_foreign_proc_code_12_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(4);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 9;
	MR_tfield(3, MR_tempr2, 1) = MR_sv(2);
	MR_tfield(3, MR_tempr2, 2) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(0, MR_tempr3, 1) = (MR_Word) MR_string_const("environment variable tests", 26);
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_tempr3;
	}
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		ll_backend__pragma_c_gen__generate_foreign_proc_code_12_0_i17);
MR_def_label(ll_backend__pragma_c_gen__generate_foreign_proc_code_12_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(4);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_tempr1;
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_string_const("environment variable tests successful", 37);
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	}
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		ll_backend__pragma_c_gen__generate_foreign_proc_code_12_0_i20);
MR_def_label(ll_backend__pragma_c_gen__generate_foreign_proc_code_12_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ll_backend__pragma_c_gen__generate_foreign_proc_code_12_0_i21);
MR_def_label(ll_backend__pragma_c_gen__generate_foreign_proc_code_12_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ll_backend__pragma_c_gen__generate_foreign_proc_code_12_0_i22);
MR_def_label(ll_backend__pragma_c_gen__generate_foreign_proc_code_12_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__parse_tree__prog_foreign__sym_name_mangle_1_0);
MR_decl_entry(fn__parse_tree__prog_foreign__name_mangle_1_0);
MR_decl_entry(fn__hlds__hlds_pred__proc_id_to_int_1_0);

MR_BEGIN_MODULE(ll_backend__pragma_c_gen_module18)
	MR_init_entry1(fn__ll_backend__pragma_c_gen__foreign_proc_struct_name_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ll_backend__pragma_c_gen__foreign_proc_struct_name_4_0);
	MR_init_label10(fn__ll_backend__pragma_c_gen__foreign_proc_struct_name_4_0,2,3,4,5,6,7,8,9,10,11)
	MR_init_label1(fn__ll_backend__pragma_c_gen__foreign_proc_struct_name_4_0,12)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foreign_proc_struct_name'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__ll_backend__pragma_c_gen__foreign_proc_struct_name_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_np_call_localret_ent(fn__parse_tree__prog_foreign__sym_name_mangle_1_0,
		fn__ll_backend__pragma_c_gen__foreign_proc_struct_name_4_0_i2);
MR_def_label(fn__ll_backend__pragma_c_gen__foreign_proc_struct_name_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__parse_tree__prog_foreign__name_mangle_1_0,
		fn__ll_backend__pragma_c_gen__foreign_proc_struct_name_4_0_i3);
MR_def_label(fn__ll_backend__pragma_c_gen__foreign_proc_struct_name_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__ll_backend__pragma_c_gen__foreign_proc_struct_name_4_0_i4);
MR_def_label(fn__ll_backend__pragma_c_gen__foreign_proc_struct_name_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__hlds__hlds_pred__proc_id_to_int_1_0,
		fn__ll_backend__pragma_c_gen__foreign_proc_struct_name_4_0_i5);
MR_def_label(fn__ll_backend__pragma_c_gen__foreign_proc_struct_name_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__ll_backend__pragma_c_gen__foreign_proc_struct_name_4_0_i6);
MR_def_label(fn__ll_backend__pragma_c_gen__foreign_proc_struct_name_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("_", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__pragma_c_gen__foreign_proc_struct_name_4_0_i7);
MR_def_label(fn__ll_backend__pragma_c_gen__foreign_proc_struct_name_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__pragma_c_gen__foreign_proc_struct_name_4_0_i8);
MR_def_label(fn__ll_backend__pragma_c_gen__foreign_proc_struct_name_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("__", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__pragma_c_gen__foreign_proc_struct_name_4_0_i9);
MR_def_label(fn__ll_backend__pragma_c_gen__foreign_proc_struct_name_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__pragma_c_gen__foreign_proc_struct_name_4_0_i10);
MR_def_label(fn__ll_backend__pragma_c_gen__foreign_proc_struct_name_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("__", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__pragma_c_gen__foreign_proc_struct_name_4_0_i11);
MR_def_label(fn__ll_backend__pragma_c_gen__foreign_proc_struct_name_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ll_backend__pragma_c_gen__foreign_proc_struct_name_4_0_i12);
MR_def_label(fn__ll_backend__pragma_c_gen__foreign_proc_struct_name_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("mercury_save__", 14);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___term__var_1_0);
MR_decl_entry(__Unify___maybe__maybe_1_0);
MR_decl_entry(__Unify___parse_tree__prog_data__mer_type_0_0);
MR_decl_entry(__Unify___hlds__hlds_pred__arg_info_0_0);

MR_BEGIN_MODULE(ll_backend__pragma_c_gen_module19)
	MR_init_entry1(__Unify___ll_backend__pragma_c_gen__c_arg_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ll_backend__pragma_c_gen__c_arg_0_0);
	MR_init_label5(__Unify___ll_backend__pragma_c_gen__c_arg_0_0,4,6,8,12,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___ll_backend__pragma_c_gen__c_arg_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ll_backend__pragma_c_gen__c_arg_0_0_i12);
	}
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(0, MR_tempr1, 2);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 3);
	MR_sv(4) = MR_tfield(0, MR_tempr1, 4);
	MR_sv(5) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(6) = MR_tfield(0, MR_tempr2, 2);
	MR_sv(7) = MR_tfield(0, MR_tempr2, 3);
	MR_sv(8) = MR_tfield(0, MR_tempr2, 4);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	MR_r3 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___term__var_1_0,
		__Unify___ll_backend__pragma_c_gen__c_arg_0_0_i4);
MR_def_label(__Unify___ll_backend__pragma_c_gen__c_arg_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__pragma_c_gen__c_arg_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(__Unify___maybe__maybe_1_0,
		__Unify___ll_backend__pragma_c_gen__c_arg_0_0_i6);
MR_def_label(__Unify___ll_backend__pragma_c_gen__c_arg_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__pragma_c_gen__c_arg_0_0_i1);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(__Unify___parse_tree__prog_data__mer_type_0_0,
		__Unify___ll_backend__pragma_c_gen__c_arg_0_0_i8);
MR_def_label(__Unify___ll_backend__pragma_c_gen__c_arg_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__pragma_c_gen__c_arg_0_0_i1);
	}
	if ((MR_sv(3) != MR_sv(7))) {
		MR_GOTO_LAB(__Unify___ll_backend__pragma_c_gen__c_arg_0_0_i1);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(8);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(__Unify___hlds__hlds_pred__arg_info_0_0);
MR_def_label(__Unify___ll_backend__pragma_c_gen__c_arg_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___ll_backend__pragma_c_gen__c_arg_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___term__var_1_0);
MR_decl_entry(__Compare___maybe__maybe_1_0);
MR_decl_entry(__Compare___parse_tree__prog_data__mer_type_0_0);
MR_decl_entry(private_builtin__builtin_compare_int_3_0);
MR_decl_entry(__Compare___hlds__hlds_pred__arg_info_0_0);

MR_BEGIN_MODULE(ll_backend__pragma_c_gen_module20)
	MR_init_entry1(__Compare___ll_backend__pragma_c_gen__c_arg_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ll_backend__pragma_c_gen__c_arg_0_0);
	MR_init_label7(__Compare___ll_backend__pragma_c_gen__c_arg_0_0,3,2,5,9,13,17,45)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___ll_backend__pragma_c_gen__c_arg_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ll_backend__pragma_c_gen__c_arg_0_0_i3);
	}
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___ll_backend__pragma_c_gen__c_arg_0_0_i2);
MR_def_label(__Compare___ll_backend__pragma_c_gen__c_arg_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___ll_backend__pragma_c_gen__c_arg_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(8) = MR_tfield(0, MR_tempr5, 4);
	MR_sv(7) = MR_tfield(0, MR_tempr5, 3);
	MR_sv(6) = MR_tfield(0, MR_tempr5, 2);
	MR_sv(5) = MR_tfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_sv(4) = MR_tfield(0, MR_tempr6, 4);
	MR_sv(3) = MR_tfield(0, MR_tempr6, 3);
	MR_tempr1 = MR_tfield(0, MR_tempr6, 2);
	MR_tempr2 = MR_tfield(0, MR_tempr6, 1);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_tfield(0, MR_tempr3, 0);
	MR_r3 = MR_tfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___term__var_1_0,
		__Compare___ll_backend__pragma_c_gen__c_arg_0_0_i5);
MR_def_label(__Compare___ll_backend__pragma_c_gen__c_arg_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__pragma_c_gen__c_arg_0_0_i45);
	}
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(__Compare___maybe__maybe_1_0,
		__Compare___ll_backend__pragma_c_gen__c_arg_0_0_i9);
MR_def_label(__Compare___ll_backend__pragma_c_gen__c_arg_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__pragma_c_gen__c_arg_0_0_i45);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(__Compare___parse_tree__prog_data__mer_type_0_0,
		__Compare___ll_backend__pragma_c_gen__c_arg_0_0_i13);
MR_def_label(__Compare___ll_backend__pragma_c_gen__c_arg_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__pragma_c_gen__c_arg_0_0_i45);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___ll_backend__pragma_c_gen__c_arg_0_0_i17);
MR_def_label(__Compare___ll_backend__pragma_c_gen__c_arg_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__pragma_c_gen__c_arg_0_0_i45);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(8);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(__Compare___hlds__hlds_pred__arg_info_0_0);
MR_def_label(__Compare___ll_backend__pragma_c_gen__c_arg_0_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_foreign_arg_0;
MR_decl_entry(__Unify___list__list_1_0);

MR_BEGIN_MODULE(ll_backend__pragma_c_gen_module21)
	MR_init_entry1(ll_backend__pragma_c_gen__IntroducedFrom__pred__generate_foreign_proc_code__373__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__pragma_c_gen__IntroducedFrom__pred__generate_foreign_proc_code__373__1_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__generate_foreign_proc_code__373__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__pragma_c_gen__IntroducedFrom__pred__generate_foreign_proc_code__373__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, foreign_arg);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(__Unify___list__list_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__pragma_c_gen_module22)
	MR_init_entry1(ll_backend__pragma_c_gen__IntroducedFrom__pred__generate_foreign_proc_code__375__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__pragma_c_gen__IntroducedFrom__pred__generate_foreign_proc_code__375__1_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__generate_foreign_proc_code__375__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__pragma_c_gen__IntroducedFrom__pred__generate_foreign_proc_code__375__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, foreign_arg);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(__Unify___list__list_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__pragma_c_gen_module23)
	MR_init_entry1(ll_backend__pragma_c_gen__IntroducedFrom__pred__generate_foreign_proc_code__377__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__pragma_c_gen__IntroducedFrom__pred__generate_foreign_proc_code__377__1_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__generate_foreign_proc_code__377__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__pragma_c_gen__IntroducedFrom__pred__generate_foreign_proc_code__377__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__ll_backend__pragma_c_gen_maybe_bunch_0(void)
{
	ll_backend__pragma_c_gen_module0();
	ll_backend__pragma_c_gen_module1();
	ll_backend__pragma_c_gen_module2();
	ll_backend__pragma_c_gen_module3();
	ll_backend__pragma_c_gen_module4();
	ll_backend__pragma_c_gen_module5();
	ll_backend__pragma_c_gen_module6();
	ll_backend__pragma_c_gen_module7();
	ll_backend__pragma_c_gen_module8();
	ll_backend__pragma_c_gen_module9();
	ll_backend__pragma_c_gen_module10();
	ll_backend__pragma_c_gen_module11();
	ll_backend__pragma_c_gen_module12();
	ll_backend__pragma_c_gen_module13();
	ll_backend__pragma_c_gen_module14();
	ll_backend__pragma_c_gen_module15();
	ll_backend__pragma_c_gen_module16();
	ll_backend__pragma_c_gen_module17();
	ll_backend__pragma_c_gen_module18();
	ll_backend__pragma_c_gen_module19();
	ll_backend__pragma_c_gen_module20();
	ll_backend__pragma_c_gen_module21();
	ll_backend__pragma_c_gen_module22();
	ll_backend__pragma_c_gen_module23();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__ll_backend__pragma_c_gen__init(void);
void mercury__ll_backend__pragma_c_gen__init_type_tables(void);
void mercury__ll_backend__pragma_c_gen__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__ll_backend__pragma_c_gen__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__ll_backend__pragma_c_gen__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__ll_backend__pragma_c_gen__init_threadscope_string_table(void);
#endif

void mercury__ll_backend__pragma_c_gen__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__ll_backend__pragma_c_gen_maybe_bunch_0();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__pragma_c_gen__type_ctor_info_c_arg_0,
		ll_backend__pragma_c_gen__c_arg_0_0);
	mercury__ll_backend__pragma_c_gen__init_debugger();
}

void mercury__ll_backend__pragma_c_gen__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__pragma_c_gen__type_ctor_info_c_arg_0);
	}
}


void mercury__ll_backend__pragma_c_gen__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__ll_backend__pragma_c_gen__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__ll_backend__pragma_c_gen);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__ll_backend__pragma_c_gen__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__ll_backend__pragma_c_gen__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
