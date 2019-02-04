/*
** Automatically generated from `unique_modes.m'
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
INIT mercury__check_hlds__unique_modes__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 530 "../library/io.int"
#include "io.mh"

#line 27 "check_hlds.unique_modes.c"
#line 538 "../library/io.int"
#include "string.mh"

#line 31 "check_hlds.unique_modes.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 35 "check_hlds.unique_modes.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 39 "check_hlds.unique_modes.c"
#line 17 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 43 "check_hlds.unique_modes.c"
#line 30 "../library/array.int2"
#include "array.mh"

#line 47 "check_hlds.unique_modes.c"
#line 48 "check_hlds.unique_modes.c"
#include "check_hlds.unique_modes.mh"

#line 51 "check_hlds.unique_modes.c"
#line 52 "check_hlds.unique_modes.c"
#ifndef CHECK_HLDS__UNIQUE_MODES_DECL_GUARD
#define CHECK_HLDS__UNIQUE_MODES_DECL_GUARD

#line 56 "check_hlds.unique_modes.c"
#line 57 "check_hlds.unique_modes.c"

#endif
#line 60 "check_hlds.unique_modes.c"

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
MR_decl_label5(check_hlds__unique_modes__make_all_nondet_live_vars_mostly_uniq_2_0, 2,5,7,8,4)
MR_decl_label8(check_hlds__unique_modes__make_var_list_mostly_uniq_3_0, 62,4,5,7,9,10,12,13)
MR_decl_label8(check_hlds__unique_modes__make_var_list_mostly_uniq_3_0, 17,19,16,23,24,25,26,6)
MR_decl_label1(check_hlds__unique_modes__make_var_list_mostly_uniq_3_0, 3)
MR_decl_label8(check_hlds__unique_modes__prepare_for_disjunct_5_0, 5,6,7,9,10,13,15,16)
MR_decl_label3(check_hlds__unique_modes__prepare_for_disjunct_5_0, 17,12,2)
MR_decl_label8(check_hlds__unique_modes__select_changed_inst_vars_4_0, 38,4,5,6,7,8,10,12)
MR_decl_label4(check_hlds__unique_modes__select_changed_inst_vars_4_0, 16,18,9,3)
MR_decl_label5(check_hlds__unique_modes__select_live_vars_3_0, 18,5,6,4,3)
MR_decl_label5(check_hlds__unique_modes__select_nondet_live_vars_3_0, 18,5,6,4,3)
MR_decl_label8(check_hlds__unique_modes__unique_modes_check_call_7_0, 2,3,4,5,6,7,8,9)
MR_decl_label8(check_hlds__unique_modes__unique_modes_check_call_7_0, 10,11,12,14,15,16,17,18)
MR_decl_label8(check_hlds__unique_modes__unique_modes_check_call_7_0, 13,20,21,22,23,27,28,25)
MR_decl_label5(check_hlds__unique_modes__unique_modes_check_call_7_0, 29,30,31,33,32)
MR_decl_label8(check_hlds__unique_modes__unique_modes_check_call_modes_7_0, 2,3,4,5,6,7,9,8)
MR_decl_label8(check_hlds__unique_modes__unique_modes_check_call_modes_7_0, 13,17,18,21,23,24,16,15)
MR_decl_label1(check_hlds__unique_modes__unique_modes_check_call_modes_7_0, 28)
MR_decl_label8(check_hlds__unique_modes__unique_modes_check_case_list_8_0, 4,5,6,9,11,8,12,13)
MR_decl_label5(check_hlds__unique_modes__unique_modes_check_case_list_8_0, 14,15,16,17,3)
MR_decl_label4(check_hlds__unique_modes__unique_modes_check_conj_7_0, 23,3,6,4)
MR_decl_label8(check_hlds__unique_modes__unique_modes_check_conj_2_8_0, 2,3,4,5,8,10,7,11)
MR_decl_label7(check_hlds__unique_modes__unique_modes_check_disj_9_0, 4,5,6,7,8,9,3)
MR_decl_label8(check_hlds__unique_modes__unique_modes_check_goal_6_0, 2,3,6,5,9,10,12,11)
MR_decl_label8(check_hlds__unique_modes__unique_modes_check_goal_6_0, 15,16,17,18,20,19,21,22)
MR_decl_label5(check_hlds__unique_modes__unique_modes_check_goal_6_0, 23,24,25,26,27)
MR_decl_label8(check_hlds__unique_modes__unique_modes_check_goal_2_7_0, 4,5,6,7,8,10,11,12)
MR_decl_label8(check_hlds__unique_modes__unique_modes_check_goal_2_7_0, 13,14,15,16,17,19,20,21)
MR_decl_label8(check_hlds__unique_modes__unique_modes_check_goal_2_7_0, 22,24,23,25,31,32,33,35)
MR_decl_label8(check_hlds__unique_modes__unique_modes_check_goal_2_7_0, 36,37,38,39,40,41,42,44)
MR_decl_label8(check_hlds__unique_modes__unique_modes_check_goal_2_7_0, 45,47,48,49,51,52,55,56)
MR_decl_label8(check_hlds__unique_modes__unique_modes_check_goal_2_7_0, 54,57,58,60,61,62,63,59)
MR_decl_label8(check_hlds__unique_modes__unique_modes_check_goal_2_7_0, 64,65,66,68,69,72,73,71)
MR_decl_label8(check_hlds__unique_modes__unique_modes_check_goal_2_7_0, 74,75,76,78,79,80,81,82)
MR_decl_label8(check_hlds__unique_modes__unique_modes_check_goal_2_7_0, 83,84,85,86,87,88,89,90)
MR_decl_label8(check_hlds__unique_modes__unique_modes_check_goal_2_7_0, 91,92,94,95,98,99,100,101)
MR_decl_label8(check_hlds__unique_modes__unique_modes_check_goal_2_7_0, 96,102,105,106,107,108,109,110)
MR_decl_label8(check_hlds__unique_modes__unique_modes_check_goal_2_7_0, 111,112,113,114,115,116,117,118)
MR_decl_label8(check_hlds__unique_modes__unique_modes_check_goal_2_7_0, 119,120,121,122,123,124,127,129)
MR_decl_label8(check_hlds__unique_modes__unique_modes_check_goal_2_7_0, 130,125,131,132,133,134,135,136)
MR_decl_label4(check_hlds__unique_modes__unique_modes_check_goal_2_7_0, 137,138,139,140)
MR_decl_label4(check_hlds__unique_modes__unique_modes_check_proc_7_0, 2,3,4,5)
MR_def_extern_entry(check_hlds__unique_modes__unique_modes_check_module_4_0)
MR_def_extern_entry(check_hlds__unique_modes__unique_modes_check_proc_7_0)
MR_decl_static(check_hlds__unique_modes__select_nondet_live_vars_3_0)
MR_decl_static(check_hlds__unique_modes__make_var_list_mostly_uniq_3_0)
MR_def_extern_entry(check_hlds__unique_modes__make_all_nondet_live_vars_mostly_uniq_2_0)
MR_decl_static(check_hlds__unique_modes__select_live_vars_3_0)
MR_decl_static(check_hlds__unique_modes__select_changed_inst_vars_4_0)
MR_decl_static(fn__check_hlds__unique_modes__this_file_0_0)
MR_decl_static(check_hlds__unique_modes__unique_modes_check_call_modes_7_0)
MR_decl_static(check_hlds__unique_modes__unique_modes_check_call_7_0)
MR_def_extern_entry(check_hlds__unique_modes__prepare_for_disjunct_5_0)
MR_def_extern_entry(check_hlds__unique_modes__unique_modes_check_goal_6_0)
MR_decl_static(check_hlds__unique_modes__unique_modes_check_goal_2_7_0)
MR_decl_static(check_hlds__unique_modes__unique_modes_check_conj_7_0)
MR_decl_static(check_hlds__unique_modes__unique_modes_check_conj_2_8_0)
MR_decl_static(check_hlds__unique_modes__unique_modes_check_disj_9_0)
MR_decl_static(check_hlds__unique_modes__unique_modes_check_case_list_8_0)

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
mercury_data__closure_layout__check_hlds__unique_modes__unique_modes_check_goal_2_7_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_foreign_arg_0;
static const struct mercury_type_1 mercury_common_1[1] =
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__unique_modes__unique_modes_check_goal_2_7_0_1,
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
2,
MR_tbmkword(0, 0)
},
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__unique_modes__unique_modes_check_goal_2_7_0_1 = {
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
502,
"d10;c17;"
};

MR_decl_entry(check_hlds__modes__check_pred_modes_7_0);

MR_BEGIN_MODULE(check_hlds__unique_modes_module0)
	MR_init_entry1(check_hlds__unique_modes__unique_modes_check_module_4_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__unique_modes__unique_modes_check_module_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_r2 = (MR_Integer) 0;
	MR_np_tailcall_ent(check_hlds__modes__check_pred_modes_7_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(check_hlds__modes__modecheck_proc_general_10_0);
MR_decl_entry(hlds__hlds_module__module_info_get_globals_2_0);
MR_decl_entry(parse_tree__error_util__write_error_specs_8_0);
MR_decl_entry(hlds__hlds_module__module_info_incr_num_errors_3_0);

MR_BEGIN_MODULE(check_hlds__unique_modes_module1)
	MR_init_entry1(check_hlds__unique_modes__unique_modes_check_proc_7_0);
	MR_init_label4(check_hlds__unique_modes__unique_modes_check_proc_7_0,2,3,4,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__unique_modes__unique_modes_check_proc_7_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_r5 = MR_r3;
	MR_r3 = (MR_Integer) 1;
	MR_r4 = (MR_Integer) 0;
	MR_np_call_localret_ent(check_hlds__modes__modecheck_proc_general_10_0,
		check_hlds__unique_modes__unique_modes_check_proc_7_0_i2);
MR_def_label(check_hlds__unique_modes__unique_modes_check_proc_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		check_hlds__unique_modes__unique_modes_check_proc_7_0_i3);
MR_def_label(check_hlds__unique_modes__unique_modes_check_proc_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = (MR_Integer) 0;
	MR_np_call_localret_ent(parse_tree__error_util__write_error_specs_8_0,
		check_hlds__unique_modes__unique_modes_check_proc_7_0_i4);
MR_def_label(check_hlds__unique_modes__unique_modes_check_proc_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_incr_num_errors_3_0,
		check_hlds__unique_modes__unique_modes_check_proc_7_0_i5);
MR_def_label(check_hlds__unique_modes__unique_modes_check_proc_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(check_hlds__mode_info__mode_info_var_is_nondet_live_3_0);

MR_BEGIN_MODULE(check_hlds__unique_modes_module2)
	MR_init_entry1(check_hlds__unique_modes__select_nondet_live_vars_3_0);
	MR_init_label5(check_hlds__unique_modes__select_nondet_live_vars_3_0,18,5,6,4,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__unique_modes__select_nondet_live_vars_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(check_hlds__unique_modes__select_nondet_live_vars_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__unique_modes__select_nondet_live_vars_3_0_i3);
	}
	MR_sv(3) = MR_ctfield(1, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_ctfield(1, MR_r1, 0);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	}
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
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
MR_def_label(check_hlds__unique_modes__select_nondet_live_vars_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(check_hlds__unique_modes__select_nondet_live_vars_3_0_i18);
MR_def_label(check_hlds__unique_modes__select_nondet_live_vars_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(check_hlds__mode_info__mode_info_get_instmap_2_0);
MR_decl_entry(check_hlds__mode_info__mode_info_get_module_info_2_0);
MR_decl_entry(hlds__instmap__is_reachable_1_0);
MR_decl_entry(hlds__instmap__vars_list_2_0);
MR_decl_entry(f_108_105_115_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0);
MR_decl_entry(hlds__instmap__lookup_var_3_0);
MR_decl_entry(check_hlds__inst_match__inst_expand_3_0);
MR_decl_entry(check_hlds__inst_util__make_mostly_uniq_inst_4_0);
MR_decl_entry(check_hlds__mode_info__mode_info_set_module_info_3_0);
MR_decl_entry(hlds__instmap__set_4_0);
MR_decl_entry(check_hlds__mode_info__mode_info_set_instmap_3_0);

MR_BEGIN_MODULE(check_hlds__unique_modes_module3)
	MR_init_entry1(check_hlds__unique_modes__make_var_list_mostly_uniq_3_0);
	MR_init_label8(check_hlds__unique_modes__make_var_list_mostly_uniq_3_0,62,4,5,7,9,10,12,13)
	MR_init_label8(check_hlds__unique_modes__make_var_list_mostly_uniq_3_0,17,19,16,23,24,25,26,6)
	MR_init_label1(check_hlds__unique_modes__make_var_list_mostly_uniq_3_0,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__unique_modes__make_var_list_mostly_uniq_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
MR_def_label(check_hlds__unique_modes__make_var_list_mostly_uniq_3_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__unique_modes__make_var_list_mostly_uniq_3_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_ctfield(1, MR_r1, 0);
	MR_sv(3) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_instmap_2_0,
		check_hlds__unique_modes__make_var_list_mostly_uniq_3_0_i4);
MR_def_label(check_hlds__unique_modes__make_var_list_mostly_uniq_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_module_info_2_0,
		check_hlds__unique_modes__make_var_list_mostly_uniq_3_0_i5);
MR_def_label(check_hlds__unique_modes__make_var_list_mostly_uniq_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(hlds__instmap__is_reachable_1_0,
		check_hlds__unique_modes__make_var_list_mostly_uniq_3_0_i7);
MR_def_label(check_hlds__unique_modes__make_var_list_mostly_uniq_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__unique_modes__make_var_list_mostly_uniq_3_0_i6);
	}
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(hlds__instmap__vars_list_2_0,
		check_hlds__unique_modes__make_var_list_mostly_uniq_3_0_i9);
MR_def_label(check_hlds__unique_modes__make_var_list_mostly_uniq_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(f_108_105_115_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		check_hlds__unique_modes__make_var_list_mostly_uniq_3_0_i10);
MR_def_label(check_hlds__unique_modes__make_var_list_mostly_uniq_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__unique_modes__make_var_list_mostly_uniq_3_0_i6);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(hlds__instmap__lookup_var_3_0,
		check_hlds__unique_modes__make_var_list_mostly_uniq_3_0_i12);
MR_def_label(check_hlds__unique_modes__make_var_list_mostly_uniq_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(check_hlds__inst_match__inst_expand_3_0,
		check_hlds__unique_modes__make_var_list_mostly_uniq_3_0_i13);
MR_def_label(check_hlds__unique_modes__make_var_list_mostly_uniq_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,3)) {
		MR_GOTO_LAB(check_hlds__unique_modes__make_var_list_mostly_uniq_3_0_i16);
	}
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r1, 0),
		MR_LABEL_AP(check_hlds__unique_modes__make_var_list_mostly_uniq_3_0_i17) MR_AND
		MR_LABEL_AP(check_hlds__unique_modes__make_var_list_mostly_uniq_3_0_i19) MR_AND
		MR_LABEL_AP(check_hlds__unique_modes__make_var_list_mostly_uniq_3_0_i6) MR_AND
		MR_LABEL_AP(check_hlds__unique_modes__make_var_list_mostly_uniq_3_0_i6) MR_AND
		MR_LABEL_AP(check_hlds__unique_modes__make_var_list_mostly_uniq_3_0_i6) MR_AND
		MR_LABEL_AP(check_hlds__unique_modes__make_var_list_mostly_uniq_3_0_i6));
MR_def_label(check_hlds__unique_modes__make_var_list_mostly_uniq_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(3, MR_r1, 1);
	if (MR_INT_NE(MR_tempr1,1)) {
		MR_GOTO_LAB(check_hlds__unique_modes__make_var_list_mostly_uniq_3_0_i6);
	}
	MR_r2 = MR_sv(5);
	MR_r1 = MR_sv(6);
	}
	MR_np_call_localret_ent(check_hlds__inst_util__make_mostly_uniq_inst_4_0,
		check_hlds__unique_modes__make_var_list_mostly_uniq_3_0_i23);
MR_def_label(check_hlds__unique_modes__make_var_list_mostly_uniq_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(3, MR_r1, 1);
	if (MR_INT_NE(MR_tempr1,1)) {
		MR_GOTO_LAB(check_hlds__unique_modes__make_var_list_mostly_uniq_3_0_i6);
	}
	MR_r2 = MR_sv(5);
	MR_r1 = MR_sv(6);
	}
	MR_np_call_localret_ent(check_hlds__inst_util__make_mostly_uniq_inst_4_0,
		check_hlds__unique_modes__make_var_list_mostly_uniq_3_0_i23);
MR_def_label(check_hlds__unique_modes__make_var_list_mostly_uniq_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(check_hlds__unique_modes__make_var_list_mostly_uniq_3_0_i6);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	if (MR_INT_NE(MR_tempr1,1)) {
		MR_GOTO_LAB(check_hlds__unique_modes__make_var_list_mostly_uniq_3_0_i6);
	}
	MR_r2 = MR_sv(5);
	MR_r1 = MR_sv(6);
	}
	MR_np_call_localret_ent(check_hlds__inst_util__make_mostly_uniq_inst_4_0,
		check_hlds__unique_modes__make_var_list_mostly_uniq_3_0_i23);
MR_def_label(check_hlds__unique_modes__make_var_list_mostly_uniq_3_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_set_module_info_3_0,
		check_hlds__unique_modes__make_var_list_mostly_uniq_3_0_i24);
MR_def_label(check_hlds__unique_modes__make_var_list_mostly_uniq_3_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(hlds__instmap__set_4_0,
		check_hlds__unique_modes__make_var_list_mostly_uniq_3_0_i25);
MR_def_label(check_hlds__unique_modes__make_var_list_mostly_uniq_3_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_set_instmap_3_0,
		check_hlds__unique_modes__make_var_list_mostly_uniq_3_0_i26);
MR_def_label(check_hlds__unique_modes__make_var_list_mostly_uniq_3_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(check_hlds__unique_modes__make_var_list_mostly_uniq_3_0_i62);
MR_def_label(check_hlds__unique_modes__make_var_list_mostly_uniq_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(check_hlds__unique_modes__make_var_list_mostly_uniq_3_0_i62);
MR_def_label(check_hlds__unique_modes__make_var_list_mostly_uniq_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__unique_modes_module4)
	MR_init_entry1(check_hlds__unique_modes__make_all_nondet_live_vars_mostly_uniq_2_0);
	MR_init_label5(check_hlds__unique_modes__make_all_nondet_live_vars_mostly_uniq_2_0,2,5,7,8,4)
MR_BEGIN_CODE

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
	MR_np_call_localret_ent(hlds__instmap__is_reachable_1_0,
		check_hlds__unique_modes__make_all_nondet_live_vars_mostly_uniq_2_0_i5);
MR_def_label(check_hlds__unique_modes__make_all_nondet_live_vars_mostly_uniq_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__unique_modes__make_all_nondet_live_vars_mostly_uniq_2_0_i4);
	}
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__instmap__vars_list_2_0,
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

MR_decl_entry(check_hlds__mode_info__mode_info_var_is_live_3_0);

MR_BEGIN_MODULE(check_hlds__unique_modes_module5)
	MR_init_entry1(check_hlds__unique_modes__select_live_vars_3_0);
	MR_init_label5(check_hlds__unique_modes__select_live_vars_3_0,18,5,6,4,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__unique_modes__select_live_vars_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(check_hlds__unique_modes__select_live_vars_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__unique_modes__select_live_vars_3_0_i3);
	}
	MR_sv(3) = MR_ctfield(1, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_ctfield(1, MR_r1, 0);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	}
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
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
MR_def_label(check_hlds__unique_modes__select_live_vars_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(check_hlds__unique_modes__select_live_vars_3_0_i18);
MR_def_label(check_hlds__unique_modes__select_live_vars_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(4);
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
MR_decl_entry(check_hlds__inst_match__inst_matches_final_4_0);

MR_BEGIN_MODULE(check_hlds__unique_modes_module6)
	MR_init_entry1(check_hlds__unique_modes__select_changed_inst_vars_4_0);
	MR_init_label8(check_hlds__unique_modes__select_changed_inst_vars_4_0,38,4,5,6,7,8,10,12)
	MR_init_label4(check_hlds__unique_modes__select_changed_inst_vars_4_0,16,18,9,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__unique_modes__select_changed_inst_vars_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
MR_def_label(check_hlds__unique_modes__select_changed_inst_vars_4_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__unique_modes__select_changed_inst_vars_4_0_i3);
	}
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_ctfield(1, MR_r1, 0);
	MR_sv(4) = MR_ctfield(1, MR_r1, 1);
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
	MR_np_call_localret_ent(hlds__instmap__lookup_var_3_0,
		check_hlds__unique_modes__select_changed_inst_vars_4_0_i6);
MR_def_label(check_hlds__unique_modes__select_changed_inst_vars_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_var_types_2_0,
		check_hlds__unique_modes__select_changed_inst_vars_4_0_i7);
MR_def_label(check_hlds__unique_modes__select_changed_inst_vars_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r5 = MR_sv(3);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		check_hlds__unique_modes__select_changed_inst_vars_4_0_i8);
MR_def_label(check_hlds__unique_modes__select_changed_inst_vars_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__instmap__instmap_delta_is_reachable_1_0,
		check_hlds__unique_modes__select_changed_inst_vars_4_0_i10);
MR_def_label(check_hlds__unique_modes__select_changed_inst_vars_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__unique_modes__select_changed_inst_vars_4_0_i9);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(hlds__instmap__instmap_delta_search_var_3_0,
		check_hlds__unique_modes__select_changed_inst_vars_4_0_i12);
MR_def_label(check_hlds__unique_modes__select_changed_inst_vars_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__unique_modes__select_changed_inst_vars_4_0_i9);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(5);
	MR_np_call_localret_ent(check_hlds__inst_match__inst_matches_final_4_0,
		check_hlds__unique_modes__select_changed_inst_vars_4_0_i16);
MR_def_label(check_hlds__unique_modes__select_changed_inst_vars_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(check_hlds__unique_modes__select_changed_inst_vars_4_0_i9);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_np_localcall_lab(check_hlds__unique_modes__select_changed_inst_vars_4_0,
		check_hlds__unique_modes__select_changed_inst_vars_4_0_i18);
MR_def_label(check_hlds__unique_modes__select_changed_inst_vars_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(8);
	}
MR_def_label(check_hlds__unique_modes__select_changed_inst_vars_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(check_hlds__unique_modes__select_changed_inst_vars_4_0_i38);
MR_def_label(check_hlds__unique_modes__select_changed_inst_vars_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__unique_modes_module7)
	MR_init_entry1(fn__check_hlds__unique_modes__this_file_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__check_hlds__unique_modes__this_file_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("unique_modes.m", 14);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(check_hlds__mode_util__mode_list_get_initial_insts_3_0);
MR_decl_entry(check_hlds__modes__modecheck_var_has_inst_list_no_exact_match_6_0);
MR_decl_entry(check_hlds__mode_util__mode_list_get_final_insts_3_0);
MR_decl_entry(parse_tree__prog_mode__inst_list_apply_substitution_3_0);
MR_decl_entry(check_hlds__modes__modecheck_set_var_inst_list_8_0);
MR_decl_entry(__Unify___list__list_1_0);
MR_decl_entry(libs__compiler_util__unexpected_2_0);
MR_decl_entry(parse_tree__prog_data__determinism_components_3_0);
MR_decl_entry(hlds__instmap__init_unreachable_1_0);

MR_BEGIN_MODULE(check_hlds__unique_modes_module8)
	MR_init_entry1(check_hlds__unique_modes__unique_modes_check_call_modes_7_0);
	MR_init_label8(check_hlds__unique_modes__unique_modes_check_call_modes_7_0,2,3,4,5,6,7,9,8)
	MR_init_label8(check_hlds__unique_modes__unique_modes_check_call_modes_7_0,13,17,18,21,23,24,16,15)
	MR_init_label1(check_hlds__unique_modes__unique_modes_check_call_modes_7_0,28)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__unique_modes__unique_modes_check_call_modes_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r6;
	MR_sv(7) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_module_info_2_0,
		check_hlds__unique_modes__unique_modes_check_call_modes_7_0_i2);
MR_def_label(check_hlds__unique_modes__unique_modes_check_call_modes_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(check_hlds__mode_util__mode_list_get_initial_insts_3_0,
		check_hlds__unique_modes__unique_modes_check_call_modes_7_0_i3);
MR_def_label(check_hlds__unique_modes__unique_modes_check_call_modes_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(check_hlds__modes__modecheck_var_has_inst_list_no_exact_match_6_0,
		check_hlds__unique_modes__unique_modes_check_call_modes_7_0_i4);
MR_def_label(check_hlds__unique_modes__unique_modes_check_call_modes_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_sv(6) = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__mode_util__mode_list_get_final_insts_3_0,
		check_hlds__unique_modes__unique_modes_check_call_modes_7_0_i5);
MR_def_label(check_hlds__unique_modes__unique_modes_check_call_modes_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(parse_tree__prog_mode__inst_list_apply_substitution_3_0,
		check_hlds__unique_modes__unique_modes_check_call_modes_7_0_i6);
MR_def_label(check_hlds__unique_modes__unique_modes_check_call_modes_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(7);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(6);
	MR_np_call_localret_ent(check_hlds__modes__modecheck_set_var_inst_list_8_0,
		check_hlds__unique_modes__unique_modes_check_call_modes_7_0_i7);
MR_def_label(check_hlds__unique_modes__unique_modes_check_call_modes_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r3;
	MR_r3 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		check_hlds__unique_modes__unique_modes_check_call_modes_7_0_i9);
MR_def_label(check_hlds__unique_modes__unique_modes_check_call_modes_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__unique_modes__unique_modes_check_call_modes_7_0_i8);
	}
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(check_hlds__unique_modes__unique_modes_check_call_modes_7_0_i8);
	}
	MR_r1 = MR_sv(4);
	MR_GOTO_LAB(check_hlds__unique_modes__unique_modes_check_call_modes_7_0_i13);
MR_def_label(check_hlds__unique_modes__unique_modes_check_call_modes_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("unique_modes.m", 14);
	MR_r2 = (MR_Word) MR_string_const("call to implied mode?", 21);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		check_hlds__unique_modes__unique_modes_check_call_modes_7_0_i13);
MR_def_label(check_hlds__unique_modes__unique_modes_check_call_modes_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(5),0)) {
		MR_GOTO_LAB(check_hlds__unique_modes__unique_modes_check_call_modes_7_0_i15);
	}
	MR_np_call_localret_ent(parse_tree__prog_data__determinism_components_3_0,
		check_hlds__unique_modes__unique_modes_check_call_modes_7_0_i17);
MR_def_label(check_hlds__unique_modes__unique_modes_check_call_modes_7_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 3 != (MR_Integer) MR_r2)) {
		MR_GOTO_LAB(check_hlds__unique_modes__unique_modes_check_call_modes_7_0_i16);
	}
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_instmap_2_0,
		check_hlds__unique_modes__unique_modes_check_call_modes_7_0_i18);
MR_def_label(check_hlds__unique_modes__unique_modes_check_call_modes_7_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(hlds__instmap__is_reachable_1_0,
		check_hlds__unique_modes__unique_modes_check_call_modes_7_0_i21);
MR_def_label(check_hlds__unique_modes__unique_modes_check_call_modes_7_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__unique_modes__unique_modes_check_call_modes_7_0_i16);
	}
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__instmap__vars_list_2_0,
		check_hlds__unique_modes__unique_modes_check_call_modes_7_0_i23);
MR_def_label(check_hlds__unique_modes__unique_modes_check_call_modes_7_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(check_hlds__unique_modes__select_nondet_live_vars_3_0,
		check_hlds__unique_modes__unique_modes_check_call_modes_7_0_i24);
MR_def_label(check_hlds__unique_modes__unique_modes_check_call_modes_7_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(check_hlds__unique_modes__make_var_list_mostly_uniq_3_0);
MR_def_label(check_hlds__unique_modes__unique_modes_check_call_modes_7_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_decr_sp_and_return(8);
MR_def_label(check_hlds__unique_modes__unique_modes_check_call_modes_7_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__instmap__init_unreachable_1_0,
		check_hlds__unique_modes__unique_modes_check_call_modes_7_0_i28);
MR_def_label(check_hlds__unique_modes__unique_modes_check_call_modes_7_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(check_hlds__mode_info__mode_info_set_instmap_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(check_hlds__mode_info__mode_info_get_errors_2_0);
MR_decl_entry(check_hlds__mode_info__mode_info_set_errors_3_0);
MR_decl_entry(hlds__hlds_module__module_info_pred_proc_info_5_0);
MR_decl_entry(check_hlds__modes__compute_arg_offset_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_argmodes_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_interface_determinism_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_never_succeeds_2_0);
MR_decl_entry(fn__hlds__hlds_pred__mode_errors_1_0);
MR_decl_entry(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_105_115_116_95_116_111_95_115_101_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_1_0);
MR_decl_entry(hlds__instmap__lookup_vars_3_0);
MR_decl_entry(check_hlds__mode_info__mode_info_error_4_0);
MR_decl_entry(check_hlds__mode_info__mode_info_get_may_change_called_proc_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_check_hlds__mode_errors__type_ctor_info_mode_error_info_0;
MR_decl_entry(list__append_3_1);
MR_decl_entry(hlds__hlds_pred__proc_info_get_inferred_determinism_2_0);
MR_decl_entry(check_hlds__modecheck_call__modecheck_call_pred_10_0);

MR_BEGIN_MODULE(check_hlds__unique_modes_module9)
	MR_init_entry1(check_hlds__unique_modes__unique_modes_check_call_7_0);
	MR_init_label8(check_hlds__unique_modes__unique_modes_check_call_7_0,2,3,4,5,6,7,8,9)
	MR_init_label8(check_hlds__unique_modes__unique_modes_check_call_7_0,10,11,12,14,15,16,17,18)
	MR_init_label8(check_hlds__unique_modes__unique_modes_check_call_7_0,13,20,21,22,23,27,28,25)
	MR_init_label5(check_hlds__unique_modes__unique_modes_check_call_7_0,29,30,31,33,32)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__unique_modes__unique_modes_check_call_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
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
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_instmap_2_0,
		check_hlds__unique_modes__unique_modes_check_call_7_0_i3);
MR_def_label(check_hlds__unique_modes__unique_modes_check_call_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_set_errors_3_0,
		check_hlds__unique_modes__unique_modes_check_call_7_0_i4);
MR_def_label(check_hlds__unique_modes__unique_modes_check_call_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_module_info_2_0,
		check_hlds__unique_modes__unique_modes_check_call_7_0_i5);
MR_def_label(check_hlds__unique_modes__unique_modes_check_call_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_proc_info_5_0,
		check_hlds__unique_modes__unique_modes_check_call_7_0_i6);
MR_def_label(check_hlds__unique_modes__unique_modes_check_call_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r2;
	MR_np_call_localret_ent(check_hlds__modes__compute_arg_offset_2_0,
		check_hlds__unique_modes__unique_modes_check_call_7_0_i7);
MR_def_label(check_hlds__unique_modes__unique_modes_check_call_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_argmodes_2_0,
		check_hlds__unique_modes__unique_modes_check_call_7_0_i8);
MR_def_label(check_hlds__unique_modes__unique_modes_check_call_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_interface_determinism_2_0,
		check_hlds__unique_modes__unique_modes_check_call_7_0_i9);
MR_def_label(check_hlds__unique_modes__unique_modes_check_call_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_never_succeeds_2_0,
		check_hlds__unique_modes__unique_modes_check_call_7_0_i10);
MR_def_label(check_hlds__unique_modes__unique_modes_check_call_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_sv(10);
	MR_r6 = MR_sv(11);
	MR_np_call_localret_ent(check_hlds__unique_modes__unique_modes_check_call_modes_7_0,
		check_hlds__unique_modes__unique_modes_check_call_7_0_i11);
MR_def_label(check_hlds__unique_modes__unique_modes_check_call_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__mode_errors_1_0,
		check_hlds__unique_modes__unique_modes_check_call_7_0_i12);
MR_def_label(check_hlds__unique_modes__unique_modes_check_call_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__unique_modes__unique_modes_check_call_7_0_i14);
	}
	MR_r1 = MR_sv(10);
	MR_GOTO_LAB(check_hlds__unique_modes__unique_modes_check_call_7_0_i13);
MR_def_label(check_hlds__unique_modes__unique_modes_check_call_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_105_115_116_95_116_111_95_115_101_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_1_0,
		check_hlds__unique_modes__unique_modes_check_call_7_0_i15);
MR_def_label(check_hlds__unique_modes__unique_modes_check_call_7_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_instmap_2_0,
		check_hlds__unique_modes__unique_modes_check_call_7_0_i16);
MR_def_label(check_hlds__unique_modes__unique_modes_check_call_7_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(hlds__instmap__lookup_vars_3_0,
		check_hlds__unique_modes__unique_modes_check_call_7_0_i17);
MR_def_label(check_hlds__unique_modes__unique_modes_check_call_7_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__mode_errors_1_0,
		check_hlds__unique_modes__unique_modes_check_call_7_0_i18);
MR_def_label(check_hlds__unique_modes__unique_modes_check_call_7_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 6);
	MR_r2 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 7;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(3);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(9);
	MR_tfield(3, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 4) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 5) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r3 = MR_sv(10);
	}
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_error_4_0,
		check_hlds__unique_modes__unique_modes_check_call_7_0_i13);
MR_def_label(check_hlds__unique_modes__unique_modes_check_call_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_errors_2_0,
		check_hlds__unique_modes__unique_modes_check_call_7_0_i20);
MR_def_label(check_hlds__unique_modes__unique_modes_check_call_7_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(8);
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_set_errors_3_0,
		check_hlds__unique_modes__unique_modes_check_call_7_0_i21);
MR_def_label(check_hlds__unique_modes__unique_modes_check_call_7_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_may_change_called_proc_2_0,
		check_hlds__unique_modes__unique_modes_check_call_7_0_i22);
MR_def_label(check_hlds__unique_modes__unique_modes_check_call_7_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(8),0,0)) {
		MR_GOTO_LAB(check_hlds__unique_modes__unique_modes_check_call_7_0_i23);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(9);
	MR_decr_sp_and_return(12);
MR_def_label(check_hlds__unique_modes__unique_modes_check_call_7_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(check_hlds__unique_modes__unique_modes_check_call_7_0_i25);
	}
	MR_sv(1) = MR_sv(2);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__mode_errors, mode_error_info);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(8);
	MR_np_call_localret_ent(list__append_3_1,
		check_hlds__unique_modes__unique_modes_check_call_7_0_i27);
MR_def_label(check_hlds__unique_modes__unique_modes_check_call_7_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_set_errors_3_0,
		check_hlds__unique_modes__unique_modes_check_call_7_0_i28);
MR_def_label(check_hlds__unique_modes__unique_modes_check_call_7_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(12);
MR_def_label(check_hlds__unique_modes__unique_modes_check_call_7_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_set_instmap_3_0,
		check_hlds__unique_modes__unique_modes_check_call_7_0_i29);
MR_def_label(check_hlds__unique_modes__unique_modes_check_call_7_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_inferred_determinism_2_0,
		check_hlds__unique_modes__unique_modes_check_call_7_0_i30);
MR_def_label(check_hlds__unique_modes__unique_modes_check_call_7_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(5);
	MR_np_call_localret_ent(check_hlds__modecheck_call__modecheck_call_pred_10_0,
		check_hlds__unique_modes__unique_modes_check_call_7_0_i31);
MR_def_label(check_hlds__unique_modes__unique_modes_check_call_7_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_r3 = MR_sv(3);
	MR_sv(3) = MR_r4;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		check_hlds__unique_modes__unique_modes_check_call_7_0_i33);
MR_def_label(check_hlds__unique_modes__unique_modes_check_call_7_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__unique_modes__unique_modes_check_call_7_0_i32);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(check_hlds__unique_modes__unique_modes_check_call_7_0_i32);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_decr_sp_and_return(12);
MR_def_label(check_hlds__unique_modes__unique_modes_check_call_7_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("unique_modes.m", 14);
	MR_r2 = (MR_Word) MR_string_const("call to implied mode?", 21);
	MR_succip_word = MR_sv(12);
	MR_decr_sp(12);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_goal__goal_info_get_determinism_2_0);
MR_decl_entry(check_hlds__mode_info__mode_info_add_live_vars_3_0);
MR_decl_entry(check_hlds__mode_info__mode_info_remove_live_vars_3_0);

MR_BEGIN_MODULE(check_hlds__unique_modes_module10)
	MR_init_entry1(check_hlds__unique_modes__prepare_for_disjunct_5_0);
	MR_init_label8(check_hlds__unique_modes__prepare_for_disjunct_5_0,5,6,7,9,10,13,15,16)
	MR_init_label3(check_hlds__unique_modes__prepare_for_disjunct_5_0,17,12,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__unique_modes__prepare_for_disjunct_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(parse_tree__prog_data__determinism_components_3_0,
		check_hlds__unique_modes__prepare_for_disjunct_5_0_i5);
MR_def_label(check_hlds__unique_modes__prepare_for_disjunct_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 3 == (MR_Integer) MR_r2)) {
		MR_GOTO_LAB(check_hlds__unique_modes__prepare_for_disjunct_5_0_i2);
	}
	MR_r1 = MR_ctfield(0, MR_sv(1), 1);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_get_determinism_2_0,
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
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_add_live_vars_3_0,
		check_hlds__unique_modes__prepare_for_disjunct_5_0_i9);
MR_def_label(check_hlds__unique_modes__prepare_for_disjunct_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_instmap_2_0,
		check_hlds__unique_modes__prepare_for_disjunct_5_0_i10);
MR_def_label(check_hlds__unique_modes__prepare_for_disjunct_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(hlds__instmap__is_reachable_1_0,
		check_hlds__unique_modes__prepare_for_disjunct_5_0_i13);
MR_def_label(check_hlds__unique_modes__prepare_for_disjunct_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__unique_modes__prepare_for_disjunct_5_0_i12);
	}
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(hlds__instmap__vars_list_2_0,
		check_hlds__unique_modes__prepare_for_disjunct_5_0_i15);
MR_def_label(check_hlds__unique_modes__prepare_for_disjunct_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(check_hlds__unique_modes__select_nondet_live_vars_3_0,
		check_hlds__unique_modes__prepare_for_disjunct_5_0_i16);
MR_def_label(check_hlds__unique_modes__prepare_for_disjunct_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(check_hlds__unique_modes__make_var_list_mostly_uniq_3_0,
		check_hlds__unique_modes__prepare_for_disjunct_5_0_i17);
MR_def_label(check_hlds__unique_modes__prepare_for_disjunct_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(check_hlds__mode_info__mode_info_remove_live_vars_3_0);
MR_def_label(check_hlds__unique_modes__prepare_for_disjunct_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
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

MR_decl_entry(hlds__hlds_goal__goal_info_get_context_2_0);
MR_decl_entry(term__context_init_1_0);
MR_decl_entry(__Unify___term__context_0_0);
MR_decl_entry(check_hlds__mode_info__mode_info_set_context_3_0);
MR_decl_entry(check_hlds__mode_info__mode_info_get_in_dupl_for_switch_2_0);
MR_decl_entry(hlds__hlds_goal__goal_info_has_feature_2_0);
MR_decl_entry(check_hlds__mode_info__mode_info_set_in_dupl_for_switch_3_0);
MR_decl_entry(check_hlds__mode_info__mode_info_get_nondet_live_vars_2_0);
MR_decl_entry(fn__bag__init_0_0);
MR_decl_entry(check_hlds__mode_info__mode_info_set_nondet_live_vars_3_0);
MR_decl_entry(check_hlds__modes__compute_goal_instmap_delta_6_0);

MR_BEGIN_MODULE(check_hlds__unique_modes_module11)
	MR_init_entry1(check_hlds__unique_modes__unique_modes_check_goal_6_0);
	MR_init_label8(check_hlds__unique_modes__unique_modes_check_goal_6_0,2,3,6,5,9,10,12,11)
	MR_init_label8(check_hlds__unique_modes__unique_modes_check_goal_6_0,15,16,17,18,20,19,21,22)
	MR_init_label5(check_hlds__unique_modes__unique_modes_check_goal_6_0,23,24,25,26,27)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__unique_modes__unique_modes_check_goal_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(0, MR_r1, 0);
	MR_sv(2) = MR_ctfield(0, MR_r1, 1);
	MR_sv(4) = MR_r2;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_get_context_2_0,
		check_hlds__unique_modes__unique_modes_check_goal_6_0_i2);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(term__context_init_1_0,
		check_hlds__unique_modes__unique_modes_check_goal_6_0_i3);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(__Unify___term__context_0_0,
		check_hlds__unique_modes__unique_modes_check_goal_6_0_i6);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__unique_modes__unique_modes_check_goal_6_0_i5);
	}
	MR_r1 = MR_sv(4);
	MR_GOTO_LAB(check_hlds__unique_modes__unique_modes_check_goal_6_0_i9);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_set_context_3_0,
		check_hlds__unique_modes__unique_modes_check_goal_6_0_i9);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_in_dupl_for_switch_2_0,
		check_hlds__unique_modes__unique_modes_check_goal_6_0_i10);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Integer) 12;
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_has_feature_2_0,
		check_hlds__unique_modes__unique_modes_check_goal_6_0_i12);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__unique_modes__unique_modes_check_goal_6_0_i11);
	}
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_set_in_dupl_for_switch_3_0,
		check_hlds__unique_modes__unique_modes_check_goal_6_0_i15);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_instmap_2_0,
		check_hlds__unique_modes__unique_modes_check_goal_6_0_i16);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_nondet_live_vars_2_0,
		check_hlds__unique_modes__unique_modes_check_goal_6_0_i17);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_get_determinism_2_0,
		check_hlds__unique_modes__unique_modes_check_goal_6_0_i18);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(parse_tree__prog_data__determinism_components_3_0,
		check_hlds__unique_modes__unique_modes_check_goal_6_0_i20);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_6_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 3 != (MR_Integer) MR_r2)) {
		MR_GOTO_LAB(check_hlds__unique_modes__unique_modes_check_goal_6_0_i19);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(6);
	MR_GOTO_LAB(check_hlds__unique_modes__unique_modes_check_goal_6_0_i23);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_np_call_localret_ent(fn__bag__init_0_0,
		check_hlds__unique_modes__unique_modes_check_goal_6_0_i21);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_6_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_set_nondet_live_vars_3_0,
		check_hlds__unique_modes__unique_modes_check_goal_6_0_i22);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_6_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_6_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(check_hlds__unique_modes__unique_modes_check_goal_2_7_0,
		check_hlds__unique_modes__unique_modes_check_goal_6_0_i24);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_6_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_set_nondet_live_vars_3_0,
		check_hlds__unique_modes__unique_modes_check_goal_6_0_i25);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_6_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(check_hlds__modes__compute_goal_instmap_delta_6_0,
		check_hlds__unique_modes__unique_modes_check_goal_6_0_i26);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_6_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_sv(3);
	}
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_set_in_dupl_for_switch_3_0,
		check_hlds__unique_modes__unique_modes_check_goal_6_0_i27);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_6_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(check_hlds__mode_debug__mode_checkpoint_6_0);
MR_decl_entry(check_hlds__mode_info__mode_info_set_call_context_3_0);
MR_decl_entry(check_hlds__modecheck_unify__modecheck_unification_10_0);
MR_decl_entry(check_hlds__mode_info__mode_info_unset_call_context_2_0);
MR_decl_entry(fn__mdbcomp__prim_data__sym_name_to_string_1_0);
MR_decl_entry(string__append_3_2);
MR_decl_entry(check_hlds__mode_info__mode_info_get_call_id_3_0);
MR_decl_entry(hlds__hlds_goal__generic_call_id_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_foreign_arg_0;
MR_decl_entry(fn__list__map_2_0);
MR_decl_entry(check_hlds__modes__mode_info_add_goals_live_vars_4_0);
MR_decl_entry(hlds__hlds_goal__goal_info_get_nonlocals_2_0);
MR_decl_entry(hlds__instmap__instmap_merge_5_0);
MR_decl_entry(set__to_sorted_list_2_0);
MR_decl_entry(check_hlds__mode_info__mode_info_get_live_vars_2_0);
MR_decl_entry(check_hlds__mode_info__mode_info_set_live_vars_3_0);
MR_decl_entry(check_hlds__mode_info__mode_info_lock_vars_4_0);
MR_decl_entry(check_hlds__mode_info__mode_info_unlock_vars_4_0);
MR_decl_entry(check_hlds__mode_info__mode_info_get_in_from_ground_term_2_0);
MR_decl_entry(check_hlds__mode_info__mode_info_set_in_from_ground_term_3_0);
MR_decl_entry(hlds__hlds_goal__goal_get_nonlocals_2_0);
MR_decl_entry(hlds__hlds_goal__goal_info_get_instmap_delta_2_0);
MR_decl_entry(fn__hlds__hlds_goal__true_goal_0_0);

MR_BEGIN_MODULE(check_hlds__unique_modes_module12)
	MR_init_entry1(check_hlds__unique_modes__unique_modes_check_goal_2_7_0);
	MR_init_label8(check_hlds__unique_modes__unique_modes_check_goal_2_7_0,4,5,6,7,8,10,11,12)
	MR_init_label8(check_hlds__unique_modes__unique_modes_check_goal_2_7_0,13,14,15,16,17,19,20,21)
	MR_init_label8(check_hlds__unique_modes__unique_modes_check_goal_2_7_0,22,24,23,25,31,32,33,35)
	MR_init_label8(check_hlds__unique_modes__unique_modes_check_goal_2_7_0,36,37,38,39,40,41,42,44)
	MR_init_label8(check_hlds__unique_modes__unique_modes_check_goal_2_7_0,45,47,48,49,51,52,55,56)
	MR_init_label8(check_hlds__unique_modes__unique_modes_check_goal_2_7_0,54,57,58,60,61,62,63,59)
	MR_init_label8(check_hlds__unique_modes__unique_modes_check_goal_2_7_0,64,65,66,68,69,72,73,71)
	MR_init_label8(check_hlds__unique_modes__unique_modes_check_goal_2_7_0,74,75,76,78,79,80,81,82)
	MR_init_label8(check_hlds__unique_modes__unique_modes_check_goal_2_7_0,83,84,85,86,87,88,89,90)
	MR_init_label8(check_hlds__unique_modes__unique_modes_check_goal_2_7_0,91,92,94,95,98,99,100,101)
	MR_init_label8(check_hlds__unique_modes__unique_modes_check_goal_2_7_0,96,102,105,106,107,108,109,110)
	MR_init_label8(check_hlds__unique_modes__unique_modes_check_goal_2_7_0,111,112,113,114,115,116,117,118)
	MR_init_label8(check_hlds__unique_modes__unique_modes_check_goal_2_7_0,119,120,121,122,123,124,127,129)
	MR_init_label8(check_hlds__unique_modes__unique_modes_check_goal_2_7_0,130,125,131,132,133,134,135,136)
	MR_init_label4(check_hlds__unique_modes__unique_modes_check_goal_2_7_0,137,138,139,140)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__unique_modes__unique_modes_check_goal_2_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(check_hlds__unique_modes__unique_modes_check_goal_2_7_0_i4) MR_AND
		MR_LABEL_AP(check_hlds__unique_modes__unique_modes_check_goal_2_7_0_i10) MR_AND
		MR_LABEL_AP(check_hlds__unique_modes__unique_modes_check_goal_2_7_0_i19) MR_AND
		MR_LABEL_AP(check_hlds__unique_modes__unique_modes_check_goal_2_7_0_i35));
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_2_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_ctfield(0, MR_r1, 0);
	MR_sv(3) = MR_ctfield(0, MR_r1, 1);
	MR_sv(4) = MR_ctfield(0, MR_r1, 3);
	MR_sv(5) = MR_ctfield(0, MR_r1, 4);
	MR_r1 = (MR_Integer) 0;
	MR_r2 = (MR_Word) MR_string_const("unify", 5);
	MR_np_call_localret_ent(check_hlds__mode_debug__mode_checkpoint_6_0,
		check_hlds__unique_modes__unique_modes_check_goal_2_7_0_i5);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_2_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(5);
	MR_r2 = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_set_call_context_3_0,
		check_hlds__unique_modes__unique_modes_check_goal_2_7_0_i6);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_2_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(1);
	MR_np_call_localret_ent(check_hlds__modecheck_unify__modecheck_unification_10_0,
		check_hlds__unique_modes__unique_modes_check_goal_2_7_0_i7);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_2_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_unset_call_context_2_0,
		check_hlds__unique_modes__unique_modes_check_goal_2_7_0_i8);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_2_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_r2 = (MR_Word) MR_string_const("unify", 5);
	MR_np_call_localret_ent(check_hlds__mode_debug__mode_checkpoint_6_0,
		check_hlds__unique_modes__unique_modes_check_goal_2_7_0_i138);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_2_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_ctfield(1, MR_r1, 0);
	MR_sv(4) = MR_ctfield(1, MR_r1, 1);
	MR_sv(5) = MR_ctfield(1, MR_r1, 2);
	MR_sv(6) = MR_ctfield(1, MR_r1, 3);
	MR_sv(7) = MR_ctfield(1, MR_r1, 4);
	MR_sv(8) = MR_ctfield(1, MR_r1, 5);
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__sym_name_to_string_1_0,
		check_hlds__unique_modes__unique_modes_check_goal_2_7_0_i11);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_2_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("call ", 5);
	MR_np_call_localret_ent(string__append_3_2,
		check_hlds__unique_modes__unique_modes_check_goal_2_7_0_i12);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_2_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(check_hlds__mode_debug__mode_checkpoint_6_0,
		check_hlds__unique_modes__unique_modes_check_goal_2_7_0_i13);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_2_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_call_id_3_0,
		check_hlds__unique_modes__unique_modes_check_goal_2_7_0_i14);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_2_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_r2 = MR_sv(2);
	}
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_set_call_context_3_0,
		check_hlds__unique_modes__unique_modes_check_goal_2_7_0_i15);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_2_7_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(check_hlds__unique_modes__unique_modes_check_call_7_0,
		check_hlds__unique_modes__unique_modes_check_goal_2_7_0_i16);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_2_7_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 6);
	MR_sv(1) = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_tfield(1, MR_tempr1, 2) = MR_sv(5);
	MR_tfield(1, MR_tempr1, 3) = MR_sv(6);
	MR_tfield(1, MR_tempr1, 4) = MR_sv(7);
	MR_tfield(1, MR_tempr1, 5) = MR_sv(8);
	MR_r1 = MR_r2;
	}
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_unset_call_context_2_0,
		check_hlds__unique_modes__unique_modes_check_goal_2_7_0_i17);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_2_7_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_r2 = (MR_Word) MR_string_const("call", 4);
	MR_np_call_localret_ent(check_hlds__mode_debug__mode_checkpoint_6_0,
		check_hlds__unique_modes__unique_modes_check_goal_2_7_0_i138);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_2_7_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_ctfield(2, MR_r1, 0);
	MR_sv(3) = MR_ctfield(2, MR_r1, 1);
	MR_sv(4) = MR_ctfield(2, MR_r1, 2);
	MR_sv(5) = MR_ctfield(2, MR_r1, 3);
	MR_r1 = (MR_Integer) 0;
	MR_r2 = (MR_Word) MR_string_const("generic_call", 12);
	MR_np_call_localret_ent(check_hlds__mode_debug__mode_checkpoint_6_0,
		check_hlds__unique_modes__unique_modes_check_goal_2_7_0_i20);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_2_7_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_goal__generic_call_id_2_0,
		check_hlds__unique_modes__unique_modes_check_goal_2_7_0_i21);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_2_7_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(6);
	}
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_set_call_context_3_0,
		check_hlds__unique_modes__unique_modes_check_goal_2_7_0_i22);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_2_7_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(parse_tree__prog_data__determinism_components_3_0,
		check_hlds__unique_modes__unique_modes_check_goal_2_7_0_i24);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_2_7_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 0 != (MR_Integer) MR_r2)) {
		MR_GOTO_LAB(check_hlds__unique_modes__unique_modes_check_goal_2_7_0_i23);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_r5 = (MR_Integer) 1;
	MR_r6 = MR_sv(6);
	MR_GOTO_LAB(check_hlds__unique_modes__unique_modes_check_goal_2_7_0_i25);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_2_7_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_r5 = (MR_Integer) 0;
	MR_r6 = MR_sv(6);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_2_7_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	if (MR_INT_NE(MR_tag(MR_tempr1),0)) {
		MR_GOTO_LAB(check_hlds__unique_modes__unique_modes_check_goal_2_7_0_i31);
	}
	MR_r3 = (MR_Integer) 1;
	}
	MR_np_call_localret_ent(check_hlds__unique_modes__unique_modes_check_call_modes_7_0,
		check_hlds__unique_modes__unique_modes_check_goal_2_7_0_i32);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_2_7_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = (MR_Integer) 0;
	MR_np_call_localret_ent(check_hlds__unique_modes__unique_modes_check_call_modes_7_0,
		check_hlds__unique_modes__unique_modes_check_goal_2_7_0_i32);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_2_7_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_unset_call_context_2_0,
		check_hlds__unique_modes__unique_modes_check_goal_2_7_0_i33);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_2_7_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_r2 = (MR_Word) MR_string_const("generic_call", 12);
	MR_np_call_localret_ent(check_hlds__mode_debug__mode_checkpoint_6_0,
		check_hlds__unique_modes__unique_modes_check_goal_2_7_0_i138);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_2_7_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r1, 0),
		MR_LABEL_AP(check_hlds__unique_modes__unique_modes_check_goal_2_7_0_i36) MR_AND
		MR_LABEL_AP(check_hlds__unique_modes__unique_modes_check_goal_2_7_0_i44) MR_AND
		MR_LABEL_AP(check_hlds__unique_modes__unique_modes_check_goal_2_7_0_i51) MR_AND
		MR_LABEL_AP(check_hlds__unique_modes__unique_modes_check_goal_2_7_0_i68) MR_AND
		MR_LABEL_AP(check_hlds__unique_modes__unique_modes_check_goal_2_7_0_i78) MR_AND
		MR_LABEL_AP(check_hlds__unique_modes__unique_modes_check_goal_2_7_0_i94) MR_AND
		MR_LABEL_AP(check_hlds__unique_modes__unique_modes_check_goal_2_7_0_i105) MR_AND
		MR_LABEL_AP(check_hlds__unique_modes__unique_modes_check_goal_2_7_0_i139));
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_2_7_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_ctfield(3, MR_r1, 1);
	MR_sv(3) = MR_ctfield(3, MR_r1, 2);
	MR_sv(4) = MR_ctfield(3, MR_r1, 3);
	MR_sv(5) = MR_ctfield(3, MR_r1, 4);
	MR_sv(6) = MR_ctfield(3, MR_r1, 5);
	MR_sv(7) = MR_ctfield(3, MR_r1, 6);
	MR_sv(8) = MR_ctfield(3, MR_r1, 7);
	MR_r1 = (MR_Integer) 0;
	MR_r2 = (MR_Word) MR_string_const("foreign_proc", 12);
	MR_np_call_localret_ent(check_hlds__mode_debug__mode_checkpoint_6_0,
		check_hlds__unique_modes__unique_modes_check_goal_2_7_0_i37);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_2_7_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_call_id_3_0,
		check_hlds__unique_modes__unique_modes_check_goal_2_7_0_i38);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_2_7_0,38)
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
		check_hlds__unique_modes__unique_modes_check_goal_2_7_0_i39);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_2_7_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, foreign_arg);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_r4 = MR_sv(5);
	MR_np_call_localret_ent(fn__list__map_2_0,
		check_hlds__unique_modes__unique_modes_check_goal_2_7_0_i40);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_2_7_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(9);
	MR_np_call_localret_ent(check_hlds__unique_modes__unique_modes_check_call_7_0,
		check_hlds__unique_modes__unique_modes_check_goal_2_7_0_i41);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_2_7_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 8);
	MR_sv(1) = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(3);
	MR_tfield(3, MR_tempr1, 3) = MR_r1;
	MR_tfield(3, MR_tempr1, 4) = MR_sv(5);
	MR_tfield(3, MR_tempr1, 5) = MR_sv(6);
	MR_tfield(3, MR_tempr1, 6) = MR_sv(7);
	MR_tfield(3, MR_tempr1, 7) = MR_sv(8);
	MR_r1 = MR_r2;
	}
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_unset_call_context_2_0,
		check_hlds__unique_modes__unique_modes_check_goal_2_7_0_i42);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_2_7_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_r2 = (MR_Word) MR_string_const("foreign_proc", 12);
	MR_np_call_localret_ent(check_hlds__mode_debug__mode_checkpoint_6_0,
		check_hlds__unique_modes__unique_modes_check_goal_2_7_0_i138);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_2_7_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_ctfield(3, MR_r1, 1);
	MR_sv(2) = MR_ctfield(3, MR_r1, 2);
	MR_r1 = (MR_Integer) 0;
	MR_r2 = (MR_Word) MR_string_const("*conj", 5);
	MR_np_call_localret_ent(check_hlds__mode_debug__mode_checkpoint_6_0,
		check_hlds__unique_modes__unique_modes_check_goal_2_7_0_i45);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_2_7_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(check_hlds__unique_modes__unique_modes_check_goal_2_7_0_i47);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(1) = MR_tempr1;
	MR_r3 = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_r2 = (MR_Word) MR_string_const("*conj", 5);
	}
	MR_np_call_localret_ent(check_hlds__mode_debug__mode_checkpoint_6_0,
		check_hlds__unique_modes__unique_modes_check_goal_2_7_0_i138);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_2_7_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(check_hlds__modes__mode_info_add_goals_live_vars_4_0,
		check_hlds__unique_modes__unique_modes_check_goal_2_7_0_i48);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_2_7_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(check_hlds__unique_modes__unique_modes_check_conj_7_0,
		check_hlds__unique_modes__unique_modes_check_goal_2_7_0_i49);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_2_7_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_r3 = MR_r2;
	MR_r1 = (MR_Integer) 1;
	MR_r2 = (MR_Word) MR_string_const("*conj", 5);
	}
	MR_np_call_localret_ent(check_hlds__mode_debug__mode_checkpoint_6_0,
		check_hlds__unique_modes__unique_modes_check_goal_2_7_0_i138);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_2_7_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_ctfield(3, MR_r1, 1);
	MR_r1 = (MR_Integer) 0;
	MR_r2 = (MR_Word) MR_string_const("disj", 4);
	MR_np_call_localret_ent(check_hlds__mode_debug__mode_checkpoint_6_0,
		check_hlds__unique_modes__unique_modes_check_goal_2_7_0_i52);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_2_7_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(check_hlds__unique_modes__unique_modes_check_goal_2_7_0_i54);
	}
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(hlds__instmap__init_unreachable_1_0,
		check_hlds__unique_modes__unique_modes_check_goal_2_7_0_i55);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_2_7_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_set_instmap_3_0,
		check_hlds__unique_modes__unique_modes_check_goal_2_7_0_i56);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_2_7_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(3,3,0);
	MR_r3 = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_r2 = (MR_Word) MR_string_const("disj", 4);
	MR_np_call_localret_ent(check_hlds__mode_debug__mode_checkpoint_6_0,
		check_hlds__unique_modes__unique_modes_check_goal_2_7_0_i138);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_2_7_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_get_nonlocals_2_0,
		check_hlds__unique_modes__unique_modes_check_goal_2_7_0_i57);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_2_7_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_get_determinism_2_0,
		check_hlds__unique_modes__unique_modes_check_goal_2_7_0_i58);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_2_7_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(parse_tree__prog_data__determinism_components_3_0,
		check_hlds__unique_modes__unique_modes_check_goal_2_7_0_i60);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_2_7_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 3 != (MR_Integer) MR_r2)) {
		MR_GOTO_LAB(check_hlds__unique_modes__unique_modes_check_goal_2_7_0_i59);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_add_live_vars_3_0,
		check_hlds__unique_modes__unique_modes_check_goal_2_7_0_i61);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_2_7_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(check_hlds__unique_modes__make_all_nondet_live_vars_mostly_uniq_2_0,
		check_hlds__unique_modes__unique_modes_check_goal_2_7_0_i62);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_2_7_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_remove_live_vars_3_0,
		check_hlds__unique_modes__unique_modes_check_goal_2_7_0_i63);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_2_7_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_GOTO_LAB(check_hlds__unique_modes__unique_modes_check_goal_2_7_0_i64);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_2_7_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r4 = MR_sv(4);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_2_7_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_np_call_localret_ent(check_hlds__unique_modes__unique_modes_check_disj_9_0,
		check_hlds__unique_modes__unique_modes_check_goal_2_7_0_i65);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_2_7_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r4 = MR_r3;
	MR_r3 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(hlds__instmap__instmap_merge_5_0,
		check_hlds__unique_modes__unique_modes_check_goal_2_7_0_i66);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_2_7_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r3 = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_r2 = (MR_Word) MR_string_const("disj", 4);
	}
	MR_np_call_localret_ent(check_hlds__mode_debug__mode_checkpoint_6_0,
		check_hlds__unique_modes__unique_modes_check_goal_2_7_0_i138);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_2_7_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_ctfield(3, MR_r1, 1);
	MR_sv(3) = MR_ctfield(3, MR_r1, 2);
	MR_sv(4) = MR_ctfield(3, MR_r1, 3);
	MR_r1 = (MR_Integer) 0;
	MR_r2 = (MR_Word) MR_string_const("switch", 6);
	MR_np_call_localret_ent(check_hlds__mode_debug__mode_checkpoint_6_0,
		check_hlds__unique_modes__unique_modes_check_goal_2_7_0_i69);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_2_7_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(4),0,0)) {
		MR_GOTO_LAB(check_hlds__unique_modes__unique_modes_check_goal_2_7_0_i71);
	}
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(hlds__instmap__init_unreachable_1_0,
		check_hlds__unique_modes__unique_modes_check_goal_2_7_0_i72);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_2_7_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_set_instmap_3_0,
		check_hlds__unique_modes__unique_modes_check_goal_2_7_0_i73);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_2_7_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_sv(1) = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(3);
	MR_tfield(3, MR_tempr1, 3) = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_r2 = (MR_Word) MR_string_const("switch", 6);
	}
	MR_np_call_localret_ent(check_hlds__mode_debug__mode_checkpoint_6_0,
		check_hlds__unique_modes__unique_modes_check_goal_2_7_0_i138);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_2_7_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_get_nonlocals_2_0,
		check_hlds__unique_modes__unique_modes_check_goal_2_7_0_i74);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_2_7_0,74)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(check_hlds__unique_modes__unique_modes_check_case_list_8_0,
		check_hlds__unique_modes__unique_modes_check_goal_2_7_0_i75);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_2_7_0,75)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r4 = MR_r3;
	MR_r3 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(hlds__instmap__instmap_merge_5_0,
		check_hlds__unique_modes__unique_modes_check_goal_2_7_0_i76);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_2_7_0,76)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_r2 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(3);
	MR_tfield(3, MR_tempr1, 3) = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r3 = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_r2 = (MR_Word) MR_string_const("switch", 6);
	}
	MR_np_call_localret_ent(check_hlds__mode_debug__mode_checkpoint_6_0,
		check_hlds__unique_modes__unique_modes_check_goal_2_7_0_i138);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_2_7_0,78)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_ctfield(3, MR_r1, 1);
	MR_r1 = (MR_Integer) 0;
	MR_r2 = (MR_Word) MR_string_const("not", 3);
	MR_np_call_localret_ent(check_hlds__mode_debug__mode_checkpoint_6_0,
		check_hlds__unique_modes__unique_modes_check_goal_2_7_0_i79);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_2_7_0,79)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_instmap_2_0,
		check_hlds__unique_modes__unique_modes_check_goal_2_7_0_i80);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_2_7_0,80)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_get_nonlocals_2_0,
		check_hlds__unique_modes__unique_modes_check_goal_2_7_0_i81);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_2_7_0,81)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(6) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(set__to_sorted_list_2_0,
		check_hlds__unique_modes__unique_modes_check_goal_2_7_0_i82);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_2_7_0,82)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(check_hlds__unique_modes__select_live_vars_3_0,
		check_hlds__unique_modes__unique_modes_check_goal_2_7_0_i83);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_2_7_0,83)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(check_hlds__unique_modes__make_var_list_mostly_uniq_3_0,
		check_hlds__unique_modes__unique_modes_check_goal_2_7_0_i84);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_2_7_0,84)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_live_vars_2_0,
		check_hlds__unique_modes__unique_modes_check_goal_2_7_0_i85);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_2_7_0,85)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(fn__bag__init_0_0,
		check_hlds__unique_modes__unique_modes_check_goal_2_7_0_i86);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_2_7_0,86)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_set_live_vars_3_0,
		check_hlds__unique_modes__unique_modes_check_goal_2_7_0_i87);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_2_7_0,87)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_lock_vars_4_0,
		check_hlds__unique_modes__unique_modes_check_goal_2_7_0_i88);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_2_7_0,88)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(check_hlds__unique_modes__unique_modes_check_goal_6_0,
		check_hlds__unique_modes__unique_modes_check_goal_2_7_0_i89);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_2_7_0,89)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r3 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_unlock_vars_4_0,
		check_hlds__unique_modes__unique_modes_check_goal_2_7_0_i90);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_2_7_0,90)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_set_live_vars_3_0,
		check_hlds__unique_modes__unique_modes_check_goal_2_7_0_i91);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_2_7_0,91)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_set_instmap_3_0,
		check_hlds__unique_modes__unique_modes_check_goal_2_7_0_i92);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_2_7_0,92)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_r2 = (MR_Word) MR_string_const("not", 3);
	MR_np_call_localret_ent(check_hlds__mode_debug__mode_checkpoint_6_0,
		check_hlds__unique_modes__unique_modes_check_goal_2_7_0_i138);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_2_7_0,94)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_ctfield(3, MR_r1, 1);
	MR_sv(2) = MR_ctfield(3, MR_r1, 2);
	MR_r1 = (MR_Integer) 0;
	MR_r2 = (MR_Word) MR_string_const("scope", 5);
	MR_np_call_localret_ent(check_hlds__mode_debug__mode_checkpoint_6_0,
		check_hlds__unique_modes__unique_modes_check_goal_2_7_0_i95);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_2_7_0,95)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,2)) {
		MR_GOTO_LAB(check_hlds__unique_modes__unique_modes_check_goal_2_7_0_i96);
	}
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_in_from_ground_term_2_0,
		check_hlds__unique_modes__unique_modes_check_goal_2_7_0_i98);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_2_7_0,98)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_set_in_from_ground_term_3_0,
		check_hlds__unique_modes__unique_modes_check_goal_2_7_0_i99);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_2_7_0,99)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(check_hlds__unique_modes__unique_modes_check_goal_6_0,
		check_hlds__unique_modes__unique_modes_check_goal_2_7_0_i100);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_2_7_0,100)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_set_in_from_ground_term_3_0,
		check_hlds__unique_modes__unique_modes_check_goal_2_7_0_i101);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_2_7_0,101)
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
	MR_r2 = (MR_Word) MR_string_const("scope", 5);
	}
	MR_np_call_localret_ent(check_hlds__mode_debug__mode_checkpoint_6_0,
		check_hlds__unique_modes__unique_modes_check_goal_2_7_0_i138);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_2_7_0,96)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(check_hlds__unique_modes__unique_modes_check_goal_6_0,
		check_hlds__unique_modes__unique_modes_check_goal_2_7_0_i102);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_2_7_0,102)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_r3 = MR_r2;
	MR_r1 = (MR_Integer) 1;
	MR_r2 = (MR_Word) MR_string_const("scope", 5);
	}
	MR_np_call_localret_ent(check_hlds__mode_debug__mode_checkpoint_6_0,
		check_hlds__unique_modes__unique_modes_check_goal_2_7_0_i138);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_2_7_0,105)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_ctfield(3, MR_r1, 1);
	MR_sv(3) = MR_ctfield(3, MR_r1, 2);
	MR_sv(4) = MR_ctfield(3, MR_r1, 3);
	MR_sv(5) = MR_ctfield(3, MR_r1, 4);
	MR_r1 = (MR_Integer) 0;
	MR_r2 = (MR_Word) MR_string_const("if-then-else", 12);
	MR_np_call_localret_ent(check_hlds__mode_debug__mode_checkpoint_6_0,
		check_hlds__unique_modes__unique_modes_check_goal_2_7_0_i106);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_2_7_0,106)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_get_nonlocals_2_0,
		check_hlds__unique_modes__unique_modes_check_goal_2_7_0_i107);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_2_7_0,107)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_get_nonlocals_2_0,
		check_hlds__unique_modes__unique_modes_check_goal_2_7_0_i108);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_2_7_0,108)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_get_nonlocals_2_0,
		check_hlds__unique_modes__unique_modes_check_goal_2_7_0_i109);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_2_7_0,109)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_get_nonlocals_2_0,
		check_hlds__unique_modes__unique_modes_check_goal_2_7_0_i110);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_2_7_0,110)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_instmap_2_0,
		check_hlds__unique_modes__unique_modes_check_goal_2_7_0_i111);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_2_7_0,111)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(9);
	MR_sv(9) = MR_r1;
	MR_r1 = (MR_Word) MR_tbmkword(0, 1);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_lock_vars_4_0,
		check_hlds__unique_modes__unique_modes_check_goal_2_7_0_i112);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_2_7_0,112)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_add_live_vars_3_0,
		check_hlds__unique_modes__unique_modes_check_goal_2_7_0_i113);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_2_7_0,113)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(set__to_sorted_list_2_0,
		check_hlds__unique_modes__unique_modes_check_goal_2_7_0_i114);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_2_7_0,114)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(check_hlds__unique_modes__select_live_vars_3_0,
		check_hlds__unique_modes__unique_modes_check_goal_2_7_0_i115);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_2_7_0,115)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_ctfield(0, MR_sv(3), 1);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_get_instmap_delta_2_0,
		check_hlds__unique_modes__unique_modes_check_goal_2_7_0_i116);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_2_7_0,116)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r3 = MR_sv(10);
	MR_np_call_localret_ent(check_hlds__unique_modes__select_changed_inst_vars_4_0,
		check_hlds__unique_modes__unique_modes_check_goal_2_7_0_i117);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_2_7_0,117)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(check_hlds__unique_modes__make_var_list_mostly_uniq_3_0,
		check_hlds__unique_modes__unique_modes_check_goal_2_7_0_i118);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_2_7_0,118)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_remove_live_vars_3_0,
		check_hlds__unique_modes__unique_modes_check_goal_2_7_0_i119);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_2_7_0,119)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_add_live_vars_3_0,
		check_hlds__unique_modes__unique_modes_check_goal_2_7_0_i120);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_2_7_0,120)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(check_hlds__unique_modes__unique_modes_check_goal_6_0,
		check_hlds__unique_modes__unique_modes_check_goal_2_7_0_i121);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_2_7_0,121)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_remove_live_vars_3_0,
		check_hlds__unique_modes__unique_modes_check_goal_2_7_0_i122);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_2_7_0,122)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_tbmkword(0, 1);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_unlock_vars_4_0,
		check_hlds__unique_modes__unique_modes_check_goal_2_7_0_i123);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_2_7_0,123)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_instmap_2_0,
		check_hlds__unique_modes__unique_modes_check_goal_2_7_0_i124);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_2_7_0,124)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_np_call_localret_ent(hlds__instmap__is_reachable_1_0,
		check_hlds__unique_modes__unique_modes_check_goal_2_7_0_i127);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_2_7_0,127)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__unique_modes__unique_modes_check_goal_2_7_0_i125);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(check_hlds__unique_modes__unique_modes_check_goal_6_0,
		check_hlds__unique_modes__unique_modes_check_goal_2_7_0_i129);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_2_7_0,129)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(6) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_instmap_2_0,
		check_hlds__unique_modes__unique_modes_check_goal_2_7_0_i130);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_2_7_0,130)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(6);
	MR_sv(6) = MR_r3;
	MR_GOTO_LAB(check_hlds__unique_modes__unique_modes_check_goal_2_7_0_i132);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_2_7_0,125)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__true_goal_0_0,
		check_hlds__unique_modes__unique_modes_check_goal_2_7_0_i131);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_2_7_0,131)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(7);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_2_7_0,132)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_set_instmap_3_0,
		check_hlds__unique_modes__unique_modes_check_goal_2_7_0_i133);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_2_7_0,133)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(check_hlds__unique_modes__unique_modes_check_goal_6_0,
		check_hlds__unique_modes__unique_modes_check_goal_2_7_0_i134);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_2_7_0,134)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(7) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_instmap_2_0,
		check_hlds__unique_modes__unique_modes_check_goal_2_7_0_i135);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_2_7_0,135)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_set_instmap_3_0,
		check_hlds__unique_modes__unique_modes_check_goal_2_7_0_i136);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_2_7_0,136)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(7);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_sv(6);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r3 = (MR_Integer) 1;
	}
	MR_np_call_localret_ent(hlds__instmap__instmap_merge_5_0,
		check_hlds__unique_modes__unique_modes_check_goal_2_7_0_i137);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_2_7_0,137)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 5);
	MR_sv(1) = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(3);
	MR_tfield(3, MR_tempr1, 3) = MR_sv(4);
	MR_tfield(3, MR_tempr1, 4) = MR_sv(5);
	MR_r3 = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_r2 = (MR_Word) MR_string_const("if-then-else", 12);
	}
	MR_np_call_localret_ent(check_hlds__mode_debug__mode_checkpoint_6_0,
		check_hlds__unique_modes__unique_modes_check_goal_2_7_0_i138);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_2_7_0,138)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(11);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_2_7_0,139)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__check_hlds__unique_modes__this_file_0_0,
		check_hlds__unique_modes__unique_modes_check_goal_2_7_0_i140);
MR_def_label(check_hlds__unique_modes__unique_modes_check_goal_2_7_0,140)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("unique_modes_check_goal_2: unexpected shorthand", 47);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0;

MR_BEGIN_MODULE(check_hlds__unique_modes_module13)
	MR_init_entry1(check_hlds__unique_modes__unique_modes_check_conj_7_0);
	MR_init_label4(check_hlds__unique_modes__unique_modes_check_conj_7_0,23,3,6,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__unique_modes__unique_modes_check_conj_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(check_hlds__unique_modes__unique_modes_check_conj_7_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(check_hlds__unique_modes__unique_modes_check_conj_7_0_i3);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r3;
	MR_decr_sp_and_return(3);
MR_def_label(check_hlds__unique_modes__unique_modes_check_conj_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r2;
	MR_r5 = MR_ctfield(1, MR_tempr3, 1);
	MR_r6 = MR_ctfield(1, MR_tempr3, 0);
	MR_tempr1 = MR_ctfield(0, MR_r6, 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,1)) {
		MR_GOTO_LAB(check_hlds__unique_modes__unique_modes_check_conj_7_0_i4);
	}
	MR_tempr2 = MR_ctfield(3, MR_tempr1, 1);
	if ((MR_r1 != MR_tempr2)) {
		MR_GOTO_LAB(check_hlds__unique_modes__unique_modes_check_conj_7_0_i4);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_ctfield(3, MR_tempr1, 2);
	MR_r3 = MR_r5;
	}
	MR_np_call_localret_ent(list__append_3_1,
		check_hlds__unique_modes__unique_modes_check_conj_7_0_i6);
MR_def_label(check_hlds__unique_modes__unique_modes_check_conj_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(check_hlds__unique_modes__unique_modes_check_conj_7_0_i23);
MR_def_label(check_hlds__unique_modes__unique_modes_check_conj_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r6;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_r4 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(check_hlds__unique_modes__unique_modes_check_conj_2_8_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__instmap__is_unreachable_1_0);
MR_decl_entry(check_hlds__modes__mode_info_remove_goals_live_vars_3_0);

MR_BEGIN_MODULE(check_hlds__unique_modes_module14)
	MR_init_entry1(check_hlds__unique_modes__unique_modes_check_conj_2_8_0);
	MR_init_label8(check_hlds__unique_modes__unique_modes_check_conj_2_8_0,2,3,4,5,8,10,7,11)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__unique_modes__unique_modes_check_conj_2_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_get_nonlocals_2_0,
		check_hlds__unique_modes__unique_modes_check_conj_2_8_0_i2);
MR_def_label(check_hlds__unique_modes__unique_modes_check_conj_2_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_remove_live_vars_3_0,
		check_hlds__unique_modes__unique_modes_check_conj_2_8_0_i3);
MR_def_label(check_hlds__unique_modes__unique_modes_check_conj_2_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(check_hlds__unique_modes__unique_modes_check_goal_6_0,
		check_hlds__unique_modes__unique_modes_check_conj_2_8_0_i4);
MR_def_label(check_hlds__unique_modes__unique_modes_check_conj_2_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(4) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_instmap_2_0,
		check_hlds__unique_modes__unique_modes_check_conj_2_8_0_i5);
MR_def_label(check_hlds__unique_modes__unique_modes_check_conj_2_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__instmap__is_unreachable_1_0,
		check_hlds__unique_modes__unique_modes_check_conj_2_8_0_i8);
MR_def_label(check_hlds__unique_modes__unique_modes_check_conj_2_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__unique_modes__unique_modes_check_conj_2_8_0_i7);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(check_hlds__modes__mode_info_remove_goals_live_vars_3_0,
		check_hlds__unique_modes__unique_modes_check_conj_2_8_0_i10);
MR_def_label(check_hlds__unique_modes__unique_modes_check_conj_2_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
MR_def_label(check_hlds__unique_modes__unique_modes_check_conj_2_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(check_hlds__unique_modes__unique_modes_check_conj_7_0,
		check_hlds__unique_modes__unique_modes_check_conj_2_8_0_i11);
MR_def_label(check_hlds__unique_modes__unique_modes_check_conj_2_8_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__unique_modes_module15)
	MR_init_entry1(check_hlds__unique_modes__unique_modes_check_disj_9_0);
	MR_init_label7(check_hlds__unique_modes__unique_modes_check_disj_9_0,4,5,6,7,8,9,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__unique_modes__unique_modes_check_disj_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__unique_modes__unique_modes_check_disj_9_0_i3);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_ctfield(1, MR_r1, 0);
	MR_sv(5) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_instmap_2_0,
		check_hlds__unique_modes__unique_modes_check_disj_9_0_i4);
MR_def_label(check_hlds__unique_modes__unique_modes_check_disj_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(check_hlds__unique_modes__prepare_for_disjunct_5_0,
		check_hlds__unique_modes__unique_modes_check_disj_9_0_i5);
MR_def_label(check_hlds__unique_modes__unique_modes_check_disj_9_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(check_hlds__unique_modes__unique_modes_check_goal_6_0,
		check_hlds__unique_modes__unique_modes_check_disj_9_0_i6);
MR_def_label(check_hlds__unique_modes__unique_modes_check_disj_9_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(4) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_instmap_2_0,
		check_hlds__unique_modes__unique_modes_check_disj_9_0_i7);
MR_def_label(check_hlds__unique_modes__unique_modes_check_disj_9_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_set_instmap_3_0,
		check_hlds__unique_modes__unique_modes_check_disj_9_0_i8);
MR_def_label(check_hlds__unique_modes__unique_modes_check_disj_9_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_np_localcall_lab(check_hlds__unique_modes__unique_modes_check_disj_9_0,
		check_hlds__unique_modes__unique_modes_check_disj_9_0_i9);
MR_def_label(check_hlds__unique_modes__unique_modes_check_disj_9_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr2, 1) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	MR_decr_sp_and_return(7);
	}
MR_def_label(check_hlds__unique_modes__unique_modes_check_disj_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_r4;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(check_hlds__modes__modecheck_functor_test_4_0);
MR_decl_entry(check_hlds__mode_util__fixup_switch_var_5_0);

MR_BEGIN_MODULE(check_hlds__unique_modes_module16)
	MR_init_entry1(check_hlds__unique_modes__unique_modes_check_case_list_8_0);
	MR_init_label8(check_hlds__unique_modes__unique_modes_check_case_list_8_0,4,5,6,9,11,8,12,13)
	MR_init_label5(check_hlds__unique_modes__unique_modes_check_case_list_8_0,14,15,16,17,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__unique_modes__unique_modes_check_case_list_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__unique_modes__unique_modes_check_case_list_8_0_i3);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_sv(2) = MR_tempr2;
	MR_sv(3) = MR_ctfield(1, MR_r1, 1);
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	MR_sv(5) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 1);
	MR_r1 = MR_tempr2;
	}
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_instmap_2_0,
		check_hlds__unique_modes__unique_modes_check_case_list_8_0_i4);
MR_def_label(check_hlds__unique_modes__unique_modes_check_case_list_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(check_hlds__modes__modecheck_functor_test_4_0,
		check_hlds__unique_modes__unique_modes_check_case_list_8_0_i5);
MR_def_label(check_hlds__unique_modes__unique_modes_check_case_list_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_instmap_2_0,
		check_hlds__unique_modes__unique_modes_check_case_list_8_0_i6);
MR_def_label(check_hlds__unique_modes__unique_modes_check_case_list_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__instmap__is_reachable_1_0,
		check_hlds__unique_modes__unique_modes_check_case_list_8_0_i9);
MR_def_label(check_hlds__unique_modes__unique_modes_check_case_list_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__unique_modes__unique_modes_check_case_list_8_0_i8);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(check_hlds__unique_modes__unique_modes_check_goal_6_0,
		check_hlds__unique_modes__unique_modes_check_case_list_8_0_i11);
MR_def_label(check_hlds__unique_modes__unique_modes_check_case_list_8_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_r2;
	MR_GOTO_LAB(check_hlds__unique_modes__unique_modes_check_case_list_8_0_i13);
MR_def_label(check_hlds__unique_modes__unique_modes_check_case_list_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__hlds__hlds_goal__true_goal_0_0,
		check_hlds__unique_modes__unique_modes_check_case_list_8_0_i12);
MR_def_label(check_hlds__unique_modes__unique_modes_check_case_list_8_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(6);
MR_def_label(check_hlds__unique_modes__unique_modes_check_case_list_8_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_instmap_2_0,
		check_hlds__unique_modes__unique_modes_check_case_list_8_0_i14);
MR_def_label(check_hlds__unique_modes__unique_modes_check_case_list_8_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(check_hlds__mode_util__fixup_switch_var_5_0,
		check_hlds__unique_modes__unique_modes_check_case_list_8_0_i15);
MR_def_label(check_hlds__unique_modes__unique_modes_check_case_list_8_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	MR_r2 = MR_sv(6);
	}
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_set_instmap_3_0,
		check_hlds__unique_modes__unique_modes_check_case_list_8_0_i16);
MR_def_label(check_hlds__unique_modes__unique_modes_check_case_list_8_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_np_localcall_lab(check_hlds__unique_modes__unique_modes_check_case_list_8_0,
		check_hlds__unique_modes__unique_modes_check_case_list_8_0_i17);
MR_def_label(check_hlds__unique_modes__unique_modes_check_case_list_8_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr2, 1) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	MR_decr_sp_and_return(7);
	}
MR_def_label(check_hlds__unique_modes__unique_modes_check_case_list_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
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
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__check_hlds__unique_modes__init(void);
void mercury__check_hlds__unique_modes__init_type_tables(void);
void mercury__check_hlds__unique_modes__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__check_hlds__unique_modes__write_out_proc_statics(FILE *fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__check_hlds__unique_modes__init_complexity_procs(void);
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

void mercury__check_hlds__unique_modes__write_out_proc_statics(FILE *fp)
{
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__check_hlds__unique_modes__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
