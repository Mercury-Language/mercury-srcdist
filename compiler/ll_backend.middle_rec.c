/*
** Automatically generated from `middle_rec.m'
** by the Mercury compiler,
** version rotd-2012-07-13, configured for x86_64-unknown-linux-gnu.
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
INIT mercury__ll_backend__middle_rec__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 140 "../library/io.int2"
#include "io.mh"

#line 28 "ll_backend.middle_rec.c"
#line 150 "../library/io.int2"
#include "time.mh"

#line 32 "ll_backend.middle_rec.c"
#line 151 "../library/io.int2"
#include "string.mh"

#line 36 "ll_backend.middle_rec.c"
#line 33 "../library/array.int2"
#include "array.mh"

#line 40 "ll_backend.middle_rec.c"
#line 31 "../library/bitmap.int2"
#include "bitmap.mh"

#line 44 "ll_backend.middle_rec.c"
#line 39 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 48 "ll_backend.middle_rec.c"
#line 49 "ll_backend.middle_rec.c"
#include "ll_backend.middle_rec.mh"

#line 52 "ll_backend.middle_rec.c"
#line 53 "ll_backend.middle_rec.c"
#ifndef LL_BACKEND__MIDDLE_REC_DECL_GUARD
#define LL_BACKEND__MIDDLE_REC_DECL_GUARD

#line 57 "ll_backend.middle_rec.c"
#line 58 "ll_backend.middle_rec.c"

#endif
#line 61 "ll_backend.middle_rec.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_0 {
	MR_Word * f1[2];
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
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_2 {
	MR_Integer f1;
	MR_Word * f2;
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_3 {
	MR_Word * f1;
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
	MR_String f2;
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_common_4[];
MR_decl_label4(ll_backend__middle_rec__add_counter_to_livevals_3_0, 28,6,4,10)
MR_decl_label8(ll_backend__middle_rec__contains_simple_recursive_call_conj_2_0, 43,4,3,10,11,13,14,1)
MR_decl_label5(ll_backend__middle_rec__find_labels_2_3_0, 26,3,4,9,7)
MR_decl_label3(ll_backend__middle_rec__find_unused_register_2_0, 2,3,4)
MR_decl_label2(ll_backend__middle_rec__find_unused_register_2_3_0, 3,5)
MR_decl_label3(ll_backend__middle_rec__find_used_registers_3_0, 10,3,4)
MR_decl_label6(ll_backend__middle_rec__find_used_registers_components_3_0, 44,3,40,5,6,9)
MR_decl_label10(ll_backend__middle_rec__find_used_registers_instr_3_0, 3,4,5,7,6,9,10,13,15,17)
MR_decl_label10(ll_backend__middle_rec__find_used_registers_instr_3_0, 18,19,21,23,25,26,29,30,101,32)
MR_decl_label10(ll_backend__middle_rec__find_used_registers_instr_3_0, 31,358,102,35,36,28,40,41,43,45)
MR_decl_label10(ll_backend__middle_rec__find_used_registers_instr_3_0, 48,49,51,55,54,58,57,60,61,63)
MR_decl_label10(ll_backend__middle_rec__find_used_registers_instr_3_0, 65,66,68,70,71,69,73,75,77,79)
MR_decl_label2(ll_backend__middle_rec__find_used_registers_instr_3_0, 81,320)
MR_decl_label5(ll_backend__middle_rec__find_used_registers_lval_3_0, 5,2,9,7,11)
MR_decl_label3(ll_backend__middle_rec__find_used_registers_lvals_3_0, 10,3,4)
MR_decl_label3(ll_backend__middle_rec__find_used_registers_mem_ref_3_0, 11,3,6)
MR_decl_label8(ll_backend__middle_rec__find_used_registers_rval_3_0, 41,4,3,6,7,9,11,13)
MR_decl_label6(ll_backend__middle_rec__generate_downloop_test_3_0, 7,6,9,4,14,3)
MR_decl_label3(ll_backend__middle_rec__insert_foreign_proc_input_registers_3_0, 10,3,4)
MR_decl_label3(ll_backend__middle_rec__insert_foreign_proc_output_registers_3_0, 10,3,4)
MR_decl_label6(ll_backend__middle_rec__match_and_generate_4_0, 10,14,9,18,22,1)
MR_decl_label10(ll_backend__middle_rec__middle_rec_generate_switch_8_0, 2,3,4,5,6,7,8,9,10,11)
MR_decl_label10(ll_backend__middle_rec__middle_rec_generate_switch_8_0, 12,13,14,15,16,17,18,19,20,21)
MR_decl_label10(ll_backend__middle_rec__middle_rec_generate_switch_8_0, 22,23,24,25,26,27,28,29,30,33)
MR_decl_label10(ll_backend__middle_rec__middle_rec_generate_switch_8_0, 34,35,36,38,39,40,41,42,43,44)
MR_decl_label10(ll_backend__middle_rec__middle_rec_generate_switch_8_0, 45,48,49,54,61,65,46,71,74,77)
MR_decl_label10(ll_backend__middle_rec__middle_rec_generate_switch_8_0, 81,82,83,89,99,100,103,104,105,108)
MR_decl_label10(ll_backend__middle_rec__middle_rec_generate_switch_8_0, 109,112,113,114,115,116,117,118,119,92)
MR_decl_label10(ll_backend__middle_rec__middle_rec_generate_switch_8_0, 121,129,130,133,134,135,136,139,140,147)
MR_decl_label10(ll_backend__middle_rec__middle_rec_generate_switch_8_0, 148,150,151,152,153,154,155,156,157,158)
MR_decl_label10(ll_backend__middle_rec__middle_rec_generate_switch_8_0, 159,160,161,162,163,164,165,166,167,168)
MR_decl_label1(ll_backend__middle_rec__middle_rec_generate_switch_8_0, 1)
MR_decl_label5(ll_backend__middle_rec__split_rec_code_3_0, 7,6,4,12,3)
MR_decl_label4(fn__ll_backend__middle_rec__contains_only_builtins_cases_1_0, 18,3,5,4)
MR_decl_label10(fn__ll_backend__middle_rec__contains_only_builtins_expr_1_0, 149,45,3,6,4,8,12,14,16,10)
MR_decl_label10(fn__ll_backend__middle_rec__contains_only_builtins_expr_1_0, 19,21,28,25,24,32,36,39,37,66)
MR_decl_label3(fn__ll_backend__middle_rec__contains_only_builtins_expr_1_0, 42,67,34)
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



MR_decl_entry(require__unexpected_3_0);

MR_BEGIN_MODULE(ll_backend__middle_rec_module0)
	MR_init_entry1(fn__ll_backend__middle_rec__contains_only_builtins_expr_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ll_backend__middle_rec__contains_only_builtins_expr_1_0);
	MR_init_label10(fn__ll_backend__middle_rec__contains_only_builtins_expr_1_0,149,45,3,6,4,8,12,14,16,10)
	MR_init_label10(fn__ll_backend__middle_rec__contains_only_builtins_expr_1_0,19,21,28,25,24,32,36,39,37,66)
	MR_init_label3(fn__ll_backend__middle_rec__contains_only_builtins_expr_1_0,42,67,34)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'contains_only_builtins_expr'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ll_backend__middle_rec__contains_only_builtins_expr_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(fn__ll_backend__middle_rec__contains_only_builtins_expr_1_0,149)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!((((MR_tag(MR_r1) == MR_mktag((MR_Integer) 3)) && ((MR_Integer) MR_tfield(3, MR_r1, 0) == (MR_Integer) 1)) || ((MR_tag(MR_r1) == MR_mktag((MR_Integer) 3)) && ((MR_Integer) MR_tfield(3, MR_r1, 0) == (MR_Integer) 0))))) {
		MR_GOTO_LAB(fn__ll_backend__middle_rec__contains_only_builtins_expr_1_0_i3);
	}
MR_def_label(fn__ll_backend__middle_rec__contains_only_builtins_expr_1_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(fn__ll_backend__middle_rec__contains_only_builtins_expr_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,2)) {
		MR_GOTO_LAB(fn__ll_backend__middle_rec__contains_only_builtins_expr_1_0_i4);
	}
	MR_r2 = MR_tfield(3, MR_r1, 1);
	if (MR_INT_NE(MR_r2,1)) {
		MR_GOTO_LAB(fn__ll_backend__middle_rec__contains_only_builtins_expr_1_0_i6);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(fn__ll_backend__middle_rec__contains_only_builtins_expr_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(3, MR_r1, 2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(fn__ll_backend__middle_rec__contains_only_builtins_list_1_0);
MR_def_label(fn__ll_backend__middle_rec__contains_only_builtins_expr_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,3)) {
		MR_GOTO_LAB(fn__ll_backend__middle_rec__contains_only_builtins_expr_1_0_i8);
	}
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(fn__ll_backend__middle_rec__contains_only_builtins_list_1_0);
MR_def_label(fn__ll_backend__middle_rec__contains_only_builtins_expr_1_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,6)) {
		MR_GOTO_LAB(fn__ll_backend__middle_rec__contains_only_builtins_expr_1_0_i10);
	}
	MR_sv(1) = MR_tfield(3, MR_r1, 3);
	MR_sv(2) = MR_tfield(3, MR_r1, 4);
	MR_r1 = MR_tfield(0, MR_tfield(3, MR_r1, 2), 0);
	MR_np_localcall_lab(fn__ll_backend__middle_rec__contains_only_builtins_expr_1_0,
		fn__ll_backend__middle_rec__contains_only_builtins_expr_1_0_i12);
MR_def_label(fn__ll_backend__middle_rec__contains_only_builtins_expr_1_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(fn__ll_backend__middle_rec__contains_only_builtins_expr_1_0_i45);
	}
	MR_r1 = MR_tfield(0, MR_sv(1), 0);
	MR_np_localcall_lab(fn__ll_backend__middle_rec__contains_only_builtins_expr_1_0,
		fn__ll_backend__middle_rec__contains_only_builtins_expr_1_0_i14);
MR_def_label(fn__ll_backend__middle_rec__contains_only_builtins_expr_1_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(fn__ll_backend__middle_rec__contains_only_builtins_expr_1_0_i45);
	}
	MR_r1 = MR_tfield(0, MR_sv(2), 0);
	MR_np_localcall_lab(fn__ll_backend__middle_rec__contains_only_builtins_expr_1_0,
		fn__ll_backend__middle_rec__contains_only_builtins_expr_1_0_i16);
MR_def_label(fn__ll_backend__middle_rec__contains_only_builtins_expr_1_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(fn__ll_backend__middle_rec__contains_only_builtins_expr_1_0_i45);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(fn__ll_backend__middle_rec__contains_only_builtins_expr_1_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(fn__ll_backend__middle_rec__contains_only_builtins_expr_1_0_i19);
	}
	MR_r1 = MR_tfield(0, MR_body((MR_Integer) MR_r1, (MR_Integer) 0), 0);
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(fn__ll_backend__middle_rec__contains_only_builtins_expr_1_0_i149);
MR_def_label(fn__ll_backend__middle_rec__contains_only_builtins_expr_1_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(fn__ll_backend__middle_rec__contains_only_builtins_expr_1_0_i21);
	}
	MR_r2 = MR_tfield(2, MR_r1, 3);
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(fn__ll_backend__middle_rec__contains_only_builtins_expr_1_0_i45);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(fn__ll_backend__middle_rec__contains_only_builtins_expr_1_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,5)) {
		MR_GOTO_LAB(fn__ll_backend__middle_rec__contains_only_builtins_expr_1_0_i24);
	}
	MR_r2 = MR_tfield(3, MR_r1, 2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(3, MR_r1, 1);
	MR_r3 = MR_tempr1;
	if (MR_RTAGS_TESTR(MR_tempr1,3,4)) {
		MR_GOTO_LAB(fn__ll_backend__middle_rec__contains_only_builtins_expr_1_0_i25);
	}
	MR_r4 = MR_tfield(3, MR_tempr1, 2);
	if (MR_INT_NE(MR_r4,1)) {
		MR_GOTO_LAB(fn__ll_backend__middle_rec__contains_only_builtins_expr_1_0_i28);
	}
	MR_r1 = MR_r2;
	MR_GOTO_LAB(fn__ll_backend__middle_rec__contains_only_builtins_expr_1_0_i66);
	}
MR_def_label(fn__ll_backend__middle_rec__contains_only_builtins_expr_1_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,2)) {
		MR_GOTO_LAB(fn__ll_backend__middle_rec__contains_only_builtins_expr_1_0_i25);
	}
	MR_r1 = MR_r2;
	MR_GOTO_LAB(fn__ll_backend__middle_rec__contains_only_builtins_expr_1_0_i66);
MR_def_label(fn__ll_backend__middle_rec__contains_only_builtins_expr_1_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r2, 0);
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(fn__ll_backend__middle_rec__contains_only_builtins_expr_1_0_i149);
MR_def_label(fn__ll_backend__middle_rec__contains_only_builtins_expr_1_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,4)) {
		MR_GOTO_LAB(fn__ll_backend__middle_rec__contains_only_builtins_expr_1_0_i32);
	}
	MR_r1 = MR_tfield(3, MR_r1, 3);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(fn__ll_backend__middle_rec__contains_only_builtins_cases_1_0);
MR_def_label(fn__ll_backend__middle_rec__contains_only_builtins_expr_1_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(fn__ll_backend__middle_rec__contains_only_builtins_expr_1_0_i34);
	}
	MR_r2 = MR_tfield(1, MR_r1, 3);
	if (MR_PTAG_TESTR(MR_r2,2)) {
		MR_GOTO_LAB(fn__ll_backend__middle_rec__contains_only_builtins_expr_1_0_i36);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(fn__ll_backend__middle_rec__contains_only_builtins_expr_1_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,0)) {
		MR_GOTO_LAB(fn__ll_backend__middle_rec__contains_only_builtins_expr_1_0_i37);
	}
	MR_r3 = MR_tfield(0, MR_r2, 6);
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(fn__ll_backend__middle_rec__contains_only_builtins_expr_1_0_i39);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(fn__ll_backend__middle_rec__contains_only_builtins_expr_1_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(1, MR_r3, 0);
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(fn__ll_backend__middle_rec__contains_only_builtins_expr_1_0_i67);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(fn__ll_backend__middle_rec__contains_only_builtins_expr_1_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(fn__ll_backend__middle_rec__contains_only_builtins_expr_1_0_i42);
	}
MR_def_label(fn__ll_backend__middle_rec__contains_only_builtins_expr_1_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(fn__ll_backend__middle_rec__contains_only_builtins_expr_1_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,1)) {
		MR_GOTO_LAB(fn__ll_backend__middle_rec__contains_only_builtins_expr_1_0_i66);
	}
MR_def_label(fn__ll_backend__middle_rec__contains_only_builtins_expr_1_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(fn__ll_backend__middle_rec__contains_only_builtins_expr_1_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ll_backend.middle_rec", 21);
	MR_r2 = (MR_Word) MR_string_const("function \140ll_backend.middle_rec.contains_only_builtins_expr\'/1", 62);
	MR_r3 = (MR_Word) MR_string_const("shorthand", 9);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__middle_rec_module1)
	MR_init_entry1(fn__ll_backend__middle_rec__contains_only_builtins_cases_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ll_backend__middle_rec__contains_only_builtins_cases_1_0);
	MR_init_label4(fn__ll_backend__middle_rec__contains_only_builtins_cases_1_0,18,3,5,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'contains_only_builtins_cases'/2 mode 0 */
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
	MR_sv(1) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_tfield(0, MR_tfield(0, MR_tfield(1, MR_r1, 0), 2), 0);
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
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ll_backend__middle_rec__contains_only_builtins_list_1_0);
	MR_init_label4(fn__ll_backend__middle_rec__contains_only_builtins_list_1_0,18,3,5,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'contains_only_builtins_list'/2 mode 0 */
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
	MR_sv(1) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_tfield(0, MR_tfield(1, MR_r1, 0), 0);
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
MR_decl_entry(__Unify___hlds__hlds_pred__pred_id_0_0);
MR_decl_entry(ll_backend__code_info__get_proc_id_2_0);

MR_BEGIN_MODULE(ll_backend__middle_rec_module3)
	MR_init_entry1(ll_backend__middle_rec__contains_simple_recursive_call_conj_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__middle_rec__contains_simple_recursive_call_conj_2_0);
	MR_init_label8(ll_backend__middle_rec__contains_simple_recursive_call_conj_2_0,43,4,3,10,11,13,14,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'contains_simple_recursive_call_conj'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__middle_rec__contains_simple_recursive_call_conj_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(ll_backend__middle_rec__contains_simple_recursive_call_conj_2_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__middle_rec__contains_simple_recursive_call_conj_2_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_tfield(1, MR_r1, 0), 0);
	MR_sv(1) = MR_tfield(1, MR_r1, 1);
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
	MR_GOTO_LAB(ll_backend__middle_rec__contains_simple_recursive_call_conj_2_0_i43);
MR_def_label(ll_backend__middle_rec__contains_simple_recursive_call_conj_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(3),2)) {
		MR_GOTO_LAB(ll_backend__middle_rec__contains_simple_recursive_call_conj_2_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_r2 = MR_tfield(2, MR_tempr1, 3);
	if (MR_INT_NE(MR_r2,2)) {
		MR_GOTO_LAB(ll_backend__middle_rec__contains_simple_recursive_call_conj_2_0_i1);
	}
	MR_r2 = MR_tempr1;
	MR_sv(3) = MR_tfield(2, MR_r2, 0);
	MR_sv(4) = MR_tfield(2, MR_r2, 1);
	MR_r1 = MR_sv(2);
	}
	MR_np_call_localret_ent(ll_backend__code_info__get_pred_id_2_0,
		ll_backend__middle_rec__contains_simple_recursive_call_conj_2_0_i10);
MR_def_label(ll_backend__middle_rec__contains_simple_recursive_call_conj_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(__Unify___hlds__hlds_pred__pred_id_0_0,
		ll_backend__middle_rec__contains_simple_recursive_call_conj_2_0_i11);
MR_def_label(ll_backend__middle_rec__contains_simple_recursive_call_conj_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__middle_rec__contains_simple_recursive_call_conj_2_0_i1);
	}
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ll_backend__code_info__get_proc_id_2_0,
		ll_backend__middle_rec__contains_simple_recursive_call_conj_2_0_i13);
MR_def_label(ll_backend__middle_rec__contains_simple_recursive_call_conj_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 != MR_sv(4))) {
		MR_GOTO_LAB(ll_backend__middle_rec__contains_simple_recursive_call_conj_2_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__ll_backend__middle_rec__contains_only_builtins_list_1_0,
		ll_backend__middle_rec__contains_simple_recursive_call_conj_2_0_i14);
MR_def_label(ll_backend__middle_rec__contains_simple_recursive_call_conj_2_0,14)
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

MR_decl_entry(ll_backend__code_util__neg_rval_2_0);

MR_BEGIN_MODULE(ll_backend__middle_rec_module4)
	MR_init_entry1(ll_backend__middle_rec__generate_downloop_test_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__middle_rec__generate_downloop_test_3_0);
	MR_init_label6(ll_backend__middle_rec__generate_downloop_test_3_0,7,6,9,4,14,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'generate_downloop_test'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__middle_rec__generate_downloop_test_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__middle_rec__generate_downloop_test_3_0_i3);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_r3 = MR_tfield(1, MR_r1, 1);
	MR_sv(1) = MR_tfield(1, MR_r1, 0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_sv(1), 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,9)) {
		MR_GOTO_LAB(ll_backend__middle_rec__generate_downloop_test_3_0_i4);
	}
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(ll_backend__middle_rec__generate_downloop_test_3_0_i7);
	}
	MR_sv(1) = MR_r2;
	MR_r1 = MR_tfield(3, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(ll_backend__code_util__neg_rval_2_0,
		ll_backend__middle_rec__generate_downloop_test_3_0_i9);
MR_def_label(ll_backend__middle_rec__generate_downloop_test_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ll_backend.middle_rec", 21);
	MR_sv(1) = MR_r2;
	MR_r2 = (MR_Word) MR_string_const("predicate \140ll_backend.middle_rec.generate_downloop_test\'/3", 58);
	MR_r3 = (MR_Word) MR_string_const("if_val followed by other instructions", 37);
	MR_np_call_localret_ent(require__unexpected_3_0,
		ll_backend__middle_rec__generate_downloop_test_3_0_i6);
MR_def_label(ll_backend__middle_rec__generate_downloop_test_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(ll_backend__code_util__neg_rval_2_0,
		ll_backend__middle_rec__generate_downloop_test_3_0_i9);
MR_def_label(ll_backend__middle_rec__generate_downloop_test_3_0,9)
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
MR_def_label(ll_backend__middle_rec__generate_downloop_test_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_np_localcall_lab(ll_backend__middle_rec__generate_downloop_test_3_0,
		ll_backend__middle_rec__generate_downloop_test_3_0_i14);
MR_def_label(ll_backend__middle_rec__generate_downloop_test_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(2);
	}
MR_def_label(ll_backend__middle_rec__generate_downloop_test_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ll_backend.middle_rec", 21);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ll_backend.middle_rec.generate_downloop_test\'/3", 58);
	MR_r3 = (MR_Word) MR_string_const("empty list", 10);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(ll_backend__opt_util__skip_comments_2_0);

MR_BEGIN_MODULE(ll_backend__middle_rec_module5)
	MR_init_entry1(ll_backend__middle_rec__split_rec_code_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__middle_rec__split_rec_code_3_0);
	MR_init_label5(ll_backend__middle_rec__split_rec_code_3_0,7,6,4,12,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'split_rec_code'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__middle_rec__split_rec_code_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__middle_rec__split_rec_code_3_0_i3);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_r2 = MR_tfield(1, MR_r1, 1);
	MR_sv(1) = MR_tfield(1, MR_r1, 0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_sv(1), 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,3)) {
		MR_GOTO_LAB(ll_backend__middle_rec__split_rec_code_3_0_i4);
	}
	MR_r1 = MR_r2;
	}
	MR_np_call_localret_ent(ll_backend__opt_util__skip_comments_2_0,
		ll_backend__middle_rec__split_rec_code_3_0_i7);
MR_def_label(ll_backend__middle_rec__split_rec_code_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__middle_rec__split_rec_code_3_0_i6);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(0, MR_tfield(1, MR_r1, 0), 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,5)) {
		MR_GOTO_LAB(ll_backend__middle_rec__split_rec_code_3_0_i6);
	}
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_tfield(1, MR_tempr2, 1);
	MR_decr_sp_and_return(2);
	}
MR_def_label(ll_backend__middle_rec__split_rec_code_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ll_backend.middle_rec", 21);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ll_backend.middle_rec.split_rec_code\'/3", 50);
	MR_r3 = (MR_Word) MR_string_const("call not followed by label", 26);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(ll_backend__middle_rec__split_rec_code_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_np_localcall_lab(ll_backend__middle_rec__split_rec_code_3_0,
		ll_backend__middle_rec__split_rec_code_3_0_i12);
MR_def_label(ll_backend__middle_rec__split_rec_code_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(2);
	}
MR_def_label(ll_backend__middle_rec__split_rec_code_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ll_backend.middle_rec", 21);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ll_backend.middle_rec.split_rec_code\'/3", 50);
	MR_r3 = (MR_Word) MR_string_const("did not find call", 17);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_lval_0;
MR_decl_entry(set__insert_3_0);

MR_BEGIN_MODULE(ll_backend__middle_rec_module6)
	MR_init_entry1(ll_backend__middle_rec__add_counter_to_livevals_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__middle_rec__add_counter_to_livevals_3_0);
	MR_init_label4(ll_backend__middle_rec__add_counter_to_livevals_3_0,28,6,4,10)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'add_counter_to_livevals'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__middle_rec__add_counter_to_livevals_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__middle_rec__add_counter_to_livevals_3_0_i28);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(ll_backend__middle_rec__add_counter_to_livevals_3_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(1, MR_r1, 1);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	MR_r4 = MR_tempr1;
	MR_tempr2 = MR_tfield(0, MR_tempr1, 0);
	if (MR_PTAG_TESTR(MR_tempr2,2)) {
		MR_GOTO_LAB(ll_backend__middle_rec__add_counter_to_livevals_3_0_i4);
	}
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_tfield(0, MR_tempr1, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_r3 = MR_tfield(2, MR_tempr2, 0);
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
	MR_r2 = MR_sv(2);
	MR_r1 = MR_sv(1);
	MR_sv(2) = MR_tempr2;
	}
	MR_np_localcall_lab(ll_backend__middle_rec__add_counter_to_livevals_3_0,
		ll_backend__middle_rec__add_counter_to_livevals_3_0_i10);
MR_def_label(ll_backend__middle_rec__add_counter_to_livevals_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_sv(2) = MR_r4;
	MR_np_localcall_lab(ll_backend__middle_rec__add_counter_to_livevals_3_0,
		ll_backend__middle_rec__add_counter_to_livevals_3_0_i10);
MR_def_label(ll_backend__middle_rec__add_counter_to_livevals_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(2);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__middle_rec_module7)
	MR_init_entry1(ll_backend__middle_rec__find_unused_register_2_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__middle_rec__find_unused_register_2_3_0);
	MR_init_label2(ll_backend__middle_rec__find_unused_register_2_3_0,3,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'find_unused_register_2'/3 mode 0 */
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
	MR_r3 = MR_tfield(1, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	if (((MR_Integer) MR_r2 >= (MR_Integer) MR_tempr1)) {
		MR_GOTO_LAB(ll_backend__middle_rec__find_unused_register_2_3_0_i5);
	}
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = (MR_Integer) 0;
	MR_tfield(1, MR_r1, 1) = MR_r2;
	MR_proceed();
	}
MR_def_label(ll_backend__middle_rec__find_unused_register_2_3_0,5)
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
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__middle_rec__find_used_registers_lval_3_0);
	MR_init_label5(ll_backend__middle_rec__find_used_registers_lval_3_0,5,2,9,7,11)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'find_used_registers_lval'/3 mode 0 */
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
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(ll_backend__middle_rec__find_used_registers_lval_3_0_i2);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = (MR_Word) MR_INT_CTOR_ADDR;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tfield(1, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(builtin__copy_2_1,
		ll_backend__middle_rec__find_used_registers_lval_3_0_i5);
MR_def_label(ll_backend__middle_rec__find_used_registers_lval_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(set__insert_3_0);
	}
MR_def_label(ll_backend__middle_rec__find_used_registers_lval_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,9)) {
		MR_GOTO_LAB(ll_backend__middle_rec__find_used_registers_lval_3_0_i7);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(3, MR_r1, 3);
	MR_r1 = MR_tfield(3, MR_r1, 2);
	MR_np_call_localret_ent(ll_backend__middle_rec__find_used_registers_rval_3_0,
		ll_backend__middle_rec__find_used_registers_lval_3_0_i9);
MR_def_label(ll_backend__middle_rec__find_used_registers_lval_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(ll_backend__middle_rec__find_used_registers_rval_3_0);
	}
MR_def_label(ll_backend__middle_rec__find_used_registers_lval_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,12)) {
		MR_GOTO_LAB(ll_backend__middle_rec__find_used_registers_lval_3_0_i11);
	}
	MR_r1 = (MR_Word) MR_string_const("ll_backend.middle_rec", 21);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ll_backend.middle_rec.find_used_registers_lval\'/3", 60);
	MR_r3 = (MR_Word) MR_string_const("lvar", 4);
	MR_np_tailcall_ent(require__unexpected_3_0);
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
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__middle_rec__find_used_registers_rval_3_0);
	MR_init_label8(ll_backend__middle_rec__find_used_registers_rval_3_0,41,4,3,6,7,9,11,13)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'find_used_registers_rval'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__middle_rec__find_used_registers_rval_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
MR_def_label(ll_backend__middle_rec__find_used_registers_rval_3_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,2)) {
		MR_GOTO_LAB(ll_backend__middle_rec__find_used_registers_rval_3_0_i3);
	}
	MR_sv(1) = MR_tfield(3, MR_r1, 3);
	MR_r1 = MR_tfield(3, MR_r1, 2);
	MR_np_localcall_lab(ll_backend__middle_rec__find_used_registers_rval_3_0,
		ll_backend__middle_rec__find_used_registers_rval_3_0_i4);
MR_def_label(ll_backend__middle_rec__find_used_registers_rval_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(2);
	MR_GOTO_LAB(ll_backend__middle_rec__find_used_registers_rval_3_0_i41);
	}
MR_def_label(ll_backend__middle_rec__find_used_registers_rval_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,0)) {
		MR_GOTO_LAB(ll_backend__middle_rec__find_used_registers_rval_3_0_i6);
	}
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(2);
MR_def_label(ll_backend__middle_rec__find_used_registers_rval_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(ll_backend__middle_rec__find_used_registers_rval_3_0_i7);
	}
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(ll_backend__middle_rec__find_used_registers_lval_3_0);
MR_def_label(ll_backend__middle_rec__find_used_registers_rval_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,3)) {
		MR_GOTO_LAB(ll_backend__middle_rec__find_used_registers_rval_3_0_i9);
	}
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(ll_backend__middle_rec__find_used_registers_mem_ref_3_0);
MR_def_label(ll_backend__middle_rec__find_used_registers_rval_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(ll_backend__middle_rec__find_used_registers_rval_3_0_i11);
	}
	MR_r1 = MR_tfield(2, MR_r1, 1);
	MR_succip_word = MR_sv(2);
	MR_GOTO_LAB(ll_backend__middle_rec__find_used_registers_rval_3_0_i41);
MR_def_label(ll_backend__middle_rec__find_used_registers_rval_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,1)) {
		MR_GOTO_LAB(ll_backend__middle_rec__find_used_registers_rval_3_0_i13);
	}
	MR_r1 = MR_tfield(3, MR_r1, 2);
	MR_succip_word = MR_sv(2);
	MR_GOTO_LAB(ll_backend__middle_rec__find_used_registers_rval_3_0_i41);
MR_def_label(ll_backend__middle_rec__find_used_registers_rval_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ll_backend.middle_rec", 21);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ll_backend.middle_rec.find_used_registers_rval\'/3", 60);
	MR_r3 = (MR_Word) MR_string_const("var", 3);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__middle_rec_module10)
	MR_init_entry1(ll_backend__middle_rec__find_used_registers_mem_ref_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__middle_rec__find_used_registers_mem_ref_3_0);
	MR_init_label3(ll_backend__middle_rec__find_used_registers_mem_ref_3_0,11,3,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'find_used_registers_mem_ref'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__middle_rec__find_used_registers_mem_ref_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(ll_backend__middle_rec__find_used_registers_mem_ref_3_0_i3);
	}
MR_def_label(ll_backend__middle_rec__find_used_registers_mem_ref_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_mask_field(MR_r1, 0);
	MR_np_tailcall_ent(ll_backend__middle_rec__find_used_registers_rval_3_0);
MR_def_label(ll_backend__middle_rec__find_used_registers_mem_ref_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(ll_backend__middle_rec__find_used_registers_mem_ref_3_0_i11);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(2, MR_r1, 2);
	MR_r1 = MR_tfield(2, MR_r1, 0);
	MR_np_call_localret_ent(ll_backend__middle_rec__find_used_registers_rval_3_0,
		ll_backend__middle_rec__find_used_registers_mem_ref_3_0_i6);
MR_def_label(ll_backend__middle_rec__find_used_registers_mem_ref_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(ll_backend__middle_rec__find_used_registers_rval_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__middle_rec_module11)
	MR_init_entry1(ll_backend__middle_rec__insert_foreign_proc_input_registers_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__middle_rec__insert_foreign_proc_input_registers_3_0);
	MR_init_label3(ll_backend__middle_rec__insert_foreign_proc_input_registers_3_0,10,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'insert_foreign_proc_input_registers'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__middle_rec__insert_foreign_proc_input_registers_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
MR_def_label(ll_backend__middle_rec__insert_foreign_proc_input_registers_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__middle_rec__insert_foreign_proc_input_registers_3_0_i3);
	}
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(2);
MR_def_label(ll_backend__middle_rec__insert_foreign_proc_input_registers_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_tfield(0, MR_tfield(1, MR_r1, 0), 4);
	MR_np_call_localret_ent(ll_backend__middle_rec__find_used_registers_rval_3_0,
		ll_backend__middle_rec__insert_foreign_proc_input_registers_3_0_i4);
MR_def_label(ll_backend__middle_rec__insert_foreign_proc_input_registers_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(2);
	MR_GOTO_LAB(ll_backend__middle_rec__insert_foreign_proc_input_registers_3_0_i10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__middle_rec_module12)
	MR_init_entry1(ll_backend__middle_rec__insert_foreign_proc_output_registers_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__middle_rec__insert_foreign_proc_output_registers_3_0);
	MR_init_label3(ll_backend__middle_rec__insert_foreign_proc_output_registers_3_0,10,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'insert_foreign_proc_output_registers'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__middle_rec__insert_foreign_proc_output_registers_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
MR_def_label(ll_backend__middle_rec__insert_foreign_proc_output_registers_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__middle_rec__insert_foreign_proc_output_registers_3_0_i3);
	}
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(2);
MR_def_label(ll_backend__middle_rec__insert_foreign_proc_output_registers_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_tfield(0, MR_tfield(1, MR_r1, 0), 0);
	MR_np_call_localret_ent(ll_backend__middle_rec__find_used_registers_lval_3_0,
		ll_backend__middle_rec__insert_foreign_proc_output_registers_3_0_i4);
MR_def_label(ll_backend__middle_rec__insert_foreign_proc_output_registers_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(2);
	MR_GOTO_LAB(ll_backend__middle_rec__insert_foreign_proc_output_registers_3_0_i10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__middle_rec_module13)
	MR_init_entry1(ll_backend__middle_rec__find_used_registers_components_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__middle_rec__find_used_registers_components_3_0);
	MR_init_label6(ll_backend__middle_rec__find_used_registers_components_3_0,44,3,40,5,6,9)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'find_used_registers_components'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__middle_rec__find_used_registers_components_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
MR_def_label(ll_backend__middle_rec__find_used_registers_components_3_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__middle_rec__find_used_registers_components_3_0_i3);
	}
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(2);
MR_def_label(ll_backend__middle_rec__find_used_registers_components_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_tfield(1, MR_r1, 0);
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(ll_backend__middle_rec__find_used_registers_components_3_0_i5);
	}
MR_def_label(ll_backend__middle_rec__find_used_registers_components_3_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(1, MR_r1, 1);
	MR_succip_word = MR_sv(2);
	MR_GOTO_LAB(ll_backend__middle_rec__find_used_registers_components_3_0_i44);
MR_def_label(ll_backend__middle_rec__find_used_registers_components_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r3,1)) {
		MR_GOTO_LAB(ll_backend__middle_rec__find_used_registers_components_3_0_i6);
	}
	MR_sv(1) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_tfield(1, MR_r3, 0);
	MR_np_call_localret_ent(ll_backend__middle_rec__insert_foreign_proc_input_registers_3_0,
		ll_backend__middle_rec__find_used_registers_components_3_0_i9);
MR_def_label(ll_backend__middle_rec__find_used_registers_components_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r3,2)) {
		MR_GOTO_LAB(ll_backend__middle_rec__find_used_registers_components_3_0_i40);
	}
	MR_sv(1) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_tfield(2, MR_r3, 0);
	MR_np_call_localret_ent(ll_backend__middle_rec__insert_foreign_proc_output_registers_3_0,
		ll_backend__middle_rec__find_used_registers_components_3_0_i9);
MR_def_label(ll_backend__middle_rec__find_used_registers_components_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(2);
	MR_GOTO_LAB(ll_backend__middle_rec__find_used_registers_components_3_0_i44);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__middle_rec_module14)
	MR_init_entry1(ll_backend__middle_rec__find_used_registers_lvals_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__middle_rec__find_used_registers_lvals_3_0);
	MR_init_label3(ll_backend__middle_rec__find_used_registers_lvals_3_0,10,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'find_used_registers_lvals'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__middle_rec__find_used_registers_lvals_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
MR_def_label(ll_backend__middle_rec__find_used_registers_lvals_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__middle_rec__find_used_registers_lvals_3_0_i3);
	}
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(2);
MR_def_label(ll_backend__middle_rec__find_used_registers_lvals_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_np_call_localret_ent(ll_backend__middle_rec__find_used_registers_lval_3_0,
		ll_backend__middle_rec__find_used_registers_lvals_3_0_i4);
MR_def_label(ll_backend__middle_rec__find_used_registers_lvals_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(2);
	MR_GOTO_LAB(ll_backend__middle_rec__find_used_registers_lvals_3_0_i10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__middle_rec_module15)
	MR_init_entry1(ll_backend__middle_rec__find_used_registers_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__middle_rec__find_used_registers_3_0);
	MR_init_label3(ll_backend__middle_rec__find_used_registers_3_0,10,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'find_used_registers'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__middle_rec__find_used_registers_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
MR_def_label(ll_backend__middle_rec__find_used_registers_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__middle_rec__find_used_registers_3_0_i3);
	}
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(2);
MR_def_label(ll_backend__middle_rec__find_used_registers_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_tfield(0, MR_tfield(1, MR_r1, 0), 0);
	MR_np_call_localret_ent(ll_backend__middle_rec__find_used_registers_instr_3_0,
		ll_backend__middle_rec__find_used_registers_3_0_i4);
MR_def_label(ll_backend__middle_rec__find_used_registers_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(2);
	MR_GOTO_LAB(ll_backend__middle_rec__find_used_registers_3_0_i10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(set__to_sorted_list_2_0);

MR_BEGIN_MODULE(ll_backend__middle_rec_module16)
	MR_init_entry1(ll_backend__middle_rec__find_used_registers_instr_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__middle_rec__find_used_registers_instr_3_0);
	MR_init_label10(ll_backend__middle_rec__find_used_registers_instr_3_0,3,4,5,7,6,9,10,13,15,17)
	MR_init_label10(ll_backend__middle_rec__find_used_registers_instr_3_0,18,19,21,23,25,26,29,30,101,32)
	MR_init_label10(ll_backend__middle_rec__find_used_registers_instr_3_0,31,358,102,35,36,28,40,41,43,45)
	MR_init_label10(ll_backend__middle_rec__find_used_registers_instr_3_0,48,49,51,55,54,58,57,60,61,63)
	MR_init_label10(ll_backend__middle_rec__find_used_registers_instr_3_0,65,66,68,70,71,69,73,75,77,79)
	MR_init_label2(ll_backend__middle_rec__find_used_registers_instr_3_0,81,320)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'find_used_registers_instr'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__middle_rec__find_used_registers_instr_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,1)) {
		MR_GOTO_LAB(ll_backend__middle_rec__find_used_registers_instr_3_0_i3);
	}
	MR_r1 = MR_r2;
	MR_proceed();
MR_def_label(ll_backend__middle_rec__find_used_registers_instr_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__middle_rec__find_used_registers_instr_3_0_i4);
	}
	MR_r1 = MR_r2;
	MR_proceed();
MR_def_label(ll_backend__middle_rec__find_used_registers_instr_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(ll_backend__middle_rec__find_used_registers_instr_3_0_i5);
	}
	MR_r1 = MR_r2;
	MR_proceed();
MR_def_label(ll_backend__middle_rec__find_used_registers_instr_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(ll_backend__middle_rec__find_used_registers_instr_3_0_i6);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_r2 = MR_tfield(2, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(set__to_sorted_list_2_0,
		ll_backend__middle_rec__find_used_registers_instr_3_0_i7);
MR_def_label(ll_backend__middle_rec__find_used_registers_instr_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(ll_backend__middle_rec__find_used_registers_lvals_3_0);
MR_def_label(ll_backend__middle_rec__find_used_registers_instr_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,8)) {
		MR_GOTO_LAB(ll_backend__middle_rec__find_used_registers_instr_3_0_i9);
	}
	MR_r1 = MR_r2;
	MR_proceed();
MR_def_label(ll_backend__middle_rec__find_used_registers_instr_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,1)) {
		MR_GOTO_LAB(ll_backend__middle_rec__find_used_registers_instr_3_0_i10);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(3, MR_r1, 2);
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_call_localret_ent(ll_backend__middle_rec__find_used_registers_lval_3_0,
		ll_backend__middle_rec__find_used_registers_instr_3_0_i55);
MR_def_label(ll_backend__middle_rec__find_used_registers_instr_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,0)) {
		MR_GOTO_LAB(ll_backend__middle_rec__find_used_registers_instr_3_0_i13);
	}
	MR_r1 = MR_tfield(3, MR_r1, 3);
	MR_np_tailcall_ent(ll_backend__middle_rec__find_used_registers_3_0);
MR_def_label(ll_backend__middle_rec__find_used_registers_instr_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,7)) {
		MR_GOTO_LAB(ll_backend__middle_rec__find_used_registers_instr_3_0_i15);
	}
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_tailcall_ent(ll_backend__middle_rec__find_used_registers_rval_3_0);
MR_def_label(ll_backend__middle_rec__find_used_registers_instr_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,25)) {
		MR_GOTO_LAB(ll_backend__middle_rec__find_used_registers_instr_3_0_i17);
	}
	MR_r1 = MR_r2;
	MR_proceed();
MR_def_label(ll_backend__middle_rec__find_used_registers_instr_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,26)) {
		MR_GOTO_LAB(ll_backend__middle_rec__find_used_registers_instr_3_0_i18);
	}
	MR_r1 = MR_r2;
	MR_proceed();
MR_def_label(ll_backend__middle_rec__find_used_registers_instr_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,27)) {
		MR_GOTO_LAB(ll_backend__middle_rec__find_used_registers_instr_3_0_i19);
	}
	MR_r1 = MR_tfield(3, MR_r1, 2);
	MR_np_tailcall_ent(ll_backend__middle_rec__find_used_registers_components_3_0);
MR_def_label(ll_backend__middle_rec__find_used_registers_instr_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,29)) {
		MR_GOTO_LAB(ll_backend__middle_rec__find_used_registers_instr_3_0_i21);
	}
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_tailcall_ent(ll_backend__middle_rec__find_used_registers_lval_3_0);
MR_def_label(ll_backend__middle_rec__find_used_registers_instr_3_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,15)) {
		MR_GOTO_LAB(ll_backend__middle_rec__find_used_registers_instr_3_0_i23);
	}
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_tailcall_ent(ll_backend__middle_rec__find_used_registers_rval_3_0);
MR_def_label(ll_backend__middle_rec__find_used_registers_instr_3_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,6)) {
		MR_GOTO_LAB(ll_backend__middle_rec__find_used_registers_instr_3_0_i25);
	}
	MR_r1 = MR_r2;
	MR_proceed();
MR_def_label(ll_backend__middle_rec__find_used_registers_instr_3_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,9)) {
		MR_GOTO_LAB(ll_backend__middle_rec__find_used_registers_instr_3_0_i26);
	}
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_tailcall_ent(ll_backend__middle_rec__find_used_registers_rval_3_0);
MR_def_label(ll_backend__middle_rec__find_used_registers_instr_3_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,12)) {
		MR_GOTO_LAB(ll_backend__middle_rec__find_used_registers_instr_3_0_i28);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(3, MR_r1, 7);
	MR_sv(2) = MR_tfield(3, MR_r1, 8);
	MR_sv(3) = MR_tfield(3, MR_r1, 4);
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_call_localret_ent(ll_backend__middle_rec__find_used_registers_lval_3_0,
		ll_backend__middle_rec__find_used_registers_instr_3_0_i29);
MR_def_label(ll_backend__middle_rec__find_used_registers_instr_3_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__middle_rec__find_used_registers_rval_3_0,
		ll_backend__middle_rec__find_used_registers_instr_3_0_i30);
MR_def_label(ll_backend__middle_rec__find_used_registers_instr_3_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(ll_backend__middle_rec__find_used_registers_instr_3_0_i32);
	}
MR_def_label(ll_backend__middle_rec__find_used_registers_instr_3_0,101)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_GOTO_LAB(ll_backend__middle_rec__find_used_registers_instr_3_0_i31);
MR_def_label(ll_backend__middle_rec__find_used_registers_instr_3_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_tfield(1, MR_sv(1), 0);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__middle_rec__find_used_registers_rval_3_0,
		ll_backend__middle_rec__find_used_registers_instr_3_0_i101);
MR_def_label(ll_backend__middle_rec__find_used_registers_instr_3_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(ll_backend__middle_rec__find_used_registers_instr_3_0_i35);
	}
	MR_GOTO_LAB(ll_backend__middle_rec__find_used_registers_instr_3_0_i102);
MR_def_label(ll_backend__middle_rec__find_used_registers_instr_3_0,358)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(ll_backend__middle_rec__find_used_registers_instr_3_0,102)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(4);
MR_def_label(ll_backend__middle_rec__find_used_registers_instr_3_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(1) = MR_tfield(1, MR_tempr1, 1);
	MR_r1 = MR_tfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(ll_backend__middle_rec__find_used_registers_rval_3_0,
		ll_backend__middle_rec__find_used_registers_instr_3_0_i36);
MR_def_label(ll_backend__middle_rec__find_used_registers_instr_3_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(1),0,0)) {
		MR_GOTO_LAB(ll_backend__middle_rec__find_used_registers_instr_3_0_i320);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_tfield(1, MR_sv(1), 0);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(ll_backend__middle_rec__find_used_registers_lval_3_0);
	}
MR_def_label(ll_backend__middle_rec__find_used_registers_instr_3_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,24)) {
		MR_GOTO_LAB(ll_backend__middle_rec__find_used_registers_instr_3_0_i40);
	}
	MR_r1 = MR_r2;
	MR_proceed();
MR_def_label(ll_backend__middle_rec__find_used_registers_instr_3_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,28)) {
		MR_GOTO_LAB(ll_backend__middle_rec__find_used_registers_instr_3_0_i41);
	}
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_tailcall_ent(ll_backend__middle_rec__find_used_registers_lval_3_0);
MR_def_label(ll_backend__middle_rec__find_used_registers_instr_3_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,30)) {
		MR_GOTO_LAB(ll_backend__middle_rec__find_used_registers_instr_3_0_i43);
	}
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_tailcall_ent(ll_backend__middle_rec__find_used_registers_lval_3_0);
MR_def_label(ll_backend__middle_rec__find_used_registers_instr_3_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,2)) {
		MR_GOTO_LAB(ll_backend__middle_rec__find_used_registers_instr_3_0_i45);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(3, MR_r1, 2);
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_call_localret_ent(ll_backend__middle_rec__find_used_registers_lval_3_0,
		ll_backend__middle_rec__find_used_registers_instr_3_0_i55);
MR_def_label(ll_backend__middle_rec__find_used_registers_instr_3_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,5)) {
		MR_GOTO_LAB(ll_backend__middle_rec__find_used_registers_instr_3_0_i48);
	}
	MR_r1 = MR_r2;
	MR_proceed();
MR_def_label(ll_backend__middle_rec__find_used_registers_instr_3_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,31)) {
		MR_GOTO_LAB(ll_backend__middle_rec__find_used_registers_instr_3_0_i49);
	}
	MR_r1 = MR_tfield(3, MR_r1, 2);
	MR_np_tailcall_ent(ll_backend__middle_rec__find_used_registers_lval_3_0);
MR_def_label(ll_backend__middle_rec__find_used_registers_instr_3_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,34)) {
		MR_GOTO_LAB(ll_backend__middle_rec__find_used_registers_instr_3_0_i51);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(3, MR_r1, 2);
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_call_localret_ent(ll_backend__middle_rec__find_used_registers_rval_3_0,
		ll_backend__middle_rec__find_used_registers_instr_3_0_i55);
MR_def_label(ll_backend__middle_rec__find_used_registers_instr_3_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,33)) {
		MR_GOTO_LAB(ll_backend__middle_rec__find_used_registers_instr_3_0_i54);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(3, MR_r1, 2);
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_call_localret_ent(ll_backend__middle_rec__find_used_registers_rval_3_0,
		ll_backend__middle_rec__find_used_registers_instr_3_0_i55);
MR_def_label(ll_backend__middle_rec__find_used_registers_instr_3_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(ll_backend__middle_rec__find_used_registers_rval_3_0);
	}
MR_def_label(ll_backend__middle_rec__find_used_registers_instr_3_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,32)) {
		MR_GOTO_LAB(ll_backend__middle_rec__find_used_registers_instr_3_0_i57);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(3, MR_r1, 2);
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_call_localret_ent(ll_backend__middle_rec__find_used_registers_rval_3_0,
		ll_backend__middle_rec__find_used_registers_instr_3_0_i58);
MR_def_label(ll_backend__middle_rec__find_used_registers_instr_3_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(ll_backend__middle_rec__find_used_registers_lval_3_0);
	}
MR_def_label(ll_backend__middle_rec__find_used_registers_instr_3_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,3)) {
		MR_GOTO_LAB(ll_backend__middle_rec__find_used_registers_instr_3_0_i60);
	}
	MR_r1 = MR_r2;
	MR_proceed();
MR_def_label(ll_backend__middle_rec__find_used_registers_instr_3_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,13)) {
		MR_GOTO_LAB(ll_backend__middle_rec__find_used_registers_instr_3_0_i61);
	}
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_tailcall_ent(ll_backend__middle_rec__find_used_registers_lval_3_0);
MR_def_label(ll_backend__middle_rec__find_used_registers_instr_3_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,22)) {
		MR_GOTO_LAB(ll_backend__middle_rec__find_used_registers_instr_3_0_i63);
	}
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_tailcall_ent(ll_backend__middle_rec__find_used_registers_lval_3_0);
MR_def_label(ll_backend__middle_rec__find_used_registers_instr_3_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,4)) {
		MR_GOTO_LAB(ll_backend__middle_rec__find_used_registers_instr_3_0_i65);
	}
	MR_r1 = MR_r2;
	MR_proceed();
MR_def_label(ll_backend__middle_rec__find_used_registers_instr_3_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,23)) {
		MR_GOTO_LAB(ll_backend__middle_rec__find_used_registers_instr_3_0_i66);
	}
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_tailcall_ent(ll_backend__middle_rec__find_used_registers_rval_3_0);
MR_def_label(ll_backend__middle_rec__find_used_registers_instr_3_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,16)) {
		MR_GOTO_LAB(ll_backend__middle_rec__find_used_registers_instr_3_0_i68);
	}
	MR_r1 = MR_r2;
	MR_proceed();
MR_def_label(ll_backend__middle_rec__find_used_registers_instr_3_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,17)) {
		MR_GOTO_LAB(ll_backend__middle_rec__find_used_registers_instr_3_0_i69);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(3, MR_r1, 4);
	MR_sv(2) = MR_tfield(3, MR_r1, 5);
	MR_r1 = MR_tfield(3, MR_r1, 3);
	MR_np_call_localret_ent(ll_backend__middle_rec__find_used_registers_rval_3_0,
		ll_backend__middle_rec__find_used_registers_instr_3_0_i70);
MR_def_label(ll_backend__middle_rec__find_used_registers_instr_3_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__middle_rec__find_used_registers_lval_3_0,
		ll_backend__middle_rec__find_used_registers_instr_3_0_i71);
MR_def_label(ll_backend__middle_rec__find_used_registers_instr_3_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(ll_backend__middle_rec__find_used_registers_lval_3_0);
	}
MR_def_label(ll_backend__middle_rec__find_used_registers_instr_3_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,18)) {
		MR_GOTO_LAB(ll_backend__middle_rec__find_used_registers_instr_3_0_i73);
	}
	MR_r1 = MR_tfield(3, MR_r1, 3);
	MR_np_tailcall_ent(ll_backend__middle_rec__find_used_registers_rval_3_0);
MR_def_label(ll_backend__middle_rec__find_used_registers_instr_3_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,21)) {
		MR_GOTO_LAB(ll_backend__middle_rec__find_used_registers_instr_3_0_i75);
	}
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_tailcall_ent(ll_backend__middle_rec__find_used_registers_rval_3_0);
MR_def_label(ll_backend__middle_rec__find_used_registers_instr_3_0,75)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,14)) {
		MR_GOTO_LAB(ll_backend__middle_rec__find_used_registers_instr_3_0_i77);
	}
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_tailcall_ent(ll_backend__middle_rec__find_used_registers_rval_3_0);
MR_def_label(ll_backend__middle_rec__find_used_registers_instr_3_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,11)) {
		MR_GOTO_LAB(ll_backend__middle_rec__find_used_registers_instr_3_0_i79);
	}
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_tailcall_ent(ll_backend__middle_rec__find_used_registers_lval_3_0);
MR_def_label(ll_backend__middle_rec__find_used_registers_instr_3_0,79)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,10)) {
		MR_GOTO_LAB(ll_backend__middle_rec__find_used_registers_instr_3_0_i81);
	}
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_tailcall_ent(ll_backend__middle_rec__find_used_registers_lval_3_0);
MR_def_label(ll_backend__middle_rec__find_used_registers_instr_3_0,81)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,20)) {
		MR_GOTO_LAB(ll_backend__middle_rec__find_used_registers_instr_3_0_i358);
	}
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_tailcall_ent(ll_backend__middle_rec__find_used_registers_lval_3_0);
MR_def_label(ll_backend__middle_rec__find_used_registers_instr_3_0,320)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(set__init_1_0);

MR_BEGIN_MODULE(ll_backend__middle_rec_module17)
	MR_init_entry1(ll_backend__middle_rec__find_unused_register_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__middle_rec__find_unused_register_2_0);
	MR_init_label3(ll_backend__middle_rec__find_unused_register_2_0,2,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'find_unused_register'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__middle_rec__find_unused_register_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(set__init_1_0,
		ll_backend__middle_rec__find_unused_register_2_0_i2);
MR_def_label(ll_backend__middle_rec__find_unused_register_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__middle_rec__find_used_registers_3_0,
		ll_backend__middle_rec__find_unused_register_2_0_i3);
MR_def_label(ll_backend__middle_rec__find_unused_register_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(set__to_sorted_list_2_0,
		ll_backend__middle_rec__find_unused_register_2_0_i4);
MR_def_label(ll_backend__middle_rec__find_unused_register_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 1;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(ll_backend__middle_rec__find_unused_register_2_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__middle_rec_module18)
	MR_init_entry1(ll_backend__middle_rec__find_labels_2_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__middle_rec__find_labels_2_3_0);
	MR_init_label5(ll_backend__middle_rec__find_labels_2_3_0,26,3,4,9,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'find_labels_2'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__middle_rec__find_labels_2_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
MR_def_label(ll_backend__middle_rec__find_labels_2_3_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__middle_rec__find_labels_2_3_0_i3);
	}
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(2);
MR_def_label(ll_backend__middle_rec__find_labels_2_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(0, MR_tfield(1, MR_r1, 0), 0);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tfield(1, MR_r1, 1);
	if (MR_RTAGS_TESTR(MR_tempr1,3,5)) {
		MR_GOTO_LAB(ll_backend__middle_rec__find_labels_2_3_0_i4);
	}
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tfield(3, MR_tempr1, 1);
	MR_tfield(1, MR_tempr2, 1) = MR_r2;
	MR_r1 = MR_r4;
	MR_r2 = MR_tempr2;
	MR_succip_word = MR_sv(2);
	MR_GOTO_LAB(ll_backend__middle_rec__find_labels_2_3_0_i26);
	}
MR_def_label(ll_backend__middle_rec__find_labels_2_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,0)) {
		MR_GOTO_LAB(ll_backend__middle_rec__find_labels_2_3_0_i7);
	}
	MR_sv(1) = MR_r4;
	MR_r1 = MR_tfield(3, MR_r3, 3);
	MR_np_localcall_lab(ll_backend__middle_rec__find_labels_2_3_0,
		ll_backend__middle_rec__find_labels_2_3_0_i9);
MR_def_label(ll_backend__middle_rec__find_labels_2_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(2);
	MR_GOTO_LAB(ll_backend__middle_rec__find_labels_2_3_0_i26);
	}
MR_def_label(ll_backend__middle_rec__find_labels_2_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r4;
	MR_succip_word = MR_sv(2);
	MR_GOTO_LAB(ll_backend__middle_rec__find_labels_2_3_0_i26);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__middle_rec_module19)
	MR_init_entry1(ll_backend__middle_rec__find_labels_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__middle_rec__find_labels_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'find_labels'/2 mode 0 */
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
MR_decl_entry(fn__hlds__hlds_llds__explain_stack_slots_2_0);
MR_decl_entry(ll_backend__code_info__get_module_info_2_0);
MR_decl_entry(fn__ll_backend__code_util__make_local_entry_label_4_0);
MR_decl_entry(ll_backend__code_info__pre_goal_update_4_0);
MR_decl_entry(fn__ll_backend__code_info__variable_type_2_0);
MR_decl_entry(fn__ll_backend__code_info__lookup_cheaper_tag_test_2_0);
MR_decl_entry(ll_backend__unify_gen__generate_tag_test_8_0);
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_instruction_0;
MR_decl_entry(fn__cord__list_1_0);
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
MR_decl_entry(fn__f_99_111_114_100_95_95_43_43_2_0);
MR_decl_entry(fn__cord__singleton_1_0);
MR_decl_entry(fn__ll_backend__opt_util__block_refers_to_stack_1_0);
MR_decl_entry(fn__f_108_105_115_116_95_95_43_43_2_0);
MR_decl_entry(ll_backend__code_info__get_next_label_3_0);
MR_decl_entry(ll_backend__code_info__get_total_stackslot_count_2_0);
MR_decl_entry(fn__cord__empty_0_0);
MR_decl_entry(fn__ll_backend__proc_gen__push_msg_3_0);
MR_decl_entry(fn__cord__from_list_1_0);

MR_BEGIN_MODULE(ll_backend__middle_rec_module20)
	MR_init_entry1(ll_backend__middle_rec__middle_rec_generate_switch_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__middle_rec__middle_rec_generate_switch_8_0);
	MR_init_label10(ll_backend__middle_rec__middle_rec_generate_switch_8_0,2,3,4,5,6,7,8,9,10,11)
	MR_init_label10(ll_backend__middle_rec__middle_rec_generate_switch_8_0,12,13,14,15,16,17,18,19,20,21)
	MR_init_label10(ll_backend__middle_rec__middle_rec_generate_switch_8_0,22,23,24,25,26,27,28,29,30,33)
	MR_init_label10(ll_backend__middle_rec__middle_rec_generate_switch_8_0,34,35,36,38,39,40,41,42,43,44)
	MR_init_label10(ll_backend__middle_rec__middle_rec_generate_switch_8_0,45,48,49,54,61,65,46,71,74,77)
	MR_init_label10(ll_backend__middle_rec__middle_rec_generate_switch_8_0,81,82,83,89,99,100,103,104,105,108)
	MR_init_label10(ll_backend__middle_rec__middle_rec_generate_switch_8_0,109,112,113,114,115,116,117,118,119,92)
	MR_init_label10(ll_backend__middle_rec__middle_rec_generate_switch_8_0,121,129,130,133,134,135,136,139,140,147)
	MR_init_label10(ll_backend__middle_rec__middle_rec_generate_switch_8_0,148,150,151,152,153,154,155,156,157,158)
	MR_init_label10(ll_backend__middle_rec__middle_rec_generate_switch_8_0,159,160,161,162,163,164,165,166,167,168)
	MR_init_label1(ll_backend__middle_rec__middle_rec_generate_switch_8_0,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'middle_rec_generate_switch'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__middle_rec__middle_rec_generate_switch_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(21);
	MR_sv(21) = (MR_Word) MR_succip;
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_sv(6) = MR_r3;
	MR_sv(5) = MR_r4;
	MR_sv(16) = MR_r5;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r6;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__code_info__get_stack_slots_2_0,
		ll_backend__middle_rec__middle_rec_generate_switch_8_0_i2);
MR_def_label(ll_backend__middle_rec__middle_rec_generate_switch_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ll_backend__code_info__get_varset_2_0,
		ll_backend__middle_rec__middle_rec_generate_switch_8_0_i3);
MR_def_label(ll_backend__middle_rec__middle_rec_generate_switch_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_llds__explain_stack_slots_2_0,
		ll_backend__middle_rec__middle_rec_generate_switch_8_0_i4);
MR_def_label(ll_backend__middle_rec__middle_rec_generate_switch_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ll_backend__code_info__get_module_info_2_0,
		ll_backend__middle_rec__middle_rec_generate_switch_8_0_i5);
MR_def_label(ll_backend__middle_rec__middle_rec_generate_switch_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ll_backend__code_info__get_pred_id_2_0,
		ll_backend__middle_rec__middle_rec_generate_switch_8_0_i6);
MR_def_label(ll_backend__middle_rec__middle_rec_generate_switch_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ll_backend__code_info__get_proc_id_2_0,
		ll_backend__middle_rec__middle_rec_generate_switch_8_0_i7);
MR_def_label(ll_backend__middle_rec__middle_rec_generate_switch_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(13) = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(12);
	MR_r3 = MR_sv(13);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(fn__ll_backend__code_util__make_local_entry_label_4_0,
		ll_backend__middle_rec__middle_rec_generate_switch_8_0_i8);
MR_def_label(ll_backend__middle_rec__middle_rec_generate_switch_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(16);
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__code_info__pre_goal_update_4_0,
		ll_backend__middle_rec__middle_rec_generate_switch_8_0_i9);
MR_def_label(ll_backend__middle_rec__middle_rec_generate_switch_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(fn__ll_backend__code_info__variable_type_2_0,
		ll_backend__middle_rec__middle_rec_generate_switch_8_0_i10);
MR_def_label(ll_backend__middle_rec__middle_rec_generate_switch_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__ll_backend__code_info__lookup_cheaper_tag_test_2_0,
		ll_backend__middle_rec__middle_rec_generate_switch_8_0_i11);
MR_def_label(ll_backend__middle_rec__middle_rec_generate_switch_8_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	MR_r4 = (MR_Integer) 0;
	MR_r5 = MR_sv(7);
	}
	MR_np_call_localret_ent(ll_backend__unify_gen__generate_tag_test_8_0,
		ll_backend__middle_rec__middle_rec_generate_switch_8_0_i12);
MR_def_label(ll_backend__middle_rec__middle_rec_generate_switch_8_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_sv(8) = MR_r3;
	MR_sv(20) = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r1 = MR_sv(20);
	MR_np_call_localret_ent(fn__cord__list_1_0,
		ll_backend__middle_rec__middle_rec_generate_switch_8_0_i13);
MR_def_label(ll_backend__middle_rec__middle_rec_generate_switch_8_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(16);
	MR_np_call_localret_ent(hlds__hlds_llds__goal_info_get_store_map_2_0,
		ll_backend__middle_rec__middle_rec_generate_switch_8_0_i14);
MR_def_label(ll_backend__middle_rec__middle_rec_generate_switch_8_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(ll_backend__code_info__remember_position_2_0,
		ll_backend__middle_rec__middle_rec_generate_switch_8_0_i15);
MR_def_label(ll_backend__middle_rec__middle_rec_generate_switch_8_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(8);
	}
	MR_np_call_localret_ent(ll_backend__code_gen__generate_goal_5_0,
		ll_backend__middle_rec__middle_rec_generate_switch_8_0_i16);
MR_def_label(ll_backend__middle_rec__middle_rec_generate_switch_8_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(7);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__code_info__generate_branch_end_6_0,
		ll_backend__middle_rec__middle_rec_generate_switch_8_0_i17);
MR_def_label(ll_backend__middle_rec__middle_rec_generate_switch_8_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_sv(9) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_r3;
	}
	MR_np_call_localret_ent(ll_backend__code_info__reset_to_position_3_0,
		ll_backend__middle_rec__middle_rec_generate_switch_8_0_i18);
MR_def_label(ll_backend__middle_rec__middle_rec_generate_switch_8_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__code_gen__generate_goal_5_0,
		ll_backend__middle_rec__middle_rec_generate_switch_8_0_i19);
MR_def_label(ll_backend__middle_rec__middle_rec_generate_switch_8_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(ll_backend__code_info__generate_branch_end_6_0,
		ll_backend__middle_rec__middle_rec_generate_switch_8_0_i20);
MR_def_label(ll_backend__middle_rec__middle_rec_generate_switch_8_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(16);
	MR_sv(16) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_r3;
	}
	MR_np_call_localret_ent(ll_backend__code_info__post_goal_update_3_0,
		ll_backend__middle_rec__middle_rec_generate_switch_8_0_i21);
MR_def_label(ll_backend__middle_rec__middle_rec_generate_switch_8_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__code_info__after_all_branches_4_0,
		ll_backend__middle_rec__middle_rec_generate_switch_8_0_i22);
MR_def_label(ll_backend__middle_rec__middle_rec_generate_switch_8_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_np_call_localret_ent(fn__ll_backend__code_info__get_arginfo_1_0,
		ll_backend__middle_rec__middle_rec_generate_switch_8_0_i23);
MR_def_label(ll_backend__middle_rec__middle_rec_generate_switch_8_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(fn__ll_backend__code_info__get_headvars_1_0,
		ll_backend__middle_rec__middle_rec_generate_switch_8_0_i24);
MR_def_label(ll_backend__middle_rec__middle_rec_generate_switch_8_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, arg_info);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(5);
	}
	MR_np_call_localret_ent(assoc_list__from_corresponding_lists_3_0,
		ll_backend__middle_rec__middle_rec_generate_switch_8_0_i25);
MR_def_label(ll_backend__middle_rec__middle_rec_generate_switch_8_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(ll_backend__code_info__setup_return_5_0,
		ll_backend__middle_rec__middle_rec_generate_switch_8_0_i26);
MR_def_label(ll_backend__middle_rec__middle_rec_generate_switch_8_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_sv(7) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(9);
	MR_sv(9) = MR_r3;
	MR_r1 = MR_sv(20);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(7);
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ll_backend__middle_rec__middle_rec_generate_switch_8_0_i27);
MR_def_label(ll_backend__middle_rec__middle_rec_generate_switch_8_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(20);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ll_backend__middle_rec__middle_rec_generate_switch_8_0_i28);
MR_def_label(ll_backend__middle_rec__middle_rec_generate_switch_8_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(16);
	MR_sv(16) = MR_r1;
	MR_r1 = MR_sv(20);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(7);
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ll_backend__middle_rec__middle_rec_generate_switch_8_0_i29);
MR_def_label(ll_backend__middle_rec__middle_rec_generate_switch_8_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(20);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ll_backend__middle_rec__middle_rec_generate_switch_8_0_i30);
MR_def_label(ll_backend__middle_rec__middle_rec_generate_switch_8_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(5);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_tempr1;
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_string_const("", 0);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(20);
	}
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		ll_backend__middle_rec__middle_rec_generate_switch_8_0_i33);
MR_def_label(ll_backend__middle_rec__middle_rec_generate_switch_8_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(20);
	MR_r2 = MR_sv(16);
	MR_np_call_localret_ent(fn__cord__list_1_0,
		ll_backend__middle_rec__middle_rec_generate_switch_8_0_i34);
MR_def_label(ll_backend__middle_rec__middle_rec_generate_switch_8_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(20);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__cord__list_1_0,
		ll_backend__middle_rec__middle_rec_generate_switch_8_0_i35);
MR_def_label(ll_backend__middle_rec__middle_rec_generate_switch_8_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(16) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(fn__ll_backend__opt_util__block_refers_to_stack_1_0,
		ll_backend__middle_rec__middle_rec_generate_switch_8_0_i36);
MR_def_label(ll_backend__middle_rec__middle_rec_generate_switch_8_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ll_backend__middle_rec__middle_rec_generate_switch_8_0_i1);
	}
	MR_r1 = MR_sv(20);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(16);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__middle_rec__middle_rec_generate_switch_8_0_i38);
MR_def_label(ll_backend__middle_rec__middle_rec_generate_switch_8_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(ll_backend__middle_rec__find_unused_register_2_0,
		ll_backend__middle_rec__middle_rec_generate_switch_8_0_i39);
MR_def_label(ll_backend__middle_rec__middle_rec_generate_switch_8_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(16);
	MR_sv(16) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(ll_backend__middle_rec__split_rec_code_3_0,
		ll_backend__middle_rec__middle_rec_generate_switch_8_0_i40);
MR_def_label(ll_backend__middle_rec__middle_rec_generate_switch_8_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r2;
	MR_r2 = MR_sv(16);
	MR_np_call_localret_ent(ll_backend__middle_rec__add_counter_to_livevals_3_0,
		ll_backend__middle_rec__middle_rec_generate_switch_8_0_i41);
MR_def_label(ll_backend__middle_rec__middle_rec_generate_switch_8_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(ll_backend__code_info__get_next_label_3_0,
		ll_backend__middle_rec__middle_rec_generate_switch_8_0_i42);
MR_def_label(ll_backend__middle_rec__middle_rec_generate_switch_8_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(ll_backend__code_info__get_next_label_3_0,
		ll_backend__middle_rec__middle_rec_generate_switch_8_0_i43);
MR_def_label(ll_backend__middle_rec__middle_rec_generate_switch_8_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_sv(18) = MR_r2;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(ll_backend__code_info__get_total_stackslot_count_2_0,
		ll_backend__middle_rec__middle_rec_generate_switch_8_0_i44);
MR_def_label(ll_backend__middle_rec__middle_rec_generate_switch_8_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(14) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(ll_backend__middle_rec__generate_downloop_test_3_0,
		ll_backend__middle_rec__middle_rec_generate_switch_8_0_i45);
MR_def_label(ll_backend__middle_rec__middle_rec_generate_switch_8_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(14),0)) {
		MR_GOTO_LAB(ll_backend__middle_rec__middle_rec_generate_switch_8_0_i46);
	}
	MR_sv(11) = MR_r1;
	MR_r1 = MR_sv(20);
	MR_np_call_localret_ent(fn__cord__empty_0_0,
		ll_backend__middle_rec__middle_rec_generate_switch_8_0_i48);
MR_def_label(ll_backend__middle_rec__middle_rec_generate_switch_8_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_r1 = MR_sv(20);
	MR_np_call_localret_ent(fn__cord__empty_0_0,
		ll_backend__middle_rec__middle_rec_generate_switch_8_0_i49);
MR_def_label(ll_backend__middle_rec__middle_rec_generate_switch_8_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(16);
	MR_tfield(3, MR_tempr1, 2) = (MR_Word) MR_TAG_COMMON(3,2,0);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_tempr1;
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_string_const("initialize counter register", 27);
	MR_sv(13) = MR_r1;
	MR_sv(17) = (MR_Word) MR_TAG_COMMON(3,2,0);
	MR_r1 = MR_sv(20);
	}
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		ll_backend__middle_rec__middle_rec_generate_switch_8_0_i54);
MR_def_label(ll_backend__middle_rec__middle_rec_generate_switch_8_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_sv(19) = MR_tempr1;
	MR_tempr4 = MR_sv(16);
	MR_tfield(0, MR_tempr1, 0) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_tempr2, 2) = MR_tempr1;
	MR_tfield(3, MR_tempr2, 3) = (MR_Word) MR_TAG_COMMON(3,2,1);
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr3, 1) = MR_tempr4;
	MR_tfield(3, MR_tempr3, 2) = MR_tempr2;
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_tempr3;
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_string_const("increment loop counter", 22);
	MR_sv(14) = MR_r1;
	MR_sv(15) = (MR_Word) MR_TAG_COMMON(3,2,1);
	MR_r1 = MR_sv(20);
	}
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		ll_backend__middle_rec__middle_rec_generate_switch_8_0_i61);
MR_def_label(ll_backend__middle_rec__middle_rec_generate_switch_8_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 1);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(19);
	MR_tfield(3, MR_tempr1, 3) = MR_sv(15);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr2, 1) = MR_sv(16);
	MR_tfield(3, MR_tempr2, 2) = MR_tempr1;
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_tempr2;
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_string_const("decrement loop counter", 22);
	MR_sv(15) = MR_r1;
	MR_r1 = MR_sv(20);
	}
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		ll_backend__middle_rec__middle_rec_generate_switch_8_0_i65);
MR_def_label(ll_backend__middle_rec__middle_rec_generate_switch_8_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 23);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(19);
	MR_tfield(3, MR_tempr1, 3) = MR_sv(17);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(10);
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 9;
	MR_tfield(3, MR_tempr3, 1) = MR_tempr1;
	MR_tfield(3, MR_tempr3, 2) = MR_tempr2;
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_tempr3;
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_string_const("test on upward loop", 19);
	MR_sv(16) = MR_r1;
	MR_r1 = MR_sv(20);
	}
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		ll_backend__middle_rec__middle_rec_generate_switch_8_0_i89);
MR_def_label(ll_backend__middle_rec__middle_rec_generate_switch_8_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(11);
	MR_sv(11) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(12);
	MR_r3 = MR_sv(13);
	}
	MR_np_call_localret_ent(fn__ll_backend__proc_gen__push_msg_3_0,
		ll_backend__middle_rec__middle_rec_generate_switch_8_0_i71);
MR_def_label(ll_backend__middle_rec__middle_rec_generate_switch_8_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 24;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(14);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_tfield(3, MR_tempr1, 3) = (MR_Integer) 1;
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_tempr1;
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_string_const("", 0);
	MR_r1 = MR_sv(20);
	}
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		ll_backend__middle_rec__middle_rec_generate_switch_8_0_i74);
MR_def_label(ll_backend__middle_rec__middle_rec_generate_switch_8_0,74)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 25;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(14);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_tempr1;
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_string_const("", 0);
	MR_sv(12) = MR_r1;
	MR_r1 = MR_sv(20);
	}
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		ll_backend__middle_rec__middle_rec_generate_switch_8_0_i77);
MR_def_label(ll_backend__middle_rec__middle_rec_generate_switch_8_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(16);
	MR_tfield(3, MR_tempr1, 2) = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_tempr1;
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_string_const("initialize counter register", 27);
	MR_sv(13) = MR_r1;
	MR_sv(17) = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_r1 = MR_sv(20);
	}
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		ll_backend__middle_rec__middle_rec_generate_switch_8_0_i81);
MR_def_label(ll_backend__middle_rec__middle_rec_generate_switch_8_0,81)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(14) = MR_r1;
	MR_r1 = MR_sv(20);
	MR_np_call_localret_ent(fn__cord__empty_0_0,
		ll_backend__middle_rec__middle_rec_generate_switch_8_0_i82);
MR_def_label(ll_backend__middle_rec__middle_rec_generate_switch_8_0,82)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(15) = MR_r1;
	MR_r1 = MR_sv(20);
	MR_np_call_localret_ent(fn__cord__empty_0_0,
		ll_backend__middle_rec__middle_rec_generate_switch_8_0_i83);
MR_def_label(ll_backend__middle_rec__middle_rec_generate_switch_8_0,83)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(16);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 23);
	MR_tfield(3, MR_tempr2, 2) = MR_sv(17);
	MR_tfield(3, MR_tempr2, 3) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(10);
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 9;
	MR_tfield(3, MR_tempr3, 1) = MR_tempr2;
	MR_tfield(3, MR_tempr3, 2) = MR_tempr1;
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_tempr3;
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_string_const("test on upward loop", 19);
	MR_sv(16) = MR_r1;
	MR_r1 = MR_sv(20);
	}
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		ll_backend__middle_rec__middle_rec_generate_switch_8_0_i89);
MR_def_label(ll_backend__middle_rec__middle_rec_generate_switch_8_0,89)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(17) = MR_r1;
	MR_r1 = MR_sv(20);
	if (MR_LTAGS_TESTR(MR_sv(7),0,0)) {
		MR_GOTO_LAB(ll_backend__middle_rec__middle_rec_generate_switch_8_0_i92);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_string_const("Procedure entry point", 21);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr3, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr3, 1) = (MR_Word) MR_string_const("", 0);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr2;
	MR_tfield(1, MR_r2, 1) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__cord__from_list_1_0,
		ll_backend__middle_rec__middle_rec_generate_switch_8_0_i99);
MR_def_label(ll_backend__middle_rec__middle_rec_generate_switch_8_0,99)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(20);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__cord__from_list_1_0,
		ll_backend__middle_rec__middle_rec_generate_switch_8_0_i100);
MR_def_label(ll_backend__middle_rec__middle_rec_generate_switch_8_0,100)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(9);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_tempr1;
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_string_const("start of the down loop", 22);
	MR_sv(16) = MR_r1;
	MR_r1 = MR_sv(20);
	}
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		ll_backend__middle_rec__middle_rec_generate_switch_8_0_i103);
MR_def_label(ll_backend__middle_rec__middle_rec_generate_switch_8_0,103)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(20);
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(fn__cord__from_list_1_0,
		ll_backend__middle_rec__middle_rec_generate_switch_8_0_i104);
MR_def_label(ll_backend__middle_rec__middle_rec_generate_switch_8_0,104)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(11);
	MR_sv(11) = MR_r1;
	MR_r1 = MR_sv(20);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__cord__from_list_1_0,
		ll_backend__middle_rec__middle_rec_generate_switch_8_0_i105);
MR_def_label(ll_backend__middle_rec__middle_rec_generate_switch_8_0,105)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(3);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_tempr1;
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_string_const("start of base case", 18);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(20);
	}
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		ll_backend__middle_rec__middle_rec_generate_switch_8_0_i108);
MR_def_label(ll_backend__middle_rec__middle_rec_generate_switch_8_0,108)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(20);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__cord__from_list_1_0,
		ll_backend__middle_rec__middle_rec_generate_switch_8_0_i109);
MR_def_label(ll_backend__middle_rec__middle_rec_generate_switch_8_0,109)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_r1 = MR_sv(20);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,4,0);
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		ll_backend__middle_rec__middle_rec_generate_switch_8_0_i112);
MR_def_label(ll_backend__middle_rec__middle_rec_generate_switch_8_0,112)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(20);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ll_backend__middle_rec__middle_rec_generate_switch_8_0_i113);
MR_def_label(ll_backend__middle_rec__middle_rec_generate_switch_8_0,113)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(20);
	MR_r2 = MR_sv(12);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ll_backend__middle_rec__middle_rec_generate_switch_8_0_i114);
MR_def_label(ll_backend__middle_rec__middle_rec_generate_switch_8_0,114)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(20);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ll_backend__middle_rec__middle_rec_generate_switch_8_0_i115);
MR_def_label(ll_backend__middle_rec__middle_rec_generate_switch_8_0,115)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(20);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ll_backend__middle_rec__middle_rec_generate_switch_8_0_i116);
MR_def_label(ll_backend__middle_rec__middle_rec_generate_switch_8_0,116)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(20);
	MR_r2 = MR_sv(11);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ll_backend__middle_rec__middle_rec_generate_switch_8_0_i117);
MR_def_label(ll_backend__middle_rec__middle_rec_generate_switch_8_0,117)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(20);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ll_backend__middle_rec__middle_rec_generate_switch_8_0_i118);
MR_def_label(ll_backend__middle_rec__middle_rec_generate_switch_8_0,118)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(20);
	MR_r2 = MR_sv(16);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ll_backend__middle_rec__middle_rec_generate_switch_8_0_i119);
MR_def_label(ll_backend__middle_rec__middle_rec_generate_switch_8_0,119)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(20);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ll_backend__middle_rec__middle_rec_generate_switch_8_0_i168);
MR_def_label(ll_backend__middle_rec__middle_rec_generate_switch_8_0,92)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(20) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(ll_backend__middle_rec__find_labels_2_0,
		ll_backend__middle_rec__middle_rec_generate_switch_8_0_i121);
MR_def_label(ll_backend__middle_rec__middle_rec_generate_switch_8_0,121)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__middle_rec__middle_rec_generate_switch_8_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_string_const("Procedure entry point", 21);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr3, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr3, 1) = (MR_Word) MR_string_const("", 0);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr2;
	MR_tfield(1, MR_r2, 1) = MR_tempr1;
	MR_r1 = MR_sv(20);
	}
	MR_np_call_localret_ent(fn__cord__from_list_1_0,
		ll_backend__middle_rec__middle_rec_generate_switch_8_0_i129);
MR_def_label(ll_backend__middle_rec__middle_rec_generate_switch_8_0,129)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(20);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__cord__from_list_1_0,
		ll_backend__middle_rec__middle_rec_generate_switch_8_0_i130);
MR_def_label(ll_backend__middle_rec__middle_rec_generate_switch_8_0,130)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(9);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_tempr1;
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_string_const("start of the down loop", 22);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(20);
	}
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		ll_backend__middle_rec__middle_rec_generate_switch_8_0_i133);
MR_def_label(ll_backend__middle_rec__middle_rec_generate_switch_8_0,133)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(20);
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(fn__cord__from_list_1_0,
		ll_backend__middle_rec__middle_rec_generate_switch_8_0_i134);
MR_def_label(ll_backend__middle_rec__middle_rec_generate_switch_8_0,134)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(11);
	MR_sv(11) = MR_r1;
	MR_r1 = MR_sv(20);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__cord__from_list_1_0,
		ll_backend__middle_rec__middle_rec_generate_switch_8_0_i135);
MR_def_label(ll_backend__middle_rec__middle_rec_generate_switch_8_0,135)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(20);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(fn__cord__from_list_1_0,
		ll_backend__middle_rec__middle_rec_generate_switch_8_0_i136);
MR_def_label(ll_backend__middle_rec__middle_rec_generate_switch_8_0,136)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(10);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_tempr1;
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_string_const("", 0);
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(20);
	}
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		ll_backend__middle_rec__middle_rec_generate_switch_8_0_i139);
MR_def_label(ll_backend__middle_rec__middle_rec_generate_switch_8_0,139)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(20);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__cord__from_list_1_0,
		ll_backend__middle_rec__middle_rec_generate_switch_8_0_i140);
MR_def_label(ll_backend__middle_rec__middle_rec_generate_switch_8_0,140)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_string_const("start of base case", 18);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = (MR_Word) MR_TAG_COMMON(0,4,1);
	MR_tfield(1, MR_r2, 1) = MR_tempr1;
	MR_sv(3) = MR_r1;
	MR_sv(10) = (MR_Word) MR_TAG_COMMON(3,2,2);
	MR_r1 = MR_sv(20);
	}
	MR_np_call_localret_ent(fn__cord__from_list_1_0,
		ll_backend__middle_rec__middle_rec_generate_switch_8_0_i147);
MR_def_label(ll_backend__middle_rec__middle_rec_generate_switch_8_0,147)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(20);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__cord__from_list_1_0,
		ll_backend__middle_rec__middle_rec_generate_switch_8_0_i148);
MR_def_label(ll_backend__middle_rec__middle_rec_generate_switch_8_0,148)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(20);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,4,0);
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		ll_backend__middle_rec__middle_rec_generate_switch_8_0_i150);
MR_def_label(ll_backend__middle_rec__middle_rec_generate_switch_8_0,150)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(20);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ll_backend__middle_rec__middle_rec_generate_switch_8_0_i151);
MR_def_label(ll_backend__middle_rec__middle_rec_generate_switch_8_0,151)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(20);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ll_backend__middle_rec__middle_rec_generate_switch_8_0_i152);
MR_def_label(ll_backend__middle_rec__middle_rec_generate_switch_8_0,152)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(20);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ll_backend__middle_rec__middle_rec_generate_switch_8_0_i153);
MR_def_label(ll_backend__middle_rec__middle_rec_generate_switch_8_0,153)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(20);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ll_backend__middle_rec__middle_rec_generate_switch_8_0_i154);
MR_def_label(ll_backend__middle_rec__middle_rec_generate_switch_8_0,154)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(20);
	MR_r2 = MR_sv(17);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ll_backend__middle_rec__middle_rec_generate_switch_8_0_i155);
MR_def_label(ll_backend__middle_rec__middle_rec_generate_switch_8_0,155)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(20);
	MR_r2 = MR_sv(16);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ll_backend__middle_rec__middle_rec_generate_switch_8_0_i156);
MR_def_label(ll_backend__middle_rec__middle_rec_generate_switch_8_0,156)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(20);
	MR_r2 = MR_sv(13);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ll_backend__middle_rec__middle_rec_generate_switch_8_0_i157);
MR_def_label(ll_backend__middle_rec__middle_rec_generate_switch_8_0,157)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(20);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ll_backend__middle_rec__middle_rec_generate_switch_8_0_i158);
MR_def_label(ll_backend__middle_rec__middle_rec_generate_switch_8_0,158)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(20);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ll_backend__middle_rec__middle_rec_generate_switch_8_0_i159);
MR_def_label(ll_backend__middle_rec__middle_rec_generate_switch_8_0,159)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(20);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ll_backend__middle_rec__middle_rec_generate_switch_8_0_i160);
MR_def_label(ll_backend__middle_rec__middle_rec_generate_switch_8_0,160)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(20);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ll_backend__middle_rec__middle_rec_generate_switch_8_0_i161);
MR_def_label(ll_backend__middle_rec__middle_rec_generate_switch_8_0,161)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(20);
	MR_r2 = MR_sv(11);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ll_backend__middle_rec__middle_rec_generate_switch_8_0_i162);
MR_def_label(ll_backend__middle_rec__middle_rec_generate_switch_8_0,162)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(20);
	MR_r2 = MR_sv(15);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ll_backend__middle_rec__middle_rec_generate_switch_8_0_i163);
MR_def_label(ll_backend__middle_rec__middle_rec_generate_switch_8_0,163)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(20);
	MR_r2 = MR_sv(12);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ll_backend__middle_rec__middle_rec_generate_switch_8_0_i164);
MR_def_label(ll_backend__middle_rec__middle_rec_generate_switch_8_0,164)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(20);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ll_backend__middle_rec__middle_rec_generate_switch_8_0_i165);
MR_def_label(ll_backend__middle_rec__middle_rec_generate_switch_8_0,165)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(20);
	MR_r2 = MR_sv(14);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ll_backend__middle_rec__middle_rec_generate_switch_8_0_i166);
MR_def_label(ll_backend__middle_rec__middle_rec_generate_switch_8_0,166)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(20);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ll_backend__middle_rec__middle_rec_generate_switch_8_0_i167);
MR_def_label(ll_backend__middle_rec__middle_rec_generate_switch_8_0,167)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(20);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ll_backend__middle_rec__middle_rec_generate_switch_8_0_i168);
MR_def_label(ll_backend__middle_rec__middle_rec_generate_switch_8_0,168)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r3 = MR_sv(18);
	MR_succip_word = MR_sv(21);
	MR_decr_sp(21);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ll_backend__middle_rec__middle_rec_generate_switch_8_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(21);
	MR_decr_sp(21);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__middle_rec_module21)
	MR_init_entry1(ll_backend__middle_rec__match_and_generate_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__middle_rec__match_and_generate_4_0);
	MR_init_label6(ll_backend__middle_rec__match_and_generate_4_0,10,14,9,18,22,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'match_and_generate'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__middle_rec__match_and_generate_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr1 = MR_tfield(0, MR_r1, 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,4)) {
		MR_GOTO_LAB(ll_backend__middle_rec__match_and_generate_4_0_i1);
	}
	MR_tempr2 = MR_tfield(3, MR_tempr1, 2);
	if (MR_INT_NE(MR_tempr2,1)) {
		MR_GOTO_LAB(ll_backend__middle_rec__match_and_generate_4_0_i1);
	}
	MR_tempr2 = MR_tfield(3, MR_tempr1, 3);
	if (MR_LTAGS_TEST(MR_tempr2,0,0)) {
		MR_GOTO_LAB(ll_backend__middle_rec__match_and_generate_4_0_i1);
	}
	MR_tempr3 = MR_tfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TEST(MR_tempr3,0,0)) {
		MR_GOTO_LAB(ll_backend__middle_rec__match_and_generate_4_0_i1);
	}
	MR_tempr4 = MR_tfield(1, MR_tempr3, 1);
	if (MR_LTAGS_TESTR(MR_tempr4,0,0)) {
		MR_GOTO_LAB(ll_backend__middle_rec__match_and_generate_4_0_i1);
	}
	MR_tempr5 = MR_tfield(1, MR_tempr2, 0);
	MR_tempr4 = MR_tfield(0, MR_tempr5, 1);
	if (MR_LTAGS_TESTR(MR_tempr4,0,0)) {
		MR_GOTO_LAB(ll_backend__middle_rec__match_and_generate_4_0_i1);
	}
	MR_tempr4 = MR_tfield(1, MR_tempr3, 0);
	MR_tempr2 = MR_tfield(0, MR_tempr4, 1);
	if (MR_LTAGS_TESTR(MR_tempr2,0,0)) {
		MR_GOTO_LAB(ll_backend__middle_rec__match_and_generate_4_0_i1);
	}
	MR_sv(6) = MR_tfield(0, MR_tempr4, 2);
	MR_sv(5) = MR_tfield(0, MR_tempr4, 0);
	MR_sv(4) = MR_tfield(0, MR_tempr5, 2);
	MR_sv(2) = MR_tfield(3, MR_tempr1, 1);
	MR_sv(1) = MR_tfield(0, MR_r1, 1);
	MR_sv(3) = MR_tfield(0, MR_tempr5, 0);
	MR_sv(7) = MR_r2;
	MR_r1 = MR_tfield(0, MR_sv(4), 0);
	}
	MR_np_call_localret_ent(fn__ll_backend__middle_rec__contains_only_builtins_expr_1_0,
		ll_backend__middle_rec__match_and_generate_4_0_i10);
MR_def_label(ll_backend__middle_rec__match_and_generate_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(ll_backend__middle_rec__match_and_generate_4_0_i9);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(0, MR_sv(6), 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,2)) {
		MR_GOTO_LAB(ll_backend__middle_rec__match_and_generate_4_0_i9);
	}
	MR_tempr2 = MR_tfield(3, MR_tempr1, 1);
	if (MR_INT_NE(MR_tempr2,0)) {
		MR_GOTO_LAB(ll_backend__middle_rec__match_and_generate_4_0_i9);
	}
	MR_r1 = MR_tfield(3, MR_tempr1, 2);
	MR_r2 = MR_sv(7);
	}
	MR_np_call_localret_ent(ll_backend__middle_rec__contains_simple_recursive_call_conj_2_0,
		ll_backend__middle_rec__match_and_generate_4_0_i14);
MR_def_label(ll_backend__middle_rec__match_and_generate_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__middle_rec__match_and_generate_4_0_i9);
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
MR_def_label(ll_backend__middle_rec__match_and_generate_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_sv(6), 0);
	MR_np_call_localret_ent(fn__ll_backend__middle_rec__contains_only_builtins_expr_1_0,
		ll_backend__middle_rec__match_and_generate_4_0_i18);
MR_def_label(ll_backend__middle_rec__match_and_generate_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(ll_backend__middle_rec__match_and_generate_4_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(0, MR_sv(4), 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,2)) {
		MR_GOTO_LAB(ll_backend__middle_rec__match_and_generate_4_0_i1);
	}
	MR_tempr2 = MR_tfield(3, MR_tempr1, 1);
	if (MR_INT_NE(MR_tempr2,0)) {
		MR_GOTO_LAB(ll_backend__middle_rec__match_and_generate_4_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_tempr1, 2);
	MR_r2 = MR_sv(7);
	}
	MR_np_call_localret_ent(ll_backend__middle_rec__contains_simple_recursive_call_conj_2_0,
		ll_backend__middle_rec__match_and_generate_4_0_i22);
MR_def_label(ll_backend__middle_rec__match_and_generate_4_0,22)
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
void mercury__ll_backend__middle_rec__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__ll_backend__middle_rec__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__ll_backend__middle_rec__init_threadscope_string_table(void);
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

void mercury__ll_backend__middle_rec__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__ll_backend__middle_rec);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__ll_backend__middle_rec__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__ll_backend__middle_rec__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
