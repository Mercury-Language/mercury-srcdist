/*
** Automatically generated from `post_term_analysis.m'
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
INIT mercury__transform_hlds__post_term_analysis__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 526 "../library/io.int"
#include "io.mh"

#line 28 "transform_hlds.post_term_analysis.c"
#line 536 "../library/io.int"
#include "string.mh"

#line 32 "transform_hlds.post_term_analysis.c"
#line 31 "../library/bitmap.int2"
#include "bitmap.mh"

#line 36 "transform_hlds.post_term_analysis.c"
#line 30 "../library/time.int2"
#include "time.mh"

#line 40 "transform_hlds.post_term_analysis.c"
#line 33 "../library/array.int2"
#include "array.mh"

#line 44 "transform_hlds.post_term_analysis.c"
#line 39 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 48 "transform_hlds.post_term_analysis.c"
#line 49 "transform_hlds.post_term_analysis.c"
#include "transform_hlds.post_term_analysis.mh"

#line 52 "transform_hlds.post_term_analysis.c"
#line 53 "transform_hlds.post_term_analysis.c"
#ifndef TRANSFORM_HLDS__POST_TERM_ANALYSIS_DECL_GUARD
#define TRANSFORM_HLDS__POST_TERM_ANALYSIS_DECL_GUARD

#line 57 "transform_hlds.post_term_analysis.c"
#line 58 "transform_hlds.post_term_analysis.c"

#endif
#line 61 "transform_hlds.post_term_analysis.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

struct mercury_type_0 {
	MR_Word * f1[3];
};
MR_STATIC_LINKAGE const struct mercury_type_0 mercury_common_0[];

struct mercury_type_1 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[6];
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

struct mercury_type_2 {
	MR_Integer f1;
	MR_String f2;
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];

struct mercury_type_3 {
	MR_Word * f1[2];
};
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];
MR_decl_label10(transform_hlds__post_term_analysis__process_special_pred_for_type_7_0, 3,8,11,10,7,18,16,4,23,24)
MR_decl_label10(transform_hlds__post_term_analysis__process_special_pred_for_type_7_0, 25,26,31,33,34,35,37,39,42,54)
MR_decl_label9(transform_hlds__post_term_analysis__run_post_term_analysis_3_0, 2,3,4,5,6,11,14,15,19)
MR_decl_label6(transform_hlds__post_term_analysis__warn_non_term_user_special_pred_6_0, 2,8,10,11,12,16)
MR_def_extern_entry(transform_hlds__post_term_analysis__run_post_term_analysis_3_0)
MR_decl_static(transform_hlds__post_term_analysis__process_special_pred_for_type_7_0)
MR_decl_static(transform_hlds__post_term_analysis__warn_non_term_user_special_pred_6_0)

extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_type_ctor_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_data__type_ctor_info_hlds_type_defn_0;
extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_pair__type_ctor_info_pair_2;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__prim_data__type_ctor_info_special_pred_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__prim_data__type_ctor_info_special_pred_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_type_ctor_0;
static const struct mercury_type_0 mercury_common_0[4] =
{
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(parse_tree__prog_data, type_ctor),
MR_CTOR0_ADDR(hlds__hlds_data, hlds_type_defn)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_STRING_CTOR_ADDR,
MR_COMMON(0,0)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(mdbcomp__prim_data, special_pred_id),
MR_CTOR0_ADDR(parse_tree__prog_data, type_ctor)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(mdbcomp__prim_data, special_pred_id),
MR_CTOR0_ADDR(parse_tree__prog_data, type_ctor)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__post_term_analysis__run_post_term_analysis_3_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_module_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_state_0;
static const struct mercury_type_1 mercury_common_1[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__post_term_analysis__run_post_term_analysis_3_0_1,
(MR_Word *) (MR_Integer) 0
},
6,
{
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_COMMON(0,1),
MR_COMMON(0,2),
MR_INT_CTOR_ADDR,
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
};

static const struct mercury_type_2 mercury_common_2[3] =
{
{
4,
MR_string_const("Warning: the user-defined ", 26)
},
{
4,
MR_string_const("for the type ", 13)
},
{
4,
MR_string_const("cannot be proven to terminate.", 30)
},
};

static const struct mercury_type_3 mercury_common_3[1] =
{
{
{
MR_TAG_COMMON(3,2,2),
MR_tbmkword(0, 0)
}
},
};


static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__post_term_analysis__run_post_term_analysis_3_0_1 = {
{
MR_PREDICATE,
"transform_hlds.post_term_analysis",
"transform_hlds.post_term_analysis",
"warn_non_term_user_special_pred",
6,
0
},
"transform_hlds.post_term_analysis",
"post_term_analysis.m",
106,
"25"
};


MR_decl_entry(hlds__hlds_module__module_info_get_globals_2_0);
MR_decl_entry(libs__globals__lookup_bool_option_3_0);
MR_decl_entry(hlds__hlds_module__module_info_get_special_pred_map_2_0);
MR_decl_entry(hlds__hlds_module__module_info_get_type_table_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_state_0;
MR_decl_entry(map__foldl_4_2);

MR_BEGIN_MODULE(transform_hlds__post_term_analysis_module0)
	MR_init_entry1(transform_hlds__post_term_analysis__run_post_term_analysis_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__post_term_analysis__run_post_term_analysis_3_0);
	MR_init_label9(transform_hlds__post_term_analysis__run_post_term_analysis_3_0,2,3,4,5,6,11,14,15,19)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'run_post_term_analysis'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__post_term_analysis__run_post_term_analysis_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		transform_hlds__post_term_analysis__run_post_term_analysis_3_0_i2);
MR_def_label(transform_hlds__post_term_analysis__run_post_term_analysis_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r2 = (MR_Integer) 399;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		transform_hlds__post_term_analysis__run_post_term_analysis_3_0_i3);
MR_def_label(transform_hlds__post_term_analysis__run_post_term_analysis_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Integer) 31;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		transform_hlds__post_term_analysis__run_post_term_analysis_3_0_i4);
MR_def_label(transform_hlds__post_term_analysis__run_post_term_analysis_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Integer) 81;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		transform_hlds__post_term_analysis__run_post_term_analysis_3_0_i5);
MR_def_label(transform_hlds__post_term_analysis__run_post_term_analysis_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 315;
	}
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		transform_hlds__post_term_analysis__run_post_term_analysis_3_0_i6);
MR_def_label(transform_hlds__post_term_analysis__run_post_term_analysis_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(3),1)) {
		MR_GOTO_LAB(transform_hlds__post_term_analysis__run_post_term_analysis_3_0_i19);
	}
	if (MR_INT_NE(MR_sv(4),1)) {
		MR_GOTO_LAB(transform_hlds__post_term_analysis__run_post_term_analysis_3_0_i19);
	}
	if (MR_INT_NE(MR_sv(2),1)) {
		MR_GOTO_LAB(transform_hlds__post_term_analysis__run_post_term_analysis_3_0_i11);
	}
	if (MR_INT_EQ(MR_r1,1)) {
		MR_GOTO_LAB(transform_hlds__post_term_analysis__run_post_term_analysis_3_0_i19);
	}
MR_def_label(transform_hlds__post_term_analysis__run_post_term_analysis_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_special_pred_map_2_0,
		transform_hlds__post_term_analysis__run_post_term_analysis_3_0_i14);
MR_def_label(transform_hlds__post_term_analysis__run_post_term_analysis_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_type_table_2_0,
		transform_hlds__post_term_analysis__run_post_term_analysis_3_0_i15);
MR_def_label(transform_hlds__post_term_analysis__run_post_term_analysis_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(1,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__post_term_analysis__warn_non_term_user_special_pred_6_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,3);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r3 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r5 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(map__foldl_4_2);
	}
MR_def_label(transform_hlds__post_term_analysis__run_post_term_analysis_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_data__get_type_defn_body_2_0);
MR_decl_entry(backend_libs__foreign__foreign_type_body_has_user_defined_eq_comp_pred_3_0);
MR_decl_entry(require__unexpected_3_0);
MR_decl_entry(hlds__hlds_pred__proc_id_to_int_2_1);
MR_decl_entry(hlds__hlds_module__module_info_pred_proc_info_5_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_goal_2_0);
MR_decl_entry(fn__hlds__goal_util__maybe_strip_equality_pretest_1_0);
MR_decl_entry(hlds__goal_form__goal_cannot_loop_2_0);
MR_decl_entry(hlds__hlds_data__get_type_defn_context_2_0);
MR_decl_entry(fn__hlds__hlds_out__hlds_out_util__type_ctor_to_string_1_0);
MR_decl_entry(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
MR_decl_entry(parse_tree__error_util__report_warning_6_0);

MR_BEGIN_MODULE(transform_hlds__post_term_analysis_module1)
	MR_init_entry1(transform_hlds__post_term_analysis__process_special_pred_for_type_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__post_term_analysis__process_special_pred_for_type_7_0);
	MR_init_label10(transform_hlds__post_term_analysis__process_special_pred_for_type_7_0,3,8,11,10,7,18,16,4,23,24)
	MR_init_label10(transform_hlds__post_term_analysis__process_special_pred_for_type_7_0,25,26,31,33,34,35,37,39,42,54)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'process_special_pred_for_type'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__post_term_analysis__process_special_pred_for_type_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(5) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_data__get_type_defn_body_2_0,
		transform_hlds__post_term_analysis__process_special_pred_for_type_7_0_i3);
MR_def_label(transform_hlds__post_term_analysis__process_special_pred_for_type_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_sv(2),3)) {
		MR_GOTO_LAB(transform_hlds__post_term_analysis__process_special_pred_for_type_7_0_i4);
	}
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(transform_hlds__post_term_analysis__process_special_pred_for_type_7_0_i8);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r1, 4);
	MR_r4 = MR_tempr1;
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(transform_hlds__post_term_analysis__process_special_pred_for_type_7_0_i54);
	}
	MR_r1 = MR_tfield(1, MR_tempr1, 0);
	MR_GOTO_LAB(transform_hlds__post_term_analysis__process_special_pred_for_type_7_0_i7);
	}
MR_def_label(transform_hlds__post_term_analysis__process_special_pred_for_type_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(transform_hlds__post_term_analysis__process_special_pred_for_type_7_0_i10);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_body((MR_Integer) MR_tempr1, (MR_Integer) 0);
	}
	MR_np_call_localret_ent(backend_libs__foreign__foreign_type_body_has_user_defined_eq_comp_pred_3_0,
		transform_hlds__post_term_analysis__process_special_pred_for_type_7_0_i11);
MR_def_label(transform_hlds__post_term_analysis__process_special_pred_for_type_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__post_term_analysis__process_special_pred_for_type_7_0_i54);
	}
	MR_r1 = MR_r2;
	MR_GOTO_LAB(transform_hlds__post_term_analysis__process_special_pred_for_type_7_0_i7);
MR_def_label(transform_hlds__post_term_analysis__process_special_pred_for_type_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,0)) {
		MR_GOTO_LAB(transform_hlds__post_term_analysis__process_special_pred_for_type_7_0_i54);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(3, MR_r1, 2);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(transform_hlds__post_term_analysis__process_special_pred_for_type_7_0_i54);
	}
	MR_r1 = MR_tfield(1, MR_tempr1, 0);
	}
MR_def_label(transform_hlds__post_term_analysis__process_special_pred_for_type_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(transform_hlds__post_term_analysis__process_special_pred_for_type_7_0_i16);
	}
	if (MR_INT_NE(MR_sv(2),2)) {
		MR_GOTO_LAB(transform_hlds__post_term_analysis__process_special_pred_for_type_7_0_i18);
	}
	MR_r4 = MR_tfield(0, MR_r1, 1);
	if (MR_LTAGS_TEST(MR_r4,0,0)) {
		MR_GOTO_LAB(transform_hlds__post_term_analysis__process_special_pred_for_type_7_0_i54);
	}
	MR_GOTO_LAB(transform_hlds__post_term_analysis__process_special_pred_for_type_7_0_i4);
MR_def_label(transform_hlds__post_term_analysis__process_special_pred_for_type_7_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(2),0)) {
		MR_GOTO_LAB(transform_hlds__post_term_analysis__process_special_pred_for_type_7_0_i54);
	}
	MR_r4 = MR_tfield(0, MR_r1, 0);
	if (MR_LTAGS_TEST(MR_r4,0,0)) {
		MR_GOTO_LAB(transform_hlds__post_term_analysis__process_special_pred_for_type_7_0_i54);
	}
	MR_GOTO_LAB(transform_hlds__post_term_analysis__process_special_pred_for_type_7_0_i4);
MR_def_label(transform_hlds__post_term_analysis__process_special_pred_for_type_7_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("transform_hlds.post_term_analysis", 33);
	MR_r2 = (MR_Word) MR_string_const("predicate \140transform_hlds.post_term_analysis.special_pred_needs_term_check\'/3", 77);
	MR_r3 = (MR_Word) MR_string_const("type is local and abstract_noncanonical", 39);
	MR_np_call_localret_ent(require__unexpected_3_0,
		transform_hlds__post_term_analysis__process_special_pred_for_type_7_0_i4);
MR_def_label(transform_hlds__post_term_analysis__process_special_pred_for_type_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_id_to_int_2_1,
		transform_hlds__post_term_analysis__process_special_pred_for_type_7_0_i23);
MR_def_label(transform_hlds__post_term_analysis__process_special_pred_for_type_7_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_proc_info_5_0,
		transform_hlds__post_term_analysis__process_special_pred_for_type_7_0_i24);
MR_def_label(transform_hlds__post_term_analysis__process_special_pred_for_type_7_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_goal_2_0,
		transform_hlds__post_term_analysis__process_special_pred_for_type_7_0_i25);
MR_def_label(transform_hlds__post_term_analysis__process_special_pred_for_type_7_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__hlds__goal_util__maybe_strip_equality_pretest_1_0,
		transform_hlds__post_term_analysis__process_special_pred_for_type_7_0_i26);
MR_def_label(transform_hlds__post_term_analysis__process_special_pred_for_type_7_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__goal_form__goal_cannot_loop_2_0,
		transform_hlds__post_term_analysis__process_special_pred_for_type_7_0_i31);
MR_def_label(transform_hlds__post_term_analysis__process_special_pred_for_type_7_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(transform_hlds__post_term_analysis__process_special_pred_for_type_7_0_i54);
	}
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_data__get_type_defn_context_2_0,
		transform_hlds__post_term_analysis__process_special_pred_for_type_7_0_i33);
MR_def_label(transform_hlds__post_term_analysis__process_special_pred_for_type_7_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		transform_hlds__post_term_analysis__process_special_pred_for_type_7_0_i34);
MR_def_label(transform_hlds__post_term_analysis__process_special_pred_for_type_7_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__hlds__hlds_out__hlds_out_util__type_ctor_to_string_1_0,
		transform_hlds__post_term_analysis__process_special_pred_for_type_7_0_i35);
MR_def_label(transform_hlds__post_term_analysis__process_special_pred_for_type_7_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(2),2)) {
		MR_GOTO_LAB(transform_hlds__post_term_analysis__process_special_pred_for_type_7_0_i37);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("comparison", 10);
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(3,2,0);
	MR_r2 = (MR_Word) MR_string_const(" predicate", 10);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		transform_hlds__post_term_analysis__process_special_pred_for_type_7_0_i42);
MR_def_label(transform_hlds__post_term_analysis__process_special_pred_for_type_7_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(2),3)) {
		MR_GOTO_LAB(transform_hlds__post_term_analysis__process_special_pred_for_type_7_0_i39);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("initialisation", 14);
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(3,2,0);
	MR_r2 = (MR_Word) MR_string_const(" predicate", 10);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		transform_hlds__post_term_analysis__process_special_pred_for_type_7_0_i42);
MR_def_label(transform_hlds__post_term_analysis__process_special_pred_for_type_7_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("equality", 8);
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(3,2,0);
	MR_r2 = (MR_Word) MR_string_const(" predicate", 10);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		transform_hlds__post_term_analysis__process_special_pred_for_type_7_0_i42);
MR_def_label(transform_hlds__post_term_analysis__process_special_pred_for_type_7_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_TAG_COMMON(1,3,0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_TAG_COMMON(3,2,1);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr4, 1) = MR_tempr3;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Integer) 0;
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(parse_tree__error_util__report_warning_6_0);
	}
MR_def_label(transform_hlds__post_term_analysis__process_special_pred_for_type_7_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__parse_tree__prog_type__builtin_type_ctors_with_no_hlds_type_defn_0_0);
MR_decl_entry(list__member_2_0);
MR_decl_entry(hlds__hlds_data__lookup_type_ctor_defn_3_0);
MR_decl_entry(hlds__hlds_data__get_type_defn_status_2_0);
MR_decl_entry(fn__hlds__hlds_pred__status_defined_in_this_module_1_0);

MR_BEGIN_MODULE(transform_hlds__post_term_analysis_module2)
	MR_init_entry1(transform_hlds__post_term_analysis__warn_non_term_user_special_pred_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__post_term_analysis__warn_non_term_user_special_pred_6_0);
	MR_init_label6(transform_hlds__post_term_analysis__warn_non_term_user_special_pred_6_0,2,8,10,11,12,16)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'warn_non_term_user_special_pred'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__post_term_analysis__warn_non_term_user_special_pred_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(4) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(5) = MR_r4;
	}
	MR_np_call_localret_ent(fn__parse_tree__prog_type__builtin_type_ctors_with_no_hlds_type_defn_0_0,
		transform_hlds__post_term_analysis__warn_non_term_user_special_pred_6_0_i2);
MR_def_label(transform_hlds__post_term_analysis__warn_non_term_user_special_pred_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_sv(3),1)) {
		MR_GOTO_LAB(transform_hlds__post_term_analysis__warn_non_term_user_special_pred_6_0_i16);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, type_ctor);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__member_2_0,
		transform_hlds__post_term_analysis__warn_non_term_user_special_pred_6_0_i8);
MR_def_label(transform_hlds__post_term_analysis__warn_non_term_user_special_pred_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(transform_hlds__post_term_analysis__warn_non_term_user_special_pred_6_0_i16);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_data__lookup_type_ctor_defn_3_0,
		transform_hlds__post_term_analysis__warn_non_term_user_special_pred_6_0_i10);
MR_def_label(transform_hlds__post_term_analysis__warn_non_term_user_special_pred_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_data__get_type_defn_status_2_0,
		transform_hlds__post_term_analysis__warn_non_term_user_special_pred_6_0_i11);
MR_def_label(transform_hlds__post_term_analysis__warn_non_term_user_special_pred_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__hlds__hlds_pred__status_defined_in_this_module_1_0,
		transform_hlds__post_term_analysis__warn_non_term_user_special_pred_6_0_i12);
MR_def_label(transform_hlds__post_term_analysis__warn_non_term_user_special_pred_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_r1,0)) {
		MR_GOTO_LAB(transform_hlds__post_term_analysis__warn_non_term_user_special_pred_6_0_i16);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(2);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(transform_hlds__post_term_analysis__process_special_pred_for_type_7_0);
MR_def_label(transform_hlds__post_term_analysis__warn_non_term_user_special_pred_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__transform_hlds__post_term_analysis_maybe_bunch_0(void)
{
	transform_hlds__post_term_analysis_module0();
	transform_hlds__post_term_analysis_module1();
	transform_hlds__post_term_analysis_module2();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__transform_hlds__post_term_analysis__init(void);
void mercury__transform_hlds__post_term_analysis__init_type_tables(void);
void mercury__transform_hlds__post_term_analysis__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__transform_hlds__post_term_analysis__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__transform_hlds__post_term_analysis__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__transform_hlds__post_term_analysis__init_threadscope_string_table(void);
#endif

void mercury__transform_hlds__post_term_analysis__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__transform_hlds__post_term_analysis_maybe_bunch_0();
	mercury__transform_hlds__post_term_analysis__init_debugger();
}

void mercury__transform_hlds__post_term_analysis__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}


void mercury__transform_hlds__post_term_analysis__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__transform_hlds__post_term_analysis__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__transform_hlds__post_term_analysis);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__transform_hlds__post_term_analysis__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__transform_hlds__post_term_analysis__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
