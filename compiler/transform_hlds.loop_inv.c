/*
** Automatically generated from `loop_inv.m'
** by the Mercury compiler,
** version rotd-2007-12-21, configured for i686-pc-linux-gnu.
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
INIT mercury__transform_hlds__loop_inv__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 87 "../library/table_builtin.int2"
#include "table_builtin.mh"

#line 27 "transform_hlds.loop_inv.c"
#line 136 "../library/io.int2"
#include "io.mh"

#line 31 "transform_hlds.loop_inv.c"
#line 144 "../library/io.int2"
#include "string.mh"

#line 35 "transform_hlds.loop_inv.c"
#line 33 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 39 "transform_hlds.loop_inv.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 43 "transform_hlds.loop_inv.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 47 "transform_hlds.loop_inv.c"
#line 48 "transform_hlds.loop_inv.c"
#include "transform_hlds.loop_inv.mh"

#line 51 "transform_hlds.loop_inv.c"
#line 52 "transform_hlds.loop_inv.c"
#ifndef TRANSFORM_HLDS__LOOP_INV_DECL_GUARD
#define TRANSFORM_HLDS__LOOP_INV_DECL_GUARD

#line 56 "transform_hlds.loop_inv.c"
#line 57 "transform_hlds.loop_inv.c"

#endif
#line 60 "transform_hlds.loop_inv.c"

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
	MR_Word * f5;
};
MR_STATIC_LINKAGE const struct mercury_type_0 mercury_common_0[];

struct mercury_type_1 {
	MR_Word * f1;
	MR_Code * f2;
	MR_Integer f3;
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

struct mercury_type_2 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[4];
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];

struct mercury_type_3 {
	MR_Word * f1[2];
};
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];

struct mercury_type_4 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[3];
};
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_common_4[];

struct mercury_type_5 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[7];
};
MR_STATIC_LINKAGE const struct mercury_type_5 mercury_common_5[];

struct mercury_type_6 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[6];
};
MR_STATIC_LINKAGE const struct mercury_type_6 mercury_common_6[];

struct mercury_type_7 {
	MR_Word * f1;
	MR_Integer f2;
	MR_Word * f3;
	MR_Word * f4;
};
MR_STATIC_LINKAGE const struct mercury_type_7 mercury_common_7[];

struct mercury_type_8 {
	MR_Word * f1[3];
};
MR_STATIC_LINKAGE const struct mercury_type_8 mercury_common_8[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_transform_hlds__loop_inv__type_ctor_info_rec_calls_0,
	mercury_data_transform_hlds__loop_inv__type_ctor_info_rec_call_0,
	mercury_data_transform_hlds__loop_inv__type_ctor_info_invariant_goal_candidates_acc_0,
	mercury_data_transform_hlds__loop_inv__type_ctor_info_inst_info_0,
	mercury_data_transform_hlds__loop_inv__type_ctor_info_gen_aux_proc_info_0;
MR_decl_label7(transform_hlds__loop_inv__common_goal_2_0, 6,11,15,19,12,10,5)
MR_decl_label8(transform_hlds__loop_inv__create_aux_pred_10_0, 2,3,4,5,6,7,8,9)
MR_decl_label8(transform_hlds__loop_inv__create_aux_pred_10_0, 10,11,12,13,14,15,16,17)
MR_decl_label7(transform_hlds__loop_inv__create_aux_pred_10_0, 18,19,20,21,23,24,25)
MR_decl_label8(transform_hlds__loop_inv__dont_hoist_2_6_0, 10,6,13,17,16,20,21,19)
MR_decl_label8(transform_hlds__loop_inv__dont_hoist_2_6_0, 25,26,24,23,30,31,35,33)
MR_decl_label8(transform_hlds__loop_inv__dont_hoist_2_6_0, 37,32,28,4,40,41,2,3)
MR_decl_label4(transform_hlds__loop_inv__gen_aux_proc_9_0, 2,3,4,5)
MR_decl_label8(transform_hlds__loop_inv__gen_out_proc_8_0, 2,3,4,5,6,7,8,9)
MR_decl_label1(transform_hlds__loop_inv__gen_out_proc_8_0, 10)
MR_decl_label8(transform_hlds__loop_inv__hoist_loop_invariants_7_0, 3,4,5,6,7,8,9,10)
MR_decl_label8(transform_hlds__loop_inv__hoist_loop_invariants_7_0, 12,13,11,14,15,16,17,18)
MR_decl_label7(transform_hlds__loop_inv__hoist_loop_invariants_7_0, 19,21,22,23,24,25,2)
MR_decl_label8(transform_hlds__loop_inv__inv_goals_vars_2_7_0, 8,12,16,9,6,23,24,25)
MR_decl_label8(transform_hlds__loop_inv__inv_goals_vars_2_7_0, 21,28,33,36,32,39,40,2)
MR_decl_label1(fn__transform_hlds__loop_inv__IntroducedFrom__func__compute_initial_aux_instmap__750__1_2_0, 2)
MR_decl_label1(fn__transform_hlds__loop_inv__IntroducedFrom__func__gen_aux_proc_switch__935__1_2_0, 2)
MR_decl_label1(fn__transform_hlds__loop_inv__IntroducedFrom__func__gen_out_proc_2__1030__1_3_0, 2)
MR_decl_label1(fn__transform_hlds__loop_inv__IntroducedFrom__func__inv_args__507__1_1_0, 1)
MR_decl_label3(fn__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_111_111_112_95_105_110_118_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_114_101_112_108_97_99_101_95_105_110_105_116_105_97_108_95_97_114_103_115_95_95_91_49_93_95_48_2_0, 3,6,5)
MR_decl_label3(fn__transform_hlds__loop_inv__add_output_3_0, 5,8,2)
MR_decl_label1(fn__transform_hlds__loop_inv__add_outputs_4_0, 2)
MR_decl_label1(fn__transform_hlds__loop_inv__add_recursive_call_2_0, 2)
MR_decl_label3(fn__transform_hlds__loop_inv__arg_to_maybe_inv_arg_3_0, 3,6,2)
MR_decl_label1(fn__transform_hlds__loop_inv__argmodes_3_0, 2)
MR_decl_label2(fn__transform_hlds__loop_inv__gen_aux_call_2_0, 5,2)
MR_decl_label8(fn__transform_hlds__loop_inv__gen_aux_proc_2_2_0, 53,8,7,15,52,54,19,55)
MR_decl_label8(fn__transform_hlds__loop_inv__gen_aux_proc_2_2_0, 21,56,23,57,25,58,27,59)
MR_decl_label5(fn__transform_hlds__loop_inv__gen_aux_proc_2_2_0, 29,30,31,60,33)
MR_decl_label5(fn__transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_2_0, 6,10,14,7,4)
MR_decl_label8(fn__transform_hlds__loop_inv__gen_out_proc_2_3_0, 38,5,10,11,49,13,50,15)
MR_decl_label8(fn__transform_hlds__loop_inv__gen_out_proc_2_3_0, 51,17,52,19,53,21,54,23)
MR_decl_label4(fn__transform_hlds__loop_inv__gen_out_proc_2_3_0, 24,25,55,27)
MR_decl_label8(fn__transform_hlds__loop_inv__goal_expr_inputs_2_0, 4,88,89,11,12,13,14,15)
MR_decl_label8(fn__transform_hlds__loop_inv__goal_expr_inputs_2_0, 92,20,18,86,23,25,87,28)
MR_decl_label8(fn__transform_hlds__loop_inv__goal_expr_inputs_2_0, 29,30,32,33,35,36,38,39)
MR_decl_label8(fn__transform_hlds__loop_inv__goal_expr_inputs_2_0, 41,42,44,45,47,48,50,51)
MR_decl_label8(fn__transform_hlds__loop_inv__goal_expr_outputs_2_0, 4,62,11,12,60,15,17,61)
MR_decl_label8(fn__transform_hlds__loop_inv__goal_expr_outputs_2_0, 20,21,22,24,25,27,28,30)
MR_decl_label8(fn__transform_hlds__loop_inv__goal_expr_outputs_2_0, 31,33,34,36,37,39,40,42)
MR_decl_label1(fn__transform_hlds__loop_inv__goal_expr_outputs_2_0, 43)
MR_decl_label3(fn__transform_hlds__loop_inv__input_arg_3_0, 2,5,1)
MR_decl_label2(fn__transform_hlds__loop_inv__inv_args_4_0, 2,3)
MR_decl_label8(fn__transform_hlds__loop_inv__invariant_goal_candidates_2_3_0, 52,6,13,14,16,18,21,23)
MR_decl_label7(fn__transform_hlds__loop_inv__invariant_goal_candidates_2_3_0, 24,26,28,30,31,33,34)
MR_decl_label4(fn__transform_hlds__loop_inv__invariant_goal_candidates_handle_non_recursive_call_2_0, 5,6,7,2)
MR_decl_label1(fn__transform_hlds__loop_inv__invariant_goal_candidates_keeping_path_candidates_3_0, 2)
MR_decl_label3(fn__transform_hlds__loop_inv__output_arg_3_0, 2,3,1)
MR_decl_label1(fn__transform_hlds__loop_inv__refine_candidate_inv_args_2_0, 2)
MR_decl_label3(fn__transform_hlds__loop_inv__refine_candidate_inv_args_2_2_0, 8,3,5)
MR_decl_label3(fn__transform_hlds__loop_inv__uniquely_used_args_3_0, 2,5,1)
MR_decl_label8(fn__transform_hlds__loop_inv__uniquely_used_vars_3_2_0, 4,52,6,8,10,55,12,13)
MR_decl_label8(fn__transform_hlds__loop_inv__uniquely_used_vars_3_2_0, 14,15,56,57,21,58,24,25)
MR_decl_label8(fn__transform_hlds__loop_inv__uniquely_used_vars_3_2_0, 27,29,59,32,33,34,35,60)
MR_decl_label1(fn__transform_hlds__loop_inv__uniquely_used_vars_3_2_0, 38)
MR_decl_label5(__Unify___transform_hlds__loop_inv__gen_aux_proc_info_0_0, 4,6,8,12,1)
MR_decl_label3(__Unify___transform_hlds__loop_inv__invariant_goal_candidates_acc_0_0, 4,8,1)
MR_decl_label6(__Compare___transform_hlds__loop_inv__gen_aux_proc_info_0_0, 3,2,5,9,13,37)
MR_decl_label4(__Compare___transform_hlds__loop_inv__invariant_goal_candidates_acc_0_0, 3,2,5,21)
MR_decl_static(fn__transform_hlds__loop_inv__case_goals_1_0)
MR_decl_static(fn__transform_hlds__loop_inv__add_recursive_call_2_0)
MR_decl_static(fn__transform_hlds__loop_inv__invariant_goal_candidates_handle_non_recursive_call_2_0)
MR_decl_static(fn__transform_hlds__loop_inv__this_file_0_0)
MR_decl_static(fn__transform_hlds__loop_inv__invariant_goal_candidates_2_3_0)
MR_decl_static(fn__transform_hlds__loop_inv__invariant_goal_candidates_keeping_path_candidates_3_0)
MR_decl_static(fn__transform_hlds__loop_inv__inv_args_4_0)
MR_decl_static(transform_hlds__loop_inv__inv_goals_vars_6_0)
MR_decl_static(transform_hlds__loop_inv__dont_hoist_4_0)
MR_decl_static(fn__transform_hlds__loop_inv__compute_initial_aux_instmap_2_0)
MR_decl_static(transform_hlds__loop_inv__create_aux_pred_10_0)
MR_decl_static(fn__transform_hlds__loop_inv__gen_aux_proc_list_2_0)
MR_decl_static(fn__transform_hlds__loop_inv__gen_aux_proc_switch_2_0)
MR_decl_static(fn__transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_2_0)
MR_decl_static(fn__transform_hlds__loop_inv__gen_aux_call_2_0)
MR_decl_static(fn__transform_hlds__loop_inv__gen_aux_proc_2_2_0)
MR_decl_static(transform_hlds__loop_inv__gen_aux_proc_9_0)
MR_decl_static(fn__transform_hlds__loop_inv__gen_out_proc_2_3_0)
MR_decl_static(transform_hlds__loop_inv__gen_out_proc_8_0)
MR_decl_static(fn__transform_hlds__loop_inv__argmodes_3_0)
MR_decl_static(fn__transform_hlds__loop_inv__uniquely_used_vars_2_2_0)
MR_decl_static(fn__transform_hlds__loop_inv__uniquely_used_vars_3_2_0)
MR_def_extern_entry(transform_hlds__loop_inv__hoist_loop_invariants_7_0)
MR_decl_static(transform_hlds__loop_inv__common_goal_2_0)
MR_decl_static(fn__transform_hlds__loop_inv__input_arg_3_0)
MR_decl_static(fn__transform_hlds__loop_inv__arg_to_maybe_inv_arg_3_0)
MR_decl_static(fn__transform_hlds__loop_inv__refine_candidate_inv_args_2_0)
MR_decl_static(fn__transform_hlds__loop_inv__refine_candidate_inv_args_2_2_0)
MR_decl_static(fn__transform_hlds__loop_inv__rhs_modes_1_0)
MR_decl_static(fn__transform_hlds__loop_inv__goal_expr_inputs_2_0)
MR_decl_static(fn__transform_hlds__loop_inv__goal_expr_outputs_2_0)
MR_decl_static(fn__transform_hlds__loop_inv__add_outputs_4_0)
MR_decl_static(transform_hlds__loop_inv__inv_goals_vars_2_7_0)
MR_decl_static(transform_hlds__loop_inv__dont_hoist_2_6_0)
MR_decl_static(fn__transform_hlds__loop_inv__add_output_3_0)
MR_decl_static(fn__transform_hlds__loop_inv__uniquely_used_args_3_0)
MR_decl_static(fn__transform_hlds__loop_inv__output_arg_3_0)
MR_decl_static(__Unify___transform_hlds__loop_inv__gen_aux_proc_info_0_0)
MR_decl_static(__Compare___transform_hlds__loop_inv__gen_aux_proc_info_0_0)
MR_decl_static(__Unify___transform_hlds__loop_inv__inst_info_0_0)
MR_decl_static(__Compare___transform_hlds__loop_inv__inst_info_0_0)
MR_decl_static(__Unify___transform_hlds__loop_inv__invariant_goal_candidates_acc_0_0)
MR_decl_static(__Compare___transform_hlds__loop_inv__invariant_goal_candidates_acc_0_0)
MR_decl_static(__Unify___transform_hlds__loop_inv__rec_call_0_0)
MR_decl_static(__Compare___transform_hlds__loop_inv__rec_call_0_0)
MR_decl_static(__Unify___transform_hlds__loop_inv__rec_calls_0_0)
MR_decl_static(__Compare___transform_hlds__loop_inv__rec_calls_0_0)
MR_decl_static(fn__transform_hlds__loop_inv__IntroducedFrom__func__case_goals__414__1_1_0)
MR_decl_static(fn__transform_hlds__loop_inv__IntroducedFrom__func__inv_args__507__1_1_0)
MR_decl_static(fn__transform_hlds__loop_inv__IntroducedFrom__func__compute_initial_aux_instmap__750__1_2_0)
MR_decl_static(fn__transform_hlds__loop_inv__IntroducedFrom__func__gen_aux_proc_switch__935__1_2_0)
MR_decl_static(fn__transform_hlds__loop_inv__IntroducedFrom__func__gen_out_proc_2__1030__1_3_0)
MR_decl_static(fn__transform_hlds__loop_inv__IntroducedFrom__func__rhs_modes__1357__1_1_0)
MR_decl_static(fn__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_111_111_112_95_105_110_118_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_114_101_112_108_97_99_101_95_105_110_105_116_105_97_108_95_97_114_103_115_95_95_91_49_93_95_48_2_0)

static const MR_UserClosureId
mercury_data__closure_layout__fn__transform_hlds__loop_inv__case_goals_1_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_case_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0;
static const MR_UserClosureId
mercury_data__closure_layout__fn__transform_hlds__loop_inv__inv_args_4_0_3;
static const MR_UserClosureId
mercury_data__closure_layout__fn__transform_hlds__loop_inv__uniquely_used_vars_3_2_0_4;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_foreign_arg_0;
static const MR_UserClosureId
mercury_data__closure_layout__fn__transform_hlds__loop_inv__uniquely_used_vars_3_2_0_5;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__loop_inv__hoist_loop_invariants_7_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__fn__transform_hlds__loop_inv__rhs_modes_1_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_uni_mode_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_mode_0;
static const MR_UserClosureId
mercury_data__closure_layout__fn__transform_hlds__loop_inv__goal_expr_inputs_2_0_6;
static const MR_UserClosureId
mercury_data__closure_layout__fn__transform_hlds__loop_inv__goal_expr_outputs_2_0_5;
static const struct mercury_type_0 mercury_common_0[8] =
{
{
(MR_Word *) &mercury_data__closure_layout__fn__transform_hlds__loop_inv__case_goals_1_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(hlds__hlds_goal, case),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal)
},
{
(MR_Word *) &mercury_data__closure_layout__fn__transform_hlds__loop_inv__inv_args_4_0_3,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(3,4),
MR_COMMON(3,2)
},
{
(MR_Word *) &mercury_data__closure_layout__fn__transform_hlds__loop_inv__uniquely_used_vars_3_2_0_4,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(hlds__hlds_goal, foreign_arg),
MR_COMMON(3,2)
},
{
(MR_Word *) &mercury_data__closure_layout__fn__transform_hlds__loop_inv__uniquely_used_vars_3_2_0_5,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(hlds__hlds_goal, foreign_arg),
MR_COMMON(3,2)
},
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__loop_inv__hoist_loop_invariants_7_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(3,14),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal)
},
{
(MR_Word *) &mercury_data__closure_layout__fn__transform_hlds__loop_inv__rhs_modes_1_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(hlds__hlds_goal, uni_mode),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode)
},
{
(MR_Word *) &mercury_data__closure_layout__fn__transform_hlds__loop_inv__goal_expr_inputs_2_0_6,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(hlds__hlds_goal, foreign_arg),
MR_COMMON(3,2)
},
{
(MR_Word *) &mercury_data__closure_layout__fn__transform_hlds__loop_inv__goal_expr_outputs_2_0_5,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(hlds__hlds_goal, foreign_arg),
MR_COMMON(3,2)
},
};

MR_decl_entry(fn__hlds__hlds_goal__foreign_arg_var_1_0);
static const struct mercury_type_1 mercury_common_1[10] =
{
{
MR_COMMON(0,0),
MR_ENTRY_AP(fn__transform_hlds__loop_inv__IntroducedFrom__func__case_goals__414__1_1_0),
0
},
{
MR_COMMON(4,0),
MR_ENTRY_AP(fn__transform_hlds__loop_inv__refine_candidate_inv_args_2_0),
0
},
{
MR_COMMON(0,1),
MR_ENTRY_AP(fn__transform_hlds__loop_inv__IntroducedFrom__func__inv_args__507__1_1_0),
0
},
{
MR_COMMON(4,1),
MR_ENTRY_AP(fn__transform_hlds__loop_inv__IntroducedFrom__func__compute_initial_aux_instmap__750__1_2_0),
0
},
{
MR_COMMON(0,2),
MR_ENTRY_AP(fn__hlds__hlds_goal__foreign_arg_var_1_0),
0
},
{
MR_COMMON(0,3),
MR_ENTRY_AP(fn__hlds__hlds_goal__foreign_arg_var_1_0),
0
},
{
MR_COMMON(4,7),
MR_ENTRY_AP(fn__transform_hlds__loop_inv__refine_candidate_inv_args_2_2_0),
0
},
{
MR_COMMON(0,5),
MR_ENTRY_AP(fn__transform_hlds__loop_inv__IntroducedFrom__func__rhs_modes__1357__1_1_0),
0
},
{
MR_COMMON(0,6),
MR_ENTRY_AP(fn__hlds__hlds_goal__foreign_arg_var_1_0),
0
},
{
MR_COMMON(0,7),
MR_ENTRY_AP(fn__hlds__hlds_goal__foreign_arg_var_1_0),
0
},
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__transform_hlds__loop_inv__invariant_goal_candidates_2_3_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__loop_inv__type_ctor_info_invariant_goal_candidates_acc_0;
static const MR_UserClosureId
mercury_data__closure_layout__fn__transform_hlds__loop_inv__invariant_goal_candidates_2_3_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__fn__transform_hlds__loop_inv__invariant_goal_candidates_2_3_0_3;
static const MR_UserClosureId
mercury_data__closure_layout__fn__transform_hlds__loop_inv__invariant_goal_candidates_2_3_0_4;
static const MR_UserClosureId
mercury_data__closure_layout__fn__transform_hlds__loop_inv__inv_args_4_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_module_info_0;
static const MR_UserClosureId
mercury_data__closure_layout__fn__transform_hlds__loop_inv__gen_out_proc_2_3_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__fn__transform_hlds__loop_inv__gen_out_proc_2_3_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__fn__transform_hlds__loop_inv__gen_out_proc_2_3_0_3;
static const MR_UserClosureId
mercury_data__closure_layout__fn__transform_hlds__loop_inv__uniquely_used_vars_3_2_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__fn__transform_hlds__loop_inv__uniquely_used_vars_3_2_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__fn__transform_hlds__loop_inv__uniquely_used_vars_3_2_0_3;
static const MR_UserClosureId
mercury_data__closure_layout__fn__transform_hlds__loop_inv__goal_expr_inputs_2_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__fn__transform_hlds__loop_inv__goal_expr_inputs_2_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__fn__transform_hlds__loop_inv__goal_expr_inputs_2_0_3;
static const MR_UserClosureId
mercury_data__closure_layout__fn__transform_hlds__loop_inv__goal_expr_inputs_2_0_4;
static const MR_UserClosureId
mercury_data__closure_layout__fn__transform_hlds__loop_inv__goal_expr_inputs_2_0_5;
static const MR_UserClosureId
mercury_data__closure_layout__fn__transform_hlds__loop_inv__goal_expr_outputs_2_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__fn__transform_hlds__loop_inv__goal_expr_outputs_2_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__fn__transform_hlds__loop_inv__goal_expr_outputs_2_0_3;
static const MR_UserClosureId
mercury_data__closure_layout__fn__transform_hlds__loop_inv__goal_expr_outputs_2_0_4;
static const MR_UserClosureId
mercury_data__closure_layout__fn__transform_hlds__loop_inv__add_outputs_4_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__loop_inv__inv_goals_vars_2_7_0_1;
static const struct mercury_type_2 mercury_common_2[22] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__fn__transform_hlds__loop_inv__invariant_goal_candidates_2_3_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_CTOR0_ADDR(transform_hlds__loop_inv, invariant_goal_candidates_acc),
MR_CTOR0_ADDR(transform_hlds__loop_inv, invariant_goal_candidates_acc)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__transform_hlds__loop_inv__invariant_goal_candidates_2_3_0_2,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_CTOR0_ADDR(transform_hlds__loop_inv, invariant_goal_candidates_acc),
MR_CTOR0_ADDR(transform_hlds__loop_inv, invariant_goal_candidates_acc)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__transform_hlds__loop_inv__invariant_goal_candidates_2_3_0_3,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_CTOR0_ADDR(transform_hlds__loop_inv, invariant_goal_candidates_acc),
MR_CTOR0_ADDR(transform_hlds__loop_inv, invariant_goal_candidates_acc)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__transform_hlds__loop_inv__invariant_goal_candidates_2_3_0_4,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_CTOR0_ADDR(transform_hlds__loop_inv, invariant_goal_candidates_acc),
MR_CTOR0_ADDR(transform_hlds__loop_inv, invariant_goal_candidates_acc)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__transform_hlds__loop_inv__inv_args_4_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_COMMON(3,2),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode),
MR_COMMON(3,4)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__transform_hlds__loop_inv__gen_out_proc_2_3_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__transform_hlds__loop_inv__gen_out_proc_2_3_0_2,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__transform_hlds__loop_inv__gen_out_proc_2_3_0_3,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_CTOR0_ADDR(hlds__hlds_goal, case),
MR_CTOR0_ADDR(hlds__hlds_goal, case)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__transform_hlds__loop_inv__uniquely_used_vars_3_2_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_COMMON(3,2),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode),
MR_COMMON(3,2)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__transform_hlds__loop_inv__uniquely_used_vars_3_2_0_2,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_COMMON(3,2),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode),
MR_COMMON(3,2)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__transform_hlds__loop_inv__uniquely_used_vars_3_2_0_3,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_COMMON(3,2),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode),
MR_COMMON(3,2)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__transform_hlds__loop_inv__goal_expr_inputs_2_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_COMMON(3,2),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode),
MR_COMMON(3,2)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__transform_hlds__loop_inv__goal_expr_inputs_2_0_2,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_COMMON(3,2),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode),
MR_COMMON(3,2)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__transform_hlds__loop_inv__goal_expr_inputs_2_0_3,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_COMMON(3,2),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode),
MR_COMMON(3,2)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__transform_hlds__loop_inv__goal_expr_inputs_2_0_4,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_COMMON(3,2),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode),
MR_COMMON(3,2)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__transform_hlds__loop_inv__goal_expr_inputs_2_0_5,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_COMMON(3,2),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode),
MR_COMMON(3,2)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__transform_hlds__loop_inv__goal_expr_outputs_2_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_COMMON(3,2),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode),
MR_COMMON(3,2)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__transform_hlds__loop_inv__goal_expr_outputs_2_0_2,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_COMMON(3,2),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode),
MR_COMMON(3,2)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__transform_hlds__loop_inv__goal_expr_outputs_2_0_3,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_COMMON(3,2),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode),
MR_COMMON(3,2)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__transform_hlds__loop_inv__goal_expr_outputs_2_0_4,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_COMMON(3,2),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode),
MR_COMMON(3,2)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__transform_hlds__loop_inv__add_outputs_4_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_COMMON(3,8),
MR_COMMON(3,2),
MR_COMMON(3,8),
MR_COMMON(3,8)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__loop_inv__inv_goals_vars_2_7_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_COMMON(3,8),
MR_COMMON(3,2),
MR_COMMON(3,8),
MR_COMMON(3,8)
}
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_maybe__type_ctor_info_maybe_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_maybe__type_ctor_info_maybe_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0;
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
static const struct mercury_type_3 mercury_common_3[15] =
{
{
{
MR_CTOR1_ADDR(term, var),
MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type)
}
},
{
{
MR_CTOR1_ADDR(maybe, maybe),
MR_TAG_COMMON(0,3,0)
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
MR_CTOR1_ADDR(term, var),
MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type)
}
},
{
{
MR_CTOR1_ADDR(maybe, maybe),
MR_COMMON(3,3)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_TAG_COMMON(0,3,1)
}
},
{
{
MR_CTOR1_ADDR(maybe, maybe),
MR_COMMON(3,3)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_COMMON(3,6)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_COMMON(3,3)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_TAG_COMMON(0,3,0)
}
},
{
{
MR_tbmkword(0, 0),
MR_tbmkword(0, 0)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_COMMON(3,13)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__transform_hlds__loop_inv__inv_args_4_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__fn__transform_hlds__loop_inv__compute_initial_aux_instmap_2_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__instmap__type_ctor_info_instmap_0;
static const MR_UserClosureId
mercury_data__closure_layout__fn__transform_hlds__loop_inv__gen_aux_proc_list_2_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__loop_inv__type_ctor_info_gen_aux_proc_info_0;
static const MR_UserClosureId
mercury_data__closure_layout__fn__transform_hlds__loop_inv__gen_aux_proc_switch_2_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__fn__transform_hlds__loop_inv__uniquely_used_vars_3_2_0_6;
static const MR_UserClosureId
mercury_data__closure_layout__fn__transform_hlds__loop_inv__uniquely_used_vars_3_2_0_7;
static const MR_UserClosureId
mercury_data__closure_layout__fn__transform_hlds__loop_inv__uniquely_used_vars_3_2_0_8;
static const MR_UserClosureId
mercury_data__closure_layout__fn__transform_hlds__loop_inv__refine_candidate_inv_args_2_0_1;
static const struct mercury_type_4 mercury_common_4[8] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__fn__transform_hlds__loop_inv__inv_args_4_0_2,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_COMMON(3,7),
MR_COMMON(3,7)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__transform_hlds__loop_inv__compute_initial_aux_instmap_2_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_CTOR0_ADDR(hlds__instmap, instmap),
MR_CTOR0_ADDR(hlds__instmap, instmap)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__transform_hlds__loop_inv__gen_aux_proc_list_2_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(transform_hlds__loop_inv, gen_aux_proc_info),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__transform_hlds__loop_inv__gen_aux_proc_switch_2_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(transform_hlds__loop_inv, gen_aux_proc_info),
MR_CTOR0_ADDR(hlds__hlds_goal, case),
MR_CTOR0_ADDR(hlds__hlds_goal, case)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__transform_hlds__loop_inv__uniquely_used_vars_3_2_0_6,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_COMMON(3,8)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__transform_hlds__loop_inv__uniquely_used_vars_3_2_0_7,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_COMMON(3,8)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__transform_hlds__loop_inv__uniquely_used_vars_3_2_0_8,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_COMMON(3,8)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__transform_hlds__loop_inv__refine_candidate_inv_args_2_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(3,4),
MR_COMMON(3,2),
MR_COMMON(3,4)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__loop_inv__inv_goals_vars_6_0_1;
static const struct mercury_type_5 mercury_common_5[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__loop_inv__inv_goals_vars_6_0_1,
(MR_Word *) (MR_Integer) 0
},
7,
{
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_COMMON(3,8),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_COMMON(3,9),
MR_COMMON(3,9),
MR_COMMON(3,8),
MR_COMMON(3,8)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__loop_inv__dont_hoist_4_0_1;
static const struct mercury_type_6 mercury_common_6[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__loop_inv__dont_hoist_4_0_1,
(MR_Word *) (MR_Integer) 0
},
6,
{
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_COMMON(3,9),
MR_COMMON(3,9),
MR_COMMON(3,8),
MR_COMMON(3,8)
}
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_tuple_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_module_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__instmap__type_ctor_info_instmap_0;
static const struct mercury_type_7 mercury_common_7[1] =
{
{
MR_CTOR0_ADDR(builtin, tuple),
2,
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(hlds__instmap, instmap)
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_pair__type_ctor_info_pair_2;
static const struct mercury_type_8 mercury_common_8[1] =
{
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_TAG_COMMON(0,3,10)
}
},
};

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0
}};

static const MR_FA_TypeInfo_Struct2 mercury_data_pair__ti_pair_2hlds__hlds_goal__type_ctor_info_hlds_goal_0list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
	&mercury_data_pair__type_ctor_info_pair_2,
{	(MR_TypeInfo) &mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0,
	(MR_TypeInfo) &mercury_data_list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0
}};

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1pair__ti_pair_2hlds__hlds_goal__type_ctor_info_hlds_goal_0list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_pair__ti_pair_2hlds__hlds_goal__type_ctor_info_hlds_goal_0list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0
}};

const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__loop_inv__type_ctor_info_rec_calls_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___transform_hlds__loop_inv__rec_calls_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___transform_hlds__loop_inv__rec_calls_0_0)),
	"transform_hlds.loop_inv",
	"rec_calls",
	{ 0 },
	{ (void *)&mercury_data_list__ti_list_1pair__ti_pair_2hlds__hlds_goal__type_ctor_info_hlds_goal_0list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0 },
	-1,
	0,
	NULL
};

const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__loop_inv__type_ctor_info_rec_call_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___transform_hlds__loop_inv__rec_call_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___transform_hlds__loop_inv__rec_call_0_0)),
	"transform_hlds.loop_inv",
	"rec_call",
	{ 0 },
	{ (void *)&mercury_data_pair__ti_pair_2hlds__hlds_goal__type_ctor_info_hlds_goal_0list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0 },
	-1,
	0,
	NULL
};

const MR_PseudoTypeInfo mercury_data_transform_hlds__loop_inv__field_types_invariant_goal_candidates_acc_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1pair__ti_pair_2hlds__hlds_goal__type_ctor_info_hlds_goal_0list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0
};

const MR_ConstString mercury_data_transform_hlds__loop_inv__field_names_invariant_goal_candidates_acc_0_0[] = {
	"path_candidates",
	"rec_calls"
};

static const MR_DuFunctorDesc mercury_data_transform_hlds__loop_inv__du_functor_desc_invariant_goal_candidates_acc_0_0 = {
	"invariant_goal_candidates_acc",
	2,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_transform_hlds__loop_inv__field_types_invariant_goal_candidates_acc_0_0,
	mercury_data_transform_hlds__loop_inv__field_names_invariant_goal_candidates_acc_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_transform_hlds__loop_inv__du_stag_ordered_invariant_goal_candidates_acc_0_0[] = {
	&mercury_data_transform_hlds__loop_inv__du_functor_desc_invariant_goal_candidates_acc_0_0

};

const MR_DuPtagLayout mercury_data_transform_hlds__loop_inv__du_ptag_ordered_invariant_goal_candidates_acc_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_transform_hlds__loop_inv__du_stag_ordered_invariant_goal_candidates_acc_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_transform_hlds__loop_inv__du_name_ordered_invariant_goal_candidates_acc_0[] = {
	&mercury_data_transform_hlds__loop_inv__du_functor_desc_invariant_goal_candidates_acc_0_0
};

const MR_Integer mercury_data_transform_hlds__loop_inv__functor_number_map_invariant_goal_candidates_acc_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__loop_inv__type_ctor_info_invariant_goal_candidates_acc_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___transform_hlds__loop_inv__invariant_goal_candidates_acc_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___transform_hlds__loop_inv__invariant_goal_candidates_acc_0_0)),
	"transform_hlds.loop_inv",
	"invariant_goal_candidates_acc",
	{ (void *)mercury_data_transform_hlds__loop_inv__du_name_ordered_invariant_goal_candidates_acc_0 },
	{ (void *)mercury_data_transform_hlds__loop_inv__du_ptag_ordered_invariant_goal_candidates_acc_0 },
	1,
	4,
	mercury_data_transform_hlds__loop_inv__functor_number_map_invariant_goal_candidates_acc_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_tuple_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_module_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__instmap__type_ctor_info_instmap_0;

static const MR_VA_TypeInfo_Struct2 mercury_data___vti_tuple_2hlds__hlds_module__type_ctor_info_module_info_0hlds__instmap__type_ctor_info_instmap_0 = {
	&mercury_data_builtin__type_ctor_info_tuple_0,
	2,
{	(MR_TypeInfo) &mercury_data_hlds__hlds_module__type_ctor_info_module_info_0,
	(MR_TypeInfo) &mercury_data_hlds__instmap__type_ctor_info_instmap_0
}};

const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__loop_inv__type_ctor_info_inst_info_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___transform_hlds__loop_inv__inst_info_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___transform_hlds__loop_inv__inst_info_0_0)),
	"transform_hlds.loop_inv",
	"inst_info",
	{ 0 },
	{ (void *)&mercury_data___vti_tuple_2hlds__hlds_module__type_ctor_info_module_info_0hlds__instmap__type_ctor_info_instmap_0 },
	-1,
	0,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

const MR_PseudoTypeInfo mercury_data_transform_hlds__loop_inv__field_types_gen_aux_proc_info_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_hlds__hlds_module__type_ctor_info_module_info_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0,
	(MR_PseudoTypeInfo) &mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
	(MR_PseudoTypeInfo) &mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0
};

const MR_ConstString mercury_data_transform_hlds__loop_inv__field_names_gen_aux_proc_info_0_0[] = {
	"module_info",
	"inv_goals",
	"pred_proc_id",
	"call_aux_goal"
};

static const MR_DuFunctorDesc mercury_data_transform_hlds__loop_inv__du_functor_desc_gen_aux_proc_info_0_0 = {
	"gen_aux_proc_info",
	4,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_transform_hlds__loop_inv__field_types_gen_aux_proc_info_0_0,
	mercury_data_transform_hlds__loop_inv__field_names_gen_aux_proc_info_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_transform_hlds__loop_inv__du_stag_ordered_gen_aux_proc_info_0_0[] = {
	&mercury_data_transform_hlds__loop_inv__du_functor_desc_gen_aux_proc_info_0_0

};

const MR_DuPtagLayout mercury_data_transform_hlds__loop_inv__du_ptag_ordered_gen_aux_proc_info_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_transform_hlds__loop_inv__du_stag_ordered_gen_aux_proc_info_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_transform_hlds__loop_inv__du_name_ordered_gen_aux_proc_info_0[] = {
	&mercury_data_transform_hlds__loop_inv__du_functor_desc_gen_aux_proc_info_0_0
};

const MR_Integer mercury_data_transform_hlds__loop_inv__functor_number_map_gen_aux_proc_info_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__loop_inv__type_ctor_info_gen_aux_proc_info_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___transform_hlds__loop_inv__gen_aux_proc_info_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___transform_hlds__loop_inv__gen_aux_proc_info_0_0)),
	"transform_hlds.loop_inv",
	"gen_aux_proc_info",
	{ (void *)mercury_data_transform_hlds__loop_inv__du_name_ordered_gen_aux_proc_info_0 },
	{ (void *)mercury_data_transform_hlds__loop_inv__du_ptag_ordered_gen_aux_proc_info_0 },
	1,
	4,
	mercury_data_transform_hlds__loop_inv__functor_number_map_gen_aux_proc_info_0
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__transform_hlds__loop_inv__case_goals_1_0_1 = {
{
MR_FUNCTION,
"transform_hlds.loop_inv",
"transform_hlds.loop_inv",
"lambda_loop_inv_m_414",
2,
0
},
"transform_hlds.loop_inv",
"loop_inv.m",
414,
"d1;c3;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__transform_hlds__loop_inv__invariant_goal_candidates_2_3_0_1 = {
{
MR_FUNCTION,
"transform_hlds.loop_inv",
"transform_hlds.loop_inv",
"invariant_goal_candidates_2",
4,
0
},
"transform_hlds.loop_inv",
"loop_inv.m",
356,
"d5;c6;d1;c3;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__transform_hlds__loop_inv__invariant_goal_candidates_2_3_0_2 = {
{
MR_FUNCTION,
"transform_hlds.loop_inv",
"transform_hlds.loop_inv",
"invariant_goal_candidates_keeping_path_candidates",
4,
0
},
"transform_hlds.loop_inv",
"loop_inv.m",
359,
"d5;c6;d2;c3;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__transform_hlds__loop_inv__invariant_goal_candidates_2_3_0_3 = {
{
MR_FUNCTION,
"transform_hlds.loop_inv",
"transform_hlds.loop_inv",
"invariant_goal_candidates_keeping_path_candidates",
4,
0
},
"transform_hlds.loop_inv",
"loop_inv.m",
366,
"d6;c6;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__transform_hlds__loop_inv__invariant_goal_candidates_2_3_0_4 = {
{
MR_FUNCTION,
"transform_hlds.loop_inv",
"transform_hlds.loop_inv",
"invariant_goal_candidates_keeping_path_candidates",
4,
0
},
"transform_hlds.loop_inv",
"loop_inv.m",
372,
"d7;c6;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__transform_hlds__loop_inv__inv_args_4_0_1 = {
{
MR_FUNCTION,
"transform_hlds.loop_inv",
"transform_hlds.loop_inv",
"arg_to_maybe_inv_arg",
4,
0
},
"transform_hlds.loop_inv",
"loop_inv.m",
502,
"d1;c7;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__transform_hlds__loop_inv__inv_args_4_0_2 = {
{
MR_FUNCTION,
"transform_hlds.loop_inv",
"transform_hlds.loop_inv",
"refine_candidate_inv_args",
3,
0
},
"transform_hlds.loop_inv",
"loop_inv.m",
505,
"d1;c9;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__transform_hlds__loop_inv__inv_args_4_0_3 = {
{
MR_FUNCTION,
"transform_hlds.loop_inv",
"transform_hlds.loop_inv",
"lambda_loop_inv_m_507",
2,
0
},
"transform_hlds.loop_inv",
"loop_inv.m",
507,
"d1;c11;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__loop_inv__inv_goals_vars_6_0_1 = {
{
MR_PREDICATE,
"transform_hlds.loop_inv",
"transform_hlds.loop_inv",
"inv_goals_vars_2",
7,
0
},
"transform_hlds.loop_inv",
"loop_inv.m",
562,
"d1;c7;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__loop_inv__dont_hoist_4_0_1 = {
{
MR_PREDICATE,
"transform_hlds.loop_inv",
"transform_hlds.loop_inv",
"dont_hoist_2",
6,
0
},
"transform_hlds.loop_inv",
"loop_inv.m",
623,
"d1;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__transform_hlds__loop_inv__compute_initial_aux_instmap_2_0_1 = {
{
MR_FUNCTION,
"transform_hlds.loop_inv",
"transform_hlds.loop_inv",
"lambda_loop_inv_m_750",
3,
0
},
"transform_hlds.loop_inv",
"loop_inv.m",
750,
"d1;c4;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__transform_hlds__loop_inv__gen_aux_proc_list_2_0_1 = {
{
MR_FUNCTION,
"transform_hlds.loop_inv",
"transform_hlds.loop_inv",
"gen_aux_proc_2",
3,
0
},
"transform_hlds.loop_inv",
"loop_inv.m",
928,
"d1;c4;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__transform_hlds__loop_inv__gen_aux_proc_switch_2_0_1 = {
{
MR_FUNCTION,
"transform_hlds.loop_inv",
"transform_hlds.loop_inv",
"lambda_loop_inv_m_935",
3,
0
},
"transform_hlds.loop_inv",
"loop_inv.m",
935,
"d1;c4;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__transform_hlds__loop_inv__gen_out_proc_2_3_0_1 = {
{
MR_FUNCTION,
"transform_hlds.loop_inv",
"transform_hlds.loop_inv",
"gen_out_proc_2",
4,
0
},
"transform_hlds.loop_inv",
"loop_inv.m",
1017,
"d5;c8;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__transform_hlds__loop_inv__gen_out_proc_2_3_0_2 = {
{
MR_FUNCTION,
"transform_hlds.loop_inv",
"transform_hlds.loop_inv",
"gen_out_proc_2",
4,
0
},
"transform_hlds.loop_inv",
"loop_inv.m",
1023,
"d6;c8;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__transform_hlds__loop_inv__gen_out_proc_2_3_0_3 = {
{
MR_FUNCTION,
"transform_hlds.loop_inv",
"transform_hlds.loop_inv",
"lambda_loop_inv_m_1030",
4,
0
},
"transform_hlds.loop_inv",
"loop_inv.m",
1030,
"d7;c8;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__transform_hlds__loop_inv__uniquely_used_vars_3_2_0_1 = {
{
MR_FUNCTION,
"transform_hlds.loop_inv",
"transform_hlds.loop_inv",
"uniquely_used_args",
4,
0
},
"transform_hlds.loop_inv",
"loop_inv.m",
1115,
"d1;c4;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__transform_hlds__loop_inv__uniquely_used_vars_3_2_0_2 = {
{
MR_FUNCTION,
"transform_hlds.loop_inv",
"transform_hlds.loop_inv",
"uniquely_used_args",
4,
0
},
"transform_hlds.loop_inv",
"loop_inv.m",
1119,
"d2;c4;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__transform_hlds__loop_inv__uniquely_used_vars_3_2_0_3 = {
{
MR_FUNCTION,
"transform_hlds.loop_inv",
"transform_hlds.loop_inv",
"uniquely_used_args",
4,
0
},
"transform_hlds.loop_inv",
"loop_inv.m",
1131,
"d3;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__transform_hlds__loop_inv__uniquely_used_vars_3_2_0_4 = {
{
MR_FUNCTION,
"hlds.hlds_goal",
"hlds.hlds_goal",
"foreign_arg_var",
2,
0
},
"transform_hlds.loop_inv",
"loop_inv.m",
1132,
"d3;c7;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__transform_hlds__loop_inv__uniquely_used_vars_3_2_0_5 = {
{
MR_FUNCTION,
"hlds.hlds_goal",
"hlds.hlds_goal",
"foreign_arg_var",
2,
0
},
"transform_hlds.loop_inv",
"loop_inv.m",
1133,
"d3;c10;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__transform_hlds__loop_inv__uniquely_used_vars_3_2_0_6 = {
{
MR_FUNCTION,
"transform_hlds.loop_inv",
"transform_hlds.loop_inv",
"uniquely_used_vars_2",
3,
0
},
"transform_hlds.loop_inv",
"loop_inv.m",
1140,
"d5;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__transform_hlds__loop_inv__uniquely_used_vars_3_2_0_7 = {
{
MR_FUNCTION,
"transform_hlds.loop_inv",
"transform_hlds.loop_inv",
"uniquely_used_vars_2",
3,
0
},
"transform_hlds.loop_inv",
"loop_inv.m",
1143,
"d6;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__transform_hlds__loop_inv__uniquely_used_vars_3_2_0_8 = {
{
MR_FUNCTION,
"transform_hlds.loop_inv",
"transform_hlds.loop_inv",
"uniquely_used_vars_2",
3,
0
},
"transform_hlds.loop_inv",
"loop_inv.m",
1146,
"d7;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__loop_inv__hoist_loop_invariants_7_0_1 = {
{
MR_PREDICATE,
"transform_hlds.loop_inv",
"transform_hlds.loop_inv",
"common_goal",
2,
0
},
"transform_hlds.loop_inv",
"loop_inv.m",
465,
"d2;c3;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__transform_hlds__loop_inv__refine_candidate_inv_args_2_0_1 = {
{
MR_FUNCTION,
"transform_hlds.loop_inv",
"transform_hlds.loop_inv",
"refine_candidate_inv_args_2",
3,
0
},
"transform_hlds.loop_inv",
"loop_inv.m",
527,
"d1;c3;t;c2;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__transform_hlds__loop_inv__rhs_modes_1_0_1 = {
{
MR_FUNCTION,
"transform_hlds.loop_inv",
"transform_hlds.loop_inv",
"lambda_loop_inv_m_1357",
2,
0
},
"transform_hlds.loop_inv",
"loop_inv.m",
1357,
"d1;c3;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__transform_hlds__loop_inv__goal_expr_inputs_2_0_1 = {
{
MR_FUNCTION,
"transform_hlds.loop_inv",
"transform_hlds.loop_inv",
"input_arg",
4,
0
},
"transform_hlds.loop_inv",
"loop_inv.m",
1206,
"d4;c4;d1;c3;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__transform_hlds__loop_inv__goal_expr_inputs_2_0_2 = {
{
MR_FUNCTION,
"transform_hlds.loop_inv",
"transform_hlds.loop_inv",
"input_arg",
4,
0
},
"transform_hlds.loop_inv",
"loop_inv.m",
1212,
"d4;c4;d2;c4;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__transform_hlds__loop_inv__goal_expr_inputs_2_0_3 = {
{
MR_FUNCTION,
"transform_hlds.loop_inv",
"transform_hlds.loop_inv",
"input_arg",
4,
0
},
"transform_hlds.loop_inv",
"loop_inv.m",
1192,
"d1;c4;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__transform_hlds__loop_inv__goal_expr_inputs_2_0_4 = {
{
MR_FUNCTION,
"transform_hlds.loop_inv",
"transform_hlds.loop_inv",
"input_arg",
4,
0
},
"transform_hlds.loop_inv",
"loop_inv.m",
1196,
"d2;c4;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__transform_hlds__loop_inv__goal_expr_inputs_2_0_5 = {
{
MR_FUNCTION,
"transform_hlds.loop_inv",
"transform_hlds.loop_inv",
"input_arg",
4,
0
},
"transform_hlds.loop_inv",
"loop_inv.m",
1199,
"d3;c4;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__transform_hlds__loop_inv__goal_expr_inputs_2_0_6 = {
{
MR_FUNCTION,
"hlds.hlds_goal",
"hlds.hlds_goal",
"foreign_arg_var",
2,
0
},
"transform_hlds.loop_inv",
"loop_inv.m",
1200,
"d3;c6;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__transform_hlds__loop_inv__goal_expr_outputs_2_0_1 = {
{
MR_FUNCTION,
"transform_hlds.loop_inv",
"transform_hlds.loop_inv",
"output_arg",
4,
0
},
"transform_hlds.loop_inv",
"loop_inv.m",
1302,
"d4;c4;d2;c3;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__transform_hlds__loop_inv__goal_expr_outputs_2_0_2 = {
{
MR_FUNCTION,
"transform_hlds.loop_inv",
"transform_hlds.loop_inv",
"output_arg",
4,
0
},
"transform_hlds.loop_inv",
"loop_inv.m",
1282,
"d1;c4;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__transform_hlds__loop_inv__goal_expr_outputs_2_0_3 = {
{
MR_FUNCTION,
"transform_hlds.loop_inv",
"transform_hlds.loop_inv",
"output_arg",
4,
0
},
"transform_hlds.loop_inv",
"loop_inv.m",
1286,
"d2;c4;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__transform_hlds__loop_inv__goal_expr_outputs_2_0_4 = {
{
MR_FUNCTION,
"transform_hlds.loop_inv",
"transform_hlds.loop_inv",
"output_arg",
4,
0
},
"transform_hlds.loop_inv",
"loop_inv.m",
1289,
"d3;c4;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__transform_hlds__loop_inv__goal_expr_outputs_2_0_5 = {
{
MR_FUNCTION,
"hlds.hlds_goal",
"hlds.hlds_goal",
"foreign_arg_var",
2,
0
},
"transform_hlds.loop_inv",
"loop_inv.m",
1290,
"d3;c6;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__transform_hlds__loop_inv__add_outputs_4_0_1 = {
{
MR_FUNCTION,
"transform_hlds.loop_inv",
"transform_hlds.loop_inv",
"add_output",
4,
0
},
"transform_hlds.loop_inv",
"loop_inv.m",
734,
"d1;c6;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__loop_inv__inv_goals_vars_2_7_0_1 = {
{
MR_FUNCTION,
"transform_hlds.loop_inv",
"transform_hlds.loop_inv",
"add_output",
4,
0
},
"transform_hlds.loop_inv",
"loop_inv.m",
734,
"d1;c6;"
};

extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_case_0;
MR_decl_entry(fn__list__map_2_0);

MR_BEGIN_MODULE(transform_hlds__loop_inv_module0)
	MR_init_entry1(fn__transform_hlds__loop_inv__case_goals_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__transform_hlds__loop_inv__case_goals_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, case);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_np_tailcall_ent(fn__list__map_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__list__reverse_1_0);

MR_BEGIN_MODULE(transform_hlds__loop_inv_module1)
	MR_init_entry1(fn__transform_hlds__loop_inv__add_recursive_call_2_0);
	MR_init_label1(fn__transform_hlds__loop_inv__add_recursive_call_2_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__transform_hlds__loop_inv__add_recursive_call_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_ctfield(0, MR_r2, 0);
	MR_np_call_localret_ent(fn__list__reverse_1_0,
		fn__transform_hlds__loop_inv__add_recursive_call_2_0_i2);
MR_def_label(fn__transform_hlds__loop_inv__add_recursive_call_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tempr4 = MR_sv(2);
	MR_tfield(1, MR_tempr2, 1) = MR_ctfield(0, MR_tempr4, 1);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_r1 = MR_tempr3;
	MR_tfield(0, MR_tempr3, 0) = MR_ctfield(0, MR_tempr4, 0);
	MR_tfield(0, MR_tempr3, 1) = MR_tempr2;
	MR_decr_sp_and_return(3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__hlds__hlds_goal__goal_info_get_determinism_1_0);
MR_decl_entry(hlds__code_model__determinism_to_code_model_2_0);
MR_decl_entry(fn__hlds__hlds_goal__goal_info_get_purity_1_0);

MR_BEGIN_MODULE(transform_hlds__loop_inv_module2)
	MR_init_entry1(fn__transform_hlds__loop_inv__invariant_goal_candidates_handle_non_recursive_call_2_0);
	MR_init_label4(fn__transform_hlds__loop_inv__invariant_goal_candidates_handle_non_recursive_call_2_0,5,6,7,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__transform_hlds__loop_inv__invariant_goal_candidates_handle_non_recursive_call_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r1;
	MR_tempr1 = MR_ctfield(0, MR_tempr2, 1);
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_r2;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_determinism_1_0,
		fn__transform_hlds__loop_inv__invariant_goal_candidates_handle_non_recursive_call_2_0_i5);
MR_def_label(fn__transform_hlds__loop_inv__invariant_goal_candidates_handle_non_recursive_call_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__code_model__determinism_to_code_model_2_0,
		fn__transform_hlds__loop_inv__invariant_goal_candidates_handle_non_recursive_call_2_0_i6);
MR_def_label(fn__transform_hlds__loop_inv__invariant_goal_candidates_handle_non_recursive_call_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 2 == (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(fn__transform_hlds__loop_inv__invariant_goal_candidates_handle_non_recursive_call_2_0_i2);
	}
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_purity_1_0,
		fn__transform_hlds__loop_inv__invariant_goal_candidates_handle_non_recursive_call_2_0_i7);
MR_def_label(fn__transform_hlds__loop_inv__invariant_goal_candidates_handle_non_recursive_call_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(fn__transform_hlds__loop_inv__invariant_goal_candidates_handle_non_recursive_call_2_0_i2);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tempr3 = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_ctfield(0, MR_tempr3, 0);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_r1 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_ctfield(0, MR_tempr3, 1);
	MR_decr_sp_and_return(4);
	}
MR_def_label(fn__transform_hlds__loop_inv__invariant_goal_candidates_handle_non_recursive_call_2_0,2)
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


MR_BEGIN_MODULE(transform_hlds__loop_inv_module3)
	MR_init_entry1(fn__transform_hlds__loop_inv__this_file_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__transform_hlds__loop_inv__this_file_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("loop_inv.m", 10);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__list__foldl_3_0);
MR_decl_entry(libs__compiler_util__unexpected_2_0);

MR_BEGIN_MODULE(transform_hlds__loop_inv_module4)
	MR_init_entry1(fn__transform_hlds__loop_inv__invariant_goal_candidates_2_3_0);
	MR_init_label8(fn__transform_hlds__loop_inv__invariant_goal_candidates_2_3_0,52,6,13,14,16,18,21,23)
	MR_init_label7(fn__transform_hlds__loop_inv__invariant_goal_candidates_2_3_0,24,26,28,30,31,33,34)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__transform_hlds__loop_inv__invariant_goal_candidates_2_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(fn__transform_hlds__loop_inv__invariant_goal_candidates_2_3_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_ctfield(0, MR_r2, 0);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r4),
		MR_LABEL_AP(fn__transform_hlds__loop_inv__invariant_goal_candidates_2_3_0_i14) MR_AND
		MR_LABEL_AP(fn__transform_hlds__loop_inv__invariant_goal_candidates_2_3_0_i6) MR_AND
		MR_LABEL_AP(fn__transform_hlds__loop_inv__invariant_goal_candidates_2_3_0_i14) MR_AND
		MR_LABEL_AP(fn__transform_hlds__loop_inv__invariant_goal_candidates_2_3_0_i13));
MR_def_label(fn__transform_hlds__loop_inv__invariant_goal_candidates_2_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr4 = MR_r4;
	MR_tempr1 = MR_ctfield(1, MR_tempr4, 0);
	MR_tempr5 = MR_r1;
	MR_tempr2 = MR_ctfield(0, MR_tempr5, 0);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(fn__transform_hlds__loop_inv__invariant_goal_candidates_2_3_0_i14);
	}
	MR_tempr1 = MR_ctfield(1, MR_tempr4, 1);
	MR_tempr3 = MR_ctfield(0, MR_tempr5, 1);
	if ((MR_tempr1 != MR_tempr3)) {
		MR_GOTO_LAB(fn__transform_hlds__loop_inv__invariant_goal_candidates_2_3_0_i14);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(fn__transform_hlds__loop_inv__add_recursive_call_2_0);
	}
MR_def_label(fn__transform_hlds__loop_inv__invariant_goal_candidates_2_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r4, 0),
		MR_LABEL_AP(fn__transform_hlds__loop_inv__invariant_goal_candidates_2_3_0_i14) MR_AND
		MR_LABEL_AP(fn__transform_hlds__loop_inv__invariant_goal_candidates_2_3_0_i16) MR_AND
		MR_LABEL_AP(fn__transform_hlds__loop_inv__invariant_goal_candidates_2_3_0_i21) MR_AND
		MR_LABEL_AP(fn__transform_hlds__loop_inv__invariant_goal_candidates_2_3_0_i23) MR_AND
		MR_LABEL_AP(fn__transform_hlds__loop_inv__invariant_goal_candidates_2_3_0_i26) MR_AND
		MR_LABEL_AP(fn__transform_hlds__loop_inv__invariant_goal_candidates_2_3_0_i28) MR_AND
		MR_LABEL_AP(fn__transform_hlds__loop_inv__invariant_goal_candidates_2_3_0_i30) MR_AND
		MR_LABEL_AP(fn__transform_hlds__loop_inv__invariant_goal_candidates_2_3_0_i33));
MR_def_label(fn__transform_hlds__loop_inv__invariant_goal_candidates_2_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(fn__transform_hlds__loop_inv__invariant_goal_candidates_handle_non_recursive_call_2_0);
MR_def_label(fn__transform_hlds__loop_inv__invariant_goal_candidates_2_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(3, MR_r4, 1);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(fn__transform_hlds__loop_inv__invariant_goal_candidates_2_3_0_i18);
	}
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(2,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__transform_hlds__loop_inv__invariant_goal_candidates_2_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__loop_inv, invariant_goal_candidates_acc);
	MR_r5 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_ctfield(3, MR_r4, 2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(fn__list__foldl_3_0);
	}
MR_def_label(fn__transform_hlds__loop_inv__invariant_goal_candidates_2_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(2,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__transform_hlds__loop_inv__invariant_goal_candidates_keeping_path_candidates_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__loop_inv, invariant_goal_candidates_acc);
	MR_r5 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_ctfield(3, MR_r4, 2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(fn__list__foldl_3_0);
	}
MR_def_label(fn__transform_hlds__loop_inv__invariant_goal_candidates_2_3_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(2,2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__transform_hlds__loop_inv__invariant_goal_candidates_keeping_path_candidates_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__loop_inv, invariant_goal_candidates_acc);
	MR_r5 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_ctfield(3, MR_r4, 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(fn__list__foldl_3_0);
	}
MR_def_label(fn__transform_hlds__loop_inv__invariant_goal_candidates_2_3_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_sv(2) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(2,3);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__transform_hlds__loop_inv__invariant_goal_candidates_keeping_path_candidates_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_sv(1) = MR_r3;
	MR_r1 = MR_ctfield(3, MR_r4, 3);
	}
	MR_np_call_localret_ent(fn__transform_hlds__loop_inv__case_goals_1_0,
		fn__transform_hlds__loop_inv__invariant_goal_candidates_2_3_0_i24);
MR_def_label(fn__transform_hlds__loop_inv__invariant_goal_candidates_2_3_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__loop_inv, invariant_goal_candidates_acc);
	MR_r3 = MR_sv(2);
	MR_r5 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(fn__list__foldl_3_0);
MR_def_label(fn__transform_hlds__loop_inv__invariant_goal_candidates_2_3_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_ctfield(3, MR_r4, 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(fn__transform_hlds__loop_inv__invariant_goal_candidates_keeping_path_candidates_3_0);
MR_def_label(fn__transform_hlds__loop_inv__invariant_goal_candidates_2_3_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_ctfield(3, MR_r4, 2);
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(fn__transform_hlds__loop_inv__invariant_goal_candidates_2_3_0_i52);
MR_def_label(fn__transform_hlds__loop_inv__invariant_goal_candidates_2_3_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tempr3 = MR_r4;
	MR_tfield(1, MR_tempr1, 0) = MR_ctfield(3, MR_tempr3, 3);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_ctfield(3, MR_tempr3, 2);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 2) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_ctfield(0, MR_r2, 1);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_ctfield(3, MR_tempr3, 4);
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__transform_hlds__loop_inv__invariant_goal_candidates_keeping_path_candidates_3_0,
		fn__transform_hlds__loop_inv__invariant_goal_candidates_2_3_0_i31);
MR_def_label(fn__transform_hlds__loop_inv__invariant_goal_candidates_2_3_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(fn__transform_hlds__loop_inv__invariant_goal_candidates_keeping_path_candidates_3_0);
MR_def_label(fn__transform_hlds__loop_inv__invariant_goal_candidates_2_3_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__transform_hlds__loop_inv__this_file_0_0,
		fn__transform_hlds__loop_inv__invariant_goal_candidates_2_3_0_i34);
MR_def_label(fn__transform_hlds__loop_inv__invariant_goal_candidates_2_3_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("invariant_goal_candidates_2/3: shorthand/1 in hlds_goal", 55);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__loop_inv_module5)
	MR_init_entry1(fn__transform_hlds__loop_inv__invariant_goal_candidates_keeping_path_candidates_3_0);
	MR_init_label1(fn__transform_hlds__loop_inv__invariant_goal_candidates_keeping_path_candidates_3_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__transform_hlds__loop_inv__invariant_goal_candidates_keeping_path_candidates_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_np_call_localret_ent(fn__transform_hlds__loop_inv__invariant_goal_candidates_2_3_0,
		fn__transform_hlds__loop_inv__invariant_goal_candidates_keeping_path_candidates_3_0_i2);
MR_def_label(fn__transform_hlds__loop_inv__invariant_goal_candidates_keeping_path_candidates_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_sv(1), 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_r1, 1);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_mode_0;
MR_decl_entry(fn__list__map_corresponding_3_0);
MR_decl_entry(fn__list__filter_map_2_0);

MR_BEGIN_MODULE(transform_hlds__loop_inv_module6)
	MR_init_entry1(fn__transform_hlds__loop_inv__inv_args_4_0);
	MR_init_label2(fn__transform_hlds__loop_inv__inv_args_4_0,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__transform_hlds__loop_inv__inv_args_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(2,4);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__transform_hlds__loop_inv__arg_to_maybe_inv_arg_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_sv(1) = MR_r4;
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(0,3,1);
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_r1 = MR_sv(3);
	MR_r5 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode);
	MR_r6 = MR_r3;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__list__map_corresponding_3_0,
		fn__transform_hlds__loop_inv__inv_args_4_0_i2);
MR_def_label(fn__transform_hlds__loop_inv__inv_args_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,3,5);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(fn__list__foldl_3_0,
		fn__transform_hlds__loop_inv__inv_args_4_0_i3);
MR_def_label(fn__transform_hlds__loop_inv__inv_args_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,1,2);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(fn__list__filter_map_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__foldl2_6_0);

MR_BEGIN_MODULE(transform_hlds__loop_inv_module7)
	MR_init_entry1(transform_hlds__loop_inv__inv_goals_vars_6_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__loop_inv__inv_goals_vars_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(5,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__loop_inv__inv_goals_vars_2_7_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tfield(0, MR_tempr1, 4) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,3,10);
	MR_r5 = MR_r3;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,3,11);
	MR_r7 = MR_r4;
	MR_r4 = MR_tempr1;
	MR_r6 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_tailcall_ent(list__foldl2_6_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__loop_inv_module8)
	MR_init_entry1(transform_hlds__loop_inv__dont_hoist_4_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__loop_inv__dont_hoist_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(6,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__loop_inv__dont_hoist_2_6_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r5 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,3,10);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,3,11);
	MR_r6 = (MR_Word) MR_tbmkword(0, 0);
	MR_r7 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_tailcall_ent(list__foldl2_6_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__loop_inv_module9)
	MR_init_entry1(fn__transform_hlds__loop_inv__compute_initial_aux_instmap_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__transform_hlds__loop_inv__compute_initial_aux_instmap_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r5 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__instmap, instmap);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,1,3);
	MR_np_tailcall_ent(fn__list__foldl_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__f_108_105_115_116_95_95_43_43_2_0);
MR_decl_entry(hlds__hlds_module__module_info_get_name_2_0);
MR_decl_entry(hlds__hlds_module__module_info_pred_proc_info_5_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_goal_2_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_typevarset_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_vartypes_2_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_class_context_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_rtti_varmaps_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_varset_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_inst_varset_2_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_markers_2_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_origin_2_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_var_name_remap_2_0);
MR_decl_entry(fn__hlds__hlds_pred__pred_info_name_1_0);
MR_decl_entry(fn__hlds__hlds_pred__pred_info_is_pred_or_func_1_0);
MR_decl_entry(fn__hlds__hlds_goal__goal_info_get_context_1_0);
MR_decl_entry(term__context_line_2_0);
MR_decl_entry(hlds__hlds_pred__proc_id_to_int_2_0);
MR_decl_entry(fn__string__format_2_0);
MR_decl_entry(parse_tree__prog_util__make_pred_name_with_context_7_0);
MR_decl_entry(hlds__hlds_pred__define_new_pred_19_0);

MR_BEGIN_MODULE(transform_hlds__loop_inv_module10)
	MR_init_entry1(transform_hlds__loop_inv__create_aux_pred_10_0);
	MR_init_label8(transform_hlds__loop_inv__create_aux_pred_10_0,2,3,4,5,6,7,8,9)
	MR_init_label8(transform_hlds__loop_inv__create_aux_pred_10_0,10,11,12,13,14,15,16,17)
	MR_init_label7(transform_hlds__loop_inv__create_aux_pred_10_0,18,19,20,21,23,24,25)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__loop_inv__create_aux_pred_10_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(20);
	MR_sv(20) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_r5;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 1);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,3,0);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		transform_hlds__loop_inv__create_aux_pred_10_0_i2);
MR_def_label(transform_hlds__loop_inv__create_aux_pred_10_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_name_2_0,
		transform_hlds__loop_inv__create_aux_pred_10_0_i3);
MR_def_label(transform_hlds__loop_inv__create_aux_pred_10_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_proc_info_5_0,
		transform_hlds__loop_inv__create_aux_pred_10_0_i4);
MR_def_label(transform_hlds__loop_inv__create_aux_pred_10_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(8) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_goal_2_0,
		transform_hlds__loop_inv__create_aux_pred_10_0_i5);
MR_def_label(transform_hlds__loop_inv__create_aux_pred_10_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(9) = MR_tempr1;
	MR_sv(10) = MR_ctfield(0, MR_tempr1, 1);
	MR_r1 = MR_sv(7);
	}
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_typevarset_2_0,
		transform_hlds__loop_inv__create_aux_pred_10_0_i6);
MR_def_label(transform_hlds__loop_inv__create_aux_pred_10_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_vartypes_2_0,
		transform_hlds__loop_inv__create_aux_pred_10_0_i7);
MR_def_label(transform_hlds__loop_inv__create_aux_pred_10_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_class_context_2_0,
		transform_hlds__loop_inv__create_aux_pred_10_0_i8);
MR_def_label(transform_hlds__loop_inv__create_aux_pred_10_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(13) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_rtti_varmaps_2_0,
		transform_hlds__loop_inv__create_aux_pred_10_0_i9);
MR_def_label(transform_hlds__loop_inv__create_aux_pred_10_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(14) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_varset_2_0,
		transform_hlds__loop_inv__create_aux_pred_10_0_i10);
MR_def_label(transform_hlds__loop_inv__create_aux_pred_10_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_sv(8) = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_inst_varset_2_0,
		transform_hlds__loop_inv__create_aux_pred_10_0_i11);
MR_def_label(transform_hlds__loop_inv__create_aux_pred_10_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(15) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_markers_2_0,
		transform_hlds__loop_inv__create_aux_pred_10_0_i12);
MR_def_label(transform_hlds__loop_inv__create_aux_pred_10_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(16) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_origin_2_0,
		transform_hlds__loop_inv__create_aux_pred_10_0_i13);
MR_def_label(transform_hlds__loop_inv__create_aux_pred_10_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(17) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_var_name_remap_2_0,
		transform_hlds__loop_inv__create_aux_pred_10_0_i14);
MR_def_label(transform_hlds__loop_inv__create_aux_pred_10_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(18) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_name_1_0,
		transform_hlds__loop_inv__create_aux_pred_10_0_i15);
MR_def_label(transform_hlds__loop_inv__create_aux_pred_10_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_sv(7) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_is_pred_or_func_1_0,
		transform_hlds__loop_inv__create_aux_pred_10_0_i16);
MR_def_label(transform_hlds__loop_inv__create_aux_pred_10_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_sv(10) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_context_1_0,
		transform_hlds__loop_inv__create_aux_pred_10_0_i17);
MR_def_label(transform_hlds__loop_inv__create_aux_pred_10_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(term__context_line_2_0,
		transform_hlds__loop_inv__create_aux_pred_10_0_i18);
MR_def_label(transform_hlds__loop_inv__create_aux_pred_10_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_sv(4) = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_id_to_int_2_0,
		transform_hlds__loop_inv__create_aux_pred_10_0_i19);
MR_def_label(transform_hlds__loop_inv__create_aux_pred_10_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tempr3 = MR_r1;
	MR_tfield(1, MR_tempr1, 0) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(19) = MR_tempr3;
	MR_r1 = (MR_Word) MR_string_const("loop_inv_%d", 11);
	}
	MR_np_call_localret_ent(fn__string__format_2_0,
		transform_hlds__loop_inv__create_aux_pred_10_0_i20);
MR_def_label(transform_hlds__loop_inv__create_aux_pred_10_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r3 = MR_sv(10);
	MR_r4 = MR_sv(7);
	MR_r5 = MR_sv(4);
	MR_r6 = (MR_Integer) 1;
	MR_np_call_localret_ent(parse_tree__prog_util__make_pred_name_with_context_7_0,
		transform_hlds__loop_inv__create_aux_pred_10_0_i21);
MR_def_label(transform_hlds__loop_inv__create_aux_pred_10_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(transform_hlds__loop_inv__create_aux_pred_10_0_i23);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(19);
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 3);
	MR_tfield(2, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(2, MR_tempr2, 1) = MR_sv(17);
	MR_tfield(2, MR_tempr2, 2) = MR_sv(3);
	MR_r4 = MR_sv(1);
	MR_r15 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_r2 = MR_sv(9);
	MR_r6 = MR_sv(11);
	MR_r7 = MR_sv(12);
	MR_r8 = MR_sv(13);
	MR_r9 = MR_sv(14);
	MR_r10 = MR_sv(8);
	MR_r11 = MR_sv(15);
	MR_r12 = MR_sv(16);
	MR_r14 = MR_sv(18);
	MR_r5 = MR_ctfield(0, MR_r1, 0);
	MR_r1 = MR_tempr2;
	MR_r13 = (MR_Integer) 1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__define_new_pred_19_0,
		transform_hlds__loop_inv__create_aux_pred_10_0_i24);
MR_def_label(transform_hlds__loop_inv__create_aux_pred_10_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(19);
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 3);
	MR_tfield(2, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(2, MR_tempr2, 1) = MR_sv(17);
	MR_tfield(2, MR_tempr2, 2) = MR_sv(3);
	MR_r4 = MR_sv(1);
	MR_r15 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_r2 = MR_sv(9);
	MR_r6 = MR_sv(11);
	MR_r7 = MR_sv(12);
	MR_r8 = MR_sv(13);
	MR_r9 = MR_sv(14);
	MR_r10 = MR_sv(8);
	MR_r11 = MR_sv(15);
	MR_r12 = MR_sv(16);
	MR_r14 = MR_sv(18);
	MR_r5 = MR_ctfield(1, MR_r1, 1);
	MR_r1 = MR_tempr2;
	MR_r13 = (MR_Integer) 1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__define_new_pred_19_0,
		transform_hlds__loop_inv__create_aux_pred_10_0_i24);
MR_def_label(transform_hlds__loop_inv__create_aux_pred_10_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r4;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r1;
	MR_tempr2 = MR_r3;
	MR_sv(3) = MR_tempr2;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_ctfield(0, MR_tempr1, 0);
	MR_r3 = MR_ctfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_proc_info_5_0,
		transform_hlds__loop_inv__create_aux_pred_10_0_i25);
MR_def_label(transform_hlds__loop_inv__create_aux_pred_10_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_r5 = MR_sv(3);
	MR_decr_sp_and_return(20);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__loop_inv_module11)
	MR_init_entry1(fn__transform_hlds__loop_inv__gen_aux_proc_list_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__transform_hlds__loop_inv__gen_aux_proc_list_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(4,2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__transform_hlds__loop_inv__gen_aux_proc_2_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r4 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_np_tailcall_ent(fn__list__map_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__loop_inv_module12)
	MR_init_entry1(fn__transform_hlds__loop_inv__gen_aux_proc_switch_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__transform_hlds__loop_inv__gen_aux_proc_switch_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(4,3);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__transform_hlds__loop_inv__IntroducedFrom__func__gen_aux_proc_switch__935__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, case);
	MR_r4 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, case);
	MR_np_tailcall_ent(fn__list__map_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__member_2_1);
MR_decl_entry(__Unify___hlds__hlds_goal__hlds_goal_expr_0_0);
MR_declare_entry(MR_do_redo);
MR_decl_entry(__Unify___list__list_1_0);
MR_decl_entry(fn__hlds__hlds_goal__true_goal_0_0);

MR_BEGIN_MODULE(transform_hlds__loop_inv_module13)
	MR_init_entry1(fn__transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_2_0);
	MR_init_label5(fn__transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_2_0,6,10,14,7,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(4) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(5) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(6));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(fn__transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_2_0_i4);
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_ctfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(list__member_2_1,
		fn__transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_2_0_i6);
MR_def_label(fn__transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_ctfield(0, MR_sv(1), 0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_r1, 0);
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_r2;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(__Unify___hlds__hlds_goal__hlds_goal_expr_0_0,
		fn__transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_2_0_i10);
MR_def_label(fn__transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(fn__transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_2_0_i7);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_tempr2 = MR_sv(3);
	MR_r2 = MR_tempr2;
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	if (MR_PTAG_TESTR(MR_tempr2,1)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_r4 = MR_ctfield(1, MR_tempr1, 0);
	MR_r5 = MR_ctfield(1, MR_tempr2, 0);
	if ((MR_r4 != MR_r5)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_r4 = MR_ctfield(1, MR_tempr1, 1);
	MR_r5 = MR_ctfield(1, MR_tempr2, 1);
	if ((MR_r4 != MR_r5)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_r2 = MR_ctfield(1, MR_tempr1, 2);
	MR_r3 = MR_ctfield(1, MR_sv(3), 2);
	}
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		fn__transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_2_0_i14);
MR_def_label(fn__transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
MR_def_label(fn__transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_restore_maxfr(MR_sv(6));
	MR_redoip_slot_word(MR_maxfr) = MR_sv(4);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(5);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(fn__hlds__hlds_goal__true_goal_0_0);
MR_def_label(fn__transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_redoip_slot_word(MR_maxfr) = MR_sv(4);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(5);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__libs__compiler_util__unexpected_2_0);

MR_BEGIN_MODULE(transform_hlds__loop_inv_module14)
	MR_init_entry1(fn__transform_hlds__loop_inv__gen_aux_call_2_0);
	MR_init_label2(fn__transform_hlds__loop_inv__gen_aux_call_2_0,5,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__transform_hlds__loop_inv__gen_aux_call_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(0, MR_r1, 0);
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(fn__transform_hlds__loop_inv__gen_aux_call_2_0_i2);
	}
	MR_tempr2 = MR_ctfield(0, MR_r2, 0);
	if (MR_PTAG_TESTR(MR_tempr2,1)) {
		MR_GOTO_LAB(fn__transform_hlds__loop_inv__gen_aux_call_2_0_i2);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_ctfield(0, MR_r2, 1);
	MR_r1 = MR_ctfield(1, MR_tempr2, 2);
	MR_r2 = MR_ctfield(1, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(fn__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_111_111_112_95_105_110_118_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_114_101_112_108_97_99_101_95_105_110_105_116_105_97_108_95_97_114_103_115_95_95_91_49_93_95_48_2_0,
		fn__transform_hlds__loop_inv__gen_aux_call_2_0_i5);
MR_def_label(fn__transform_hlds__loop_inv__gen_aux_call_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 6);
	MR_tempr3 = MR_sv(1);
	MR_tfield(1, MR_tempr1, 0) = MR_ctfield(1, MR_tempr3, 0);
	MR_tfield(1, MR_tempr1, 1) = MR_ctfield(1, MR_tempr3, 1);
	MR_tfield(1, MR_tempr1, 2) = MR_r1;
	MR_tfield(1, MR_tempr1, 3) = MR_ctfield(1, MR_tempr3, 3);
	MR_tfield(1, MR_tempr1, 4) = MR_ctfield(1, MR_tempr3, 4);
	MR_tfield(1, MR_tempr1, 5) = MR_ctfield(1, MR_tempr3, 5);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_r1 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(2);
	MR_decr_sp_and_return(3);
	}
MR_def_label(fn__transform_hlds__loop_inv__gen_aux_call_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = (MR_Word) MR_string_const("loop_inv.m", 10);
	MR_r3 = (MR_Word) MR_string_const("gen_aux_call/2: args not both ordinary calls", 44);
	MR_np_tailcall_ent(fn__libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___hlds__hlds_pred__pred_proc_id_0_0);

MR_BEGIN_MODULE(transform_hlds__loop_inv_module15)
	MR_init_entry1(fn__transform_hlds__loop_inv__gen_aux_proc_2_2_0);
	MR_init_label8(fn__transform_hlds__loop_inv__gen_aux_proc_2_2_0,53,8,7,15,52,54,19,55)
	MR_init_label8(fn__transform_hlds__loop_inv__gen_aux_proc_2_2_0,21,56,23,57,25,58,27,59)
	MR_init_label5(fn__transform_hlds__loop_inv__gen_aux_proc_2_2_0,29,30,31,60,33)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__transform_hlds__loop_inv__gen_aux_proc_2_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_ctfield(0, MR_r2, 0);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r3),
		MR_LABEL_AP(fn__transform_hlds__loop_inv__gen_aux_proc_2_2_0_i52) MR_AND
		MR_LABEL_AP(fn__transform_hlds__loop_inv__gen_aux_proc_2_2_0_i53) MR_AND
		MR_LABEL_AP(fn__transform_hlds__loop_inv__gen_aux_proc_2_2_0_i52) MR_AND
		MR_LABEL_AP(fn__transform_hlds__loop_inv__gen_aux_proc_2_2_0_i15));
MR_def_label(fn__transform_hlds__loop_inv__gen_aux_proc_2_2_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tempr2 = MR_r3;
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(1, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(1, MR_tempr2, 1);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_ctfield(0, MR_sv(1), 2);
	}
	MR_np_call_localret_ent(__Unify___hlds__hlds_pred__pred_proc_id_0_0,
		fn__transform_hlds__loop_inv__gen_aux_proc_2_2_0_i8);
MR_def_label(fn__transform_hlds__loop_inv__gen_aux_proc_2_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__transform_hlds__loop_inv__gen_aux_proc_2_2_0_i7);
	}
	MR_r1 = MR_ctfield(0, MR_sv(1), 3);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(fn__transform_hlds__loop_inv__gen_aux_call_2_0);
MR_def_label(fn__transform_hlds__loop_inv__gen_aux_proc_2_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(fn__transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_2_0);
MR_def_label(fn__transform_hlds__loop_inv__gen_aux_proc_2_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r3, 0),
		MR_LABEL_AP(fn__transform_hlds__loop_inv__gen_aux_proc_2_2_0_i52) MR_AND
		MR_LABEL_AP(fn__transform_hlds__loop_inv__gen_aux_proc_2_2_0_i54) MR_AND
		MR_LABEL_AP(fn__transform_hlds__loop_inv__gen_aux_proc_2_2_0_i55) MR_AND
		MR_LABEL_AP(fn__transform_hlds__loop_inv__gen_aux_proc_2_2_0_i56) MR_AND
		MR_LABEL_AP(fn__transform_hlds__loop_inv__gen_aux_proc_2_2_0_i57) MR_AND
		MR_LABEL_AP(fn__transform_hlds__loop_inv__gen_aux_proc_2_2_0_i58) MR_AND
		MR_LABEL_AP(fn__transform_hlds__loop_inv__gen_aux_proc_2_2_0_i59) MR_AND
		MR_LABEL_AP(fn__transform_hlds__loop_inv__gen_aux_proc_2_2_0_i60));
MR_def_label(fn__transform_hlds__loop_inv__gen_aux_proc_2_2_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(fn__transform_hlds__loop_inv__gen_aux_proc_handle_non_recursive_call_2_0);
MR_def_label(fn__transform_hlds__loop_inv__gen_aux_proc_2_2_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(1) = MR_ctfield(3, MR_tempr1, 1);
	MR_sv(5) = MR_ctfield(0, MR_r2, 1);
	MR_r2 = MR_ctfield(3, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(fn__transform_hlds__loop_inv__gen_aux_proc_list_2_0,
		fn__transform_hlds__loop_inv__gen_aux_proc_2_2_0_i19);
MR_def_label(fn__transform_hlds__loop_inv__gen_aux_proc_2_2_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_r1 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(5);
	MR_decr_sp_and_return(6);
	}
MR_def_label(fn__transform_hlds__loop_inv__gen_aux_proc_2_2_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(5) = MR_ctfield(0, MR_r2, 1);
	MR_r2 = MR_ctfield(3, MR_r3, 1);
	MR_np_call_localret_ent(fn__transform_hlds__loop_inv__gen_aux_proc_list_2_0,
		fn__transform_hlds__loop_inv__gen_aux_proc_2_2_0_i21);
MR_def_label(fn__transform_hlds__loop_inv__gen_aux_proc_2_2_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_r1 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(5);
	MR_decr_sp_and_return(6);
	}
MR_def_label(fn__transform_hlds__loop_inv__gen_aux_proc_2_2_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(1) = MR_ctfield(3, MR_tempr1, 1);
	MR_sv(2) = MR_ctfield(3, MR_tempr1, 2);
	MR_sv(5) = MR_ctfield(0, MR_r2, 1);
	MR_r2 = MR_ctfield(3, MR_tempr1, 3);
	}
	MR_np_call_localret_ent(fn__transform_hlds__loop_inv__gen_aux_proc_switch_2_0,
		fn__transform_hlds__loop_inv__gen_aux_proc_2_2_0_i23);
MR_def_label(fn__transform_hlds__loop_inv__gen_aux_proc_2_2_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 3) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_r1 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(5);
	MR_decr_sp_and_return(6);
	}
MR_def_label(fn__transform_hlds__loop_inv__gen_aux_proc_2_2_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(5) = MR_ctfield(0, MR_r2, 1);
	MR_r2 = MR_ctfield(3, MR_r3, 1);
	MR_np_localcall_lab(fn__transform_hlds__loop_inv__gen_aux_proc_2_2_0,
		fn__transform_hlds__loop_inv__gen_aux_proc_2_2_0_i25);
MR_def_label(fn__transform_hlds__loop_inv__gen_aux_proc_2_2_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_r1 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(5);
	MR_decr_sp_and_return(6);
	}
MR_def_label(fn__transform_hlds__loop_inv__gen_aux_proc_2_2_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(1) = MR_ctfield(3, MR_tempr1, 1);
	MR_sv(5) = MR_ctfield(0, MR_r2, 1);
	MR_r2 = MR_ctfield(3, MR_tempr1, 2);
	}
	MR_np_localcall_lab(fn__transform_hlds__loop_inv__gen_aux_proc_2_2_0,
		fn__transform_hlds__loop_inv__gen_aux_proc_2_2_0_i27);
MR_def_label(fn__transform_hlds__loop_inv__gen_aux_proc_2_2_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_r1 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(5);
	MR_decr_sp_and_return(6);
	}
MR_def_label(fn__transform_hlds__loop_inv__gen_aux_proc_2_2_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_ctfield(3, MR_tempr1, 1);
	MR_sv(3) = MR_ctfield(3, MR_tempr1, 3);
	MR_sv(4) = MR_ctfield(3, MR_tempr1, 4);
	MR_sv(5) = MR_ctfield(0, MR_r2, 1);
	MR_r2 = MR_ctfield(3, MR_tempr1, 2);
	}
	MR_np_localcall_lab(fn__transform_hlds__loop_inv__gen_aux_proc_2_2_0,
		fn__transform_hlds__loop_inv__gen_aux_proc_2_2_0_i29);
MR_def_label(fn__transform_hlds__loop_inv__gen_aux_proc_2_2_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_localcall_lab(fn__transform_hlds__loop_inv__gen_aux_proc_2_2_0,
		fn__transform_hlds__loop_inv__gen_aux_proc_2_2_0_i30);
MR_def_label(fn__transform_hlds__loop_inv__gen_aux_proc_2_2_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r2 = MR_sv(4);
	}
	MR_np_localcall_lab(fn__transform_hlds__loop_inv__gen_aux_proc_2_2_0,
		fn__transform_hlds__loop_inv__gen_aux_proc_2_2_0_i31);
MR_def_label(fn__transform_hlds__loop_inv__gen_aux_proc_2_2_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 5);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(3);
	MR_tfield(3, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 4) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_r1 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(5);
	MR_decr_sp_and_return(6);
	}
MR_def_label(fn__transform_hlds__loop_inv__gen_aux_proc_2_2_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__transform_hlds__loop_inv__this_file_0_0,
		fn__transform_hlds__loop_inv__gen_aux_proc_2_2_0_i33);
MR_def_label(fn__transform_hlds__loop_inv__gen_aux_proc_2_2_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("gen_aux_proc_2/2: shorthand/1 in hlds_goal", 42);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_pred__proc_info_set_goal_3_0);
MR_decl_entry(hlds__quantification__requantify_proc_2_0);
MR_decl_entry(check_hlds__mode_util__recompute_instmap_delta_proc_5_0);
MR_decl_entry(hlds__hlds_module__module_info_set_pred_proc_info_6_0);

MR_BEGIN_MODULE(transform_hlds__loop_inv_module16)
	MR_init_entry1(transform_hlds__loop_inv__gen_aux_proc_9_0);
	MR_init_label4(transform_hlds__loop_inv__gen_aux_proc_9_0,2,3,4,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__loop_inv__gen_aux_proc_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tempr2 = MR_r8;
	MR_tfield(0, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tfield(0, MR_tempr1, 2) = MR_r2;
	MR_tfield(0, MR_tempr1, 3) = MR_r4;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r6;
	MR_sv(3) = MR_r7;
	MR_sv(4) = MR_tempr2;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_r5;
	}
	MR_np_call_localret_ent(fn__transform_hlds__loop_inv__gen_aux_proc_2_2_0,
		transform_hlds__loop_inv__gen_aux_proc_9_0_i2);
MR_def_label(transform_hlds__loop_inv__gen_aux_proc_9_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_ctfield(0, MR_tempr1, 0);
	MR_r2 = MR_sv(3);
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_goal_3_0,
		transform_hlds__loop_inv__gen_aux_proc_9_0_i3);
MR_def_label(transform_hlds__loop_inv__gen_aux_proc_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__quantification__requantify_proc_2_0,
		transform_hlds__loop_inv__gen_aux_proc_9_0_i4);
MR_def_label(transform_hlds__loop_inv__gen_aux_proc_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(check_hlds__mode_util__recompute_instmap_delta_proc_5_0,
		transform_hlds__loop_inv__gen_aux_proc_9_0_i5);
MR_def_label(transform_hlds__loop_inv__gen_aux_proc_9_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r5 = MR_r2;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(hlds__hlds_module__module_info_set_pred_proc_info_6_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__loop_inv_module17)
	MR_init_entry1(fn__transform_hlds__loop_inv__gen_out_proc_2_3_0);
	MR_init_label8(fn__transform_hlds__loop_inv__gen_out_proc_2_3_0,38,5,10,11,49,13,50,15)
	MR_init_label8(fn__transform_hlds__loop_inv__gen_out_proc_2_3_0,51,17,52,19,53,21,54,23)
	MR_init_label4(fn__transform_hlds__loop_inv__gen_out_proc_2_3_0,24,25,55,27)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__transform_hlds__loop_inv__gen_out_proc_2_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
MR_def_label(fn__transform_hlds__loop_inv__gen_out_proc_2_3_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_ctfield(0, MR_r3, 0);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r4),
		MR_LABEL_AP(fn__transform_hlds__loop_inv__gen_out_proc_2_3_0_i11) MR_AND
		MR_LABEL_AP(fn__transform_hlds__loop_inv__gen_out_proc_2_3_0_i5) MR_AND
		MR_LABEL_AP(fn__transform_hlds__loop_inv__gen_out_proc_2_3_0_i11) MR_AND
		MR_LABEL_AP(fn__transform_hlds__loop_inv__gen_out_proc_2_3_0_i10));
MR_def_label(fn__transform_hlds__loop_inv__gen_out_proc_2_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr4 = MR_r4;
	MR_tempr1 = MR_ctfield(1, MR_tempr4, 0);
	MR_tempr5 = MR_r1;
	MR_tempr2 = MR_ctfield(0, MR_tempr5, 0);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(fn__transform_hlds__loop_inv__gen_out_proc_2_3_0_i11);
	}
	MR_tempr1 = MR_ctfield(1, MR_tempr4, 1);
	MR_tempr3 = MR_ctfield(0, MR_tempr5, 1);
	if ((MR_tempr1 != MR_tempr3)) {
		MR_GOTO_LAB(fn__transform_hlds__loop_inv__gen_out_proc_2_3_0_i11);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_np_tailcall_ent(fn__transform_hlds__loop_inv__gen_aux_call_2_0);
	}
MR_def_label(fn__transform_hlds__loop_inv__gen_out_proc_2_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r4, 0),
		MR_LABEL_AP(fn__transform_hlds__loop_inv__gen_out_proc_2_3_0_i11) MR_AND
		MR_LABEL_AP(fn__transform_hlds__loop_inv__gen_out_proc_2_3_0_i49) MR_AND
		MR_LABEL_AP(fn__transform_hlds__loop_inv__gen_out_proc_2_3_0_i50) MR_AND
		MR_LABEL_AP(fn__transform_hlds__loop_inv__gen_out_proc_2_3_0_i51) MR_AND
		MR_LABEL_AP(fn__transform_hlds__loop_inv__gen_out_proc_2_3_0_i52) MR_AND
		MR_LABEL_AP(fn__transform_hlds__loop_inv__gen_out_proc_2_3_0_i53) MR_AND
		MR_LABEL_AP(fn__transform_hlds__loop_inv__gen_out_proc_2_3_0_i54) MR_AND
		MR_LABEL_AP(fn__transform_hlds__loop_inv__gen_out_proc_2_3_0_i55));
MR_def_label(fn__transform_hlds__loop_inv__gen_out_proc_2_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_proceed();
MR_def_label(fn__transform_hlds__loop_inv__gen_out_proc_2_3_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(2,5);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_LABEL_AP(fn__transform_hlds__loop_inv__gen_out_proc_2_3_0_i38);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tfield(0, MR_tempr1, 4) = MR_r2;
	MR_sv(1) = MR_ctfield(3, MR_r4, 1);
	MR_sv(6) = MR_ctfield(0, MR_r3, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_ctfield(3, MR_r4, 2);
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		fn__transform_hlds__loop_inv__gen_out_proc_2_3_0_i13);
MR_def_label(fn__transform_hlds__loop_inv__gen_out_proc_2_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_r1 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(6);
	MR_decr_sp_and_return(7);
	}
MR_def_label(fn__transform_hlds__loop_inv__gen_out_proc_2_3_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(2,6);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_LABEL_AP(fn__transform_hlds__loop_inv__gen_out_proc_2_3_0_i38);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tfield(0, MR_tempr1, 4) = MR_r2;
	MR_sv(6) = MR_ctfield(0, MR_r3, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_ctfield(3, MR_r4, 1);
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		fn__transform_hlds__loop_inv__gen_out_proc_2_3_0_i15);
MR_def_label(fn__transform_hlds__loop_inv__gen_out_proc_2_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_r1 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(6);
	MR_decr_sp_and_return(7);
	}
MR_def_label(fn__transform_hlds__loop_inv__gen_out_proc_2_3_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(2,7);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__transform_hlds__loop_inv__IntroducedFrom__func__gen_out_proc_2__1030__1_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tfield(0, MR_tempr1, 4) = MR_r2;
	MR_tempr2 = MR_r4;
	MR_sv(1) = MR_ctfield(3, MR_tempr2, 1);
	MR_sv(2) = MR_ctfield(3, MR_tempr2, 2);
	MR_sv(6) = MR_ctfield(0, MR_r3, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, case);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, case);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_ctfield(3, MR_r4, 3);
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		fn__transform_hlds__loop_inv__gen_out_proc_2_3_0_i17);
MR_def_label(fn__transform_hlds__loop_inv__gen_out_proc_2_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 3) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_r1 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(6);
	MR_decr_sp_and_return(7);
	}
MR_def_label(fn__transform_hlds__loop_inv__gen_out_proc_2_3_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(6) = MR_ctfield(0, MR_r3, 1);
	MR_r3 = MR_ctfield(3, MR_r4, 1);
	MR_np_localcall_lab(fn__transform_hlds__loop_inv__gen_out_proc_2_3_0,
		fn__transform_hlds__loop_inv__gen_out_proc_2_3_0_i19);
MR_def_label(fn__transform_hlds__loop_inv__gen_out_proc_2_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_r1 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(6);
	MR_decr_sp_and_return(7);
	}
MR_def_label(fn__transform_hlds__loop_inv__gen_out_proc_2_3_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(1) = MR_ctfield(3, MR_tempr1, 1);
	MR_sv(6) = MR_ctfield(0, MR_r3, 1);
	MR_r3 = MR_ctfield(3, MR_tempr1, 2);
	}
	MR_np_localcall_lab(fn__transform_hlds__loop_inv__gen_out_proc_2_3_0,
		fn__transform_hlds__loop_inv__gen_out_proc_2_3_0_i21);
MR_def_label(fn__transform_hlds__loop_inv__gen_out_proc_2_3_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_r1 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(6);
	MR_decr_sp_and_return(7);
	}
MR_def_label(fn__transform_hlds__loop_inv__gen_out_proc_2_3_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(3) = MR_ctfield(3, MR_tempr1, 1);
	MR_sv(4) = MR_ctfield(3, MR_tempr1, 3);
	MR_sv(5) = MR_ctfield(3, MR_tempr1, 4);
	MR_sv(6) = MR_ctfield(0, MR_r3, 1);
	MR_r3 = MR_ctfield(3, MR_tempr1, 2);
	}
	MR_np_localcall_lab(fn__transform_hlds__loop_inv__gen_out_proc_2_3_0,
		fn__transform_hlds__loop_inv__gen_out_proc_2_3_0_i23);
MR_def_label(fn__transform_hlds__loop_inv__gen_out_proc_2_3_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_localcall_lab(fn__transform_hlds__loop_inv__gen_out_proc_2_3_0,
		fn__transform_hlds__loop_inv__gen_out_proc_2_3_0_i24);
MR_def_label(fn__transform_hlds__loop_inv__gen_out_proc_2_3_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	}
	MR_np_localcall_lab(fn__transform_hlds__loop_inv__gen_out_proc_2_3_0,
		fn__transform_hlds__loop_inv__gen_out_proc_2_3_0_i25);
MR_def_label(fn__transform_hlds__loop_inv__gen_out_proc_2_3_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 5);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(3);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(4);
	MR_tfield(3, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 4) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_r1 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(6);
	MR_decr_sp_and_return(7);
	}
MR_def_label(fn__transform_hlds__loop_inv__gen_out_proc_2_3_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__transform_hlds__loop_inv__this_file_0_0,
		fn__transform_hlds__loop_inv__gen_out_proc_2_3_0_i27);
MR_def_label(fn__transform_hlds__loop_inv__gen_out_proc_2_3_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("gen_out_proc_2/3: shorthand/1 in hlds_goal", 42);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_pred__proc_info_get_headvars_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_set_body_7_0);

MR_BEGIN_MODULE(transform_hlds__loop_inv_module18)
	MR_init_entry1(transform_hlds__loop_inv__gen_out_proc_8_0);
	MR_init_label8(transform_hlds__loop_inv__gen_out_proc_8_0,2,3,4,5,6,7,8,9)
	MR_init_label1(transform_hlds__loop_inv__gen_out_proc_8_0,10)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__loop_inv__gen_out_proc_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r6;
	MR_r2 = MR_r4;
	MR_r3 = MR_r5;
	MR_np_call_localret_ent(fn__transform_hlds__loop_inv__gen_out_proc_2_3_0,
		transform_hlds__loop_inv__gen_out_proc_8_0_i2);
MR_def_label(transform_hlds__loop_inv__gen_out_proc_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_sv(5) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(6) = MR_ctfield(0, MR_tempr1, 1);
	MR_r1 = MR_sv(3);
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_varset_2_0,
		transform_hlds__loop_inv__gen_out_proc_8_0_i3);
MR_def_label(transform_hlds__loop_inv__gen_out_proc_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_vartypes_2_0,
		transform_hlds__loop_inv__gen_out_proc_8_0_i4);
MR_def_label(transform_hlds__loop_inv__gen_out_proc_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_headvars_2_0,
		transform_hlds__loop_inv__gen_out_proc_8_0_i5);
MR_def_label(transform_hlds__loop_inv__gen_out_proc_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_rtti_varmaps_2_0,
		transform_hlds__loop_inv__gen_out_proc_8_0_i6);
MR_def_label(transform_hlds__loop_inv__gen_out_proc_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(9);
	MR_r4 = MR_sv(1);
	MR_r6 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_body_7_0,
		transform_hlds__loop_inv__gen_out_proc_8_0_i7);
MR_def_label(transform_hlds__loop_inv__gen_out_proc_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__quantification__requantify_proc_2_0,
		transform_hlds__loop_inv__gen_out_proc_8_0_i8);
MR_def_label(transform_hlds__loop_inv__gen_out_proc_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(check_hlds__mode_util__recompute_instmap_delta_proc_5_0,
		transform_hlds__loop_inv__gen_out_proc_8_0_i9);
MR_def_label(transform_hlds__loop_inv__gen_out_proc_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r5 = MR_r2;
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_set_pred_proc_info_6_0,
		transform_hlds__loop_inv__gen_out_proc_8_0_i10);
MR_def_label(transform_hlds__loop_inv__gen_out_proc_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_pred__proc_info_get_argmodes_2_0);

MR_BEGIN_MODULE(transform_hlds__loop_inv_module19)
	MR_init_entry1(fn__transform_hlds__loop_inv__argmodes_3_0);
	MR_init_label1(fn__transform_hlds__loop_inv__argmodes_3_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__transform_hlds__loop_inv__argmodes_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_proc_info_5_0,
		fn__transform_hlds__loop_inv__argmodes_3_0_i2);
MR_def_label(fn__transform_hlds__loop_inv__argmodes_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(hlds__hlds_pred__proc_info_get_argmodes_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__loop_inv_module20)
	MR_init_entry1(fn__transform_hlds__loop_inv__uniquely_used_vars_2_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__transform_hlds__loop_inv__uniquely_used_vars_2_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_ctfield(0, MR_r2, 0);
	MR_np_tailcall_ent(fn__transform_hlds__loop_inv__uniquely_used_vars_3_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__list__filter_map_corresponding_3_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_foreign_arg_0;
MR_decl_entry(fn__list__condense_1_0);

MR_BEGIN_MODULE(transform_hlds__loop_inv_module21)
	MR_init_entry1(fn__transform_hlds__loop_inv__uniquely_used_vars_3_2_0);
	MR_init_label8(fn__transform_hlds__loop_inv__uniquely_used_vars_3_2_0,4,52,6,8,10,55,12,13)
	MR_init_label8(fn__transform_hlds__loop_inv__uniquely_used_vars_3_2_0,14,15,56,57,21,58,24,25)
	MR_init_label8(fn__transform_hlds__loop_inv__uniquely_used_vars_3_2_0,27,29,59,32,33,34,35,60)
	MR_init_label1(fn__transform_hlds__loop_inv__uniquely_used_vars_3_2_0,38)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__transform_hlds__loop_inv__uniquely_used_vars_3_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r2),
		MR_LABEL_AP(fn__transform_hlds__loop_inv__uniquely_used_vars_3_2_0_i4) MR_AND
		MR_LABEL_AP(fn__transform_hlds__loop_inv__uniquely_used_vars_3_2_0_i52) MR_AND
		MR_LABEL_AP(fn__transform_hlds__loop_inv__uniquely_used_vars_3_2_0_i8) MR_AND
		MR_LABEL_AP(fn__transform_hlds__loop_inv__uniquely_used_vars_3_2_0_i10));
MR_def_label(fn__transform_hlds__loop_inv__uniquely_used_vars_3_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(fn__transform_hlds__loop_inv__uniquely_used_vars_3_2_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_sv(2) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(2,8);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__transform_hlds__loop_inv__uniquely_used_args_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tempr3 = MR_r2;
	MR_sv(1) = MR_ctfield(1, MR_tempr3, 2);
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_tempr2 = MR_tempr3;
	MR_r2 = MR_ctfield(1, MR_r2, 0);
	MR_r3 = MR_ctfield(1, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(fn__transform_hlds__loop_inv__argmodes_3_0,
		fn__transform_hlds__loop_inv__uniquely_used_vars_3_2_0_i6);
MR_def_label(fn__transform_hlds__loop_inv__uniquely_used_vars_3_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode);
	MR_r3 = MR_r1;
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(1);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(fn__list__filter_map_corresponding_3_0);
MR_def_label(fn__transform_hlds__loop_inv__uniquely_used_vars_3_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(2,9);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__transform_hlds__loop_inv__uniquely_used_args_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode);
	MR_r3 = MR_r1;
	MR_r5 = MR_ctfield(2, MR_tempr2, 1);
	MR_r6 = MR_ctfield(2, MR_tempr2, 2);
	MR_np_tailcall_ent(fn__list__filter_map_corresponding_3_0);
	}
MR_def_label(fn__transform_hlds__loop_inv__uniquely_used_vars_3_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r2, 0),
		MR_LABEL_AP(fn__transform_hlds__loop_inv__uniquely_used_vars_3_2_0_i55) MR_AND
		MR_LABEL_AP(fn__transform_hlds__loop_inv__uniquely_used_vars_3_2_0_i56) MR_AND
		MR_LABEL_AP(fn__transform_hlds__loop_inv__uniquely_used_vars_3_2_0_i57) MR_AND
		MR_LABEL_AP(fn__transform_hlds__loop_inv__uniquely_used_vars_3_2_0_i58) MR_AND
		MR_LABEL_AP(fn__transform_hlds__loop_inv__uniquely_used_vars_3_2_0_i27) MR_AND
		MR_LABEL_AP(fn__transform_hlds__loop_inv__uniquely_used_vars_3_2_0_i29) MR_AND
		MR_LABEL_AP(fn__transform_hlds__loop_inv__uniquely_used_vars_3_2_0_i59) MR_AND
		MR_LABEL_AP(fn__transform_hlds__loop_inv__uniquely_used_vars_3_2_0_i60));
MR_def_label(fn__transform_hlds__loop_inv__uniquely_used_vars_3_2_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_sv(5) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(2,10);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__transform_hlds__loop_inv__uniquely_used_args_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tempr3 = MR_r1;
	MR_tfield(0, MR_tempr1, 3) = MR_tempr3;
	MR_sv(1) = MR_tempr3;
	MR_tempr4 = MR_r2;
	MR_sv(2) = MR_ctfield(3, MR_tempr4, 2);
	MR_sv(3) = MR_ctfield(3, MR_tempr4, 3);
	MR_sv(4) = MR_ctfield(3, MR_tempr4, 5);
	MR_sv(6) = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, foreign_arg);
	MR_tempr2 = MR_tempr4;
	MR_r2 = MR_sv(6);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,1,4);
	MR_r4 = MR_ctfield(3, MR_tempr2, 4);
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		fn__transform_hlds__loop_inv__uniquely_used_vars_3_2_0_i12);
MR_def_label(fn__transform_hlds__loop_inv__uniquely_used_vars_3_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_ctfield(0, MR_sv(5), 3);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(fn__transform_hlds__loop_inv__argmodes_3_0,
		fn__transform_hlds__loop_inv__uniquely_used_vars_3_2_0_i13);
MR_def_label(fn__transform_hlds__loop_inv__uniquely_used_vars_3_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode);
	MR_r3 = MR_r1;
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(1);
	MR_np_call_localret_ent(fn__list__filter_map_corresponding_3_0,
		fn__transform_hlds__loop_inv__uniquely_used_vars_3_2_0_i14);
MR_def_label(fn__transform_hlds__loop_inv__uniquely_used_vars_3_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, foreign_arg);
	MR_r2 = MR_sv(6);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,1,5);
	MR_r4 = MR_sv(4);
	MR_np_call_localret_ent(fn__list__map_2_0,
		fn__transform_hlds__loop_inv__uniquely_used_vars_3_2_0_i15);
MR_def_label(fn__transform_hlds__loop_inv__uniquely_used_vars_3_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(fn__f_108_105_115_116_95_95_43_43_2_0);
MR_def_label(fn__transform_hlds__loop_inv__uniquely_used_vars_3_2_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(4,4);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__transform_hlds__loop_inv__uniquely_used_vars_2_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,3,11);
	MR_r4 = MR_ctfield(3, MR_tempr2, 2);
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		fn__transform_hlds__loop_inv__uniquely_used_vars_3_2_0_i21);
MR_def_label(fn__transform_hlds__loop_inv__uniquely_used_vars_3_2_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(4,5);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__transform_hlds__loop_inv__uniquely_used_vars_2_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,3,11);
	MR_r4 = MR_ctfield(3, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		fn__transform_hlds__loop_inv__uniquely_used_vars_3_2_0_i21);
MR_def_label(fn__transform_hlds__loop_inv__uniquely_used_vars_3_2_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(fn__list__condense_1_0);
MR_def_label(fn__transform_hlds__loop_inv__uniquely_used_vars_3_2_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_sv(1) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(4,6);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__transform_hlds__loop_inv__uniquely_used_vars_2_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(0,3,11);
	MR_r1 = MR_ctfield(3, MR_r2, 3);
	}
	MR_np_call_localret_ent(fn__transform_hlds__loop_inv__case_goals_1_0,
		fn__transform_hlds__loop_inv__uniquely_used_vars_3_2_0_i24);
MR_def_label(fn__transform_hlds__loop_inv__uniquely_used_vars_3_2_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(fn__list__map_2_0,
		fn__transform_hlds__loop_inv__uniquely_used_vars_3_2_0_i25);
MR_def_label(fn__transform_hlds__loop_inv__uniquely_used_vars_3_2_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(fn__list__condense_1_0);
MR_def_label(fn__transform_hlds__loop_inv__uniquely_used_vars_3_2_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_ctfield(3, MR_r2, 1);
	MR_np_tailcall_ent(fn__transform_hlds__loop_inv__uniquely_used_vars_2_2_0);
MR_def_label(fn__transform_hlds__loop_inv__uniquely_used_vars_3_2_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_ctfield(3, MR_r2, 2);
	MR_np_tailcall_ent(fn__transform_hlds__loop_inv__uniquely_used_vars_2_2_0);
MR_def_label(fn__transform_hlds__loop_inv__uniquely_used_vars_3_2_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_ctfield(3, MR_tempr1, 3);
	MR_sv(3) = MR_ctfield(3, MR_tempr1, 4);
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_r2 = MR_ctfield(3, MR_r2, 2);
	}
	MR_np_call_localret_ent(fn__transform_hlds__loop_inv__uniquely_used_vars_2_2_0,
		fn__transform_hlds__loop_inv__uniquely_used_vars_3_2_0_i32);
MR_def_label(fn__transform_hlds__loop_inv__uniquely_used_vars_3_2_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__transform_hlds__loop_inv__uniquely_used_vars_2_2_0,
		fn__transform_hlds__loop_inv__uniquely_used_vars_3_2_0_i33);
MR_def_label(fn__transform_hlds__loop_inv__uniquely_used_vars_3_2_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r2 = MR_sv(3);
	}
	MR_np_call_localret_ent(fn__transform_hlds__loop_inv__uniquely_used_vars_2_2_0,
		fn__transform_hlds__loop_inv__uniquely_used_vars_3_2_0_i34);
MR_def_label(fn__transform_hlds__loop_inv__uniquely_used_vars_3_2_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__transform_hlds__loop_inv__uniquely_used_vars_3_2_0_i35);
MR_def_label(fn__transform_hlds__loop_inv__uniquely_used_vars_3_2_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(fn__f_108_105_115_116_95_95_43_43_2_0);
MR_def_label(fn__transform_hlds__loop_inv__uniquely_used_vars_3_2_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__transform_hlds__loop_inv__this_file_0_0,
		fn__transform_hlds__loop_inv__uniquely_used_vars_3_2_0_i38);
MR_def_label(fn__transform_hlds__loop_inv__uniquely_used_vars_3_2_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("uniquely_used_vars_3/2: shorthand/1 in hlds_goal", 48);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_pred__pred_info_get_purity_2_0);
MR_decl_entry(fn__f_108_105_115_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_111_114_116_95_97_110_100_95_114_101_109_111_118_101_95_100_117_112_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_1_0);
MR_decl_entry(assoc_list__keys_and_values_3_0);
MR_decl_entry(fn__list__filter_2_0);
MR_decl_entry(fn__list__delete_elems_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_initial_instmap_3_0);

MR_BEGIN_MODULE(transform_hlds__loop_inv_module22)
	MR_init_entry1(transform_hlds__loop_inv__hoist_loop_invariants_7_0);
	MR_init_label8(transform_hlds__loop_inv__hoist_loop_invariants_7_0,3,4,5,6,7,8,9,10)
	MR_init_label8(transform_hlds__loop_inv__hoist_loop_invariants_7_0,12,13,11,14,15,16,17,18)
	MR_init_label7(transform_hlds__loop_inv__hoist_loop_invariants_7_0,19,21,22,23,24,25,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__loop_inv__hoist_loop_invariants_7_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_sv(8) = MR_r4;
	MR_sv(9) = MR_r5;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_purity_2_0,
		transform_hlds__loop_inv__hoist_loop_invariants_7_0_i3);
MR_def_label(transform_hlds__loop_inv__hoist_loop_invariants_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 0 != (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(transform_hlds__loop_inv__hoist_loop_invariants_7_0_i2);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(2);
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_sv(8);
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_goal_2_0,
		transform_hlds__loop_inv__hoist_loop_invariants_7_0_i4);
MR_def_label(transform_hlds__loop_inv__hoist_loop_invariants_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_headvars_2_0,
		transform_hlds__loop_inv__hoist_loop_invariants_7_0_i5);
MR_def_label(transform_hlds__loop_inv__hoist_loop_invariants_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_argmodes_2_0,
		transform_hlds__loop_inv__hoist_loop_invariants_7_0_i6);
MR_def_label(transform_hlds__loop_inv__hoist_loop_invariants_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_sv(10) = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_r1 = MR_sv(9);
	MR_r2 = MR_ctfield(0, MR_sv(2), 0);
	MR_np_call_localret_ent(fn__transform_hlds__loop_inv__uniquely_used_vars_3_2_0,
		transform_hlds__loop_inv__hoist_loop_invariants_7_0_i7);
MR_def_label(transform_hlds__loop_inv__hoist_loop_invariants_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_111_114_116_95_97_110_100_95_114_101_109_111_118_101_95_100_117_112_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_1_0,
		transform_hlds__loop_inv__hoist_loop_invariants_7_0_i8);
MR_def_label(transform_hlds__loop_inv__hoist_loop_invariants_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,3,12);
	MR_np_call_localret_ent(fn__transform_hlds__loop_inv__invariant_goal_candidates_2_3_0,
		transform_hlds__loop_inv__hoist_loop_invariants_7_0_i9);
MR_def_label(transform_hlds__loop_inv__hoist_loop_invariants_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,3,10);
	MR_r3 = MR_ctfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(assoc_list__keys_and_values_3_0,
		transform_hlds__loop_inv__hoist_loop_invariants_7_0_i10);
MR_def_label(transform_hlds__loop_inv__hoist_loop_invariants_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(transform_hlds__loop_inv__hoist_loop_invariants_7_0_i12);
	}
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_sv(5) = (MR_Word) MR_tbmkword(0, 0);
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_GOTO_LAB(transform_hlds__loop_inv__hoist_loop_invariants_7_0_i11);
MR_def_label(transform_hlds__loop_inv__hoist_loop_invariants_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(0,4);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__loop_inv__common_goal_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tempr3 = MR_r2;
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(1, MR_tempr3, 1);
	MR_sv(7) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_tempr2 = MR_tempr3;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_ctfield(1, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(fn__list__filter_2_0,
		transform_hlds__loop_inv__hoist_loop_invariants_7_0_i13);
MR_def_label(transform_hlds__loop_inv__hoist_loop_invariants_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r4 = MR_sv(7);
	MR_r1 = MR_sv(9);
MR_def_label(transform_hlds__loop_inv__hoist_loop_invariants_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r2;
	MR_sv(9) = MR_r1;
	MR_np_call_localret_ent(fn__transform_hlds__loop_inv__inv_args_4_0,
		transform_hlds__loop_inv__hoist_loop_invariants_7_0_i14);
MR_def_label(transform_hlds__loop_inv__hoist_loop_invariants_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(fn__list__delete_elems_2_0,
		transform_hlds__loop_inv__hoist_loop_invariants_7_0_i15);
MR_def_label(transform_hlds__loop_inv__hoist_loop_invariants_7_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(6);
	MR_r4 = MR_sv(5);
	MR_np_call_localret_ent(transform_hlds__loop_inv__inv_goals_vars_6_0,
		transform_hlds__loop_inv__hoist_loop_invariants_7_0_i16);
MR_def_label(transform_hlds__loop_inv__hoist_loop_invariants_7_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_sv(7) = MR_r2;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(transform_hlds__loop_inv__dont_hoist_4_0,
		transform_hlds__loop_inv__hoist_loop_invariants_7_0_i17);
MR_def_label(transform_hlds__loop_inv__hoist_loop_invariants_7_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(6);
	MR_sv(6) = MR_tempr1;
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	}
	MR_np_call_localret_ent(fn__list__delete_elems_2_0,
		transform_hlds__loop_inv__hoist_loop_invariants_7_0_i18);
MR_def_label(transform_hlds__loop_inv__hoist_loop_invariants_7_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(fn__list__delete_elems_2_0,
		transform_hlds__loop_inv__hoist_loop_invariants_7_0_i19);
MR_def_label(transform_hlds__loop_inv__hoist_loop_invariants_7_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(6),0,0)) {
		MR_GOTO_LAB(transform_hlds__loop_inv__hoist_loop_invariants_7_0_i2);
	}
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(fn__list__delete_elems_2_0,
		transform_hlds__loop_inv__hoist_loop_invariants_7_0_i21);
MR_def_label(transform_hlds__loop_inv__hoist_loop_invariants_7_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_initial_instmap_3_0,
		transform_hlds__loop_inv__hoist_loop_invariants_7_0_i22);
MR_def_label(transform_hlds__loop_inv__hoist_loop_invariants_7_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(fn__transform_hlds__loop_inv__compute_initial_aux_instmap_2_0,
		transform_hlds__loop_inv__hoist_loop_invariants_7_0_i23);
MR_def_label(transform_hlds__loop_inv__hoist_loop_invariants_7_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_r5 = MR_sv(9);
	MR_np_call_localret_ent(transform_hlds__loop_inv__create_aux_pred_10_0,
		transform_hlds__loop_inv__hoist_loop_invariants_7_0_i24);
MR_def_label(transform_hlds__loop_inv__hoist_loop_invariants_7_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r2;
	MR_r6 = MR_r3;
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(1);
	MR_r7 = MR_r4;
	MR_r4 = MR_sv(4);
	MR_r8 = MR_r5;
	MR_r5 = MR_sv(2);
	MR_np_call_localret_ent(transform_hlds__loop_inv__gen_aux_proc_9_0,
		transform_hlds__loop_inv__hoist_loop_invariants_7_0_i25);
MR_def_label(transform_hlds__loop_inv__hoist_loop_invariants_7_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(2);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(transform_hlds__loop_inv__gen_out_proc_8_0);
MR_def_label(transform_hlds__loop_inv__hoist_loop_invariants_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_decr_sp_and_return(11);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__loop_inv_module23)
	MR_init_entry1(transform_hlds__loop_inv__common_goal_2_0);
	MR_init_label7(transform_hlds__loop_inv__common_goal_2_0,6,11,15,19,12,10,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__loop_inv__common_goal_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(4) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(5) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(6));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(transform_hlds__loop_inv__common_goal_2_0_i5);
	MR_sv(1) = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,3,10);
	MR_np_call_localret_ent(list__member_2_1,
		transform_hlds__loop_inv__common_goal_2_0_i6);
MR_def_label(transform_hlds__loop_inv__common_goal_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(8) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(9));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(transform_hlds__loop_inv__common_goal_2_0_i10);
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_np_call_localret_ent(list__member_2_1,
		transform_hlds__loop_inv__common_goal_2_0_i11);
MR_def_label(transform_hlds__loop_inv__common_goal_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_ctfield(0, MR_sv(1), 0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_r1, 0);
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_r2;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(__Unify___hlds__hlds_goal__hlds_goal_expr_0_0,
		transform_hlds__loop_inv__common_goal_2_0_i15);
MR_def_label(transform_hlds__loop_inv__common_goal_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(transform_hlds__loop_inv__common_goal_2_0_i12);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_tempr2 = MR_sv(3);
	MR_r2 = MR_tempr2;
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	if (MR_PTAG_TESTR(MR_tempr2,1)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_r4 = MR_ctfield(1, MR_tempr1, 0);
	MR_r5 = MR_ctfield(1, MR_tempr2, 0);
	if ((MR_r4 != MR_r5)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_r4 = MR_ctfield(1, MR_tempr1, 1);
	MR_r5 = MR_ctfield(1, MR_tempr2, 1);
	if ((MR_r4 != MR_r5)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_r2 = MR_ctfield(1, MR_tempr1, 2);
	MR_r3 = MR_ctfield(1, MR_sv(3), 2);
	}
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		transform_hlds__loop_inv__common_goal_2_0_i19);
MR_def_label(transform_hlds__loop_inv__common_goal_2_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
MR_def_label(transform_hlds__loop_inv__common_goal_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_restore_maxfr(MR_sv(9));
	MR_redoip_slot_word(MR_maxfr) = MR_sv(7);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(8);
	MR_GOTO(MR_ENTRY(MR_do_redo));
MR_def_label(transform_hlds__loop_inv__common_goal_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = MR_sv(7);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(8);
	MR_restore_maxfr(MR_sv(6));
	MR_redoip_slot_word(MR_maxfr) = MR_sv(4);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(5);
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_r1 = MR_FALSE;
	MR_proceed();
MR_def_label(transform_hlds__loop_inv__common_goal_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = MR_sv(4);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(5);
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_r1 = MR_TRUE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(check_hlds__mode_util__mode_get_insts_4_0);
MR_decl_entry(check_hlds__inst_match__inst_is_free_2_0);

MR_BEGIN_MODULE(transform_hlds__loop_inv_module24)
	MR_init_entry1(fn__transform_hlds__loop_inv__input_arg_3_0);
	MR_init_label3(fn__transform_hlds__loop_inv__input_arg_3_0,2,5,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__transform_hlds__loop_inv__input_arg_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r1;
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(check_hlds__mode_util__mode_get_insts_4_0,
		fn__transform_hlds__loop_inv__input_arg_3_0_i2);
MR_def_label(fn__transform_hlds__loop_inv__input_arg_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(check_hlds__inst_match__inst_is_free_2_0,
		fn__transform_hlds__loop_inv__input_arg_3_0_i5);
MR_def_label(fn__transform_hlds__loop_inv__input_arg_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(fn__transform_hlds__loop_inv__input_arg_3_0_i1);
	}
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(fn__transform_hlds__loop_inv__input_arg_3_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__loop_inv_module25)
	MR_init_entry1(fn__transform_hlds__loop_inv__arg_to_maybe_inv_arg_3_0);
	MR_init_label3(fn__transform_hlds__loop_inv__arg_to_maybe_inv_arg_3_0,3,6,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__transform_hlds__loop_inv__arg_to_maybe_inv_arg_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(check_hlds__mode_util__mode_get_insts_4_0,
		fn__transform_hlds__loop_inv__arg_to_maybe_inv_arg_3_0_i3);
MR_def_label(fn__transform_hlds__loop_inv__arg_to_maybe_inv_arg_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(check_hlds__inst_match__inst_is_free_2_0,
		fn__transform_hlds__loop_inv__arg_to_maybe_inv_arg_3_0_i6);
MR_def_label(fn__transform_hlds__loop_inv__arg_to_maybe_inv_arg_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(fn__transform_hlds__loop_inv__arg_to_maybe_inv_arg_3_0_i2);
	}
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_sv(2);
	MR_decr_sp_and_return(3);
MR_def_label(fn__transform_hlds__loop_inv__arg_to_maybe_inv_arg_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__loop_inv_module26)
	MR_init_entry1(fn__transform_hlds__loop_inv__refine_candidate_inv_args_2_0);
	MR_init_label1(fn__transform_hlds__loop_inv__refine_candidate_inv_args_2_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__transform_hlds__loop_inv__refine_candidate_inv_args_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_r1, 0);
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(fn__transform_hlds__loop_inv__refine_candidate_inv_args_2_0_i2);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,3,1);
	MR_r5 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_r3 = MR_r1;
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,1,6);
	MR_r6 = MR_ctfield(1, MR_tempr1, 2);
	MR_np_tailcall_ent(fn__list__map_corresponding_3_0);
	}
MR_def_label(fn__transform_hlds__loop_inv__refine_candidate_inv_args_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,3,5);
	MR_r2 = (MR_Word) MR_string_const("loop_inv.m", 10);
	MR_r3 = (MR_Word) MR_string_const("refine_candidate_inv_args/2: non call/6 found in argument 1", 59);
	MR_np_tailcall_ent(fn__libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___term__var_1_0);

MR_BEGIN_MODULE(transform_hlds__loop_inv_module27)
	MR_init_entry1(fn__transform_hlds__loop_inv__refine_candidate_inv_args_2_2_0);
	MR_init_label3(fn__transform_hlds__loop_inv__refine_candidate_inv_args_2_2_0,8,3,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__transform_hlds__loop_inv__refine_candidate_inv_args_2_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__transform_hlds__loop_inv__refine_candidate_inv_args_2_2_0_i3);
	}
MR_def_label(fn__transform_hlds__loop_inv__refine_candidate_inv_args_2_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(2);
MR_def_label(fn__transform_hlds__loop_inv__refine_candidate_inv_args_2_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r3 = MR_r2;
	MR_r2 = MR_ctfield(1, MR_sv(1), 0);
	MR_np_call_localret_ent(__Unify___term__var_1_0,
		fn__transform_hlds__loop_inv__refine_candidate_inv_args_2_2_0_i5);
MR_def_label(fn__transform_hlds__loop_inv__refine_candidate_inv_args_2_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__transform_hlds__loop_inv__refine_candidate_inv_args_2_2_0_i8);
	}
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_uni_mode_0;

MR_BEGIN_MODULE(transform_hlds__loop_inv_module28)
	MR_init_entry1(fn__transform_hlds__loop_inv__rhs_modes_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__transform_hlds__loop_inv__rhs_modes_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, uni_mode);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,1,7);
	MR_np_tailcall_ent(fn__list__map_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__loop_inv_module29)
	MR_init_entry1(fn__transform_hlds__loop_inv__goal_expr_inputs_2_0);
	MR_init_label8(fn__transform_hlds__loop_inv__goal_expr_inputs_2_0,4,88,89,11,12,13,14,15)
	MR_init_label8(fn__transform_hlds__loop_inv__goal_expr_inputs_2_0,92,20,18,86,23,25,87,28)
	MR_init_label8(fn__transform_hlds__loop_inv__goal_expr_inputs_2_0,29,30,32,33,35,36,38,39)
	MR_init_label8(fn__transform_hlds__loop_inv__goal_expr_inputs_2_0,41,42,44,45,47,48,50,51)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__transform_hlds__loop_inv__goal_expr_inputs_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r2),
		MR_LABEL_AP(fn__transform_hlds__loop_inv__goal_expr_inputs_2_0_i4) MR_AND
		MR_LABEL_AP(fn__transform_hlds__loop_inv__goal_expr_inputs_2_0_i86) MR_AND
		MR_LABEL_AP(fn__transform_hlds__loop_inv__goal_expr_inputs_2_0_i25) MR_AND
		MR_LABEL_AP(fn__transform_hlds__loop_inv__goal_expr_inputs_2_0_i87));
MR_def_label(fn__transform_hlds__loop_inv__goal_expr_inputs_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_ctfield(0, MR_r2, 3);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r3),
		MR_LABEL_AP(fn__transform_hlds__loop_inv__goal_expr_inputs_2_0_i88) MR_AND
		MR_LABEL_AP(fn__transform_hlds__loop_inv__goal_expr_inputs_2_0_i89) MR_AND
		MR_LABEL_AP(fn__transform_hlds__loop_inv__goal_expr_inputs_2_0_i13) MR_AND
		MR_LABEL_AP(fn__transform_hlds__loop_inv__goal_expr_inputs_2_0_i14));
MR_def_label(fn__transform_hlds__loop_inv__goal_expr_inputs_2_0,88)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_sv(2) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(2,11);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__transform_hlds__loop_inv__input_arg_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tempr2 = MR_r3;
	MR_sv(1) = MR_ctfield(0, MR_tempr2, 2);
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_r1 = MR_ctfield(0, MR_tempr2, 3);
	}
	MR_np_call_localret_ent(fn__transform_hlds__loop_inv__rhs_modes_1_0,
		fn__transform_hlds__loop_inv__goal_expr_inputs_2_0_i23);
MR_def_label(fn__transform_hlds__loop_inv__goal_expr_inputs_2_0,89)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_sv(2) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(2,12);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__transform_hlds__loop_inv__input_arg_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_sv(1) = MR_ctfield(0, MR_r2, 0);
	MR_tempr2 = MR_r3;
	MR_sv(3) = MR_ctfield(1, MR_tempr2, 2);
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_r1 = MR_ctfield(1, MR_tempr2, 3);
	}
	MR_np_call_localret_ent(fn__transform_hlds__loop_inv__rhs_modes_1_0,
		fn__transform_hlds__loop_inv__goal_expr_inputs_2_0_i11);
MR_def_label(fn__transform_hlds__loop_inv__goal_expr_inputs_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode);
	MR_r3 = MR_r1;
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_np_call_localret_ent(fn__list__filter_map_corresponding_3_0,
		fn__transform_hlds__loop_inv__goal_expr_inputs_2_0_i12);
MR_def_label(fn__transform_hlds__loop_inv__goal_expr_inputs_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
MR_def_label(fn__transform_hlds__loop_inv__goal_expr_inputs_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r1 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_ctfield(2, MR_r3, 1);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
	}
MR_def_label(fn__transform_hlds__loop_inv__goal_expr_inputs_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_ctfield(3, MR_r3, 0),0)) {
		MR_GOTO_LAB(fn__transform_hlds__loop_inv__goal_expr_inputs_2_0_i15);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_ctfield(3, MR_r3, 2);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r1 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_ctfield(0, MR_r2, 0);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_proceed();
	}
MR_def_label(fn__transform_hlds__loop_inv__goal_expr_inputs_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr4 = MR_r2;
	MR_tempr1 = MR_ctfield(0, MR_tempr4, 1);
	MR_r1 = MR_tempr1;
	MR_tempr2 = MR_tag(MR_tempr1);
	if ((MR_tempr2 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(fn__transform_hlds__loop_inv__goal_expr_inputs_2_0_i18);
	}
	if ((MR_tempr2 == MR_mktag((MR_Integer) 2))) {
		MR_GOTO_LAB(fn__transform_hlds__loop_inv__goal_expr_inputs_2_0_i92);
	}
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_ctfield(0, MR_tempr1, 0);
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r1 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_ctfield(0, MR_tempr4, 0);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_proceed();
	}
MR_def_label(fn__transform_hlds__loop_inv__goal_expr_inputs_2_0,92)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__transform_hlds__loop_inv__this_file_0_0,
		fn__transform_hlds__loop_inv__goal_expr_inputs_2_0_i20);
MR_def_label(fn__transform_hlds__loop_inv__goal_expr_inputs_2_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("goal_expr_inputs: lambda goal", 29);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(fn__transform_hlds__loop_inv__goal_expr_inputs_2_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r1 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_ctfield(0, MR_r2, 0);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
	}
MR_def_label(fn__transform_hlds__loop_inv__goal_expr_inputs_2_0,86)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_sv(2) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(2,13);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__transform_hlds__loop_inv__input_arg_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tempr3 = MR_r2;
	MR_sv(1) = MR_ctfield(1, MR_tempr3, 2);
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_tempr2 = MR_tempr3;
	MR_r2 = MR_ctfield(1, MR_r2, 0);
	MR_r3 = MR_ctfield(1, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(fn__transform_hlds__loop_inv__argmodes_3_0,
		fn__transform_hlds__loop_inv__goal_expr_inputs_2_0_i23);
MR_def_label(fn__transform_hlds__loop_inv__goal_expr_inputs_2_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode);
	MR_r3 = MR_r1;
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(1);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(fn__list__filter_map_corresponding_3_0);
MR_def_label(fn__transform_hlds__loop_inv__goal_expr_inputs_2_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(2,14);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__transform_hlds__loop_inv__input_arg_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode);
	MR_r3 = MR_r1;
	MR_r5 = MR_ctfield(2, MR_tempr2, 1);
	MR_r6 = MR_ctfield(2, MR_tempr2, 2);
	MR_np_tailcall_ent(fn__list__filter_map_corresponding_3_0);
	}
MR_def_label(fn__transform_hlds__loop_inv__goal_expr_inputs_2_0,87)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r2, 0),
		MR_LABEL_AP(fn__transform_hlds__loop_inv__goal_expr_inputs_2_0_i28) MR_AND
		MR_LABEL_AP(fn__transform_hlds__loop_inv__goal_expr_inputs_2_0_i32) MR_AND
		MR_LABEL_AP(fn__transform_hlds__loop_inv__goal_expr_inputs_2_0_i35) MR_AND
		MR_LABEL_AP(fn__transform_hlds__loop_inv__goal_expr_inputs_2_0_i38) MR_AND
		MR_LABEL_AP(fn__transform_hlds__loop_inv__goal_expr_inputs_2_0_i41) MR_AND
		MR_LABEL_AP(fn__transform_hlds__loop_inv__goal_expr_inputs_2_0_i44) MR_AND
		MR_LABEL_AP(fn__transform_hlds__loop_inv__goal_expr_inputs_2_0_i47) MR_AND
		MR_LABEL_AP(fn__transform_hlds__loop_inv__goal_expr_inputs_2_0_i50));
MR_def_label(fn__transform_hlds__loop_inv__goal_expr_inputs_2_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_sv(4) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(2,15);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__transform_hlds__loop_inv__input_arg_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tempr3 = MR_r1;
	MR_tfield(0, MR_tempr1, 3) = MR_tempr3;
	MR_sv(1) = MR_tempr3;
	MR_tempr4 = MR_r2;
	MR_sv(2) = MR_ctfield(3, MR_tempr4, 2);
	MR_sv(3) = MR_ctfield(3, MR_tempr4, 3);
	MR_sv(5) = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, foreign_arg);
	MR_tempr2 = MR_tempr4;
	MR_r2 = MR_sv(5);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,1,8);
	MR_r4 = MR_ctfield(3, MR_tempr2, 4);
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		fn__transform_hlds__loop_inv__goal_expr_inputs_2_0_i29);
MR_def_label(fn__transform_hlds__loop_inv__goal_expr_inputs_2_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_ctfield(0, MR_sv(4), 3);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(fn__transform_hlds__loop_inv__argmodes_3_0,
		fn__transform_hlds__loop_inv__goal_expr_inputs_2_0_i30);
MR_def_label(fn__transform_hlds__loop_inv__goal_expr_inputs_2_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode);
	MR_r3 = MR_r1;
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(1);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(fn__list__filter_map_corresponding_3_0);
MR_def_label(fn__transform_hlds__loop_inv__goal_expr_inputs_2_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__transform_hlds__loop_inv__this_file_0_0,
		fn__transform_hlds__loop_inv__goal_expr_inputs_2_0_i33);
MR_def_label(fn__transform_hlds__loop_inv__goal_expr_inputs_2_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("goal_expr_inputs/2: conj/2 in hlds_goal", 39);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(fn__transform_hlds__loop_inv__goal_expr_inputs_2_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__transform_hlds__loop_inv__this_file_0_0,
		fn__transform_hlds__loop_inv__goal_expr_inputs_2_0_i36);
MR_def_label(fn__transform_hlds__loop_inv__goal_expr_inputs_2_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("goal_expr_inputs/2: disj/1 in hlds_goal", 39);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(fn__transform_hlds__loop_inv__goal_expr_inputs_2_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__transform_hlds__loop_inv__this_file_0_0,
		fn__transform_hlds__loop_inv__goal_expr_inputs_2_0_i39);
MR_def_label(fn__transform_hlds__loop_inv__goal_expr_inputs_2_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("goal_expr_inputs/2: switch/3 in hlds_goal", 41);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(fn__transform_hlds__loop_inv__goal_expr_inputs_2_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__transform_hlds__loop_inv__this_file_0_0,
		fn__transform_hlds__loop_inv__goal_expr_inputs_2_0_i42);
MR_def_label(fn__transform_hlds__loop_inv__goal_expr_inputs_2_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("goal_expr_inputs/2: negation/1 in hlds_goal", 43);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(fn__transform_hlds__loop_inv__goal_expr_inputs_2_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__transform_hlds__loop_inv__this_file_0_0,
		fn__transform_hlds__loop_inv__goal_expr_inputs_2_0_i45);
MR_def_label(fn__transform_hlds__loop_inv__goal_expr_inputs_2_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("goal_expr_inputs/2: some/3 in hlds_goal", 39);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(fn__transform_hlds__loop_inv__goal_expr_inputs_2_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__transform_hlds__loop_inv__this_file_0_0,
		fn__transform_hlds__loop_inv__goal_expr_inputs_2_0_i48);
MR_def_label(fn__transform_hlds__loop_inv__goal_expr_inputs_2_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("goal_expr_inputs/2: if_then_else/4 in hlds_goal", 47);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(fn__transform_hlds__loop_inv__goal_expr_inputs_2_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__transform_hlds__loop_inv__this_file_0_0,
		fn__transform_hlds__loop_inv__goal_expr_inputs_2_0_i51);
MR_def_label(fn__transform_hlds__loop_inv__goal_expr_inputs_2_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("goal_expr_inputs/2: shorthand/1 in hlds_goal", 44);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__loop_inv_module30)
	MR_init_entry1(fn__transform_hlds__loop_inv__goal_expr_outputs_2_0);
	MR_init_label8(fn__transform_hlds__loop_inv__goal_expr_outputs_2_0,4,62,11,12,60,15,17,61)
	MR_init_label8(fn__transform_hlds__loop_inv__goal_expr_outputs_2_0,20,21,22,24,25,27,28,30)
	MR_init_label8(fn__transform_hlds__loop_inv__goal_expr_outputs_2_0,31,33,34,36,37,39,40,42)
	MR_init_label1(fn__transform_hlds__loop_inv__goal_expr_outputs_2_0,43)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__transform_hlds__loop_inv__goal_expr_outputs_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r2),
		MR_LABEL_AP(fn__transform_hlds__loop_inv__goal_expr_outputs_2_0_i4) MR_AND
		MR_LABEL_AP(fn__transform_hlds__loop_inv__goal_expr_outputs_2_0_i60) MR_AND
		MR_LABEL_AP(fn__transform_hlds__loop_inv__goal_expr_outputs_2_0_i17) MR_AND
		MR_LABEL_AP(fn__transform_hlds__loop_inv__goal_expr_outputs_2_0_i61));
MR_def_label(fn__transform_hlds__loop_inv__goal_expr_outputs_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_ctfield(0, MR_r2, 3);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r3),
		MR_LABEL_AP(fn__transform_hlds__loop_inv__goal_expr_outputs_2_0_i11) MR_AND
		MR_LABEL_AP(fn__transform_hlds__loop_inv__goal_expr_outputs_2_0_i62) MR_AND
		MR_LABEL_AP(fn__transform_hlds__loop_inv__goal_expr_outputs_2_0_i11) MR_AND
		MR_LABEL_AP(fn__transform_hlds__loop_inv__goal_expr_outputs_2_0_i12));
MR_def_label(fn__transform_hlds__loop_inv__goal_expr_outputs_2_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_sv(2) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(2,16);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__transform_hlds__loop_inv__output_arg_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tempr2 = MR_r3;
	MR_sv(1) = MR_ctfield(1, MR_tempr2, 2);
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_r1 = MR_ctfield(1, MR_tempr2, 3);
	}
	MR_np_call_localret_ent(fn__transform_hlds__loop_inv__rhs_modes_1_0,
		fn__transform_hlds__loop_inv__goal_expr_outputs_2_0_i15);
MR_def_label(fn__transform_hlds__loop_inv__goal_expr_outputs_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r1 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_ctfield(0, MR_r2, 0);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
	}
MR_def_label(fn__transform_hlds__loop_inv__goal_expr_outputs_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(fn__transform_hlds__loop_inv__goal_expr_outputs_2_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_sv(2) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(2,17);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__transform_hlds__loop_inv__output_arg_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tempr3 = MR_r2;
	MR_sv(1) = MR_ctfield(1, MR_tempr3, 2);
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_tempr2 = MR_tempr3;
	MR_r2 = MR_ctfield(1, MR_r2, 0);
	MR_r3 = MR_ctfield(1, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(fn__transform_hlds__loop_inv__argmodes_3_0,
		fn__transform_hlds__loop_inv__goal_expr_outputs_2_0_i15);
MR_def_label(fn__transform_hlds__loop_inv__goal_expr_outputs_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode);
	MR_r3 = MR_r1;
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(1);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(fn__list__filter_map_corresponding_3_0);
MR_def_label(fn__transform_hlds__loop_inv__goal_expr_outputs_2_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(2,18);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__transform_hlds__loop_inv__output_arg_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode);
	MR_r3 = MR_r1;
	MR_r5 = MR_ctfield(2, MR_tempr2, 1);
	MR_r6 = MR_ctfield(2, MR_tempr2, 2);
	MR_np_tailcall_ent(fn__list__filter_map_corresponding_3_0);
	}
MR_def_label(fn__transform_hlds__loop_inv__goal_expr_outputs_2_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r2, 0),
		MR_LABEL_AP(fn__transform_hlds__loop_inv__goal_expr_outputs_2_0_i20) MR_AND
		MR_LABEL_AP(fn__transform_hlds__loop_inv__goal_expr_outputs_2_0_i24) MR_AND
		MR_LABEL_AP(fn__transform_hlds__loop_inv__goal_expr_outputs_2_0_i27) MR_AND
		MR_LABEL_AP(fn__transform_hlds__loop_inv__goal_expr_outputs_2_0_i30) MR_AND
		MR_LABEL_AP(fn__transform_hlds__loop_inv__goal_expr_outputs_2_0_i33) MR_AND
		MR_LABEL_AP(fn__transform_hlds__loop_inv__goal_expr_outputs_2_0_i36) MR_AND
		MR_LABEL_AP(fn__transform_hlds__loop_inv__goal_expr_outputs_2_0_i39) MR_AND
		MR_LABEL_AP(fn__transform_hlds__loop_inv__goal_expr_outputs_2_0_i42));
MR_def_label(fn__transform_hlds__loop_inv__goal_expr_outputs_2_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_sv(4) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(2,19);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__transform_hlds__loop_inv__output_arg_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tempr3 = MR_r1;
	MR_tfield(0, MR_tempr1, 3) = MR_tempr3;
	MR_sv(1) = MR_tempr3;
	MR_tempr4 = MR_r2;
	MR_sv(2) = MR_ctfield(3, MR_tempr4, 2);
	MR_sv(3) = MR_ctfield(3, MR_tempr4, 3);
	MR_sv(5) = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, foreign_arg);
	MR_tempr2 = MR_tempr4;
	MR_r2 = MR_sv(5);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,1,9);
	MR_r4 = MR_ctfield(3, MR_tempr2, 4);
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		fn__transform_hlds__loop_inv__goal_expr_outputs_2_0_i21);
MR_def_label(fn__transform_hlds__loop_inv__goal_expr_outputs_2_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_ctfield(0, MR_sv(4), 3);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(fn__transform_hlds__loop_inv__argmodes_3_0,
		fn__transform_hlds__loop_inv__goal_expr_outputs_2_0_i22);
MR_def_label(fn__transform_hlds__loop_inv__goal_expr_outputs_2_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode);
	MR_r3 = MR_r1;
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(1);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(fn__list__filter_map_corresponding_3_0);
MR_def_label(fn__transform_hlds__loop_inv__goal_expr_outputs_2_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__transform_hlds__loop_inv__this_file_0_0,
		fn__transform_hlds__loop_inv__goal_expr_outputs_2_0_i25);
MR_def_label(fn__transform_hlds__loop_inv__goal_expr_outputs_2_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("goal_expr_outputs/2: conj/2 in hlds_goal", 40);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(fn__transform_hlds__loop_inv__goal_expr_outputs_2_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__transform_hlds__loop_inv__this_file_0_0,
		fn__transform_hlds__loop_inv__goal_expr_outputs_2_0_i28);
MR_def_label(fn__transform_hlds__loop_inv__goal_expr_outputs_2_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("goal_expr_outputs/2: disj/1 in hlds_goal", 40);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(fn__transform_hlds__loop_inv__goal_expr_outputs_2_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__transform_hlds__loop_inv__this_file_0_0,
		fn__transform_hlds__loop_inv__goal_expr_outputs_2_0_i31);
MR_def_label(fn__transform_hlds__loop_inv__goal_expr_outputs_2_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("goal_expr_outputs/2: switch/3 in hlds_goal", 42);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(fn__transform_hlds__loop_inv__goal_expr_outputs_2_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__transform_hlds__loop_inv__this_file_0_0,
		fn__transform_hlds__loop_inv__goal_expr_outputs_2_0_i34);
MR_def_label(fn__transform_hlds__loop_inv__goal_expr_outputs_2_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("goal_expr_outputs/2: negation/1 in hlds_goal", 44);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(fn__transform_hlds__loop_inv__goal_expr_outputs_2_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__transform_hlds__loop_inv__this_file_0_0,
		fn__transform_hlds__loop_inv__goal_expr_outputs_2_0_i37);
MR_def_label(fn__transform_hlds__loop_inv__goal_expr_outputs_2_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("goal_expr_outputs/2: some/3 in hlds_goal", 40);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(fn__transform_hlds__loop_inv__goal_expr_outputs_2_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__transform_hlds__loop_inv__this_file_0_0,
		fn__transform_hlds__loop_inv__goal_expr_outputs_2_0_i40);
MR_def_label(fn__transform_hlds__loop_inv__goal_expr_outputs_2_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("goal_expr_outputs/2: if_then_else/4 in hlds_goal", 48);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(fn__transform_hlds__loop_inv__goal_expr_outputs_2_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__transform_hlds__loop_inv__this_file_0_0,
		fn__transform_hlds__loop_inv__goal_expr_outputs_2_0_i43);
MR_def_label(fn__transform_hlds__loop_inv__goal_expr_outputs_2_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("goal_expr_outputs/2: shorthand/1 in hlds_goal", 45);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__loop_inv_module31)
	MR_init_entry1(fn__transform_hlds__loop_inv__add_outputs_4_0);
	MR_init_label1(fn__transform_hlds__loop_inv__add_outputs_4_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__transform_hlds__loop_inv__add_outputs_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_sv(2) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(2,20);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__transform_hlds__loop_inv__add_output_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r2;
	MR_sv(1) = MR_r4;
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(0,3,11);
	MR_r2 = MR_ctfield(0, MR_r3, 0);
	}
	MR_np_call_localret_ent(fn__transform_hlds__loop_inv__goal_expr_outputs_2_0,
		fn__transform_hlds__loop_inv__add_outputs_4_0_i2);
MR_def_label(fn__transform_hlds__loop_inv__add_outputs_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(2);
	MR_r5 = MR_sv(1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(fn__list__foldl_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__hlds__hlds_goal__goal_info_get_nonlocals_1_0);
MR_decl_entry(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0);
MR_decl_entry(f_108_105_115_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0);

MR_BEGIN_MODULE(transform_hlds__loop_inv_module32)
	MR_init_entry1(transform_hlds__loop_inv__inv_goals_vars_2_7_0);
	MR_init_label8(transform_hlds__loop_inv__inv_goals_vars_2_7_0,8,12,16,9,6,23,24,25)
	MR_init_label8(transform_hlds__loop_inv__inv_goals_vars_2_7_0,21,28,33,36,32,39,40,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__loop_inv__inv_goals_vars_2_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(18);
	MR_sv(18) = (MR_Word) MR_succip;
	MR_sv(9) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(10) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(11));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(transform_hlds__loop_inv__inv_goals_vars_2_7_0_i6);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(4) = MR_tempr1;
	MR_sv(5) = MR_r5;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__member_2_1,
		transform_hlds__loop_inv__inv_goals_vars_2_7_0_i8);
MR_def_label(transform_hlds__loop_inv__inv_goals_vars_2_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_ctfield(0, MR_sv(3), 0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_r1, 0);
	MR_sv(6) = MR_tempr1;
	MR_sv(7) = MR_r2;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(__Unify___hlds__hlds_goal__hlds_goal_expr_0_0,
		transform_hlds__loop_inv__inv_goals_vars_2_7_0_i12);
MR_def_label(transform_hlds__loop_inv__inv_goals_vars_2_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(transform_hlds__loop_inv__inv_goals_vars_2_7_0_i9);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(6);
	MR_r3 = MR_tempr1;
	MR_tempr2 = MR_sv(7);
	MR_r2 = MR_tempr2;
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	if (MR_PTAG_TESTR(MR_tempr2,1)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_r4 = MR_ctfield(1, MR_tempr1, 0);
	MR_r5 = MR_ctfield(1, MR_tempr2, 0);
	if ((MR_r4 != MR_r5)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_r4 = MR_ctfield(1, MR_tempr1, 1);
	MR_r5 = MR_ctfield(1, MR_tempr2, 1);
	if ((MR_r4 != MR_r5)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_r2 = MR_ctfield(1, MR_tempr1, 2);
	MR_r3 = MR_ctfield(1, MR_sv(7), 2);
	}
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		transform_hlds__loop_inv__inv_goals_vars_2_7_0_i16);
MR_def_label(transform_hlds__loop_inv__inv_goals_vars_2_7_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
MR_def_label(transform_hlds__loop_inv__inv_goals_vars_2_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_restore_maxfr(MR_sv(11));
	MR_redoip_slot_word(MR_maxfr) = MR_sv(9);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(10);
	MR_GOTO_LAB(transform_hlds__loop_inv__inv_goals_vars_2_7_0_i2);
MR_def_label(transform_hlds__loop_inv__inv_goals_vars_2_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_sv(2);
	MR_tempr2 = MR_sv(3);
	MR_tempr3 = MR_sv(4);
	MR_tempr4 = MR_sv(5);
	MR_redoip_slot_word(MR_maxfr) = MR_sv(9);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(10);
	MR_sv(12) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(13) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(14));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(transform_hlds__loop_inv__inv_goals_vars_2_7_0_i21);
	MR_r1 = MR_ctfield(0, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_nonlocals_1_0,
		transform_hlds__loop_inv__inv_goals_vars_2_7_0_i23);
MR_def_label(transform_hlds__loop_inv__inv_goals_vars_2_7_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_sv(7) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_sv(8) = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(list__member_2_1,
		transform_hlds__loop_inv__inv_goals_vars_2_7_0_i24);
MR_def_label(transform_hlds__loop_inv__inv_goals_vars_2_7_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(8);
	MR_r4 = MR_sv(6);
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		transform_hlds__loop_inv__inv_goals_vars_2_7_0_i25);
MR_def_label(transform_hlds__loop_inv__inv_goals_vars_2_7_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_restore_maxfr(MR_sv(14));
	MR_redoip_slot_word(MR_maxfr) = MR_sv(12);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(13);
	MR_GOTO_LAB(transform_hlds__loop_inv__inv_goals_vars_2_7_0_i2);
MR_def_label(transform_hlds__loop_inv__inv_goals_vars_2_7_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_sv(3);
	MR_tempr2 = MR_sv(4);
	MR_tempr3 = MR_sv(5);
	MR_redoip_slot_word(MR_maxfr) = MR_sv(12);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(13);
	MR_r2 = MR_ctfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(fn__transform_hlds__loop_inv__goal_expr_inputs_2_0,
		transform_hlds__loop_inv__inv_goals_vars_2_7_0_i28);
MR_def_label(transform_hlds__loop_inv__inv_goals_vars_2_7_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(15) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(16) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(17));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(transform_hlds__loop_inv__inv_goals_vars_2_7_0_i32);
	MR_sv(6) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_sv(7) = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(list__member_2_1,
		transform_hlds__loop_inv__inv_goals_vars_2_7_0_i33);
MR_def_label(transform_hlds__loop_inv__inv_goals_vars_2_7_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_r4 = MR_sv(5);
	MR_np_call_localret_ent(f_108_105_115_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		transform_hlds__loop_inv__inv_goals_vars_2_7_0_i36);
MR_def_label(transform_hlds__loop_inv__inv_goals_vars_2_7_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_restore_maxfr(MR_sv(17));
	MR_redoip_slot_word(MR_maxfr) = MR_sv(15);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(16);
	MR_GOTO_LAB(transform_hlds__loop_inv__inv_goals_vars_2_7_0_i2);
MR_def_label(transform_hlds__loop_inv__inv_goals_vars_2_7_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = MR_sv(15);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(16);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(4);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_COMMON(2,21);
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_ENTRY_AP(fn__transform_hlds__loop_inv__add_output_3_0);
	MR_tfield(0, MR_tempr2, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr2, 3) = MR_sv(2);
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_tempr2;
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(0,3,11);
	MR_r2 = MR_ctfield(0, MR_ctfield(1, MR_tempr1, 0), 0);
	}
	MR_np_call_localret_ent(fn__transform_hlds__loop_inv__goal_expr_outputs_2_0,
		transform_hlds__loop_inv__inv_goals_vars_2_7_0_i39);
MR_def_label(transform_hlds__loop_inv__inv_goals_vars_2_7_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(2);
	MR_r5 = MR_sv(5);
	MR_np_call_localret_ent(fn__list__foldl_3_0,
		transform_hlds__loop_inv__inv_goals_vars_2_7_0_i40);
MR_def_label(transform_hlds__loop_inv__inv_goals_vars_2_7_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(18);
MR_def_label(transform_hlds__loop_inv__inv_goals_vars_2_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(4);
	MR_tempr2 = MR_sv(5);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	MR_decr_sp_and_return(18);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__hlds__hlds_goal__goal_get_purity_1_0);
MR_decl_entry(parse_tree__prog_data__determinism_components_3_0);
MR_decl_entry(check_hlds__inst_util__inst_contains_any_2_0);
MR_decl_entry(list__cons_3_0);

MR_BEGIN_MODULE(transform_hlds__loop_inv_module33)
	MR_init_entry1(transform_hlds__loop_inv__dont_hoist_2_6_0);
	MR_init_label8(transform_hlds__loop_inv__dont_hoist_2_6_0,10,6,13,17,16,20,21,19)
	MR_init_label8(transform_hlds__loop_inv__dont_hoist_2_6_0,25,26,24,23,30,31,35,33)
	MR_init_label8(transform_hlds__loop_inv__dont_hoist_2_6_0,37,32,28,4,40,41,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__loop_inv__dont_hoist_2_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(0, MR_r2, 0);
	MR_r5 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(transform_hlds__loop_inv__dont_hoist_2_6_0_i6);
	}
	MR_tempr2 = MR_ctfield(0, MR_tempr1, 3);
	MR_r6 = MR_tempr2;
	if (MR_PTAG_TESTR(MR_tempr2,0)) {
		MR_GOTO_LAB(transform_hlds__loop_inv__dont_hoist_2_6_0_i6);
	}
	MR_r5 = MR_ctfield(0, MR_tempr2, 4);
	MR_r7 = MR_ctfield(0, MR_tempr2, 2);
	if (MR_LTAGS_TESTR(MR_r7,0,0)) {
		MR_GOTO_LAB(transform_hlds__loop_inv__dont_hoist_2_6_0_i10);
	}
	MR_sv(1) = MR_r1;
	MR_sv(4) = MR_r4;
	MR_GOTO_LAB(transform_hlds__loop_inv__dont_hoist_2_6_0_i4);
	}
MR_def_label(transform_hlds__loop_inv__dont_hoist_2_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r5,1)) {
		MR_GOTO_LAB(transform_hlds__loop_inv__dont_hoist_2_6_0_i6);
	}
	MR_sv(1) = MR_r1;
	MR_sv(4) = MR_r4;
	MR_GOTO_LAB(transform_hlds__loop_inv__dont_hoist_2_6_0_i4);
MR_def_label(transform_hlds__loop_inv__dont_hoist_2_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_r2, 0);
	MR_r5 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(transform_hlds__loop_inv__dont_hoist_2_6_0_i13);
	}
	MR_r6 = MR_ctfield(0, MR_tempr1, 3);
	if (MR_PTAG_TESTR(MR_r6,1)) {
		MR_GOTO_LAB(transform_hlds__loop_inv__dont_hoist_2_6_0_i13);
	}
	MR_sv(1) = MR_r1;
	MR_sv(4) = MR_r4;
	MR_GOTO_LAB(transform_hlds__loop_inv__dont_hoist_2_6_0_i4);
	}
MR_def_label(transform_hlds__loop_inv__dont_hoist_2_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_get_purity_1_0,
		transform_hlds__loop_inv__dont_hoist_2_6_0_i17);
MR_def_label(transform_hlds__loop_inv__dont_hoist_2_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,2)) {
		MR_GOTO_LAB(transform_hlds__loop_inv__dont_hoist_2_6_0_i16);
	}
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_GOTO_LAB(transform_hlds__loop_inv__dont_hoist_2_6_0_i4);
MR_def_label(transform_hlds__loop_inv__dont_hoist_2_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_sv(2), 1);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_determinism_1_0,
		transform_hlds__loop_inv__dont_hoist_2_6_0_i20);
MR_def_label(transform_hlds__loop_inv__dont_hoist_2_6_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(parse_tree__prog_data__determinism_components_3_0,
		transform_hlds__loop_inv__dont_hoist_2_6_0_i21);
MR_def_label(transform_hlds__loop_inv__dont_hoist_2_6_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(transform_hlds__loop_inv__dont_hoist_2_6_0_i19);
	}
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_GOTO_LAB(transform_hlds__loop_inv__dont_hoist_2_6_0_i4);
MR_def_label(transform_hlds__loop_inv__dont_hoist_2_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_sv(2), 0);
	MR_r3 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(transform_hlds__loop_inv__dont_hoist_2_6_0_i24);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_ctfield(1, MR_tempr1, 0);
	MR_r3 = MR_ctfield(1, MR_r3, 1);
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_proc_info_5_0,
		transform_hlds__loop_inv__dont_hoist_2_6_0_i25);
MR_def_label(transform_hlds__loop_inv__dont_hoist_2_6_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_argmodes_2_0,
		transform_hlds__loop_inv__dont_hoist_2_6_0_i26);
MR_def_label(transform_hlds__loop_inv__dont_hoist_2_6_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_GOTO_LAB(transform_hlds__loop_inv__dont_hoist_2_6_0_i23);
MR_def_label(transform_hlds__loop_inv__dont_hoist_2_6_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r3,2)) {
		MR_GOTO_LAB(transform_hlds__loop_inv__dont_hoist_2_6_0_i2);
	}
	MR_r2 = MR_ctfield(2, MR_r3, 2);
MR_def_label(transform_hlds__loop_inv__dont_hoist_2_6_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(7) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(8));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(transform_hlds__loop_inv__dont_hoist_2_6_0_i28);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode);
	MR_np_call_localret_ent(list__member_2_1,
		transform_hlds__loop_inv__dont_hoist_2_6_0_i30);
MR_def_label(transform_hlds__loop_inv__dont_hoist_2_6_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(check_hlds__mode_util__mode_get_insts_4_0,
		transform_hlds__loop_inv__dont_hoist_2_6_0_i31);
MR_def_label(transform_hlds__loop_inv__dont_hoist_2_6_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(check_hlds__inst_util__inst_contains_any_2_0,
		transform_hlds__loop_inv__dont_hoist_2_6_0_i35);
MR_def_label(transform_hlds__loop_inv__dont_hoist_2_6_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__loop_inv__dont_hoist_2_6_0_i33);
	}
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_GOTO_LAB(transform_hlds__loop_inv__dont_hoist_2_6_0_i32);
MR_def_label(transform_hlds__loop_inv__dont_hoist_2_6_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(check_hlds__inst_util__inst_contains_any_2_0,
		transform_hlds__loop_inv__dont_hoist_2_6_0_i37);
MR_def_label(transform_hlds__loop_inv__dont_hoist_2_6_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
MR_def_label(transform_hlds__loop_inv__dont_hoist_2_6_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_restore_maxfr(MR_sv(8));
	MR_redoip_slot_word(MR_maxfr) = MR_sv(6);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(7);
	MR_GOTO_LAB(transform_hlds__loop_inv__dont_hoist_2_6_0_i4);
MR_def_label(transform_hlds__loop_inv__dont_hoist_2_6_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_redoip_slot_word(MR_maxfr) = MR_sv(6);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(7);
	MR_GOTO_LAB(transform_hlds__loop_inv__dont_hoist_2_6_0_i3);
MR_def_label(transform_hlds__loop_inv__dont_hoist_2_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_np_call_localret_ent(list__cons_3_0,
		transform_hlds__loop_inv__dont_hoist_2_6_0_i40);
MR_def_label(transform_hlds__loop_inv__dont_hoist_2_6_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(4);
	}
	MR_np_call_localret_ent(fn__transform_hlds__loop_inv__add_outputs_4_0,
		transform_hlds__loop_inv__dont_hoist_2_6_0_i41);
MR_def_label(transform_hlds__loop_inv__dont_hoist_2_6_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(9);
MR_def_label(transform_hlds__loop_inv__dont_hoist_2_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
MR_def_label(transform_hlds__loop_inv__dont_hoist_2_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_r2 = MR_r4;
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__loop_inv_module34)
	MR_init_entry1(fn__transform_hlds__loop_inv__add_output_3_0);
	MR_init_label3(fn__transform_hlds__loop_inv__add_output_3_0,5,8,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__transform_hlds__loop_inv__add_output_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(f_108_105_115_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		fn__transform_hlds__loop_inv__add_output_3_0_i5);
MR_def_label(fn__transform_hlds__loop_inv__add_output_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(fn__transform_hlds__loop_inv__add_output_3_0_i2);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(f_108_105_115_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		fn__transform_hlds__loop_inv__add_output_3_0_i8);
MR_def_label(fn__transform_hlds__loop_inv__add_output_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(fn__transform_hlds__loop_inv__add_output_3_0_i2);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r1 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(3);
	MR_decr_sp_and_return(4);
	}
MR_def_label(fn__transform_hlds__loop_inv__add_output_3_0,2)
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

MR_decl_entry(check_hlds__inst_match__inst_is_not_partly_unique_2_0);

MR_BEGIN_MODULE(transform_hlds__loop_inv_module35)
	MR_init_entry1(fn__transform_hlds__loop_inv__uniquely_used_args_3_0);
	MR_init_label3(fn__transform_hlds__loop_inv__uniquely_used_args_3_0,2,5,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__transform_hlds__loop_inv__uniquely_used_args_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r1;
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(check_hlds__mode_util__mode_get_insts_4_0,
		fn__transform_hlds__loop_inv__uniquely_used_args_3_0_i2);
MR_def_label(fn__transform_hlds__loop_inv__uniquely_used_args_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(check_hlds__inst_match__inst_is_not_partly_unique_2_0,
		fn__transform_hlds__loop_inv__uniquely_used_args_3_0_i5);
MR_def_label(fn__transform_hlds__loop_inv__uniquely_used_args_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(fn__transform_hlds__loop_inv__uniquely_used_args_3_0_i1);
	}
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(fn__transform_hlds__loop_inv__uniquely_used_args_3_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__loop_inv_module36)
	MR_init_entry1(fn__transform_hlds__loop_inv__output_arg_3_0);
	MR_init_label3(fn__transform_hlds__loop_inv__output_arg_3_0,2,3,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__transform_hlds__loop_inv__output_arg_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r1;
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(check_hlds__mode_util__mode_get_insts_4_0,
		fn__transform_hlds__loop_inv__output_arg_3_0_i2);
MR_def_label(fn__transform_hlds__loop_inv__output_arg_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(check_hlds__inst_match__inst_is_free_2_0,
		fn__transform_hlds__loop_inv__output_arg_3_0_i3);
MR_def_label(fn__transform_hlds__loop_inv__output_arg_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__transform_hlds__loop_inv__output_arg_3_0_i1);
	}
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(fn__transform_hlds__loop_inv__output_arg_3_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___hlds__hlds_module__module_info_0_0);
MR_decl_entry(__Unify___hlds__hlds_goal__hlds_goal_0_0);

MR_BEGIN_MODULE(transform_hlds__loop_inv_module37)
	MR_init_entry1(__Unify___transform_hlds__loop_inv__gen_aux_proc_info_0_0);
	MR_init_label5(__Unify___transform_hlds__loop_inv__gen_aux_proc_info_0_0,4,6,8,12,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___transform_hlds__loop_inv__gen_aux_proc_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___transform_hlds__loop_inv__gen_aux_proc_info_0_0_i12);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_ctfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 2);
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 3);
	MR_sv(4) = MR_ctfield(0, MR_tempr2, 1);
	MR_sv(5) = MR_ctfield(0, MR_tempr2, 2);
	MR_sv(6) = MR_ctfield(0, MR_tempr2, 3);
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	MR_r2 = MR_ctfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___hlds__hlds_module__module_info_0_0,
		__Unify___transform_hlds__loop_inv__gen_aux_proc_info_0_0_i4);
MR_def_label(__Unify___transform_hlds__loop_inv__gen_aux_proc_info_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__loop_inv__gen_aux_proc_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___transform_hlds__loop_inv__gen_aux_proc_info_0_0_i6);
MR_def_label(__Unify___transform_hlds__loop_inv__gen_aux_proc_info_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__loop_inv__gen_aux_proc_info_0_0_i1);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(__Unify___hlds__hlds_pred__pred_proc_id_0_0,
		__Unify___transform_hlds__loop_inv__gen_aux_proc_info_0_0_i8);
MR_def_label(__Unify___transform_hlds__loop_inv__gen_aux_proc_info_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__loop_inv__gen_aux_proc_info_0_0_i1);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(6);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(__Unify___hlds__hlds_goal__hlds_goal_0_0);
MR_def_label(__Unify___transform_hlds__loop_inv__gen_aux_proc_info_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___transform_hlds__loop_inv__gen_aux_proc_info_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___hlds__hlds_module__module_info_0_0);
MR_decl_entry(__Compare___list__list_1_0);
MR_decl_entry(__Compare___hlds__hlds_pred__pred_proc_id_0_0);
MR_decl_entry(__Compare___hlds__hlds_goal__hlds_goal_0_0);

MR_BEGIN_MODULE(transform_hlds__loop_inv_module38)
	MR_init_entry1(__Compare___transform_hlds__loop_inv__gen_aux_proc_info_0_0);
	MR_init_label6(__Compare___transform_hlds__loop_inv__gen_aux_proc_info_0_0,3,2,5,9,13,37)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___transform_hlds__loop_inv__gen_aux_proc_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___transform_hlds__loop_inv__gen_aux_proc_info_0_0_i3);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___transform_hlds__loop_inv__gen_aux_proc_info_0_0_i2);
MR_def_label(__Compare___transform_hlds__loop_inv__gen_aux_proc_info_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___transform_hlds__loop_inv__gen_aux_proc_info_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(6) = MR_ctfield(0, MR_tempr5, 3);
	MR_sv(5) = MR_ctfield(0, MR_tempr5, 2);
	MR_sv(4) = MR_ctfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_sv(3) = MR_ctfield(0, MR_tempr6, 3);
	MR_tempr1 = MR_ctfield(0, MR_tempr6, 2);
	MR_tempr2 = MR_ctfield(0, MR_tempr6, 1);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_ctfield(0, MR_tempr3, 0);
	MR_r2 = MR_ctfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___hlds__hlds_module__module_info_0_0,
		__Compare___transform_hlds__loop_inv__gen_aux_proc_info_0_0_i5);
MR_def_label(__Compare___transform_hlds__loop_inv__gen_aux_proc_info_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__loop_inv__gen_aux_proc_info_0_0_i37);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___transform_hlds__loop_inv__gen_aux_proc_info_0_0_i9);
MR_def_label(__Compare___transform_hlds__loop_inv__gen_aux_proc_info_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__loop_inv__gen_aux_proc_info_0_0_i37);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(__Compare___hlds__hlds_pred__pred_proc_id_0_0,
		__Compare___transform_hlds__loop_inv__gen_aux_proc_info_0_0_i13);
MR_def_label(__Compare___transform_hlds__loop_inv__gen_aux_proc_info_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__loop_inv__gen_aux_proc_info_0_0_i37);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(6);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(__Compare___hlds__hlds_goal__hlds_goal_0_0);
MR_def_label(__Compare___transform_hlds__loop_inv__gen_aux_proc_info_0_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(builtin__unify_2_0);

MR_BEGIN_MODULE(transform_hlds__loop_inv_module39)
	MR_init_entry1(__Unify___transform_hlds__loop_inv__inst_info_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___transform_hlds__loop_inv__inst_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,7,0);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(builtin__unify_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(builtin__compare_3_0);

MR_BEGIN_MODULE(transform_hlds__loop_inv_module40)
	MR_init_entry1(__Compare___transform_hlds__loop_inv__inst_info_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___transform_hlds__loop_inv__inst_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,7,0);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(builtin__compare_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__loop_inv_module41)
	MR_init_entry1(__Unify___transform_hlds__loop_inv__invariant_goal_candidates_acc_0_0);
	MR_init_label3(__Unify___transform_hlds__loop_inv__invariant_goal_candidates_acc_0_0,4,8,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___transform_hlds__loop_inv__invariant_goal_candidates_acc_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___transform_hlds__loop_inv__invariant_goal_candidates_acc_0_0_i8);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_ctfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_ctfield(0, MR_tempr2, 1);
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(0,3,10);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_ctfield(0, MR_tempr1, 0);
	MR_r3 = MR_ctfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___transform_hlds__loop_inv__invariant_goal_candidates_acc_0_0_i4);
MR_def_label(__Unify___transform_hlds__loop_inv__invariant_goal_candidates_acc_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__loop_inv__invariant_goal_candidates_acc_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,8,0);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___transform_hlds__loop_inv__invariant_goal_candidates_acc_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___transform_hlds__loop_inv__invariant_goal_candidates_acc_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__loop_inv_module42)
	MR_init_entry1(__Compare___transform_hlds__loop_inv__invariant_goal_candidates_acc_0_0);
	MR_init_label4(__Compare___transform_hlds__loop_inv__invariant_goal_candidates_acc_0_0,3,2,5,21)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___transform_hlds__loop_inv__invariant_goal_candidates_acc_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___transform_hlds__loop_inv__invariant_goal_candidates_acc_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___transform_hlds__loop_inv__invariant_goal_candidates_acc_0_0_i2);
MR_def_label(__Compare___transform_hlds__loop_inv__invariant_goal_candidates_acc_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___transform_hlds__loop_inv__invariant_goal_candidates_acc_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_tempr1 = MR_ctfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_tempr2 = MR_ctfield(0, MR_tempr6, 1);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_ctfield(0, MR_tempr3, 0);
	MR_r3 = MR_ctfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___transform_hlds__loop_inv__invariant_goal_candidates_acc_0_0_i5);
MR_def_label(__Compare___transform_hlds__loop_inv__invariant_goal_candidates_acc_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__loop_inv__invariant_goal_candidates_acc_0_0_i21);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,8,0);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___transform_hlds__loop_inv__invariant_goal_candidates_acc_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___pair__pair_2_0);

MR_BEGIN_MODULE(transform_hlds__loop_inv_module43)
	MR_init_entry1(__Unify___transform_hlds__loop_inv__rec_call_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___transform_hlds__loop_inv__rec_call_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,3,10);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Unify___pair__pair_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___pair__pair_2_0);

MR_BEGIN_MODULE(transform_hlds__loop_inv_module44)
	MR_init_entry1(__Compare___transform_hlds__loop_inv__rec_call_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___transform_hlds__loop_inv__rec_call_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,3,10);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Compare___pair__pair_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__loop_inv_module45)
	MR_init_entry1(__Unify___transform_hlds__loop_inv__rec_calls_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___transform_hlds__loop_inv__rec_calls_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,8,0);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(__Unify___list__list_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__loop_inv_module46)
	MR_init_entry1(__Compare___transform_hlds__loop_inv__rec_calls_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___transform_hlds__loop_inv__rec_calls_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,8,0);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(__Compare___list__list_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__loop_inv_module47)
	MR_init_entry1(fn__transform_hlds__loop_inv__IntroducedFrom__func__case_goals__414__1_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__transform_hlds__loop_inv__IntroducedFrom__func__case_goals__414__1_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r1, 1);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__loop_inv_module48)
	MR_init_entry1(fn__transform_hlds__loop_inv__IntroducedFrom__func__inv_args__507__1_1_0);
	MR_init_label1(fn__transform_hlds__loop_inv__IntroducedFrom__func__inv_args__507__1_1_0,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__transform_hlds__loop_inv__IntroducedFrom__func__inv_args__507__1_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__transform_hlds__loop_inv__IntroducedFrom__func__inv_args__507__1_1_0_i1);
	}
	MR_r2 = MR_ctfield(1, MR_r1, 0);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(fn__transform_hlds__loop_inv__IntroducedFrom__func__inv_args__507__1_1_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__hlds__hlds_goal__goal_info_get_instmap_delta_1_0);
MR_decl_entry(hlds__instmap__apply_instmap_delta_3_0);

MR_BEGIN_MODULE(transform_hlds__loop_inv_module49)
	MR_init_entry1(fn__transform_hlds__loop_inv__IntroducedFrom__func__compute_initial_aux_instmap__750__1_2_0);
	MR_init_label1(fn__transform_hlds__loop_inv__IntroducedFrom__func__compute_initial_aux_instmap__750__1_2_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__transform_hlds__loop_inv__IntroducedFrom__func__compute_initial_aux_instmap__750__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_r1 = MR_ctfield(0, MR_r1, 1);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_instmap_delta_1_0,
		fn__transform_hlds__loop_inv__IntroducedFrom__func__compute_initial_aux_instmap__750__1_2_0_i2);
MR_def_label(fn__transform_hlds__loop_inv__IntroducedFrom__func__compute_initial_aux_instmap__750__1_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(hlds__instmap__apply_instmap_delta_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__loop_inv_module50)
	MR_init_entry1(fn__transform_hlds__loop_inv__IntroducedFrom__func__gen_aux_proc_switch__935__1_2_0);
	MR_init_label1(fn__transform_hlds__loop_inv__IntroducedFrom__func__gen_aux_proc_switch__935__1_2_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__transform_hlds__loop_inv__IntroducedFrom__func__gen_aux_proc_switch__935__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(0, MR_r2, 0);
	MR_r2 = MR_ctfield(0, MR_r2, 1);
	MR_np_call_localret_ent(fn__transform_hlds__loop_inv__gen_aux_proc_2_2_0,
		fn__transform_hlds__loop_inv__IntroducedFrom__func__gen_aux_proc_switch__935__1_2_0_i2);
MR_def_label(fn__transform_hlds__loop_inv__IntroducedFrom__func__gen_aux_proc_switch__935__1_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__loop_inv_module51)
	MR_init_entry1(fn__transform_hlds__loop_inv__IntroducedFrom__func__gen_out_proc_2__1030__1_3_0);
	MR_init_label1(fn__transform_hlds__loop_inv__IntroducedFrom__func__gen_out_proc_2__1030__1_3_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__transform_hlds__loop_inv__IntroducedFrom__func__gen_out_proc_2__1030__1_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(0, MR_r3, 0);
	MR_r3 = MR_ctfield(0, MR_r3, 1);
	MR_np_call_localret_ent(fn__transform_hlds__loop_inv__gen_out_proc_2_3_0,
		fn__transform_hlds__loop_inv__IntroducedFrom__func__gen_out_proc_2__1030__1_3_0_i2);
MR_def_label(fn__transform_hlds__loop_inv__IntroducedFrom__func__gen_out_proc_2__1030__1_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__loop_inv_module52)
	MR_init_entry1(fn__transform_hlds__loop_inv__IntroducedFrom__func__rhs_modes__1357__1_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__transform_hlds__loop_inv__IntroducedFrom__func__rhs_modes__1357__1_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tempr2 = MR_r1;
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_ctfield(0, MR_tempr2, 0), 1);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_ctfield(0, MR_tempr2, 1), 1);
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__loop_inv_module53)
	MR_init_entry1(fn__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_111_111_112_95_105_110_118_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_114_101_112_108_97_99_101_95_105_110_105_116_105_97_108_95_97_114_103_115_95_95_91_49_93_95_48_2_0);
	MR_init_label3(fn__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_111_111_112_95_105_110_118_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_114_101_112_108_97_99_101_95_105_110_105_116_105_97_108_95_97_114_103_115_95_95_91_49_93_95_48_2_0,3,6,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_111_111_112_95_105_110_118_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_114_101_112_108_97_99_101_95_105_110_105_116_105_97_108_95_97_114_103_115_95_95_91_49_93_95_48_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_111_111_112_95_105_110_118_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_114_101_112_108_97_99_101_95_105_110_105_116_105_97_108_95_97_114_103_115_95_95_91_49_93_95_48_2_0_i3);
	}
	MR_r1 = MR_r2;
	MR_proceed();
MR_def_label(fn__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_111_111_112_95_105_110_118_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_114_101_112_108_97_99_101_95_105_110_105_116_105_97_108_95_97_114_103_115_95_95_91_49_93_95_48_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(fn__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_111_111_112_95_105_110_118_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_114_101_112_108_97_99_101_95_105_110_105_116_105_97_108_95_97_114_103_115_95_95_91_49_93_95_48_2_0_i5);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(1, MR_r1, 0);
	MR_r1 = MR_ctfield(1, MR_r1, 1);
	MR_r2 = MR_ctfield(1, MR_r2, 1);
	MR_np_localcall_lab(fn__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_111_111_112_95_105_110_118_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_114_101_112_108_97_99_101_95_105_110_105_116_105_97_108_95_97_114_103_115_95_95_91_49_93_95_48_2_0,
		fn__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_111_111_112_95_105_110_118_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_114_101_112_108_97_99_101_95_105_110_105_116_105_97_108_95_97_114_103_115_95_95_91_49_93_95_48_2_0_i6);
MR_def_label(fn__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_111_111_112_95_105_110_118_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_114_101_112_108_97_99_101_95_105_110_105_116_105_97_108_95_97_114_103_115_95_95_91_49_93_95_48_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(2);
	}
MR_def_label(fn__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_108_111_111_112_95_105_110_118_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_114_101_112_108_97_99_101_95_105_110_105_116_105_97_108_95_97_114_103_115_95_95_91_49_93_95_48_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("loop_inv.m", 10);
	MR_r2 = (MR_Word) MR_string_const("replace_initial_args/2: first arg longer than second", 52);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__transform_hlds__loop_inv_maybe_bunch_0(void)
{
	transform_hlds__loop_inv_module0();
	transform_hlds__loop_inv_module1();
	transform_hlds__loop_inv_module2();
	transform_hlds__loop_inv_module3();
	transform_hlds__loop_inv_module4();
	transform_hlds__loop_inv_module5();
	transform_hlds__loop_inv_module6();
	transform_hlds__loop_inv_module7();
	transform_hlds__loop_inv_module8();
	transform_hlds__loop_inv_module9();
	transform_hlds__loop_inv_module10();
	transform_hlds__loop_inv_module11();
	transform_hlds__loop_inv_module12();
	transform_hlds__loop_inv_module13();
	transform_hlds__loop_inv_module14();
	transform_hlds__loop_inv_module15();
	transform_hlds__loop_inv_module16();
	transform_hlds__loop_inv_module17();
	transform_hlds__loop_inv_module18();
	transform_hlds__loop_inv_module19();
	transform_hlds__loop_inv_module20();
	transform_hlds__loop_inv_module21();
	transform_hlds__loop_inv_module22();
	transform_hlds__loop_inv_module23();
	transform_hlds__loop_inv_module24();
	transform_hlds__loop_inv_module25();
	transform_hlds__loop_inv_module26();
	transform_hlds__loop_inv_module27();
	transform_hlds__loop_inv_module28();
	transform_hlds__loop_inv_module29();
	transform_hlds__loop_inv_module30();
	transform_hlds__loop_inv_module31();
	transform_hlds__loop_inv_module32();
	transform_hlds__loop_inv_module33();
	transform_hlds__loop_inv_module34();
	transform_hlds__loop_inv_module35();
	transform_hlds__loop_inv_module36();
	transform_hlds__loop_inv_module37();
	transform_hlds__loop_inv_module38();
	transform_hlds__loop_inv_module39();
}

static void mercury__transform_hlds__loop_inv_maybe_bunch_1(void)
{
	transform_hlds__loop_inv_module40();
	transform_hlds__loop_inv_module41();
	transform_hlds__loop_inv_module42();
	transform_hlds__loop_inv_module43();
	transform_hlds__loop_inv_module44();
	transform_hlds__loop_inv_module45();
	transform_hlds__loop_inv_module46();
	transform_hlds__loop_inv_module47();
	transform_hlds__loop_inv_module48();
	transform_hlds__loop_inv_module49();
	transform_hlds__loop_inv_module50();
	transform_hlds__loop_inv_module51();
	transform_hlds__loop_inv_module52();
	transform_hlds__loop_inv_module53();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__transform_hlds__loop_inv__init(void);
void mercury__transform_hlds__loop_inv__init_type_tables(void);
void mercury__transform_hlds__loop_inv__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__transform_hlds__loop_inv__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__transform_hlds__loop_inv__init_complexity_procs(void);
#endif

void mercury__transform_hlds__loop_inv__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__transform_hlds__loop_inv_maybe_bunch_0();
	mercury__transform_hlds__loop_inv_maybe_bunch_1();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_transform_hlds__loop_inv__type_ctor_info_rec_calls_0,
		transform_hlds__loop_inv__rec_calls_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_transform_hlds__loop_inv__type_ctor_info_rec_call_0,
		transform_hlds__loop_inv__rec_call_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_transform_hlds__loop_inv__type_ctor_info_invariant_goal_candidates_acc_0,
		transform_hlds__loop_inv__invariant_goal_candidates_acc_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_transform_hlds__loop_inv__type_ctor_info_inst_info_0,
		transform_hlds__loop_inv__inst_info_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_transform_hlds__loop_inv__type_ctor_info_gen_aux_proc_info_0,
		transform_hlds__loop_inv__gen_aux_proc_info_0_0);
	mercury__transform_hlds__loop_inv__init_debugger();
}

void mercury__transform_hlds__loop_inv__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_transform_hlds__loop_inv__type_ctor_info_rec_calls_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_transform_hlds__loop_inv__type_ctor_info_rec_call_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_transform_hlds__loop_inv__type_ctor_info_invariant_goal_candidates_acc_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_transform_hlds__loop_inv__type_ctor_info_inst_info_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_transform_hlds__loop_inv__type_ctor_info_gen_aux_proc_info_0);
	}
}


void mercury__transform_hlds__loop_inv__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__transform_hlds__loop_inv__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__transform_hlds__loop_inv);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__transform_hlds__loop_inv__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
