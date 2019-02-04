/*
** Automatically generated from `diff.m'
** by the Mercury compiler,
** version rotd-2011-07-19, configured for x86_64-unknown-linux-gnu.
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
INIT mercury__mdb__diff__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 25 "mdb.diff.c"
#include "mdb.diff.mh"

#line 28 "mdb.diff.c"
#line 3 "mdb.int0"
#include "mdb.mh"

#line 32 "mdb.diff.c"
#line 526 "../library/io.int"
#include "io.mh"

#line 36 "mdb.diff.c"
#line 536 "../library/io.int"
#include "string.mh"

#line 40 "mdb.diff.c"
#line 202 "../mdbcomp/mdbcomp.program_representation.int"
#include "mdbcomp.program_representation.mh"

#line 44 "mdb.diff.c"
#line 31 "../library/bitmap.int2"
#include "bitmap.mh"

#line 48 "mdb.diff.c"
#line 30 "../library/time.int2"
#include "time.mh"

#line 52 "mdb.diff.c"
#line 33 "../library/array.int2"
#include "array.mh"

#line 56 "mdb.diff.c"
#line 39 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 60 "mdb.diff.c"
#line 61 "mdb.diff.c"
#ifndef MDB__DIFF_DECL_GUARD
#define MDB__DIFF_DECL_GUARD

#line 65 "mdb.diff.c"
#line 66 "mdb.diff.c"

#endif
#line 69 "mdb.diff.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

struct mercury_type_0 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[5];
};
MR_STATIC_LINKAGE const struct mercury_type_0 mercury_common_0[];

struct mercury_type_1 {
	MR_Word * f1;
	MR_Code * f2;
	MR_Integer f3;
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_mdb__diff__type_ctor_info_term_path_diff_0;
MR_decl_label10(mdb__diff__compute_arg_diffs_6_0, 43,3,10,11,12,13,15,14,16,8)
MR_decl_label6(mdb__diff__compute_diffs_5_0, 2,3,4,5,6,8)
MR_decl_label10(mdb__diff__report_diffs_6_0, 3,4,5,7,8,9,11,14,16,17)
MR_decl_label10(mdb__diff__report_diffs_6_0, 15,23,24,25,26,27,28,29,30,31)
MR_decl_label9(mdb__diff__report_diffs_6_0, 32,34,10,37,40,43,44,45,2)
MR_decl_label10(mdb__diff__show_diff_5_0, 2,3,4,6,8,9,10,11,12,13)
MR_decl_label10(mdb__diff__show_diff_5_0, 14,15,16,17,18,19,20,21,22,23)
MR_decl_label1(mdb__diff__show_diff_5_0, 24)
MR_decl_label4(mdb__diff__show_path_rest_3_0, 11,4,5,13)
MR_decl_label4(__Unify___mdb__diff__term_path_diff_0_0, 4,6,10,1)
MR_decl_label5(__Compare___mdb__diff__term_path_diff_0_0, 3,2,5,9,29)
MR_decl_static(mdb__diff__compute_diffs_5_0)
MR_decl_static(mdb__diff__compute_arg_diffs_6_0)
MR_def_extern_entry(mdb__diff__report_diffs_6_0)
MR_decl_static(mdb__diff__show_path_rest_3_0)
MR_decl_static(mdb__diff__show_diff_5_0)
MR_decl_static(__Unify___mdb__diff__term_path_diff_0_0)
MR_decl_static(__Compare___mdb__diff__term_path_diff_0_0)

static const MR_UserClosureId
mercury_data__closure_layout__mdb__diff__report_diffs_6_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_mdb__diff__type_ctor_info_term_path_diff_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_state_0;
static const struct mercury_type_0 mercury_common_0[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__mdb__diff__report_diffs_6_0_1,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_CTOR0_ADDR(mdb__diff, term_path_diff),
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR,
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
};

static const struct mercury_type_1 mercury_common_1[1] =
{
{
MR_COMMON(0,0),
MR_ENTRY_AP(mdb__diff__show_diff_5_0),
0
},
};
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1builtin__type_ctor_info_int_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_int_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_univ__type_ctor_info_univ_0;
extern const MR_TypeCtorInfo_Struct mercury_data_univ__type_ctor_info_univ_0;

const MR_PseudoTypeInfo mercury_data_mdb__diff__field_types_term_path_diff_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_univ__type_ctor_info_univ_0,
	(MR_PseudoTypeInfo) &mercury_data_univ__type_ctor_info_univ_0
};

static const MR_DuFunctorDesc mercury_data_mdb__diff__du_functor_desc_term_path_diff_0_0 = {
	"term_path_diff",
	3,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_mdb__diff__field_types_term_path_diff_0_0,
	NULL,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_mdb__diff__du_stag_ordered_term_path_diff_0_0[] = {
	&mercury_data_mdb__diff__du_functor_desc_term_path_diff_0_0

};

const MR_DuPtagLayout mercury_data_mdb__diff__du_ptag_ordered_term_path_diff_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_mdb__diff__du_stag_ordered_term_path_diff_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_mdb__diff__du_name_ordered_term_path_diff_0[] = {
	&mercury_data_mdb__diff__du_functor_desc_term_path_diff_0_0
};

const MR_Integer mercury_data_mdb__diff__functor_number_map_term_path_diff_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_mdb__diff__type_ctor_info_term_path_diff_0 = {
	0,
	15,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdb__diff__term_path_diff_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdb__diff__term_path_diff_0_0)),
	"mdb.diff",
	"term_path_diff",
	{ (void *)mercury_data_mdb__diff__du_name_ordered_term_path_diff_0 },
	{ (void *)mercury_data_mdb__diff__du_ptag_ordered_term_path_diff_0 },
	1,
	4,
	mercury_data_mdb__diff__functor_number_map_term_path_diff_0
};


static const MR_UserClosureId
mercury_data__closure_layout__mdb__diff__report_diffs_6_0_1 = {
{
MR_PREDICATE,
"mdb.diff",
"mdb.diff",
"show_diff",
5,
0
},
"mdb.diff",
"diff.m",
65,
"42"
};


MR_decl_entry(fn__univ__univ_value_1_0);
MR_decl_entry(deconstruct__deconstruct_5_2);
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
MR_decl_entry(list__reverse_2_0);

MR_BEGIN_MODULE(mdb__diff_module0)
	MR_init_entry1(mdb__diff__compute_diffs_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__diff__compute_diffs_5_0);
	MR_init_label6(mdb__diff__compute_diffs_5_0,2,3,4,5,6,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'compute_diffs'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__diff__compute_diffs_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(5) = MR_r3;
	MR_sv(6) = MR_r4;
	MR_np_call_localret_ent(fn__univ__univ_value_1_0,
		mdb__diff__compute_diffs_5_0_i2);
MR_def_label(mdb__diff__compute_diffs_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = (MR_Integer) 2;
	MR_np_call_localret_ent(deconstruct__deconstruct_5_2,
		mdb__diff__compute_diffs_5_0_i3);
MR_def_label(mdb__diff__compute_diffs_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r3;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__univ__univ_value_1_0,
		mdb__diff__compute_diffs_5_0_i4);
MR_def_label(mdb__diff__compute_diffs_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = (MR_Integer) 2;
	MR_np_call_localret_ent(deconstruct__deconstruct_5_2,
		mdb__diff__compute_diffs_5_0_i5);
MR_def_label(mdb__diff__compute_diffs_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_sv(3), (char *) (MR_Word *) MR_r1) != 0)) {
		MR_GOTO_LAB(mdb__diff__compute_diffs_5_0_i6);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_r3;
	MR_r3 = MR_sv(5);
	MR_r4 = (MR_Integer) 1;
	MR_r5 = MR_sv(6);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(mdb__diff__compute_arg_diffs_6_0);
MR_def_label(mdb__diff__compute_diffs_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(list__reverse_2_0,
		mdb__diff__compute_diffs_5_0_i8);
MR_def_label(mdb__diff__compute_diffs_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	MR_tfield(0, MR_r2, 1) = MR_sv(1);
	MR_tfield(0, MR_r2, 2) = MR_sv(2);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_r2;
	MR_tfield(1, MR_r1, 1) = MR_sv(6);
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(require__error_1_0);

MR_BEGIN_MODULE(mdb__diff_module1)
	MR_init_entry1(mdb__diff__compute_arg_diffs_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__diff__compute_arg_diffs_6_0);
	MR_init_label10(mdb__diff__compute_arg_diffs_6_0,43,3,10,11,12,13,15,14,16,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'compute_arg_diffs'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__diff__compute_arg_diffs_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
MR_def_label(mdb__diff__compute_arg_diffs_6_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(mdb__diff__compute_arg_diffs_6_0_i3);
	}
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(mdb__diff__compute_arg_diffs_6_0_i8);
	}
	MR_r1 = MR_r5;
	MR_decr_sp_and_return(11);
MR_def_label(mdb__diff__compute_arg_diffs_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(mdb__diff__compute_arg_diffs_6_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_sv(6) = MR_tempr1;
	MR_tempr2 = MR_r4;
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tempr3 = MR_r3;
	MR_tfield(1, MR_tempr1, 1) = MR_tempr3;
	MR_sv(1) = MR_tempr3;
	MR_sv(2) = MR_tempr2;
	MR_sv(3) = MR_r5;
	MR_sv(4) = MR_tfield(1, MR_r2, 0);
	MR_sv(5) = MR_tfield(1, MR_r2, 1);
	MR_sv(7) = MR_tfield(1, MR_r1, 1);
	MR_sv(8) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_sv(8);
	}
	MR_np_call_localret_ent(fn__univ__univ_value_1_0,
		mdb__diff__compute_arg_diffs_6_0_i10);
MR_def_label(mdb__diff__compute_arg_diffs_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = (MR_Integer) 2;
	MR_np_call_localret_ent(deconstruct__deconstruct_5_2,
		mdb__diff__compute_arg_diffs_6_0_i11);
MR_def_label(mdb__diff__compute_arg_diffs_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_sv(10) = MR_r3;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(fn__univ__univ_value_1_0,
		mdb__diff__compute_arg_diffs_6_0_i12);
MR_def_label(mdb__diff__compute_arg_diffs_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = (MR_Integer) 2;
	MR_np_call_localret_ent(deconstruct__deconstruct_5_2,
		mdb__diff__compute_arg_diffs_6_0_i13);
MR_def_label(mdb__diff__compute_arg_diffs_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_sv(9), (char *) (MR_Word *) MR_r1) != 0)) {
		MR_GOTO_LAB(mdb__diff__compute_arg_diffs_6_0_i14);
	}
	MR_r1 = MR_sv(10);
	MR_r2 = MR_r3;
	MR_r3 = MR_sv(6);
	MR_r4 = (MR_Integer) 1;
	MR_r5 = MR_sv(3);
	MR_np_localcall_lab(mdb__diff__compute_arg_diffs_6_0,
		mdb__diff__compute_arg_diffs_6_0_i15);
MR_def_label(mdb__diff__compute_arg_diffs_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_r5 = MR_r1;
	MR_r4 = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_r1 = MR_sv(7);
	MR_succip_word = MR_sv(11);
	MR_GOTO_LAB(mdb__diff__compute_arg_diffs_6_0_i43);
MR_def_label(mdb__diff__compute_arg_diffs_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(list__reverse_2_0,
		mdb__diff__compute_arg_diffs_6_0_i16);
MR_def_label(mdb__diff__compute_arg_diffs_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(8);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(4);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r5 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_sv(3);
	MR_r3 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_r4 = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_r1 = MR_sv(7);
	MR_succip_word = MR_sv(11);
	MR_GOTO_LAB(mdb__diff__compute_arg_diffs_6_0_i43);
	}
MR_def_label(mdb__diff__compute_arg_diffs_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("compute_arg_diffs: argument list mismatch", 41);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(require__error_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__univ__univ_type_1_0);
MR_decl_entry(__Unify___type_desc__type_desc_0_0);
MR_decl_entry(list__length_2_0);
MR_decl_entry(list__drop_3_0);
MR_decl_entry(fn__int__min_2_0);
MR_decl_entry(fn__string__int_to_string_1_0);
MR_decl_entry(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
MR_decl_entry(io__write_string_3_0);
MR_decl_entry(list__take_upto_3_0);
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_state_0;
MR_decl_entry(list__foldl2_6_11);

MR_BEGIN_MODULE(mdb__diff_module2)
	MR_init_entry1(mdb__diff__report_diffs_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__diff__report_diffs_6_0);
	MR_init_label10(mdb__diff__report_diffs_6_0,3,4,5,7,8,9,11,14,16,17)
	MR_init_label10(mdb__diff__report_diffs_6_0,15,23,24,25,26,27,28,29,30,31)
	MR_init_label9(mdb__diff__report_diffs_6_0,32,34,10,37,40,43,44,45,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'report_diffs'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdb__diff__report_diffs_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_r4;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__univ__univ_type_1_0,
		mdb__diff__report_diffs_6_0_i3);
MR_def_label(mdb__diff__report_diffs_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(fn__univ__univ_type_1_0,
		mdb__diff__report_diffs_6_0_i4);
MR_def_label(mdb__diff__report_diffs_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(__Unify___type_desc__type_desc_0_0,
		mdb__diff__report_diffs_6_0_i5);
MR_def_label(mdb__diff__report_diffs_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdb__diff__report_diffs_6_0_i2);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(mdb__diff__compute_diffs_5_0,
		mdb__diff__report_diffs_6_0_i7);
MR_def_label(mdb__diff__report_diffs_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = (MR_Word) MR_CTOR0_ADDR(mdb__diff, term_path_diff);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__reverse_2_0,
		mdb__diff__report_diffs_6_0_i8);
MR_def_label(mdb__diff__report_diffs_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(list__length_2_0,
		mdb__diff__report_diffs_6_0_i9);
MR_def_label(mdb__diff__report_diffs_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__drop_3_0,
		mdb__diff__report_diffs_6_0_i11);
MR_def_label(mdb__diff__report_diffs_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdb__diff__report_diffs_6_0_i10);
	}
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(mdb__diff__report_diffs_6_0_i10);
	}
	MR_sv(4) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(5) = ((MR_Integer) MR_tempr1 + (MR_Integer) 1);
	MR_r1 = ((MR_Integer) MR_tempr1 + (MR_Integer) MR_sv(2));
	MR_r2 = MR_sv(3);
	}
	MR_np_call_localret_ent(fn__int__min_2_0,
		mdb__diff__report_diffs_6_0_i14);
MR_def_label(mdb__diff__report_diffs_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_sv(5) != MR_r1)) {
		MR_GOTO_LAB(mdb__diff__report_diffs_6_0_i15);
	}
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		mdb__diff__report_diffs_6_0_i16);
MR_def_label(mdb__diff__report_diffs_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(":\n", 2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdb__diff__report_diffs_6_0_i17);
MR_def_label(mdb__diff__report_diffs_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(" diffs, showing diff ", 21);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdb__diff__report_diffs_6_0_i28);
MR_def_label(mdb__diff__report_diffs_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		mdb__diff__report_diffs_6_0_i23);
MR_def_label(mdb__diff__report_diffs_6_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(":\n", 2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdb__diff__report_diffs_6_0_i24);
MR_def_label(mdb__diff__report_diffs_6_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("-", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdb__diff__report_diffs_6_0_i25);
MR_def_label(mdb__diff__report_diffs_6_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		mdb__diff__report_diffs_6_0_i26);
MR_def_label(mdb__diff__report_diffs_6_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdb__diff__report_diffs_6_0_i27);
MR_def_label(mdb__diff__report_diffs_6_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(" diffs, showing diffs ", 22);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdb__diff__report_diffs_6_0_i28);
MR_def_label(mdb__diff__report_diffs_6_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		mdb__diff__report_diffs_6_0_i29);
MR_def_label(mdb__diff__report_diffs_6_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdb__diff__report_diffs_6_0_i30);
MR_def_label(mdb__diff__report_diffs_6_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("There are ", 10);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdb__diff__report_diffs_6_0_i31);
MR_def_label(mdb__diff__report_diffs_6_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		mdb__diff__report_diffs_6_0_i32);
MR_def_label(mdb__diff__report_diffs_6_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(list__take_upto_3_0,
		mdb__diff__report_diffs_6_0_i34);
MR_def_label(mdb__diff__report_diffs_6_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r3 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r5 = MR_tempr1;
	MR_r6 = MR_sv(1);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(list__foldl2_6_11);
	}
MR_def_label(mdb__diff__report_diffs_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(3),0)) {
		MR_GOTO_LAB(mdb__diff__report_diffs_6_0_i37);
	}
	MR_r1 = (MR_Word) MR_string_const("There are no diffs.\n", 20);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(mdb__diff__report_diffs_6_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(3),1)) {
		MR_GOTO_LAB(mdb__diff__report_diffs_6_0_i40);
	}
	MR_r1 = (MR_Word) MR_string_const("There is only one diff.\n", 24);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(mdb__diff__report_diffs_6_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		mdb__diff__report_diffs_6_0_i43);
MR_def_label(mdb__diff__report_diffs_6_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(" diffs.\n", 8);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdb__diff__report_diffs_6_0_i44);
MR_def_label(mdb__diff__report_diffs_6_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("There are only ", 15);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdb__diff__report_diffs_6_0_i45);
MR_def_label(mdb__diff__report_diffs_6_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(mdb__diff__report_diffs_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("The two values are of different types.\n", 39);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(io__write_int_3_0);

MR_BEGIN_MODULE(mdb__diff_module3)
	MR_init_entry1(mdb__diff__show_path_rest_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__diff__show_path_rest_3_0);
	MR_init_label4(mdb__diff__show_path_rest_3_0,11,4,5,13)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'show_path_rest'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__diff__show_path_rest_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(mdb__diff__show_path_rest_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(mdb__diff__show_path_rest_3_0_i13);
	}
	MR_sv(1) = MR_tfield(1, MR_r1, 0);
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r1 = (MR_Word) MR_string_const("/", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		mdb__diff__show_path_rest_3_0_i4);
MR_def_label(mdb__diff__show_path_rest_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__write_int_3_0,
		mdb__diff__show_path_rest_3_0_i5);
MR_def_label(mdb__diff__show_path_rest_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(mdb__diff__show_path_rest_3_0_i11);
MR_def_label(mdb__diff__show_path_rest_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(deconstruct__functor_4_2);

MR_BEGIN_MODULE(mdb__diff_module4)
	MR_init_entry1(mdb__diff__show_diff_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__diff__show_diff_5_0);
	MR_init_label10(mdb__diff__show_diff_5_0,2,3,4,6,8,9,10,11,12,13)
	MR_init_label10(mdb__diff__show_diff_5_0,14,15,16,17,18,19,20,21,22,23)
	MR_init_label1(mdb__diff__show_diff_5_0,24)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'show_diff'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__diff__show_diff_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(4) = ((MR_Integer) MR_r2 + (MR_Integer) 1);
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		mdb__diff__show_diff_5_0_i2);
MR_def_label(mdb__diff__show_diff_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(": ", 2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdb__diff__show_diff_5_0_i3);
MR_def_label(mdb__diff__show_diff_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		mdb__diff__show_diff_5_0_i4);
MR_def_label(mdb__diff__show_diff_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(1);
	MR_r3 = MR_tfield(0, MR_tempr2, 0);
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(mdb__diff__show_diff_5_0_i6);
	}
	MR_tempr1 = MR_tempr2;
	MR_sv(1) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(2) = MR_tfield(0, MR_tempr1, 2);
	MR_r1 = (MR_Word) MR_string_const("mismatch at root", 16);
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		mdb__diff__show_diff_5_0_i9);
MR_def_label(mdb__diff__show_diff_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(2) = MR_tfield(0, MR_tempr1, 2);
	MR_tempr2 = MR_r3;
	MR_sv(3) = MR_tfield(1, MR_tempr2, 1);
	MR_r1 = MR_tfield(1, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(io__write_int_3_0,
		mdb__diff__show_diff_5_0_i8);
MR_def_label(mdb__diff__show_diff_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(mdb__diff__show_path_rest_3_0,
		mdb__diff__show_diff_5_0_i9);
MR_def_label(mdb__diff__show_diff_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(": ", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		mdb__diff__show_diff_5_0_i10);
MR_def_label(mdb__diff__show_diff_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__univ__univ_value_1_0,
		mdb__diff__show_diff_5_0_i11);
MR_def_label(mdb__diff__show_diff_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = (MR_Integer) 2;
	MR_np_call_localret_ent(deconstruct__functor_4_2,
		mdb__diff__show_diff_5_0_i12);
MR_def_label(mdb__diff__show_diff_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r2;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__univ__univ_value_1_0,
		mdb__diff__show_diff_5_0_i13);
MR_def_label(mdb__diff__show_diff_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = (MR_Integer) 2;
	MR_np_call_localret_ent(deconstruct__functor_4_2,
		mdb__diff__show_diff_5_0_i14);
MR_def_label(mdb__diff__show_diff_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		mdb__diff__show_diff_5_0_i15);
MR_def_label(mdb__diff__show_diff_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdb__diff__show_diff_5_0_i16);
MR_def_label(mdb__diff__show_diff_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("/", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdb__diff__show_diff_5_0_i17);
MR_def_label(mdb__diff__show_diff_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdb__diff__show_diff_5_0_i18);
MR_def_label(mdb__diff__show_diff_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(" vs ", 4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdb__diff__show_diff_5_0_i19);
MR_def_label(mdb__diff__show_diff_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		mdb__diff__show_diff_5_0_i20);
MR_def_label(mdb__diff__show_diff_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdb__diff__show_diff_5_0_i21);
MR_def_label(mdb__diff__show_diff_5_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("/", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdb__diff__show_diff_5_0_i22);
MR_def_label(mdb__diff__show_diff_5_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdb__diff__show_diff_5_0_i23);
MR_def_label(mdb__diff__show_diff_5_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		mdb__diff__show_diff_5_0_i24);
MR_def_label(mdb__diff__show_diff_5_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___list__list_1_0);
MR_decl_entry(__Unify___univ__univ_0_0);

MR_BEGIN_MODULE(mdb__diff_module5)
	MR_init_entry1(__Unify___mdb__diff__term_path_diff_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___mdb__diff__term_path_diff_0_0);
	MR_init_label4(__Unify___mdb__diff__term_path_diff_0_0,4,6,10,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___mdb__diff__term_path_diff_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___mdb__diff__term_path_diff_0_0_i10);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(0, MR_tempr1, 2);
	MR_sv(3) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(4) = MR_tfield(0, MR_tempr2, 2);
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	MR_r3 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___mdb__diff__term_path_diff_0_0_i4);
MR_def_label(__Unify___mdb__diff__term_path_diff_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___mdb__diff__term_path_diff_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(__Unify___univ__univ_0_0,
		__Unify___mdb__diff__term_path_diff_0_0_i6);
MR_def_label(__Unify___mdb__diff__term_path_diff_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___mdb__diff__term_path_diff_0_0_i1);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___univ__univ_0_0);
MR_def_label(__Unify___mdb__diff__term_path_diff_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___mdb__diff__term_path_diff_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___list__list_1_0);
MR_decl_entry(__Compare___univ__univ_0_0);

MR_BEGIN_MODULE(mdb__diff_module6)
	MR_init_entry1(__Compare___mdb__diff__term_path_diff_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___mdb__diff__term_path_diff_0_0);
	MR_init_label5(__Compare___mdb__diff__term_path_diff_0_0,3,2,5,9,29)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___mdb__diff__term_path_diff_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___mdb__diff__term_path_diff_0_0_i3);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___mdb__diff__term_path_diff_0_0_i2);
MR_def_label(__Compare___mdb__diff__term_path_diff_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___mdb__diff__term_path_diff_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(4) = MR_tfield(0, MR_tempr5, 2);
	MR_sv(3) = MR_tfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_tempr1 = MR_tfield(0, MR_tempr6, 2);
	MR_tempr2 = MR_tfield(0, MR_tempr6, 1);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_tfield(0, MR_tempr3, 0);
	MR_r3 = MR_tfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___mdb__diff__term_path_diff_0_0_i5);
MR_def_label(__Compare___mdb__diff__term_path_diff_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__diff__term_path_diff_0_0_i29);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(__Compare___univ__univ_0_0,
		__Compare___mdb__diff__term_path_diff_0_0_i9);
MR_def_label(__Compare___mdb__diff__term_path_diff_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__diff__term_path_diff_0_0_i29);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___univ__univ_0_0);
MR_def_label(__Compare___mdb__diff__term_path_diff_0_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(mercury__mdb__diff__report_diffs_6_0);

void
ML_report_diffs(MR_Integer Mercury__argument1, MR_Integer Mercury__argument2, MR_Word Mercury__argument3, MR_Word Mercury__argument4);

void
ML_report_diffs(MR_Integer Mercury__argument1, MR_Integer Mercury__argument2, MR_Word Mercury__argument3, MR_Word Mercury__argument4)
{
#if MR_NUM_REAL_REGS > 0
	MR_Word c_regs[MR_NUM_REAL_REGS];
#endif
#if MR_THREAD_SAFE
	MR_bool must_finalize_engine;
#endif
#if MR_DEEP_PROFILING
	MR_CallSiteDynList **saved_cur_callback;
	MR_CallSiteDynamic *saved_cur_csd;
#endif

	MR_save_regs_to_mem(c_regs);
#if MR_THREAD_SAFE
	must_finalize_engine = MR_init_thread(MR_use_now);
#endif
#if MR_DEEP_PROFILING
	saved_cur_callback = MR_current_callback_site;
	saved_cur_csd = MR_current_call_site_dynamic;
	MR_setup_callback(MR_ENTRY(mercury__mdb__diff__report_diffs_6_0));
#endif
	MR_restore_registers();
	MR_r1 = Mercury__argument1;
	MR_r2 = Mercury__argument2;
	MR_r3 = Mercury__argument3;
	MR_r4 = Mercury__argument4;
	MR_save_transient_registers();
	(void) MR_call_engine(MR_ENTRY(mercury__mdb__diff__report_diffs_6_0), MR_FALSE);
	MR_restore_transient_registers();
#if MR_DEEP_PROFILING
	MR_current_call_site_dynamic = saved_cur_csd;
	MR_current_callback_site = saved_cur_callback;
#endif
#if MR_THREAD_SAFE
	if (must_finalize_engine) {
		 MR_finalize_thread_engine();
	}
#endif
	MR_restore_regs_from_mem(c_regs);
}


static void mercury__mdb__diff_maybe_bunch_0(void)
{
	mdb__diff_module0();
	mdb__diff_module1();
	mdb__diff_module2();
	mdb__diff_module3();
	mdb__diff_module4();
	mdb__diff_module5();
	mdb__diff_module6();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__mdb__diff__init(void);
void mercury__mdb__diff__init_type_tables(void);
void mercury__mdb__diff__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__mdb__diff__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__mdb__diff__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__mdb__diff__init_threadscope_string_table(void);
#endif

void mercury__mdb__diff__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__mdb__diff_maybe_bunch_0();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdb__diff__type_ctor_info_term_path_diff_0,
		mdb__diff__term_path_diff_0_0);
	mercury__mdb__diff__init_debugger();
}

void mercury__mdb__diff__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_mdb__diff__type_ctor_info_term_path_diff_0);
	}
}


void mercury__mdb__diff__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__mdb__diff__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__mdb__diff);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__mdb__diff__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__mdb__diff__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
