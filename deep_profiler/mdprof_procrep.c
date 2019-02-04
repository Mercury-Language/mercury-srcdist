/*
** Automatically generated from `mdprof_procrep.m'
** by the Mercury compiler,
** version rotd-2008-08-03, configured for i686-pc-linux-gnu.
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
INIT mercury__mdprof_procrep__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 534 "../library/io.int"
#include "io.mh"

#line 27 "mdprof_procrep.c"
#line 542 "../library/io.int"
#include "string.mh"

#line 31 "mdprof_procrep.c"
#line 166 "mdbcomp.program_representation.int"
#include "mdbcomp.program_representation.mh"

#line 35 "mdprof_procrep.c"
#line 67 "mdbcomp.rtti_access.int"
#include "mdbcomp.rtti_access.mh"

#line 39 "mdprof_procrep.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 43 "mdprof_procrep.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 47 "mdprof_procrep.c"
#line 31 "../library/array.int2"
#include "array.mh"

#line 51 "mdprof_procrep.c"
#line 52 "mdprof_procrep.c"
#include "mdprof_procrep.mh"

#line 55 "mdprof_procrep.c"
#line 56 "mdprof_procrep.c"
#ifndef MDPROF_PROCREP_DECL_GUARD
#define MDPROF_PROCREP_DECL_GUARD

#line 60 "mdprof_procrep.c"
#line 61 "mdprof_procrep.c"

#endif
#line 64 "mdprof_procrep.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

struct mercury_type_0 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[3];
};
MR_STATIC_LINKAGE const struct mercury_type_0 mercury_common_0[];

struct mercury_type_1 {
	MR_Word * f1;
	MR_Code * f2;
	MR_Integer f3;
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

struct mercury_type_2 {
	MR_String f1;
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];

struct mercury_type_3 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[4];
};
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];
MR_decl_label3(mdprof_procrep__indent_3_0, 10,3,12)
MR_decl_label5(main_2_0, 2,4,6,9,8)
MR_decl_label4(mdprof_procrep__print_args_3_0, 4,9,10,19)
MR_decl_label3(mdprof_procrep__print_args_2_4_0, 14,8,16)
MR_decl_label8(mdprof_procrep__print_atomic_goal_4_0, 2,71,80,87,45,98,4,9)
MR_decl_label8(mdprof_procrep__print_atomic_goal_4_0, 11,17,20,22,25,26,28,33)
MR_decl_label8(mdprof_procrep__print_atomic_goal_4_0, 34,36,43,54,59,61,62,63)
MR_decl_label3(mdprof_procrep__print_atomic_goal_4_0, 65,89,3)
MR_decl_label3(mdprof_procrep__print_conj_4_0, 4,3,6)
MR_decl_label3(mdprof_procrep__print_conj_2_4_0, 10,4,12)
MR_decl_label1(mdprof_procrep__print_cons_id_and_arity_4_0, 2)
MR_decl_label6(mdprof_procrep__print_disj_5_0, 17,5,6,7,8,19)
MR_decl_label8(mdprof_procrep__print_goal_4_0, 5,74,8,9,10,75,42,45)
MR_decl_label8(mdprof_procrep__print_goal_4_0, 46,52,77,14,15,16,17,18)
MR_decl_label8(mdprof_procrep__print_goal_4_0, 19,20,21,22,78,26,27,28)
MR_decl_label8(mdprof_procrep__print_goal_4_0, 79,32,33,56,35,37,38,39)
MR_decl_label3(mdprof_procrep__print_maybe_args_3_0, 4,5,14)
MR_decl_label5(mdprof_procrep__print_maybe_args_2_4_0, 25,6,5,12,27)
MR_decl_label8(mdprof_procrep__print_proc_3_0, 5,3,2,53,39,40,45,46)
MR_decl_label2(mdprof_procrep__print_proc_3_0, 48,49)
MR_decl_label7(mdprof_procrep__print_selected_modules_4_0, 37,8,5,12,16,11,39)
MR_decl_label8(mdprof_procrep__print_switch_5_0, 20,5,6,7,8,10,11,22)
MR_decl_static(mdprof_procrep__print_selected_modules_4_0)
MR_def_extern_entry(main_2_0)
MR_decl_static(mdprof_procrep__indent_3_0)
MR_decl_static(mdprof_procrep__print_cons_id_and_arity_4_0)
MR_decl_static(mdprof_procrep__print_args_2_4_0)
MR_decl_static(mdprof_procrep__print_args_3_0)
MR_decl_static(mdprof_procrep__print_maybe_args_2_4_0)
MR_decl_static(mdprof_procrep__print_maybe_args_3_0)
MR_decl_static(mdprof_procrep__print_atomic_goal_4_0)
MR_decl_static(mdprof_procrep__print_goal_4_0)
MR_decl_static(mdprof_procrep__print_conj_4_0)
MR_decl_static(mdprof_procrep__print_conj_2_4_0)
MR_decl_static(mdprof_procrep__print_disj_5_0)
MR_decl_static(mdprof_procrep__print_switch_5_0)
MR_decl_static(mdprof_procrep__print_proc_3_0)

static const MR_UserClosureId
mercury_data__closure_layout__mdprof_procrep__print_selected_modules_4_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__program_representation__type_ctor_info_proc_rep_0;
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_state_0;
static const MR_UserClosureId
mercury_data__closure_layout__mdprof_procrep__print_selected_modules_4_0_2;
static const struct mercury_type_0 mercury_common_0[2] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__mdprof_procrep__print_selected_modules_4_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(mdbcomp__program_representation, proc_rep),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__mdprof_procrep__print_selected_modules_4_0_2,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(mdbcomp__program_representation, proc_rep),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
};

static const struct mercury_type_1 mercury_common_1[2] =
{
{
MR_COMMON(0,0),
MR_ENTRY_AP(mdprof_procrep__print_proc_3_0),
0
},
{
MR_COMMON(0,1),
MR_ENTRY_AP(mdprof_procrep__print_proc_3_0),
0
},
};

static const struct mercury_type_2 mercury_common_2[5] =
{
{
MR_string_const("", 0)
},
{
MR_string_const("<=", 2)
},
{
MR_string_const("=>", 2)
},
{
MR_string_const("func", 4)
},
{
MR_string_const("pred", 4)
},
};

static const MR_UserClosureId
mercury_data__closure_layout__mdprof_procrep__print_switch_5_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__program_representation__type_ctor_info_cons_id_arity_rep_0;
static const struct mercury_type_3 mercury_common_3[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__mdprof_procrep__print_switch_5_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(mdbcomp__program_representation, cons_id_arity_rep),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__mdprof_procrep__print_selected_modules_4_0_1 = {
{
MR_PREDICATE,
"mdprof_procrep",
"mdprof_procrep",
"print_proc",
3,
0
},
"mdprof_procrep",
"mdprof_procrep.m",
91,
"d1;c10;"
};

static const MR_UserClosureId
mercury_data__closure_layout__mdprof_procrep__print_selected_modules_4_0_2 = {
{
MR_PREDICATE,
"mdprof_procrep",
"mdprof_procrep",
"print_proc",
3,
0
},
"mdprof_procrep",
"mdprof_procrep.m",
91,
"d1;c10;"
};

static const MR_UserClosureId
mercury_data__closure_layout__mdprof_procrep__print_switch_5_0_1 = {
{
MR_PREDICATE,
"mdprof_procrep",
"mdprof_procrep",
"print_cons_id_and_arity",
4,
0
},
"mdprof_procrep",
"mdprof_procrep.m",
241,
"d2;c11;"
};

MR_decl_entry(io__format_4_0);
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__program_representation__type_ctor_info_proc_rep_0;
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_state_0;
MR_decl_entry(list__foldl_4_0);
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
MR_decl_entry(list__member_2_0);

MR_BEGIN_MODULE(mdprof_procrep_module0)
	MR_init_entry1(mdprof_procrep__print_selected_modules_4_0);
	MR_init_label7(mdprof_procrep__print_selected_modules_4_0,37,8,5,12,16,11,39)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdprof_procrep__print_selected_modules_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(mdprof_procrep__print_selected_modules_4_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(mdprof_procrep__print_selected_modules_4_0_i39);
	}
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(mdprof_procrep__print_selected_modules_4_0_i5);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tempr4 = MR_r1;
	MR_tempr2 = MR_ctfield(1, MR_tempr4, 0);
	MR_tfield(2, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(1) = MR_r2;
	MR_sv(3) = MR_ctfield(1, MR_tempr4, 1);
	MR_sv(2) = MR_ctfield(0, MR_tempr2, 2);
	MR_r1 = (MR_Word) MR_string_const("Module %s\n", 10);
	MR_r2 = MR_tempr3;
	}
	MR_np_call_localret_ent(io__format_4_0,
		mdprof_procrep__print_selected_modules_4_0_i8);
MR_def_label(mdprof_procrep__print_selected_modules_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__program_representation, proc_rep);
	MR_r2 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(list__foldl_4_0,
		mdprof_procrep__print_selected_modules_4_0_i11);
MR_def_label(mdprof_procrep__print_selected_modules_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(3) = MR_ctfield(1, MR_tempr1, 1);
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_ctfield(1, MR_tempr1, 0);
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_ctfield(0, MR_sv(2), 0);
	MR_r3 = MR_ctfield(1, MR_sv(1), 0);
	}
	MR_np_call_localret_ent(list__member_2_0,
		mdprof_procrep__print_selected_modules_4_0_i12);
MR_def_label(mdprof_procrep__print_selected_modules_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdprof_procrep__print_selected_modules_4_0_i11);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_ctfield(0, MR_sv(2), 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(2) = MR_ctfield(0, MR_sv(2), 2);
	MR_r1 = (MR_Word) MR_string_const("Module %s\n", 10);
	}
	MR_np_call_localret_ent(io__format_4_0,
		mdprof_procrep__print_selected_modules_4_0_i16);
MR_def_label(mdprof_procrep__print_selected_modules_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__program_representation, proc_rep);
	MR_r2 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(list__foldl_4_0,
		mdprof_procrep__print_selected_modules_4_0_i11);
MR_def_label(mdprof_procrep__print_selected_modules_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r1 = MR_sv(3);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(mdprof_procrep__print_selected_modules_4_0_i37);
MR_def_label(mdprof_procrep__print_selected_modules_4_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(io__command_line_arguments_3_0);
MR_decl_entry(mdbcomp__program_representation__read_prog_rep_file_4_0);
MR_decl_entry(io__error_message_2_0);

MR_BEGIN_MODULE(mdprof_procrep_module1)
	MR_init_entry1(main_2_0);
	MR_init_label5(main_2_0,2,4,6,9,8)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__main_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(io__command_line_arguments_3_0,
		main_2_0_i2);
MR_def_label(main_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(main_2_0_i4);
	}
	MR_sv(1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_string_const("Deep.procrep", 12);
	MR_np_call_localret_ent(mdbcomp__program_representation__read_prog_rep_file_4_0,
		main_2_0_i6);
MR_def_label(main_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_sv(1), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(1), 0) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("Deep.procrep", 12);
	MR_np_call_localret_ent(mdbcomp__program_representation__read_prog_rep_file_4_0,
		main_2_0_i6);
MR_def_label(main_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(main_2_0_i8);
	}
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_np_call_localret_ent(io__error_message_2_0,
		main_2_0_i9);
MR_def_label(main_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_string_const("mdprof_procrep: %s\n", 19);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(io__format_4_0);
	}
MR_def_label(main_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r1, 0);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(mdprof_procrep__print_selected_modules_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(io__write_string_3_0);

MR_BEGIN_MODULE(mdprof_procrep_module2)
	MR_init_entry1(mdprof_procrep__indent_3_0);
	MR_init_label3(mdprof_procrep__indent_3_0,10,3,12)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdprof_procrep__indent_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
MR_def_label(mdprof_procrep__indent_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_LE(MR_r1,0)) {
		MR_GOTO_LAB(mdprof_procrep__indent_3_0_i12);
	}
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("  ", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		mdprof_procrep__indent_3_0_i3);
MR_def_label(mdprof_procrep__indent_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_sv(1) - (MR_Integer) 1);
	MR_succip_word = MR_sv(2);
	MR_GOTO_LAB(mdprof_procrep__indent_3_0_i10);
MR_def_label(mdprof_procrep__indent_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdprof_procrep_module3)
	MR_init_entry1(mdprof_procrep__print_cons_id_and_arity_4_0);
	MR_init_label1(mdprof_procrep__print_cons_id_and_arity_4_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdprof_procrep__print_cons_id_and_arity_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(1) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 1);
	MR_r1 = ((MR_Integer) MR_r1 + (MR_Integer) 1);
	}
	MR_np_call_localret_ent(mdprof_procrep__indent_3_0,
		mdprof_procrep__print_cons_id_and_arity_4_0_i2);
MR_def_label(mdprof_procrep__print_cons_id_and_arity_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr3;
	MR_r1 = (MR_Word) MR_string_const("%% case %s/%d\n", 14);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(io__format_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdprof_procrep_module4)
	MR_init_entry1(mdprof_procrep__print_args_2_4_0);
	MR_init_label3(mdprof_procrep__print_args_2_4_0,14,8,16)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdprof_procrep__print_args_2_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
MR_def_label(mdprof_procrep__print_args_2_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(mdprof_procrep__print_args_2_4_0_i16);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tempr5 = MR_r1;
	MR_tfield(1, MR_tempr2, 0) = MR_ctfield(1, MR_tempr5, 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr3;
	MR_sv(1) = MR_ctfield(1, MR_tempr5, 1);
	MR_r1 = (MR_Word) MR_string_const("%sV%d", 5);
	}
	MR_np_call_localret_ent(io__format_4_0,
		mdprof_procrep__print_args_2_4_0_i8);
MR_def_label(mdprof_procrep__print_args_2_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_string_const(", ", 2);
	MR_succip_word = MR_sv(2);
	MR_GOTO_LAB(mdprof_procrep__print_args_2_4_0_i14);
MR_def_label(mdprof_procrep__print_args_2_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdprof_procrep_module5)
	MR_init_entry1(mdprof_procrep__print_args_3_0);
	MR_init_label4(mdprof_procrep__print_args_3_0,4,9,10,19)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdprof_procrep__print_args_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(mdprof_procrep__print_args_3_0_i19);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("(", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		mdprof_procrep__print_args_3_0_i4);
MR_def_label(mdprof_procrep__print_args_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_ctfield(1, MR_sv(1), 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = (MR_Word) MR_TAG_COMMON(2,2,0);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_sv(1) = MR_ctfield(1, MR_sv(1), 1);
	MR_r1 = (MR_Word) MR_string_const("%sV%d", 5);
	}
	MR_np_call_localret_ent(io__format_4_0,
		mdprof_procrep__print_args_3_0_i9);
MR_def_label(mdprof_procrep__print_args_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_string_const(", ", 2);
	MR_np_call_localret_ent(mdprof_procrep__print_args_2_4_0,
		mdprof_procrep__print_args_3_0_i10);
MR_def_label(mdprof_procrep__print_args_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(")", 1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(mdprof_procrep__print_args_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdprof_procrep_module6)
	MR_init_entry1(mdprof_procrep__print_maybe_args_2_4_0);
	MR_init_label5(mdprof_procrep__print_maybe_args_2_4_0,25,6,5,12,27)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdprof_procrep__print_maybe_args_2_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
MR_def_label(mdprof_procrep__print_maybe_args_2_4_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(mdprof_procrep__print_maybe_args_2_4_0_i27);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r4 = MR_ctfield(1, MR_tempr1, 0);
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(mdprof_procrep__print_maybe_args_2_4_0_i5);
	}
	MR_sv(1) = MR_ctfield(1, MR_tempr1, 1);
	MR_r1 = MR_r2;
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		mdprof_procrep__print_maybe_args_2_4_0_i6);
MR_def_label(mdprof_procrep__print_maybe_args_2_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("_", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		mdprof_procrep__print_maybe_args_2_4_0_i12);
MR_def_label(mdprof_procrep__print_maybe_args_2_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_ctfield(1, MR_r4, 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr3;
	MR_sv(1) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = (MR_Word) MR_string_const("%sV%d", 5);
	}
	MR_np_call_localret_ent(io__format_4_0,
		mdprof_procrep__print_maybe_args_2_4_0_i12);
MR_def_label(mdprof_procrep__print_maybe_args_2_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_string_const(", ", 2);
	MR_succip_word = MR_sv(2);
	MR_GOTO_LAB(mdprof_procrep__print_maybe_args_2_4_0_i25);
MR_def_label(mdprof_procrep__print_maybe_args_2_4_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdprof_procrep_module7)
	MR_init_entry1(mdprof_procrep__print_maybe_args_3_0);
	MR_init_label3(mdprof_procrep__print_maybe_args_3_0,4,5,14)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdprof_procrep__print_maybe_args_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(mdprof_procrep__print_maybe_args_3_0_i14);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("(", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		mdprof_procrep__print_maybe_args_3_0_i4);
MR_def_label(mdprof_procrep__print_maybe_args_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_string_const("", 0);
	MR_np_call_localret_ent(mdprof_procrep__print_maybe_args_2_4_0,
		mdprof_procrep__print_maybe_args_3_0_i5);
MR_def_label(mdprof_procrep__print_maybe_args_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(")", 1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(mdprof_procrep__print_maybe_args_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(io__nl_2_0);

MR_BEGIN_MODULE(mdprof_procrep_module8)
	MR_init_entry1(mdprof_procrep__print_atomic_goal_4_0);
	MR_init_label8(mdprof_procrep__print_atomic_goal_4_0,2,71,80,87,45,98,4,9)
	MR_init_label8(mdprof_procrep__print_atomic_goal_4_0,11,17,20,22,25,26,28,33)
	MR_init_label8(mdprof_procrep__print_atomic_goal_4_0,34,36,43,54,59,61,62,63)
	MR_init_label3(mdprof_procrep__print_atomic_goal_4_0,65,89,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdprof_procrep__print_atomic_goal_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(mdprof_procrep__indent_3_0,
		mdprof_procrep__print_atomic_goal_4_0_i2);
MR_def_label(mdprof_procrep__print_atomic_goal_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(1)),
		MR_LABEL_AP(mdprof_procrep__print_atomic_goal_4_0_i71) MR_AND
		MR_LABEL_AP(mdprof_procrep__print_atomic_goal_4_0_i80) MR_AND
		MR_LABEL_AP(mdprof_procrep__print_atomic_goal_4_0_i45) MR_AND
		MR_LABEL_AP(mdprof_procrep__print_atomic_goal_4_0_i98));
MR_def_label(mdprof_procrep__print_atomic_goal_4_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tempr5 = MR_sv(1);
	MR_tfield(1, MR_tempr1, 0) = MR_ctfield(0, MR_tempr5, 0);
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr2, 0) = MR_ctfield(0, MR_tempr5, 1);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_TAG_COMMON(2,2,1);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr2;
	MR_sv(1) = MR_ctfield(0, MR_sv(1), 2);
	MR_r1 = (MR_Word) MR_string_const("V%d %s %s", 9);
	}
	MR_np_call_localret_ent(io__format_4_0,
		mdprof_procrep__print_atomic_goal_4_0_i87);
MR_def_label(mdprof_procrep__print_atomic_goal_4_0,80)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tempr5 = MR_sv(1);
	MR_tfield(1, MR_tempr1, 0) = MR_ctfield(1, MR_tempr5, 0);
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr2, 0) = MR_ctfield(1, MR_tempr5, 1);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_TAG_COMMON(2,2,2);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr2;
	MR_sv(1) = MR_ctfield(1, MR_sv(1), 2);
	MR_r1 = (MR_Word) MR_string_const("V%d %s %s", 9);
	}
	MR_np_call_localret_ent(io__format_4_0,
		mdprof_procrep__print_atomic_goal_4_0_i87);
MR_def_label(mdprof_procrep__print_atomic_goal_4_0,87)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(mdprof_procrep__print_args_3_0,
		mdprof_procrep__print_atomic_goal_4_0_i3);
MR_def_label(mdprof_procrep__print_atomic_goal_4_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tempr5 = MR_sv(1);
	MR_tfield(1, MR_tempr1, 0) = MR_ctfield(2, MR_tempr5, 0);
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr2, 0) = MR_ctfield(2, MR_tempr5, 1);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_TAG_COMMON(2,2,2);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr2;
	MR_sv(1) = MR_ctfield(2, MR_sv(1), 2);
	MR_r1 = (MR_Word) MR_string_const("V%d %s %s", 9);
	}
	MR_np_call_localret_ent(io__format_4_0,
		mdprof_procrep__print_atomic_goal_4_0_i43);
MR_def_label(mdprof_procrep__print_atomic_goal_4_0,98)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_sv(1), 0),
		MR_LABEL_AP(mdprof_procrep__print_atomic_goal_4_0_i36) MR_AND
		MR_LABEL_AP(mdprof_procrep__print_atomic_goal_4_0_i65) MR_AND
		MR_LABEL_AP(mdprof_procrep__print_atomic_goal_4_0_i11) MR_AND
		MR_LABEL_AP(mdprof_procrep__print_atomic_goal_4_0_i89) MR_AND
		MR_LABEL_AP(mdprof_procrep__print_atomic_goal_4_0_i61) MR_AND
		MR_LABEL_AP(mdprof_procrep__print_atomic_goal_4_0_i22) MR_AND
		MR_LABEL_AP(mdprof_procrep__print_atomic_goal_4_0_i28) MR_AND
		MR_LABEL_AP(mdprof_procrep__print_atomic_goal_4_0_i54) MR_AND
		MR_LABEL_AP(mdprof_procrep__print_atomic_goal_4_0_i4) MR_AND
		MR_LABEL_AP(mdprof_procrep__print_atomic_goal_4_0_i17));
MR_def_label(mdprof_procrep__print_atomic_goal_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tempr5 = MR_sv(1);
	MR_tfield(2, MR_tempr1, 0) = MR_ctfield(3, MR_tempr5, 1);
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr2, 0) = MR_ctfield(3, MR_tempr5, 2);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr3;
	MR_sv(1) = MR_ctfield(3, MR_sv(1), 3);
	MR_r1 = (MR_Word) MR_string_const("builtin %s.%s", 13);
	}
	MR_np_call_localret_ent(io__format_4_0,
		mdprof_procrep__print_atomic_goal_4_0_i9);
MR_def_label(mdprof_procrep__print_atomic_goal_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(mdprof_procrep__print_args_3_0,
		mdprof_procrep__print_atomic_goal_4_0_i3);
MR_def_label(mdprof_procrep__print_atomic_goal_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tempr5 = MR_sv(1);
	MR_tfield(1, MR_tempr1, 0) = MR_ctfield(3, MR_tempr5, 2);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_ctfield(3, MR_tempr5, 1);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr3;
	MR_r1 = (MR_Word) MR_string_const("cast V%d to V%d", 15);
	}
	MR_np_call_localret_ent(io__format_4_0,
		mdprof_procrep__print_atomic_goal_4_0_i3);
MR_def_label(mdprof_procrep__print_atomic_goal_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_ctfield(3, MR_sv(1), 1);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(1) = MR_ctfield(3, MR_sv(1), 2);
	MR_r1 = (MR_Word) MR_string_const("event %s", 8);
	}
	MR_np_call_localret_ent(io__format_4_0,
		mdprof_procrep__print_atomic_goal_4_0_i20);
MR_def_label(mdprof_procrep__print_atomic_goal_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(mdprof_procrep__print_args_3_0,
		mdprof_procrep__print_atomic_goal_4_0_i3);
MR_def_label(mdprof_procrep__print_atomic_goal_4_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_ctfield(3, MR_sv(1), 1);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(1) = MR_ctfield(3, MR_sv(1), 2);
	MR_r1 = (MR_Word) MR_string_const("V%d(", 4);
	}
	MR_np_call_localret_ent(io__format_4_0,
		mdprof_procrep__print_atomic_goal_4_0_i25);
MR_def_label(mdprof_procrep__print_atomic_goal_4_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(mdprof_procrep__print_args_3_0,
		mdprof_procrep__print_atomic_goal_4_0_i26);
MR_def_label(mdprof_procrep__print_atomic_goal_4_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(")", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		mdprof_procrep__print_atomic_goal_4_0_i3);
MR_def_label(mdprof_procrep__print_atomic_goal_4_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tempr5 = MR_sv(1);
	MR_tfield(1, MR_tempr1, 0) = MR_ctfield(3, MR_tempr5, 2);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_ctfield(3, MR_tempr5, 1);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr3;
	MR_sv(1) = MR_ctfield(3, MR_sv(1), 3);
	MR_r1 = (MR_Word) MR_string_const("method %d of V%d(", 17);
	}
	MR_np_call_localret_ent(io__format_4_0,
		mdprof_procrep__print_atomic_goal_4_0_i33);
MR_def_label(mdprof_procrep__print_atomic_goal_4_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(mdprof_procrep__print_args_3_0,
		mdprof_procrep__print_atomic_goal_4_0_i34);
MR_def_label(mdprof_procrep__print_atomic_goal_4_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(")", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		mdprof_procrep__print_atomic_goal_4_0_i3);
MR_def_label(mdprof_procrep__print_atomic_goal_4_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tempr5 = MR_sv(1);
	MR_tfield(1, MR_tempr1, 0) = MR_ctfield(3, MR_tempr5, 1);
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr2, 0) = MR_ctfield(3, MR_tempr5, 2);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_TAG_COMMON(2,2,1);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr2;
	MR_sv(1) = MR_ctfield(3, MR_sv(1), 3);
	MR_r1 = (MR_Word) MR_string_const("V%d %s %s", 9);
	}
	MR_np_call_localret_ent(io__format_4_0,
		mdprof_procrep__print_atomic_goal_4_0_i43);
MR_def_label(mdprof_procrep__print_atomic_goal_4_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(mdprof_procrep__print_maybe_args_3_0,
		mdprof_procrep__print_atomic_goal_4_0_i3);
MR_def_label(mdprof_procrep__print_atomic_goal_4_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tempr5 = MR_sv(1);
	MR_tfield(2, MR_tempr1, 0) = MR_ctfield(3, MR_tempr5, 1);
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr2, 0) = MR_ctfield(3, MR_tempr5, 2);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr3;
	MR_sv(1) = MR_ctfield(3, MR_sv(1), 3);
	MR_r1 = (MR_Word) MR_string_const("%s.%s", 5);
	}
	MR_np_call_localret_ent(io__format_4_0,
		mdprof_procrep__print_atomic_goal_4_0_i59);
MR_def_label(mdprof_procrep__print_atomic_goal_4_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(mdprof_procrep__print_args_3_0,
		mdprof_procrep__print_atomic_goal_4_0_i3);
MR_def_label(mdprof_procrep__print_atomic_goal_4_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_ctfield(3, MR_sv(1), 1);
	MR_r1 = (MR_Word) MR_string_const("foreign_proc(", 13);
	MR_np_call_localret_ent(io__write_string_3_0,
		mdprof_procrep__print_atomic_goal_4_0_i62);
MR_def_label(mdprof_procrep__print_atomic_goal_4_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(mdprof_procrep__print_args_3_0,
		mdprof_procrep__print_atomic_goal_4_0_i63);
MR_def_label(mdprof_procrep__print_atomic_goal_4_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(")", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		mdprof_procrep__print_atomic_goal_4_0_i3);
MR_def_label(mdprof_procrep__print_atomic_goal_4_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tempr5 = MR_sv(1);
	MR_tfield(1, MR_tempr1, 0) = MR_ctfield(3, MR_tempr5, 1);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_ctfield(3, MR_tempr5, 2);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr3;
	MR_r1 = (MR_Word) MR_string_const("V%d := V%d", 10);
	}
	MR_np_call_localret_ent(io__format_4_0,
		mdprof_procrep__print_atomic_goal_4_0_i3);
MR_def_label(mdprof_procrep__print_atomic_goal_4_0,89)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tempr5 = MR_sv(1);
	MR_tfield(1, MR_tempr1, 0) = MR_ctfield(3, MR_tempr5, 2);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_ctfield(3, MR_tempr5, 1);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr3;
	MR_r1 = (MR_Word) MR_string_const("V%d == V%d", 10);
	}
	MR_np_call_localret_ent(io__format_4_0,
		mdprof_procrep__print_atomic_goal_4_0_i3);
MR_def_label(mdprof_procrep__print_atomic_goal_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(io__nl_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdprof_procrep_module9)
	MR_init_entry1(mdprof_procrep__print_goal_4_0);
	MR_init_label8(mdprof_procrep__print_goal_4_0,5,74,8,9,10,75,42,45)
	MR_init_label8(mdprof_procrep__print_goal_4_0,46,52,77,14,15,16,17,18)
	MR_init_label8(mdprof_procrep__print_goal_4_0,19,20,21,22,78,26,27,28)
	MR_init_label8(mdprof_procrep__print_goal_4_0,79,32,33,56,35,37,38,39)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdprof_procrep__print_goal_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r2),
		MR_LABEL_AP(mdprof_procrep__print_goal_4_0_i5) MR_AND
		MR_LABEL_AP(mdprof_procrep__print_goal_4_0_i74) MR_AND
		MR_LABEL_AP(mdprof_procrep__print_goal_4_0_i75) MR_AND
		MR_LABEL_AP(mdprof_procrep__print_goal_4_0_i52));
MR_def_label(mdprof_procrep__print_goal_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_ctfield(0, MR_r2, 0);
	MR_np_tailcall_ent(mdprof_procrep__print_conj_4_0);
MR_def_label(mdprof_procrep__print_goal_4_0,74)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_ctfield(1, MR_r2, 0);
	MR_np_call_localret_ent(mdprof_procrep__indent_3_0,
		mdprof_procrep__print_goal_4_0_i8);
MR_def_label(mdprof_procrep__print_goal_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("(\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		mdprof_procrep__print_goal_4_0_i9);
MR_def_label(mdprof_procrep__print_goal_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = (MR_Integer) 0;
	MR_np_call_localret_ent(mdprof_procrep__print_disj_5_0,
		mdprof_procrep__print_goal_4_0_i10);
MR_def_label(mdprof_procrep__print_goal_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(mdprof_procrep__indent_3_0,
		mdprof_procrep__print_goal_4_0_i39);
MR_def_label(mdprof_procrep__print_goal_4_0,75)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_ctfield(2, MR_tempr1, 0);
	MR_sv(3) = MR_ctfield(2, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(mdprof_procrep__indent_3_0,
		mdprof_procrep__print_goal_4_0_i42);
MR_def_label(mdprof_procrep__print_goal_4_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_string_const("( switch on V%d\n", 16);
	}
	MR_np_call_localret_ent(io__format_4_0,
		mdprof_procrep__print_goal_4_0_i45);
MR_def_label(mdprof_procrep__print_goal_4_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r3 = (MR_Integer) 0;
	MR_np_call_localret_ent(mdprof_procrep__print_switch_5_0,
		mdprof_procrep__print_goal_4_0_i46);
MR_def_label(mdprof_procrep__print_goal_4_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(mdprof_procrep__indent_3_0,
		mdprof_procrep__print_goal_4_0_i39);
MR_def_label(mdprof_procrep__print_goal_4_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(3, MR_r2, 0);
	if (MR_INT_EQ(MR_tempr1,0)) {
		MR_GOTO_LAB(mdprof_procrep__print_goal_4_0_i77);
	}
	if (MR_INT_EQ(MR_tempr1,1)) {
		MR_GOTO_LAB(mdprof_procrep__print_goal_4_0_i78);
	}
	if (MR_INT_EQ(MR_tempr1,2)) {
		MR_GOTO_LAB(mdprof_procrep__print_goal_4_0_i79);
	}
	MR_r2 = MR_ctfield(3, MR_r2, 5);
	MR_np_tailcall_ent(mdprof_procrep__print_atomic_goal_4_0);
	}
MR_def_label(mdprof_procrep__print_goal_4_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_ctfield(3, MR_tempr1, 1);
	MR_sv(3) = MR_ctfield(3, MR_tempr1, 2);
	MR_sv(4) = MR_ctfield(3, MR_tempr1, 3);
	}
	MR_np_call_localret_ent(mdprof_procrep__indent_3_0,
		mdprof_procrep__print_goal_4_0_i14);
MR_def_label(mdprof_procrep__print_goal_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("(\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		mdprof_procrep__print_goal_4_0_i15);
MR_def_label(mdprof_procrep__print_goal_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_sv(1) + (MR_Integer) 1);
	MR_r2 = MR_sv(2);
	MR_np_localcall_lab(mdprof_procrep__print_goal_4_0,
		mdprof_procrep__print_goal_4_0_i16);
MR_def_label(mdprof_procrep__print_goal_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(mdprof_procrep__indent_3_0,
		mdprof_procrep__print_goal_4_0_i17);
MR_def_label(mdprof_procrep__print_goal_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("->\n", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		mdprof_procrep__print_goal_4_0_i18);
MR_def_label(mdprof_procrep__print_goal_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_sv(1) + (MR_Integer) 1);
	MR_r2 = MR_sv(3);
	MR_np_localcall_lab(mdprof_procrep__print_goal_4_0,
		mdprof_procrep__print_goal_4_0_i19);
MR_def_label(mdprof_procrep__print_goal_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(mdprof_procrep__indent_3_0,
		mdprof_procrep__print_goal_4_0_i20);
MR_def_label(mdprof_procrep__print_goal_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(";\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		mdprof_procrep__print_goal_4_0_i21);
MR_def_label(mdprof_procrep__print_goal_4_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_sv(1) + (MR_Integer) 1);
	MR_r2 = MR_sv(4);
	MR_np_localcall_lab(mdprof_procrep__print_goal_4_0,
		mdprof_procrep__print_goal_4_0_i22);
MR_def_label(mdprof_procrep__print_goal_4_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(mdprof_procrep__indent_3_0,
		mdprof_procrep__print_goal_4_0_i39);
MR_def_label(mdprof_procrep__print_goal_4_0,78)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_ctfield(3, MR_r2, 1);
	MR_np_call_localret_ent(mdprof_procrep__indent_3_0,
		mdprof_procrep__print_goal_4_0_i26);
MR_def_label(mdprof_procrep__print_goal_4_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("not (\n", 6);
	MR_np_call_localret_ent(io__write_string_3_0,
		mdprof_procrep__print_goal_4_0_i27);
MR_def_label(mdprof_procrep__print_goal_4_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_sv(1) + (MR_Integer) 1);
	MR_r2 = MR_sv(2);
	MR_np_localcall_lab(mdprof_procrep__print_goal_4_0,
		mdprof_procrep__print_goal_4_0_i28);
MR_def_label(mdprof_procrep__print_goal_4_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(mdprof_procrep__indent_3_0,
		mdprof_procrep__print_goal_4_0_i39);
MR_def_label(mdprof_procrep__print_goal_4_0,79)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_ctfield(3, MR_tempr1, 2);
	MR_sv(3) = MR_ctfield(3, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(mdprof_procrep__indent_3_0,
		mdprof_procrep__print_goal_4_0_i32);
MR_def_label(mdprof_procrep__print_goal_4_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("scope", 5);
	MR_np_call_localret_ent(io__write_string_3_0,
		mdprof_procrep__print_goal_4_0_i33);
MR_def_label(mdprof_procrep__print_goal_4_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(2),0)) {
		MR_GOTO_LAB(mdprof_procrep__print_goal_4_0_i35);
	}
MR_def_label(mdprof_procrep__print_goal_4_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" (\n", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		mdprof_procrep__print_goal_4_0_i37);
MR_def_label(mdprof_procrep__print_goal_4_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" cut", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		mdprof_procrep__print_goal_4_0_i56);
MR_def_label(mdprof_procrep__print_goal_4_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_sv(1) + (MR_Integer) 1);
	MR_r2 = MR_sv(3);
	MR_np_localcall_lab(mdprof_procrep__print_goal_4_0,
		mdprof_procrep__print_goal_4_0_i38);
MR_def_label(mdprof_procrep__print_goal_4_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(mdprof_procrep__indent_3_0,
		mdprof_procrep__print_goal_4_0_i39);
MR_def_label(mdprof_procrep__print_goal_4_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(")\n", 2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdprof_procrep_module10)
	MR_init_entry1(mdprof_procrep__print_conj_4_0);
	MR_init_label3(mdprof_procrep__print_conj_4_0,4,3,6)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdprof_procrep__print_conj_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(mdprof_procrep__print_conj_4_0_i3);
	}
	MR_np_call_localret_ent(mdprof_procrep__indent_3_0,
		mdprof_procrep__print_conj_4_0_i4);
MR_def_label(mdprof_procrep__print_conj_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("true\n", 5);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(mdprof_procrep__print_conj_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_ctfield(1, MR_r2, 1);
	MR_r2 = MR_ctfield(1, MR_r2, 0);
	MR_np_call_localret_ent(mdprof_procrep__print_goal_4_0,
		mdprof_procrep__print_conj_4_0_i6);
MR_def_label(mdprof_procrep__print_conj_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(mdprof_procrep__print_conj_2_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdprof_procrep_module11)
	MR_init_entry1(mdprof_procrep__print_conj_2_4_0);
	MR_init_label3(mdprof_procrep__print_conj_2_4_0,10,4,12)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdprof_procrep__print_conj_2_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(mdprof_procrep__print_conj_2_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(mdprof_procrep__print_conj_2_4_0_i12);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_ctfield(1, MR_r2, 1);
	MR_r2 = MR_ctfield(1, MR_r2, 0);
	MR_np_call_localret_ent(mdprof_procrep__print_goal_4_0,
		mdprof_procrep__print_conj_2_4_0_i4);
MR_def_label(mdprof_procrep__print_conj_2_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(mdprof_procrep__print_conj_2_4_0_i10);
MR_def_label(mdprof_procrep__print_conj_2_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdprof_procrep_module12)
	MR_init_entry1(mdprof_procrep__print_disj_5_0);
	MR_init_label6(mdprof_procrep__print_disj_5_0,17,5,6,7,8,19)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdprof_procrep__print_disj_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(mdprof_procrep__print_disj_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(mdprof_procrep__print_disj_5_0_i19);
	}
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(mdprof_procrep__print_disj_5_0_i5);
	}
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_ctfield(1, MR_r2, 0);
	MR_sv(3) = MR_ctfield(1, MR_tempr1, 1);
	MR_r1 = ((MR_Integer) MR_r1 + (MR_Integer) 1);
	}
	MR_np_call_localret_ent(mdprof_procrep__print_goal_4_0,
		mdprof_procrep__print_disj_5_0_i8);
MR_def_label(mdprof_procrep__print_disj_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_ctfield(1, MR_tempr1, 0);
	MR_sv(3) = MR_ctfield(1, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(mdprof_procrep__indent_3_0,
		mdprof_procrep__print_disj_5_0_i6);
MR_def_label(mdprof_procrep__print_disj_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(";\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		mdprof_procrep__print_disj_5_0_i7);
MR_def_label(mdprof_procrep__print_disj_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r1 = ((MR_Integer) MR_sv(1) + (MR_Integer) 1);
	MR_np_call_localret_ent(mdprof_procrep__print_goal_4_0,
		mdprof_procrep__print_disj_5_0_i8);
MR_def_label(mdprof_procrep__print_disj_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r3 = (MR_Integer) 1;
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(mdprof_procrep__print_disj_5_0_i17);
MR_def_label(mdprof_procrep__print_disj_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__program_representation__type_ctor_info_cons_id_arity_rep_0;

MR_BEGIN_MODULE(mdprof_procrep_module13)
	MR_init_entry1(mdprof_procrep__print_switch_5_0);
	MR_init_label8(mdprof_procrep__print_switch_5_0,20,5,6,7,8,10,11,22)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdprof_procrep__print_switch_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(mdprof_procrep__print_switch_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(mdprof_procrep__print_switch_5_0_i22);
	}
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(mdprof_procrep__print_switch_5_0_i5);
	}
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r2;
	MR_sv(3) = MR_ctfield(1, MR_tempr3, 1);
	MR_tempr1 = MR_tempr3;
	MR_tempr2 = MR_ctfield(1, MR_tempr3, 0);
	MR_r2 = MR_ctfield(0, MR_tempr2, 0);
	MR_sv(2) = MR_ctfield(0, MR_tempr2, 1);
	MR_sv(4) = MR_ctfield(0, MR_tempr2, 2);
	MR_r1 = ((MR_Integer) MR_r1 + (MR_Integer) 1);
	}
	MR_np_call_localret_ent(mdprof_procrep__print_cons_id_and_arity_4_0,
		mdprof_procrep__print_switch_5_0_i8);
MR_def_label(mdprof_procrep__print_switch_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_ctfield(1, MR_tempr1, 0);
	MR_sv(3) = MR_ctfield(1, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(mdprof_procrep__indent_3_0,
		mdprof_procrep__print_switch_5_0_i6);
MR_def_label(mdprof_procrep__print_switch_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(";\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		mdprof_procrep__print_switch_5_0_i7);
MR_def_label(mdprof_procrep__print_switch_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(2);
	MR_r2 = MR_ctfield(0, MR_tempr2, 0);
	MR_tempr1 = MR_tempr2;
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 2);
	MR_r1 = ((MR_Integer) MR_sv(1) + (MR_Integer) 1);
	}
	MR_np_call_localret_ent(mdprof_procrep__print_cons_id_and_arity_4_0,
		mdprof_procrep__print_switch_5_0_i8);
MR_def_label(mdprof_procrep__print_switch_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(3,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(mdprof_procrep__print_cons_id_and_arity_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = ((MR_Integer) MR_sv(1) + (MR_Integer) 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__program_representation, cons_id_arity_rep);
	MR_r2 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r4 = MR_sv(2);
	}
	MR_np_call_localret_ent(list__foldl_4_0,
		mdprof_procrep__print_switch_5_0_i10);
MR_def_label(mdprof_procrep__print_switch_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_sv(1) + (MR_Integer) 1);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(mdprof_procrep__print_goal_4_0,
		mdprof_procrep__print_switch_5_0_i11);
MR_def_label(mdprof_procrep__print_switch_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r3 = (MR_Integer) 1;
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(mdprof_procrep__print_switch_5_0_i20);
MR_def_label(mdprof_procrep__print_switch_5_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdprof_procrep_module14)
	MR_init_entry1(mdprof_procrep__print_proc_3_0);
	MR_init_label8(mdprof_procrep__print_proc_3_0,5,3,2,53,39,40,45,46)
	MR_init_label2(mdprof_procrep__print_proc_3_0,48,49)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdprof_procrep__print_proc_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7;
	MR_tempr7 = MR_r1;
	MR_tempr1 = MR_ctfield(0, MR_tempr7, 0);
	MR_r4 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(mdprof_procrep__print_proc_3_0_i3);
	}
	MR_tempr2 = MR_ctfield(0, MR_tempr1, 0);
	if (MR_INT_NE(MR_tempr2,1)) {
		MR_GOTO_LAB(mdprof_procrep__print_proc_3_0_i5);
	}
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr2, 0) = MR_ctfield(0, MR_tempr1, 1);
	MR_tag_alloc_heap(MR_tempr3, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr3, 0) = MR_ctfield(0, MR_tempr1, 3);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr4, 0) = MR_ctfield(0, MR_tempr1, 4);
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr5, 0) = MR_ctfield(0, MR_tempr1, 5);
	MR_tag_alloc_heap(MR_tempr6, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr6, 0) = MR_tempr5;
	MR_tfield(1, MR_tempr6, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr5, 0) = MR_tempr4;
	MR_tfield(1, MR_tempr5, 1) = MR_tempr6;
	MR_tag_alloc_heap(MR_tempr6, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr6, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr6, 1) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = MR_tempr6;
	MR_tag_alloc_heap(MR_tempr6, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr6, 0) = (MR_Word) MR_TAG_COMMON(2,2,3);
	MR_tfield(1, MR_tempr6, 1) = MR_tempr3;
	MR_tempr2 = MR_ctfield(0, MR_tempr7, 1);
	MR_sv(1) = MR_ctfield(0, MR_tempr2, 0);
	MR_sv(2) = MR_ctfield(0, MR_tempr2, 1);
	MR_r2 = MR_tempr6;
	MR_r1 = (MR_Word) MR_string_const("%s %s.%s/%d-%d", 14);
	}
	MR_np_call_localret_ent(io__format_4_0,
		mdprof_procrep__print_proc_3_0_i2);
MR_def_label(mdprof_procrep__print_proc_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tempr6 = MR_r4;
	MR_tfield(2, MR_tempr1, 0) = MR_ctfield(0, MR_tempr6, 1);
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr2, 0) = MR_ctfield(0, MR_tempr6, 3);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr3, 0) = MR_ctfield(0, MR_tempr6, 4);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr4, 0) = MR_ctfield(0, MR_tempr6, 5);
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr5, 0) = MR_tempr4;
	MR_tfield(1, MR_tempr5, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr5, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr5, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr5, 0) = (MR_Word) MR_TAG_COMMON(2,2,4);
	MR_tfield(1, MR_tempr5, 1) = MR_tempr2;
	MR_tempr1 = MR_ctfield(0, MR_r1, 1);
	MR_sv(1) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 1);
	MR_r2 = MR_tempr5;
	MR_r1 = (MR_Word) MR_string_const("%s %s.%s/%d-%d", 14);
	}
	MR_np_call_localret_ent(io__format_4_0,
		mdprof_procrep__print_proc_3_0_i2);
MR_def_label(mdprof_procrep__print_proc_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tempr7 = MR_r4;
	MR_tfield(2, MR_tempr1, 0) = MR_ctfield(1, MR_tempr7, 3);
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr2, 0) = MR_ctfield(1, MR_tempr7, 1);
	MR_tag_alloc_heap(MR_tempr3, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr3, 0) = MR_ctfield(1, MR_tempr7, 0);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr4, 0) = MR_ctfield(1, MR_tempr7, 4);
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr5, 0) = MR_ctfield(1, MR_tempr7, 5);
	MR_tag_alloc_heap(MR_tempr6, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr6, 0) = MR_tempr5;
	MR_tfield(1, MR_tempr6, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr5, 0) = MR_tempr4;
	MR_tfield(1, MR_tempr5, 1) = MR_tempr6;
	MR_tag_alloc_heap(MR_tempr6, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr6, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr6, 1) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = MR_tempr6;
	MR_tag_alloc_heap(MR_tempr6, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr6, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr6, 1) = MR_tempr3;
	MR_tempr1 = MR_ctfield(0, MR_r1, 1);
	MR_sv(1) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 1);
	MR_r1 = (MR_Word) MR_string_const("%s for %s.%s/%d-%d", 18);
	MR_r2 = MR_tempr6;
	}
	MR_np_call_localret_ent(io__format_4_0,
		mdprof_procrep__print_proc_3_0_i2);
MR_def_label(mdprof_procrep__print_proc_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(mdprof_procrep__print_proc_3_0_i39);
	}
MR_def_label(mdprof_procrep__print_proc_3_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" :-\n", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		mdprof_procrep__print_proc_3_0_i48);
MR_def_label(mdprof_procrep__print_proc_3_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("(", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		mdprof_procrep__print_proc_3_0_i40);
MR_def_label(mdprof_procrep__print_proc_3_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_ctfield(1, MR_sv(1), 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = (MR_Word) MR_TAG_COMMON(2,2,0);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_sv(1) = MR_ctfield(1, MR_sv(1), 1);
	MR_r1 = (MR_Word) MR_string_const("%sV%d", 5);
	}
	MR_np_call_localret_ent(io__format_4_0,
		mdprof_procrep__print_proc_3_0_i45);
MR_def_label(mdprof_procrep__print_proc_3_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_string_const(", ", 2);
	MR_np_call_localret_ent(mdprof_procrep__print_args_2_4_0,
		mdprof_procrep__print_proc_3_0_i46);
MR_def_label(mdprof_procrep__print_proc_3_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(")", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		mdprof_procrep__print_proc_3_0_i53);
MR_def_label(mdprof_procrep__print_proc_3_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(mdprof_procrep__print_goal_4_0,
		mdprof_procrep__print_proc_3_0_i49);
MR_def_label(mdprof_procrep__print_proc_3_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(io__nl_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__mdprof_procrep_maybe_bunch_0(void)
{
	mdprof_procrep_module0();
	mdprof_procrep_module1();
	mdprof_procrep_module2();
	mdprof_procrep_module3();
	mdprof_procrep_module4();
	mdprof_procrep_module5();
	mdprof_procrep_module6();
	mdprof_procrep_module7();
	mdprof_procrep_module8();
	mdprof_procrep_module9();
	mdprof_procrep_module10();
	mdprof_procrep_module11();
	mdprof_procrep_module12();
	mdprof_procrep_module13();
	mdprof_procrep_module14();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__mdprof_procrep__init(void);
void mercury__mdprof_procrep__init_type_tables(void);
void mercury__mdprof_procrep__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__mdprof_procrep__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__mdprof_procrep__init_complexity_procs(void);
#endif

void mercury__mdprof_procrep__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__mdprof_procrep_maybe_bunch_0();
	mercury__mdprof_procrep__init_debugger();
}

void mercury__mdprof_procrep__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}


void mercury__mdprof_procrep__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__mdprof_procrep__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__mdprof_procrep);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__mdprof_procrep__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
