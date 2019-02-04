/*
** Automatically generated from `labelopt.m'
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
INIT mercury__ll_backend__labelopt__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 136 "../library/io.int2"
#include "io.mh"

#line 27 "ll_backend.labelopt.c"
#line 144 "../library/io.int2"
#include "string.mh"

#line 31 "ll_backend.labelopt.c"
#line 33 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 35 "ll_backend.labelopt.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 39 "ll_backend.labelopt.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 43 "ll_backend.labelopt.c"
#line 31 "../library/array.int2"
#include "array.mh"

#line 47 "ll_backend.labelopt.c"
#line 48 "ll_backend.labelopt.c"
#include "ll_backend.labelopt.mh"

#line 51 "ll_backend.labelopt.c"
#line 52 "ll_backend.labelopt.c"
#ifndef LL_BACKEND__LABELOPT_DECL_GUARD
#define LL_BACKEND__LABELOPT_DECL_GUARD

#line 56 "ll_backend.labelopt.c"
#line 57 "ll_backend.labelopt.c"

#endif
#line 60 "ll_backend.labelopt.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif
MR_decl_label4(ll_backend__labelopt__build_useset_3_0, 11,3,4,5)
MR_decl_label4(ll_backend__labelopt__labelopt_main_5_0, 2,3,4,5)
MR_decl_label8(ll_backend__labelopt__opt_labels_in_instr_list_2_7_0, 59,3,12,9,14,8,6,4)
MR_decl_label3(ll_backend__labelopt__opt_labels_in_instr_list_2_7_0, 19,21,23)
MR_def_extern_entry(ll_backend__labelopt__build_useset_3_0)
MR_decl_static(ll_backend__labelopt__opt_labels_in_instr_list_2_7_0)
MR_def_extern_entry(ll_backend__labelopt__labelopt_main_5_0)

MR_decl_entry(ll_backend__opt_util__instr_labels_3_0);
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_label_0;
MR_decl_entry(svset__insert_list_3_0);

MR_BEGIN_MODULE(ll_backend__labelopt_module0)
	MR_init_entry1(ll_backend__labelopt__build_useset_3_0);
	MR_init_label4(ll_backend__labelopt__build_useset_3_0,11,3,4,5)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'build_useset'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__labelopt__build_useset_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(ll_backend__labelopt__build_useset_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__labelopt__build_useset_3_0_i3);
	}
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(3);
MR_def_label(ll_backend__labelopt__build_useset_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = MR_ctfield(0, MR_ctfield(1, MR_r1, 0), 0);
	MR_np_call_localret_ent(ll_backend__opt_util__instr_labels_3_0,
		ll_backend__labelopt__build_useset_3_0_i4);
MR_def_label(ll_backend__labelopt__build_useset_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	}
	MR_np_call_localret_ent(svset__insert_list_3_0,
		ll_backend__labelopt__build_useset_3_0_i5);
MR_def_label(ll_backend__labelopt__build_useset_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(ll_backend__labelopt__build_useset_3_0_i11);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(set__member_2_0);
MR_decl_entry(fn__ll_backend__opt_util__can_instr_fall_through_1_0);

MR_BEGIN_MODULE(ll_backend__labelopt_module1)
	MR_init_entry1(ll_backend__labelopt__opt_labels_in_instr_list_2_7_0);
	MR_init_label8(ll_backend__labelopt__opt_labels_in_instr_list_2_7_0,59,3,12,9,14,8,6,4)
	MR_init_label3(ll_backend__labelopt__opt_labels_in_instr_list_2_7_0,19,21,23)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'opt_labels_in_instr_list_2'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__labelopt__opt_labels_in_instr_list_2_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
MR_def_label(ll_backend__labelopt__opt_labels_in_instr_list_2_7_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__labelopt__opt_labels_in_instr_list_2_7_0_i3);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_decr_sp_and_return(7);
MR_def_label(ll_backend__labelopt__opt_labels_in_instr_list_2_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r1;
	MR_tempr1 = MR_ctfield(0, MR_ctfield(1, MR_tempr3, 0), 0);
	MR_r6 = MR_tempr1;
	MR_r7 = MR_ctfield(1, MR_tempr3, 1);
	MR_sv(5) = MR_ctfield(1, MR_tempr3, 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,5)) {
		MR_GOTO_LAB(ll_backend__labelopt__opt_labels_in_instr_list_2_7_0_i4);
	}
	MR_tempr2 = MR_ctfield(3, MR_tempr1, 1);
	MR_r8 = MR_tempr2;
	if (MR_PTAG_TESTR(MR_tempr2,1)) {
		MR_GOTO_LAB(ll_backend__labelopt__opt_labels_in_instr_list_2_7_0_i9);
	}
	MR_r6 = MR_ctfield(1, MR_tempr2, 0);
	if (MR_INT_NE(MR_r6,2)) {
		MR_GOTO_LAB(ll_backend__labelopt__opt_labels_in_instr_list_2_7_0_i12);
	}
	MR_sv(1) = MR_r2;
	MR_sv(3) = MR_r4;
	MR_r1 = MR_r7;
	MR_r2 = MR_tempr2;
	MR_GOTO_LAB(ll_backend__labelopt__opt_labels_in_instr_list_2_7_0_i8);
	}
MR_def_label(ll_backend__labelopt__opt_labels_in_instr_list_2_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r6,1)) {
		MR_GOTO_LAB(ll_backend__labelopt__opt_labels_in_instr_list_2_7_0_i9);
	}
	MR_sv(1) = MR_r2;
	MR_sv(3) = MR_r4;
	MR_r1 = MR_r7;
	MR_r2 = MR_r8;
	MR_GOTO_LAB(ll_backend__labelopt__opt_labels_in_instr_list_2_7_0_i8);
MR_def_label(ll_backend__labelopt__opt_labels_in_instr_list_2_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(4) = MR_tempr1;
	MR_sv(6) = MR_r7;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r2 = MR_r8;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(set__member_2_0,
		ll_backend__labelopt__opt_labels_in_instr_list_2_7_0_i14);
MR_def_label(ll_backend__labelopt__opt_labels_in_instr_list_2_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__labelopt__opt_labels_in_instr_list_2_7_0_i6);
	}
	MR_r3 = MR_sv(2);
	MR_r5 = MR_sv(4);
	MR_r1 = MR_sv(6);
MR_def_label(ll_backend__labelopt__opt_labels_in_instr_list_2_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(1);
	MR_r4 = (MR_Integer) 1;
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(ll_backend__labelopt__opt_labels_in_instr_list_2_7_0_i59);
	}
MR_def_label(ll_backend__labelopt__opt_labels_in_instr_list_2_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_r1 = MR_tempr1;
	MR_r3 = (MR_Integer) 1;
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(ll_backend__labelopt__opt_labels_in_instr_list_2_7_0_i59);
	}
MR_def_label(ll_backend__labelopt__opt_labels_in_instr_list_2_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,0)) {
		MR_GOTO_LAB(ll_backend__labelopt__opt_labels_in_instr_list_2_7_0_i19);
	}
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(6) = MR_r7;
	MR_r1 = MR_r6;
	MR_sv(1) = MR_r2;
	MR_sv(2) = (MR_Integer) 1;
	MR_np_call_localret_ent(fn__ll_backend__opt_util__can_instr_fall_through_1_0,
		ll_backend__labelopt__opt_labels_in_instr_list_2_7_0_i21);
MR_def_label(ll_backend__labelopt__opt_labels_in_instr_list_2_7_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_sv(1) = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(6) = MR_r7;
	MR_r1 = MR_r6;
	MR_sv(2) = MR_r3;
	}
	MR_np_call_localret_ent(fn__ll_backend__opt_util__can_instr_fall_through_1_0,
		ll_backend__labelopt__opt_labels_in_instr_list_2_7_0_i21);
MR_def_label(ll_backend__labelopt__opt_labels_in_instr_list_2_7_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ll_backend__labelopt__opt_labels_in_instr_list_2_7_0_i23);
	}
	MR_r5 = MR_sv(4);
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = (MR_Integer) 0;
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(ll_backend__labelopt__opt_labels_in_instr_list_2_7_0_i59);
MR_def_label(ll_backend__labelopt__opt_labels_in_instr_list_2_7_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_sv(4);
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(ll_backend__labelopt__opt_labels_in_instr_list_2_7_0_i59);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_instruction_0;
MR_decl_entry(list__reverse_2_0);

MR_BEGIN_MODULE(ll_backend__labelopt_module2)
	MR_init_entry1(ll_backend__labelopt__labelopt_main_5_0);
	MR_init_label4(ll_backend__labelopt__labelopt_main_5_0,2,3,4,5)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'labelopt_main'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__labelopt__labelopt_main_5_0);
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
	MR_np_call_localret_ent(ll_backend__labelopt__build_useset_3_0,
		ll_backend__labelopt__labelopt_main_5_0_i2);
MR_def_label(ll_backend__labelopt__labelopt_main_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = (MR_Integer) 1;
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__labelopt__opt_labels_in_instr_list_2_7_0,
		ll_backend__labelopt__labelopt_main_5_0_i3);
MR_def_label(ll_backend__labelopt__labelopt_main_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__reverse_2_0,
		ll_backend__labelopt__labelopt_main_5_0_i4);
MR_def_label(ll_backend__labelopt__labelopt_main_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),1)) {
		MR_GOTO_LAB(ll_backend__labelopt__labelopt_main_5_0_i5);
	}
	if (MR_INT_NE(MR_sv(3),1)) {
		MR_GOTO_LAB(ll_backend__labelopt__labelopt_main_5_0_i5);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_localcall_lab(ll_backend__labelopt__labelopt_main_5_0,
		ll_backend__labelopt__labelopt_main_5_0_i5);
MR_def_label(ll_backend__labelopt__labelopt_main_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__ll_backend__labelopt_maybe_bunch_0(void)
{
	ll_backend__labelopt_module0();
	ll_backend__labelopt_module1();
	ll_backend__labelopt_module2();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__ll_backend__labelopt__init(void);
void mercury__ll_backend__labelopt__init_type_tables(void);
void mercury__ll_backend__labelopt__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__ll_backend__labelopt__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__ll_backend__labelopt__init_complexity_procs(void);
#endif

void mercury__ll_backend__labelopt__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__ll_backend__labelopt_maybe_bunch_0();
	mercury__ll_backend__labelopt__init_debugger();
}

void mercury__ll_backend__labelopt__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}


void mercury__ll_backend__labelopt__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__ll_backend__labelopt__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__ll_backend__labelopt);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__ll_backend__labelopt__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
