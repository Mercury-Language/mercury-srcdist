/*
** Automatically generated from `dupproc.m'
** by the Mercury compiler,
** version rotd-2007-09-21, configured for i686-pc-linux-gnu.
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
INIT mercury__ll_backend__dupproc__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 134 "../library/io.int2"
#include "io.mh"

#line 27 "ll_backend.dupproc.c"
#line 142 "../library/io.int2"
#include "string.mh"

#line 31 "ll_backend.dupproc.c"
#line 87 "../library/table_builtin.int2"
#include "table_builtin.mh"

#line 35 "ll_backend.dupproc.c"
#line 33 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 39 "ll_backend.dupproc.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 43 "ll_backend.dupproc.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 47 "ll_backend.dupproc.c"
#line 31 "../library/array.int2"
#include "array.mh"

#line 51 "ll_backend.dupproc.c"
#line 52 "ll_backend.dupproc.c"
#include "ll_backend.dupproc.mh"

#line 55 "ll_backend.dupproc.c"
#line 56 "ll_backend.dupproc.c"
#ifndef LL_BACKEND__DUPPROC_DECL_GUARD
#define LL_BACKEND__DUPPROC_DECL_GUARD

#line 60 "ll_backend.dupproc.c"
#line 61 "ll_backend.dupproc.c"

#endif
#line 64 "ll_backend.dupproc.c"

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
};
MR_STATIC_LINKAGE const struct mercury_type_0 mercury_common_0[];

struct mercury_type_1 {
	MR_Word * f1;
	MR_Code * f2;
	MR_Integer f3;
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

struct mercury_type_2 {
	MR_Word * f1[3];
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];
MR_decl_label1(ll_backend__dupproc__disallowed_instr_1_0, 2)
MR_decl_label8(ll_backend__dupproc__eliminate_dup_procs_5_0, 7,9,10,11,12,14,15,16)
MR_decl_label6(ll_backend__dupproc__eliminate_dup_procs_5_0, 4,5,17,18,20,3)
MR_decl_label5(ll_backend__dupproc__eliminate_duplicate_procs_4_0, 3,21,6,7,8)
MR_decl_label6(ll_backend__dupproc__find_matching_model_proc_5_0, 21,3,4,6,5,1)
MR_decl_label8(ll_backend__dupproc__standardize_code_addr_3_0, 60,15,13,19,61,24,23,59)
MR_decl_label8(ll_backend__dupproc__standardize_instr_3_0, 78,8,79,10,80,12,81,14)
MR_decl_label8(ll_backend__dupproc__standardize_instr_3_0, 82,16,17,83,20,21,84,23)
MR_decl_label8(ll_backend__dupproc__standardize_instr_3_0, 85,25,86,27,87,30,31,46)
MR_decl_label4(ll_backend__dupproc__standardize_instr_3_0, 88,52,89,54)
MR_decl_label3(ll_backend__dupproc__standardize_instrs_3_0, 4,5,3)
MR_decl_label4(ll_backend__dupproc__standardize_label_3_0, 5,3,9,8)
MR_decl_label6(ll_backend__dupproc__standardize_labels_3_0, 7,5,11,10,14,3)
MR_decl_label2(ll_backend__dupproc__standardize_maybe_code_addr_3_0, 12,4)
MR_decl_label1(ll_backend__dupproc__standardize_proc_3_0, 2)
MR_decl_label8(ll_backend__dupproc__standardize_rval_3_0, 5,8,26,27,57,24,9,12)
MR_decl_label3(ll_backend__dupproc__standardize_rval_3_0, 16,21,55)
MR_decl_static(ll_backend__dupproc__standardize_label_3_0)
MR_decl_static(ll_backend__dupproc__standardize_labels_3_0)
MR_decl_static(ll_backend__dupproc__standardize_code_addr_3_0)
MR_decl_static(ll_backend__dupproc__standardize_maybe_code_addr_3_0)
MR_decl_static(ll_backend__dupproc__standardize_rval_3_0)
MR_decl_static(ll_backend__dupproc__standardize_instrs_3_0)
MR_decl_static(ll_backend__dupproc__standardize_instr_3_0)
MR_decl_static(ll_backend__dupproc__standardize_proc_3_0)
MR_decl_static(ll_backend__dupproc__find_matching_model_proc_5_0)
MR_decl_static(ll_backend__dupproc__eliminate_dup_procs_5_0)
MR_def_extern_entry(ll_backend__dupproc__eliminate_duplicate_procs_4_0)
MR_decl_static(ll_backend__dupproc__disallowed_instr_1_0)

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__dupproc__eliminate_dup_procs_5_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_instruction_0;
static const struct mercury_type_0 mercury_common_0[1] =
{
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__dupproc__eliminate_dup_procs_5_0_1,
(MR_Word *) (MR_Integer) 0,
1,
MR_CTOR0_ADDR(ll_backend__llds, instruction)
},
};

static const struct mercury_type_1 mercury_common_1[1] =
{
{
MR_COMMON(0,0),
MR_ENTRY_AP(ll_backend__dupproc__disallowed_instr_1_0),
0
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_pair__type_ctor_info_pair_2;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__prim_data__type_ctor_info_proc_label_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_c_procedure_0;
static const struct mercury_type_2 mercury_common_2[1] =
{
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(mdbcomp__prim_data, proc_label),
MR_CTOR0_ADDR(ll_backend__llds, c_procedure)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__dupproc__eliminate_dup_procs_5_0_1 = {
{
MR_PREDICATE,
"ll_backend.dupproc",
"ll_backend.dupproc",
"disallowed_instr",
1,
0
},
"ll_backend.dupproc",
"dupproc.m",
127,
"d1;c12;"
};

MR_decl_entry(map__search_3_0);

MR_BEGIN_MODULE(ll_backend__dupproc_module0)
	MR_init_entry1(ll_backend__dupproc__standardize_label_3_0);
	MR_init_label4(ll_backend__dupproc__standardize_label_3_0,5,3,9,8)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__dupproc__standardize_label_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(ll_backend__dupproc__standardize_label_3_0_i3);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_ctfield(0, MR_r1, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, proc_label);
	MR_r3 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, proc_label);
	MR_r4 = MR_ctfield(0, MR_sv(1), 1);
	MR_np_call_localret_ent(map__search_3_0,
		ll_backend__dupproc__standardize_label_3_0_i5);
MR_def_label(ll_backend__dupproc__standardize_label_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__dupproc__standardize_label_3_0_i8);
	}
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_sv(2);
	MR_tfield(0, MR_r1, 1) = MR_r2;
	MR_decr_sp_and_return(3);
MR_def_label(ll_backend__dupproc__standardize_label_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_ctfield(1, MR_r1, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, proc_label);
	MR_r3 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, proc_label);
	MR_r4 = MR_ctfield(1, MR_sv(1), 1);
	MR_np_call_localret_ent(map__search_3_0,
		ll_backend__dupproc__standardize_label_3_0_i9);
MR_def_label(ll_backend__dupproc__standardize_label_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__dupproc__standardize_label_3_0_i8);
	}
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_sv(2);
	MR_tfield(1, MR_r1, 1) = MR_r2;
	MR_decr_sp_and_return(3);
MR_def_label(ll_backend__dupproc__standardize_label_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__dupproc_module1)
	MR_init_entry1(ll_backend__dupproc__standardize_labels_3_0);
	MR_init_label6(ll_backend__dupproc__standardize_labels_3_0,7,5,11,10,14,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__dupproc__standardize_labels_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__dupproc__standardize_labels_3_0_i3);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	MR_r5 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(ll_backend__dupproc__standardize_labels_3_0_i5);
	}
	MR_sv(3) = MR_ctfield(1, MR_r1, 1);
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_tempr1;
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, proc_label);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, proc_label);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_ctfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(map__search_3_0,
		ll_backend__dupproc__standardize_labels_3_0_i7);
MR_def_label(ll_backend__dupproc__standardize_labels_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__dupproc__standardize_labels_3_0_i10);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_r2 = MR_sv(1);
	MR_r1 = MR_sv(3);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_localcall_lab(ll_backend__dupproc__standardize_labels_3_0,
		ll_backend__dupproc__standardize_labels_3_0_i14);
MR_def_label(ll_backend__dupproc__standardize_labels_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_ctfield(1, MR_r1, 1);
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(2) = MR_tempr1;
	MR_sv(4) = MR_ctfield(1, MR_tempr1, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, proc_label);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, proc_label);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_ctfield(1, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(map__search_3_0,
		ll_backend__dupproc__standardize_labels_3_0_i11);
MR_def_label(ll_backend__dupproc__standardize_labels_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__dupproc__standardize_labels_3_0_i10);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_r2 = MR_sv(1);
	MR_r1 = MR_sv(3);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_localcall_lab(ll_backend__dupproc__standardize_labels_3_0,
		ll_backend__dupproc__standardize_labels_3_0_i14);
MR_def_label(ll_backend__dupproc__standardize_labels_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r1 = MR_sv(3);
	MR_sv(1) = MR_sv(2);
	MR_np_localcall_lab(ll_backend__dupproc__standardize_labels_3_0,
		ll_backend__dupproc__standardize_labels_3_0_i14);
MR_def_label(ll_backend__dupproc__standardize_labels_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
MR_def_label(ll_backend__dupproc__standardize_labels_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__dupproc_module2)
	MR_init_entry1(ll_backend__dupproc__standardize_code_addr_3_0);
	MR_init_label8(ll_backend__dupproc__standardize_code_addr_3_0,60,15,13,19,61,24,23,59)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__dupproc__standardize_code_addr_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(ll_backend__dupproc__standardize_code_addr_3_0_i59) MR_AND
		MR_LABEL_AP(ll_backend__dupproc__standardize_code_addr_3_0_i60) MR_AND
		MR_LABEL_AP(ll_backend__dupproc__standardize_code_addr_3_0_i61) MR_AND
		MR_LABEL_AP(ll_backend__dupproc__standardize_code_addr_3_0_i59));
MR_def_label(ll_backend__dupproc__standardize_code_addr_3_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	MR_r5 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(ll_backend__dupproc__standardize_code_addr_3_0_i13);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, proc_label);
	MR_r3 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, proc_label);
	MR_r4 = MR_ctfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(map__search_3_0,
		ll_backend__dupproc__standardize_code_addr_3_0_i15);
MR_def_label(ll_backend__dupproc__standardize_code_addr_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__dupproc__standardize_code_addr_3_0_i23);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
MR_def_label(ll_backend__dupproc__standardize_code_addr_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(2) = MR_ctfield(1, MR_tempr1, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, proc_label);
	MR_r3 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, proc_label);
	MR_r4 = MR_ctfield(1, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(map__search_3_0,
		ll_backend__dupproc__standardize_code_addr_3_0_i19);
MR_def_label(ll_backend__dupproc__standardize_code_addr_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__dupproc__standardize_code_addr_3_0_i23);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
MR_def_label(ll_backend__dupproc__standardize_code_addr_3_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, proc_label);
	MR_r3 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, proc_label);
	MR_r4 = MR_ctfield(2, MR_sv(1), 0);
	MR_np_call_localret_ent(map__search_3_0,
		ll_backend__dupproc__standardize_code_addr_3_0_i24);
MR_def_label(ll_backend__dupproc__standardize_code_addr_3_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__dupproc__standardize_code_addr_3_0_i23);
	}
	MR_tag_alloc_heap(MR_r1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_r1, 0) = MR_r2;
	MR_decr_sp_and_return(3);
MR_def_label(ll_backend__dupproc__standardize_code_addr_3_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(3);
MR_def_label(ll_backend__dupproc__standardize_code_addr_3_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__dupproc_module3)
	MR_init_entry1(ll_backend__dupproc__standardize_maybe_code_addr_3_0);
	MR_init_label2(ll_backend__dupproc__standardize_maybe_code_addr_3_0,12,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__dupproc__standardize_maybe_code_addr_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__dupproc__standardize_maybe_code_addr_3_0_i12);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(ll_backend__dupproc__standardize_maybe_code_addr_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_np_call_localret_ent(ll_backend__dupproc__standardize_code_addr_3_0,
		ll_backend__dupproc__standardize_maybe_code_addr_3_0_i4);
MR_def_label(ll_backend__dupproc__standardize_maybe_code_addr_3_0,4)
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

MR_decl_entry(libs__compiler_util__unexpected_2_0);

MR_BEGIN_MODULE(ll_backend__dupproc_module4)
	MR_init_entry1(ll_backend__dupproc__standardize_rval_3_0);
	MR_init_label8(ll_backend__dupproc__standardize_rval_3_0,5,8,26,27,57,24,9,12)
	MR_init_label3(ll_backend__dupproc__standardize_rval_3_0,16,21,55)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__dupproc__standardize_rval_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(ll_backend__dupproc__standardize_rval_3_0_i55) MR_AND
		MR_LABEL_AP(ll_backend__dupproc__standardize_rval_3_0_i5) MR_AND
		MR_LABEL_AP(ll_backend__dupproc__standardize_rval_3_0_i55) MR_AND
		MR_LABEL_AP(ll_backend__dupproc__standardize_rval_3_0_i8));
MR_def_label(ll_backend__dupproc__standardize_rval_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("dupproc.m", 9);
	MR_r2 = (MR_Word) MR_string_const("var in standardize_rval", 23);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(ll_backend__dupproc__standardize_rval_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_ctfield(3, MR_r1, 0),0)) {
		MR_GOTO_LAB(ll_backend__dupproc__standardize_rval_3_0_i9);
	}
	if (MR_INT_EQ(MR_ctfield(3, MR_r1, 0),1)) {
		MR_GOTO_LAB(ll_backend__dupproc__standardize_rval_3_0_i57);
	}
	if (MR_INT_NE(MR_ctfield(3, MR_r1, 0),2)) {
		MR_GOTO_LAB(ll_backend__dupproc__standardize_rval_3_0_i55);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_ctfield(3, MR_r1, 1);
	MR_sv(3) = MR_ctfield(3, MR_r1, 3);
	MR_r1 = MR_ctfield(3, MR_r1, 2);
	MR_np_localcall_lab(ll_backend__dupproc__standardize_rval_3_0,
		ll_backend__dupproc__standardize_rval_3_0_i26);
MR_def_label(ll_backend__dupproc__standardize_rval_3_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_localcall_lab(ll_backend__dupproc__standardize_rval_3_0,
		ll_backend__dupproc__standardize_rval_3_0_i27);
MR_def_label(ll_backend__dupproc__standardize_rval_3_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
MR_def_label(ll_backend__dupproc__standardize_rval_3_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(3, MR_r1, 1);
	MR_r1 = MR_ctfield(3, MR_r1, 2);
	MR_np_localcall_lab(ll_backend__dupproc__standardize_rval_3_0,
		ll_backend__dupproc__standardize_rval_3_0_i24);
MR_def_label(ll_backend__dupproc__standardize_rval_3_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
MR_def_label(ll_backend__dupproc__standardize_rval_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_ctfield(3, MR_r1, 1);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r3),
		MR_LABEL_AP(ll_backend__dupproc__standardize_rval_3_0_i12) MR_AND
		MR_LABEL_AP(ll_backend__dupproc__standardize_rval_3_0_i55) MR_AND
		MR_LABEL_AP(ll_backend__dupproc__standardize_rval_3_0_i55) MR_AND
		MR_LABEL_AP(ll_backend__dupproc__standardize_rval_3_0_i16));
MR_def_label(ll_backend__dupproc__standardize_rval_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_unmkbody(MR_r3),0)) {
		MR_GOTO_LAB(ll_backend__dupproc__standardize_rval_3_0_i55);
	}
	MR_proceed();
MR_def_label(ll_backend__dupproc__standardize_rval_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_ctfield(3, MR_r3, 0),3)) {
		MR_GOTO_LAB(ll_backend__dupproc__standardize_rval_3_0_i55);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_r1 = MR_ctfield(3, MR_r3, 1);
	MR_np_call_localret_ent(ll_backend__dupproc__standardize_code_addr_3_0,
		ll_backend__dupproc__standardize_rval_3_0_i21);
MR_def_label(ll_backend__dupproc__standardize_rval_3_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_r1, 1) = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
MR_def_label(ll_backend__dupproc__standardize_rval_3_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__dupproc_module5)
	MR_init_entry1(ll_backend__dupproc__standardize_instrs_3_0);
	MR_init_label3(ll_backend__dupproc__standardize_instrs_3_0,4,5,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__dupproc__standardize_instrs_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__dupproc__standardize_instrs_3_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = MR_ctfield(0, MR_ctfield(1, MR_r1, 0), 0);
	MR_np_call_localret_ent(ll_backend__dupproc__standardize_instr_3_0,
		ll_backend__dupproc__standardize_instrs_3_0_i4);
MR_def_label(ll_backend__dupproc__standardize_instrs_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_string_const("", 0);
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_sv(2);
	}
	MR_np_localcall_lab(ll_backend__dupproc__standardize_instrs_3_0,
		ll_backend__dupproc__standardize_instrs_3_0_i5);
MR_def_label(ll_backend__dupproc__standardize_instrs_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
MR_def_label(ll_backend__dupproc__standardize_instrs_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__dupproc_module6)
	MR_init_entry1(ll_backend__dupproc__standardize_instr_3_0);
	MR_init_label8(ll_backend__dupproc__standardize_instr_3_0,78,8,79,10,80,12,81,14)
	MR_init_label8(ll_backend__dupproc__standardize_instr_3_0,82,16,17,83,20,21,84,23)
	MR_init_label8(ll_backend__dupproc__standardize_instr_3_0,85,25,86,27,87,30,31,46)
	MR_init_label4(ll_backend__dupproc__standardize_instr_3_0,88,52,89,54)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__dupproc__standardize_instr_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_tag(MR_r1),3)) {
		MR_GOTO_LAB(ll_backend__dupproc__standardize_instr_3_0_i8);
	}
MR_def_label(ll_backend__dupproc__standardize_instr_3_0,78)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
MR_def_label(ll_backend__dupproc__standardize_instr_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r1, 0),
		MR_LABEL_AP(ll_backend__dupproc__standardize_instr_3_0_i79) MR_AND
		MR_LABEL_AP(ll_backend__dupproc__standardize_instr_3_0_i80) MR_AND
		MR_LABEL_AP(ll_backend__dupproc__standardize_instr_3_0_i81) MR_AND
		MR_LABEL_AP(ll_backend__dupproc__standardize_instr_3_0_i82) MR_AND
		MR_LABEL_AP(ll_backend__dupproc__standardize_instr_3_0_i83) MR_AND
		MR_LABEL_AP(ll_backend__dupproc__standardize_instr_3_0_i84) MR_AND
		MR_LABEL_AP(ll_backend__dupproc__standardize_instr_3_0_i85) MR_AND
		MR_LABEL_AP(ll_backend__dupproc__standardize_instr_3_0_i86) MR_AND
		MR_LABEL_AP(ll_backend__dupproc__standardize_instr_3_0_i78) MR_AND
		MR_LABEL_AP(ll_backend__dupproc__standardize_instr_3_0_i87) MR_AND
		MR_LABEL_AP(ll_backend__dupproc__standardize_instr_3_0_i78) MR_AND
		MR_LABEL_AP(ll_backend__dupproc__standardize_instr_3_0_i78) MR_AND
		MR_LABEL_AP(ll_backend__dupproc__standardize_instr_3_0_i78) MR_AND
		MR_LABEL_AP(ll_backend__dupproc__standardize_instr_3_0_i78) MR_AND
		MR_LABEL_AP(ll_backend__dupproc__standardize_instr_3_0_i78) MR_AND
		MR_LABEL_AP(ll_backend__dupproc__standardize_instr_3_0_i78) MR_AND
		MR_LABEL_AP(ll_backend__dupproc__standardize_instr_3_0_i78) MR_AND
		MR_LABEL_AP(ll_backend__dupproc__standardize_instr_3_0_i78) MR_AND
		MR_LABEL_AP(ll_backend__dupproc__standardize_instr_3_0_i78) MR_AND
		MR_LABEL_AP(ll_backend__dupproc__standardize_instr_3_0_i78) MR_AND
		MR_LABEL_AP(ll_backend__dupproc__standardize_instr_3_0_i78) MR_AND
		MR_LABEL_AP(ll_backend__dupproc__standardize_instr_3_0_i78) MR_AND
		MR_LABEL_AP(ll_backend__dupproc__standardize_instr_3_0_i78) MR_AND
		MR_LABEL_AP(ll_backend__dupproc__standardize_instr_3_0_i78) MR_AND
		MR_LABEL_AP(ll_backend__dupproc__standardize_instr_3_0_i46) MR_AND
		MR_LABEL_AP(ll_backend__dupproc__standardize_instr_3_0_i78) MR_AND
		MR_LABEL_AP(ll_backend__dupproc__standardize_instr_3_0_i78) MR_AND
		MR_LABEL_AP(ll_backend__dupproc__standardize_instr_3_0_i78) MR_AND
		MR_LABEL_AP(ll_backend__dupproc__standardize_instr_3_0_i78) MR_AND
		MR_LABEL_AP(ll_backend__dupproc__standardize_instr_3_0_i88) MR_AND
		MR_LABEL_AP(ll_backend__dupproc__standardize_instr_3_0_i89));
MR_def_label(ll_backend__dupproc__standardize_instr_3_0,79)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(3, MR_r1, 1);
	MR_sv(2) = MR_ctfield(3, MR_r1, 2);
	MR_r1 = MR_ctfield(3, MR_r1, 3);
	MR_np_call_localret_ent(ll_backend__dupproc__standardize_instrs_3_0,
		ll_backend__dupproc__standardize_instr_3_0_i10);
MR_def_label(ll_backend__dupproc__standardize_instr_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
MR_def_label(ll_backend__dupproc__standardize_instr_3_0,80)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(3, MR_r1, 1);
	MR_r1 = MR_ctfield(3, MR_r1, 2);
	MR_np_call_localret_ent(ll_backend__dupproc__standardize_rval_3_0,
		ll_backend__dupproc__standardize_instr_3_0_i12);
MR_def_label(ll_backend__dupproc__standardize_instr_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
MR_def_label(ll_backend__dupproc__standardize_instr_3_0,81)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(3, MR_r1, 1);
	MR_r1 = MR_ctfield(3, MR_r1, 2);
	MR_np_call_localret_ent(ll_backend__dupproc__standardize_rval_3_0,
		ll_backend__dupproc__standardize_instr_3_0_i14);
MR_def_label(ll_backend__dupproc__standardize_instr_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
MR_def_label(ll_backend__dupproc__standardize_instr_3_0,82)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_ctfield(3, MR_r1, 2);
	MR_sv(3) = MR_ctfield(3, MR_r1, 3);
	MR_sv(4) = MR_ctfield(3, MR_r1, 4);
	MR_sv(5) = MR_ctfield(3, MR_r1, 5);
	MR_sv(6) = MR_ctfield(3, MR_r1, 6);
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_np_call_localret_ent(ll_backend__dupproc__standardize_code_addr_3_0,
		ll_backend__dupproc__standardize_instr_3_0_i16);
MR_def_label(ll_backend__dupproc__standardize_instr_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ll_backend__dupproc__standardize_code_addr_3_0,
		ll_backend__dupproc__standardize_instr_3_0_i17);
MR_def_label(ll_backend__dupproc__standardize_instr_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 7);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_tfield(3, MR_tempr1, 3) = MR_sv(3);
	MR_tfield(3, MR_tempr1, 4) = MR_sv(4);
	MR_tfield(3, MR_tempr1, 5) = MR_sv(5);
	MR_tfield(3, MR_tempr1, 6) = MR_sv(6);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
MR_def_label(ll_backend__dupproc__standardize_instr_3_0,83)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(3, MR_r1, 1);
	MR_r3 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(ll_backend__dupproc__standardize_instr_3_0_i20);
	}
	MR_r1 = MR_ctfield(3, MR_r1, 2);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__dupproc__standardize_maybe_code_addr_3_0,
		ll_backend__dupproc__standardize_instr_3_0_i21);
MR_def_label(ll_backend__dupproc__standardize_instr_3_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 3);
	MR_sv(1) = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_string_const("", 0);
	MR_tempr2 = MR_r3;
	MR_tfield(1, MR_tempr1, 1) = MR_ctfield(1, MR_tempr2, 1);
	MR_tfield(1, MR_tempr1, 2) = MR_ctfield(1, MR_tempr2, 2);
	MR_r1 = MR_ctfield(3, MR_r1, 2);
	}
	MR_np_call_localret_ent(ll_backend__dupproc__standardize_maybe_code_addr_3_0,
		ll_backend__dupproc__standardize_instr_3_0_i21);
MR_def_label(ll_backend__dupproc__standardize_instr_3_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
MR_def_label(ll_backend__dupproc__standardize_instr_3_0,84)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_np_call_localret_ent(ll_backend__dupproc__standardize_label_3_0,
		ll_backend__dupproc__standardize_instr_3_0_i23);
MR_def_label(ll_backend__dupproc__standardize_instr_3_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
MR_def_label(ll_backend__dupproc__standardize_instr_3_0,85)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_np_call_localret_ent(ll_backend__dupproc__standardize_code_addr_3_0,
		ll_backend__dupproc__standardize_instr_3_0_i25);
MR_def_label(ll_backend__dupproc__standardize_instr_3_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
MR_def_label(ll_backend__dupproc__standardize_instr_3_0,86)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(3, MR_r1, 1);
	MR_r1 = MR_ctfield(3, MR_r1, 2);
	MR_np_call_localret_ent(ll_backend__dupproc__standardize_labels_3_0,
		ll_backend__dupproc__standardize_instr_3_0_i27);
MR_def_label(ll_backend__dupproc__standardize_instr_3_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 7;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
MR_def_label(ll_backend__dupproc__standardize_instr_3_0,87)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_ctfield(3, MR_r1, 2);
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_np_call_localret_ent(ll_backend__dupproc__standardize_rval_3_0,
		ll_backend__dupproc__standardize_instr_3_0_i30);
MR_def_label(ll_backend__dupproc__standardize_instr_3_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ll_backend__dupproc__standardize_code_addr_3_0,
		ll_backend__dupproc__standardize_instr_3_0_i31);
MR_def_label(ll_backend__dupproc__standardize_instr_3_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 9;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
MR_def_label(ll_backend__dupproc__standardize_instr_3_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 24;
	MR_tfield(3, MR_tempr1, 1) = MR_ctfield(3, MR_r1, 1);
	MR_tfield(3, MR_tempr1, 2) = (MR_Word) MR_string_const("", 0);
	MR_tfield(3, MR_tempr1, 3) = MR_ctfield(3, MR_r1, 3);
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
MR_def_label(ll_backend__dupproc__standardize_instr_3_0,88)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_np_call_localret_ent(ll_backend__dupproc__standardize_label_3_0,
		ll_backend__dupproc__standardize_instr_3_0_i52);
MR_def_label(ll_backend__dupproc__standardize_instr_3_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 29;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
MR_def_label(ll_backend__dupproc__standardize_instr_3_0,89)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(3, MR_r1, 1);
	MR_r1 = MR_ctfield(3, MR_r1, 2);
	MR_np_call_localret_ent(ll_backend__dupproc__standardize_label_3_0,
		ll_backend__dupproc__standardize_instr_3_0_i54);
MR_def_label(ll_backend__dupproc__standardize_instr_3_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 30;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__dupproc_module7)
	MR_init_entry1(ll_backend__dupproc__standardize_proc_3_0);
	MR_init_label1(ll_backend__dupproc__standardize_proc_3_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__dupproc__standardize_proc_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = MR_ctfield(0, MR_r1, 4);
	MR_np_call_localret_ent(ll_backend__dupproc__standardize_instrs_3_0,
		ll_backend__dupproc__standardize_proc_3_0_i2);
MR_def_label(ll_backend__dupproc__standardize_proc_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 9);
	MR_tempr2 = MR_sv(1);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_r1;
	MR_tfield(0, MR_tempr1, 5) = MR_ctfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_ctfield(0, MR_tempr2, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_ctfield(0, MR_tempr2, 7);
	MR_tfield(0, MR_tempr1, 8) = MR_ctfield(0, MR_tempr2, 8);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__det_insert_4_0);
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_instruction_0;
MR_decl_entry(__Unify___list__list_1_0);

MR_BEGIN_MODULE(ll_backend__dupproc_module8)
	MR_init_entry1(ll_backend__dupproc__find_matching_model_proc_5_0);
	MR_init_label6(ll_backend__dupproc__find_matching_model_proc_5_0,21,3,4,6,5,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__dupproc__find_matching_model_proc_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
MR_def_label(ll_backend__dupproc__find_matching_model_proc_5_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__dupproc__find_matching_model_proc_5_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	MR_sv(1) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(3) = MR_ctfield(1, MR_r1, 1);
	MR_sv(4) = MR_r2;
	MR_sv(5) = MR_r3;
	MR_tempr2 = MR_r4;
	MR_sv(6) = MR_tempr2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, proc_label);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, proc_label);
	MR_r3 = MR_tempr2;
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(1);
	}
	MR_np_call_localret_ent(map__det_insert_4_0,
		ll_backend__dupproc__find_matching_model_proc_5_0_i3);
MR_def_label(ll_backend__dupproc__find_matching_model_proc_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_ctfield(0, MR_sv(5), 4);
	MR_np_call_localret_ent(ll_backend__dupproc__standardize_instrs_3_0,
		ll_backend__dupproc__find_matching_model_proc_5_0_i4);
MR_def_label(ll_backend__dupproc__find_matching_model_proc_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r3 = MR_ctfield(0, MR_sv(2), 4);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		ll_backend__dupproc__find_matching_model_proc_5_0_i6);
MR_def_label(ll_backend__dupproc__find_matching_model_proc_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__dupproc__find_matching_model_proc_5_0_i5);
	}
	MR_r2 = MR_sv(1);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(7);
MR_def_label(ll_backend__dupproc__find_matching_model_proc_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(6);
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(ll_backend__dupproc__find_matching_model_proc_5_0_i21);
MR_def_label(ll_backend__dupproc__find_matching_model_proc_5_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(ll_backend__opt_util__get_prologue_4_0);
MR_decl_entry(list__filter_3_0);
MR_decl_entry(list__length_2_0);
MR_decl_entry(list__append_3_1);

MR_BEGIN_MODULE(ll_backend__dupproc_module9)
	MR_init_entry1(ll_backend__dupproc__eliminate_dup_procs_5_0);
	MR_init_label8(ll_backend__dupproc__eliminate_dup_procs_5_0,7,9,10,11,12,14,15,16)
	MR_init_label6(ll_backend__dupproc__eliminate_dup_procs_5_0,4,5,17,18,20,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__dupproc__eliminate_dup_procs_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(ll_backend__dupproc__eliminate_dup_procs_5_0_i3);
	}
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr4 = MR_r2;
	MR_tempr1 = MR_ctfield(1, MR_tempr4, 0);
	MR_sv(7) = MR_tempr1;
	MR_sv(5) = MR_ctfield(1, MR_tempr4, 1);
	MR_tempr2 = MR_ctfield(0, MR_tempr1, 1);
	MR_r5 = MR_tempr2;
	MR_r2 = MR_ctfield(0, MR_tempr1, 0);
	MR_tempr3 = MR_ctfield(0, MR_tempr2, 7);
	if (MR_INT_NE(MR_tempr3,0)) {
		MR_GOTO_LAB(ll_backend__dupproc__eliminate_dup_procs_5_0_i5);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r2;
	MR_sv(4) = MR_tempr2;
	MR_r3 = MR_tempr2;
	MR_r4 = MR_sv(2);
	}
	MR_np_call_localret_ent(ll_backend__dupproc__find_matching_model_proc_5_0,
		ll_backend__dupproc__eliminate_dup_procs_5_0_i7);
MR_def_label(ll_backend__dupproc__eliminate_dup_procs_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__dupproc__eliminate_dup_procs_5_0_i4);
	}
	MR_sv(6) = MR_r2;
	MR_r1 = MR_ctfield(0, MR_sv(4), 4);
	MR_np_call_localret_ent(ll_backend__opt_util__get_prologue_4_0,
		ll_backend__dupproc__eliminate_dup_procs_5_0_i9);
MR_def_label(ll_backend__dupproc__eliminate_dup_procs_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(6);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr3, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr4, 0, (MR_Integer) 2);
	MR_sv(10) = MR_tempr4;
	MR_tfield(0, MR_tempr4, 0) = MR_tempr3;
	MR_tfield(0, MR_tempr4, 1) = (MR_Word) MR_string_const("Redirect to procedure with identical body", 41);
	MR_sv(8) = MR_r1;
	MR_sv(9) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,0);
	}
	MR_np_call_localret_ent(list__filter_3_0,
		ll_backend__dupproc__eliminate_dup_procs_5_0_i10);
MR_def_label(ll_backend__dupproc__eliminate_dup_procs_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(9);
	MR_sv(9) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_np_call_localret_ent(list__length_2_0,
		ll_backend__dupproc__eliminate_dup_procs_5_0_i11);
MR_def_label(ll_backend__dupproc__eliminate_dup_procs_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(9),0,0)) {
		MR_GOTO_LAB(ll_backend__dupproc__eliminate_dup_procs_5_0_i12);
	}
	if (MR_INT_GE(MR_r1,6)) {
		MR_GOTO_LAB(ll_backend__dupproc__eliminate_dup_procs_5_0_i12);
	}
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(6);
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_GOTO_LAB(ll_backend__dupproc__eliminate_dup_procs_5_0_i14);
MR_def_label(ll_backend__dupproc__eliminate_dup_procs_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(10);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(8);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 9);
	MR_tempr3 = MR_sv(4);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr3, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr3, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr3, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr3, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_tempr2;
	MR_tfield(0, MR_tempr1, 5) = MR_ctfield(0, MR_tempr3, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_ctfield(0, MR_tempr3, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_ctfield(0, MR_tempr3, 7);
	MR_tfield(0, MR_tempr1, 8) = MR_ctfield(0, MR_tempr3, 8);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(6);
	MR_r1 = MR_tempr2;
	}
MR_def_label(ll_backend__dupproc__eliminate_dup_procs_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__dupproc__eliminate_dup_procs_5_0_i15);
	}
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_GOTO_LAB(ll_backend__dupproc__eliminate_dup_procs_5_0_i4);
MR_def_label(ll_backend__dupproc__eliminate_dup_procs_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r4;
	MR_sv(2) = MR_ctfield(1, MR_r1, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, proc_label);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, proc_label);
	MR_np_call_localret_ent(map__det_insert_4_0,
		ll_backend__dupproc__eliminate_dup_procs_5_0_i16);
MR_def_label(ll_backend__dupproc__eliminate_dup_procs_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(2);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_localcall_lab(ll_backend__dupproc__eliminate_dup_procs_5_0,
		ll_backend__dupproc__eliminate_dup_procs_5_0_i20);
MR_def_label(ll_backend__dupproc__eliminate_dup_procs_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r5 = MR_sv(4);
MR_def_label(ll_backend__dupproc__eliminate_dup_procs_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_r2;
	MR_r1 = MR_r5;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__dupproc__standardize_proc_3_0,
		ll_backend__dupproc__eliminate_dup_procs_5_0_i17);
MR_def_label(ll_backend__dupproc__eliminate_dup_procs_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_r2 = MR_sv(1);
	}
	MR_np_call_localret_ent(list__append_3_1,
		ll_backend__dupproc__eliminate_dup_procs_5_0_i18);
MR_def_label(ll_backend__dupproc__eliminate_dup_procs_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_sv(1) = MR_sv(7);
	MR_r3 = MR_sv(2);
	MR_np_localcall_lab(ll_backend__dupproc__eliminate_dup_procs_5_0,
		ll_backend__dupproc__eliminate_dup_procs_5_0_i20);
MR_def_label(ll_backend__dupproc__eliminate_dup_procs_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(11);
	}
MR_def_label(ll_backend__dupproc__eliminate_dup_procs_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r3;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(assoc_list__values_2_0);

MR_BEGIN_MODULE(ll_backend__dupproc_module10)
	MR_init_entry1(ll_backend__dupproc__eliminate_duplicate_procs_4_0);
	MR_init_label5(ll_backend__dupproc__eliminate_duplicate_procs_4_0,3,21,6,7,8)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__dupproc__eliminate_duplicate_procs_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__dupproc__eliminate_duplicate_procs_4_0_i3);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(ll_backend__dupproc__eliminate_duplicate_procs_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_ctfield(1, MR_r1, 1);
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(ll_backend__dupproc__eliminate_duplicate_procs_4_0_i21);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_ctfield(0, MR_ctfield(1, MR_r1, 0), 1);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
MR_def_label(ll_backend__dupproc__eliminate_duplicate_procs_4_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 0);
	MR_r1 = MR_ctfield(0, MR_sv(3), 4);
	}
	MR_np_call_localret_ent(ll_backend__dupproc__standardize_instrs_3_0,
		ll_backend__dupproc__eliminate_duplicate_procs_4_0_i6);
MR_def_label(ll_backend__dupproc__eliminate_duplicate_procs_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 9);
	MR_tempr3 = MR_sv(3);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr3, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr3, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr3, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr3, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_r1;
	MR_tfield(0, MR_tempr1, 5) = MR_ctfield(0, MR_tempr3, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_ctfield(0, MR_tempr3, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_ctfield(0, MR_tempr3, 7);
	MR_tfield(0, MR_tempr1, 8) = MR_ctfield(0, MR_tempr3, 8);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_sv(4);
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_tempr2;
	MR_tfield(1, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	}
	MR_np_call_localret_ent(ll_backend__dupproc__eliminate_dup_procs_5_0,
		ll_backend__dupproc__eliminate_duplicate_procs_4_0_i7);
MR_def_label(ll_backend__dupproc__eliminate_duplicate_procs_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, proc_label);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, c_procedure);
	MR_np_call_localret_ent(assoc_list__values_2_0,
		ll_backend__dupproc__eliminate_duplicate_procs_4_0_i8);
MR_def_label(ll_backend__dupproc__eliminate_duplicate_procs_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(5);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__dupproc_module11)
	MR_init_entry1(ll_backend__dupproc__disallowed_instr_1_0);
	MR_init_label1(ll_backend__dupproc__disallowed_instr_1_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__dupproc__disallowed_instr_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_r1, 0);
	if (MR_RTAGS_TEST(MR_tempr1,3,3)) {
		MR_GOTO_LAB(ll_backend__dupproc__disallowed_instr_1_0_i2);
	}
	MR_r1 = ((MR_tag(MR_tempr1) == MR_mktag((MR_Integer) 3)) && ((MR_Integer) MR_ctfield(3, MR_tempr1, 0) == (MR_Integer) 9));
	MR_proceed();
	}
MR_def_label(ll_backend__dupproc__disallowed_instr_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__ll_backend__dupproc_maybe_bunch_0(void)
{
	ll_backend__dupproc_module0();
	ll_backend__dupproc_module1();
	ll_backend__dupproc_module2();
	ll_backend__dupproc_module3();
	ll_backend__dupproc_module4();
	ll_backend__dupproc_module5();
	ll_backend__dupproc_module6();
	ll_backend__dupproc_module7();
	ll_backend__dupproc_module8();
	ll_backend__dupproc_module9();
	ll_backend__dupproc_module10();
	ll_backend__dupproc_module11();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__ll_backend__dupproc__init(void);
void mercury__ll_backend__dupproc__init_type_tables(void);
void mercury__ll_backend__dupproc__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__ll_backend__dupproc__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__ll_backend__dupproc__init_complexity_procs(void);
#endif

void mercury__ll_backend__dupproc__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__ll_backend__dupproc_maybe_bunch_0();
	mercury__ll_backend__dupproc__init_debugger();
}

void mercury__ll_backend__dupproc__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}


void mercury__ll_backend__dupproc__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__ll_backend__dupproc__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__ll_backend__dupproc);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__ll_backend__dupproc__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
