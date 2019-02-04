/*
** Automatically generated from `format_call.m'
** by the Mercury compiler,
** version rotd-2009-09-19, configured for i686-pc-linux-gnu.
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
INIT mercury__check_hlds__format_call__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 226 "../mdbcomp/mdbcomp.program_representation.int"
#include "mdbcomp.program_representation.mh"

#line 27 "check_hlds.format_call.c"
#line 136 "../library/io.int2"
#include "io.mh"

#line 31 "check_hlds.format_call.c"
#line 144 "../library/io.int2"
#include "string.mh"

#line 35 "check_hlds.format_call.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 39 "check_hlds.format_call.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 43 "check_hlds.format_call.c"
#line 31 "../library/array.int2"
#include "array.mh"

#line 47 "check_hlds.format_call.c"
#line 21 "../library/stm_builtin.int2"
#include "stm_builtin.mh"

#line 51 "check_hlds.format_call.c"
#line 33 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 55 "check_hlds.format_call.c"
#line 56 "check_hlds.format_call.c"
#include "check_hlds.format_call.mh"

#line 59 "check_hlds.format_call.c"
#line 60 "check_hlds.format_call.c"
#ifndef CHECK_HLDS__FORMAT_CALL_DECL_GUARD
#define CHECK_HLDS__FORMAT_CALL_DECL_GUARD

#line 64 "check_hlds.format_call.c"
#line 65 "check_hlds.format_call.c"

#endif
#line 68 "check_hlds.format_call.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

struct mercury_type_0 {
	MR_String f1;
};
MR_STATIC_LINKAGE const struct mercury_type_0 mercury_common_0[];

struct mercury_type_1 {
	MR_Word * f1;
	MR_String f2;
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

struct mercury_type_2 {
	MR_Word * f1[2];
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];

struct mercury_type_3 {
	MR_Integer f1;
};
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];

struct mercury_type_4 {
	MR_Word * f1;
};
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_common_4[];

struct mercury_type_5 {
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
	MR_Word * f5;
};
MR_STATIC_LINKAGE const struct mercury_type_5 mercury_common_5[];

struct mercury_type_6 {
	MR_Word * f1;
	MR_Code * f2;
	MR_Integer f3;
};
MR_STATIC_LINKAGE const struct mercury_type_6 mercury_common_6[];

struct mercury_type_7 {
	MR_Word * f1[3];
};
MR_STATIC_LINKAGE const struct mercury_type_7 mercury_common_7[];

struct mercury_type_8 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[13];
};
MR_STATIC_LINKAGE const struct mercury_type_8 mercury_common_8[];

struct mercury_type_9 {
	MR_Integer f1;
	MR_Integer f2;
	MR_Word * f3;
};
MR_STATIC_LINKAGE const struct mercury_type_9 mercury_common_9[];

struct mercury_type_10 {
	MR_Integer f1;
	MR_String f2;
};
MR_STATIC_LINKAGE const struct mercury_type_10 mercury_common_10[];

struct mercury_type_11 {
	MR_Integer f1[2];
	MR_Word * f2[2];
};
MR_STATIC_LINKAGE const struct mercury_type_11 mercury_common_11[];

struct mercury_type_12 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[5];
};
MR_STATIC_LINKAGE const struct mercury_type_12 mercury_common_12[];

struct mercury_type_13 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[3];
};
MR_STATIC_LINKAGE const struct mercury_type_13 mercury_common_13[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_check_hlds__format_call__type_ctor_info_conj_id_0,
	mercury_data_check_hlds__format_call__type_ctor_info_conj_map_0,
	mercury_data_check_hlds__format_call__type_ctor_info_conj_maps_0,
	mercury_data_check_hlds__format_call__type_ctor_info_conj_pred_map_0,
	mercury_data_check_hlds__format_call__type_ctor_info_eqv_map_0,
	mercury_data_check_hlds__format_call__type_ctor_info_fc_goal_path_map_0,
	mercury_data_check_hlds__format_call__type_ctor_info_fc_opt_goal_info_0,
	mercury_data_check_hlds__format_call__type_ctor_info_follow_skeleton_result_0,
	mercury_data_check_hlds__format_call__type_ctor_info_format_call_kind_0,
	mercury_data_check_hlds__format_call__type_ctor_info_format_call_site_0;

extern const MR_TypeCtorInfo_Struct
	mercury_data_check_hlds__format_call__type_ctor_info_list_element_map_0,
	mercury_data_check_hlds__format_call__type_ctor_info_list_skeleton_map_0,
	mercury_data_check_hlds__format_call__type_ctor_info_list_skeleton_state_0,
	mercury_data_check_hlds__format_call__type_ctor_info_string_component_0,
	mercury_data_check_hlds__format_call__type_ctor_info_string_map_0,
	mercury_data_check_hlds__format_call__type_ctor_info_what_to_print_0;
MR_decl_label3(f_99_104_101_99_107_95_104_108_100_115_95_95_102_111_114_109_97_116_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_106_101_99_116_95_97_108_108_95_121_101_115_95_95_91_49_93_95_48_2_0, 22,5,1)
MR_decl_label8(check_hlds__format_call__analyze_and_optimize_format_calls_8_0, 2,3,4,5,7,8,9,10)
MR_decl_label8(check_hlds__format_call__analyze_and_optimize_format_calls_8_0, 12,17,20,18,22,23,24,25)
MR_decl_label2(check_hlds__format_call__analyze_and_optimize_format_calls_8_0, 26,27)
MR_decl_label8(check_hlds__format_call__check_format_call_site_13_0, 4,3,25,27,32,33,36,26)
MR_decl_label8(check_hlds__format_call__check_format_call_site_13_0, 56,61,63,67,70,69,65,126)
MR_decl_label2(check_hlds__format_call__check_format_call_site_13_0, 115,116)
MR_decl_label8(check_hlds__format_call__create_io_format_replacement_11_0, 2,4,6,20,21,22,23,25)
MR_decl_label6(check_hlds__format_call__create_io_format_replacement_11_0, 27,28,29,30,31,1)
MR_decl_label8(check_hlds__format_call__create_string_format_replacement_9_0, 2,5,7,6,11,13,17,18)
MR_decl_label4(check_hlds__format_call__create_string_format_replacement_9_0, 19,20,21,1)
MR_decl_label8(check_hlds__format_call__follow_format_string_5_0, 45,3,2,6,7,8,9,10)
MR_decl_label6(check_hlds__format_call__follow_format_string_5_0, 13,11,18,16,22,21)
MR_decl_label8(check_hlds__format_call__follow_list_skeleton_5_0, 59,3,2,6,7,8,9,10)
MR_decl_label8(check_hlds__format_call__follow_list_skeleton_5_0, 13,11,18,21,24,41,26,16)
MR_decl_label1(check_hlds__format_call__follow_list_skeleton_5_0, 31)
MR_decl_label8(check_hlds__format_call__follow_list_value_5_0, 45,3,2,6,7,8,9,10)
MR_decl_label6(check_hlds__format_call__follow_list_value_5_0, 13,11,18,16,22,21)
MR_decl_label8(check_hlds__format_call__format_call_traverse_conj_13_0, 116,3,4,66,67,71,69,24)
MR_decl_label8(check_hlds__format_call__format_call_traverse_conj_13_0, 25,26,27,30,32,33,34,40)
MR_decl_label8(check_hlds__format_call__format_call_traverse_conj_13_0, 29,79,7,9,12,13,14,15)
MR_decl_label8(check_hlds__format_call__format_call_traverse_conj_13_0, 16,17,18,19,21,22,42,43)
MR_decl_label8(check_hlds__format_call__format_call_traverse_conj_13_0, 49,58,59,54,55,51,62,64)
MR_decl_label1(check_hlds__format_call__format_call_traverse_conj_13_0, 128)
MR_decl_label5(check_hlds__format_call__format_call_traverse_disj_13_0, 2,3,4,6,7)
MR_decl_label5(check_hlds__format_call__format_call_traverse_disj_arms_11_0, 18,5,6,7,8)
MR_decl_label3(check_hlds__format_call__format_call_traverse_goal_13_0, 2,3,4)
MR_decl_label8(check_hlds__format_call__format_call_traverse_unify_8_0, 218,19,21,24,25,22,30,31)
MR_decl_label8(check_hlds__format_call__format_call_traverse_unify_8_0, 33,35,34,43,44,45,27,28)
MR_decl_label8(check_hlds__format_call__format_call_traverse_unify_8_0, 50,51,54,56,58,60,55,64)
MR_decl_label8(check_hlds__format_call__format_call_traverse_unify_8_0, 65,69,71,72,47,48,219,6)
MR_decl_label7(check_hlds__format_call__format_call_traverse_unify_8_0, 8,9,10,11,13,4,107)
MR_decl_label8(check_hlds__format_call__interpret_format_string_4_0, 105,6,7,8,3,14,21,22)
MR_decl_label8(check_hlds__format_call__interpret_format_string_4_0, 23,20,27,29,33,36,11,1)
MR_decl_label8(check_hlds__format_call__is_format_call_3_0, 4,5,3,12,13,48,11,24)
MR_decl_label2(check_hlds__format_call__is_format_call_3_0, 25,1)
MR_decl_label8(check_hlds__format_call__is_format_call_kind_and_vars_6_0, 4,5,3,13,14,21,12,27)
MR_decl_label2(check_hlds__format_call__is_format_call_kind_and_vars_6_0, 28,1)
MR_decl_label4(check_hlds__format_call__make_result_var_if_needed_6_0, 4,5,7,3)
MR_decl_label3(check_hlds__format_call__opt_format_call_sites_in_conj_8_0, 14,4,5)
MR_decl_label3(check_hlds__format_call__opt_format_call_sites_in_disj_10_0, 16,4,7)
MR_decl_label8(check_hlds__format_call__opt_format_call_sites_in_goal_8_0, 86,92,95,97,87,88,98,100)
MR_decl_label8(check_hlds__format_call__opt_format_call_sites_in_goal_8_0, 101,102,34,35,37,40,36,41)
MR_decl_label8(check_hlds__format_call__opt_format_call_sites_in_goal_8_0, 43,44,45,3,4,6,7,8)
MR_decl_label8(check_hlds__format_call__opt_format_call_sites_in_goal_8_0, 9,108,10,11,14,15,17,18)
MR_decl_label8(check_hlds__format_call__opt_format_call_sites_in_goal_8_0, 21,22,23,24,26,27,30,31)
MR_decl_label8(check_hlds__format_call__opt_format_call_sites_in_goal_8_0, 48,49,52,56,73,69,70,58)
MR_decl_label8(check_hlds__format_call__opt_format_call_sites_in_goal_8_0, 59,60,63,65,79,80,82,83)
MR_decl_label1(check_hlds__format_call__opt_format_call_sites_in_goal_8_0, 2)
MR_decl_label3(check_hlds__format_call__opt_format_call_sites_in_switch_10_0, 17,4,8)
MR_decl_label8(check_hlds__format_call__replace_string_format_9_0, 6,7,9,5,4,10,3,49)
MR_decl_label8(check_hlds__format_call__replace_string_format_9_0, 15,16,17,18,25,26,27,29)
MR_decl_label1(check_hlds__format_call__replace_string_format_9_0, 30)
MR_decl_label8(check_hlds__format_call__represent_component_9_0, 57,4,58,32,33,39,40,59)
MR_decl_label8(check_hlds__format_call__represent_component_9_0, 20,21,27,28,47,60,8,9)
MR_decl_label3(check_hlds__format_call__represent_component_9_0, 15,16,17)
MR_decl_label8(check_hlds__format_call__try_create_replacement_goal_13_0, 2,5,28,31,34,7,9,16)
MR_decl_label4(check_hlds__format_call__try_create_replacement_goal_13_0, 20,23,25,27)
MR_decl_label6(fn__check_hlds__format_call__get_conj_map_2_0, 3,2,6,7,8,9)
MR_decl_label1(__Unify___check_hlds__format_call__conj_id_0_0, 4)
MR_decl_label5(__Unify___check_hlds__format_call__conj_map_0_0, 5,7,9,13,1)
MR_decl_label3(__Unify___check_hlds__format_call__fc_opt_goal_info_0_0, 4,9,1)
MR_decl_label4(__Unify___check_hlds__format_call__follow_skeleton_result_0_0, 15,5,8,1)
MR_decl_label8(__Unify___check_hlds__format_call__format_call_kind_0_0, 29,5,7,11,13,15,19,21)
MR_decl_label4(__Unify___check_hlds__format_call__format_call_kind_0_0, 23,25,37,1)
MR_decl_label8(__Unify___check_hlds__format_call__format_call_site_0_0, 4,6,8,10,12,14,18,1)
MR_decl_label4(__Unify___check_hlds__format_call__list_skeleton_state_0_0, 14,5,7,1)
MR_decl_label7(__Unify___check_hlds__format_call__string_component_0_0, 5,15,11,26,7,28,1)
MR_decl_label3(__Unify___check_hlds__format_call__what_to_print_0_0, 4,8,1)
MR_decl_label2(__Compare___check_hlds__format_call__conj_id_0_0, 3,2)
MR_decl_label6(__Compare___check_hlds__format_call__conj_map_0_0, 3,2,6,11,16,41)
MR_decl_label4(__Compare___check_hlds__format_call__fc_opt_goal_info_0_0, 3,2,5,22)
MR_decl_label6(__Compare___check_hlds__format_call__follow_skeleton_result_0_0, 26,7,5,9,12,18)
MR_decl_label8(__Compare___check_hlds__format_call__format_call_kind_0_0, 3,68,5,7,9,21,24,26)
MR_decl_label8(__Compare___check_hlds__format_call__format_call_kind_0_0, 30,36,42,45,46,48,52,56)
MR_decl_label1(__Compare___check_hlds__format_call__format_call_kind_0_0, 140)
MR_decl_label8(__Compare___check_hlds__format_call__format_call_site_0_0, 3,2,5,9,13,17,21,25)
MR_decl_label3(__Compare___check_hlds__format_call__format_call_site_0_0, 29,33,77)
MR_decl_label6(__Compare___check_hlds__format_call__list_skeleton_state_0_0, 24,7,5,9,11,16)
MR_decl_label8(__Compare___check_hlds__format_call__string_component_0_0, 3,5,7,16,44,97,31,35)
MR_decl_label4(__Compare___check_hlds__format_call__string_component_0_0, 73,81,18,82)
MR_decl_label4(__Compare___check_hlds__format_call__what_to_print_0_0, 3,2,5,21)
MR_decl_static(check_hlds__format_call__is_format_call_kind_and_vars_6_0)
MR_def_extern_entry(check_hlds__format_call__is_format_call_3_0)
MR_decl_static(fn__check_hlds__format_call__get_conj_map_2_0)
MR_decl_static(fn__check_hlds__format_call__this_file_0_0)
MR_decl_static(check_hlds__format_call__format_call_traverse_unify_8_0)
MR_decl_static(check_hlds__format_call__alloc_id_3_0)
MR_decl_static(check_hlds__format_call__format_call_traverse_goal_13_0)
MR_decl_static(check_hlds__format_call__format_call_traverse_conj_13_0)
MR_decl_static(check_hlds__format_call__format_call_traverse_disj_13_0)
MR_decl_static(check_hlds__format_call__format_call_traverse_disj_arms_11_0)
MR_decl_static(check_hlds__format_call__opt_format_call_sites_in_goal_8_0)
MR_decl_static(check_hlds__format_call__opt_format_call_sites_in_conj_8_0)
MR_decl_static(check_hlds__format_call__opt_format_call_sites_in_disj_10_0)
MR_decl_static(check_hlds__format_call__opt_format_call_sites_in_switch_10_0)
MR_def_extern_entry(check_hlds__format_call__analyze_and_optimize_format_calls_8_0)
MR_decl_static(check_hlds__format_call__interpret_format_string_4_0)
MR_decl_static(check_hlds__format_call__make_result_var_if_needed_6_0)
MR_decl_static(check_hlds__format_call__represent_component_9_0)
MR_decl_static(check_hlds__format_call__replace_string_format_9_0)
MR_decl_static(check_hlds__format_call__create_string_format_replacement_9_0)
MR_decl_static(check_hlds__format_call__create_io_format_replacement_11_0)
MR_decl_static(check_hlds__format_call__try_create_replacement_goal_13_0)
MR_decl_static(check_hlds__format_call__follow_format_string_5_0)
MR_decl_static(check_hlds__format_call__follow_list_skeleton_5_0)
MR_decl_static(check_hlds__format_call__check_format_call_site_13_0)
MR_decl_static(check_hlds__format_call__follow_list_value_5_0)
MR_decl_static(fn__check_hlds__format_call__project_dummy_to_print_1_0)
MR_decl_static(fn__check_hlds__format_call__project_var_to_print_1_0)
MR_decl_static(fn__check_hlds__format_call__project_case_goal_1_0)
MR_decl_static(__Unify___check_hlds__format_call__conj_id_0_0)
MR_decl_static(__Compare___check_hlds__format_call__conj_id_0_0)
MR_decl_static(__Unify___check_hlds__format_call__conj_map_0_0)
MR_decl_static(__Compare___check_hlds__format_call__conj_map_0_0)
MR_decl_static(__Unify___check_hlds__format_call__conj_maps_0_0)
MR_decl_static(__Compare___check_hlds__format_call__conj_maps_0_0)
MR_decl_static(__Unify___check_hlds__format_call__conj_pred_map_0_0)
MR_decl_static(__Compare___check_hlds__format_call__conj_pred_map_0_0)
MR_decl_static(__Unify___check_hlds__format_call__eqv_map_0_0)
MR_decl_static(__Compare___check_hlds__format_call__eqv_map_0_0)
MR_decl_static(__Unify___check_hlds__format_call__fc_goal_path_map_0_0)
MR_decl_static(__Compare___check_hlds__format_call__fc_goal_path_map_0_0)
MR_decl_static(__Unify___check_hlds__format_call__fc_opt_goal_info_0_0)
MR_decl_static(__Compare___check_hlds__format_call__fc_opt_goal_info_0_0)
MR_decl_static(__Unify___check_hlds__format_call__follow_skeleton_result_0_0)
MR_decl_static(__Compare___check_hlds__format_call__follow_skeleton_result_0_0)
MR_decl_static(__Unify___check_hlds__format_call__format_call_kind_0_0)
MR_decl_static(__Compare___check_hlds__format_call__format_call_kind_0_0)
MR_decl_static(__Unify___check_hlds__format_call__format_call_site_0_0)
MR_decl_static(__Compare___check_hlds__format_call__format_call_site_0_0)
MR_decl_static(__Unify___check_hlds__format_call__list_element_map_0_0)
MR_decl_static(__Compare___check_hlds__format_call__list_element_map_0_0)
MR_decl_static(__Unify___check_hlds__format_call__list_skeleton_map_0_0)
MR_decl_static(__Compare___check_hlds__format_call__list_skeleton_map_0_0)
MR_decl_static(__Unify___check_hlds__format_call__list_skeleton_state_0_0)
MR_decl_static(__Compare___check_hlds__format_call__list_skeleton_state_0_0)
MR_decl_static(__Unify___check_hlds__format_call__string_component_0_0)
MR_decl_static(__Compare___check_hlds__format_call__string_component_0_0)
MR_decl_static(__Unify___check_hlds__format_call__string_map_0_0)
MR_decl_static(__Compare___check_hlds__format_call__string_map_0_0)
MR_decl_static(__Unify___check_hlds__format_call__what_to_print_0_0)
MR_decl_static(__Compare___check_hlds__format_call__what_to_print_0_0)
MR_decl_static(f_99_104_101_99_107_95_104_108_100_115_95_95_102_111_114_109_97_116_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_106_101_99_116_95_97_108_108_95_121_101_115_95_95_91_49_93_95_48_2_0)

static const struct mercury_type_0 mercury_common_0[2] =
{
{
MR_string_const("stream", 6)
},
{
MR_string_const("0", 1)
},
};

static const struct mercury_type_1 mercury_common_1[1] =
{
{
MR_TAG_COMMON(0,0,0),
MR_string_const("string_writer", 13)
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__error_util__type_ctor_info_error_spec_0;
extern const MR_TypeCtorInfo_Struct mercury_data_varset__type_ctor_info_varset_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__error_util__type_ctor_info_error_spec_0;
extern const MR_TypeCtorInfo_Struct mercury_data_maybe__type_ctor_info_maybe_1;
extern const MR_TypeCtorInfo_Struct mercury_data_check_hlds__format_call__type_ctor_info_what_to_print_0;
extern const MR_TypeCtorInfo_Struct mercury_data_string__type_ctor_info_poly_type_0;
static const struct mercury_type_2 mercury_common_2[12] =
{
{
{
MR_CTOR1_ADDR(term, var),
MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(parse_tree__error_util, error_spec)
}
},
{
{
MR_CTOR1_ADDR(varset, varset),
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
MR_CTOR0_ADDR(parse_tree__error_util, error_spec)
}
},
{
{
MR_CTOR1_ADDR(varset, varset),
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
MR_tbmkword(0, 1),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,10,1),
MR_TAG_COMMON(1,2,7)
}
},
{
{
MR_CTOR1_ADDR(maybe, maybe),
MR_CTOR0_ADDR(check_hlds__format_call, what_to_print)
}
},
{
{
MR_CTOR1_ADDR(maybe, maybe),
MR_CTOR0_ADDR(check_hlds__format_call, what_to_print)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(string, poly_type)
}
},
};

static const struct mercury_type_3 mercury_common_3[2] =
{
{
48
},
{
0
},
};

static const MR_Float mercury_float_const_0pt0000000000000000 = 0.0000000000000000;
static const struct mercury_type_4 mercury_common_4[1] =
{
{
(MR_Word *) &mercury_float_const_0pt0000000000000000
},
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__format_call__format_call_traverse_conj_13_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_case_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0;
static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__format_call__try_create_replacement_goal_13_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_check_hlds__format_call__type_ctor_info_what_to_print_0;
static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__format_call__check_format_call_site_13_0_2;
extern const MR_TypeCtorInfo_Struct mercury_data_string__type_ctor_info_poly_type_0;
static const struct mercury_type_5 mercury_common_5[3] =
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__format_call__format_call_traverse_conj_13_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(hlds__hlds_goal, case),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal)
},
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__format_call__try_create_replacement_goal_13_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(check_hlds__format_call, what_to_print),
MR_COMMON(2,6)
},
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__format_call__check_format_call_site_13_0_2,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(check_hlds__format_call, what_to_print),
MR_CTOR0_ADDR(string, poly_type)
},
};

static const struct mercury_type_6 mercury_common_6[3] =
{
{
MR_COMMON(5,0),
MR_ENTRY_AP(fn__check_hlds__format_call__project_case_goal_1_0),
0
},
{
MR_COMMON(5,1),
MR_ENTRY_AP(fn__check_hlds__format_call__project_var_to_print_1_0),
0
},
{
MR_COMMON(5,2),
MR_ENTRY_AP(fn__check_hlds__format_call__project_dummy_to_print_1_0),
0
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;
extern const MR_TypeCtorInfo_Struct mercury_data_check_hlds__format_call__type_ctor_info_conj_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_check_hlds__format_call__type_ctor_info_conj_map_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__program_representation__type_ctor_info_goal_path_0;
extern const MR_TypeCtorInfo_Struct mercury_data_check_hlds__format_call__type_ctor_info_fc_opt_goal_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__program_representation__type_ctor_info_goal_path_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;
static const struct mercury_type_7 mercury_common_7[6] =
{
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(check_hlds__format_call, conj_id),
MR_CTOR0_ADDR(check_hlds__format_call, conj_map)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(check_hlds__format_call, conj_id),
MR_CTOR0_ADDR(check_hlds__format_call, conj_id)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(mdbcomp__program_representation, goal_path),
MR_CTOR0_ADDR(check_hlds__format_call, fc_opt_goal_info)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_COMMON(2,3),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_type)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(mdbcomp__program_representation, goal_path),
MR_CTOR0_ADDR(check_hlds__format_call, fc_opt_goal_info)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_TAG_COMMON(0,2,0),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_type)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__format_call__analyze_and_optimize_format_calls_8_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_module_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;
extern const MR_TypeCtorInfo_Struct mercury_data_check_hlds__format_call__type_ctor_info_format_call_site_0;
static const struct mercury_type_8 mercury_common_8[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__format_call__analyze_and_optimize_format_calls_8_0_1,
(MR_Word *) (MR_Integer) 0
},
13,
{
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_BOOL_CTOR_ADDR,
MR_COMMON(7,0),
MR_COMMON(7,1),
MR_CTOR0_ADDR(check_hlds__format_call, format_call_site),
MR_COMMON(7,2),
MR_COMMON(7,2),
MR_COMMON(2,1),
MR_COMMON(2,1),
MR_COMMON(2,2),
MR_COMMON(2,2),
MR_COMMON(7,3),
MR_COMMON(7,3)
}
},
};

static const struct mercury_type_9 mercury_common_9[1] =
{
{
1,
1,
MR_tbmkword(0, 0)
},
};

static const struct mercury_type_10 mercury_common_10[5] =
{
{
4,
MR_string_const("Unknown format string in call to", 32)
},
{
3,
MR_string_const(".", 1)
},
{
4,
MR_string_const("Unknown format values in call to", 32)
},
{
4,
MR_string_const("Mismatched format and values in call to", 39)
},
{
3,
MR_string_const(":", 1)
},
};

static const struct mercury_type_11 mercury_common_11[2] =
{
{
{
32,
1
},
{
MR_tbmkword(0, 1),
MR_tbmkword(0, 0)
}
},
{
{
31,
1
},
{
MR_tbmkword(0, 1),
MR_tbmkword(0, 0)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__format_call__check_format_call_site_13_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_check_hlds__format_call__type_ctor_info_conj_id_0;
static const struct mercury_type_12 mercury_common_12[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__format_call__check_format_call_site_13_0_1,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_COMMON(7,0),
MR_COMMON(7,1),
MR_CTOR0_ADDR(check_hlds__format_call, conj_id),
MR_COMMON(2,6),
MR_COMMON(2,9)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__format_call__check_format_call_site_13_0_3;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
static const struct mercury_type_13 mercury_common_13[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__format_call__check_format_call_site_13_0_3,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_STRING_CTOR_ADDR,
MR_COMMON(2,11),
MR_STRING_CTOR_ADDR
}
},
};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;

static const MR_NotagFunctorDesc mercury_data_check_hlds__format_call__notag_functor_desc_conj_id_0 = {
	"conj_id",
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	NULL
};

const MR_Integer mercury_data_check_hlds__format_call__functor_number_map_conj_id_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_check_hlds__format_call__type_ctor_info_conj_id_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_NOTAG_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___check_hlds__format_call__conj_id_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___check_hlds__format_call__conj_id_0_0)),
	"check_hlds.format_call",
	"conj_id",
	{ (void *)&mercury_data_check_hlds__format_call__notag_functor_desc_conj_id_0 },
	{ (void *)&mercury_data_check_hlds__format_call__notag_functor_desc_conj_id_0 },
	1,
	4,
	mercury_data_check_hlds__format_call__functor_number_map_conj_id_0
};

static const MR_FA_TypeInfo_Struct1 mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
	&mercury_data_term__type_ctor_info_var_1,
{	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0builtin__type_ctor_info_string_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_string_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_check_hlds__format_call__type_ctor_info_list_skeleton_state_0;

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0check_hlds__format_call__type_ctor_info_list_skeleton_state_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_TypeInfo) &mercury_data_check_hlds__format_call__type_ctor_info_list_skeleton_state_0
}};

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0check_hlds__format_call__type_ctor_info_what_to_print_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_TypeInfo) &mercury_data_check_hlds__format_call__type_ctor_info_what_to_print_0
}};

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_TypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
}};

const MR_PseudoTypeInfo mercury_data_check_hlds__format_call__field_types_conj_map_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0check_hlds__format_call__type_ctor_info_list_skeleton_state_0,
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0check_hlds__format_call__type_ctor_info_what_to_print_0,
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

const MR_ConstString mercury_data_check_hlds__format_call__field_names_conj_map_0_0[] = {
	"string_map",
	"list_skeleton_map",
	"list_element_map",
	"eqv_map"
};

static const MR_DuFunctorDesc mercury_data_check_hlds__format_call__du_functor_desc_conj_map_0_0 = {
	"conj_map",
	4,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_check_hlds__format_call__field_types_conj_map_0_0,
	mercury_data_check_hlds__format_call__field_names_conj_map_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_check_hlds__format_call__du_stag_ordered_conj_map_0_0[] = {
	&mercury_data_check_hlds__format_call__du_functor_desc_conj_map_0_0

};

const MR_DuPtagLayout mercury_data_check_hlds__format_call__du_ptag_ordered_conj_map_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_check_hlds__format_call__du_stag_ordered_conj_map_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_check_hlds__format_call__du_name_ordered_conj_map_0[] = {
	&mercury_data_check_hlds__format_call__du_functor_desc_conj_map_0_0
};

const MR_Integer mercury_data_check_hlds__format_call__functor_number_map_conj_map_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_check_hlds__format_call__type_ctor_info_conj_map_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___check_hlds__format_call__conj_map_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___check_hlds__format_call__conj_map_0_0)),
	"check_hlds.format_call",
	"conj_map",
	{ (void *)mercury_data_check_hlds__format_call__du_name_ordered_conj_map_0 },
	{ (void *)mercury_data_check_hlds__format_call__du_ptag_ordered_conj_map_0 },
	1,
	4,
	mercury_data_check_hlds__format_call__functor_number_map_conj_map_0
};

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2check_hlds__format_call__type_ctor_info_conj_id_0check_hlds__format_call__type_ctor_info_conj_map_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_check_hlds__format_call__type_ctor_info_conj_id_0,
	(MR_TypeInfo) &mercury_data_check_hlds__format_call__type_ctor_info_conj_map_0
}};

const MR_TypeCtorInfo_Struct mercury_data_check_hlds__format_call__type_ctor_info_conj_maps_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___check_hlds__format_call__conj_maps_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___check_hlds__format_call__conj_maps_0_0)),
	"check_hlds.format_call",
	"conj_maps",
	{ 0 },
	{ (void *)&mercury_data_tree234__ti_tree234_2check_hlds__format_call__type_ctor_info_conj_id_0check_hlds__format_call__type_ctor_info_conj_map_0 },
	-1,
	0,
	NULL
};

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2check_hlds__format_call__type_ctor_info_conj_id_0check_hlds__format_call__type_ctor_info_conj_id_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_check_hlds__format_call__type_ctor_info_conj_id_0,
	(MR_TypeInfo) &mercury_data_check_hlds__format_call__type_ctor_info_conj_id_0
}};

const MR_TypeCtorInfo_Struct mercury_data_check_hlds__format_call__type_ctor_info_conj_pred_map_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___check_hlds__format_call__conj_pred_map_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___check_hlds__format_call__conj_pred_map_0_0)),
	"check_hlds.format_call",
	"conj_pred_map",
	{ 0 },
	{ (void *)&mercury_data_tree234__ti_tree234_2check_hlds__format_call__type_ctor_info_conj_id_0check_hlds__format_call__type_ctor_info_conj_id_0 },
	-1,
	0,
	NULL
};

const MR_TypeCtorInfo_Struct mercury_data_check_hlds__format_call__type_ctor_info_eqv_map_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___check_hlds__format_call__eqv_map_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___check_hlds__format_call__eqv_map_0_0)),
	"check_hlds.format_call",
	"eqv_map",
	{ 0 },
	{ (void *)&mercury_data_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 },
	-1,
	0,
	NULL
};

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2mdbcomp__program_representation__type_ctor_info_goal_path_0check_hlds__format_call__type_ctor_info_fc_opt_goal_info_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_mdbcomp__program_representation__type_ctor_info_goal_path_0,
	(MR_TypeInfo) &mercury_data_check_hlds__format_call__type_ctor_info_fc_opt_goal_info_0
}};

const MR_TypeCtorInfo_Struct mercury_data_check_hlds__format_call__type_ctor_info_fc_goal_path_map_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___check_hlds__format_call__fc_goal_path_map_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___check_hlds__format_call__fc_goal_path_map_0_0)),
	"check_hlds.format_call",
	"fc_goal_path_map",
	{ 0 },
	{ (void *)&mercury_data_tree234__ti_tree234_2mdbcomp__program_representation__type_ctor_info_goal_path_0check_hlds__format_call__type_ctor_info_fc_opt_goal_info_0 },
	-1,
	0,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0;
extern const MR_TypeCtorInfo_Struct mercury_data_set_tree234__type_ctor_info_set_tree234_1;

static const MR_FA_TypeInfo_Struct1 mercury_data_set_tree234__ti_set_tree234_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
	&mercury_data_set_tree234__type_ctor_info_set_tree234_1,
{	(MR_TypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0;

const MR_PseudoTypeInfo mercury_data_check_hlds__format_call__field_types_fc_opt_goal_info_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0,
	(MR_PseudoTypeInfo) &mercury_data_set_tree234__ti_set_tree234_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

const MR_ConstString mercury_data_check_hlds__format_call__field_names_fc_opt_goal_info_0_0[] = {
	"fcogi_replacement_goal",
	"fcogi_unneeded_vars"
};

static const MR_DuFunctorDesc mercury_data_check_hlds__format_call__du_functor_desc_fc_opt_goal_info_0_0 = {
	"fc_opt_goal_info",
	2,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_check_hlds__format_call__field_types_fc_opt_goal_info_0_0,
	mercury_data_check_hlds__format_call__field_names_fc_opt_goal_info_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_check_hlds__format_call__du_stag_ordered_fc_opt_goal_info_0_0[] = {
	&mercury_data_check_hlds__format_call__du_functor_desc_fc_opt_goal_info_0_0

};

const MR_DuPtagLayout mercury_data_check_hlds__format_call__du_ptag_ordered_fc_opt_goal_info_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_check_hlds__format_call__du_stag_ordered_fc_opt_goal_info_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_check_hlds__format_call__du_name_ordered_fc_opt_goal_info_0[] = {
	&mercury_data_check_hlds__format_call__du_functor_desc_fc_opt_goal_info_0_0
};

const MR_Integer mercury_data_check_hlds__format_call__functor_number_map_fc_opt_goal_info_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_check_hlds__format_call__type_ctor_info_fc_opt_goal_info_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___check_hlds__format_call__fc_opt_goal_info_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___check_hlds__format_call__fc_opt_goal_info_0_0)),
	"check_hlds.format_call",
	"fc_opt_goal_info",
	{ (void *)mercury_data_check_hlds__format_call__du_name_ordered_fc_opt_goal_info_0 },
	{ (void *)mercury_data_check_hlds__format_call__du_ptag_ordered_fc_opt_goal_info_0 },
	1,
	4,
	mercury_data_check_hlds__format_call__functor_number_map_fc_opt_goal_info_0
};

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
}};

const MR_PseudoTypeInfo mercury_data_check_hlds__format_call__field_types_follow_skeleton_result_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

const MR_ConstString mercury_data_check_hlds__format_call__field_names_follow_skeleton_result_0_0[] = {
	"fsr_polytype_vars",
	"fsr_skeleton_vars"
};

static const MR_DuFunctorDesc mercury_data_check_hlds__format_call__du_functor_desc_follow_skeleton_result_0_0 = {
	"follow_skeleton_result",
	2,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_check_hlds__format_call__field_types_follow_skeleton_result_0_0,
	mercury_data_check_hlds__format_call__field_names_follow_skeleton_result_0_0,
	NULL
};

static const MR_DuFunctorDesc mercury_data_check_hlds__format_call__du_functor_desc_follow_skeleton_result_0_1 = {
	"no_follow_skeleton_result",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	0,
	1,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_check_hlds__format_call__du_stag_ordered_follow_skeleton_result_0_0[] = {
	&mercury_data_check_hlds__format_call__du_functor_desc_follow_skeleton_result_0_1

};

const MR_DuFunctorDescPtr mercury_data_check_hlds__format_call__du_stag_ordered_follow_skeleton_result_0_1[] = {
	&mercury_data_check_hlds__format_call__du_functor_desc_follow_skeleton_result_0_0

};

const MR_DuPtagLayout mercury_data_check_hlds__format_call__du_ptag_ordered_follow_skeleton_result_0[] = {
	{ 1, MR_SECTAG_LOCAL,
	mercury_data_check_hlds__format_call__du_stag_ordered_follow_skeleton_result_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_check_hlds__format_call__du_stag_ordered_follow_skeleton_result_0_1 }

};

const MR_DuFunctorDescPtr mercury_data_check_hlds__format_call__du_name_ordered_follow_skeleton_result_0[] = {
	&mercury_data_check_hlds__format_call__du_functor_desc_follow_skeleton_result_0_0,
	&mercury_data_check_hlds__format_call__du_functor_desc_follow_skeleton_result_0_1
};

const MR_Integer mercury_data_check_hlds__format_call__functor_number_map_follow_skeleton_result_0[] = {
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_check_hlds__format_call__type_ctor_info_follow_skeleton_result_0 = {
	0,
	13,
	2,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___check_hlds__format_call__follow_skeleton_result_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___check_hlds__format_call__follow_skeleton_result_0_0)),
	"check_hlds.format_call",
	"follow_skeleton_result",
	{ (void *)mercury_data_check_hlds__format_call__du_name_ordered_follow_skeleton_result_0 },
	{ (void *)mercury_data_check_hlds__format_call__du_ptag_ordered_follow_skeleton_result_0 },
	2,
	4,
	mercury_data_check_hlds__format_call__functor_number_map_follow_skeleton_result_0
};

const MR_PseudoTypeInfo mercury_data_check_hlds__format_call__field_types_format_call_kind_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

const MR_ConstString mercury_data_check_hlds__format_call__field_names_format_call_kind_0_0[] = {
	"sf_result_var"
};

static const MR_DuFunctorDesc mercury_data_check_hlds__format_call__du_functor_desc_format_call_kind_0_0 = {
	"kind_string_format",
	1,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_check_hlds__format_call__field_types_format_call_kind_0_0,
	mercury_data_check_hlds__format_call__field_names_format_call_kind_0_0,
	NULL
};

const MR_PseudoTypeInfo mercury_data_check_hlds__format_call__field_types_format_call_kind_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_PseudoTypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

const MR_ConstString mercury_data_check_hlds__format_call__field_names_format_call_kind_0_1[] = {
	"iofns_io_in_var",
	"iofns_io_out_var"
};

static const MR_DuFunctorDesc mercury_data_check_hlds__format_call__du_functor_desc_format_call_kind_0_1 = {
	"kind_io_format_nostream",
	2,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_check_hlds__format_call__field_types_format_call_kind_0_1,
	mercury_data_check_hlds__format_call__field_names_format_call_kind_0_1,
	NULL
};

const MR_PseudoTypeInfo mercury_data_check_hlds__format_call__field_types_format_call_kind_0_2[] = {
	(MR_PseudoTypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_PseudoTypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_PseudoTypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

const MR_ConstString mercury_data_check_hlds__format_call__field_names_format_call_kind_0_2[] = {
	"iofs_stream_var",
	"iofs_io_in_var",
	"iofs_io_out_var"
};

static const MR_DuFunctorDesc mercury_data_check_hlds__format_call__du_functor_desc_format_call_kind_0_2 = {
	"kind_io_format_stream",
	3,
	0,
	MR_SECTAG_NONE,
	2,
	-1,
	2,
	(MR_PseudoTypeInfo *) mercury_data_check_hlds__format_call__field_types_format_call_kind_0_2,
	mercury_data_check_hlds__format_call__field_names_format_call_kind_0_2,
	NULL
};

const MR_PseudoTypeInfo mercury_data_check_hlds__format_call__field_types_format_call_kind_0_3[] = {
	(MR_PseudoTypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_PseudoTypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_PseudoTypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_PseudoTypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

const MR_ConstString mercury_data_check_hlds__format_call__field_names_format_call_kind_0_3[] = {
	"ssw_tc_info_var",
	"ssw_stream_var",
	"ssw_in_var",
	"ssw_out_var"
};

static const MR_DuFunctorDesc mercury_data_check_hlds__format_call__du_functor_desc_format_call_kind_0_3 = {
	"kind_stream_string_writer",
	4,
	0,
	MR_SECTAG_NONE,
	3,
	-1,
	3,
	(MR_PseudoTypeInfo *) mercury_data_check_hlds__format_call__field_types_format_call_kind_0_3,
	mercury_data_check_hlds__format_call__field_names_format_call_kind_0_3,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_check_hlds__format_call__du_stag_ordered_format_call_kind_0_0[] = {
	&mercury_data_check_hlds__format_call__du_functor_desc_format_call_kind_0_0

};

const MR_DuFunctorDescPtr mercury_data_check_hlds__format_call__du_stag_ordered_format_call_kind_0_1[] = {
	&mercury_data_check_hlds__format_call__du_functor_desc_format_call_kind_0_1

};

const MR_DuFunctorDescPtr mercury_data_check_hlds__format_call__du_stag_ordered_format_call_kind_0_2[] = {
	&mercury_data_check_hlds__format_call__du_functor_desc_format_call_kind_0_2

};

const MR_DuFunctorDescPtr mercury_data_check_hlds__format_call__du_stag_ordered_format_call_kind_0_3[] = {
	&mercury_data_check_hlds__format_call__du_functor_desc_format_call_kind_0_3

};

const MR_DuPtagLayout mercury_data_check_hlds__format_call__du_ptag_ordered_format_call_kind_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_check_hlds__format_call__du_stag_ordered_format_call_kind_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_check_hlds__format_call__du_stag_ordered_format_call_kind_0_1 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_check_hlds__format_call__du_stag_ordered_format_call_kind_0_2 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_check_hlds__format_call__du_stag_ordered_format_call_kind_0_3 }

};

const MR_DuFunctorDescPtr mercury_data_check_hlds__format_call__du_name_ordered_format_call_kind_0[] = {
	&mercury_data_check_hlds__format_call__du_functor_desc_format_call_kind_0_1,
	&mercury_data_check_hlds__format_call__du_functor_desc_format_call_kind_0_2,
	&mercury_data_check_hlds__format_call__du_functor_desc_format_call_kind_0_3,
	&mercury_data_check_hlds__format_call__du_functor_desc_format_call_kind_0_0
};

const MR_Integer mercury_data_check_hlds__format_call__functor_number_map_format_call_kind_0[] = {
	3,
	0,
	1,
	2 };
	
const MR_TypeCtorInfo_Struct mercury_data_check_hlds__format_call__type_ctor_info_format_call_kind_0 = {
	0,
	13,
	4,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___check_hlds__format_call__format_call_kind_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___check_hlds__format_call__format_call_kind_0_0)),
	"check_hlds.format_call",
	"format_call_kind",
	{ (void *)mercury_data_check_hlds__format_call__du_name_ordered_format_call_kind_0 },
	{ (void *)mercury_data_check_hlds__format_call__du_ptag_ordered_format_call_kind_0 },
	4,
	4,
	mercury_data_check_hlds__format_call__functor_number_map_format_call_kind_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_context_0;
extern const MR_TypeCtorInfo_Struct mercury_data_check_hlds__format_call__type_ctor_info_format_call_kind_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_context_0;

const MR_PseudoTypeInfo mercury_data_check_hlds__format_call__field_types_format_call_site_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__program_representation__type_ctor_info_goal_path_0,
	(MR_PseudoTypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_PseudoTypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_PseudoTypeInfo) &mercury_data_check_hlds__format_call__type_ctor_info_format_call_kind_0,
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_term__type_ctor_info_context_0,
	(MR_PseudoTypeInfo) &mercury_data_check_hlds__format_call__type_ctor_info_conj_id_0
};

const MR_ConstString mercury_data_check_hlds__format_call__field_names_format_call_site_0_0[] = {
	"fcs_goal_path",
	"fcs_string_var",
	"fcs_values_var",
	"fcs_call_kind",
	"fcs_called_pred_module",
	"fcs_called_pred_name",
	"fcs_called_pred_arity",
	"fcs_call_context",
	"fcs_containing_conj"
};

static const MR_DuFunctorDesc mercury_data_check_hlds__format_call__du_functor_desc_format_call_site_0_0 = {
	"format_call_site",
	9,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_check_hlds__format_call__field_types_format_call_site_0_0,
	mercury_data_check_hlds__format_call__field_names_format_call_site_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_check_hlds__format_call__du_stag_ordered_format_call_site_0_0[] = {
	&mercury_data_check_hlds__format_call__du_functor_desc_format_call_site_0_0

};

const MR_DuPtagLayout mercury_data_check_hlds__format_call__du_ptag_ordered_format_call_site_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_check_hlds__format_call__du_stag_ordered_format_call_site_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_check_hlds__format_call__du_name_ordered_format_call_site_0[] = {
	&mercury_data_check_hlds__format_call__du_functor_desc_format_call_site_0_0
};

const MR_Integer mercury_data_check_hlds__format_call__functor_number_map_format_call_site_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_check_hlds__format_call__type_ctor_info_format_call_site_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___check_hlds__format_call__format_call_site_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___check_hlds__format_call__format_call_site_0_0)),
	"check_hlds.format_call",
	"format_call_site",
	{ (void *)mercury_data_check_hlds__format_call__du_name_ordered_format_call_site_0 },
	{ (void *)mercury_data_check_hlds__format_call__du_ptag_ordered_format_call_site_0 },
	1,
	4,
	mercury_data_check_hlds__format_call__functor_number_map_format_call_site_0
};

const MR_TypeCtorInfo_Struct mercury_data_check_hlds__format_call__type_ctor_info_list_element_map_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___check_hlds__format_call__list_element_map_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___check_hlds__format_call__list_element_map_0_0)),
	"check_hlds.format_call",
	"list_element_map",
	{ 0 },
	{ (void *)&mercury_data_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0check_hlds__format_call__type_ctor_info_what_to_print_0 },
	-1,
	0,
	NULL
};

const MR_TypeCtorInfo_Struct mercury_data_check_hlds__format_call__type_ctor_info_list_skeleton_map_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___check_hlds__format_call__list_skeleton_map_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___check_hlds__format_call__list_skeleton_map_0_0)),
	"check_hlds.format_call",
	"list_skeleton_map",
	{ 0 },
	{ (void *)&mercury_data_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0check_hlds__format_call__type_ctor_info_list_skeleton_state_0 },
	-1,
	0,
	NULL
};

static const MR_DuFunctorDesc mercury_data_check_hlds__format_call__du_functor_desc_list_skeleton_state_0_0 = {
	"list_skeleton_nil",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	0,
	0,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_check_hlds__format_call__field_types_list_skeleton_state_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_PseudoTypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

const MR_ConstString mercury_data_check_hlds__format_call__field_names_list_skeleton_state_0_1[] = {
	"head",
	"tail"
};

static const MR_DuFunctorDesc mercury_data_check_hlds__format_call__du_functor_desc_list_skeleton_state_0_1 = {
	"list_skeleton_cons",
	2,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_check_hlds__format_call__field_types_list_skeleton_state_0_1,
	mercury_data_check_hlds__format_call__field_names_list_skeleton_state_0_1,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_check_hlds__format_call__du_stag_ordered_list_skeleton_state_0_0[] = {
	&mercury_data_check_hlds__format_call__du_functor_desc_list_skeleton_state_0_0

};

const MR_DuFunctorDescPtr mercury_data_check_hlds__format_call__du_stag_ordered_list_skeleton_state_0_1[] = {
	&mercury_data_check_hlds__format_call__du_functor_desc_list_skeleton_state_0_1

};

const MR_DuPtagLayout mercury_data_check_hlds__format_call__du_ptag_ordered_list_skeleton_state_0[] = {
	{ 1, MR_SECTAG_LOCAL,
	mercury_data_check_hlds__format_call__du_stag_ordered_list_skeleton_state_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_check_hlds__format_call__du_stag_ordered_list_skeleton_state_0_1 }

};

const MR_DuFunctorDescPtr mercury_data_check_hlds__format_call__du_name_ordered_list_skeleton_state_0[] = {
	&mercury_data_check_hlds__format_call__du_functor_desc_list_skeleton_state_0_1,
	&mercury_data_check_hlds__format_call__du_functor_desc_list_skeleton_state_0_0
};

const MR_Integer mercury_data_check_hlds__format_call__functor_number_map_list_skeleton_state_0[] = {
	1,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_check_hlds__format_call__type_ctor_info_list_skeleton_state_0 = {
	0,
	13,
	2,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___check_hlds__format_call__list_skeleton_state_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___check_hlds__format_call__list_skeleton_state_0_0)),
	"check_hlds.format_call",
	"list_skeleton_state",
	{ (void *)mercury_data_check_hlds__format_call__du_name_ordered_list_skeleton_state_0 },
	{ (void *)mercury_data_check_hlds__format_call__du_ptag_ordered_list_skeleton_state_0 },
	2,
	4,
	mercury_data_check_hlds__format_call__functor_number_map_list_skeleton_state_0
};

const MR_PseudoTypeInfo mercury_data_check_hlds__format_call__field_types_string_component_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mercury_data_check_hlds__format_call__du_functor_desc_string_component_0_0 = {
	"string_constant",
	1,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_check_hlds__format_call__field_types_string_component_0_0,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_check_hlds__format_call__field_types_string_component_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

static const MR_DuFunctorDesc mercury_data_check_hlds__format_call__du_functor_desc_string_component_0_1 = {
	"var_to_print_int",
	1,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_check_hlds__format_call__field_types_string_component_0_1,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_check_hlds__format_call__field_types_string_component_0_2[] = {
	(MR_PseudoTypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

static const MR_DuFunctorDesc mercury_data_check_hlds__format_call__du_functor_desc_string_component_0_2 = {
	"var_to_print_float",
	1,
	0,
	MR_SECTAG_NONE,
	2,
	-1,
	2,
	(MR_PseudoTypeInfo *) mercury_data_check_hlds__format_call__field_types_string_component_0_2,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_check_hlds__format_call__field_types_string_component_0_3[] = {
	(MR_PseudoTypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

static const MR_DuFunctorDesc mercury_data_check_hlds__format_call__du_functor_desc_string_component_0_3 = {
	"var_to_print_string",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	0,
	3,
	(MR_PseudoTypeInfo *) mercury_data_check_hlds__format_call__field_types_string_component_0_3,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_check_hlds__format_call__field_types_string_component_0_4[] = {
	(MR_PseudoTypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

static const MR_DuFunctorDesc mercury_data_check_hlds__format_call__du_functor_desc_string_component_0_4 = {
	"var_to_print_char",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	1,
	4,
	(MR_PseudoTypeInfo *) mercury_data_check_hlds__format_call__field_types_string_component_0_4,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_check_hlds__format_call__du_stag_ordered_string_component_0_0[] = {
	&mercury_data_check_hlds__format_call__du_functor_desc_string_component_0_0

};

const MR_DuFunctorDescPtr mercury_data_check_hlds__format_call__du_stag_ordered_string_component_0_1[] = {
	&mercury_data_check_hlds__format_call__du_functor_desc_string_component_0_1

};

const MR_DuFunctorDescPtr mercury_data_check_hlds__format_call__du_stag_ordered_string_component_0_2[] = {
	&mercury_data_check_hlds__format_call__du_functor_desc_string_component_0_2

};

const MR_DuFunctorDescPtr mercury_data_check_hlds__format_call__du_stag_ordered_string_component_0_3[] = {
	&mercury_data_check_hlds__format_call__du_functor_desc_string_component_0_3,
	&mercury_data_check_hlds__format_call__du_functor_desc_string_component_0_4

};

const MR_DuPtagLayout mercury_data_check_hlds__format_call__du_ptag_ordered_string_component_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_check_hlds__format_call__du_stag_ordered_string_component_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_check_hlds__format_call__du_stag_ordered_string_component_0_1 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_check_hlds__format_call__du_stag_ordered_string_component_0_2 },
	{ 2, MR_SECTAG_REMOTE,
	mercury_data_check_hlds__format_call__du_stag_ordered_string_component_0_3 }

};

const MR_DuFunctorDescPtr mercury_data_check_hlds__format_call__du_name_ordered_string_component_0[] = {
	&mercury_data_check_hlds__format_call__du_functor_desc_string_component_0_0,
	&mercury_data_check_hlds__format_call__du_functor_desc_string_component_0_4,
	&mercury_data_check_hlds__format_call__du_functor_desc_string_component_0_2,
	&mercury_data_check_hlds__format_call__du_functor_desc_string_component_0_1,
	&mercury_data_check_hlds__format_call__du_functor_desc_string_component_0_3
};

const MR_Integer mercury_data_check_hlds__format_call__functor_number_map_string_component_0[] = {
	0,
	3,
	2,
	4,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_check_hlds__format_call__type_ctor_info_string_component_0 = {
	0,
	13,
	4,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___check_hlds__format_call__string_component_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___check_hlds__format_call__string_component_0_0)),
	"check_hlds.format_call",
	"string_component",
	{ (void *)mercury_data_check_hlds__format_call__du_name_ordered_string_component_0 },
	{ (void *)mercury_data_check_hlds__format_call__du_ptag_ordered_string_component_0 },
	5,
	4,
	mercury_data_check_hlds__format_call__functor_number_map_string_component_0
};

const MR_TypeCtorInfo_Struct mercury_data_check_hlds__format_call__type_ctor_info_string_map_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___check_hlds__format_call__string_map_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___check_hlds__format_call__string_map_0_0)),
	"check_hlds.format_call",
	"string_map",
	{ 0 },
	{ (void *)&mercury_data_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0builtin__type_ctor_info_string_0 },
	-1,
	0,
	NULL
};

const MR_PseudoTypeInfo mercury_data_check_hlds__format_call__field_types_what_to_print_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_PseudoTypeInfo) &mercury_data_string__type_ctor_info_poly_type_0
};

const MR_ConstString mercury_data_check_hlds__format_call__field_names_what_to_print_0_0[] = {
	"var_to_print",
	"dummy_to_print"
};

static const MR_DuFunctorDesc mercury_data_check_hlds__format_call__du_functor_desc_what_to_print_0_0 = {
	"what_to_print",
	2,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_check_hlds__format_call__field_types_what_to_print_0_0,
	mercury_data_check_hlds__format_call__field_names_what_to_print_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_check_hlds__format_call__du_stag_ordered_what_to_print_0_0[] = {
	&mercury_data_check_hlds__format_call__du_functor_desc_what_to_print_0_0

};

const MR_DuPtagLayout mercury_data_check_hlds__format_call__du_ptag_ordered_what_to_print_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_check_hlds__format_call__du_stag_ordered_what_to_print_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_check_hlds__format_call__du_name_ordered_what_to_print_0[] = {
	&mercury_data_check_hlds__format_call__du_functor_desc_what_to_print_0_0
};

const MR_Integer mercury_data_check_hlds__format_call__functor_number_map_what_to_print_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_check_hlds__format_call__type_ctor_info_what_to_print_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___check_hlds__format_call__what_to_print_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___check_hlds__format_call__what_to_print_0_0)),
	"check_hlds.format_call",
	"what_to_print",
	{ (void *)mercury_data_check_hlds__format_call__du_name_ordered_what_to_print_0 },
	{ (void *)mercury_data_check_hlds__format_call__du_ptag_ordered_what_to_print_0 },
	1,
	4,
	mercury_data_check_hlds__format_call__functor_number_map_what_to_print_0
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__format_call__format_call_traverse_conj_13_0_1 = {
{
MR_FUNCTION,
"check_hlds.format_call",
"check_hlds.format_call",
"project_case_goal",
2,
0
},
"check_hlds.format_call",
"format_call.m",
638,
"d2;c16;d3;c3;"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__format_call__analyze_and_optimize_format_calls_8_0_1 = {
{
MR_PREDICATE,
"check_hlds.format_call",
"check_hlds.format_call",
"check_format_call_site",
13,
0
},
"check_hlds.format_call",
"format_call.m",
319,
"d1;c20;"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__format_call__try_create_replacement_goal_13_0_1 = {
{
MR_FUNCTION,
"check_hlds.format_call",
"check_hlds.format_call",
"project_var_to_print",
2,
0
},
"check_hlds.format_call",
"format_call.m",
462,
"d1;c16;"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__format_call__check_format_call_site_13_0_1 = {
{
MR_PREDICATE,
"check_hlds.format_call",
"check_hlds.format_call",
"follow_list_value",
5,
0
},
"check_hlds.format_call",
"format_call.m",
377,
"d1;c17;?;c3;"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__format_call__check_format_call_site_13_0_2 = {
{
MR_FUNCTION,
"check_hlds.format_call",
"check_hlds.format_call",
"project_dummy_to_print",
2,
0
},
"check_hlds.format_call",
"format_call.m",
403,
"d1;c18;t;c2;"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__format_call__check_format_call_site_13_0_3 = {
{
MR_PREDICATE,
"string",
"string",
"format",
3,
0
},
"check_hlds.format_call",
"format_call.m",
405,
"d1;c18;t;c3;q;c1;"
};

MR_decl_entry(fn__mdbcomp__prim_data__mercury_string_module_0_0);
MR_decl_entry(__Unify___mdbcomp__prim_data__sym_name_0_0);
MR_decl_entry(fn__mdbcomp__prim_data__mercury_io_module_0_0);
MR_decl_entry(fn__mdbcomp__prim_data__mercury_std_lib_module_name_1_0);

MR_BEGIN_MODULE(check_hlds__format_call_module0)
	MR_init_entry1(check_hlds__format_call__is_format_call_kind_and_vars_6_0);
	MR_init_label8(check_hlds__format_call__is_format_call_kind_and_vars_6_0,4,5,3,13,14,21,12,27)
	MR_init_label2(check_hlds__format_call__is_format_call_kind_and_vars_6_0,28,1)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'is_format_call_kind_and_vars'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__format_call__is_format_call_kind_and_vars_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if ((strcmp((char *) (MR_Word *) MR_r2, MR_string_const("format", 6)) != 0)) {
		MR_GOTO_LAB(check_hlds__format_call__is_format_call_kind_and_vars_6_0_i1);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_string_module_0_0,
		check_hlds__format_call__is_format_call_kind_and_vars_6_0_i4);
MR_def_label(check_hlds__format_call__is_format_call_kind_and_vars_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		check_hlds__format_call__is_format_call_kind_and_vars_6_0_i5);
MR_def_label(check_hlds__format_call__is_format_call_kind_and_vars_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__format_call__is_format_call_kind_and_vars_6_0_i3);
	}
	if (MR_LTAGS_TEST(MR_sv(2),0,0)) {
		MR_GOTO_LAB(check_hlds__format_call__is_format_call_kind_and_vars_6_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr4 = MR_sv(2);
	MR_tempr1 = MR_ctfield(1, MR_tempr4, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(check_hlds__format_call__is_format_call_kind_and_vars_6_0_i1);
	}
	MR_tempr2 = MR_ctfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TEST(MR_tempr2,0,0)) {
		MR_GOTO_LAB(check_hlds__format_call__is_format_call_kind_and_vars_6_0_i1);
	}
	MR_tempr3 = MR_ctfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_tempr3,0,0)) {
		MR_GOTO_LAB(check_hlds__format_call__is_format_call_kind_and_vars_6_0_i1);
	}
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r2, 0) = MR_ctfield(1, MR_tempr2, 0);
	MR_r3 = MR_ctfield(1, MR_tempr4, 0);
	MR_r4 = MR_ctfield(1, MR_tempr1, 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(check_hlds__format_call__is_format_call_kind_and_vars_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_io_module_0_0,
		check_hlds__format_call__is_format_call_kind_and_vars_6_0_i13);
MR_def_label(check_hlds__format_call__is_format_call_kind_and_vars_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		check_hlds__format_call__is_format_call_kind_and_vars_6_0_i14);
MR_def_label(check_hlds__format_call__is_format_call_kind_and_vars_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__format_call__is_format_call_kind_and_vars_6_0_i12);
	}
	if (MR_LTAGS_TEST(MR_sv(2),0,0)) {
		MR_GOTO_LAB(check_hlds__format_call__is_format_call_kind_and_vars_6_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr5 = MR_sv(2);
	MR_tempr1 = MR_ctfield(1, MR_tempr5, 1);
	MR_r5 = MR_tempr1;
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(check_hlds__format_call__is_format_call_kind_and_vars_6_0_i1);
	}
	MR_tempr2 = MR_ctfield(1, MR_tempr1, 1);
	MR_r6 = MR_tempr2;
	if (MR_LTAGS_TEST(MR_tempr2,0,0)) {
		MR_GOTO_LAB(check_hlds__format_call__is_format_call_kind_and_vars_6_0_i1);
	}
	MR_tempr3 = MR_ctfield(1, MR_tempr2, 1);
	MR_r7 = MR_tempr3;
	if (MR_LTAGS_TEST(MR_tempr3,0,0)) {
		MR_GOTO_LAB(check_hlds__format_call__is_format_call_kind_and_vars_6_0_i1);
	}
	MR_r8 = MR_ctfield(1, MR_tempr3, 1);
	if (MR_LTAGS_TESTR(MR_r8,0,0)) {
		MR_GOTO_LAB(check_hlds__format_call__is_format_call_kind_and_vars_6_0_i21);
	}
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_ctfield(1, MR_tempr2, 0);
	MR_tfield(1, MR_tempr4, 1) = MR_ctfield(1, MR_tempr3, 0);
	MR_r3 = MR_ctfield(1, MR_tempr5, 0);
	MR_r4 = MR_ctfield(1, MR_tempr1, 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(check_hlds__format_call__is_format_call_kind_and_vars_6_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r8;
	MR_tempr1 = MR_ctfield(1, MR_tempr3, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(check_hlds__format_call__is_format_call_kind_and_vars_6_0_i1);
	}
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 3);
	MR_r2 = MR_tempr2;
	MR_tfield(2, MR_tempr2, 0) = MR_ctfield(1, MR_sv(2), 0);
	MR_tfield(2, MR_tempr2, 1) = MR_ctfield(1, MR_r7, 0);
	MR_tfield(2, MR_tempr2, 2) = MR_ctfield(1, MR_tempr3, 0);
	MR_r3 = MR_ctfield(1, MR_r5, 0);
	MR_r4 = MR_ctfield(1, MR_r6, 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(check_hlds__format_call__is_format_call_kind_and_vars_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,1,0);
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_std_lib_module_name_1_0,
		check_hlds__format_call__is_format_call_kind_and_vars_6_0_i27);
MR_def_label(check_hlds__format_call__is_format_call_kind_and_vars_6_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		check_hlds__format_call__is_format_call_kind_and_vars_6_0_i28);
MR_def_label(check_hlds__format_call__is_format_call_kind_and_vars_6_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__format_call__is_format_call_kind_and_vars_6_0_i1);
	}
	if (MR_LTAGS_TEST(MR_sv(2),0,0)) {
		MR_GOTO_LAB(check_hlds__format_call__is_format_call_kind_and_vars_6_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8;
	MR_tempr8 = MR_sv(2);
	MR_tempr1 = MR_ctfield(1, MR_tempr8, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(check_hlds__format_call__is_format_call_kind_and_vars_6_0_i1);
	}
	MR_tempr2 = MR_ctfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TEST(MR_tempr2,0,0)) {
		MR_GOTO_LAB(check_hlds__format_call__is_format_call_kind_and_vars_6_0_i1);
	}
	MR_tempr3 = MR_ctfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TEST(MR_tempr3,0,0)) {
		MR_GOTO_LAB(check_hlds__format_call__is_format_call_kind_and_vars_6_0_i1);
	}
	MR_tempr4 = MR_ctfield(1, MR_tempr3, 1);
	if (MR_LTAGS_TEST(MR_tempr4,0,0)) {
		MR_GOTO_LAB(check_hlds__format_call__is_format_call_kind_and_vars_6_0_i1);
	}
	MR_tempr5 = MR_ctfield(1, MR_tempr4, 1);
	if (MR_LTAGS_TEST(MR_tempr5,0,0)) {
		MR_GOTO_LAB(check_hlds__format_call__is_format_call_kind_and_vars_6_0_i1);
	}
	MR_tempr6 = MR_ctfield(1, MR_tempr5, 1);
	if (MR_LTAGS_TESTR(MR_tempr6,0,0)) {
		MR_GOTO_LAB(check_hlds__format_call__is_format_call_kind_and_vars_6_0_i1);
	}
	MR_tag_alloc_heap(MR_tempr7, 3, (MR_Integer) 4);
	MR_r2 = MR_tempr7;
	MR_tfield(3, MR_tempr7, 0) = MR_ctfield(1, MR_tempr8, 0);
	MR_tfield(3, MR_tempr7, 1) = MR_ctfield(1, MR_tempr1, 0);
	MR_tfield(3, MR_tempr7, 2) = MR_ctfield(1, MR_tempr4, 0);
	MR_tfield(3, MR_tempr7, 3) = MR_ctfield(1, MR_tempr5, 0);
	MR_r3 = MR_ctfield(1, MR_tempr2, 0);
	MR_r4 = MR_ctfield(1, MR_tempr3, 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(check_hlds__format_call__is_format_call_kind_and_vars_6_0,1)
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


MR_BEGIN_MODULE(check_hlds__format_call_module1)
	MR_init_entry1(check_hlds__format_call__is_format_call_3_0);
	MR_init_label8(check_hlds__format_call__is_format_call_3_0,4,5,3,12,13,48,11,24)
	MR_init_label2(check_hlds__format_call__is_format_call_3_0,25,1)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'is_format_call'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__format_call__is_format_call_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if ((strcmp((char *) (MR_Word *) MR_r2, MR_string_const("format", 6)) != 0)) {
		MR_GOTO_LAB(check_hlds__format_call__is_format_call_3_0_i1);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_string_module_0_0,
		check_hlds__format_call__is_format_call_3_0_i4);
MR_def_label(check_hlds__format_call__is_format_call_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		check_hlds__format_call__is_format_call_3_0_i5);
MR_def_label(check_hlds__format_call__is_format_call_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__format_call__is_format_call_3_0_i3);
	}
	if (MR_LTAGS_TEST(MR_sv(2),0,0)) {
		MR_GOTO_LAB(check_hlds__format_call__is_format_call_3_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(1, MR_sv(2), 1);
	MR_r1 = MR_tempr1;
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(check_hlds__format_call__is_format_call_3_0_i1);
	}
	MR_tempr2 = MR_ctfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TEST(MR_tempr2,0,0)) {
		MR_GOTO_LAB(check_hlds__format_call__is_format_call_3_0_i1);
	}
	MR_r1 = MR_ctfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__format_call__is_format_call_3_0_i1);
	}
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(check_hlds__format_call__is_format_call_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_io_module_0_0,
		check_hlds__format_call__is_format_call_3_0_i12);
MR_def_label(check_hlds__format_call__is_format_call_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		check_hlds__format_call__is_format_call_3_0_i13);
MR_def_label(check_hlds__format_call__is_format_call_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__format_call__is_format_call_3_0_i11);
	}
	if (MR_LTAGS_TEST(MR_sv(2),0,0)) {
		MR_GOTO_LAB(check_hlds__format_call__is_format_call_3_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(1, MR_sv(2), 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(check_hlds__format_call__is_format_call_3_0_i1);
	}
	MR_tempr2 = MR_ctfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TEST(MR_tempr2,0,0)) {
		MR_GOTO_LAB(check_hlds__format_call__is_format_call_3_0_i1);
	}
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(check_hlds__format_call__is_format_call_3_0_i1);
	}
	MR_tempr2 = MR_ctfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TEST(MR_tempr2,0,0)) {
		MR_GOTO_LAB(check_hlds__format_call__is_format_call_3_0_i48);
	}
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(check_hlds__format_call__is_format_call_3_0_i1);
	}
	}
MR_def_label(check_hlds__format_call__is_format_call_3_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(check_hlds__format_call__is_format_call_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,1,0);
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_std_lib_module_name_1_0,
		check_hlds__format_call__is_format_call_3_0_i24);
MR_def_label(check_hlds__format_call__is_format_call_3_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		check_hlds__format_call__is_format_call_3_0_i25);
MR_def_label(check_hlds__format_call__is_format_call_3_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__format_call__is_format_call_3_0_i1);
	}
	if (MR_LTAGS_TEST(MR_sv(2),0,0)) {
		MR_GOTO_LAB(check_hlds__format_call__is_format_call_3_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_ctfield(1, MR_sv(2), 1);
	MR_r1 = MR_tempr1;
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(check_hlds__format_call__is_format_call_3_0_i1);
	}
	MR_tempr2 = MR_ctfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TEST(MR_tempr2,0,0)) {
		MR_GOTO_LAB(check_hlds__format_call__is_format_call_3_0_i1);
	}
	MR_tempr3 = MR_ctfield(1, MR_tempr2, 1);
	MR_r1 = MR_tempr3;
	if (MR_LTAGS_TEST(MR_tempr3,0,0)) {
		MR_GOTO_LAB(check_hlds__format_call__is_format_call_3_0_i1);
	}
	MR_tempr2 = MR_ctfield(1, MR_tempr3, 1);
	if (MR_LTAGS_TEST(MR_tempr2,0,0)) {
		MR_GOTO_LAB(check_hlds__format_call__is_format_call_3_0_i1);
	}
	MR_tempr4 = MR_ctfield(1, MR_tempr2, 1);
	MR_r1 = MR_tempr4;
	if (MR_LTAGS_TEST(MR_tempr4,0,0)) {
		MR_GOTO_LAB(check_hlds__format_call__is_format_call_3_0_i1);
	}
	MR_tempr2 = MR_ctfield(1, MR_tempr4, 1);
	MR_r1 = ((MR_Integer) MR_tempr2 == (MR_Integer) MR_tbmkword(0, 0));
	MR_decr_sp_and_return(3);
	}
MR_def_label(check_hlds__format_call__is_format_call_3_0,1)
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

MR_decl_entry(map__search_3_0);
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
MR_decl_entry(fn__map__init_0_0);

MR_BEGIN_MODULE(check_hlds__format_call_module2)
	MR_init_entry1(fn__check_hlds__format_call__get_conj_map_2_0);
	MR_init_label6(fn__check_hlds__format_call__get_conj_map_2_0,3,2,6,7,8,9)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'get_conj_map'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__check_hlds__format_call__get_conj_map_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__format_call, conj_id);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(check_hlds__format_call, conj_map);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(map__search_3_0,
		fn__check_hlds__format_call__get_conj_map_2_0_i3);
MR_def_label(fn__check_hlds__format_call__get_conj_map_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__check_hlds__format_call__get_conj_map_2_0_i2);
	}
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(4);
MR_def_label(fn__check_hlds__format_call__get_conj_map_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_np_call_localret_ent(fn__map__init_0_0,
		fn__check_hlds__format_call__get_conj_map_2_0_i6);
MR_def_label(fn__check_hlds__format_call__get_conj_map_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(check_hlds__format_call, list_skeleton_state);
	MR_np_call_localret_ent(fn__map__init_0_0,
		fn__check_hlds__format_call__get_conj_map_2_0_i7);
MR_def_label(fn__check_hlds__format_call__get_conj_map_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(check_hlds__format_call, what_to_print);
	MR_np_call_localret_ent(fn__map__init_0_0,
		fn__check_hlds__format_call__get_conj_map_2_0_i8);
MR_def_label(fn__check_hlds__format_call__get_conj_map_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_r2 = MR_r1;
	MR_np_call_localret_ent(fn__map__init_0_0,
		fn__check_hlds__format_call__get_conj_map_2_0_i9);
MR_def_label(fn__check_hlds__format_call__get_conj_map_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__format_call_module3)
	MR_init_entry1(fn__check_hlds__format_call__this_file_0_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'this_file'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__check_hlds__format_call__this_file_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("format_call.m", 13);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(set_tree234__member_2_0);
MR_decl_entry(set_tree234__delete_3_0);
MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0);
MR_decl_entry(svmap__set_4_0);
MR_decl_entry(fn__parse_tree__builtin_lib_types__list_type_ctor_0_0);
MR_decl_entry(__Unify___parse_tree__prog_data__type_ctor_0_0);
MR_decl_entry(fn__mdbcomp__prim_data__unqualify_name_1_0);
MR_decl_entry(set_tree234__insert_list_3_0);
MR_decl_entry(fn__parse_tree__builtin_lib_types__poly_type_type_ctor_0_0);
MR_decl_entry(libs__compiler_util__unexpected_2_0);
MR_decl_entry(set_tree234__insert_3_0);

MR_BEGIN_MODULE(check_hlds__format_call_module4)
	MR_init_entry1(check_hlds__format_call__format_call_traverse_unify_8_0);
	MR_init_label8(check_hlds__format_call__format_call_traverse_unify_8_0,218,19,21,24,25,22,30,31)
	MR_init_label8(check_hlds__format_call__format_call_traverse_unify_8_0,33,35,34,43,44,45,27,28)
	MR_init_label8(check_hlds__format_call__format_call_traverse_unify_8_0,50,51,54,56,58,60,55,64)
	MR_init_label8(check_hlds__format_call__format_call_traverse_unify_8_0,65,69,71,72,47,48,219,6)
	MR_init_label7(check_hlds__format_call__format_call_traverse_unify_8_0,8,9,10,11,13,4,107)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'format_call_traverse_unify'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__format_call__format_call_traverse_unify_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(check_hlds__format_call__format_call_traverse_unify_8_0_i218) MR_AND
		MR_LABEL_AP(check_hlds__format_call__format_call_traverse_unify_8_0_i107) MR_AND
		MR_LABEL_AP(check_hlds__format_call__format_call_traverse_unify_8_0_i219) MR_AND
		MR_LABEL_AP(check_hlds__format_call__format_call_traverse_unify_8_0_i107));
MR_def_label(check_hlds__format_call__format_call_traverse_unify_8_0,218)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(18);
	MR_sv(18) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 2);
	MR_sv(11) = MR_r3;
	MR_sv(12) = MR_r4;
	MR_tempr2 = MR_r5;
	MR_sv(13) = MR_tempr2;
	MR_sv(16) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_sv(17) = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_r1 = MR_sv(17);
	MR_r2 = MR_tempr2;
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(set_tree234__member_2_0,
		check_hlds__format_call__format_call_traverse_unify_8_0_i19);
MR_def_label(check_hlds__format_call__format_call_traverse_unify_8_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__format_call__format_call_traverse_unify_8_0_i4);
	}
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(fn__check_hlds__format_call__get_conj_map_2_0,
		check_hlds__format_call__format_call_traverse_unify_8_0_i21);
MR_def_label(check_hlds__format_call__format_call_traverse_unify_8_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(15) = MR_ctfield(0, MR_tempr1, 3);
	MR_sv(7) = MR_ctfield(0, MR_tempr1, 2);
	MR_sv(6) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(5) = MR_ctfield(0, MR_tempr1, 0);
	if (MR_RTAGS_TESTR(MR_sv(3),3,4)) {
		MR_GOTO_LAB(check_hlds__format_call__format_call_traverse_unify_8_0_i22);
	}
	MR_sv(3) = MR_ctfield(3, MR_sv(3), 1);
	MR_r1 = MR_sv(17);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(13);
	}
	MR_np_call_localret_ent(set_tree234__delete_3_0,
		check_hlds__format_call__format_call_traverse_unify_8_0_i24);
MR_def_label(check_hlds__format_call__format_call_traverse_unify_8_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(16);
	MR_r2 = MR_sv(17);
	MR_r3 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(2);
	MR_r6 = MR_sv(3);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		check_hlds__format_call__format_call_traverse_unify_8_0_i25);
MR_def_label(check_hlds__format_call__format_call_traverse_unify_8_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(7);
	MR_tfield(0, MR_tempr1, 3) = MR_sv(15);
	MR_r3 = MR_sv(1);
	MR_r5 = MR_sv(11);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__format_call, conj_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(check_hlds__format_call, conj_map);
	}
	MR_np_call_localret_ent(svmap__set_4_0,
		check_hlds__format_call__format_call_traverse_unify_8_0_i13);
MR_def_label(check_hlds__format_call__format_call_traverse_unify_8_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(3),1)) {
		MR_GOTO_LAB(check_hlds__format_call__format_call_traverse_unify_8_0_i28);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(8) = MR_ctfield(1, MR_tempr1, 0);
	MR_sv(9) = MR_ctfield(1, MR_tempr1, 1);
	MR_sv(10) = MR_ctfield(1, MR_tempr1, 2);
	MR_sv(14) = MR_r1;
	}
	MR_np_call_localret_ent(fn__parse_tree__builtin_lib_types__list_type_ctor_0_0,
		check_hlds__format_call__format_call_traverse_unify_8_0_i30);
MR_def_label(check_hlds__format_call__format_call_traverse_unify_8_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(__Unify___parse_tree__prog_data__type_ctor_0_0,
		check_hlds__format_call__format_call_traverse_unify_8_0_i31);
MR_def_label(check_hlds__format_call__format_call_traverse_unify_8_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__format_call__format_call_traverse_unify_8_0_i27);
	}
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__unqualify_name_1_0,
		check_hlds__format_call__format_call_traverse_unify_8_0_i33);
MR_def_label(check_hlds__format_call__format_call_traverse_unify_8_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(4),0,0)) {
		MR_GOTO_LAB(check_hlds__format_call__format_call_traverse_unify_8_0_i35);
	}
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("[]", 2)) != 0)) {
		MR_GOTO_LAB(check_hlds__format_call__format_call_traverse_unify_8_0_i27);
	}
	if (MR_INT_NE(MR_sv(9),0)) {
		MR_GOTO_LAB(check_hlds__format_call__format_call_traverse_unify_8_0_i27);
	}
	MR_r2 = MR_sv(2);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_sv(13);
	MR_r1 = MR_sv(17);
	MR_GOTO_LAB(check_hlds__format_call__format_call_traverse_unify_8_0_i34);
MR_def_label(check_hlds__format_call__format_call_traverse_unify_8_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("[|]", 3)) != 0)) {
		MR_GOTO_LAB(check_hlds__format_call__format_call_traverse_unify_8_0_i27);
	}
	if (MR_INT_NE(MR_sv(9),2)) {
		MR_GOTO_LAB(check_hlds__format_call__format_call_traverse_unify_8_0_i27);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_sv(4);
	MR_tempr1 = MR_ctfield(1, MR_tempr3, 1);
	MR_r4 = MR_tempr1;
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(check_hlds__format_call__format_call_traverse_unify_8_0_i27);
	}
	MR_tempr2 = MR_ctfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_tempr2,0,0)) {
		MR_GOTO_LAB(check_hlds__format_call__format_call_traverse_unify_8_0_i27);
	}
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_ctfield(1, MR_tempr3, 0);
	MR_tfield(1, MR_tempr2, 1) = MR_ctfield(1, MR_tempr1, 0);
	MR_r2 = MR_sv(2);
	MR_r4 = MR_tempr2;
	MR_r3 = MR_sv(13);
	MR_r1 = MR_sv(17);
	}
MR_def_label(check_hlds__format_call__format_call_traverse_unify_8_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r4;
	MR_sv(17) = MR_r1;
	MR_np_call_localret_ent(set_tree234__delete_3_0,
		check_hlds__format_call__format_call_traverse_unify_8_0_i43);
MR_def_label(check_hlds__format_call__format_call_traverse_unify_8_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(17);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(set_tree234__insert_list_3_0,
		check_hlds__format_call__format_call_traverse_unify_8_0_i44);
MR_def_label(check_hlds__format_call__format_call_traverse_unify_8_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(16);
	MR_r2 = MR_sv(17);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(check_hlds__format_call, list_skeleton_state);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(2);
	MR_r6 = MR_sv(3);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		check_hlds__format_call__format_call_traverse_unify_8_0_i45);
MR_def_label(check_hlds__format_call__format_call_traverse_unify_8_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tfield(0, MR_tempr1, 2) = MR_sv(7);
	MR_tfield(0, MR_tempr1, 3) = MR_sv(15);
	MR_r3 = MR_sv(1);
	MR_r5 = MR_sv(11);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__format_call, conj_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(check_hlds__format_call, conj_map);
	}
	MR_np_call_localret_ent(svmap__set_4_0,
		check_hlds__format_call__format_call_traverse_unify_8_0_i13);
MR_def_label(check_hlds__format_call__format_call_traverse_unify_8_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(14);
MR_def_label(check_hlds__format_call__format_call_traverse_unify_8_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(3),1)) {
		MR_GOTO_LAB(check_hlds__format_call__format_call_traverse_unify_8_0_i48);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_ctfield(1, MR_tempr1, 0);
	MR_sv(8) = MR_ctfield(1, MR_tempr1, 1);
	MR_sv(9) = MR_ctfield(1, MR_tempr1, 2);
	MR_sv(14) = MR_r1;
	}
	MR_np_call_localret_ent(fn__parse_tree__builtin_lib_types__poly_type_type_ctor_0_0,
		check_hlds__format_call__format_call_traverse_unify_8_0_i50);
MR_def_label(check_hlds__format_call__format_call_traverse_unify_8_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(__Unify___parse_tree__prog_data__type_ctor_0_0,
		check_hlds__format_call__format_call_traverse_unify_8_0_i51);
MR_def_label(check_hlds__format_call__format_call_traverse_unify_8_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__format_call__format_call_traverse_unify_8_0_i47);
	}
	if (MR_INT_NE(MR_sv(8),1)) {
		MR_GOTO_LAB(check_hlds__format_call__format_call_traverse_unify_8_0_i47);
	}
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__unqualify_name_1_0,
		check_hlds__format_call__format_call_traverse_unify_8_0_i54);
MR_def_label(check_hlds__format_call__format_call_traverse_unify_8_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("c", 1)) != 0)) {
		MR_GOTO_LAB(check_hlds__format_call__format_call_traverse_unify_8_0_i56);
	}
	MR_r2 = MR_sv(2);
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(3,3,0);
	MR_r3 = MR_sv(13);
	MR_r1 = MR_sv(17);
	MR_GOTO_LAB(check_hlds__format_call__format_call_traverse_unify_8_0_i55);
MR_def_label(check_hlds__format_call__format_call_traverse_unify_8_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("f", 1)) != 0)) {
		MR_GOTO_LAB(check_hlds__format_call__format_call_traverse_unify_8_0_i58);
	}
	MR_r2 = MR_sv(2);
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(0,4,0);
	MR_r3 = MR_sv(13);
	MR_r1 = MR_sv(17);
	MR_GOTO_LAB(check_hlds__format_call__format_call_traverse_unify_8_0_i55);
MR_def_label(check_hlds__format_call__format_call_traverse_unify_8_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("i", 1)) != 0)) {
		MR_GOTO_LAB(check_hlds__format_call__format_call_traverse_unify_8_0_i60);
	}
	MR_r2 = MR_sv(2);
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(1,3,1);
	MR_r3 = MR_sv(13);
	MR_r1 = MR_sv(17);
	MR_GOTO_LAB(check_hlds__format_call__format_call_traverse_unify_8_0_i55);
MR_def_label(check_hlds__format_call__format_call_traverse_unify_8_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("s", 1)) != 0)) {
		MR_GOTO_LAB(check_hlds__format_call__format_call_traverse_unify_8_0_i47);
	}
	MR_r2 = MR_sv(2);
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(2,0,1);
	MR_r3 = MR_sv(13);
	MR_r1 = MR_sv(17);
MR_def_label(check_hlds__format_call__format_call_traverse_unify_8_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_sv(17) = MR_r1;
	MR_np_call_localret_ent(set_tree234__delete_3_0,
		check_hlds__format_call__format_call_traverse_unify_8_0_i64);
MR_def_label(check_hlds__format_call__format_call_traverse_unify_8_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(4),0,0)) {
		MR_GOTO_LAB(check_hlds__format_call__format_call_traverse_unify_8_0_i65);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_sv(4);
	MR_tempr1 = MR_ctfield(1, MR_tempr3, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(check_hlds__format_call__format_call_traverse_unify_8_0_i65);
	}
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_r6 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_ctfield(1, MR_tempr3, 0);
	MR_tfield(0, MR_tempr2, 1) = MR_sv(3);
	MR_r5 = MR_sv(2);
	MR_r4 = MR_sv(7);
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(16);
	MR_r2 = MR_sv(17);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(check_hlds__format_call, what_to_print);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		check_hlds__format_call__format_call_traverse_unify_8_0_i72);
MR_def_label(check_hlds__format_call__format_call_traverse_unify_8_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_np_call_localret_ent(fn__check_hlds__format_call__this_file_0_0,
		check_hlds__format_call__format_call_traverse_unify_8_0_i69);
MR_def_label(check_hlds__format_call__format_call_traverse_unify_8_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("format_call_traverse_unify: arity mismatch", 42);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		check_hlds__format_call__format_call_traverse_unify_8_0_i71);
MR_def_label(check_hlds__format_call__format_call_traverse_unify_8_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		check_hlds__format_call__format_call_traverse_unify_8_0_i72);
MR_def_label(check_hlds__format_call__format_call_traverse_unify_8_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(15);
	MR_r3 = MR_sv(1);
	MR_r5 = MR_sv(11);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__format_call, conj_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(check_hlds__format_call, conj_map);
	}
	MR_np_call_localret_ent(svmap__set_4_0,
		check_hlds__format_call__format_call_traverse_unify_8_0_i13);
MR_def_label(check_hlds__format_call__format_call_traverse_unify_8_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(14);
MR_def_label(check_hlds__format_call__format_call_traverse_unify_8_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_r5 = MR_sv(11);
	MR_sv(8) = MR_sv(13);
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__format_call, conj_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(check_hlds__format_call, conj_map);
	MR_np_call_localret_ent(svmap__set_4_0,
		check_hlds__format_call__format_call_traverse_unify_8_0_i13);
MR_def_label(check_hlds__format_call__format_call_traverse_unify_8_0,219)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(18);
	MR_sv(18) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_sv(2) = MR_ctfield(2, MR_tempr1, 0);
	MR_sv(3) = MR_ctfield(2, MR_tempr1, 1);
	MR_sv(11) = MR_r3;
	MR_sv(12) = MR_r4;
	MR_tempr2 = MR_r5;
	MR_sv(13) = MR_tempr2;
	MR_sv(4) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_sv(5) = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr2;
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(set_tree234__member_2_0,
		check_hlds__format_call__format_call_traverse_unify_8_0_i6);
MR_def_label(check_hlds__format_call__format_call_traverse_unify_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__format_call__format_call_traverse_unify_8_0_i4);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(13);
	MR_np_call_localret_ent(set_tree234__delete_3_0,
		check_hlds__format_call__format_call_traverse_unify_8_0_i8);
MR_def_label(check_hlds__format_call__format_call_traverse_unify_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(set_tree234__insert_3_0,
		check_hlds__format_call__format_call_traverse_unify_8_0_i9);
MR_def_label(check_hlds__format_call__format_call_traverse_unify_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(fn__check_hlds__format_call__get_conj_map_2_0,
		check_hlds__format_call__format_call_traverse_unify_8_0_i10);
MR_def_label(check_hlds__format_call__format_call_traverse_unify_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_sv(2);
	MR_tempr4 = MR_r1;
	MR_sv(2) = MR_ctfield(0, MR_tempr4, 0);
	MR_tempr2 = MR_sv(3);
	MR_sv(3) = MR_ctfield(0, MR_tempr4, 1);
	MR_sv(4) = MR_ctfield(0, MR_tempr4, 2);
	MR_tempr3 = MR_tempr4;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_r2;
	MR_r4 = MR_ctfield(0, MR_tempr3, 3);
	MR_r5 = MR_tempr1;
	MR_r6 = MR_tempr2;
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		check_hlds__format_call__format_call_traverse_unify_8_0_i11);
MR_def_label(check_hlds__format_call__format_call_traverse_unify_8_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__format_call, conj_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(check_hlds__format_call, conj_map);
	MR_r3 = MR_sv(1);
	MR_r5 = MR_sv(11);
	}
	MR_np_call_localret_ent(svmap__set_4_0,
		check_hlds__format_call__format_call_traverse_unify_8_0_i13);
MR_def_label(check_hlds__format_call__format_call_traverse_unify_8_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(12);
	MR_r3 = MR_sv(8);
	MR_decr_sp_and_return(18);
MR_def_label(check_hlds__format_call__format_call_traverse_unify_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(12);
	MR_r3 = MR_sv(13);
	MR_decr_sp_and_return(18);
MR_def_label(check_hlds__format_call__format_call_traverse_unify_8_0,107)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_r2 = MR_r4;
	MR_r3 = MR_r5;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(counter__allocate_3_0);

MR_BEGIN_MODULE(check_hlds__format_call_module5)
	MR_init_entry1(check_hlds__format_call__alloc_id_3_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'alloc_id'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__format_call__alloc_id_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(counter__allocate_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_goal__goal_to_conj_list_2_0);

MR_BEGIN_MODULE(check_hlds__format_call_module6)
	MR_init_entry1(check_hlds__format_call__format_call_traverse_goal_13_0);
	MR_init_label3(check_hlds__format_call__format_call_traverse_goal_13_0,2,3,4)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'format_call_traverse_goal'/13 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__format_call__format_call_traverse_goal_13_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_r7;
	MR_r1 = MR_r4;
	MR_np_call_localret_ent(counter__allocate_3_0,
		check_hlds__format_call__format_call_traverse_goal_13_0_i2);
MR_def_label(check_hlds__format_call__format_call_traverse_goal_13_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_sv(7) = MR_r2;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_to_conj_list_2_0,
		check_hlds__format_call__format_call_traverse_goal_13_0_i3);
MR_def_label(check_hlds__format_call__format_call_traverse_goal_13_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(7);
	MR_r6 = MR_sv(4);
	MR_r7 = MR_sv(5);
	MR_r8 = MR_sv(6);
	}
	MR_np_call_localret_ent(check_hlds__format_call__format_call_traverse_conj_13_0,
		check_hlds__format_call__format_call_traverse_goal_13_0_i4);
MR_def_label(check_hlds__format_call__format_call_traverse_goal_13_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_tempr3 = MR_r3;
	MR_r3 = MR_tempr2;
	MR_tempr4 = MR_r4;
	MR_r4 = MR_tempr3;
	MR_tempr5 = MR_r5;
	MR_r5 = MR_tempr4;
	MR_r6 = MR_tempr5;
	MR_decr_sp_and_return(8);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(svmap__det_insert_4_0);
MR_decl_entry(hlds__hlds_module__module_info_pred_info_3_0);
MR_decl_entry(fn__hlds__hlds_pred__pred_info_module_1_0);
MR_decl_entry(fn__hlds__hlds_pred__pred_info_name_1_0);
MR_decl_entry(fn__hlds__hlds_pred__pred_info_orig_arity_1_0);
MR_decl_entry(fn__hlds__hlds_goal__goal_info_get_goal_path_1_0);
MR_decl_entry(fn__hlds__hlds_goal__goal_info_get_context_1_0);
MR_decl_entry(fn__f_108_105_115_116_95_95_43_43_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_case_0;
MR_decl_entry(fn__list__map_2_0);

MR_BEGIN_MODULE(check_hlds__format_call_module7)
	MR_init_entry1(check_hlds__format_call__format_call_traverse_conj_13_0);
	MR_init_label8(check_hlds__format_call__format_call_traverse_conj_13_0,116,3,4,66,67,71,69,24)
	MR_init_label8(check_hlds__format_call__format_call_traverse_conj_13_0,25,26,27,30,32,33,34,40)
	MR_init_label8(check_hlds__format_call__format_call_traverse_conj_13_0,29,79,7,9,12,13,14,15)
	MR_init_label8(check_hlds__format_call__format_call_traverse_conj_13_0,16,17,18,19,21,22,42,43)
	MR_init_label8(check_hlds__format_call__format_call_traverse_conj_13_0,49,58,59,54,55,51,62,64)
	MR_init_label1(check_hlds__format_call__format_call_traverse_conj_13_0,128)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'format_call_traverse_conj'/13 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__format_call__format_call_traverse_conj_13_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(14);
	MR_sv(14) = (MR_Word) MR_succip;
MR_def_label(check_hlds__format_call__format_call_traverse_conj_13_0,116)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(check_hlds__format_call__format_call_traverse_conj_13_0_i3);
	}
	MR_r1 = MR_r4;
	MR_r2 = MR_r5;
	MR_r3 = MR_r6;
	MR_r4 = MR_r7;
	MR_r5 = MR_r8;
	MR_decr_sp_and_return(14);
MR_def_label(check_hlds__format_call__format_call_traverse_conj_13_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_ctfield(1, MR_r2, 0);
	MR_r2 = MR_ctfield(1, MR_r2, 1);
	MR_np_localcall_lab(check_hlds__format_call__format_call_traverse_conj_13_0,
		check_hlds__format_call__format_call_traverse_conj_13_0_i4);
MR_def_label(check_hlds__format_call__format_call_traverse_conj_13_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = MR_ctfield(0, MR_sv(3), 0);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r6),
		MR_LABEL_AP(check_hlds__format_call__format_call_traverse_conj_13_0_i66) MR_AND
		MR_LABEL_AP(check_hlds__format_call__format_call_traverse_conj_13_0_i24) MR_AND
		MR_LABEL_AP(check_hlds__format_call__format_call_traverse_conj_13_0_i128) MR_AND
		MR_LABEL_AP(check_hlds__format_call__format_call_traverse_conj_13_0_i79));
MR_def_label(check_hlds__format_call__format_call_traverse_conj_13_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r6;
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(9) = MR_r1;
	MR_sv(10) = MR_r2;
	MR_r1 = MR_ctfield(0, MR_tempr1, 3);
	MR_r2 = MR_sv(2);
	}
	MR_np_call_localret_ent(check_hlds__format_call__format_call_traverse_unify_8_0,
		check_hlds__format_call__format_call_traverse_conj_13_0_i67);
MR_def_label(check_hlds__format_call__format_call_traverse_conj_13_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr5 = MR_sv(3);
	MR_tempr1 = MR_tag(MR_tempr5);
	MR_r5 = MR_tempr1;
	if ((MR_tempr1 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(check_hlds__format_call__format_call_traverse_conj_13_0_i69);
	}
	if ((MR_tempr1 == MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(check_hlds__format_call__format_call_traverse_conj_13_0_i69);
	}
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_tempr3 = MR_r2;
	MR_r2 = MR_ctfield(2, MR_tempr5, 8);
	MR_tempr4 = MR_r3;
	MR_r3 = MR_sv(9);
	MR_r4 = MR_sv(10);
	MR_r5 = MR_tempr2;
	MR_r6 = MR_tempr3;
	MR_r7 = MR_tempr4;
	}
	MR_np_call_localret_ent(check_hlds__format_call__format_call_traverse_goal_13_0,
		check_hlds__format_call__format_call_traverse_conj_13_0_i71);
MR_def_label(check_hlds__format_call__format_call_traverse_conj_13_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r6;
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__format_call, conj_id);
	MR_r2 = MR_r1;
	MR_r3 = MR_tempr2;
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(svmap__det_insert_4_0,
		check_hlds__format_call__format_call_traverse_conj_13_0_i59);
MR_def_label(check_hlds__format_call__format_call_traverse_conj_13_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(10);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_r5 = MR_tempr3;
	MR_decr_sp_and_return(14);
	}
MR_def_label(check_hlds__format_call__format_call_traverse_conj_13_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_ctfield(0, MR_sv(3), 1);
	MR_tempr2 = MR_r6;
	MR_sv(3) = MR_ctfield(1, MR_tempr2, 2);
	MR_sv(9) = MR_r1;
	MR_sv(10) = MR_r2;
	MR_sv(11) = MR_r3;
	MR_sv(12) = MR_r4;
	MR_sv(13) = MR_r5;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_ctfield(1, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_info_3_0,
		check_hlds__format_call__format_call_traverse_conj_13_0_i25);
MR_def_label(check_hlds__format_call__format_call_traverse_conj_13_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_module_1_0,
		check_hlds__format_call__format_call_traverse_conj_13_0_i26);
MR_def_label(check_hlds__format_call__format_call_traverse_conj_13_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_name_1_0,
		check_hlds__format_call__format_call_traverse_conj_13_0_i27);
MR_def_label(check_hlds__format_call__format_call_traverse_conj_13_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__format_call__is_format_call_kind_and_vars_6_0,
		check_hlds__format_call__format_call_traverse_conj_13_0_i30);
MR_def_label(check_hlds__format_call__format_call_traverse_conj_13_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__format_call__format_call_traverse_conj_13_0_i29);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r2;
	MR_sv(6) = MR_r3;
	MR_sv(7) = MR_r4;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_orig_arity_1_0,
		check_hlds__format_call__format_call_traverse_conj_13_0_i32);
MR_def_label(check_hlds__format_call__format_call_traverse_conj_13_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_goal_path_1_0,
		check_hlds__format_call__format_call_traverse_conj_13_0_i33);
MR_def_label(check_hlds__format_call__format_call_traverse_conj_13_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_context_1_0,
		check_hlds__format_call__format_call_traverse_conj_13_0_i34);
MR_def_label(check_hlds__format_call__format_call_traverse_conj_13_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 9);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tempr5 = MR_sv(6);
	MR_tfield(0, MR_tempr1, 1) = MR_tempr5;
	MR_tempr6 = MR_sv(7);
	MR_tfield(0, MR_tempr1, 2) = MR_tempr6;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 6) = MR_sv(8);
	MR_tfield(0, MR_tempr1, 7) = MR_r1;
	MR_tfield(0, MR_tempr1, 8) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_sv(1) = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_sv(9);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr6;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_tempr5;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr3;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_r3 = MR_sv(13);
	}
	MR_np_call_localret_ent(set_tree234__insert_list_3_0,
		check_hlds__format_call__format_call_traverse_conj_13_0_i40);
MR_def_label(check_hlds__format_call__format_call_traverse_conj_13_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(11);
	MR_r4 = MR_sv(12);
	MR_r5 = MR_tempr1;
	MR_decr_sp_and_return(14);
	}
MR_def_label(check_hlds__format_call__format_call_traverse_conj_13_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(11);
	MR_r4 = MR_sv(12);
	MR_r5 = MR_sv(13);
	MR_decr_sp_and_return(14);
MR_def_label(check_hlds__format_call__format_call_traverse_conj_13_0,79)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r6, 0),
		MR_LABEL_AP(check_hlds__format_call__format_call_traverse_conj_13_0_i128) MR_AND
		MR_LABEL_AP(check_hlds__format_call__format_call_traverse_conj_13_0_i7) MR_AND
		MR_LABEL_AP(check_hlds__format_call__format_call_traverse_conj_13_0_i9) MR_AND
		MR_LABEL_AP(check_hlds__format_call__format_call_traverse_conj_13_0_i62) MR_AND
		MR_LABEL_AP(check_hlds__format_call__format_call_traverse_conj_13_0_i21) MR_AND
		MR_LABEL_AP(check_hlds__format_call__format_call_traverse_conj_13_0_i42) MR_AND
		MR_LABEL_AP(check_hlds__format_call__format_call_traverse_conj_13_0_i12) MR_AND
		MR_LABEL_AP(check_hlds__format_call__format_call_traverse_conj_13_0_i49));
MR_def_label(check_hlds__format_call__format_call_traverse_conj_13_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_ctfield(3, MR_r6, 2);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_sv(2);
	MR_tempr4 = MR_r4;
	MR_r4 = MR_tempr1;
	MR_tempr5 = MR_r5;
	MR_r5 = MR_tempr2;
	MR_r6 = MR_tempr3;
	MR_r7 = MR_tempr4;
	MR_r8 = MR_tempr5;
	MR_succip_word = MR_sv(14);
	MR_GOTO_LAB(check_hlds__format_call__format_call_traverse_conj_13_0_i116);
	}
MR_def_label(check_hlds__format_call__format_call_traverse_conj_13_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_ctfield(3, MR_r6, 1);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_sv(2);
	MR_tempr4 = MR_r4;
	MR_r4 = MR_tempr1;
	MR_tempr5 = MR_r5;
	MR_r5 = MR_tempr2;
	MR_r6 = MR_tempr3;
	MR_r7 = MR_tempr4;
	MR_r8 = MR_tempr5;
	MR_succip_word = MR_sv(14);
	MR_decr_sp(14);
	MR_np_tailcall_ent(check_hlds__format_call__format_call_traverse_disj_13_0);
	}
MR_def_label(check_hlds__format_call__format_call_traverse_conj_13_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr6 = MR_r6;
	MR_sv(3) = MR_ctfield(3, MR_tempr6, 2);
	MR_sv(4) = MR_ctfield(3, MR_tempr6, 3);
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_ctfield(3, MR_tempr6, 4);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_tempr4 = MR_r4;
	MR_r4 = MR_tempr2;
	MR_tempr5 = MR_r5;
	MR_r5 = MR_tempr3;
	MR_r6 = MR_tempr4;
	MR_r7 = MR_tempr5;
	}
	MR_np_call_localret_ent(check_hlds__format_call__format_call_traverse_goal_13_0,
		check_hlds__format_call__format_call_traverse_conj_13_0_i13);
MR_def_label(check_hlds__format_call__format_call_traverse_conj_13_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r2;
	MR_sv(5) = MR_r3;
	MR_sv(8) = MR_r4;
	MR_sv(9) = MR_r6;
	MR_sv(10) = (MR_Word) MR_CTOR0_ADDR(check_hlds__format_call, conj_id);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_r1;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(2);
	}
	MR_np_call_localret_ent(svmap__det_insert_4_0,
		check_hlds__format_call__format_call_traverse_conj_13_0_i14);
MR_def_label(check_hlds__format_call__format_call_traverse_conj_13_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(check_hlds__format_call__alloc_id_3_0,
		check_hlds__format_call__format_call_traverse_conj_13_0_i15);
MR_def_label(check_hlds__format_call__format_call_traverse_conj_13_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_to_conj_list_2_0,
		check_hlds__format_call__format_call_traverse_conj_13_0_i16);
MR_def_label(check_hlds__format_call__format_call_traverse_conj_13_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_to_conj_list_2_0,
		check_hlds__format_call__format_call_traverse_conj_13_0_i17);
MR_def_label(check_hlds__format_call__format_call_traverse_conj_13_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		check_hlds__format_call__format_call_traverse_conj_13_0_i18);
MR_def_label(check_hlds__format_call__format_call_traverse_conj_13_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(7);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(8);
	MR_r7 = MR_sv(6);
	MR_r8 = MR_sv(9);
	}
	MR_np_localcall_lab(check_hlds__format_call__format_call_traverse_conj_13_0,
		check_hlds__format_call__format_call_traverse_conj_13_0_i19);
MR_def_label(check_hlds__format_call__format_call_traverse_conj_13_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_tempr2 = MR_sv(4);
	MR_sv(4) = MR_r5;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_r1;
	MR_r3 = MR_tempr2;
	MR_tempr3 = MR_r4;
	MR_r4 = MR_tempr1;
	MR_r5 = MR_tempr3;
	}
	MR_np_call_localret_ent(svmap__det_insert_4_0,
		check_hlds__format_call__format_call_traverse_conj_13_0_i59);
MR_def_label(check_hlds__format_call__format_call_traverse_conj_13_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_ctfield(3, MR_r6, 1);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_tempr4 = MR_r4;
	MR_r4 = MR_tempr2;
	MR_tempr5 = MR_r5;
	MR_r5 = MR_tempr3;
	MR_r6 = MR_tempr4;
	MR_r7 = MR_tempr5;
	}
	MR_np_call_localret_ent(check_hlds__format_call__format_call_traverse_goal_13_0,
		check_hlds__format_call__format_call_traverse_conj_13_0_i22);
MR_def_label(check_hlds__format_call__format_call_traverse_conj_13_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r6;
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__format_call, conj_id);
	MR_r2 = MR_r1;
	MR_r3 = MR_tempr2;
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(svmap__det_insert_4_0,
		check_hlds__format_call__format_call_traverse_conj_13_0_i59);
MR_def_label(check_hlds__format_call__format_call_traverse_conj_13_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r6;
	MR_r7 = MR_ctfield(3, MR_tempr3, 2);
	MR_tempr1 = MR_ctfield(3, MR_tempr3, 1);
	if (MR_RTAGS_TESTR(MR_tempr1,3,2)) {
		MR_GOTO_LAB(check_hlds__format_call__format_call_traverse_conj_13_0_i43);
	}
	MR_tempr2 = MR_ctfield(3, MR_tempr1, 2);
	if (MR_INT_EQ(MR_tempr2,0)) {
		MR_GOTO_LAB(check_hlds__format_call__format_call_traverse_conj_13_0_i128);
	}
	}
MR_def_label(check_hlds__format_call__format_call_traverse_conj_13_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r7;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_tempr3 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_tempr4 = MR_r3;
	MR_r3 = MR_sv(2);
	MR_tempr5 = MR_r4;
	MR_r4 = MR_tempr2;
	MR_tempr6 = MR_r5;
	MR_r5 = MR_tempr3;
	MR_r6 = MR_tempr4;
	MR_r7 = MR_tempr5;
	MR_r8 = MR_tempr6;
	MR_succip_word = MR_sv(14);
	MR_GOTO_LAB(check_hlds__format_call__format_call_traverse_conj_13_0_i116);
	}
MR_def_label(check_hlds__format_call__format_call_traverse_conj_13_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr1 = MR_ctfield(3, MR_r6, 1);
	MR_r9 = MR_tempr1;
	MR_tempr2 = MR_tag(MR_tempr1);
	if ((MR_tempr2 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(check_hlds__format_call__format_call_traverse_conj_13_0_i51);
	}
	if ((MR_tempr2 == MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(check_hlds__format_call__format_call_traverse_conj_13_0_i54);
	}
	MR_tempr3 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_ctfield(2, MR_tempr1, 2);
	MR_tempr4 = MR_r3;
	MR_r3 = MR_tempr3;
	MR_tempr5 = MR_r4;
	MR_r4 = MR_tempr2;
	MR_tempr6 = MR_r5;
	MR_r5 = MR_tempr4;
	MR_r6 = MR_tempr5;
	MR_r7 = MR_tempr6;
	}
	MR_np_call_localret_ent(check_hlds__format_call__format_call_traverse_goal_13_0,
		check_hlds__format_call__format_call_traverse_conj_13_0_i58);
MR_def_label(check_hlds__format_call__format_call_traverse_conj_13_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r6;
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__format_call, conj_id);
	MR_r2 = MR_r1;
	MR_r3 = MR_tempr2;
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(svmap__det_insert_4_0,
		check_hlds__format_call__format_call_traverse_conj_13_0_i59);
MR_def_label(check_hlds__format_call__format_call_traverse_conj_13_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(4);
	MR_decr_sp_and_return(14);
	}
MR_def_label(check_hlds__format_call__format_call_traverse_conj_13_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__check_hlds__format_call__this_file_0_0,
		check_hlds__format_call__format_call_traverse_conj_13_0_i55);
MR_def_label(check_hlds__format_call__format_call_traverse_conj_13_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("format_call_traverse_conj: bi_implication", 41);
	MR_succip_word = MR_sv(14);
	MR_decr_sp(14);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(check_hlds__format_call__format_call_traverse_conj_13_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tempr7 = MR_r9;
	MR_tfield(1, MR_tempr1, 0) = MR_ctfield(1, MR_tempr7, 4);
	MR_tfield(1, MR_tempr1, 1) = MR_ctfield(1, MR_tempr7, 5);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_tempr3 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_tempr4 = MR_r3;
	MR_r3 = MR_sv(2);
	MR_tempr5 = MR_r4;
	MR_r4 = MR_tempr2;
	MR_tempr6 = MR_r5;
	MR_r5 = MR_tempr3;
	MR_r6 = MR_tempr4;
	MR_r7 = MR_tempr5;
	MR_r8 = MR_tempr6;
	MR_succip_word = MR_sv(14);
	MR_decr_sp(14);
	MR_np_tailcall_ent(check_hlds__format_call__format_call_traverse_disj_13_0);
	}
MR_def_label(check_hlds__format_call__format_call_traverse_conj_13_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_sv(10) = MR_r2;
	MR_sv(11) = MR_r3;
	MR_sv(12) = MR_r4;
	MR_sv(13) = MR_r5;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, case);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,6,0);
	MR_r4 = MR_ctfield(3, MR_r6, 3);
	MR_np_call_localret_ent(fn__list__map_2_0,
		check_hlds__format_call__format_call_traverse_conj_13_0_i64);
MR_def_label(check_hlds__format_call__format_call_traverse_conj_13_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(9);
	MR_r5 = MR_sv(10);
	MR_r6 = MR_sv(11);
	MR_r7 = MR_sv(12);
	MR_r8 = MR_sv(13);
	MR_succip_word = MR_sv(14);
	MR_decr_sp(14);
	MR_np_tailcall_ent(check_hlds__format_call__format_call_traverse_disj_13_0);
	}
MR_def_label(check_hlds__format_call__format_call_traverse_conj_13_0,128)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(14);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__condense_2_0);
MR_decl_entry(fn__set_tree234__union_list_1_0);
MR_decl_entry(set_tree234__union_3_0);

MR_BEGIN_MODULE(check_hlds__format_call_module8)
	MR_init_entry1(check_hlds__format_call__format_call_traverse_disj_13_0);
	MR_init_label5(check_hlds__format_call__format_call_traverse_disj_13_0,2,3,4,6,7)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'format_call_traverse_disj'/13 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__format_call__format_call_traverse_disj_13_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r4;
	MR_sv(6) = MR_r8;
	MR_r4 = MR_r5;
	MR_r5 = MR_r6;
	MR_r6 = MR_r7;
	MR_np_call_localret_ent(check_hlds__format_call__format_call_traverse_disj_arms_11_0,
		check_hlds__format_call__format_call_traverse_disj_13_0_i2);
MR_def_label(check_hlds__format_call__format_call_traverse_disj_13_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r5;
	MR_sv(3) = MR_r2;
	MR_sv(4) = MR_r3;
	MR_sv(5) = MR_r4;
	MR_sv(7) = (MR_Word) MR_CTOR0_ADDR(check_hlds__format_call, format_call_site);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__condense_2_0,
		check_hlds__format_call__format_call_traverse_disj_13_0_i3);
MR_def_label(check_hlds__format_call__format_call_traverse_disj_13_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		check_hlds__format_call__format_call_traverse_disj_13_0_i4);
MR_def_label(check_hlds__format_call__format_call_traverse_disj_13_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__set_tree234__union_list_1_0,
		check_hlds__format_call__format_call_traverse_disj_13_0_i6);
MR_def_label(check_hlds__format_call__format_call_traverse_disj_13_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(6);
	}
	MR_np_call_localret_ent(set_tree234__union_3_0,
		check_hlds__format_call__format_call_traverse_disj_13_0_i7);
MR_def_label(check_hlds__format_call__format_call_traverse_disj_13_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_tempr1;
	MR_decr_sp_and_return(8);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__set_tree234__init_0_0);

MR_BEGIN_MODULE(check_hlds__format_call_module9)
	MR_init_entry1(check_hlds__format_call__format_call_traverse_disj_arms_11_0);
	MR_init_label5(check_hlds__format_call__format_call_traverse_disj_arms_11_0,18,5,6,7,8)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'format_call_traverse_disj_arms'/11 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__format_call__format_call_traverse_disj_arms_11_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(check_hlds__format_call__format_call_traverse_disj_arms_11_0_i18);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r4;
	MR_r3 = MR_r5;
	MR_r4 = MR_r6;
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(check_hlds__format_call__format_call_traverse_disj_arms_11_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(6) = MR_ctfield(1, MR_tempr1, 0);
	MR_sv(7) = MR_ctfield(1, MR_tempr1, 1);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,0);
	}
	MR_np_call_localret_ent(fn__set_tree234__init_0_0,
		check_hlds__format_call__format_call_traverse_disj_arms_11_0_i5);
MR_def_label(check_hlds__format_call__format_call_traverse_disj_arms_11_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(6);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(5);
	MR_r7 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__format_call__format_call_traverse_goal_13_0,
		check_hlds__format_call__format_call_traverse_disj_arms_11_0_i6);
MR_def_label(check_hlds__format_call__format_call_traverse_disj_arms_11_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r2;
	MR_sv(4) = MR_r6;
	MR_sv(5) = MR_r3;
	MR_sv(6) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__format_call, conj_id);
	MR_r2 = MR_r1;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(2);
	}
	MR_np_call_localret_ent(svmap__det_insert_4_0,
		check_hlds__format_call__format_call_traverse_disj_arms_11_0_i7);
MR_def_label(check_hlds__format_call__format_call_traverse_disj_arms_11_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(6);
	MR_r6 = MR_tempr1;
	}
	MR_np_localcall_lab(check_hlds__format_call__format_call_traverse_disj_arms_11_0,
		check_hlds__format_call__format_call_traverse_disj_arms_11_0_i8);
MR_def_label(check_hlds__format_call__format_call_traverse_disj_arms_11_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr2, 1) = MR_r5;
	MR_r1 = MR_tempr1;
	MR_r5 = MR_tempr2;
	MR_decr_sp_and_return(8);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(set_tree234__contains_2_0);
MR_decl_entry(set_tree234__remove_3_0);
MR_decl_entry(fn__hlds__hlds_goal__true_goal_0_0);
MR_decl_entry(fn__hlds__hlds_goal__goal_info_get_nonlocals_1_0);
MR_decl_entry(fn__set__to_sorted_list_1_0);
MR_decl_entry(fn__set_tree234__sorted_list_to_set_1_0);
MR_decl_entry(set_tree234__difference_3_0);
MR_decl_entry(svmap__remove_4_0);
MR_decl_entry(fn__set_tree234__intersect_list_1_0);
MR_decl_entry(set_tree234__intersect_3_0);

MR_BEGIN_MODULE(check_hlds__format_call_module10)
	MR_init_entry1(check_hlds__format_call__opt_format_call_sites_in_goal_8_0);
	MR_init_label8(check_hlds__format_call__opt_format_call_sites_in_goal_8_0,86,92,95,97,87,88,98,100)
	MR_init_label8(check_hlds__format_call__opt_format_call_sites_in_goal_8_0,101,102,34,35,37,40,36,41)
	MR_init_label8(check_hlds__format_call__opt_format_call_sites_in_goal_8_0,43,44,45,3,4,6,7,8)
	MR_init_label8(check_hlds__format_call__opt_format_call_sites_in_goal_8_0,9,108,10,11,14,15,17,18)
	MR_init_label8(check_hlds__format_call__opt_format_call_sites_in_goal_8_0,21,22,23,24,26,27,30,31)
	MR_init_label8(check_hlds__format_call__opt_format_call_sites_in_goal_8_0,48,49,52,56,73,69,70,58)
	MR_init_label8(check_hlds__format_call__opt_format_call_sites_in_goal_8_0,59,60,63,65,79,80,82,83)
	MR_init_label1(check_hlds__format_call__opt_format_call_sites_in_goal_8_0,2)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'opt_format_call_sites_in_goal'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__format_call__opt_format_call_sites_in_goal_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
	MR_r5 = MR_ctfield(0, MR_r1, 0);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r5),
		MR_LABEL_AP(check_hlds__format_call__opt_format_call_sites_in_goal_8_0_i86) MR_AND
		MR_LABEL_AP(check_hlds__format_call__opt_format_call_sites_in_goal_8_0_i34) MR_AND
		MR_LABEL_AP(check_hlds__format_call__opt_format_call_sites_in_goal_8_0_i3) MR_AND
		MR_LABEL_AP(check_hlds__format_call__opt_format_call_sites_in_goal_8_0_i108));
MR_def_label(check_hlds__format_call__opt_format_call_sites_in_goal_8_0,86)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_r1;
	MR_sv(2) = MR_ctfield(0, MR_tempr3, 1);
	MR_tempr1 = MR_ctfield(0, MR_r5, 3);
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(check_hlds__format_call__opt_format_call_sites_in_goal_8_0_i88);
	}
	MR_tempr2 = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(1) = MR_tempr3;
	MR_sv(3) = MR_tempr2;
	MR_sv(4) = MR_r2;
	MR_tempr4 = MR_r3;
	MR_sv(8) = MR_tempr4;
	MR_sv(9) = MR_r4;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_r2 = MR_tempr4;
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(set_tree234__contains_2_0,
		check_hlds__format_call__opt_format_call_sites_in_goal_8_0_i92);
MR_def_label(check_hlds__format_call__opt_format_call_sites_in_goal_8_0,92)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(check_hlds__format_call__opt_format_call_sites_in_goal_8_0_i87);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(9);
	MR_np_call_localret_ent(set_tree234__remove_3_0,
		check_hlds__format_call__opt_format_call_sites_in_goal_8_0_i95);
MR_def_label(check_hlds__format_call__opt_format_call_sites_in_goal_8_0,95)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__format_call__opt_format_call_sites_in_goal_8_0_i87);
	}
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(fn__hlds__hlds_goal__true_goal_0_0,
		check_hlds__format_call__opt_format_call_sites_in_goal_8_0_i97);
MR_def_label(check_hlds__format_call__opt_format_call_sites_in_goal_8_0,97)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_sv(1);
	MR_decr_sp_and_return(13);
MR_def_label(check_hlds__format_call__opt_format_call_sites_in_goal_8_0,87)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_sv(9);
MR_def_label(check_hlds__format_call__opt_format_call_sites_in_goal_8_0,88)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_sv(8) = MR_r3;
	MR_sv(9) = MR_r4;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_nonlocals_1_0,
		check_hlds__format_call__opt_format_call_sites_in_goal_8_0_i98);
MR_def_label(check_hlds__format_call__opt_format_call_sites_in_goal_8_0,98)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(0,2,0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__set__to_sorted_list_1_0,
		check_hlds__format_call__opt_format_call_sites_in_goal_8_0_i100);
MR_def_label(check_hlds__format_call__opt_format_call_sites_in_goal_8_0,100)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__set_tree234__sorted_list_to_set_1_0,
		check_hlds__format_call__opt_format_call_sites_in_goal_8_0_i101);
MR_def_label(check_hlds__format_call__opt_format_call_sites_in_goal_8_0,101)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(set_tree234__union_3_0,
		check_hlds__format_call__opt_format_call_sites_in_goal_8_0_i102);
MR_def_label(check_hlds__format_call__opt_format_call_sites_in_goal_8_0,102)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(9);
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(set_tree234__difference_3_0,
		check_hlds__format_call__opt_format_call_sites_in_goal_8_0_i9);
MR_def_label(check_hlds__format_call__opt_format_call_sites_in_goal_8_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(4) = MR_r2;
	MR_sv(8) = MR_r3;
	MR_sv(9) = MR_r4;
	MR_r1 = MR_sv(2);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_goal_path_1_0,
		check_hlds__format_call__opt_format_call_sites_in_goal_8_0_i35);
MR_def_label(check_hlds__format_call__opt_format_call_sites_in_goal_8_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__program_representation, goal_path);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(check_hlds__format_call, fc_opt_goal_info);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(4);
	}
	MR_np_call_localret_ent(svmap__remove_4_0,
		check_hlds__format_call__opt_format_call_sites_in_goal_8_0_i37);
MR_def_label(check_hlds__format_call__opt_format_call_sites_in_goal_8_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__format_call__opt_format_call_sites_in_goal_8_0_i36);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r2;
	MR_sv(1) = MR_ctfield(0, MR_tempr2, 0);
	MR_sv(10) = MR_r3;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_tempr1 = MR_tempr2;
	MR_r2 = MR_sv(9);
	MR_r3 = MR_ctfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(set_tree234__union_3_0,
		check_hlds__format_call__opt_format_call_sites_in_goal_8_0_i40);
MR_def_label(check_hlds__format_call__opt_format_call_sites_in_goal_8_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_tempr1;
	MR_decr_sp_and_return(13);
	}
MR_def_label(check_hlds__format_call__opt_format_call_sites_in_goal_8_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_nonlocals_1_0,
		check_hlds__format_call__opt_format_call_sites_in_goal_8_0_i41);
MR_def_label(check_hlds__format_call__opt_format_call_sites_in_goal_8_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(0,2,0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__set__to_sorted_list_1_0,
		check_hlds__format_call__opt_format_call_sites_in_goal_8_0_i43);
MR_def_label(check_hlds__format_call__opt_format_call_sites_in_goal_8_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__set_tree234__sorted_list_to_set_1_0,
		check_hlds__format_call__opt_format_call_sites_in_goal_8_0_i44);
MR_def_label(check_hlds__format_call__opt_format_call_sites_in_goal_8_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(set_tree234__union_3_0,
		check_hlds__format_call__opt_format_call_sites_in_goal_8_0_i45);
MR_def_label(check_hlds__format_call__opt_format_call_sites_in_goal_8_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(9);
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(set_tree234__difference_3_0,
		check_hlds__format_call__opt_format_call_sites_in_goal_8_0_i9);
MR_def_label(check_hlds__format_call__opt_format_call_sites_in_goal_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_sv(8) = MR_r3;
	MR_sv(9) = MR_r4;
	MR_r1 = MR_ctfield(0, MR_r1, 1);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_nonlocals_1_0,
		check_hlds__format_call__opt_format_call_sites_in_goal_8_0_i4);
MR_def_label(check_hlds__format_call__opt_format_call_sites_in_goal_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(0,2,0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__set__to_sorted_list_1_0,
		check_hlds__format_call__opt_format_call_sites_in_goal_8_0_i6);
MR_def_label(check_hlds__format_call__opt_format_call_sites_in_goal_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__set_tree234__sorted_list_to_set_1_0,
		check_hlds__format_call__opt_format_call_sites_in_goal_8_0_i7);
MR_def_label(check_hlds__format_call__opt_format_call_sites_in_goal_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(set_tree234__union_3_0,
		check_hlds__format_call__opt_format_call_sites_in_goal_8_0_i8);
MR_def_label(check_hlds__format_call__opt_format_call_sites_in_goal_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(9);
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(set_tree234__difference_3_0,
		check_hlds__format_call__opt_format_call_sites_in_goal_8_0_i9);
MR_def_label(check_hlds__format_call__opt_format_call_sites_in_goal_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(9);
	MR_r4 = MR_tempr1;
	MR_decr_sp_and_return(13);
	}
MR_def_label(check_hlds__format_call__opt_format_call_sites_in_goal_8_0,108)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r5, 0),
		MR_LABEL_AP(check_hlds__format_call__opt_format_call_sites_in_goal_8_0_i3) MR_AND
		MR_LABEL_AP(check_hlds__format_call__opt_format_call_sites_in_goal_8_0_i10) MR_AND
		MR_LABEL_AP(check_hlds__format_call__opt_format_call_sites_in_goal_8_0_i14) MR_AND
		MR_LABEL_AP(check_hlds__format_call__opt_format_call_sites_in_goal_8_0_i79) MR_AND
		MR_LABEL_AP(check_hlds__format_call__opt_format_call_sites_in_goal_8_0_i30) MR_AND
		MR_LABEL_AP(check_hlds__format_call__opt_format_call_sites_in_goal_8_0_i48) MR_AND
		MR_LABEL_AP(check_hlds__format_call__opt_format_call_sites_in_goal_8_0_i21) MR_AND
		MR_LABEL_AP(check_hlds__format_call__opt_format_call_sites_in_goal_8_0_i56));
MR_def_label(check_hlds__format_call__opt_format_call_sites_in_goal_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_ctfield(0, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(1) = MR_ctfield(3, MR_tempr1, 1);
	MR_r1 = MR_ctfield(3, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(check_hlds__format_call__opt_format_call_sites_in_conj_8_0,
		check_hlds__format_call__opt_format_call_sites_in_goal_8_0_i11);
MR_def_label(check_hlds__format_call__opt_format_call_sites_in_goal_8_0,11)
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
	MR_tfield(0, MR_tempr2, 1) = MR_sv(2);
	MR_decr_sp_and_return(13);
	}
MR_def_label(check_hlds__format_call__opt_format_call_sites_in_goal_8_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_ctfield(0, MR_r1, 1);
	MR_r1 = MR_ctfield(3, MR_r5, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = MR_tempr1;
	MR_r6 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(check_hlds__format_call__opt_format_call_sites_in_disj_10_0,
		check_hlds__format_call__opt_format_call_sites_in_goal_8_0_i15);
MR_def_label(check_hlds__format_call__opt_format_call_sites_in_goal_8_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(3) = MR_r4;
	MR_sv(10) = MR_r2;
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_r1 = MR_sv(4);
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(fn__set_tree234__union_list_1_0,
		check_hlds__format_call__opt_format_call_sites_in_goal_8_0_i17);
MR_def_label(check_hlds__format_call__opt_format_call_sites_in_goal_8_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(fn__set_tree234__intersect_list_1_0,
		check_hlds__format_call__opt_format_call_sites_in_goal_8_0_i18);
MR_def_label(check_hlds__format_call__opt_format_call_sites_in_goal_8_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(2);
	MR_tempr1 = MR_r1;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(9);
	MR_r4 = MR_tempr1;
	MR_decr_sp_and_return(13);
	}
MR_def_label(check_hlds__format_call__opt_format_call_sites_in_goal_8_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_ctfield(0, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(1) = MR_ctfield(3, MR_tempr1, 1);
	MR_sv(3) = MR_ctfield(3, MR_tempr1, 2);
	MR_sv(4) = MR_ctfield(3, MR_tempr1, 3);
	MR_sv(8) = MR_r3;
	MR_sv(9) = MR_r4;
	MR_r1 = MR_ctfield(3, MR_tempr1, 4);
	}
	MR_np_localcall_lab(check_hlds__format_call__opt_format_call_sites_in_goal_8_0,
		check_hlds__format_call__opt_format_call_sites_in_goal_8_0_i22);
MR_def_label(check_hlds__format_call__opt_format_call_sites_in_goal_8_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_r3;
	MR_sv(6) = MR_r4;
	MR_r1 = MR_tempr1;
	MR_r3 = MR_sv(8);
	MR_r4 = MR_sv(9);
	}
	MR_np_localcall_lab(check_hlds__format_call__opt_format_call_sites_in_goal_8_0,
		check_hlds__format_call__opt_format_call_sites_in_goal_8_0_i23);
MR_def_label(check_hlds__format_call__opt_format_call_sites_in_goal_8_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_localcall_lab(check_hlds__format_call__opt_format_call_sites_in_goal_8_0,
		check_hlds__format_call__opt_format_call_sites_in_goal_8_0_i24);
MR_def_label(check_hlds__format_call__opt_format_call_sites_in_goal_8_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_sv(7) = MR_r4;
	MR_sv(10) = MR_r2;
	MR_sv(8) = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_r1 = MR_sv(8);
	MR_r2 = MR_r3;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(set_tree234__union_3_0,
		check_hlds__format_call__opt_format_call_sites_in_goal_8_0_i26);
MR_def_label(check_hlds__format_call__opt_format_call_sites_in_goal_8_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(set_tree234__intersect_3_0,
		check_hlds__format_call__opt_format_call_sites_in_goal_8_0_i27);
MR_def_label(check_hlds__format_call__opt_format_call_sites_in_goal_8_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 5);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(5);
	MR_tfield(3, MR_tempr1, 3) = MR_sv(3);
	MR_tfield(3, MR_tempr1, 4) = MR_sv(4);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(2);
	MR_tempr3 = MR_r1;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(9);
	MR_r4 = MR_tempr3;
	MR_decr_sp_and_return(13);
	}
MR_def_label(check_hlds__format_call__opt_format_call_sites_in_goal_8_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_ctfield(0, MR_r1, 1);
	MR_r1 = MR_ctfield(3, MR_r5, 1);
	MR_np_localcall_lab(check_hlds__format_call__opt_format_call_sites_in_goal_8_0,
		check_hlds__format_call__opt_format_call_sites_in_goal_8_0_i31);
MR_def_label(check_hlds__format_call__opt_format_call_sites_in_goal_8_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_r1 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(2);
	MR_decr_sp_and_return(13);
	}
MR_def_label(check_hlds__format_call__opt_format_call_sites_in_goal_8_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r5;
	MR_r6 = MR_ctfield(3, MR_tempr3, 2);
	MR_tempr1 = MR_ctfield(3, MR_tempr3, 1);
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_ctfield(0, MR_r1, 1);
	if (MR_RTAGS_TESTR(MR_tempr1,3,2)) {
		MR_GOTO_LAB(check_hlds__format_call__opt_format_call_sites_in_goal_8_0_i49);
	}
	MR_tempr2 = MR_ctfield(3, MR_tempr1, 2);
	if (MR_INT_EQ(MR_tempr2,0)) {
		MR_GOTO_LAB(check_hlds__format_call__opt_format_call_sites_in_goal_8_0_i2);
	}
	}
MR_def_label(check_hlds__format_call__opt_format_call_sites_in_goal_8_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r6;
	MR_np_localcall_lab(check_hlds__format_call__opt_format_call_sites_in_goal_8_0,
		check_hlds__format_call__opt_format_call_sites_in_goal_8_0_i52);
MR_def_label(check_hlds__format_call__opt_format_call_sites_in_goal_8_0,52)
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
	MR_tfield(0, MR_tempr2, 1) = MR_sv(2);
	MR_decr_sp_and_return(13);
	}
MR_def_label(check_hlds__format_call__opt_format_call_sites_in_goal_8_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(3, MR_r5, 1);
	MR_r6 = MR_tempr1;
	MR_tempr2 = MR_tag(MR_tempr1);
	if ((MR_tempr2 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(check_hlds__format_call__opt_format_call_sites_in_goal_8_0_i58);
	}
	if ((MR_tempr2 == MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(check_hlds__format_call__opt_format_call_sites_in_goal_8_0_i69);
	}
	MR_sv(2) = MR_ctfield(0, MR_r1, 1);
	MR_sv(1) = MR_ctfield(2, MR_tempr1, 0);
	MR_sv(3) = MR_ctfield(2, MR_tempr1, 1);
	MR_r1 = MR_ctfield(2, MR_tempr1, 2);
	}
	MR_np_localcall_lab(check_hlds__format_call__opt_format_call_sites_in_goal_8_0,
		check_hlds__format_call__opt_format_call_sites_in_goal_8_0_i73);
MR_def_label(check_hlds__format_call__opt_format_call_sites_in_goal_8_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 3);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(2, MR_tempr1, 1) = MR_sv(3);
	MR_tfield(2, MR_tempr1, 2) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_r1 = MR_tempr2;
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 7;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(2);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(13);
	}
MR_def_label(check_hlds__format_call__opt_format_call_sites_in_goal_8_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__check_hlds__format_call__this_file_0_0,
		check_hlds__format_call__opt_format_call_sites_in_goal_8_0_i70);
MR_def_label(check_hlds__format_call__opt_format_call_sites_in_goal_8_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("opt_format_call_sites_in_goal: bi_implication", 45);
	MR_succip_word = MR_sv(13);
	MR_decr_sp(13);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(check_hlds__format_call__opt_format_call_sites_in_goal_8_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_ctfield(0, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r6;
	MR_sv(1) = MR_ctfield(1, MR_tempr1, 0);
	MR_sv(3) = MR_ctfield(1, MR_tempr1, 1);
	MR_sv(4) = MR_ctfield(1, MR_tempr1, 2);
	MR_sv(5) = MR_ctfield(1, MR_tempr1, 3);
	MR_sv(6) = MR_ctfield(1, MR_tempr1, 5);
	MR_sv(7) = MR_ctfield(1, MR_tempr1, 6);
	MR_sv(8) = MR_r3;
	MR_sv(9) = MR_r4;
	MR_r1 = MR_ctfield(1, MR_tempr1, 4);
	}
	MR_np_localcall_lab(check_hlds__format_call__opt_format_call_sites_in_goal_8_0,
		check_hlds__format_call__opt_format_call_sites_in_goal_8_0_i59);
MR_def_label(check_hlds__format_call__opt_format_call_sites_in_goal_8_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_tempr2 = MR_sv(8);
	MR_sv(8) = MR_r3;
	MR_tempr3 = MR_sv(9);
	MR_sv(9) = MR_r4;
	MR_r1 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = MR_tempr3;
	MR_r6 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(check_hlds__format_call__opt_format_call_sites_in_disj_10_0,
		check_hlds__format_call__opt_format_call_sites_in_goal_8_0_i60);
MR_def_label(check_hlds__format_call__opt_format_call_sites_in_goal_8_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(8);
	MR_tfield(1, MR_tempr1, 1) = MR_r3;
	MR_sv(8) = MR_r1;
	MR_sv(10) = MR_r2;
	MR_sv(11) = MR_r4;
	MR_sv(12) = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_r1 = MR_sv(12);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__set_tree234__union_list_1_0,
		check_hlds__format_call__opt_format_call_sites_in_goal_8_0_i63);
MR_def_label(check_hlds__format_call__opt_format_call_sites_in_goal_8_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(9);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(11);
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(12);
	}
	MR_np_call_localret_ent(fn__set_tree234__intersect_list_1_0,
		check_hlds__format_call__opt_format_call_sites_in_goal_8_0_i65);
MR_def_label(check_hlds__format_call__opt_format_call_sites_in_goal_8_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 7);
	MR_r2 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 2) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 3) = MR_sv(5);
	MR_tfield(1, MR_tempr1, 4) = MR_sv(6);
	MR_tfield(1, MR_tempr1, 5) = MR_sv(8);
	MR_tfield(1, MR_tempr1, 6) = MR_sv(7);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_r3 = MR_tempr2;
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 7;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_r2 = MR_tempr3;
	MR_tfield(0, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(0, MR_tempr3, 1) = MR_sv(2);
	MR_tempr4 = MR_r1;
	MR_r1 = MR_tempr3;
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(9);
	MR_r4 = MR_tempr4;
	MR_decr_sp_and_return(13);
	}
MR_def_label(check_hlds__format_call__opt_format_call_sites_in_goal_8_0,79)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_ctfield(0, MR_r1, 1);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r5;
	MR_sv(1) = MR_ctfield(3, MR_tempr2, 1);
	MR_sv(3) = MR_ctfield(3, MR_tempr2, 2);
	MR_r1 = MR_ctfield(3, MR_tempr2, 3);
	MR_tempr1 = MR_r4;
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = MR_tempr1;
	MR_r6 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(check_hlds__format_call__opt_format_call_sites_in_switch_10_0,
		check_hlds__format_call__opt_format_call_sites_in_goal_8_0_i80);
MR_def_label(check_hlds__format_call__opt_format_call_sites_in_goal_8_0,80)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_sv(10) = MR_r2;
	MR_sv(5) = MR_r4;
	MR_sv(6) = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_r1 = MR_sv(6);
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(fn__set_tree234__union_list_1_0,
		check_hlds__format_call__opt_format_call_sites_in_goal_8_0_i82);
MR_def_label(check_hlds__format_call__opt_format_call_sites_in_goal_8_0,82)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(fn__set_tree234__intersect_list_1_0,
		check_hlds__format_call__opt_format_call_sites_in_goal_8_0_i83);
MR_def_label(check_hlds__format_call__opt_format_call_sites_in_goal_8_0,83)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(3);
	MR_tfield(3, MR_tempr1, 3) = MR_sv(4);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(2);
	MR_tempr1 = MR_r1;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(9);
	MR_r4 = MR_tempr1;
	}
MR_def_label(check_hlds__format_call__opt_format_call_sites_in_goal_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(13);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__format_call_module11)
	MR_init_entry1(check_hlds__format_call__opt_format_call_sites_in_conj_8_0);
	MR_init_label3(check_hlds__format_call__opt_format_call_sites_in_conj_8_0,14,4,5)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'opt_format_call_sites_in_conj'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__format_call__opt_format_call_sites_in_conj_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__format_call__opt_format_call_sites_in_conj_8_0_i14);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(check_hlds__format_call__opt_format_call_sites_in_conj_8_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(1, MR_r1, 0);
	MR_r1 = MR_ctfield(1, MR_r1, 1);
	MR_np_localcall_lab(check_hlds__format_call__opt_format_call_sites_in_conj_8_0,
		check_hlds__format_call__opt_format_call_sites_in_conj_8_0_i4);
MR_def_label(check_hlds__format_call__opt_format_call_sites_in_conj_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__format_call__opt_format_call_sites_in_goal_8_0,
		check_hlds__format_call__opt_format_call_sites_in_conj_8_0_i5);
MR_def_label(check_hlds__format_call__opt_format_call_sites_in_conj_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(1);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__format_call_module12)
	MR_init_entry1(check_hlds__format_call__opt_format_call_sites_in_disj_10_0);
	MR_init_label3(check_hlds__format_call__opt_format_call_sites_in_disj_10_0,16,4,7)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'opt_format_call_sites_in_disj'/10 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__format_call__opt_format_call_sites_in_disj_10_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__format_call__opt_format_call_sites_in_disj_10_0_i16);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_r4;
	MR_r4 = MR_r6;
	MR_proceed();
MR_def_label(check_hlds__format_call__opt_format_call_sites_in_disj_10_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_r6;
	MR_sv(5) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__format_call__opt_format_call_sites_in_goal_8_0,
		check_hlds__format_call__opt_format_call_sites_in_disj_10_0_i4);
MR_def_label(check_hlds__format_call__opt_format_call_sites_in_disj_10_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r3;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r6 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_r4;
	MR_tfield(1, MR_tempr2, 1) = MR_sv(4);
	MR_tempr3 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r3 = MR_tempr3;
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(3);
	}
	MR_np_localcall_lab(check_hlds__format_call__opt_format_call_sites_in_disj_10_0,
		check_hlds__format_call__opt_format_call_sites_in_disj_10_0_i7);
MR_def_label(check_hlds__format_call__opt_format_call_sites_in_disj_10_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__format_call_module13)
	MR_init_entry1(check_hlds__format_call__opt_format_call_sites_in_switch_10_0);
	MR_init_label3(check_hlds__format_call__opt_format_call_sites_in_switch_10_0,17,4,8)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'opt_format_call_sites_in_switch'/10 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__format_call__opt_format_call_sites_in_switch_10_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__format_call__opt_format_call_sites_in_switch_10_0_i17);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_r4;
	MR_r4 = MR_r6;
	MR_proceed();
MR_def_label(check_hlds__format_call__opt_format_call_sites_in_switch_10_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr2 = MR_r5;
	MR_sv(3) = MR_tempr2;
	MR_sv(4) = MR_r6;
	MR_tempr3 = MR_r1;
	MR_sv(5) = MR_ctfield(1, MR_tempr3, 1);
	MR_tempr1 = MR_ctfield(1, MR_tempr3, 0);
	MR_sv(6) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(7) = MR_ctfield(0, MR_tempr1, 1);
	MR_r1 = MR_ctfield(0, MR_tempr1, 2);
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(check_hlds__format_call__opt_format_call_sites_in_goal_8_0,
		check_hlds__format_call__opt_format_call_sites_in_switch_10_0_i4);
MR_def_label(check_hlds__format_call__opt_format_call_sites_in_switch_10_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r3;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r6 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_r4;
	MR_tfield(1, MR_tempr2, 1) = MR_sv(4);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr3, 0) = MR_sv(6);
	MR_tfield(0, MR_tempr3, 1) = MR_sv(7);
	MR_tfield(0, MR_tempr3, 2) = MR_r1;
	MR_tempr4 = MR_sv(1);
	MR_sv(1) = MR_tempr3;
	MR_r1 = MR_sv(5);
	MR_r3 = MR_tempr4;
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(3);
	}
	MR_np_localcall_lab(check_hlds__format_call__opt_format_call_sites_in_switch_10_0,
		check_hlds__format_call__opt_format_call_sites_in_switch_10_0_i8);
MR_def_label(check_hlds__format_call__opt_format_call_sites_in_switch_10_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(8);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__init_1_0);
MR_decl_entry(counter__init_2_0);
MR_decl_entry(check_hlds__goal_path__fill_goal_path_slots_in_goal_4_0);
MR_decl_entry(hlds__hlds_module__module_info_get_globals_2_0);
MR_decl_entry(libs__globals__lookup_bool_option_3_0);
MR_decl_entry(list__foldl4_10_0);
MR_decl_entry(map__is_empty_1_0);
MR_decl_entry(fn__hlds__hlds_goal__goal_info_get_instmap_delta_1_0);
MR_decl_entry(hlds__instmap__instmap_delta_changed_vars_2_0);

MR_BEGIN_MODULE(check_hlds__format_call_module14)
	MR_init_entry1(check_hlds__format_call__analyze_and_optimize_format_calls_8_0);
	MR_init_label8(check_hlds__format_call__analyze_and_optimize_format_calls_8_0,2,3,4,5,7,8,9,10)
	MR_init_label8(check_hlds__format_call__analyze_and_optimize_format_calls_8_0,12,17,20,18,22,23,24,25)
	MR_init_label2(check_hlds__format_call__analyze_and_optimize_format_calls_8_0,26,27)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'analyze_and_optimize_format_calls'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__format_call__analyze_and_optimize_format_calls_8_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(6) = MR_r3;
	MR_sv(7) = MR_r4;
	MR_sv(4) = (MR_Word) MR_CTOR0_ADDR(check_hlds__format_call, conj_id);
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(check_hlds__format_call, conj_map);
	MR_np_call_localret_ent(map__init_1_0,
		check_hlds__format_call__analyze_and_optimize_format_calls_8_0_i2);
MR_def_label(check_hlds__format_call__analyze_and_optimize_format_calls_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_np_call_localret_ent(counter__init_2_0,
		check_hlds__format_call__analyze_and_optimize_format_calls_8_0_i3);
MR_def_label(check_hlds__format_call__analyze_and_optimize_format_calls_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(1);
	}
	MR_np_call_localret_ent(check_hlds__goal_path__fill_goal_path_slots_in_goal_4_0,
		check_hlds__format_call__analyze_and_optimize_format_calls_8_0_i4);
MR_def_label(check_hlds__format_call__analyze_and_optimize_format_calls_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__format_call, conj_id);
	MR_r2 = MR_r1;
	MR_np_call_localret_ent(fn__map__init_0_0,
		check_hlds__format_call__analyze_and_optimize_format_calls_8_0_i5);
MR_def_label(check_hlds__format_call__analyze_and_optimize_format_calls_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_sv(8) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_sv(9) = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(fn__set_tree234__init_0_0,
		check_hlds__format_call__analyze_and_optimize_format_calls_8_0_i7);
MR_def_label(check_hlds__format_call__analyze_and_optimize_format_calls_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_sv(5);
	MR_r7 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__format_call__format_call_traverse_goal_13_0,
		check_hlds__format_call__analyze_and_optimize_format_calls_8_0_i8);
MR_def_label(check_hlds__format_call__analyze_and_optimize_format_calls_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		check_hlds__format_call__analyze_and_optimize_format_calls_8_0_i9);
MR_def_label(check_hlds__format_call__analyze_and_optimize_format_calls_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 337;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		check_hlds__format_call__analyze_and_optimize_format_calls_8_0_i10);
MR_def_label(check_hlds__format_call__analyze_and_optimize_format_calls_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 7);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(8,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(check_hlds__format_call__check_format_call_site_13_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 4;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_r1;
	MR_tfield(0, MR_tempr1, 5) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 6) = MR_sv(5);
	MR_sv(1) = MR_tempr1;
	MR_sv(3) = (MR_Word) MR_CTOR0_ADDR(mdbcomp__program_representation, goal_path);
	MR_sv(5) = (MR_Word) MR_CTOR0_ADDR(check_hlds__format_call, fc_opt_goal_info);
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(5);
	}
	MR_np_call_localret_ent(fn__map__init_0_0,
		check_hlds__format_call__analyze_and_optimize_format_calls_8_0_i12);
MR_def_label(check_hlds__format_call__analyze_and_optimize_format_calls_8_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__format_call, format_call_site);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,7,4);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,2,4);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,2,5);
	MR_r5 = (MR_Word) MR_TAG_COMMON(0,7,5);
	MR_r6 = MR_sv(1);
	MR_r7 = MR_sv(2);
	MR_r8 = MR_tempr1;
	MR_r9 = (MR_Word) MR_tbmkword(0, 0);
	MR_r10 = MR_sv(6);
	MR_r11 = MR_sv(7);
	}
	MR_np_call_localret_ent(list__foldl4_10_0,
		check_hlds__format_call__analyze_and_optimize_format_calls_8_0_i17);
MR_def_label(check_hlds__format_call__analyze_and_optimize_format_calls_8_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r1;
	MR_sv(5) = MR_r3;
	MR_sv(6) = MR_r4;
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(check_hlds__format_call, fc_opt_goal_info);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(map__is_empty_1_0,
		check_hlds__format_call__analyze_and_optimize_format_calls_8_0_i20);
MR_def_label(check_hlds__format_call__analyze_and_optimize_format_calls_8_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__format_call__analyze_and_optimize_format_calls_8_0_i18);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(6);
	MR_decr_sp_and_return(10);
MR_def_label(check_hlds__format_call__analyze_and_optimize_format_calls_8_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_sv(1);
	MR_r1 = MR_sv(2);
	MR_tempr2 = MR_sv(5);
	MR_tempr3 = MR_sv(6);
	MR_r1 = MR_ctfield(0, MR_sv(4), 1);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_instmap_delta_1_0,
		check_hlds__format_call__analyze_and_optimize_format_calls_8_0_i22);
MR_def_label(check_hlds__format_call__analyze_and_optimize_format_calls_8_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__instmap__instmap_delta_changed_vars_2_0,
		check_hlds__format_call__analyze_and_optimize_format_calls_8_0_i23);
MR_def_label(check_hlds__format_call__analyze_and_optimize_format_calls_8_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(fn__set_tree234__init_0_0,
		check_hlds__format_call__analyze_and_optimize_format_calls_8_0_i24);
MR_def_label(check_hlds__format_call__analyze_and_optimize_format_calls_8_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__set__to_sorted_list_1_0,
		check_hlds__format_call__analyze_and_optimize_format_calls_8_0_i25);
MR_def_label(check_hlds__format_call__analyze_and_optimize_format_calls_8_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__set_tree234__sorted_list_to_set_1_0,
		check_hlds__format_call__analyze_and_optimize_format_calls_8_0_i26);
MR_def_label(check_hlds__format_call__analyze_and_optimize_format_calls_8_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(3);
	}
	MR_np_call_localret_ent(check_hlds__format_call__opt_format_call_sites_in_goal_8_0,
		check_hlds__format_call__analyze_and_optimize_format_calls_8_0_i27);
MR_def_label(check_hlds__format_call__analyze_and_optimize_format_calls_8_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(6);
	MR_decr_sp_and_return(10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_character_0;
MR_decl_entry(list__reverse_2_0);
MR_decl_entry(string__from_char_list_2_0);

MR_BEGIN_MODULE(check_hlds__format_call_module15)
	MR_init_entry1(check_hlds__format_call__interpret_format_string_4_0);
	MR_init_label8(check_hlds__format_call__interpret_format_string_4_0,105,6,7,8,3,14,21,22)
	MR_init_label8(check_hlds__format_call__interpret_format_string_4_0,23,20,27,29,33,36,11,1)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'interpret_format_string'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__format_call__interpret_format_string_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(check_hlds__format_call__interpret_format_string_4_0,105)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__format_call__interpret_format_string_4_0_i3);
	}
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(check_hlds__format_call__interpret_format_string_4_0_i1);
	}
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(check_hlds__format_call__interpret_format_string_4_0_i6);
	}
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(5);
MR_def_label(check_hlds__format_call__interpret_format_string_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CHAR_CTOR_ADDR;
	MR_np_call_localret_ent(list__reverse_2_0,
		check_hlds__format_call__interpret_format_string_4_0_i7);
MR_def_label(check_hlds__format_call__interpret_format_string_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(string__from_char_list_2_0,
		check_hlds__format_call__interpret_format_string_4_0_i8);
MR_def_label(check_hlds__format_call__interpret_format_string_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(5);
	}
MR_def_label(check_hlds__format_call__interpret_format_string_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr4 = MR_r1;
	MR_tempr1 = MR_ctfield(1, MR_tempr4, 1);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_ctfield(1, MR_tempr4, 0);
	if (MR_INT_NE(MR_r5,37)) {
		MR_GOTO_LAB(check_hlds__format_call__interpret_format_string_4_0_i11);
	}
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(check_hlds__format_call__interpret_format_string_4_0_i1);
	}
	MR_r1 = MR_ctfield(1, MR_tempr1, 1);
	MR_tempr2 = MR_ctfield(1, MR_tempr1, 0);
	MR_sv(1) = MR_tempr2;
	if (MR_INT_NE(MR_tempr2,37)) {
		MR_GOTO_LAB(check_hlds__format_call__interpret_format_string_4_0_i14);
	}
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = MR_r2;
	MR_r2 = MR_tempr3;
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(check_hlds__format_call__interpret_format_string_4_0_i105);
	}
MR_def_label(check_hlds__format_call__interpret_format_string_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO_LAB(check_hlds__format_call__interpret_format_string_4_0_i1);
	}
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(check_hlds__format_call__interpret_format_string_4_0_i21);
	}
	MR_sv(3) = MR_ctfield(1, MR_r3, 0);
	MR_r3 = MR_ctfield(1, MR_r3, 1);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_GOTO_LAB(check_hlds__format_call__interpret_format_string_4_0_i20);
MR_def_label(check_hlds__format_call__interpret_format_string_4_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_ctfield(1, MR_tempr1, 0);
	MR_sv(4) = MR_ctfield(1, MR_tempr1, 1);
	MR_r1 = (MR_Word) MR_CHAR_CTOR_ADDR;
	}
	MR_np_call_localret_ent(list__reverse_2_0,
		check_hlds__format_call__interpret_format_string_4_0_i22);
MR_def_label(check_hlds__format_call__interpret_format_string_4_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(string__from_char_list_2_0,
		check_hlds__format_call__interpret_format_string_4_0_i23);
MR_def_label(check_hlds__format_call__interpret_format_string_4_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_r2 = MR_tempr2;
	}
MR_def_label(check_hlds__format_call__interpret_format_string_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),99)) {
		MR_GOTO_LAB(check_hlds__format_call__interpret_format_string_4_0_i27);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_sv(2) = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(3);
	MR_sv(1) = MR_r2;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_localcall_lab(check_hlds__format_call__interpret_format_string_4_0,
		check_hlds__format_call__interpret_format_string_4_0_i33);
MR_def_label(check_hlds__format_call__interpret_format_string_4_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),100)) {
		MR_GOTO_LAB(check_hlds__format_call__interpret_format_string_4_0_i29);
	}
	MR_tag_alloc_heap(MR_sv(2), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(2), 0) = MR_sv(3);
	MR_sv(1) = MR_r2;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_localcall_lab(check_hlds__format_call__interpret_format_string_4_0,
		check_hlds__format_call__interpret_format_string_4_0_i33);
MR_def_label(check_hlds__format_call__interpret_format_string_4_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),115)) {
		MR_GOTO_LAB(check_hlds__format_call__interpret_format_string_4_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_sv(2) = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(3);
	MR_sv(1) = MR_r2;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_localcall_lab(check_hlds__format_call__interpret_format_string_4_0,
		check_hlds__format_call__interpret_format_string_4_0_i33);
MR_def_label(check_hlds__format_call__interpret_format_string_4_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__format_call__interpret_format_string_4_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__format_call, string_component);
	MR_r2 = MR_sv(1);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		check_hlds__format_call__interpret_format_string_4_0_i36);
MR_def_label(check_hlds__format_call__interpret_format_string_4_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(5);
MR_def_label(check_hlds__format_call__interpret_format_string_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r5;
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_r1 = MR_r4;
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(check_hlds__format_call__interpret_format_string_4_0_i105);
	}
MR_def_label(check_hlds__format_call__interpret_format_string_4_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(svvarset__new_var_3_0);
MR_decl_entry(fn__parse_tree__builtin_lib_types__string_type_0_0);
MR_decl_entry(f_115_118_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0);

MR_BEGIN_MODULE(check_hlds__format_call_module16)
	MR_init_entry1(check_hlds__format_call__make_result_var_if_needed_6_0);
	MR_init_label4(check_hlds__format_call__make_result_var_if_needed_6_0,4,5,7,3)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'make_result_var_if_needed'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__format_call__make_result_var_if_needed_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__format_call__make_result_var_if_needed_6_0_i3);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(3) = MR_r3;
	MR_sv(4) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(svvarset__new_var_3_0,
		check_hlds__format_call__make_result_var_if_needed_6_0_i4);
MR_def_label(check_hlds__format_call__make_result_var_if_needed_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(fn__parse_tree__builtin_lib_types__string_type_0_0,
		check_hlds__format_call__make_result_var_if_needed_6_0_i5);
MR_def_label(check_hlds__format_call__make_result_var_if_needed_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_tempr1;
	MR_r6 = MR_sv(3);
	}
	MR_np_call_localret_ent(f_115_118_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		check_hlds__format_call__make_result_var_if_needed_6_0_i7);
MR_def_label(check_hlds__format_call__make_result_var_if_needed_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
MR_def_label(check_hlds__format_call__make_result_var_if_needed_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_goal__make_string_const_construction_3_0);
MR_decl_entry(fn__hlds__instmap__instmap_delta_from_assoc_list_1_0);
MR_decl_entry(fn__term__context_init_0_0);
MR_decl_entry(hlds__goal_util__generate_simple_call_12_0);

MR_BEGIN_MODULE(check_hlds__format_call_module17)
	MR_init_entry1(check_hlds__format_call__represent_component_9_0);
	MR_init_label8(check_hlds__format_call__represent_component_9_0,57,4,58,32,33,39,40,59)
	MR_init_label8(check_hlds__format_call__represent_component_9_0,20,21,27,28,47,60,8,9)
	MR_init_label3(check_hlds__format_call__represent_component_9_0,15,16,17)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'represent_component'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__format_call__represent_component_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r2),
		MR_LABEL_AP(check_hlds__format_call__represent_component_9_0_i57) MR_AND
		MR_LABEL_AP(check_hlds__format_call__represent_component_9_0_i58) MR_AND
		MR_LABEL_AP(check_hlds__format_call__represent_component_9_0_i59) MR_AND
		MR_LABEL_AP(check_hlds__format_call__represent_component_9_0_i47));
MR_def_label(check_hlds__format_call__represent_component_9_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(0, MR_r2, 0);
	MR_r1 = MR_r3;
	MR_r2 = MR_r4;
	MR_r3 = MR_r5;
	MR_np_call_localret_ent(check_hlds__format_call__make_result_var_if_needed_6_0,
		check_hlds__format_call__represent_component_9_0_i4);
MR_def_label(check_hlds__format_call__represent_component_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_sv(5) = MR_r3;
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_goal__make_string_const_construction_3_0,
		check_hlds__format_call__represent_component_9_0_i17);
MR_def_label(check_hlds__format_call__represent_component_9_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(3) = MR_ctfield(1, MR_r2, 0);
	MR_r1 = MR_r3;
	MR_r2 = MR_r4;
	MR_r3 = MR_r5;
	MR_np_call_localret_ent(check_hlds__format_call__make_result_var_if_needed_6_0,
		check_hlds__format_call__represent_component_9_0_i32);
MR_def_label(check_hlds__format_call__represent_component_9_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_sv(5) = MR_r3;
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_string_module_0_0,
		check_hlds__format_call__represent_component_9_0_i33);
MR_def_label(check_hlds__format_call__represent_component_9_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tempr5 = MR_sv(2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr5;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_sv(6) = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr3, 0) = MR_tempr5;
	MR_tfield(0, MR_tempr3, 1) = (MR_Word) MR_TAG_COMMON(3,9,0);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr4, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr4;
	}
	MR_np_call_localret_ent(fn__hlds__instmap__instmap_delta_from_assoc_list_1_0,
		check_hlds__format_call__represent_component_9_0_i39);
MR_def_label(check_hlds__format_call__represent_component_9_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_np_call_localret_ent(fn__term__context_init_0_0,
		check_hlds__format_call__represent_component_9_0_i40);
MR_def_label(check_hlds__format_call__represent_component_9_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Word) MR_string_const("int_to_string", 13);
	MR_r3 = (MR_Integer) 1;
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Integer) 0;
	MR_r6 = (MR_Integer) 0;
	MR_r7 = MR_sv(6);
	MR_r8 = (MR_Word) MR_tbmkword(0, 0);
	MR_r9 = MR_sv(7);
	MR_r10 = MR_sv(1);
	MR_r11 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__goal_util__generate_simple_call_12_0,
		check_hlds__format_call__represent_component_9_0_i17);
MR_def_label(check_hlds__format_call__represent_component_9_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(3) = MR_ctfield(2, MR_r2, 0);
	MR_r1 = MR_r3;
	MR_r2 = MR_r4;
	MR_r3 = MR_r5;
	MR_np_call_localret_ent(check_hlds__format_call__make_result_var_if_needed_6_0,
		check_hlds__format_call__represent_component_9_0_i20);
MR_def_label(check_hlds__format_call__represent_component_9_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_sv(5) = MR_r3;
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_string_module_0_0,
		check_hlds__format_call__represent_component_9_0_i21);
MR_def_label(check_hlds__format_call__represent_component_9_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tempr5 = MR_sv(2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr5;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_sv(6) = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr3, 0) = MR_tempr5;
	MR_tfield(0, MR_tempr3, 1) = (MR_Word) MR_TAG_COMMON(3,9,0);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr4, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr4;
	}
	MR_np_call_localret_ent(fn__hlds__instmap__instmap_delta_from_assoc_list_1_0,
		check_hlds__format_call__represent_component_9_0_i27);
MR_def_label(check_hlds__format_call__represent_component_9_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_np_call_localret_ent(fn__term__context_init_0_0,
		check_hlds__format_call__represent_component_9_0_i28);
MR_def_label(check_hlds__format_call__represent_component_9_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Word) MR_string_const("float_to_string", 15);
	MR_r3 = (MR_Integer) 1;
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Integer) 0;
	MR_r6 = (MR_Integer) 0;
	MR_r7 = MR_sv(6);
	MR_r8 = (MR_Word) MR_tbmkword(0, 0);
	MR_r9 = MR_sv(7);
	MR_r10 = MR_sv(1);
	MR_r11 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__goal_util__generate_simple_call_12_0,
		check_hlds__format_call__represent_component_9_0_i17);
MR_def_label(check_hlds__format_call__represent_component_9_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_ctfield(3, MR_r2, 0),0)) {
		MR_GOTO_LAB(check_hlds__format_call__represent_component_9_0_i60);
	}
	MR_r1 = MR_ctfield(3, MR_r2, 1);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_r4;
	MR_r4 = MR_r5;
	MR_proceed();
MR_def_label(check_hlds__format_call__represent_component_9_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(3) = MR_ctfield(3, MR_r2, 1);
	MR_r1 = MR_r3;
	MR_r2 = MR_r4;
	MR_r3 = MR_r5;
	MR_np_call_localret_ent(check_hlds__format_call__make_result_var_if_needed_6_0,
		check_hlds__format_call__represent_component_9_0_i8);
MR_def_label(check_hlds__format_call__represent_component_9_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_sv(5) = MR_r3;
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_string_module_0_0,
		check_hlds__format_call__represent_component_9_0_i9);
MR_def_label(check_hlds__format_call__represent_component_9_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tempr5 = MR_sv(2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr5;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_sv(6) = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr3, 0) = MR_tempr5;
	MR_tfield(0, MR_tempr3, 1) = (MR_Word) MR_TAG_COMMON(3,9,0);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr4, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr4;
	}
	MR_np_call_localret_ent(fn__hlds__instmap__instmap_delta_from_assoc_list_1_0,
		check_hlds__format_call__represent_component_9_0_i15);
MR_def_label(check_hlds__format_call__represent_component_9_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_np_call_localret_ent(fn__term__context_init_0_0,
		check_hlds__format_call__represent_component_9_0_i16);
MR_def_label(check_hlds__format_call__represent_component_9_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Word) MR_string_const("char_to_string", 14);
	MR_r3 = (MR_Integer) 1;
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Integer) 0;
	MR_r6 = (MR_Integer) 0;
	MR_r7 = MR_sv(6);
	MR_r8 = (MR_Word) MR_tbmkword(0, 0);
	MR_r9 = MR_sv(7);
	MR_r10 = MR_sv(1);
	MR_r11 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__goal_util__generate_simple_call_12_0,
		check_hlds__format_call__represent_component_9_0_i17);
MR_def_label(check_hlds__format_call__represent_component_9_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_decr_sp_and_return(8);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__format_call_module18)
	MR_init_entry1(check_hlds__format_call__replace_string_format_9_0);
	MR_init_label8(check_hlds__format_call__replace_string_format_9_0,6,7,9,5,4,10,3,49)
	MR_init_label8(check_hlds__format_call__replace_string_format_9_0,15,16,17,18,25,26,27,29)
	MR_init_label1(check_hlds__format_call__replace_string_format_9_0,30)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'replace_string_format'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__format_call__replace_string_format_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(check_hlds__format_call__replace_string_format_9_0_i3);
	}
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(check_hlds__format_call__replace_string_format_9_0_i5);
	}
	MR_sv(1) = MR_r5;
	MR_sv(3) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r1 = MR_sv(3);
	MR_r2 = MR_r4;
	MR_np_call_localret_ent(svvarset__new_var_3_0,
		check_hlds__format_call__replace_string_format_9_0_i6);
MR_def_label(check_hlds__format_call__replace_string_format_9_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_sv(7) = MR_r2;
	MR_np_call_localret_ent(fn__parse_tree__builtin_lib_types__string_type_0_0,
		check_hlds__format_call__replace_string_format_9_0_i7);
MR_def_label(check_hlds__format_call__replace_string_format_9_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_tempr1;
	MR_r6 = MR_sv(1);
	}
	MR_np_call_localret_ent(f_115_118_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		check_hlds__format_call__replace_string_format_9_0_i9);
MR_def_label(check_hlds__format_call__replace_string_format_9_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Word) MR_string_const("", 0);
	MR_GOTO_LAB(check_hlds__format_call__replace_string_format_9_0_i4);
MR_def_label(check_hlds__format_call__replace_string_format_9_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(1, MR_r3, 0);
	MR_sv(7) = MR_r4;
	MR_sv(8) = MR_r5;
	MR_r2 = (MR_Word) MR_string_const("", 0);
MR_def_label(check_hlds__format_call__replace_string_format_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_goal__make_string_const_construction_3_0,
		check_hlds__format_call__replace_string_format_9_0_i10);
MR_def_label(check_hlds__format_call__replace_string_format_9_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_sv(2);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(8);
	MR_decr_sp_and_return(10);
	}
MR_def_label(check_hlds__format_call__replace_string_format_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = MR_ctfield(1, MR_r2, 1);
	if (MR_LTAGS_TESTR(MR_r6,0,0)) {
		MR_GOTO_LAB(check_hlds__format_call__replace_string_format_9_0_i49);
	}
	MR_r2 = MR_ctfield(1, MR_r2, 0);
	MR_np_tailcall_ent(check_hlds__format_call__represent_component_9_0);
MR_def_label(check_hlds__format_call__replace_string_format_9_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_ctfield(1, MR_r2, 0);
	MR_r2 = MR_r6;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_localcall_lab(check_hlds__format_call__replace_string_format_9_0,
		check_hlds__format_call__replace_string_format_9_0_i15);
MR_def_label(check_hlds__format_call__replace_string_format_9_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_tempr2 = MR_r3;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_tempr3 = MR_r4;
	MR_r4 = MR_tempr2;
	MR_r5 = MR_tempr3;
	}
	MR_np_call_localret_ent(check_hlds__format_call__represent_component_9_0,
		check_hlds__format_call__replace_string_format_9_0_i16);
MR_def_label(check_hlds__format_call__replace_string_format_9_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_np_call_localret_ent(check_hlds__format_call__make_result_var_if_needed_6_0,
		check_hlds__format_call__replace_string_format_9_0_i17);
MR_def_label(check_hlds__format_call__replace_string_format_9_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_sv(7) = MR_r2;
	MR_sv(8) = MR_r3;
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_string_module_0_0,
		check_hlds__format_call__replace_string_format_9_0_i18);
MR_def_label(check_hlds__format_call__replace_string_format_9_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tempr5 = MR_sv(2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr5;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr5;
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(3,9,0);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr4, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(3) = MR_r1;
	MR_sv(5) = MR_tempr3;
	MR_r1 = MR_tempr4;
	}
	MR_np_call_localret_ent(fn__hlds__instmap__instmap_delta_from_assoc_list_1_0,
		check_hlds__format_call__replace_string_format_9_0_i25);
MR_def_label(check_hlds__format_call__replace_string_format_9_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_np_call_localret_ent(fn__term__context_init_0_0,
		check_hlds__format_call__replace_string_format_9_0_i26);
MR_def_label(check_hlds__format_call__replace_string_format_9_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Word) MR_string_const("++", 2);
	MR_r3 = (MR_Integer) 1;
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Integer) 0;
	MR_r6 = (MR_Integer) 0;
	MR_r7 = MR_sv(5);
	MR_r8 = (MR_Word) MR_tbmkword(0, 0);
	MR_r9 = MR_sv(9);
	MR_r10 = MR_sv(1);
	MR_r11 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__goal_util__generate_simple_call_12_0,
		check_hlds__format_call__replace_string_format_9_0_i27);
MR_def_label(check_hlds__format_call__replace_string_format_9_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_sv(6);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		check_hlds__format_call__replace_string_format_9_0_i29);
MR_def_label(check_hlds__format_call__replace_string_format_9_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		check_hlds__format_call__replace_string_format_9_0_i30);
MR_def_label(check_hlds__format_call__replace_string_format_9_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(8);
	MR_decr_sp_and_return(10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___term__var_1_0);
MR_decl_entry(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_105_115_116_95_116_111_95_115_101_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_1_0);
MR_decl_entry(hlds__hlds_goal__make_simple_assign_5_0);
MR_decl_entry(fn__hlds__instmap__instmap_delta_bind_var_1_0);
MR_decl_entry(hlds__hlds_goal__goal_info_init_6_0);
MR_decl_entry(hlds__hlds_goal__conj_list_to_goal_3_0);

MR_BEGIN_MODULE(check_hlds__format_call_module19)
	MR_init_entry1(check_hlds__format_call__create_string_format_replacement_9_0);
	MR_init_label8(check_hlds__format_call__create_string_format_replacement_9_0,2,5,7,6,11,13,17,18)
	MR_init_label4(check_hlds__format_call__create_string_format_replacement_9_0,19,20,21,1)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'create_string_format_replacement'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__format_call__create_string_format_replacement_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_r1 = MR_r2;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__format_call__interpret_format_string_4_0,
		check_hlds__format_call__create_string_format_replacement_9_0_i2);
MR_def_label(check_hlds__format_call__create_string_format_replacement_9_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__format_call__create_string_format_replacement_9_0_i1);
	}
	MR_tag_alloc_heap(MR_r3, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r3, 0) = MR_sv(2);
	MR_r1 = MR_sv(1);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_np_call_localret_ent(check_hlds__format_call__replace_string_format_9_0,
		check_hlds__format_call__create_string_format_replacement_9_0_i5);
MR_def_label(check_hlds__format_call__create_string_format_replacement_9_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_sv(5) = MR_r3;
	MR_sv(6) = MR_r4;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(__Unify___term__var_1_0,
		check_hlds__format_call__create_string_format_replacement_9_0_i7);
MR_def_label(check_hlds__format_call__create_string_format_replacement_9_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__format_call__create_string_format_replacement_9_0_i6);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(3);
	MR_sv(1) = MR_sv(4);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,2,0);
	}
	MR_np_call_localret_ent(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_105_115_116_95_116_111_95_115_101_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_1_0,
		check_hlds__format_call__create_string_format_replacement_9_0_i17);
MR_def_label(check_hlds__format_call__create_string_format_replacement_9_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(hlds__hlds_goal__make_simple_assign_5_0,
		check_hlds__format_call__create_string_format_replacement_9_0_i11);
MR_def_label(check_hlds__format_call__create_string_format_replacement_9_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_sv(4);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		check_hlds__format_call__create_string_format_replacement_9_0_i13);
MR_def_label(check_hlds__format_call__create_string_format_replacement_9_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(3);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,2,0);
	}
	MR_np_call_localret_ent(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_105_115_116_95_116_111_95_115_101_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_1_0,
		check_hlds__format_call__create_string_format_replacement_9_0_i17);
MR_def_label(check_hlds__format_call__create_string_format_replacement_9_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__hlds__instmap__instmap_delta_bind_var_1_0,
		check_hlds__format_call__create_string_format_replacement_9_0_i18);
MR_def_label(check_hlds__format_call__create_string_format_replacement_9_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(fn__term__context_init_0_0,
		check_hlds__format_call__create_string_format_replacement_9_0_i19);
MR_def_label(check_hlds__format_call__create_string_format_replacement_9_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = (MR_Integer) 0;
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_init_6_0,
		check_hlds__format_call__create_string_format_replacement_9_0_i20);
MR_def_label(check_hlds__format_call__create_string_format_replacement_9_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__conj_list_to_goal_3_0,
		check_hlds__format_call__create_string_format_replacement_9_0_i21);
MR_def_label(check_hlds__format_call__create_string_format_replacement_9_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(6);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(check_hlds__format_call__create_string_format_replacement_9_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__format_call_module20)
	MR_init_entry1(check_hlds__format_call__create_io_format_replacement_11_0);
	MR_init_label8(check_hlds__format_call__create_io_format_replacement_11_0,2,4,6,20,21,22,23,25)
	MR_init_label6(check_hlds__format_call__create_io_format_replacement_11_0,27,28,29,30,31,1)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'create_io_format_replacement'/11 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__format_call__create_io_format_replacement_11_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r6;
	MR_sv(5) = MR_tempr1;
	MR_sv(6) = MR_r7;
	MR_sv(7) = MR_r8;
	MR_r1 = MR_r2;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__format_call__interpret_format_string_4_0,
		check_hlds__format_call__create_io_format_replacement_11_0_i2);
MR_def_label(check_hlds__format_call__create_io_format_replacement_11_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__format_call__create_io_format_replacement_11_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(7);
	MR_np_call_localret_ent(check_hlds__format_call__replace_string_format_9_0,
		check_hlds__format_call__create_io_format_replacement_11_0_i4);
MR_def_label(check_hlds__format_call__create_io_format_replacement_11_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(check_hlds__format_call__create_io_format_replacement_11_0_i6);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tempr5 = MR_sv(4);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr5;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_sv(3) = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_r1;
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr5;
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(3,9,0);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_r1 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr4, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(2) = MR_r2;
	MR_sv(6) = MR_r3;
	MR_sv(7) = MR_r4;
	}
	MR_np_call_localret_ent(fn__hlds__instmap__instmap_delta_from_assoc_list_1_0,
		check_hlds__format_call__create_io_format_replacement_11_0_i20);
MR_def_label(check_hlds__format_call__create_io_format_replacement_11_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tempr6 = MR_sv(4);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr6;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_r1;
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_sv(3) = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_ctfield(1, MR_sv(2), 0);
	MR_tfield(1, MR_tempr4, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr6;
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(3,9,0);
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 2);
	MR_r1 = MR_tempr5;
	MR_tfield(1, MR_tempr5, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr5, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(2) = MR_r2;
	MR_sv(6) = MR_r3;
	MR_sv(7) = MR_r4;
	}
	MR_np_call_localret_ent(fn__hlds__instmap__instmap_delta_from_assoc_list_1_0,
		check_hlds__format_call__create_io_format_replacement_11_0_i20);
MR_def_label(check_hlds__format_call__create_io_format_replacement_11_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_io_module_0_0,
		check_hlds__format_call__create_io_format_replacement_11_0_i21);
MR_def_label(check_hlds__format_call__create_io_format_replacement_11_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_np_call_localret_ent(fn__term__context_init_0_0,
		check_hlds__format_call__create_io_format_replacement_11_0_i22);
MR_def_label(check_hlds__format_call__create_io_format_replacement_11_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = (MR_Word) MR_string_const("write_string", 12);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Integer) 0;
	MR_r6 = (MR_Integer) 0;
	MR_r7 = MR_sv(3);
	MR_r8 = (MR_Word) MR_tbmkword(0, 0);
	MR_r9 = MR_sv(4);
	MR_r10 = MR_sv(1);
	MR_r11 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__goal_util__generate_simple_call_12_0,
		check_hlds__format_call__create_io_format_replacement_11_0_i23);
MR_def_label(check_hlds__format_call__create_io_format_replacement_11_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_sv(2);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		check_hlds__format_call__create_io_format_replacement_11_0_i25);
MR_def_label(check_hlds__format_call__create_io_format_replacement_11_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(5);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		check_hlds__format_call__create_io_format_replacement_11_0_i27);
MR_def_label(check_hlds__format_call__create_io_format_replacement_11_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_105_115_116_95_116_111_95_115_101_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_1_0,
		check_hlds__format_call__create_io_format_replacement_11_0_i28);
MR_def_label(check_hlds__format_call__create_io_format_replacement_11_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(fn__term__context_init_0_0,
		check_hlds__format_call__create_io_format_replacement_11_0_i29);
MR_def_label(check_hlds__format_call__create_io_format_replacement_11_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = (MR_Integer) 0;
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_init_6_0,
		check_hlds__format_call__create_io_format_replacement_11_0_i30);
MR_def_label(check_hlds__format_call__create_io_format_replacement_11_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__conj_list_to_goal_3_0,
		check_hlds__format_call__create_io_format_replacement_11_0_i31);
MR_def_label(check_hlds__format_call__create_io_format_replacement_11_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(7);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(check_hlds__format_call__create_io_format_replacement_11_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(string__to_char_list_2_0);
MR_decl_entry(fn__set_tree234__list_to_set_1_0);

MR_BEGIN_MODULE(check_hlds__format_call_module21)
	MR_init_entry1(check_hlds__format_call__try_create_replacement_goal_13_0);
	MR_init_label8(check_hlds__format_call__try_create_replacement_goal_13_0,2,5,28,31,34,7,9,16)
	MR_init_label4(check_hlds__format_call__try_create_replacement_goal_13_0,20,23,25,27)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'try_create_replacement_goal'/13 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__format_call__try_create_replacement_goal_13_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_r7;
	MR_sv(7) = MR_r8;
	MR_sv(8) = MR_r9;
	MR_sv(9) = MR_r10;
	MR_r1 = MR_r4;
	MR_np_call_localret_ent(string__to_char_list_2_0,
		check_hlds__format_call__try_create_replacement_goal_13_0_i2);
MR_def_label(check_hlds__format_call__try_create_replacement_goal_13_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_sv(10) = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__format_call, what_to_print);
	MR_r2 = MR_sv(10);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,6,1);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		check_hlds__format_call__try_create_replacement_goal_13_0_i5);
MR_def_label(check_hlds__format_call__try_create_replacement_goal_13_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(3)),
		MR_LABEL_AP(check_hlds__format_call__try_create_replacement_goal_13_0_i28) MR_AND
		MR_LABEL_AP(check_hlds__format_call__try_create_replacement_goal_13_0_i7) MR_AND
		MR_LABEL_AP(check_hlds__format_call__try_create_replacement_goal_13_0_i16) MR_AND
		MR_LABEL_AP(check_hlds__format_call__try_create_replacement_goal_13_0_i27));
MR_def_label(check_hlds__format_call__try_create_replacement_goal_13_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_ctfield(0, MR_sv(3), 0);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(8);
	MR_r6 = MR_sv(9);
	}
	MR_np_call_localret_ent(check_hlds__format_call__create_string_format_replacement_9_0,
		check_hlds__format_call__try_create_replacement_goal_13_0_i31);
MR_def_label(check_hlds__format_call__try_create_replacement_goal_13_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__format_call__try_create_replacement_goal_13_0_i27);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(5);
	MR_sv(1) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__set_tree234__list_to_set_1_0,
		check_hlds__format_call__try_create_replacement_goal_13_0_i34);
MR_def_label(check_hlds__format_call__try_create_replacement_goal_13_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__program_representation, goal_path);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(check_hlds__format_call, fc_opt_goal_info);
	MR_r3 = MR_sv(2);
	MR_r5 = MR_sv(7);
	}
	MR_np_call_localret_ent(svmap__det_insert_4_0,
		check_hlds__format_call__try_create_replacement_goal_13_0_i25);
MR_def_label(check_hlds__format_call__try_create_replacement_goal_13_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(6);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_tempr2 = MR_sv(3);
	MR_r4 = MR_ctfield(1, MR_tempr2, 0);
	MR_r5 = MR_ctfield(1, MR_tempr2, 1);
	MR_r6 = MR_tempr1;
	MR_r7 = MR_sv(8);
	MR_r8 = MR_sv(9);
	}
	MR_np_call_localret_ent(check_hlds__format_call__create_io_format_replacement_11_0,
		check_hlds__format_call__try_create_replacement_goal_13_0_i9);
MR_def_label(check_hlds__format_call__try_create_replacement_goal_13_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__format_call__try_create_replacement_goal_13_0_i27);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(5);
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(1) = MR_r2;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__set_tree234__list_to_set_1_0,
		check_hlds__format_call__try_create_replacement_goal_13_0_i23);
MR_def_label(check_hlds__format_call__try_create_replacement_goal_13_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r3, 1, (MR_Integer) 1);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(3);
	MR_tfield(1, MR_r3, 0) = MR_ctfield(2, MR_tempr2, 0);
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(6);
	MR_r4 = MR_ctfield(2, MR_tempr2, 1);
	MR_r5 = MR_ctfield(2, MR_tempr2, 2);
	MR_r6 = MR_tempr1;
	MR_r7 = MR_sv(8);
	MR_r8 = MR_sv(9);
	}
	MR_np_call_localret_ent(check_hlds__format_call__create_io_format_replacement_11_0,
		check_hlds__format_call__try_create_replacement_goal_13_0_i20);
MR_def_label(check_hlds__format_call__try_create_replacement_goal_13_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__format_call__try_create_replacement_goal_13_0_i27);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(5);
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(1) = MR_r2;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__set_tree234__list_to_set_1_0,
		check_hlds__format_call__try_create_replacement_goal_13_0_i23);
MR_def_label(check_hlds__format_call__try_create_replacement_goal_13_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__program_representation, goal_path);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(check_hlds__format_call, fc_opt_goal_info);
	MR_r3 = MR_sv(2);
	MR_r5 = MR_sv(7);
	}
	MR_np_call_localret_ent(svmap__det_insert_4_0,
		check_hlds__format_call__try_create_replacement_goal_13_0_i25);
MR_def_label(check_hlds__format_call__try_create_replacement_goal_13_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_decr_sp_and_return(11);
MR_def_label(check_hlds__format_call__try_create_replacement_goal_13_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(9);
	MR_decr_sp_and_return(11);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);

MR_BEGIN_MODULE(check_hlds__format_call_module22)
	MR_init_entry1(check_hlds__format_call__follow_format_string_5_0);
	MR_init_label8(check_hlds__format_call__follow_format_string_5_0,45,3,2,6,7,8,9,10)
	MR_init_label6(check_hlds__format_call__follow_format_string_5_0,13,11,18,16,22,21)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'follow_format_string'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__format_call__follow_format_string_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
MR_def_label(check_hlds__format_call__follow_format_string_5_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__format_call, conj_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(check_hlds__format_call, conj_map);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(map__search_3_0,
		check_hlds__format_call__follow_format_string_5_0_i3);
MR_def_label(check_hlds__format_call__follow_format_string_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__format_call__follow_format_string_5_0_i2);
	}
	MR_r5 = MR_sv(4);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(5) = MR_ctfield(0, MR_tempr1, 0);
	MR_r4 = MR_ctfield(0, MR_tempr1, 3);
	MR_GOTO_LAB(check_hlds__format_call__follow_format_string_5_0_i10);
	}
MR_def_label(check_hlds__format_call__follow_format_string_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_r1 = MR_sv(6);
	MR_r2 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_np_call_localret_ent(fn__map__init_0_0,
		check_hlds__format_call__follow_format_string_5_0_i6);
MR_def_label(check_hlds__format_call__follow_format_string_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(check_hlds__format_call, list_skeleton_state);
	MR_np_call_localret_ent(fn__map__init_0_0,
		check_hlds__format_call__follow_format_string_5_0_i7);
MR_def_label(check_hlds__format_call__follow_format_string_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(check_hlds__format_call, what_to_print);
	MR_np_call_localret_ent(fn__map__init_0_0,
		check_hlds__format_call__follow_format_string_5_0_i8);
MR_def_label(check_hlds__format_call__follow_format_string_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_r2 = MR_r1;
	MR_np_call_localret_ent(fn__map__init_0_0,
		check_hlds__format_call__follow_format_string_5_0_i9);
MR_def_label(check_hlds__format_call__follow_format_string_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_sv(4);
	MR_r4 = MR_r1;
MR_def_label(check_hlds__format_call__follow_format_string_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r5;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_r3 = MR_r2;
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		check_hlds__format_call__follow_format_string_5_0_i13);
MR_def_label(check_hlds__format_call__follow_format_string_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__format_call__follow_format_string_5_0_i11);
	}
	MR_r1 = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_tempr1;
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(check_hlds__format_call__follow_format_string_5_0_i45);
	}
MR_def_label(check_hlds__format_call__follow_format_string_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_r3 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(4);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		check_hlds__format_call__follow_format_string_5_0_i18);
MR_def_label(check_hlds__format_call__follow_format_string_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__format_call__follow_format_string_5_0_i16);
	}
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_r2;
	MR_decr_sp_and_return(7);
MR_def_label(check_hlds__format_call__follow_format_string_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__format_call, conj_id);
	MR_r2 = MR_r1;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(map__search_3_0,
		check_hlds__format_call__follow_format_string_5_0_i22);
MR_def_label(check_hlds__format_call__follow_format_string_5_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__format_call__follow_format_string_5_0_i21);
	}
	MR_r1 = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(4);
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(check_hlds__format_call__follow_format_string_5_0_i45);
	}
MR_def_label(check_hlds__format_call__follow_format_string_5_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__format_call_module23)
	MR_init_entry1(check_hlds__format_call__follow_list_skeleton_5_0);
	MR_init_label8(check_hlds__format_call__follow_list_skeleton_5_0,59,3,2,6,7,8,9,10)
	MR_init_label8(check_hlds__format_call__follow_list_skeleton_5_0,13,11,18,21,24,41,26,16)
	MR_init_label1(check_hlds__format_call__follow_list_skeleton_5_0,31)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'follow_list_skeleton'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__format_call__follow_list_skeleton_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
MR_def_label(check_hlds__format_call__follow_list_skeleton_5_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__format_call, conj_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(check_hlds__format_call, conj_map);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(map__search_3_0,
		check_hlds__format_call__follow_list_skeleton_5_0_i3);
MR_def_label(check_hlds__format_call__follow_list_skeleton_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__format_call__follow_list_skeleton_5_0_i2);
	}
	MR_r5 = MR_sv(4);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(5) = MR_ctfield(0, MR_tempr1, 1);
	MR_r4 = MR_ctfield(0, MR_tempr1, 3);
	MR_GOTO_LAB(check_hlds__format_call__follow_list_skeleton_5_0_i10);
	}
MR_def_label(check_hlds__format_call__follow_list_skeleton_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_r1 = MR_sv(6);
	MR_r2 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_np_call_localret_ent(fn__map__init_0_0,
		check_hlds__format_call__follow_list_skeleton_5_0_i6);
MR_def_label(check_hlds__format_call__follow_list_skeleton_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(check_hlds__format_call, list_skeleton_state);
	MR_np_call_localret_ent(fn__map__init_0_0,
		check_hlds__format_call__follow_list_skeleton_5_0_i7);
MR_def_label(check_hlds__format_call__follow_list_skeleton_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(check_hlds__format_call, what_to_print);
	MR_np_call_localret_ent(fn__map__init_0_0,
		check_hlds__format_call__follow_list_skeleton_5_0_i8);
MR_def_label(check_hlds__format_call__follow_list_skeleton_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_r2 = MR_r1;
	MR_np_call_localret_ent(fn__map__init_0_0,
		check_hlds__format_call__follow_list_skeleton_5_0_i9);
MR_def_label(check_hlds__format_call__follow_list_skeleton_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_sv(4);
	MR_r4 = MR_r1;
MR_def_label(check_hlds__format_call__follow_list_skeleton_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r5;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_r3 = MR_r2;
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		check_hlds__format_call__follow_list_skeleton_5_0_i13);
MR_def_label(check_hlds__format_call__follow_list_skeleton_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__format_call__follow_list_skeleton_5_0_i11);
	}
	MR_r1 = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_tempr1;
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(check_hlds__format_call__follow_list_skeleton_5_0_i59);
	}
MR_def_label(check_hlds__format_call__follow_list_skeleton_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(check_hlds__format_call, list_skeleton_state);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(4);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		check_hlds__format_call__follow_list_skeleton_5_0_i18);
MR_def_label(check_hlds__format_call__follow_list_skeleton_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__format_call__follow_list_skeleton_5_0_i16);
	}
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(check_hlds__format_call__follow_list_skeleton_5_0_i21);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r1 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
MR_def_label(check_hlds__format_call__follow_list_skeleton_5_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_sv(1);
	MR_tempr3 = MR_r2;
	MR_sv(1) = MR_ctfield(1, MR_tempr3, 0);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_ctfield(1, MR_tempr3, 1);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(2);
	}
	MR_np_localcall_lab(check_hlds__format_call__follow_list_skeleton_5_0,
		check_hlds__format_call__follow_list_skeleton_5_0_i24);
MR_def_label(check_hlds__format_call__follow_list_skeleton_5_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__format_call__follow_list_skeleton_5_0_i26);
	}
MR_def_label(check_hlds__format_call__follow_list_skeleton_5_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(7);
MR_def_label(check_hlds__format_call__follow_list_skeleton_5_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tempr4 = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_ctfield(1, MR_tempr4, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr2, 1) = MR_ctfield(1, MR_tempr4, 1);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r1 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_decr_sp_and_return(7);
	}
MR_def_label(check_hlds__format_call__follow_list_skeleton_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__format_call, conj_id);
	MR_r2 = MR_r1;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(map__search_3_0,
		check_hlds__format_call__follow_list_skeleton_5_0_i31);
MR_def_label(check_hlds__format_call__follow_list_skeleton_5_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__format_call__follow_list_skeleton_5_0_i41);
	}
	MR_r1 = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(4);
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(check_hlds__format_call__follow_list_skeleton_5_0_i59);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__map_3_0);
extern const MR_TypeCtorInfo_Struct mercury_data_string__type_ctor_info_poly_type_0;
MR_decl_entry(string__format_3_0);
MR_decl_entry(exception__try_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_exception__type_ctor_info_software_error_0;
MR_decl_entry(univ__univ_to_type_2_0);
MR_decl_entry(string__append_3_1);

MR_BEGIN_MODULE(check_hlds__format_call_module24)
	MR_init_entry1(check_hlds__format_call__check_format_call_site_13_0);
	MR_init_label8(check_hlds__format_call__check_format_call_site_13_0,4,3,25,27,32,33,36,26)
	MR_init_label8(check_hlds__format_call__check_format_call_site_13_0,56,61,63,67,70,69,65,126)
	MR_init_label2(check_hlds__format_call__check_format_call_site_13_0,115,116)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'check_format_call_site'/13 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__format_call__check_format_call_site_13_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(17);
	MR_sv(17) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_sv(12) = MR_tempr1;
	MR_tempr3 = MR_r5;
	MR_tfield(1, MR_tempr1, 0) = MR_ctfield(0, MR_tempr3, 4);
	MR_tfield(1, MR_tempr1, 1) = MR_ctfield(0, MR_tempr3, 5);
	MR_tempr2 = MR_ctfield(0, MR_tempr3, 8);
	MR_sv(10) = MR_ctfield(0, MR_tempr3, 7);
	MR_sv(9) = MR_ctfield(0, MR_tempr3, 6);
	MR_sv(8) = MR_ctfield(0, MR_tempr3, 3);
	MR_sv(7) = MR_ctfield(0, MR_tempr3, 2);
	MR_sv(5) = MR_ctfield(0, MR_tempr3, 0);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_tempr4 = MR_r3;
	MR_sv(3) = MR_tempr4;
	MR_tempr5 = MR_r4;
	MR_sv(4) = MR_tempr5;
	MR_sv(6) = MR_ctfield(0, MR_tempr3, 1);
	MR_sv(11) = MR_tempr2;
	MR_sv(13) = MR_r6;
	MR_sv(14) = MR_r7;
	MR_sv(15) = MR_r8;
	MR_sv(16) = MR_r9;
	MR_r1 = MR_tempr4;
	MR_r2 = MR_tempr5;
	MR_r3 = MR_tempr2;
	MR_r4 = MR_sv(6);
	}
	MR_np_call_localret_ent(check_hlds__format_call__follow_format_string_5_0,
		check_hlds__format_call__check_format_call_site_13_0_i4);
MR_def_label(check_hlds__format_call__check_format_call_site_13_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__format_call__check_format_call_site_13_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r5 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(1, MR_r1, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(6);
	MR_tag_alloc_heap(MR_sv(6), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(6), 0) = MR_tempr1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r4 = MR_sv(7);
	MR_r3 = MR_sv(11);
	MR_GOTO_LAB(check_hlds__format_call__check_format_call_site_13_0_i25);
	}
MR_def_label(check_hlds__format_call__check_format_call_site_13_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(12);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(9);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_TAG_COMMON(1,2,8);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_TAG_COMMON(3,10,0);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr3, 0) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 3);
	MR_tfield(1, MR_tempr3, 0) = (MR_Integer) 32;
	MR_tfield(1, MR_tempr3, 1) = (MR_Integer) 1;
	MR_tfield(1, MR_tempr3, 2) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr3, 0) = MR_sv(10);
	MR_tfield(0, MR_tempr3, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr4, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr4, 0) = (MR_Word) MR_TAG_COMMON(1,11,0);
	MR_tfield(0, MR_tempr4, 1) = (MR_Word) MR_tbmkword(0, 7);
	MR_tfield(0, MR_tempr4, 2) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr4;
	MR_tfield(1, MR_tempr2, 1) = MR_sv(14);
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r4 = MR_sv(7);
	MR_r3 = MR_sv(11);
	MR_sv(6) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(14) = MR_tempr2;
	}
MR_def_label(check_hlds__format_call__check_format_call_site_13_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_sv(7) = MR_r4;
	MR_sv(11) = MR_r3;
	MR_np_call_localret_ent(check_hlds__format_call__follow_list_skeleton_5_0,
		check_hlds__format_call__check_format_call_site_13_0_i27);
MR_def_label(check_hlds__format_call__check_format_call_site_13_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__format_call__check_format_call_site_13_0_i26);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(12,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(check_hlds__format_call__follow_list_value_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(11);
	MR_tempr2 = MR_r1;
	MR_sv(3) = MR_ctfield(1, MR_tempr2, 0);
	MR_sv(4) = MR_ctfield(1, MR_tempr2, 1);
	MR_sv(11) = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_r1 = MR_sv(11);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,2,10);
	MR_r4 = MR_sv(3);
	}
	MR_np_call_localret_ent(list__map_3_0,
		check_hlds__format_call__check_format_call_site_13_0_i32);
MR_def_label(check_hlds__format_call__check_format_call_site_13_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(f_99_104_101_99_107_95_104_108_100_115_95_95_102_111_114_109_97_116_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_106_101_99_116_95_97_108_108_95_121_101_115_95_95_91_49_93_95_48_2_0,
		check_hlds__format_call__check_format_call_site_13_0_i33);
MR_def_label(check_hlds__format_call__check_format_call_site_13_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__format_call__check_format_call_site_13_0_i26);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(7);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(4);
	MR_tempr2 = MR_sv(3);
	MR_sv(3) = MR_r2;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		check_hlds__format_call__check_format_call_site_13_0_i36);
MR_def_label(check_hlds__format_call__check_format_call_site_13_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r5 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_r6 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_r1 = MR_tempr2;
	MR_sv(11) = MR_sv(14);
	MR_GOTO_LAB(check_hlds__format_call__check_format_call_site_13_0_i56);
	}
MR_def_label(check_hlds__format_call__check_format_call_site_13_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(12);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(9);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_TAG_COMMON(1,2,8);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_TAG_COMMON(3,10,2);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr3, 0) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 3);
	MR_tfield(1, MR_tempr3, 0) = (MR_Integer) 32;
	MR_tfield(1, MR_tempr3, 1) = (MR_Integer) 1;
	MR_tfield(1, MR_tempr3, 2) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr3, 0) = MR_sv(10);
	MR_tfield(0, MR_tempr3, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr4, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr4, 0) = (MR_Word) MR_TAG_COMMON(1,11,0);
	MR_tfield(0, MR_tempr4, 1) = (MR_Word) MR_tbmkword(0, 7);
	MR_tfield(0, MR_tempr4, 2) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 2);
	MR_sv(11) = MR_tempr5;
	MR_tfield(1, MR_tempr5, 0) = MR_tempr4;
	MR_tfield(1, MR_tempr5, 1) = MR_sv(14);
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	}
MR_def_label(check_hlds__format_call__check_format_call_site_13_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(6),0,0)) {
		MR_GOTO_LAB(check_hlds__format_call__check_format_call_site_13_0_i126);
	}
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__format_call__check_format_call_site_13_0_i126);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_sv(6), 0);
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 1);
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	MR_sv(6) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(7) = MR_ctfield(0, MR_tempr1, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__format_call, what_to_print);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(string, poly_type);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,6,2);
	MR_r4 = MR_sv(7);
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		check_hlds__format_call__check_format_call_site_13_0_i61);
MR_def_label(check_hlds__format_call__check_format_call_site_13_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(13,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(string__format_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 4) = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	}
	MR_np_call_localret_ent(exception__try_2_0,
		check_hlds__format_call__check_format_call_site_13_0_i63);
MR_def_label(check_hlds__format_call__check_format_call_site_13_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(check_hlds__format_call__check_format_call_site_13_0_i65);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(exception, software_error);
	MR_r2 = MR_ctfield(2, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(univ__univ_to_type_2_0,
		check_hlds__format_call__check_format_call_site_13_0_i67);
MR_def_label(check_hlds__format_call__check_format_call_site_13_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__format_call__check_format_call_site_13_0_i126);
	}
	MR_sv(1) = MR_r2;
	MR_r1 = (MR_Word) MR_string_const("string.format: ", 15);
	MR_np_call_localret_ent(string__append_3_1,
		check_hlds__format_call__check_format_call_site_13_0_i70);
MR_def_label(check_hlds__format_call__check_format_call_site_13_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__format_call__check_format_call_site_13_0_i69);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(12);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(9);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_tbmkword(0, 1);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = (MR_Word) MR_TAG_COMMON(3,10,4);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr1, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_TAG_COMMON(3,10,3);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 3);
	MR_tfield(1, MR_tempr1, 0) = (MR_Integer) 31;
	MR_tfield(1, MR_tempr1, 1) = (MR_Integer) 1;
	MR_tfield(1, MR_tempr1, 2) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(10);
	MR_tfield(0, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(1,11,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(2,3,1);
	MR_tfield(0, MR_tempr1, 2) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr4, 1) = MR_sv(11);
	MR_r1 = MR_sv(13);
	MR_r3 = MR_sv(15);
	MR_r4 = MR_sv(16);
	MR_decr_sp_and_return(17);
	}
MR_def_label(check_hlds__format_call__check_format_call_site_13_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(12);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(9);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_tbmkword(0, 1);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = (MR_Word) MR_TAG_COMMON(3,10,4);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr1, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_TAG_COMMON(3,10,3);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 3);
	MR_tfield(1, MR_tempr1, 0) = (MR_Integer) 31;
	MR_tfield(1, MR_tempr1, 1) = (MR_Integer) 1;
	MR_tfield(1, MR_tempr1, 2) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(10);
	MR_tfield(0, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(1,11,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(2,3,1);
	MR_tfield(0, MR_tempr1, 2) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr4, 1) = MR_sv(11);
	MR_r1 = MR_sv(13);
	MR_r3 = MR_sv(15);
	MR_r4 = MR_sv(16);
	MR_decr_sp_and_return(17);
	}
MR_def_label(check_hlds__format_call__check_format_call_site_13_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(2),0)) {
		MR_GOTO_LAB(check_hlds__format_call__check_format_call_site_13_0_i115);
	}
MR_def_label(check_hlds__format_call__check_format_call_site_13_0,126)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(11);
	MR_r3 = MR_sv(15);
	MR_r4 = MR_sv(16);
	MR_decr_sp_and_return(17);
MR_def_label(check_hlds__format_call__check_format_call_site_13_0,115)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(6);
	MR_r7 = MR_sv(7);
	MR_r8 = MR_sv(13);
	MR_r9 = MR_sv(15);
	MR_r10 = MR_sv(16);
	MR_np_call_localret_ent(check_hlds__format_call__try_create_replacement_goal_13_0,
		check_hlds__format_call__check_format_call_site_13_0_i116);
MR_def_label(check_hlds__format_call__check_format_call_site_13_0,116)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(11);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_decr_sp_and_return(17);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__format_call_module25)
	MR_init_entry1(check_hlds__format_call__follow_list_value_5_0);
	MR_init_label8(check_hlds__format_call__follow_list_value_5_0,45,3,2,6,7,8,9,10)
	MR_init_label6(check_hlds__format_call__follow_list_value_5_0,13,11,18,16,22,21)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'follow_list_value'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__format_call__follow_list_value_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
MR_def_label(check_hlds__format_call__follow_list_value_5_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__format_call, conj_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(check_hlds__format_call, conj_map);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(map__search_3_0,
		check_hlds__format_call__follow_list_value_5_0_i3);
MR_def_label(check_hlds__format_call__follow_list_value_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__format_call__follow_list_value_5_0_i2);
	}
	MR_r5 = MR_sv(4);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(5) = MR_ctfield(0, MR_tempr1, 2);
	MR_r4 = MR_ctfield(0, MR_tempr1, 3);
	MR_GOTO_LAB(check_hlds__format_call__follow_list_value_5_0_i10);
	}
MR_def_label(check_hlds__format_call__follow_list_value_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_r1 = MR_sv(5);
	MR_r2 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_np_call_localret_ent(fn__map__init_0_0,
		check_hlds__format_call__follow_list_value_5_0_i6);
MR_def_label(check_hlds__format_call__follow_list_value_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(check_hlds__format_call, list_skeleton_state);
	MR_np_call_localret_ent(fn__map__init_0_0,
		check_hlds__format_call__follow_list_value_5_0_i7);
MR_def_label(check_hlds__format_call__follow_list_value_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(check_hlds__format_call, what_to_print);
	MR_np_call_localret_ent(fn__map__init_0_0,
		check_hlds__format_call__follow_list_value_5_0_i8);
MR_def_label(check_hlds__format_call__follow_list_value_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_r2 = MR_r1;
	MR_np_call_localret_ent(fn__map__init_0_0,
		check_hlds__format_call__follow_list_value_5_0_i9);
MR_def_label(check_hlds__format_call__follow_list_value_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_sv(4);
	MR_r4 = MR_r1;
MR_def_label(check_hlds__format_call__follow_list_value_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r5;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_r3 = MR_r2;
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		check_hlds__format_call__follow_list_value_5_0_i13);
MR_def_label(check_hlds__format_call__follow_list_value_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__format_call__follow_list_value_5_0_i11);
	}
	MR_r1 = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_tempr1;
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(check_hlds__format_call__follow_list_value_5_0_i45);
	}
MR_def_label(check_hlds__format_call__follow_list_value_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(check_hlds__format_call, what_to_print);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(4);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		check_hlds__format_call__follow_list_value_5_0_i18);
MR_def_label(check_hlds__format_call__follow_list_value_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__format_call__follow_list_value_5_0_i16);
	}
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_r2;
	MR_decr_sp_and_return(6);
MR_def_label(check_hlds__format_call__follow_list_value_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__format_call, conj_id);
	MR_r2 = MR_r1;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(map__search_3_0,
		check_hlds__format_call__follow_list_value_5_0_i22);
MR_def_label(check_hlds__format_call__follow_list_value_5_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__format_call__follow_list_value_5_0_i21);
	}
	MR_r1 = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(4);
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(check_hlds__format_call__follow_list_value_5_0_i45);
	}
MR_def_label(check_hlds__format_call__follow_list_value_5_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__format_call_module26)
	MR_init_entry1(fn__check_hlds__format_call__project_dummy_to_print_1_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'project_dummy_to_print'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__check_hlds__format_call__project_dummy_to_print_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r1, 1);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__format_call_module27)
	MR_init_entry1(fn__check_hlds__format_call__project_var_to_print_1_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'project_var_to_print'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__check_hlds__format_call__project_var_to_print_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r1, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__format_call_module28)
	MR_init_entry1(fn__check_hlds__format_call__project_case_goal_1_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'project_case_goal'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__check_hlds__format_call__project_case_goal_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r1, 2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__format_call_module29)
	MR_init_entry1(__Unify___check_hlds__format_call__conj_id_0_0);
	MR_init_label1(__Unify___check_hlds__format_call__conj_id_0_0,4)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___check_hlds__format_call__conj_id_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___check_hlds__format_call__conj_id_0_0_i4);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_sv(1) == MR_sv(2));
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Unify___check_hlds__format_call__conj_id_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_int_3_0);

MR_BEGIN_MODULE(check_hlds__format_call_module30)
	MR_init_entry1(__Compare___check_hlds__format_call__conj_id_0_0);
	MR_init_label2(__Compare___check_hlds__format_call__conj_id_0_0,3,2)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___check_hlds__format_call__conj_id_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___check_hlds__format_call__conj_id_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___check_hlds__format_call__conj_id_0_0_i2);
MR_def_label(__Compare___check_hlds__format_call__conj_id_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___check_hlds__format_call__conj_id_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___tree234__tree234_2_0);

MR_BEGIN_MODULE(check_hlds__format_call_module31)
	MR_init_entry1(__Unify___check_hlds__format_call__conj_map_0_0);
	MR_init_label5(__Unify___check_hlds__format_call__conj_map_0_0,5,7,9,13,1)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___check_hlds__format_call__conj_map_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___check_hlds__format_call__conj_map_0_0_i13);
	}
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
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
	MR_sv(7) = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_r1 = MR_sv(7);
	MR_r2 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r3 = MR_ctfield(0, MR_tempr1, 0);
	MR_r4 = MR_ctfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___tree234__tree234_2_0,
		__Unify___check_hlds__format_call__conj_map_0_0_i5);
MR_def_label(__Unify___check_hlds__format_call__conj_map_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___check_hlds__format_call__conj_map_0_0_i1);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(check_hlds__format_call, list_skeleton_state);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(4);
	MR_np_call_localret_ent(__Unify___tree234__tree234_2_0,
		__Unify___check_hlds__format_call__conj_map_0_0_i7);
MR_def_label(__Unify___check_hlds__format_call__conj_map_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___check_hlds__format_call__conj_map_0_0_i1);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(check_hlds__format_call, what_to_print);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(5);
	MR_np_call_localret_ent(__Unify___tree234__tree234_2_0,
		__Unify___check_hlds__format_call__conj_map_0_0_i9);
MR_def_label(__Unify___check_hlds__format_call__conj_map_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___check_hlds__format_call__conj_map_0_0_i1);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_r1;
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(6);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(__Unify___tree234__tree234_2_0);
MR_def_label(__Unify___check_hlds__format_call__conj_map_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___check_hlds__format_call__conj_map_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___tree234__tree234_2_0);

MR_BEGIN_MODULE(check_hlds__format_call_module32)
	MR_init_entry1(__Compare___check_hlds__format_call__conj_map_0_0);
	MR_init_label6(__Compare___check_hlds__format_call__conj_map_0_0,3,2,6,11,16,41)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___check_hlds__format_call__conj_map_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___check_hlds__format_call__conj_map_0_0_i3);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___check_hlds__format_call__conj_map_0_0_i2);
MR_def_label(__Compare___check_hlds__format_call__conj_map_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___check_hlds__format_call__conj_map_0_0,2)
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
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_r2 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r3 = MR_ctfield(0, MR_tempr3, 0);
	MR_r4 = MR_ctfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___tree234__tree234_2_0,
		__Compare___check_hlds__format_call__conj_map_0_0_i6);
MR_def_label(__Compare___check_hlds__format_call__conj_map_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__format_call__conj_map_0_0_i41);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(check_hlds__format_call, list_skeleton_state);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(4);
	MR_np_call_localret_ent(__Compare___tree234__tree234_2_0,
		__Compare___check_hlds__format_call__conj_map_0_0_i11);
MR_def_label(__Compare___check_hlds__format_call__conj_map_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__format_call__conj_map_0_0_i41);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(check_hlds__format_call, what_to_print);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(5);
	MR_np_call_localret_ent(__Compare___tree234__tree234_2_0,
		__Compare___check_hlds__format_call__conj_map_0_0_i16);
MR_def_label(__Compare___check_hlds__format_call__conj_map_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__format_call__conj_map_0_0_i41);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_r2 = MR_r1;
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(6);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(__Compare___tree234__tree234_2_0);
MR_def_label(__Compare___check_hlds__format_call__conj_map_0_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__format_call_module33)
	MR_init_entry1(__Unify___check_hlds__format_call__conj_maps_0_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___check_hlds__format_call__conj_maps_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__format_call, conj_id);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(check_hlds__format_call, conj_map);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Unify___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__format_call_module34)
	MR_init_entry1(__Compare___check_hlds__format_call__conj_maps_0_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___check_hlds__format_call__conj_maps_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__format_call, conj_id);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(check_hlds__format_call, conj_map);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Compare___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__format_call_module35)
	MR_init_entry1(__Unify___check_hlds__format_call__conj_pred_map_0_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___check_hlds__format_call__conj_pred_map_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__format_call, conj_id);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_r1;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Unify___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__format_call_module36)
	MR_init_entry1(__Compare___check_hlds__format_call__conj_pred_map_0_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___check_hlds__format_call__conj_pred_map_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__format_call, conj_id);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_r1;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Compare___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__format_call_module37)
	MR_init_entry1(__Unify___check_hlds__format_call__eqv_map_0_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___check_hlds__format_call__eqv_map_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_r1;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Unify___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__format_call_module38)
	MR_init_entry1(__Compare___check_hlds__format_call__eqv_map_0_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___check_hlds__format_call__eqv_map_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_r1;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Compare___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__format_call_module39)
	MR_init_entry1(__Unify___check_hlds__format_call__fc_goal_path_map_0_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___check_hlds__format_call__fc_goal_path_map_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__program_representation, goal_path);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(check_hlds__format_call, fc_opt_goal_info);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Unify___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__format_call_module40)
	MR_init_entry1(__Compare___check_hlds__format_call__fc_goal_path_map_0_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___check_hlds__format_call__fc_goal_path_map_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__program_representation, goal_path);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(check_hlds__format_call, fc_opt_goal_info);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Compare___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___hlds__hlds_goal__hlds_goal_0_0);
MR_decl_entry(__Unify___set_tree234__set_tree234_1_0);

MR_BEGIN_MODULE(check_hlds__format_call_module41)
	MR_init_entry1(__Unify___check_hlds__format_call__fc_opt_goal_info_0_0);
	MR_init_label3(__Unify___check_hlds__format_call__fc_opt_goal_info_0_0,4,9,1)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___check_hlds__format_call__fc_opt_goal_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___check_hlds__format_call__fc_opt_goal_info_0_0_i9);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_ctfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_ctfield(0, MR_tempr2, 1);
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	MR_r2 = MR_ctfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___hlds__hlds_goal__hlds_goal_0_0,
		__Unify___check_hlds__format_call__fc_opt_goal_info_0_0_i4);
MR_def_label(__Unify___check_hlds__format_call__fc_opt_goal_info_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___check_hlds__format_call__fc_opt_goal_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___set_tree234__set_tree234_1_0);
MR_def_label(__Unify___check_hlds__format_call__fc_opt_goal_info_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___check_hlds__format_call__fc_opt_goal_info_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___hlds__hlds_goal__hlds_goal_0_0);
MR_decl_entry(__Compare___set_tree234__set_tree234_1_0);

MR_BEGIN_MODULE(check_hlds__format_call_module42)
	MR_init_entry1(__Compare___check_hlds__format_call__fc_opt_goal_info_0_0);
	MR_init_label4(__Compare___check_hlds__format_call__fc_opt_goal_info_0_0,3,2,5,22)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___check_hlds__format_call__fc_opt_goal_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___check_hlds__format_call__fc_opt_goal_info_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___check_hlds__format_call__fc_opt_goal_info_0_0_i2);
MR_def_label(__Compare___check_hlds__format_call__fc_opt_goal_info_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___check_hlds__format_call__fc_opt_goal_info_0_0,2)
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
	MR_r1 = MR_ctfield(0, MR_tempr3, 0);
	MR_r2 = MR_ctfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___hlds__hlds_goal__hlds_goal_0_0,
		__Compare___check_hlds__format_call__fc_opt_goal_info_0_0_i5);
MR_def_label(__Compare___check_hlds__format_call__fc_opt_goal_info_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__format_call__fc_opt_goal_info_0_0_i22);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___set_tree234__set_tree234_1_0);
MR_def_label(__Compare___check_hlds__format_call__fc_opt_goal_info_0_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___list__list_1_0);

MR_BEGIN_MODULE(check_hlds__format_call_module43)
	MR_init_entry1(__Unify___check_hlds__format_call__follow_skeleton_result_0_0);
	MR_init_label4(__Unify___check_hlds__format_call__follow_skeleton_result_0_0,15,5,8,1)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___check_hlds__format_call__follow_skeleton_result_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___check_hlds__format_call__follow_skeleton_result_0_0_i15);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(__Unify___check_hlds__format_call__follow_skeleton_result_0_0_i5);
	}
	MR_r1 = (MR_sv(2) == MR_tempr1);
	MR_decr_sp(4);
	MR_proceed();
	}
MR_def_label(__Unify___check_hlds__format_call__follow_skeleton_result_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___check_hlds__format_call__follow_skeleton_result_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Unify___check_hlds__format_call__follow_skeleton_result_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_ctfield(1, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_ctfield(1, MR_tempr2, 1);
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_r1 = MR_sv(3);
	MR_r2 = MR_ctfield(1, MR_tempr1, 0);
	MR_r3 = MR_ctfield(1, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___check_hlds__format_call__follow_skeleton_result_0_0_i8);
MR_def_label(__Unify___check_hlds__format_call__follow_skeleton_result_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___check_hlds__format_call__follow_skeleton_result_0_0_i1);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___check_hlds__format_call__follow_skeleton_result_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___list__list_1_0);

MR_BEGIN_MODULE(check_hlds__format_call_module44)
	MR_init_entry1(__Compare___check_hlds__format_call__follow_skeleton_result_0_0);
	MR_init_label6(__Compare___check_hlds__format_call__follow_skeleton_result_0_0,26,7,5,9,12,18)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___check_hlds__format_call__follow_skeleton_result_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___check_hlds__format_call__follow_skeleton_result_0_0_i26);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__format_call__follow_skeleton_result_0_0_i5);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__format_call__follow_skeleton_result_0_0_i7);
	}
MR_def_label(__Compare___check_hlds__format_call__follow_skeleton_result_0_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___check_hlds__format_call__follow_skeleton_result_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___check_hlds__format_call__follow_skeleton_result_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__format_call__follow_skeleton_result_0_0_i9);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___check_hlds__format_call__follow_skeleton_result_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(1);
	MR_tempr1 = MR_ctfield(1, MR_tempr5, 1);
	MR_tempr6 = MR_sv(2);
	MR_tempr2 = MR_ctfield(1, MR_tempr6, 1);
	MR_tempr3 = MR_tempr5;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr6;
	MR_sv(2) = MR_tempr1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_r2 = MR_ctfield(1, MR_tempr3, 0);
	MR_r3 = MR_ctfield(1, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___check_hlds__format_call__follow_skeleton_result_0_0_i12);
MR_def_label(__Compare___check_hlds__format_call__follow_skeleton_result_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__format_call__follow_skeleton_result_0_0_i18);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___check_hlds__format_call__follow_skeleton_result_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__format_call_module45)
	MR_init_entry1(__Unify___check_hlds__format_call__format_call_kind_0_0);
	MR_init_label8(__Unify___check_hlds__format_call__format_call_kind_0_0,29,5,7,11,13,15,19,21)
	MR_init_label4(__Unify___check_hlds__format_call__format_call_kind_0_0,23,25,37,1)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___check_hlds__format_call__format_call_kind_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___check_hlds__format_call__format_call_kind_0_0_i37);
	}
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(1)),
		MR_LABEL_AP(__Unify___check_hlds__format_call__format_call_kind_0_0_i29) MR_AND
		MR_LABEL_AP(__Unify___check_hlds__format_call__format_call_kind_0_0_i5) MR_AND
		MR_LABEL_AP(__Unify___check_hlds__format_call__format_call_kind_0_0_i11) MR_AND
		MR_LABEL_AP(__Unify___check_hlds__format_call__format_call_kind_0_0_i19));
MR_def_label(__Unify___check_hlds__format_call__format_call_kind_0_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Unify___check_hlds__format_call__format_call_kind_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_ctfield(0, MR_sv(1), 0);
	MR_r3 = MR_ctfield(0, MR_sv(2), 0);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(__Unify___term__var_1_0);
MR_def_label(__Unify___check_hlds__format_call__format_call_kind_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___check_hlds__format_call__format_call_kind_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_ctfield(1, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_ctfield(1, MR_tempr2, 1);
	MR_sv(3) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r1 = MR_sv(3);
	MR_r2 = MR_ctfield(1, MR_tempr1, 0);
	MR_r3 = MR_ctfield(1, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___term__var_1_0,
		__Unify___check_hlds__format_call__format_call_kind_0_0_i7);
MR_def_label(__Unify___check_hlds__format_call__format_call_kind_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___check_hlds__format_call__format_call_kind_0_0_i1);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(__Unify___term__var_1_0);
MR_def_label(__Unify___check_hlds__format_call__format_call_kind_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Unify___check_hlds__format_call__format_call_kind_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_ctfield(2, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_ctfield(2, MR_tempr1, 2);
	MR_sv(3) = MR_ctfield(2, MR_tempr2, 1);
	MR_sv(4) = MR_ctfield(2, MR_tempr2, 2);
	MR_sv(5) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r1 = MR_sv(5);
	MR_r2 = MR_ctfield(2, MR_tempr1, 0);
	MR_r3 = MR_ctfield(2, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___term__var_1_0,
		__Unify___check_hlds__format_call__format_call_kind_0_0_i13);
MR_def_label(__Unify___check_hlds__format_call__format_call_kind_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___check_hlds__format_call__format_call_kind_0_0_i1);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(__Unify___term__var_1_0,
		__Unify___check_hlds__format_call__format_call_kind_0_0_i15);
MR_def_label(__Unify___check_hlds__format_call__format_call_kind_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___check_hlds__format_call__format_call_kind_0_0_i1);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(__Unify___term__var_1_0);
MR_def_label(__Unify___check_hlds__format_call__format_call_kind_0_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),3)) {
		MR_GOTO_LAB(__Unify___check_hlds__format_call__format_call_kind_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_ctfield(3, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_ctfield(3, MR_tempr1, 2);
	MR_sv(3) = MR_ctfield(3, MR_tempr1, 3);
	MR_sv(4) = MR_ctfield(3, MR_tempr2, 1);
	MR_sv(5) = MR_ctfield(3, MR_tempr2, 2);
	MR_sv(6) = MR_ctfield(3, MR_tempr2, 3);
	MR_sv(7) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r1 = MR_sv(7);
	MR_r2 = MR_ctfield(3, MR_tempr1, 0);
	MR_r3 = MR_ctfield(3, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___term__var_1_0,
		__Unify___check_hlds__format_call__format_call_kind_0_0_i21);
MR_def_label(__Unify___check_hlds__format_call__format_call_kind_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___check_hlds__format_call__format_call_kind_0_0_i1);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(__Unify___term__var_1_0,
		__Unify___check_hlds__format_call__format_call_kind_0_0_i23);
MR_def_label(__Unify___check_hlds__format_call__format_call_kind_0_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___check_hlds__format_call__format_call_kind_0_0_i1);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(__Unify___term__var_1_0,
		__Unify___check_hlds__format_call__format_call_kind_0_0_i25);
MR_def_label(__Unify___check_hlds__format_call__format_call_kind_0_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___check_hlds__format_call__format_call_kind_0_0_i1);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(6);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(__Unify___term__var_1_0);
MR_def_label(__Unify___check_hlds__format_call__format_call_kind_0_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___check_hlds__format_call__format_call_kind_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___term__var_1_0);

MR_BEGIN_MODULE(check_hlds__format_call_module46)
	MR_init_entry1(__Compare___check_hlds__format_call__format_call_kind_0_0);
	MR_init_label8(__Compare___check_hlds__format_call__format_call_kind_0_0,3,68,5,7,9,21,24,26)
	MR_init_label8(__Compare___check_hlds__format_call__format_call_kind_0_0,30,36,42,45,46,48,52,56)
	MR_init_label1(__Compare___check_hlds__format_call__format_call_kind_0_0,140)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___check_hlds__format_call__format_call_kind_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___check_hlds__format_call__format_call_kind_0_0_i3);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(1)),
		MR_LABEL_AP(__Compare___check_hlds__format_call__format_call_kind_0_0_i68) MR_AND
		MR_LABEL_AP(__Compare___check_hlds__format_call__format_call_kind_0_0_i5) MR_AND
		MR_LABEL_AP(__Compare___check_hlds__format_call__format_call_kind_0_0_i21) MR_AND
		MR_LABEL_AP(__Compare___check_hlds__format_call__format_call_kind_0_0_i42));
MR_def_label(__Compare___check_hlds__format_call__format_call_kind_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___check_hlds__format_call__format_call_kind_0_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_tag(MR_sv(2)),0)) {
		MR_GOTO_LAB(__Compare___check_hlds__format_call__format_call_kind_0_0_i36);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_ctfield(0, MR_sv(1), 0);
	MR_r3 = MR_ctfield(0, MR_sv(2), 0);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(__Compare___term__var_1_0);
MR_def_label(__Compare___check_hlds__format_call__format_call_kind_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(2)),
		MR_LABEL_AP(__Compare___check_hlds__format_call__format_call_kind_0_0_i45) MR_AND
		MR_LABEL_AP(__Compare___check_hlds__format_call__format_call_kind_0_0_i7) MR_AND
		MR_LABEL_AP(__Compare___check_hlds__format_call__format_call_kind_0_0_i36) MR_AND
		MR_LABEL_AP(__Compare___check_hlds__format_call__format_call_kind_0_0_i36));
MR_def_label(__Compare___check_hlds__format_call__format_call_kind_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(1);
	MR_tempr1 = MR_ctfield(1, MR_tempr5, 1);
	MR_tempr6 = MR_sv(2);
	MR_tempr2 = MR_ctfield(1, MR_tempr6, 1);
	MR_tempr3 = MR_tempr5;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr6;
	MR_sv(2) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_ctfield(1, MR_tempr3, 0);
	MR_r3 = MR_ctfield(1, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___term__var_1_0,
		__Compare___check_hlds__format_call__format_call_kind_0_0_i9);
MR_def_label(__Compare___check_hlds__format_call__format_call_kind_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__format_call__format_call_kind_0_0_i140);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(__Compare___term__var_1_0);
MR_def_label(__Compare___check_hlds__format_call__format_call_kind_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(2)),
		MR_LABEL_AP(__Compare___check_hlds__format_call__format_call_kind_0_0_i45) MR_AND
		MR_LABEL_AP(__Compare___check_hlds__format_call__format_call_kind_0_0_i45) MR_AND
		MR_LABEL_AP(__Compare___check_hlds__format_call__format_call_kind_0_0_i24) MR_AND
		MR_LABEL_AP(__Compare___check_hlds__format_call__format_call_kind_0_0_i36));
MR_def_label(__Compare___check_hlds__format_call__format_call_kind_0_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(1);
	MR_sv(4) = MR_ctfield(2, MR_tempr5, 1);
	MR_sv(3) = MR_ctfield(2, MR_tempr5, 2);
	MR_tempr6 = MR_sv(2);
	MR_tempr1 = MR_ctfield(2, MR_tempr6, 2);
	MR_tempr2 = MR_ctfield(2, MR_tempr6, 1);
	MR_tempr3 = MR_tempr5;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr6;
	MR_sv(2) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_ctfield(2, MR_tempr3, 0);
	MR_r3 = MR_ctfield(2, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___term__var_1_0,
		__Compare___check_hlds__format_call__format_call_kind_0_0_i26);
MR_def_label(__Compare___check_hlds__format_call__format_call_kind_0_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__format_call__format_call_kind_0_0_i140);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(__Compare___term__var_1_0,
		__Compare___check_hlds__format_call__format_call_kind_0_0_i30);
MR_def_label(__Compare___check_hlds__format_call__format_call_kind_0_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__format_call__format_call_kind_0_0_i140);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(__Compare___term__var_1_0);
MR_def_label(__Compare___check_hlds__format_call__format_call_kind_0_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(7);
MR_def_label(__Compare___check_hlds__format_call__format_call_kind_0_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_tag(MR_sv(2)),3)) {
		MR_GOTO_LAB(__Compare___check_hlds__format_call__format_call_kind_0_0_i46);
	}
MR_def_label(__Compare___check_hlds__format_call__format_call_kind_0_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(7);
MR_def_label(__Compare___check_hlds__format_call__format_call_kind_0_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(1);
	MR_sv(6) = MR_ctfield(3, MR_tempr5, 1);
	MR_sv(5) = MR_ctfield(3, MR_tempr5, 2);
	MR_sv(4) = MR_ctfield(3, MR_tempr5, 3);
	MR_tempr6 = MR_sv(2);
	MR_sv(3) = MR_ctfield(3, MR_tempr6, 3);
	MR_tempr1 = MR_ctfield(3, MR_tempr6, 2);
	MR_tempr2 = MR_ctfield(3, MR_tempr6, 1);
	MR_tempr3 = MR_tempr5;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr6;
	MR_sv(2) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_ctfield(3, MR_tempr3, 0);
	MR_r3 = MR_ctfield(3, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___term__var_1_0,
		__Compare___check_hlds__format_call__format_call_kind_0_0_i48);
MR_def_label(__Compare___check_hlds__format_call__format_call_kind_0_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__format_call__format_call_kind_0_0_i140);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(__Compare___term__var_1_0,
		__Compare___check_hlds__format_call__format_call_kind_0_0_i52);
MR_def_label(__Compare___check_hlds__format_call__format_call_kind_0_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__format_call__format_call_kind_0_0_i140);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(__Compare___term__var_1_0,
		__Compare___check_hlds__format_call__format_call_kind_0_0_i56);
MR_def_label(__Compare___check_hlds__format_call__format_call_kind_0_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__format_call__format_call_kind_0_0_i140);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(3);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(__Compare___term__var_1_0);
MR_def_label(__Compare___check_hlds__format_call__format_call_kind_0_0,140)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___mdbcomp__program_representation__goal_path_0_0);
MR_decl_entry(__Unify___term__context_0_0);

MR_BEGIN_MODULE(check_hlds__format_call_module47)
	MR_init_entry1(__Unify___check_hlds__format_call__format_call_site_0_0);
	MR_init_label8(__Unify___check_hlds__format_call__format_call_site_0_0,4,6,8,10,12,14,18,1)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___check_hlds__format_call__format_call_site_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(17);
	MR_sv(17) = (MR_Word) MR_succip;
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___check_hlds__format_call__format_call_site_0_0_i18);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_ctfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 2);
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 3);
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 4);
	MR_sv(5) = MR_ctfield(0, MR_tempr1, 5);
	MR_sv(6) = MR_ctfield(0, MR_tempr1, 6);
	MR_sv(7) = MR_ctfield(0, MR_tempr1, 7);
	MR_sv(8) = MR_ctfield(0, MR_tempr1, 8);
	MR_sv(9) = MR_ctfield(0, MR_tempr2, 1);
	MR_sv(10) = MR_ctfield(0, MR_tempr2, 2);
	MR_sv(11) = MR_ctfield(0, MR_tempr2, 3);
	MR_sv(12) = MR_ctfield(0, MR_tempr2, 4);
	MR_sv(13) = MR_ctfield(0, MR_tempr2, 5);
	MR_sv(14) = MR_ctfield(0, MR_tempr2, 6);
	MR_sv(15) = MR_ctfield(0, MR_tempr2, 7);
	MR_sv(16) = MR_ctfield(0, MR_tempr2, 8);
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	MR_r2 = MR_ctfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___mdbcomp__program_representation__goal_path_0_0,
		__Unify___check_hlds__format_call__format_call_site_0_0_i4);
MR_def_label(__Unify___check_hlds__format_call__format_call_site_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___check_hlds__format_call__format_call_site_0_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(9);
	}
	MR_np_call_localret_ent(__Unify___term__var_1_0,
		__Unify___check_hlds__format_call__format_call_site_0_0_i6);
MR_def_label(__Unify___check_hlds__format_call__format_call_site_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___check_hlds__format_call__format_call_site_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(10);
	MR_np_call_localret_ent(__Unify___term__var_1_0,
		__Unify___check_hlds__format_call__format_call_site_0_0_i8);
MR_def_label(__Unify___check_hlds__format_call__format_call_site_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___check_hlds__format_call__format_call_site_0_0_i1);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(11);
	MR_np_call_localret_ent(__Unify___check_hlds__format_call__format_call_kind_0_0,
		__Unify___check_hlds__format_call__format_call_site_0_0_i10);
MR_def_label(__Unify___check_hlds__format_call__format_call_site_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___check_hlds__format_call__format_call_site_0_0_i1);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(12);
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		__Unify___check_hlds__format_call__format_call_site_0_0_i12);
MR_def_label(__Unify___check_hlds__format_call__format_call_site_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___check_hlds__format_call__format_call_site_0_0_i1);
	}
	if ((strcmp((char *) (MR_Word *) MR_sv(5), (char *) (MR_Word *) MR_sv(13)) != 0)) {
		MR_GOTO_LAB(__Unify___check_hlds__format_call__format_call_site_0_0_i1);
	}
	if ((MR_sv(6) != MR_sv(14))) {
		MR_GOTO_LAB(__Unify___check_hlds__format_call__format_call_site_0_0_i1);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(15);
	MR_np_call_localret_ent(__Unify___term__context_0_0,
		__Unify___check_hlds__format_call__format_call_site_0_0_i14);
MR_def_label(__Unify___check_hlds__format_call__format_call_site_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___check_hlds__format_call__format_call_site_0_0_i1);
	}
	if ((MR_sv(8) == MR_sv(16))) {
		MR_GOTO_LAB(__Unify___check_hlds__format_call__format_call_site_0_0_i18);
	}
	MR_r1 = (MR_sv(8) == MR_sv(16));
	MR_decr_sp_and_return(17);
MR_def_label(__Unify___check_hlds__format_call__format_call_site_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(17);
	MR_decr_sp(17);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___check_hlds__format_call__format_call_site_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(17);
	MR_decr_sp(17);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___mdbcomp__program_representation__goal_path_0_0);
MR_decl_entry(__Compare___mdbcomp__prim_data__sym_name_0_0);
MR_decl_entry(private_builtin__builtin_compare_string_3_0);
MR_decl_entry(__Compare___term__context_0_0);

MR_BEGIN_MODULE(check_hlds__format_call_module48)
	MR_init_entry1(__Compare___check_hlds__format_call__format_call_site_0_0);
	MR_init_label8(__Compare___check_hlds__format_call__format_call_site_0_0,3,2,5,9,13,17,21,25)
	MR_init_label3(__Compare___check_hlds__format_call__format_call_site_0_0,29,33,77)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___check_hlds__format_call__format_call_site_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___check_hlds__format_call__format_call_site_0_0_i3);
	}
	MR_incr_sp(17);
	MR_sv(17) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___check_hlds__format_call__format_call_site_0_0_i2);
MR_def_label(__Compare___check_hlds__format_call__format_call_site_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___check_hlds__format_call__format_call_site_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(16) = MR_ctfield(0, MR_tempr5, 8);
	MR_sv(15) = MR_ctfield(0, MR_tempr5, 7);
	MR_sv(14) = MR_ctfield(0, MR_tempr5, 6);
	MR_sv(13) = MR_ctfield(0, MR_tempr5, 5);
	MR_sv(12) = MR_ctfield(0, MR_tempr5, 4);
	MR_sv(11) = MR_ctfield(0, MR_tempr5, 3);
	MR_sv(10) = MR_ctfield(0, MR_tempr5, 2);
	MR_sv(9) = MR_ctfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_sv(8) = MR_ctfield(0, MR_tempr6, 8);
	MR_sv(7) = MR_ctfield(0, MR_tempr6, 7);
	MR_sv(6) = MR_ctfield(0, MR_tempr6, 6);
	MR_sv(5) = MR_ctfield(0, MR_tempr6, 5);
	MR_sv(4) = MR_ctfield(0, MR_tempr6, 4);
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
	MR_np_call_localret_ent(__Compare___mdbcomp__program_representation__goal_path_0_0,
		__Compare___check_hlds__format_call__format_call_site_0_0_i5);
MR_def_label(__Compare___check_hlds__format_call__format_call_site_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__format_call__format_call_site_0_0_i77);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(9);
	MR_np_call_localret_ent(__Compare___term__var_1_0,
		__Compare___check_hlds__format_call__format_call_site_0_0_i9);
MR_def_label(__Compare___check_hlds__format_call__format_call_site_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__format_call__format_call_site_0_0_i77);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(10);
	MR_np_call_localret_ent(__Compare___term__var_1_0,
		__Compare___check_hlds__format_call__format_call_site_0_0_i13);
MR_def_label(__Compare___check_hlds__format_call__format_call_site_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__format_call__format_call_site_0_0_i77);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(11);
	MR_np_call_localret_ent(__Compare___check_hlds__format_call__format_call_kind_0_0,
		__Compare___check_hlds__format_call__format_call_site_0_0_i17);
MR_def_label(__Compare___check_hlds__format_call__format_call_site_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__format_call__format_call_site_0_0_i77);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(12);
	MR_np_call_localret_ent(__Compare___mdbcomp__prim_data__sym_name_0_0,
		__Compare___check_hlds__format_call__format_call_site_0_0_i21);
MR_def_label(__Compare___check_hlds__format_call__format_call_site_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__format_call__format_call_site_0_0_i77);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(13);
	MR_np_call_localret_ent(private_builtin__builtin_compare_string_3_0,
		__Compare___check_hlds__format_call__format_call_site_0_0_i25);
MR_def_label(__Compare___check_hlds__format_call__format_call_site_0_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__format_call__format_call_site_0_0_i77);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(14);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___check_hlds__format_call__format_call_site_0_0_i29);
MR_def_label(__Compare___check_hlds__format_call__format_call_site_0_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__format_call__format_call_site_0_0_i77);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(15);
	MR_np_call_localret_ent(__Compare___term__context_0_0,
		__Compare___check_hlds__format_call__format_call_site_0_0_i33);
MR_def_label(__Compare___check_hlds__format_call__format_call_site_0_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__format_call__format_call_site_0_0_i77);
	}
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(16);
	MR_succip_word = MR_sv(17);
	MR_decr_sp(17);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___check_hlds__format_call__format_call_site_0_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(17);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__format_call_module49)
	MR_init_entry1(__Unify___check_hlds__format_call__list_element_map_0_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___check_hlds__format_call__list_element_map_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(check_hlds__format_call, what_to_print);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Unify___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__format_call_module50)
	MR_init_entry1(__Compare___check_hlds__format_call__list_element_map_0_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___check_hlds__format_call__list_element_map_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(check_hlds__format_call, what_to_print);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Compare___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__format_call_module51)
	MR_init_entry1(__Unify___check_hlds__format_call__list_skeleton_map_0_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___check_hlds__format_call__list_skeleton_map_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(check_hlds__format_call, list_skeleton_state);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Unify___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__format_call_module52)
	MR_init_entry1(__Compare___check_hlds__format_call__list_skeleton_map_0_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___check_hlds__format_call__list_skeleton_map_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(check_hlds__format_call, list_skeleton_state);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Compare___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__format_call_module53)
	MR_init_entry1(__Unify___check_hlds__format_call__list_skeleton_state_0_0);
	MR_init_label4(__Unify___check_hlds__format_call__list_skeleton_state_0_0,14,5,7,1)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___check_hlds__format_call__list_skeleton_state_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___check_hlds__format_call__list_skeleton_state_0_0_i14);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(__Unify___check_hlds__format_call__list_skeleton_state_0_0_i5);
	}
	MR_r1 = (MR_sv(2) == MR_tempr1);
	MR_decr_sp(4);
	MR_proceed();
	}
MR_def_label(__Unify___check_hlds__format_call__list_skeleton_state_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___check_hlds__format_call__list_skeleton_state_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Unify___check_hlds__format_call__list_skeleton_state_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_ctfield(1, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_ctfield(1, MR_tempr2, 1);
	MR_sv(3) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r1 = MR_sv(3);
	MR_r2 = MR_ctfield(1, MR_tempr1, 0);
	MR_r3 = MR_ctfield(1, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___term__var_1_0,
		__Unify___check_hlds__format_call__list_skeleton_state_0_0_i7);
MR_def_label(__Unify___check_hlds__format_call__list_skeleton_state_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___check_hlds__format_call__list_skeleton_state_0_0_i1);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(__Unify___term__var_1_0);
MR_def_label(__Unify___check_hlds__format_call__list_skeleton_state_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__format_call_module54)
	MR_init_entry1(__Compare___check_hlds__format_call__list_skeleton_state_0_0);
	MR_init_label6(__Compare___check_hlds__format_call__list_skeleton_state_0_0,24,7,5,9,11,16)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___check_hlds__format_call__list_skeleton_state_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___check_hlds__format_call__list_skeleton_state_0_0_i24);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__format_call__list_skeleton_state_0_0_i5);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__format_call__list_skeleton_state_0_0_i7);
	}
MR_def_label(__Compare___check_hlds__format_call__list_skeleton_state_0_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___check_hlds__format_call__list_skeleton_state_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___check_hlds__format_call__list_skeleton_state_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__format_call__list_skeleton_state_0_0_i9);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___check_hlds__format_call__list_skeleton_state_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(1);
	MR_tempr1 = MR_ctfield(1, MR_tempr5, 1);
	MR_tempr6 = MR_sv(2);
	MR_tempr2 = MR_ctfield(1, MR_tempr6, 1);
	MR_tempr3 = MR_tempr5;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr6;
	MR_sv(2) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_ctfield(1, MR_tempr3, 0);
	MR_r3 = MR_ctfield(1, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___term__var_1_0,
		__Compare___check_hlds__format_call__list_skeleton_state_0_0_i11);
MR_def_label(__Compare___check_hlds__format_call__list_skeleton_state_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__format_call__list_skeleton_state_0_0_i16);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___term__var_1_0);
MR_def_label(__Compare___check_hlds__format_call__list_skeleton_state_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__format_call_module55)
	MR_init_entry1(__Unify___check_hlds__format_call__string_component_0_0);
	MR_init_label7(__Unify___check_hlds__format_call__string_component_0_0,5,15,11,26,7,28,1)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___check_hlds__format_call__string_component_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___check_hlds__format_call__string_component_0_0_i28);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(1)),
		MR_LABEL_AP(__Unify___check_hlds__format_call__string_component_0_0_i5) MR_AND
		MR_LABEL_AP(__Unify___check_hlds__format_call__string_component_0_0_i15) MR_AND
		MR_LABEL_AP(__Unify___check_hlds__format_call__string_component_0_0_i11) MR_AND
		MR_LABEL_AP(__Unify___check_hlds__format_call__string_component_0_0_i26));
MR_def_label(__Unify___check_hlds__format_call__string_component_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Unify___check_hlds__format_call__string_component_0_0_i1);
	}
	MR_r1 = MR_ctfield(0, MR_sv(1), 0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_sv(2), 0);
	MR_r1 = (strcmp((char *) (MR_Word *) MR_r1, (char *) (MR_Word *) MR_tempr1) == 0);
	MR_decr_sp_and_return(3);
	}
MR_def_label(__Unify___check_hlds__format_call__string_component_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___check_hlds__format_call__string_component_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_ctfield(1, MR_sv(1), 0);
	MR_r3 = MR_ctfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___term__var_1_0);
MR_def_label(__Unify___check_hlds__format_call__string_component_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Unify___check_hlds__format_call__string_component_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_ctfield(2, MR_sv(1), 0);
	MR_r3 = MR_ctfield(2, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___term__var_1_0);
MR_def_label(__Unify___check_hlds__format_call__string_component_0_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_ctfield(3, MR_sv(1), 0),0)) {
		MR_GOTO_LAB(__Unify___check_hlds__format_call__string_component_0_0_i7);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(__Unify___check_hlds__format_call__string_component_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_ctfield(3, MR_sv(1), 1);
	MR_r3 = MR_ctfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___term__var_1_0);
MR_def_label(__Unify___check_hlds__format_call__string_component_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Unify___check_hlds__format_call__string_component_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_ctfield(3, MR_sv(1), 1);
	MR_r3 = MR_ctfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___term__var_1_0);
MR_def_label(__Unify___check_hlds__format_call__string_component_0_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___check_hlds__format_call__string_component_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__format_call_module56)
	MR_init_entry1(__Compare___check_hlds__format_call__string_component_0_0);
	MR_init_label8(__Compare___check_hlds__format_call__string_component_0_0,3,5,7,16,44,97,31,35)
	MR_init_label4(__Compare___check_hlds__format_call__string_component_0_0,73,81,18,82)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___check_hlds__format_call__string_component_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___check_hlds__format_call__string_component_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(1)),
		MR_LABEL_AP(__Compare___check_hlds__format_call__string_component_0_0_i5) MR_AND
		MR_LABEL_AP(__Compare___check_hlds__format_call__string_component_0_0_i44) MR_AND
		MR_LABEL_AP(__Compare___check_hlds__format_call__string_component_0_0_i31) MR_AND
		MR_LABEL_AP(__Compare___check_hlds__format_call__string_component_0_0_i73));
MR_def_label(__Compare___check_hlds__format_call__string_component_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___check_hlds__format_call__string_component_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(2)),
		MR_LABEL_AP(__Compare___check_hlds__format_call__string_component_0_0_i7) MR_AND
		MR_LABEL_AP(__Compare___check_hlds__format_call__string_component_0_0_i97) MR_AND
		MR_LABEL_AP(__Compare___check_hlds__format_call__string_component_0_0_i97) MR_AND
		MR_LABEL_AP(__Compare___check_hlds__format_call__string_component_0_0_i16));
MR_def_label(__Compare___check_hlds__format_call__string_component_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_sv(1), 0);
	MR_r2 = MR_ctfield(0, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
MR_def_label(__Compare___check_hlds__format_call__string_component_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_ctfield(3, MR_sv(2), 0),0)) {
		MR_GOTO_LAB(__Compare___check_hlds__format_call__string_component_0_0_i97);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___check_hlds__format_call__string_component_0_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(2)),
		MR_LABEL_AP(__Compare___check_hlds__format_call__string_component_0_0_i82) MR_AND
		MR_LABEL_AP(__Compare___check_hlds__format_call__string_component_0_0_i35) MR_AND
		MR_LABEL_AP(__Compare___check_hlds__format_call__string_component_0_0_i97) MR_AND
		MR_LABEL_AP(__Compare___check_hlds__format_call__string_component_0_0_i97));
MR_def_label(__Compare___check_hlds__format_call__string_component_0_0,97)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___check_hlds__format_call__string_component_0_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(2)),
		MR_LABEL_AP(__Compare___check_hlds__format_call__string_component_0_0_i82) MR_AND
		MR_LABEL_AP(__Compare___check_hlds__format_call__string_component_0_0_i82) MR_AND
		MR_LABEL_AP(__Compare___check_hlds__format_call__string_component_0_0_i35) MR_AND
		MR_LABEL_AP(__Compare___check_hlds__format_call__string_component_0_0_i97));
MR_def_label(__Compare___check_hlds__format_call__string_component_0_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_const_mask_field(MR_sv(1), 0);
	MR_r3 = MR_const_mask_field(MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___term__var_1_0);
MR_def_label(__Compare___check_hlds__format_call__string_component_0_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_ctfield(3, MR_sv(1), 0),0)) {
		MR_GOTO_LAB(__Compare___check_hlds__format_call__string_component_0_0_i18);
	}
	if (MR_INT_NE(MR_tag(MR_sv(2)),3)) {
		MR_GOTO_LAB(__Compare___check_hlds__format_call__string_component_0_0_i82);
	}
	if (MR_INT_NE(MR_ctfield(3, MR_sv(2), 0),0)) {
		MR_GOTO_LAB(__Compare___check_hlds__format_call__string_component_0_0_i97);
	}
MR_def_label(__Compare___check_hlds__format_call__string_component_0_0,81)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_ctfield(3, MR_sv(1), 1);
	MR_r3 = MR_ctfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___term__var_1_0);
MR_def_label(__Compare___check_hlds__format_call__string_component_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_tag(MR_sv(2)),3)) {
		MR_GOTO_LAB(__Compare___check_hlds__format_call__string_component_0_0_i82);
	}
	if (MR_INT_NE(MR_ctfield(3, MR_sv(2), 0),0)) {
		MR_GOTO_LAB(__Compare___check_hlds__format_call__string_component_0_0_i81);
	}
MR_def_label(__Compare___check_hlds__format_call__string_component_0_0,82)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__format_call_module57)
	MR_init_entry1(__Unify___check_hlds__format_call__string_map_0_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___check_hlds__format_call__string_map_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Unify___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__format_call_module58)
	MR_init_entry1(__Compare___check_hlds__format_call__string_map_0_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___check_hlds__format_call__string_map_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Compare___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___string__poly_type_0_0);

MR_BEGIN_MODULE(check_hlds__format_call_module59)
	MR_init_entry1(__Unify___check_hlds__format_call__what_to_print_0_0);
	MR_init_label3(__Unify___check_hlds__format_call__what_to_print_0_0,4,8,1)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___check_hlds__format_call__what_to_print_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___check_hlds__format_call__what_to_print_0_0_i8);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_ctfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_ctfield(0, MR_tempr2, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_ctfield(0, MR_tempr1, 0);
	MR_r3 = MR_ctfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___term__var_1_0,
		__Unify___check_hlds__format_call__what_to_print_0_0_i4);
MR_def_label(__Unify___check_hlds__format_call__what_to_print_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___check_hlds__format_call__what_to_print_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___string__poly_type_0_0);
MR_def_label(__Unify___check_hlds__format_call__what_to_print_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___check_hlds__format_call__what_to_print_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___string__poly_type_0_0);

MR_BEGIN_MODULE(check_hlds__format_call_module60)
	MR_init_entry1(__Compare___check_hlds__format_call__what_to_print_0_0);
	MR_init_label4(__Compare___check_hlds__format_call__what_to_print_0_0,3,2,5,21)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___check_hlds__format_call__what_to_print_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___check_hlds__format_call__what_to_print_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___check_hlds__format_call__what_to_print_0_0_i2);
MR_def_label(__Compare___check_hlds__format_call__what_to_print_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___check_hlds__format_call__what_to_print_0_0,2)
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
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_ctfield(0, MR_tempr3, 0);
	MR_r3 = MR_ctfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___term__var_1_0,
		__Compare___check_hlds__format_call__what_to_print_0_0_i5);
MR_def_label(__Compare___check_hlds__format_call__what_to_print_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__format_call__what_to_print_0_0_i21);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___string__poly_type_0_0);
MR_def_label(__Compare___check_hlds__format_call__what_to_print_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__format_call_module61)
	MR_init_entry1(f_99_104_101_99_107_95_104_108_100_115_95_95_102_111_114_109_97_116_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_106_101_99_116_95_97_108_108_95_121_101_115_95_95_91_49_93_95_48_2_0);
	MR_init_label3(f_99_104_101_99_107_95_104_108_100_115_95_95_102_111_114_109_97_116_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_106_101_99_116_95_97_108_108_95_121_101_115_95_95_91_49_93_95_48_2_0,22,5,1)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__project_all_yes__[1]_0'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_99_104_101_99_107_95_104_108_100_115_95_95_102_111_114_109_97_116_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_106_101_99_116_95_97_108_108_95_121_101_115_95_95_91_49_93_95_48_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_102_111_114_109_97_116_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_106_101_99_116_95_97_108_108_95_121_101_115_95_95_91_49_93_95_48_2_0_i22);
	}
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_102_111_114_109_97_116_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_106_101_99_116_95_97_108_108_95_121_101_115_95_95_91_49_93_95_48_2_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_102_111_114_109_97_116_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_106_101_99_116_95_97_108_108_95_121_101_115_95_95_91_49_93_95_48_2_0_i1);
	}
	MR_sv(1) = MR_ctfield(1, MR_tempr1, 0);
	MR_r1 = MR_ctfield(1, MR_r1, 1);
	}
	MR_np_localcall_lab(f_99_104_101_99_107_95_104_108_100_115_95_95_102_111_114_109_97_116_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_106_101_99_116_95_97_108_108_95_121_101_115_95_95_91_49_93_95_48_2_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_102_111_114_109_97_116_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_106_101_99_116_95_97_108_108_95_121_101_115_95_95_91_49_93_95_48_2_0_i5);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_102_111_114_109_97_116_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_106_101_99_116_95_97_108_108_95_121_101_115_95_95_91_49_93_95_48_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_102_111_114_109_97_116_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_106_101_99_116_95_97_108_108_95_121_101_115_95_95_91_49_93_95_48_2_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(2);
	}
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_102_111_114_109_97_116_95_99_97_108_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_106_101_99_116_95_97_108_108_95_121_101_115_95_95_91_49_93_95_48_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__check_hlds__format_call_maybe_bunch_0(void)
{
	check_hlds__format_call_module0();
	check_hlds__format_call_module1();
	check_hlds__format_call_module2();
	check_hlds__format_call_module3();
	check_hlds__format_call_module4();
	check_hlds__format_call_module5();
	check_hlds__format_call_module6();
	check_hlds__format_call_module7();
	check_hlds__format_call_module8();
	check_hlds__format_call_module9();
	check_hlds__format_call_module10();
	check_hlds__format_call_module11();
	check_hlds__format_call_module12();
	check_hlds__format_call_module13();
	check_hlds__format_call_module14();
	check_hlds__format_call_module15();
	check_hlds__format_call_module16();
	check_hlds__format_call_module17();
	check_hlds__format_call_module18();
	check_hlds__format_call_module19();
	check_hlds__format_call_module20();
	check_hlds__format_call_module21();
	check_hlds__format_call_module22();
	check_hlds__format_call_module23();
	check_hlds__format_call_module24();
	check_hlds__format_call_module25();
	check_hlds__format_call_module26();
	check_hlds__format_call_module27();
	check_hlds__format_call_module28();
	check_hlds__format_call_module29();
	check_hlds__format_call_module30();
	check_hlds__format_call_module31();
	check_hlds__format_call_module32();
	check_hlds__format_call_module33();
	check_hlds__format_call_module34();
	check_hlds__format_call_module35();
	check_hlds__format_call_module36();
	check_hlds__format_call_module37();
	check_hlds__format_call_module38();
	check_hlds__format_call_module39();
}

static void mercury__check_hlds__format_call_maybe_bunch_1(void)
{
	check_hlds__format_call_module40();
	check_hlds__format_call_module41();
	check_hlds__format_call_module42();
	check_hlds__format_call_module43();
	check_hlds__format_call_module44();
	check_hlds__format_call_module45();
	check_hlds__format_call_module46();
	check_hlds__format_call_module47();
	check_hlds__format_call_module48();
	check_hlds__format_call_module49();
	check_hlds__format_call_module50();
	check_hlds__format_call_module51();
	check_hlds__format_call_module52();
	check_hlds__format_call_module53();
	check_hlds__format_call_module54();
	check_hlds__format_call_module55();
	check_hlds__format_call_module56();
	check_hlds__format_call_module57();
	check_hlds__format_call_module58();
	check_hlds__format_call_module59();
	check_hlds__format_call_module60();
	check_hlds__format_call_module61();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__check_hlds__format_call__init(void);
void mercury__check_hlds__format_call__init_type_tables(void);
void mercury__check_hlds__format_call__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__check_hlds__format_call__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__check_hlds__format_call__init_complexity_procs(void);
#endif

void mercury__check_hlds__format_call__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__check_hlds__format_call_maybe_bunch_0();
	mercury__check_hlds__format_call_maybe_bunch_1();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_check_hlds__format_call__type_ctor_info_conj_id_0,
		check_hlds__format_call__conj_id_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_check_hlds__format_call__type_ctor_info_conj_map_0,
		check_hlds__format_call__conj_map_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_check_hlds__format_call__type_ctor_info_conj_maps_0,
		check_hlds__format_call__conj_maps_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_check_hlds__format_call__type_ctor_info_conj_pred_map_0,
		check_hlds__format_call__conj_pred_map_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_check_hlds__format_call__type_ctor_info_eqv_map_0,
		check_hlds__format_call__eqv_map_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_check_hlds__format_call__type_ctor_info_fc_goal_path_map_0,
		check_hlds__format_call__fc_goal_path_map_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_check_hlds__format_call__type_ctor_info_fc_opt_goal_info_0,
		check_hlds__format_call__fc_opt_goal_info_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_check_hlds__format_call__type_ctor_info_follow_skeleton_result_0,
		check_hlds__format_call__follow_skeleton_result_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_check_hlds__format_call__type_ctor_info_format_call_kind_0,
		check_hlds__format_call__format_call_kind_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_check_hlds__format_call__type_ctor_info_format_call_site_0,
		check_hlds__format_call__format_call_site_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_check_hlds__format_call__type_ctor_info_list_element_map_0,
		check_hlds__format_call__list_element_map_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_check_hlds__format_call__type_ctor_info_list_skeleton_map_0,
		check_hlds__format_call__list_skeleton_map_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_check_hlds__format_call__type_ctor_info_list_skeleton_state_0,
		check_hlds__format_call__list_skeleton_state_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_check_hlds__format_call__type_ctor_info_string_component_0,
		check_hlds__format_call__string_component_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_check_hlds__format_call__type_ctor_info_string_map_0,
		check_hlds__format_call__string_map_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_check_hlds__format_call__type_ctor_info_what_to_print_0,
		check_hlds__format_call__what_to_print_0_0);
	mercury__check_hlds__format_call__init_debugger();
}

void mercury__check_hlds__format_call__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_check_hlds__format_call__type_ctor_info_conj_id_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_check_hlds__format_call__type_ctor_info_conj_map_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_check_hlds__format_call__type_ctor_info_conj_maps_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_check_hlds__format_call__type_ctor_info_conj_pred_map_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_check_hlds__format_call__type_ctor_info_eqv_map_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_check_hlds__format_call__type_ctor_info_fc_goal_path_map_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_check_hlds__format_call__type_ctor_info_fc_opt_goal_info_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_check_hlds__format_call__type_ctor_info_follow_skeleton_result_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_check_hlds__format_call__type_ctor_info_format_call_kind_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_check_hlds__format_call__type_ctor_info_format_call_site_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_check_hlds__format_call__type_ctor_info_list_element_map_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_check_hlds__format_call__type_ctor_info_list_skeleton_map_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_check_hlds__format_call__type_ctor_info_list_skeleton_state_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_check_hlds__format_call__type_ctor_info_string_component_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_check_hlds__format_call__type_ctor_info_string_map_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_check_hlds__format_call__type_ctor_info_what_to_print_0);
	}
}


void mercury__check_hlds__format_call__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__check_hlds__format_call__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__check_hlds__format_call);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__check_hlds__format_call__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
