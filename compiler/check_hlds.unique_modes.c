/*
** Automatically generated from `unique_modes.m'
** by the Mercury compiler,
** version rotd-2011-09-09, configured for x86_64-unknown-linux-gnu.
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
INIT mercury__check_hlds__unique_modes__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 140 "../library/io.int2"
#include "io.mh"

#line 28 "check_hlds.unique_modes.c"
#line 150 "../library/io.int2"
#include "string.mh"

#line 32 "check_hlds.unique_modes.c"
#line 33 "../library/array.int2"
#include "array.mh"

#line 36 "check_hlds.unique_modes.c"
#line 39 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 40 "check_hlds.unique_modes.c"
#line 31 "../library/bitmap.int2"
#include "bitmap.mh"

#line 44 "check_hlds.unique_modes.c"
#line 30 "../library/time.int2"
#include "time.mh"

#line 48 "check_hlds.unique_modes.c"
#line 49 "check_hlds.unique_modes.c"
#include "check_hlds.unique_modes.mh"

#line 52 "check_hlds.unique_modes.c"
#line 53 "check_hlds.unique_modes.c"
#ifndef CHECK_HLDS__UNIQUE_MODES_DECL_GUARD
#define CHECK_HLDS__UNIQUE_MODES_DECL_GUARD

#line 57 "check_hlds.unique_modes.c"
#line 58 "check_hlds.unique_modes.c"

#endif
#line 61 "check_hlds.unique_modes.c"

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
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
	MR_Word * f5;
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

struct mercury_type_2 {
	MR_Word * f1;
	MR_Code * f2;
	MR_Integer f3;
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];

struct mercury_type_3 {
	MR_Integer f1;
	MR_Word * f2;
};
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];

struct mercury_type_4 {
	MR_Integer f1;
	MR_Integer f2;
	MR_Word * f3;
};
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_common_4[];
MR_decl_label5(check_hlds__unique_modes__make_all_nondet_live_vars_mostly_uniq_2_0, 2,5,7,8,4)
MR_decl_label10(check_hlds__unique_modes__make_var_list_mostly_uniq_3_0, 83,3,4,5,7,9,11,13,14,16)
MR_decl_label6(check_hlds__unique_modes__make_var_list_mostly_uniq_3_0, 18,22,23,24,25,6)
MR_decl_label10(check_hlds__unique_modes__prepare_for_disjunct_5_0, 5,6,7,9,10,13,15,16,17,12)
MR_decl_label1(check_hlds__unique_modes__prepare_for_disjunct_5_0, 2)
MR_decl_label10(check_hlds__unique_modes__select_changed_inst_vars_4_0, 48,3,4,5,6,7,9,11,13,17)
MR_decl_label2(check_hlds__unique_modes__select_changed_inst_vars_4_0, 19,10)
MR_decl_label5(check_hlds__unique_modes__select_live_vars_3_0, 23,3,5,6,4)
MR_decl_label5(check_hlds__unique_modes__select_nondet_live_vars_3_0, 23,3,5,6,4)
MR_decl_label10(check_hlds__unique_modes__unique_modes_check_call_7_0, 2,3,4,5,6,7,8,9,10,11)
MR_decl_label10(check_hlds__unique_modes__unique_modes_check_call_7_0, 12,13,14,15,16,19,17,23,27,28)
MR_decl_label10(check_hlds__unique_modes__unique_modes_check_call_7_0, 31,33,34,26,25,38,39,24,40,42)
MR_decl_label10(check_hlds__unique_modes__unique_modes_check_call_7_0, 43,44,45,46,41,49,50,51,53,56)
MR_decl_label7(check_hlds__unique_modes__unique_modes_check_call_7_0, 57,59,62,60,55,67,68)
MR_decl_label10(check_hlds__unique_modes__unique_modes_check_case_list_6_0, 37,4,5,6,9,11,8,12,13,14)
MR_decl_label3(check_hlds__unique_modes__unique_modes_check_case_list_6_0, 15,17,18)
MR_decl_label4(check_hlds__unique_modes__unique_modes_check_conj_5_0, 29,3,6,4)
MR_decl_label8(check_hlds__unique_modes__unique_modes_check_conj_2_6_0, 2,3,4,5,8,10,7,12)
MR_decl_label7(check_hlds__unique_modes__unique_modes_check_disj_7_0, 22,4,5,6,7,8,9)
MR_decl_label10(check_hlds__unique_modes__unique_modes_check_goal_4_0, 2,3,6,5,8,9,11,13,14,15)
MR_decl_label10(check_hlds__unique_modes__unique_modes_check_goal_4_0, 16,17,19,18,21,22,23,24,25,26)
MR_decl_label10(check_hlds__unique_modes__unique_modes_check_goal_4_0, 28,10,29,30,31,33,32,35,36,37)
MR_decl_label3(check_hlds__unique_modes__unique_modes_check_goal_4_0, 38,39,40)
MR_decl_label10(check_hlds__unique_modes__unique_modes_check_goal_atomic_goal_11_0, 2,5,4,8,9,11,12,13,16,18)
MR_decl_label10(check_hlds__unique_modes__unique_modes_check_goal_atomic_goal_11_0, 19,20,15,21,22,10,23,24,25,26)
MR_decl_label10(check_hlds__unique_modes__unique_modes_check_goal_atomic_goal_11_0, 27,28,29,30,31,32,33,34,38,41)
MR_decl_label8(check_hlds__unique_modes__unique_modes_check_goal_conj_5_0, 2,4,6,9,10,7,12,15)
MR_decl_label10(check_hlds__unique_modes__unique_modes_check_goal_disj_5_0, 2,5,6,4,8,9,11,12,13,16)
MR_decl_label10(check_hlds__unique_modes__unique_modes_check_goal_disj_5_0, 18,19,20,15,21,22,10,23,24,25)
MR_decl_label6(check_hlds__unique_modes__unique_modes_check_goal_disj_5_0, 26,27,28,29,32,34)
MR_decl_label10(check_hlds__unique_modes__unique_modes_check_goal_expr_5_0, 3,6,7,8,9,12,13,15,5,18)
MR_decl_label10(check_hlds__unique_modes__unique_modes_check_goal_expr_5_0, 20,21,22,17,25,26,29,32,33,35)
MR_decl_label10(check_hlds__unique_modes__unique_modes_check_goal_expr_5_0, 24,37,39,42,43,45,47,48,49,46)
MR_decl_label10(check_hlds__unique_modes__unique_modes_check_goal_expr_5_0, 50,51,52,53,54,55,58,56,62,64)
MR_decl_label10(check_hlds__unique_modes__unique_modes_check_goal_expr_5_0, 65,63,68,69,72,74,75,71,67,79)
MR_decl_label10(check_hlds__unique_modes__unique_modes_check_goal_expr_5_0, 80,41,82,84,88,91,92,95,90,238)
MR_decl_label10(check_hlds__unique_modes__unique_modes_check_goal_if_then_else_8_0, 2,3,4,5,6,7,8,9,10,11)
MR_decl_label10(check_hlds__unique_modes__unique_modes_check_goal_if_then_else_8_0, 12,13,14,15,16,17,18,19,20,23)
MR_decl_label10(check_hlds__unique_modes__unique_modes_check_goal_if_then_else_8_0, 25,26,21,27,28,29,30,31,32,35)
MR_decl_label1(check_hlds__unique_modes__unique_modes_check_goal_if_then_else_8_0, 37)
MR_decl_label10(check_hlds__unique_modes__unique_modes_check_goal_negation_5_0, 2,3,4,5,6,7,8,10,11,12)
MR_decl_label5(check_hlds__unique_modes__unique_modes_check_goal_negation_5_0, 13,14,15,16,17)
MR_decl_label10(check_hlds__unique_modes__unique_modes_check_goal_scope_6_0, 6,7,9,11,13,15,16,17,12,8)
MR_decl_label10(check_hlds__unique_modes__unique_modes_check_goal_scope_6_0, 21,5,23,24,25,22,85,29,30,31)
MR_decl_label9(check_hlds__unique_modes__unique_modes_check_goal_scope_6_0, 32,33,34,35,36,28,38,39,40)
MR_decl_label8(check_hlds__unique_modes__unique_modes_check_goal_switch_7_0, 2,5,6,4,8,9,10,12)
MR_decl_label1(check_hlds__unique_modes__unique_modes_check_module_3_0, 2)
MR_decl_label1(check_hlds__unique_modes__unique_modes_check_proc_6_0, 2)
MR_def_extern_entry(check_hlds__unique_modes__unique_modes_check_module_3_0)
MR_def_extern_entry(check_hlds__unique_modes__unique_modes_check_proc_6_0)
MR_decl_static(check_hlds__unique_modes__select_nondet_live_vars_3_0)
MR_decl_static(check_hlds__unique_modes__make_var_list_mostly_uniq_3_0)
MR_def_extern_entry(check_hlds__unique_modes__make_all_nondet_live_vars_mostly_uniq_2_0)
MR_def_extern_entry(check_hlds__unique_modes__prepare_for_disjunct_5_0)
MR_decl_static(check_hlds__unique_modes__select_live_vars_3_0)
MR_decl_static(check_hlds__unique_modes__select_changed_inst_vars_4_0)
MR_decl_static(check_hlds__unique_modes__unique_modes_check_call_7_0)
MR_def_extern_entry(check_hlds__unique_modes__unique_modes_check_goal_4_0)
MR_decl_static(check_hlds__unique_modes__unique_modes_check_goal_expr_5_0)
MR_decl_static(check_hlds__unique_modes__unique_modes_check_goal_conj_5_0)
MR_decl_static(check_hlds__unique_modes__unique_modes_check_goal_disj_5_0)
MR_decl_static(check_hlds__unique_modes__unique_modes_check_goal_if_then_else_8_0)
MR_decl_static(check_hlds__unique_modes__unique_modes_check_goal_negation_5_0)
MR_decl_static(check_hlds__unique_modes__unique_modes_check_goal_scope_6_0)
MR_decl_static(check_hlds__unique_modes__unique_modes_check_goal_switch_7_0)
MR_decl_static(check_hlds__unique_modes__unique_modes_check_goal_atomic_goal_11_0)
MR_decl_static(check_hlds__unique_modes__unique_modes_check_conj_5_0)
MR_decl_static(check_hlds__unique_modes__unique_modes_check_conj_2_6_0)
MR_decl_static(check_hlds__unique_modes__unique_modes_check_disj_7_0)
MR_decl_static(check_hlds__unique_modes__unique_modes_check_case_list_6_0)

extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
static const struct mercury_type_0 mercury_common_0[2] =
{
{
{
MR_CTOR1_ADDR(term, var),
MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type)
}
},
{
{
MR_CTOR1_ADDR(term, var),
MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__unique_modes__unique_modes_check_goal_expr_5_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_foreign_arg_0;
static const struct mercury_type_1 mercury_common_1[1] =
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__unique_modes__unique_modes_check_goal_expr_5_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(hlds__hlds_goal, foreign_arg),
MR_COMMON(0,1)
},
};

MR_decl_entry(fn__hlds__hlds_goal__foreign_arg_var_1_0);
static const struct mercury_type_2 mercury_common_2[1] =
{
{
MR_COMMON(1,0),
MR_ENTRY_AP(fn__hlds__hlds_goal__foreign_arg_var_1_0),
0
},
};

static const struct mercury_type_3 mercury_common_3[1] =
{
{
3,
MR_tbmkword(0, 0)
},
};

static const struct mercury_type_4 mercury_common_4[1] =
{
{
2,
0,
MR_tbmkword(0, 0)
},
};


static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__unique_modes__unique_modes_check_goal_expr_5_0_1 = {
{
MR_FUNCTION,
"hlds.hlds_goal",
"hlds.hlds_goal",
"foreign_arg_var",
2,
0
},
"check_hlds.unique_modes",
"unique_modes.m",
685,
"21"
};


MR_decl_entry(check_hlds__modes__check_pred_modes_6_0);

MR_BEGIN_MODULE(check_hlds__unique_modes_module0)
	MR_init_entry1(check_hlds__unique_modes__unique_modes_check_module_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__unique_modes__unique_modes_check_module_3_0);
	MR_init_label1(check_hlds__unique_modes__unique_modes_check_module_3_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'unique_modes_check_module'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__unique_modes__unique_modes_check_module_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__modes__check_pred_modes_6_0,
		check_hlds__unique_modes__unique_modes_check_module_3_0_i2);
MR_def_label(check_hlds__unique_modes__unique_modes_check_module_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r3;
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(check_hlds__modes__modecheck_proc_general_8_0);

MR_BEGIN_MODULE(check_hlds__unique_modes_module1)
	MR_init_entry1(check_hlds__unique_modes__unique_modes_check_proc_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__unique_modes__unique_modes_check_proc_6_0);
	MR_init_label1(check_hlds__unique_modes__unique_modes_check_proc_6_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'unique_modes_check_proc'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__unique_modes__unique_modes_check_proc_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = (MR_Integer) 1;
	MR_r4 = (MR_Integer) 0;
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__modes__modecheck_proc_general_8_0,
		check_hlds__unique_modes__unique_modes_check_proc_6_0_i2);
MR_def_label(check_hlds__unique_modes__unique_modes_check_proc_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_decr_sp_and_return(1);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(check_hlds__mode_info__mode_info_var_is_nondet_live_3_0);

MR_BEGIN_MODULE(check_hlds__unique_modes_module2)
	MR_init_entry1(check_hlds__unique_modes__select_nondet_live_vars_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__unique_modes__select_nondet_live_vars_3_0);
	MR_init_label5(check_hlds__unique_modes__select_nondet_live_vars_3_0,23,3,5,6,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'select_nondet_live_vars'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__unique_modes__select_nondet_live_vars_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(check_hlds__unique_modes__select_nondet_live_vars_3_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__unique_modes__select_nondet_live_vars_3_0_i3);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(4);
MR_def_label(check_hlds__unique_modes__select_nondet_live_vars_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_tfield(1, MR_r1, 1);
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_var_is_nondet_live_3_0,
		check_hlds__unique_modes__select_nondet_live_vars_3_0_i5);
MR_def_label(check_hlds__unique_modes__select_nondet_live_vars_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 0 != (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(check_hlds__unique_modes__select_nondet_live_vars_3_0_i4);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_np_localcall_lab(check_hlds__unique_modes__select_nondet_live_vars_3_0,
		check_hlds__unique_modes__select_nondet_live_vars_3_0_i6);
MR_def_label(check_hlds__unique_modes__select_nondet_live_vars_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(2);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(4);
MR_def_label(check_hlds__unique_modes__select_nondet_live_vars_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(check_hlds__unique_modes__select_nondet_live_vars_3_0_i23);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(check_hlds__mode_info__mode_info_get_instmap_2_0);
MR_decl_entry(check_hlds__mode_info__mode_info_get_module_info_2_0);
MR_decl_entry(hlds__instmap__instmap_is_reachable_1_0);
MR_decl_entry(hlds__instmap__instmap_vars_list_2_0);
MR_decl_entry(f_108_105_115_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0);
MR_decl_entry(hlds__instmap__instmap_lookup_var_3_0);
MR_decl_entry(check_hlds__inst_match__inst_expand_3_0);
MR_decl_entry(check_hlds__inst_util__make_mostly_uniq_inst_4_0);
MR_decl_entry(check_hlds__mode_info__mode_info_set_module_info_3_0);
MR_decl_entry(hlds__instmap__instmap_set_var_4_0);
MR_decl_entry(check_hlds__mode_info__mode_info_set_instmap_3_0);

MR_BEGIN_MODULE(check_hlds__unique_modes_module3)
	MR_init_entry1(check_hlds__unique_modes__make_var_list_mostly_uniq_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__unique_modes__make_var_list_mostly_uniq_3_0);
	MR_init_label10(check_hlds__unique_modes__make_var_list_mostly_uniq_3_0,83,3,4,5,7,9,11,13,14,16)
	MR_init_label6(check_hlds__unique_modes__make_var_list_mostly_uniq_3_0,18,22,23,24,25,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'make_var_list_mostly_uniq'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__unique_modes__make_var_list_mostly_uniq_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
MR_def_label(check_hlds__unique_modes__make_var_list_mostly_uniq_3_0,83)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__unique_modes__make_var_list_mostly_uniq_3_0_i3);
	}
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(7);
MR_def_label(check_hlds__unique_modes__make_var_list_mostly_uniq_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r2;
	MR_sv(1) = MR_tfield(1, MR_r1, 0);
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_instmap_2_0,
		check_hlds__unique_modes__make_var_list_mostly_uniq_3_0_i4);
MR_def_label(check_hlds__unique_modes__make_var_list_mostly_uniq_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_module_info_2_0,
		check_hlds__unique_modes__make_var_list_mostly_uniq_3_0_i5);
MR_def_label(check_hlds__unique_modes__make_var_list_mostly_uniq_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(hlds__instmap__instmap_is_reachable_1_0,
		check_hlds__unique_modes__make_var_list_mostly_uniq_3_0_i7);
MR_def_label(check_hlds__unique_modes__make_var_list_mostly_uniq_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__unique_modes__make_var_list_mostly_uniq_3_0_i6);
	}
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(hlds__instmap__instmap_vars_list_2_0,
		check_hlds__unique_modes__make_var_list_mostly_uniq_3_0_i9);
MR_def_label(check_hlds__unique_modes__make_var_list_mostly_uniq_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(f_108_105_115_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		check_hlds__unique_modes__make_var_list_mostly_uniq_3_0_i11);
MR_def_label(check_hlds__unique_modes__make_var_list_mostly_uniq_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__unique_modes__make_var_list_mostly_uniq_3_0_i6);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(hlds__instmap__instmap_lookup_var_3_0,
		check_hlds__unique_modes__make_var_list_mostly_uniq_3_0_i13);
MR_def_label(check_hlds__unique_modes__make_var_list_mostly_uniq_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(check_hlds__inst_match__inst_expand_3_0,
		check_hlds__unique_modes__make_var_list_mostly_uniq_3_0_i14);
MR_def_label(check_hlds__unique_modes__make_var_list_mostly_uniq_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(check_hlds__unique_modes__make_var_list_mostly_uniq_3_0_i16);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(2, MR_r1, 0);
	if (MR_INT_NE(MR_tempr1,1)) {
		MR_GOTO_LAB(check_hlds__unique_modes__make_var_list_mostly_uniq_3_0_i6);
	}
	MR_r2 = MR_sv(4);
	MR_r1 = MR_sv(5);
	}
	MR_np_call_localret_ent(check_hlds__inst_util__make_mostly_uniq_inst_4_0,
		check_hlds__unique_modes__make_var_list_mostly_uniq_3_0_i22);
MR_def_label(check_hlds__unique_modes__make_var_list_mostly_uniq_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,0)) {
		MR_GOTO_LAB(check_hlds__unique_modes__make_var_list_mostly_uniq_3_0_i18);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(3, MR_r1, 1);
	if (MR_INT_NE(MR_tempr1,1)) {
		MR_GOTO_LAB(check_hlds__unique_modes__make_var_list_mostly_uniq_3_0_i6);
	}
	MR_r2 = MR_sv(4);
	MR_r1 = MR_sv(5);
	}
	MR_np_call_localret_ent(check_hlds__inst_util__make_mostly_uniq_inst_4_0,
		check_hlds__unique_modes__make_var_list_mostly_uniq_3_0_i22);
MR_def_label(check_hlds__unique_modes__make_var_list_mostly_uniq_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,1)) {
		MR_GOTO_LAB(check_hlds__unique_modes__make_var_list_mostly_uniq_3_0_i6);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(3, MR_r1, 1);
	if (MR_INT_NE(MR_tempr1,1)) {
		MR_GOTO_LAB(check_hlds__unique_modes__make_var_list_mostly_uniq_3_0_i6);
	}
	MR_r2 = MR_sv(4);
	MR_r1 = MR_sv(5);
	}
	MR_np_call_localret_ent(check_hlds__inst_util__make_mostly_uniq_inst_4_0,
		check_hlds__unique_modes__make_var_list_mostly_uniq_3_0_i22);
MR_def_label(check_hlds__unique_modes__make_var_list_mostly_uniq_3_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_set_module_info_3_0,
		check_hlds__unique_modes__make_var_list_mostly_uniq_3_0_i23);
MR_def_label(check_hlds__unique_modes__make_var_list_mostly_uniq_3_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(hlds__instmap__instmap_set_var_4_0,
		check_hlds__unique_modes__make_var_list_mostly_uniq_3_0_i24);
MR_def_label(check_hlds__unique_modes__make_var_list_mostly_uniq_3_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_set_instmap_3_0,
		check_hlds__unique_modes__make_var_list_mostly_uniq_3_0_i25);
MR_def_label(check_hlds__unique_modes__make_var_list_mostly_uniq_3_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(check_hlds__unique_modes__make_var_list_mostly_uniq_3_0_i83);
	}
MR_def_label(check_hlds__unique_modes__make_var_list_mostly_uniq_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(6);
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(check_hlds__unique_modes__make_var_list_mostly_uniq_3_0_i83);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__unique_modes_module4)
	MR_init_entry1(check_hlds__unique_modes__make_all_nondet_live_vars_mostly_uniq_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__unique_modes__make_all_nondet_live_vars_mostly_uniq_2_0);
	MR_init_label5(check_hlds__unique_modes__make_all_nondet_live_vars_mostly_uniq_2_0,2,5,7,8,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'make_all_nondet_live_vars_mostly_uniq'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__unique_modes__make_all_nondet_live_vars_mostly_uniq_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_instmap_2_0,
		check_hlds__unique_modes__make_all_nondet_live_vars_mostly_uniq_2_0_i2);
MR_def_label(check_hlds__unique_modes__make_all_nondet_live_vars_mostly_uniq_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(hlds__instmap__instmap_is_reachable_1_0,
		check_hlds__unique_modes__make_all_nondet_live_vars_mostly_uniq_2_0_i5);
MR_def_label(check_hlds__unique_modes__make_all_nondet_live_vars_mostly_uniq_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__unique_modes__make_all_nondet_live_vars_mostly_uniq_2_0_i4);
	}
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__instmap__instmap_vars_list_2_0,
		check_hlds__unique_modes__make_all_nondet_live_vars_mostly_uniq_2_0_i7);
MR_def_label(check_hlds__unique_modes__make_all_nondet_live_vars_mostly_uniq_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(check_hlds__unique_modes__select_nondet_live_vars_3_0,
		check_hlds__unique_modes__make_all_nondet_live_vars_mostly_uniq_2_0_i8);
MR_def_label(check_hlds__unique_modes__make_all_nondet_live_vars_mostly_uniq_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(check_hlds__unique_modes__make_var_list_mostly_uniq_3_0);
MR_def_label(check_hlds__unique_modes__make_all_nondet_live_vars_mostly_uniq_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(parse_tree__prog_data__determinism_components_3_0);
MR_decl_entry(fn__hlds__hlds_goal__goal_info_get_determinism_1_0);
MR_decl_entry(check_hlds__mode_info__mode_info_add_live_vars_3_0);
MR_decl_entry(check_hlds__mode_info__mode_info_remove_live_vars_3_0);

MR_BEGIN_MODULE(check_hlds__unique_modes_module5)
	MR_init_entry1(check_hlds__unique_modes__prepare_for_disjunct_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__unique_modes__prepare_for_disjunct_5_0);
	MR_init_label10(check_hlds__unique_modes__prepare_for_disjunct_5_0,5,6,7,9,10,13,15,16,17,12)
	MR_init_label1(check_hlds__unique_modes__prepare_for_disjunct_5_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'prepare_for_disjunct'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__unique_modes__prepare_for_disjunct_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r1;
	MR_sv(1) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(parse_tree__prog_data__determinism_components_3_0,
		check_hlds__unique_modes__prepare_for_disjunct_5_0_i5);
MR_def_label(check_hlds__unique_modes__prepare_for_disjunct_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 3 == (MR_Integer) MR_r2)) {
		MR_GOTO_LAB(check_hlds__unique_modes__prepare_for_disjunct_5_0_i2);
	}
	MR_r1 = MR_tfield(0, MR_sv(2), 1);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_determinism_1_0,
		check_hlds__unique_modes__prepare_for_disjunct_5_0_i6);
MR_def_label(check_hlds__unique_modes__prepare_for_disjunct_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(parse_tree__prog_data__determinism_components_3_0,
		check_hlds__unique_modes__prepare_for_disjunct_5_0_i7);
MR_def_label(check_hlds__unique_modes__prepare_for_disjunct_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(check_hlds__unique_modes__prepare_for_disjunct_5_0_i2);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_add_live_vars_3_0,
		check_hlds__unique_modes__prepare_for_disjunct_5_0_i9);
MR_def_label(check_hlds__unique_modes__prepare_for_disjunct_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_instmap_2_0,
		check_hlds__unique_modes__prepare_for_disjunct_5_0_i10);
MR_def_label(check_hlds__unique_modes__prepare_for_disjunct_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(hlds__instmap__instmap_is_reachable_1_0,
		check_hlds__unique_modes__prepare_for_disjunct_5_0_i13);
MR_def_label(check_hlds__unique_modes__prepare_for_disjunct_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__unique_modes__prepare_for_disjunct_5_0_i12);
	}
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(hlds__instmap__instmap_vars_list_2_0,
		check_hlds__unique_modes__prepare_for_disjunct_5_0_i15);
MR_def_label(check_hlds__unique_modes__prepare_for_disjunct_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(check_hlds__unique_modes__select_nondet_live_vars_3_0,
		check_hlds__unique_modes__prepare_for_disjunct_5_0_i16);
MR_def_label(check_hlds__unique_modes__prepare_for_disjunct_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(check_hlds__unique_modes__make_var_list_mostly_uniq_3_0,
		check_hlds__unique_modes__prepare_for_disjunct_5_0_i17);
MR_def_label(check_hlds__unique_modes__prepare_for_disjunct_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(check_hlds__mode_info__mode_info_remove_live_vars_3_0);
	}
MR_def_label(check_hlds__unique_modes__prepare_for_disjunct_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(check_hlds__mode_info__mode_info_remove_live_vars_3_0);
MR_def_label(check_hlds__unique_modes__prepare_for_disjunct_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(check_hlds__mode_info__mode_info_var_is_live_3_0);

MR_BEGIN_MODULE(check_hlds__unique_modes_module6)
	MR_init_entry1(check_hlds__unique_modes__select_live_vars_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__unique_modes__select_live_vars_3_0);
	MR_init_label5(check_hlds__unique_modes__select_live_vars_3_0,23,3,5,6,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'select_live_vars'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__unique_modes__select_live_vars_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(check_hlds__unique_modes__select_live_vars_3_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__unique_modes__select_live_vars_3_0_i3);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(4);
MR_def_label(check_hlds__unique_modes__select_live_vars_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_tfield(1, MR_r1, 1);
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_var_is_live_3_0,
		check_hlds__unique_modes__select_live_vars_3_0_i5);
MR_def_label(check_hlds__unique_modes__select_live_vars_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 0 != (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(check_hlds__unique_modes__select_live_vars_3_0_i4);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_np_localcall_lab(check_hlds__unique_modes__select_live_vars_3_0,
		check_hlds__unique_modes__select_live_vars_3_0_i6);
MR_def_label(check_hlds__unique_modes__select_live_vars_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(2);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(4);
MR_def_label(check_hlds__unique_modes__select_live_vars_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(check_hlds__unique_modes__select_live_vars_3_0_i23);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(check_hlds__mode_info__mode_info_get_var_types_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;
MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);
MR_decl_entry(hlds__instmap__instmap_delta_is_reachable_1_0);
MR_decl_entry(hlds__instmap__instmap_delta_search_var_3_0);
MR_decl_entry(check_hlds__inst_match__inst_matches_final_typed_4_0);

MR_BEGIN_MODULE(check_hlds__unique_modes_module7)
	MR_init_entry1(check_hlds__unique_modes__select_changed_inst_vars_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__unique_modes__select_changed_inst_vars_4_0);
	MR_init_label10(check_hlds__unique_modes__select_changed_inst_vars_4_0,48,3,4,5,6,7,9,11,13,17)
	MR_init_label2(check_hlds__unique_modes__select_changed_inst_vars_4_0,19,10)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'select_changed_inst_vars'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__unique_modes__select_changed_inst_vars_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
MR_def_label(check_hlds__unique_modes__select_changed_inst_vars_4_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__unique_modes__select_changed_inst_vars_4_0_i3);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(8);
MR_def_label(check_hlds__unique_modes__select_changed_inst_vars_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_tfield(1, MR_r1, 0);
	MR_sv(4) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_module_info_2_0,
		check_hlds__unique_modes__select_changed_inst_vars_4_0_i4);
MR_def_label(check_hlds__unique_modes__select_changed_inst_vars_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_instmap_2_0,
		check_hlds__unique_modes__select_changed_inst_vars_4_0_i5);
MR_def_label(check_hlds__unique_modes__select_changed_inst_vars_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(hlds__instmap__instmap_lookup_var_3_0,
		check_hlds__unique_modes__select_changed_inst_vars_4_0_i6);
MR_def_label(check_hlds__unique_modes__select_changed_inst_vars_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_var_types_2_0,
		check_hlds__unique_modes__select_changed_inst_vars_4_0_i7);
MR_def_label(check_hlds__unique_modes__select_changed_inst_vars_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(3);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		check_hlds__unique_modes__select_changed_inst_vars_4_0_i9);
MR_def_label(check_hlds__unique_modes__select_changed_inst_vars_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__instmap__instmap_delta_is_reachable_1_0,
		check_hlds__unique_modes__select_changed_inst_vars_4_0_i11);
MR_def_label(check_hlds__unique_modes__select_changed_inst_vars_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__unique_modes__select_changed_inst_vars_4_0_i10);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(hlds__instmap__instmap_delta_search_var_3_0,
		check_hlds__unique_modes__select_changed_inst_vars_4_0_i13);
MR_def_label(check_hlds__unique_modes__select_changed_inst_vars_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__unique_modes__select_changed_inst_vars_4_0_i10);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(5);
	MR_np_call_localret_ent(check_hlds__inst_match__inst_matches_final_typed_4_0,
		check_hlds__unique_modes__select_changed_inst_vars_4_0_i17);
MR_def_label(check_hlds__unique_modes__select_changed_inst_vars_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(check_hlds__unique_modes__select_changed_inst_vars_4_0_i10);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_np_localcall_lab(check_hlds__unique_modes__select_changed_inst_vars_4_0,
		check_hlds__unique_modes__select_changed_inst_vars_4_0_i19);
MR_def_label(check_hlds__unique_modes__select_changed_inst_vars_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(3);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(8);
MR_def_label(check_hlds__unique_modes__select_changed_inst_vars_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(check_hlds__unique_modes__select_changed_inst_vars_4_0_i48);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(check_hlds__mode_info__mode_info_get_errors_2_0);
MR_decl_entry(check_hlds__mode_info__mode_info_set_errors_3_0);
MR_decl_entry(hlds__hlds_module__module_info_pred_proc_info_5_0);
MR_decl_entry(check_hlds__modecheck_util__compute_arg_offset_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_argmodes_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_interface_determinism_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_never_succeeds_2_0);
MR_decl_entry(check_hlds__mode_util__mode_list_get_initial_insts_3_0);
MR_decl_entry(check_hlds__modecheck_util__modecheck_var_has_inst_list_no_exact_match_6_0);
MR_decl_entry(check_hlds__mode_util__mode_list_get_final_insts_3_0);
MR_decl_entry(parse_tree__prog_mode__inst_list_apply_substitution_3_0);
MR_decl_entry(check_hlds__modecheck_util__modecheck_set_var_inst_list_8_0);
MR_decl_entry(__Unify___list__list_1_0);
MR_decl_entry(require__unexpected_3_0);
MR_decl_entry(hlds__instmap__init_unreachable_1_0);
MR_decl_entry(fn__hlds__hlds_pred__mode_errors_1_0);
MR_decl_entry(fn__parse_tree__set_of_var__list_to_set_1_0);
MR_decl_entry(hlds__instmap__instmap_lookup_vars_3_0);
MR_decl_entry(check_hlds__mode_info__mode_info_error_4_0);
MR_decl_entry(check_hlds__mode_info__mode_info_get_may_change_called_proc_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_inferred_determinism_2_0);
MR_decl_entry(check_hlds__modecheck_call__modecheck_call_pred_10_0);
extern const MR_TypeCtorInfo_Struct mercury_data_check_hlds__mode_errors__type_ctor_info_mode_error_info_0;
MR_decl_entry(list__append_3_1);

MR_BEGIN_MODULE(check_hlds__unique_modes_module8)
	MR_init_entry1(check_hlds__unique_modes__unique_modes_check_call_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__unique_modes__unique_modes_check_call_7_0);
	MR_init_label10(check_hlds__unique_modes__unique_modes_check_call_7_0,2,3,4,5,6,7,8,9,10,11)
	MR_init_label10(check_hlds__unique_modes__unique_modes_check_call_7_0,12,13,14,15,16,19,17,23,27,28)
	MR_init_label10(check_hlds__unique_modes__unique_modes_check_call_7_0,31,33,34,26,25,38,39,24,40,42)
	MR_init_label10(check_hlds__unique_modes__unique_modes_check_call_7_0,43,44,45,46,41,49,50,51,53,56)
	MR_init_label7(check_hlds__unique_modes__unique_modes_check_call_7_0,57,59,62,60,55,67,68)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'unique_modes_check_call'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__unique_modes__unique_modes_check_call_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(14);
	MR_sv(14) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_sv(7) = MR_r3;
	MR_sv(1) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(6) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_errors_2_0,
		check_hlds__unique_modes__unique_modes_check_call_7_0_i2);
MR_def_label(check_hlds__unique_modes__unique_modes_check_call_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_instmap_2_0,
		check_hlds__unique_modes__unique_modes_check_call_7_0_i3);
MR_def_label(check_hlds__unique_modes__unique_modes_check_call_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_set_errors_3_0,
		check_hlds__unique_modes__unique_modes_check_call_7_0_i4);
MR_def_label(check_hlds__unique_modes__unique_modes_check_call_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_module_info_2_0,
		check_hlds__unique_modes__unique_modes_check_call_7_0_i5);
MR_def_label(check_hlds__unique_modes__unique_modes_check_call_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_proc_info_5_0,
		check_hlds__unique_modes__unique_modes_check_call_7_0_i6);
MR_def_label(check_hlds__unique_modes__unique_modes_check_call_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r2;
	MR_np_call_localret_ent(check_hlds__modecheck_util__compute_arg_offset_2_0,
		check_hlds__unique_modes__unique_modes_check_call_7_0_i7);
MR_def_label(check_hlds__unique_modes__unique_modes_check_call_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_argmodes_2_0,
		check_hlds__unique_modes__unique_modes_check_call_7_0_i8);
MR_def_label(check_hlds__unique_modes__unique_modes_check_call_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_interface_determinism_2_0,
		check_hlds__unique_modes__unique_modes_check_call_7_0_i9);
MR_def_label(check_hlds__unique_modes__unique_modes_check_call_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_never_succeeds_2_0,
		check_hlds__unique_modes__unique_modes_check_call_7_0_i10);
MR_def_label(check_hlds__unique_modes__unique_modes_check_call_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_module_info_2_0,
		check_hlds__unique_modes__unique_modes_check_call_7_0_i11);
MR_def_label(check_hlds__unique_modes__unique_modes_check_call_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(13) = MR_r1;
	MR_r2 = MR_sv(11);
	MR_np_call_localret_ent(check_hlds__mode_util__mode_list_get_initial_insts_3_0,
		check_hlds__unique_modes__unique_modes_check_call_7_0_i12);
MR_def_label(check_hlds__unique_modes__unique_modes_check_call_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(8);
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(10);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__modecheck_util__modecheck_var_has_inst_list_no_exact_match_6_0,
		check_hlds__unique_modes__unique_modes_check_call_7_0_i13);
MR_def_label(check_hlds__unique_modes__unique_modes_check_call_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(11);
	MR_sv(11) = MR_r1;
	MR_tempr2 = MR_sv(13);
	MR_sv(13) = MR_r2;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__mode_util__mode_list_get_final_insts_3_0,
		check_hlds__unique_modes__unique_modes_check_call_7_0_i14);
MR_def_label(check_hlds__unique_modes__unique_modes_check_call_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_mode__inst_list_apply_substitution_3_0,
		check_hlds__unique_modes__unique_modes_check_call_7_0_i15);
MR_def_label(check_hlds__unique_modes__unique_modes_check_call_7_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(10);
	MR_r5 = MR_sv(13);
	}
	MR_np_call_localret_ent(check_hlds__modecheck_util__modecheck_set_var_inst_list_8_0,
		check_hlds__unique_modes__unique_modes_check_call_7_0_i16);
MR_def_label(check_hlds__unique_modes__unique_modes_check_call_7_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r2;
	MR_sv(11) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(7);
	}
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		check_hlds__unique_modes__unique_modes_check_call_7_0_i19);
MR_def_label(check_hlds__unique_modes__unique_modes_check_call_7_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__unique_modes__unique_modes_check_call_7_0_i17);
	}
	if (MR_LTAGS_TESTR(MR_sv(10),0,0)) {
		MR_GOTO_LAB(check_hlds__unique_modes__unique_modes_check_call_7_0_i17);
	}
	MR_r1 = MR_sv(9);
	MR_GOTO_LAB(check_hlds__unique_modes__unique_modes_check_call_7_0_i23);
MR_def_label(check_hlds__unique_modes__unique_modes_check_call_7_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("check_hlds.unique_modes", 23);
	MR_r2 = (MR_Word) MR_string_const("predicate \140check_hlds.unique_modes.unique_modes_check_call_modes\'/7", 67);
	MR_r3 = (MR_Word) MR_string_const("call to implied mode\?", 21);
	MR_np_call_localret_ent(require__unexpected_3_0,
		check_hlds__unique_modes__unique_modes_check_call_7_0_i23);
MR_def_label(check_hlds__unique_modes__unique_modes_check_call_7_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(4),0)) {
		MR_GOTO_LAB(check_hlds__unique_modes__unique_modes_check_call_7_0_i25);
	}
	MR_np_call_localret_ent(parse_tree__prog_data__determinism_components_3_0,
		check_hlds__unique_modes__unique_modes_check_call_7_0_i27);
MR_def_label(check_hlds__unique_modes__unique_modes_check_call_7_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 3 != (MR_Integer) MR_r2)) {
		MR_GOTO_LAB(check_hlds__unique_modes__unique_modes_check_call_7_0_i26);
	}
	MR_r1 = MR_sv(11);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_instmap_2_0,
		check_hlds__unique_modes__unique_modes_check_call_7_0_i28);
MR_def_label(check_hlds__unique_modes__unique_modes_check_call_7_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_np_call_localret_ent(hlds__instmap__instmap_is_reachable_1_0,
		check_hlds__unique_modes__unique_modes_check_call_7_0_i31);
MR_def_label(check_hlds__unique_modes__unique_modes_check_call_7_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__unique_modes__unique_modes_check_call_7_0_i26);
	}
	MR_r1 = MR_sv(10);
	MR_np_call_localret_ent(hlds__instmap__instmap_vars_list_2_0,
		check_hlds__unique_modes__unique_modes_check_call_7_0_i33);
MR_def_label(check_hlds__unique_modes__unique_modes_check_call_7_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(11);
	MR_np_call_localret_ent(check_hlds__unique_modes__select_nondet_live_vars_3_0,
		check_hlds__unique_modes__unique_modes_check_call_7_0_i34);
MR_def_label(check_hlds__unique_modes__unique_modes_check_call_7_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(11);
	MR_np_call_localret_ent(check_hlds__unique_modes__make_var_list_mostly_uniq_3_0,
		check_hlds__unique_modes__unique_modes_check_call_7_0_i39);
MR_def_label(check_hlds__unique_modes__unique_modes_check_call_7_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_sv(9) = MR_sv(11);
	MR_GOTO_LAB(check_hlds__unique_modes__unique_modes_check_call_7_0_i24);
MR_def_label(check_hlds__unique_modes__unique_modes_check_call_7_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__instmap__init_unreachable_1_0,
		check_hlds__unique_modes__unique_modes_check_call_7_0_i38);
MR_def_label(check_hlds__unique_modes__unique_modes_check_call_7_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(11);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_set_instmap_3_0,
		check_hlds__unique_modes__unique_modes_check_call_7_0_i39);
MR_def_label(check_hlds__unique_modes__unique_modes_check_call_7_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(3);
MR_def_label(check_hlds__unique_modes__unique_modes_check_call_7_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(fn__hlds__hlds_pred__mode_errors_1_0,
		check_hlds__unique_modes__unique_modes_check_call_7_0_i40);
MR_def_label(check_hlds__unique_modes__unique_modes_check_call_7_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__unique_modes__unique_modes_check_call_7_0_i42);
	}
	MR_r1 = MR_sv(9);
	MR_GOTO_LAB(check_hlds__unique_modes__unique_modes_check_call_7_0_i41);
MR_def_label(check_hlds__unique_modes__unique_modes_check_call_7_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(fn__parse_tree__set_of_var__list_to_set_1_0,
		check_hlds__unique_modes__unique_modes_check_call_7_0_i43);
MR_def_label(check_hlds__unique_modes__unique_modes_check_call_7_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_instmap_2_0,
		check_hlds__unique_modes__unique_modes_check_call_7_0_i44);
MR_def_label(check_hlds__unique_modes__unique_modes_check_call_7_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(hlds__instmap__instmap_lookup_vars_3_0,
		check_hlds__unique_modes__unique_modes_check_call_7_0_i45);
MR_def_label(check_hlds__unique_modes__unique_modes_check_call_7_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__mode_errors_1_0,
		check_hlds__unique_modes__unique_modes_check_call_7_0_i46);
MR_def_label(check_hlds__unique_modes__unique_modes_check_call_7_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 6);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 7;
	MR_tfield(3, MR_r2, 1) = MR_sv(7);
	MR_tfield(3, MR_r2, 2) = MR_sv(11);
	MR_tfield(3, MR_r2, 3) = MR_sv(2);
	MR_tfield(3, MR_r2, 4) = MR_sv(5);
	MR_tfield(3, MR_r2, 5) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r3 = MR_sv(9);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_error_4_0,
		check_hlds__unique_modes__unique_modes_check_call_7_0_i41);
MR_def_label(check_hlds__unique_modes__unique_modes_check_call_7_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_errors_2_0,
		check_hlds__unique_modes__unique_modes_check_call_7_0_i49);
MR_def_label(check_hlds__unique_modes__unique_modes_check_call_7_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(10);
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(12);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_set_errors_3_0,
		check_hlds__unique_modes__unique_modes_check_call_7_0_i50);
MR_def_label(check_hlds__unique_modes__unique_modes_check_call_7_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_may_change_called_proc_2_0,
		check_hlds__unique_modes__unique_modes_check_call_7_0_i51);
MR_def_label(check_hlds__unique_modes__unique_modes_check_call_7_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(10),0,0)) {
		MR_GOTO_LAB(check_hlds__unique_modes__unique_modes_check_call_7_0_i53);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(11);
	MR_decr_sp_and_return(14);
MR_def_label(check_hlds__unique_modes__unique_modes_check_call_7_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(check_hlds__unique_modes__unique_modes_check_call_7_0_i55);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(11);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_set_instmap_3_0,
		check_hlds__unique_modes__unique_modes_check_call_7_0_i56);
MR_def_label(check_hlds__unique_modes__unique_modes_check_call_7_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_inferred_determinism_2_0,
		check_hlds__unique_modes__unique_modes_check_call_7_0_i57);
MR_def_label(check_hlds__unique_modes__unique_modes_check_call_7_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(7);
	MR_r5 = MR_sv(1);
	MR_r6 = MR_sv(12);
	MR_np_call_localret_ent(check_hlds__modecheck_call__modecheck_call_pred_10_0,
		check_hlds__unique_modes__unique_modes_check_call_7_0_i59);
MR_def_label(check_hlds__unique_modes__unique_modes_check_call_7_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_sv(5) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r4;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		check_hlds__unique_modes__unique_modes_check_call_7_0_i62);
MR_def_label(check_hlds__unique_modes__unique_modes_check_call_7_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__unique_modes__unique_modes_check_call_7_0_i60);
	}
	if (MR_LTAGS_TESTR(MR_sv(5),0,0)) {
		MR_GOTO_LAB(check_hlds__unique_modes__unique_modes_check_call_7_0_i60);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(7);
	MR_decr_sp_and_return(14);
MR_def_label(check_hlds__unique_modes__unique_modes_check_call_7_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("check_hlds.unique_modes", 23);
	MR_r2 = (MR_Word) MR_string_const("predicate \140check_hlds.unique_modes.unique_modes_check_call\'/7", 61);
	MR_r3 = (MR_Word) MR_string_const("call to implied mode\?", 21);
	MR_succip_word = MR_sv(14);
	MR_decr_sp(14);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(check_hlds__unique_modes__unique_modes_check_call_7_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_sv(5);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__mode_errors, mode_error_info);
	MR_r2 = MR_sv(12);
	MR_r3 = MR_sv(10);
	MR_np_call_localret_ent(list__append_3_1,
		check_hlds__unique_modes__unique_modes_check_call_7_0_i67);
MR_def_label(check_hlds__unique_modes__unique_modes_check_call_7_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(11);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_set_errors_3_0,
		check_hlds__unique_modes__unique_modes_check_call_7_0_i68);
MR_def_label(check_hlds__unique_modes__unique_modes_check_call_7_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(14);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__hlds__hlds_goal__goal_info_get_context_1_0);
MR_decl_entry(term__context_init_1_0);
MR_decl_entry(__Unify___term__context_0_0);
MR_decl_entry(check_hlds__mode_info__mode_info_set_context_3_0);
MR_decl_entry(hlds__hlds_goal__goal_info_has_feature_2_0);
MR_decl_entry(check_hlds__mode_info__mode_info_get_in_dupl_for_switch_2_0);
MR_decl_entry(check_hlds__mode_info__mode_info_set_in_dupl_for_switch_3_0);
MR_decl_entry(check_hlds__mode_info__mode_info_get_nondet_live_vars_2_0);
MR_decl_entry(fn__bag__init_0_0);
MR_decl_entry(check_hlds__mode_info__mode_info_set_nondet_live_vars_3_0);
MR_decl_entry(check_hlds__modecheck_util__compute_goal_instmap_delta_6_0);

MR_BEGIN_MODULE(check_hlds__unique_modes_module9)
	MR_init_entry1(check_hlds__unique_modes__unique_modes_check_goal_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__unique_modes__unique_modes_check_goal_4_0);
	MR_init_label10(check_hlds__unique_modes__unique_modes_check_goal_4_0,2,3,6,5,8,9,11,13,14,15)
	MR_init_label10(check_hlds__unique_modes__unique_modes_check_goal_4_0,16,17,19,18,21,22,23,24,25,26)
	MR_init_label10(check_hlds__unique_modes__unique_modes_check_goal_4_0,28,10,29,30,31,33,32,35,36,37)
	MR_init_label3(check_hlds__unique_modes__unique_modes_check_goal_4_0,38,39,40)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'unique_modes_check_goal'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__unique_modes__unique_modes_check_goal_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(6) = MR_tfield(0, MR_r1, 0);
	MR_sv(1) = MR_tfield(0, MR_r1, 1);
	MR_sv(4) = MR_r2;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_context_1_0,
		check_hlds__unique_modes__unique_modes_check_goal_4_0_i2);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(term__context_init_1_0,
		check_hlds__unique_modes__unique_modes_check_goal_4_0_i3);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(__Unify___term__context_0_0,
		check_hlds__unique_modes__unique_modes_check_goal_4_0_i6);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__unique_modes__unique_modes_check_goal_4_0_i5);
	}
	MR_r1 = MR_sv(1);
	MR_sv(2) = MR_sv(4);
	MR_GOTO_LAB(check_hlds__unique_modes__unique_modes_check_goal_4_0_i9);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_set_context_3_0,
		check_hlds__unique_modes__unique_modes_check_goal_4_0_i8);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r2 = (MR_Integer) 13;
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_has_feature_2_0,
		check_hlds__unique_modes__unique_modes_check_goal_4_0_i11);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__unique_modes__unique_modes_check_goal_4_0_i10);
	}
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_in_dupl_for_switch_2_0,
		check_hlds__unique_modes__unique_modes_check_goal_4_0_i13);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_set_in_dupl_for_switch_3_0,
		check_hlds__unique_modes__unique_modes_check_goal_4_0_i14);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_instmap_2_0,
		check_hlds__unique_modes__unique_modes_check_goal_4_0_i15);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_nondet_live_vars_2_0,
		check_hlds__unique_modes__unique_modes_check_goal_4_0_i16);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_determinism_1_0,
		check_hlds__unique_modes__unique_modes_check_goal_4_0_i17);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(parse_tree__prog_data__determinism_components_3_0,
		check_hlds__unique_modes__unique_modes_check_goal_4_0_i19);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 3 != (MR_Integer) MR_r2)) {
		MR_GOTO_LAB(check_hlds__unique_modes__unique_modes_check_goal_4_0_i18);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_GOTO_LAB(check_hlds__unique_modes__unique_modes_check_goal_4_0_i23);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_np_call_localret_ent(fn__bag__init_0_0,
		check_hlds__unique_modes__unique_modes_check_goal_4_0_i21);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_4_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_set_nondet_live_vars_3_0,
		check_hlds__unique_modes__unique_modes_check_goal_4_0_i22);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_4_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_4_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(check_hlds__unique_modes__unique_modes_check_goal_expr_5_0,
		check_hlds__unique_modes__unique_modes_check_goal_4_0_i24);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_4_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_set_nondet_live_vars_3_0,
		check_hlds__unique_modes__unique_modes_check_goal_4_0_i25);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_4_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__modecheck_util__compute_goal_instmap_delta_6_0,
		check_hlds__unique_modes__unique_modes_check_goal_4_0_i26);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_4_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_sv(6) = MR_tempr1;
	MR_r1 = MR_sv(2);
	}
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_set_in_dupl_for_switch_3_0,
		check_hlds__unique_modes__unique_modes_check_goal_4_0_i28);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_4_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_instmap_2_0,
		check_hlds__unique_modes__unique_modes_check_goal_4_0_i29);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_4_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_nondet_live_vars_2_0,
		check_hlds__unique_modes__unique_modes_check_goal_4_0_i30);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_4_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_determinism_1_0,
		check_hlds__unique_modes__unique_modes_check_goal_4_0_i31);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_4_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(parse_tree__prog_data__determinism_components_3_0,
		check_hlds__unique_modes__unique_modes_check_goal_4_0_i33);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_4_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 3 != (MR_Integer) MR_r2)) {
		MR_GOTO_LAB(check_hlds__unique_modes__unique_modes_check_goal_4_0_i32);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_GOTO_LAB(check_hlds__unique_modes__unique_modes_check_goal_4_0_i37);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_4_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_np_call_localret_ent(fn__bag__init_0_0,
		check_hlds__unique_modes__unique_modes_check_goal_4_0_i35);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_4_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_set_nondet_live_vars_3_0,
		check_hlds__unique_modes__unique_modes_check_goal_4_0_i36);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_4_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_4_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(check_hlds__unique_modes__unique_modes_check_goal_expr_5_0,
		check_hlds__unique_modes__unique_modes_check_goal_4_0_i38);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_4_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_set_nondet_live_vars_3_0,
		check_hlds__unique_modes__unique_modes_check_goal_4_0_i39);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_4_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__modecheck_util__compute_goal_instmap_delta_6_0,
		check_hlds__unique_modes__unique_modes_check_goal_4_0_i40);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_4_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__mdbcomp__prim_data__sym_name_to_string_1_0);
MR_decl_entry(string__append_3_2);
MR_decl_entry(check_hlds__mode_debug__mode_checkpoint_4_0);
MR_decl_entry(check_hlds__mode_info__mode_info_get_call_id_3_0);
MR_decl_entry(check_hlds__mode_info__mode_info_set_call_context_3_0);
MR_decl_entry(check_hlds__mode_info__mode_info_unset_call_context_2_0);
MR_decl_entry(check_hlds__modecheck_unify__modecheck_unification_8_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_foreign_arg_0;
MR_decl_entry(fn__list__map_2_0);
MR_decl_entry(hlds__hlds_goal__generic_call_id_2_0);

MR_BEGIN_MODULE(check_hlds__unique_modes_module10)
	MR_init_entry1(check_hlds__unique_modes__unique_modes_check_goal_expr_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__unique_modes__unique_modes_check_goal_expr_5_0);
	MR_init_label10(check_hlds__unique_modes__unique_modes_check_goal_expr_5_0,3,6,7,8,9,12,13,15,5,18)
	MR_init_label10(check_hlds__unique_modes__unique_modes_check_goal_expr_5_0,20,21,22,17,25,26,29,32,33,35)
	MR_init_label10(check_hlds__unique_modes__unique_modes_check_goal_expr_5_0,24,37,39,42,43,45,47,48,49,46)
	MR_init_label10(check_hlds__unique_modes__unique_modes_check_goal_expr_5_0,50,51,52,53,54,55,58,56,62,64)
	MR_init_label10(check_hlds__unique_modes__unique_modes_check_goal_expr_5_0,65,63,68,69,72,74,75,71,67,79)
	MR_init_label10(check_hlds__unique_modes__unique_modes_check_goal_expr_5_0,80,41,82,84,88,91,92,95,90,238)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'unique_modes_check_goal_expr'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__unique_modes__unique_modes_check_goal_expr_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(check_hlds__unique_modes__unique_modes_check_goal_expr_5_0_i3);
	}
	MR_r1 = MR_body((MR_Integer) MR_r1, (MR_Integer) 0);
	MR_np_tailcall_ent(check_hlds__unique_modes__unique_modes_check_goal_negation_5_0);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_expr_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(check_hlds__unique_modes__unique_modes_check_goal_expr_5_0_i5);
	}
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(6) = MR_r2;
	MR_sv(7) = MR_tfield(2, MR_r1, 0);
	MR_sv(2) = MR_tfield(2, MR_r1, 1);
	MR_sv(3) = MR_tfield(2, MR_r1, 2);
	MR_sv(4) = MR_tfield(2, MR_r1, 3);
	MR_sv(5) = MR_tfield(2, MR_r1, 4);
	MR_sv(1) = MR_tfield(2, MR_r1, 5);
	MR_sv(8) = MR_r3;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__sym_name_to_string_1_0,
		check_hlds__unique_modes__unique_modes_check_goal_expr_5_0_i6);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_expr_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("call ", 5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(string__append_3_2,
		check_hlds__unique_modes__unique_modes_check_goal_expr_5_0_i7);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_expr_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(8);
	}
	MR_np_call_localret_ent(check_hlds__mode_debug__mode_checkpoint_4_0,
		check_hlds__unique_modes__unique_modes_check_goal_expr_5_0_i8);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_expr_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_call_id_3_0,
		check_hlds__unique_modes__unique_modes_check_goal_expr_5_0_i9);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_expr_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_r2 = MR_sv(8);
	}
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_set_call_context_3_0,
		check_hlds__unique_modes__unique_modes_check_goal_expr_5_0_i12);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_expr_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__unique_modes__unique_modes_check_call_7_0,
		check_hlds__unique_modes__unique_modes_check_goal_expr_5_0_i13);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_expr_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 6);
	MR_sv(6) = MR_tempr1;
	MR_tfield(2, MR_tempr1, 0) = MR_sv(7);
	MR_tfield(2, MR_tempr1, 1) = MR_r1;
	MR_tfield(2, MR_tempr1, 2) = MR_sv(3);
	MR_tfield(2, MR_tempr1, 3) = MR_sv(4);
	MR_tfield(2, MR_tempr1, 4) = MR_sv(5);
	MR_tfield(2, MR_tempr1, 5) = MR_sv(1);
	MR_r1 = MR_r2;
	}
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_unset_call_context_2_0,
		check_hlds__unique_modes__unique_modes_check_goal_expr_5_0_i15);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_expr_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_r2 = (MR_Word) MR_string_const("call", 4);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__mode_debug__mode_checkpoint_4_0,
		check_hlds__unique_modes__unique_modes_check_goal_expr_5_0_i95);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_expr_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(check_hlds__unique_modes__unique_modes_check_goal_expr_5_0_i17);
	}
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(6) = MR_r2;
	MR_sv(7) = MR_tfield(1, MR_r1, 0);
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_sv(3) = MR_tfield(1, MR_r1, 3);
	MR_sv(4) = MR_tfield(1, MR_r1, 4);
	MR_r1 = (MR_Integer) 0;
	MR_r2 = (MR_Word) MR_string_const("unify", 5);
	MR_np_call_localret_ent(check_hlds__mode_debug__mode_checkpoint_4_0,
		check_hlds__unique_modes__unique_modes_check_goal_expr_5_0_i18);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_expr_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(4);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_set_call_context_3_0,
		check_hlds__unique_modes__unique_modes_check_goal_expr_5_0_i20);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_expr_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(6);
	MR_r6 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__modecheck_unify__modecheck_unification_8_0,
		check_hlds__unique_modes__unique_modes_check_goal_expr_5_0_i21);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_expr_5_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_unset_call_context_2_0,
		check_hlds__unique_modes__unique_modes_check_goal_expr_5_0_i22);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_expr_5_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_r2 = (MR_Word) MR_string_const("unify", 5);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__mode_debug__mode_checkpoint_4_0,
		check_hlds__unique_modes__unique_modes_check_goal_expr_5_0_i95);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_expr_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,1)) {
		MR_GOTO_LAB(check_hlds__unique_modes__unique_modes_check_goal_expr_5_0_i24);
	}
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(6) = MR_r2;
	MR_sv(7) = MR_tfield(3, MR_r1, 1);
	MR_sv(2) = MR_tfield(3, MR_r1, 4);
	MR_sv(3) = MR_tfield(3, MR_r1, 5);
	MR_sv(4) = MR_tfield(3, MR_r1, 6);
	MR_sv(5) = MR_tfield(3, MR_r1, 7);
	MR_sv(1) = MR_tfield(3, MR_r1, 2);
	MR_sv(8) = MR_tfield(3, MR_r1, 3);
	MR_r1 = (MR_Integer) 0;
	MR_r2 = (MR_Word) MR_string_const("foreign_proc", 12);
	MR_np_call_localret_ent(check_hlds__mode_debug__mode_checkpoint_4_0,
		check_hlds__unique_modes__unique_modes_check_goal_expr_5_0_i25);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_expr_5_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_call_id_3_0,
		check_hlds__unique_modes__unique_modes_check_goal_expr_5_0_i26);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_expr_5_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_r2 = MR_sv(9);
	}
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_set_call_context_3_0,
		check_hlds__unique_modes__unique_modes_check_goal_expr_5_0_i29);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_expr_5_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, foreign_arg);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(fn__list__map_2_0,
		check_hlds__unique_modes__unique_modes_check_goal_expr_5_0_i32);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_expr_5_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(9);
	}
	MR_np_call_localret_ent(check_hlds__unique_modes__unique_modes_check_call_7_0,
		check_hlds__unique_modes__unique_modes_check_goal_expr_5_0_i33);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_expr_5_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 8);
	MR_sv(6) = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(7);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 3) = MR_r1;
	MR_tfield(3, MR_tempr1, 4) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 5) = MR_sv(3);
	MR_tfield(3, MR_tempr1, 6) = MR_sv(4);
	MR_tfield(3, MR_tempr1, 7) = MR_sv(5);
	MR_r1 = MR_r2;
	}
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_unset_call_context_2_0,
		check_hlds__unique_modes__unique_modes_check_goal_expr_5_0_i35);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_expr_5_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_r2 = (MR_Word) MR_string_const("foreign_proc", 12);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__mode_debug__mode_checkpoint_4_0,
		check_hlds__unique_modes__unique_modes_check_goal_expr_5_0_i95);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_expr_5_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,2)) {
		MR_GOTO_LAB(check_hlds__unique_modes__unique_modes_check_goal_expr_5_0_i37);
	}
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(6) = MR_r1;
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_r2 = MR_tfield(3, MR_sv(6), 2);
	MR_decr_sp(10);
	MR_np_tailcall_ent(check_hlds__unique_modes__unique_modes_check_goal_conj_5_0);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_expr_5_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,3)) {
		MR_GOTO_LAB(check_hlds__unique_modes__unique_modes_check_goal_expr_5_0_i39);
	}
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_tailcall_ent(check_hlds__unique_modes__unique_modes_check_goal_disj_5_0);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_expr_5_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,0)) {
		MR_GOTO_LAB(check_hlds__unique_modes__unique_modes_check_goal_expr_5_0_i41);
	}
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(6) = MR_r1;
	MR_sv(7) = MR_tfield(3, MR_r1, 1);
	MR_sv(2) = MR_tfield(3, MR_r1, 3);
	MR_sv(3) = MR_tfield(3, MR_r1, 4);
	MR_sv(4) = MR_tfield(3, MR_r1, 2);
	MR_r1 = (MR_Integer) 0;
	MR_r2 = (MR_Word) MR_string_const("generic_call", 12);
	MR_np_call_localret_ent(check_hlds__mode_debug__mode_checkpoint_4_0,
		check_hlds__unique_modes__unique_modes_check_goal_expr_5_0_i42);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_expr_5_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(hlds__hlds_goal__generic_call_id_2_0,
		check_hlds__unique_modes__unique_modes_check_goal_expr_5_0_i43);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_expr_5_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(5);
	}
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_set_call_context_3_0,
		check_hlds__unique_modes__unique_modes_check_goal_expr_5_0_i45);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_expr_5_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(7),3)) {
		MR_GOTO_LAB(check_hlds__unique_modes__unique_modes_check_goal_expr_5_0_i47);
	}
	MR_sv(7) = (MR_Integer) 0;
	MR_GOTO_LAB(check_hlds__unique_modes__unique_modes_check_goal_expr_5_0_i46);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_expr_5_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(7),1)) {
		MR_GOTO_LAB(check_hlds__unique_modes__unique_modes_check_goal_expr_5_0_i48);
	}
	MR_sv(7) = (MR_Integer) 0;
	MR_GOTO_LAB(check_hlds__unique_modes__unique_modes_check_goal_expr_5_0_i46);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_expr_5_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(7),2)) {
		MR_GOTO_LAB(check_hlds__unique_modes__unique_modes_check_goal_expr_5_0_i49);
	}
	MR_sv(7) = (MR_Integer) 0;
	MR_GOTO_LAB(check_hlds__unique_modes__unique_modes_check_goal_expr_5_0_i46);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_expr_5_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = (MR_Integer) 1;
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_expr_5_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_module_info_2_0,
		check_hlds__unique_modes__unique_modes_check_goal_expr_5_0_i50);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_expr_5_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(check_hlds__mode_util__mode_list_get_initial_insts_3_0,
		check_hlds__unique_modes__unique_modes_check_goal_expr_5_0_i51);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_expr_5_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__modecheck_util__modecheck_var_has_inst_list_no_exact_match_6_0,
		check_hlds__unique_modes__unique_modes_check_goal_expr_5_0_i52);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_expr_5_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_tempr2 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__mode_util__mode_list_get_final_insts_3_0,
		check_hlds__unique_modes__unique_modes_check_goal_expr_5_0_i53);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_expr_5_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_mode__inst_list_apply_substitution_3_0,
		check_hlds__unique_modes__unique_modes_check_goal_expr_5_0_i54);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_expr_5_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(7);
	MR_r5 = MR_sv(1);
	}
	MR_np_call_localret_ent(check_hlds__modecheck_util__modecheck_set_var_inst_list_8_0,
		check_hlds__unique_modes__unique_modes_check_goal_expr_5_0_i55);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_expr_5_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r2;
	MR_sv(2) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(4);
	}
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		check_hlds__unique_modes__unique_modes_check_goal_expr_5_0_i58);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_expr_5_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__unique_modes__unique_modes_check_goal_expr_5_0_i56);
	}
	if (MR_LTAGS_TESTR(MR_sv(7),0,0)) {
		MR_GOTO_LAB(check_hlds__unique_modes__unique_modes_check_goal_expr_5_0_i56);
	}
	MR_r1 = MR_sv(3);
	MR_GOTO_LAB(check_hlds__unique_modes__unique_modes_check_goal_expr_5_0_i62);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_expr_5_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("check_hlds.unique_modes", 23);
	MR_r2 = (MR_Word) MR_string_const("predicate \140check_hlds.unique_modes.unique_modes_check_call_modes\'/7", 67);
	MR_r3 = (MR_Word) MR_string_const("call to implied mode\?", 21);
	MR_np_call_localret_ent(require__unexpected_3_0,
		check_hlds__unique_modes__unique_modes_check_goal_expr_5_0_i62);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_expr_5_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(parse_tree__prog_data__determinism_components_3_0,
		check_hlds__unique_modes__unique_modes_check_goal_expr_5_0_i64);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_expr_5_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 0 != (MR_Integer) MR_r2)) {
		MR_GOTO_LAB(check_hlds__unique_modes__unique_modes_check_goal_expr_5_0_i63);
	}
	MR_np_call_localret_ent(hlds__instmap__init_unreachable_1_0,
		check_hlds__unique_modes__unique_modes_check_goal_expr_5_0_i65);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_expr_5_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_set_instmap_3_0,
		check_hlds__unique_modes__unique_modes_check_goal_expr_5_0_i79);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_expr_5_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(parse_tree__prog_data__determinism_components_3_0,
		check_hlds__unique_modes__unique_modes_check_goal_expr_5_0_i68);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_expr_5_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 3 != (MR_Integer) MR_r2)) {
		MR_GOTO_LAB(check_hlds__unique_modes__unique_modes_check_goal_expr_5_0_i67);
	}
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_instmap_2_0,
		check_hlds__unique_modes__unique_modes_check_goal_expr_5_0_i69);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_expr_5_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_np_call_localret_ent(hlds__instmap__instmap_is_reachable_1_0,
		check_hlds__unique_modes__unique_modes_check_goal_expr_5_0_i72);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_expr_5_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__unique_modes__unique_modes_check_goal_expr_5_0_i71);
	}
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(hlds__instmap__instmap_vars_list_2_0,
		check_hlds__unique_modes__unique_modes_check_goal_expr_5_0_i74);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_expr_5_0,74)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(check_hlds__unique_modes__select_nondet_live_vars_3_0,
		check_hlds__unique_modes__unique_modes_check_goal_expr_5_0_i75);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_expr_5_0,75)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(check_hlds__unique_modes__make_var_list_mostly_uniq_3_0,
		check_hlds__unique_modes__unique_modes_check_goal_expr_5_0_i79);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_expr_5_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_unset_call_context_2_0,
		check_hlds__unique_modes__unique_modes_check_goal_expr_5_0_i80);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_expr_5_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_expr_5_0,79)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_unset_call_context_2_0,
		check_hlds__unique_modes__unique_modes_check_goal_expr_5_0_i80);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_expr_5_0,80)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_r2 = (MR_Word) MR_string_const("generic_call", 12);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__mode_debug__mode_checkpoint_4_0,
		check_hlds__unique_modes__unique_modes_check_goal_expr_5_0_i95);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_expr_5_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,6)) {
		MR_GOTO_LAB(check_hlds__unique_modes__unique_modes_check_goal_expr_5_0_i82);
	}
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r1;
	MR_sv(6) = MR_tempr1;
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tfield(3, MR_tempr1, 2);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_tfield(3, MR_tempr1, 3);
	MR_r4 = MR_tfield(3, MR_tempr1, 4);
	MR_r5 = MR_tempr2;
	MR_r6 = MR_tempr3;
	MR_decr_sp(10);
	MR_np_tailcall_ent(check_hlds__unique_modes__unique_modes_check_goal_if_then_else_8_0);
	}
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_expr_5_0,82)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,5)) {
		MR_GOTO_LAB(check_hlds__unique_modes__unique_modes_check_goal_expr_5_0_i84);
	}
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(6) = MR_r1;
	MR_r1 = MR_tfield(3, MR_r1, 1);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_tfield(3, MR_sv(6), 2);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_decr_sp(10);
	MR_np_tailcall_ent(check_hlds__unique_modes__unique_modes_check_goal_scope_6_0);
	}
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_expr_5_0,84)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,7)) {
		MR_GOTO_LAB(check_hlds__unique_modes__unique_modes_check_goal_expr_5_0_i238);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_tfield(3, MR_r1, 1);
	MR_r10 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(check_hlds__unique_modes__unique_modes_check_goal_expr_5_0_i88);
	}
	MR_r1 = MR_tfield(1, MR_tempr1, 0);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tfield(1, MR_tempr1, 1);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_tfield(1, MR_tempr1, 2);
	MR_r4 = MR_tfield(1, MR_tempr1, 3);
	MR_r5 = MR_tfield(1, MR_tempr1, 4);
	MR_r6 = MR_tfield(1, MR_tempr1, 5);
	MR_r7 = MR_tfield(1, MR_tempr1, 6);
	MR_r8 = MR_tempr2;
	MR_r9 = MR_tempr3;
	MR_np_tailcall_ent(check_hlds__unique_modes__unique_modes_check_goal_atomic_goal_11_0);
	}
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_expr_5_0,88)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r10,2)) {
		MR_GOTO_LAB(check_hlds__unique_modes__unique_modes_check_goal_expr_5_0_i90);
	}
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r10;
	MR_sv(6) = MR_tfield(2, MR_tempr1, 0);
	MR_sv(7) = MR_tfield(2, MR_tempr1, 1);
	MR_sv(2) = MR_tfield(2, MR_tempr1, 2);
	MR_r1 = (MR_Integer) 0;
	MR_r2 = (MR_Word) MR_string_const("try", 3);
	}
	MR_np_call_localret_ent(check_hlds__mode_debug__mode_checkpoint_4_0,
		check_hlds__unique_modes__unique_modes_check_goal_expr_5_0_i91);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_expr_5_0,91)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__unique_modes__unique_modes_check_goal_4_0,
		check_hlds__unique_modes__unique_modes_check_goal_expr_5_0_i92);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_expr_5_0,92)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 3);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(2, MR_tempr1, 1) = MR_sv(7);
	MR_tfield(2, MR_tempr1, 2) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_sv(6) = MR_tempr2;
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 7;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_r1 = (MR_Integer) 1;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Word) MR_string_const("try", 3);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__mode_debug__mode_checkpoint_4_0,
		check_hlds__unique_modes__unique_modes_check_goal_expr_5_0_i95);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_expr_5_0,95)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(10);
	}
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_expr_5_0,90)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("check_hlds.unique_modes", 23);
	MR_r2 = (MR_Word) MR_string_const("predicate \140check_hlds.unique_modes.unique_modes_check_goal_expr\'/5", 66);
	MR_r3 = (MR_Word) MR_string_const("bi_implication", 14);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_expr_5_0,238)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r1;
	MR_sv(6) = MR_tempr1;
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tfield(3, MR_tempr1, 2);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_tfield(3, MR_tempr1, 3);
	MR_r4 = MR_tempr2;
	MR_r5 = MR_tempr3;
	MR_decr_sp(10);
	MR_np_tailcall_ent(check_hlds__unique_modes__unique_modes_check_goal_switch_7_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(check_hlds__modecheck_util__mode_info_add_goals_live_vars_4_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0;

MR_BEGIN_MODULE(check_hlds__unique_modes_module11)
	MR_init_entry1(check_hlds__unique_modes__unique_modes_check_goal_conj_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__unique_modes__unique_modes_check_goal_conj_5_0);
	MR_init_label8(check_hlds__unique_modes__unique_modes_check_goal_conj_5_0,2,4,6,9,10,7,12,15)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'unique_modes_check_goal_conj'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__unique_modes__unique_modes_check_goal_conj_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = (MR_Word) MR_string_const("*conj", 5);
	MR_np_call_localret_ent(check_hlds__mode_debug__mode_checkpoint_4_0,
		check_hlds__unique_modes__unique_modes_check_goal_conj_5_0_i2);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_conj_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(check_hlds__unique_modes__unique_modes_check_goal_conj_5_0_i4);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(1) = MR_tempr1;
	MR_r3 = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_r2 = (MR_Word) MR_string_const("*conj", 5);
	}
	MR_np_call_localret_ent(check_hlds__mode_debug__mode_checkpoint_4_0,
		check_hlds__unique_modes__unique_modes_check_goal_conj_5_0_i15);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_conj_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__modecheck_util__mode_info_add_goals_live_vars_4_0,
		check_hlds__unique_modes__unique_modes_check_goal_conj_5_0_i6);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_conj_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_sv(2);
	MR_r3 = MR_tfield(1, MR_tempr3, 1);
	MR_r4 = MR_tfield(1, MR_tempr3, 0);
	MR_tempr1 = MR_tfield(0, MR_r4, 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,2)) {
		MR_GOTO_LAB(check_hlds__unique_modes__unique_modes_check_goal_conj_5_0_i7);
	}
	MR_tempr2 = MR_tfield(3, MR_tempr1, 1);
	if ((MR_sv(1) != MR_tempr2)) {
		MR_GOTO_LAB(check_hlds__unique_modes__unique_modes_check_goal_conj_5_0_i7);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_tfield(3, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(list__append_3_1,
		check_hlds__unique_modes__unique_modes_check_goal_conj_5_0_i9);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_conj_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(check_hlds__unique_modes__unique_modes_check_conj_5_0,
		check_hlds__unique_modes__unique_modes_check_goal_conj_5_0_i10);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_conj_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_r3 = MR_r2;
	MR_r1 = (MR_Integer) 1;
	MR_r2 = (MR_Word) MR_string_const("*conj", 5);
	}
	MR_np_call_localret_ent(check_hlds__mode_debug__mode_checkpoint_4_0,
		check_hlds__unique_modes__unique_modes_check_goal_conj_5_0_i15);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_conj_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_r4;
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__unique_modes__unique_modes_check_conj_2_6_0,
		check_hlds__unique_modes__unique_modes_check_goal_conj_5_0_i12);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_conj_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_r3 = MR_r2;
	MR_r1 = (MR_Integer) 1;
	MR_r2 = (MR_Word) MR_string_const("*conj", 5);
	}
	MR_np_call_localret_ent(check_hlds__mode_debug__mode_checkpoint_4_0,
		check_hlds__unique_modes__unique_modes_check_goal_conj_5_0_i15);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_conj_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__hlds__hlds_goal__goal_info_get_nonlocals_1_0);
MR_decl_entry(hlds__instmap__instmap_merge_5_0);

MR_BEGIN_MODULE(check_hlds__unique_modes_module12)
	MR_init_entry1(check_hlds__unique_modes__unique_modes_check_goal_disj_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__unique_modes__unique_modes_check_goal_disj_5_0);
	MR_init_label10(check_hlds__unique_modes__unique_modes_check_goal_disj_5_0,2,5,6,4,8,9,11,12,13,16)
	MR_init_label10(check_hlds__unique_modes__unique_modes_check_goal_disj_5_0,18,19,20,15,21,22,10,23,24,25)
	MR_init_label6(check_hlds__unique_modes__unique_modes_check_goal_disj_5_0,26,27,28,29,32,34)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'unique_modes_check_goal_disj'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__unique_modes__unique_modes_check_goal_disj_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(6) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = (MR_Word) MR_string_const("disj", 4);
	MR_np_call_localret_ent(check_hlds__mode_debug__mode_checkpoint_4_0,
		check_hlds__unique_modes__unique_modes_check_goal_disj_5_0_i2);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_disj_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(6),0,0)) {
		MR_GOTO_LAB(check_hlds__unique_modes__unique_modes_check_goal_disj_5_0_i4);
	}
	MR_sv(5) = MR_r1;
	MR_np_call_localret_ent(hlds__instmap__init_unreachable_1_0,
		check_hlds__unique_modes__unique_modes_check_goal_disj_5_0_i5);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_disj_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_set_instmap_3_0,
		check_hlds__unique_modes__unique_modes_check_goal_disj_5_0_i6);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_disj_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = (MR_Word) MR_TAG_COMMON(3,3,0);
	MR_r3 = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_r2 = (MR_Word) MR_string_const("disj", 4);
	MR_np_call_localret_ent(check_hlds__mode_debug__mode_checkpoint_4_0,
		check_hlds__unique_modes__unique_modes_check_goal_disj_5_0_i34);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_disj_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_nonlocals_1_0,
		check_hlds__unique_modes__unique_modes_check_goal_disj_5_0_i8);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_disj_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_determinism_1_0,
		check_hlds__unique_modes__unique_modes_check_goal_disj_5_0_i9);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_disj_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(parse_tree__prog_data__determinism_components_3_0,
		check_hlds__unique_modes__unique_modes_check_goal_disj_5_0_i11);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_disj_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 3 != (MR_Integer) MR_r2)) {
		MR_GOTO_LAB(check_hlds__unique_modes__unique_modes_check_goal_disj_5_0_i10);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_add_live_vars_3_0,
		check_hlds__unique_modes__unique_modes_check_goal_disj_5_0_i12);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_disj_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_instmap_2_0,
		check_hlds__unique_modes__unique_modes_check_goal_disj_5_0_i13);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_disj_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(hlds__instmap__instmap_is_reachable_1_0,
		check_hlds__unique_modes__unique_modes_check_goal_disj_5_0_i16);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_disj_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__unique_modes__unique_modes_check_goal_disj_5_0_i15);
	}
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(hlds__instmap__instmap_vars_list_2_0,
		check_hlds__unique_modes__unique_modes_check_goal_disj_5_0_i18);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_disj_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(check_hlds__unique_modes__select_nondet_live_vars_3_0,
		check_hlds__unique_modes__unique_modes_check_goal_disj_5_0_i19);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_disj_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(check_hlds__unique_modes__make_var_list_mostly_uniq_3_0,
		check_hlds__unique_modes__unique_modes_check_goal_disj_5_0_i20);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_disj_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_r3;
	MR_GOTO_LAB(check_hlds__unique_modes__unique_modes_check_goal_disj_5_0_i21);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_disj_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_disj_5_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_remove_live_vars_3_0,
		check_hlds__unique_modes__unique_modes_check_goal_disj_5_0_i22);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_disj_5_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(5) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(3) = MR_tfield(1, MR_tempr1, 1);
	MR_GOTO_LAB(check_hlds__unique_modes__unique_modes_check_goal_disj_5_0_i23);
	}
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_disj_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(5) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(3) = MR_tfield(1, MR_tempr1, 1);
	}
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_disj_5_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_instmap_2_0,
		check_hlds__unique_modes__unique_modes_check_goal_disj_5_0_i24);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_disj_5_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(6);
	MR_np_call_localret_ent(check_hlds__unique_modes__prepare_for_disjunct_5_0,
		check_hlds__unique_modes__unique_modes_check_goal_disj_5_0_i25);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_disj_5_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__unique_modes__unique_modes_check_goal_4_0,
		check_hlds__unique_modes__unique_modes_check_goal_disj_5_0_i26);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_disj_5_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_instmap_2_0,
		check_hlds__unique_modes__unique_modes_check_goal_disj_5_0_i27);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_disj_5_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_set_instmap_3_0,
		check_hlds__unique_modes__unique_modes_check_goal_disj_5_0_i28);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_disj_5_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__unique_modes__unique_modes_check_disj_7_0,
		check_hlds__unique_modes__unique_modes_check_goal_disj_5_0_i29);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_disj_5_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr2, 1) = MR_r2;
	MR_sv(6) = MR_tempr1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr2;
	MR_tempr3 = MR_r3;
	MR_r3 = (MR_Integer) 0;
	MR_r4 = MR_tempr3;
	}
	MR_np_call_localret_ent(hlds__instmap__instmap_merge_5_0,
		check_hlds__unique_modes__unique_modes_check_goal_disj_5_0_i32);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_disj_5_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_r2, 1) = MR_sv(6);
	MR_sv(6) = MR_r2;
	MR_r3 = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_r2 = (MR_Word) MR_string_const("disj", 4);
	MR_np_call_localret_ent(check_hlds__mode_debug__mode_checkpoint_4_0,
		check_hlds__unique_modes__unique_modes_check_goal_disj_5_0_i34);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_disj_5_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__hlds__hlds_goal__goal_get_nonlocals_1_0);
MR_decl_entry(check_hlds__mode_info__mode_info_lock_vars_4_0);
MR_decl_entry(parse_tree__set_of_var__to_sorted_list_2_0);
MR_decl_entry(fn__hlds__hlds_goal__goal_info_get_instmap_delta_1_0);
MR_decl_entry(check_hlds__mode_info__mode_info_unlock_vars_4_0);
MR_decl_entry(fn__hlds__hlds_goal__true_goal_0_0);

MR_BEGIN_MODULE(check_hlds__unique_modes_module13)
	MR_init_entry1(check_hlds__unique_modes__unique_modes_check_goal_if_then_else_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__unique_modes__unique_modes_check_goal_if_then_else_8_0);
	MR_init_label10(check_hlds__unique_modes__unique_modes_check_goal_if_then_else_8_0,2,3,4,5,6,7,8,9,10,11)
	MR_init_label10(check_hlds__unique_modes__unique_modes_check_goal_if_then_else_8_0,12,13,14,15,16,17,18,19,20,23)
	MR_init_label10(check_hlds__unique_modes__unique_modes_check_goal_if_then_else_8_0,25,26,21,27,28,29,30,31,32,35)
	MR_init_label1(check_hlds__unique_modes__unique_modes_check_goal_if_then_else_8_0,37)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'unique_modes_check_goal_if_then_else'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__unique_modes__unique_modes_check_goal_if_then_else_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_sv(5) = MR_r3;
	MR_sv(6) = MR_r4;
	MR_sv(2) = MR_r5;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = (MR_Word) MR_string_const("if-then-else", 12);
	MR_r3 = MR_r6;
	MR_np_call_localret_ent(check_hlds__mode_debug__mode_checkpoint_4_0,
		check_hlds__unique_modes__unique_modes_check_goal_if_then_else_8_0_i2);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_if_then_else_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_nonlocals_1_0,
		check_hlds__unique_modes__unique_modes_check_goal_if_then_else_8_0_i3);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_if_then_else_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_get_nonlocals_1_0,
		check_hlds__unique_modes__unique_modes_check_goal_if_then_else_8_0_i4);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_if_then_else_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_get_nonlocals_1_0,
		check_hlds__unique_modes__unique_modes_check_goal_if_then_else_8_0_i5);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_if_then_else_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_get_nonlocals_1_0,
		check_hlds__unique_modes__unique_modes_check_goal_if_then_else_8_0_i6);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_if_then_else_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_instmap_2_0,
		check_hlds__unique_modes__unique_modes_check_goal_if_then_else_8_0_i7);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_if_then_else_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r1 = (MR_Word) MR_tbmkword(0, 1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_lock_vars_4_0,
		check_hlds__unique_modes__unique_modes_check_goal_if_then_else_8_0_i8);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_if_then_else_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_add_live_vars_3_0,
		check_hlds__unique_modes__unique_modes_check_goal_if_then_else_8_0_i9);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_if_then_else_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(parse_tree__set_of_var__to_sorted_list_2_0,
		check_hlds__unique_modes__unique_modes_check_goal_if_then_else_8_0_i10);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_if_then_else_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(check_hlds__unique_modes__select_live_vars_3_0,
		check_hlds__unique_modes__unique_modes_check_goal_if_then_else_8_0_i11);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_if_then_else_8_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_tfield(0, MR_sv(4), 1);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_instmap_delta_1_0,
		check_hlds__unique_modes__unique_modes_check_goal_if_then_else_8_0_i12);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_if_then_else_8_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(8);
	}
	MR_np_call_localret_ent(check_hlds__unique_modes__select_changed_inst_vars_4_0,
		check_hlds__unique_modes__unique_modes_check_goal_if_then_else_8_0_i13);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_if_then_else_8_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(check_hlds__unique_modes__make_var_list_mostly_uniq_3_0,
		check_hlds__unique_modes__unique_modes_check_goal_if_then_else_8_0_i14);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_if_then_else_8_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_remove_live_vars_3_0,
		check_hlds__unique_modes__unique_modes_check_goal_if_then_else_8_0_i15);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_if_then_else_8_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_add_live_vars_3_0,
		check_hlds__unique_modes__unique_modes_check_goal_if_then_else_8_0_i16);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_if_then_else_8_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__unique_modes__unique_modes_check_goal_4_0,
		check_hlds__unique_modes__unique_modes_check_goal_if_then_else_8_0_i17);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_if_then_else_8_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_remove_live_vars_3_0,
		check_hlds__unique_modes__unique_modes_check_goal_if_then_else_8_0_i18);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_if_then_else_8_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_tbmkword(0, 1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_unlock_vars_4_0,
		check_hlds__unique_modes__unique_modes_check_goal_if_then_else_8_0_i19);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_if_then_else_8_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_instmap_2_0,
		check_hlds__unique_modes__unique_modes_check_goal_if_then_else_8_0_i20);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_if_then_else_8_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_np_call_localret_ent(hlds__instmap__instmap_is_reachable_1_0,
		check_hlds__unique_modes__unique_modes_check_goal_if_then_else_8_0_i23);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_if_then_else_8_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__unique_modes__unique_modes_check_goal_if_then_else_8_0_i21);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(check_hlds__unique_modes__unique_modes_check_goal_4_0,
		check_hlds__unique_modes__unique_modes_check_goal_if_then_else_8_0_i25);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_if_then_else_8_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_sv(9) = MR_r2;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_instmap_2_0,
		check_hlds__unique_modes__unique_modes_check_goal_if_then_else_8_0_i26);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_if_then_else_8_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r4 = MR_sv(9);
	MR_sv(9) = MR_r3;
	MR_r2 = MR_r4;
	MR_GOTO_LAB(check_hlds__unique_modes__unique_modes_check_goal_if_then_else_8_0_i28);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_if_then_else_8_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__true_goal_0_0,
		check_hlds__unique_modes__unique_modes_check_goal_if_then_else_8_0_i27);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_if_then_else_8_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(10);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_if_then_else_8_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_set_instmap_3_0,
		check_hlds__unique_modes__unique_modes_check_goal_if_then_else_8_0_i29);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_if_then_else_8_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__unique_modes__unique_modes_check_goal_4_0,
		check_hlds__unique_modes__unique_modes_check_goal_if_then_else_8_0_i30);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_if_then_else_8_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_sv(10) = MR_r2;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_instmap_2_0,
		check_hlds__unique_modes__unique_modes_check_goal_if_then_else_8_0_i31);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_if_then_else_8_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(10);
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_set_instmap_3_0,
		check_hlds__unique_modes__unique_modes_check_goal_if_then_else_8_0_i32);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_if_then_else_8_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(10);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(9);
	MR_tfield(1, MR_r2, 1) = MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r3 = (MR_Integer) 1;
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__instmap__instmap_merge_5_0,
		check_hlds__unique_modes__unique_modes_check_goal_if_then_else_8_0_i35);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_if_then_else_8_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 5);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(4);
	MR_tfield(3, MR_tempr1, 3) = MR_sv(5);
	MR_tfield(3, MR_tempr1, 4) = MR_sv(6);
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_r2 = (MR_Word) MR_string_const("if-then-else", 12);
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(check_hlds__mode_debug__mode_checkpoint_4_0,
		check_hlds__unique_modes__unique_modes_check_goal_if_then_else_8_0_i37);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_if_then_else_8_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(11);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(check_hlds__mode_info__mode_info_get_live_vars_2_0);
MR_decl_entry(check_hlds__mode_info__mode_info_set_live_vars_3_0);

MR_BEGIN_MODULE(check_hlds__unique_modes_module14)
	MR_init_entry1(check_hlds__unique_modes__unique_modes_check_goal_negation_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__unique_modes__unique_modes_check_goal_negation_5_0);
	MR_init_label10(check_hlds__unique_modes__unique_modes_check_goal_negation_5_0,2,3,4,5,6,7,8,10,11,12)
	MR_init_label5(check_hlds__unique_modes__unique_modes_check_goal_negation_5_0,13,14,15,16,17)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'unique_modes_check_goal_negation'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__unique_modes__unique_modes_check_goal_negation_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(3) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = (MR_Word) MR_string_const("not", 3);
	MR_np_call_localret_ent(check_hlds__mode_debug__mode_checkpoint_4_0,
		check_hlds__unique_modes__unique_modes_check_goal_negation_5_0_i2);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_negation_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_instmap_2_0,
		check_hlds__unique_modes__unique_modes_check_goal_negation_5_0_i3);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_negation_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_nonlocals_1_0,
		check_hlds__unique_modes__unique_modes_check_goal_negation_5_0_i4);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_negation_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_sv(6) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(parse_tree__set_of_var__to_sorted_list_2_0,
		check_hlds__unique_modes__unique_modes_check_goal_negation_5_0_i5);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_negation_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(check_hlds__unique_modes__select_live_vars_3_0,
		check_hlds__unique_modes__unique_modes_check_goal_negation_5_0_i6);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_negation_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(check_hlds__unique_modes__make_var_list_mostly_uniq_3_0,
		check_hlds__unique_modes__unique_modes_check_goal_negation_5_0_i7);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_negation_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_live_vars_2_0,
		check_hlds__unique_modes__unique_modes_check_goal_negation_5_0_i8);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_negation_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_np_call_localret_ent(fn__bag__init_0_0,
		check_hlds__unique_modes__unique_modes_check_goal_negation_5_0_i10);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_negation_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_set_live_vars_3_0,
		check_hlds__unique_modes__unique_modes_check_goal_negation_5_0_i11);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_negation_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_lock_vars_4_0,
		check_hlds__unique_modes__unique_modes_check_goal_negation_5_0_i12);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_negation_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__unique_modes__unique_modes_check_goal_4_0,
		check_hlds__unique_modes__unique_modes_check_goal_negation_5_0_i13);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_negation_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_unlock_vars_4_0,
		check_hlds__unique_modes__unique_modes_check_goal_negation_5_0_i14);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_negation_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_set_live_vars_3_0,
		check_hlds__unique_modes__unique_modes_check_goal_negation_5_0_i15);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_negation_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_set_instmap_3_0,
		check_hlds__unique_modes__unique_modes_check_goal_negation_5_0_i16);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_negation_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = (MR_Word) MR_tmkword(0, (MR_Word *) MR_sv(3));
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_r2 = (MR_Word) MR_string_const("not", 3);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__mode_debug__mode_checkpoint_4_0,
		check_hlds__unique_modes__unique_modes_check_goal_negation_5_0_i17);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_negation_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__unique_modes_module15)
	MR_init_entry1(check_hlds__unique_modes__unique_modes_check_goal_scope_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__unique_modes__unique_modes_check_goal_scope_6_0);
	MR_init_label10(check_hlds__unique_modes__unique_modes_check_goal_scope_6_0,6,7,9,11,13,15,16,17,12,8)
	MR_init_label10(check_hlds__unique_modes__unique_modes_check_goal_scope_6_0,21,5,23,24,25,22,85,29,30,31)
	MR_init_label9(check_hlds__unique_modes__unique_modes_check_goal_scope_6_0,32,33,34,35,36,28,38,39,40)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'unique_modes_check_goal_scope'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__unique_modes__unique_modes_check_goal_scope_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,4)) {
		MR_GOTO_LAB(check_hlds__unique_modes__unique_modes_check_goal_scope_6_0_i85);
	}
	MR_r5 = MR_tfield(3, MR_r1, 2);
	if (MR_INT_NE(MR_r5,1)) {
		MR_GOTO_LAB(check_hlds__unique_modes__unique_modes_check_goal_scope_6_0_i5);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_tfield(3, MR_r1, 1);
	MR_r1 = (MR_Integer) 0;
	MR_r2 = (MR_Word) MR_string_const("from_ground_term_construct scope", 32);
	MR_r3 = MR_r4;
	MR_np_call_localret_ent(check_hlds__mode_debug__mode_checkpoint_4_0,
		check_hlds__unique_modes__unique_modes_check_goal_scope_6_0_i6);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_scope_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_var_is_live_3_0,
		check_hlds__unique_modes__unique_modes_check_goal_scope_6_0_i7);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_scope_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(check_hlds__unique_modes__unique_modes_check_goal_scope_6_0_i9);
	}
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(3,4,0);
	MR_r3 = MR_sv(5);
	MR_r1 = (MR_Integer) 1;
	MR_r2 = (MR_Word) MR_string_const("from_ground_term_construct scope", 32);
	MR_np_call_localret_ent(check_hlds__mode_debug__mode_checkpoint_4_0,
		check_hlds__unique_modes__unique_modes_check_goal_scope_6_0_i21);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_scope_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_sv(2), 1);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_instmap_delta_1_0,
		check_hlds__unique_modes__unique_modes_check_goal_scope_6_0_i11);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_scope_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(hlds__instmap__instmap_delta_search_var_3_0,
		check_hlds__unique_modes__unique_modes_check_goal_scope_6_0_i13);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_scope_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__unique_modes__unique_modes_check_goal_scope_6_0_i12);
	}
	MR_sv(4) = MR_r2;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_instmap_2_0,
		check_hlds__unique_modes__unique_modes_check_goal_scope_6_0_i15);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_scope_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__instmap__instmap_set_var_4_0,
		check_hlds__unique_modes__unique_modes_check_goal_scope_6_0_i16);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_scope_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_set_instmap_3_0,
		check_hlds__unique_modes__unique_modes_check_goal_scope_6_0_i17);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_scope_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(2);
	MR_sv(1) = MR_tempr1;
	MR_r3 = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_r2 = (MR_Word) MR_string_const("from_ground_term_construct scope", 32);
	}
	MR_np_call_localret_ent(check_hlds__mode_debug__mode_checkpoint_4_0,
		check_hlds__unique_modes__unique_modes_check_goal_scope_6_0_i21);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_scope_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("check_hlds.unique_modes", 23);
	MR_r2 = (MR_Word) MR_string_const("predicate \140check_hlds.unique_modes.unique_modes_check_goal_scope\'/6", 67);
	MR_r3 = (MR_Word) MR_string_const("bad InstMapDelta", 16);
	MR_np_call_localret_ent(require__unexpected_3_0,
		check_hlds__unique_modes__unique_modes_check_goal_scope_6_0_i8);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_scope_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(check_hlds__mode_debug__mode_checkpoint_4_0,
		check_hlds__unique_modes__unique_modes_check_goal_scope_6_0_i21);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_scope_6_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_scope_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!((((MR_Integer) MR_r5 == (MR_Integer) 2) || ((MR_Integer) MR_r5 == (MR_Integer) 3)))) {
		MR_GOTO_LAB(check_hlds__unique_modes__unique_modes_check_goal_scope_6_0_i22);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = (MR_Word) MR_string_const("scope", 5);
	MR_r3 = MR_r4;
	MR_np_call_localret_ent(check_hlds__mode_debug__mode_checkpoint_4_0,
		check_hlds__unique_modes__unique_modes_check_goal_scope_6_0_i23);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_scope_6_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__unique_modes__unique_modes_check_goal_4_0,
		check_hlds__unique_modes__unique_modes_check_goal_scope_6_0_i24);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_scope_6_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Integer) 1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Word) MR_string_const("scope", 5);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__mode_debug__mode_checkpoint_4_0,
		check_hlds__unique_modes__unique_modes_check_goal_scope_6_0_i25);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_scope_6_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(2);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	MR_decr_sp_and_return(6);
	}
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_scope_6_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("check_hlds.unique_modes", 23);
	MR_r2 = (MR_Word) MR_string_const("predicate \140check_hlds.unique_modes.unique_modes_check_goal_scope\'/6", 67);
	MR_r3 = (MR_Word) MR_string_const("from_ground_term_initial", 24);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_scope_6_0,85)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	if (MR_RTAGS_TESTR(MR_r1,3,5)) {
		MR_GOTO_LAB(check_hlds__unique_modes__unique_modes_check_goal_scope_6_0_i28);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = (MR_Word) MR_string_const("trace scope", 11);
	MR_r3 = MR_r4;
	MR_np_call_localret_ent(check_hlds__mode_debug__mode_checkpoint_4_0,
		check_hlds__unique_modes__unique_modes_check_goal_scope_6_0_i29);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_scope_6_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_instmap_2_0,
		check_hlds__unique_modes__unique_modes_check_goal_scope_6_0_i30);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_scope_6_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_nonlocals_1_0,
		check_hlds__unique_modes__unique_modes_check_goal_scope_6_0_i31);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_scope_6_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_tbmkword(0, 2);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_lock_vars_4_0,
		check_hlds__unique_modes__unique_modes_check_goal_scope_6_0_i32);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_scope_6_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__unique_modes__unique_modes_check_goal_4_0,
		check_hlds__unique_modes__unique_modes_check_goal_scope_6_0_i33);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_scope_6_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_tbmkword(0, 2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_unlock_vars_4_0,
		check_hlds__unique_modes__unique_modes_check_goal_scope_6_0_i34);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_scope_6_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_set_instmap_3_0,
		check_hlds__unique_modes__unique_modes_check_goal_scope_6_0_i35);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_scope_6_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_r2 = (MR_Word) MR_string_const("trace scope", 11);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__mode_debug__mode_checkpoint_4_0,
		check_hlds__unique_modes__unique_modes_check_goal_scope_6_0_i36);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_scope_6_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(2);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	MR_decr_sp_and_return(6);
	}
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_scope_6_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = (MR_Word) MR_string_const("scope", 5);
	MR_r3 = MR_r4;
	MR_np_call_localret_ent(check_hlds__mode_debug__mode_checkpoint_4_0,
		check_hlds__unique_modes__unique_modes_check_goal_scope_6_0_i38);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_scope_6_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__unique_modes__unique_modes_check_goal_4_0,
		check_hlds__unique_modes__unique_modes_check_goal_scope_6_0_i39);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_scope_6_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Integer) 1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Word) MR_string_const("scope", 5);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__mode_debug__mode_checkpoint_4_0,
		check_hlds__unique_modes__unique_modes_check_goal_scope_6_0_i40);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_scope_6_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(2);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	MR_decr_sp_and_return(6);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__unique_modes_module16)
	MR_init_entry1(check_hlds__unique_modes__unique_modes_check_goal_switch_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__unique_modes__unique_modes_check_goal_switch_7_0);
	MR_init_label8(check_hlds__unique_modes__unique_modes_check_goal_switch_7_0,2,5,6,4,8,9,10,12)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'unique_modes_check_goal_switch'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__unique_modes__unique_modes_check_goal_switch_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_sv(4) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = (MR_Word) MR_string_const("switch", 6);
	MR_r3 = MR_r5;
	MR_np_call_localret_ent(check_hlds__mode_debug__mode_checkpoint_4_0,
		check_hlds__unique_modes__unique_modes_check_goal_switch_7_0_i2);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_switch_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(4),0,0)) {
		MR_GOTO_LAB(check_hlds__unique_modes__unique_modes_check_goal_switch_7_0_i4);
	}
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(hlds__instmap__init_unreachable_1_0,
		check_hlds__unique_modes__unique_modes_check_goal_switch_7_0_i5);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_switch_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_set_instmap_3_0,
		check_hlds__unique_modes__unique_modes_check_goal_switch_7_0_i6);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_switch_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 3) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(2) = MR_tempr1;
	MR_r3 = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_r2 = (MR_Word) MR_string_const("switch", 6);
	}
	MR_np_call_localret_ent(check_hlds__mode_debug__mode_checkpoint_4_0,
		check_hlds__unique_modes__unique_modes_check_goal_switch_7_0_i12);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_switch_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_nonlocals_1_0,
		check_hlds__unique_modes__unique_modes_check_goal_switch_7_0_i8);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_switch_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(check_hlds__unique_modes__unique_modes_check_case_list_6_0,
		check_hlds__unique_modes__unique_modes_check_goal_switch_7_0_i9);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_switch_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_tempr2 = MR_r3;
	MR_r3 = (MR_Integer) 0;
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(hlds__instmap__instmap_merge_5_0,
		check_hlds__unique_modes__unique_modes_check_goal_switch_7_0_i10);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_switch_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 4);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_r2, 1) = MR_sv(2);
	MR_tfield(3, MR_r2, 2) = MR_sv(1);
	MR_tfield(3, MR_r2, 3) = MR_sv(4);
	MR_sv(2) = MR_r2;
	MR_r3 = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_r2 = (MR_Word) MR_string_const("switch", 6);
	MR_np_call_localret_ent(check_hlds__mode_debug__mode_checkpoint_4_0,
		check_hlds__unique_modes__unique_modes_check_goal_switch_7_0_i12);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_switch_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__unique_modes_module17)
	MR_init_entry1(check_hlds__unique_modes__unique_modes_check_goal_atomic_goal_11_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__unique_modes__unique_modes_check_goal_atomic_goal_11_0);
	MR_init_label10(check_hlds__unique_modes__unique_modes_check_goal_atomic_goal_11_0,2,5,4,8,9,11,12,13,16,18)
	MR_init_label10(check_hlds__unique_modes__unique_modes_check_goal_atomic_goal_11_0,19,20,15,21,22,10,23,24,25,26)
	MR_init_label10(check_hlds__unique_modes__unique_modes_check_goal_atomic_goal_11_0,27,28,29,30,31,32,33,34,38,41)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'unique_modes_check_goal_atomic_goal'/11 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__unique_modes__unique_modes_check_goal_atomic_goal_11_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(14);
	MR_sv(14) = (MR_Word) MR_succip;
	MR_sv(6) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(10) = MR_r5;
	MR_sv(1) = MR_r6;
	MR_sv(5) = MR_r7;
	MR_sv(7) = MR_r8;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = (MR_Word) MR_string_const("atomic_goal", 11);
	MR_r3 = MR_r9;
	MR_np_call_localret_ent(check_hlds__mode_debug__mode_checkpoint_4_0,
		check_hlds__unique_modes__unique_modes_check_goal_atomic_goal_11_0_i2);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_atomic_goal_11_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(check_hlds__unique_modes__unique_modes_check_goal_atomic_goal_11_0_i4);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__unique_modes__unique_modes_check_goal_4_0,
		check_hlds__unique_modes__unique_modes_check_goal_atomic_goal_11_0_i5);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_atomic_goal_11_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 7);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 2) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 3) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 4) = MR_r1;
	MR_tfield(1, MR_tempr1, 5) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(1, MR_tempr1, 6) = MR_sv(5);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_sv(6) = MR_tempr2;
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 7;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_r3 = MR_r2;
	MR_r1 = (MR_Integer) 1;
	MR_r2 = (MR_Word) MR_string_const("atomic_goal", 11);
	}
	MR_np_call_localret_ent(check_hlds__mode_debug__mode_checkpoint_4_0,
		check_hlds__unique_modes__unique_modes_check_goal_atomic_goal_11_0_i41);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_atomic_goal_11_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_nonlocals_1_0,
		check_hlds__unique_modes__unique_modes_check_goal_atomic_goal_11_0_i8);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_atomic_goal_11_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_determinism_1_0,
		check_hlds__unique_modes__unique_modes_check_goal_atomic_goal_11_0_i9);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_atomic_goal_11_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_np_call_localret_ent(parse_tree__prog_data__determinism_components_3_0,
		check_hlds__unique_modes__unique_modes_check_goal_atomic_goal_11_0_i11);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_atomic_goal_11_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 3 != (MR_Integer) MR_r2)) {
		MR_GOTO_LAB(check_hlds__unique_modes__unique_modes_check_goal_atomic_goal_11_0_i10);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_add_live_vars_3_0,
		check_hlds__unique_modes__unique_modes_check_goal_atomic_goal_11_0_i12);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_atomic_goal_11_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_instmap_2_0,
		check_hlds__unique_modes__unique_modes_check_goal_atomic_goal_11_0_i13);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_atomic_goal_11_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_np_call_localret_ent(hlds__instmap__instmap_is_reachable_1_0,
		check_hlds__unique_modes__unique_modes_check_goal_atomic_goal_11_0_i16);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_atomic_goal_11_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__unique_modes__unique_modes_check_goal_atomic_goal_11_0_i15);
	}
	MR_r1 = MR_sv(11);
	MR_np_call_localret_ent(hlds__instmap__instmap_vars_list_2_0,
		check_hlds__unique_modes__unique_modes_check_goal_atomic_goal_11_0_i18);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_atomic_goal_11_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(check_hlds__unique_modes__select_nondet_live_vars_3_0,
		check_hlds__unique_modes__unique_modes_check_goal_atomic_goal_11_0_i19);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_atomic_goal_11_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(check_hlds__unique_modes__make_var_list_mostly_uniq_3_0,
		check_hlds__unique_modes__unique_modes_check_goal_atomic_goal_11_0_i20);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_atomic_goal_11_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_r3;
	MR_GOTO_LAB(check_hlds__unique_modes__unique_modes_check_goal_atomic_goal_11_0_i21);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_atomic_goal_11_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(9);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_atomic_goal_11_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_remove_live_vars_3_0,
		check_hlds__unique_modes__unique_modes_check_goal_atomic_goal_11_0_i22);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_atomic_goal_11_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_sv(1);
	MR_sv(1) = MR_sv(10);
	MR_GOTO_LAB(check_hlds__unique_modes__unique_modes_check_goal_atomic_goal_11_0_i23);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_atomic_goal_11_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_sv(10);
	MR_sv(9) = MR_r2;
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_atomic_goal_11_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_instmap_2_0,
		check_hlds__unique_modes__unique_modes_check_goal_atomic_goal_11_0_i24);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_atomic_goal_11_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(10);
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__unique_modes__prepare_for_disjunct_5_0,
		check_hlds__unique_modes__unique_modes_check_goal_atomic_goal_11_0_i25);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_atomic_goal_11_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__unique_modes__unique_modes_check_goal_4_0,
		check_hlds__unique_modes__unique_modes_check_goal_atomic_goal_11_0_i26);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_atomic_goal_11_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(13) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_instmap_2_0,
		check_hlds__unique_modes__unique_modes_check_goal_atomic_goal_11_0_i27);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_atomic_goal_11_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(10);
	MR_sv(10) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(1);
	}
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_set_instmap_3_0,
		check_hlds__unique_modes__unique_modes_check_goal_atomic_goal_11_0_i28);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_atomic_goal_11_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r2 = MR_sv(9);
	MR_sv(9) = MR_tfield(1, MR_r2, 0);
	MR_sv(11) = MR_tfield(1, MR_r2, 1);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_instmap_2_0,
		check_hlds__unique_modes__unique_modes_check_goal_atomic_goal_11_0_i29);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_atomic_goal_11_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(check_hlds__unique_modes__prepare_for_disjunct_5_0,
		check_hlds__unique_modes__unique_modes_check_goal_atomic_goal_11_0_i30);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_atomic_goal_11_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__unique_modes__unique_modes_check_goal_4_0,
		check_hlds__unique_modes__unique_modes_check_goal_atomic_goal_11_0_i31);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_atomic_goal_11_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(9) = MR_r2;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_instmap_2_0,
		check_hlds__unique_modes__unique_modes_check_goal_atomic_goal_11_0_i32);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_atomic_goal_11_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(9);
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(12);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_set_instmap_3_0,
		check_hlds__unique_modes__unique_modes_check_goal_atomic_goal_11_0_i33);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_atomic_goal_11_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__unique_modes__unique_modes_check_disj_7_0,
		check_hlds__unique_modes__unique_modes_check_goal_atomic_goal_11_0_i34);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_atomic_goal_11_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(9);
	MR_tfield(1, MR_tempr2, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(10);
	MR_tfield(1, MR_r2, 1) = MR_tempr2;
	MR_sv(10) = MR_tempr1;
	MR_r1 = MR_sv(7);
	MR_tempr2 = MR_r3;
	MR_r3 = (MR_Integer) 0;
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(hlds__instmap__instmap_merge_5_0,
		check_hlds__unique_modes__unique_modes_check_goal_atomic_goal_11_0_i38);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_atomic_goal_11_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 7);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 2) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 3) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 4) = MR_sv(13);
	MR_tfield(1, MR_tempr1, 5) = MR_sv(10);
	MR_tfield(1, MR_tempr1, 6) = MR_sv(5);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_sv(6) = MR_tempr2;
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 7;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_r3 = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_r2 = (MR_Word) MR_string_const("atomic_goal", 11);
	}
	MR_np_call_localret_ent(check_hlds__mode_debug__mode_checkpoint_4_0,
		check_hlds__unique_modes__unique_modes_check_goal_atomic_goal_11_0_i41);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_atomic_goal_11_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(14);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__unique_modes_module18)
	MR_init_entry1(check_hlds__unique_modes__unique_modes_check_conj_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__unique_modes__unique_modes_check_conj_5_0);
	MR_init_label4(check_hlds__unique_modes__unique_modes_check_conj_5_0,29,3,6,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'unique_modes_check_conj'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__unique_modes__unique_modes_check_conj_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(check_hlds__unique_modes__unique_modes_check_conj_5_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(check_hlds__unique_modes__unique_modes_check_conj_5_0_i3);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r3;
	MR_decr_sp_and_return(3);
MR_def_label(check_hlds__unique_modes__unique_modes_check_conj_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_tfield(1, MR_r2, 1);
	MR_r5 = MR_tfield(1, MR_r2, 0);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(0, MR_r5, 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,2)) {
		MR_GOTO_LAB(check_hlds__unique_modes__unique_modes_check_conj_5_0_i4);
	}
	MR_tempr2 = MR_tfield(3, MR_tempr1, 1);
	if ((MR_r1 != MR_tempr2)) {
		MR_GOTO_LAB(check_hlds__unique_modes__unique_modes_check_conj_5_0_i4);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_tfield(3, MR_tempr1, 2);
	MR_r3 = MR_r4;
	}
	MR_np_call_localret_ent(list__append_3_1,
		check_hlds__unique_modes__unique_modes_check_conj_5_0_i6);
MR_def_label(check_hlds__unique_modes__unique_modes_check_conj_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(check_hlds__unique_modes__unique_modes_check_conj_5_0_i29);
	}
MR_def_label(check_hlds__unique_modes__unique_modes_check_conj_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r5;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(check_hlds__unique_modes__unique_modes_check_conj_2_6_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__instmap__instmap_is_unreachable_1_0);
MR_decl_entry(check_hlds__modecheck_util__mode_info_remove_goals_live_vars_3_0);

MR_BEGIN_MODULE(check_hlds__unique_modes_module19)
	MR_init_entry1(check_hlds__unique_modes__unique_modes_check_conj_2_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__unique_modes__unique_modes_check_conj_2_6_0);
	MR_init_label8(check_hlds__unique_modes__unique_modes_check_conj_2_6_0,2,3,4,5,8,10,7,12)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'unique_modes_check_conj_2'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__unique_modes__unique_modes_check_conj_2_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_get_nonlocals_1_0,
		check_hlds__unique_modes__unique_modes_check_conj_2_6_0_i2);
MR_def_label(check_hlds__unique_modes__unique_modes_check_conj_2_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_remove_live_vars_3_0,
		check_hlds__unique_modes__unique_modes_check_conj_2_6_0_i3);
MR_def_label(check_hlds__unique_modes__unique_modes_check_conj_2_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__unique_modes__unique_modes_check_goal_4_0,
		check_hlds__unique_modes__unique_modes_check_conj_2_6_0_i4);
MR_def_label(check_hlds__unique_modes__unique_modes_check_conj_2_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_instmap_2_0,
		check_hlds__unique_modes__unique_modes_check_conj_2_6_0_i5);
MR_def_label(check_hlds__unique_modes__unique_modes_check_conj_2_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__instmap__instmap_is_unreachable_1_0,
		check_hlds__unique_modes__unique_modes_check_conj_2_6_0_i8);
MR_def_label(check_hlds__unique_modes__unique_modes_check_conj_2_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__unique_modes__unique_modes_check_conj_2_6_0_i7);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(check_hlds__modecheck_util__mode_info_remove_goals_live_vars_3_0,
		check_hlds__unique_modes__unique_modes_check_conj_2_6_0_i10);
MR_def_label(check_hlds__unique_modes__unique_modes_check_conj_2_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	MR_decr_sp_and_return(5);
	}
MR_def_label(check_hlds__unique_modes__unique_modes_check_conj_2_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(check_hlds__unique_modes__unique_modes_check_conj_5_0,
		check_hlds__unique_modes__unique_modes_check_conj_2_6_0_i12);
MR_def_label(check_hlds__unique_modes__unique_modes_check_conj_2_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__unique_modes_module20)
	MR_init_entry1(check_hlds__unique_modes__unique_modes_check_disj_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__unique_modes__unique_modes_check_disj_7_0);
	MR_init_label7(check_hlds__unique_modes__unique_modes_check_disj_7_0,22,4,5,6,7,8,9)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'unique_modes_check_disj'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__unique_modes__unique_modes_check_disj_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__unique_modes__unique_modes_check_disj_7_0_i22);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_r4;
	MR_proceed();
MR_def_label(check_hlds__unique_modes__unique_modes_check_disj_7_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(4) = MR_tempr1;
	MR_sv(6) = MR_tfield(1, MR_r1, 0);
	MR_sv(3) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_instmap_2_0,
		check_hlds__unique_modes__unique_modes_check_disj_7_0_i4);
MR_def_label(check_hlds__unique_modes__unique_modes_check_disj_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(4);
	MR_np_call_localret_ent(check_hlds__unique_modes__prepare_for_disjunct_5_0,
		check_hlds__unique_modes__unique_modes_check_disj_7_0_i5);
MR_def_label(check_hlds__unique_modes__unique_modes_check_disj_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__unique_modes__unique_modes_check_goal_4_0,
		check_hlds__unique_modes__unique_modes_check_disj_7_0_i6);
MR_def_label(check_hlds__unique_modes__unique_modes_check_disj_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_instmap_2_0,
		check_hlds__unique_modes__unique_modes_check_disj_7_0_i7);
MR_def_label(check_hlds__unique_modes__unique_modes_check_disj_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_set_instmap_3_0,
		check_hlds__unique_modes__unique_modes_check_disj_7_0_i8);
MR_def_label(check_hlds__unique_modes__unique_modes_check_disj_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tempr1;
	}
	MR_np_localcall_lab(check_hlds__unique_modes__unique_modes_check_disj_7_0,
		check_hlds__unique_modes__unique_modes_check_disj_7_0_i9);
MR_def_label(check_hlds__unique_modes__unique_modes_check_disj_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(6);
	MR_tfield(1, MR_tempr2, 1) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	MR_decr_sp_and_return(7);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(check_hlds__modecheck_util__modecheck_functors_test_5_0);
MR_decl_entry(check_hlds__mode_util__fixup_instmap_switch_var_5_0);

MR_BEGIN_MODULE(check_hlds__unique_modes_module21)
	MR_init_entry1(check_hlds__unique_modes__unique_modes_check_case_list_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__unique_modes__unique_modes_check_case_list_6_0);
	MR_init_label10(check_hlds__unique_modes__unique_modes_check_case_list_6_0,37,4,5,6,9,11,8,12,13,14)
	MR_init_label3(check_hlds__unique_modes__unique_modes_check_case_list_6_0,15,17,18)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'unique_modes_check_case_list'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__unique_modes__unique_modes_check_case_list_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__unique_modes__unique_modes_check_case_list_6_0_i37);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(check_hlds__unique_modes__unique_modes_check_case_list_6_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_sv(5) = MR_tempr2;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(4) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(6) = MR_tfield(0, MR_tempr1, 2);
	MR_r1 = MR_tempr2;
	}
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_instmap_2_0,
		check_hlds__unique_modes__unique_modes_check_case_list_6_0_i4);
MR_def_label(check_hlds__unique_modes__unique_modes_check_case_list_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__modecheck_util__modecheck_functors_test_5_0,
		check_hlds__unique_modes__unique_modes_check_case_list_6_0_i5);
MR_def_label(check_hlds__unique_modes__unique_modes_check_case_list_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_instmap_2_0,
		check_hlds__unique_modes__unique_modes_check_case_list_6_0_i6);
MR_def_label(check_hlds__unique_modes__unique_modes_check_case_list_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__instmap__instmap_is_reachable_1_0,
		check_hlds__unique_modes__unique_modes_check_case_list_6_0_i9);
MR_def_label(check_hlds__unique_modes__unique_modes_check_case_list_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__unique_modes__unique_modes_check_case_list_6_0_i8);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(check_hlds__unique_modes__unique_modes_check_goal_4_0,
		check_hlds__unique_modes__unique_modes_check_case_list_6_0_i11);
MR_def_label(check_hlds__unique_modes__unique_modes_check_case_list_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_r2;
	MR_GOTO_LAB(check_hlds__unique_modes__unique_modes_check_case_list_6_0_i13);
MR_def_label(check_hlds__unique_modes__unique_modes_check_case_list_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__hlds__hlds_goal__true_goal_0_0,
		check_hlds__unique_modes__unique_modes_check_case_list_6_0_i12);
MR_def_label(check_hlds__unique_modes__unique_modes_check_case_list_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(7);
MR_def_label(check_hlds__unique_modes__unique_modes_check_case_list_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_instmap_2_0,
		check_hlds__unique_modes__unique_modes_check_case_list_6_0_i14);
MR_def_label(check_hlds__unique_modes__unique_modes_check_case_list_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__mode_util__fixup_instmap_switch_var_5_0,
		check_hlds__unique_modes__unique_modes_check_case_list_6_0_i15);
MR_def_label(check_hlds__unique_modes__unique_modes_check_case_list_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_tempr2 = MR_sv(5);
	MR_sv(5) = MR_tempr1;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_sv(7);
	}
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_set_instmap_3_0,
		check_hlds__unique_modes__unique_modes_check_case_list_6_0_i17);
MR_def_label(check_hlds__unique_modes__unique_modes_check_case_list_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_localcall_lab(check_hlds__unique_modes__unique_modes_check_case_list_6_0,
		check_hlds__unique_modes__unique_modes_check_case_list_6_0_i18);
MR_def_label(check_hlds__unique_modes__unique_modes_check_case_list_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(6);
	MR_tfield(1, MR_tempr2, 1) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	MR_decr_sp_and_return(8);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__check_hlds__unique_modes_maybe_bunch_0(void)
{
	check_hlds__unique_modes_module0();
	check_hlds__unique_modes_module1();
	check_hlds__unique_modes_module2();
	check_hlds__unique_modes_module3();
	check_hlds__unique_modes_module4();
	check_hlds__unique_modes_module5();
	check_hlds__unique_modes_module6();
	check_hlds__unique_modes_module7();
	check_hlds__unique_modes_module8();
	check_hlds__unique_modes_module9();
	check_hlds__unique_modes_module10();
	check_hlds__unique_modes_module11();
	check_hlds__unique_modes_module12();
	check_hlds__unique_modes_module13();
	check_hlds__unique_modes_module14();
	check_hlds__unique_modes_module15();
	check_hlds__unique_modes_module16();
	check_hlds__unique_modes_module17();
	check_hlds__unique_modes_module18();
	check_hlds__unique_modes_module19();
	check_hlds__unique_modes_module20();
	check_hlds__unique_modes_module21();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__check_hlds__unique_modes__init(void);
void mercury__check_hlds__unique_modes__init_type_tables(void);
void mercury__check_hlds__unique_modes__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__check_hlds__unique_modes__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__check_hlds__unique_modes__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__check_hlds__unique_modes__init_threadscope_string_table(void);
#endif

void mercury__check_hlds__unique_modes__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__check_hlds__unique_modes_maybe_bunch_0();
	mercury__check_hlds__unique_modes__init_debugger();
}

void mercury__check_hlds__unique_modes__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}


void mercury__check_hlds__unique_modes__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__check_hlds__unique_modes__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__check_hlds__unique_modes);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__check_hlds__unique_modes__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__check_hlds__unique_modes__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
