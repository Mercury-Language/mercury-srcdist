/*
** Automatically generated from `ite_gen.m'
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
INIT mercury__ll_backend__ite_gen__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 134 "../library/io.int2"
#include "io.mh"

#line 27 "ll_backend.ite_gen.c"
#line 142 "../library/io.int2"
#include "string.mh"

#line 31 "ll_backend.ite_gen.c"
#line 17 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 35 "ll_backend.ite_gen.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 39 "ll_backend.ite_gen.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 43 "ll_backend.ite_gen.c"
#line 30 "../library/array.int2"
#include "array.mh"

#line 47 "ll_backend.ite_gen.c"
#line 48 "ll_backend.ite_gen.c"
#include "ll_backend.ite_gen.mh"

#line 51 "ll_backend.ite_gen.c"
#line 52 "ll_backend.ite_gen.c"
#ifndef LL_BACKEND__ITE_GEN_DECL_GUARD
#define LL_BACKEND__ITE_GEN_DECL_GUARD

#line 56 "ll_backend.ite_gen.c"
#line 57 "ll_backend.ite_gen.c"

#endif
#line 60 "ll_backend.ite_gen.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

struct mercury_type_0 {
	MR_String f1;
	MR_Word * f2;
};
MR_STATIC_LINKAGE const struct mercury_type_0 mercury_common_0[];

struct mercury_type_1 {
	MR_Word * f1[2];
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

struct mercury_type_2 {
	MR_Integer f1;
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];

struct mercury_type_3 {
	MR_Integer f1;
	MR_Word * f2;
};
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];
MR_decl_label8(ll_backend__ite_gen__find_regions_removed_at_start_of_else_4_0, 44,3,7,8,9,10,12,13)
MR_decl_label3(ll_backend__ite_gen__find_regions_removed_at_start_of_else_4_0, 16,4,5)
MR_decl_label8(ll_backend__ite_gen__generate_ite_8_0, 2,3,7,8,11,10,13,9)
MR_decl_label8(ll_backend__ite_gen__generate_ite_8_0, 14,15,16,20,18,23,24,27)
MR_decl_label8(ll_backend__ite_gen__generate_ite_8_0, 31,89,29,36,37,38,39,40)
MR_decl_label8(ll_backend__ite_gen__generate_ite_8_0, 41,42,43,44,45,46,47,48)
MR_decl_label8(ll_backend__ite_gen__generate_ite_8_0, 50,55,56,57,54,58,49,59)
MR_decl_label8(ll_backend__ite_gen__generate_ite_8_0, 60,63,65,66,62,67,68,69)
MR_decl_label8(ll_backend__ite_gen__generate_ite_8_0, 71,72,73,74,75,76,77,78)
MR_decl_label2(ll_backend__ite_gen__generate_ite_8_0, 79,80)
MR_decl_label8(ll_backend__ite_gen__generate_negation_6_0, 3,4,2,6,8,10,7,16)
MR_decl_label8(ll_backend__ite_gen__generate_negation_6_0, 18,19,21,22,23,24,25,28)
MR_decl_label3(ll_backend__ite_gen__generate_negation_6_0, 33,11,12)
MR_decl_label8(ll_backend__ite_gen__generate_negation_general_8_0, 2,3,4,8,6,11,12,13)
MR_decl_label8(ll_backend__ite_gen__generate_negation_general_8_0, 14,15,16,17,18,19,20,21)
MR_decl_label8(ll_backend__ite_gen__generate_negation_general_8_0, 22,23,24,26,28,27,34,35)
MR_decl_label8(ll_backend__ite_gen__generate_negation_general_8_0, 36,37,38,39,40,41,42,43)
MR_decl_label3(ll_backend__ite_gen__generate_negation_general_8_0, 44,45,46)
MR_decl_label5(ll_backend__ite_gen__ite_alloc_snapshot_regions_8_0, 4,6,5,9,3)
MR_decl_label3(ll_backend__ite_gen__ite_protect_regions_7_0, 4,5,3)
MR_decl_label8(ll_backend__ite_gen__make_pneg_context_wrappers_5_0, 2,6,8,9,10,14,15,16)
MR_decl_label8(ll_backend__ite_gen__make_pneg_context_wrappers_5_0, 17,18,11,20,21,22,23,24)
MR_decl_label4(ll_backend__ite_gen__make_pneg_context_wrappers_5_0, 25,26,27,3)
MR_decl_label8(ll_backend__ite_gen__maybe_create_ite_region_frame_9_0, 4,5,6,7,8,9,10,11)
MR_decl_label8(ll_backend__ite_gen__maybe_create_ite_region_frame_9_0, 12,13,16,14,18,19,20,21)
MR_decl_label8(ll_backend__ite_gen__maybe_create_ite_region_frame_9_0, 22,23,24,25,26,27,28,29)
MR_decl_label8(ll_backend__ite_gen__maybe_create_ite_region_frame_9_0, 30,31,32,33,34,35,36,37)
MR_decl_label6(ll_backend__ite_gen__maybe_create_ite_region_frame_9_0, 38,39,42,41,44,3)
MR_decl_static(fn__ll_backend__ite_gen__wrap_transient_1_0)
MR_decl_static(ll_backend__ite_gen__make_pneg_context_wrappers_5_0)
MR_decl_static(ll_backend__ite_gen__find_regions_removed_at_start_of_else_4_0)
MR_decl_static(ll_backend__ite_gen__ite_protect_regions_7_0)
MR_decl_static(ll_backend__ite_gen__ite_alloc_snapshot_regions_8_0)
MR_decl_static(fn__ll_backend__ite_gen__this_file_0_0)
MR_decl_static(ll_backend__ite_gen__maybe_create_ite_region_frame_9_0)
MR_def_extern_entry(ll_backend__ite_gen__generate_ite_8_0)
MR_decl_static(ll_backend__ite_gen__generate_negation_general_8_0)
MR_def_extern_entry(ll_backend__ite_gen__generate_negation_6_0)

static const struct mercury_type_0 mercury_common_0[1] =
{
{
MR_string_const("\t\tMR_restore_transient_registers();\n", 36),
MR_tbmkword(0, 0)
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
static const struct mercury_type_1 mercury_common_1[1] =
{
{
{
MR_CTOR1_ADDR(term, var),
MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type)
}
},
};

static const struct mercury_type_2 mercury_common_2[2] =
{
{
0
},
{
1
},
};

static const struct mercury_type_3 mercury_common_3[1] =
{
{
0,
MR_TAG_COMMON(1,2,0)
},
};

MR_decl_entry(fn__string__append_list_1_0);

MR_BEGIN_MODULE(ll_backend__ite_gen_module0)
	MR_init_entry1(fn__ll_backend__ite_gen__wrap_transient_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ll_backend__ite_gen__wrap_transient_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,0,0);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = (MR_Word) MR_string_const("\t\tMR_save_transient_registers();\n", 33);
	MR_tfield(1, MR_r1, 1) = MR_tempr1;
	MR_np_tailcall_ent(fn__string__append_list_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(libs__globals__lookup_bool_option_3_0);
MR_decl_entry(hlds__hlds_goal__goal_info_has_feature_2_0);
MR_decl_entry(hlds__hlds_goal__goal_info_get_context_2_0);
MR_decl_entry(term__context_file_2_0);
MR_decl_entry(term__context_line_2_0);
MR_decl_entry(fn__string__int_to_string_1_0);
MR_decl_entry(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_lval_0;
MR_decl_entry(fn__set__init_0_0);

MR_BEGIN_MODULE(ll_backend__ite_gen_module1)
	MR_init_entry1(ll_backend__ite_gen__make_pneg_context_wrappers_5_0);
	MR_init_label8(ll_backend__ite_gen__make_pneg_context_wrappers_5_0,2,6,8,9,10,14,15,16)
	MR_init_label8(ll_backend__ite_gen__make_pneg_context_wrappers_5_0,17,18,11,20,21,22,23,24)
	MR_init_label4(ll_backend__ite_gen__make_pneg_context_wrappers_5_0,25,26,27,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__ite_gen__make_pneg_context_wrappers_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_r2 = (MR_Integer) 226;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		ll_backend__ite_gen__make_pneg_context_wrappers_5_0_i2);
MR_def_label(ll_backend__ite_gen__make_pneg_context_wrappers_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(ll_backend__ite_gen__make_pneg_context_wrappers_5_0_i3);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 15;
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_has_feature_2_0,
		ll_backend__ite_gen__make_pneg_context_wrappers_5_0_i6);
MR_def_label(ll_backend__ite_gen__make_pneg_context_wrappers_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(ll_backend__ite_gen__make_pneg_context_wrappers_5_0_i3);
	}
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_get_context_2_0,
		ll_backend__ite_gen__make_pneg_context_wrappers_5_0_i8);
MR_def_label(ll_backend__ite_gen__make_pneg_context_wrappers_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(term__context_file_2_0,
		ll_backend__ite_gen__make_pneg_context_wrappers_5_0_i9);
MR_def_label(ll_backend__ite_gen__make_pneg_context_wrappers_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(term__context_line_2_0,
		ll_backend__ite_gen__make_pneg_context_wrappers_5_0_i10);
MR_def_label(ll_backend__ite_gen__make_pneg_context_wrappers_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_sv(1), (char *)(MR_Word) MR_string_const("", 0)) == 0)) {
		MR_GOTO_LAB(ll_backend__ite_gen__make_pneg_context_wrappers_5_0_i11);
	}
	if (MR_INT_LE(MR_r1,0)) {
		MR_GOTO_LAB(ll_backend__ite_gen__make_pneg_context_wrappers_5_0_i11);
	}
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		ll_backend__ite_gen__make_pneg_context_wrappers_5_0_i14);
MR_def_label(ll_backend__ite_gen__make_pneg_context_wrappers_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("\"", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__ite_gen__make_pneg_context_wrappers_5_0_i15);
MR_def_label(ll_backend__ite_gen__make_pneg_context_wrappers_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(":", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__ite_gen__make_pneg_context_wrappers_5_0_i16);
MR_def_label(ll_backend__ite_gen__make_pneg_context_wrappers_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__ite_gen__make_pneg_context_wrappers_5_0_i17);
MR_def_label(ll_backend__ite_gen__make_pneg_context_wrappers_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\"", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__ite_gen__make_pneg_context_wrappers_5_0_i18);
MR_def_label(ll_backend__ite_gen__make_pneg_context_wrappers_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_np_call_localret_ent(fn__set__init_0_0,
		ll_backend__ite_gen__make_pneg_context_wrappers_5_0_i20);
MR_def_label(ll_backend__ite_gen__make_pneg_context_wrappers_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = (MR_Word) MR_string_const("NULL", 4);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_np_call_localret_ent(fn__set__init_0_0,
		ll_backend__ite_gen__make_pneg_context_wrappers_5_0_i20);
MR_def_label(ll_backend__ite_gen__make_pneg_context_wrappers_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_sv(2), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(2), 0) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\t\tMR_pneg_enter_cond();\n", 24);
	MR_np_call_localret_ent(fn__ll_backend__ite_gen__wrap_transient_1_0,
		ll_backend__ite_gen__make_pneg_context_wrappers_5_0_i21);
MR_def_label(ll_backend__ite_gen__make_pneg_context_wrappers_5_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 5);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 3) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 4) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_sv(2) = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	}
	MR_np_call_localret_ent(fn__set__init_0_0,
		ll_backend__ite_gen__make_pneg_context_wrappers_5_0_i22);
MR_def_label(ll_backend__ite_gen__make_pneg_context_wrappers_5_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_sv(3), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(3), 0) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\t\tMR_pneg_enter_then();\n", 24);
	MR_np_call_localret_ent(fn__ll_backend__ite_gen__wrap_transient_1_0,
		ll_backend__ite_gen__make_pneg_context_wrappers_5_0_i23);
MR_def_label(ll_backend__ite_gen__make_pneg_context_wrappers_5_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 5);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 3) = MR_sv(3);
	MR_tfield(3, MR_tempr1, 4) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_sv(3) = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	}
	MR_np_call_localret_ent(fn__set__init_0_0,
		ll_backend__ite_gen__make_pneg_context_wrappers_5_0_i24);
MR_def_label(ll_backend__ite_gen__make_pneg_context_wrappers_5_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const(");\n", 3);
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__ite_gen__make_pneg_context_wrappers_5_0_i25);
MR_def_label(ll_backend__ite_gen__make_pneg_context_wrappers_5_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\t\tMR_pneg_enter_else(", 21);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__ite_gen__make_pneg_context_wrappers_5_0_i26);
MR_def_label(ll_backend__ite_gen__make_pneg_context_wrappers_5_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__ll_backend__ite_gen__wrap_transient_1_0,
		ll_backend__ite_gen__make_pneg_context_wrappers_5_0_i27);
MR_def_label(ll_backend__ite_gen__make_pneg_context_wrappers_5_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 5);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 4) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 10);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 27;
	MR_tfield(3, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 3) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 4) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_tempr1, 5) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_tempr1, 6) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_tempr1, 7) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_tempr1, 8) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 9) = (MR_Integer) 0;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr3, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr3, 1) = (MR_Word) MR_string_const("", 0);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr4, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 10);
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 27;
	MR_tfield(3, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_tempr3, 2) = MR_sv(3);
	MR_tfield(3, MR_tempr3, 3) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr3, 4) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_tempr3, 5) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_tempr3, 6) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_tempr3, 7) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_tempr3, 8) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr3, 9) = (MR_Integer) 0;
	MR_tag_alloc_heap(MR_tempr4, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr4, 0) = MR_tempr3;
	MR_tfield(0, MR_tempr4, 1) = (MR_Word) MR_string_const("", 0);
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr5, 0) = MR_tempr4;
	MR_tfield(1, MR_tempr5, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr4, 3, (MR_Integer) 10);
	MR_tfield(3, MR_tempr4, 0) = (MR_Integer) 27;
	MR_tfield(3, MR_tempr4, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_tempr4, 2) = MR_tempr2;
	MR_tfield(3, MR_tempr4, 3) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr4, 4) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_tempr4, 5) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_tempr4, 6) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_tempr4, 7) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_tempr4, 8) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr4, 9) = (MR_Integer) 0;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_tempr4;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_string_const("", 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r3, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r3, 0) = MR_tempr2;
	MR_decr_sp_and_return(4);
	}
MR_def_label(ll_backend__ite_gen__make_pneg_context_wrappers_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_module__module_info_pred_info_3_0);
MR_decl_entry(fn__hlds__hlds_pred__pred_info_module_1_0);
MR_decl_entry(fn__mdbcomp__prim_data__mercury_region_builtin_module_0_0);
MR_decl_entry(__Unify___mdbcomp__prim_data__sym_name_0_0);
MR_decl_entry(fn__hlds__hlds_pred__pred_info_name_1_0);
MR_decl_entry(fn__transform_hlds__rbmm__region_transformation__remove_region_pred_name_0_0);
MR_decl_entry(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);

MR_BEGIN_MODULE(ll_backend__ite_gen_module2)
	MR_init_entry1(ll_backend__ite_gen__find_regions_removed_at_start_of_else_4_0);
	MR_init_label8(ll_backend__ite_gen__find_regions_removed_at_start_of_else_4_0,44,3,7,8,9,10,12,13)
	MR_init_label3(ll_backend__ite_gen__find_regions_removed_at_start_of_else_4_0,16,4,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__ite_gen__find_regions_removed_at_start_of_else_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
MR_def_label(ll_backend__ite_gen__find_regions_removed_at_start_of_else_4_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__ite_gen__find_regions_removed_at_start_of_else_4_0_i3);
	}
	MR_r1 = MR_r3;
	MR_decr_sp_and_return(7);
MR_def_label(ll_backend__ite_gen__find_regions_removed_at_start_of_else_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(0, MR_ctfield(1, MR_r1, 0), 0);
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(ll_backend__ite_gen__find_regions_removed_at_start_of_else_4_0_i5);
	}
	MR_tempr2 = MR_r2;
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_ctfield(1, MR_r1, 1);
	MR_sv(4) = MR_ctfield(1, MR_tempr1, 2);
	MR_r1 = MR_tempr2;
	MR_r2 = MR_ctfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_info_3_0,
		ll_backend__ite_gen__find_regions_removed_at_start_of_else_4_0_i7);
MR_def_label(ll_backend__ite_gen__find_regions_removed_at_start_of_else_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_module_1_0,
		ll_backend__ite_gen__find_regions_removed_at_start_of_else_4_0_i8);
MR_def_label(ll_backend__ite_gen__find_regions_removed_at_start_of_else_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_region_builtin_module_0_0,
		ll_backend__ite_gen__find_regions_removed_at_start_of_else_4_0_i9);
MR_def_label(ll_backend__ite_gen__find_regions_removed_at_start_of_else_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		ll_backend__ite_gen__find_regions_removed_at_start_of_else_4_0_i10);
MR_def_label(ll_backend__ite_gen__find_regions_removed_at_start_of_else_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__ite_gen__find_regions_removed_at_start_of_else_4_0_i4);
	}
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_name_1_0,
		ll_backend__ite_gen__find_regions_removed_at_start_of_else_4_0_i12);
MR_def_label(ll_backend__ite_gen__find_regions_removed_at_start_of_else_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_np_call_localret_ent(fn__transform_hlds__rbmm__region_transformation__remove_region_pred_name_0_0,
		ll_backend__ite_gen__find_regions_removed_at_start_of_else_4_0_i13);
MR_def_label(ll_backend__ite_gen__find_regions_removed_at_start_of_else_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_sv(5), (char *)MR_r1) != 0)) {
		MR_GOTO_LAB(ll_backend__ite_gen__find_regions_removed_at_start_of_else_4_0_i4);
	}
	if (MR_LTAGS_TEST(MR_sv(4),0,0)) {
		MR_GOTO_LAB(ll_backend__ite_gen__find_regions_removed_at_start_of_else_4_0_i4);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(4);
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(ll_backend__ite_gen__find_regions_removed_at_start_of_else_4_0_i4);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_ctfield(1, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		ll_backend__ite_gen__find_regions_removed_at_start_of_else_4_0_i16);
MR_def_label(ll_backend__ite_gen__find_regions_removed_at_start_of_else_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(ll_backend__ite_gen__find_regions_removed_at_start_of_else_4_0_i44);
MR_def_label(ll_backend__ite_gen__find_regions_removed_at_start_of_else_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(2);
MR_def_label(ll_backend__ite_gen__find_regions_removed_at_start_of_else_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(ll_backend__code_info__produce_variable_5_0);

MR_BEGIN_MODULE(ll_backend__ite_gen_module3)
	MR_init_entry1(ll_backend__ite_gen__ite_protect_regions_7_0);
	MR_init_label3(ll_backend__ite_gen__ite_protect_regions_7_0,4,5,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__ite_gen__ite_protect_regions_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r4,0,0)) {
		MR_GOTO_LAB(ll_backend__ite_gen__ite_protect_regions_7_0_i3);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(4) = MR_ctfield(1, MR_tempr1, 1);
	MR_r1 = MR_ctfield(1, MR_tempr1, 0);
	MR_r2 = MR_r5;
	}
	MR_np_call_localret_ent(ll_backend__code_info__produce_variable_5_0,
		ll_backend__ite_gen__ite_protect_regions_7_0_i4);
MR_def_label(ll_backend__ite_gen__ite_protect_regions_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 6);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 17;
	MR_tfield(3, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tempr4 = MR_sv(3);
	MR_tfield(3, MR_tempr1, 2) = MR_tempr4;
	MR_tfield(3, MR_tempr1, 3) = MR_r2;
	MR_tfield(3, MR_tempr1, 4) = MR_sv(1);
	MR_tempr5 = MR_sv(2);
	MR_tfield(3, MR_tempr1, 5) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_string_const("ite protect the region if needed", 32);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr3, 2, (MR_Integer) 2);
	MR_tfield(2, MR_tempr3, 0) = MR_r1;
	MR_tfield(2, MR_tempr3, 1) = MR_tempr2;
	MR_sv(1) = MR_tempr3;
	MR_r1 = MR_ctfield(3, MR_tempr1, 4);
	MR_r2 = MR_tempr5;
	MR_r5 = MR_r3;
	MR_r3 = MR_tempr4;
	MR_r4 = MR_sv(4);
	}
	MR_np_localcall_lab(ll_backend__ite_gen__ite_protect_regions_7_0,
		ll_backend__ite_gen__ite_protect_regions_7_0_i5);
MR_def_label(ll_backend__ite_gen__ite_protect_regions_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 2);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(2, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
MR_def_label(ll_backend__ite_gen__ite_protect_regions_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r5;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0);

MR_BEGIN_MODULE(ll_backend__ite_gen_module4)
	MR_init_entry1(ll_backend__ite_gen__ite_alloc_snapshot_regions_8_0);
	MR_init_label5(ll_backend__ite_gen__ite_alloc_snapshot_regions_8_0,4,6,5,9,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__ite_gen__ite_alloc_snapshot_regions_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r5,0,0)) {
		MR_GOTO_LAB(ll_backend__ite_gen__ite_alloc_snapshot_regions_8_0_i3);
	}
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(5) = MR_ctfield(1, MR_tempr1, 0);
	MR_sv(6) = MR_ctfield(1, MR_tempr1, 1);
	MR_r1 = MR_sv(5);
	MR_r2 = MR_r6;
	}
	MR_np_call_localret_ent(ll_backend__code_info__produce_variable_5_0,
		ll_backend__ite_gen__ite_alloc_snapshot_regions_8_0_i4);
MR_def_label(ll_backend__ite_gen__ite_alloc_snapshot_regions_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r3;
	MR_r3 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_sv(7) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r4 = MR_sv(4);
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		ll_backend__ite_gen__ite_alloc_snapshot_regions_8_0_i6);
MR_def_label(ll_backend__ite_gen__ite_alloc_snapshot_regions_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__ite_gen__ite_alloc_snapshot_regions_8_0_i5);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 6);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 17;
	MR_tfield(3, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,2,0);
	MR_tempr4 = MR_sv(3);
	MR_tfield(3, MR_tempr1, 2) = MR_tempr4;
	MR_tfield(3, MR_tempr1, 3) = MR_sv(7);
	MR_tempr5 = MR_sv(1);
	MR_tfield(3, MR_tempr1, 4) = MR_tempr5;
	MR_tempr6 = MR_sv(2);
	MR_tfield(3, MR_tempr1, 5) = MR_tempr6;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_string_const("take alloc snapshot of the region", 33);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr3, 2, (MR_Integer) 2);
	MR_tfield(2, MR_tempr3, 0) = MR_sv(5);
	MR_tfield(2, MR_tempr3, 1) = MR_tempr2;
	MR_r1 = MR_tempr5;
	MR_r2 = MR_tempr6;
	MR_r3 = MR_tempr4;
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(6);
	MR_sv(1) = MR_tempr3;
	MR_r6 = MR_sv(8);
	}
	MR_np_localcall_lab(ll_backend__ite_gen__ite_alloc_snapshot_regions_8_0,
		ll_backend__ite_gen__ite_alloc_snapshot_regions_8_0_i9);
MR_def_label(ll_backend__ite_gen__ite_alloc_snapshot_regions_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 6);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 17;
	MR_tfield(3, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,2,1);
	MR_tempr4 = MR_sv(3);
	MR_tfield(3, MR_tempr1, 2) = MR_tempr4;
	MR_tfield(3, MR_tempr1, 3) = MR_sv(7);
	MR_tempr5 = MR_sv(1);
	MR_tfield(3, MR_tempr1, 4) = MR_tempr5;
	MR_tempr6 = MR_sv(2);
	MR_tfield(3, MR_tempr1, 5) = MR_tempr6;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_string_const("take alloc snapshot of the region", 33);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr3, 2, (MR_Integer) 2);
	MR_tfield(2, MR_tempr3, 0) = MR_sv(5);
	MR_tfield(2, MR_tempr3, 1) = MR_tempr2;
	MR_r1 = MR_tempr5;
	MR_r2 = MR_tempr6;
	MR_r3 = MR_tempr4;
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(6);
	MR_sv(1) = MR_tempr3;
	MR_r6 = MR_sv(8);
	}
	MR_np_localcall_lab(ll_backend__ite_gen__ite_alloc_snapshot_regions_8_0,
		ll_backend__ite_gen__ite_alloc_snapshot_regions_8_0_i9);
MR_def_label(ll_backend__ite_gen__ite_alloc_snapshot_regions_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 2);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(2, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(9);
	}
MR_def_label(ll_backend__ite_gen__ite_alloc_snapshot_regions_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r6;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__ite_gen_module5)
	MR_init_entry1(fn__ll_backend__ite_gen__this_file_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ll_backend__ite_gen__this_file_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ite_gen", 7);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(ll_backend__code_info__get_forward_live_vars_2_0);
MR_decl_entry(fn__ll_backend__code_info__filter_region_vars_2_0);
MR_decl_entry(hlds__hlds_goal__goal_info_get_nonlocals_2_0);
MR_decl_entry(ll_backend__code_info__get_module_info_2_0);
MR_decl_entry(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_116_101_114_115_101_99_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0);
MR_decl_entry(set__empty_1_0);
MR_decl_entry(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_105_102_102_101_114_101_110_99_101_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0);
MR_decl_entry(fn__set__to_sorted_list_1_0);
MR_decl_entry(list__length_2_0);
MR_decl_entry(ll_backend__code_info__get_globals_2_0);
MR_decl_entry(libs__globals__lookup_int_option_3_0);
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__continuation_info__type_ctor_info_slot_contents_0;
MR_decl_entry(fn__list__duplicate_2_0);
MR_decl_entry(ll_backend__code_info__acquire_several_temp_slots_8_0);
MR_decl_entry(fn__ll_backend__llds__first_nonfixed_embedded_slot_addr_2_0);
MR_decl_entry(ll_backend__code_info__acquire_reg_4_0);
MR_decl_entry(ll_backend__code_info__release_reg_3_0);
MR_decl_entry(hlds__code_model__goal_info_get_code_model_2_0);
MR_decl_entry(libs__compiler_util__unexpected_2_0);

MR_BEGIN_MODULE(ll_backend__ite_gen_module6)
	MR_init_entry1(ll_backend__ite_gen__maybe_create_ite_region_frame_9_0);
	MR_init_label8(ll_backend__ite_gen__maybe_create_ite_region_frame_9_0,4,5,6,7,8,9,10,11)
	MR_init_label8(ll_backend__ite_gen__maybe_create_ite_region_frame_9_0,12,13,16,14,18,19,20,21)
	MR_init_label8(ll_backend__ite_gen__maybe_create_ite_region_frame_9_0,22,23,24,25,26,27,28,29)
	MR_init_label8(ll_backend__ite_gen__maybe_create_ite_region_frame_9_0,30,31,32,33,34,35,36,37)
	MR_init_label6(ll_backend__ite_gen__maybe_create_ite_region_frame_9_0,38,39,42,41,44,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__ite_gen__maybe_create_ite_region_frame_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ll_backend__ite_gen__maybe_create_ite_region_frame_9_0_i3);
	}
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(9) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__code_info__get_forward_live_vars_2_0,
		ll_backend__ite_gen__maybe_create_ite_region_frame_9_0_i4);
MR_def_label(ll_backend__ite_gen__maybe_create_ite_region_frame_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(fn__ll_backend__code_info__filter_region_vars_2_0,
		ll_backend__ite_gen__maybe_create_ite_region_frame_9_0_i5);
MR_def_label(ll_backend__ite_gen__maybe_create_ite_region_frame_9_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_get_nonlocals_2_0,
		ll_backend__ite_gen__maybe_create_ite_region_frame_9_0_i6);
MR_def_label(ll_backend__ite_gen__maybe_create_ite_region_frame_9_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(fn__ll_backend__code_info__filter_region_vars_2_0,
		ll_backend__ite_gen__maybe_create_ite_region_frame_9_0_i7);
MR_def_label(ll_backend__ite_gen__maybe_create_ite_region_frame_9_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(ll_backend__code_info__get_module_info_2_0,
		ll_backend__ite_gen__maybe_create_ite_region_frame_9_0_i8);
MR_def_label(ll_backend__ite_gen__maybe_create_ite_region_frame_9_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_sv(6) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_sv(7) = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(fn__set__init_0_0,
		ll_backend__ite_gen__maybe_create_ite_region_frame_9_0_i9);
MR_def_label(ll_backend__ite_gen__maybe_create_ite_region_frame_9_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(ll_backend__ite_gen__find_regions_removed_at_start_of_else_4_0,
		ll_backend__ite_gen__maybe_create_ite_region_frame_9_0_i10);
MR_def_label(ll_backend__ite_gen__maybe_create_ite_region_frame_9_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(fn__set__init_0_0,
		ll_backend__ite_gen__maybe_create_ite_region_frame_9_0_i11);
MR_def_label(ll_backend__ite_gen__maybe_create_ite_region_frame_9_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_np_call_localret_ent(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_116_101_114_115_101_99_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		ll_backend__ite_gen__maybe_create_ite_region_frame_9_0_i12);
MR_def_label(ll_backend__ite_gen__maybe_create_ite_region_frame_9_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_r4 = MR_sv(4);
	MR_np_call_localret_ent(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_116_101_114_115_101_99_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		ll_backend__ite_gen__maybe_create_ite_region_frame_9_0_i13);
MR_def_label(ll_backend__ite_gen__maybe_create_ite_region_frame_9_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(set__empty_1_0,
		ll_backend__ite_gen__maybe_create_ite_region_frame_9_0_i16);
MR_def_label(ll_backend__ite_gen__maybe_create_ite_region_frame_9_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__ite_gen__maybe_create_ite_region_frame_9_0_i14);
	}
	MR_r2 = MR_sv(3);
	MR_sv(2) = MR_sv(4);
	MR_r1 = MR_sv(7);
	MR_GOTO_LAB(ll_backend__ite_gen__maybe_create_ite_region_frame_9_0_i19);
MR_def_label(ll_backend__ite_gen__maybe_create_ite_region_frame_9_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_105_102_102_101_114_101_110_99_101_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		ll_backend__ite_gen__maybe_create_ite_region_frame_9_0_i18);
MR_def_label(ll_backend__ite_gen__maybe_create_ite_region_frame_9_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(7);
MR_def_label(ll_backend__ite_gen__maybe_create_ite_region_frame_9_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_np_call_localret_ent(fn__set__to_sorted_list_1_0,
		ll_backend__ite_gen__maybe_create_ite_region_frame_9_0_i20);
MR_def_label(ll_backend__ite_gen__maybe_create_ite_region_frame_9_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(fn__set__to_sorted_list_1_0,
		ll_backend__ite_gen__maybe_create_ite_region_frame_9_0_i21);
MR_def_label(ll_backend__ite_gen__maybe_create_ite_region_frame_9_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(list__length_2_0,
		ll_backend__ite_gen__maybe_create_ite_region_frame_9_0_i22);
MR_def_label(ll_backend__ite_gen__maybe_create_ite_region_frame_9_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(list__length_2_0,
		ll_backend__ite_gen__maybe_create_ite_region_frame_9_0_i23);
MR_def_label(ll_backend__ite_gen__maybe_create_ite_region_frame_9_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(ll_backend__code_info__get_globals_2_0,
		ll_backend__ite_gen__maybe_create_ite_region_frame_9_0_i24);
MR_def_label(ll_backend__ite_gen__maybe_create_ite_region_frame_9_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r2 = (MR_Integer) 229;
	MR_np_call_localret_ent(libs__globals__lookup_int_option_3_0,
		ll_backend__ite_gen__maybe_create_ite_region_frame_9_0_i25);
MR_def_label(ll_backend__ite_gen__maybe_create_ite_region_frame_9_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = (MR_Integer) 232;
	MR_np_call_localret_ent(libs__globals__lookup_int_option_3_0,
		ll_backend__ite_gen__maybe_create_ite_region_frame_9_0_i26);
MR_def_label(ll_backend__ite_gen__maybe_create_ite_region_frame_9_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_sv(7) = MR_tempr1;
	MR_r2 = (MR_Integer) 233;
	}
	MR_np_call_localret_ent(libs__globals__lookup_int_option_3_0,
		ll_backend__ite_gen__maybe_create_ite_region_frame_9_0_i27);
MR_def_label(ll_backend__ite_gen__maybe_create_ite_region_frame_9_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__continuation_info, slot_contents);
	MR_r2 = (((MR_Integer) MR_sv(8) + ((MR_Integer) MR_sv(7) * (MR_Integer) MR_sv(2))) + ((MR_Integer) MR_tempr1 * (MR_Integer) MR_sv(6)));
	MR_r3 = (MR_Word) MR_tbmkword(0, 7);
	}
	MR_np_call_localret_ent(fn__list__duplicate_2_0,
		ll_backend__ite_gen__maybe_create_ite_region_frame_9_0_i28);
MR_def_label(ll_backend__ite_gen__maybe_create_ite_region_frame_9_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 1;
	MR_r3 = MR_sv(9);
	MR_np_call_localret_ent(ll_backend__code_info__acquire_several_temp_slots_8_0,
		ll_backend__ite_gen__maybe_create_ite_region_frame_9_0_i29);
MR_def_label(ll_backend__ite_gen__maybe_create_ite_region_frame_9_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_r2;
	MR_tfield(0, MR_tempr1, 1) = MR_r3;
	MR_tfield(0, MR_tempr1, 2) = MR_r4;
	MR_sv(2) = MR_r1;
	MR_sv(6) = MR_tempr1;
	MR_sv(7) = MR_r5;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(8);
	}
	MR_np_call_localret_ent(fn__ll_backend__llds__first_nonfixed_embedded_slot_addr_2_0,
		ll_backend__ite_gen__maybe_create_ite_region_frame_9_0_i30);
MR_def_label(ll_backend__ite_gen__maybe_create_ite_region_frame_9_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_np_call_localret_ent(ll_backend__code_info__acquire_reg_4_0,
		ll_backend__ite_gen__maybe_create_ite_region_frame_9_0_i31);
MR_def_label(ll_backend__ite_gen__maybe_create_ite_region_frame_9_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_np_call_localret_ent(ll_backend__code_info__acquire_reg_4_0,
		ll_backend__ite_gen__maybe_create_ite_region_frame_9_0_i32);
MR_def_label(ll_backend__ite_gen__maybe_create_ite_region_frame_9_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_np_call_localret_ent(ll_backend__code_info__acquire_reg_4_0,
		ll_backend__ite_gen__maybe_create_ite_region_frame_9_0_i33);
MR_def_label(ll_backend__ite_gen__maybe_create_ite_region_frame_9_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8, MR_tempr9, MR_tempr10, MR_tempr11;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 16;
	MR_tfield(3, MR_tempr1, 1) = (MR_Integer) 0;
	MR_tempr10 = MR_sv(6);
	MR_tfield(3, MR_tempr1, 2) = MR_tempr10;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_string_const("Save stack pointer of embedded region ite stack", 47);
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 1;
	MR_tempr11 = MR_sv(8);
	MR_tfield(3, MR_tempr3, 1) = MR_tempr11;
	MR_tfield(3, MR_tempr3, 2) = (MR_Word) MR_TAG_COMMON(3,3,0);
	MR_tag_alloc_heap(MR_tempr4, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr4, 0) = MR_tempr3;
	MR_tfield(0, MR_tempr4, 1) = (MR_Word) MR_string_const("Initialize number of protect_infos", 34);
	MR_tag_alloc_heap(MR_tempr5, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr5, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr5, 1) = MR_sv(9);
	MR_tfield(3, MR_tempr5, 2) = (MR_Word) MR_TAG_COMMON(3,3,0);
	MR_tag_alloc_heap(MR_tempr6, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr6, 0) = MR_tempr5;
	MR_tfield(0, MR_tempr6, 1) = (MR_Word) MR_string_const("Initialize number of snapshot_infos", 35);
	MR_tag_alloc_heap(MR_tempr7, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr7, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr7, 1) = MR_r1;
	MR_tfield(3, MR_tempr7, 2) = MR_sv(7);
	MR_tag_alloc_heap(MR_tempr8, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr8, 0) = MR_tempr7;
	MR_tfield(0, MR_tempr8, 1) = (MR_Word) MR_string_const("Initialize pointer to nonfixed part of embedded frame", 53);
	MR_tag_alloc_heap(MR_tempr9, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr9, 0) = MR_tempr8;
	MR_tfield(1, MR_tempr9, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr8, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr8, 0) = MR_tempr6;
	MR_tfield(1, MR_tempr8, 1) = MR_tempr9;
	MR_tag_alloc_heap(MR_tempr6, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr6, 0) = MR_tempr4;
	MR_tfield(1, MR_tempr6, 1) = MR_tempr8;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr6;
	MR_tag_alloc_heap(MR_sv(7), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(7), 0) = MR_tempr4;
	MR_r4 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr11;
	MR_r5 = MR_r2;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr10;
	}
	MR_np_call_localret_ent(ll_backend__ite_gen__ite_protect_regions_7_0,
		ll_backend__ite_gen__maybe_create_ite_region_frame_9_0_i34);
MR_def_label(ll_backend__ite_gen__maybe_create_ite_region_frame_9_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r6 = MR_r2;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(5);
	MR_np_call_localret_ent(ll_backend__ite_gen__ite_alloc_snapshot_regions_8_0,
		ll_backend__ite_gen__maybe_create_ite_region_frame_9_0_i35);
MR_def_label(ll_backend__ite_gen__maybe_create_ite_region_frame_9_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(8);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 18;
	MR_tfield(3, MR_tempr2, 1) = (MR_Integer) 0;
	MR_tempr8 = MR_sv(6);
	MR_tfield(3, MR_tempr2, 2) = MR_tempr8;
	MR_tfield(3, MR_tempr2, 3) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(0, MR_tempr3, 1) = (MR_Word) MR_string_const("Store the number of protect_infos", 33);
	MR_tag_alloc_heap(MR_tempr4, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr4, 0) = MR_sv(9);
	MR_tag_alloc_heap(MR_tempr5, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr5, 0) = (MR_Integer) 18;
	MR_tfield(3, MR_tempr5, 1) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr5, 2) = MR_tempr8;
	MR_tfield(3, MR_tempr5, 3) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr6, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr6, 0) = MR_tempr5;
	MR_tfield(0, MR_tempr6, 1) = (MR_Word) MR_string_const("Store the number of snapshot_infos", 34);
	MR_tag_alloc_heap(MR_tempr7, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr7, 0) = MR_tempr6;
	MR_tfield(1, MR_tempr7, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr6, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr6, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr6, 1) = MR_tempr7;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr6;
	MR_sv(5) = MR_r1;
	MR_sv(8) = MR_tempr3;
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(ll_backend__code_info__release_reg_3_0,
		ll_backend__ite_gen__maybe_create_ite_region_frame_9_0_i36);
MR_def_label(ll_backend__ite_gen__maybe_create_ite_region_frame_9_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(ll_backend__code_info__release_reg_3_0,
		ll_backend__ite_gen__maybe_create_ite_region_frame_9_0_i37);
MR_def_label(ll_backend__ite_gen__maybe_create_ite_region_frame_9_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(ll_backend__code_info__release_reg_3_0,
		ll_backend__ite_gen__maybe_create_ite_region_frame_9_0_i38);
MR_def_label(ll_backend__ite_gen__maybe_create_ite_region_frame_9_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__code_model__goal_info_get_code_model_2_0,
		ll_backend__ite_gen__maybe_create_ite_region_frame_9_0_i39);
MR_def_label(ll_backend__ite_gen__maybe_create_ite_region_frame_9_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ll_backend__ite_gen__maybe_create_ite_region_frame_9_0_i41);
	}
	MR_np_call_localret_ent(fn__ll_backend__ite_gen__this_file_0_0,
		ll_backend__ite_gen__maybe_create_ite_region_frame_9_0_i42);
MR_def_label(ll_backend__ite_gen__maybe_create_ite_region_frame_9_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("maybe_create_ite_region_frame: det cond", 39);
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(ll_backend__ite_gen__maybe_create_ite_region_frame_9_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(ll_backend__ite_gen__maybe_create_ite_region_frame_9_0_i44);
	}
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_sv(8);
	MR_tfield(1, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 0);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8, MR_tempr9, MR_tempr10, MR_tempr11, MR_tempr12;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_sv(4);
	MR_tfield(1, MR_r1, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_sv(7);
	MR_tfield(1, MR_tempr2, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 1);
	MR_tfield(3, MR_r1, 0) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 3);
	MR_r2 = MR_tempr3;
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 19;
	MR_tfield(3, MR_tempr3, 1) = (MR_Word) MR_TAG_COMMON(1,2,0);
	MR_tempr12 = MR_sv(6);
	MR_tfield(3, MR_tempr3, 2) = MR_tempr12;
	MR_tag_alloc_heap(MR_tempr4, 0, (MR_Integer) 2);
	MR_r3 = MR_tempr4;
	MR_tfield(0, MR_tempr4, 0) = MR_tempr3;
	MR_tfield(0, MR_tempr4, 1) = (MR_Word) MR_string_const("region enter then", 17);
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr5;
	MR_tfield(1, MR_tempr5, 0) = MR_tempr4;
	MR_tfield(1, MR_tempr5, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr6, 1, (MR_Integer) 1);
	MR_r3 = MR_tempr6;
	MR_tfield(1, MR_tempr6, 0) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr7, 3, (MR_Integer) 3);
	MR_r4 = MR_tempr7;
	MR_tfield(3, MR_tempr7, 0) = (MR_Integer) 19;
	MR_tfield(3, MR_tempr7, 1) = (MR_Word) MR_TAG_COMMON(2,2,0);
	MR_tfield(3, MR_tempr7, 2) = MR_tempr12;
	MR_tag_alloc_heap(MR_tempr8, 0, (MR_Integer) 2);
	MR_r2 = MR_tempr8;
	MR_tfield(0, MR_tempr8, 0) = MR_tempr7;
	MR_tfield(0, MR_tempr8, 1) = (MR_Word) MR_string_const("region enter else", 17);
	MR_tag_alloc_heap(MR_tempr9, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr9;
	MR_tfield(1, MR_tempr9, 0) = MR_tempr8;
	MR_tfield(1, MR_tempr9, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr10, 1, (MR_Integer) 1);
	MR_r2 = MR_tempr10;
	MR_tfield(1, MR_tempr10, 0) = MR_tempr9;
	MR_tempr11 = MR_tempr6;
	MR_r3 = MR_tempr10;
	MR_r2 = MR_tempr11;
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(1);
	MR_decr_sp_and_return(10);
	}
MR_def_label(ll_backend__ite_gen__maybe_create_ite_region_frame_9_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_sv(8);
	MR_tfield(1, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 0);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8, MR_tempr9, MR_tempr10, MR_tempr11, MR_tempr12;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_sv(4);
	MR_tfield(1, MR_r1, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_sv(7);
	MR_tfield(1, MR_tempr2, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 1);
	MR_tfield(3, MR_r1, 0) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 3);
	MR_r2 = MR_tempr3;
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 19;
	MR_tfield(3, MR_tempr3, 1) = (MR_Word) MR_TAG_COMMON(1,2,1);
	MR_tempr12 = MR_sv(6);
	MR_tfield(3, MR_tempr3, 2) = MR_tempr12;
	MR_tag_alloc_heap(MR_tempr4, 0, (MR_Integer) 2);
	MR_r3 = MR_tempr4;
	MR_tfield(0, MR_tempr4, 0) = MR_tempr3;
	MR_tfield(0, MR_tempr4, 1) = (MR_Word) MR_string_const("region enter then", 17);
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr5;
	MR_tfield(1, MR_tempr5, 0) = MR_tempr4;
	MR_tfield(1, MR_tempr5, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr6, 1, (MR_Integer) 1);
	MR_r3 = MR_tempr6;
	MR_tfield(1, MR_tempr6, 0) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr7, 3, (MR_Integer) 3);
	MR_r4 = MR_tempr7;
	MR_tfield(3, MR_tempr7, 0) = (MR_Integer) 19;
	MR_tfield(3, MR_tempr7, 1) = (MR_Word) MR_TAG_COMMON(2,2,1);
	MR_tfield(3, MR_tempr7, 2) = MR_tempr12;
	MR_tag_alloc_heap(MR_tempr8, 0, (MR_Integer) 2);
	MR_r2 = MR_tempr8;
	MR_tfield(0, MR_tempr8, 0) = MR_tempr7;
	MR_tfield(0, MR_tempr8, 1) = (MR_Word) MR_string_const("region enter else", 17);
	MR_tag_alloc_heap(MR_tempr9, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr9;
	MR_tfield(1, MR_tempr9, 0) = MR_tempr8;
	MR_tfield(1, MR_tempr9, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr10, 1, (MR_Integer) 1);
	MR_r2 = MR_tempr10;
	MR_tfield(1, MR_tempr10, 0) = MR_tempr9;
	MR_tempr11 = MR_tempr6;
	MR_r3 = MR_tempr10;
	MR_r2 = MR_tempr11;
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(1);
	MR_decr_sp_and_return(10);
	}
MR_def_label(ll_backend__ite_gen__maybe_create_ite_region_frame_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = MR_r4;
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_llds__goal_info_get_resume_point_2_0);
MR_decl_entry(hlds__hlds_llds__goal_info_set_resume_point_3_0);
MR_decl_entry(ll_backend__code_info__produce_vars_5_0);
MR_decl_entry(hlds__goal_form__goal_may_allocate_heap_1_0);
MR_decl_entry(ll_backend__code_info__maybe_save_hp_5_0);
MR_decl_entry(fn__ll_backend__code_info__should_add_trail_ops_2_0);
MR_decl_entry(ll_backend__code_info__get_opt_trail_ops_2_0);
MR_decl_entry(fn__hlds__goal_form__goal_cannot_modify_trail_1_0);
MR_decl_entry(ll_backend__code_info__maybe_save_ticket_5_0);
MR_decl_entry(fn__ll_backend__code_info__should_add_region_ops_2_0);
MR_decl_entry(hlds__hlds_goal__goal_to_conj_list_2_0);
MR_decl_entry(ll_backend__code_info__remember_position_2_0);
MR_decl_entry(ll_backend__code_info__prepare_for_ite_hijack_5_0);
MR_decl_entry(ll_backend__code_info__make_resume_point_6_0);
MR_decl_entry(ll_backend__code_info__effect_resume_point_5_0);
MR_decl_entry(ll_backend__trace_gen__maybe_generate_internal_event_code_5_0);
MR_decl_entry(ll_backend__code_gen__generate_goal_5_0);
MR_decl_entry(ll_backend__code_info__ite_enter_then_5_0);
MR_decl_entry(ll_backend__code_info__pickup_zombies_3_0);
MR_decl_entry(ll_backend__code_info__make_vars_forward_dead_3_0);
MR_decl_entry(ll_backend__code_info__maybe_release_hp_3_0);
MR_decl_entry(ll_backend__code_info__maybe_reset_prune_and_release_ticket_5_0);
MR_decl_entry(ll_backend__code_info__release_several_temp_slots_4_0);
MR_decl_entry(ll_backend__code_info__maybe_reset_ticket_3_0);
MR_decl_entry(hlds__hlds_llds__goal_info_get_store_map_2_0);
MR_decl_entry(ll_backend__code_info__get_instmap_2_0);
MR_decl_entry(hlds__instmap__is_unreachable_1_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_llds__type_ctor_info_abs_locn_0;
MR_decl_entry(map__init_1_0);
MR_decl_entry(ll_backend__code_info__generate_branch_end_6_0);
MR_decl_entry(ll_backend__code_info__reset_to_position_3_0);
MR_decl_entry(ll_backend__code_info__generate_resume_point_4_0);
MR_decl_entry(ll_backend__code_info__maybe_restore_and_release_hp_4_0);
MR_decl_entry(ll_backend__code_info__maybe_reset_discard_and_release_ticket_5_0);
MR_decl_entry(ll_backend__code_info__get_next_label_3_0);
MR_decl_entry(ll_backend__code_info__after_all_branches_4_0);

MR_BEGIN_MODULE(ll_backend__ite_gen_module7)
	MR_init_entry1(ll_backend__ite_gen__generate_ite_8_0);
	MR_init_label8(ll_backend__ite_gen__generate_ite_8_0,2,3,7,8,11,10,13,9)
	MR_init_label8(ll_backend__ite_gen__generate_ite_8_0,14,15,16,20,18,23,24,27)
	MR_init_label8(ll_backend__ite_gen__generate_ite_8_0,31,89,29,36,37,38,39,40)
	MR_init_label8(ll_backend__ite_gen__generate_ite_8_0,41,42,43,44,45,46,47,48)
	MR_init_label8(ll_backend__ite_gen__generate_ite_8_0,50,55,56,57,54,58,49,59)
	MR_init_label8(ll_backend__ite_gen__generate_ite_8_0,60,63,65,66,62,67,68,69)
	MR_init_label8(ll_backend__ite_gen__generate_ite_8_0,71,72,73,74,75,76,77,78)
	MR_init_label2(ll_backend__ite_gen__generate_ite_8_0,79,80)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__ite_gen__generate_ite_8_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(28);
	MR_sv(28) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(5) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(6) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(11) = MR_r6;
	MR_r1 = MR_sv(6);
	}
	MR_np_call_localret_ent(hlds__code_model__goal_info_get_code_model_2_0,
		ll_backend__ite_gen__generate_ite_8_0_i2);
MR_def_label(ll_backend__ite_gen__generate_ite_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),2)) {
		MR_GOTO_LAB(ll_backend__ite_gen__generate_ite_8_0_i3);
	}
	if (MR_INT_EQ(MR_r1,2)) {
		MR_GOTO_LAB(ll_backend__ite_gen__generate_ite_8_0_i3);
	}
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_sv(8) = (MR_Integer) 1;
	MR_GOTO_LAB(ll_backend__ite_gen__generate_ite_8_0_i7);
MR_def_label(ll_backend__ite_gen__generate_ite_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_sv(8) = MR_sv(1);
MR_def_label(ll_backend__ite_gen__generate_ite_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_llds__goal_info_get_resume_point_2_0,
		ll_backend__ite_gen__generate_ite_8_0_i8);
MR_def_label(ll_backend__ite_gen__generate_ite_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__ite_gen__generate_ite_8_0_i10);
	}
	MR_np_call_localret_ent(fn__ll_backend__ite_gen__this_file_0_0,
		ll_backend__ite_gen__generate_ite_8_0_i11);
MR_def_label(ll_backend__ite_gen__generate_ite_8_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("condition of an if-then-else has no resume point", 48);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		ll_backend__ite_gen__generate_ite_8_0_i9);
MR_def_label(ll_backend__ite_gen__generate_ite_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_ctfield(1, MR_r1, 0);
	MR_sv(10) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_llds__goal_info_set_resume_point_3_0,
		ll_backend__ite_gen__generate_ite_8_0_i13);
MR_def_label(ll_backend__ite_gen__generate_ite_8_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_sv(5) = MR_ctfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_tempr1;
	MR_r2 = MR_sv(11);
	MR_sv(11) = MR_tempr2;
	}
MR_def_label(ll_backend__ite_gen__generate_ite_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_np_call_localret_ent(ll_backend__code_info__produce_vars_5_0,
		ll_backend__ite_gen__generate_ite_8_0_i14);
MR_def_label(ll_backend__ite_gen__generate_ite_8_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_sv(13) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(15) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__code_info__get_globals_2_0,
		ll_backend__ite_gen__generate_ite_8_0_i15);
MR_def_label(ll_backend__ite_gen__generate_ite_8_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(14) = MR_r1;
	MR_r2 = (MR_Integer) 244;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		ll_backend__ite_gen__generate_ite_8_0_i16);
MR_def_label(ll_backend__ite_gen__generate_ite_8_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(ll_backend__ite_gen__generate_ite_8_0_i18);
	}
	MR_r1 = MR_sv(11);
	MR_np_call_localret_ent(hlds__goal_form__goal_may_allocate_heap_1_0,
		ll_backend__ite_gen__generate_ite_8_0_i20);
MR_def_label(ll_backend__ite_gen__generate_ite_8_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__ite_gen__generate_ite_8_0_i18);
	}
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_sv(15);
	MR_np_call_localret_ent(ll_backend__code_info__maybe_save_hp_5_0,
		ll_backend__ite_gen__generate_ite_8_0_i23);
MR_def_label(ll_backend__ite_gen__generate_ite_8_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_sv(15);
	MR_np_call_localret_ent(ll_backend__code_info__maybe_save_hp_5_0,
		ll_backend__ite_gen__generate_ite_8_0_i23);
MR_def_label(ll_backend__ite_gen__generate_ite_8_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(15) = MR_r1;
	MR_sv(16) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(17) = MR_tempr1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(4);
	}
	MR_np_call_localret_ent(fn__ll_backend__code_info__should_add_trail_ops_2_0,
		ll_backend__ite_gen__generate_ite_8_0_i24);
MR_def_label(ll_backend__ite_gen__generate_ite_8_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ll_backend__ite_gen__generate_ite_8_0_i89);
	}
	MR_r1 = MR_sv(17);
	MR_np_call_localret_ent(ll_backend__code_info__get_opt_trail_ops_2_0,
		ll_backend__ite_gen__generate_ite_8_0_i27);
MR_def_label(ll_backend__ite_gen__generate_ite_8_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(ll_backend__ite_gen__generate_ite_8_0_i29);
	}
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(fn__hlds__goal_form__goal_cannot_modify_trail_1_0,
		ll_backend__ite_gen__generate_ite_8_0_i31);
MR_def_label(ll_backend__ite_gen__generate_ite_8_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(ll_backend__ite_gen__generate_ite_8_0_i29);
	}
	if (MR_INT_EQ(MR_sv(7),2)) {
		MR_GOTO_LAB(ll_backend__ite_gen__generate_ite_8_0_i29);
	}
MR_def_label(ll_backend__ite_gen__generate_ite_8_0,89)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_sv(17);
	MR_np_call_localret_ent(ll_backend__code_info__maybe_save_ticket_5_0,
		ll_backend__ite_gen__generate_ite_8_0_i36);
MR_def_label(ll_backend__ite_gen__generate_ite_8_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_sv(17);
	MR_np_call_localret_ent(ll_backend__code_info__maybe_save_ticket_5_0,
		ll_backend__ite_gen__generate_ite_8_0_i36);
MR_def_label(ll_backend__ite_gen__generate_ite_8_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_sv(17) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(19) = MR_tempr1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(4);
	}
	MR_np_call_localret_ent(fn__ll_backend__code_info__should_add_region_ops_2_0,
		ll_backend__ite_gen__generate_ite_8_0_i37);
MR_def_label(ll_backend__ite_gen__generate_ite_8_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(18) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_to_conj_list_2_0,
		ll_backend__ite_gen__generate_ite_8_0_i38);
MR_def_label(ll_backend__ite_gen__generate_ite_8_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(18);
	MR_r2 = MR_sv(5);
	MR_r4 = MR_sv(19);
	MR_np_call_localret_ent(ll_backend__ite_gen__maybe_create_ite_region_frame_9_0,
		ll_backend__ite_gen__generate_ite_8_0_i39);
MR_def_label(ll_backend__ite_gen__generate_ite_8_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(18) = MR_r1;
	MR_sv(19) = MR_r2;
	MR_sv(20) = MR_r3;
	MR_sv(21) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(22) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__code_info__remember_position_2_0,
		ll_backend__ite_gen__generate_ite_8_0_i40);
MR_def_label(ll_backend__ite_gen__generate_ite_8_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(22);
	MR_sv(22) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(ll_backend__code_info__prepare_for_ite_hijack_5_0,
		ll_backend__ite_gen__generate_ite_8_0_i41);
MR_def_label(ll_backend__ite_gen__generate_ite_8_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_sv(9) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(10);
	MR_sv(10) = MR_tempr2;
	MR_r4 = MR_r3;
	MR_r3 = MR_sv(12);
	}
	MR_np_call_localret_ent(ll_backend__code_info__make_resume_point_6_0,
		ll_backend__ite_gen__generate_ite_8_0_i42);
MR_def_label(ll_backend__ite_gen__generate_ite_8_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r2;
	MR_r2 = MR_sv(8);
	MR_sv(8) = MR_r1;
	MR_np_call_localret_ent(ll_backend__code_info__effect_resume_point_5_0,
		ll_backend__ite_gen__generate_ite_8_0_i43);
MR_def_label(ll_backend__ite_gen__generate_ite_8_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r3 = MR_r2;
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(ll_backend__trace_gen__maybe_generate_internal_event_code_5_0,
		ll_backend__ite_gen__generate_ite_8_0_i44);
MR_def_label(ll_backend__ite_gen__generate_ite_8_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r2;
	MR_r2 = MR_sv(11);
	MR_sv(11) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(ll_backend__code_gen__generate_goal_5_0,
		ll_backend__ite_gen__generate_ite_8_0_i45);
MR_def_label(ll_backend__ite_gen__generate_ite_8_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_sv(9) = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__code_info__ite_enter_then_5_0,
		ll_backend__ite_gen__generate_ite_8_0_i46);
MR_def_label(ll_backend__ite_gen__generate_ite_8_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(23) = MR_r1;
	MR_sv(24) = MR_r2;
	MR_r1 = MR_r3;
	MR_np_call_localret_ent(ll_backend__code_info__pickup_zombies_3_0,
		ll_backend__ite_gen__generate_ite_8_0_i47);
MR_def_label(ll_backend__ite_gen__generate_ite_8_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(ll_backend__code_info__make_vars_forward_dead_3_0,
		ll_backend__ite_gen__generate_ite_8_0_i48);
MR_def_label(ll_backend__ite_gen__generate_ite_8_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(7),0)) {
		MR_GOTO_LAB(ll_backend__ite_gen__generate_ite_8_0_i50);
	}
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(16);
	MR_np_call_localret_ent(ll_backend__code_info__maybe_release_hp_3_0,
		ll_backend__ite_gen__generate_ite_8_0_i55);
MR_def_label(ll_backend__ite_gen__generate_ite_8_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(7),1)) {
		MR_GOTO_LAB(ll_backend__ite_gen__generate_ite_8_0_i54);
	}
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(16);
	MR_np_call_localret_ent(ll_backend__code_info__maybe_release_hp_3_0,
		ll_backend__ite_gen__generate_ite_8_0_i55);
MR_def_label(ll_backend__ite_gen__generate_ite_8_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(17);
	MR_r2 = (MR_Integer) 1;
	MR_np_call_localret_ent(ll_backend__code_info__maybe_reset_prune_and_release_ticket_5_0,
		ll_backend__ite_gen__generate_ite_8_0_i56);
MR_def_label(ll_backend__ite_gen__generate_ite_8_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(21);
	MR_r3 = MR_r2;
	MR_r2 = (MR_Integer) 1;
	MR_np_call_localret_ent(ll_backend__code_info__release_several_temp_slots_4_0,
		ll_backend__ite_gen__generate_ite_8_0_i57);
MR_def_label(ll_backend__ite_gen__generate_ite_8_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(25) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_GOTO_LAB(ll_backend__ite_gen__generate_ite_8_0_i49);
MR_def_label(ll_backend__ite_gen__generate_ite_8_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(17);
	MR_r2 = (MR_Integer) 2;
	MR_np_call_localret_ent(ll_backend__code_info__maybe_reset_ticket_3_0,
		ll_backend__ite_gen__generate_ite_8_0_i58);
MR_def_label(ll_backend__ite_gen__generate_ite_8_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_sv(25) = MR_sv(7);
	MR_sv(7) = MR_tempr1;
	}
MR_def_label(ll_backend__ite_gen__generate_ite_8_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_llds__goal_info_get_store_map_2_0,
		ll_backend__ite_gen__generate_ite_8_0_i59);
MR_def_label(ll_backend__ite_gen__generate_ite_8_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(21) = MR_r1;
	MR_r1 = MR_sv(25);
	MR_np_call_localret_ent(ll_backend__code_info__get_instmap_2_0,
		ll_backend__ite_gen__generate_ite_8_0_i60);
MR_def_label(ll_backend__ite_gen__generate_ite_8_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__instmap__is_unreachable_1_0,
		ll_backend__ite_gen__generate_ite_8_0_i63);
MR_def_label(ll_backend__ite_gen__generate_ite_8_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__ite_gen__generate_ite_8_0_i62);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_llds, abs_locn);
	MR_np_call_localret_ent(map__init_1_0,
		ll_backend__ite_gen__generate_ite_8_0_i65);
MR_def_label(ll_backend__ite_gen__generate_ite_8_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_sv(25);
	MR_np_call_localret_ent(ll_backend__code_info__generate_branch_end_6_0,
		ll_backend__ite_gen__generate_ite_8_0_i66);
MR_def_label(ll_backend__ite_gen__generate_ite_8_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(22);
	MR_sv(2) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(25) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(22) = MR_tempr1;
	MR_sv(26) = MR_r2;
	MR_r2 = MR_r3;
	}
	MR_np_call_localret_ent(ll_backend__code_info__reset_to_position_3_0,
		ll_backend__ite_gen__generate_ite_8_0_i71);
MR_def_label(ll_backend__ite_gen__generate_ite_8_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(25);
	MR_np_call_localret_ent(ll_backend__trace_gen__maybe_generate_internal_event_code_5_0,
		ll_backend__ite_gen__generate_ite_8_0_i67);
MR_def_label(ll_backend__ite_gen__generate_ite_8_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ll_backend__code_gen__generate_goal_5_0,
		ll_backend__ite_gen__generate_ite_8_0_i68);
MR_def_label(ll_backend__ite_gen__generate_ite_8_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(25) = MR_r1;
	MR_r1 = MR_sv(21);
	MR_r3 = MR_r2;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(ll_backend__code_info__generate_branch_end_6_0,
		ll_backend__ite_gen__generate_ite_8_0_i69);
MR_def_label(ll_backend__ite_gen__generate_ite_8_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(22);
	MR_sv(22) = MR_tempr1;
	MR_sv(26) = MR_r2;
	MR_r2 = MR_r3;
	}
	MR_np_call_localret_ent(ll_backend__code_info__reset_to_position_3_0,
		ll_backend__ite_gen__generate_ite_8_0_i71);
MR_def_label(ll_backend__ite_gen__generate_ite_8_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(ll_backend__code_info__generate_resume_point_4_0,
		ll_backend__ite_gen__generate_ite_8_0_i72);
MR_def_label(ll_backend__ite_gen__generate_ite_8_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(16);
	MR_np_call_localret_ent(ll_backend__code_info__maybe_restore_and_release_hp_4_0,
		ll_backend__ite_gen__generate_ite_8_0_i73);
MR_def_label(ll_backend__ite_gen__generate_ite_8_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(16) = MR_r1;
	MR_r1 = MR_sv(17);
	MR_r3 = MR_r2;
	MR_r2 = (MR_Integer) 0;
	MR_np_call_localret_ent(ll_backend__code_info__maybe_reset_discard_and_release_ticket_5_0,
		ll_backend__ite_gen__generate_ite_8_0_i74);
MR_def_label(ll_backend__ite_gen__generate_ite_8_0,74)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r2;
	MR_r2 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(ll_backend__trace_gen__maybe_generate_internal_event_code_5_0,
		ll_backend__ite_gen__generate_ite_8_0_i75);
MR_def_label(ll_backend__ite_gen__generate_ite_8_0,75)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r3 = MR_r2;
	MR_r2 = MR_sv(3);
	}
	MR_np_call_localret_ent(ll_backend__code_gen__generate_goal_5_0,
		ll_backend__ite_gen__generate_ite_8_0_i76);
MR_def_label(ll_backend__ite_gen__generate_ite_8_0,76)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(21);
	MR_r3 = MR_r2;
	MR_r2 = MR_sv(22);
	MR_np_call_localret_ent(ll_backend__code_info__generate_branch_end_6_0,
		ll_backend__ite_gen__generate_ite_8_0_i77);
MR_def_label(ll_backend__ite_gen__generate_ite_8_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(17) = MR_r1;
	MR_sv(22) = MR_r2;
	MR_r1 = MR_r3;
	MR_np_call_localret_ent(ll_backend__code_info__get_next_label_3_0,
		ll_backend__ite_gen__generate_ite_8_0_i78);
MR_def_label(ll_backend__ite_gen__generate_ite_8_0,78)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(0, MR_tempr3, 1) = (MR_Word) MR_string_const("Jump to the end of if-then-else", 31);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr2, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_string_const("end of if-then-else", 19);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_sv(27) = MR_r2;
	MR_r2 = MR_sv(5);
	MR_sv(5) = MR_tempr3;
	MR_r1 = MR_sv(14);
	MR_sv(14) = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__ite_gen__make_pneg_context_wrappers_5_0,
		ll_backend__ite_gen__generate_ite_8_0_i79);
MR_def_label(ll_backend__ite_gen__generate_ite_8_0,79)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(14);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(22);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_r3;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(20);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(16);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(24);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(8);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(26);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(25);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_r2;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(19);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(7);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(23);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(9);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_r1;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(11);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(12);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(10);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(18);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(15);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(13);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_sv(1), 3, (MR_Integer) 1);
	MR_tfield(3, MR_sv(1), 0) = MR_tempr1;
	MR_r1 = MR_sv(21);
	MR_r2 = MR_sv(17);
	MR_r3 = MR_sv(27);
	}
	MR_np_call_localret_ent(ll_backend__code_info__after_all_branches_4_0,
		ll_backend__ite_gen__generate_ite_8_0_i80);
MR_def_label(ll_backend__ite_gen__generate_ite_8_0,80)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(28);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(ll_backend__trace_gen__maybe_generate_negated_event_code_6_0);
MR_decl_entry(ll_backend__code_info__generate_failure_3_0);
MR_decl_entry(ll_backend__code_info__set_forward_live_vars_3_0);

MR_BEGIN_MODULE(ll_backend__ite_gen_module8)
	MR_init_entry1(ll_backend__ite_gen__generate_negation_general_8_0);
	MR_init_label8(ll_backend__ite_gen__generate_negation_general_8_0,2,3,4,8,6,11,12,13)
	MR_init_label8(ll_backend__ite_gen__generate_negation_general_8_0,14,15,16,17,18,19,20,21)
	MR_init_label8(ll_backend__ite_gen__generate_negation_general_8_0,22,23,24,26,28,27,34,35)
	MR_init_label8(ll_backend__ite_gen__generate_negation_general_8_0,36,37,38,39,40,41,42,43)
	MR_init_label3(ll_backend__ite_gen__generate_negation_general_8_0,44,45,46)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__ite_gen__generate_negation_general_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(24);
	MR_sv(24) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(4) = MR_tempr1;
	MR_sv(5) = MR_r5;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_r6;
	}
	MR_np_call_localret_ent(ll_backend__code_info__produce_vars_5_0,
		ll_backend__ite_gen__generate_negation_general_8_0_i2);
MR_def_label(ll_backend__ite_gen__generate_negation_general_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_sv(7) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(9) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__code_info__get_globals_2_0,
		ll_backend__ite_gen__generate_negation_general_8_0_i3);
MR_def_label(ll_backend__ite_gen__generate_negation_general_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r2 = (MR_Integer) 244;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		ll_backend__ite_gen__generate_negation_general_8_0_i4);
MR_def_label(ll_backend__ite_gen__generate_negation_general_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(ll_backend__ite_gen__generate_negation_general_8_0_i6);
	}
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__goal_form__goal_may_allocate_heap_1_0,
		ll_backend__ite_gen__generate_negation_general_8_0_i8);
MR_def_label(ll_backend__ite_gen__generate_negation_general_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__ite_gen__generate_negation_general_8_0_i6);
	}
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(ll_backend__code_info__maybe_save_hp_5_0,
		ll_backend__ite_gen__generate_negation_general_8_0_i11);
MR_def_label(ll_backend__ite_gen__generate_negation_general_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(ll_backend__code_info__maybe_save_hp_5_0,
		ll_backend__ite_gen__generate_negation_general_8_0_i11);
MR_def_label(ll_backend__ite_gen__generate_negation_general_8_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_sv(10) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(11) = MR_tempr1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(3);
	}
	MR_np_call_localret_ent(fn__ll_backend__code_info__should_add_trail_ops_2_0,
		ll_backend__ite_gen__generate_negation_general_8_0_i12);
MR_def_label(ll_backend__ite_gen__generate_negation_general_8_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(11);
	MR_np_call_localret_ent(ll_backend__code_info__maybe_save_ticket_5_0,
		ll_backend__ite_gen__generate_negation_general_8_0_i13);
MR_def_label(ll_backend__ite_gen__generate_negation_general_8_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_sv(12) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(13) = MR_tempr1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(3);
	}
	MR_np_call_localret_ent(fn__ll_backend__code_info__should_add_region_ops_2_0,
		ll_backend__ite_gen__generate_negation_general_8_0_i14);
MR_def_label(ll_backend__ite_gen__generate_negation_general_8_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_ctfield(0, MR_sv(2), 1);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r4 = MR_sv(13);
	MR_np_call_localret_ent(ll_backend__ite_gen__maybe_create_ite_region_frame_9_0,
		ll_backend__ite_gen__generate_negation_general_8_0_i15);
MR_def_label(ll_backend__ite_gen__generate_negation_general_8_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(13) = MR_r1;
	MR_sv(14) = MR_r2;
	MR_sv(15) = MR_r3;
	MR_sv(16) = MR_r4;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_r5;
	MR_np_call_localret_ent(ll_backend__code_info__prepare_for_ite_hijack_5_0,
		ll_backend__ite_gen__generate_negation_general_8_0_i16);
MR_def_label(ll_backend__ite_gen__generate_negation_general_8_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_sv(4) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(5);
	MR_sv(5) = MR_tempr2;
	MR_r4 = MR_r3;
	MR_r3 = MR_sv(6);
	}
	MR_np_call_localret_ent(ll_backend__code_info__make_resume_point_6_0,
		ll_backend__ite_gen__generate_negation_general_8_0_i17);
MR_def_label(ll_backend__ite_gen__generate_negation_general_8_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r3 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(ll_backend__code_info__effect_resume_point_5_0,
		ll_backend__ite_gen__generate_negation_general_8_0_i18);
MR_def_label(ll_backend__ite_gen__generate_negation_general_8_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(17) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r3 = MR_r2;
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(ll_backend__trace_gen__maybe_generate_internal_event_code_5_0,
		ll_backend__ite_gen__generate_negation_general_8_0_i19);
MR_def_label(ll_backend__ite_gen__generate_negation_general_8_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(18) = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_r3 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(ll_backend__code_gen__generate_goal_5_0,
		ll_backend__ite_gen__generate_negation_general_8_0_i20);
MR_def_label(ll_backend__ite_gen__generate_negation_general_8_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_sv(4) = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__code_info__ite_enter_then_5_0,
		ll_backend__ite_gen__generate_negation_general_8_0_i21);
MR_def_label(ll_backend__ite_gen__generate_negation_general_8_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(19) = MR_r1;
	MR_sv(20) = MR_r2;
	MR_r1 = MR_r3;
	MR_np_call_localret_ent(ll_backend__code_info__pickup_zombies_3_0,
		ll_backend__ite_gen__generate_negation_general_8_0_i22);
MR_def_label(ll_backend__ite_gen__generate_negation_general_8_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(ll_backend__code_info__make_vars_forward_dead_3_0,
		ll_backend__ite_gen__generate_negation_general_8_0_i23);
MR_def_label(ll_backend__ite_gen__generate_negation_general_8_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(21) = MR_r1;
	MR_np_call_localret_ent(ll_backend__code_info__get_forward_live_vars_2_0,
		ll_backend__ite_gen__generate_negation_general_8_0_i24);
MR_def_label(ll_backend__ite_gen__generate_negation_general_8_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),0)) {
		MR_GOTO_LAB(ll_backend__ite_gen__generate_negation_general_8_0_i26);
	}
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(21);
	MR_sv(21) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(22) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(23) = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(ll_backend__code_info__generate_resume_point_4_0,
		ll_backend__ite_gen__generate_negation_general_8_0_i40);
MR_def_label(ll_backend__ite_gen__generate_negation_general_8_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),1)) {
		MR_GOTO_LAB(ll_backend__ite_gen__generate_negation_general_8_0_i27);
	}
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(21);
	MR_np_call_localret_ent(ll_backend__code_info__remember_position_2_0,
		ll_backend__ite_gen__generate_negation_general_8_0_i28);
MR_def_label(ll_backend__ite_gen__generate_negation_general_8_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(23) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(21);
	MR_np_call_localret_ent(ll_backend__code_info__maybe_release_hp_3_0,
		ll_backend__ite_gen__generate_negation_general_8_0_i35);
MR_def_label(ll_backend__ite_gen__generate_negation_general_8_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(21);
	MR_np_call_localret_ent(ll_backend__code_info__remember_position_2_0,
		ll_backend__ite_gen__generate_negation_general_8_0_i34);
MR_def_label(ll_backend__ite_gen__generate_negation_general_8_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(23) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(21);
	MR_np_call_localret_ent(ll_backend__code_info__maybe_release_hp_3_0,
		ll_backend__ite_gen__generate_negation_general_8_0_i35);
MR_def_label(ll_backend__ite_gen__generate_negation_general_8_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(12);
	MR_r2 = (MR_Integer) 1;
	MR_np_call_localret_ent(ll_backend__code_info__maybe_reset_prune_and_release_ticket_5_0,
		ll_backend__ite_gen__generate_negation_general_8_0_i36);
MR_def_label(ll_backend__ite_gen__generate_negation_general_8_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(21) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r4 = MR_r2;
	MR_r2 = MR_sv(3);
	MR_r3 = (MR_Integer) 1;
	MR_np_call_localret_ent(ll_backend__trace_gen__maybe_generate_negated_event_code_6_0,
		ll_backend__ite_gen__generate_negation_general_8_0_i37);
MR_def_label(ll_backend__ite_gen__generate_negation_general_8_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(22) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(ll_backend__code_info__generate_failure_3_0,
		ll_backend__ite_gen__generate_negation_general_8_0_i38);
MR_def_label(ll_backend__ite_gen__generate_negation_general_8_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(23);
	MR_sv(23) = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__code_info__reset_to_position_3_0,
		ll_backend__ite_gen__generate_negation_general_8_0_i39);
MR_def_label(ll_backend__ite_gen__generate_negation_general_8_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(ll_backend__code_info__generate_resume_point_4_0,
		ll_backend__ite_gen__generate_negation_general_8_0_i40);
MR_def_label(ll_backend__ite_gen__generate_negation_general_8_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__code_info__set_forward_live_vars_3_0,
		ll_backend__ite_gen__generate_negation_general_8_0_i41);
MR_def_label(ll_backend__ite_gen__generate_negation_general_8_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_np_call_localret_ent(ll_backend__code_info__maybe_restore_and_release_hp_4_0,
		ll_backend__ite_gen__generate_negation_general_8_0_i42);
MR_def_label(ll_backend__ite_gen__generate_negation_general_8_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(12);
	MR_r3 = MR_r2;
	MR_r2 = (MR_Integer) 0;
	MR_np_call_localret_ent(ll_backend__code_info__maybe_reset_discard_and_release_ticket_5_0,
		ll_backend__ite_gen__generate_negation_general_8_0_i43);
MR_def_label(ll_backend__ite_gen__generate_negation_general_8_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(16);
	MR_r3 = MR_r2;
	MR_r2 = (MR_Integer) 1;
	MR_np_call_localret_ent(ll_backend__code_info__release_several_temp_slots_4_0,
		ll_backend__ite_gen__generate_negation_general_8_0_i44);
MR_def_label(ll_backend__ite_gen__generate_negation_general_8_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = (MR_Integer) 0;
	MR_np_call_localret_ent(ll_backend__trace_gen__maybe_generate_negated_event_code_6_0,
		ll_backend__ite_gen__generate_negation_general_8_0_i45);
MR_def_label(ll_backend__ite_gen__generate_negation_general_8_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(3);
	MR_sv(3) = MR_tempr1;
	MR_r1 = MR_sv(8);
	}
	MR_np_call_localret_ent(ll_backend__ite_gen__make_pneg_context_wrappers_5_0,
		ll_backend__ite_gen__generate_negation_general_8_0_i46);
MR_def_label(ll_backend__ite_gen__generate_negation_general_8_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r3;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(15);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(6);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(10);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(20);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(23);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(22);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(14);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(21);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(19);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(18);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(13);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(11);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(9);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(17);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(7);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 1);
	MR_tfield(3, MR_r1, 0) = MR_tempr2;
	MR_r2 = MR_sv(3);
	MR_decr_sp_and_return(24);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(ll_backend__code_info__failure_is_direct_branch_2_0);
MR_decl_entry(libs__globals__lookup_bool_option_3_1);
MR_decl_entry(ll_backend__code_info__enter_simple_neg_5_0);
MR_decl_entry(fn__ll_backend__code_info__variable_type_2_0);
MR_decl_entry(ll_backend__code_info__leave_simple_neg_4_0);

MR_BEGIN_MODULE(ll_backend__ite_gen_module9)
	MR_init_entry1(ll_backend__ite_gen__generate_negation_6_0);
	MR_init_label8(ll_backend__ite_gen__generate_negation_6_0,3,4,2,6,8,10,7,16)
	MR_init_label8(ll_backend__ite_gen__generate_negation_6_0,18,19,21,22,23,24,25,28)
	MR_init_label3(ll_backend__ite_gen__generate_negation_6_0,33,11,12)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__ite_gen__generate_negation_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ll_backend__ite_gen__generate_negation_6_0_i3);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 0);
	MR_r1 = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(10) = MR_r4;
	MR_GOTO_LAB(ll_backend__ite_gen__generate_negation_6_0_i2);
	}
MR_def_label(ll_backend__ite_gen__generate_negation_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(ll_backend__ite_gen__generate_negation_6_0_i4);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 0);
	MR_r1 = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(10) = MR_r4;
	MR_GOTO_LAB(ll_backend__ite_gen__generate_negation_6_0_i2);
	}
MR_def_label(ll_backend__ite_gen__generate_negation_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("ite_gen", 7);
	MR_r2 = (MR_Word) MR_string_const("generate_negation: nondet negation.", 35);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		ll_backend__ite_gen__generate_negation_6_0_i2);
MR_def_label(ll_backend__ite_gen__generate_negation_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_llds__goal_info_get_resume_point_2_0,
		ll_backend__ite_gen__generate_negation_6_0_i6);
MR_def_label(ll_backend__ite_gen__generate_negation_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__ite_gen__generate_negation_6_0_i8);
	}
	MR_r1 = (MR_Word) MR_string_const("ite_gen", 7);
	MR_r2 = (MR_Word) MR_string_const("generate_negation: negated goal has no resume point.", 52);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		ll_backend__ite_gen__generate_negation_6_0_i7);
MR_def_label(ll_backend__ite_gen__generate_negation_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_sv(4) = MR_ctfield(1, MR_r1, 0);
	MR_sv(5) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(hlds__hlds_llds__goal_info_set_resume_point_3_0,
		ll_backend__ite_gen__generate_negation_6_0_i10);
MR_def_label(ll_backend__ite_gen__generate_negation_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_sv(6) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(10);
	}
MR_def_label(ll_backend__ite_gen__generate_negation_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),1)) {
		MR_GOTO_LAB(ll_backend__ite_gen__generate_negation_6_0_i12);
	}
	if (MR_PTAG_TESTR(MR_sv(3),0)) {
		MR_GOTO_LAB(ll_backend__ite_gen__generate_negation_6_0_i12);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_sv(3), 3);
	if (MR_RTAGS_TESTR(MR_tempr1,3,0)) {
		MR_GOTO_LAB(ll_backend__ite_gen__generate_negation_6_0_i12);
	}
	MR_sv(3) = MR_r2;
	MR_sv(7) = MR_ctfield(3, MR_tempr1, 1);
	MR_sv(8) = MR_ctfield(3, MR_tempr1, 2);
	MR_sv(10) = MR_r1;
	}
	MR_np_call_localret_ent(ll_backend__code_info__failure_is_direct_branch_2_0,
		ll_backend__ite_gen__generate_negation_6_0_i16);
MR_def_label(ll_backend__ite_gen__generate_negation_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__ite_gen__generate_negation_6_0_i11);
	}
	MR_sv(9) = MR_r2;
	MR_r1 = MR_sv(10);
	MR_np_call_localret_ent(ll_backend__code_info__get_globals_2_0,
		ll_backend__ite_gen__generate_negation_6_0_i18);
MR_def_label(ll_backend__ite_gen__generate_negation_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 375;
	MR_r3 = (MR_Integer) 1;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_1,
		ll_backend__ite_gen__generate_negation_6_0_i19);
MR_def_label(ll_backend__ite_gen__generate_negation_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__ite_gen__generate_negation_6_0_i11);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(10);
	MR_np_call_localret_ent(ll_backend__code_info__enter_simple_neg_5_0,
		ll_backend__ite_gen__generate_negation_6_0_i21);
MR_def_label(ll_backend__ite_gen__generate_negation_6_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(ll_backend__code_info__produce_variable_5_0,
		ll_backend__ite_gen__generate_negation_6_0_i22);
MR_def_label(ll_backend__ite_gen__generate_negation_6_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(ll_backend__code_info__produce_variable_5_0,
		ll_backend__ite_gen__generate_negation_6_0_i23);
MR_def_label(ll_backend__ite_gen__generate_negation_6_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_r2 = MR_sv(7);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(7) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__ll_backend__code_info__variable_type_2_0,
		ll_backend__ite_gen__generate_negation_6_0_i24);
MR_def_label(ll_backend__ite_gen__generate_negation_6_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(ll_backend__ite_gen__generate_negation_6_0_i25);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(2, MR_r1, 0);
	if (MR_INT_NE(MR_tempr1,2)) {
		MR_GOTO_LAB(ll_backend__ite_gen__generate_negation_6_0_i25);
	}
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 15);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(4);
	MR_tfield(3, MR_tempr1, 3) = MR_sv(6);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 9;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tfield(3, MR_tempr2, 2) = MR_sv(9);
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_string_const("test inequality", 15);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r3 = MR_sv(7);
	}
	MR_np_call_localret_ent(ll_backend__code_info__leave_simple_neg_4_0,
		ll_backend__ite_gen__generate_negation_6_0_i33);
MR_def_label(ll_backend__ite_gen__generate_negation_6_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(ll_backend__ite_gen__generate_negation_6_0_i28);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(2, MR_r1, 0);
	if (MR_INT_NE(MR_tempr1,1)) {
		MR_GOTO_LAB(ll_backend__ite_gen__generate_negation_6_0_i28);
	}
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 30);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(4);
	MR_tfield(3, MR_tempr1, 3) = MR_sv(6);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 9;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tfield(3, MR_tempr2, 2) = MR_sv(9);
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_string_const("test inequality", 15);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r3 = MR_sv(7);
	}
	MR_np_call_localret_ent(ll_backend__code_info__leave_simple_neg_4_0,
		ll_backend__ite_gen__generate_negation_6_0_i33);
MR_def_label(ll_backend__ite_gen__generate_negation_6_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 12);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(4);
	MR_tfield(3, MR_tempr1, 3) = MR_sv(6);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 9;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tfield(3, MR_tempr2, 2) = MR_sv(9);
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_string_const("test inequality", 15);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r3 = MR_sv(7);
	}
	MR_np_call_localret_ent(ll_backend__code_info__leave_simple_neg_4_0,
		ll_backend__ite_gen__generate_negation_6_0_i33);
MR_def_label(ll_backend__ite_gen__generate_negation_6_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 1);
	MR_tfield(3, MR_tempr2, 0) = MR_tempr1;
	MR_r2 = MR_r1;
	MR_r1 = MR_tempr2;
	MR_decr_sp_and_return(11);
	}
MR_def_label(ll_backend__ite_gen__generate_negation_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(10);
MR_def_label(ll_backend__ite_gen__generate_negation_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(ll_backend__ite_gen__generate_negation_general_8_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__ll_backend__ite_gen_maybe_bunch_0(void)
{
	ll_backend__ite_gen_module0();
	ll_backend__ite_gen_module1();
	ll_backend__ite_gen_module2();
	ll_backend__ite_gen_module3();
	ll_backend__ite_gen_module4();
	ll_backend__ite_gen_module5();
	ll_backend__ite_gen_module6();
	ll_backend__ite_gen_module7();
	ll_backend__ite_gen_module8();
	ll_backend__ite_gen_module9();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__ll_backend__ite_gen__init(void);
void mercury__ll_backend__ite_gen__init_type_tables(void);
void mercury__ll_backend__ite_gen__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__ll_backend__ite_gen__write_out_proc_statics(FILE *fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__ll_backend__ite_gen__init_complexity_procs(void);
#endif

void mercury__ll_backend__ite_gen__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__ll_backend__ite_gen_maybe_bunch_0();
	mercury__ll_backend__ite_gen__init_debugger();
}

void mercury__ll_backend__ite_gen__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}


void mercury__ll_backend__ite_gen__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__ll_backend__ite_gen__write_out_proc_statics(FILE *fp)
{
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__ll_backend__ite_gen__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
