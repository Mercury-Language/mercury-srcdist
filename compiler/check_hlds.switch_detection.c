/*
** Automatically generated from `switch_detection.m'
** by the Mercury compiler,
** version rotd-2009-11-10, configured for i686-pc-linux-gnu.
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
INIT mercury__check_hlds__switch_detection__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 136 "../library/io.int2"
#include "io.mh"

#line 27 "check_hlds.switch_detection.c"
#line 144 "../library/io.int2"
#include "string.mh"

#line 31 "check_hlds.switch_detection.c"
#line 33 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 35 "check_hlds.switch_detection.c"
#line 31 "../library/array.int2"
#include "array.mh"

#line 39 "check_hlds.switch_detection.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 43 "check_hlds.switch_detection.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 47 "check_hlds.switch_detection.c"
#line 48 "check_hlds.switch_detection.c"
#include "check_hlds.switch_detection.mh"

#line 51 "check_hlds.switch_detection.c"
#line 52 "check_hlds.switch_detection.c"
#ifndef CHECK_HLDS__SWITCH_DETECTION_DECL_GUARD
#define CHECK_HLDS__SWITCH_DETECTION_DECL_GUARD

#line 56 "check_hlds.switch_detection.c"
#line 57 "check_hlds.switch_detection.c"

#endif
#line 60 "check_hlds.switch_detection.c"

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
	MR_Word * f1[3];
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

struct mercury_type_2 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[7];
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];

struct mercury_type_3 {
	MR_Word * f1;
	MR_Code * f2;
	MR_Integer f3;
};
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];

struct mercury_type_4 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[4];
};
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_common_4[];

struct mercury_type_5 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[5];
};
MR_STATIC_LINKAGE const struct mercury_type_5 mercury_common_5[];

struct mercury_type_6 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[3];
};
MR_STATIC_LINKAGE const struct mercury_type_6 mercury_common_6[];

struct mercury_type_7 {
	MR_Integer f1;
	MR_Word * f2;
};
MR_STATIC_LINKAGE const struct mercury_type_7 mercury_common_7[];

struct mercury_type_8 {
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
	MR_Word * f5;
};
MR_STATIC_LINKAGE const struct mercury_type_8 mercury_common_8[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_check_hlds__switch_detection__type_ctor_info_again_0,
	mercury_data_check_hlds__switch_detection__type_ctor_info_allow_multi_arm_0,
	mercury_data_check_hlds__switch_detection__type_ctor_info_case_arm_0,
	mercury_data_check_hlds__switch_detection__type_ctor_info_cases_table_0,
	mercury_data_check_hlds__switch_detection__type_ctor_info_cons_id_entry_0,
	mercury_data_check_hlds__switch_detection__type_ctor_info_cons_id_state_0,
	mercury_data_check_hlds__switch_detection__type_ctor_info_deconstruct_search_0,
	mercury_data_check_hlds__switch_detection__type_ctor_info_found_deconstruct_0,
	mercury_data_check_hlds__switch_detection__type_ctor_info_process_unify_2;
MR_decl_label4(f_99_104_101_99_107_95_104_108_100_115_95_95_115_119_105_116_99_104_95_100_101_116_101_99_116_105_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_106_95_102_105_110_100_95_98_105_110_100_95_118_97_114_95_95_91_49_44_32_50_93_95_48_11_0, 21,4,6,8)
MR_decl_label10(f_99_104_101_99_107_95_104_108_100_115_95_95_115_119_105_116_99_104_95_100_101_116_101_99_116_105_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_98_105_110_100_95_118_97_114_95_50_95_95_91_49_44_32_50_93_95_48_11_0, 132,37,39,40,42,44,46,47,49,51)
MR_decl_label10(f_99_104_101_99_107_95_104_108_100_115_95_95_115_119_105_116_99_104_95_100_101_116_101_99_116_105_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_98_105_110_100_95_118_97_114_95_50_95_95_91_49_44_32_50_93_95_48_11_0, 53,54,34,35,57,55,133,5,4,64)
MR_decl_label10(f_99_104_101_99_107_95_104_108_100_115_95_95_115_119_105_116_99_104_95_100_101_116_101_99_116_105_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_98_105_110_100_95_118_97_114_95_50_95_95_91_49_44_32_50_93_95_48_11_0, 8,10,136,13,134,17,20,24,78,138)
MR_decl_label1(f_99_104_101_99_107_95_104_108_100_115_95_95_115_119_105_116_99_104_95_100_101_116_101_99_116_105_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_98_105_110_100_95_118_97_114_95_50_95_95_91_49_44_32_50_93_95_48_11_0, 28)
MR_decl_label4(f_99_104_101_99_107_95_104_108_100_115_95_95_115_119_105_116_99_104_95_100_101_116_101_99_116_105_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_98_105_110_100_95_118_97_114_95_102_111_114_95_115_119_105_116_99_104_95_105_110_95_100_101_99_111_110_115_116_114_117_99_116_95_95_91_52_44_32_54_93_95_48_7_0, 9,6,7,2)
MR_decl_label8(check_hlds__switch_detection__add_multi_entry_for_cons_id_4_0, 3,6,7,8,10,2,12,14)
MR_decl_label9(check_hlds__switch_detection__add_single_entry_4_0, 4,7,8,9,10,12,3,14,16)
MR_decl_label4(check_hlds__switch_detection__all_disjuncts_are_switch_var_unifies_3_0, 31,6,8,1)
MR_decl_label10(check_hlds__switch_detection__cases_to_switch_10_0, 2,4,7,9,10,11,12,13,16,5)
MR_decl_label6(check_hlds__switch_detection__cases_to_switch_10_0, 21,23,20,27,28,30)
MR_decl_label10(check_hlds__switch_detection__convert_case_7_0, 3,6,2,7,10,12,14,15,9,19)
MR_decl_label8(check_hlds__switch_detection__convert_case_7_0, 21,23,24,18,33,37,35,27)
MR_decl_label4(check_hlds__switch_detection__create_expanded_conjunction_5_0, 5,2,10,11)
MR_decl_label4(check_hlds__switch_detection__delete_covered_functors_3_0, 13,3,4,7)
MR_decl_label3(check_hlds__switch_detection__detect_sub_switches_in_disj_9_0, 14,4,5)
MR_decl_label5(check_hlds__switch_detection__detect_switches_in_cases_10_0, 18,5,6,7,9)
MR_decl_label4(check_hlds__switch_detection__detect_switches_in_conj_9_0, 16,4,6,7)
MR_decl_label10(check_hlds__switch_detection__detect_switches_in_disj_13_0, 77,6,5,8,9,10,12,3,17,18)
MR_decl_label6(check_hlds__switch_detection__detect_switches_in_disj_13_0, 20,24,28,23,31,16)
MR_decl_label1(check_hlds__switch_detection__detect_switches_in_goal_9_0, 2)
MR_decl_label10(check_hlds__switch_detection__detect_switches_in_goal_expr_10_0, 103,53,54,61,105,5,7,111,11,13)
MR_decl_label10(check_hlds__switch_detection__detect_switches_in_goal_expr_10_0, 109,16,17,18,107,21,108,104,71,24)
MR_decl_label10(check_hlds__switch_detection__detect_switches_in_goal_expr_10_0, 27,110,41,37,38,32,33,34,106,47)
MR_decl_label2(check_hlds__switch_detection__detect_switches_in_goal_update_instmap_10_0, 2,4)
MR_decl_label4(check_hlds__switch_detection__detect_switches_in_module_2_0, 2,3,5,6)
MR_decl_label3(check_hlds__switch_detection__detect_switches_in_orelse_9_0, 14,4,5)
MR_decl_label8(check_hlds__switch_detection__detect_switches_in_preds_allow_4_0, 21,3,4,5,6,8,9,10)
MR_decl_label10(check_hlds__switch_detection__detect_switches_in_proc_4_0, 2,3,5,4,6,7,8,9,10,11)
MR_decl_label8(check_hlds__switch_detection__detect_switches_in_proc_4_0, 12,13,14,23,16,18,19,20)
MR_decl_label10(check_hlds__switch_detection__detect_switches_in_procs_allow_5_0, 27,3,4,5,6,7,8,9,10,11)
MR_decl_label7(check_hlds__switch_detection__detect_switches_in_procs_allow_5_0, 12,22,14,16,17,18,19)
MR_decl_label10(check_hlds__switch_detection__expand_sub_disj_process_conj_7_0, 93,4,14,16,17,21,23,26,32,10)
MR_decl_label5(check_hlds__switch_detection__expand_sub_disj_process_conj_7_0, 11,33,35,36,1)
MR_decl_label7(check_hlds__switch_detection__expand_sub_disjs_5_0, 43,3,4,8,5,12,1)
MR_decl_label4(check_hlds__switch_detection__find_bind_var_9_0, 4,5,9,7)
MR_decl_label10(check_hlds__switch_detection__partition_disj_8_0, 2,3,5,8,9,11,15,7,19,21)
MR_decl_label7(check_hlds__switch_detection__partition_disj_8_0, 22,24,28,29,17,30,1)
MR_decl_label6(check_hlds__switch_detection__partition_disj_trial_6_0, 23,3,6,8,10,12)
MR_decl_label5(check_hlds__switch_detection__select_best_switch_3_0, 18,3,5,6,4)
MR_decl_label3(fn__check_hlds__switch_detection__convert_cases_table_2_0, 2,4,8)
MR_decl_label3(fn__check_hlds__switch_detection__count_covered_cons_ids_1_0, 13,4,5)
MR_decl_label1(fn__check_hlds__switch_detection__project_arm_goal_1_0, 3)
MR_decl_label1(fn__check_hlds__switch_detection__project_single_arm_goal_1_0, 3)
MR_decl_label4(__Unify___check_hlds__switch_detection__again_0_0, 4,6,10,1)
MR_decl_label6(__Unify___check_hlds__switch_detection__case_arm_0_0, 7,9,24,5,14,1)
MR_decl_label3(__Unify___check_hlds__switch_detection__cases_table_0_0, 4,8,1)
MR_decl_label2(__Unify___check_hlds__switch_detection__cons_id_entry_0_0, 6,1)
MR_decl_label5(__Compare___check_hlds__switch_detection__again_0_0, 3,2,5,9,29)
MR_decl_label9(__Compare___check_hlds__switch_detection__case_arm_0_0, 3,2,9,13,7,5,20,22,63)
MR_decl_label4(__Compare___check_hlds__switch_detection__cases_table_0_0, 3,2,5,21)
MR_decl_label4(__Compare___check_hlds__switch_detection__cons_id_entry_0_0, 3,2,5,21)
MR_decl_static(check_hlds__switch_detection__select_best_switch_3_0)
MR_decl_static(fn__check_hlds__switch_detection__convert_cases_table_2_0)
MR_decl_static(check_hlds__switch_detection__all_disjuncts_are_switch_var_unifies_3_0)
MR_decl_static(fn__check_hlds__switch_detection__this_file_0_0)
MR_def_extern_entry(check_hlds__switch_detection__find_bind_var_9_0)
MR_decl_static(check_hlds__switch_detection__add_single_entry_4_0)
MR_decl_static(check_hlds__switch_detection__partition_disj_trial_6_0)
MR_decl_static(check_hlds__switch_detection__expand_sub_disj_process_conj_7_0)
MR_decl_static(check_hlds__switch_detection__expand_sub_disjs_5_0)
MR_decl_static(check_hlds__switch_detection__partition_disj_8_0)
MR_decl_static(check_hlds__switch_detection__delete_covered_functors_3_0)
MR_decl_static(fn__check_hlds__switch_detection__count_covered_cons_ids_1_0)
MR_decl_static(check_hlds__switch_detection__detect_switches_in_goal_9_0)
MR_decl_static(check_hlds__switch_detection__detect_switches_in_goal_update_instmap_10_0)
MR_decl_static(check_hlds__switch_detection__detect_switches_in_goal_expr_10_0)
MR_decl_static(check_hlds__switch_detection__detect_switches_in_disj_13_0)
MR_decl_static(check_hlds__switch_detection__detect_sub_switches_in_disj_9_0)
MR_decl_static(check_hlds__switch_detection__detect_switches_in_cases_10_0)
MR_decl_static(check_hlds__switch_detection__detect_switches_in_conj_9_0)
MR_decl_static(check_hlds__switch_detection__detect_switches_in_orelse_9_0)
MR_decl_static(check_hlds__switch_detection__cases_to_switch_10_0)
MR_decl_static(check_hlds__switch_detection__detect_switches_in_procs_allow_5_0)
MR_decl_static(check_hlds__switch_detection__detect_switches_in_preds_allow_4_0)
MR_def_extern_entry(check_hlds__switch_detection__detect_switches_in_module_2_0)
MR_def_extern_entry(check_hlds__switch_detection__detect_switches_in_proc_4_0)
MR_decl_static(check_hlds__switch_detection__convert_case_7_0)
MR_decl_static(fn__check_hlds__switch_detection__project_arm_goal_1_0)
MR_decl_static(fn__check_hlds__switch_detection__project_single_arm_goal_1_0)
MR_decl_static(check_hlds__switch_detection__add_multi_entry_for_cons_id_4_0)
MR_decl_static(check_hlds__switch_detection__create_expanded_conjunction_5_0)
MR_decl_static(check_hlds__switch_detection__find_bind_var_for_switch_in_deconstruct_7_0)
MR_decl_static(__Unify___check_hlds__switch_detection__again_0_0)
MR_decl_static(__Compare___check_hlds__switch_detection__again_0_0)
MR_decl_static(__Unify___check_hlds__switch_detection__allow_multi_arm_0_0)
MR_decl_static(__Compare___check_hlds__switch_detection__allow_multi_arm_0_0)
MR_decl_static(__Unify___check_hlds__switch_detection__case_arm_0_0)
MR_decl_static(__Compare___check_hlds__switch_detection__case_arm_0_0)
MR_decl_static(__Unify___check_hlds__switch_detection__cases_table_0_0)
MR_decl_static(__Compare___check_hlds__switch_detection__cases_table_0_0)
MR_decl_static(__Unify___check_hlds__switch_detection__cons_id_entry_0_0)
MR_decl_static(__Compare___check_hlds__switch_detection__cons_id_entry_0_0)
MR_decl_static(__Unify___check_hlds__switch_detection__cons_id_state_0_0)
MR_decl_static(__Compare___check_hlds__switch_detection__cons_id_state_0_0)
MR_decl_static(__Unify___check_hlds__switch_detection__deconstruct_search_0_0)
MR_decl_static(__Compare___check_hlds__switch_detection__deconstruct_search_0_0)
MR_def_extern_entry(__Unify___check_hlds__switch_detection__found_deconstruct_0_0)
MR_def_extern_entry(__Compare___check_hlds__switch_detection__found_deconstruct_0_0)
MR_def_extern_entry(__Unify___check_hlds__switch_detection__process_unify_2_0)
MR_def_extern_entry(__Compare___check_hlds__switch_detection__process_unify_2_0)
MR_decl_static(check_hlds__switch_detection__IntroducedFrom__pred__convert_case__372__1_2_0)
MR_decl_static(check_hlds__switch_detection__IntroducedFrom__pred__convert_case__389__1_2_0)
MR_decl_static(check_hlds__switch_detection__IntroducedFrom__pred__convert_case__380__1_2_0)
MR_decl_static(check_hlds__switch_detection__IntroducedFrom__pred__convert_case__412__1_2_0)
MR_decl_static(check_hlds__switch_detection__IntroducedFrom__pred__delete_covered_functors__1088__1_3_0)
MR_decl_static(f_99_104_101_99_107_95_104_108_100_115_95_95_115_119_105_116_99_104_95_100_101_116_101_99_116_105_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_98_105_110_100_95_118_97_114_95_102_111_114_95_115_119_105_116_99_104_95_105_110_95_100_101_99_111_110_115_116_114_117_99_116_95_95_91_52_44_32_54_93_95_48_7_0)
MR_decl_static(f_99_104_101_99_107_95_104_108_100_115_95_95_115_119_105_116_99_104_95_100_101_116_101_99_116_105_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_98_105_110_100_95_118_97_114_95_50_95_95_91_49_44_32_50_93_95_48_11_0)
MR_decl_static(f_99_104_101_99_107_95_104_108_100_115_95_95_115_119_105_116_99_104_95_100_101_116_101_99_116_105_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_106_95_102_105_110_100_95_98_105_110_100_95_118_97_114_95_95_91_49_44_32_50_93_95_48_11_0)

extern const MR_TypeCtorInfo_Struct mercury_data_set_tree234__type_ctor_info_set_tree234_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_cons_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_case_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_case_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_cons_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_term_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0;
extern const MR_TypeCtorInfo_Struct mercury_data_maybe__type_ctor_info_maybe_1;
static const struct mercury_type_0 mercury_common_0[9] =
{
{
{
MR_CTOR1_ADDR(set_tree234, set_tree234),
MR_CTOR0_ADDR(parse_tree__prog_data, cons_id)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(hlds__hlds_goal, case)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(hlds__hlds_goal, case)
}
},
{
{
MR_CTOR1_ADDR(set_tree234, set_tree234),
MR_CTOR0_ADDR(parse_tree__prog_data, cons_id)
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
MR_CTOR1_ADDR(term, term),
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
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal)
}
},
{
{
MR_CTOR1_ADDR(maybe, maybe),
MR_CTOR0_ADDR(parse_tree__prog_data, cons_id)
}
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_pair__type_ctor_info_pair_2;
extern const MR_TypeCtorInfo_Struct mercury_data_check_hlds__switch_detection__type_ctor_info_cons_id_entry_0;
static const struct mercury_type_1 mercury_common_1[2] =
{
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(parse_tree__prog_data, cons_id),
MR_CTOR0_ADDR(check_hlds__switch_detection, cons_id_entry)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(parse_tree__prog_data, cons_id),
MR_CTOR0_ADDR(check_hlds__switch_detection, cons_id_entry)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__check_hlds__switch_detection__convert_cases_table_2_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_info_0;
static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__switch_detection__partition_disj_trial_6_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0;
extern const MR_TypeCtorInfo_Struct mercury_data_unit__type_ctor_info_unit_0;
static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__switch_detection__partition_disj_8_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__switch_detection__partition_disj_8_0_2;
static const struct mercury_type_2 mercury_common_2[4] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__fn__check_hlds__switch_detection__convert_cases_table_2_0_1,
(MR_Word *) (MR_Integer) 0
},
7,
{
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal_info),
MR_COMMON(0,0),
MR_COMMON(1,0),
MR_COMMON(0,1),
MR_COMMON(0,1),
MR_COMMON(0,0),
MR_COMMON(0,0)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__switch_detection__partition_disj_trial_6_0_1,
(MR_Word *) (MR_Integer) 0
},
7,
{
MR_COMMON(0,6),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_COMMON(0,7),
MR_COMMON(0,8),
MR_COMMON(0,8),
MR_CTOR0_ADDR(unit, unit),
MR_CTOR0_ADDR(unit, unit)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__switch_detection__partition_disj_8_0_1,
(MR_Word *) (MR_Integer) 0
},
7,
{
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal_info),
MR_COMMON(0,0),
MR_COMMON(1,0),
MR_COMMON(0,1),
MR_COMMON(0,1),
MR_COMMON(0,0),
MR_COMMON(0,0)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__switch_detection__partition_disj_8_0_2,
(MR_Word *) (MR_Integer) 0
},
7,
{
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal_info),
MR_COMMON(0,0),
MR_COMMON(1,0),
MR_COMMON(0,1),
MR_COMMON(0,1),
MR_COMMON(0,0),
MR_COMMON(0,0)
}
},
};

static const struct mercury_type_3 mercury_common_3[4] =
{
{
MR_COMMON(2,1),
MR_ENTRY_AP(check_hlds__switch_detection__find_bind_var_for_switch_in_deconstruct_7_0),
0
},
{
MR_COMMON(6,0),
MR_ENTRY_AP(check_hlds__switch_detection__IntroducedFrom__pred__delete_covered_functors__1088__1_3_0),
0
},
{
MR_COMMON(8,2),
MR_ENTRY_AP(fn__check_hlds__switch_detection__project_single_arm_goal_1_0),
0
},
{
MR_COMMON(8,4),
MR_ENTRY_AP(fn__check_hlds__switch_detection__project_arm_goal_1_0),
0
},
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__switch_detection__expand_sub_disj_process_conj_7_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_check_hlds__switch_detection__type_ctor_info_case_arm_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_cons_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_check_hlds__switch_detection__type_ctor_info_cases_table_0;
static const struct mercury_type_4 mercury_common_4[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__switch_detection__expand_sub_disj_process_conj_7_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(check_hlds__switch_detection, case_arm),
MR_CTOR0_ADDR(parse_tree__prog_data, cons_id),
MR_CTOR0_ADDR(check_hlds__switch_detection, cases_table),
MR_CTOR0_ADDR(check_hlds__switch_detection, cases_table)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__switch_detection__expand_sub_disj_process_conj_7_0_2;
static const struct mercury_type_5 mercury_common_5[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__switch_detection__expand_sub_disj_process_conj_7_0_2,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_COMMON(0,7),
MR_COMMON(0,7),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal_info),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__switch_detection__delete_covered_functors_3_0_1;
static const struct mercury_type_6 mercury_common_6[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__switch_detection__delete_covered_functors_3_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(parse_tree__prog_data, cons_id),
MR_COMMON(0,0),
MR_COMMON(0,0)
}
},
};

static const struct mercury_type_7 mercury_common_7[1] =
{
{
2,
MR_tbmkword(0, 0)
},
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__switch_detection__convert_case_7_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_check_hlds__switch_detection__type_ctor_info_cons_id_state_0;
static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__switch_detection__convert_case_7_0_2;
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;
static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__switch_detection__convert_case_7_0_3;
static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__switch_detection__convert_case_7_0_4;
static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__switch_detection__convert_case_7_0_5;
static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__switch_detection__convert_case_7_0_6;
static const struct mercury_type_8 mercury_common_8[6] =
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__switch_detection__convert_case_7_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(check_hlds__switch_detection, cons_id_state),
MR_CTOR0_ADDR(check_hlds__switch_detection, cons_id_state)
},
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__switch_detection__convert_case_7_0_2,
(MR_Word *) (MR_Integer) 0,
2,
MR_BOOL_CTOR_ADDR,
MR_BOOL_CTOR_ADDR
},
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__switch_detection__convert_case_7_0_3,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(check_hlds__switch_detection, case_arm),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal)
},
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__switch_detection__convert_case_7_0_4,
(MR_Word *) (MR_Integer) 0,
2,
MR_BOOL_CTOR_ADDR,
MR_BOOL_CTOR_ADDR
},
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__switch_detection__convert_case_7_0_5,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(check_hlds__switch_detection, case_arm),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal)
},
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__switch_detection__convert_case_7_0_6,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(0,0),
MR_CTOR0_ADDR(parse_tree__prog_data, cons_id)
},
};

static const MR_FA_TypeInfo_Struct1 mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
	&mercury_data_term__type_ctor_info_var_1,
{	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0
}};

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0
}};

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1hlds__hlds_goal__type_ctor_info_case_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_hlds__hlds_goal__type_ctor_info_case_0
}};

const MR_PseudoTypeInfo mercury_data_check_hlds__switch_detection__field_types_again_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1hlds__hlds_goal__type_ctor_info_case_0
};

static const MR_DuFunctorDesc mercury_data_check_hlds__switch_detection__du_functor_desc_again_0_0 = {
	"again",
	3,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_check_hlds__switch_detection__field_types_again_0_0,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_check_hlds__switch_detection__du_stag_ordered_again_0_0[] = {
	&mercury_data_check_hlds__switch_detection__du_functor_desc_again_0_0

};

const MR_DuPtagLayout mercury_data_check_hlds__switch_detection__du_ptag_ordered_again_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_check_hlds__switch_detection__du_stag_ordered_again_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_check_hlds__switch_detection__du_name_ordered_again_0[] = {
	&mercury_data_check_hlds__switch_detection__du_functor_desc_again_0_0
};

const MR_Integer mercury_data_check_hlds__switch_detection__functor_number_map_again_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_check_hlds__switch_detection__type_ctor_info_again_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___check_hlds__switch_detection__again_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___check_hlds__switch_detection__again_0_0)),
	"check_hlds.switch_detection",
	"again",
	{ (void *)mercury_data_check_hlds__switch_detection__du_name_ordered_again_0 },
	{ (void *)mercury_data_check_hlds__switch_detection__du_ptag_ordered_again_0 },
	1,
	4,
	mercury_data_check_hlds__switch_detection__functor_number_map_again_0
};

static const MR_EnumFunctorDesc mercury_data_check_hlds__switch_detection__enum_functor_desc_allow_multi_arm_0_0 = {
	"allow_multi_arm",
	0
};

static const MR_EnumFunctorDesc mercury_data_check_hlds__switch_detection__enum_functor_desc_allow_multi_arm_0_1 = {
	"dont_allow_multi_arm",
	1
};

const MR_EnumFunctorDescPtr mercury_data_check_hlds__switch_detection__enum_value_ordered_allow_multi_arm_0[] = {
	&mercury_data_check_hlds__switch_detection__enum_functor_desc_allow_multi_arm_0_0,
	&mercury_data_check_hlds__switch_detection__enum_functor_desc_allow_multi_arm_0_1
};

const MR_EnumFunctorDescPtr mercury_data_check_hlds__switch_detection__enum_name_ordered_allow_multi_arm_0[] = {
	&mercury_data_check_hlds__switch_detection__enum_functor_desc_allow_multi_arm_0_0,
	&mercury_data_check_hlds__switch_detection__enum_functor_desc_allow_multi_arm_0_1
};

const MR_Integer mercury_data_check_hlds__switch_detection__functor_number_map_allow_multi_arm_0[] = {
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_check_hlds__switch_detection__type_ctor_info_allow_multi_arm_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___check_hlds__switch_detection__allow_multi_arm_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___check_hlds__switch_detection__allow_multi_arm_0_0)),
	"check_hlds.switch_detection",
	"allow_multi_arm",
	{ (void *)mercury_data_check_hlds__switch_detection__enum_name_ordered_allow_multi_arm_0 },
	{ (void *)mercury_data_check_hlds__switch_detection__enum_value_ordered_allow_multi_arm_0 },
	2,
	4,
	mercury_data_check_hlds__switch_detection__functor_number_map_allow_multi_arm_0
};

const MR_PseudoTypeInfo mercury_data_check_hlds__switch_detection__field_types_case_arm_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_cons_id_0,
	(MR_PseudoTypeInfo) &mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0
};

static const MR_DuFunctorDesc mercury_data_check_hlds__switch_detection__du_functor_desc_case_arm_0_0 = {
	"single_cons_id_arm",
	2,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_check_hlds__switch_detection__field_types_case_arm_0_0,
	NULL,
	NULL
};

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1parse_tree__prog_data__type_ctor_info_cons_id_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_cons_id_0
}};

const MR_PseudoTypeInfo mercury_data_check_hlds__switch_detection__field_types_case_arm_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_cons_id_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1parse_tree__prog_data__type_ctor_info_cons_id_0,
	(MR_PseudoTypeInfo) &mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0
};

static const MR_DuFunctorDesc mercury_data_check_hlds__switch_detection__du_functor_desc_case_arm_0_1 = {
	"multi_cons_id_arm",
	3,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_check_hlds__switch_detection__field_types_case_arm_0_1,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_check_hlds__switch_detection__du_stag_ordered_case_arm_0_0[] = {
	&mercury_data_check_hlds__switch_detection__du_functor_desc_case_arm_0_0

};

const MR_DuFunctorDescPtr mercury_data_check_hlds__switch_detection__du_stag_ordered_case_arm_0_1[] = {
	&mercury_data_check_hlds__switch_detection__du_functor_desc_case_arm_0_1

};

const MR_DuPtagLayout mercury_data_check_hlds__switch_detection__du_ptag_ordered_case_arm_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_check_hlds__switch_detection__du_stag_ordered_case_arm_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_check_hlds__switch_detection__du_stag_ordered_case_arm_0_1 }

};

const MR_DuFunctorDescPtr mercury_data_check_hlds__switch_detection__du_name_ordered_case_arm_0[] = {
	&mercury_data_check_hlds__switch_detection__du_functor_desc_case_arm_0_1,
	&mercury_data_check_hlds__switch_detection__du_functor_desc_case_arm_0_0
};

const MR_Integer mercury_data_check_hlds__switch_detection__functor_number_map_case_arm_0[] = {
	1,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_check_hlds__switch_detection__type_ctor_info_case_arm_0 = {
	0,
	13,
	2,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___check_hlds__switch_detection__case_arm_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___check_hlds__switch_detection__case_arm_0_0)),
	"check_hlds.switch_detection",
	"case_arm",
	{ (void *)mercury_data_check_hlds__switch_detection__du_name_ordered_case_arm_0 },
	{ (void *)mercury_data_check_hlds__switch_detection__du_ptag_ordered_case_arm_0 },
	2,
	4,
	mercury_data_check_hlds__switch_detection__functor_number_map_case_arm_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_cons_id_0check_hlds__switch_detection__type_ctor_info_cons_id_entry_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_cons_id_0,
	(MR_TypeInfo) &mercury_data_check_hlds__switch_detection__type_ctor_info_cons_id_entry_0
}};

static const MR_FA_TypeInfo_Struct1 mercury_data_set_tree234__ti_set_tree234_1parse_tree__prog_data__type_ctor_info_cons_id_0 = {
	&mercury_data_set_tree234__type_ctor_info_set_tree234_1,
{	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_cons_id_0
}};

const MR_PseudoTypeInfo mercury_data_check_hlds__switch_detection__field_types_cases_table_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_cons_id_0check_hlds__switch_detection__type_ctor_info_cons_id_entry_0,
	(MR_PseudoTypeInfo) &mercury_data_set_tree234__ti_set_tree234_1parse_tree__prog_data__type_ctor_info_cons_id_0
};

const MR_ConstString mercury_data_check_hlds__switch_detection__field_names_cases_table_0_0[] = {
	"cases_map",
	"conflict_cons_ids"
};

static const MR_DuFunctorDesc mercury_data_check_hlds__switch_detection__du_functor_desc_cases_table_0_0 = {
	"cases_table",
	2,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_check_hlds__switch_detection__field_types_cases_table_0_0,
	mercury_data_check_hlds__switch_detection__field_names_cases_table_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_check_hlds__switch_detection__du_stag_ordered_cases_table_0_0[] = {
	&mercury_data_check_hlds__switch_detection__du_functor_desc_cases_table_0_0

};

const MR_DuPtagLayout mercury_data_check_hlds__switch_detection__du_ptag_ordered_cases_table_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_check_hlds__switch_detection__du_stag_ordered_cases_table_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_check_hlds__switch_detection__du_name_ordered_cases_table_0[] = {
	&mercury_data_check_hlds__switch_detection__du_functor_desc_cases_table_0_0
};

const MR_Integer mercury_data_check_hlds__switch_detection__functor_number_map_cases_table_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_check_hlds__switch_detection__type_ctor_info_cases_table_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___check_hlds__switch_detection__cases_table_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___check_hlds__switch_detection__cases_table_0_0)),
	"check_hlds.switch_detection",
	"cases_table",
	{ (void *)mercury_data_check_hlds__switch_detection__du_name_ordered_cases_table_0 },
	{ (void *)mercury_data_check_hlds__switch_detection__du_ptag_ordered_cases_table_0 },
	1,
	4,
	mercury_data_check_hlds__switch_detection__functor_number_map_cases_table_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_cord__type_ctor_info_cord_1;
extern const MR_TypeCtorInfo_Struct mercury_data_check_hlds__switch_detection__type_ctor_info_case_arm_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_cord__ti_cord_1check_hlds__switch_detection__type_ctor_info_case_arm_0 = {
	&mercury_data_cord__type_ctor_info_cord_1,
{	(MR_TypeInfo) &mercury_data_check_hlds__switch_detection__type_ctor_info_case_arm_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_check_hlds__switch_detection__type_ctor_info_cons_id_state_0;

const MR_PseudoTypeInfo mercury_data_check_hlds__switch_detection__field_types_cons_id_entry_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_check_hlds__switch_detection__type_ctor_info_cons_id_state_0,
	(MR_PseudoTypeInfo) &mercury_data_cord__ti_cord_1check_hlds__switch_detection__type_ctor_info_case_arm_0
};

const MR_ConstString mercury_data_check_hlds__switch_detection__field_names_cons_id_entry_0_0[] = {
	"cons_id_state",
	"cons_id_arms"
};

static const MR_DuFunctorDesc mercury_data_check_hlds__switch_detection__du_functor_desc_cons_id_entry_0_0 = {
	"cons_id_entry",
	2,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_check_hlds__switch_detection__field_types_cons_id_entry_0_0,
	mercury_data_check_hlds__switch_detection__field_names_cons_id_entry_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_check_hlds__switch_detection__du_stag_ordered_cons_id_entry_0_0[] = {
	&mercury_data_check_hlds__switch_detection__du_functor_desc_cons_id_entry_0_0

};

const MR_DuPtagLayout mercury_data_check_hlds__switch_detection__du_ptag_ordered_cons_id_entry_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_check_hlds__switch_detection__du_stag_ordered_cons_id_entry_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_check_hlds__switch_detection__du_name_ordered_cons_id_entry_0[] = {
	&mercury_data_check_hlds__switch_detection__du_functor_desc_cons_id_entry_0_0
};

const MR_Integer mercury_data_check_hlds__switch_detection__functor_number_map_cons_id_entry_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_check_hlds__switch_detection__type_ctor_info_cons_id_entry_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___check_hlds__switch_detection__cons_id_entry_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___check_hlds__switch_detection__cons_id_entry_0_0)),
	"check_hlds.switch_detection",
	"cons_id_entry",
	{ (void *)mercury_data_check_hlds__switch_detection__du_name_ordered_cons_id_entry_0 },
	{ (void *)mercury_data_check_hlds__switch_detection__du_ptag_ordered_cons_id_entry_0 },
	1,
	4,
	mercury_data_check_hlds__switch_detection__functor_number_map_cons_id_entry_0
};

static const MR_EnumFunctorDesc mercury_data_check_hlds__switch_detection__enum_functor_desc_cons_id_state_0_0 = {
	"cons_id_has_all_singles",
	0
};

static const MR_EnumFunctorDesc mercury_data_check_hlds__switch_detection__enum_functor_desc_cons_id_state_0_1 = {
	"cons_id_has_one_multi",
	1
};

static const MR_EnumFunctorDesc mercury_data_check_hlds__switch_detection__enum_functor_desc_cons_id_state_0_2 = {
	"cons_id_has_conflict",
	2
};

const MR_EnumFunctorDescPtr mercury_data_check_hlds__switch_detection__enum_value_ordered_cons_id_state_0[] = {
	&mercury_data_check_hlds__switch_detection__enum_functor_desc_cons_id_state_0_0,
	&mercury_data_check_hlds__switch_detection__enum_functor_desc_cons_id_state_0_1,
	&mercury_data_check_hlds__switch_detection__enum_functor_desc_cons_id_state_0_2
};

const MR_EnumFunctorDescPtr mercury_data_check_hlds__switch_detection__enum_name_ordered_cons_id_state_0[] = {
	&mercury_data_check_hlds__switch_detection__enum_functor_desc_cons_id_state_0_0,
	&mercury_data_check_hlds__switch_detection__enum_functor_desc_cons_id_state_0_2,
	&mercury_data_check_hlds__switch_detection__enum_functor_desc_cons_id_state_0_1
};

const MR_Integer mercury_data_check_hlds__switch_detection__functor_number_map_cons_id_state_0[] = {
	0,
	2,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_check_hlds__switch_detection__type_ctor_info_cons_id_state_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___check_hlds__switch_detection__cons_id_state_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___check_hlds__switch_detection__cons_id_state_0_0)),
	"check_hlds.switch_detection",
	"cons_id_state",
	{ (void *)mercury_data_check_hlds__switch_detection__enum_name_ordered_cons_id_state_0 },
	{ (void *)mercury_data_check_hlds__switch_detection__enum_value_ordered_cons_id_state_0 },
	3,
	4,
	mercury_data_check_hlds__switch_detection__functor_number_map_cons_id_state_0
};

static const MR_EnumFunctorDesc mercury_data_check_hlds__switch_detection__enum_functor_desc_deconstruct_search_0_0 = {
	"before_deconstruct",
	0
};

static const MR_EnumFunctorDesc mercury_data_check_hlds__switch_detection__enum_functor_desc_deconstruct_search_0_1 = {
	"found_deconstruct",
	1
};

static const MR_EnumFunctorDesc mercury_data_check_hlds__switch_detection__enum_functor_desc_deconstruct_search_0_2 = {
	"given_up_search",
	2
};

const MR_EnumFunctorDescPtr mercury_data_check_hlds__switch_detection__enum_value_ordered_deconstruct_search_0[] = {
	&mercury_data_check_hlds__switch_detection__enum_functor_desc_deconstruct_search_0_0,
	&mercury_data_check_hlds__switch_detection__enum_functor_desc_deconstruct_search_0_1,
	&mercury_data_check_hlds__switch_detection__enum_functor_desc_deconstruct_search_0_2
};

const MR_EnumFunctorDescPtr mercury_data_check_hlds__switch_detection__enum_name_ordered_deconstruct_search_0[] = {
	&mercury_data_check_hlds__switch_detection__enum_functor_desc_deconstruct_search_0_0,
	&mercury_data_check_hlds__switch_detection__enum_functor_desc_deconstruct_search_0_1,
	&mercury_data_check_hlds__switch_detection__enum_functor_desc_deconstruct_search_0_2
};

const MR_Integer mercury_data_check_hlds__switch_detection__functor_number_map_deconstruct_search_0[] = {
	0,
	1,
	2 };
	
const MR_TypeCtorInfo_Struct mercury_data_check_hlds__switch_detection__type_ctor_info_deconstruct_search_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___check_hlds__switch_detection__deconstruct_search_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___check_hlds__switch_detection__deconstruct_search_0_0)),
	"check_hlds.switch_detection",
	"deconstruct_search",
	{ (void *)mercury_data_check_hlds__switch_detection__enum_name_ordered_deconstruct_search_0 },
	{ (void *)mercury_data_check_hlds__switch_detection__enum_value_ordered_deconstruct_search_0 },
	3,
	4,
	mercury_data_check_hlds__switch_detection__functor_number_map_deconstruct_search_0
};

static const MR_EnumFunctorDesc mercury_data_check_hlds__switch_detection__enum_functor_desc_found_deconstruct_0_0 = {
	"did_find_deconstruct",
	0
};

static const MR_EnumFunctorDesc mercury_data_check_hlds__switch_detection__enum_functor_desc_found_deconstruct_0_1 = {
	"did_not_find_deconstruct",
	1
};

const MR_EnumFunctorDescPtr mercury_data_check_hlds__switch_detection__enum_value_ordered_found_deconstruct_0[] = {
	&mercury_data_check_hlds__switch_detection__enum_functor_desc_found_deconstruct_0_0,
	&mercury_data_check_hlds__switch_detection__enum_functor_desc_found_deconstruct_0_1
};

const MR_EnumFunctorDescPtr mercury_data_check_hlds__switch_detection__enum_name_ordered_found_deconstruct_0[] = {
	&mercury_data_check_hlds__switch_detection__enum_functor_desc_found_deconstruct_0_0,
	&mercury_data_check_hlds__switch_detection__enum_functor_desc_found_deconstruct_0_1
};

const MR_Integer mercury_data_check_hlds__switch_detection__functor_number_map_found_deconstruct_0[] = {
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_check_hlds__switch_detection__type_ctor_info_found_deconstruct_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___check_hlds__switch_detection__found_deconstruct_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___check_hlds__switch_detection__found_deconstruct_0_0)),
	"check_hlds.switch_detection",
	"found_deconstruct",
	{ (void *)mercury_data_check_hlds__switch_detection__enum_name_ordered_found_deconstruct_0 },
	{ (void *)mercury_data_check_hlds__switch_detection__enum_value_ordered_found_deconstruct_0 },
	2,
	4,
	mercury_data_check_hlds__switch_detection__functor_number_map_found_deconstruct_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_pred_0;

static const MR_VA_PseudoTypeInfo_Struct7 mercury_data___vpti_pred_7__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0__plain_list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0__pseudo_1__pseudo_1__pseudo_2__pseudo_2 = {
	&mercury_data_builtin__type_ctor_info_pred_0,
	7,
{	(MR_PseudoTypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_PseudoTypeInfo) &mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0,
	(MR_PseudoTypeInfo) 1,
	(MR_PseudoTypeInfo) 1,
	(MR_PseudoTypeInfo) 2,
	(MR_PseudoTypeInfo) 2
}};

const MR_TypeCtorInfo_Struct mercury_data_check_hlds__switch_detection__type_ctor_info_process_unify_2 = {
	2,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___check_hlds__switch_detection__process_unify_2_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___check_hlds__switch_detection__process_unify_2_0)),
	"check_hlds.switch_detection",
	"process_unify",
	{ 0 },
	{ (void *)&mercury_data___vpti_pred_7__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0__plain_list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0__pseudo_1__pseudo_1__pseudo_2__pseudo_2 },
	-1,
	0,
	NULL
};


static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__switch_detection__convert_case_7_0_6 = {
{
MR_PREDICATE,
"check_hlds.switch_detection",
"check_hlds.switch_detection",
"lambda_switch_detection_m_412",
2,
0
},
"check_hlds.switch_detection",
"switch_detection.m",
412,
"d1;c8;e;c3;d3;c2;t;c2;"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__switch_detection__convert_case_7_0_5 = {
{
MR_FUNCTION,
"check_hlds.switch_detection",
"check_hlds.switch_detection",
"project_arm_goal",
2,
0
},
"check_hlds.switch_detection",
"switch_detection.m",
382,
"d1;c8;e;c3;d1;c9;"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__switch_detection__convert_case_7_0_4 = {
{
MR_PREDICATE,
"check_hlds.switch_detection",
"check_hlds.switch_detection",
"lambda_switch_detection_m_380",
2,
0
},
"check_hlds.switch_detection",
"switch_detection.m",
380,
"d1;c8;e;c3;d1;c3;"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__switch_detection__convert_case_7_0_3 = {
{
MR_FUNCTION,
"check_hlds.switch_detection",
"check_hlds.switch_detection",
"project_single_arm_goal",
2,
0
},
"check_hlds.switch_detection",
"switch_detection.m",
391,
"d1;c8;e;c3;d2;c9;"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__switch_detection__convert_case_7_0_2 = {
{
MR_PREDICATE,
"check_hlds.switch_detection",
"check_hlds.switch_detection",
"lambda_switch_detection_m_389",
2,
0
},
"check_hlds.switch_detection",
"switch_detection.m",
389,
"d1;c8;e;c3;d2;c3;"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__switch_detection__convert_case_7_0_1 = {
{
MR_PREDICATE,
"check_hlds.switch_detection",
"check_hlds.switch_detection",
"lambda_switch_detection_m_372",
2,
0
},
"check_hlds.switch_detection",
"switch_detection.m",
372,
"d1;c8;t;c2;"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__switch_detection__delete_covered_functors_3_0_1 = {
{
MR_PREDICATE,
"check_hlds.switch_detection",
"check_hlds.switch_detection",
"lambda_switch_detection_m_1088",
3,
0
},
"check_hlds.switch_detection",
"switch_detection.m",
1088,
"d2;c6;"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__switch_detection__partition_disj_8_0_2 = {
{
MR_PREDICATE,
"check_hlds.switch_detection",
"check_hlds.switch_detection",
"convert_case",
7,
0
},
"check_hlds.switch_detection",
"switch_detection.m",
360,
"d1;c6;"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__switch_detection__partition_disj_8_0_1 = {
{
MR_PREDICATE,
"check_hlds.switch_detection",
"check_hlds.switch_detection",
"convert_case",
7,
0
},
"check_hlds.switch_detection",
"switch_detection.m",
360,
"d1;c6;"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__switch_detection__expand_sub_disj_process_conj_7_0_2 = {
{
MR_PREDICATE,
"check_hlds.switch_detection",
"check_hlds.switch_detection",
"create_expanded_conjunction",
5,
0
},
"check_hlds.switch_detection",
"switch_detection.m",
789,
"d1;c8;d2;c3;d2;c3;e;c2;"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__switch_detection__expand_sub_disj_process_conj_7_0_1 = {
{
MR_PREDICATE,
"check_hlds.switch_detection",
"check_hlds.switch_detection",
"add_multi_entry_for_cons_id",
4,
0
},
"check_hlds.switch_detection",
"switch_detection.m",
486,
"d1;c7;"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__switch_detection__partition_disj_trial_6_0_1 = {
{
MR_PREDICATE,
"check_hlds.switch_detection",
"check_hlds.switch_detection",
"find_bind_var_for_switch_in_deconstruct",
7,
0
},
"check_hlds.switch_detection",
"",
0,
""
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__check_hlds__switch_detection__convert_cases_table_2_0_1 = {
{
MR_PREDICATE,
"check_hlds.switch_detection",
"check_hlds.switch_detection",
"convert_case",
7,
0
},
"check_hlds.switch_detection",
"switch_detection.m",
360,
"d1;c6;"
};


MR_decl_entry(list__length_2_0);

MR_BEGIN_MODULE(check_hlds__switch_detection_module0)
	MR_init_entry1(check_hlds__switch_detection__select_best_switch_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__switch_detection__select_best_switch_3_0);
	MR_init_label5(check_hlds__switch_detection__select_best_switch_3_0,18,3,5,6,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'select_best_switch'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__switch_detection__select_best_switch_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
MR_def_label(check_hlds__switch_detection__select_best_switch_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__switch_detection__select_best_switch_3_0_i3);
	}
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(6);
MR_def_label(check_hlds__switch_detection__select_best_switch_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_sv(3) = MR_tfield(1, MR_tempr1, 1);
	MR_sv(2) = MR_tfield(1, MR_tempr1, 0);
	MR_tempr2 = MR_r2;
	MR_sv(1) = MR_tempr2;
	MR_sv(4) = MR_tfield(0, MR_tempr2, 2);
	MR_sv(5) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, case);
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tfield(0, MR_sv(2), 2);
	}
	MR_np_call_localret_ent(list__length_2_0,
		check_hlds__switch_detection__select_best_switch_3_0_i5);
MR_def_label(check_hlds__switch_detection__select_best_switch_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__length_2_0,
		check_hlds__switch_detection__select_best_switch_3_0_i6);
MR_def_label(check_hlds__switch_detection__select_best_switch_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_sv(4) >= (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(check_hlds__switch_detection__select_best_switch_3_0_i4);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(check_hlds__switch_detection__select_best_switch_3_0_i18);
MR_def_label(check_hlds__switch_detection__select_best_switch_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(check_hlds__switch_detection__select_best_switch_3_0_i18);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__to_assoc_list_2_0);
MR_decl_entry(fn__set_tree234__init_0_0);
MR_decl_entry(list__foldl2_6_0);
MR_decl_entry(list__sort_2_0);

MR_BEGIN_MODULE(check_hlds__switch_detection_module1)
	MR_init_entry1(fn__check_hlds__switch_detection__convert_cases_table_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__check_hlds__switch_detection__convert_cases_table_2_0);
	MR_init_label3(fn__check_hlds__switch_detection__convert_cases_table_2_0,2,4,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'convert_cases_table'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__check_hlds__switch_detection__convert_cases_table_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(3) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, cons_id);
	MR_sv(4) = (MR_Word) MR_CTOR0_ADDR(check_hlds__switch_detection, cons_id_entry);
	MR_r1 = MR_sv(3);
	MR_tempr1 = MR_tempr2;
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(map__to_assoc_list_2_0,
		fn__check_hlds__switch_detection__convert_cases_table_2_0_i2);
MR_def_label(fn__check_hlds__switch_detection__convert_cases_table_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(2,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(check_hlds__switch_detection__convert_case_7_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(2);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_sv(3);
	}
	MR_np_call_localret_ent(fn__set_tree234__init_0_0,
		fn__check_hlds__switch_detection__convert_cases_table_2_0_i4);
MR_def_label(fn__check_hlds__switch_detection__convert_cases_table_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, case);
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,0,3);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_tempr1;
	MR_r6 = (MR_Word) MR_tbmkword(0, 0);
	MR_r7 = MR_tempr2;
	}
	MR_np_call_localret_ent(list__foldl2_6_0,
		fn__check_hlds__switch_detection__convert_cases_table_2_0_i8);
MR_def_label(fn__check_hlds__switch_detection__convert_cases_table_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(list__sort_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___term__var_1_0);

MR_BEGIN_MODULE(check_hlds__switch_detection_module2)
	MR_init_entry1(check_hlds__switch_detection__all_disjuncts_are_switch_var_unifies_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__switch_detection__all_disjuncts_are_switch_var_unifies_3_0);
	MR_init_label4(check_hlds__switch_detection__all_disjuncts_are_switch_var_unifies_3_0,31,6,8,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'all_disjuncts_are_switch_var_unifies'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__switch_detection__all_disjuncts_are_switch_var_unifies_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(check_hlds__switch_detection__all_disjuncts_are_switch_var_unifies_3_0_i31);
	}
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(check_hlds__switch_detection__all_disjuncts_are_switch_var_unifies_3_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r2;
	MR_tempr1 = MR_tfield(0, MR_tfield(1, MR_tempr3, 0), 0);
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(check_hlds__switch_detection__all_disjuncts_are_switch_var_unifies_3_0_i1);
	}
	MR_tempr2 = MR_tfield(0, MR_tempr1, 3);
	if (MR_PTAG_TESTR(MR_tempr2,1)) {
		MR_GOTO_LAB(check_hlds__switch_detection__all_disjuncts_are_switch_var_unifies_3_0_i1);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(1, MR_tempr3, 1);
	MR_sv(3) = MR_tfield(1, MR_tempr2, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tfield(1, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___term__var_1_0,
		check_hlds__switch_detection__all_disjuncts_are_switch_var_unifies_3_0_i6);
MR_def_label(check_hlds__switch_detection__all_disjuncts_are_switch_var_unifies_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__switch_detection__all_disjuncts_are_switch_var_unifies_3_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_localcall_lab(check_hlds__switch_detection__all_disjuncts_are_switch_var_unifies_3_0,
		check_hlds__switch_detection__all_disjuncts_are_switch_var_unifies_3_0_i8);
MR_def_label(check_hlds__switch_detection__all_disjuncts_are_switch_var_unifies_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__switch_detection__all_disjuncts_are_switch_var_unifies_3_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(4);
	}
MR_def_label(check_hlds__switch_detection__all_disjuncts_are_switch_var_unifies_3_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__switch_detection_module3)
	MR_init_entry1(fn__check_hlds__switch_detection__this_file_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__check_hlds__switch_detection__this_file_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'this_file'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__check_hlds__switch_detection__this_file_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("switch_detection.m", 18);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__init_1_0);

MR_BEGIN_MODULE(check_hlds__switch_detection_module4)
	MR_init_entry1(check_hlds__switch_detection__find_bind_var_9_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__switch_detection__find_bind_var_9_0);
	MR_init_label4(check_hlds__switch_detection__find_bind_var_9_0,4,5,9,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'find_bind_var'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__switch_detection__find_bind_var_9_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	MR_sv(4) = MR_r6;
	MR_sv(5) = MR_r7;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,4);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,5);
	MR_np_call_localret_ent(map__init_1_0,
		check_hlds__switch_detection__find_bind_var_9_0_i4);
MR_def_label(check_hlds__switch_detection__find_bind_var_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(5);
	}
	MR_np_call_localret_ent(f_99_104_101_99_107_95_104_108_100_115_95_95_115_119_105_116_99_104_95_100_101_116_101_99_116_105_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_98_105_110_100_95_118_97_114_95_50_95_95_91_49_44_32_50_93_95_48_11_0,
		check_hlds__switch_detection__find_bind_var_9_0_i5);
MR_def_label(check_hlds__switch_detection__find_bind_var_9_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r5,0)) {
		MR_GOTO_LAB(check_hlds__switch_detection__find_bind_var_9_0_i7);
	}
MR_def_label(check_hlds__switch_detection__find_bind_var_9_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_r4 = (MR_Integer) 1;
	MR_r2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
MR_def_label(check_hlds__switch_detection__find_bind_var_9_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r5,1)) {
		MR_GOTO_LAB(check_hlds__switch_detection__find_bind_var_9_0_i9);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_r4 = (MR_Integer) 0;
	MR_r2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__search_3_0);
MR_decl_entry(fn__cord__snoc_2_0);
MR_decl_entry(set_tree234__insert_3_0);
MR_decl_entry(map__det_update_4_0);
MR_decl_entry(fn__cord__singleton_1_0);
MR_decl_entry(map__det_insert_4_0);

MR_BEGIN_MODULE(check_hlds__switch_detection_module5)
	MR_init_entry1(check_hlds__switch_detection__add_single_entry_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__switch_detection__add_single_entry_4_0);
	MR_init_label9(check_hlds__switch_detection__add_single_entry_4_0,4,7,8,9,10,12,3,14,16)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'add_single_entry'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__switch_detection__add_single_entry_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_sv(4) = MR_tempr1;
	MR_tempr3 = MR_r1;
	MR_tfield(0, MR_tempr1, 0) = MR_tempr3;
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_tempr4 = MR_r3;
	MR_sv(3) = MR_tfield(0, MR_tempr4, 1);
	MR_tempr2 = MR_tfield(0, MR_tempr4, 0);
	MR_sv(1) = MR_tempr3;
	MR_sv(2) = MR_tempr2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, cons_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(check_hlds__switch_detection, cons_id_entry);
	MR_r3 = MR_tempr2;
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(map__search_3_0,
		check_hlds__switch_detection__add_single_entry_4_0_i4);
MR_def_label(check_hlds__switch_detection__add_single_entry_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__switch_detection__add_single_entry_4_0_i3);
	}
	MR_r4 = MR_tfield(0, MR_r2, 0);
	if (MR_INT_NE(MR_r4,0)) {
		MR_GOTO_LAB(check_hlds__switch_detection__add_single_entry_4_0_i7);
	}
	MR_r3 = MR_sv(4);
	MR_r2 = MR_tfield(0, MR_r2, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = (MR_Integer) 0;
	MR_sv(4) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__switch_detection, case_arm);
	}
	MR_np_call_localret_ent(fn__cord__snoc_2_0,
		check_hlds__switch_detection__add_single_entry_4_0_i10);
MR_def_label(check_hlds__switch_detection__add_single_entry_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,2)) {
		MR_GOTO_LAB(check_hlds__switch_detection__add_single_entry_4_0_i8);
	}
	MR_r3 = MR_sv(4);
	MR_r2 = MR_tfield(0, MR_r2, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = (MR_Integer) 2;
	MR_sv(4) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__switch_detection, case_arm);
	}
	MR_np_call_localret_ent(fn__cord__snoc_2_0,
		check_hlds__switch_detection__add_single_entry_4_0_i10);
MR_def_label(check_hlds__switch_detection__add_single_entry_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_tfield(0, MR_r2, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, cons_id);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(set_tree234__insert_3_0,
		check_hlds__switch_detection__add_single_entry_4_0_i9);
MR_def_label(check_hlds__switch_detection__add_single_entry_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(4);
	MR_r2 = MR_sv(3);
	MR_sv(3) = (MR_Integer) 2;
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__switch_detection, case_arm);
	MR_np_call_localret_ent(fn__cord__snoc_2_0,
		check_hlds__switch_detection__add_single_entry_4_0_i10);
MR_def_label(check_hlds__switch_detection__add_single_entry_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r5 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, cons_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(check_hlds__switch_detection, cons_id_entry);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(map__det_update_4_0,
		check_hlds__switch_detection__add_single_entry_4_0_i12);
MR_def_label(check_hlds__switch_detection__add_single_entry_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(4);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
MR_def_label(check_hlds__switch_detection__add_single_entry_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__switch_detection, case_arm);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		check_hlds__switch_detection__add_single_entry_4_0_i14);
MR_def_label(check_hlds__switch_detection__add_single_entry_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r5 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, cons_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(check_hlds__switch_detection, cons_id_entry);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(map__det_insert_4_0,
		check_hlds__switch_detection__add_single_entry_4_0_i16);
MR_def_label(check_hlds__switch_detection__add_single_entry_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(3);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__switch_detection_module6)
	MR_init_entry1(check_hlds__switch_detection__partition_disj_trial_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__switch_detection__partition_disj_trial_6_0);
	MR_init_label6(check_hlds__switch_detection__partition_disj_trial_6_0,23,3,6,8,10,12)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'partition_disj_trial'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__switch_detection__partition_disj_trial_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
MR_def_label(check_hlds__switch_detection__partition_disj_trial_6_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__switch_detection__partition_disj_trial_6_0_i3);
	}
	MR_r1 = MR_r3;
	MR_r2 = MR_r4;
	MR_decr_sp_and_return(6);
MR_def_label(check_hlds__switch_detection__partition_disj_trial_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(4) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(5) = MR_tfield(1, MR_tempr1, 1);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,4);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,5);
	}
	MR_np_call_localret_ent(map__init_1_0,
		check_hlds__switch_detection__partition_disj_trial_6_0_i6);
MR_def_label(check_hlds__switch_detection__partition_disj_trial_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_tempr1;
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(f_99_104_101_99_107_95_104_108_100_115_95_95_115_119_105_116_99_104_95_100_101_116_101_99_116_105_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_98_105_110_100_95_118_97_114_95_50_95_95_91_49_44_32_50_93_95_48_11_0,
		check_hlds__switch_detection__partition_disj_trial_6_0_i8);
MR_def_label(check_hlds__switch_detection__partition_disj_trial_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(check_hlds__switch_detection__partition_disj_trial_6_0_i10);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_r1 = MR_sv(5);
	MR_r4 = MR_sv(3);
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(check_hlds__switch_detection__partition_disj_trial_6_0_i23);
	}
MR_def_label(check_hlds__switch_detection__partition_disj_trial_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_tfield(1, MR_r3, 0);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(check_hlds__switch_detection__add_single_entry_4_0,
		check_hlds__switch_detection__partition_disj_trial_6_0_i12);
MR_def_label(check_hlds__switch_detection__partition_disj_trial_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tempr1;
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(check_hlds__switch_detection__partition_disj_trial_6_0_i23);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__hlds__hlds_goal__goal_info_get_nonlocals_1_0);
MR_decl_entry(set__delete_3_0);
MR_decl_entry(set__empty_1_0);
MR_decl_entry(list__foldl_4_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0;
MR_decl_entry(list__reverse_2_0);
MR_decl_entry(list__map_3_0);

MR_BEGIN_MODULE(check_hlds__switch_detection_module7)
	MR_init_entry1(check_hlds__switch_detection__expand_sub_disj_process_conj_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__switch_detection__expand_sub_disj_process_conj_7_0);
	MR_init_label10(check_hlds__switch_detection__expand_sub_disj_process_conj_7_0,93,4,14,16,17,21,23,26,32,10)
	MR_init_label5(check_hlds__switch_detection__expand_sub_disj_process_conj_7_0,11,33,35,36,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'expand_sub_disj_process_conj'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__switch_detection__expand_sub_disj_process_conj_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
MR_def_label(check_hlds__switch_detection__expand_sub_disj_process_conj_7_0,93)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	while (1) {
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO_LAB(check_hlds__switch_detection__expand_sub_disj_process_conj_7_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(1, MR_r3, 0);
	MR_r8 = MR_tempr1;
	MR_r7 = MR_tfield(0, MR_tempr1, 0);
	if (MR_PTAG_TESTR(MR_r7,0)) {
		MR_GOTO_LAB(check_hlds__switch_detection__expand_sub_disj_process_conj_7_0_i4);
	}
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_r4;
	MR_r3 = MR_tfield(1, MR_r3, 1);
	MR_r4 = MR_tempr2;
	MR_succip_word = MR_sv(9);
	continue;
	}
	break; } /* end while */
MR_def_label(check_hlds__switch_detection__expand_sub_disj_process_conj_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r7,3,2)) {
		MR_GOTO_LAB(check_hlds__switch_detection__expand_sub_disj_process_conj_7_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(3, MR_r7, 1);
	MR_r9 = MR_tempr1;
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(check_hlds__switch_detection__expand_sub_disj_process_conj_7_0_i1);
	}
	MR_sv(3) = MR_tfield(1, MR_r3, 1);
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(check_hlds__switch_detection__expand_sub_disj_process_conj_7_0_i11);
	}
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(check_hlds__switch_detection__expand_sub_disj_process_conj_7_0_i11);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r5;
	MR_sv(4) = MR_tempr1;
	MR_sv(5) = MR_r4;
	MR_sv(6) = MR_r6;
	MR_r1 = MR_tfield(0, MR_r8, 1);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_nonlocals_1_0,
		check_hlds__switch_detection__expand_sub_disj_process_conj_7_0_i14);
MR_def_label(check_hlds__switch_detection__expand_sub_disj_process_conj_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = (MR_Word) MR_TAG_COMMON(0,0,4);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	}
	MR_np_call_localret_ent(set__delete_3_0,
		check_hlds__switch_detection__expand_sub_disj_process_conj_7_0_i16);
MR_def_label(check_hlds__switch_detection__expand_sub_disj_process_conj_7_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(set__empty_1_0,
		check_hlds__switch_detection__expand_sub_disj_process_conj_7_0_i17);
MR_def_label(check_hlds__switch_detection__expand_sub_disj_process_conj_7_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__switch_detection__expand_sub_disj_process_conj_7_0_i10);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_sv(4);
	MR_tempr1 = MR_tfield(0, MR_tfield(1, MR_tempr3, 0), 0);
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(check_hlds__switch_detection__expand_sub_disj_process_conj_7_0_i10);
	}
	MR_tempr2 = MR_tfield(0, MR_tempr1, 3);
	if (MR_PTAG_TESTR(MR_tempr2,1)) {
		MR_GOTO_LAB(check_hlds__switch_detection__expand_sub_disj_process_conj_7_0_i10);
	}
	MR_sv(7) = MR_tfield(1, MR_tempr3, 1);
	MR_sv(8) = MR_tfield(1, MR_tempr2, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tfield(1, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___term__var_1_0,
		check_hlds__switch_detection__expand_sub_disj_process_conj_7_0_i21);
MR_def_label(check_hlds__switch_detection__expand_sub_disj_process_conj_7_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__switch_detection__expand_sub_disj_process_conj_7_0_i10);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(check_hlds__switch_detection__all_disjuncts_are_switch_var_unifies_3_0,
		check_hlds__switch_detection__expand_sub_disj_process_conj_7_0_i23);
MR_def_label(check_hlds__switch_detection__expand_sub_disj_process_conj_7_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__switch_detection__expand_sub_disj_process_conj_7_0_i10);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(8);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, cons_id);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__sort_2_0,
		check_hlds__switch_detection__expand_sub_disj_process_conj_7_0_i26);
MR_def_label(check_hlds__switch_detection__expand_sub_disj_process_conj_7_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__switch_detection__expand_sub_disj_process_conj_7_0_i10);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 2) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 3);
	MR_tempr4 = MR_r1;
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(1, MR_tempr4, 0);
	MR_tfield(1, MR_tempr1, 1) = MR_tfield(1, MR_tempr4, 1);
	MR_tfield(1, MR_tempr1, 2) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr3;
	MR_tfield(0, MR_tempr3, 0) = (MR_Word) MR_COMMON(4,0);
	MR_tfield(0, MR_tempr3, 1) = (MR_Word) MR_ENTRY_AP(check_hlds__switch_detection__add_multi_entry_for_cons_id_4_0);
	MR_tfield(0, MR_tempr3, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr3, 3) = MR_tempr1;
	MR_tempr1 = MR_tempr4;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, cons_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(check_hlds__switch_detection, cases_table);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(6);
	}
	MR_np_call_localret_ent(list__foldl_4_0,
		check_hlds__switch_detection__expand_sub_disj_process_conj_7_0_i32);
MR_def_label(check_hlds__switch_detection__expand_sub_disj_process_conj_7_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(9);
MR_def_label(check_hlds__switch_detection__expand_sub_disj_process_conj_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r5 = MR_sv(2);
	MR_r9 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_r6 = MR_sv(6);
MR_def_label(check_hlds__switch_detection__expand_sub_disj_process_conj_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r5;
	MR_sv(4) = MR_r9;
	MR_sv(6) = MR_r6;
	MR_sv(5) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r1 = MR_sv(5);
	MR_r2 = MR_r4;
	MR_np_call_localret_ent(list__reverse_2_0,
		check_hlds__switch_detection__expand_sub_disj_process_conj_7_0_i33);
MR_def_label(check_hlds__switch_detection__expand_sub_disj_process_conj_7_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(5,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(check_hlds__switch_detection__create_expanded_conjunction_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tfield(0, MR_tempr1, 4) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(2);
	MR_r1 = MR_sv(5);
	MR_r2 = MR_r1;
	MR_r4 = MR_sv(4);
	}
	MR_np_call_localret_ent(list__map_3_0,
		check_hlds__switch_detection__expand_sub_disj_process_conj_7_0_i35);
MR_def_label(check_hlds__switch_detection__expand_sub_disj_process_conj_7_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r4 = MR_sv(6);
	MR_np_call_localret_ent(check_hlds__switch_detection__partition_disj_trial_6_0,
		check_hlds__switch_detection__expand_sub_disj_process_conj_7_0_i36);
MR_def_label(check_hlds__switch_detection__expand_sub_disj_process_conj_7_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__switch_detection__expand_sub_disj_process_conj_7_0_i1);
	}
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(9);
MR_def_label(check_hlds__switch_detection__expand_sub_disj_process_conj_7_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_goal__goal_info_add_feature_3_0);

MR_BEGIN_MODULE(check_hlds__switch_detection_module8)
	MR_init_entry1(check_hlds__switch_detection__expand_sub_disjs_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__switch_detection__expand_sub_disjs_5_0);
	MR_init_label7(check_hlds__switch_detection__expand_sub_disjs_5_0,43,3,4,8,5,12,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'expand_sub_disjs'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__switch_detection__expand_sub_disjs_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
MR_def_label(check_hlds__switch_detection__expand_sub_disjs_5_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(check_hlds__switch_detection__expand_sub_disjs_5_0_i3);
	}
	MR_r2 = MR_r4;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(7);
MR_def_label(check_hlds__switch_detection__expand_sub_disjs_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r4;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_tempr1 = MR_tfield(1, MR_tempr2, 0);
	MR_sv(4) = MR_tempr1;
	MR_sv(5) = MR_tfield(1, MR_tempr2, 1);
	MR_sv(6) = MR_tfield(0, MR_tempr1, 0);
	MR_r1 = (MR_Integer) 13;
	MR_r2 = MR_tfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_add_feature_3_0,
		check_hlds__switch_detection__expand_sub_disjs_5_0_i4);
MR_def_label(check_hlds__switch_detection__expand_sub_disjs_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(6),3,1)) {
		MR_GOTO_LAB(check_hlds__switch_detection__expand_sub_disjs_5_0_i5);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(6);
	MR_tempr1 = MR_tfield(3, MR_tempr2, 1);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(check_hlds__switch_detection__expand_sub_disjs_5_0_i5);
	}
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tfield(3, MR_tempr2, 2);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = MR_tempr1;
	MR_r6 = MR_sv(3);
	}
	MR_np_call_localret_ent(check_hlds__switch_detection__expand_sub_disj_process_conj_7_0,
		check_hlds__switch_detection__expand_sub_disjs_5_0_i8);
MR_def_label(check_hlds__switch_detection__expand_sub_disjs_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__switch_detection__expand_sub_disjs_5_0_i1);
	}
	MR_r1 = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_tempr1;
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(check_hlds__switch_detection__expand_sub_disjs_5_0_i43);
	}
MR_def_label(check_hlds__switch_detection__expand_sub_disjs_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(6),3,2)) {
		MR_GOTO_LAB(check_hlds__switch_detection__expand_sub_disjs_5_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = MR_tempr2;
	MR_r6 = MR_sv(3);
	}
	MR_np_call_localret_ent(check_hlds__switch_detection__expand_sub_disj_process_conj_7_0,
		check_hlds__switch_detection__expand_sub_disjs_5_0_i12);
MR_def_label(check_hlds__switch_detection__expand_sub_disjs_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__switch_detection__expand_sub_disjs_5_0_i1);
	}
	MR_r1 = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_tempr1;
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(check_hlds__switch_detection__expand_sub_disjs_5_0_i43);
	}
MR_def_label(check_hlds__switch_detection__expand_sub_disjs_5_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__map__init_0_0);
MR_decl_entry(fn__map__count_1_0);

MR_BEGIN_MODULE(check_hlds__switch_detection_module9)
	MR_init_entry1(check_hlds__switch_detection__partition_disj_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__switch_detection__partition_disj_8_0);
	MR_init_label10(check_hlds__switch_detection__partition_disj_8_0,2,3,5,8,9,11,15,7,19,21)
	MR_init_label7(check_hlds__switch_detection__partition_disj_8_0,22,24,28,29,17,30,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'partition_disj'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__switch_detection__partition_disj_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(6) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, cons_id);
	MR_r1 = MR_sv(6);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(check_hlds__switch_detection, cons_id_entry);
	MR_np_call_localret_ent(fn__map__init_0_0,
		check_hlds__switch_detection__partition_disj_8_0_i2);
MR_def_label(check_hlds__switch_detection__partition_disj_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, cons_id);
	MR_np_call_localret_ent(fn__set_tree234__init_0_0,
		check_hlds__switch_detection__partition_disj_8_0_i3);
MR_def_label(check_hlds__switch_detection__partition_disj_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(check_hlds__switch_detection__partition_disj_trial_6_0,
		check_hlds__switch_detection__partition_disj_8_0_i5);
MR_def_label(check_hlds__switch_detection__partition_disj_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__switch_detection__partition_disj_8_0_i7);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, cons_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(check_hlds__switch_detection, cons_id_entry);
	MR_r3 = MR_tfield(0, MR_sv(2), 0);
	MR_np_call_localret_ent(fn__map__count_1_0,
		check_hlds__switch_detection__partition_disj_8_0_i8);
MR_def_label(check_hlds__switch_detection__partition_disj_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_LT(MR_r1,1)) {
		MR_GOTO_LAB(check_hlds__switch_detection__partition_disj_8_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(6) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, cons_id);
	MR_sv(7) = (MR_Word) MR_CTOR0_ADDR(check_hlds__switch_detection, cons_id_entry);
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(map__to_assoc_list_2_0,
		check_hlds__switch_detection__partition_disj_8_0_i9);
MR_def_label(check_hlds__switch_detection__partition_disj_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_sv(3) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(2,2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(check_hlds__switch_detection__convert_case_7_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(6);
	}
	MR_np_call_localret_ent(fn__set_tree234__init_0_0,
		check_hlds__switch_detection__partition_disj_8_0_i11);
MR_def_label(check_hlds__switch_detection__partition_disj_8_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,0,3);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(2);
	MR_r6 = (MR_Word) MR_tbmkword(0, 0);
	MR_r7 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__foldl2_6_0,
		check_hlds__switch_detection__partition_disj_8_0_i15);
MR_def_label(check_hlds__switch_detection__partition_disj_8_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, case);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__sort_2_0,
		check_hlds__switch_detection__partition_disj_8_0_i30);
MR_def_label(check_hlds__switch_detection__partition_disj_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	}
	MR_np_call_localret_ent(check_hlds__switch_detection__expand_sub_disjs_5_0,
		check_hlds__switch_detection__partition_disj_8_0_i19);
MR_def_label(check_hlds__switch_detection__partition_disj_8_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__switch_detection__partition_disj_8_0_i17);
	}
	MR_sv(1) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, cons_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(check_hlds__switch_detection, cons_id_entry);
	MR_r3 = MR_tfield(0, MR_sv(1), 0);
	MR_np_call_localret_ent(fn__map__count_1_0,
		check_hlds__switch_detection__partition_disj_8_0_i21);
MR_def_label(check_hlds__switch_detection__partition_disj_8_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_LT(MR_r1,1)) {
		MR_GOTO_LAB(check_hlds__switch_detection__partition_disj_8_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(3) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, cons_id);
	MR_sv(5) = (MR_Word) MR_CTOR0_ADDR(check_hlds__switch_detection, cons_id_entry);
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(map__to_assoc_list_2_0,
		check_hlds__switch_detection__partition_disj_8_0_i22);
MR_def_label(check_hlds__switch_detection__partition_disj_8_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_sv(2) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(2,3);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(check_hlds__switch_detection__convert_case_7_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(3);
	}
	MR_np_call_localret_ent(fn__set_tree234__init_0_0,
		check_hlds__switch_detection__partition_disj_8_0_i24);
MR_def_label(check_hlds__switch_detection__partition_disj_8_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,0,3);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(1);
	MR_r6 = (MR_Word) MR_tbmkword(0, 0);
	MR_r7 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__foldl2_6_0,
		check_hlds__switch_detection__partition_disj_8_0_i28);
MR_def_label(check_hlds__switch_detection__partition_disj_8_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, case);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__sort_2_0,
		check_hlds__switch_detection__partition_disj_8_0_i29);
MR_def_label(check_hlds__switch_detection__partition_disj_8_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_r1;
	MR_r4 = (MR_Integer) 0;
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(check_hlds__switch_detection__partition_disj_8_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(fn__check_hlds__switch_detection__convert_cases_table_2_0,
		check_hlds__switch_detection__partition_disj_8_0_i30);
MR_def_label(check_hlds__switch_detection__partition_disj_8_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_r1;
	MR_r4 = MR_sv(5);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(check_hlds__switch_detection__partition_disj_8_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(set_tree234__delete_3_0);

MR_BEGIN_MODULE(check_hlds__switch_detection_module10)
	MR_init_entry1(check_hlds__switch_detection__delete_covered_functors_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__switch_detection__delete_covered_functors_3_0);
	MR_init_label4(check_hlds__switch_detection__delete_covered_functors_3_0,13,3,4,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'delete_covered_functors'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__switch_detection__delete_covered_functors_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(check_hlds__switch_detection__delete_covered_functors_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__switch_detection__delete_covered_functors_3_0_i3);
	}
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(4);
MR_def_label(check_hlds__switch_detection__delete_covered_functors_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r1;
	MR_sv(1) = MR_tfield(1, MR_tempr3, 1);
	MR_tempr1 = MR_tfield(1, MR_tempr3, 0);
	MR_sv(2) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(3) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, cons_id);
	MR_r1 = MR_sv(3);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(set_tree234__delete_3_0,
		check_hlds__switch_detection__delete_covered_functors_3_0_i4);
MR_def_label(check_hlds__switch_detection__delete_covered_functors_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,3);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,3,1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__foldl_4_0,
		check_hlds__switch_detection__delete_covered_functors_3_0_i7);
MR_def_label(check_hlds__switch_detection__delete_covered_functors_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(check_hlds__switch_detection__delete_covered_functors_3_0_i13);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__list__length_1_0);

MR_BEGIN_MODULE(check_hlds__switch_detection_module11)
	MR_init_entry1(fn__check_hlds__switch_detection__count_covered_cons_ids_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__check_hlds__switch_detection__count_covered_cons_ids_1_0);
	MR_init_label3(fn__check_hlds__switch_detection__count_covered_cons_ids_1_0,13,4,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'count_covered_cons_ids'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__check_hlds__switch_detection__count_covered_cons_ids_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__check_hlds__switch_detection__count_covered_cons_ids_1_0_i13);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__check_hlds__switch_detection__count_covered_cons_ids_1_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r1;
	MR_sv(1) = MR_tfield(1, MR_tempr2, 1);
	MR_tempr1 = MR_tempr2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, cons_id);
	MR_r2 = MR_tfield(0, MR_tfield(1, MR_tempr1, 0), 1);
	}
	MR_np_call_localret_ent(fn__list__length_1_0,
		fn__check_hlds__switch_detection__count_covered_cons_ids_1_0_i4);
MR_def_label(fn__check_hlds__switch_detection__count_covered_cons_ids_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = ((MR_Integer) 1 + (MR_Integer) MR_r1);
	MR_r1 = MR_tempr1;
	}
	MR_np_localcall_lab(fn__check_hlds__switch_detection__count_covered_cons_ids_1_0,
		fn__check_hlds__switch_detection__count_covered_cons_ids_1_0_i5);
MR_def_label(fn__check_hlds__switch_detection__count_covered_cons_ids_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_sv(1) + (MR_Integer) MR_r1);
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__switch_detection_module12)
	MR_init_entry1(check_hlds__switch_detection__detect_switches_in_goal_9_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__switch_detection__detect_switches_in_goal_9_0);
	MR_init_label1(check_hlds__switch_detection__detect_switches_in_goal_9_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'detect_switches_in_goal'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__switch_detection__detect_switches_in_goal_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(check_hlds__switch_detection__detect_switches_in_goal_update_instmap_10_0,
		check_hlds__switch_detection__detect_switches_in_goal_9_0_i2);
MR_def_label(check_hlds__switch_detection__detect_switches_in_goal_9_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__goal_util__update_instmap_3_0);

MR_BEGIN_MODULE(check_hlds__switch_detection_module13)
	MR_init_entry1(check_hlds__switch_detection__detect_switches_in_goal_update_instmap_10_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__switch_detection__detect_switches_in_goal_update_instmap_10_0);
	MR_init_label2(check_hlds__switch_detection__detect_switches_in_goal_update_instmap_10_0,2,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'detect_switches_in_goal_update_instmap'/10 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__switch_detection__detect_switches_in_goal_update_instmap_10_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r4;
	MR_sv(1) = MR_tempr3;
	MR_sv(2) = MR_tfield(0, MR_tempr3, 1);
	MR_sv(3) = MR_r3;
	MR_r4 = MR_sv(2);
	MR_tempr1 = MR_r5;
	MR_r5 = MR_tfield(0, MR_sv(1), 0);
	MR_tempr2 = MR_r6;
	MR_r6 = MR_tempr1;
	MR_r7 = MR_tempr2;
	}
	MR_np_call_localret_ent(check_hlds__switch_detection__detect_switches_in_goal_expr_10_0,
		check_hlds__switch_detection__detect_switches_in_goal_update_instmap_10_0_i2);
MR_def_label(check_hlds__switch_detection__detect_switches_in_goal_update_instmap_10_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(2);
	MR_tempr2 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r2;
	MR_tempr3 = MR_sv(3);
	MR_sv(3) = MR_r3;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr3;
	}
	MR_np_call_localret_ent(hlds__goal_util__update_instmap_3_0,
		check_hlds__switch_detection__detect_switches_in_goal_update_instmap_10_0_i4);
MR_def_label(check_hlds__switch_detection__detect_switches_in_goal_update_instmap_10_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__instmap__pre_lambda_update_5_0);
MR_decl_entry(set__to_sorted_list_2_0);
MR_decl_entry(libs__compiler_util__unexpected_2_0);

MR_BEGIN_MODULE(check_hlds__switch_detection_module14)
	MR_init_entry1(check_hlds__switch_detection__detect_switches_in_goal_expr_10_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__switch_detection__detect_switches_in_goal_expr_10_0);
	MR_init_label10(check_hlds__switch_detection__detect_switches_in_goal_expr_10_0,103,53,54,61,105,5,7,111,11,13)
	MR_init_label10(check_hlds__switch_detection__detect_switches_in_goal_expr_10_0,109,16,17,18,107,21,108,104,71,24)
	MR_init_label10(check_hlds__switch_detection__detect_switches_in_goal_expr_10_0,27,110,41,37,38,32,33,34,106,47)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'detect_switches_in_goal_expr'/10 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__switch_detection__detect_switches_in_goal_expr_10_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r5),
		MR_LABEL_AP(check_hlds__switch_detection__detect_switches_in_goal_expr_10_0_i103) MR_AND
		MR_LABEL_AP(check_hlds__switch_detection__detect_switches_in_goal_expr_10_0_i104) MR_AND
		MR_LABEL_AP(check_hlds__switch_detection__detect_switches_in_goal_expr_10_0_i104) MR_AND
		MR_LABEL_AP(check_hlds__switch_detection__detect_switches_in_goal_expr_10_0_i61));
MR_def_label(check_hlds__switch_detection__detect_switches_in_goal_expr_10_0,103)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_r5;
	MR_tempr1 = MR_tfield(0, MR_tempr3, 1);
	MR_tempr2 = MR_tag(MR_tempr1);
	if (((MR_tempr2 == MR_mktag((MR_Integer) 0)) || (MR_tempr2 == MR_mktag((MR_Integer) 1)))) {
		MR_GOTO_LAB(check_hlds__switch_detection__detect_switches_in_goal_expr_10_0_i71);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_tempr3;
	MR_sv(4) = MR_tempr1;
	MR_sv(5) = MR_tfield(2, MR_tempr1, 8);
	MR_tempr4 = MR_r6;
	MR_sv(6) = MR_tempr4;
	MR_sv(7) = MR_r7;
	MR_r1 = MR_tempr4;
	MR_r2 = MR_tfield(2, MR_tempr1, 5);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_tfield(2, MR_tempr1, 6);
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(hlds__instmap__pre_lambda_update_5_0,
		check_hlds__switch_detection__detect_switches_in_goal_expr_10_0_i53);
MR_def_label(check_hlds__switch_detection__detect_switches_in_goal_expr_10_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(6);
	MR_r6 = MR_sv(7);
	}
	MR_np_call_localret_ent(check_hlds__switch_detection__detect_switches_in_goal_9_0,
		check_hlds__switch_detection__detect_switches_in_goal_expr_10_0_i54);
MR_def_label(check_hlds__switch_detection__detect_switches_in_goal_expr_10_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 9);
	MR_tempr3 = MR_sv(4);
	MR_tfield(2, MR_tempr1, 0) = MR_tfield(2, MR_tempr3, 0);
	MR_tfield(2, MR_tempr1, 1) = MR_tfield(2, MR_tempr3, 1);
	MR_tfield(2, MR_tempr1, 2) = MR_tfield(2, MR_tempr3, 2);
	MR_tfield(2, MR_tempr1, 4) = MR_tfield(2, MR_tempr3, 4);
	MR_tfield(2, MR_tempr1, 5) = MR_tfield(2, MR_tempr3, 5);
	MR_tfield(2, MR_tempr1, 6) = MR_tfield(2, MR_tempr3, 6);
	MR_tfield(2, MR_tempr1, 7) = MR_tfield(2, MR_tempr3, 7);
	MR_tfield(2, MR_tempr1, 8) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 5);
	MR_r1 = MR_tempr2;
	MR_tempr4 = MR_sv(3);
	MR_tfield(0, MR_tempr2, 0) = MR_tfield(0, MR_tempr4, 0);
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 2) = MR_tfield(0, MR_tempr4, 2);
	MR_tfield(0, MR_tempr2, 3) = MR_tfield(0, MR_tempr4, 3);
	MR_tfield(0, MR_tempr2, 4) = MR_tfield(0, MR_tempr4, 4);
	MR_decr_sp_and_return(10);
	}
MR_def_label(check_hlds__switch_detection__detect_switches_in_goal_expr_10_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tfield(3, MR_r5, 0),
		MR_LABEL_AP(check_hlds__switch_detection__detect_switches_in_goal_expr_10_0_i104) MR_AND
		MR_LABEL_AP(check_hlds__switch_detection__detect_switches_in_goal_expr_10_0_i105) MR_AND
		MR_LABEL_AP(check_hlds__switch_detection__detect_switches_in_goal_expr_10_0_i7) MR_AND
		MR_LABEL_AP(check_hlds__switch_detection__detect_switches_in_goal_expr_10_0_i106) MR_AND
		MR_LABEL_AP(check_hlds__switch_detection__detect_switches_in_goal_expr_10_0_i107) MR_AND
		MR_LABEL_AP(check_hlds__switch_detection__detect_switches_in_goal_expr_10_0_i108) MR_AND
		MR_LABEL_AP(check_hlds__switch_detection__detect_switches_in_goal_expr_10_0_i109) MR_AND
		MR_LABEL_AP(check_hlds__switch_detection__detect_switches_in_goal_expr_10_0_i110));
MR_def_label(check_hlds__switch_detection__detect_switches_in_goal_expr_10_0,105)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(1) = MR_tfield(3, MR_tempr1, 1);
	MR_r4 = MR_tfield(3, MR_tempr1, 2);
	MR_r5 = MR_r6;
	MR_r6 = MR_r7;
	}
	MR_np_call_localret_ent(check_hlds__switch_detection__detect_switches_in_conj_9_0,
		check_hlds__switch_detection__detect_switches_in_goal_expr_10_0_i5);
MR_def_label(check_hlds__switch_detection__detect_switches_in_goal_expr_10_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(10);
	}
MR_def_label(check_hlds__switch_detection__detect_switches_in_goal_expr_10_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r8 = MR_tfield(3, MR_r5, 1);
	if (MR_LTAGS_TESTR(MR_r8,0,0)) {
		MR_GOTO_LAB(check_hlds__switch_detection__detect_switches_in_goal_expr_10_0_i111);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,7,0);
	MR_r2 = MR_r6;
	MR_r3 = MR_r7;
	MR_proceed();
MR_def_label(check_hlds__switch_detection__detect_switches_in_goal_expr_10_0,111)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(4) = MR_tempr1;
	MR_sv(5) = MR_r8;
	MR_sv(6) = MR_r6;
	MR_sv(7) = MR_r7;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_nonlocals_1_0,
		check_hlds__switch_detection__detect_switches_in_goal_expr_10_0_i11);
MR_def_label(check_hlds__switch_detection__detect_switches_in_goal_expr_10_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(set__to_sorted_list_2_0,
		check_hlds__switch_detection__detect_switches_in_goal_expr_10_0_i13);
MR_def_label(check_hlds__switch_detection__detect_switches_in_goal_expr_10_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_r2;
	MR_r7 = MR_sv(3);
	MR_r8 = (MR_Word) MR_tbmkword(0, 0);
	MR_r9 = MR_sv(6);
	MR_r10 = MR_sv(7);
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(check_hlds__switch_detection__detect_switches_in_disj_13_0);
	}
MR_def_label(check_hlds__switch_detection__detect_switches_in_goal_expr_10_0,109)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(4) = MR_tfield(3, MR_tempr1, 1);
	MR_sv(5) = MR_tfield(3, MR_tempr1, 3);
	MR_sv(6) = MR_tfield(3, MR_tempr1, 4);
	MR_r4 = MR_tfield(3, MR_tempr1, 2);
	MR_r5 = MR_r6;
	MR_r6 = MR_r7;
	}
	MR_np_call_localret_ent(check_hlds__switch_detection__detect_switches_in_goal_update_instmap_10_0,
		check_hlds__switch_detection__detect_switches_in_goal_expr_10_0_i16);
MR_def_label(check_hlds__switch_detection__detect_switches_in_goal_expr_10_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r2;
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_tempr2;
	MR_tempr4 = MR_r4;
	MR_r4 = MR_tempr1;
	MR_r5 = MR_tempr3;
	MR_r6 = MR_tempr4;
	}
	MR_np_call_localret_ent(check_hlds__switch_detection__detect_switches_in_goal_9_0,
		check_hlds__switch_detection__detect_switches_in_goal_expr_10_0_i17);
MR_def_label(check_hlds__switch_detection__detect_switches_in_goal_expr_10_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_tempr2;
	MR_r6 = MR_tempr3;
	}
	MR_np_call_localret_ent(check_hlds__switch_detection__detect_switches_in_goal_9_0,
		check_hlds__switch_detection__detect_switches_in_goal_expr_10_0_i18);
MR_def_label(check_hlds__switch_detection__detect_switches_in_goal_expr_10_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 5);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(4);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(5);
	MR_tfield(3, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 4) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(10);
	}
MR_def_label(check_hlds__switch_detection__detect_switches_in_goal_expr_10_0,107)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_r4 = MR_tfield(3, MR_r5, 1);
	MR_r5 = MR_r6;
	MR_r6 = MR_r7;
	MR_np_call_localret_ent(check_hlds__switch_detection__detect_switches_in_goal_9_0,
		check_hlds__switch_detection__detect_switches_in_goal_expr_10_0_i21);
MR_def_label(check_hlds__switch_detection__detect_switches_in_goal_expr_10_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(10);
	}
MR_def_label(check_hlds__switch_detection__detect_switches_in_goal_expr_10_0,108)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r5;
	MR_r8 = MR_tfield(3, MR_tempr2, 2);
	MR_tempr1 = MR_tfield(3, MR_tempr2, 1);
	MR_sv(1) = MR_tempr1;
	if (MR_RTAGS_TESTR(MR_tempr1,3,2)) {
		MR_GOTO_LAB(check_hlds__switch_detection__detect_switches_in_goal_expr_10_0_i24);
	}
	MR_r9 = MR_tfield(3, MR_tempr1, 2);
	if (MR_INT_NE(MR_r9,0)) {
		MR_GOTO_LAB(check_hlds__switch_detection__detect_switches_in_goal_expr_10_0_i24);
	}
	MR_GOTO_LAB(check_hlds__switch_detection__detect_switches_in_goal_expr_10_0_i71);
	}
MR_def_label(check_hlds__switch_detection__detect_switches_in_goal_expr_10_0,104)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
MR_def_label(check_hlds__switch_detection__detect_switches_in_goal_expr_10_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r5;
	MR_r2 = MR_r6;
	MR_r3 = MR_r7;
	MR_decr_sp_and_return(10);
MR_def_label(check_hlds__switch_detection__detect_switches_in_goal_expr_10_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r8;
	MR_r5 = MR_r6;
	MR_r6 = MR_r7;
	MR_np_call_localret_ent(check_hlds__switch_detection__detect_switches_in_goal_9_0,
		check_hlds__switch_detection__detect_switches_in_goal_expr_10_0_i27);
MR_def_label(check_hlds__switch_detection__detect_switches_in_goal_expr_10_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(10);
	}
MR_def_label(check_hlds__switch_detection__detect_switches_in_goal_expr_10_0,110)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(3, MR_r5, 1);
	MR_r8 = MR_tempr1;
	MR_tempr2 = MR_tag(MR_tempr1);
	if ((MR_tempr2 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(check_hlds__switch_detection__detect_switches_in_goal_expr_10_0_i32);
	}
	if ((MR_tempr2 == MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(check_hlds__switch_detection__detect_switches_in_goal_expr_10_0_i37);
	}
	MR_sv(1) = MR_tfield(2, MR_tempr1, 0);
	MR_sv(2) = MR_tfield(2, MR_tempr1, 1);
	MR_r4 = MR_tfield(2, MR_tempr1, 2);
	MR_r5 = MR_r6;
	MR_r6 = MR_r7;
	}
	MR_np_call_localret_ent(check_hlds__switch_detection__detect_switches_in_goal_9_0,
		check_hlds__switch_detection__detect_switches_in_goal_expr_10_0_i41);
MR_def_label(check_hlds__switch_detection__detect_switches_in_goal_expr_10_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 3);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(2, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(2, MR_tempr1, 2) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_r1 = MR_tempr2;
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 7;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_decr_sp_and_return(10);
	}
MR_def_label(check_hlds__switch_detection__detect_switches_in_goal_expr_10_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__check_hlds__switch_detection__this_file_0_0,
		check_hlds__switch_detection__detect_switches_in_goal_expr_10_0_i38);
MR_def_label(check_hlds__switch_detection__detect_switches_in_goal_expr_10_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("detect_switches_in_goal_2: bi_implication", 41);
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(check_hlds__switch_detection__detect_switches_in_goal_expr_10_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r8;
	MR_sv(4) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(5) = MR_tfield(1, MR_tempr1, 1);
	MR_sv(6) = MR_tfield(1, MR_tempr1, 2);
	MR_sv(7) = MR_tfield(1, MR_tempr1, 3);
	MR_sv(8) = MR_tfield(1, MR_tempr1, 5);
	MR_sv(9) = MR_tfield(1, MR_tempr1, 6);
	MR_r4 = MR_tfield(1, MR_tempr1, 4);
	MR_r5 = MR_r6;
	MR_r6 = MR_r7;
	}
	MR_np_call_localret_ent(check_hlds__switch_detection__detect_switches_in_goal_9_0,
		check_hlds__switch_detection__detect_switches_in_goal_expr_10_0_i33);
MR_def_label(check_hlds__switch_detection__detect_switches_in_goal_expr_10_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(8);
	MR_r5 = MR_tempr2;
	MR_r6 = MR_tempr3;
	}
	MR_np_call_localret_ent(check_hlds__switch_detection__detect_switches_in_orelse_9_0,
		check_hlds__switch_detection__detect_switches_in_goal_expr_10_0_i34);
MR_def_label(check_hlds__switch_detection__detect_switches_in_goal_expr_10_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 7);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(5);
	MR_tfield(1, MR_tempr1, 2) = MR_sv(6);
	MR_tfield(1, MR_tempr1, 3) = MR_sv(7);
	MR_tfield(1, MR_tempr1, 4) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 5) = MR_r1;
	MR_tfield(1, MR_tempr1, 6) = MR_sv(9);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_r1 = MR_tempr2;
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 7;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_decr_sp_and_return(10);
	}
MR_def_label(check_hlds__switch_detection__detect_switches_in_goal_expr_10_0,106)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr4 = MR_r5;
	MR_sv(1) = MR_tfield(3, MR_tempr4, 1);
	MR_sv(2) = MR_tfield(3, MR_tempr4, 2);
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_tempr3 = MR_r3;
	MR_r3 = MR_tempr2;
	MR_r4 = MR_tempr3;
	MR_r5 = MR_tfield(3, MR_r5, 3);
	}
	MR_np_call_localret_ent(check_hlds__switch_detection__detect_switches_in_cases_10_0,
		check_hlds__switch_detection__detect_switches_in_goal_expr_10_0_i47);
MR_def_label(check_hlds__switch_detection__detect_switches_in_goal_expr_10_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_goal__goal_to_disj_list_2_0);
MR_decl_entry(hlds__instmap__instmap_lookup_var_3_0);
MR_decl_entry(check_hlds__inst_match__inst_is_bound_2_0);

MR_BEGIN_MODULE(check_hlds__switch_detection_module15)
	MR_init_entry1(check_hlds__switch_detection__detect_switches_in_disj_13_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__switch_detection__detect_switches_in_disj_13_0);
	MR_init_label10(check_hlds__switch_detection__detect_switches_in_disj_13_0,77,6,5,8,9,10,12,3,17,18)
	MR_init_label6(check_hlds__switch_detection__detect_switches_in_disj_13_0,20,24,28,23,31,16)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'detect_switches_in_disj'/13 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__switch_detection__detect_switches_in_disj_13_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
MR_def_label(check_hlds__switch_detection__detect_switches_in_disj_13_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r6,0,0)) {
		MR_GOTO_LAB(check_hlds__switch_detection__detect_switches_in_disj_13_0_i3);
	}
	if (MR_LTAGS_TESTR(MR_r8,0,0)) {
		MR_GOTO_LAB(check_hlds__switch_detection__detect_switches_in_disj_13_0_i5);
	}
	MR_r1 = MR_r3;
	MR_r2 = MR_r4;
	MR_r3 = MR_r7;
	MR_r4 = MR_r5;
	MR_r5 = MR_r9;
	MR_r6 = MR_r10;
	MR_np_call_localret_ent(check_hlds__switch_detection__detect_sub_switches_in_disj_9_0,
		check_hlds__switch_detection__detect_switches_in_disj_13_0_i6);
MR_def_label(check_hlds__switch_detection__detect_switches_in_disj_13_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(12);
	}
MR_def_label(check_hlds__switch_detection__detect_switches_in_disj_13_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(6) = MR_r7;
	MR_sv(8) = MR_r9;
	MR_sv(9) = MR_r10;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r8;
	MR_r1 = MR_tfield(1, MR_tempr1, 1);
	MR_r2 = MR_tfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(check_hlds__switch_detection__select_best_switch_3_0,
		check_hlds__switch_detection__detect_switches_in_disj_13_0_i8);
MR_def_label(check_hlds__switch_detection__detect_switches_in_disj_13_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r1;
	MR_sv(5) = MR_tfield(0, MR_tempr2, 1);
	MR_tempr1 = MR_tempr2;
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_tfield(0, MR_tempr1, 2);
	MR_r5 = MR_sv(6);
	MR_r6 = MR_sv(8);
	MR_r7 = MR_sv(9);
	}
	MR_np_call_localret_ent(check_hlds__switch_detection__cases_to_switch_10_0,
		check_hlds__switch_detection__detect_switches_in_disj_13_0_i9);
MR_def_label(check_hlds__switch_detection__detect_switches_in_disj_13_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_sv(3);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(5);
	MR_r6 = MR_r2;
	MR_r7 = MR_sv(6);
	MR_r8 = (MR_Word) MR_tbmkword(0, 0);
	MR_r9 = MR_tempr2;
	MR_r10 = MR_tempr3;
	}
	MR_np_localcall_lab(check_hlds__switch_detection__detect_switches_in_disj_13_0,
		check_hlds__switch_detection__detect_switches_in_disj_13_0_i10);
MR_def_label(check_hlds__switch_detection__detect_switches_in_disj_13_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(1);
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_to_disj_list_2_0,
		check_hlds__switch_detection__detect_switches_in_disj_13_0_i12);
MR_def_label(check_hlds__switch_detection__detect_switches_in_disj_13_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 2);
	MR_r1 = MR_tempr3;
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr3, 1) = MR_tempr2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_decr_sp_and_return(12);
	}
MR_def_label(check_hlds__switch_detection__detect_switches_in_disj_13_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r6;
	MR_sv(11) = MR_tfield(1, MR_tempr1, 1);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_tempr2 = MR_r7;
	MR_sv(6) = MR_tempr2;
	MR_sv(7) = MR_r8;
	MR_sv(8) = MR_r9;
	MR_sv(9) = MR_r10;
	MR_sv(10) = MR_tfield(1, MR_tempr1, 0);
	MR_r1 = MR_tempr2;
	MR_r2 = MR_sv(10);
	}
	MR_np_call_localret_ent(hlds__instmap__instmap_lookup_var_3_0,
		check_hlds__switch_detection__detect_switches_in_disj_13_0_i17);
MR_def_label(check_hlds__switch_detection__detect_switches_in_disj_13_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__inst_match__inst_is_bound_2_0,
		check_hlds__switch_detection__detect_switches_in_disj_13_0_i18);
MR_def_label(check_hlds__switch_detection__detect_switches_in_disj_13_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__switch_detection__detect_switches_in_disj_13_0_i16);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(10);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(9);
	MR_np_call_localret_ent(check_hlds__switch_detection__partition_disj_8_0,
		check_hlds__switch_detection__detect_switches_in_disj_13_0_i20);
MR_def_label(check_hlds__switch_detection__detect_switches_in_disj_13_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__switch_detection__detect_switches_in_disj_13_0_i16);
	}
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(check_hlds__switch_detection__detect_switches_in_disj_13_0_i23);
	}
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO_LAB(check_hlds__switch_detection__detect_switches_in_disj_13_0_i24);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r3;
	MR_tempr1 = MR_tfield(1, MR_tempr3, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(check_hlds__switch_detection__detect_switches_in_disj_13_0_i24);
	}
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(3);
	MR_tempr1 = MR_tempr3;
	MR_r3 = MR_sv(4);
	MR_tempr2 = MR_r4;
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(6);
	MR_r6 = MR_sv(8);
	MR_r7 = MR_tempr2;
	MR_succip_word = MR_sv(12);
	MR_decr_sp(12);
	MR_np_tailcall_ent(check_hlds__switch_detection__cases_to_switch_10_0);
	}
MR_def_label(check_hlds__switch_detection__detect_switches_in_disj_13_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(6);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(8);
	MR_r6 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__switch_detection__detect_sub_switches_in_disj_9_0,
		check_hlds__switch_detection__detect_switches_in_disj_13_0_i28);
MR_def_label(check_hlds__switch_detection__detect_switches_in_disj_13_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(12);
	}
MR_def_label(check_hlds__switch_detection__detect_switches_in_disj_13_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO_LAB(check_hlds__switch_detection__detect_switches_in_disj_13_0_i31);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r3;
	MR_tempr1 = MR_tfield(1, MR_tempr3, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(check_hlds__switch_detection__detect_switches_in_disj_13_0_i31);
	}
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(10);
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_tfield(0, MR_tempr1, 2) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r8 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_sv(7);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_tempr1 = MR_r4;
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_r7 = MR_sv(6);
	MR_r9 = MR_sv(8);
	MR_r6 = MR_sv(11);
	MR_r10 = MR_tempr1;
	MR_succip_word = MR_sv(12);
	MR_GOTO_LAB(check_hlds__switch_detection__detect_switches_in_disj_13_0_i77);
	}
MR_def_label(check_hlds__switch_detection__detect_switches_in_disj_13_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_r7 = MR_sv(6);
	MR_r9 = MR_sv(8);
	MR_r6 = MR_sv(11);
	MR_r8 = MR_sv(7);
	MR_r10 = MR_tempr1;
	MR_succip_word = MR_sv(12);
	MR_GOTO_LAB(check_hlds__switch_detection__detect_switches_in_disj_13_0_i77);
	}
MR_def_label(check_hlds__switch_detection__detect_switches_in_disj_13_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(11);
	MR_r7 = MR_sv(6);
	MR_r8 = MR_sv(7);
	MR_r9 = MR_sv(8);
	MR_r10 = MR_sv(9);
	MR_succip_word = MR_sv(12);
	MR_GOTO_LAB(check_hlds__switch_detection__detect_switches_in_disj_13_0_i77);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__switch_detection_module16)
	MR_init_entry1(check_hlds__switch_detection__detect_sub_switches_in_disj_9_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__switch_detection__detect_sub_switches_in_disj_9_0);
	MR_init_label3(check_hlds__switch_detection__detect_sub_switches_in_disj_9_0,14,4,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'detect_sub_switches_in_disj'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__switch_detection__detect_sub_switches_in_disj_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(check_hlds__switch_detection__detect_sub_switches_in_disj_9_0_i14);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r5;
	MR_r3 = MR_r6;
	MR_proceed();
MR_def_label(check_hlds__switch_detection__detect_sub_switches_in_disj_9_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_tfield(1, MR_r4, 1);
	MR_r4 = MR_tfield(1, MR_r4, 0);
	MR_np_call_localret_ent(check_hlds__switch_detection__detect_switches_in_goal_update_instmap_10_0,
		check_hlds__switch_detection__detect_sub_switches_in_disj_9_0_i4);
MR_def_label(check_hlds__switch_detection__detect_sub_switches_in_disj_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_sv(3);
	MR_tempr3 = MR_r4;
	MR_r4 = MR_sv(4);
	MR_r5 = MR_tempr2;
	MR_r6 = MR_tempr3;
	}
	MR_np_localcall_lab(check_hlds__switch_detection__detect_sub_switches_in_disj_9_0,
		check_hlds__switch_detection__detect_sub_switches_in_disj_9_0_i5);
MR_def_label(check_hlds__switch_detection__detect_sub_switches_in_disj_9_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;
MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);
MR_decl_entry(hlds__instmap__bind_var_to_functors_8_0);

MR_BEGIN_MODULE(check_hlds__switch_detection_module17)
	MR_init_entry1(check_hlds__switch_detection__detect_switches_in_cases_10_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__switch_detection__detect_switches_in_cases_10_0);
	MR_init_label5(check_hlds__switch_detection__detect_switches_in_cases_10_0,18,5,6,7,9)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'detect_switches_in_cases'/10 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__switch_detection__detect_switches_in_cases_10_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r5,0,0)) {
		MR_GOTO_LAB(check_hlds__switch_detection__detect_switches_in_cases_10_0_i18);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r6;
	MR_r3 = MR_r7;
	MR_proceed();
MR_def_label(check_hlds__switch_detection__detect_switches_in_cases_10_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_r7;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r5;
	MR_sv(7) = MR_tfield(1, MR_tempr2, 1);
	MR_tempr1 = MR_tfield(1, MR_tempr2, 0);
	MR_sv(8) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(9) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(10) = MR_tfield(0, MR_tempr1, 2);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,4);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(1);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		check_hlds__switch_detection__detect_switches_in_cases_10_0_i5);
MR_def_label(check_hlds__switch_detection__detect_switches_in_cases_10_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(8);
	MR_r4 = MR_sv(9);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(5);
	}
	MR_np_call_localret_ent(hlds__instmap__bind_var_to_functors_8_0,
		check_hlds__switch_detection__detect_switches_in_cases_10_0_i6);
MR_def_label(check_hlds__switch_detection__detect_switches_in_cases_10_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(10);
	MR_r5 = MR_tempr2;
	MR_r6 = MR_sv(6);
	}
	MR_np_call_localret_ent(check_hlds__switch_detection__detect_switches_in_goal_update_instmap_10_0,
		check_hlds__switch_detection__detect_switches_in_cases_10_0_i7);
MR_def_label(check_hlds__switch_detection__detect_switches_in_cases_10_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(8);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(9);
	MR_tfield(0, MR_tempr1, 2) = MR_r2;
	MR_tempr2 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_sv(2);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_sv(3);
	MR_tempr4 = MR_r4;
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(7);
	MR_r6 = MR_tempr3;
	MR_r7 = MR_tempr4;
	}
	MR_np_localcall_lab(check_hlds__switch_detection__detect_switches_in_cases_10_0,
		check_hlds__switch_detection__detect_switches_in_cases_10_0_i9);
MR_def_label(check_hlds__switch_detection__detect_switches_in_cases_10_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(11);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__switch_detection_module18)
	MR_init_entry1(check_hlds__switch_detection__detect_switches_in_conj_9_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__switch_detection__detect_switches_in_conj_9_0);
	MR_init_label4(check_hlds__switch_detection__detect_switches_in_conj_9_0,16,4,6,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'detect_switches_in_conj'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__switch_detection__detect_switches_in_conj_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(check_hlds__switch_detection__detect_switches_in_conj_9_0_i16);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r5;
	MR_r3 = MR_r6;
	MR_proceed();
MR_def_label(check_hlds__switch_detection__detect_switches_in_conj_9_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr4 = MR_r4;
	MR_tempr1 = MR_tfield(1, MR_tempr4, 0);
	MR_sv(4) = MR_tempr1;
	MR_sv(5) = MR_tfield(1, MR_tempr4, 1);
	MR_sv(6) = MR_tfield(0, MR_tempr1, 1);
	MR_r4 = MR_sv(6);
	MR_tempr2 = MR_r5;
	MR_r5 = MR_tfield(0, MR_tempr1, 0);
	MR_tempr3 = MR_r6;
	MR_r6 = MR_tempr2;
	MR_r7 = MR_tempr3;
	}
	MR_np_call_localret_ent(check_hlds__switch_detection__detect_switches_in_goal_expr_10_0,
		check_hlds__switch_detection__detect_switches_in_conj_9_0_i4);
MR_def_label(check_hlds__switch_detection__detect_switches_in_conj_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(6);
	MR_tempr2 = MR_sv(3);
	MR_sv(3) = MR_tempr1;
	MR_tempr3 = MR_sv(4);
	MR_sv(4) = MR_r2;
	MR_sv(6) = MR_r3;
	MR_r1 = MR_tempr3;
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(hlds__goal_util__update_instmap_3_0,
		check_hlds__switch_detection__detect_switches_in_conj_9_0_i6);
MR_def_label(check_hlds__switch_detection__detect_switches_in_conj_9_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(6);
	}
	MR_np_localcall_lab(check_hlds__switch_detection__detect_switches_in_conj_9_0,
		check_hlds__switch_detection__detect_switches_in_conj_9_0_i7);
MR_def_label(check_hlds__switch_detection__detect_switches_in_conj_9_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__switch_detection_module19)
	MR_init_entry1(check_hlds__switch_detection__detect_switches_in_orelse_9_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__switch_detection__detect_switches_in_orelse_9_0);
	MR_init_label3(check_hlds__switch_detection__detect_switches_in_orelse_9_0,14,4,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'detect_switches_in_orelse'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__switch_detection__detect_switches_in_orelse_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(check_hlds__switch_detection__detect_switches_in_orelse_9_0_i14);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r5;
	MR_r3 = MR_r6;
	MR_proceed();
MR_def_label(check_hlds__switch_detection__detect_switches_in_orelse_9_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_tfield(1, MR_r4, 1);
	MR_r4 = MR_tfield(1, MR_r4, 0);
	MR_np_call_localret_ent(check_hlds__switch_detection__detect_switches_in_goal_update_instmap_10_0,
		check_hlds__switch_detection__detect_switches_in_orelse_9_0_i4);
MR_def_label(check_hlds__switch_detection__detect_switches_in_orelse_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_sv(3);
	MR_tempr3 = MR_r4;
	MR_r4 = MR_sv(4);
	MR_r5 = MR_tempr2;
	MR_r6 = MR_tempr3;
	}
	MR_np_localcall_lab(check_hlds__switch_detection__detect_switches_in_orelse_9_0,
		check_hlds__switch_detection__detect_switches_in_orelse_9_0_i5);
MR_def_label(check_hlds__switch_detection__detect_switches_in_orelse_9_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(check_hlds__inst_match__inst_is_bound_to_functors_3_0);
MR_decl_entry(parse_tree__prog_type__type_to_ctor_det_2_0);
MR_decl_entry(parse_tree__prog_mode__bound_insts_to_cons_ids_3_0);
MR_decl_entry(check_hlds__det_util__delete_unreachable_cases_3_0);
MR_decl_entry(fn__set_tree234__list_to_set_1_0);
MR_decl_entry(set_tree234__empty_1_0);
MR_decl_entry(check_hlds__type_util__switch_type_num_functors_3_0);

MR_BEGIN_MODULE(check_hlds__switch_detection_module20)
	MR_init_entry1(check_hlds__switch_detection__cases_to_switch_10_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__switch_detection__cases_to_switch_10_0);
	MR_init_label10(check_hlds__switch_detection__cases_to_switch_10_0,2,4,7,9,10,11,12,13,16,5)
	MR_init_label6(check_hlds__switch_detection__cases_to_switch_10_0,21,23,20,27,28,30)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'cases_to_switch'/10 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__switch_detection__cases_to_switch_10_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(5) = MR_tempr1;
	MR_sv(7) = MR_r6;
	MR_sv(8) = MR_r7;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(1);
	}
	MR_np_call_localret_ent(hlds__instmap__instmap_lookup_var_3_0,
		check_hlds__switch_detection__cases_to_switch_10_0_i2);
MR_def_label(check_hlds__switch_detection__cases_to_switch_10_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,4);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(1);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		check_hlds__switch_detection__cases_to_switch_10_0_i4);
MR_def_label(check_hlds__switch_detection__cases_to_switch_10_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__inst_match__inst_is_bound_to_functors_3_0,
		check_hlds__switch_detection__cases_to_switch_10_0_i7);
MR_def_label(check_hlds__switch_detection__cases_to_switch_10_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__switch_detection__cases_to_switch_10_0_i5);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r2;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_type__type_to_ctor_det_2_0,
		check_hlds__switch_detection__cases_to_switch_10_0_i9);
MR_def_label(check_hlds__switch_detection__cases_to_switch_10_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(parse_tree__prog_mode__bound_insts_to_cons_ids_3_0,
		check_hlds__switch_detection__cases_to_switch_10_0_i10);
MR_def_label(check_hlds__switch_detection__cases_to_switch_10_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(4);
	}
	MR_np_call_localret_ent(check_hlds__det_util__delete_unreachable_cases_3_0,
		check_hlds__switch_detection__cases_to_switch_10_0_i11);
MR_def_label(check_hlds__switch_detection__cases_to_switch_10_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_sv(6) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, cons_id);
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__set_tree234__list_to_set_1_0,
		check_hlds__switch_detection__cases_to_switch_10_0_i12);
MR_def_label(check_hlds__switch_detection__cases_to_switch_10_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__switch_detection__delete_covered_functors_3_0,
		check_hlds__switch_detection__cases_to_switch_10_0_i13);
MR_def_label(check_hlds__switch_detection__cases_to_switch_10_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(set_tree234__empty_1_0,
		check_hlds__switch_detection__cases_to_switch_10_0_i16);
MR_def_label(check_hlds__switch_detection__cases_to_switch_10_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__switch_detection__cases_to_switch_10_0_i20);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(4);
	MR_sv(2) = (MR_Integer) 1;
	MR_r6 = MR_sv(7);
	MR_r7 = MR_sv(8);
	MR_GOTO_LAB(check_hlds__switch_detection__cases_to_switch_10_0_i27);
MR_def_label(check_hlds__switch_detection__cases_to_switch_10_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__type_util__switch_type_num_functors_3_0,
		check_hlds__switch_detection__cases_to_switch_10_0_i21);
MR_def_label(check_hlds__switch_detection__cases_to_switch_10_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__switch_detection__cases_to_switch_10_0_i20);
	}
	MR_sv(6) = MR_r2;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(fn__check_hlds__switch_detection__count_covered_cons_ids_1_0,
		check_hlds__switch_detection__cases_to_switch_10_0_i23);
MR_def_label(check_hlds__switch_detection__cases_to_switch_10_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 != MR_sv(6))) {
		MR_GOTO_LAB(check_hlds__switch_detection__cases_to_switch_10_0_i20);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(4);
	MR_sv(2) = (MR_Integer) 1;
	MR_r6 = MR_sv(7);
	MR_r7 = MR_sv(8);
	MR_GOTO_LAB(check_hlds__switch_detection__cases_to_switch_10_0_i27);
MR_def_label(check_hlds__switch_detection__cases_to_switch_10_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(4);
	MR_sv(2) = (MR_Integer) 0;
	MR_r6 = MR_sv(7);
	MR_r7 = MR_sv(8);
MR_def_label(check_hlds__switch_detection__cases_to_switch_10_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(check_hlds__switch_detection__detect_switches_in_cases_10_0,
		check_hlds__switch_detection__cases_to_switch_10_0_i28);
MR_def_label(check_hlds__switch_detection__cases_to_switch_10_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__switch_detection__cases_to_switch_10_0_i30);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,7,0);
	MR_decr_sp_and_return(9);
MR_def_label(check_hlds__switch_detection__cases_to_switch_10_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(9);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_module__module_info_preds_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_info_0;
MR_decl_entry(map__lookup_3_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_procedures_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_proc_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_proc_info_0;
MR_decl_entry(hlds__hlds_pred__proc_info_get_goal_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_vartypes_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_initial_instmap_3_0);
MR_decl_entry(hlds__hlds_pred__proc_info_set_goal_3_0);
MR_decl_entry(hlds__quantification__requantify_proc_general_3_0);
MR_decl_entry(hlds__hlds_pred__pred_info_set_procedures_3_0);
MR_decl_entry(hlds__hlds_module__module_info_set_preds_3_0);

MR_BEGIN_MODULE(check_hlds__switch_detection_module21)
	MR_init_entry1(check_hlds__switch_detection__detect_switches_in_procs_allow_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__switch_detection__detect_switches_in_procs_allow_5_0);
	MR_init_label10(check_hlds__switch_detection__detect_switches_in_procs_allow_5_0,27,3,4,5,6,7,8,9,10,11)
	MR_init_label7(check_hlds__switch_detection__detect_switches_in_procs_allow_5_0,12,22,14,16,17,18,19)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'detect_switches_in_procs_allow'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__switch_detection__detect_switches_in_procs_allow_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(16);
	MR_sv(16) = (MR_Word) MR_succip;
MR_def_label(check_hlds__switch_detection__detect_switches_in_procs_allow_5_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__switch_detection__detect_switches_in_procs_allow_5_0_i3);
	}
	MR_r1 = MR_r4;
	MR_decr_sp_and_return(16);
MR_def_label(check_hlds__switch_detection__detect_switches_in_procs_allow_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r4;
	MR_sv(3) = MR_tempr1;
	MR_tempr2 = MR_r1;
	MR_sv(4) = MR_tfield(1, MR_tempr2, 0);
	MR_sv(5) = MR_tfield(1, MR_tempr2, 1);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_preds_2_0,
		check_hlds__switch_detection__detect_switches_in_procs_allow_5_0_i4);
MR_def_label(check_hlds__switch_detection__detect_switches_in_procs_allow_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_sv(12) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_sv(13) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_info);
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(13);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(map__lookup_3_0,
		check_hlds__switch_detection__detect_switches_in_procs_allow_5_0_i5);
MR_def_label(check_hlds__switch_detection__detect_switches_in_procs_allow_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_procedures_2_0,
		check_hlds__switch_detection__detect_switches_in_procs_allow_5_0_i6);
MR_def_label(check_hlds__switch_detection__detect_switches_in_procs_allow_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_sv(14) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_id);
	MR_sv(15) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_info);
	MR_r1 = MR_sv(14);
	MR_r2 = MR_sv(15);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_sv(4);
	MR_np_call_localret_ent(map__lookup_3_0,
		check_hlds__switch_detection__detect_switches_in_procs_allow_5_0_i7);
MR_def_label(check_hlds__switch_detection__detect_switches_in_procs_allow_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_goal_2_0,
		check_hlds__switch_detection__detect_switches_in_procs_allow_5_0_i8);
MR_def_label(check_hlds__switch_detection__detect_switches_in_procs_allow_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_vartypes_2_0,
		check_hlds__switch_detection__detect_switches_in_procs_allow_5_0_i9);
MR_def_label(check_hlds__switch_detection__detect_switches_in_procs_allow_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_initial_instmap_3_0,
		check_hlds__switch_detection__detect_switches_in_procs_allow_5_0_i10);
MR_def_label(check_hlds__switch_detection__detect_switches_in_procs_allow_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(10);
	MR_r5 = MR_sv(3);
	MR_r6 = (MR_Integer) 1;
	}
	MR_np_call_localret_ent(check_hlds__switch_detection__detect_switches_in_goal_update_instmap_10_0,
		check_hlds__switch_detection__detect_switches_in_procs_allow_5_0_i11);
MR_def_label(check_hlds__switch_detection__detect_switches_in_procs_allow_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(9);
	MR_sv(9) = MR_r3;
	MR_r1 = MR_r2;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_goal_3_0,
		check_hlds__switch_detection__detect_switches_in_procs_allow_5_0_i12);
MR_def_label(check_hlds__switch_detection__detect_switches_in_procs_allow_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(3),1)) {
		MR_GOTO_LAB(check_hlds__switch_detection__detect_switches_in_procs_allow_5_0_i14);
	}
MR_def_label(check_hlds__switch_detection__detect_switches_in_procs_allow_5_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(4);
	MR_r3 = MR_sv(8);
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(14);
	MR_r2 = MR_sv(15);
	MR_np_call_localret_ent(map__det_update_4_0,
		check_hlds__switch_detection__detect_switches_in_procs_allow_5_0_i16);
MR_def_label(check_hlds__switch_detection__detect_switches_in_procs_allow_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__quantification__requantify_proc_general_3_0,
		check_hlds__switch_detection__detect_switches_in_procs_allow_5_0_i22);
MR_def_label(check_hlds__switch_detection__detect_switches_in_procs_allow_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_set_procedures_3_0,
		check_hlds__switch_detection__detect_switches_in_procs_allow_5_0_i17);
MR_def_label(check_hlds__switch_detection__detect_switches_in_procs_allow_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(13);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__det_update_4_0,
		check_hlds__switch_detection__detect_switches_in_procs_allow_5_0_i18);
MR_def_label(check_hlds__switch_detection__detect_switches_in_procs_allow_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_set_preds_3_0,
		check_hlds__switch_detection__detect_switches_in_procs_allow_5_0_i19);
MR_def_label(check_hlds__switch_detection__detect_switches_in_procs_allow_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tempr1;
	MR_succip_word = MR_sv(16);
	MR_GOTO_LAB(check_hlds__switch_detection__detect_switches_in_procs_allow_5_0_i27);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__hlds__hlds_pred__pred_info_non_imported_procids_1_0);
MR_decl_entry(hlds__passes_aux__write_pred_progress_message_5_0);

MR_BEGIN_MODULE(check_hlds__switch_detection_module22)
	MR_init_entry1(check_hlds__switch_detection__detect_switches_in_preds_allow_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__switch_detection__detect_switches_in_preds_allow_4_0);
	MR_init_label8(check_hlds__switch_detection__detect_switches_in_preds_allow_4_0,21,3,4,5,6,8,9,10)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'detect_switches_in_preds_allow'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__switch_detection__detect_switches_in_preds_allow_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
MR_def_label(check_hlds__switch_detection__detect_switches_in_preds_allow_4_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__switch_detection__detect_switches_in_preds_allow_4_0_i3);
	}
	MR_r1 = MR_r3;
	MR_decr_sp_and_return(6);
MR_def_label(check_hlds__switch_detection__detect_switches_in_preds_allow_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tempr1;
	MR_tempr2 = MR_r1;
	MR_sv(3) = MR_tfield(1, MR_tempr2, 0);
	MR_sv(4) = MR_tfield(1, MR_tempr2, 1);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_preds_2_0,
		check_hlds__switch_detection__detect_switches_in_preds_allow_4_0_i4);
MR_def_label(check_hlds__switch_detection__detect_switches_in_preds_allow_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_info);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(3);
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		check_hlds__switch_detection__detect_switches_in_preds_allow_4_0_i5);
MR_def_label(check_hlds__switch_detection__detect_switches_in_preds_allow_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_non_imported_procids_1_0,
		check_hlds__switch_detection__detect_switches_in_preds_allow_4_0_i6);
MR_def_label(check_hlds__switch_detection__detect_switches_in_preds_allow_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__switch_detection__detect_switches_in_preds_allow_4_0_i8);
	}
	MR_r2 = MR_sv(1);
	MR_r1 = MR_sv(4);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(check_hlds__switch_detection__detect_switches_in_preds_allow_4_0_i21);
MR_def_label(check_hlds__switch_detection__detect_switches_in_preds_allow_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("% Detecting switches in ", 24);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(hlds__passes_aux__write_pred_progress_message_5_0,
		check_hlds__switch_detection__detect_switches_in_preds_allow_4_0_i9);
MR_def_label(check_hlds__switch_detection__detect_switches_in_preds_allow_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(check_hlds__switch_detection__detect_switches_in_procs_allow_5_0,
		check_hlds__switch_detection__detect_switches_in_preds_allow_4_0_i10);
MR_def_label(check_hlds__switch_detection__detect_switches_in_preds_allow_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(check_hlds__switch_detection__detect_switches_in_preds_allow_4_0_i21);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_module__module_info_get_globals_2_0);
MR_decl_entry(libs__globals__lookup_bool_option_3_0);
MR_decl_entry(hlds__hlds_module__module_info_predids_3_0);

MR_BEGIN_MODULE(check_hlds__switch_detection_module23)
	MR_init_entry1(check_hlds__switch_detection__detect_switches_in_module_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__switch_detection__detect_switches_in_module_2_0);
	MR_init_label4(check_hlds__switch_detection__detect_switches_in_module_2_0,2,3,5,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'detect_switches_in_module'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__switch_detection__detect_switches_in_module_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		check_hlds__switch_detection__detect_switches_in_module_2_0_i2);
MR_def_label(check_hlds__switch_detection__detect_switches_in_module_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 267;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		check_hlds__switch_detection__detect_switches_in_module_2_0_i3);
MR_def_label(check_hlds__switch_detection__detect_switches_in_module_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(check_hlds__switch_detection__detect_switches_in_module_2_0_i5);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = (MR_Integer) 1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_predids_3_0,
		check_hlds__switch_detection__detect_switches_in_module_2_0_i6);
MR_def_label(check_hlds__switch_detection__detect_switches_in_module_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = (MR_Integer) 0;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_predids_3_0,
		check_hlds__switch_detection__detect_switches_in_module_2_0_i6);
MR_def_label(check_hlds__switch_detection__detect_switches_in_module_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(check_hlds__switch_detection__detect_switches_in_preds_allow_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__switch_detection_module24)
	MR_init_entry1(check_hlds__switch_detection__detect_switches_in_proc_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__switch_detection__detect_switches_in_proc_4_0);
	MR_init_label10(check_hlds__switch_detection__detect_switches_in_proc_4_0,2,3,5,4,6,7,8,9,10,11)
	MR_init_label8(check_hlds__switch_detection__detect_switches_in_proc_4_0,12,13,14,23,16,18,19,20)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'detect_switches_in_proc'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__switch_detection__detect_switches_in_proc_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(15);
	MR_sv(15) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(4) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		check_hlds__switch_detection__detect_switches_in_proc_4_0_i2);
MR_def_label(check_hlds__switch_detection__detect_switches_in_proc_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 267;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		check_hlds__switch_detection__detect_switches_in_proc_4_0_i3);
MR_def_label(check_hlds__switch_detection__detect_switches_in_proc_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(check_hlds__switch_detection__detect_switches_in_proc_4_0_i5);
	}
	MR_sv(3) = (MR_Integer) 1;
	MR_r1 = MR_sv(4);
	MR_GOTO_LAB(check_hlds__switch_detection__detect_switches_in_proc_4_0_i4);
MR_def_label(check_hlds__switch_detection__detect_switches_in_proc_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = (MR_Integer) 0;
	MR_r1 = MR_sv(4);
MR_def_label(check_hlds__switch_detection__detect_switches_in_proc_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_preds_2_0,
		check_hlds__switch_detection__detect_switches_in_proc_4_0_i6);
MR_def_label(check_hlds__switch_detection__detect_switches_in_proc_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_sv(11) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_sv(12) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_info);
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(12);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(map__lookup_3_0,
		check_hlds__switch_detection__detect_switches_in_proc_4_0_i7);
MR_def_label(check_hlds__switch_detection__detect_switches_in_proc_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_procedures_2_0,
		check_hlds__switch_detection__detect_switches_in_proc_4_0_i8);
MR_def_label(check_hlds__switch_detection__detect_switches_in_proc_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_sv(13) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_id);
	MR_sv(14) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_info);
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(14);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(map__lookup_3_0,
		check_hlds__switch_detection__detect_switches_in_proc_4_0_i9);
MR_def_label(check_hlds__switch_detection__detect_switches_in_proc_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_goal_2_0,
		check_hlds__switch_detection__detect_switches_in_proc_4_0_i10);
MR_def_label(check_hlds__switch_detection__detect_switches_in_proc_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_vartypes_2_0,
		check_hlds__switch_detection__detect_switches_in_proc_4_0_i11);
MR_def_label(check_hlds__switch_detection__detect_switches_in_proc_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_initial_instmap_3_0,
		check_hlds__switch_detection__detect_switches_in_proc_4_0_i12);
MR_def_label(check_hlds__switch_detection__detect_switches_in_proc_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(9);
	MR_r5 = MR_sv(4);
	MR_r6 = (MR_Integer) 1;
	}
	MR_np_call_localret_ent(check_hlds__switch_detection__detect_switches_in_goal_update_instmap_10_0,
		check_hlds__switch_detection__detect_switches_in_proc_4_0_i13);
MR_def_label(check_hlds__switch_detection__detect_switches_in_proc_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r3;
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_goal_3_0,
		check_hlds__switch_detection__detect_switches_in_proc_4_0_i14);
MR_def_label(check_hlds__switch_detection__detect_switches_in_proc_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(3),1)) {
		MR_GOTO_LAB(check_hlds__switch_detection__detect_switches_in_proc_4_0_i16);
	}
MR_def_label(check_hlds__switch_detection__detect_switches_in_proc_4_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(1);
	MR_r3 = MR_sv(7);
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(14);
	MR_np_call_localret_ent(map__det_update_4_0,
		check_hlds__switch_detection__detect_switches_in_proc_4_0_i18);
MR_def_label(check_hlds__switch_detection__detect_switches_in_proc_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__quantification__requantify_proc_general_3_0,
		check_hlds__switch_detection__detect_switches_in_proc_4_0_i23);
MR_def_label(check_hlds__switch_detection__detect_switches_in_proc_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_set_procedures_3_0,
		check_hlds__switch_detection__detect_switches_in_proc_4_0_i19);
MR_def_label(check_hlds__switch_detection__detect_switches_in_proc_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(12);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__det_update_4_0,
		check_hlds__switch_detection__detect_switches_in_proc_4_0_i20);
MR_def_label(check_hlds__switch_detection__detect_switches_in_proc_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_succip_word = MR_sv(15);
	MR_decr_sp(15);
	MR_np_tailcall_ent(hlds__hlds_module__module_info_set_preds_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(set_tree234__member_2_0);
MR_decl_entry(libs__compiler_util__expect_3_0);
MR_decl_entry(fn__cord__list_1_0);
MR_decl_entry(set_tree234__is_member_3_0);
MR_decl_entry(fn__list__map_2_0);
MR_decl_entry(hlds__hlds_goal__disj_list_to_goal_3_0);
MR_decl_entry(list__filter_4_0);
MR_decl_entry(set_tree234__insert_list_3_0);

MR_BEGIN_MODULE(check_hlds__switch_detection_module25)
	MR_init_entry1(check_hlds__switch_detection__convert_case_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__switch_detection__convert_case_7_0);
	MR_init_label10(check_hlds__switch_detection__convert_case_7_0,3,6,2,7,10,12,14,15,9,19)
	MR_init_label8(check_hlds__switch_detection__convert_case_7_0,21,23,24,18,33,37,35,27)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'convert_case'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__switch_detection__convert_case_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr2 = MR_r3;
	MR_tempr1 = MR_tfield(0, MR_tempr2, 1);
	MR_sv(7) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(6) = MR_tfield(0, MR_tempr1, 1);
	MR_tempr1 = MR_tfield(0, MR_tempr2, 0);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_r4;
	MR_tempr3 = MR_r5;
	MR_sv(5) = MR_tempr3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, cons_id);
	MR_r2 = MR_tempr3;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(set_tree234__member_2_0,
		check_hlds__switch_detection__convert_case_7_0_i3);
MR_def_label(check_hlds__switch_detection__convert_case_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__switch_detection__convert_case_7_0_i2);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r1 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(8,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(check_hlds__switch_detection__IntroducedFrom__pred__convert_case__372__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 4) = MR_sv(7);
	MR_r2 = (MR_Word) MR_string_const("switch_detection.m", 18);
	MR_r3 = (MR_Word) MR_string_const("convert_case: already handled but not cons_id_has_one_multi", 59);
	}
	MR_np_call_localret_ent(libs__compiler_util__expect_3_0,
		check_hlds__switch_detection__convert_case_7_0_i6);
MR_def_label(check_hlds__switch_detection__convert_case_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_decr_sp_and_return(8);
MR_def_label(check_hlds__switch_detection__convert_case_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = (MR_Word) MR_CTOR0_ADDR(check_hlds__switch_detection, case_arm);
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__cord__list_1_0,
		check_hlds__switch_detection__convert_case_7_0_i7);
MR_def_label(check_hlds__switch_detection__convert_case_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(7),0)) {
		MR_GOTO_LAB(check_hlds__switch_detection__convert_case_7_0_i9);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, cons_id);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(set_tree234__is_member_3_0,
		check_hlds__switch_detection__convert_case_7_0_i10);
MR_def_label(check_hlds__switch_detection__convert_case_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(8,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(check_hlds__switch_detection__IntroducedFrom__pred__convert_case__389__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = (MR_Integer) 0;
	MR_tfield(0, MR_tempr1, 4) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("switch_detection.m", 18);
	MR_r3 = (MR_Word) MR_string_const("convert_case: singles status but in ConflictConsIds", 51);
	}
	MR_np_call_localret_ent(libs__compiler_util__expect_3_0,
		check_hlds__switch_detection__convert_case_7_0_i12);
MR_def_label(check_hlds__switch_detection__convert_case_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,3,2);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(fn__list__map_2_0,
		check_hlds__switch_detection__convert_case_7_0_i14);
MR_def_label(check_hlds__switch_detection__convert_case_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_goal__disj_list_to_goal_3_0,
		check_hlds__switch_detection__convert_case_7_0_i15);
MR_def_label(check_hlds__switch_detection__convert_case_7_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r1 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_decr_sp_and_return(8);
	}
MR_def_label(check_hlds__switch_detection__convert_case_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(7),2)) {
		MR_GOTO_LAB(check_hlds__switch_detection__convert_case_7_0_i18);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, cons_id);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(set_tree234__is_member_3_0,
		check_hlds__switch_detection__convert_case_7_0_i19);
MR_def_label(check_hlds__switch_detection__convert_case_7_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(8,3);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(check_hlds__switch_detection__IntroducedFrom__pred__convert_case__380__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tfield(0, MR_tempr1, 4) = (MR_Integer) 1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("switch_detection.m", 18);
	MR_r3 = (MR_Word) MR_string_const("convert_case: conflict status but not in ConflictConsIds", 56);
	}
	MR_np_call_localret_ent(libs__compiler_util__expect_3_0,
		check_hlds__switch_detection__convert_case_7_0_i21);
MR_def_label(check_hlds__switch_detection__convert_case_7_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,3,3);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(fn__list__map_2_0,
		check_hlds__switch_detection__convert_case_7_0_i23);
MR_def_label(check_hlds__switch_detection__convert_case_7_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_goal__disj_list_to_goal_3_0,
		check_hlds__switch_detection__convert_case_7_0_i24);
MR_def_label(check_hlds__switch_detection__convert_case_7_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r1 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_decr_sp_and_return(8);
	}
MR_def_label(check_hlds__switch_detection__convert_case_7_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__switch_detection__convert_case_7_0_i27);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr4 = MR_r1;
	MR_tempr1 = MR_tfield(1, MR_tempr4, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(check_hlds__switch_detection__convert_case_7_0_i27);
	}
	MR_tempr1 = MR_tfield(1, MR_tempr4, 0);
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(check_hlds__switch_detection__convert_case_7_0_i27);
	}
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tfield(1, MR_tempr1, 0);
	MR_tfield(1, MR_tempr2, 1) = MR_tfield(1, MR_tempr1, 1);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 4);
	MR_r2 = MR_tempr3;
	MR_tfield(0, MR_tempr3, 0) = (MR_Word) MR_COMMON(8,5);
	MR_tfield(0, MR_tempr3, 1) = (MR_Word) MR_ENTRY_AP(check_hlds__switch_detection__IntroducedFrom__pred__convert_case__412__1_2_0);
	MR_tfield(0, MR_tempr3, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr3, 3) = MR_sv(2);
	MR_sv(1) = MR_tfield(1, MR_tempr1, 2);
	MR_sv(2) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, cons_id);
	MR_r1 = MR_sv(2);
	}
	MR_np_call_localret_ent(list__filter_4_0,
		check_hlds__switch_detection__convert_case_7_0_i33);
MR_def_label(check_hlds__switch_detection__convert_case_7_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(check_hlds__switch_detection__convert_case_7_0_i35);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tempr2 = MR_r2;
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(1, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(1, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tfield(0, MR_tempr1, 1);
	MR_r3 = MR_sv(5);
	}
	MR_np_call_localret_ent(set_tree234__insert_list_3_0,
		check_hlds__switch_detection__convert_case_7_0_i37);
MR_def_label(check_hlds__switch_detection__convert_case_7_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(4);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	MR_decr_sp_and_return(8);
	}
MR_def_label(check_hlds__switch_detection__convert_case_7_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("switch_detection.m", 18);
	MR_r2 = (MR_Word) MR_string_const("convert_case: cons_id_has_one_multi: AllConsIds = []", 52);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(check_hlds__switch_detection__convert_case_7_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("switch_detection.m", 18);
	MR_r2 = (MR_Word) MR_string_const("convert_case: misleading cons_id_has_one_multi", 46);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__switch_detection_module26)
	MR_init_entry1(fn__check_hlds__switch_detection__project_arm_goal_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__check_hlds__switch_detection__project_arm_goal_1_0);
	MR_init_label1(fn__check_hlds__switch_detection__project_arm_goal_1_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'project_arm_goal'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__check_hlds__switch_detection__project_arm_goal_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(fn__check_hlds__switch_detection__project_arm_goal_1_0_i3);
	}
	MR_r1 = MR_tfield(1, MR_r1, 2);
	MR_proceed();
MR_def_label(fn__check_hlds__switch_detection__project_arm_goal_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 1);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__switch_detection_module27)
	MR_init_entry1(fn__check_hlds__switch_detection__project_single_arm_goal_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__check_hlds__switch_detection__project_single_arm_goal_1_0);
	MR_init_label1(fn__check_hlds__switch_detection__project_single_arm_goal_1_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'project_single_arm_goal'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__check_hlds__switch_detection__project_single_arm_goal_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(fn__check_hlds__switch_detection__project_single_arm_goal_1_0_i3);
	}
	MR_r1 = MR_tfield(0, MR_r1, 1);
	MR_proceed();
MR_def_label(fn__check_hlds__switch_detection__project_single_arm_goal_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("switch_detection.m", 18);
	MR_r2 = (MR_Word) MR_string_const("project_single_arm_goal: multi arm", 34);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__switch_detection_module28)
	MR_init_entry1(check_hlds__switch_detection__add_multi_entry_for_cons_id_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__switch_detection__add_multi_entry_for_cons_id_4_0);
	MR_init_label8(check_hlds__switch_detection__add_multi_entry_for_cons_id_4_0,3,6,7,8,10,2,12,14)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'add_multi_entry_for_cons_id'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__switch_detection__add_multi_entry_for_cons_id_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_sv(4) = MR_tfield(0, MR_tempr2, 1);
	MR_tempr1 = MR_tfield(0, MR_tempr2, 0);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, cons_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(check_hlds__switch_detection, cons_id_entry);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(2);
	}
	MR_np_call_localret_ent(map__search_3_0,
		check_hlds__switch_detection__add_multi_entry_for_cons_id_4_0_i3);
MR_def_label(check_hlds__switch_detection__add_multi_entry_for_cons_id_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__switch_detection__add_multi_entry_for_cons_id_4_0_i2);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r2, 0);
	if (MR_INT_NE(MR_tempr1,2)) {
		MR_GOTO_LAB(check_hlds__switch_detection__add_multi_entry_for_cons_id_4_0_i6);
	}
	MR_r3 = MR_sv(1);
	MR_r2 = MR_tfield(0, MR_r2, 1);
	MR_sv(1) = MR_sv(4);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__switch_detection, case_arm);
	}
	MR_np_call_localret_ent(fn__cord__snoc_2_0,
		check_hlds__switch_detection__add_multi_entry_for_cons_id_4_0_i8);
MR_def_label(check_hlds__switch_detection__add_multi_entry_for_cons_id_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_tfield(0, MR_r2, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, cons_id);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(set_tree234__insert_3_0,
		check_hlds__switch_detection__add_multi_entry_for_cons_id_4_0_i7);
MR_def_label(check_hlds__switch_detection__add_multi_entry_for_cons_id_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__switch_detection, case_arm);
	MR_np_call_localret_ent(fn__cord__snoc_2_0,
		check_hlds__switch_detection__add_multi_entry_for_cons_id_4_0_i8);
MR_def_label(check_hlds__switch_detection__add_multi_entry_for_cons_id_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r5 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, cons_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(check_hlds__switch_detection, cons_id_entry);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(2);
	}
	MR_np_call_localret_ent(map__det_update_4_0,
		check_hlds__switch_detection__add_multi_entry_for_cons_id_4_0_i10);
MR_def_label(check_hlds__switch_detection__add_multi_entry_for_cons_id_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(1);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
MR_def_label(check_hlds__switch_detection__add_multi_entry_for_cons_id_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__switch_detection, case_arm);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		check_hlds__switch_detection__add_multi_entry_for_cons_id_4_0_i12);
MR_def_label(check_hlds__switch_detection__add_multi_entry_for_cons_id_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r5 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, cons_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(check_hlds__switch_detection, cons_id_entry);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(2);
	}
	MR_np_call_localret_ent(map__det_insert_4_0,
		check_hlds__switch_detection__add_multi_entry_for_cons_id_4_0_i14);
MR_def_label(check_hlds__switch_detection__add_multi_entry_for_cons_id_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(4);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__f_108_105_115_116_95_95_43_43_2_0);

MR_BEGIN_MODULE(check_hlds__switch_detection_module29)
	MR_init_entry1(check_hlds__switch_detection__create_expanded_conjunction_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__switch_detection__create_expanded_conjunction_5_0);
	MR_init_label4(check_hlds__switch_detection__create_expanded_conjunction_5_0,5,2,10,11)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'create_expanded_conjunction'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__switch_detection__create_expanded_conjunction_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_tfield(0, MR_r4, 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,1)) {
		MR_GOTO_LAB(check_hlds__switch_detection__create_expanded_conjunction_5_0_i2);
	}
	MR_tempr2 = MR_tfield(3, MR_tempr1, 1);
	if (MR_INT_NE(MR_tempr2,0)) {
		MR_GOTO_LAB(check_hlds__switch_detection__create_expanded_conjunction_5_0_i2);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_sv(3) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r1 = MR_sv(3);
	MR_tempr3 = MR_r2;
	MR_r2 = MR_tfield(3, MR_tempr1, 2);
	MR_r3 = MR_tempr3;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		check_hlds__switch_detection__create_expanded_conjunction_5_0_i5);
MR_def_label(check_hlds__switch_detection__create_expanded_conjunction_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		check_hlds__switch_detection__create_expanded_conjunction_5_0_i11);
MR_def_label(check_hlds__switch_detection__create_expanded_conjunction_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r4;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		check_hlds__switch_detection__create_expanded_conjunction_5_0_i10);
MR_def_label(check_hlds__switch_detection__create_expanded_conjunction_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		check_hlds__switch_detection__create_expanded_conjunction_5_0_i11);
MR_def_label(check_hlds__switch_detection__create_expanded_conjunction_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_r1 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(2);
	MR_decr_sp_and_return(4);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__switch_detection_module30)
	MR_init_entry1(check_hlds__switch_detection__find_bind_var_for_switch_in_deconstruct_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__switch_detection__find_bind_var_for_switch_in_deconstruct_7_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'find_bind_var_for_switch_in_deconstruct'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__switch_detection__find_bind_var_for_switch_in_deconstruct_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(f_99_104_101_99_107_95_104_108_100_115_95_95_115_119_105_116_99_104_95_100_101_116_101_99_116_105_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_98_105_110_100_95_118_97_114_95_102_111_114_95_115_119_105_116_99_104_95_105_110_95_100_101_99_111_110_115_116_114_117_99_116_95_95_91_52_44_32_54_93_95_48_7_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___list__list_1_0);

MR_BEGIN_MODULE(check_hlds__switch_detection_module31)
	MR_init_entry1(__Unify___check_hlds__switch_detection__again_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___check_hlds__switch_detection__again_0_0);
	MR_init_label4(__Unify___check_hlds__switch_detection__again_0_0,4,6,10,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___check_hlds__switch_detection__again_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___check_hlds__switch_detection__again_0_0_i10);
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
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	MR_r3 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___term__var_1_0,
		__Unify___check_hlds__switch_detection__again_0_0_i4);
MR_def_label(__Unify___check_hlds__switch_detection__again_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___check_hlds__switch_detection__again_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___check_hlds__switch_detection__again_0_0_i6);
MR_def_label(__Unify___check_hlds__switch_detection__again_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___check_hlds__switch_detection__again_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, case);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___check_hlds__switch_detection__again_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___check_hlds__switch_detection__again_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___term__var_1_0);
MR_decl_entry(__Compare___list__list_1_0);

MR_BEGIN_MODULE(check_hlds__switch_detection_module32)
	MR_init_entry1(__Compare___check_hlds__switch_detection__again_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___check_hlds__switch_detection__again_0_0);
	MR_init_label5(__Compare___check_hlds__switch_detection__again_0_0,3,2,5,9,29)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___check_hlds__switch_detection__again_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___check_hlds__switch_detection__again_0_0_i3);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___check_hlds__switch_detection__again_0_0_i2);
MR_def_label(__Compare___check_hlds__switch_detection__again_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___check_hlds__switch_detection__again_0_0,2)
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
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_tfield(0, MR_tempr3, 0);
	MR_r3 = MR_tfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___term__var_1_0,
		__Compare___check_hlds__switch_detection__again_0_0_i5);
MR_def_label(__Compare___check_hlds__switch_detection__again_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__switch_detection__again_0_0_i29);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___check_hlds__switch_detection__again_0_0_i9);
MR_def_label(__Compare___check_hlds__switch_detection__again_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__switch_detection__again_0_0_i29);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, case);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___check_hlds__switch_detection__again_0_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__switch_detection_module33)
	MR_init_entry1(__Unify___check_hlds__switch_detection__allow_multi_arm_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___check_hlds__switch_detection__allow_multi_arm_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___check_hlds__switch_detection__allow_multi_arm_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_int_3_0);

MR_BEGIN_MODULE(check_hlds__switch_detection_module34)
	MR_init_entry1(__Compare___check_hlds__switch_detection__allow_multi_arm_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___check_hlds__switch_detection__allow_multi_arm_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___check_hlds__switch_detection__allow_multi_arm_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___parse_tree__prog_data__cons_id_0_0);
MR_decl_entry(__Unify___hlds__hlds_goal__hlds_goal_0_0);

MR_BEGIN_MODULE(check_hlds__switch_detection_module35)
	MR_init_entry1(__Unify___check_hlds__switch_detection__case_arm_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___check_hlds__switch_detection__case_arm_0_0);
	MR_init_label6(__Unify___check_hlds__switch_detection__case_arm_0_0,7,9,24,5,14,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___check_hlds__switch_detection__case_arm_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___check_hlds__switch_detection__case_arm_0_0_i24);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(__Unify___check_hlds__switch_detection__case_arm_0_0_i5);
	}
	if (MR_PTAG_TESTR(MR_tempr2,1)) {
		MR_GOTO_LAB(__Unify___check_hlds__switch_detection__case_arm_0_0_i1);
	}
	MR_tempr3 = MR_tempr1;
	MR_sv(1) = MR_tfield(1, MR_tempr3, 1);
	MR_tempr4 = MR_tempr2;
	MR_sv(2) = MR_tfield(1, MR_tempr3, 2);
	MR_sv(3) = MR_tfield(1, MR_tempr4, 1);
	MR_sv(4) = MR_tfield(1, MR_tempr4, 2);
	MR_r1 = MR_tfield(1, MR_tempr3, 0);
	MR_r2 = MR_tfield(1, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Unify___parse_tree__prog_data__cons_id_0_0,
		__Unify___check_hlds__switch_detection__case_arm_0_0_i7);
MR_def_label(__Unify___check_hlds__switch_detection__case_arm_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___check_hlds__switch_detection__case_arm_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, cons_id);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___check_hlds__switch_detection__case_arm_0_0_i9);
MR_def_label(__Unify___check_hlds__switch_detection__case_arm_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___check_hlds__switch_detection__case_arm_0_0_i1);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___hlds__hlds_goal__hlds_goal_0_0);
MR_def_label(__Unify___check_hlds__switch_detection__case_arm_0_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___check_hlds__switch_detection__case_arm_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Unify___check_hlds__switch_detection__case_arm_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(0, MR_tempr2, 1);
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___parse_tree__prog_data__cons_id_0_0,
		__Unify___check_hlds__switch_detection__case_arm_0_0_i14);
MR_def_label(__Unify___check_hlds__switch_detection__case_arm_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___check_hlds__switch_detection__case_arm_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___hlds__hlds_goal__hlds_goal_0_0);
MR_def_label(__Unify___check_hlds__switch_detection__case_arm_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___parse_tree__prog_data__cons_id_0_0);
MR_decl_entry(__Compare___hlds__hlds_goal__hlds_goal_0_0);

MR_BEGIN_MODULE(check_hlds__switch_detection_module36)
	MR_init_entry1(__Compare___check_hlds__switch_detection__case_arm_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___check_hlds__switch_detection__case_arm_0_0);
	MR_init_label9(__Compare___check_hlds__switch_detection__case_arm_0_0,3,2,9,13,7,5,20,22,63)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___check_hlds__switch_detection__case_arm_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___check_hlds__switch_detection__case_arm_0_0_i3);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___check_hlds__switch_detection__case_arm_0_0_i2);
MR_def_label(__Compare___check_hlds__switch_detection__case_arm_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___check_hlds__switch_detection__case_arm_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Compare___check_hlds__switch_detection__case_arm_0_0_i5);
	}
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___check_hlds__switch_detection__case_arm_0_0_i7);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(1);
	MR_sv(4) = MR_tfield(1, MR_tempr5, 1);
	MR_sv(3) = MR_tfield(1, MR_tempr5, 2);
	MR_tempr6 = MR_sv(2);
	MR_tempr1 = MR_tfield(1, MR_tempr6, 2);
	MR_tempr2 = MR_tfield(1, MR_tempr6, 1);
	MR_tempr3 = MR_tempr5;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr6;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(1, MR_tempr3, 0);
	MR_r2 = MR_tfield(1, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___parse_tree__prog_data__cons_id_0_0,
		__Compare___check_hlds__switch_detection__case_arm_0_0_i9);
MR_def_label(__Compare___check_hlds__switch_detection__case_arm_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__switch_detection__case_arm_0_0_i63);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, cons_id);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___check_hlds__switch_detection__case_arm_0_0_i13);
MR_def_label(__Compare___check_hlds__switch_detection__case_arm_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__switch_detection__case_arm_0_0_i63);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___hlds__hlds_goal__hlds_goal_0_0);
MR_def_label(__Compare___check_hlds__switch_detection__case_arm_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___check_hlds__switch_detection__case_arm_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___check_hlds__switch_detection__case_arm_0_0_i20);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___check_hlds__switch_detection__case_arm_0_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(1);
	MR_tempr1 = MR_tfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(2);
	MR_tempr2 = MR_tfield(0, MR_tempr6, 1);
	MR_tempr3 = MR_tempr5;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr6;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(0, MR_tempr3, 0);
	MR_r2 = MR_tfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___parse_tree__prog_data__cons_id_0_0,
		__Compare___check_hlds__switch_detection__case_arm_0_0_i22);
MR_def_label(__Compare___check_hlds__switch_detection__case_arm_0_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__switch_detection__case_arm_0_0_i63);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___hlds__hlds_goal__hlds_goal_0_0);
MR_def_label(__Compare___check_hlds__switch_detection__case_arm_0_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___tree234__tree234_2_0);
MR_decl_entry(__Unify___set_tree234__set_tree234_1_0);

MR_BEGIN_MODULE(check_hlds__switch_detection_module37)
	MR_init_entry1(__Unify___check_hlds__switch_detection__cases_table_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___check_hlds__switch_detection__cases_table_0_0);
	MR_init_label3(__Unify___check_hlds__switch_detection__cases_table_0_0,4,8,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___check_hlds__switch_detection__cases_table_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___check_hlds__switch_detection__cases_table_0_0_i8);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(0, MR_tempr2, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, cons_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(check_hlds__switch_detection, cons_id_entry);
	MR_r3 = MR_tfield(0, MR_tempr1, 0);
	MR_r4 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___tree234__tree234_2_0,
		__Unify___check_hlds__switch_detection__cases_table_0_0_i4);
MR_def_label(__Unify___check_hlds__switch_detection__cases_table_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___check_hlds__switch_detection__cases_table_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, cons_id);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___set_tree234__set_tree234_1_0);
MR_def_label(__Unify___check_hlds__switch_detection__cases_table_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___check_hlds__switch_detection__cases_table_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___tree234__tree234_2_0);
MR_decl_entry(__Compare___set_tree234__set_tree234_1_0);

MR_BEGIN_MODULE(check_hlds__switch_detection_module38)
	MR_init_entry1(__Compare___check_hlds__switch_detection__cases_table_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___check_hlds__switch_detection__cases_table_0_0);
	MR_init_label4(__Compare___check_hlds__switch_detection__cases_table_0_0,3,2,5,21)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___check_hlds__switch_detection__cases_table_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___check_hlds__switch_detection__cases_table_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___check_hlds__switch_detection__cases_table_0_0_i2);
MR_def_label(__Compare___check_hlds__switch_detection__cases_table_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___check_hlds__switch_detection__cases_table_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_tempr1 = MR_tfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_tempr2 = MR_tfield(0, MR_tempr6, 1);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, cons_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(check_hlds__switch_detection, cons_id_entry);
	MR_r3 = MR_tfield(0, MR_tempr3, 0);
	MR_r4 = MR_tfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___tree234__tree234_2_0,
		__Compare___check_hlds__switch_detection__cases_table_0_0_i5);
MR_def_label(__Compare___check_hlds__switch_detection__cases_table_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__switch_detection__cases_table_0_0_i21);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, cons_id);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___set_tree234__set_tree234_1_0);
MR_def_label(__Compare___check_hlds__switch_detection__cases_table_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___cord__cord_1_0);

MR_BEGIN_MODULE(check_hlds__switch_detection_module39)
	MR_init_entry1(__Unify___check_hlds__switch_detection__cons_id_entry_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___check_hlds__switch_detection__cons_id_entry_0_0);
	MR_init_label2(__Unify___check_hlds__switch_detection__cons_id_entry_0_0,6,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___check_hlds__switch_detection__cons_id_entry_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___check_hlds__switch_detection__cons_id_entry_0_0_i6);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	MR_tempr3 = MR_tfield(0, MR_tempr1, 0);
	MR_tempr4 = MR_tfield(0, MR_tempr2, 0);
	if ((MR_tempr3 != MR_tempr4)) {
		MR_GOTO_LAB(__Unify___check_hlds__switch_detection__cons_id_entry_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__switch_detection, case_arm);
	MR_r2 = MR_tfield(0, MR_tempr1, 1);
	MR_r3 = MR_tfield(0, MR_tempr2, 1);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___cord__cord_1_0);
	}
MR_def_label(__Unify___check_hlds__switch_detection__cons_id_entry_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___check_hlds__switch_detection__cons_id_entry_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___cord__cord_1_0);

MR_BEGIN_MODULE(check_hlds__switch_detection_module40)
	MR_init_entry1(__Compare___check_hlds__switch_detection__cons_id_entry_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___check_hlds__switch_detection__cons_id_entry_0_0);
	MR_init_label4(__Compare___check_hlds__switch_detection__cons_id_entry_0_0,3,2,5,21)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___check_hlds__switch_detection__cons_id_entry_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___check_hlds__switch_detection__cons_id_entry_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___check_hlds__switch_detection__cons_id_entry_0_0_i2);
MR_def_label(__Compare___check_hlds__switch_detection__cons_id_entry_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___check_hlds__switch_detection__cons_id_entry_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_tempr1 = MR_tfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_tempr2 = MR_tfield(0, MR_tempr6, 1);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(0, MR_tempr3, 0);
	MR_r2 = MR_tfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___check_hlds__switch_detection__cons_id_entry_0_0_i5);
MR_def_label(__Compare___check_hlds__switch_detection__cons_id_entry_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__switch_detection__cons_id_entry_0_0_i21);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__switch_detection, case_arm);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___cord__cord_1_0);
MR_def_label(__Compare___check_hlds__switch_detection__cons_id_entry_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__switch_detection_module41)
	MR_init_entry1(__Unify___check_hlds__switch_detection__cons_id_state_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___check_hlds__switch_detection__cons_id_state_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___check_hlds__switch_detection__cons_id_state_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__switch_detection_module42)
	MR_init_entry1(__Compare___check_hlds__switch_detection__cons_id_state_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___check_hlds__switch_detection__cons_id_state_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___check_hlds__switch_detection__cons_id_state_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__switch_detection_module43)
	MR_init_entry1(__Unify___check_hlds__switch_detection__deconstruct_search_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___check_hlds__switch_detection__deconstruct_search_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___check_hlds__switch_detection__deconstruct_search_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__switch_detection_module44)
	MR_init_entry1(__Compare___check_hlds__switch_detection__deconstruct_search_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___check_hlds__switch_detection__deconstruct_search_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___check_hlds__switch_detection__deconstruct_search_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__switch_detection_module45)
	MR_init_entry1(__Unify___check_hlds__switch_detection__found_deconstruct_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___check_hlds__switch_detection__found_deconstruct_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___check_hlds__switch_detection__found_deconstruct_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__switch_detection_module46)
	MR_init_entry1(__Compare___check_hlds__switch_detection__found_deconstruct_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___check_hlds__switch_detection__found_deconstruct_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___check_hlds__switch_detection__found_deconstruct_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_unify_pred_2_0);

MR_BEGIN_MODULE(check_hlds__switch_detection_module47)
	MR_init_entry1(__Unify___check_hlds__switch_detection__process_unify_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___check_hlds__switch_detection__process_unify_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___check_hlds__switch_detection__process_unify_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_r2 = MR_r4;
	MR_np_tailcall_ent(private_builtin__builtin_unify_pred_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_pred_3_0);

MR_BEGIN_MODULE(check_hlds__switch_detection_module48)
	MR_init_entry1(__Compare___check_hlds__switch_detection__process_unify_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___check_hlds__switch_detection__process_unify_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___check_hlds__switch_detection__process_unify_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_r2 = MR_r4;
	MR_np_tailcall_ent(private_builtin__builtin_compare_pred_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__switch_detection_module49)
	MR_init_entry1(check_hlds__switch_detection__IntroducedFrom__pred__convert_case__372__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__switch_detection__IntroducedFrom__pred__convert_case__372__1_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__convert_case__372__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__switch_detection__IntroducedFrom__pred__convert_case__372__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r2 == MR_r1);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__switch_detection_module50)
	MR_init_entry1(check_hlds__switch_detection__IntroducedFrom__pred__convert_case__389__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__switch_detection__IntroducedFrom__pred__convert_case__389__1_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__convert_case__389__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__switch_detection__IntroducedFrom__pred__convert_case__389__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r2 == MR_r1);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__switch_detection_module51)
	MR_init_entry1(check_hlds__switch_detection__IntroducedFrom__pred__convert_case__380__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__switch_detection__IntroducedFrom__pred__convert_case__380__1_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__convert_case__380__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__switch_detection__IntroducedFrom__pred__convert_case__380__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(set_tree234__contains_2_0);

MR_BEGIN_MODULE(check_hlds__switch_detection_module52)
	MR_init_entry1(check_hlds__switch_detection__IntroducedFrom__pred__convert_case__412__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__switch_detection__IntroducedFrom__pred__convert_case__412__1_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__convert_case__412__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__switch_detection__IntroducedFrom__pred__convert_case__412__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, cons_id);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(set_tree234__contains_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__switch_detection_module53)
	MR_init_entry1(check_hlds__switch_detection__IntroducedFrom__pred__delete_covered_functors__1088__1_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__switch_detection__IntroducedFrom__pred__delete_covered_functors__1088__1_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__delete_covered_functors__1088__1'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__switch_detection__IntroducedFrom__pred__delete_covered_functors__1088__1_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, cons_id);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(set_tree234__delete_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__switch_detection_module54)
	MR_init_entry1(f_99_104_101_99_107_95_104_108_100_115_95_95_115_119_105_116_99_104_95_100_101_116_101_99_116_105_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_98_105_110_100_95_118_97_114_95_102_111_114_95_115_119_105_116_99_104_95_105_110_95_100_101_99_111_110_115_116_114_117_99_116_95_95_91_52_44_32_54_93_95_48_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_99_104_101_99_107_95_104_108_100_115_95_95_115_119_105_116_99_104_95_100_101_116_101_99_116_105_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_98_105_110_100_95_118_97_114_95_102_111_114_95_115_119_105_116_99_104_95_105_110_95_100_101_99_111_110_115_116_114_117_99_116_95_95_91_52_44_32_54_93_95_48_7_0);
	MR_init_label4(f_99_104_101_99_107_95_104_108_100_115_95_95_115_119_105_116_99_104_95_100_101_116_101_99_116_105_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_98_105_110_100_95_118_97_114_95_102_111_114_95_115_119_105_116_99_104_95_105_110_95_100_101_99_111_110_115_116_114_117_99_116_95_95_91_52_44_32_54_93_95_48_7_0,9,6,7,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__find_bind_var_for_switch_in_deconstruct__[4, 6]_0'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_99_104_101_99_107_95_104_108_100_115_95_95_115_119_105_116_99_104_95_100_101_116_101_99_116_105_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_98_105_110_100_95_118_97_114_95_102_111_114_95_115_119_105_116_99_104_95_105_110_95_100_101_99_111_110_115_116_114_117_99_116_95_95_91_52_44_32_54_93_95_48_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_tfield(0, MR_r2, 0);
	MR_r4 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_115_119_105_116_99_104_95_100_101_116_101_99_116_105_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_98_105_110_100_95_118_97_114_95_102_111_114_95_115_119_105_116_99_104_95_105_110_95_100_101_99_111_110_115_116_114_117_99_116_95_95_91_52_44_32_54_93_95_48_7_0_i2);
	}
	MR_r5 = MR_tfield(0, MR_tempr1, 3);
	if (MR_PTAG_TESTR(MR_r5,1)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_115_119_105_116_99_104_95_100_101_116_101_99_116_105_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_98_105_110_100_95_118_97_114_95_102_111_114_95_115_119_105_116_99_104_95_105_110_95_100_101_99_111_110_115_116_114_117_99_116_95_95_91_52_44_32_54_93_95_48_7_0_i2);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_tag_alloc_heap(MR_sv(1), 1, (MR_Integer) 1);
	MR_tempr3 = MR_r5;
	MR_tfield(1, MR_sv(1), 0) = MR_tfield(1, MR_tempr3, 1);
	MR_sv(3) = MR_tfield(0, MR_r2, 1);
	MR_tempr2 = MR_tfield(1, MR_tempr3, 2);
	if (MR_LTAGS_TESTR(MR_tempr2,0,0)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_115_119_105_116_99_104_95_100_101_116_101_99_116_105_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_98_105_110_100_95_118_97_114_95_102_111_114_95_115_119_105_116_99_104_95_105_110_95_100_101_99_111_110_115_116_114_117_99_116_95_95_91_52_44_32_54_93_95_48_7_0_i7);
	}
	MR_sv(2) = MR_r4;
	MR_sv(4) = MR_tempr3;
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_tempr2;
	MR_r3 = MR_tfield(1, MR_tempr3, 0);
	}
	MR_np_call_localret_ent(__Unify___term__var_1_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_115_119_105_116_99_104_95_100_101_116_101_99_116_105_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_98_105_110_100_95_118_97_114_95_102_111_114_95_115_119_105_116_99_104_95_105_110_95_100_101_99_111_110_115_116_114_117_99_116_95_95_91_52_44_32_54_93_95_48_7_0_i9);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_115_119_105_116_99_104_95_100_101_116_101_99_116_105_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_98_105_110_100_95_118_97_114_95_102_111_114_95_115_119_105_116_99_104_95_105_110_95_100_101_99_111_110_115_116_114_117_99_116_95_95_91_52_44_32_54_93_95_48_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_115_119_105_116_99_104_95_100_101_116_101_99_116_105_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_98_105_110_100_95_118_97_114_95_102_111_114_95_115_119_105_116_99_104_95_105_110_95_100_101_99_111_110_115_116_114_117_99_116_95_95_91_52_44_32_54_93_95_48_7_0_i6);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(5);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_115_119_105_116_99_104_95_100_101_116_101_99_116_105_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_98_105_110_100_95_118_97_114_95_102_111_114_95_115_119_105_116_99_104_95_105_110_95_100_101_99_111_110_115_116_114_117_99_116_95_95_91_52_44_32_54_93_95_48_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(4);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_115_119_105_116_99_104_95_100_101_116_101_99_116_105_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_98_105_110_100_95_118_97_114_95_102_111_114_95_115_119_105_116_99_104_95_105_110_95_100_101_99_111_110_115_116_114_117_99_116_95_95_91_52_44_32_54_93_95_48_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 6);
	MR_tempr5 = MR_r5;
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(1, MR_tempr5, 0);
	MR_tfield(1, MR_tempr1, 1) = MR_tfield(1, MR_tempr5, 1);
	MR_tfield(1, MR_tempr1, 2) = MR_tfield(1, MR_tempr5, 2);
	MR_tfield(1, MR_tempr1, 3) = MR_tfield(1, MR_tempr5, 3);
	MR_tfield(1, MR_tempr1, 4) = (MR_Integer) 1;
	MR_tfield(1, MR_tempr1, 5) = MR_tfield(1, MR_tempr5, 5);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 5);
	MR_tempr6 = MR_r4;
	MR_tfield(0, MR_tempr2, 0) = MR_tfield(0, MR_tempr6, 0);
	MR_tfield(0, MR_tempr2, 1) = MR_tfield(0, MR_tempr6, 1);
	MR_tfield(0, MR_tempr2, 2) = MR_tfield(0, MR_tempr6, 2);
	MR_tfield(0, MR_tempr2, 3) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 4) = MR_tfield(0, MR_tempr6, 4);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(0, MR_tempr3, 1) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_r1 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr4, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(5);
	}
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_115_119_105_116_99_104_95_100_101_116_101_99_116_105_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_98_105_110_100_95_118_97_114_95_102_111_114_95_115_119_105_116_99_104_95_105_110_95_100_101_99_111_110_115_116_114_117_99_116_95_95_91_52_44_32_54_93_95_48_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("switch_detection.m", 18);
	MR_r2 = (MR_Word) MR_string_const("find_bind_var_for_switch_in_deconstruct", 39);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__term__context_init_0_0);
MR_decl_entry(term__apply_rec_substitution_3_0);
MR_decl_entry(__Unify___term__context_0_0);
MR_declare_entry(mercury__do_call_closure_4);
MR_decl_entry(hlds__hlds_goal__conj_list_to_goal_3_0);
MR_decl_entry(check_hlds__det_util__interpret_unify_4_0);
MR_decl_entry(hlds__hlds_goal__goal_info_has_feature_2_0);

MR_BEGIN_MODULE(check_hlds__switch_detection_module55)
	MR_init_entry1(f_99_104_101_99_107_95_104_108_100_115_95_95_115_119_105_116_99_104_95_100_101_116_101_99_116_105_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_98_105_110_100_95_118_97_114_95_50_95_95_91_49_44_32_50_93_95_48_11_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_99_104_101_99_107_95_104_108_100_115_95_95_115_119_105_116_99_104_95_100_101_116_101_99_116_105_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_98_105_110_100_95_118_97_114_95_50_95_95_91_49_44_32_50_93_95_48_11_0);
	MR_init_label10(f_99_104_101_99_107_95_104_108_100_115_95_95_115_119_105_116_99_104_95_100_101_116_101_99_116_105_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_98_105_110_100_95_118_97_114_95_50_95_95_91_49_44_32_50_93_95_48_11_0,132,37,39,40,42,44,46,47,49,51)
	MR_init_label10(f_99_104_101_99_107_95_104_108_100_115_95_95_115_119_105_116_99_104_95_100_101_116_101_99_116_105_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_98_105_110_100_95_118_97_114_95_50_95_95_91_49_44_32_50_93_95_48_11_0,53,54,34,35,57,55,133,5,4,64)
	MR_init_label10(f_99_104_101_99_107_95_104_108_100_115_95_95_115_119_105_116_99_104_95_100_101_116_101_99_116_105_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_98_105_110_100_95_118_97_114_95_50_95_95_91_49_44_32_50_93_95_48_11_0,8,10,136,13,134,17,20,24,78,138)
	MR_init_label1(f_99_104_101_99_107_95_104_108_100_115_95_95_115_119_105_116_99_104_95_100_101_116_101_99_116_105_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_98_105_110_100_95_118_97_114_95_50_95_95_91_49_44_32_50_93_95_48_11_0,28)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__find_bind_var_2__[1, 2]_0'/11 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_99_104_101_99_107_95_104_108_100_115_95_95_115_119_105_116_99_104_95_100_101_116_101_99_116_105_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_98_105_110_100_95_118_97_114_95_50_95_95_91_49_44_32_50_93_95_48_11_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r7 = MR_tfield(0, MR_r3, 0);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r7),
		MR_LABEL_AP(f_99_104_101_99_107_95_104_108_100_115_95_95_115_119_105_116_99_104_95_100_101_116_101_99_116_105_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_98_105_110_100_95_118_97_114_95_50_95_95_91_49_44_32_50_93_95_48_11_0_i132) MR_AND
		MR_LABEL_AP(f_99_104_101_99_107_95_104_108_100_115_95_95_115_119_105_116_99_104_95_100_101_116_101_99_116_105_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_98_105_110_100_95_118_97_114_95_50_95_95_91_49_44_32_50_93_95_48_11_0_i133) MR_AND
		MR_LABEL_AP(f_99_104_101_99_107_95_104_108_100_115_95_95_115_119_105_116_99_104_95_100_101_116_101_99_116_105_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_98_105_110_100_95_118_97_114_95_50_95_95_91_49_44_32_50_93_95_48_11_0_i133) MR_AND
		MR_LABEL_AP(f_99_104_101_99_107_95_104_108_100_115_95_95_115_119_105_116_99_104_95_100_101_116_101_99_116_105_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_98_105_110_100_95_118_97_114_95_50_95_95_91_49_44_32_50_93_95_48_11_0_i64));
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_115_119_105_116_99_104_95_100_101_116_101_99_116_105_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_98_105_110_100_95_118_97_114_95_50_95_95_91_49_44_32_50_93_95_48_11_0,132)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr2 = MR_r7;
	MR_sv(6) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(5) = MR_tfield(0, MR_tempr2, 0);
	MR_tempr1 = MR_tfield(0, MR_tempr2, 3);
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_115_119_105_116_99_104_95_100_101_116_101_99_116_105_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_98_105_110_100_95_118_97_114_95_50_95_95_91_49_44_32_50_93_95_48_11_0_i35);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_tempr3 = MR_r3;
	MR_sv(3) = MR_tempr3;
	MR_sv(4) = MR_tfield(0, MR_tempr3, 1);
	MR_sv(7) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(9) = MR_r4;
	MR_sv(10) = MR_r5;
	MR_sv(11) = MR_r6;
	}
	MR_np_call_localret_ent(fn__term__context_init_0_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_115_119_105_116_99_104_95_100_101_116_101_99_116_105_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_98_105_110_100_95_118_97_114_95_50_95_95_91_49_44_32_50_93_95_48_11_0_i37);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_115_119_105_116_99_104_95_100_101_116_101_99_116_105_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_98_105_110_100_95_118_97_114_95_50_95_95_91_49_44_32_50_93_95_48_11_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_sv(8) = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	}
	MR_np_call_localret_ent(fn__term__context_init_0_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_115_119_105_116_99_104_95_100_101_116_101_99_116_105_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_98_105_110_100_95_118_97_114_95_50_95_95_91_49_44_32_50_93_95_48_11_0_i39);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_115_119_105_116_99_104_95_100_101_116_101_99_116_105_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_98_105_110_100_95_118_97_114_95_50_95_95_91_49_44_32_50_93_95_48_11_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(8);
	MR_sv(8) = MR_r1;
	MR_sv(12) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r1 = MR_sv(12);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(9);
	}
	MR_np_call_localret_ent(term__apply_rec_substitution_3_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_115_119_105_116_99_104_95_100_101_116_101_99_116_105_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_98_105_110_100_95_118_97_114_95_50_95_95_91_49_44_32_50_93_95_48_11_0_i40);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_115_119_105_116_99_104_95_100_101_116_101_99_116_105_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_98_105_110_100_95_118_97_114_95_50_95_95_91_49_44_32_50_93_95_48_11_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_115_119_105_116_99_104_95_100_101_116_101_99_116_105_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_98_105_110_100_95_118_97_114_95_50_95_95_91_49_44_32_50_93_95_48_11_0_i34);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_sv(8);
	MR_tempr3 = MR_r1;
	MR_sv(8) = MR_tfield(1, MR_tempr3, 0);
	MR_tempr2 = MR_tempr3;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tfield(1, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(__Unify___term__context_0_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_115_119_105_116_99_104_95_100_101_116_101_99_116_105_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_98_105_110_100_95_118_97_114_95_50_95_95_91_49_44_32_50_93_95_48_11_0_i42);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_115_119_105_116_99_104_95_100_101_116_101_99_116_105_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_98_105_110_100_95_118_97_114_95_50_95_95_91_49_44_32_50_93_95_48_11_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_115_119_105_116_99_104_95_100_101_116_101_99_116_105_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_98_105_110_100_95_118_97_114_95_50_95_95_91_49_44_32_50_93_95_48_11_0_i34);
	}
	MR_np_call_localret_ent(fn__term__context_init_0_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_115_119_105_116_99_104_95_100_101_116_101_99_116_105_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_98_105_110_100_95_118_97_114_95_50_95_95_91_49_44_32_50_93_95_48_11_0_i44);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_115_119_105_116_99_104_95_100_101_116_101_99_116_105_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_98_105_110_100_95_118_97_114_95_50_95_95_91_49_44_32_50_93_95_48_11_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(7);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_sv(7) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__term__context_init_0_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_115_119_105_116_99_104_95_100_101_116_101_99_116_105_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_98_105_110_100_95_118_97_114_95_50_95_95_91_49_44_32_50_93_95_48_11_0_i46);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_115_119_105_116_99_104_95_100_101_116_101_99_116_105_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_98_105_110_100_95_118_97_114_95_50_95_95_91_49_44_32_50_93_95_48_11_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(12);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(9);
	}
	MR_np_call_localret_ent(term__apply_rec_substitution_3_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_115_119_105_116_99_104_95_100_101_116_101_99_116_105_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_98_105_110_100_95_118_97_114_95_50_95_95_91_49_44_32_50_93_95_48_11_0_i47);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_115_119_105_116_99_104_95_100_101_116_101_99_116_105_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_98_105_110_100_95_118_97_114_95_50_95_95_91_49_44_32_50_93_95_48_11_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_115_119_105_116_99_104_95_100_101_116_101_99_116_105_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_98_105_110_100_95_118_97_114_95_50_95_95_91_49_44_32_50_93_95_48_11_0_i34);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_sv(7);
	MR_tempr3 = MR_r1;
	MR_sv(7) = MR_tfield(1, MR_tempr3, 0);
	MR_tempr2 = MR_tempr3;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tfield(1, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(__Unify___term__context_0_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_115_119_105_116_99_104_95_100_101_116_101_99_116_105_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_98_105_110_100_95_118_97_114_95_50_95_95_91_49_44_32_50_93_95_48_11_0_i49);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_115_119_105_116_99_104_95_100_101_116_101_99_116_105_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_98_105_110_100_95_118_97_114_95_50_95_95_91_49_44_32_50_93_95_48_11_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_115_119_105_116_99_104_95_100_101_116_101_99_116_105_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_98_105_110_100_95_118_97_114_95_50_95_95_91_49_44_32_50_93_95_48_11_0_i34);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(__Unify___term__var_1_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_115_119_105_116_99_104_95_100_101_116_101_99_116_105_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_98_105_110_100_95_118_97_114_95_50_95_95_91_49_44_32_50_93_95_48_11_0_i51);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_115_119_105_116_99_104_95_100_101_116_101_99_116_105_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_98_105_110_100_95_118_97_114_95_50_95_95_91_49_44_32_50_93_95_48_11_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_115_119_105_116_99_104_95_100_101_116_101_99_116_105_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_98_105_110_100_95_118_97_114_95_50_95_95_91_49_44_32_50_93_95_48_11_0_i34);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(10);
	MR_r5 = MR_sv(11);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(f_99_104_101_99_107_95_104_108_100_115_95_95_115_119_105_116_99_104_95_100_101_116_101_99_116_105_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_98_105_110_100_95_118_97_114_95_50_95_95_91_49_44_32_50_93_95_48_11_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_4),
		mercury__f_99_104_101_99_107_95_104_108_100_115_95_95_115_119_105_116_99_104_95_100_101_116_101_99_116_105_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_98_105_110_100_95_118_97_114_95_50_95_95_91_49_44_32_50_93_95_48_11_0_i53);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_115_119_105_116_99_104_95_100_101_116_101_99_116_105_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_98_105_110_100_95_118_97_114_95_50_95_95_91_49_44_32_50_93_95_48_11_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_goal__conj_list_to_goal_3_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_115_119_105_116_99_104_95_100_101_116_101_99_116_105_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_98_105_110_100_95_118_97_114_95_50_95_95_91_49_44_32_50_93_95_48_11_0_i54);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_115_119_105_116_99_104_95_100_101_116_101_99_116_105_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_98_105_110_100_95_118_97_114_95_50_95_95_91_49_44_32_50_93_95_48_11_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = (MR_Integer) 1;
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_decr_sp_and_return(13);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_115_119_105_116_99_104_95_100_101_116_101_99_116_105_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_98_105_110_100_95_118_97_114_95_50_95_95_91_49_44_32_50_93_95_48_11_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(9);
	MR_r5 = MR_sv(10);
	MR_r6 = MR_sv(11);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_115_119_105_116_99_104_95_100_101_116_101_99_116_105_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_98_105_110_100_95_118_97_114_95_50_95_95_91_49_44_32_50_93_95_48_11_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(9) = MR_tempr1;
	MR_sv(10) = MR_r5;
	MR_sv(11) = MR_r6;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__det_util__interpret_unify_4_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_115_119_105_116_99_104_95_100_101_116_101_99_116_105_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_98_105_110_100_95_118_97_114_95_50_95_95_91_49_44_32_50_93_95_48_11_0_i57);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_115_119_105_116_99_104_95_100_101_116_101_99_116_105_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_98_105_110_100_95_118_97_114_95_50_95_95_91_49_44_32_50_93_95_48_11_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_115_119_105_116_99_104_95_100_101_116_101_99_116_105_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_98_105_110_100_95_118_97_114_95_50_95_95_91_49_44_32_50_93_95_48_11_0_i55);
	}
	MR_r1 = MR_sv(1);
	MR_r5 = (MR_Integer) 0;
	MR_r3 = MR_sv(10);
	MR_r4 = MR_sv(11);
	MR_decr_sp_and_return(13);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_115_119_105_116_99_104_95_100_101_116_101_99_116_105_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_98_105_110_100_95_118_97_114_95_50_95_95_91_49_44_32_50_93_95_48_11_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(9);
	MR_r5 = MR_sv(10);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(11);
	MR_r1 = MR_r3;
	MR_tempr2 = MR_r5;
	MR_r5 = (MR_Integer) 0;
	MR_r2 = MR_r4;
	MR_r3 = MR_tempr2;
	MR_r4 = MR_tempr1;
	MR_decr_sp_and_return(13);
	}
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_115_119_105_116_99_104_95_100_101_116_101_99_116_105_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_98_105_110_100_95_118_97_114_95_50_95_95_91_49_44_32_50_93_95_48_11_0,133)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(1) = MR_tempr1;
	MR_sv(9) = MR_r4;
	MR_sv(10) = MR_r5;
	MR_sv(11) = MR_r6;
	MR_r1 = MR_tfield(0, MR_tempr1, 1);
	MR_r2 = (MR_Integer) 1;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_has_feature_2_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_115_119_105_116_99_104_95_100_101_116_101_99_116_105_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_98_105_110_100_95_118_97_114_95_50_95_95_91_49_44_32_50_93_95_48_11_0_i5);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_115_119_105_116_99_104_95_100_101_116_101_99_116_105_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_98_105_110_100_95_118_97_114_95_50_95_95_91_49_44_32_50_93_95_48_11_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_115_119_105_116_99_104_95_100_101_116_101_99_116_105_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_98_105_110_100_95_118_97_114_95_50_95_95_91_49_44_32_50_93_95_48_11_0_i4);
	}
	MR_r1 = MR_sv(1);
	MR_r5 = (MR_Integer) 0;
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(10);
	MR_r4 = MR_sv(11);
	MR_decr_sp_and_return(13);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_115_119_105_116_99_104_95_100_101_116_101_99_116_105_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_98_105_110_100_95_118_97_114_95_50_95_95_91_49_44_32_50_93_95_48_11_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r5 = (MR_Integer) 2;
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(10);
	MR_r4 = MR_sv(11);
	MR_decr_sp_and_return(13);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_115_119_105_116_99_104_95_100_101_116_101_99_116_105_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_98_105_110_100_95_118_97_114_95_50_95_95_91_49_44_32_50_93_95_48_11_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tfield(3, MR_r7, 0),
		MR_LABEL_AP(f_99_104_101_99_107_95_104_108_100_115_95_95_115_119_105_116_99_104_95_100_101_116_101_99_116_105_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_98_105_110_100_95_118_97_114_95_50_95_95_91_49_44_32_50_93_95_48_11_0_i133) MR_AND
		MR_LABEL_AP(f_99_104_101_99_107_95_104_108_100_115_95_95_115_119_105_116_99_104_95_100_101_116_101_99_116_105_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_98_105_110_100_95_118_97_114_95_50_95_95_91_49_44_32_50_93_95_48_11_0_i8) MR_AND
		MR_LABEL_AP(f_99_104_101_99_107_95_104_108_100_115_95_95_115_119_105_116_99_104_95_100_101_116_101_99_116_105_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_98_105_110_100_95_118_97_114_95_50_95_95_91_49_44_32_50_93_95_48_11_0_i133) MR_AND
		MR_LABEL_AP(f_99_104_101_99_107_95_104_108_100_115_95_95_115_119_105_116_99_104_95_100_101_116_101_99_116_105_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_98_105_110_100_95_118_97_114_95_50_95_95_91_49_44_32_50_93_95_48_11_0_i133) MR_AND
		MR_LABEL_AP(f_99_104_101_99_107_95_104_108_100_115_95_95_115_119_105_116_99_104_95_100_101_116_101_99_116_105_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_98_105_110_100_95_118_97_114_95_50_95_95_91_49_44_32_50_93_95_48_11_0_i133) MR_AND
		MR_LABEL_AP(f_99_104_101_99_107_95_104_108_100_115_95_95_115_119_105_116_99_104_95_100_101_116_101_99_116_105_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_98_105_110_100_95_118_97_114_95_50_95_95_91_49_44_32_50_93_95_48_11_0_i134) MR_AND
		MR_LABEL_AP(f_99_104_101_99_107_95_104_108_100_115_95_95_115_119_105_116_99_104_95_100_101_116_101_99_116_105_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_98_105_110_100_95_118_97_114_95_50_95_95_91_49_44_32_50_93_95_48_11_0_i133) MR_AND
		MR_LABEL_AP(f_99_104_101_99_107_95_104_108_100_115_95_95_115_119_105_116_99_104_95_100_101_116_101_99_116_105_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_98_105_110_100_95_118_97_114_95_50_95_95_91_49_44_32_50_93_95_48_11_0_i24));
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_115_119_105_116_99_104_95_100_101_116_101_99_116_105_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_98_105_110_100_95_118_97_114_95_50_95_95_91_49_44_32_50_93_95_48_11_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r8 = MR_tfield(3, MR_r7, 1);
	if (MR_INT_NE(MR_r8,1)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_115_119_105_116_99_104_95_100_101_116_101_99_116_105_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_98_105_110_100_95_118_97_114_95_50_95_95_91_49_44_32_50_93_95_48_11_0_i10);
	}
	MR_r1 = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_r5 = (MR_Integer) 2;
	MR_r2 = MR_r4;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_r6;
	MR_proceed();
	}
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_115_119_105_116_99_104_95_100_101_116_101_99_116_105_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_98_105_110_100_95_118_97_114_95_50_95_95_91_49_44_32_50_93_95_48_11_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r9 = MR_tfield(3, MR_r7, 2);
	if (MR_LTAGS_TESTR(MR_r9,0,0)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_115_119_105_116_99_104_95_100_101_116_101_99_116_105_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_98_105_110_100_95_118_97_114_95_50_95_95_91_49_44_32_50_93_95_48_11_0_i136);
	}
	MR_r1 = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_r5 = (MR_Integer) 0;
	MR_r2 = MR_r4;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_r6;
	MR_proceed();
	}
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_115_119_105_116_99_104_95_100_101_116_101_99_116_105_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_98_105_110_100_95_118_97_114_95_50_95_95_91_49_44_32_50_93_95_48_11_0,136)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
	MR_sv(4) = MR_tfield(0, MR_r3, 1);
	MR_sv(1) = MR_r8;
	MR_r3 = MR_r9;
	MR_np_call_localret_ent(f_99_104_101_99_107_95_104_108_100_115_95_95_115_119_105_116_99_104_95_100_101_116_101_99_116_105_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_106_95_102_105_110_100_95_98_105_110_100_95_118_97_114_95_95_91_49_44_32_50_93_95_48_11_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_115_119_105_116_99_104_95_100_101_116_101_99_116_105_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_98_105_110_100_95_118_97_114_95_50_95_95_91_49_44_32_50_93_95_48_11_0_i13);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_115_119_105_116_99_104_95_100_101_116_101_99_116_105_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_98_105_110_100_95_118_97_114_95_50_95_95_91_49_44_32_50_93_95_48_11_0,13)
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
	MR_tfield(0, MR_tempr2, 1) = MR_sv(4);
	MR_decr_sp_and_return(13);
	}
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_115_119_105_116_99_104_95_100_101_116_101_99_116_105_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_98_105_110_100_95_118_97_114_95_50_95_95_91_49_44_32_50_93_95_48_11_0,134)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_r7;
	MR_r8 = MR_tfield(3, MR_tempr3, 2);
	MR_tempr1 = MR_tfield(3, MR_tempr3, 1);
	MR_sv(1) = MR_tempr1;
	MR_tempr4 = MR_r3;
	MR_sv(4) = MR_tfield(0, MR_tempr4, 1);
	if (MR_RTAGS_TESTR(MR_tempr1,3,2)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_115_119_105_116_99_104_95_100_101_116_101_99_116_105_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_98_105_110_100_95_118_97_114_95_50_95_95_91_49_44_32_50_93_95_48_11_0_i17);
	}
	MR_tempr2 = MR_tfield(3, MR_tempr1, 2);
	if (MR_INT_NE(MR_tempr2,0)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_115_119_105_116_99_104_95_100_101_116_101_99_116_105_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_98_105_110_100_95_118_97_114_95_50_95_95_91_49_44_32_50_93_95_48_11_0_i17);
	}
	MR_r1 = MR_tempr4;
	MR_tempr2 = MR_r5;
	MR_r5 = (MR_Integer) 0;
	MR_r2 = MR_r4;
	MR_r3 = MR_tempr2;
	MR_r4 = MR_r6;
	MR_decr_sp(13);
	MR_proceed();
	}
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_115_119_105_116_99_104_95_100_101_116_101_99_116_105_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_98_105_110_100_95_118_97_114_95_50_95_95_91_49_44_32_50_93_95_48_11_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r8;
	MR_np_localcall_lab(f_99_104_101_99_107_95_104_108_100_115_95_95_115_119_105_116_99_104_95_100_101_116_101_99_116_105_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_98_105_110_100_95_118_97_114_95_50_95_95_91_49_44_32_50_93_95_48_11_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_115_119_105_116_99_104_95_100_101_116_101_99_116_105_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_98_105_110_100_95_118_97_114_95_50_95_95_91_49_44_32_50_93_95_48_11_0_i20);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_115_119_105_116_99_104_95_100_101_116_101_99_116_105_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_98_105_110_100_95_118_97_114_95_50_95_95_91_49_44_32_50_93_95_48_11_0,20)
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
	MR_tfield(0, MR_tempr2, 1) = MR_sv(4);
	MR_decr_sp_and_return(13);
	}
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_115_119_105_116_99_104_95_100_101_116_101_99_116_105_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_98_105_110_100_95_118_97_114_95_50_95_95_91_49_44_32_50_93_95_48_11_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(3, MR_r7, 1);
	MR_tempr2 = MR_tag(MR_tempr1);
	if ((MR_tempr2 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_115_119_105_116_99_104_95_100_101_116_101_99_116_105_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_98_105_110_100_95_118_97_114_95_50_95_95_91_49_44_32_50_93_95_48_11_0_i78);
	}
	if ((MR_tempr2 == MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_115_119_105_116_99_104_95_100_101_116_101_99_116_105_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_98_105_110_100_95_118_97_114_95_50_95_95_91_49_44_32_50_93_95_48_11_0_i138);
	}
	}
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_115_119_105_116_99_104_95_100_101_116_101_99_116_105_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_98_105_110_100_95_118_97_114_95_50_95_95_91_49_44_32_50_93_95_48_11_0,78)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_r5 = (MR_Integer) 2;
	MR_r2 = MR_r4;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_r6;
	MR_proceed();
	}
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_115_119_105_116_99_104_95_100_101_116_101_99_116_105_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_98_105_110_100_95_118_97_114_95_50_95_95_91_49_44_32_50_93_95_48_11_0,138)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__check_hlds__switch_detection__this_file_0_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_115_119_105_116_99_104_95_100_101_116_101_99_116_105_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_98_105_110_100_95_118_97_114_95_50_95_95_91_49_44_32_50_93_95_48_11_0_i28);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_115_119_105_116_99_104_95_100_101_116_101_99_116_105_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_98_105_110_100_95_118_97_114_95_50_95_95_91_49_44_32_50_93_95_48_11_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("find_bind_var_2: bi_implication", 31);
	MR_succip_word = MR_sv(13);
	MR_decr_sp(13);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__switch_detection_module56)
	MR_init_entry1(f_99_104_101_99_107_95_104_108_100_115_95_95_115_119_105_116_99_104_95_100_101_116_101_99_116_105_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_106_95_102_105_110_100_95_98_105_110_100_95_118_97_114_95_95_91_49_44_32_50_93_95_48_11_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_99_104_101_99_107_95_104_108_100_115_95_95_115_119_105_116_99_104_95_100_101_116_101_99_116_105_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_106_95_102_105_110_100_95_98_105_110_100_95_118_97_114_95_95_91_49_44_32_50_93_95_48_11_0);
	MR_init_label4(f_99_104_101_99_107_95_104_108_100_115_95_95_115_119_105_116_99_104_95_100_101_116_101_99_116_105_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_106_95_102_105_110_100_95_98_105_110_100_95_118_97_114_95_95_91_49_44_32_50_93_95_48_11_0,21,4,6,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__conj_find_bind_var__[1, 2]_0'/11 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_99_104_101_99_107_95_104_108_100_115_95_95_115_119_105_116_99_104_95_100_101_116_101_99_116_105_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_106_95_102_105_110_100_95_98_105_110_100_95_118_97_114_95_95_91_49_44_32_50_93_95_48_11_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_115_119_105_116_99_104_95_100_101_116_101_99_116_105_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_106_95_102_105_110_100_95_98_105_110_100_95_118_97_114_95_95_91_49_44_32_50_93_95_48_11_0_i21);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r4;
	MR_r3 = MR_r5;
	MR_r4 = MR_r6;
	MR_r5 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_115_119_105_116_99_104_95_100_101_116_101_99_116_105_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_106_95_102_105_110_100_95_98_105_110_100_95_118_97_114_95_95_91_49_44_32_50_93_95_48_11_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_tfield(1, MR_r3, 1);
	MR_r3 = MR_tfield(1, MR_r3, 0);
	MR_np_call_localret_ent(f_99_104_101_99_107_95_104_108_100_115_95_95_115_119_105_116_99_104_95_100_101_116_101_99_116_105_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_98_105_110_100_95_118_97_114_95_50_95_95_91_49_44_32_50_93_95_48_11_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_115_119_105_116_99_104_95_100_101_116_101_99_116_105_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_106_95_102_105_110_100_95_98_105_110_100_95_118_97_114_95_95_91_49_44_32_50_93_95_48_11_0_i4);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_115_119_105_116_99_104_95_100_101_116_101_99_116_105_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_106_95_102_105_110_100_95_98_105_110_100_95_118_97_114_95_95_91_49_44_32_50_93_95_48_11_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!((((MR_Integer) MR_r5 == (MR_Integer) 1) || ((MR_Integer) MR_r5 == (MR_Integer) 2)))) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_115_119_105_116_99_104_95_100_101_116_101_99_116_105_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_106_95_102_105_110_100_95_98_105_110_100_95_118_97_114_95_95_91_49_44_32_50_93_95_48_11_0_i6);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(3);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_115_119_105_116_99_104_95_100_101_116_101_99_116_105_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_106_95_102_105_110_100_95_98_105_110_100_95_118_97_114_95_95_91_49_44_32_50_93_95_48_11_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_sv(3);
	MR_tempr4 = MR_r4;
	MR_r4 = MR_tempr2;
	MR_r5 = MR_tempr3;
	MR_r6 = MR_tempr4;
	}
	MR_np_localcall_lab(f_99_104_101_99_107_95_104_108_100_115_95_95_115_119_105_116_99_104_95_100_101_116_101_99_116_105_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_106_95_102_105_110_100_95_98_105_110_100_95_118_97_114_95_95_91_49_44_32_50_93_95_48_11_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_115_119_105_116_99_104_95_100_101_116_101_99_116_105_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_106_95_102_105_110_100_95_98_105_110_100_95_118_97_114_95_95_91_49_44_32_50_93_95_48_11_0_i8);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_115_119_105_116_99_104_95_100_101_116_101_99_116_105_111_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_106_95_102_105_110_100_95_98_105_110_100_95_118_97_114_95_95_91_49_44_32_50_93_95_48_11_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__check_hlds__switch_detection_maybe_bunch_0(void)
{
	check_hlds__switch_detection_module0();
	check_hlds__switch_detection_module1();
	check_hlds__switch_detection_module2();
	check_hlds__switch_detection_module3();
	check_hlds__switch_detection_module4();
	check_hlds__switch_detection_module5();
	check_hlds__switch_detection_module6();
	check_hlds__switch_detection_module7();
	check_hlds__switch_detection_module8();
	check_hlds__switch_detection_module9();
	check_hlds__switch_detection_module10();
	check_hlds__switch_detection_module11();
	check_hlds__switch_detection_module12();
	check_hlds__switch_detection_module13();
	check_hlds__switch_detection_module14();
	check_hlds__switch_detection_module15();
	check_hlds__switch_detection_module16();
	check_hlds__switch_detection_module17();
	check_hlds__switch_detection_module18();
	check_hlds__switch_detection_module19();
	check_hlds__switch_detection_module20();
	check_hlds__switch_detection_module21();
	check_hlds__switch_detection_module22();
	check_hlds__switch_detection_module23();
	check_hlds__switch_detection_module24();
	check_hlds__switch_detection_module25();
	check_hlds__switch_detection_module26();
	check_hlds__switch_detection_module27();
	check_hlds__switch_detection_module28();
	check_hlds__switch_detection_module29();
	check_hlds__switch_detection_module30();
	check_hlds__switch_detection_module31();
	check_hlds__switch_detection_module32();
	check_hlds__switch_detection_module33();
	check_hlds__switch_detection_module34();
	check_hlds__switch_detection_module35();
	check_hlds__switch_detection_module36();
	check_hlds__switch_detection_module37();
	check_hlds__switch_detection_module38();
	check_hlds__switch_detection_module39();
}

static void mercury__check_hlds__switch_detection_maybe_bunch_1(void)
{
	check_hlds__switch_detection_module40();
	check_hlds__switch_detection_module41();
	check_hlds__switch_detection_module42();
	check_hlds__switch_detection_module43();
	check_hlds__switch_detection_module44();
	check_hlds__switch_detection_module45();
	check_hlds__switch_detection_module46();
	check_hlds__switch_detection_module47();
	check_hlds__switch_detection_module48();
	check_hlds__switch_detection_module49();
	check_hlds__switch_detection_module50();
	check_hlds__switch_detection_module51();
	check_hlds__switch_detection_module52();
	check_hlds__switch_detection_module53();
	check_hlds__switch_detection_module54();
	check_hlds__switch_detection_module55();
	check_hlds__switch_detection_module56();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__check_hlds__switch_detection__init(void);
void mercury__check_hlds__switch_detection__init_type_tables(void);
void mercury__check_hlds__switch_detection__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__check_hlds__switch_detection__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__check_hlds__switch_detection__init_complexity_procs(void);
#endif

void mercury__check_hlds__switch_detection__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__check_hlds__switch_detection_maybe_bunch_0();
	mercury__check_hlds__switch_detection_maybe_bunch_1();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_check_hlds__switch_detection__type_ctor_info_again_0,
		check_hlds__switch_detection__again_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_check_hlds__switch_detection__type_ctor_info_allow_multi_arm_0,
		check_hlds__switch_detection__allow_multi_arm_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_check_hlds__switch_detection__type_ctor_info_case_arm_0,
		check_hlds__switch_detection__case_arm_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_check_hlds__switch_detection__type_ctor_info_cases_table_0,
		check_hlds__switch_detection__cases_table_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_check_hlds__switch_detection__type_ctor_info_cons_id_entry_0,
		check_hlds__switch_detection__cons_id_entry_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_check_hlds__switch_detection__type_ctor_info_cons_id_state_0,
		check_hlds__switch_detection__cons_id_state_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_check_hlds__switch_detection__type_ctor_info_deconstruct_search_0,
		check_hlds__switch_detection__deconstruct_search_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_check_hlds__switch_detection__type_ctor_info_found_deconstruct_0,
		check_hlds__switch_detection__found_deconstruct_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_check_hlds__switch_detection__type_ctor_info_process_unify_2,
		check_hlds__switch_detection__process_unify_2_0);
	mercury__check_hlds__switch_detection__init_debugger();
}

void mercury__check_hlds__switch_detection__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_check_hlds__switch_detection__type_ctor_info_again_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_check_hlds__switch_detection__type_ctor_info_allow_multi_arm_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_check_hlds__switch_detection__type_ctor_info_case_arm_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_check_hlds__switch_detection__type_ctor_info_cases_table_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_check_hlds__switch_detection__type_ctor_info_cons_id_entry_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_check_hlds__switch_detection__type_ctor_info_cons_id_state_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_check_hlds__switch_detection__type_ctor_info_deconstruct_search_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_check_hlds__switch_detection__type_ctor_info_found_deconstruct_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_check_hlds__switch_detection__type_ctor_info_process_unify_2);
	}
}


void mercury__check_hlds__switch_detection__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__check_hlds__switch_detection__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__check_hlds__switch_detection);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__check_hlds__switch_detection__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
