/*
** Automatically generated from `middle_rec.m'
** by the Mercury compiler,
** version rotd-2007-08-01, configured for i686-pc-linux-gnu.
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
INIT mercury__ll_backend__middle_rec__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 134 "../library/io.int2"
#include "io.mh"

#line 27 "ll_backend.middle_rec.c"
#line 142 "../library/io.int2"
#include "string.mh"

#line 31 "ll_backend.middle_rec.c"
#line 17 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 35 "ll_backend.middle_rec.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 39 "ll_backend.middle_rec.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 43 "ll_backend.middle_rec.c"
#line 30 "../library/array.int2"
#include "array.mh"

#line 47 "ll_backend.middle_rec.c"
#line 48 "ll_backend.middle_rec.c"
#include "ll_backend.middle_rec.mh"

#line 51 "ll_backend.middle_rec.c"
#line 52 "ll_backend.middle_rec.c"
#ifndef LL_BACKEND__MIDDLE_REC_DECL_GUARD
#define LL_BACKEND__MIDDLE_REC_DECL_GUARD

#line 56 "ll_backend.middle_rec.c"
#line 57 "ll_backend.middle_rec.c"

#endif
#line 60 "ll_backend.middle_rec.c"

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
	MR_Integer f1;
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

struct mercury_type_2 {
	MR_Integer f1;
	MR_Word * f2;
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];

struct mercury_type_3 {
	MR_Word * f1;
};
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];

struct mercury_type_4 {
	MR_Word * f1;
	MR_String f2;
};
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_common_4[];
MR_decl_label4(ll_backend__middle_rec__add_counter_to_livevals_3_0, 6,4,8,3)
MR_decl_label7(ll_backend__middle_rec__contains_simple_recursive_call_conj_2_0, 41,4,3,10,11,12,1)
MR_decl_label5(ll_backend__middle_rec__find_labels_2_3_0, 25,4,8,6,3)
MR_decl_label3(ll_backend__middle_rec__find_unused_register_2_0, 2,3,4)
MR_decl_label2(ll_backend__middle_rec__find_unused_register_2_3_0, 3,4)
MR_decl_label3(ll_backend__middle_rec__find_used_registers_3_0, 11,4,3)
MR_decl_label6(ll_backend__middle_rec__find_used_registers_components_3_0, 26,7,9,10,21,3)
MR_decl_label8(ll_backend__middle_rec__find_used_registers_instr_3_0, 70,89,8,10,11,91,92,17)
MR_decl_label8(ll_backend__middle_rec__find_used_registers_instr_3_0, 93,33,34,94,46,47,49,58)
MR_decl_label3(ll_backend__middle_rec__find_used_registers_instr_3_0, 63,68,88)
MR_decl_label5(ll_backend__middle_rec__find_used_registers_lval_3_0, 5,2,9,7,11)
MR_decl_label3(ll_backend__middle_rec__find_used_registers_lvals_3_0, 11,4,3)
MR_decl_label3(ll_backend__middle_rec__find_used_registers_mem_ref_3_0, 13,21,7)
MR_decl_label8(ll_backend__middle_rec__find_used_registers_rval_3_0, 4,6,8,10,14,15,12,11)
MR_decl_label6(ll_backend__middle_rec__generate_downloop_test_3_0, 30,8,7,10,5,11)
MR_decl_label3(ll_backend__middle_rec__insert_foreign_proc_input_registers_3_0, 11,4,3)
MR_decl_label3(ll_backend__middle_rec__insert_foreign_proc_output_registers_3_0, 11,4,3)
MR_decl_label6(ll_backend__middle_rec__match_and_generate_4_0, 8,12,7,16,20,1)
MR_decl_label8(ll_backend__middle_rec__middle_rec_generate_switch_8_0, 2,3,4,5,6,7,8,9)
MR_decl_label8(ll_backend__middle_rec__middle_rec_generate_switch_8_0, 10,11,12,13,14,15,16,17)
MR_decl_label8(ll_backend__middle_rec__middle_rec_generate_switch_8_0, 18,19,20,21,22,23,24,25)
MR_decl_label8(ll_backend__middle_rec__middle_rec_generate_switch_8_0, 26,27,28,29,30,32,33,34)
MR_decl_label8(ll_backend__middle_rec__middle_rec_generate_switch_8_0, 35,36,37,38,39,40,42,43)
MR_decl_label4(ll_backend__middle_rec__middle_rec_generate_switch_8_0, 45,47,49,1)
MR_decl_label5(ll_backend__middle_rec__split_rec_code_3_0, 37,8,7,5,13)
MR_decl_label4(fn__ll_backend__middle_rec__contains_only_builtins_cases_1_0, 18,3,5,4)
MR_decl_label8(fn__ll_backend__middle_rec__contains_only_builtins_expr_1_0, 4,7,9,14,16,49,21,23)
MR_decl_label8(fn__ll_backend__middle_rec__contains_only_builtins_expr_1_0, 27,29,31,33,35,37,39,41)
MR_decl_label1(fn__ll_backend__middle_rec__contains_only_builtins_expr_1_0, 53)
MR_decl_label4(fn__ll_backend__middle_rec__contains_only_builtins_list_1_0, 18,3,5,4)
MR_decl_static(fn__ll_backend__middle_rec__contains_only_builtins_expr_1_0)
MR_decl_static(fn__ll_backend__middle_rec__contains_only_builtins_cases_1_0)
MR_decl_static(fn__ll_backend__middle_rec__contains_only_builtins_list_1_0)
MR_decl_static(ll_backend__middle_rec__contains_simple_recursive_call_conj_2_0)
MR_decl_static(ll_backend__middle_rec__generate_downloop_test_3_0)
MR_decl_static(ll_backend__middle_rec__split_rec_code_3_0)
MR_decl_static(ll_backend__middle_rec__add_counter_to_livevals_3_0)
MR_decl_static(ll_backend__middle_rec__find_unused_register_2_3_0)
MR_decl_static(ll_backend__middle_rec__find_used_registers_lval_3_0)
MR_decl_static(ll_backend__middle_rec__find_used_registers_rval_3_0)
MR_decl_static(ll_backend__middle_rec__find_used_registers_mem_ref_3_0)
MR_decl_static(ll_backend__middle_rec__insert_foreign_proc_input_registers_3_0)
MR_decl_static(ll_backend__middle_rec__insert_foreign_proc_output_registers_3_0)
MR_decl_static(ll_backend__middle_rec__find_used_registers_components_3_0)
MR_decl_static(ll_backend__middle_rec__find_used_registers_lvals_3_0)
MR_decl_static(ll_backend__middle_rec__find_used_registers_3_0)
MR_decl_static(ll_backend__middle_rec__find_used_registers_instr_3_0)
MR_decl_static(ll_backend__middle_rec__find_unused_register_2_0)
MR_decl_static(ll_backend__middle_rec__find_labels_2_3_0)
MR_decl_static(ll_backend__middle_rec__find_labels_2_0)
MR_decl_static(ll_backend__middle_rec__middle_rec_generate_switch_8_0)
MR_def_extern_entry(ll_backend__middle_rec__match_and_generate_4_0)

extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_instruction_0;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
static const struct mercury_type_0 mercury_common_0[4] =
{
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(ll_backend__llds, instruction)
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
MR_TAG_COMMON(0,4,0),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(1,0,2),
MR_tbmkword(0, 0)
}
},
};

static const struct mercury_type_1 mercury_common_1[2] =
{
{
0
},
{
1
},
};

static const struct mercury_type_2 mercury_common_2[3] =
{
{
0,
MR_TAG_COMMON(1,1,0)
},
{
0,
MR_TAG_COMMON(1,1,1)
},
{
6,
MR_tbmkword(0, 0)
},
};

static const struct mercury_type_3 mercury_common_3[1] =
{
{
MR_tbmkword(0, 4)
},
};

static const struct mercury_type_4 mercury_common_4[2] =
{
{
MR_TAG_COMMON(3,2,2),
MR_string_const("exit from base case", 19)
},
{
MR_TAG_COMMON(3,2,2),
MR_string_const("exit from recursive case", 24)
},
};


MR_BEGIN_MODULE(ll_backend__middle_rec_module0)
	MR_init_entry1(fn__ll_backend__middle_rec__contains_only_builtins_expr_1_0);
	MR_init_label8(fn__ll_backend__middle_rec__contains_only_builtins_expr_1_0,4,7,9,14,16,49,21,23)
	MR_init_label8(fn__ll_backend__middle_rec__contains_only_builtins_expr_1_0,27,29,31,33,35,37,39,41)
	MR_init_label1(fn__ll_backend__middle_rec__contains_only_builtins_expr_1_0,53)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ll_backend__middle_rec__contains_only_builtins_expr_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(fn__ll_backend__middle_rec__contains_only_builtins_expr_1_0_i4) MR_AND
		MR_LABEL_AP(fn__ll_backend__middle_rec__contains_only_builtins_expr_1_0_i16) MR_AND
		MR_LABEL_AP(fn__ll_backend__middle_rec__contains_only_builtins_expr_1_0_i49) MR_AND
		MR_LABEL_AP(fn__ll_backend__middle_rec__contains_only_builtins_expr_1_0_i21));
MR_def_label(fn__ll_backend__middle_rec__contains_only_builtins_expr_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_ctfield(0, MR_r1, 3);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r2),
		MR_LABEL_AP(fn__ll_backend__middle_rec__contains_only_builtins_expr_1_0_i7) MR_AND
		MR_LABEL_AP(fn__ll_backend__middle_rec__contains_only_builtins_expr_1_0_i53) MR_AND
		MR_LABEL_AP(fn__ll_backend__middle_rec__contains_only_builtins_expr_1_0_i53) MR_AND
		MR_LABEL_AP(fn__ll_backend__middle_rec__contains_only_builtins_expr_1_0_i14));
MR_def_label(fn__ll_backend__middle_rec__contains_only_builtins_expr_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_ctfield(0, MR_r2, 6);
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(fn__ll_backend__middle_rec__contains_only_builtins_expr_1_0_i9);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(fn__ll_backend__middle_rec__contains_only_builtins_expr_1_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_r3, 0);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(fn__ll_backend__middle_rec__contains_only_builtins_expr_1_0_i49);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
	}
MR_def_label(fn__ll_backend__middle_rec__contains_only_builtins_expr_1_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_ctfield(3, MR_r2, 0),0)) {
		MR_GOTO_LAB(fn__ll_backend__middle_rec__contains_only_builtins_expr_1_0_i49);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(fn__ll_backend__middle_rec__contains_only_builtins_expr_1_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_r1, 3);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(fn__ll_backend__middle_rec__contains_only_builtins_expr_1_0_i49);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
	}
MR_def_label(fn__ll_backend__middle_rec__contains_only_builtins_expr_1_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(fn__ll_backend__middle_rec__contains_only_builtins_expr_1_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r1, 0),
		MR_LABEL_AP(fn__ll_backend__middle_rec__contains_only_builtins_expr_1_0_i49) MR_AND
		MR_LABEL_AP(fn__ll_backend__middle_rec__contains_only_builtins_expr_1_0_i23) MR_AND
		MR_LABEL_AP(fn__ll_backend__middle_rec__contains_only_builtins_expr_1_0_i27) MR_AND
		MR_LABEL_AP(fn__ll_backend__middle_rec__contains_only_builtins_expr_1_0_i29) MR_AND
		MR_LABEL_AP(fn__ll_backend__middle_rec__contains_only_builtins_expr_1_0_i31) MR_AND
		MR_LABEL_AP(fn__ll_backend__middle_rec__contains_only_builtins_expr_1_0_i33) MR_AND
		MR_LABEL_AP(fn__ll_backend__middle_rec__contains_only_builtins_expr_1_0_i35) MR_AND
		MR_LABEL_AP(fn__ll_backend__middle_rec__contains_only_builtins_expr_1_0_i49));
MR_def_label(fn__ll_backend__middle_rec__contains_only_builtins_expr_1_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(3, MR_r1, 1);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(fn__ll_backend__middle_rec__contains_only_builtins_expr_1_0_i49);
	}
	MR_r1 = MR_ctfield(3, MR_r1, 2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(fn__ll_backend__middle_rec__contains_only_builtins_list_1_0);
	}
MR_def_label(fn__ll_backend__middle_rec__contains_only_builtins_expr_1_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(fn__ll_backend__middle_rec__contains_only_builtins_list_1_0);
MR_def_label(fn__ll_backend__middle_rec__contains_only_builtins_expr_1_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(3, MR_r1, 3);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(fn__ll_backend__middle_rec__contains_only_builtins_cases_1_0);
MR_def_label(fn__ll_backend__middle_rec__contains_only_builtins_expr_1_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_ctfield(3, MR_r1, 1), 0);
	MR_succip_word = MR_sv(3);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(fn__ll_backend__middle_rec__contains_only_builtins_expr_1_0_i4) MR_AND
		MR_LABEL_AP(fn__ll_backend__middle_rec__contains_only_builtins_expr_1_0_i16) MR_AND
		MR_LABEL_AP(fn__ll_backend__middle_rec__contains_only_builtins_expr_1_0_i49) MR_AND
		MR_LABEL_AP(fn__ll_backend__middle_rec__contains_only_builtins_expr_1_0_i21));
MR_def_label(fn__ll_backend__middle_rec__contains_only_builtins_expr_1_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_ctfield(3, MR_r1, 2), 0);
	MR_succip_word = MR_sv(3);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(fn__ll_backend__middle_rec__contains_only_builtins_expr_1_0_i4) MR_AND
		MR_LABEL_AP(fn__ll_backend__middle_rec__contains_only_builtins_expr_1_0_i16) MR_AND
		MR_LABEL_AP(fn__ll_backend__middle_rec__contains_only_builtins_expr_1_0_i49) MR_AND
		MR_LABEL_AP(fn__ll_backend__middle_rec__contains_only_builtins_expr_1_0_i21));
MR_def_label(fn__ll_backend__middle_rec__contains_only_builtins_expr_1_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_ctfield(3, MR_r1, 3);
	MR_sv(2) = MR_ctfield(3, MR_r1, 4);
	MR_r1 = MR_ctfield(0, MR_ctfield(3, MR_r1, 2), 0);
	MR_np_localcall_lab(fn__ll_backend__middle_rec__contains_only_builtins_expr_1_0,
		fn__ll_backend__middle_rec__contains_only_builtins_expr_1_0_i37);
MR_def_label(fn__ll_backend__middle_rec__contains_only_builtins_expr_1_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(fn__ll_backend__middle_rec__contains_only_builtins_expr_1_0_i49);
	}
	MR_r1 = MR_ctfield(0, MR_sv(1), 0);
	MR_np_localcall_lab(fn__ll_backend__middle_rec__contains_only_builtins_expr_1_0,
		fn__ll_backend__middle_rec__contains_only_builtins_expr_1_0_i39);
MR_def_label(fn__ll_backend__middle_rec__contains_only_builtins_expr_1_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(fn__ll_backend__middle_rec__contains_only_builtins_expr_1_0_i49);
	}
	MR_r1 = MR_ctfield(0, MR_sv(2), 0);
	MR_np_localcall_lab(fn__ll_backend__middle_rec__contains_only_builtins_expr_1_0,
		fn__ll_backend__middle_rec__contains_only_builtins_expr_1_0_i41);
MR_def_label(fn__ll_backend__middle_rec__contains_only_builtins_expr_1_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(fn__ll_backend__middle_rec__contains_only_builtins_expr_1_0_i49);
	}
MR_def_label(fn__ll_backend__middle_rec__contains_only_builtins_expr_1_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__middle_rec_module1)
	MR_init_entry1(fn__ll_backend__middle_rec__contains_only_builtins_cases_1_0);
	MR_init_label4(fn__ll_backend__middle_rec__contains_only_builtins_cases_1_0,18,3,5,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ll_backend__middle_rec__contains_only_builtins_cases_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
MR_def_label(fn__ll_backend__middle_rec__contains_only_builtins_cases_1_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__ll_backend__middle_rec__contains_only_builtins_cases_1_0_i3);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(2);
MR_def_label(fn__ll_backend__middle_rec__contains_only_builtins_cases_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = MR_ctfield(0, MR_ctfield(0, MR_ctfield(1, MR_r1, 0), 1), 0);
	MR_np_call_localret_ent(fn__ll_backend__middle_rec__contains_only_builtins_expr_1_0,
		fn__ll_backend__middle_rec__contains_only_builtins_cases_1_0_i5);
MR_def_label(fn__ll_backend__middle_rec__contains_only_builtins_cases_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(fn__ll_backend__middle_rec__contains_only_builtins_cases_1_0_i4);
	}
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_GOTO_LAB(fn__ll_backend__middle_rec__contains_only_builtins_cases_1_0_i18);
MR_def_label(fn__ll_backend__middle_rec__contains_only_builtins_cases_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__middle_rec_module2)
	MR_init_entry1(fn__ll_backend__middle_rec__contains_only_builtins_list_1_0);
	MR_init_label4(fn__ll_backend__middle_rec__contains_only_builtins_list_1_0,18,3,5,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ll_backend__middle_rec__contains_only_builtins_list_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
MR_def_label(fn__ll_backend__middle_rec__contains_only_builtins_list_1_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__ll_backend__middle_rec__contains_only_builtins_list_1_0_i3);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(2);
MR_def_label(fn__ll_backend__middle_rec__contains_only_builtins_list_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = MR_ctfield(0, MR_ctfield(1, MR_r1, 0), 0);
	MR_np_call_localret_ent(fn__ll_backend__middle_rec__contains_only_builtins_expr_1_0,
		fn__ll_backend__middle_rec__contains_only_builtins_list_1_0_i5);
MR_def_label(fn__ll_backend__middle_rec__contains_only_builtins_list_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(fn__ll_backend__middle_rec__contains_only_builtins_list_1_0_i4);
	}
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_GOTO_LAB(fn__ll_backend__middle_rec__contains_only_builtins_list_1_0_i18);
MR_def_label(fn__ll_backend__middle_rec__contains_only_builtins_list_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(ll_backend__code_info__get_pred_id_2_0);
MR_decl_entry(ll_backend__code_info__get_proc_id_2_0);

MR_BEGIN_MODULE(ll_backend__middle_rec_module3)
	MR_init_entry1(ll_backend__middle_rec__contains_simple_recursive_call_conj_2_0);
	MR_init_label7(ll_backend__middle_rec__contains_simple_recursive_call_conj_2_0,41,4,3,10,11,12,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__middle_rec__contains_simple_recursive_call_conj_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(ll_backend__middle_rec__contains_simple_recursive_call_conj_2_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__middle_rec__contains_simple_recursive_call_conj_2_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_ctfield(1, MR_r1, 0), 0);
	MR_sv(1) = MR_ctfield(1, MR_r1, 1);
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__ll_backend__middle_rec__contains_only_builtins_expr_1_0,
		ll_backend__middle_rec__contains_simple_recursive_call_conj_2_0_i4);
MR_def_label(ll_backend__middle_rec__contains_simple_recursive_call_conj_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(ll_backend__middle_rec__contains_simple_recursive_call_conj_2_0_i3);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(ll_backend__middle_rec__contains_simple_recursive_call_conj_2_0_i41);
MR_def_label(ll_backend__middle_rec__contains_simple_recursive_call_conj_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(3),1)) {
		MR_GOTO_LAB(ll_backend__middle_rec__contains_simple_recursive_call_conj_2_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(3);
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 3);
	if (MR_INT_NE(MR_tempr1,2)) {
		MR_GOTO_LAB(ll_backend__middle_rec__contains_simple_recursive_call_conj_2_0_i1);
	}
	MR_tempr1 = MR_tempr2;
	MR_sv(3) = MR_ctfield(1, MR_tempr1, 0);
	MR_sv(4) = MR_ctfield(1, MR_tempr1, 1);
	MR_r1 = MR_sv(2);
	}
	MR_np_call_localret_ent(ll_backend__code_info__get_pred_id_2_0,
		ll_backend__middle_rec__contains_simple_recursive_call_conj_2_0_i10);
MR_def_label(ll_backend__middle_rec__contains_simple_recursive_call_conj_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 != MR_sv(3))) {
		MR_GOTO_LAB(ll_backend__middle_rec__contains_simple_recursive_call_conj_2_0_i1);
	}
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ll_backend__code_info__get_proc_id_2_0,
		ll_backend__middle_rec__contains_simple_recursive_call_conj_2_0_i11);
MR_def_label(ll_backend__middle_rec__contains_simple_recursive_call_conj_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 != MR_sv(4))) {
		MR_GOTO_LAB(ll_backend__middle_rec__contains_simple_recursive_call_conj_2_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__ll_backend__middle_rec__contains_only_builtins_list_1_0,
		ll_backend__middle_rec__contains_simple_recursive_call_conj_2_0_i12);
MR_def_label(ll_backend__middle_rec__contains_simple_recursive_call_conj_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_r1 == (MR_Integer) 1);
	MR_decr_sp_and_return(5);
MR_def_label(ll_backend__middle_rec__contains_simple_recursive_call_conj_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(libs__compiler_util__unexpected_2_0);
MR_decl_entry(ll_backend__code_util__neg_rval_2_0);

MR_BEGIN_MODULE(ll_backend__middle_rec_module4)
	MR_init_entry1(ll_backend__middle_rec__generate_downloop_test_3_0);
	MR_init_label6(ll_backend__middle_rec__generate_downloop_test_3_0,30,8,7,10,5,11)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__middle_rec__generate_downloop_test_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__middle_rec__generate_downloop_test_3_0_i30);
	}
	MR_r1 = (MR_Word) MR_string_const("middle_rec.m", 12);
	MR_r2 = (MR_Word) MR_string_const("generate_downloop_test on empty list", 36);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(ll_backend__middle_rec__generate_downloop_test_3_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_r3 = MR_ctfield(1, MR_r1, 1);
	MR_sv(1) = MR_ctfield(1, MR_r1, 0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_sv(1), 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,9)) {
		MR_GOTO_LAB(ll_backend__middle_rec__generate_downloop_test_3_0_i5);
	}
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(ll_backend__middle_rec__generate_downloop_test_3_0_i8);
	}
	MR_sv(1) = MR_r2;
	MR_r1 = MR_ctfield(3, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(ll_backend__code_util__neg_rval_2_0,
		ll_backend__middle_rec__generate_downloop_test_3_0_i10);
MR_def_label(ll_backend__middle_rec__generate_downloop_test_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("middle_rec.m", 12);
	MR_sv(1) = MR_r2;
	MR_r2 = (MR_Word) MR_string_const("generate_downloop_test: if_val followed by other instructions", 61);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		ll_backend__middle_rec__generate_downloop_test_3_0_i7);
MR_def_label(ll_backend__middle_rec__generate_downloop_test_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(ll_backend__code_util__neg_rval_2_0,
		ll_backend__middle_rec__generate_downloop_test_3_0_i10);
MR_def_label(ll_backend__middle_rec__generate_downloop_test_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 9;
	MR_tfield(3, MR_tempr2, 1) = MR_r1;
	MR_tfield(3, MR_tempr2, 2) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_string_const("test on downward loop", 21);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_tfield(1, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(2);
	}
MR_def_label(ll_backend__middle_rec__generate_downloop_test_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_np_localcall_lab(ll_backend__middle_rec__generate_downloop_test_3_0,
		ll_backend__middle_rec__generate_downloop_test_3_0_i11);
MR_def_label(ll_backend__middle_rec__generate_downloop_test_3_0,11)
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

MR_decl_entry(ll_backend__opt_util__skip_comments_2_0);

MR_BEGIN_MODULE(ll_backend__middle_rec_module5)
	MR_init_entry1(ll_backend__middle_rec__split_rec_code_3_0);
	MR_init_label5(ll_backend__middle_rec__split_rec_code_3_0,37,8,7,5,13)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__middle_rec__split_rec_code_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__middle_rec__split_rec_code_3_0_i37);
	}
	MR_r1 = (MR_Word) MR_string_const("middle_rec.m", 12);
	MR_r2 = (MR_Word) MR_string_const("did not find call in split_rec_code", 35);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(ll_backend__middle_rec__split_rec_code_3_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_r2 = MR_ctfield(1, MR_r1, 1);
	MR_sv(1) = MR_ctfield(1, MR_r1, 0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_sv(1), 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,3)) {
		MR_GOTO_LAB(ll_backend__middle_rec__split_rec_code_3_0_i5);
	}
	MR_r1 = MR_r2;
	}
	MR_np_call_localret_ent(ll_backend__opt_util__skip_comments_2_0,
		ll_backend__middle_rec__split_rec_code_3_0_i8);
MR_def_label(ll_backend__middle_rec__split_rec_code_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__middle_rec__split_rec_code_3_0_i7);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_ctfield(1, MR_r1, 0), 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,5)) {
		MR_GOTO_LAB(ll_backend__middle_rec__split_rec_code_3_0_i7);
	}
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_ctfield(1, MR_tempr1, 1);
	MR_decr_sp_and_return(2);
	}
MR_def_label(ll_backend__middle_rec__split_rec_code_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("middle_rec.m", 12);
	MR_r2 = (MR_Word) MR_string_const("split_rec_code: call not followed by label", 42);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(ll_backend__middle_rec__split_rec_code_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_np_localcall_lab(ll_backend__middle_rec__split_rec_code_3_0,
		ll_backend__middle_rec__split_rec_code_3_0_i13);
MR_def_label(ll_backend__middle_rec__split_rec_code_3_0,13)
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

extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_lval_0;
MR_decl_entry(set__insert_3_0);

MR_BEGIN_MODULE(ll_backend__middle_rec_module6)
	MR_init_entry1(ll_backend__middle_rec__add_counter_to_livevals_3_0);
	MR_init_label4(ll_backend__middle_rec__add_counter_to_livevals_3_0,6,4,8,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__middle_rec__add_counter_to_livevals_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__middle_rec__add_counter_to_livevals_3_0_i3);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(2) = MR_ctfield(1, MR_r1, 1);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	MR_r4 = MR_tempr1;
	MR_tempr2 = MR_ctfield(0, MR_tempr1, 0);
	if (MR_PTAG_TESTR(MR_tempr2,2)) {
		MR_GOTO_LAB(ll_backend__middle_rec__add_counter_to_livevals_3_0_i4);
	}
	MR_sv(1) = MR_r2;
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_r2 = MR_ctfield(2, MR_tempr2, 0);
	MR_r3 = MR_sv(1);
	}
	MR_np_call_localret_ent(set__insert_3_0,
		ll_backend__middle_rec__add_counter_to_livevals_3_0_i6);
MR_def_label(ll_backend__middle_rec__add_counter_to_livevals_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r1 = MR_sv(2);
	MR_sv(1) = MR_tempr2;
	}
	MR_np_localcall_lab(ll_backend__middle_rec__add_counter_to_livevals_3_0,
		ll_backend__middle_rec__add_counter_to_livevals_3_0_i8);
MR_def_label(ll_backend__middle_rec__add_counter_to_livevals_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_sv(1) = MR_r4;
	MR_np_localcall_lab(ll_backend__middle_rec__add_counter_to_livevals_3_0,
		ll_backend__middle_rec__add_counter_to_livevals_3_0_i8);
MR_def_label(ll_backend__middle_rec__add_counter_to_livevals_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
MR_def_label(ll_backend__middle_rec__add_counter_to_livevals_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__middle_rec_module7)
	MR_init_entry1(ll_backend__middle_rec__find_unused_register_2_3_0);
	MR_init_label2(ll_backend__middle_rec__find_unused_register_2_3_0,3,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__middle_rec__find_unused_register_2_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__middle_rec__find_unused_register_2_3_0_i3);
	}
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = (MR_Integer) 0;
	MR_tfield(1, MR_r1, 1) = MR_r2;
	MR_proceed();
MR_def_label(ll_backend__middle_rec__find_unused_register_2_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_ctfield(1, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	if (((MR_Integer) MR_r2 >= (MR_Integer) MR_tempr1)) {
		MR_GOTO_LAB(ll_backend__middle_rec__find_unused_register_2_3_0_i4);
	}
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = (MR_Integer) 0;
	MR_tfield(1, MR_r1, 1) = MR_r2;
	MR_proceed();
	}
MR_def_label(ll_backend__middle_rec__find_unused_register_2_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_r2 = ((MR_Integer) MR_r2 + (MR_Integer) 1);
	MR_np_localtailcall(ll_backend__middle_rec__find_unused_register_2_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
MR_decl_entry(builtin__copy_2_1);

MR_BEGIN_MODULE(ll_backend__middle_rec_module8)
	MR_init_entry1(ll_backend__middle_rec__find_used_registers_lval_3_0);
	MR_init_label5(ll_backend__middle_rec__find_used_registers_lval_3_0,5,2,9,7,11)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__middle_rec__find_used_registers_lval_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(ll_backend__middle_rec__find_used_registers_lval_3_0_i2);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(ll_backend__middle_rec__find_used_registers_lval_3_0_i2);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_ctfield(1, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(builtin__copy_2_1,
		ll_backend__middle_rec__find_used_registers_lval_3_0_i5);
MR_def_label(ll_backend__middle_rec__find_used_registers_lval_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(set__insert_3_0);
MR_def_label(ll_backend__middle_rec__find_used_registers_lval_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,8)) {
		MR_GOTO_LAB(ll_backend__middle_rec__find_used_registers_lval_3_0_i7);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(3, MR_r1, 3);
	MR_r1 = MR_ctfield(3, MR_r1, 2);
	MR_np_call_localret_ent(ll_backend__middle_rec__find_used_registers_rval_3_0,
		ll_backend__middle_rec__find_used_registers_lval_3_0_i9);
MR_def_label(ll_backend__middle_rec__find_used_registers_lval_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(ll_backend__middle_rec__find_used_registers_rval_3_0);
MR_def_label(ll_backend__middle_rec__find_used_registers_lval_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,11)) {
		MR_GOTO_LAB(ll_backend__middle_rec__find_used_registers_lval_3_0_i11);
	}
	MR_r1 = (MR_Word) MR_string_const("middle_rec.m", 12);
	MR_r2 = (MR_Word) MR_string_const("lvar found in find_used_registers_lval", 38);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(ll_backend__middle_rec__find_used_registers_lval_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__middle_rec_module9)
	MR_init_entry1(ll_backend__middle_rec__find_used_registers_rval_3_0);
	MR_init_label8(ll_backend__middle_rec__find_used_registers_rval_3_0,4,6,8,10,14,15,12,11)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__middle_rec__find_used_registers_rval_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(ll_backend__middle_rec__find_used_registers_rval_3_0_i4) MR_AND
		MR_LABEL_AP(ll_backend__middle_rec__find_used_registers_rval_3_0_i6) MR_AND
		MR_LABEL_AP(ll_backend__middle_rec__find_used_registers_rval_3_0_i8) MR_AND
		MR_LABEL_AP(ll_backend__middle_rec__find_used_registers_rval_3_0_i10));
MR_def_label(ll_backend__middle_rec__find_used_registers_rval_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r1, 0);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(ll_backend__middle_rec__find_used_registers_lval_3_0);
MR_def_label(ll_backend__middle_rec__find_used_registers_rval_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("middle_rec.m", 12);
	MR_r2 = (MR_Word) MR_string_const("var found in find_used_registers_rval", 37);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(ll_backend__middle_rec__find_used_registers_rval_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(2, MR_r1, 1);
	MR_succip_word = MR_sv(2);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(ll_backend__middle_rec__find_used_registers_rval_3_0_i4) MR_AND
		MR_LABEL_AP(ll_backend__middle_rec__find_used_registers_rval_3_0_i6) MR_AND
		MR_LABEL_AP(ll_backend__middle_rec__find_used_registers_rval_3_0_i8) MR_AND
		MR_LABEL_AP(ll_backend__middle_rec__find_used_registers_rval_3_0_i10));
MR_def_label(ll_backend__middle_rec__find_used_registers_rval_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_ctfield(3, MR_r1, 0),0)) {
		MR_GOTO_LAB(ll_backend__middle_rec__find_used_registers_rval_3_0_i11);
	}
	if (MR_INT_EQ(MR_ctfield(3, MR_r1, 0),1)) {
		MR_GOTO_LAB(ll_backend__middle_rec__find_used_registers_rval_3_0_i12);
	}
	if (MR_INT_EQ(MR_ctfield(3, MR_r1, 0),2)) {
		MR_GOTO_LAB(ll_backend__middle_rec__find_used_registers_rval_3_0_i14);
	}
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(ll_backend__middle_rec__find_used_registers_mem_ref_3_0);
MR_def_label(ll_backend__middle_rec__find_used_registers_rval_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_ctfield(3, MR_r1, 3);
	MR_r1 = MR_ctfield(3, MR_r1, 2);
	MR_np_localcall_lab(ll_backend__middle_rec__find_used_registers_rval_3_0,
		ll_backend__middle_rec__find_used_registers_rval_3_0_i15);
MR_def_label(ll_backend__middle_rec__find_used_registers_rval_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(ll_backend__middle_rec__find_used_registers_rval_3_0_i4) MR_AND
		MR_LABEL_AP(ll_backend__middle_rec__find_used_registers_rval_3_0_i6) MR_AND
		MR_LABEL_AP(ll_backend__middle_rec__find_used_registers_rval_3_0_i8) MR_AND
		MR_LABEL_AP(ll_backend__middle_rec__find_used_registers_rval_3_0_i10));
MR_def_label(ll_backend__middle_rec__find_used_registers_rval_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(3, MR_r1, 2);
	MR_succip_word = MR_sv(2);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(ll_backend__middle_rec__find_used_registers_rval_3_0_i4) MR_AND
		MR_LABEL_AP(ll_backend__middle_rec__find_used_registers_rval_3_0_i6) MR_AND
		MR_LABEL_AP(ll_backend__middle_rec__find_used_registers_rval_3_0_i8) MR_AND
		MR_LABEL_AP(ll_backend__middle_rec__find_used_registers_rval_3_0_i10));
MR_def_label(ll_backend__middle_rec__find_used_registers_rval_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__middle_rec_module10)
	MR_init_entry1(ll_backend__middle_rec__find_used_registers_mem_ref_3_0);
	MR_init_label3(ll_backend__middle_rec__find_used_registers_mem_ref_3_0,13,21,7)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__middle_rec__find_used_registers_mem_ref_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(ll_backend__middle_rec__find_used_registers_mem_ref_3_0_i13);
	}
	if (MR_PTAG_TEST(MR_r1,2)) {
		MR_GOTO_LAB(ll_backend__middle_rec__find_used_registers_mem_ref_3_0_i21);
	}
MR_def_label(ll_backend__middle_rec__find_used_registers_mem_ref_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_const_mask_field(MR_r1, 0);
	MR_np_tailcall_ent(ll_backend__middle_rec__find_used_registers_rval_3_0);
MR_def_label(ll_backend__middle_rec__find_used_registers_mem_ref_3_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(2, MR_r1, 2);
	MR_r1 = MR_ctfield(2, MR_r1, 0);
	MR_np_call_localret_ent(ll_backend__middle_rec__find_used_registers_rval_3_0,
		ll_backend__middle_rec__find_used_registers_mem_ref_3_0_i7);
MR_def_label(ll_backend__middle_rec__find_used_registers_mem_ref_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(ll_backend__middle_rec__find_used_registers_rval_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__middle_rec_module11)
	MR_init_entry1(ll_backend__middle_rec__insert_foreign_proc_input_registers_3_0);
	MR_init_label3(ll_backend__middle_rec__insert_foreign_proc_input_registers_3_0,11,4,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__middle_rec__insert_foreign_proc_input_registers_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
MR_def_label(ll_backend__middle_rec__insert_foreign_proc_input_registers_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__middle_rec__insert_foreign_proc_input_registers_3_0_i3);
	}
	MR_sv(1) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = MR_ctfield(0, MR_ctfield(1, MR_r1, 0), 4);
	MR_np_call_localret_ent(ll_backend__middle_rec__find_used_registers_rval_3_0,
		ll_backend__middle_rec__insert_foreign_proc_input_registers_3_0_i4);
MR_def_label(ll_backend__middle_rec__insert_foreign_proc_input_registers_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_GOTO_LAB(ll_backend__middle_rec__insert_foreign_proc_input_registers_3_0_i11);
MR_def_label(ll_backend__middle_rec__insert_foreign_proc_input_registers_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__middle_rec_module12)
	MR_init_entry1(ll_backend__middle_rec__insert_foreign_proc_output_registers_3_0);
	MR_init_label3(ll_backend__middle_rec__insert_foreign_proc_output_registers_3_0,11,4,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__middle_rec__insert_foreign_proc_output_registers_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
MR_def_label(ll_backend__middle_rec__insert_foreign_proc_output_registers_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__middle_rec__insert_foreign_proc_output_registers_3_0_i3);
	}
	MR_sv(1) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = MR_ctfield(0, MR_ctfield(1, MR_r1, 0), 0);
	MR_np_call_localret_ent(ll_backend__middle_rec__find_used_registers_lval_3_0,
		ll_backend__middle_rec__insert_foreign_proc_output_registers_3_0_i4);
MR_def_label(ll_backend__middle_rec__insert_foreign_proc_output_registers_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_GOTO_LAB(ll_backend__middle_rec__insert_foreign_proc_output_registers_3_0_i11);
MR_def_label(ll_backend__middle_rec__insert_foreign_proc_output_registers_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__middle_rec_module13)
	MR_init_entry1(ll_backend__middle_rec__find_used_registers_components_3_0);
	MR_init_label6(ll_backend__middle_rec__find_used_registers_components_3_0,26,7,9,10,21,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__middle_rec__find_used_registers_components_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
MR_def_label(ll_backend__middle_rec__find_used_registers_components_3_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__middle_rec__find_used_registers_components_3_0_i3);
	}
	MR_r3 = MR_ctfield(1, MR_r1, 0);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r3),
		MR_LABEL_AP(ll_backend__middle_rec__find_used_registers_components_3_0_i21) MR_AND
		MR_LABEL_AP(ll_backend__middle_rec__find_used_registers_components_3_0_i7) MR_AND
		MR_LABEL_AP(ll_backend__middle_rec__find_used_registers_components_3_0_i9) MR_AND
		MR_LABEL_AP(ll_backend__middle_rec__find_used_registers_components_3_0_i21));
MR_def_label(ll_backend__middle_rec__find_used_registers_components_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = MR_ctfield(1, MR_r3, 0);
	MR_np_call_localret_ent(ll_backend__middle_rec__insert_foreign_proc_input_registers_3_0,
		ll_backend__middle_rec__find_used_registers_components_3_0_i10);
MR_def_label(ll_backend__middle_rec__find_used_registers_components_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = MR_ctfield(2, MR_r3, 0);
	MR_np_call_localret_ent(ll_backend__middle_rec__insert_foreign_proc_output_registers_3_0,
		ll_backend__middle_rec__find_used_registers_components_3_0_i10);
MR_def_label(ll_backend__middle_rec__find_used_registers_components_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_GOTO_LAB(ll_backend__middle_rec__find_used_registers_components_3_0_i26);
MR_def_label(ll_backend__middle_rec__find_used_registers_components_3_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(1, MR_r1, 1);
	MR_succip_word = MR_sv(2);
	MR_GOTO_LAB(ll_backend__middle_rec__find_used_registers_components_3_0_i26);
MR_def_label(ll_backend__middle_rec__find_used_registers_components_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__middle_rec_module14)
	MR_init_entry1(ll_backend__middle_rec__find_used_registers_lvals_3_0);
	MR_init_label3(ll_backend__middle_rec__find_used_registers_lvals_3_0,11,4,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__middle_rec__find_used_registers_lvals_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
MR_def_label(ll_backend__middle_rec__find_used_registers_lvals_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__middle_rec__find_used_registers_lvals_3_0_i3);
	}
	MR_sv(1) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_np_call_localret_ent(ll_backend__middle_rec__find_used_registers_lval_3_0,
		ll_backend__middle_rec__find_used_registers_lvals_3_0_i4);
MR_def_label(ll_backend__middle_rec__find_used_registers_lvals_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_GOTO_LAB(ll_backend__middle_rec__find_used_registers_lvals_3_0_i11);
MR_def_label(ll_backend__middle_rec__find_used_registers_lvals_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__middle_rec_module15)
	MR_init_entry1(ll_backend__middle_rec__find_used_registers_3_0);
	MR_init_label3(ll_backend__middle_rec__find_used_registers_3_0,11,4,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__middle_rec__find_used_registers_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
MR_def_label(ll_backend__middle_rec__find_used_registers_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__middle_rec__find_used_registers_3_0_i3);
	}
	MR_sv(1) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = MR_ctfield(0, MR_ctfield(1, MR_r1, 0), 0);
	MR_np_call_localret_ent(ll_backend__middle_rec__find_used_registers_instr_3_0,
		ll_backend__middle_rec__find_used_registers_3_0_i4);
MR_def_label(ll_backend__middle_rec__find_used_registers_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_GOTO_LAB(ll_backend__middle_rec__find_used_registers_3_0_i11);
MR_def_label(ll_backend__middle_rec__find_used_registers_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(set__to_sorted_list_2_0);

MR_BEGIN_MODULE(ll_backend__middle_rec_module16)
	MR_init_entry1(ll_backend__middle_rec__find_used_registers_instr_3_0);
	MR_init_label8(ll_backend__middle_rec__find_used_registers_instr_3_0,70,89,8,10,11,91,92,17)
	MR_init_label8(ll_backend__middle_rec__find_used_registers_instr_3_0,93,33,34,94,46,47,49,58)
	MR_init_label3(ll_backend__middle_rec__find_used_registers_instr_3_0,63,68,88)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__middle_rec__find_used_registers_instr_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(ll_backend__middle_rec__find_used_registers_instr_3_0_i70) MR_AND
		MR_LABEL_AP(ll_backend__middle_rec__find_used_registers_instr_3_0_i70) MR_AND
		MR_LABEL_AP(ll_backend__middle_rec__find_used_registers_instr_3_0_i89) MR_AND
		MR_LABEL_AP(ll_backend__middle_rec__find_used_registers_instr_3_0_i10));
MR_def_label(ll_backend__middle_rec__find_used_registers_instr_3_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_proceed();
MR_def_label(ll_backend__middle_rec__find_used_registers_instr_3_0,89)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_r2 = MR_ctfield(2, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(set__to_sorted_list_2_0,
		ll_backend__middle_rec__find_used_registers_instr_3_0_i8);
MR_def_label(ll_backend__middle_rec__find_used_registers_instr_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(ll_backend__middle_rec__find_used_registers_lvals_3_0);
MR_def_label(ll_backend__middle_rec__find_used_registers_instr_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r1, 0),
		MR_LABEL_AP(ll_backend__middle_rec__find_used_registers_instr_3_0_i11) MR_AND
		MR_LABEL_AP(ll_backend__middle_rec__find_used_registers_instr_3_0_i91) MR_AND
		MR_LABEL_AP(ll_backend__middle_rec__find_used_registers_instr_3_0_i92) MR_AND
		MR_LABEL_AP(ll_backend__middle_rec__find_used_registers_instr_3_0_i70) MR_AND
		MR_LABEL_AP(ll_backend__middle_rec__find_used_registers_instr_3_0_i70) MR_AND
		MR_LABEL_AP(ll_backend__middle_rec__find_used_registers_instr_3_0_i70) MR_AND
		MR_LABEL_AP(ll_backend__middle_rec__find_used_registers_instr_3_0_i70) MR_AND
		MR_LABEL_AP(ll_backend__middle_rec__find_used_registers_instr_3_0_i58) MR_AND
		MR_LABEL_AP(ll_backend__middle_rec__find_used_registers_instr_3_0_i70) MR_AND
		MR_LABEL_AP(ll_backend__middle_rec__find_used_registers_instr_3_0_i58) MR_AND
		MR_LABEL_AP(ll_backend__middle_rec__find_used_registers_instr_3_0_i68) MR_AND
		MR_LABEL_AP(ll_backend__middle_rec__find_used_registers_instr_3_0_i68) MR_AND
		MR_LABEL_AP(ll_backend__middle_rec__find_used_registers_instr_3_0_i93) MR_AND
		MR_LABEL_AP(ll_backend__middle_rec__find_used_registers_instr_3_0_i68) MR_AND
		MR_LABEL_AP(ll_backend__middle_rec__find_used_registers_instr_3_0_i58) MR_AND
		MR_LABEL_AP(ll_backend__middle_rec__find_used_registers_instr_3_0_i58) MR_AND
		MR_LABEL_AP(ll_backend__middle_rec__find_used_registers_instr_3_0_i70) MR_AND
		MR_LABEL_AP(ll_backend__middle_rec__find_used_registers_instr_3_0_i94) MR_AND
		MR_LABEL_AP(ll_backend__middle_rec__find_used_registers_instr_3_0_i49) MR_AND
		MR_LABEL_AP(ll_backend__middle_rec__find_used_registers_instr_3_0_i70) MR_AND
		MR_LABEL_AP(ll_backend__middle_rec__find_used_registers_instr_3_0_i68) MR_AND
		MR_LABEL_AP(ll_backend__middle_rec__find_used_registers_instr_3_0_i58) MR_AND
		MR_LABEL_AP(ll_backend__middle_rec__find_used_registers_instr_3_0_i68) MR_AND
		MR_LABEL_AP(ll_backend__middle_rec__find_used_registers_instr_3_0_i58) MR_AND
		MR_LABEL_AP(ll_backend__middle_rec__find_used_registers_instr_3_0_i70) MR_AND
		MR_LABEL_AP(ll_backend__middle_rec__find_used_registers_instr_3_0_i70) MR_AND
		MR_LABEL_AP(ll_backend__middle_rec__find_used_registers_instr_3_0_i70) MR_AND
		MR_LABEL_AP(ll_backend__middle_rec__find_used_registers_instr_3_0_i63) MR_AND
		MR_LABEL_AP(ll_backend__middle_rec__find_used_registers_instr_3_0_i68) MR_AND
		MR_LABEL_AP(ll_backend__middle_rec__find_used_registers_instr_3_0_i70) MR_AND
		MR_LABEL_AP(ll_backend__middle_rec__find_used_registers_instr_3_0_i68));
MR_def_label(ll_backend__middle_rec__find_used_registers_instr_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(3, MR_r1, 3);
	MR_np_tailcall_ent(ll_backend__middle_rec__find_used_registers_3_0);
MR_def_label(ll_backend__middle_rec__find_used_registers_instr_3_0,91)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(3, MR_r1, 2);
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_np_call_localret_ent(ll_backend__middle_rec__find_used_registers_lval_3_0,
		ll_backend__middle_rec__find_used_registers_instr_3_0_i17);
MR_def_label(ll_backend__middle_rec__find_used_registers_instr_3_0,92)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(3, MR_r1, 2);
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_np_call_localret_ent(ll_backend__middle_rec__find_used_registers_lval_3_0,
		ll_backend__middle_rec__find_used_registers_instr_3_0_i17);
MR_def_label(ll_backend__middle_rec__find_used_registers_instr_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(ll_backend__middle_rec__find_used_registers_rval_3_0);
MR_def_label(ll_backend__middle_rec__find_used_registers_instr_3_0,93)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(3, MR_r1, 4);
	MR_sv(2) = MR_ctfield(3, MR_r1, 7);
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_np_call_localret_ent(ll_backend__middle_rec__find_used_registers_lval_3_0,
		ll_backend__middle_rec__find_used_registers_instr_3_0_i33);
MR_def_label(ll_backend__middle_rec__find_used_registers_instr_3_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ll_backend__middle_rec__find_used_registers_rval_3_0,
		ll_backend__middle_rec__find_used_registers_instr_3_0_i34);
MR_def_label(ll_backend__middle_rec__find_used_registers_instr_3_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(2),0,0)) {
		MR_GOTO_LAB(ll_backend__middle_rec__find_used_registers_instr_3_0_i88);
	}
	MR_r2 = MR_r1;
	MR_r1 = MR_ctfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(ll_backend__middle_rec__find_used_registers_rval_3_0);
MR_def_label(ll_backend__middle_rec__find_used_registers_instr_3_0,94)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(3, MR_r1, 4);
	MR_sv(2) = MR_ctfield(3, MR_r1, 5);
	MR_r1 = MR_ctfield(3, MR_r1, 3);
	MR_np_call_localret_ent(ll_backend__middle_rec__find_used_registers_rval_3_0,
		ll_backend__middle_rec__find_used_registers_instr_3_0_i46);
MR_def_label(ll_backend__middle_rec__find_used_registers_instr_3_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ll_backend__middle_rec__find_used_registers_lval_3_0,
		ll_backend__middle_rec__find_used_registers_instr_3_0_i47);
MR_def_label(ll_backend__middle_rec__find_used_registers_instr_3_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(ll_backend__middle_rec__find_used_registers_lval_3_0);
MR_def_label(ll_backend__middle_rec__find_used_registers_instr_3_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(3, MR_r1, 3);
	MR_np_tailcall_ent(ll_backend__middle_rec__find_used_registers_rval_3_0);
MR_def_label(ll_backend__middle_rec__find_used_registers_instr_3_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_np_tailcall_ent(ll_backend__middle_rec__find_used_registers_rval_3_0);
MR_def_label(ll_backend__middle_rec__find_used_registers_instr_3_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(3, MR_r1, 2);
	MR_np_tailcall_ent(ll_backend__middle_rec__find_used_registers_components_3_0);
MR_def_label(ll_backend__middle_rec__find_used_registers_instr_3_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_np_tailcall_ent(ll_backend__middle_rec__find_used_registers_lval_3_0);
MR_def_label(ll_backend__middle_rec__find_used_registers_instr_3_0,88)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(set__init_1_0);

MR_BEGIN_MODULE(ll_backend__middle_rec_module17)
	MR_init_entry1(ll_backend__middle_rec__find_unused_register_2_0);
	MR_init_label3(ll_backend__middle_rec__find_unused_register_2_0,2,3,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__middle_rec__find_unused_register_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_np_call_localret_ent(set__init_1_0,
		ll_backend__middle_rec__find_unused_register_2_0_i2);
MR_def_label(ll_backend__middle_rec__find_unused_register_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ll_backend__middle_rec__find_used_registers_3_0,
		ll_backend__middle_rec__find_unused_register_2_0_i3);
MR_def_label(ll_backend__middle_rec__find_unused_register_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_np_call_localret_ent(set__to_sorted_list_2_0,
		ll_backend__middle_rec__find_unused_register_2_0_i4);
MR_def_label(ll_backend__middle_rec__find_unused_register_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 1;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(ll_backend__middle_rec__find_unused_register_2_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__middle_rec_module18)
	MR_init_entry1(ll_backend__middle_rec__find_labels_2_3_0);
	MR_init_label5(ll_backend__middle_rec__find_labels_2_3_0,25,4,8,6,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__middle_rec__find_labels_2_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
MR_def_label(ll_backend__middle_rec__find_labels_2_3_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	while (1) {
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__middle_rec__find_labels_2_3_0_i3);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(0, MR_ctfield(1, MR_r1, 0), 0);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_ctfield(1, MR_r1, 1);
	if (MR_RTAGS_TESTR(MR_tempr1,3,5)) {
		MR_GOTO_LAB(ll_backend__middle_rec__find_labels_2_3_0_i4);
	}
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_ctfield(3, MR_tempr1, 1);
	MR_tfield(1, MR_tempr2, 1) = MR_r2;
	MR_r1 = MR_r4;
	MR_r2 = MR_tempr2;
	MR_succip_word = MR_sv(2);
	continue;
	}
	break; } /* end while */
MR_def_label(ll_backend__middle_rec__find_labels_2_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,0)) {
		MR_GOTO_LAB(ll_backend__middle_rec__find_labels_2_3_0_i6);
	}
	MR_sv(1) = MR_r4;
	MR_r1 = MR_ctfield(3, MR_r3, 3);
	MR_np_localcall_lab(ll_backend__middle_rec__find_labels_2_3_0,
		ll_backend__middle_rec__find_labels_2_3_0_i8);
MR_def_label(ll_backend__middle_rec__find_labels_2_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_GOTO_LAB(ll_backend__middle_rec__find_labels_2_3_0_i25);
MR_def_label(ll_backend__middle_rec__find_labels_2_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r4;
	MR_succip_word = MR_sv(2);
	MR_GOTO_LAB(ll_backend__middle_rec__find_labels_2_3_0_i25);
MR_def_label(ll_backend__middle_rec__find_labels_2_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__middle_rec_module19)
	MR_init_entry1(ll_backend__middle_rec__find_labels_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__middle_rec__find_labels_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_tailcall_ent(ll_backend__middle_rec__find_labels_2_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(ll_backend__code_info__get_stack_slots_2_0);
MR_decl_entry(ll_backend__code_info__get_varset_2_0);
MR_decl_entry(fn__ll_backend__llds_out__explain_stack_slots_2_0);
MR_decl_entry(ll_backend__code_info__get_module_info_2_0);
MR_decl_entry(fn__ll_backend__code_util__make_local_entry_label_4_0);
MR_decl_entry(ll_backend__code_info__pre_goal_update_4_0);
MR_decl_entry(ll_backend__unify_gen__generate_tag_test_7_0);
MR_decl_entry(libs__tree__flatten_2_0);
MR_decl_entry(list__condense_2_0);
MR_decl_entry(hlds__hlds_llds__goal_info_get_store_map_2_0);
MR_decl_entry(ll_backend__code_info__remember_position_2_0);
MR_decl_entry(ll_backend__code_gen__generate_goal_5_0);
MR_decl_entry(ll_backend__code_info__generate_branch_end_6_0);
MR_decl_entry(ll_backend__code_info__reset_to_position_3_0);
MR_decl_entry(ll_backend__code_info__post_goal_update_3_0);
MR_decl_entry(ll_backend__code_info__after_all_branches_4_0);
MR_decl_entry(fn__ll_backend__code_info__get_arginfo_1_0);
MR_decl_entry(fn__ll_backend__code_info__get_headvars_1_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_arg_info_0;
MR_decl_entry(assoc_list__from_corresponding_lists_3_0);
MR_decl_entry(ll_backend__code_info__setup_return_5_0);
MR_decl_entry(fn__ll_backend__opt_util__block_refers_to_stack_1_0);
MR_decl_entry(list__append_3_1);
MR_decl_entry(ll_backend__code_info__get_next_label_3_0);
MR_decl_entry(ll_backend__code_info__get_total_stackslot_count_2_0);
MR_decl_entry(fn__ll_backend__proc_gen__push_msg_3_0);

MR_BEGIN_MODULE(ll_backend__middle_rec_module20)
	MR_init_entry1(ll_backend__middle_rec__middle_rec_generate_switch_8_0);
	MR_init_label8(ll_backend__middle_rec__middle_rec_generate_switch_8_0,2,3,4,5,6,7,8,9)
	MR_init_label8(ll_backend__middle_rec__middle_rec_generate_switch_8_0,10,11,12,13,14,15,16,17)
	MR_init_label8(ll_backend__middle_rec__middle_rec_generate_switch_8_0,18,19,20,21,22,23,24,25)
	MR_init_label8(ll_backend__middle_rec__middle_rec_generate_switch_8_0,26,27,28,29,30,32,33,34)
	MR_init_label8(ll_backend__middle_rec__middle_rec_generate_switch_8_0,35,36,37,38,39,40,42,43)
	MR_init_label4(ll_backend__middle_rec__middle_rec_generate_switch_8_0,45,47,49,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__middle_rec__middle_rec_generate_switch_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(19);
	MR_sv(19) = (MR_Word) MR_succip;
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
	MR_np_call_localret_ent(ll_backend__code_info__get_stack_slots_2_0,
		ll_backend__middle_rec__middle_rec_generate_switch_8_0_i2);
MR_def_label(ll_backend__middle_rec__middle_rec_generate_switch_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_np_call_localret_ent(ll_backend__code_info__get_varset_2_0,
		ll_backend__middle_rec__middle_rec_generate_switch_8_0_i3);
MR_def_label(ll_backend__middle_rec__middle_rec_generate_switch_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(fn__ll_backend__llds_out__explain_stack_slots_2_0,
		ll_backend__middle_rec__middle_rec_generate_switch_8_0_i4);
MR_def_label(ll_backend__middle_rec__middle_rec_generate_switch_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_np_call_localret_ent(ll_backend__code_info__get_module_info_2_0,
		ll_backend__middle_rec__middle_rec_generate_switch_8_0_i5);
MR_def_label(ll_backend__middle_rec__middle_rec_generate_switch_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_np_call_localret_ent(ll_backend__code_info__get_pred_id_2_0,
		ll_backend__middle_rec__middle_rec_generate_switch_8_0_i6);
MR_def_label(ll_backend__middle_rec__middle_rec_generate_switch_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_np_call_localret_ent(ll_backend__code_info__get_proc_id_2_0,
		ll_backend__middle_rec__middle_rec_generate_switch_8_0_i7);
MR_def_label(ll_backend__middle_rec__middle_rec_generate_switch_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(9);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(fn__ll_backend__code_util__make_local_entry_label_4_0,
		ll_backend__middle_rec__middle_rec_generate_switch_8_0_i8);
MR_def_label(ll_backend__middle_rec__middle_rec_generate_switch_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(10);
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = (MR_Integer) 0;
	MR_np_call_localret_ent(ll_backend__code_info__pre_goal_update_4_0,
		ll_backend__middle_rec__middle_rec_generate_switch_8_0_i9);
MR_def_label(ll_backend__middle_rec__middle_rec_generate_switch_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = (MR_Integer) 0;
	MR_np_call_localret_ent(ll_backend__unify_gen__generate_tag_test_7_0,
		ll_backend__middle_rec__middle_rec_generate_switch_8_0_i10);
MR_def_label(ll_backend__middle_rec__middle_rec_generate_switch_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(12) = MR_r3;
	MR_sv(14) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = MR_sv(14);
	MR_np_call_localret_ent(libs__tree__flatten_2_0,
		ll_backend__middle_rec__middle_rec_generate_switch_8_0_i11);
MR_def_label(ll_backend__middle_rec__middle_rec_generate_switch_8_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_np_call_localret_ent(list__condense_2_0,
		ll_backend__middle_rec__middle_rec_generate_switch_8_0_i12);
MR_def_label(ll_backend__middle_rec__middle_rec_generate_switch_8_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_llds__goal_info_get_store_map_2_0,
		ll_backend__middle_rec__middle_rec_generate_switch_8_0_i13);
MR_def_label(ll_backend__middle_rec__middle_rec_generate_switch_8_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_r1 = MR_sv(12);
	MR_np_call_localret_ent(ll_backend__code_info__remember_position_2_0,
		ll_backend__middle_rec__middle_rec_generate_switch_8_0_i14);
MR_def_label(ll_backend__middle_rec__middle_rec_generate_switch_8_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_r3 = MR_sv(12);
	MR_np_call_localret_ent(ll_backend__code_gen__generate_goal_5_0,
		ll_backend__middle_rec__middle_rec_generate_switch_8_0_i15);
MR_def_label(ll_backend__middle_rec__middle_rec_generate_switch_8_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r3 = MR_r2;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(ll_backend__code_info__generate_branch_end_6_0,
		ll_backend__middle_rec__middle_rec_generate_switch_8_0_i16);
MR_def_label(ll_backend__middle_rec__middle_rec_generate_switch_8_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_sv(3) = MR_tempr1;
	MR_sv(13) = MR_r2;
	MR_r2 = MR_r3;
	}
	MR_np_call_localret_ent(ll_backend__code_info__reset_to_position_3_0,
		ll_backend__middle_rec__middle_rec_generate_switch_8_0_i17);
MR_def_label(ll_backend__middle_rec__middle_rec_generate_switch_8_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(ll_backend__code_gen__generate_goal_5_0,
		ll_backend__middle_rec__middle_rec_generate_switch_8_0_i18);
MR_def_label(ll_backend__middle_rec__middle_rec_generate_switch_8_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r2;
	MR_r2 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(11);
	MR_np_call_localret_ent(ll_backend__code_info__generate_branch_end_6_0,
		ll_backend__middle_rec__middle_rec_generate_switch_8_0_i19);
MR_def_label(ll_backend__middle_rec__middle_rec_generate_switch_8_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_sv(5) = MR_r2;
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(ll_backend__code_info__post_goal_update_3_0,
		ll_backend__middle_rec__middle_rec_generate_switch_8_0_i20);
MR_def_label(ll_backend__middle_rec__middle_rec_generate_switch_8_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(ll_backend__code_info__after_all_branches_4_0,
		ll_backend__middle_rec__middle_rec_generate_switch_8_0_i21);
MR_def_label(ll_backend__middle_rec__middle_rec_generate_switch_8_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_np_call_localret_ent(fn__ll_backend__code_info__get_arginfo_1_0,
		ll_backend__middle_rec__middle_rec_generate_switch_8_0_i22);
MR_def_label(ll_backend__middle_rec__middle_rec_generate_switch_8_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(11);
	MR_np_call_localret_ent(fn__ll_backend__code_info__get_headvars_1_0,
		ll_backend__middle_rec__middle_rec_generate_switch_8_0_i23);
MR_def_label(ll_backend__middle_rec__middle_rec_generate_switch_8_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, arg_info);
	MR_r4 = MR_sv(4);
	MR_np_call_localret_ent(assoc_list__from_corresponding_lists_3_0,
		ll_backend__middle_rec__middle_rec_generate_switch_8_0_i24);
MR_def_label(ll_backend__middle_rec__middle_rec_generate_switch_8_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(11);
	MR_np_call_localret_ent(ll_backend__code_info__setup_return_5_0,
		ll_backend__middle_rec__middle_rec_generate_switch_8_0_i25);
MR_def_label(ll_backend__middle_rec__middle_rec_generate_switch_8_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 2);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(13);
	MR_tempr6 = MR_r2;
	MR_tfield(2, MR_tempr1, 1) = MR_tempr6;
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 2);
	MR_tfield(2, MR_tempr2, 0) = MR_sv(12);
	MR_tfield(2, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 2, (MR_Integer) 2);
	MR_tfield(2, MR_tempr3, 0) = MR_sv(5);
	MR_tfield(2, MR_tempr3, 1) = MR_tempr6;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 2);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(2, MR_tempr1, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr3, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr3, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr4, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr4, 0) = MR_tempr3;
	MR_tfield(0, MR_tempr4, 1) = (MR_Word) MR_string_const("", 0);
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 2);
	MR_sv(4) = MR_tempr5;
	MR_tfield(1, MR_tempr5, 0) = MR_tempr4;
	MR_tfield(1, MR_tempr5, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(3) = MR_tempr1;
	MR_sv(12) = MR_r3;
	MR_r1 = MR_sv(14);
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(libs__tree__flatten_2_0,
		ll_backend__middle_rec__middle_rec_generate_switch_8_0_i26);
MR_def_label(ll_backend__middle_rec__middle_rec_generate_switch_8_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_np_call_localret_ent(list__condense_2_0,
		ll_backend__middle_rec__middle_rec_generate_switch_8_0_i27);
MR_def_label(ll_backend__middle_rec__middle_rec_generate_switch_8_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(14);
	MR_np_call_localret_ent(libs__tree__flatten_2_0,
		ll_backend__middle_rec__middle_rec_generate_switch_8_0_i28);
MR_def_label(ll_backend__middle_rec__middle_rec_generate_switch_8_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_np_call_localret_ent(list__condense_2_0,
		ll_backend__middle_rec__middle_rec_generate_switch_8_0_i29);
MR_def_label(ll_backend__middle_rec__middle_rec_generate_switch_8_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__ll_backend__opt_util__block_refers_to_stack_1_0,
		ll_backend__middle_rec__middle_rec_generate_switch_8_0_i30);
MR_def_label(ll_backend__middle_rec__middle_rec_generate_switch_8_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ll_backend__middle_rec__middle_rec_generate_switch_8_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(list__append_3_1,
		ll_backend__middle_rec__middle_rec_generate_switch_8_0_i32);
MR_def_label(ll_backend__middle_rec__middle_rec_generate_switch_8_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(ll_backend__middle_rec__find_unused_register_2_0,
		ll_backend__middle_rec__middle_rec_generate_switch_8_0_i33);
MR_def_label(ll_backend__middle_rec__middle_rec_generate_switch_8_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_sv(5) = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__middle_rec__split_rec_code_3_0,
		ll_backend__middle_rec__middle_rec_generate_switch_8_0_i34);
MR_def_label(ll_backend__middle_rec__middle_rec_generate_switch_8_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r2;
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(ll_backend__middle_rec__add_counter_to_livevals_3_0,
		ll_backend__middle_rec__middle_rec_generate_switch_8_0_i35);
MR_def_label(ll_backend__middle_rec__middle_rec_generate_switch_8_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(12);
	MR_sv(12) = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__code_info__get_next_label_3_0,
		ll_backend__middle_rec__middle_rec_generate_switch_8_0_i36);
MR_def_label(ll_backend__middle_rec__middle_rec_generate_switch_8_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(13) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(ll_backend__code_info__get_next_label_3_0,
		ll_backend__middle_rec__middle_rec_generate_switch_8_0_i37);
MR_def_label(ll_backend__middle_rec__middle_rec_generate_switch_8_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(14) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(18) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__code_info__get_total_stackslot_count_2_0,
		ll_backend__middle_rec__middle_rec_generate_switch_8_0_i38);
MR_def_label(ll_backend__middle_rec__middle_rec_generate_switch_8_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(15) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(13);
	MR_np_call_localret_ent(ll_backend__middle_rec__generate_downloop_test_3_0,
		ll_backend__middle_rec__middle_rec_generate_switch_8_0_i39);
MR_def_label(ll_backend__middle_rec__middle_rec_generate_switch_8_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(15),0)) {
		MR_GOTO_LAB(ll_backend__middle_rec__middle_rec_generate_switch_8_0_i40);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8, MR_tempr9, MR_tempr10, MR_tempr11, MR_tempr12, MR_tempr13, MR_tempr14, MR_tempr15, MR_tempr16, MR_tempr17, MR_tempr18;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_r3 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tempr18 = MR_sv(5);
	MR_tfield(3, MR_tempr1, 1) = MR_tempr18;
	MR_tfield(3, MR_tempr1, 2) = (MR_Word) MR_TAG_COMMON(3,2,0);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_r4 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_string_const("initialize counter register", 27);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_sv(9) = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr4, 0, (MR_Integer) 1);
	MR_r4 = MR_tempr4;
	MR_tfield(0, MR_tempr4, 0) = MR_tempr18;
	MR_tag_alloc_heap(MR_tempr5, 3, (MR_Integer) 4);
	MR_r5 = MR_tempr5;
	MR_tfield(3, MR_tempr5, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr5, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_tempr5, 2) = MR_tempr4;
	MR_tfield(3, MR_tempr5, 3) = (MR_Word) MR_TAG_COMMON(3,2,1);
	MR_tag_alloc_heap(MR_tempr6, 3, (MR_Integer) 3);
	MR_r6 = MR_tempr6;
	MR_tfield(3, MR_tempr6, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr6, 1) = MR_tempr18;
	MR_tfield(3, MR_tempr6, 2) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr7, 0, (MR_Integer) 2);
	MR_r7 = MR_tempr7;
	MR_tfield(0, MR_tempr7, 0) = MR_tempr6;
	MR_tfield(0, MR_tempr7, 1) = (MR_Word) MR_string_const("increment loop counter", 22);
	MR_tag_alloc_heap(MR_tempr8, 1, (MR_Integer) 2);
	MR_sv(15) = MR_tempr8;
	MR_tfield(1, MR_tempr8, 0) = MR_tempr7;
	MR_tfield(1, MR_tempr8, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr9, 3, (MR_Integer) 4);
	MR_r7 = MR_tempr9;
	MR_tfield(3, MR_tempr9, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr9, 1) = (MR_Word) MR_tbmkword(0, 1);
	MR_tfield(3, MR_tempr9, 2) = MR_tempr4;
	MR_tfield(3, MR_tempr9, 3) = (MR_Word) MR_TAG_COMMON(3,2,1);
	MR_tag_alloc_heap(MR_tempr10, 3, (MR_Integer) 3);
	MR_r8 = MR_tempr10;
	MR_tfield(3, MR_tempr10, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr10, 1) = MR_tempr18;
	MR_tfield(3, MR_tempr10, 2) = MR_tempr9;
	MR_tag_alloc_heap(MR_tempr11, 0, (MR_Integer) 2);
	MR_r6 = MR_tempr11;
	MR_tfield(0, MR_tempr11, 0) = MR_tempr10;
	MR_tfield(0, MR_tempr11, 1) = (MR_Word) MR_string_const("decrement loop counter", 22);
	MR_tag_alloc_heap(MR_tempr12, 1, (MR_Integer) 2);
	MR_sv(16) = MR_tempr12;
	MR_tfield(1, MR_tempr12, 0) = MR_tempr11;
	MR_tfield(1, MR_tempr12, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr13, 3, (MR_Integer) 4);
	MR_r6 = MR_tempr13;
	MR_tfield(3, MR_tempr13, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr13, 1) = (MR_Word) MR_tbmkword(0, 22);
	MR_tfield(3, MR_tempr13, 2) = MR_tempr4;
	MR_tfield(3, MR_tempr13, 3) = (MR_Word) MR_TAG_COMMON(3,2,0);
	MR_tag_alloc_heap(MR_tempr14, 1, (MR_Integer) 1);
	MR_r3 = MR_tempr14;
	MR_tfield(1, MR_tempr14, 0) = MR_sv(14);
	MR_tag_alloc_heap(MR_tempr15, 3, (MR_Integer) 3);
	MR_r4 = MR_tempr15;
	MR_tfield(3, MR_tempr15, 0) = (MR_Integer) 9;
	MR_tfield(3, MR_tempr15, 1) = MR_tempr13;
	MR_tfield(3, MR_tempr15, 2) = MR_tempr14;
	MR_tag_alloc_heap(MR_tempr16, 0, (MR_Integer) 2);
	MR_r5 = MR_tempr16;
	MR_tfield(0, MR_tempr16, 0) = MR_tempr15;
	MR_tfield(0, MR_tempr16, 1) = (MR_Word) MR_string_const("test on upward loop", 19);
	MR_tag_alloc_heap(MR_tempr17, 1, (MR_Integer) 2);
	MR_sv(17) = MR_tempr17;
	MR_tfield(1, MR_tempr17, 0) = MR_tempr16;
	MR_tfield(1, MR_tempr17, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(7) = MR_r1;
	MR_sv(5) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(8) = (MR_Word) MR_tbmkword(0, 0);
	MR_GOTO_LAB(ll_backend__middle_rec__middle_rec_generate_switch_8_0_i43);
	}
MR_def_label(ll_backend__middle_rec__middle_rec_generate_switch_8_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_sv(7) = MR_tempr1;
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(9);
	}
	MR_np_call_localret_ent(fn__ll_backend__proc_gen__push_msg_3_0,
		ll_backend__middle_rec__middle_rec_generate_switch_8_0_i42);
MR_def_label(ll_backend__middle_rec__middle_rec_generate_switch_8_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8, MR_tempr9;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 24;
	MR_tempr8 = MR_sv(15);
	MR_tfield(3, MR_tempr1, 1) = MR_tempr8;
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_tfield(3, MR_tempr1, 3) = (MR_Integer) 1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_string_const("", 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 25;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr8;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_string_const("", 0);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_sv(8) = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr4, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tempr9 = MR_sv(5);
	MR_tfield(3, MR_tempr1, 1) = MR_tempr9;
	MR_tfield(3, MR_tempr1, 2) = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_string_const("initialize counter register", 27);
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 2);
	MR_sv(9) = MR_tempr5;
	MR_tfield(1, MR_tempr5, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr5, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr9;
	MR_tag_alloc_heap(MR_tempr6, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr6, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr6, 1) = (MR_Word) MR_tbmkword(0, 22);
	MR_tfield(3, MR_tempr6, 2) = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_tfield(3, MR_tempr6, 3) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(14);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 9;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr6;
	MR_tfield(3, MR_tempr2, 2) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr6, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr6, 0) = MR_tempr2;
	MR_tfield(0, MR_tempr6, 1) = (MR_Word) MR_string_const("test on upward loop", 19);
	MR_tag_alloc_heap(MR_tempr7, 1, (MR_Integer) 2);
	MR_sv(17) = MR_tempr7;
	MR_tfield(1, MR_tempr7, 0) = MR_tempr6;
	MR_tfield(1, MR_tempr7, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(5) = MR_tempr3;
	MR_sv(15) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(16) = (MR_Word) MR_tbmkword(0, 0);
	}
MR_def_label(ll_backend__middle_rec__middle_rec_generate_switch_8_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(11),0,0)) {
		MR_GOTO_LAB(ll_backend__middle_rec__middle_rec_generate_switch_8_0_i45);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(10);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_string_const("Procedure entry point", 21);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(6);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr3, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr3, 1) = (MR_Word) MR_string_const("", 0);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(13);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_string_const("start of the down loop", 22);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr2, 1) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr4, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr4, 0) = MR_tempr2;
	MR_tfield(0, MR_tempr4, 1) = (MR_Word) MR_string_const("start of base case", 18);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr4;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr4, 1) = (MR_Word) MR_TAG_COMMON(1,0,3);
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr5, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr5, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(7);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_sv(12);
	MR_tfield(1, MR_tempr4, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr6, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr6;
	MR_tfield(1, MR_tempr6, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr6, 1) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	}
	MR_np_call_localret_ent(list__condense_2_0,
		ll_backend__middle_rec__middle_rec_generate_switch_8_0_i49);
MR_def_label(ll_backend__middle_rec__middle_rec_generate_switch_8_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(ll_backend__middle_rec__find_labels_2_0,
		ll_backend__middle_rec__middle_rec_generate_switch_8_0_i47);
MR_def_label(ll_backend__middle_rec__middle_rec_generate_switch_8_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__middle_rec__middle_rec_generate_switch_8_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8, MR_tempr9, MR_tempr10;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(10);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_string_const("Procedure entry point", 21);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(6);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr3, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr3, 1) = (MR_Word) MR_string_const("", 0);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(13);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_string_const("start of the down loop", 22);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr2, 1) = MR_sv(14);
	MR_tag_alloc_heap(MR_tempr4, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr4, 0) = MR_tempr2;
	MR_tfield(0, MR_tempr4, 1) = (MR_Word) MR_string_const("", 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr4;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr4, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr4, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr4, 1) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr5, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr5, 0) = MR_tempr4;
	MR_tfield(0, MR_tempr5, 1) = (MR_Word) MR_string_const("start of base case", 18);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_tempr5;
	MR_tfield(1, MR_tempr4, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr5, 0) = (MR_Word) MR_TAG_COMMON(0,4,1);
	MR_tfield(1, MR_tempr5, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tempr9 = MR_sv(4);
	MR_tfield(1, MR_tempr4, 0) = MR_tempr9;
	MR_tfield(1, MR_tempr4, 1) = (MR_Word) MR_TAG_COMMON(1,0,3);
	MR_tag_alloc_heap(MR_tempr6, 1, (MR_Integer) 2);
	MR_tempr10 = MR_sv(3);
	MR_tfield(1, MR_tempr6, 0) = MR_tempr10;
	MR_tfield(1, MR_tempr6, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr7, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr7, 0) = MR_tempr5;
	MR_tfield(1, MR_tempr7, 1) = MR_tempr6;
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr5, 0) = MR_tempr9;
	MR_tfield(1, MR_tempr5, 1) = MR_tempr7;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_sv(17);
	MR_tfield(1, MR_tempr4, 1) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr5, 0) = MR_sv(16);
	MR_tfield(1, MR_tempr5, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_sv(8);
	MR_tfield(1, MR_tempr4, 1) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr5, 0) = MR_sv(11);
	MR_tfield(1, MR_tempr5, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr10;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_sv(7);
	MR_tfield(1, MR_tempr4, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(12);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_sv(15);
	MR_tfield(1, MR_tempr4, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(9);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr8, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr8;
	MR_tfield(1, MR_tempr8, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr8, 1) = MR_tempr2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	}
	MR_np_call_localret_ent(list__condense_2_0,
		ll_backend__middle_rec__middle_rec_generate_switch_8_0_i49);
MR_def_label(ll_backend__middle_rec__middle_rec_generate_switch_8_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_r3 = MR_sv(18);
	MR_succip_word = MR_sv(19);
	MR_decr_sp(19);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ll_backend__middle_rec__middle_rec_generate_switch_8_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(19);
	MR_decr_sp(19);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__middle_rec_module21)
	MR_init_entry1(ll_backend__middle_rec__match_and_generate_4_0);
	MR_init_label6(ll_backend__middle_rec__match_and_generate_4_0,8,12,7,16,20,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__middle_rec__match_and_generate_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_ctfield(0, MR_r1, 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,3)) {
		MR_GOTO_LAB(ll_backend__middle_rec__match_and_generate_4_0_i1);
	}
	MR_tempr2 = MR_ctfield(3, MR_tempr1, 2);
	if (MR_INT_NE(MR_tempr2,1)) {
		MR_GOTO_LAB(ll_backend__middle_rec__match_and_generate_4_0_i1);
	}
	MR_tempr2 = MR_ctfield(3, MR_tempr1, 3);
	if (MR_LTAGS_TEST(MR_tempr2,0,0)) {
		MR_GOTO_LAB(ll_backend__middle_rec__match_and_generate_4_0_i1);
	}
	MR_tempr3 = MR_ctfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TEST(MR_tempr3,0,0)) {
		MR_GOTO_LAB(ll_backend__middle_rec__match_and_generate_4_0_i1);
	}
	MR_tempr4 = MR_ctfield(1, MR_tempr3, 1);
	if (MR_LTAGS_TESTR(MR_tempr4,0,0)) {
		MR_GOTO_LAB(ll_backend__middle_rec__match_and_generate_4_0_i1);
	}
	MR_tempr4 = MR_ctfield(1, MR_tempr3, 0);
	MR_sv(6) = MR_ctfield(0, MR_tempr4, 1);
	MR_sv(5) = MR_ctfield(0, MR_tempr4, 0);
	MR_tempr3 = MR_ctfield(1, MR_tempr2, 0);
	MR_sv(4) = MR_ctfield(0, MR_tempr3, 1);
	MR_sv(2) = MR_ctfield(3, MR_tempr1, 1);
	MR_sv(1) = MR_ctfield(0, MR_r1, 1);
	MR_sv(3) = MR_ctfield(0, MR_tempr3, 0);
	MR_sv(7) = MR_r2;
	MR_r1 = MR_ctfield(0, MR_sv(4), 0);
	}
	MR_np_call_localret_ent(fn__ll_backend__middle_rec__contains_only_builtins_expr_1_0,
		ll_backend__middle_rec__match_and_generate_4_0_i8);
MR_def_label(ll_backend__middle_rec__match_and_generate_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(ll_backend__middle_rec__match_and_generate_4_0_i7);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(0, MR_sv(6), 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,1)) {
		MR_GOTO_LAB(ll_backend__middle_rec__match_and_generate_4_0_i7);
	}
	MR_tempr2 = MR_ctfield(3, MR_tempr1, 1);
	if (MR_INT_NE(MR_tempr2,0)) {
		MR_GOTO_LAB(ll_backend__middle_rec__match_and_generate_4_0_i7);
	}
	MR_r1 = MR_ctfield(3, MR_tempr1, 2);
	MR_r2 = MR_sv(7);
	}
	MR_np_call_localret_ent(ll_backend__middle_rec__contains_simple_recursive_call_conj_2_0,
		ll_backend__middle_rec__match_and_generate_4_0_i12);
MR_def_label(ll_backend__middle_rec__match_and_generate_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__middle_rec__match_and_generate_4_0_i7);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(1);
	MR_r6 = MR_sv(7);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(ll_backend__middle_rec__middle_rec_generate_switch_8_0);
MR_def_label(ll_backend__middle_rec__match_and_generate_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_sv(6), 0);
	MR_np_call_localret_ent(fn__ll_backend__middle_rec__contains_only_builtins_expr_1_0,
		ll_backend__middle_rec__match_and_generate_4_0_i16);
MR_def_label(ll_backend__middle_rec__match_and_generate_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(ll_backend__middle_rec__match_and_generate_4_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(0, MR_sv(4), 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,1)) {
		MR_GOTO_LAB(ll_backend__middle_rec__match_and_generate_4_0_i1);
	}
	MR_tempr2 = MR_ctfield(3, MR_tempr1, 1);
	if (MR_INT_NE(MR_tempr2,0)) {
		MR_GOTO_LAB(ll_backend__middle_rec__match_and_generate_4_0_i1);
	}
	MR_r1 = MR_ctfield(3, MR_tempr1, 2);
	MR_r2 = MR_sv(7);
	}
	MR_np_call_localret_ent(ll_backend__middle_rec__contains_simple_recursive_call_conj_2_0,
		ll_backend__middle_rec__match_and_generate_4_0_i20);
MR_def_label(ll_backend__middle_rec__match_and_generate_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__middle_rec__match_and_generate_4_0_i1);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(1);
	MR_r6 = MR_sv(7);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(ll_backend__middle_rec__middle_rec_generate_switch_8_0);
MR_def_label(ll_backend__middle_rec__match_and_generate_4_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__ll_backend__middle_rec_maybe_bunch_0(void)
{
	ll_backend__middle_rec_module0();
	ll_backend__middle_rec_module1();
	ll_backend__middle_rec_module2();
	ll_backend__middle_rec_module3();
	ll_backend__middle_rec_module4();
	ll_backend__middle_rec_module5();
	ll_backend__middle_rec_module6();
	ll_backend__middle_rec_module7();
	ll_backend__middle_rec_module8();
	ll_backend__middle_rec_module9();
	ll_backend__middle_rec_module10();
	ll_backend__middle_rec_module11();
	ll_backend__middle_rec_module12();
	ll_backend__middle_rec_module13();
	ll_backend__middle_rec_module14();
	ll_backend__middle_rec_module15();
	ll_backend__middle_rec_module16();
	ll_backend__middle_rec_module17();
	ll_backend__middle_rec_module18();
	ll_backend__middle_rec_module19();
	ll_backend__middle_rec_module20();
	ll_backend__middle_rec_module21();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__ll_backend__middle_rec__init(void);
void mercury__ll_backend__middle_rec__init_type_tables(void);
void mercury__ll_backend__middle_rec__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__ll_backend__middle_rec__write_out_proc_statics(FILE *fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__ll_backend__middle_rec__init_complexity_procs(void);
#endif

void mercury__ll_backend__middle_rec__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__ll_backend__middle_rec_maybe_bunch_0();
	mercury__ll_backend__middle_rec__init_debugger();
}

void mercury__ll_backend__middle_rec__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}


void mercury__ll_backend__middle_rec__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__ll_backend__middle_rec__write_out_proc_statics(FILE *fp)
{
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__ll_backend__middle_rec__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
