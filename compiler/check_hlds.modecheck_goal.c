/*
** Automatically generated from `modecheck_goal.m'
** by the Mercury compiler,
** version 11.07.2-beta-2012-06-26, configured for x86_64-unknown-linux-gnu.
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
INIT mercury__check_hlds__modecheck_goal__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 140 "../library/io.int2"
#include "io.mh"

#line 28 "check_hlds.modecheck_goal.c"
#line 150 "../library/io.int2"
#include "time.mh"

#line 32 "check_hlds.modecheck_goal.c"
#line 151 "../library/io.int2"
#include "string.mh"

#line 36 "check_hlds.modecheck_goal.c"
#line 33 "../library/array.int2"
#include "array.mh"

#line 40 "check_hlds.modecheck_goal.c"
#line 31 "../library/bitmap.int2"
#include "bitmap.mh"

#line 44 "check_hlds.modecheck_goal.c"
#line 39 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 48 "check_hlds.modecheck_goal.c"
#line 49 "check_hlds.modecheck_goal.c"
#include "check_hlds.modecheck_goal.mh"

#line 52 "check_hlds.modecheck_goal.c"
#line 53 "check_hlds.modecheck_goal.c"
#ifndef CHECK_HLDS__MODECHECK_GOAL_DECL_GUARD
#define CHECK_HLDS__MODECHECK_GOAL_DECL_GUARD

#line 57 "check_hlds.modecheck_goal.c"
#line 58 "check_hlds.modecheck_goal.c"

#endif
#line 61 "check_hlds.modecheck_goal.c"

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
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[4];
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

struct mercury_type_2 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[3];
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];

struct mercury_type_3 {
	MR_Word * f1[3];
};
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];

struct mercury_type_4 {
	MR_Integer f1;
	MR_Integer f2;
	MR_Word * f3;
};
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_common_4[];

struct mercury_type_5 {
	MR_Integer f1;
};
MR_STATIC_LINKAGE const struct mercury_type_5 mercury_common_5[];

struct mercury_type_6 {
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
	MR_Word * f5;
};
MR_STATIC_LINKAGE const struct mercury_type_6 mercury_common_6[];

struct mercury_type_7 {
	MR_Word * f1;
	MR_Code * f2;
	MR_Integer f3;
};
MR_STATIC_LINKAGE const struct mercury_type_7 mercury_common_7[];

struct mercury_type_8 {
	MR_Integer f1;
	MR_Word * f2;
};
MR_STATIC_LINKAGE const struct mercury_type_8 mercury_common_8[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_check_hlds__modecheck_goal__type_ctor_info_construct_var_info_0,
	mercury_data_check_hlds__modecheck_goal__type_ctor_info_construct_var_info_map_0,
	mercury_data_check_hlds__modecheck_goal__type_ctor_info_ground_term_mode_0;
MR_decl_label9(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_103_114_111_117_110_100_95_116_101_114_109_95_99_111_110_115_116_114_117_99_116_95_95_91_52_93_95_48_7_0, 3,4,5,8,9,10,13,14,15)
MR_decl_label9(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_103_114_111_117_110_100_95_116_101_114_109_95_99_111_110_115_116_114_117_99_116_95_103_111_97_108_95_108_111_111_112_95_95_91_49_93_95_48_5_0, 57,8,19,20,21,24,4,26,27)
MR_decl_label10(check_hlds__modecheck_goal__add_necessary_disj_init_calls_7_0, 3,9,12,13,14,15,16,17,18,8)
MR_decl_label2(check_hlds__modecheck_goal__all_plain_construct_unifies_1_0, 2,1)
MR_decl_label10(check_hlds__modecheck_goal__check_no_inst_any_vars_6_0, 35,3,9,11,12,13,6,15,18,5)
MR_decl_label4(check_hlds__modecheck_goal__goals_large_flat_constructs_3_0, 15,3,4,6)
MR_decl_label2(check_hlds__modecheck_goal__handle_solver_vars_in_disjs_8_0, 2,5)
MR_decl_label10(check_hlds__modecheck_goal__handle_solver_vars_in_ite_12_0, 2,7,9,10,11,12,13,14,16,17)
MR_decl_label4(check_hlds__modecheck_goal__handle_solver_vars_in_ite_12_0, 18,19,20,21)
MR_decl_label10(check_hlds__modecheck_goal__modecheck_case_list_8_0, 51,4,5,6,9,11,12,7,13,14)
MR_decl_label7(check_hlds__modecheck_goal__modecheck_case_list_8_0, 15,19,17,21,23,25,26)
MR_decl_label10(check_hlds__modecheck_goal__modecheck_disj_list_7_0, 35,4,5,8,6,10,12,13,14,15)
MR_decl_label1(check_hlds__modecheck_goal__modecheck_disj_list_7_0, 16)
MR_decl_label10(check_hlds__modecheck_goal__modecheck_goal_4_0, 2,3,6,5,8,9,11,13,14,15)
MR_decl_label7(check_hlds__modecheck_goal__modecheck_goal_4_0, 16,17,19,10,20,21,22)
MR_decl_label9(check_hlds__modecheck_goal__modecheck_goal_call_foreign_proc_11_0, 2,3,4,7,10,11,13,14,15)
MR_decl_label10(check_hlds__modecheck_goal__modecheck_goal_disj_5_0, 2,6,7,4,8,9,12,14,16,17)
MR_decl_label10(check_hlds__modecheck_goal__modecheck_goal_disj_5_0, 19,20,10,22,25,23,28,30,33,35)
MR_decl_label2(check_hlds__modecheck_goal__modecheck_goal_disj_5_0, 36,37)
MR_decl_label10(check_hlds__modecheck_goal__modecheck_goal_expr_5_0, 3,5,7,9,14,15,16,13,18,20)
MR_decl_label9(check_hlds__modecheck_goal__modecheck_goal_expr_5_0, 22,23,24,11,25,27,29,31,33)
MR_decl_label10(check_hlds__modecheck_goal__modecheck_goal_from_ground_term_scope_6_0, 2,3,4,5,12,8,15,17,20,16)
MR_decl_label10(check_hlds__modecheck_goal__modecheck_goal_from_ground_term_scope_6_0, 22,23,24,7,29,31,32,28,36,39)
MR_decl_label4(check_hlds__modecheck_goal__modecheck_goal_from_ground_term_scope_6_0, 35,41,42,43)
MR_decl_label10(check_hlds__modecheck_goal__modecheck_goal_generic_call_7_0, 2,3,4,6,10,12,13,21,22,23)
MR_decl_label10(check_hlds__modecheck_goal__modecheck_goal_generic_call_7_0, 25,26,28,33,34,35,37,38,40,41)
MR_decl_label10(check_hlds__modecheck_goal__modecheck_goal_generic_call_7_0, 43,9,52,53,8,57,58,61,60,64)
MR_decl_label8(check_hlds__modecheck_goal__modecheck_goal_generic_call_7_0, 65,56,68,72,67,7,74,75)
MR_decl_label10(check_hlds__modecheck_goal__modecheck_goal_if_then_else_8_0, 2,3,4,5,6,7,8,9,10,11)
MR_decl_label10(check_hlds__modecheck_goal__modecheck_goal_if_then_else_8_0, 14,16,17,12,18,19,20,21,22,23)
MR_decl_label10(check_hlds__modecheck_goal__modecheck_goal_if_then_else_8_0, 25,26,27,30,32,33,35,36,37,38)
MR_decl_label2(check_hlds__modecheck_goal__modecheck_goal_if_then_else_8_0, 39,40)
MR_decl_label10(check_hlds__modecheck_goal__modecheck_goal_make_ground_term_unique_6_0, 2,3,4,6,7,8,9,10,11,12)
MR_decl_label10(check_hlds__modecheck_goal__modecheck_goal_make_ground_term_unique_6_0, 13,14,17,18,23,24,25,26,29,30)
MR_decl_label6(check_hlds__modecheck_goal__modecheck_goal_make_ground_term_unique_6_0, 31,36,37,38,39,42)
MR_decl_label10(check_hlds__modecheck_goal__modecheck_goal_negation_5_0, 2,3,4,5,7,8,9,10,11,12)
MR_decl_label8(check_hlds__modecheck_goal__modecheck_goal_negation_5_0, 13,14,16,18,19,20,21,23)
MR_decl_label10(check_hlds__modecheck_goal__modecheck_goal_plain_call_9_0, 2,3,4,5,8,9,10,11,12,13)
MR_decl_label3(check_hlds__modecheck_goal__modecheck_goal_plain_call_9_0, 15,16,17)
MR_decl_label10(check_hlds__modecheck_goal__modecheck_goal_scope_6_0, 4,5,6,7,9,3,12,13,14,16)
MR_decl_label10(check_hlds__modecheck_goal__modecheck_goal_scope_6_0, 18,19,21,25,11,28,29,30,31,32)
MR_decl_label6(check_hlds__modecheck_goal__modecheck_goal_scope_6_0, 33,34,27,37,38,40)
MR_decl_label10(check_hlds__modecheck_goal__modecheck_goal_shorthand_5_0, 4,6,7,8,9,10,11,14,16,17)
MR_decl_label10(check_hlds__modecheck_goal__modecheck_goal_shorthand_5_0, 18,19,20,21,22,27,28,30,31,25)
MR_decl_label10(check_hlds__modecheck_goal__modecheck_goal_shorthand_5_0, 23,35,36,34,41,42,43,44,45,47)
MR_decl_label7(check_hlds__modecheck_goal__modecheck_goal_shorthand_5_0, 48,50,3,55,56,59,54)
MR_decl_label10(check_hlds__modecheck_goal__modecheck_goal_switch_7_0, 2,5,6,4,8,9,12,10,15,17)
MR_decl_label3(check_hlds__modecheck_goal__modecheck_goal_switch_7_0, 20,22,24)
MR_decl_label5(check_hlds__modecheck_goal__modecheck_goal_unify_8_0, 2,4,5,6,7)
MR_decl_label3(check_hlds__modecheck_goal__modecheck_ground_term_construct_arg_loop_5_0, 22,5,9)
MR_decl_label10(check_hlds__modecheck_goal__modecheck_make_type_info_var_for_type_6_0, 2,3,4,5,6,7,8,9,10,11)
MR_decl_label7(check_hlds__modecheck_goal__modecheck_make_type_info_var_for_type_6_0, 12,13,14,15,16,17,18)
MR_decl_label6(check_hlds__modecheck_goal__modecheck_orelse_list_5_0, 21,4,5,6,7,8)
MR_decl_label9(check_hlds__modecheck_goal__modecheck_specializable_ground_term_4_0, 3,5,7,9,15,20,24,22,2)
MR_decl_label1(check_hlds__modecheck_goal__set_large_flat_constructs_to_ground_in_case_3_0, 2)
MR_decl_label10(check_hlds__modecheck_goal__set_large_flat_constructs_to_ground_in_goal_3_0, 3,180,7,9,10,12,14,15,16,4)
MR_decl_label10(check_hlds__modecheck_goal__set_large_flat_constructs_to_ground_in_goal_3_0, 18,19,20,23,24,25,26,27,33,35)
MR_decl_label10(check_hlds__modecheck_goal__set_large_flat_constructs_to_ground_in_goal_3_0, 37,38,39,31,30,28,45,66,21,47)
MR_decl_label1(check_hlds__modecheck_goal__set_large_flat_constructs_to_ground_in_goal_3_0, 68)
MR_decl_label3(check_hlds__modecheck_goal__set_large_flat_constructs_to_ground_in_goals_3_0, 17,4,5)
MR_decl_label6(check_hlds__modecheck_goal__solver_var_must_be_initialised_4_0, 4,5,7,8,11,2)
MR_decl_label1(check_hlds__modecheck_goal__solver_var_to_init_3_0, 2)
MR_decl_label7(fn__check_hlds__modecheck_goal__append_init_calls_to_goal_3_0, 2,4,5,9,6,12,13)
MR_decl_label10(fn__check_hlds__modecheck_goal__goal_large_flat_constructs_1_0, 3,169,12,6,14,17,20,25,28,31)
MR_decl_label5(fn__check_hlds__modecheck_goal__goal_large_flat_constructs_1_0, 34,37,42,40,151)
MR_decl_label1(__Unify___check_hlds__modecheck_goal__construct_var_info_0_0, 6)
MR_decl_label3(__Unify___check_hlds__modecheck_goal__ground_term_mode_0_0, 16,5,1)
MR_decl_label2(__Compare___check_hlds__modecheck_goal__construct_var_info_0_0, 3,2)
MR_decl_label5(__Compare___check_hlds__modecheck_goal__ground_term_mode_0_0, 3,2,19,7,5)
MR_decl_static(fn__check_hlds__modecheck_goal__goal_large_flat_constructs_1_0)
MR_decl_static(check_hlds__modecheck_goal__goals_large_flat_constructs_3_0)
MR_decl_static(fn__check_hlds__modecheck_goal__append_init_calls_to_goal_3_0)
MR_decl_static(check_hlds__modecheck_goal__add_necessary_disj_init_calls_7_0)
MR_decl_static(check_hlds__modecheck_goal__handle_solver_vars_in_disjs_8_0)
MR_decl_static(check_hlds__modecheck_goal__handle_solver_vars_in_ite_12_0)
MR_decl_static(check_hlds__modecheck_goal__check_no_inst_any_vars_6_0)
MR_decl_static(check_hlds__modecheck_goal__modecheck_make_type_info_var_for_type_6_0)
MR_decl_static(check_hlds__modecheck_goal__modecheck_goal_make_ground_term_unique_6_0)
MR_decl_static(check_hlds__modecheck_goal__all_plain_construct_unifies_1_0)
MR_decl_static(check_hlds__modecheck_goal__modecheck_specializable_ground_term_4_0)
MR_decl_static(check_hlds__modecheck_goal__modecheck_ground_term_construct_arg_loop_5_0)
MR_decl_static(check_hlds__modecheck_goal__modecheck_goal_plain_call_9_0)
MR_decl_static(check_hlds__modecheck_goal__modecheck_goal_generic_call_7_0)
MR_decl_static(check_hlds__modecheck_goal__modecheck_goal_unify_8_0)
MR_decl_static(check_hlds__modecheck_goal__modecheck_goal_call_foreign_proc_11_0)
MR_def_extern_entry(check_hlds__modecheck_goal__modecheck_goal_4_0)
MR_def_extern_entry(check_hlds__modecheck_goal__modecheck_goal_expr_5_0)
MR_decl_static(check_hlds__modecheck_goal__modecheck_goal_disj_5_0)
MR_decl_static(check_hlds__modecheck_goal__modecheck_disj_list_7_0)
MR_decl_static(check_hlds__modecheck_goal__modecheck_goal_switch_7_0)
MR_decl_static(check_hlds__modecheck_goal__modecheck_case_list_8_0)
MR_decl_static(check_hlds__modecheck_goal__modecheck_goal_if_then_else_8_0)
MR_decl_static(check_hlds__modecheck_goal__modecheck_goal_negation_5_0)
MR_decl_static(check_hlds__modecheck_goal__modecheck_goal_scope_6_0)
MR_decl_static(check_hlds__modecheck_goal__modecheck_goal_from_ground_term_scope_6_0)
MR_decl_static(check_hlds__modecheck_goal__modecheck_goal_shorthand_5_0)
MR_decl_static(check_hlds__modecheck_goal__modecheck_orelse_list_5_0)
MR_decl_static(check_hlds__modecheck_goal__set_large_flat_constructs_to_ground_in_goal_3_0)
MR_decl_static(check_hlds__modecheck_goal__set_large_flat_constructs_to_ground_in_goals_3_0)
MR_decl_static(check_hlds__modecheck_goal__set_large_flat_constructs_to_ground_in_case_3_0)
MR_decl_static(check_hlds__modecheck_goal__solver_var_must_be_initialised_4_0)
MR_decl_static(check_hlds__modecheck_goal__solver_var_to_init_3_0)
MR_decl_static(__Unify___check_hlds__modecheck_goal__construct_var_info_0_0)
MR_decl_static(__Compare___check_hlds__modecheck_goal__construct_var_info_0_0)
MR_decl_static(__Unify___check_hlds__modecheck_goal__construct_var_info_map_0_0)
MR_decl_static(__Compare___check_hlds__modecheck_goal__construct_var_info_map_0_0)
MR_decl_static(__Unify___check_hlds__modecheck_goal__ground_term_mode_0_0)
MR_decl_static(__Compare___check_hlds__modecheck_goal__ground_term_mode_0_0)
MR_decl_static(check_hlds__modecheck_goal__IntroducedFrom__pred__modecheck_goal_shorthand__1459__1_2_0)
MR_decl_static(check_hlds__modecheck_goal__IntroducedFrom__pred__modecheck_goal_shorthand__1464__1_2_0)
MR_decl_static(check_hlds__modecheck_goal__IntroducedFrom__pred__modecheck_goal_shorthand__1466__1_2_0)
MR_decl_static(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_103_114_111_117_110_100_95_116_101_114_109_95_99_111_110_115_116_114_117_99_116_95_95_91_52_93_95_48_7_0)
MR_decl_static(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_103_114_111_117_110_100_95_116_101_114_109_95_99_111_110_115_116_114_117_99_116_95_103_111_97_108_95_108_111_111_112_95_95_91_49_93_95_48_5_0)

extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_set_ordlist__type_ctor_info_set_ordlist_1;
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__instmap__type_ctor_info_instmap_0;
static const struct mercury_type_0 mercury_common_0[7] =
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
{
{
MR_CTOR1_ADDR(set_ordlist, set_ordlist),
MR_COMMON(0,1)
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
MR_CTOR1_ADDR(term, var),
MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(hlds__instmap, instmap)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_COMMON(0,1)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__check_hlds__modecheck_goal__append_init_calls_to_goal_3_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0;
static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__modecheck_goal__handle_solver_vars_in_disjs_8_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_module_info_0;
static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__modecheck_goal__handle_solver_vars_in_ite_12_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__modecheck_goal__modecheck_goal_disj_5_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__modecheck_goal__modecheck_goal_disj_5_0_3;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_inst_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__instmap__type_ctor_info_instmap_0;
static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__modecheck_goal__modecheck_goal_switch_7_0_2;
static const struct mercury_type_1 mercury_common_1[6] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__fn__check_hlds__modecheck_goal__append_init_calls_to_goal_3_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_COMMON(0,2),
MR_COMMON(0,3),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__modecheck_goal__handle_solver_vars_in_disjs_8_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_COMMON(3,0),
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_COMMON(0,5),
MR_COMMON(0,4)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__modecheck_goal__handle_solver_vars_in_ite_12_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_COMMON(3,0),
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_COMMON(0,5),
MR_COMMON(0,4)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__modecheck_goal__modecheck_goal_disj_5_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_COMMON(3,0),
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_COMMON(0,5),
MR_COMMON(0,4)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__modecheck_goal__modecheck_goal_disj_5_0_3,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst),
MR_COMMON(0,6),
MR_CTOR0_ADDR(hlds__instmap, instmap),
MR_CTOR0_ADDR(hlds__instmap, instmap)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__modecheck_goal__modecheck_goal_switch_7_0_2,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst),
MR_COMMON(0,6),
MR_CTOR0_ADDR(hlds__instmap, instmap),
MR_CTOR0_ADDR(hlds__instmap, instmap)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__modecheck_goal__add_necessary_disj_init_calls_7_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__modecheck_goal__handle_solver_vars_in_ite_12_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__modecheck_goal__handle_solver_vars_in_ite_12_0_3;
static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__modecheck_goal__modecheck_goal_disj_5_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__modecheck_goal__modecheck_goal_switch_7_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_case_0;
static const struct mercury_type_2 mercury_common_2[5] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__modecheck_goal__add_necessary_disj_init_calls_7_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(hlds__instmap, instmap),
MR_COMMON(0,4)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__modecheck_goal__handle_solver_vars_in_ite_12_0_2,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(hlds__instmap, instmap),
MR_COMMON(0,4)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__modecheck_goal__handle_solver_vars_in_ite_12_0_3,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(hlds__instmap, instmap),
MR_COMMON(0,4)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__modecheck_goal__modecheck_goal_disj_5_0_2,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(0,2),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__modecheck_goal__modecheck_goal_switch_7_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(0,2),
MR_CTOR0_ADDR(hlds__hlds_goal, case),
MR_CTOR0_ADDR(hlds__hlds_goal, case)
}
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;
static const struct mercury_type_3 mercury_common_3[1] =
{
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_COMMON(0,1),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_type)
}
},
};

static const struct mercury_type_4 mercury_common_4[2] =
{
{
1,
1,
MR_tbmkword(0, 0)
},
{
1,
0,
MR_tbmkword(0, 0)
},
};

static const struct mercury_type_5 mercury_common_5[1] =
{
{
1
},
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__modecheck_goal__modecheck_goal_call_foreign_proc_11_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_foreign_arg_0;
static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__modecheck_goal__modecheck_goal_shorthand_5_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;
static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__modecheck_goal__modecheck_goal_shorthand_5_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__modecheck_goal__modecheck_goal_shorthand_5_0_3;
static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__modecheck_goal__modecheck_goal_shorthand_5_0_4;
static const struct mercury_type_6 mercury_common_6[5] =
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__modecheck_goal__modecheck_goal_call_foreign_proc_11_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(hlds__hlds_goal, foreign_arg),
MR_COMMON(0,4)
},
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__modecheck_goal__modecheck_goal_shorthand_5_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(parse_tree__prog_data, mer_type),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_type)
},
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__modecheck_goal__modecheck_goal_shorthand_5_0_2,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(parse_tree__prog_data, mer_type),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_type)
},
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__modecheck_goal__modecheck_goal_shorthand_5_0_3,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(parse_tree__prog_data, mer_type),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_type)
},
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__modecheck_goal__modecheck_goal_shorthand_5_0_4,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(parse_tree__prog_data, mer_type),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_type)
},
};

MR_decl_entry(fn__hlds__hlds_goal__foreign_arg_var_1_0);
static const struct mercury_type_7 mercury_common_7[1] =
{
{
MR_COMMON(6,0),
MR_ENTRY_AP(fn__hlds__hlds_goal__foreign_arg_var_1_0),
0
},
};

static const struct mercury_type_8 mercury_common_8[1] =
{
{
1,
MR_tbmkword(0, 0)
},
};
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_inst_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_inst_0;

static const MR_NotagFunctorDesc mercury_data_check_hlds__modecheck_goal__notag_functor_desc_construct_var_info_0 = {
	"construct_var_info",
	(MR_PseudoTypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_mer_inst_0,
	NULL
};

const MR_Integer mercury_data_check_hlds__modecheck_goal__functor_number_map_construct_var_info_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_check_hlds__modecheck_goal__type_ctor_info_construct_var_info_0 = {
	0,
	14,
	-1,
	MR_TYPECTOR_REP_NOTAG_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___check_hlds__modecheck_goal__construct_var_info_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___check_hlds__modecheck_goal__construct_var_info_0_0)),
	"check_hlds.modecheck_goal",
	"construct_var_info",
	{ (void *)&mercury_data_check_hlds__modecheck_goal__notag_functor_desc_construct_var_info_0 },
	{ (void *)&mercury_data_check_hlds__modecheck_goal__notag_functor_desc_construct_var_info_0 },
	1,
	4,
	mercury_data_check_hlds__modecheck_goal__functor_number_map_construct_var_info_0
};

static const MR_FA_TypeInfo_Struct1 mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
	&mercury_data_term__type_ctor_info_var_1,
{	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_check_hlds__modecheck_goal__type_ctor_info_construct_var_info_0;

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0check_hlds__modecheck_goal__type_ctor_info_construct_var_info_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_TypeInfo) &mercury_data_check_hlds__modecheck_goal__type_ctor_info_construct_var_info_0
}};

const MR_TypeCtorInfo_Struct mercury_data_check_hlds__modecheck_goal__type_ctor_info_construct_var_info_map_0 = {
	0,
	14,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___check_hlds__modecheck_goal__construct_var_info_map_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___check_hlds__modecheck_goal__construct_var_info_map_0_0)),
	"check_hlds.modecheck_goal",
	"construct_var_info_map",
	{ 0 },
	{ (void *)&mercury_data_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0check_hlds__modecheck_goal__type_ctor_info_construct_var_info_0 },
	-1,
	0,
	NULL
};

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0
}};

const MR_PseudoTypeInfo mercury_data_check_hlds__modecheck_goal__field_types_ground_term_mode_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0
};

static const MR_DuFunctorDesc mercury_data_check_hlds__modecheck_goal__du_functor_desc_ground_term_mode_0_0 = {
	"construct_ground_term",
	1,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_check_hlds__modecheck_goal__field_types_ground_term_mode_0_0,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_check_hlds__modecheck_goal__field_types_ground_term_mode_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0
};

static const MR_DuFunctorDesc mercury_data_check_hlds__modecheck_goal__du_functor_desc_ground_term_mode_0_1 = {
	"deconstruct_ground_term",
	1,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_check_hlds__modecheck_goal__field_types_ground_term_mode_0_1,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_check_hlds__modecheck_goal__du_stag_ordered_ground_term_mode_0_0[] = {
	&mercury_data_check_hlds__modecheck_goal__du_functor_desc_ground_term_mode_0_0

};

const MR_DuFunctorDescPtr mercury_data_check_hlds__modecheck_goal__du_stag_ordered_ground_term_mode_0_1[] = {
	&mercury_data_check_hlds__modecheck_goal__du_functor_desc_ground_term_mode_0_1

};

const MR_DuPtagLayout mercury_data_check_hlds__modecheck_goal__du_ptag_ordered_ground_term_mode_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_check_hlds__modecheck_goal__du_stag_ordered_ground_term_mode_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_check_hlds__modecheck_goal__du_stag_ordered_ground_term_mode_0_1 }

};

const MR_DuFunctorDescPtr mercury_data_check_hlds__modecheck_goal__du_name_ordered_ground_term_mode_0[] = {
	&mercury_data_check_hlds__modecheck_goal__du_functor_desc_ground_term_mode_0_0,
	&mercury_data_check_hlds__modecheck_goal__du_functor_desc_ground_term_mode_0_1
};

const MR_Integer mercury_data_check_hlds__modecheck_goal__functor_number_map_ground_term_mode_0[] = {
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_check_hlds__modecheck_goal__type_ctor_info_ground_term_mode_0 = {
	0,
	14,
	2,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___check_hlds__modecheck_goal__ground_term_mode_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___check_hlds__modecheck_goal__ground_term_mode_0_0)),
	"check_hlds.modecheck_goal",
	"ground_term_mode",
	{ (void *)mercury_data_check_hlds__modecheck_goal__du_name_ordered_ground_term_mode_0 },
	{ (void *)mercury_data_check_hlds__modecheck_goal__du_ptag_ordered_ground_term_mode_0 },
	2,
	4,
	mercury_data_check_hlds__modecheck_goal__functor_number_map_ground_term_mode_0
};


static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__modecheck_goal__modecheck_goal_shorthand_5_0_4 = {
{
MR_PREDICATE,
"check_hlds.modecheck_goal",
"check_hlds.modecheck_goal",
"lambda_modecheck_goal_m_1466",
2,
0
},
"check_hlds.modecheck_goal",
"modecheck_goal.m",
1466,
"53"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__modecheck_goal__modecheck_goal_shorthand_5_0_3 = {
{
MR_PREDICATE,
"check_hlds.modecheck_goal",
"check_hlds.modecheck_goal",
"lambda_modecheck_goal_m_1464",
2,
0
},
"check_hlds.modecheck_goal",
"modecheck_goal.m",
1464,
"47"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__modecheck_goal__modecheck_goal_shorthand_5_0_2 = {
{
MR_PREDICATE,
"check_hlds.modecheck_goal",
"check_hlds.modecheck_goal",
"lambda_modecheck_goal_m_1459",
2,
0
},
"check_hlds.modecheck_goal",
"modecheck_goal.m",
1459,
"39"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__modecheck_goal__modecheck_goal_shorthand_5_0_1 = {
{
MR_PREDICATE,
"check_hlds.modecheck_goal",
"check_hlds.modecheck_goal",
"lambda_modecheck_goal_m_1459",
2,
0
},
"check_hlds.modecheck_goal",
"modecheck_goal.m",
1459,
"39"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__modecheck_goal__modecheck_goal_switch_7_0_2 = {
{
MR_PREDICATE,
"hlds.instmap",
"hlds.instmap",
"instmap_set_vars_same",
4,
0
},
"check_hlds.modecheck_goal",
"modecheck_goal.m",
463,
"18"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__modecheck_goal__modecheck_goal_switch_7_0_1 = {
{
MR_PREDICATE,
"check_hlds.modecheck_goal",
"check_hlds.modecheck_goal",
"set_large_flat_constructs_to_ground_in_case",
3,
0
},
"check_hlds.modecheck_goal",
"modecheck_goal.m",
459,
"15"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__modecheck_goal__modecheck_goal_disj_5_0_3 = {
{
MR_PREDICATE,
"hlds.instmap",
"hlds.instmap",
"instmap_set_vars_same",
4,
0
},
"check_hlds.modecheck_goal",
"modecheck_goal.m",
360,
"18"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__modecheck_goal__modecheck_goal_disj_5_0_2 = {
{
MR_PREDICATE,
"check_hlds.modecheck_goal",
"check_hlds.modecheck_goal",
"set_large_flat_constructs_to_ground_in_goal",
3,
0
},
"check_hlds.modecheck_goal",
"modecheck_goal.m",
356,
"15"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__modecheck_goal__modecheck_goal_disj_5_0_1 = {
{
MR_PREDICATE,
"check_hlds.modecheck_goal",
"check_hlds.modecheck_goal",
"solver_var_must_be_initialised",
4,
0
},
"check_hlds.modecheck_goal",
"modecheck_goal.m",
1533,
"7"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__modecheck_goal__modecheck_goal_call_foreign_proc_11_0_1 = {
{
MR_FUNCTION,
"hlds.hlds_goal",
"hlds.hlds_goal",
"foreign_arg_var",
2,
0
},
"check_hlds.modecheck_goal",
"modecheck_goal.m",
1374,
"23"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__modecheck_goal__handle_solver_vars_in_ite_12_0_3 = {
{
MR_PREDICATE,
"check_hlds.modecheck_goal",
"check_hlds.modecheck_goal",
"solver_var_to_init",
3,
0
},
"check_hlds.modecheck_goal",
"modecheck_goal.m",
1589,
"6"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__modecheck_goal__handle_solver_vars_in_ite_12_0_2 = {
{
MR_PREDICATE,
"check_hlds.modecheck_goal",
"check_hlds.modecheck_goal",
"solver_var_to_init",
3,
0
},
"check_hlds.modecheck_goal",
"modecheck_goal.m",
1589,
"6"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__modecheck_goal__handle_solver_vars_in_ite_12_0_1 = {
{
MR_PREDICATE,
"check_hlds.modecheck_goal",
"check_hlds.modecheck_goal",
"solver_var_must_be_initialised",
4,
0
},
"check_hlds.modecheck_goal",
"modecheck_goal.m",
1533,
"7"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__modecheck_goal__handle_solver_vars_in_disjs_8_0_1 = {
{
MR_PREDICATE,
"check_hlds.modecheck_goal",
"check_hlds.modecheck_goal",
"solver_var_must_be_initialised",
4,
0
},
"check_hlds.modecheck_goal",
"modecheck_goal.m",
1533,
"7"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__modecheck_goal__add_necessary_disj_init_calls_7_0_1 = {
{
MR_PREDICATE,
"check_hlds.modecheck_goal",
"check_hlds.modecheck_goal",
"solver_var_to_init",
3,
0
},
"check_hlds.modecheck_goal",
"modecheck_goal.m",
1589,
"6"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__check_hlds__modecheck_goal__append_init_calls_to_goal_3_0_1 = {
{
MR_FUNCTION,
"check_hlds.modecheck_goal",
"check_hlds.modecheck_goal",
"append_init_calls_to_goal",
4,
0
},
"check_hlds.modecheck_goal",
"modecheck_goal.m",
1577,
"14"
};


MR_decl_entry(fn__set__init_0_0);
MR_decl_entry(fn__set__make_singleton_set_1_0);

MR_BEGIN_MODULE(check_hlds__modecheck_goal_module0)
	MR_init_entry1(fn__check_hlds__modecheck_goal__goal_large_flat_constructs_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__check_hlds__modecheck_goal__goal_large_flat_constructs_1_0);
	MR_init_label10(fn__check_hlds__modecheck_goal__goal_large_flat_constructs_1_0,3,169,12,6,14,17,20,25,28,31)
	MR_init_label5(fn__check_hlds__modecheck_goal__goal_large_flat_constructs_1_0,34,37,42,40,151)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'goal_large_flat_constructs'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__check_hlds__modecheck_goal__goal_large_flat_constructs_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(0, MR_r1, 0);
	if (MR_PTAG_TESTR(MR_r2,0)) {
		MR_GOTO_LAB(fn__check_hlds__modecheck_goal__goal_large_flat_constructs_1_0_i3);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_np_tailcall_ent(fn__set__init_0_0);
MR_def_label(fn__check_hlds__modecheck_goal__goal_large_flat_constructs_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,1)) {
		MR_GOTO_LAB(fn__check_hlds__modecheck_goal__goal_large_flat_constructs_1_0_i6);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(3, MR_r2, 1);
	if (MR_INT_NE(MR_tempr1,1)) {
		MR_GOTO_LAB(fn__check_hlds__modecheck_goal__goal_large_flat_constructs_1_0_i169);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_np_tailcall_ent(fn__set__init_0_0);
	}
MR_def_label(fn__check_hlds__modecheck_goal__goal_large_flat_constructs_1_0,169)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(3, MR_r2, 2);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_np_call_localret_ent(fn__set__init_0_0,
		fn__check_hlds__modecheck_goal__goal_large_flat_constructs_1_0_i12);
MR_def_label(fn__check_hlds__modecheck_goal__goal_large_flat_constructs_1_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(check_hlds__modecheck_goal__goals_large_flat_constructs_3_0);
	}
MR_def_label(fn__check_hlds__modecheck_goal__goal_large_flat_constructs_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,2)) {
		MR_GOTO_LAB(fn__check_hlds__modecheck_goal__goal_large_flat_constructs_1_0_i14);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_np_tailcall_ent(fn__set__init_0_0);
MR_def_label(fn__check_hlds__modecheck_goal__goal_large_flat_constructs_1_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,6)) {
		MR_GOTO_LAB(fn__check_hlds__modecheck_goal__goal_large_flat_constructs_1_0_i17);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_np_tailcall_ent(fn__set__init_0_0);
MR_def_label(fn__check_hlds__modecheck_goal__goal_large_flat_constructs_1_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,4)) {
		MR_GOTO_LAB(fn__check_hlds__modecheck_goal__goal_large_flat_constructs_1_0_i20);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_np_tailcall_ent(fn__set__init_0_0);
MR_def_label(fn__check_hlds__modecheck_goal__goal_large_flat_constructs_1_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,5)) {
		MR_GOTO_LAB(fn__check_hlds__modecheck_goal__goal_large_flat_constructs_1_0_i151);
	}
	MR_r3 = MR_tfield(3, MR_r2, 1);
	if (MR_PTAG_TESTR(MR_r3,0)) {
		MR_GOTO_LAB(fn__check_hlds__modecheck_goal__goal_large_flat_constructs_1_0_i25);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_np_tailcall_ent(fn__set__init_0_0);
MR_def_label(fn__check_hlds__modecheck_goal__goal_large_flat_constructs_1_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r3,2)) {
		MR_GOTO_LAB(fn__check_hlds__modecheck_goal__goal_large_flat_constructs_1_0_i28);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_np_tailcall_ent(fn__set__init_0_0);
MR_def_label(fn__check_hlds__modecheck_goal__goal_large_flat_constructs_1_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r3,1)) {
		MR_GOTO_LAB(fn__check_hlds__modecheck_goal__goal_large_flat_constructs_1_0_i31);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_np_tailcall_ent(fn__set__init_0_0);
MR_def_label(fn__check_hlds__modecheck_goal__goal_large_flat_constructs_1_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,3)) {
		MR_GOTO_LAB(fn__check_hlds__modecheck_goal__goal_large_flat_constructs_1_0_i34);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_np_tailcall_ent(fn__set__init_0_0);
MR_def_label(fn__check_hlds__modecheck_goal__goal_large_flat_constructs_1_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,2)) {
		MR_GOTO_LAB(fn__check_hlds__modecheck_goal__goal_large_flat_constructs_1_0_i37);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_np_tailcall_ent(fn__set__init_0_0);
MR_def_label(fn__check_hlds__modecheck_goal__goal_large_flat_constructs_1_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,4)) {
		MR_GOTO_LAB(fn__check_hlds__modecheck_goal__goal_large_flat_constructs_1_0_i40);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r4 = MR_tfield(3, MR_tempr1, 2);
	if (MR_INT_NE(MR_r4,0)) {
		MR_GOTO_LAB(fn__check_hlds__modecheck_goal__goal_large_flat_constructs_1_0_i42);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = MR_tfield(3, MR_tempr1, 1);
	MR_np_tailcall_ent(fn__set__make_singleton_set_1_0);
	}
MR_def_label(fn__check_hlds__modecheck_goal__goal_large_flat_constructs_1_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,1)) {
		MR_GOTO_LAB(fn__check_hlds__modecheck_goal__goal_large_flat_constructs_1_0_i151);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_np_tailcall_ent(fn__set__init_0_0);
MR_def_label(fn__check_hlds__modecheck_goal__goal_large_flat_constructs_1_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
MR_def_label(fn__check_hlds__modecheck_goal__goal_large_flat_constructs_1_0,151)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_np_tailcall_ent(fn__set__init_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);

MR_BEGIN_MODULE(check_hlds__modecheck_goal_module1)
	MR_init_entry1(check_hlds__modecheck_goal__goals_large_flat_constructs_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__modecheck_goal__goals_large_flat_constructs_3_0);
	MR_init_label4(check_hlds__modecheck_goal__goals_large_flat_constructs_3_0,15,3,4,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'goals_large_flat_constructs'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__modecheck_goal__goals_large_flat_constructs_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(check_hlds__modecheck_goal__goals_large_flat_constructs_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__modecheck_goal__goals_large_flat_constructs_3_0_i3);
	}
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(3);
MR_def_label(check_hlds__modecheck_goal__goals_large_flat_constructs_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_np_call_localret_ent(fn__check_hlds__modecheck_goal__goal_large_flat_constructs_1_0,
		check_hlds__modecheck_goal__goals_large_flat_constructs_3_0_i4);
MR_def_label(check_hlds__modecheck_goal__goals_large_flat_constructs_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		check_hlds__modecheck_goal__goals_large_flat_constructs_3_0_i6);
MR_def_label(check_hlds__modecheck_goal__goals_large_flat_constructs_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(check_hlds__modecheck_goal__goals_large_flat_constructs_3_0_i15);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__hlds__hlds_goal__goal_info_get_nonlocals_1_0);
MR_decl_entry(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0);
MR_decl_entry(hlds__hlds_goal__goal_info_set_nonlocals_3_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0;
MR_decl_entry(fn__list__map_2_0);
MR_decl_entry(hlds__hlds_goal__goal_to_conj_list_2_0);
MR_decl_entry(fn__f_108_105_115_116_95_95_43_43_2_0);
MR_decl_entry(hlds__hlds_goal__conj_list_to_goal_3_0);

MR_BEGIN_MODULE(check_hlds__modecheck_goal_module2)
	MR_init_entry1(fn__check_hlds__modecheck_goal__append_init_calls_to_goal_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__check_hlds__modecheck_goal__append_init_calls_to_goal_3_0);
	MR_init_label7(fn__check_hlds__modecheck_goal__append_init_calls_to_goal_3_0,2,4,5,9,6,12,13)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'append_init_calls_to_goal'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__check_hlds__modecheck_goal__append_init_calls_to_goal_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(5) = MR_tfield(0, MR_tempr1, 1);
	MR_r1 = MR_sv(5);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_nonlocals_1_0,
		fn__check_hlds__modecheck_goal__append_init_calls_to_goal_3_0_i2);
MR_def_label(fn__check_hlds__modecheck_goal__append_init_calls_to_goal_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		fn__check_hlds__modecheck_goal__append_init_calls_to_goal_3_0_i4);
MR_def_label(fn__check_hlds__modecheck_goal__append_init_calls_to_goal_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_nonlocals_3_0,
		fn__check_hlds__modecheck_goal__append_init_calls_to_goal_3_0_i5);
MR_def_label(fn__check_hlds__modecheck_goal__append_init_calls_to_goal_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(4),3,2)) {
		MR_GOTO_LAB(fn__check_hlds__modecheck_goal__append_init_calls_to_goal_3_0_i6);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(1,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__check_hlds__modecheck_goal__append_init_calls_to_goal_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(2);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_r1;
	MR_r4 = MR_tfield(3, MR_sv(4), 1);
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		fn__check_hlds__modecheck_goal__append_init_calls_to_goal_3_0_i9);
MR_def_label(fn__check_hlds__modecheck_goal__append_init_calls_to_goal_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_r2, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_r2;
	MR_tfield(0, MR_r1, 1) = MR_sv(1);
	MR_decr_sp_and_return(6);
MR_def_label(fn__check_hlds__modecheck_goal__append_init_calls_to_goal_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_to_conj_list_2_0,
		fn__check_hlds__modecheck_goal__append_init_calls_to_goal_3_0_i12);
MR_def_label(fn__check_hlds__modecheck_goal__append_init_calls_to_goal_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__check_hlds__modecheck_goal__append_init_calls_to_goal_3_0_i13);
MR_def_label(fn__check_hlds__modecheck_goal__append_init_calls_to_goal_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(hlds__hlds_goal__conj_list_to_goal_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(check_hlds__mode_info__mode_info_get_module_info_2_0);
MR_decl_entry(fn__list__filter_2_0);
MR_decl_entry(check_hlds__modecheck_util__construct_initialisation_calls_4_0);
MR_decl_entry(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_105_115_116_95_116_111_95_115_101_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_1_0);
MR_decl_entry(fn__parse_tree__prog_mode__any_inst_0_0);
MR_decl_entry(hlds__instmap__instmap_set_vars_same_4_0);
MR_decl_entry(require__unexpected_3_0);

MR_BEGIN_MODULE(check_hlds__modecheck_goal_module3)
	MR_init_entry1(check_hlds__modecheck_goal__add_necessary_disj_init_calls_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__modecheck_goal__add_necessary_disj_init_calls_7_0);
	MR_init_label10(check_hlds__modecheck_goal__add_necessary_disj_init_calls_7_0,3,9,12,13,14,15,16,17,18,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'add_necessary_disj_init_calls'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__modecheck_goal__add_necessary_disj_init_calls_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__modecheck_goal__add_necessary_disj_init_calls_7_0_i3);
	}
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(check_hlds__modecheck_goal__add_necessary_disj_init_calls_7_0_i8);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_r4;
	MR_proceed();
MR_def_label(check_hlds__modecheck_goal__add_necessary_disj_init_calls_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(check_hlds__modecheck_goal__add_necessary_disj_init_calls_7_0_i8);
	}
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_tfield(1, MR_r2, 0);
	MR_sv(4) = MR_tfield(1, MR_r2, 1);
	MR_sv(7) = MR_tfield(1, MR_r1, 1);
	MR_sv(8) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_module_info_2_0,
		check_hlds__modecheck_goal__add_necessary_disj_init_calls_7_0_i9);
MR_def_label(check_hlds__modecheck_goal__add_necessary_disj_init_calls_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 5);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_COMMON(2,0);
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_ENTRY_AP(check_hlds__modecheck_goal__solver_var_to_init_3_0);
	MR_tfield(0, MR_r2, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_r2, 3) = MR_r1;
	MR_tfield(0, MR_r2, 4) = MR_sv(3);
	MR_sv(6) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = MR_sv(6);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(fn__list__filter_2_0,
		check_hlds__modecheck_goal__add_necessary_disj_init_calls_7_0_i12);
MR_def_label(check_hlds__modecheck_goal__add_necessary_disj_init_calls_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(check_hlds__modecheck_util__construct_initialisation_calls_4_0,
		check_hlds__modecheck_goal__add_necessary_disj_init_calls_7_0_i13);
MR_def_label(check_hlds__modecheck_goal__add_necessary_disj_init_calls_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_105_115_116_95_116_111_95_115_101_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_1_0,
		check_hlds__modecheck_goal__add_necessary_disj_init_calls_7_0_i14);
MR_def_label(check_hlds__modecheck_goal__add_necessary_disj_init_calls_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(8);
	MR_np_call_localret_ent(fn__check_hlds__modecheck_goal__append_init_calls_to_goal_3_0,
		check_hlds__modecheck_goal__add_necessary_disj_init_calls_7_0_i15);
MR_def_label(check_hlds__modecheck_goal__add_necessary_disj_init_calls_7_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(fn__parse_tree__prog_mode__any_inst_0_0,
		check_hlds__modecheck_goal__add_necessary_disj_init_calls_7_0_i16);
MR_def_label(check_hlds__modecheck_goal__add_necessary_disj_init_calls_7_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(hlds__instmap__instmap_set_vars_same_4_0,
		check_hlds__modecheck_goal__add_necessary_disj_init_calls_7_0_i17);
MR_def_label(check_hlds__modecheck_goal__add_necessary_disj_init_calls_7_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(6);
	}
	MR_np_localcall_lab(check_hlds__modecheck_goal__add_necessary_disj_init_calls_7_0,
		check_hlds__modecheck_goal__add_necessary_disj_init_calls_7_0_i18);
MR_def_label(check_hlds__modecheck_goal__add_necessary_disj_init_calls_7_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr2, 1) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	MR_decr_sp_and_return(9);
	}
MR_def_label(check_hlds__modecheck_goal__add_necessary_disj_init_calls_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("check_hlds.modecheck_goal", 25);
	MR_r2 = (MR_Word) MR_string_const("predicate \140check_hlds.modecheck_goal.add_necessary_disj_init_calls\'/7", 69);
	MR_r3 = (MR_Word) MR_string_const("mismatched lists", 16);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__modecheck_goal_module4)
	MR_init_entry1(check_hlds__modecheck_goal__handle_solver_vars_in_disjs_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__modecheck_goal__handle_solver_vars_in_disjs_8_0);
	MR_init_label2(check_hlds__modecheck_goal__handle_solver_vars_in_disjs_8_0,2,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'handle_solver_vars_in_disjs'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__modecheck_goal__handle_solver_vars_in_disjs_8_0)
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
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_module_info_2_0,
		check_hlds__modecheck_goal__handle_solver_vars_in_disjs_8_0_i2);
MR_def_label(check_hlds__modecheck_goal__handle_solver_vars_in_disjs_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 6);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_COMMON(1,1);
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_ENTRY_AP(check_hlds__modecheck_goal__solver_var_must_be_initialised_4_0);
	MR_tfield(0, MR_r2, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_r2, 3) = MR_sv(2);
	MR_tfield(0, MR_r2, 4) = MR_r1;
	MR_tfield(0, MR_r2, 5) = MR_sv(4);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(fn__list__filter_2_0,
		check_hlds__modecheck_goal__handle_solver_vars_in_disjs_8_0_i5);
MR_def_label(check_hlds__modecheck_goal__handle_solver_vars_in_disjs_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(check_hlds__modecheck_goal__add_necessary_disj_init_calls_7_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__modecheck_goal_module5)
	MR_init_entry1(check_hlds__modecheck_goal__handle_solver_vars_in_ite_12_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__modecheck_goal__handle_solver_vars_in_ite_12_0);
	MR_init_label10(check_hlds__modecheck_goal__handle_solver_vars_in_ite_12_0,2,7,9,10,11,12,13,14,16,17)
	MR_init_label4(check_hlds__modecheck_goal__handle_solver_vars_in_ite_12_0,18,19,20,21)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'handle_solver_vars_in_ite'/12 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__modecheck_goal__handle_solver_vars_in_ite_12_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r6;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r7;
	MR_sv(8) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_module_info_2_0,
		check_hlds__modecheck_goal__handle_solver_vars_in_ite_12_0_i2);
MR_def_label(check_hlds__modecheck_goal__handle_solver_vars_in_ite_12_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 6);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_COMMON(1,2);
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_ENTRY_AP(check_hlds__modecheck_goal__solver_var_must_be_initialised_4_0);
	MR_tfield(0, MR_r2, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_r2, 3) = MR_sv(2);
	MR_tfield(0, MR_r2, 4) = MR_r1;
	MR_tfield(0, MR_r2, 5) = MR_tempr2;
	MR_sv(2) = MR_r1;
	MR_sv(11) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = MR_sv(11);
	MR_r3 = MR_sv(1);
	}
	MR_np_call_localret_ent(fn__list__filter_2_0,
		check_hlds__modecheck_goal__handle_solver_vars_in_ite_12_0_i7);
MR_def_label(check_hlds__modecheck_goal__handle_solver_vars_in_ite_12_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 5);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_COMMON(2,1);
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_ENTRY_AP(check_hlds__modecheck_goal__solver_var_to_init_3_0);
	MR_tfield(0, MR_r2, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_r2, 3) = MR_sv(2);
	MR_tfield(0, MR_r2, 4) = MR_sv(5);
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(fn__list__filter_2_0,
		check_hlds__modecheck_goal__handle_solver_vars_in_ite_12_0_i9);
MR_def_label(check_hlds__modecheck_goal__handle_solver_vars_in_ite_12_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(8);
	MR_sv(8) = MR_r1;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__modecheck_util__construct_initialisation_calls_4_0,
		check_hlds__modecheck_goal__handle_solver_vars_in_ite_12_0_i10);
MR_def_label(check_hlds__modecheck_goal__handle_solver_vars_in_ite_12_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(9) = MR_r2;
	MR_sv(10) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(11);
	MR_r3 = MR_sv(8);
	MR_np_call_localret_ent(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_105_115_116_95_116_111_95_115_101_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_1_0,
		check_hlds__modecheck_goal__handle_solver_vars_in_ite_12_0_i11);
MR_def_label(check_hlds__modecheck_goal__handle_solver_vars_in_ite_12_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(fn__check_hlds__modecheck_goal__append_init_calls_to_goal_3_0,
		check_hlds__modecheck_goal__handle_solver_vars_in_ite_12_0_i12);
MR_def_label(check_hlds__modecheck_goal__handle_solver_vars_in_ite_12_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__parse_tree__prog_mode__any_inst_0_0,
		check_hlds__modecheck_goal__handle_solver_vars_in_ite_12_0_i13);
MR_def_label(check_hlds__modecheck_goal__handle_solver_vars_in_ite_12_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(hlds__instmap__instmap_set_vars_same_4_0,
		check_hlds__modecheck_goal__handle_solver_vars_in_ite_12_0_i14);
MR_def_label(check_hlds__modecheck_goal__handle_solver_vars_in_ite_12_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 5);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_COMMON(2,2);
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_ENTRY_AP(check_hlds__modecheck_goal__solver_var_to_init_3_0);
	MR_tfield(0, MR_r2, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_r2, 3) = MR_sv(2);
	MR_tfield(0, MR_r2, 4) = MR_sv(6);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(fn__list__filter_2_0,
		check_hlds__modecheck_goal__handle_solver_vars_in_ite_12_0_i16);
MR_def_label(check_hlds__modecheck_goal__handle_solver_vars_in_ite_12_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(check_hlds__modecheck_util__construct_initialisation_calls_4_0,
		check_hlds__modecheck_goal__handle_solver_vars_in_ite_12_0_i17);
MR_def_label(check_hlds__modecheck_goal__handle_solver_vars_in_ite_12_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_sv(7) = MR_r2;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(11);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_105_115_116_95_116_111_95_115_101_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_1_0,
		check_hlds__modecheck_goal__handle_solver_vars_in_ite_12_0_i18);
MR_def_label(check_hlds__modecheck_goal__handle_solver_vars_in_ite_12_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(fn__check_hlds__modecheck_goal__append_init_calls_to_goal_3_0,
		check_hlds__modecheck_goal__handle_solver_vars_in_ite_12_0_i19);
MR_def_label(check_hlds__modecheck_goal__handle_solver_vars_in_ite_12_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(fn__parse_tree__prog_mode__any_inst_0_0,
		check_hlds__modecheck_goal__handle_solver_vars_in_ite_12_0_i20);
MR_def_label(check_hlds__modecheck_goal__handle_solver_vars_in_ite_12_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(hlds__instmap__instmap_set_vars_same_4_0,
		check_hlds__modecheck_goal__handle_solver_vars_in_ite_12_0_i21);
MR_def_label(check_hlds__modecheck_goal__handle_solver_vars_in_ite_12_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(7);
	MR_decr_sp_and_return(12);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__instmap__instmap_lookup_var_3_0);
MR_decl_entry(check_hlds__inst_util__inst_contains_any_2_0);
MR_declare_entry(MR_do_redo);
MR_decl_entry(check_hlds__mode_info__mode_info_error_4_0);

MR_BEGIN_MODULE(check_hlds__modecheck_goal_module6)
	MR_init_entry1(check_hlds__modecheck_goal__check_no_inst_any_vars_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__modecheck_goal__check_no_inst_any_vars_6_0);
	MR_init_label10(check_hlds__modecheck_goal__check_no_inst_any_vars_6_0,35,3,9,11,12,13,6,15,18,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'check_no_inst_any_vars'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__modecheck_goal__check_no_inst_any_vars_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
MR_def_label(check_hlds__modecheck_goal__check_no_inst_any_vars_6_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(check_hlds__modecheck_goal__check_no_inst_any_vars_6_0_i3);
	}
	MR_r1 = MR_r5;
	MR_decr_sp_and_return(13);
MR_def_label(check_hlds__modecheck_goal__check_no_inst_any_vars_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_tfield(1, MR_r2, 1);
	MR_sv(8) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(9) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(10));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(check_hlds__modecheck_goal__check_no_inst_any_vars_6_0_i6);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(1, MR_r2, 0);
	MR_sv(11) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(12) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(check_hlds__modecheck_goal__check_no_inst_any_vars_6_0_i9);
	MR_sv(1) = MR_r1;
	MR_tempr2 = MR_r3;
	MR_sv(2) = MR_tempr2;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_tempr1;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__instmap__instmap_lookup_var_3_0,
		check_hlds__modecheck_goal__check_no_inst_any_vars_6_0_i11);
MR_def_label(check_hlds__modecheck_goal__check_no_inst_any_vars_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = MR_sv(11);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(12);
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(hlds__instmap__instmap_lookup_var_3_0,
		check_hlds__modecheck_goal__check_no_inst_any_vars_6_0_i11);
MR_def_label(check_hlds__modecheck_goal__check_no_inst_any_vars_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_module_info_2_0,
		check_hlds__modecheck_goal__check_no_inst_any_vars_6_0_i12);
MR_def_label(check_hlds__modecheck_goal__check_no_inst_any_vars_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(check_hlds__inst_util__inst_contains_any_2_0,
		check_hlds__modecheck_goal__check_no_inst_any_vars_6_0_i13);
MR_def_label(check_hlds__modecheck_goal__check_no_inst_any_vars_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_restore_maxfr(MR_sv(10));
	MR_redoip_slot_word(MR_maxfr) = MR_sv(8);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(9);
	MR_GOTO_LAB(check_hlds__modecheck_goal__check_no_inst_any_vars_6_0_i15);
MR_def_label(check_hlds__modecheck_goal__check_no_inst_any_vars_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_redoip_slot_word(MR_maxfr) = MR_sv(8);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(9);
	MR_GOTO_LAB(check_hlds__modecheck_goal__check_no_inst_any_vars_6_0_i5);
MR_def_label(check_hlds__modecheck_goal__check_no_inst_any_vars_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 17;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tempr2 = MR_sv(5);
	MR_tfield(3, MR_tempr1, 2) = MR_tempr2;
	MR_sv(1) = MR_tempr1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__set__make_singleton_set_1_0,
		check_hlds__modecheck_goal__check_no_inst_any_vars_6_0_i18);
MR_def_label(check_hlds__modecheck_goal__check_no_inst_any_vars_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_succip_word = MR_sv(13);
	MR_decr_sp(13);
	MR_np_tailcall_ent(check_hlds__mode_info__mode_info_error_4_0);
MR_def_label(check_hlds__modecheck_goal__check_no_inst_any_vars_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(6);
	MR_succip_word = MR_sv(13);
	MR_GOTO_LAB(check_hlds__modecheck_goal__check_no_inst_any_vars_6_0_i35);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(check_hlds__mode_info__mode_info_get_pred_id_2_0);
MR_decl_entry(check_hlds__mode_info__mode_info_get_proc_id_2_0);
MR_decl_entry(hlds__hlds_module__module_info_pred_proc_info_5_0);
MR_decl_entry(check_hlds__mode_info__mode_info_get_var_types_2_0);
MR_decl_entry(check_hlds__mode_info__mode_info_get_varset_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_set_varset_3_0);
MR_decl_entry(hlds__hlds_pred__proc_info_set_vartypes_3_0);
MR_decl_entry(check_hlds__polymorphism__create_poly_info_4_0);
MR_decl_entry(check_hlds__polymorphism__polymorphism_make_type_info_var_6_0);
MR_decl_entry(check_hlds__polymorphism__poly_info_extract_6_0);
MR_decl_entry(hlds__hlds_module__module_info_set_pred_proc_info_6_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_varset_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_vartypes_2_0);
MR_decl_entry(check_hlds__mode_info__mode_info_set_varset_3_0);
MR_decl_entry(check_hlds__mode_info__mode_info_set_var_types_3_0);
MR_decl_entry(check_hlds__mode_info__mode_info_set_module_info_3_0);

MR_BEGIN_MODULE(check_hlds__modecheck_goal_module7)
	MR_init_entry1(check_hlds__modecheck_goal__modecheck_make_type_info_var_for_type_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__modecheck_goal__modecheck_make_type_info_var_for_type_6_0);
	MR_init_label10(check_hlds__modecheck_goal__modecheck_make_type_info_var_for_type_6_0,2,3,4,5,6,7,8,9,10,11)
	MR_init_label7(check_hlds__modecheck_goal__modecheck_make_type_info_var_for_type_6_0,12,13,14,15,16,17,18)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'modecheck_make_type_info_var_for_type'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__modecheck_goal__modecheck_make_type_info_var_for_type_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(9) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_module_info_2_0,
		check_hlds__modecheck_goal__modecheck_make_type_info_var_for_type_6_0_i2);
MR_def_label(check_hlds__modecheck_goal__modecheck_make_type_info_var_for_type_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_pred_id_2_0,
		check_hlds__modecheck_goal__modecheck_make_type_info_var_for_type_6_0_i3);
MR_def_label(check_hlds__modecheck_goal__modecheck_make_type_info_var_for_type_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_proc_id_2_0,
		check_hlds__modecheck_goal__modecheck_make_type_info_var_for_type_6_0_i4);
MR_def_label(check_hlds__modecheck_goal__modecheck_make_type_info_var_for_type_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_proc_info_5_0,
		check_hlds__modecheck_goal__modecheck_make_type_info_var_for_type_6_0_i5);
MR_def_label(check_hlds__modecheck_goal__modecheck_make_type_info_var_for_type_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_sv(7) = MR_r2;
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_var_types_2_0,
		check_hlds__modecheck_goal__modecheck_make_type_info_var_for_type_6_0_i6);
MR_def_label(check_hlds__modecheck_goal__modecheck_make_type_info_var_for_type_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_varset_2_0,
		check_hlds__modecheck_goal__modecheck_make_type_info_var_for_type_6_0_i7);
MR_def_label(check_hlds__modecheck_goal__modecheck_make_type_info_var_for_type_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_varset_3_0,
		check_hlds__modecheck_goal__modecheck_make_type_info_var_for_type_6_0_i8);
MR_def_label(check_hlds__modecheck_goal__modecheck_make_type_info_var_for_type_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_vartypes_3_0,
		check_hlds__modecheck_goal__modecheck_make_type_info_var_for_type_6_0_i9);
MR_def_label(check_hlds__modecheck_goal__modecheck_make_type_info_var_for_type_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(check_hlds__polymorphism__create_poly_info_4_0,
		check_hlds__modecheck_goal__modecheck_make_type_info_var_for_type_6_0_i10);
MR_def_label(check_hlds__modecheck_goal__modecheck_make_type_info_var_for_type_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__polymorphism__polymorphism_make_type_info_var_6_0,
		check_hlds__modecheck_goal__modecheck_make_type_info_var_for_type_6_0_i11);
MR_def_label(check_hlds__modecheck_goal__modecheck_make_type_info_var_for_type_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = MR_r3;
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(check_hlds__polymorphism__poly_info_extract_6_0,
		check_hlds__modecheck_goal__modecheck_make_type_info_var_for_type_6_0_i12);
MR_def_label(check_hlds__modecheck_goal__modecheck_make_type_info_var_for_type_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(3);
	MR_r5 = MR_tempr2;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_set_pred_proc_info_6_0,
		check_hlds__modecheck_goal__modecheck_make_type_info_var_for_type_6_0_i13);
MR_def_label(check_hlds__modecheck_goal__modecheck_make_type_info_var_for_type_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_varset_2_0,
		check_hlds__modecheck_goal__modecheck_make_type_info_var_for_type_6_0_i14);
MR_def_label(check_hlds__modecheck_goal__modecheck_make_type_info_var_for_type_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_vartypes_2_0,
		check_hlds__modecheck_goal__modecheck_make_type_info_var_for_type_6_0_i15);
MR_def_label(check_hlds__modecheck_goal__modecheck_make_type_info_var_for_type_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(9);
	}
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_set_varset_3_0,
		check_hlds__modecheck_goal__modecheck_make_type_info_var_for_type_6_0_i16);
MR_def_label(check_hlds__modecheck_goal__modecheck_make_type_info_var_for_type_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_set_var_types_3_0,
		check_hlds__modecheck_goal__modecheck_make_type_info_var_for_type_6_0_i17);
MR_def_label(check_hlds__modecheck_goal__modecheck_make_type_info_var_for_type_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_set_module_info_3_0,
		check_hlds__modecheck_goal__modecheck_make_type_info_var_for_type_6_0_i18);
MR_def_label(check_hlds__modecheck_goal__modecheck_make_type_info_var_for_type_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_decr_sp_and_return(10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(varset__new_var_3_0);
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;
MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);
MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0);
MR_decl_entry(fn__map__singleton_2_0);
MR_decl_entry(hlds__hlds_goal__rename_some_vars_in_goal_3_0);
MR_decl_entry(hlds__hlds_goal__rename_vars_in_goal_info_4_0);
MR_decl_entry(check_hlds__mode_info__mode_info_get_instmap_2_0);
MR_decl_entry(fn__hlds__instmap__instmap_delta_from_assoc_list_1_0);
MR_decl_entry(hlds__hlds_goal__goal_info_set_instmap_delta_3_0);
MR_decl_entry(hlds__instmap__instmap_set_var_4_0);
MR_decl_entry(check_hlds__mode_info__mode_info_set_instmap_3_0);
MR_decl_entry(fn__hlds__hlds_goal__goal_info_get_context_1_0);
MR_decl_entry(fn__mdbcomp__prim_data__mercury_public_builtin_module_0_0);
MR_decl_entry(hlds__goal_util__generate_simple_call_12_0);

MR_BEGIN_MODULE(check_hlds__modecheck_goal_module8)
	MR_init_entry1(check_hlds__modecheck_goal__modecheck_goal_make_ground_term_unique_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__modecheck_goal__modecheck_goal_make_ground_term_unique_6_0);
	MR_init_label10(check_hlds__modecheck_goal__modecheck_goal_make_ground_term_unique_6_0,2,3,4,6,7,8,9,10,11,12)
	MR_init_label10(check_hlds__modecheck_goal__modecheck_goal_make_ground_term_unique_6_0,13,14,17,18,23,24,25,26,29,30)
	MR_init_label6(check_hlds__modecheck_goal__modecheck_goal_make_ground_term_unique_6_0,31,36,37,38,39,42)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'modecheck_goal_make_ground_term_unique'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__modecheck_goal__modecheck_goal_make_ground_term_unique_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(7) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_var_types_2_0,
		check_hlds__modecheck_goal__modecheck_goal_make_ground_term_unique_6_0_i2);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_make_ground_term_unique_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_varset_2_0,
		check_hlds__modecheck_goal__modecheck_goal_make_ground_term_unique_6_0_i3);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_make_ground_term_unique_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(varset__new_var_3_0,
		check_hlds__modecheck_goal__modecheck_goal_make_ground_term_unique_6_0_i4);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_make_ground_term_unique_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_sv(9) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_sv(10) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(10);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(1);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		check_hlds__modecheck_goal__modecheck_goal_make_ground_term_unique_6_0_i6);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_make_ground_term_unique_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(10);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_tempr1;
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		check_hlds__modecheck_goal__modecheck_goal_make_ground_term_unique_6_0_i7);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_make_ground_term_unique_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(7);
	}
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_set_varset_3_0,
		check_hlds__modecheck_goal__modecheck_goal_make_ground_term_unique_6_0_i8);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_make_ground_term_unique_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_set_var_types_3_0,
		check_hlds__modecheck_goal__modecheck_goal_make_ground_term_unique_6_0_i9);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_make_ground_term_unique_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = MR_r1;
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(5);
	MR_np_call_localret_ent(fn__map__singleton_2_0,
		check_hlds__modecheck_goal__modecheck_goal_make_ground_term_unique_6_0_i10);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_make_ground_term_unique_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__rename_some_vars_in_goal_3_0,
		check_hlds__modecheck_goal__modecheck_goal_make_ground_term_unique_6_0_i11);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_make_ground_term_unique_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(hlds__hlds_goal__rename_vars_in_goal_info_4_0,
		check_hlds__modecheck_goal__modecheck_goal_make_ground_term_unique_6_0_i12);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_make_ground_term_unique_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_instmap_2_0,
		check_hlds__modecheck_goal__modecheck_goal_make_ground_term_unique_6_0_i13);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_make_ground_term_unique_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(hlds__instmap__instmap_lookup_var_3_0,
		check_hlds__modecheck_goal__modecheck_goal_make_ground_term_unique_6_0_i14);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_make_ground_term_unique_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(5);
	MR_tfield(0, MR_r2, 1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(8) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__hlds__instmap__instmap_delta_from_assoc_list_1_0,
		check_hlds__modecheck_goal__modecheck_goal_make_ground_term_unique_6_0_i17);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_make_ground_term_unique_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_instmap_delta_3_0,
		check_hlds__modecheck_goal__modecheck_goal_make_ground_term_unique_6_0_i18);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_make_ground_term_unique_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tempr4 = MR_sv(5);
	MR_tfield(3, MR_tempr1, 1) = MR_tempr4;
	MR_tfield(3, MR_tempr1, 2) = (MR_Integer) 0;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tfield(3, MR_tempr2, 2) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_sv(2) = MR_tempr3;
	MR_tfield(0, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(0, MR_tempr3, 1) = MR_r1;
	MR_sv(6) = (MR_Word) MR_TAG_COMMON(3,4,0);
	MR_r1 = MR_tempr4;
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(7);
	}
	MR_np_call_localret_ent(hlds__instmap__instmap_set_var_4_0,
		check_hlds__modecheck_goal__modecheck_goal_make_ground_term_unique_6_0_i23);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_make_ground_term_unique_6_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_set_instmap_3_0,
		check_hlds__modecheck_goal__modecheck_goal_make_ground_term_unique_6_0_i24);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_make_ground_term_unique_6_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_context_1_0,
		check_hlds__modecheck_goal__modecheck_goal_make_ground_term_unique_6_0_i25);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_make_ground_term_unique_6_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__modecheck_goal__modecheck_make_type_info_var_for_type_6_0,
		check_hlds__modecheck_goal__modecheck_goal_make_ground_term_unique_6_0_i26);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_make_ground_term_unique_6_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(6);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(4) = MR_r1;
	MR_sv(7) = MR_r2;
	MR_sv(10) = MR_r3;
	MR_r1 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__hlds__instmap__instmap_delta_from_assoc_list_1_0,
		check_hlds__modecheck_goal__modecheck_goal_make_ground_term_unique_6_0_i29);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_make_ground_term_unique_6_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_module_info_2_0,
		check_hlds__modecheck_goal__modecheck_goal_make_ground_term_unique_6_0_i30);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_make_ground_term_unique_6_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_public_builtin_module_0_0,
		check_hlds__modecheck_goal__modecheck_goal_make_ground_term_unique_6_0_i31);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_make_ground_term_unique_6_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r7 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_r2 = (MR_Word) MR_string_const("copy", 4);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = (MR_Word) MR_TAG_COMMON(1,5,0);
	MR_r5 = (MR_Integer) 0;
	MR_r6 = (MR_Integer) 0;
	MR_r8 = (MR_Word) MR_tbmkword(0, 0);
	MR_r9 = MR_sv(8);
	MR_r10 = MR_sv(9);
	MR_r11 = MR_sv(3);
	}
	MR_np_call_localret_ent(hlds__goal_util__generate_simple_call_12_0,
		check_hlds__modecheck_goal__modecheck_goal_make_ground_term_unique_6_0_i36);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_make_ground_term_unique_6_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_instmap_2_0,
		check_hlds__modecheck_goal__modecheck_goal_make_ground_term_unique_6_0_i37);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_make_ground_term_unique_6_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__instmap__instmap_set_var_4_0,
		check_hlds__modecheck_goal__modecheck_goal_make_ground_term_unique_6_0_i38);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_make_ground_term_unique_6_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_set_instmap_3_0,
		check_hlds__modecheck_goal__modecheck_goal_make_ground_term_unique_6_0_i39);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_make_ground_term_unique_6_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(2);
	MR_tfield(1, MR_r2, 1) = MR_sv(7);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		check_hlds__modecheck_goal__modecheck_goal_make_ground_term_unique_6_0_i42);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_make_ground_term_unique_6_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(11);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__modecheck_goal_module9)
	MR_init_entry1(check_hlds__modecheck_goal__all_plain_construct_unifies_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__modecheck_goal__all_plain_construct_unifies_1_0);
	MR_init_label2(check_hlds__modecheck_goal__all_plain_construct_unifies_1_0,2,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'all_plain_construct_unifies'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__modecheck_goal__all_plain_construct_unifies_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__modecheck_goal__all_plain_construct_unifies_1_0_i2);
	}
	MR_r2 = MR_tfield(0, MR_tfield(1, MR_r1, 0), 0);
	if (MR_PTAG_TESTR(MR_r2,0)) {
		MR_GOTO_LAB(check_hlds__modecheck_goal__all_plain_construct_unifies_1_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r2, 1);
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(check_hlds__modecheck_goal__all_plain_construct_unifies_1_0_i1);
	}
	MR_r2 = MR_tfield(1, MR_tempr1, 1);
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(check_hlds__modecheck_goal__all_plain_construct_unifies_1_0_i1);
	}
	MR_r1 = MR_tfield(1, MR_r1, 1);
	MR_np_localtailcall(check_hlds__modecheck_goal__all_plain_construct_unifies_1_0);
	}
MR_def_label(check_hlds__modecheck_goal__all_plain_construct_unifies_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(check_hlds__modecheck_goal__all_plain_construct_unifies_1_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(set__singleton_set_2_0);
MR_decl_entry(__Unify___term__var_1_0);
MR_decl_entry(fn__hlds__hlds_goal__goal_info_get_purity_1_0);
MR_decl_entry(list__reverse_2_0);

MR_BEGIN_MODULE(check_hlds__modecheck_goal_module10)
	MR_init_entry1(check_hlds__modecheck_goal__modecheck_specializable_ground_term_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__modecheck_goal__modecheck_specializable_ground_term_4_0);
	MR_init_label9(check_hlds__modecheck_goal__modecheck_specializable_ground_term_4_0,3,5,7,9,15,20,24,22,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'modecheck_specializable_ground_term'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__modecheck_goal__modecheck_specializable_ground_term_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_tfield(0, MR_r1, 0);
	MR_sv(4) = MR_tfield(0, MR_r1, 1);
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_nonlocals_1_0,
		check_hlds__modecheck_goal__modecheck_specializable_ground_term_4_0_i3);
MR_def_label(check_hlds__modecheck_goal__modecheck_specializable_ground_term_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(set__singleton_set_2_0,
		check_hlds__modecheck_goal__modecheck_specializable_ground_term_4_0_i5);
MR_def_label(check_hlds__modecheck_goal__modecheck_specializable_ground_term_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__modecheck_goal__modecheck_specializable_ground_term_4_0_i2);
	}
	MR_r1 = MR_sv(5);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(__Unify___term__var_1_0,
		check_hlds__modecheck_goal__modecheck_specializable_ground_term_4_0_i7);
MR_def_label(check_hlds__modecheck_goal__modecheck_specializable_ground_term_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__modecheck_goal__modecheck_specializable_ground_term_4_0_i2);
	}
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_purity_1_0,
		check_hlds__modecheck_goal__modecheck_specializable_ground_term_4_0_i9);
MR_def_label(check_hlds__modecheck_goal__modecheck_specializable_ground_term_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(check_hlds__modecheck_goal__modecheck_specializable_ground_term_4_0_i2);
	}
	if (MR_RTAGS_TESTR(MR_sv(3),3,1)) {
		MR_GOTO_LAB(check_hlds__modecheck_goal__modecheck_specializable_ground_term_4_0_i2);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr4 = MR_sv(3);
	MR_tempr1 = MR_tfield(3, MR_tempr4, 1);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(check_hlds__modecheck_goal__modecheck_specializable_ground_term_4_0_i2);
	}
	MR_tempr1 = MR_tfield(3, MR_tempr4, 2);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(check_hlds__modecheck_goal__modecheck_specializable_ground_term_4_0_i2);
	}
	MR_tempr2 = MR_tfield(0, MR_tfield(1, MR_tempr1, 0), 0);
	if (MR_PTAG_TESTR(MR_tempr2,0)) {
		MR_GOTO_LAB(check_hlds__modecheck_goal__modecheck_specializable_ground_term_4_0_i2);
	}
	MR_tempr3 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr3;
	MR_r3 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___term__var_1_0,
		check_hlds__modecheck_goal__modecheck_specializable_ground_term_4_0_i15);
MR_def_label(check_hlds__modecheck_goal__modecheck_specializable_ground_term_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__modecheck_goal__modecheck_specializable_ground_term_4_0_i2);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(1);
	MR_r2 = MR_tfield(0, MR_tfield(1, MR_tempr2, 0), 0);
	if (MR_PTAG_TESTR(MR_r2,0)) {
		MR_GOTO_LAB(check_hlds__modecheck_goal__modecheck_specializable_ground_term_4_0_i2);
	}
	MR_tempr1 = MR_tfield(0, MR_r2, 1);
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(check_hlds__modecheck_goal__modecheck_specializable_ground_term_4_0_i2);
	}
	MR_r2 = MR_tfield(1, MR_tempr1, 1);
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(check_hlds__modecheck_goal__modecheck_specializable_ground_term_4_0_i2);
	}
	MR_r1 = MR_tfield(1, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(check_hlds__modecheck_goal__all_plain_construct_unifies_1_0,
		check_hlds__modecheck_goal__modecheck_specializable_ground_term_4_0_i20);
MR_def_label(check_hlds__modecheck_goal__modecheck_specializable_ground_term_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__modecheck_goal__modecheck_specializable_ground_term_4_0_i2);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(check_hlds__modecheck_goal__modecheck_specializable_ground_term_4_0_i22);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(list__reverse_2_0,
		check_hlds__modecheck_goal__modecheck_specializable_ground_term_4_0_i24);
MR_def_label(check_hlds__modecheck_goal__modecheck_specializable_ground_term_4_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_r2;
	MR_decr_sp_and_return(6);
MR_def_label(check_hlds__modecheck_goal__modecheck_specializable_ground_term_4_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(check_hlds__modecheck_goal__modecheck_specializable_ground_term_4_0_i2);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_r2 = MR_tfield(3, MR_tempr1, 1);
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(check_hlds__modecheck_goal__modecheck_specializable_ground_term_4_0_i2);
	}
	MR_r2 = MR_tfield(3, MR_tempr1, 2);
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(check_hlds__modecheck_goal__modecheck_specializable_ground_term_4_0_i2);
	}
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_sv(1);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_r2;
	MR_decr_sp_and_return(6);
	}
MR_def_label(check_hlds__modecheck_goal__modecheck_specializable_ground_term_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__det_remove_4_0);

MR_BEGIN_MODULE(check_hlds__modecheck_goal_module11)
	MR_init_entry1(check_hlds__modecheck_goal__modecheck_ground_term_construct_arg_loop_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__modecheck_goal__modecheck_ground_term_construct_arg_loop_5_0);
	MR_init_label3(check_hlds__modecheck_goal__modecheck_ground_term_construct_arg_loop_5_0,22,5,9)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'modecheck_ground_term_construct_arg_loop'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__modecheck_goal__modecheck_ground_term_construct_arg_loop_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__modecheck_goal__modecheck_ground_term_construct_arg_loop_5_0_i22);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_tempr1;
	MR_proceed();
	}
MR_def_label(check_hlds__modecheck_goal__modecheck_ground_term_construct_arg_loop_5_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(1, MR_r1, 1);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(check_hlds__modecheck_goal, construct_var_info);
	MR_r3 = MR_tfield(1, MR_tempr1, 0);
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(map__det_remove_4_0,
		check_hlds__modecheck_goal__modecheck_ground_term_construct_arg_loop_5_0_i5);
MR_def_label(check_hlds__modecheck_goal__modecheck_ground_term_construct_arg_loop_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_r1;
	MR_tfield(0, MR_tempr2, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr3, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr3, 1) = MR_tempr2;
	MR_tempr4 = MR_sv(1);
	MR_sv(1) = MR_tempr3;
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr4;
	}
	MR_np_localcall_lab(check_hlds__modecheck_goal__modecheck_ground_term_construct_arg_loop_5_0,
		check_hlds__modecheck_goal__modecheck_ground_term_construct_arg_loop_5_0_i9);
MR_def_label(check_hlds__modecheck_goal__modecheck_ground_term_construct_arg_loop_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr2, 1) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	MR_decr_sp_and_return(3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__mdbcomp__prim_data__sym_name_to_string_1_0);
MR_decl_entry(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
MR_decl_entry(check_hlds__mode_debug__mode_checkpoint_4_0);
MR_decl_entry(check_hlds__mode_info__mode_info_get_call_id_3_0);
MR_decl_entry(check_hlds__mode_info__mode_info_set_call_context_3_0);
MR_decl_entry(check_hlds__modecheck_call__modecheck_call_pred_10_0);
MR_decl_entry(fn__hlds__hlds_pred__builtin_state_4_0);
MR_decl_entry(check_hlds__modecheck_util__handle_extra_goals_9_0);
MR_decl_entry(check_hlds__mode_info__mode_info_unset_call_context_2_0);

MR_BEGIN_MODULE(check_hlds__modecheck_goal_module12)
	MR_init_entry1(check_hlds__modecheck_goal__modecheck_goal_plain_call_9_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__modecheck_goal__modecheck_goal_plain_call_9_0);
	MR_init_label10(check_hlds__modecheck_goal__modecheck_goal_plain_call_9_0,2,3,4,5,8,9,10,11,12,13)
	MR_init_label3(check_hlds__modecheck_goal__modecheck_goal_plain_call_9_0,15,16,17)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'modecheck_goal_plain_call'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__modecheck_goal__modecheck_goal_plain_call_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(5) = MR_tempr1;
	MR_sv(6) = MR_r6;
	MR_sv(7) = MR_r7;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__sym_name_to_string_1_0,
		check_hlds__modecheck_goal__modecheck_goal_plain_call_9_0_i2);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_plain_call_9_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("call ", 5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		check_hlds__modecheck_goal__modecheck_goal_plain_call_9_0_i3);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_plain_call_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_sv(7);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__mode_debug__mode_checkpoint_4_0,
		check_hlds__modecheck_goal__modecheck_goal_plain_call_9_0_i4);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_plain_call_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_call_id_3_0,
		check_hlds__modecheck_goal__modecheck_goal_plain_call_9_0_i5);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_plain_call_9_0,5)
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
		check_hlds__modecheck_goal__modecheck_goal_plain_call_9_0_i8);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_plain_call_9_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_instmap_2_0,
		check_hlds__modecheck_goal__modecheck_goal_plain_call_9_0_i9);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_plain_call_9_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(6);
	MR_r6 = MR_sv(8);
	}
	MR_np_call_localret_ent(check_hlds__modecheck_call__modecheck_call_pred_10_0,
		check_hlds__modecheck_goal__modecheck_goal_plain_call_9_0_i10);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_plain_call_9_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_sv(9) = MR_r2;
	MR_sv(10) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(12) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_module_info_2_0,
		check_hlds__modecheck_goal__modecheck_goal_plain_call_9_0_i11);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_plain_call_9_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_r1 = MR_sv(12);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_pred_id_2_0,
		check_hlds__modecheck_goal__modecheck_goal_plain_call_9_0_i12);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_plain_call_9_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(8);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_pred__builtin_state_4_0,
		check_hlds__modecheck_goal__modecheck_goal_plain_call_9_0_i13);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_plain_call_9_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 6);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(8);
	MR_tempr2 = MR_sv(9);
	MR_tfield(1, MR_tempr1, 2) = MR_tempr2;
	MR_tfield(1, MR_tempr1, 3) = MR_r1;
	MR_tfield(1, MR_tempr1, 4) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 5) = MR_sv(5);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_tempr2;
	MR_r6 = MR_sv(2);
	MR_r7 = MR_sv(12);
	}
	MR_np_call_localret_ent(check_hlds__modecheck_util__handle_extra_goals_9_0,
		check_hlds__modecheck_goal__modecheck_goal_plain_call_9_0_i15);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_plain_call_9_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_unset_call_context_2_0,
		check_hlds__modecheck_goal__modecheck_goal_plain_call_9_0_i16);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_plain_call_9_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_sv(7);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__mode_debug__mode_checkpoint_4_0,
		check_hlds__modecheck_goal__modecheck_goal_plain_call_9_0_i17);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_plain_call_9_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(13);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_goal__generic_call_id_2_0);
MR_decl_entry(hlds__hlds_goal__goal_info_has_feature_2_0);
MR_decl_entry(fn__parse_tree__prog_mode__in_mode_0_0);
MR_decl_entry(__Unify___parse_tree__prog_data__mer_mode_0_0);
MR_decl_entry(fn__parse_tree__prog_mode__out_mode_0_0);
MR_decl_entry(hlds__hlds_module__module_info_get_type_table_2_0);
MR_decl_entry(parse_tree__prog_type__type_to_ctor_2_0);
MR_decl_entry(hlds__hlds_data__lookup_type_ctor_defn_3_0);
MR_decl_entry(hlds__hlds_data__get_type_defn_body_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_cons_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_data__type_ctor_info_cons_tag_0;
MR_decl_entry(map__lookup_3_0);
MR_decl_entry(check_hlds__modecheck_call__modecheck_builtin_cast_7_0);
MR_decl_entry(hlds__hlds_module__module_info_get_event_set_2_0);
MR_decl_entry(parse_tree__prog_event__event_arg_modes_3_0);
MR_decl_entry(check_hlds__modecheck_call__modecheck_event_call_5_0);
MR_decl_entry(check_hlds__modecheck_call__modecheck_higher_order_call_9_0);

MR_BEGIN_MODULE(check_hlds__modecheck_goal_module13)
	MR_init_entry1(check_hlds__modecheck_goal__modecheck_goal_generic_call_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__modecheck_goal__modecheck_goal_generic_call_7_0);
	MR_init_label10(check_hlds__modecheck_goal__modecheck_goal_generic_call_7_0,2,3,4,6,10,12,13,21,22,23)
	MR_init_label10(check_hlds__modecheck_goal__modecheck_goal_generic_call_7_0,25,26,28,33,34,35,37,38,40,41)
	MR_init_label10(check_hlds__modecheck_goal__modecheck_goal_generic_call_7_0,43,9,52,53,8,57,58,61,60,64)
	MR_init_label8(check_hlds__modecheck_goal__modecheck_goal_generic_call_7_0,65,56,68,72,67,7,74,75)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'modecheck_goal_generic_call'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__modecheck_goal__modecheck_goal_generic_call_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = (MR_Word) MR_string_const("generic_call", 12);
	MR_r3 = MR_r5;
	MR_np_call_localret_ent(check_hlds__mode_debug__mode_checkpoint_4_0,
		check_hlds__modecheck_goal__modecheck_goal_generic_call_7_0_i2);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_generic_call_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_instmap_2_0,
		check_hlds__modecheck_goal__modecheck_goal_generic_call_7_0_i3);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_generic_call_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_goal__generic_call_id_2_0,
		check_hlds__modecheck_goal__modecheck_goal_generic_call_7_0_i4);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_generic_call_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(6);
	}
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_set_call_context_3_0,
		check_hlds__modecheck_goal__modecheck_goal_generic_call_7_0_i6);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_generic_call_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),3)) {
		MR_GOTO_LAB(check_hlds__modecheck_goal__modecheck_goal_generic_call_7_0_i8);
	}
	MR_sv(11) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Integer) 11;
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_has_feature_2_0,
		check_hlds__modecheck_goal__modecheck_goal_generic_call_7_0_i10);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_generic_call_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__modecheck_goal__modecheck_goal_generic_call_7_0_i9);
	}
	MR_r1 = MR_sv(11);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_instmap_2_0,
		check_hlds__modecheck_goal__modecheck_goal_generic_call_7_0_i12);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_generic_call_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(2),0,0)) {
		MR_GOTO_LAB(check_hlds__modecheck_goal__modecheck_goal_generic_call_7_0_i13);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr2 = MR_sv(2);
	MR_r2 = MR_tfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(check_hlds__modecheck_goal__modecheck_goal_generic_call_7_0_i13);
	}
	MR_tempr1 = MR_tfield(1, MR_r2, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(check_hlds__modecheck_goal__modecheck_goal_generic_call_7_0_i13);
	}
	if (MR_LTAGS_TEST(MR_sv(3),0,0)) {
		MR_GOTO_LAB(check_hlds__modecheck_goal__modecheck_goal_generic_call_7_0_i13);
	}
	MR_tempr3 = MR_sv(3);
	MR_r2 = MR_tfield(1, MR_tempr3, 1);
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(check_hlds__modecheck_goal__modecheck_goal_generic_call_7_0_i13);
	}
	MR_tempr1 = MR_tfield(1, MR_r2, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(check_hlds__modecheck_goal__modecheck_goal_generic_call_7_0_i13);
	}
	MR_sv(6) = MR_r1;
	MR_sv(7) = MR_tfield(1, MR_tempr2, 0);
	MR_sv(8) = MR_tfield(1, MR_tempr3, 0);
	MR_sv(9) = MR_tfield(1, MR_r2, 0);
	}
	MR_np_call_localret_ent(fn__parse_tree__prog_mode__in_mode_0_0,
		check_hlds__modecheck_goal__modecheck_goal_generic_call_7_0_i22);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_generic_call_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("check_hlds.modecheck_goal", 25);
	MR_r2 = (MR_Word) MR_string_const("predicate \140check_hlds.modecheck_goal.modecheck_goal_generic_call\'/7", 67);
	MR_r3 = (MR_Word) MR_string_const("bad cast", 8);
	MR_np_call_localret_ent(require__unexpected_3_0,
		check_hlds__modecheck_goal__modecheck_goal_generic_call_7_0_i21);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_generic_call_7_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__parse_tree__prog_mode__in_mode_0_0,
		check_hlds__modecheck_goal__modecheck_goal_generic_call_7_0_i22);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_generic_call_7_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(__Unify___parse_tree__prog_data__mer_mode_0_0,
		check_hlds__modecheck_goal__modecheck_goal_generic_call_7_0_i23);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_generic_call_7_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__modecheck_goal__modecheck_goal_generic_call_7_0_i9);
	}
	MR_np_call_localret_ent(fn__parse_tree__prog_mode__out_mode_0_0,
		check_hlds__modecheck_goal__modecheck_goal_generic_call_7_0_i25);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_generic_call_7_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(__Unify___parse_tree__prog_data__mer_mode_0_0,
		check_hlds__modecheck_goal__modecheck_goal_generic_call_7_0_i26);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_generic_call_7_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__modecheck_goal__modecheck_goal_generic_call_7_0_i9);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(hlds__instmap__instmap_lookup_var_3_0,
		check_hlds__modecheck_goal__modecheck_goal_generic_call_7_0_i28);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_generic_call_7_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,0)) {
		MR_GOTO_LAB(check_hlds__modecheck_goal__modecheck_goal_generic_call_7_0_i9);
	}
	MR_r2 = MR_tfield(3, MR_r1, 2);
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(check_hlds__modecheck_goal__modecheck_goal_generic_call_7_0_i9);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(1, MR_r2, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(check_hlds__modecheck_goal__modecheck_goal_generic_call_7_0_i9);
	}
	MR_tempr2 = MR_tfield(1, MR_r2, 0);
	MR_tempr1 = MR_tfield(0, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(check_hlds__modecheck_goal__modecheck_goal_generic_call_7_0_i9);
	}
	MR_sv(6) = MR_tfield(3, MR_r1, 1);
	MR_sv(9) = MR_tfield(0, MR_tempr2, 0);
	MR_r1 = MR_sv(11);
	}
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_module_info_2_0,
		check_hlds__modecheck_goal__modecheck_goal_generic_call_7_0_i33);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_generic_call_7_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_type_table_2_0,
		check_hlds__modecheck_goal__modecheck_goal_generic_call_7_0_i34);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_generic_call_7_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(11);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_var_types_2_0,
		check_hlds__modecheck_goal__modecheck_goal_generic_call_7_0_i35);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_generic_call_7_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(7);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		check_hlds__modecheck_goal__modecheck_goal_generic_call_7_0_i37);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_generic_call_7_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(parse_tree__prog_type__type_to_ctor_2_0,
		check_hlds__modecheck_goal__modecheck_goal_generic_call_7_0_i38);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_generic_call_7_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__modecheck_goal__modecheck_goal_generic_call_7_0_i9);
	}
	MR_r1 = MR_sv(10);
	MR_np_call_localret_ent(hlds__hlds_data__lookup_type_ctor_defn_3_0,
		check_hlds__modecheck_goal__modecheck_goal_generic_call_7_0_i40);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_generic_call_7_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__hlds_data__get_type_defn_body_2_0,
		check_hlds__modecheck_goal__modecheck_goal_generic_call_7_0_i41);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_generic_call_7_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(check_hlds__modecheck_goal__modecheck_goal_generic_call_7_0_i9);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, cons_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, cons_tag);
	MR_r3 = MR_tfield(0, MR_tempr1, 1);
	MR_r4 = MR_sv(9);
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		check_hlds__modecheck_goal__modecheck_goal_generic_call_7_0_i43);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_generic_call_7_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,11)) {
		MR_GOTO_LAB(check_hlds__modecheck_goal__modecheck_goal_generic_call_7_0_i9);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_tfield(3, MR_r1, 2);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_r5 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr4, 3, (MR_Integer) 3);
	MR_r5 = MR_tempr4;
	MR_tfield(3, MR_tempr4, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr4, 1) = MR_sv(6);
	MR_tfield(3, MR_tempr4, 2) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr5, 0, (MR_Integer) 2);
	MR_r4 = MR_tempr5;
	MR_tfield(0, MR_tempr5, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr5, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr6, 1, (MR_Integer) 2);
	MR_r5 = MR_tempr6;
	MR_tfield(1, MR_tempr6, 0) = MR_tempr5;
	MR_tfield(1, MR_tempr6, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_sv(8);
	MR_tfield(1, MR_r1, 1) = MR_tempr6;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(11);
	MR_GOTO_LAB(check_hlds__modecheck_goal__modecheck_goal_generic_call_7_0_i52);
	}
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_generic_call_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(11);
	MR_r1 = MR_sv(3);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_generic_call_7_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(check_hlds__modecheck_call__modecheck_builtin_cast_7_0,
		check_hlds__modecheck_goal__modecheck_goal_generic_call_7_0_i53);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_generic_call_7_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 4);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(2, MR_tempr1, 1) = MR_r1;
	MR_tfield(2, MR_tempr1, 2) = MR_sv(3);
	MR_tfield(2, MR_tempr1, 3) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_r3;
	MR_r3 = MR_sv(4);
	MR_tempr2 = MR_r4;
	MR_r4 = MR_sv(2);
	MR_r5 = MR_tfield(2, MR_r1, 1);
	MR_r6 = MR_sv(5);
	MR_r7 = MR_tempr2;
	}
	MR_np_call_localret_ent(check_hlds__modecheck_util__handle_extra_goals_9_0,
		check_hlds__modecheck_goal__modecheck_goal_generic_call_7_0_i72);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_generic_call_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),2)) {
		MR_GOTO_LAB(check_hlds__modecheck_goal__modecheck_goal_generic_call_7_0_i56);
	}
	MR_sv(3) = MR_tfield(2, MR_sv(1), 0);
	MR_sv(11) = MR_r1;
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_module_info_2_0,
		check_hlds__modecheck_goal__modecheck_goal_generic_call_7_0_i57);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_generic_call_7_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_event_set_2_0,
		check_hlds__modecheck_goal__modecheck_goal_generic_call_7_0_i58);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_generic_call_7_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(parse_tree__prog_event__event_arg_modes_3_0,
		check_hlds__modecheck_goal__modecheck_goal_generic_call_7_0_i61);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_generic_call_7_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__modecheck_goal__modecheck_goal_generic_call_7_0_i60);
	}
	MR_r4 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(11);
	MR_r1 = MR_r4;
	MR_GOTO_LAB(check_hlds__modecheck_goal__modecheck_goal_generic_call_7_0_i64);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_generic_call_7_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("check_hlds.modecheck_goal", 25);
	MR_r2 = (MR_Word) MR_string_const("predicate \140check_hlds.modecheck_goal.modecheck_goal_generic_call\'/7", 67);
	MR_r3 = (MR_Word) MR_string_const("unknown event", 13);
	MR_np_call_localret_ent(require__unexpected_3_0,
		check_hlds__modecheck_goal__modecheck_goal_generic_call_7_0_i64);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_generic_call_7_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(check_hlds__modecheck_call__modecheck_event_call_5_0,
		check_hlds__modecheck_goal__modecheck_goal_generic_call_7_0_i65);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_generic_call_7_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 4);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(2, MR_tempr1, 1) = MR_r1;
	MR_tfield(2, MR_tempr1, 2) = MR_sv(2);
	MR_tfield(2, MR_tempr1, 3) = (MR_Integer) 0;
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_r2;
	}
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_unset_call_context_2_0,
		check_hlds__modecheck_goal__modecheck_goal_generic_call_7_0_i74);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_generic_call_7_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),0)) {
		MR_GOTO_LAB(check_hlds__modecheck_goal__modecheck_goal_generic_call_7_0_i67);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(1);
	MR_sv(3) = MR_tfield(0, MR_tempr2, 0);
	MR_tempr1 = MR_r1;
	MR_r1 = MR_tfield(0, MR_tempr2, 2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__modecheck_call__modecheck_higher_order_call_9_0,
		check_hlds__modecheck_goal__modecheck_goal_generic_call_7_0_i68);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_generic_call_7_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 4);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(2, MR_tempr1, 1) = MR_r1;
	MR_tfield(2, MR_tempr1, 2) = MR_r2;
	MR_tfield(2, MR_tempr1, 3) = MR_r3;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tempr5 = MR_sv(3);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr5;
	MR_tfield(1, MR_tempr2, 1) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr5;
	MR_tfield(1, MR_tempr3, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_r4;
	MR_r3 = MR_sv(4);
	MR_r4 = MR_tempr2;
	MR_tempr4 = MR_r5;
	MR_r5 = MR_tempr3;
	MR_r6 = MR_sv(5);
	MR_r7 = MR_tempr4;
	}
	MR_np_call_localret_ent(check_hlds__modecheck_util__handle_extra_goals_9_0,
		check_hlds__modecheck_goal__modecheck_goal_generic_call_7_0_i72);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_generic_call_7_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_unset_call_context_2_0,
		check_hlds__modecheck_goal__modecheck_goal_generic_call_7_0_i74);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_generic_call_7_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("check_hlds.modecheck_goal", 25);
	MR_r2 = (MR_Word) MR_string_const("predicate \140check_hlds.modecheck_goal.modecheck_goal_generic_call\'/7", 67);
	MR_r3 = (MR_Word) MR_string_const("class_method_call", 17);
	MR_np_call_localret_ent(require__unexpected_3_0,
		check_hlds__modecheck_goal__modecheck_goal_generic_call_7_0_i7);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_generic_call_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_unset_call_context_2_0,
		check_hlds__modecheck_goal__modecheck_goal_generic_call_7_0_i74);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_generic_call_7_0,74)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_r2 = (MR_Word) MR_string_const("generic_call", 12);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__mode_debug__mode_checkpoint_4_0,
		check_hlds__modecheck_goal__modecheck_goal_generic_call_7_0_i75);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_generic_call_7_0,75)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(12);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(check_hlds__modecheck_unify__modecheck_unification_8_0);

MR_BEGIN_MODULE(check_hlds__modecheck_goal_module14)
	MR_init_entry1(check_hlds__modecheck_goal__modecheck_goal_unify_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__modecheck_goal__modecheck_goal_unify_8_0);
	MR_init_label5(check_hlds__modecheck_goal__modecheck_goal_unify_8_0,2,4,5,6,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'modecheck_goal_unify'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__modecheck_goal__modecheck_goal_unify_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = (MR_Word) MR_string_const("unify", 5);
	MR_r3 = MR_r6;
	MR_np_call_localret_ent(check_hlds__mode_debug__mode_checkpoint_4_0,
		check_hlds__modecheck_goal__modecheck_goal_unify_8_0_i2);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_unify_8_0,2)
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
		check_hlds__modecheck_goal__modecheck_goal_unify_8_0_i4);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_unify_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__modecheck_unify__modecheck_unification_8_0,
		check_hlds__modecheck_goal__modecheck_goal_unify_8_0_i5);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_unify_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_unset_call_context_2_0,
		check_hlds__modecheck_goal__modecheck_goal_unify_8_0_i6);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_unify_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_r2 = (MR_Word) MR_string_const("unify", 5);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__mode_debug__mode_checkpoint_4_0,
		check_hlds__modecheck_goal__modecheck_goal_unify_8_0_i7);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_unify_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_foreign_arg_0;

MR_BEGIN_MODULE(check_hlds__modecheck_goal_module15)
	MR_init_entry1(check_hlds__modecheck_goal__modecheck_goal_call_foreign_proc_11_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__modecheck_goal__modecheck_goal_call_foreign_proc_11_0);
	MR_init_label9(check_hlds__modecheck_goal__modecheck_goal_call_foreign_proc_11_0,2,3,4,7,10,11,13,14,15)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'modecheck_goal_call_foreign_proc'/11 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__modecheck_goal__modecheck_goal_call_foreign_proc_11_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r6;
	MR_sv(7) = MR_r7;
	MR_sv(8) = MR_r8;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = (MR_Word) MR_string_const("pragma_foreign_code", 19);
	MR_r3 = MR_r9;
	MR_np_call_localret_ent(check_hlds__mode_debug__mode_checkpoint_4_0,
		check_hlds__modecheck_goal__modecheck_goal_call_foreign_proc_11_0_i2);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_call_foreign_proc_11_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_call_id_3_0,
		check_hlds__modecheck_goal__modecheck_goal_call_foreign_proc_11_0_i3);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_call_foreign_proc_11_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_instmap_2_0,
		check_hlds__modecheck_goal__modecheck_goal_call_foreign_proc_11_0_i4);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_call_foreign_proc_11_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(9);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_sv(9) = MR_r1;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_sv(10);
	}
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_set_call_context_3_0,
		check_hlds__modecheck_goal__modecheck_goal_call_foreign_proc_11_0_i7);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_call_foreign_proc_11_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, foreign_arg);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,7,0);
	MR_r4 = MR_sv(4);
	MR_np_call_localret_ent(fn__list__map_2_0,
		check_hlds__modecheck_goal__modecheck_goal_call_foreign_proc_11_0_i10);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_call_foreign_proc_11_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(8);
	MR_r6 = MR_sv(10);
	}
	MR_np_call_localret_ent(check_hlds__modecheck_call__modecheck_call_pred_10_0,
		check_hlds__modecheck_goal__modecheck_goal_call_foreign_proc_11_0_i11);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_call_foreign_proc_11_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 8);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 3) = MR_r1;
	MR_tfield(3, MR_tempr1, 4) = MR_sv(4);
	MR_tfield(3, MR_tempr1, 5) = MR_sv(5);
	MR_tfield(3, MR_tempr1, 6) = MR_sv(6);
	MR_tfield(3, MR_tempr1, 7) = MR_sv(7);
	MR_r1 = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_sv(8);
	MR_tempr3 = MR_r4;
	MR_r4 = MR_sv(3);
	MR_r5 = MR_tempr2;
	MR_r6 = MR_sv(9);
	MR_r7 = MR_tempr3;
	}
	MR_np_call_localret_ent(check_hlds__modecheck_util__handle_extra_goals_9_0,
		check_hlds__modecheck_goal__modecheck_goal_call_foreign_proc_11_0_i13);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_call_foreign_proc_11_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_unset_call_context_2_0,
		check_hlds__modecheck_goal__modecheck_goal_call_foreign_proc_11_0_i14);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_call_foreign_proc_11_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_r2 = (MR_Word) MR_string_const("pragma_foreign_code", 19);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__mode_debug__mode_checkpoint_4_0,
		check_hlds__modecheck_goal__modecheck_goal_call_foreign_proc_11_0_i15);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_call_foreign_proc_11_0,15)
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

MR_decl_entry(term__context_init_1_0);
MR_decl_entry(__Unify___term__context_0_0);
MR_decl_entry(check_hlds__mode_info__mode_info_set_context_3_0);
MR_decl_entry(check_hlds__mode_info__mode_info_get_in_dupl_for_switch_2_0);
MR_decl_entry(check_hlds__mode_info__mode_info_set_in_dupl_for_switch_3_0);
MR_decl_entry(check_hlds__modecheck_util__compute_goal_instmap_delta_6_0);

MR_BEGIN_MODULE(check_hlds__modecheck_goal_module16)
	MR_init_entry1(check_hlds__modecheck_goal__modecheck_goal_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__modecheck_goal__modecheck_goal_4_0);
	MR_init_label10(check_hlds__modecheck_goal__modecheck_goal_4_0,2,3,6,5,8,9,11,13,14,15)
	MR_init_label7(check_hlds__modecheck_goal__modecheck_goal_4_0,16,17,19,10,20,21,22)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'modecheck_goal'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__modecheck_goal__modecheck_goal_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(0, MR_r1, 0);
	MR_sv(2) = MR_tfield(0, MR_r1, 1);
	MR_sv(4) = MR_r2;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_context_1_0,
		check_hlds__modecheck_goal__modecheck_goal_4_0_i2);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(term__context_init_1_0,
		check_hlds__modecheck_goal__modecheck_goal_4_0_i3);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(__Unify___term__context_0_0,
		check_hlds__modecheck_goal__modecheck_goal_4_0_i6);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__modecheck_goal__modecheck_goal_4_0_i5);
	}
	MR_r1 = MR_sv(2);
	MR_sv(3) = MR_sv(4);
	MR_GOTO_LAB(check_hlds__modecheck_goal__modecheck_goal_4_0_i9);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_set_context_3_0,
		check_hlds__modecheck_goal__modecheck_goal_4_0_i8);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(2);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r2 = (MR_Integer) 13;
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_has_feature_2_0,
		check_hlds__modecheck_goal__modecheck_goal_4_0_i11);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__modecheck_goal__modecheck_goal_4_0_i10);
	}
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_in_dupl_for_switch_2_0,
		check_hlds__modecheck_goal__modecheck_goal_4_0_i13);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_set_in_dupl_for_switch_3_0,
		check_hlds__modecheck_goal__modecheck_goal_4_0_i14);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_instmap_2_0,
		check_hlds__modecheck_goal__modecheck_goal_4_0_i15);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	}
	MR_np_call_localret_ent(check_hlds__modecheck_goal__modecheck_goal_expr_5_0,
		check_hlds__modecheck_goal__modecheck_goal_4_0_i16);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(check_hlds__modecheck_util__compute_goal_instmap_delta_6_0,
		check_hlds__modecheck_goal__modecheck_goal_4_0_i17);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_4_0,17)
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
		check_hlds__modecheck_goal__modecheck_goal_4_0_i19);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_instmap_2_0,
		check_hlds__modecheck_goal__modecheck_goal_4_0_i20);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(check_hlds__modecheck_goal__modecheck_goal_expr_5_0,
		check_hlds__modecheck_goal__modecheck_goal_4_0_i21);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_4_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(check_hlds__modecheck_util__compute_goal_instmap_delta_6_0,
		check_hlds__modecheck_goal__modecheck_goal_4_0_i22);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_4_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(check_hlds__modecheck_conj__modecheck_conj_list_5_0);
MR_decl_entry(hlds__hlds_goal__par_conj_list_to_goal_3_0);

MR_BEGIN_MODULE(check_hlds__modecheck_goal_module17)
	MR_init_entry1(check_hlds__modecheck_goal__modecheck_goal_expr_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__modecheck_goal__modecheck_goal_expr_5_0);
	MR_init_label10(check_hlds__modecheck_goal__modecheck_goal_expr_5_0,3,5,7,9,14,15,16,13,18,20)
	MR_init_label9(check_hlds__modecheck_goal__modecheck_goal_expr_5_0,22,23,24,11,25,27,29,31,33)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'modecheck_goal_expr'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__modecheck_goal__modecheck_goal_expr_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(check_hlds__modecheck_goal__modecheck_goal_expr_5_0_i3);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_tfield(2, MR_r1, 0);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tfield(2, MR_tempr1, 1);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_tfield(2, MR_tempr1, 2);
	MR_r4 = MR_tempr2;
	MR_r5 = MR_tempr3;
	MR_np_tailcall_ent(check_hlds__modecheck_goal__modecheck_goal_generic_call_7_0);
	}
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_expr_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(check_hlds__modecheck_goal__modecheck_goal_expr_5_0_i5);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tfield(1, MR_tempr1, 1);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_tfield(1, MR_tempr1, 2);
	MR_r4 = MR_tfield(1, MR_tempr1, 4);
	MR_r5 = MR_tfield(1, MR_tempr1, 5);
	MR_r6 = MR_tempr2;
	MR_r7 = MR_tempr3;
	MR_np_tailcall_ent(check_hlds__modecheck_goal__modecheck_goal_plain_call_9_0);
	}
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_expr_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(check_hlds__modecheck_goal__modecheck_goal_expr_5_0_i7);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tfield(0, MR_tempr1, 1);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_tfield(0, MR_tempr1, 3);
	MR_r4 = MR_tfield(0, MR_tempr1, 4);
	MR_r5 = MR_tempr2;
	MR_r6 = MR_tempr3;
	MR_np_tailcall_ent(check_hlds__modecheck_goal__modecheck_goal_unify_8_0);
	}
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_expr_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,0)) {
		MR_GOTO_LAB(check_hlds__modecheck_goal__modecheck_goal_expr_5_0_i9);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tfield(3, MR_tempr1, 2);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_tfield(3, MR_tempr1, 3);
	MR_r4 = MR_tfield(3, MR_tempr1, 4);
	MR_r5 = MR_tfield(3, MR_tempr1, 5);
	MR_r6 = MR_tfield(3, MR_tempr1, 6);
	MR_r7 = MR_tfield(3, MR_tempr1, 7);
	MR_r8 = MR_tempr2;
	MR_r9 = MR_tempr3;
	MR_np_tailcall_ent(check_hlds__modecheck_goal__modecheck_goal_call_foreign_proc_11_0);
	}
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_expr_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,1)) {
		MR_GOTO_LAB(check_hlds__modecheck_goal__modecheck_goal_expr_5_0_i11);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(3, MR_r1, 1);
	MR_r4 = MR_tempr1;
	if (MR_INT_NE(MR_tempr1,1)) {
		MR_GOTO_LAB(check_hlds__modecheck_goal__modecheck_goal_expr_5_0_i13);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_tfield(3, MR_r1, 2);
	MR_r1 = (MR_Integer) 0;
	MR_r2 = (MR_Word) MR_string_const("par_conj", 8);
	}
	MR_np_call_localret_ent(check_hlds__mode_debug__mode_checkpoint_4_0,
		check_hlds__modecheck_goal__modecheck_goal_expr_5_0_i14);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_expr_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__modecheck_conj__modecheck_conj_list_5_0,
		check_hlds__modecheck_goal__modecheck_goal_expr_5_0_i15);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_expr_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__par_conj_list_to_goal_3_0,
		check_hlds__modecheck_goal__modecheck_goal_expr_5_0_i16);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_expr_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(0, MR_r1, 0);
	MR_r1 = (MR_Integer) 1;
	MR_r2 = (MR_Word) MR_string_const("par_conj", 8);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__mode_debug__mode_checkpoint_4_0,
		check_hlds__modecheck_goal__modecheck_goal_expr_5_0_i24);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_expr_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_tfield(3, MR_r1, 2);
	MR_r1 = (MR_Integer) 0;
	MR_r2 = (MR_Word) MR_string_const("conj", 4);
	MR_np_call_localret_ent(check_hlds__mode_debug__mode_checkpoint_4_0,
		check_hlds__modecheck_goal__modecheck_goal_expr_5_0_i18);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_expr_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(3),0,0)) {
		MR_GOTO_LAB(check_hlds__modecheck_goal__modecheck_goal_expr_5_0_i20);
	}
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(3,4,1);
	MR_r3 = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_r2 = (MR_Word) MR_string_const("conj", 4);
	MR_np_call_localret_ent(check_hlds__mode_debug__mode_checkpoint_4_0,
		check_hlds__modecheck_goal__modecheck_goal_expr_5_0_i24);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_expr_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__modecheck_conj__modecheck_conj_list_5_0,
		check_hlds__modecheck_goal__modecheck_goal_expr_5_0_i22);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_expr_5_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__conj_list_to_goal_3_0,
		check_hlds__modecheck_goal__modecheck_goal_expr_5_0_i23);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_expr_5_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(0, MR_r1, 0);
	MR_r3 = MR_tempr1;
	MR_r1 = (MR_Integer) 1;
	MR_r2 = (MR_Word) MR_string_const("conj", 4);
	}
	MR_np_call_localret_ent(check_hlds__mode_debug__mode_checkpoint_4_0,
		check_hlds__modecheck_goal__modecheck_goal_expr_5_0_i24);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_expr_5_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_expr_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,2)) {
		MR_GOTO_LAB(check_hlds__modecheck_goal__modecheck_goal_expr_5_0_i25);
	}
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_tailcall_ent(check_hlds__modecheck_goal__modecheck_goal_disj_5_0);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_expr_5_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,6)) {
		MR_GOTO_LAB(check_hlds__modecheck_goal__modecheck_goal_expr_5_0_i27);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tfield(3, MR_tempr1, 2);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_tfield(3, MR_tempr1, 3);
	MR_r4 = MR_tfield(3, MR_tempr1, 4);
	MR_r5 = MR_tempr2;
	MR_r6 = MR_tempr3;
	MR_np_tailcall_ent(check_hlds__modecheck_goal__modecheck_goal_if_then_else_8_0);
	}
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_expr_5_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,4)) {
		MR_GOTO_LAB(check_hlds__modecheck_goal__modecheck_goal_expr_5_0_i29);
	}
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_tailcall_ent(check_hlds__modecheck_goal__modecheck_goal_negation_5_0);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_expr_5_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,5)) {
		MR_GOTO_LAB(check_hlds__modecheck_goal__modecheck_goal_expr_5_0_i31);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tfield(3, MR_tempr1, 2);
	MR_tempr1 = MR_r3;
	MR_r3 = MR_tempr2;
	MR_r4 = MR_tempr1;
	MR_np_tailcall_ent(check_hlds__modecheck_goal__modecheck_goal_scope_6_0);
	}
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_expr_5_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,7)) {
		MR_GOTO_LAB(check_hlds__modecheck_goal__modecheck_goal_expr_5_0_i33);
	}
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_tailcall_ent(check_hlds__modecheck_goal__modecheck_goal_shorthand_5_0);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_expr_5_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tfield(3, MR_tempr1, 2);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_tfield(3, MR_tempr1, 3);
	MR_r4 = MR_tempr2;
	MR_r5 = MR_tempr3;
	MR_np_tailcall_ent(check_hlds__modecheck_goal__modecheck_goal_switch_7_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__instmap__init_unreachable_1_0);
MR_decl_entry(check_hlds__mode_info__mode_info_solver_init_is_supported_1_0);
MR_decl_entry(fn__set__to_sorted_list_1_0);
MR_decl_entry(fn__hlds__goal_util__flatten_disjs_1_0);
MR_decl_entry(set__empty_1_0);
MR_decl_entry(hlds__instmap__instmap_merge_5_0);
MR_decl_entry(list__map_3_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__instmap__type_ctor_info_instmap_0;
MR_decl_entry(hlds__hlds_goal__disj_list_to_goal_3_0);

MR_BEGIN_MODULE(check_hlds__modecheck_goal_module18)
	MR_init_entry1(check_hlds__modecheck_goal__modecheck_goal_disj_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__modecheck_goal__modecheck_goal_disj_5_0);
	MR_init_label10(check_hlds__modecheck_goal__modecheck_goal_disj_5_0,2,6,7,4,8,9,12,14,16,17)
	MR_init_label10(check_hlds__modecheck_goal__modecheck_goal_disj_5_0,19,20,10,22,25,23,28,30,33,35)
	MR_init_label2(check_hlds__modecheck_goal__modecheck_goal_disj_5_0,36,37)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'modecheck_goal_disj'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__modecheck_goal__modecheck_goal_disj_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = (MR_Word) MR_string_const("disj", 4);
	MR_np_call_localret_ent(check_hlds__mode_debug__mode_checkpoint_4_0,
		check_hlds__modecheck_goal__modecheck_goal_disj_5_0_i2);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_disj_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(check_hlds__modecheck_goal__modecheck_goal_disj_5_0_i4);
	}
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_r2, 1) = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(hlds__instmap__init_unreachable_1_0,
		check_hlds__modecheck_goal__modecheck_goal_disj_5_0_i6);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_disj_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_set_instmap_3_0,
		check_hlds__modecheck_goal__modecheck_goal_disj_5_0_i7);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_disj_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_r2 = (MR_Word) MR_string_const("disj", 4);
	MR_np_call_localret_ent(check_hlds__mode_debug__mode_checkpoint_4_0,
		check_hlds__modecheck_goal__modecheck_goal_disj_5_0_i37);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_disj_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_nonlocals_1_0,
		check_hlds__modecheck_goal__modecheck_goal_disj_5_0_i8);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_disj_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(check_hlds__modecheck_goal__modecheck_disj_list_7_0,
		check_hlds__modecheck_goal__modecheck_goal_disj_5_0_i9);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_disj_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_sv(5) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(7) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_solver_init_is_supported_1_0,
		check_hlds__modecheck_goal__modecheck_goal_disj_5_0_i12);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_disj_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__modecheck_goal__modecheck_goal_disj_5_0_i10);
	}
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_var_types_2_0,
		check_hlds__modecheck_goal__modecheck_goal_disj_5_0_i14);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_disj_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_sv(9) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(fn__set__to_sorted_list_1_0,
		check_hlds__modecheck_goal__modecheck_goal_disj_5_0_i16);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_disj_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_module_info_2_0,
		check_hlds__modecheck_goal__modecheck_goal_disj_5_0_i17);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_disj_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 6);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_COMMON(1,3);
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_ENTRY_AP(check_hlds__modecheck_goal__solver_var_must_be_initialised_4_0);
	MR_tfield(0, MR_r2, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_r2, 3) = MR_sv(6);
	MR_tfield(0, MR_r2, 4) = MR_r1;
	MR_tfield(0, MR_r2, 5) = MR_sv(4);
	MR_r1 = MR_sv(9);
	MR_r3 = MR_sv(8);
	MR_np_call_localret_ent(fn__list__filter_2_0,
		check_hlds__modecheck_goal__modecheck_goal_disj_5_0_i19);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_disj_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(7);
	}
	MR_np_call_localret_ent(check_hlds__modecheck_goal__add_necessary_disj_init_calls_7_0,
		check_hlds__modecheck_goal__modecheck_goal_disj_5_0_i20);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_disj_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r2;
	MR_sv(6) = MR_r3;
	MR_np_call_localret_ent(fn__hlds__goal_util__flatten_disjs_1_0,
		check_hlds__modecheck_goal__modecheck_goal_disj_5_0_i22);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_disj_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(5);
	MR_tempr2 = MR_sv(7);
	MR_sv(3) = MR_r2;
	MR_sv(6) = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__hlds__goal_util__flatten_disjs_1_0,
		check_hlds__modecheck_goal__modecheck_goal_disj_5_0_i22);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_disj_5_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(set__empty_1_0,
		check_hlds__modecheck_goal__modecheck_goal_disj_5_0_i25);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_disj_5_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__modecheck_goal__modecheck_goal_disj_5_0_i23);
	}
	MR_r1 = MR_sv(1);
	MR_r4 = MR_sv(6);
	MR_r2 = MR_sv(3);
	MR_r3 = (MR_Integer) 0;
	MR_np_call_localret_ent(hlds__instmap__instmap_merge_5_0,
		check_hlds__modecheck_goal__modecheck_goal_disj_5_0_i35);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_disj_5_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(2,3);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(check_hlds__modecheck_goal__set_large_flat_constructs_to_ground_in_goal_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(5);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_r1;
	MR_r4 = MR_sv(4);
	}
	MR_np_call_localret_ent(list__map_3_0,
		check_hlds__modecheck_goal__modecheck_goal_disj_5_0_i28);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_disj_5_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(fn__set__to_sorted_list_1_0,
		check_hlds__modecheck_goal__modecheck_goal_disj_5_0_i30);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_disj_5_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(1,4);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(hlds__instmap__instmap_set_vars_same_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = (MR_Word) MR_TAG_COMMON(3,4,1);
	MR_tfield(0, MR_tempr1, 4) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__instmap, instmap);
	MR_r2 = MR_r1;
	MR_r4 = MR_sv(3);
	}
	MR_np_call_localret_ent(list__map_3_0,
		check_hlds__modecheck_goal__modecheck_goal_disj_5_0_i33);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_disj_5_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r4 = MR_sv(6);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(hlds__instmap__instmap_merge_5_0,
		check_hlds__modecheck_goal__modecheck_goal_disj_5_0_i35);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_disj_5_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_goal__disj_list_to_goal_3_0,
		check_hlds__modecheck_goal__modecheck_goal_disj_5_0_i36);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_disj_5_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(0, MR_r1, 0);
	MR_r3 = MR_tempr1;
	MR_r1 = (MR_Integer) 1;
	MR_r2 = (MR_Word) MR_string_const("disj", 4);
	}
	MR_np_call_localret_ent(check_hlds__mode_debug__mode_checkpoint_4_0,
		check_hlds__modecheck_goal__modecheck_goal_disj_5_0_i37);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_disj_5_0,37)
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

MR_decl_entry(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_116_101_114_115_101_99_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);

MR_BEGIN_MODULE(check_hlds__modecheck_goal_module19)
	MR_init_entry1(check_hlds__modecheck_goal__modecheck_disj_list_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__modecheck_goal__modecheck_disj_list_7_0);
	MR_init_label10(check_hlds__modecheck_goal__modecheck_disj_list_7_0,35,4,5,8,6,10,12,13,14,15)
	MR_init_label1(check_hlds__modecheck_goal__modecheck_disj_list_7_0,16)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'modecheck_disj_list'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__modecheck_goal__modecheck_disj_list_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__modecheck_goal__modecheck_disj_list_7_0_i35);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_proceed();
	}
MR_def_label(check_hlds__modecheck_goal__modecheck_disj_list_7_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_tfield(1, MR_r1, 0);
	MR_sv(4) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_instmap_2_0,
		check_hlds__modecheck_goal__modecheck_disj_list_7_0_i4);
MR_def_label(check_hlds__modecheck_goal__modecheck_disj_list_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	}
	MR_np_call_localret_ent(check_hlds__modecheck_goal__modecheck_goal_4_0,
		check_hlds__modecheck_goal__modecheck_disj_list_7_0_i5);
MR_def_label(check_hlds__modecheck_goal__modecheck_disj_list_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(set__empty_1_0,
		check_hlds__modecheck_goal__modecheck_disj_list_7_0_i8);
MR_def_label(check_hlds__modecheck_goal__modecheck_disj_list_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__modecheck_goal__modecheck_disj_list_7_0_i6);
	}
	MR_r1 = MR_sv(5);
	MR_sv(6) = MR_sv(1);
	MR_GOTO_LAB(check_hlds__modecheck_goal__modecheck_disj_list_7_0_i13);
MR_def_label(check_hlds__modecheck_goal__modecheck_disj_list_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__check_hlds__modecheck_goal__goal_large_flat_constructs_1_0,
		check_hlds__modecheck_goal__modecheck_disj_list_7_0_i10);
MR_def_label(check_hlds__modecheck_goal__modecheck_disj_list_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_116_101_114_115_101_99_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		check_hlds__modecheck_goal__modecheck_disj_list_7_0_i12);
MR_def_label(check_hlds__modecheck_goal__modecheck_disj_list_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(5);
MR_def_label(check_hlds__modecheck_goal__modecheck_disj_list_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_instmap_2_0,
		check_hlds__modecheck_goal__modecheck_disj_list_7_0_i14);
MR_def_label(check_hlds__modecheck_goal__modecheck_disj_list_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_set_instmap_3_0,
		check_hlds__modecheck_goal__modecheck_disj_list_7_0_i15);
MR_def_label(check_hlds__modecheck_goal__modecheck_disj_list_7_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_tempr1;
	}
	MR_np_localcall_lab(check_hlds__modecheck_goal__modecheck_disj_list_7_0,
		check_hlds__modecheck_goal__modecheck_disj_list_7_0_i16);
MR_def_label(check_hlds__modecheck_goal__modecheck_disj_list_7_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(1);
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

extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_case_0;

MR_BEGIN_MODULE(check_hlds__modecheck_goal_module20)
	MR_init_entry1(check_hlds__modecheck_goal__modecheck_goal_switch_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__modecheck_goal__modecheck_goal_switch_7_0);
	MR_init_label10(check_hlds__modecheck_goal__modecheck_goal_switch_7_0,2,5,6,4,8,9,12,10,15,17)
	MR_init_label3(check_hlds__modecheck_goal__modecheck_goal_switch_7_0,20,22,24)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'modecheck_goal_switch'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__modecheck_goal__modecheck_goal_switch_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = (MR_Word) MR_string_const("switch", 6);
	MR_r3 = MR_r5;
	MR_np_call_localret_ent(check_hlds__mode_debug__mode_checkpoint_4_0,
		check_hlds__modecheck_goal__modecheck_goal_switch_7_0_i2);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_switch_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(3),0,0)) {
		MR_GOTO_LAB(check_hlds__modecheck_goal__modecheck_goal_switch_7_0_i4);
	}
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(hlds__instmap__init_unreachable_1_0,
		check_hlds__modecheck_goal__modecheck_goal_switch_7_0_i5);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_switch_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_set_instmap_3_0,
		check_hlds__modecheck_goal__modecheck_goal_switch_7_0_i6);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_switch_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 3) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(1) = MR_tempr1;
	MR_r3 = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_r2 = (MR_Word) MR_string_const("switch", 6);
	}
	MR_np_call_localret_ent(check_hlds__mode_debug__mode_checkpoint_4_0,
		check_hlds__modecheck_goal__modecheck_goal_switch_7_0_i24);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_switch_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_nonlocals_1_0,
		check_hlds__modecheck_goal__modecheck_goal_switch_7_0_i8);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_switch_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	}
	MR_np_call_localret_ent(check_hlds__modecheck_goal__modecheck_case_list_8_0,
		check_hlds__modecheck_goal__modecheck_goal_switch_7_0_i9);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_switch_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(6) = MR_tempr1;
	MR_sv(7) = MR_r4;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(set__empty_1_0,
		check_hlds__modecheck_goal__modecheck_goal_switch_7_0_i12);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_switch_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__modecheck_goal__modecheck_goal_switch_7_0_i10);
	}
	MR_r1 = MR_sv(3);
	MR_r4 = MR_sv(7);
	MR_r2 = MR_sv(5);
	MR_r3 = (MR_Integer) 0;
	MR_np_call_localret_ent(hlds__instmap__instmap_merge_5_0,
		check_hlds__modecheck_goal__modecheck_goal_switch_7_0_i22);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_switch_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(2,4);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(check_hlds__modecheck_goal__set_large_flat_constructs_to_ground_in_case_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(6);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, case);
	MR_r2 = MR_r1;
	MR_r4 = MR_sv(4);
	}
	MR_np_call_localret_ent(list__map_3_0,
		check_hlds__modecheck_goal__modecheck_goal_switch_7_0_i15);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_switch_7_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(fn__set__to_sorted_list_1_0,
		check_hlds__modecheck_goal__modecheck_goal_switch_7_0_i17);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_switch_7_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(1,5);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(hlds__instmap__instmap_set_vars_same_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = (MR_Word) MR_TAG_COMMON(3,4,1);
	MR_tfield(0, MR_tempr1, 4) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__instmap, instmap);
	MR_r2 = MR_r1;
	MR_r4 = MR_sv(5);
	}
	MR_np_call_localret_ent(list__map_3_0,
		check_hlds__modecheck_goal__modecheck_goal_switch_7_0_i20);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_switch_7_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r4 = MR_sv(7);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(hlds__instmap__instmap_merge_5_0,
		check_hlds__modecheck_goal__modecheck_goal_switch_7_0_i22);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_switch_7_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 4);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_r2, 1) = MR_sv(1);
	MR_tfield(3, MR_r2, 2) = MR_sv(2);
	MR_tfield(3, MR_r2, 3) = MR_sv(4);
	MR_sv(1) = MR_r2;
	MR_r3 = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_r2 = (MR_Word) MR_string_const("switch", 6);
	MR_np_call_localret_ent(check_hlds__mode_debug__mode_checkpoint_4_0,
		check_hlds__modecheck_goal__modecheck_goal_switch_7_0_i24);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_switch_7_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(8);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(check_hlds__modecheck_util__modecheck_functors_test_5_0);
MR_decl_entry(hlds__instmap__instmap_is_reachable_1_0);
MR_decl_entry(fn__hlds__hlds_goal__true_goal_0_0);
MR_decl_entry(check_hlds__mode_util__fixup_instmap_switch_var_5_0);

MR_BEGIN_MODULE(check_hlds__modecheck_goal_module21)
	MR_init_entry1(check_hlds__modecheck_goal__modecheck_case_list_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__modecheck_goal__modecheck_case_list_8_0);
	MR_init_label10(check_hlds__modecheck_goal__modecheck_case_list_8_0,51,4,5,6,9,11,12,7,13,14)
	MR_init_label7(check_hlds__modecheck_goal__modecheck_case_list_8_0,15,19,17,21,23,25,26)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'modecheck_case_list'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__modecheck_goal__modecheck_case_list_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__modecheck_goal__modecheck_case_list_8_0_i51);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(check_hlds__modecheck_goal__modecheck_case_list_8_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r4;
	MR_sv(3) = MR_tempr2;
	MR_sv(4) = MR_tfield(1, MR_r1, 1);
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	MR_sv(6) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(7) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(5) = MR_tfield(0, MR_tempr1, 2);
	MR_r1 = MR_tempr2;
	}
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_instmap_2_0,
		check_hlds__modecheck_goal__modecheck_case_list_8_0_i4);
MR_def_label(check_hlds__modecheck_goal__modecheck_case_list_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(check_hlds__modecheck_util__modecheck_functors_test_5_0,
		check_hlds__modecheck_goal__modecheck_case_list_8_0_i5);
MR_def_label(check_hlds__modecheck_goal__modecheck_case_list_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_instmap_2_0,
		check_hlds__modecheck_goal__modecheck_case_list_8_0_i6);
MR_def_label(check_hlds__modecheck_goal__modecheck_case_list_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(hlds__instmap__instmap_is_reachable_1_0,
		check_hlds__modecheck_goal__modecheck_case_list_8_0_i9);
MR_def_label(check_hlds__modecheck_goal__modecheck_case_list_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__modecheck_goal__modecheck_case_list_8_0_i7);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(check_hlds__modecheck_goal__modecheck_goal_4_0,
		check_hlds__modecheck_goal__modecheck_case_list_8_0_i11);
MR_def_label(check_hlds__modecheck_goal__modecheck_case_list_8_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_sv(9) = MR_r2;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_instmap_2_0,
		check_hlds__modecheck_goal__modecheck_case_list_8_0_i12);
MR_def_label(check_hlds__modecheck_goal__modecheck_case_list_8_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r3 = MR_r5;
	MR_r2 = MR_sv(8);
	MR_r4 = MR_sv(3);
	MR_GOTO_LAB(check_hlds__modecheck_goal__modecheck_case_list_8_0_i14);
MR_def_label(check_hlds__modecheck_goal__modecheck_case_list_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__true_goal_0_0,
		check_hlds__modecheck_goal__modecheck_case_list_8_0_i13);
MR_def_label(check_hlds__modecheck_goal__modecheck_case_list_8_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_r2 = MR_sv(8);
	MR_r4 = MR_tempr1;
	}
MR_def_label(check_hlds__modecheck_goal__modecheck_case_list_8_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(5) = MR_r3;
	MR_sv(8) = MR_r2;
	MR_np_call_localret_ent(check_hlds__mode_util__fixup_instmap_switch_var_5_0,
		check_hlds__modecheck_goal__modecheck_case_list_8_0_i15);
MR_def_label(check_hlds__modecheck_goal__modecheck_case_list_8_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_sv(3) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(7);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_sv(6) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = MR_sv(2);
	}
	MR_np_call_localret_ent(set__empty_1_0,
		check_hlds__modecheck_goal__modecheck_case_list_8_0_i19);
MR_def_label(check_hlds__modecheck_goal__modecheck_case_list_8_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__modecheck_goal__modecheck_case_list_8_0_i17);
	}
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_set_instmap_3_0,
		check_hlds__modecheck_goal__modecheck_case_list_8_0_i25);
MR_def_label(check_hlds__modecheck_goal__modecheck_case_list_8_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(fn__check_hlds__modecheck_goal__goal_large_flat_constructs_1_0,
		check_hlds__modecheck_goal__modecheck_case_list_8_0_i21);
MR_def_label(check_hlds__modecheck_goal__modecheck_case_list_8_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(2);
	}
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_116_101_114_115_101_99_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		check_hlds__modecheck_goal__modecheck_case_list_8_0_i23);
MR_def_label(check_hlds__modecheck_goal__modecheck_case_list_8_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_set_instmap_3_0,
		check_hlds__modecheck_goal__modecheck_case_list_8_0_i25);
MR_def_label(check_hlds__modecheck_goal__modecheck_case_list_8_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tempr1;
	}
	MR_np_localcall_lab(check_hlds__modecheck_goal__modecheck_case_list_8_0,
		check_hlds__modecheck_goal__modecheck_case_list_8_0_i26);
MR_def_label(check_hlds__modecheck_goal__modecheck_case_list_8_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr2, 1) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	MR_decr_sp_and_return(10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__hlds__hlds_goal__goal_get_nonlocals_1_0);
MR_decl_entry(check_hlds__mode_info__mode_info_lock_vars_4_0);
MR_decl_entry(check_hlds__mode_info__mode_info_add_live_vars_3_0);
MR_decl_entry(check_hlds__mode_info__mode_info_remove_live_vars_3_0);
MR_decl_entry(check_hlds__mode_info__mode_info_unlock_vars_4_0);
MR_decl_entry(check_hlds__mode_info__mode_info_get_in_promise_purity_scope_2_0);
MR_decl_entry(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_116_101_114_115_101_99_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0);

MR_BEGIN_MODULE(check_hlds__modecheck_goal_module22)
	MR_init_entry1(check_hlds__modecheck_goal__modecheck_goal_if_then_else_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__modecheck_goal__modecheck_goal_if_then_else_8_0);
	MR_init_label10(check_hlds__modecheck_goal__modecheck_goal_if_then_else_8_0,2,3,4,5,6,7,8,9,10,11)
	MR_init_label10(check_hlds__modecheck_goal__modecheck_goal_if_then_else_8_0,14,16,17,12,18,19,20,21,22,23)
	MR_init_label10(check_hlds__modecheck_goal__modecheck_goal_if_then_else_8_0,25,26,27,30,32,33,35,36,37,38)
	MR_init_label2(check_hlds__modecheck_goal__modecheck_goal_if_then_else_8_0,39,40)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'modecheck_goal_if_then_else'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__modecheck_goal__modecheck_goal_if_then_else_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = (MR_Word) MR_string_const("if-then-else", 12);
	MR_r3 = MR_r6;
	MR_np_call_localret_ent(check_hlds__mode_debug__mode_checkpoint_4_0,
		check_hlds__modecheck_goal__modecheck_goal_if_then_else_8_0_i2);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_if_then_else_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_nonlocals_1_0,
		check_hlds__modecheck_goal__modecheck_goal_if_then_else_8_0_i3);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_if_then_else_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_get_nonlocals_1_0,
		check_hlds__modecheck_goal__modecheck_goal_if_then_else_8_0_i4);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_if_then_else_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_instmap_2_0,
		check_hlds__modecheck_goal__modecheck_goal_if_then_else_8_0_i5);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_if_then_else_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r1 = (MR_Word) MR_tbmkword(0, 1);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_lock_vars_4_0,
		check_hlds__modecheck_goal__modecheck_goal_if_then_else_8_0_i6);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_if_then_else_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_add_live_vars_3_0,
		check_hlds__modecheck_goal__modecheck_goal_if_then_else_8_0_i7);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_if_then_else_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__modecheck_goal__modecheck_goal_4_0,
		check_hlds__modecheck_goal__modecheck_goal_if_then_else_8_0_i8);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_if_then_else_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_sv(8) = MR_r2;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_instmap_2_0,
		check_hlds__modecheck_goal__modecheck_goal_if_then_else_8_0_i9);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_if_then_else_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(8);
	}
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_remove_live_vars_3_0,
		check_hlds__modecheck_goal__modecheck_goal_if_then_else_8_0_i10);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_if_then_else_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_tbmkword(0, 1);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_unlock_vars_4_0,
		check_hlds__modecheck_goal__modecheck_goal_if_then_else_8_0_i11);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_if_then_else_8_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(hlds__instmap__instmap_is_reachable_1_0,
		check_hlds__modecheck_goal__modecheck_goal_if_then_else_8_0_i14);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_if_then_else_8_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__modecheck_goal__modecheck_goal_if_then_else_8_0_i12);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(check_hlds__modecheck_goal__modecheck_goal_4_0,
		check_hlds__modecheck_goal__modecheck_goal_if_then_else_8_0_i16);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_if_then_else_8_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_instmap_2_0,
		check_hlds__modecheck_goal__modecheck_goal_if_then_else_8_0_i17);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_if_then_else_8_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r4 = MR_sv(6);
	MR_sv(6) = MR_r3;
	MR_r2 = MR_r4;
	MR_GOTO_LAB(check_hlds__modecheck_goal__modecheck_goal_if_then_else_8_0_i19);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_if_then_else_8_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__true_goal_0_0,
		check_hlds__modecheck_goal__modecheck_goal_if_then_else_8_0_i18);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_if_then_else_8_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(8);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_if_then_else_8_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_set_instmap_3_0,
		check_hlds__modecheck_goal__modecheck_goal_if_then_else_8_0_i20);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_if_then_else_8_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__modecheck_goal__modecheck_goal_4_0,
		check_hlds__modecheck_goal__modecheck_goal_if_then_else_8_0_i21);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_if_then_else_8_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_sv(10) = MR_r2;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_instmap_2_0,
		check_hlds__modecheck_goal__modecheck_goal_if_then_else_8_0_i22);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_if_then_else_8_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_var_types_2_0,
		check_hlds__modecheck_goal__modecheck_goal_if_then_else_8_0_i23);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_if_then_else_8_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_sv(11) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_sv(12) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(fn__set__to_sorted_list_1_0,
		check_hlds__modecheck_goal__modecheck_goal_if_then_else_8_0_i25);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_if_then_else_8_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(6);
	MR_r6 = MR_sv(8);
	MR_r7 = MR_sv(10);
	MR_np_call_localret_ent(check_hlds__modecheck_goal__handle_solver_vars_in_ite_12_0,
		check_hlds__modecheck_goal__modecheck_goal_if_then_else_8_0_i26);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_if_then_else_8_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_sv(6) = MR_r3;
	MR_sv(8) = MR_r4;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_r5;
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_set_instmap_3_0,
		check_hlds__modecheck_goal__modecheck_goal_if_then_else_8_0_i27);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_if_then_else_8_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(8);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(6);
	MR_tfield(1, MR_r2, 1) = MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r3 = (MR_Integer) 1;
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__instmap__instmap_merge_5_0,
		check_hlds__modecheck_goal__modecheck_goal_if_then_else_8_0_i30);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_if_then_else_8_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 5);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_r2, 1) = MR_sv(1);
	MR_tfield(3, MR_r2, 2) = MR_sv(2);
	MR_tfield(3, MR_r2, 3) = MR_sv(3);
	MR_tfield(3, MR_r2, 4) = MR_sv(4);
	MR_sv(1) = MR_r2;
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_instmap_2_0,
		check_hlds__modecheck_goal__modecheck_goal_if_then_else_8_0_i32);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_if_then_else_8_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_in_promise_purity_scope_2_0,
		check_hlds__modecheck_goal__modecheck_goal_if_then_else_8_0_i33);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_if_then_else_8_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(check_hlds__modecheck_goal__modecheck_goal_if_then_else_8_0_i35);
	}
	MR_r3 = MR_sv(4);
	MR_r1 = (MR_Integer) 1;
	MR_r2 = (MR_Word) MR_string_const("if-then-else", 12);
	MR_np_call_localret_ent(check_hlds__mode_debug__mode_checkpoint_4_0,
		check_hlds__modecheck_goal__modecheck_goal_if_then_else_8_0_i40);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_if_then_else_8_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_get_nonlocals_1_0,
		check_hlds__modecheck_goal__modecheck_goal_if_then_else_8_0_i36);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_if_then_else_8_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(12);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(5);
	}
	MR_np_call_localret_ent(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_116_101_114_115_101_99_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		check_hlds__modecheck_goal__modecheck_goal_if_then_else_8_0_i37);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_if_then_else_8_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(12);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__set__to_sorted_list_1_0,
		check_hlds__modecheck_goal__modecheck_goal_if_then_else_8_0_i38);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_if_then_else_8_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	}
	MR_np_call_localret_ent(check_hlds__modecheck_goal__check_no_inst_any_vars_6_0,
		check_hlds__modecheck_goal__modecheck_goal_if_then_else_8_0_i39);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_if_then_else_8_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_r2 = (MR_Word) MR_string_const("if-then-else", 12);
	MR_np_call_localret_ent(check_hlds__mode_debug__mode_checkpoint_4_0,
		check_hlds__modecheck_goal__modecheck_goal_if_then_else_8_0_i40);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_if_then_else_8_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(13);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(check_hlds__mode_info__mode_info_get_live_vars_2_0);
MR_decl_entry(fn__bag__init_0_0);
MR_decl_entry(check_hlds__mode_info__mode_info_set_live_vars_3_0);

MR_BEGIN_MODULE(check_hlds__modecheck_goal_module23)
	MR_init_entry1(check_hlds__modecheck_goal__modecheck_goal_negation_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__modecheck_goal__modecheck_goal_negation_5_0);
	MR_init_label10(check_hlds__modecheck_goal__modecheck_goal_negation_5_0,2,3,4,5,7,8,9,10,11,12)
	MR_init_label8(check_hlds__modecheck_goal__modecheck_goal_negation_5_0,13,14,16,18,19,20,21,23)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'modecheck_goal_negation'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__modecheck_goal__modecheck_goal_negation_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = (MR_Word) MR_string_const("not", 3);
	MR_np_call_localret_ent(check_hlds__mode_debug__mode_checkpoint_4_0,
		check_hlds__modecheck_goal__modecheck_goal_negation_5_0_i2);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_negation_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_nonlocals_1_0,
		check_hlds__modecheck_goal__modecheck_goal_negation_5_0_i3);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_negation_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_instmap_2_0,
		check_hlds__modecheck_goal__modecheck_goal_negation_5_0_i4);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_negation_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_live_vars_2_0,
		check_hlds__modecheck_goal__modecheck_goal_negation_5_0_i5);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_negation_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_sv(7) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(fn__bag__init_0_0,
		check_hlds__modecheck_goal__modecheck_goal_negation_5_0_i7);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_negation_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_set_live_vars_3_0,
		check_hlds__modecheck_goal__modecheck_goal_negation_5_0_i8);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_negation_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_lock_vars_4_0,
		check_hlds__modecheck_goal__modecheck_goal_negation_5_0_i9);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_negation_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__modecheck_goal__modecheck_goal_4_0,
		check_hlds__modecheck_goal__modecheck_goal_negation_5_0_i10);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_negation_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_set_live_vars_3_0,
		check_hlds__modecheck_goal__modecheck_goal_negation_5_0_i11);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_negation_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_unlock_vars_4_0,
		check_hlds__modecheck_goal__modecheck_goal_negation_5_0_i12);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_negation_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_set_instmap_3_0,
		check_hlds__modecheck_goal__modecheck_goal_negation_5_0_i13);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_negation_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_in_promise_purity_scope_2_0,
		check_hlds__modecheck_goal__modecheck_goal_negation_5_0_i14);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_negation_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(check_hlds__modecheck_goal__modecheck_goal_negation_5_0_i16);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r3 = MR_sv(3);
	MR_r1 = (MR_Integer) 1;
	MR_r2 = (MR_Word) MR_string_const("not", 3);
	}
	MR_np_call_localret_ent(check_hlds__mode_debug__mode_checkpoint_4_0,
		check_hlds__modecheck_goal__modecheck_goal_negation_5_0_i23);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_negation_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_nonlocals_1_0,
		check_hlds__modecheck_goal__modecheck_goal_negation_5_0_i18);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_negation_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(hlds__instmap__init_unreachable_1_0,
		check_hlds__modecheck_goal__modecheck_goal_negation_5_0_i19);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_negation_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__set__to_sorted_list_1_0,
		check_hlds__modecheck_goal__modecheck_goal_negation_5_0_i20);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_negation_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	}
	MR_np_call_localret_ent(check_hlds__modecheck_goal__check_no_inst_any_vars_6_0,
		check_hlds__modecheck_goal__modecheck_goal_negation_5_0_i21);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_negation_5_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r3 = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_r2 = (MR_Word) MR_string_const("not", 3);
	}
	MR_np_call_localret_ent(check_hlds__mode_debug__mode_checkpoint_4_0,
		check_hlds__modecheck_goal__modecheck_goal_negation_5_0_i23);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_negation_5_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(8);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(check_hlds__mode_info__mode_info_set_in_promise_purity_scope_3_0);
MR_decl_entry(check_hlds__mode_info__mode_info_set_had_from_ground_term_3_0);
MR_decl_entry(check_hlds__mode_info__mode_info_get_make_ground_terms_unique_2_0);

MR_BEGIN_MODULE(check_hlds__modecheck_goal_module24)
	MR_init_entry1(check_hlds__modecheck_goal__modecheck_goal_scope_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__modecheck_goal__modecheck_goal_scope_6_0);
	MR_init_label10(check_hlds__modecheck_goal__modecheck_goal_scope_6_0,4,5,6,7,9,3,12,13,14,16)
	MR_init_label10(check_hlds__modecheck_goal__modecheck_goal_scope_6_0,18,19,21,25,11,28,29,30,31,32)
	MR_init_label6(check_hlds__modecheck_goal__modecheck_goal_scope_6_0,33,34,27,37,38,40)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'modecheck_goal_scope'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__modecheck_goal__modecheck_goal_scope_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(check_hlds__modecheck_goal__modecheck_goal_scope_6_0_i3);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(3) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_in_promise_purity_scope_2_0,
		check_hlds__modecheck_goal__modecheck_goal_scope_6_0_i4);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_scope_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_set_in_promise_purity_scope_3_0,
		check_hlds__modecheck_goal__modecheck_goal_scope_6_0_i5);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_scope_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = (MR_Word) MR_string_const("scope", 5);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__mode_debug__mode_checkpoint_4_0,
		check_hlds__modecheck_goal__modecheck_goal_scope_6_0_i6);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_scope_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__modecheck_goal__modecheck_goal_4_0,
		check_hlds__modecheck_goal__modecheck_goal_scope_6_0_i7);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_scope_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_r1 = (MR_Integer) 1;
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_string_const("scope", 5);
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(check_hlds__mode_debug__mode_checkpoint_4_0,
		check_hlds__modecheck_goal__modecheck_goal_scope_6_0_i9);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_scope_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_set_in_promise_purity_scope_3_0,
		check_hlds__modecheck_goal__modecheck_goal_scope_6_0_i40);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_scope_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,4)) {
		MR_GOTO_LAB(check_hlds__modecheck_goal__modecheck_goal_scope_6_0_i11);
	}
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(1) = MR_tfield(3, MR_r1, 1);
	MR_r1 = (MR_Integer) 0;
	MR_r2 = (MR_Word) MR_string_const("scope", 5);
	MR_r3 = MR_r4;
	MR_np_call_localret_ent(check_hlds__mode_debug__mode_checkpoint_4_0,
		check_hlds__modecheck_goal__modecheck_goal_scope_6_0_i12);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_scope_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__modecheck_goal__modecheck_goal_from_ground_term_scope_6_0,
		check_hlds__modecheck_goal__modecheck_goal_scope_6_0_i13);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_scope_6_0,13)
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
		check_hlds__modecheck_goal__modecheck_goal_scope_6_0_i14);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_scope_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(check_hlds__modecheck_goal__modecheck_goal_scope_6_0_i16);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,4,1);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_scope_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(2);
	MR_tempr2 = MR_tfield(1, MR_tempr1, 0);
	MR_sv(2) = MR_tfield(0, MR_tempr2, 0);
	MR_sv(4) = MR_tfield(0, MR_tempr2, 1);
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_set_had_from_ground_term_3_0,
		check_hlds__modecheck_goal__modecheck_goal_scope_6_0_i18);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_scope_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_make_ground_terms_unique_2_0,
		check_hlds__modecheck_goal__modecheck_goal_scope_6_0_i19);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_scope_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(check_hlds__modecheck_goal__modecheck_goal_scope_6_0_i21);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(2);
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_r1, 1) = MR_tempr1;
	MR_tfield(3, MR_r1, 2) = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_decr_sp_and_return(6);
	}
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_scope_6_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(2),0)) {
		MR_GOTO_LAB(check_hlds__modecheck_goal__modecheck_goal_scope_6_0_i25);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(check_hlds__modecheck_goal__modecheck_goal_make_ground_term_unique_6_0);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_scope_6_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_sv(4), 0);
	MR_r2 = MR_sv(5);
	MR_decr_sp_and_return(6);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_scope_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,5)) {
		MR_GOTO_LAB(check_hlds__modecheck_goal__modecheck_goal_scope_6_0_i27);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = (MR_Word) MR_string_const("scope", 5);
	MR_r3 = MR_r4;
	MR_np_call_localret_ent(check_hlds__mode_debug__mode_checkpoint_4_0,
		check_hlds__modecheck_goal__modecheck_goal_scope_6_0_i28);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_scope_6_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_instmap_2_0,
		check_hlds__modecheck_goal__modecheck_goal_scope_6_0_i29);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_scope_6_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_nonlocals_1_0,
		check_hlds__modecheck_goal__modecheck_goal_scope_6_0_i30);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_scope_6_0,30)
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
		check_hlds__modecheck_goal__modecheck_goal_scope_6_0_i31);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_scope_6_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__modecheck_goal__modecheck_goal_4_0,
		check_hlds__modecheck_goal__modecheck_goal_scope_6_0_i32);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_scope_6_0,32)
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
		check_hlds__modecheck_goal__modecheck_goal_scope_6_0_i33);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_scope_6_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_set_instmap_3_0,
		check_hlds__modecheck_goal__modecheck_goal_scope_6_0_i34);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_scope_6_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(2);
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_r2 = (MR_Word) MR_string_const("scope", 5);
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(check_hlds__mode_debug__mode_checkpoint_4_0,
		check_hlds__modecheck_goal__modecheck_goal_scope_6_0_i40);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_scope_6_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = (MR_Word) MR_string_const("scope", 5);
	MR_r3 = MR_r4;
	MR_np_call_localret_ent(check_hlds__mode_debug__mode_checkpoint_4_0,
		check_hlds__modecheck_goal__modecheck_goal_scope_6_0_i37);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_scope_6_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__modecheck_goal__modecheck_goal_4_0,
		check_hlds__modecheck_goal__modecheck_goal_scope_6_0_i38);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_scope_6_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_r1 = (MR_Integer) 1;
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_string_const("scope", 5);
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(check_hlds__mode_debug__mode_checkpoint_4_0,
		check_hlds__modecheck_goal__modecheck_goal_scope_6_0_i40);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_scope_6_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__goal_util__attach_features_to_all_goals_4_0);
MR_decl_entry(check_hlds__mode_info__mode_info_var_is_live_3_0);

MR_BEGIN_MODULE(check_hlds__modecheck_goal_module25)
	MR_init_entry1(check_hlds__modecheck_goal__modecheck_goal_from_ground_term_scope_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__modecheck_goal__modecheck_goal_from_ground_term_scope_6_0);
	MR_init_label10(check_hlds__modecheck_goal__modecheck_goal_from_ground_term_scope_6_0,2,3,4,5,12,8,15,17,20,16)
	MR_init_label10(check_hlds__modecheck_goal__modecheck_goal_from_ground_term_scope_6_0,22,23,24,7,29,31,32,28,36,39)
	MR_init_label4(check_hlds__modecheck_goal__modecheck_goal_from_ground_term_scope_6_0,35,41,42,43)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'modecheck_goal_from_ground_term_scope'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__modecheck_goal__modecheck_goal_from_ground_term_scope_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(5) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_instmap_2_0,
		check_hlds__modecheck_goal__modecheck_goal_from_ground_term_scope_6_0_i2);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_from_ground_term_scope_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(hlds__instmap__instmap_lookup_var_3_0,
		check_hlds__modecheck_goal__modecheck_goal_from_ground_term_scope_6_0_i3);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_from_ground_term_scope_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_varset_2_0,
		check_hlds__modecheck_goal__modecheck_goal_from_ground_term_scope_6_0_i4);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_from_ground_term_scope_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(check_hlds__modecheck_goal__modecheck_specializable_ground_term_4_0,
		check_hlds__modecheck_goal__modecheck_goal_from_ground_term_scope_6_0_i5);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_from_ground_term_scope_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__modecheck_goal__modecheck_goal_from_ground_term_scope_6_0_i7);
	}
	if (MR_LTAGS_TESTR(MR_sv(4),0,0)) {
		MR_GOTO_LAB(check_hlds__modecheck_goal__modecheck_goal_from_ground_term_scope_6_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_sv(2);
	MR_tempr1 = MR_tfield(0, MR_tempr3, 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,1)) {
		MR_GOTO_LAB(check_hlds__modecheck_goal__modecheck_goal_from_ground_term_scope_6_0_i8);
	}
	MR_tempr2 = MR_tfield(3, MR_tempr1, 1);
	if (MR_INT_NE(MR_tempr2,0)) {
		MR_GOTO_LAB(check_hlds__modecheck_goal__modecheck_goal_from_ground_term_scope_6_0_i8);
	}
	MR_sv(1) = MR_tfield(0, MR_tempr3, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_tfield(3, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(list__reverse_2_0,
		check_hlds__modecheck_goal__modecheck_goal_from_ground_term_scope_6_0_i12);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_from_ground_term_scope_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_r3 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_r4 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(1);
	MR_r1 = MR_sv(3);
	MR_sv(1) = MR_tempr2;
	MR_GOTO_LAB(check_hlds__modecheck_goal__modecheck_goal_from_ground_term_scope_6_0_i15);
	}
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_from_ground_term_scope_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_sv(1) = MR_sv(2);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_from_ground_term_scope_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 1;
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_has_feature_2_0,
		check_hlds__modecheck_goal__modecheck_goal_from_ground_term_scope_6_0_i17);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_from_ground_term_scope_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__modecheck_goal__modecheck_goal_from_ground_term_scope_6_0_i16);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,8,0);
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(hlds__goal_util__attach_features_to_all_goals_4_0,
		check_hlds__modecheck_goal__modecheck_goal_from_ground_term_scope_6_0_i20);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_from_ground_term_scope_6_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r3 = MR_sv(5);
	MR_r1 = (MR_Integer) 0;
	MR_r2 = (MR_Word) MR_string_const("scope", 5);
	MR_np_call_localret_ent(check_hlds__mode_debug__mode_checkpoint_4_0,
		check_hlds__modecheck_goal__modecheck_goal_from_ground_term_scope_6_0_i22);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_from_ground_term_scope_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(5);
	MR_r1 = (MR_Integer) 0;
	MR_r2 = (MR_Word) MR_string_const("scope", 5);
	MR_np_call_localret_ent(check_hlds__mode_debug__mode_checkpoint_4_0,
		check_hlds__modecheck_goal__modecheck_goal_from_ground_term_scope_6_0_i22);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_from_ground_term_scope_6_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__modecheck_goal__modecheck_goal_4_0,
		check_hlds__modecheck_goal__modecheck_goal_from_ground_term_scope_6_0_i23);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_from_ground_term_scope_6_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Integer) 1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Word) MR_string_const("scope", 5);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__mode_debug__mode_checkpoint_4_0,
		check_hlds__modecheck_goal__modecheck_goal_from_ground_term_scope_6_0_i24);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_from_ground_term_scope_6_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_from_ground_term_scope_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(check_hlds__modecheck_goal__modecheck_goal_from_ground_term_scope_6_0_i28);
	}
	MR_sv(3) = MR_tfield(0, MR_tempr1, 0);
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	}
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_var_is_live_3_0,
		check_hlds__modecheck_goal__modecheck_goal_from_ground_term_scope_6_0_i29);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_from_ground_term_scope_6_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(check_hlds__modecheck_goal__modecheck_goal_from_ground_term_scope_6_0_i31);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_sv(5);
	MR_decr_sp_and_return(6);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_from_ground_term_scope_6_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tfield(0, MR_sv(2), 1);
	MR_r4 = MR_sv(5);
	MR_np_call_localret_ent(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_103_114_111_117_110_100_95_116_101_114_109_95_99_111_110_115_116_114_117_99_116_95_95_91_52_93_95_48_7_0,
		check_hlds__modecheck_goal__modecheck_goal_from_ground_term_scope_6_0_i32);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_from_ground_term_scope_6_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_from_ground_term_scope_6_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Integer) 1;
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_has_feature_2_0,
		check_hlds__modecheck_goal__modecheck_goal_from_ground_term_scope_6_0_i36);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_from_ground_term_scope_6_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__modecheck_goal__modecheck_goal_from_ground_term_scope_6_0_i35);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,8,0);
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(hlds__goal_util__attach_features_to_all_goals_4_0,
		check_hlds__modecheck_goal__modecheck_goal_from_ground_term_scope_6_0_i39);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_from_ground_term_scope_6_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(5);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = (MR_Word) MR_string_const("scope", 5);
	MR_np_call_localret_ent(check_hlds__mode_debug__mode_checkpoint_4_0,
		check_hlds__modecheck_goal__modecheck_goal_from_ground_term_scope_6_0_i41);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_from_ground_term_scope_6_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(5);
	MR_sv(1) = MR_sv(2);
	MR_r1 = (MR_Integer) 0;
	MR_r2 = (MR_Word) MR_string_const("scope", 5);
	MR_np_call_localret_ent(check_hlds__mode_debug__mode_checkpoint_4_0,
		check_hlds__modecheck_goal__modecheck_goal_from_ground_term_scope_6_0_i41);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_from_ground_term_scope_6_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__modecheck_goal__modecheck_goal_4_0,
		check_hlds__modecheck_goal__modecheck_goal_from_ground_term_scope_6_0_i42);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_from_ground_term_scope_6_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Integer) 1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Word) MR_string_const("scope", 5);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__mode_debug__mode_checkpoint_4_0,
		check_hlds__modecheck_goal__modecheck_goal_from_ground_term_scope_6_0_i43);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_from_ground_term_scope_6_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__list__det_head_1_0);
MR_decl_entry(fn__list__det_tail_1_0);
MR_decl_entry(fn__parse_tree__builtin_lib_types__io_state_type_0_0);
MR_decl_entry(__Unify___parse_tree__prog_data__mer_type_0_0);
MR_decl_entry(fn__parse_tree__builtin_lib_types__io_io_type_0_0);
MR_decl_entry(require__expect_4_0);
MR_decl_entry(fn__parse_tree__builtin_lib_types__stm_atomic_type_0_0);

MR_BEGIN_MODULE(check_hlds__modecheck_goal_module26)
	MR_init_entry1(check_hlds__modecheck_goal__modecheck_goal_shorthand_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__modecheck_goal__modecheck_goal_shorthand_5_0);
	MR_init_label10(check_hlds__modecheck_goal__modecheck_goal_shorthand_5_0,4,6,7,8,9,10,11,14,16,17)
	MR_init_label10(check_hlds__modecheck_goal__modecheck_goal_shorthand_5_0,18,19,20,21,22,27,28,30,31,25)
	MR_init_label10(check_hlds__modecheck_goal__modecheck_goal_shorthand_5_0,23,35,36,34,41,42,43,44,45,47)
	MR_init_label7(check_hlds__modecheck_goal__modecheck_goal_shorthand_5_0,48,50,3,55,56,59,54)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'modecheck_goal_shorthand'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__modecheck_goal__modecheck_goal_shorthand_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(check_hlds__modecheck_goal__modecheck_goal_shorthand_5_0_i3);
	}
	MR_incr_sp(14);
	MR_sv(14) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_sv(3) = MR_tfield(1, MR_r1, 2);
	MR_sv(4) = MR_tfield(1, MR_r1, 3);
	MR_sv(5) = MR_tfield(1, MR_r1, 4);
	MR_sv(6) = MR_tfield(1, MR_r1, 5);
	MR_sv(7) = MR_tfield(1, MR_r1, 6);
	MR_r1 = (MR_Integer) 0;
	MR_r2 = (MR_Word) MR_string_const("atomic", 6);
	MR_np_call_localret_ent(check_hlds__mode_debug__mode_checkpoint_4_0,
		check_hlds__modecheck_goal__modecheck_goal_shorthand_5_0_i4);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_shorthand_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(5);
	MR_tfield(1, MR_r2, 1) = MR_sv(6);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_sv(5) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_nonlocals_1_0,
		check_hlds__modecheck_goal__modecheck_goal_shorthand_5_0_i6);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_shorthand_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_sv(6) = MR_tfield(1, MR_r2, 0);
	MR_sv(8) = MR_tfield(1, MR_r2, 1);
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_instmap_2_0,
		check_hlds__modecheck_goal__modecheck_goal_shorthand_5_0_i7);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_shorthand_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(5);
	}
	MR_np_call_localret_ent(check_hlds__modecheck_goal__modecheck_goal_4_0,
		check_hlds__modecheck_goal__modecheck_goal_shorthand_5_0_i8);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_shorthand_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_sv(9) = MR_r2;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_instmap_2_0,
		check_hlds__modecheck_goal__modecheck_goal_shorthand_5_0_i9);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_shorthand_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(9);
	}
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_set_instmap_3_0,
		check_hlds__modecheck_goal__modecheck_goal_shorthand_5_0_i10);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_shorthand_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__modecheck_goal__modecheck_orelse_list_5_0,
		check_hlds__modecheck_goal__modecheck_goal_shorthand_5_0_i11);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_shorthand_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(6);
	MR_tfield(1, MR_tempr2, 1) = MR_r2;
	MR_sv(5) = MR_tempr1;
	MR_sv(6) = MR_tempr2;
	MR_tempr3 = MR_r3;
	MR_sv(9) = MR_tempr3;
	MR_r1 = MR_tempr3;
	}
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_var_types_2_0,
		check_hlds__modecheck_goal__modecheck_goal_shorthand_5_0_i14);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_shorthand_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_sv(11) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_sv(12) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(fn__set__to_sorted_list_1_0,
		check_hlds__modecheck_goal__modecheck_goal_shorthand_5_0_i16);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_shorthand_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(9);
	MR_np_call_localret_ent(check_hlds__modecheck_goal__handle_solver_vars_in_disjs_8_0,
		check_hlds__modecheck_goal__modecheck_goal_shorthand_5_0_i17);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_shorthand_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_sv(9) = MR_r3;
	MR_sv(10) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(fn__list__det_head_1_0,
		check_hlds__modecheck_goal__modecheck_goal_shorthand_5_0_i18);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_shorthand_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__list__det_tail_1_0,
		check_hlds__modecheck_goal__modecheck_goal_shorthand_5_0_i19);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_shorthand_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(6);
	MR_r3 = (MR_Integer) 2;
	MR_r4 = MR_sv(9);
	}
	MR_np_call_localret_ent(hlds__instmap__instmap_merge_5_0,
		check_hlds__modecheck_goal__modecheck_goal_shorthand_5_0_i20);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_shorthand_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(6) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(10) = MR_r1;
	MR_sv(13) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(12);
	MR_r3 = MR_sv(13);
	MR_r4 = MR_sv(8);
	MR_r5 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		check_hlds__modecheck_goal__modecheck_goal_shorthand_5_0_i21);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_shorthand_5_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(12);
	MR_r3 = MR_sv(13);
	MR_r4 = MR_sv(8);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		check_hlds__modecheck_goal__modecheck_goal_shorthand_5_0_i22);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_shorthand_5_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_np_call_localret_ent(fn__parse_tree__builtin_lib_types__io_state_type_0_0,
		check_hlds__modecheck_goal__modecheck_goal_shorthand_5_0_i27);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_shorthand_5_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(__Unify___parse_tree__prog_data__mer_type_0_0,
		check_hlds__modecheck_goal__modecheck_goal_shorthand_5_0_i28);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_shorthand_5_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(check_hlds__modecheck_goal__modecheck_goal_shorthand_5_0_i25);
	}
	MR_np_call_localret_ent(fn__parse_tree__builtin_lib_types__io_io_type_0_0,
		check_hlds__modecheck_goal__modecheck_goal_shorthand_5_0_i30);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_shorthand_5_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(__Unify___parse_tree__prog_data__mer_type_0_0,
		check_hlds__modecheck_goal__modecheck_goal_shorthand_5_0_i31);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_shorthand_5_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__modecheck_goal__modecheck_goal_shorthand_5_0_i23);
	}
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_shorthand_5_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_COMMON(6,1);
	MR_tfield(0, MR_r1, 1) = (MR_Word) MR_ENTRY_AP(check_hlds__modecheck_goal__IntroducedFrom__pred__modecheck_goal_shorthand__1459__1_2_0);
	MR_tfield(0, MR_r1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_r1, 3) = MR_sv(6);
	MR_tfield(0, MR_r1, 4) = MR_sv(9);
	MR_sv(6) = (MR_Integer) 1;
	MR_r2 = (MR_Word) MR_string_const("check_hlds.modecheck_goal", 25);
	MR_r3 = (MR_Word) MR_string_const("predicate \140check_hlds.modecheck_goal.modecheck_goal_shorthand\'/5", 64);
	MR_r4 = (MR_Word) MR_string_const("atomic_goal: mismatched outer var type", 38);
	MR_np_call_localret_ent(require__expect_4_0,
		check_hlds__modecheck_goal__modecheck_goal_shorthand_5_0_i42);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_shorthand_5_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(fn__parse_tree__builtin_lib_types__stm_atomic_type_0_0,
		check_hlds__modecheck_goal__modecheck_goal_shorthand_5_0_i35);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_shorthand_5_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(__Unify___parse_tree__prog_data__mer_type_0_0,
		check_hlds__modecheck_goal__modecheck_goal_shorthand_5_0_i36);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_shorthand_5_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__modecheck_goal__modecheck_goal_shorthand_5_0_i34);
	}
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_COMMON(6,2);
	MR_tfield(0, MR_r1, 1) = (MR_Word) MR_ENTRY_AP(check_hlds__modecheck_goal__IntroducedFrom__pred__modecheck_goal_shorthand__1459__1_2_0);
	MR_tfield(0, MR_r1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_r1, 3) = MR_sv(6);
	MR_tfield(0, MR_r1, 4) = MR_sv(9);
	MR_sv(6) = (MR_Integer) 2;
	MR_r2 = (MR_Word) MR_string_const("check_hlds.modecheck_goal", 25);
	MR_r3 = (MR_Word) MR_string_const("predicate \140check_hlds.modecheck_goal.modecheck_goal_shorthand\'/5", 64);
	MR_r4 = (MR_Word) MR_string_const("atomic_goal: mismatched outer var type", 38);
	MR_np_call_localret_ent(require__expect_4_0,
		check_hlds__modecheck_goal__modecheck_goal_shorthand_5_0_i42);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_shorthand_5_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("check_hlds.modecheck_goal", 25);
	MR_r2 = (MR_Word) MR_string_const("predicate \140check_hlds.modecheck_goal.modecheck_goal_shorthand\'/5", 64);
	MR_r3 = (MR_Word) MR_string_const("atomic_goal: invalid outer var type", 35);
	MR_np_call_localret_ent(require__unexpected_3_0,
		check_hlds__modecheck_goal__modecheck_goal_shorthand_5_0_i41);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_shorthand_5_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(require__expect_4_0,
		check_hlds__modecheck_goal__modecheck_goal_shorthand_5_0_i42);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_shorthand_5_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(9) = MR_tfield(0, MR_tempr1, 1);
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(12);
	MR_r3 = MR_sv(13);
	MR_r4 = MR_sv(8);
	MR_r5 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		check_hlds__modecheck_goal__modecheck_goal_shorthand_5_0_i43);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_shorthand_5_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(8);
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(12);
	MR_r3 = MR_sv(13);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(9);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		check_hlds__modecheck_goal__modecheck_goal_shorthand_5_0_i44);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_shorthand_5_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_np_call_localret_ent(fn__parse_tree__builtin_lib_types__stm_atomic_type_0_0,
		check_hlds__modecheck_goal__modecheck_goal_shorthand_5_0_i45);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_shorthand_5_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(6,3);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(check_hlds__modecheck_goal__IntroducedFrom__pred__modecheck_goal_shorthand__1464__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(8);
	MR_tfield(0, MR_tempr1, 4) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("check_hlds.modecheck_goal", 25);
	MR_r3 = (MR_Word) MR_string_const("predicate \140check_hlds.modecheck_goal.modecheck_goal_shorthand\'/5", 64);
	MR_r4 = (MR_Word) MR_string_const("atomic_goal: invalid inner var type", 35);
	}
	MR_np_call_localret_ent(require__expect_4_0,
		check_hlds__modecheck_goal__modecheck_goal_shorthand_5_0_i47);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_shorthand_5_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__parse_tree__builtin_lib_types__stm_atomic_type_0_0,
		check_hlds__modecheck_goal__modecheck_goal_shorthand_5_0_i48);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_shorthand_5_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(6,4);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(check_hlds__modecheck_goal__IntroducedFrom__pred__modecheck_goal_shorthand__1466__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(9);
	MR_tfield(0, MR_tempr1, 4) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("check_hlds.modecheck_goal", 25);
	MR_r3 = (MR_Word) MR_string_const("predicate \140check_hlds.modecheck_goal.modecheck_goal_shorthand\'/5", 64);
	MR_r4 = (MR_Word) MR_string_const("atomic_goal: invalid inner var type", 35);
	}
	MR_np_call_localret_ent(require__expect_4_0,
		check_hlds__modecheck_goal__modecheck_goal_shorthand_5_0_i50);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_shorthand_5_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 7);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 2) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 3) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 4) = MR_sv(5);
	MR_tfield(1, MR_tempr1, 5) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 6) = MR_sv(7);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_sv(1) = MR_tempr2;
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 7;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_r1 = (MR_Integer) 1;
	MR_r2 = (MR_Word) MR_string_const("atomic", 6);
	MR_r3 = MR_sv(10);
	}
	MR_np_call_localret_ent(check_hlds__mode_debug__mode_checkpoint_4_0,
		check_hlds__modecheck_goal__modecheck_goal_shorthand_5_0_i59);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_shorthand_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(check_hlds__modecheck_goal__modecheck_goal_shorthand_5_0_i54);
	}
	MR_incr_sp(14);
	MR_sv(14) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(2, MR_r1, 0);
	MR_sv(2) = MR_tfield(2, MR_r1, 1);
	MR_sv(3) = MR_tfield(2, MR_r1, 2);
	MR_r1 = (MR_Integer) 0;
	MR_r2 = (MR_Word) MR_string_const("try", 3);
	MR_np_call_localret_ent(check_hlds__mode_debug__mode_checkpoint_4_0,
		check_hlds__modecheck_goal__modecheck_goal_shorthand_5_0_i55);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_shorthand_5_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__modecheck_goal__modecheck_goal_4_0,
		check_hlds__modecheck_goal__modecheck_goal_shorthand_5_0_i56);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_shorthand_5_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 3);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(2, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(2, MR_tempr1, 2) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_sv(1) = MR_tempr2;
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 7;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_r1 = (MR_Integer) 1;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Word) MR_string_const("try", 3);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__mode_debug__mode_checkpoint_4_0,
		check_hlds__modecheck_goal__modecheck_goal_shorthand_5_0_i59);
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_shorthand_5_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(14);
	}
MR_def_label(check_hlds__modecheck_goal__modecheck_goal_shorthand_5_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("check_hlds.modecheck_goal", 25);
	MR_r2 = (MR_Word) MR_string_const("predicate \140check_hlds.modecheck_goal.modecheck_goal_shorthand\'/5", 64);
	MR_r3 = (MR_Word) MR_string_const("bi_implication", 14);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__modecheck_goal_module27)
	MR_init_entry1(check_hlds__modecheck_goal__modecheck_orelse_list_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__modecheck_goal__modecheck_orelse_list_5_0);
	MR_init_label6(check_hlds__modecheck_goal__modecheck_orelse_list_5_0,21,4,5,6,7,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'modecheck_orelse_list'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__modecheck_goal__modecheck_orelse_list_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__modecheck_goal__modecheck_orelse_list_5_0_i21);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_tempr1;
	MR_proceed();
	}
MR_def_label(check_hlds__modecheck_goal__modecheck_orelse_list_5_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_tfield(1, MR_r1, 0);
	MR_sv(3) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_instmap_2_0,
		check_hlds__modecheck_goal__modecheck_orelse_list_5_0_i4);
MR_def_label(check_hlds__modecheck_goal__modecheck_orelse_list_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(1);
	}
	MR_np_call_localret_ent(check_hlds__modecheck_goal__modecheck_goal_4_0,
		check_hlds__modecheck_goal__modecheck_orelse_list_5_0_i5);
MR_def_label(check_hlds__modecheck_goal__modecheck_orelse_list_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_instmap_2_0,
		check_hlds__modecheck_goal__modecheck_orelse_list_5_0_i6);
MR_def_label(check_hlds__modecheck_goal__modecheck_orelse_list_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(4);
	}
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_set_instmap_3_0,
		check_hlds__modecheck_goal__modecheck_orelse_list_5_0_i7);
MR_def_label(check_hlds__modecheck_goal__modecheck_orelse_list_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_localcall_lab(check_hlds__modecheck_goal__modecheck_orelse_list_5_0,
		check_hlds__modecheck_goal__modecheck_orelse_list_5_0_i8);
MR_def_label(check_hlds__modecheck_goal__modecheck_orelse_list_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr2, 1) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	MR_decr_sp_and_return(5);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__hlds__hlds_goal__goal_info_get_instmap_delta_1_0);
MR_decl_entry(hlds__instmap__instmap_delta_changed_vars_2_0);
MR_decl_entry(hlds__instmap__instmap_delta_set_vars_same_4_0);
MR_decl_entry(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0);
MR_decl_entry(hlds__instmap__instmap_delta_set_var_4_0);

MR_BEGIN_MODULE(check_hlds__modecheck_goal_module28)
	MR_init_entry1(check_hlds__modecheck_goal__set_large_flat_constructs_to_ground_in_goal_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__modecheck_goal__set_large_flat_constructs_to_ground_in_goal_3_0);
	MR_init_label10(check_hlds__modecheck_goal__set_large_flat_constructs_to_ground_in_goal_3_0,3,180,7,9,10,12,14,15,16,4)
	MR_init_label10(check_hlds__modecheck_goal__set_large_flat_constructs_to_ground_in_goal_3_0,18,19,20,23,24,25,26,27,33,35)
	MR_init_label10(check_hlds__modecheck_goal__set_large_flat_constructs_to_ground_in_goal_3_0,37,38,39,31,30,28,45,66,21,47)
	MR_init_label1(check_hlds__modecheck_goal__set_large_flat_constructs_to_ground_in_goal_3_0,68)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'set_large_flat_constructs_to_ground_in_goal'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__modecheck_goal__set_large_flat_constructs_to_ground_in_goal_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_tfield(0, MR_r2, 0);
	if (MR_PTAG_TESTR(MR_r3,0)) {
		MR_GOTO_LAB(check_hlds__modecheck_goal__set_large_flat_constructs_to_ground_in_goal_3_0_i3);
	}
	MR_r1 = MR_r2;
	MR_proceed();
MR_def_label(check_hlds__modecheck_goal__set_large_flat_constructs_to_ground_in_goal_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,1)) {
		MR_GOTO_LAB(check_hlds__modecheck_goal__set_large_flat_constructs_to_ground_in_goal_3_0_i4);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(3, MR_r3, 1);
	if (MR_INT_NE(MR_tempr1,1)) {
		MR_GOTO_LAB(check_hlds__modecheck_goal__set_large_flat_constructs_to_ground_in_goal_3_0_i180);
	}
	MR_r1 = MR_r2;
	MR_proceed();
	}
MR_def_label(check_hlds__modecheck_goal__set_large_flat_constructs_to_ground_in_goal_3_0,180)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(0, MR_r2, 1);
	MR_r2 = MR_tfield(3, MR_r3, 2);
	MR_np_call_localret_ent(check_hlds__modecheck_goal__set_large_flat_constructs_to_ground_in_goals_3_0,
		check_hlds__modecheck_goal__set_large_flat_constructs_to_ground_in_goal_3_0_i7);
MR_def_label(check_hlds__modecheck_goal__set_large_flat_constructs_to_ground_in_goal_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_sv(4) = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_sv(2);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_instmap_delta_1_0,
		check_hlds__modecheck_goal__set_large_flat_constructs_to_ground_in_goal_3_0_i9);
MR_def_label(check_hlds__modecheck_goal__set_large_flat_constructs_to_ground_in_goal_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(hlds__instmap__instmap_delta_changed_vars_2_0,
		check_hlds__modecheck_goal__set_large_flat_constructs_to_ground_in_goal_3_0_i10);
MR_def_label(check_hlds__modecheck_goal__set_large_flat_constructs_to_ground_in_goal_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr2;
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_116_101_114_115_101_99_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		check_hlds__modecheck_goal__set_large_flat_constructs_to_ground_in_goal_3_0_i12);
MR_def_label(check_hlds__modecheck_goal__set_large_flat_constructs_to_ground_in_goal_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(3,4,1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__set__to_sorted_list_1_0,
		check_hlds__modecheck_goal__set_large_flat_constructs_to_ground_in_goal_3_0_i14);
MR_def_label(check_hlds__modecheck_goal__set_large_flat_constructs_to_ground_in_goal_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(hlds__instmap__instmap_delta_set_vars_same_4_0,
		check_hlds__modecheck_goal__set_large_flat_constructs_to_ground_in_goal_3_0_i15);
MR_def_label(check_hlds__modecheck_goal__set_large_flat_constructs_to_ground_in_goal_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_instmap_delta_3_0,
		check_hlds__modecheck_goal__set_large_flat_constructs_to_ground_in_goal_3_0_i16);
MR_def_label(check_hlds__modecheck_goal__set_large_flat_constructs_to_ground_in_goal_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(4);
	MR_tfield(0, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(6);
MR_def_label(check_hlds__modecheck_goal__set_large_flat_constructs_to_ground_in_goal_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,2)) {
		MR_GOTO_LAB(check_hlds__modecheck_goal__set_large_flat_constructs_to_ground_in_goal_3_0_i18);
	}
	MR_r1 = MR_r2;
	MR_proceed();
MR_def_label(check_hlds__modecheck_goal__set_large_flat_constructs_to_ground_in_goal_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,6)) {
		MR_GOTO_LAB(check_hlds__modecheck_goal__set_large_flat_constructs_to_ground_in_goal_3_0_i19);
	}
	MR_r1 = MR_r2;
	MR_proceed();
MR_def_label(check_hlds__modecheck_goal__set_large_flat_constructs_to_ground_in_goal_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,4)) {
		MR_GOTO_LAB(check_hlds__modecheck_goal__set_large_flat_constructs_to_ground_in_goal_3_0_i20);
	}
	MR_r1 = MR_r2;
	MR_proceed();
MR_def_label(check_hlds__modecheck_goal__set_large_flat_constructs_to_ground_in_goal_3_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,5)) {
		MR_GOTO_LAB(check_hlds__modecheck_goal__set_large_flat_constructs_to_ground_in_goal_3_0_i21);
	}
	MR_r4 = MR_tfield(3, MR_r3, 1);
	if (MR_PTAG_TESTR(MR_r4,0)) {
		MR_GOTO_LAB(check_hlds__modecheck_goal__set_large_flat_constructs_to_ground_in_goal_3_0_i23);
	}
	MR_r1 = MR_r2;
	MR_proceed();
MR_def_label(check_hlds__modecheck_goal__set_large_flat_constructs_to_ground_in_goal_3_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r4,2)) {
		MR_GOTO_LAB(check_hlds__modecheck_goal__set_large_flat_constructs_to_ground_in_goal_3_0_i24);
	}
	MR_r1 = MR_r2;
	MR_proceed();
MR_def_label(check_hlds__modecheck_goal__set_large_flat_constructs_to_ground_in_goal_3_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r4,1)) {
		MR_GOTO_LAB(check_hlds__modecheck_goal__set_large_flat_constructs_to_ground_in_goal_3_0_i25);
	}
	MR_r1 = MR_r2;
	MR_proceed();
MR_def_label(check_hlds__modecheck_goal__set_large_flat_constructs_to_ground_in_goal_3_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r4,3,3)) {
		MR_GOTO_LAB(check_hlds__modecheck_goal__set_large_flat_constructs_to_ground_in_goal_3_0_i26);
	}
	MR_r1 = MR_r2;
	MR_proceed();
MR_def_label(check_hlds__modecheck_goal__set_large_flat_constructs_to_ground_in_goal_3_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r4,3,2)) {
		MR_GOTO_LAB(check_hlds__modecheck_goal__set_large_flat_constructs_to_ground_in_goal_3_0_i27);
	}
	MR_r1 = MR_r2;
	MR_proceed();
MR_def_label(check_hlds__modecheck_goal__set_large_flat_constructs_to_ground_in_goal_3_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r4,3,4)) {
		MR_GOTO_LAB(check_hlds__modecheck_goal__set_large_flat_constructs_to_ground_in_goal_3_0_i28);
	}
	MR_r5 = MR_tfield(3, MR_r4, 2);
	if (MR_INT_NE(MR_r5,0)) {
		MR_GOTO_LAB(check_hlds__modecheck_goal__set_large_flat_constructs_to_ground_in_goal_3_0_i30);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_tfield(0, MR_r2, 1);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r4;
	MR_sv(3) = MR_tempr2;
	MR_sv(4) = MR_tfield(3, MR_r3, 2);
	MR_sv(5) = MR_tfield(3, MR_tempr2, 1);
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		check_hlds__modecheck_goal__set_large_flat_constructs_to_ground_in_goal_3_0_i33);
MR_def_label(check_hlds__modecheck_goal__set_large_flat_constructs_to_ground_in_goal_3_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__modecheck_goal__set_large_flat_constructs_to_ground_in_goal_3_0_i31);
	}
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_instmap_delta_1_0,
		check_hlds__modecheck_goal__set_large_flat_constructs_to_ground_in_goal_3_0_i35);
MR_def_label(check_hlds__modecheck_goal__set_large_flat_constructs_to_ground_in_goal_3_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = (MR_Word) MR_TAG_COMMON(3,4,1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__instmap__instmap_delta_set_var_4_0,
		check_hlds__modecheck_goal__set_large_flat_constructs_to_ground_in_goal_3_0_i37);
MR_def_label(check_hlds__modecheck_goal__set_large_flat_constructs_to_ground_in_goal_3_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_instmap_delta_3_0,
		check_hlds__modecheck_goal__set_large_flat_constructs_to_ground_in_goal_3_0_i38);
MR_def_label(check_hlds__modecheck_goal__set_large_flat_constructs_to_ground_in_goal_3_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_tempr2 = MR_sv(4);
	MR_sv(2) = MR_tfield(0, MR_tempr2, 0);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tfield(0, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_instmap_delta_3_0,
		check_hlds__modecheck_goal__set_large_flat_constructs_to_ground_in_goal_3_0_i39);
MR_def_label(check_hlds__modecheck_goal__set_large_flat_constructs_to_ground_in_goal_3_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(2);
	MR_tfield(0, MR_r2, 1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(3);
	MR_tfield(3, MR_tempr1, 2) = MR_r2;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_tfield(0, MR_r1, 1) = MR_sv(1);
	MR_decr_sp_and_return(6);
	}
MR_def_label(check_hlds__modecheck_goal__set_large_flat_constructs_to_ground_in_goal_3_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(6);
MR_def_label(check_hlds__modecheck_goal__set_large_flat_constructs_to_ground_in_goal_3_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r5,1)) {
		MR_GOTO_LAB(check_hlds__modecheck_goal__set_large_flat_constructs_to_ground_in_goal_3_0_i66);
	}
	MR_r1 = MR_r2;
	MR_proceed();
MR_def_label(check_hlds__modecheck_goal__set_large_flat_constructs_to_ground_in_goal_3_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r4,3,1)) {
		MR_GOTO_LAB(check_hlds__modecheck_goal__set_large_flat_constructs_to_ground_in_goal_3_0_i45);
	}
	MR_r1 = MR_r2;
	MR_proceed();
MR_def_label(check_hlds__modecheck_goal__set_large_flat_constructs_to_ground_in_goal_3_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r4,3,0)) {
		MR_GOTO_LAB(check_hlds__modecheck_goal__set_large_flat_constructs_to_ground_in_goal_3_0_i68);
	}
MR_def_label(check_hlds__modecheck_goal__set_large_flat_constructs_to_ground_in_goal_3_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_proceed();
MR_def_label(check_hlds__modecheck_goal__set_large_flat_constructs_to_ground_in_goal_3_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,7)) {
		MR_GOTO_LAB(check_hlds__modecheck_goal__set_large_flat_constructs_to_ground_in_goal_3_0_i47);
	}
	MR_r1 = MR_r2;
	MR_proceed();
MR_def_label(check_hlds__modecheck_goal__set_large_flat_constructs_to_ground_in_goal_3_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,3)) {
		MR_GOTO_LAB(check_hlds__modecheck_goal__set_large_flat_constructs_to_ground_in_goal_3_0_i66);
	}
MR_def_label(check_hlds__modecheck_goal__set_large_flat_constructs_to_ground_in_goal_3_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__modecheck_goal_module29)
	MR_init_entry1(check_hlds__modecheck_goal__set_large_flat_constructs_to_ground_in_goals_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__modecheck_goal__set_large_flat_constructs_to_ground_in_goals_3_0);
	MR_init_label3(check_hlds__modecheck_goal__set_large_flat_constructs_to_ground_in_goals_3_0,17,4,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'set_large_flat_constructs_to_ground_in_goals'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__modecheck_goal__set_large_flat_constructs_to_ground_in_goals_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(check_hlds__modecheck_goal__set_large_flat_constructs_to_ground_in_goals_3_0_i17);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(check_hlds__modecheck_goal__set_large_flat_constructs_to_ground_in_goals_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(1, MR_r2, 1);
	MR_r2 = MR_tfield(1, MR_r2, 0);
	MR_np_call_localret_ent(check_hlds__modecheck_goal__set_large_flat_constructs_to_ground_in_goal_3_0,
		check_hlds__modecheck_goal__set_large_flat_constructs_to_ground_in_goals_3_0_i4);
MR_def_label(check_hlds__modecheck_goal__set_large_flat_constructs_to_ground_in_goals_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	}
	MR_np_localcall_lab(check_hlds__modecheck_goal__set_large_flat_constructs_to_ground_in_goals_3_0,
		check_hlds__modecheck_goal__set_large_flat_constructs_to_ground_in_goals_3_0_i5);
MR_def_label(check_hlds__modecheck_goal__set_large_flat_constructs_to_ground_in_goals_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(1);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__modecheck_goal_module30)
	MR_init_entry1(check_hlds__modecheck_goal__set_large_flat_constructs_to_ground_in_case_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__modecheck_goal__set_large_flat_constructs_to_ground_in_case_3_0);
	MR_init_label1(check_hlds__modecheck_goal__set_large_flat_constructs_to_ground_in_case_3_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'set_large_flat_constructs_to_ground_in_case'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__modecheck_goal__set_large_flat_constructs_to_ground_in_case_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(0, MR_r2, 0);
	MR_sv(2) = MR_tfield(0, MR_r2, 1);
	MR_r2 = MR_tfield(0, MR_r2, 2);
	MR_np_call_localret_ent(check_hlds__modecheck_goal__set_large_flat_constructs_to_ground_in_goal_3_0,
		check_hlds__modecheck_goal__set_large_flat_constructs_to_ground_in_case_3_0_i2);
MR_def_label(check_hlds__modecheck_goal__set_large_flat_constructs_to_ground_in_case_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r2, 0) = MR_sv(1);
	MR_tfield(0, MR_r2, 1) = MR_sv(2);
	MR_tfield(0, MR_r2, 2) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(check_hlds__type_util__type_is_solver_type_with_auto_init_2_0);
MR_decl_entry(list__member_2_1);
MR_decl_entry(check_hlds__inst_match__inst_is_free_2_0);

MR_BEGIN_MODULE(check_hlds__modecheck_goal_module31)
	MR_init_entry1(check_hlds__modecheck_goal__solver_var_must_be_initialised_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__modecheck_goal__solver_var_must_be_initialised_4_0);
	MR_init_label6(check_hlds__modecheck_goal__solver_var_must_be_initialised_4_0,4,5,7,8,11,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'solver_var_must_be_initialised'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__modecheck_goal__solver_var_must_be_initialised_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(4) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(5) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(6));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(check_hlds__modecheck_goal__solver_var_must_be_initialised_4_0_i2);
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
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
		check_hlds__modecheck_goal__solver_var_must_be_initialised_4_0_i4);
MR_def_label(check_hlds__modecheck_goal__solver_var_must_be_initialised_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__type_util__type_is_solver_type_with_auto_init_2_0,
		check_hlds__modecheck_goal__solver_var_must_be_initialised_4_0_i5);
MR_def_label(check_hlds__modecheck_goal__solver_var_must_be_initialised_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__modecheck_goal__solver_var_must_be_initialised_4_0_i2);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__instmap, instmap);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(list__member_2_1,
		check_hlds__modecheck_goal__solver_var_must_be_initialised_4_0_i7);
MR_def_label(check_hlds__modecheck_goal__solver_var_must_be_initialised_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(hlds__instmap__instmap_lookup_var_3_0,
		check_hlds__modecheck_goal__solver_var_must_be_initialised_4_0_i8);
MR_def_label(check_hlds__modecheck_goal__solver_var_must_be_initialised_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__inst_match__inst_is_free_2_0,
		check_hlds__modecheck_goal__solver_var_must_be_initialised_4_0_i11);
MR_def_label(check_hlds__modecheck_goal__solver_var_must_be_initialised_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_restore_maxfr(MR_sv(6));
	MR_redoip_slot_word(MR_maxfr) = MR_sv(4);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(5);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(check_hlds__modecheck_goal__solver_var_must_be_initialised_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = MR_sv(4);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(5);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__modecheck_goal_module32)
	MR_init_entry1(check_hlds__modecheck_goal__solver_var_to_init_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__modecheck_goal__solver_var_to_init_3_0);
	MR_init_label1(check_hlds__modecheck_goal__solver_var_to_init_3_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'solver_var_to_init'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__modecheck_goal__solver_var_to_init_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(hlds__instmap__instmap_lookup_var_3_0,
		check_hlds__modecheck_goal__solver_var_to_init_3_0_i2);
MR_def_label(check_hlds__modecheck_goal__solver_var_to_init_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(check_hlds__inst_match__inst_is_free_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___parse_tree__prog_data__mer_inst_0_0);

MR_BEGIN_MODULE(check_hlds__modecheck_goal_module33)
	MR_init_entry1(__Unify___check_hlds__modecheck_goal__construct_var_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___check_hlds__modecheck_goal__construct_var_info_0_0);
	MR_init_label1(__Unify___check_hlds__modecheck_goal__construct_var_info_0_0,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___check_hlds__modecheck_goal__construct_var_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___check_hlds__modecheck_goal__construct_var_info_0_0_i6);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___parse_tree__prog_data__mer_inst_0_0);
MR_def_label(__Unify___check_hlds__modecheck_goal__construct_var_info_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___parse_tree__prog_data__mer_inst_0_0);

MR_BEGIN_MODULE(check_hlds__modecheck_goal_module34)
	MR_init_entry1(__Compare___check_hlds__modecheck_goal__construct_var_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___check_hlds__modecheck_goal__construct_var_info_0_0);
	MR_init_label2(__Compare___check_hlds__modecheck_goal__construct_var_info_0_0,3,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___check_hlds__modecheck_goal__construct_var_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___check_hlds__modecheck_goal__construct_var_info_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___check_hlds__modecheck_goal__construct_var_info_0_0_i2);
MR_def_label(__Compare___check_hlds__modecheck_goal__construct_var_info_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___check_hlds__modecheck_goal__construct_var_info_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___parse_tree__prog_data__mer_inst_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___tree234__tree234_2_0);

MR_BEGIN_MODULE(check_hlds__modecheck_goal_module35)
	MR_init_entry1(__Unify___check_hlds__modecheck_goal__construct_var_info_map_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___check_hlds__modecheck_goal__construct_var_info_map_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___check_hlds__modecheck_goal__construct_var_info_map_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(check_hlds__modecheck_goal, construct_var_info);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Unify___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___tree234__tree234_2_0);

MR_BEGIN_MODULE(check_hlds__modecheck_goal_module36)
	MR_init_entry1(__Compare___check_hlds__modecheck_goal__construct_var_info_map_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___check_hlds__modecheck_goal__construct_var_info_map_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___check_hlds__modecheck_goal__construct_var_info_map_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(check_hlds__modecheck_goal, construct_var_info);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Compare___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___list__list_1_0);

MR_BEGIN_MODULE(check_hlds__modecheck_goal_module37)
	MR_init_entry1(__Unify___check_hlds__modecheck_goal__ground_term_mode_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___check_hlds__modecheck_goal__ground_term_mode_0_0);
	MR_init_label3(__Unify___check_hlds__modecheck_goal__ground_term_mode_0_0,16,5,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___check_hlds__modecheck_goal__ground_term_mode_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___check_hlds__modecheck_goal__ground_term_mode_0_0_i16);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(__Unify___check_hlds__modecheck_goal__ground_term_mode_0_0_i5);
	}
	if (MR_PTAG_TESTR(MR_tempr2,0)) {
		MR_GOTO_LAB(__Unify___check_hlds__modecheck_goal__ground_term_mode_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	MR_r3 = MR_tfield(0, MR_tempr2, 0);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
	}
MR_def_label(__Unify___check_hlds__modecheck_goal__ground_term_mode_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___check_hlds__modecheck_goal__ground_term_mode_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___check_hlds__modecheck_goal__ground_term_mode_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_tfield(1, MR_sv(1), 0);
	MR_r3 = MR_tfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___check_hlds__modecheck_goal__ground_term_mode_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___list__list_1_0);

MR_BEGIN_MODULE(check_hlds__modecheck_goal_module38)
	MR_init_entry1(__Compare___check_hlds__modecheck_goal__ground_term_mode_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___check_hlds__modecheck_goal__ground_term_mode_0_0);
	MR_init_label5(__Compare___check_hlds__modecheck_goal__ground_term_mode_0_0,3,2,19,7,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___check_hlds__modecheck_goal__ground_term_mode_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___check_hlds__modecheck_goal__ground_term_mode_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___check_hlds__modecheck_goal__ground_term_mode_0_0_i2);
MR_def_label(__Compare___check_hlds__modecheck_goal__ground_term_mode_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___check_hlds__modecheck_goal__ground_term_mode_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),0)) {
		MR_GOTO_LAB(__Compare___check_hlds__modecheck_goal__ground_term_mode_0_0_i5);
	}
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___check_hlds__modecheck_goal__ground_term_mode_0_0_i7);
	}
MR_def_label(__Compare___check_hlds__modecheck_goal__ground_term_mode_0_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_mask_field(MR_sv(1), 0);
	MR_r3 = MR_mask_field(MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___check_hlds__modecheck_goal__ground_term_mode_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___check_hlds__modecheck_goal__ground_term_mode_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___check_hlds__modecheck_goal__ground_term_mode_0_0_i19);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__modecheck_goal_module39)
	MR_init_entry1(check_hlds__modecheck_goal__IntroducedFrom__pred__modecheck_goal_shorthand__1459__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__modecheck_goal__IntroducedFrom__pred__modecheck_goal_shorthand__1459__1_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__modecheck_goal_shorthand__1459__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__modecheck_goal__IntroducedFrom__pred__modecheck_goal_shorthand__1459__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(__Unify___parse_tree__prog_data__mer_type_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__modecheck_goal_module40)
	MR_init_entry1(check_hlds__modecheck_goal__IntroducedFrom__pred__modecheck_goal_shorthand__1464__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__modecheck_goal__IntroducedFrom__pred__modecheck_goal_shorthand__1464__1_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__modecheck_goal_shorthand__1464__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__modecheck_goal__IntroducedFrom__pred__modecheck_goal_shorthand__1464__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(__Unify___parse_tree__prog_data__mer_type_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__modecheck_goal_module41)
	MR_init_entry1(check_hlds__modecheck_goal__IntroducedFrom__pred__modecheck_goal_shorthand__1466__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__modecheck_goal__IntroducedFrom__pred__modecheck_goal_shorthand__1466__1_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__modecheck_goal_shorthand__1466__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__modecheck_goal__IntroducedFrom__pred__modecheck_goal_shorthand__1466__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(__Unify___parse_tree__prog_data__mer_type_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__init_1_0);
MR_decl_entry(hlds__hlds_goal__goal_info_set_determinism_3_0);

MR_BEGIN_MODULE(check_hlds__modecheck_goal_module42)
	MR_init_entry1(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_103_114_111_117_110_100_95_116_101_114_109_95_99_111_110_115_116_114_117_99_116_95_95_91_52_93_95_48_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_103_114_111_117_110_100_95_116_101_114_109_95_99_111_110_115_116_114_117_99_116_95_95_91_52_93_95_48_7_0);
	MR_init_label9(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_103_114_111_117_110_100_95_116_101_114_109_95_99_111_110_115_116_114_117_99_116_95_95_91_52_93_95_48_7_0,3,4,5,8,9,10,13,14,15)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__modecheck_ground_term_construct__[4]_0'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_103_114_111_117_110_100_95_116_101_114_109_95_99_111_110_115_116_114_117_99_116_95_95_91_52_93_95_48_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(4) = MR_r3;
	MR_sv(5) = MR_r4;
	MR_sv(3) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_sv(6) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_sv(7) = (MR_Word) MR_CTOR0_ADDR(check_hlds__modecheck_goal, construct_var_info);
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(map__init_1_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_103_114_111_117_110_100_95_116_101_114_109_95_99_111_110_115_116_114_117_99_116_95_95_91_52_93_95_48_7_0_i3);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_103_114_111_117_110_100_95_116_101_114_109_95_99_111_110_115_116_114_117_99_116_95_95_91_52_93_95_48_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_103_114_111_117_110_100_95_116_101_114_109_95_99_111_110_115_116_114_117_99_116_95_103_111_97_108_95_108_111_111_112_95_95_91_49_93_95_48_5_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_103_114_111_117_110_100_95_116_101_114_109_95_99_111_110_115_116_114_117_99_116_95_95_91_52_93_95_48_7_0_i4);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_103_114_111_117_110_100_95_116_101_114_109_95_99_111_110_115_116_114_117_99_116_95_95_91_52_93_95_48_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(3);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(1);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_103_114_111_117_110_100_95_116_101_114_109_95_99_111_110_115_116_114_117_99_116_95_95_91_52_93_95_48_7_0_i5);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_103_114_111_117_110_100_95_116_101_114_109_95_99_111_110_115_116_114_117_99_116_95_95_91_52_93_95_48_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(1);
	MR_tfield(0, MR_r2, 1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__hlds__instmap__instmap_delta_from_assoc_list_1_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_103_114_111_117_110_100_95_116_101_114_109_95_99_111_110_115_116_114_117_99_116_95_95_91_52_93_95_48_7_0_i8);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_103_114_111_117_110_100_95_116_101_114_109_95_99_111_110_115_116_114_117_99_116_95_95_91_52_93_95_48_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_instmap_delta_3_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_103_114_111_117_110_100_95_116_101_114_109_95_99_111_110_115_116_114_117_99_116_95_95_91_52_93_95_48_7_0_i9);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_103_114_111_117_110_100_95_116_101_114_109_95_99_111_110_115_116_114_117_99_116_95_95_91_52_93_95_48_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_determinism_3_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_103_114_111_117_110_100_95_116_101_114_109_95_99_111_110_115_116_114_117_99_116_95_95_91_52_93_95_48_7_0_i10);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_103_114_111_117_110_100_95_116_101_114_109_95_99_111_110_115_116_114_117_99_116_95_95_91_52_93_95_48_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 3);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_r2, 1) = (MR_Integer) 0;
	MR_tfield(3, MR_r2, 2) = MR_sv(2);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_sv(2) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r2;
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_sv(5);
	}
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_get_instmap_2_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_103_114_111_117_110_100_95_116_101_114_109_95_99_111_110_115_116_114_117_99_116_95_95_91_52_93_95_48_7_0_i13);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_103_114_111_117_110_100_95_116_101_114_109_95_99_111_110_115_116_114_117_99_116_95_95_91_52_93_95_48_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__instmap__instmap_set_var_4_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_103_114_111_117_110_100_95_116_101_114_109_95_99_111_110_115_116_114_117_99_116_95_95_91_52_93_95_48_7_0_i14);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_103_114_111_117_110_100_95_116_101_114_109_95_99_111_110_115_116_114_117_99_116_95_95_91_52_93_95_48_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(check_hlds__mode_info__mode_info_set_instmap_3_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_103_114_111_117_110_100_95_116_101_114_109_95_99_111_110_115_116_114_117_99_116_95_95_91_52_93_95_48_7_0_i15);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_103_114_111_117_110_100_95_116_101_114_109_95_99_111_110_115_116_114_117_99_116_95_95_91_52_93_95_48_7_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(8);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__modecheck_goal_module43)
	MR_init_entry1(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_103_114_111_117_110_100_95_116_101_114_109_95_99_111_110_115_116_114_117_99_116_95_103_111_97_108_95_108_111_111_112_95_95_91_49_93_95_48_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_103_114_111_117_110_100_95_116_101_114_109_95_99_111_110_115_116_114_117_99_116_95_103_111_97_108_95_108_111_111_112_95_95_91_49_93_95_48_5_0);
	MR_init_label9(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_103_114_111_117_110_100_95_116_101_114_109_95_99_111_110_115_116_114_117_99_116_95_103_111_97_108_95_108_111_111_112_95_95_91_49_93_95_48_5_0,57,8,19,20,21,24,4,26,27)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__modecheck_ground_term_construct_goal_loop__[1]_0'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_103_114_111_117_110_100_95_116_101_114_109_95_99_111_110_115_116_114_117_99_116_95_103_111_97_108_95_108_111_111_112_95_95_91_49_93_95_48_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_103_114_111_117_110_100_95_116_101_114_109_95_99_111_110_115_116_114_117_99_116_95_103_111_97_108_95_108_111_111_112_95_95_91_49_93_95_48_5_0_i57);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_103_114_111_117_110_100_95_116_101_114_109_95_99_111_110_115_116_114_117_99_116_95_103_111_97_108_95_108_111_111_112_95_95_91_49_93_95_48_5_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(1, MR_r1, 1);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	MR_tempr2 = MR_tfield(0, MR_tempr1, 0);
	if (MR_PTAG_TESTR(MR_tempr2,0)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_103_114_111_117_110_100_95_116_101_114_109_95_99_111_110_115_116_114_117_99_116_95_103_111_97_108_95_108_111_111_112_95_95_91_49_93_95_48_5_0_i4);
	}
	MR_tempr3 = MR_tfield(0, MR_tempr2, 1);
	if (MR_PTAG_TESTR(MR_tempr3,1)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_103_114_111_117_110_100_95_116_101_114_109_95_99_111_110_115_116_114_117_99_116_95_103_111_97_108_95_108_111_111_112_95_95_91_49_93_95_48_5_0_i4);
	}
	MR_tempr4 = MR_tfield(1, MR_tempr3, 1);
	if (MR_INT_NE(MR_tempr4,0)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_103_114_111_117_110_100_95_116_101_114_109_95_99_111_110_115_116_114_117_99_116_95_103_111_97_108_95_108_111_111_112_95_95_91_49_93_95_48_5_0_i4);
	}
	MR_sv(2) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(3) = MR_tfield(0, MR_tempr2, 0);
	MR_sv(4) = MR_tempr3;
	MR_sv(5) = MR_tfield(0, MR_tempr2, 4);
	MR_sv(6) = MR_tfield(1, MR_tempr3, 0);
	MR_sv(7) = MR_tfield(1, MR_tempr3, 2);
	MR_r1 = MR_sv(7);
	}
	MR_np_call_localret_ent(check_hlds__modecheck_goal__modecheck_ground_term_construct_arg_loop_5_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_103_114_111_117_110_100_95_116_101_114_109_95_99_111_110_115_116_114_117_99_116_95_103_111_97_108_95_108_111_111_112_95_95_91_49_93_95_48_5_0_i8);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_103_114_111_117_110_100_95_116_101_114_109_95_99_111_110_115_116_114_117_99_116_95_103_111_97_108_95_108_111_111_112_95_95_91_49_93_95_48_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tempr7 = MR_sv(6);
	MR_tfield(0, MR_tempr1, 0) = MR_tempr7;
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr3, 1) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr3, 2) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr2, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr4, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr4, 0) = MR_tempr3;
	MR_tfield(0, MR_tempr4, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr5, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr5, 0) = MR_tempr2;
	MR_tfield(0, MR_tempr5, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr6, 0, (MR_Integer) 7);
	MR_tempr8 = MR_sv(3);
	MR_tfield(0, MR_tempr6, 0) = MR_tempr8;
	MR_tfield(0, MR_tempr6, 1) = MR_tempr7;
	MR_tfield(0, MR_tempr6, 2) = MR_sv(7);
	MR_tfield(0, MR_tempr6, 3) = MR_r2;
	MR_tfield(0, MR_tempr6, 4) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr6, 5) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr6, 6) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 5);
	MR_tfield(0, MR_r2, 0) = MR_tempr8;
	MR_tfield(0, MR_r2, 1) = MR_sv(4);
	MR_tfield(0, MR_r2, 2) = MR_tempr5;
	MR_tfield(0, MR_r2, 3) = MR_tempr6;
	MR_tfield(0, MR_r2, 4) = MR_sv(5);
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_tempr8;
	MR_tfield(0, MR_tempr1, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_tfield(1, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(4) = MR_tempr3;
	MR_sv(5) = MR_r2;
	MR_sv(6) = MR_r3;
	}
	MR_np_call_localret_ent(fn__hlds__instmap__instmap_delta_from_assoc_list_1_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_103_114_111_117_110_100_95_116_101_114_109_95_99_111_110_115_116_114_117_99_116_95_103_111_97_108_95_108_111_111_112_95_95_91_49_93_95_48_5_0_i19);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_103_114_111_117_110_100_95_116_101_114_109_95_99_111_110_115_116_114_117_99_116_95_103_111_97_108_95_108_111_111_112_95_95_91_49_93_95_48_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_instmap_delta_3_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_103_114_111_117_110_100_95_116_101_114_109_95_99_111_110_115_116_114_117_99_116_95_103_111_97_108_95_108_111_111_112_95_95_91_49_93_95_48_5_0_i20);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_103_114_111_117_110_100_95_116_101_114_109_95_99_111_110_115_116_114_117_99_116_95_103_111_97_108_95_108_111_111_112_95_95_91_49_93_95_48_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_determinism_3_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_103_114_111_117_110_100_95_116_101_114_109_95_99_111_110_115_116_114_117_99_116_95_103_111_97_108_95_108_111_111_112_95_95_91_49_93_95_48_5_0_i21);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_103_114_111_117_110_100_95_116_101_114_109_95_99_111_110_115_116_114_117_99_116_95_103_111_97_108_95_108_111_111_112_95_95_91_49_93_95_48_5_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_sv(2) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(check_hlds__modecheck_goal, construct_var_info);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(6);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_103_114_111_117_110_100_95_116_101_114_109_95_99_111_110_115_116_114_117_99_116_95_103_111_97_108_95_108_111_111_112_95_95_91_49_93_95_48_5_0_i24);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_103_114_111_117_110_100_95_116_101_114_109_95_99_111_110_115_116_114_117_99_116_95_103_111_97_108_95_108_111_111_112_95_95_91_49_93_95_48_5_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_localcall_lab(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_103_114_111_117_110_100_95_116_101_114_109_95_99_111_110_115_116_114_117_99_116_95_103_111_97_108_95_108_111_111_112_95_95_91_49_93_95_48_5_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_103_114_111_117_110_100_95_116_101_114_109_95_99_111_110_115_116_114_117_99_116_95_103_111_97_108_95_108_111_111_112_95_95_91_49_93_95_48_5_0_i27);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_103_114_111_117_110_100_95_116_101_114_109_95_99_111_110_115_116_114_117_99_116_95_103_111_97_108_95_108_111_111_112_95_95_91_49_93_95_48_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("check_hlds.modecheck_goal", 25);
	MR_r2 = (MR_Word) MR_string_const("predicate \140check_hlds.modecheck_goal.modecheck_ground_term_construct_goal_loop\'/5", 81);
	MR_r3 = (MR_Word) MR_string_const("not rhs_functor unify", 21);
	MR_np_call_localret_ent(require__unexpected_3_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_103_114_111_117_110_100_95_116_101_114_109_95_99_111_110_115_116_114_117_99_116_95_103_111_97_108_95_108_111_111_112_95_95_91_49_93_95_48_5_0_i26);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_103_114_111_117_110_100_95_116_101_114_109_95_99_111_110_115_116_114_117_99_116_95_103_111_97_108_95_108_111_111_112_95_95_91_49_93_95_48_5_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_localcall_lab(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_103_114_111_117_110_100_95_116_101_114_109_95_99_111_110_115_116_114_117_99_116_95_103_111_97_108_95_108_111_111_112_95_95_91_49_93_95_48_5_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_103_114_111_117_110_100_95_116_101_114_109_95_99_111_110_115_116_114_117_99_116_95_103_111_97_108_95_108_111_111_112_95_95_91_49_93_95_48_5_0_i27);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_99_104_101_99_107_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_103_114_111_117_110_100_95_116_101_114_109_95_99_111_110_115_116_114_117_99_116_95_103_111_97_108_95_108_111_111_112_95_95_91_49_93_95_48_5_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(8);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__check_hlds__modecheck_goal_maybe_bunch_0(void)
{
	check_hlds__modecheck_goal_module0();
	check_hlds__modecheck_goal_module1();
	check_hlds__modecheck_goal_module2();
	check_hlds__modecheck_goal_module3();
	check_hlds__modecheck_goal_module4();
	check_hlds__modecheck_goal_module5();
	check_hlds__modecheck_goal_module6();
	check_hlds__modecheck_goal_module7();
	check_hlds__modecheck_goal_module8();
	check_hlds__modecheck_goal_module9();
	check_hlds__modecheck_goal_module10();
	check_hlds__modecheck_goal_module11();
	check_hlds__modecheck_goal_module12();
	check_hlds__modecheck_goal_module13();
	check_hlds__modecheck_goal_module14();
	check_hlds__modecheck_goal_module15();
	check_hlds__modecheck_goal_module16();
	check_hlds__modecheck_goal_module17();
	check_hlds__modecheck_goal_module18();
	check_hlds__modecheck_goal_module19();
	check_hlds__modecheck_goal_module20();
	check_hlds__modecheck_goal_module21();
	check_hlds__modecheck_goal_module22();
	check_hlds__modecheck_goal_module23();
	check_hlds__modecheck_goal_module24();
	check_hlds__modecheck_goal_module25();
	check_hlds__modecheck_goal_module26();
	check_hlds__modecheck_goal_module27();
	check_hlds__modecheck_goal_module28();
	check_hlds__modecheck_goal_module29();
	check_hlds__modecheck_goal_module30();
	check_hlds__modecheck_goal_module31();
	check_hlds__modecheck_goal_module32();
	check_hlds__modecheck_goal_module33();
	check_hlds__modecheck_goal_module34();
	check_hlds__modecheck_goal_module35();
	check_hlds__modecheck_goal_module36();
	check_hlds__modecheck_goal_module37();
	check_hlds__modecheck_goal_module38();
	check_hlds__modecheck_goal_module39();
}

static void mercury__check_hlds__modecheck_goal_maybe_bunch_1(void)
{
	check_hlds__modecheck_goal_module40();
	check_hlds__modecheck_goal_module41();
	check_hlds__modecheck_goal_module42();
	check_hlds__modecheck_goal_module43();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__check_hlds__modecheck_goal__init(void);
void mercury__check_hlds__modecheck_goal__init_type_tables(void);
void mercury__check_hlds__modecheck_goal__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__check_hlds__modecheck_goal__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__check_hlds__modecheck_goal__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__check_hlds__modecheck_goal__init_threadscope_string_table(void);
#endif

void mercury__check_hlds__modecheck_goal__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__check_hlds__modecheck_goal_maybe_bunch_0();
	mercury__check_hlds__modecheck_goal_maybe_bunch_1();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_check_hlds__modecheck_goal__type_ctor_info_construct_var_info_0,
		check_hlds__modecheck_goal__construct_var_info_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_check_hlds__modecheck_goal__type_ctor_info_construct_var_info_map_0,
		check_hlds__modecheck_goal__construct_var_info_map_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_check_hlds__modecheck_goal__type_ctor_info_ground_term_mode_0,
		check_hlds__modecheck_goal__ground_term_mode_0_0);
	mercury__check_hlds__modecheck_goal__init_debugger();
}

void mercury__check_hlds__modecheck_goal__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_check_hlds__modecheck_goal__type_ctor_info_construct_var_info_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_check_hlds__modecheck_goal__type_ctor_info_construct_var_info_map_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_check_hlds__modecheck_goal__type_ctor_info_ground_term_mode_0);
	}
}


void mercury__check_hlds__modecheck_goal__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__check_hlds__modecheck_goal__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__check_hlds__modecheck_goal);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__check_hlds__modecheck_goal__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__check_hlds__modecheck_goal__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
